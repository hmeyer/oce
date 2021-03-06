// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepFEA_ElementGeometricRelationship_HeaderFile
#define _StepFEA_ElementGeometricRelationship_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepFEA_ElementGeometricRelationship_HeaderFile
#include <Handle_StepFEA_ElementGeometricRelationship.hxx>
#endif

#ifndef _StepFEA_ElementOrElementGroup_HeaderFile
#include <StepFEA_ElementOrElementGroup.hxx>
#endif
#ifndef _Handle_StepElement_AnalysisItemWithinRepresentation_HeaderFile
#include <Handle_StepElement_AnalysisItemWithinRepresentation.hxx>
#endif
#ifndef _StepElement_ElementAspect_HeaderFile
#include <StepElement_ElementAspect.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
class StepElement_AnalysisItemWithinRepresentation;
class StepFEA_ElementOrElementGroup;
class StepElement_ElementAspect;


//! Representation of STEP entity ElementGeometricRelationship <br>
class StepFEA_ElementGeometricRelationship : public MMgt_TShared {

public:

  //! Empty constructor <br>
  Standard_EXPORT   StepFEA_ElementGeometricRelationship();
  //! Initialize all fields (own and inherited) <br>
  Standard_EXPORT     void Init(const StepFEA_ElementOrElementGroup& aElementRef,const Handle(StepElement_AnalysisItemWithinRepresentation)& aItem,const StepElement_ElementAspect& aAspect) ;
  //! Returns field ElementRef <br>
  Standard_EXPORT     StepFEA_ElementOrElementGroup ElementRef() const;
  //! Set field ElementRef <br>
  Standard_EXPORT     void SetElementRef(const StepFEA_ElementOrElementGroup& ElementRef) ;
  //! Returns field Item <br>
  Standard_EXPORT     Handle_StepElement_AnalysisItemWithinRepresentation Item() const;
  //! Set field Item <br>
  Standard_EXPORT     void SetItem(const Handle(StepElement_AnalysisItemWithinRepresentation)& Item) ;
  //! Returns field Aspect <br>
  Standard_EXPORT     StepElement_ElementAspect Aspect() const;
  //! Set field Aspect <br>
  Standard_EXPORT     void SetAspect(const StepElement_ElementAspect& Aspect) ;




  DEFINE_STANDARD_RTTI(StepFEA_ElementGeometricRelationship)

protected:




private: 


StepFEA_ElementOrElementGroup theElementRef;
Handle_StepElement_AnalysisItemWithinRepresentation theItem;
StepElement_ElementAspect theAspect;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
