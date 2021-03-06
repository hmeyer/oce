// File:	RWStepDimTol_RWParallelismTolerance.cxx
// Created:	Wed Jun  4 13:34:34 2003 
// Author:	Galina KULIKOVA
// Generator:	ExpToCas (EXPRESS -> CASCADE/XSTEP Translator) V1.2
// Copyright:	Open CASCADE 2002

#include <RWStepDimTol_RWParallelismTolerance.ixx>
#include <StepDimTol_HArray1OfDatumReference.hxx>
#include <StepDimTol_DatumReference.hxx>

//=======================================================================
//function : RWStepDimTol_RWParallelismTolerance
//purpose  : 
//=======================================================================

RWStepDimTol_RWParallelismTolerance::RWStepDimTol_RWParallelismTolerance ()
{
}

//=======================================================================
//function : ReadStep
//purpose  : 
//=======================================================================

void RWStepDimTol_RWParallelismTolerance::ReadStep (const Handle(StepData_StepReaderData)& data,
                                                    const Standard_Integer num,
                                                    Handle(Interface_Check)& ach,
                                                    const Handle(StepDimTol_ParallelismTolerance) &ent) const
{
  // Check number of parameters
  if ( ! data->CheckNbParams(num,5,ach,"parallelism_tolerance") ) return;

  // Inherited fields of GeometricTolerance

  Handle(TCollection_HAsciiString) aGeometricTolerance_Name;
  data->ReadString (num, 1, "geometric_tolerance.name", ach, aGeometricTolerance_Name);

  Handle(TCollection_HAsciiString) aGeometricTolerance_Description;
  data->ReadString (num, 2, "geometric_tolerance.description", ach, aGeometricTolerance_Description);

  Handle(StepBasic_MeasureWithUnit) aGeometricTolerance_Magnitude;
  data->ReadEntity (num, 3, "geometric_tolerance.magnitude", ach, STANDARD_TYPE(StepBasic_MeasureWithUnit), aGeometricTolerance_Magnitude);

  Handle(StepRepr_ShapeAspect) aGeometricTolerance_TolerancedShapeAspect;
  data->ReadEntity (num, 4, "geometric_tolerance.toleranced_shape_aspect", ach, STANDARD_TYPE(StepRepr_ShapeAspect), aGeometricTolerance_TolerancedShapeAspect);

  // Inherited fields of GeometricToleranceWithDatumReference

  Handle(StepDimTol_HArray1OfDatumReference) aGeometricToleranceWithDatumReference_DatumSystem;
  Standard_Integer sub5 = 0;
  if ( data->ReadSubList (num, 5, "geometric_tolerance_with_datum_reference.datum_system", ach, sub5) ) {
    Standard_Integer nb0 = data->NbParams(sub5);
    aGeometricToleranceWithDatumReference_DatumSystem = new StepDimTol_HArray1OfDatumReference (1, nb0);
    Standard_Integer num2 = sub5;
    for ( Standard_Integer i0=1; i0 <= nb0; i0++ ) {
      Handle(StepDimTol_DatumReference) anIt0;
      data->ReadEntity (num2, i0, "datum_reference", ach, STANDARD_TYPE(StepDimTol_DatumReference), anIt0);
      aGeometricToleranceWithDatumReference_DatumSystem->SetValue(i0, anIt0);
    }
  }

  // Initialize entity
  ent->Init(aGeometricTolerance_Name,
            aGeometricTolerance_Description,
            aGeometricTolerance_Magnitude,
            aGeometricTolerance_TolerancedShapeAspect,
            aGeometricToleranceWithDatumReference_DatumSystem);
}

//=======================================================================
//function : WriteStep
//purpose  : 
//=======================================================================

void RWStepDimTol_RWParallelismTolerance::WriteStep (StepData_StepWriter& SW,
                                                     const Handle(StepDimTol_ParallelismTolerance) &ent) const
{

  // Inherited fields of GeometricTolerance

  SW.Send (ent->StepDimTol_GeometricTolerance::Name());

  SW.Send (ent->StepDimTol_GeometricTolerance::Description());

  SW.Send (ent->StepDimTol_GeometricTolerance::Magnitude());

  SW.Send (ent->StepDimTol_GeometricTolerance::TolerancedShapeAspect());

  // Inherited fields of GeometricToleranceWithDatumReference

  SW.OpenSub();
  for (Standard_Integer i4=1; i4 <= ent->StepDimTol_GeometricToleranceWithDatumReference::DatumSystem()->Length(); i4++ ) {
    Handle(StepDimTol_DatumReference) Var0 = ent->StepDimTol_GeometricToleranceWithDatumReference::DatumSystem()->Value(i4);
    SW.Send (Var0);
  }
  SW.CloseSub();
}

//=======================================================================
//function : Share
//purpose  : 
//=======================================================================

void RWStepDimTol_RWParallelismTolerance::Share (const Handle(StepDimTol_ParallelismTolerance) &ent,
                                                 Interface_EntityIterator& iter) const
{

  // Inherited fields of GeometricTolerance

  iter.AddItem (ent->StepDimTol_GeometricTolerance::Magnitude());

  iter.AddItem (ent->StepDimTol_GeometricTolerance::TolerancedShapeAspect());

  // Inherited fields of GeometricToleranceWithDatumReference

  for (Standard_Integer i3=1; i3 <= ent->StepDimTol_GeometricToleranceWithDatumReference::DatumSystem()->Length(); i3++ ) {
    Handle(StepDimTol_DatumReference) Var0 = ent->StepDimTol_GeometricToleranceWithDatumReference::DatumSystem()->Value(i3);
    iter.AddItem (Var0);
  }
}
