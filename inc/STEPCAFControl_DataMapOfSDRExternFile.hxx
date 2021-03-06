// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _STEPCAFControl_DataMapOfSDRExternFile_HeaderFile
#define _STEPCAFControl_DataMapOfSDRExternFile_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BasicMap_HeaderFile
#include <TCollection_BasicMap.hxx>
#endif
#ifndef _Handle_StepShape_ShapeDefinitionRepresentation_HeaderFile
#include <Handle_StepShape_ShapeDefinitionRepresentation.hxx>
#endif
#ifndef _Handle_STEPCAFControl_ExternFile_HeaderFile
#include <Handle_STEPCAFControl_ExternFile.hxx>
#endif
#ifndef _Handle_STEPCAFControl_DataMapNodeOfDataMapOfSDRExternFile_HeaderFile
#include <Handle_STEPCAFControl_DataMapNodeOfDataMapOfSDRExternFile.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_DomainError;
class Standard_NoSuchObject;
class StepShape_ShapeDefinitionRepresentation;
class STEPCAFControl_ExternFile;
class TColStd_MapTransientHasher;
class STEPCAFControl_DataMapNodeOfDataMapOfSDRExternFile;
class STEPCAFControl_DataMapIteratorOfDataMapOfSDRExternFile;



class STEPCAFControl_DataMapOfSDRExternFile  : public TCollection_BasicMap {
public:

  void* operator new(size_t,void* anAddress) 
  {
    return anAddress;
  }
  void* operator new(size_t size) 
  {
    return Standard::Allocate(size); 
  }
  void  operator delete(void *anAddress) 
  {
    if (anAddress) Standard::Free((Standard_Address&)anAddress); 
  }

  
  Standard_EXPORT   STEPCAFControl_DataMapOfSDRExternFile(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT     STEPCAFControl_DataMapOfSDRExternFile& Assign(const STEPCAFControl_DataMapOfSDRExternFile& Other) ;
    STEPCAFControl_DataMapOfSDRExternFile& operator =(const STEPCAFControl_DataMapOfSDRExternFile& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void ReSize(const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT     void Clear() ;
~STEPCAFControl_DataMapOfSDRExternFile()
{
  Clear();
}
  
  Standard_EXPORT     Standard_Boolean Bind(const Handle(StepShape_ShapeDefinitionRepresentation)& K,const Handle(STEPCAFControl_ExternFile)& I) ;
  
  Standard_EXPORT     Standard_Boolean IsBound(const Handle(StepShape_ShapeDefinitionRepresentation)& K) const;
  
  Standard_EXPORT     Standard_Boolean UnBind(const Handle(StepShape_ShapeDefinitionRepresentation)& K) ;
  
  Standard_EXPORT    const Handle_STEPCAFControl_ExternFile& Find(const Handle(StepShape_ShapeDefinitionRepresentation)& K) const;
   const Handle_STEPCAFControl_ExternFile& operator()(const Handle(StepShape_ShapeDefinitionRepresentation)& K) const
{
  return Find(K);
}
  
  Standard_EXPORT     Handle_STEPCAFControl_ExternFile& ChangeFind(const Handle(StepShape_ShapeDefinitionRepresentation)& K) ;
    Handle_STEPCAFControl_ExternFile& operator()(const Handle(StepShape_ShapeDefinitionRepresentation)& K) 
{
  return ChangeFind(K);
}





protected:





private:

  
  Standard_EXPORT   STEPCAFControl_DataMapOfSDRExternFile(const STEPCAFControl_DataMapOfSDRExternFile& Other);




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
