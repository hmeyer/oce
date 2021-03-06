//--------------------------------------------------------------------
//
//  File Name : IGESGeom_Direction.cxx
//  Date      :
//  Author    : CKY / Contract Toubro-Larsen
//  Copyright : MATRA-DATAVISION 1993
//
//--------------------------------------------------------------------

#include <IGESGeom_ToolDirection.ixx>
#include <IGESData_ParamCursor.hxx>
#include <gp_XY.hxx>
#include <gp_XYZ.hxx>
#include <gp_Vec.hxx>
#include <IGESData_Dump.hxx>
#include <Interface_Macros.hxx>


IGESGeom_ToolDirection::IGESGeom_ToolDirection ()    {  }


void IGESGeom_ToolDirection::ReadOwnParams
  (const Handle(IGESGeom_Direction)& ent,
   const Handle(IGESData_IGESReaderData)& /* IR */, IGESData_ParamReader& PR) const
{
  gp_XYZ aDirection;
  gp_XY  tmpXY;
  //Standard_Boolean st; //szv#4:S4163:12Mar99 not needed
  Standard_Real tmpReal;

  //st = PR.ReadXY(PR.CurrentList(1, 2), "Direction", tmpXY); //szv#4:S4163:12Mar99 moved in if
  if (PR.ReadXY(PR.CurrentList(1, 2), "Direction", tmpXY)) {
    aDirection.SetX(tmpXY.X());
    aDirection.SetY(tmpXY.Y());
  }

  if (PR.DefinedElseSkip())
    {
      //st = PR.ReadReal(PR.Current(), "Direction", tmpReal); //szv#4:S4163:12Mar99 moved in if
      if (PR.ReadReal(PR.Current(), "Direction", tmpReal))
	aDirection.SetZ(tmpReal);
    }
  else
    {
      aDirection.SetZ(0.0);   // Default value.
    }

  DirChecker(ent).CheckTypeAndForm(PR.CCheck(),ent);
  ent->Init(aDirection);
}

void IGESGeom_ToolDirection::WriteOwnParams
  (const Handle(IGESGeom_Direction)& ent, IGESData_IGESWriter& IW)  const
{
  IW.Send(ent->Value().X());
  IW.Send(ent->Value().Y());
  IW.Send(ent->Value().Z());
}

void  IGESGeom_ToolDirection::OwnShared
  (const Handle(IGESGeom_Direction)& /* ent */, Interface_EntityIterator& /* iter */) const
{
}

void IGESGeom_ToolDirection::OwnCopy
  (const Handle(IGESGeom_Direction)& another,
   const Handle(IGESGeom_Direction)& ent, Interface_CopyTool& /* TC */) const
{
  ent->Init(another->Value().XYZ());
}

IGESData_DirChecker IGESGeom_ToolDirection::DirChecker
  (const Handle(IGESGeom_Direction)& /* ent */ )  const
{
  IGESData_DirChecker DC(123, 0);
  DC.Structure(IGESData_DefVoid);
  DC.LineFont(IGESData_DefAny);
//  DC.LineWeight(IGESData_DefValue);
  DC.Color(IGESData_DefAny);

  DC.BlankStatusIgnored ();
  DC.SubordinateStatusRequired (1);
  DC.UseFlagRequired (2);
  DC.HierarchyStatusIgnored ();
  return DC;
}

void IGESGeom_ToolDirection::OwnCheck
  (const Handle(IGESGeom_Direction)& ent,
   const Interface_ShareTool& , Handle(Interface_Check)& ach)  const
{
  if (ent->Value().XYZ().SquareModulus() <= 0.0)
    ach->AddFail("Direction : The values indicate no direction");
}

void IGESGeom_ToolDirection::OwnDump
  (const Handle(IGESGeom_Direction)& ent, const IGESData_IGESDumper& /* dumper */,
   const Handle(Message_Messenger)& S, const Standard_Integer level)  const
{
  S << "IGESGeom_Direction" << endl << endl;

  S << "Value : ";
  IGESData_DumpXYZL(S,level, ent->Value(), ent->VectorLocation());
  S << endl;
}
