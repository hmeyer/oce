// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Geom2dLProp_CurAndInf2d_HeaderFile
#define _Geom2dLProp_CurAndInf2d_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _LProp_CurAndInf_HeaderFile
#include <LProp_CurAndInf.hxx>
#endif
#ifndef _Handle_Geom2d_Curve_HeaderFile
#include <Handle_Geom2d_Curve.hxx>
#endif
class Geom2d_Curve;


//! An algorithm for computing local properties of a curve. <br>
//! These properties include: <br>
//! - the maximum and minimum curvatures <br>
//! - the inflection points. <br>
//!   A CurAndInf2d object provides the framework for: <br>
//! - defining the curve to be analyzed <br>
//! - implementing the computation algorithms <br>
//! - consulting the results. <br>
class Geom2dLProp_CurAndInf2d  : public LProp_CurAndInf {
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

  //! Initializes the framework. <br>
//! Note: The curve on which the local properties are <br>
//! computed is defined using one of the following <br>
//! functions: Perform, PerformCurExt or PerformInf. <br>
  Standard_EXPORT   Geom2dLProp_CurAndInf2d();
  //! For the curve C, Computes both the <br>
//!  inflection points and the maximum and minimum curvatures. <br>
  Standard_EXPORT     void Perform(const Handle(Geom2d_Curve)& C) ;
  //! For the curve C, Computes the locals extremas of curvature. <br>
  Standard_EXPORT     void PerformCurExt(const Handle(Geom2d_Curve)& C) ;
  //! For the curve C, Computes the inflections. <br>
//! After computation, the following functions can be used: <br>
//! - IsDone to check if the computation was successful <br>
//! - NbPoints to obtain the number of computed particular points <br>
//! - Parameter to obtain the parameter on the curve for <br>
//!   each particular point <br>
//! - Type to check if the point is an inflection point or an <br>
//!   extremum of curvature of the curve C. <br>
//!   Warning <br>
//! These functions can be used to analyze a series of <br>
//! curves, however it is necessary to clear the table of <br>
//! results between each computation. <br>
  Standard_EXPORT     void PerformInf(const Handle(Geom2d_Curve)& C) ;
  //! True if the solutions are found. <br>
  Standard_EXPORT     Standard_Boolean IsDone() const;





protected:





private:



Standard_Boolean isDone;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
