// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _SelectBasics_ListNodeOfListOfSensitive_HeaderFile
#define _SelectBasics_ListNodeOfListOfSensitive_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_SelectBasics_ListNodeOfListOfSensitive_HeaderFile
#include <Handle_SelectBasics_ListNodeOfListOfSensitive.hxx>
#endif

#ifndef _Handle_SelectBasics_SensitiveEntity_HeaderFile
#include <Handle_SelectBasics_SensitiveEntity.hxx>
#endif
#ifndef _TCollection_MapNode_HeaderFile
#include <TCollection_MapNode.hxx>
#endif
#ifndef _TCollection_MapNodePtr_HeaderFile
#include <TCollection_MapNodePtr.hxx>
#endif
class SelectBasics_SensitiveEntity;
class SelectBasics_ListOfSensitive;
class SelectBasics_ListIteratorOfListOfSensitive;



class SelectBasics_ListNodeOfListOfSensitive : public TCollection_MapNode {

public:

  
      SelectBasics_ListNodeOfListOfSensitive(const Handle(SelectBasics_SensitiveEntity)& I,const TCollection_MapNodePtr& n);
  
        Handle_SelectBasics_SensitiveEntity& Value() const;




  DEFINE_STANDARD_RTTI(SelectBasics_ListNodeOfListOfSensitive)

protected:




private: 


Handle_SelectBasics_SensitiveEntity myValue;


};

#define Item Handle_SelectBasics_SensitiveEntity
#define Item_hxx <SelectBasics_SensitiveEntity.hxx>
#define TCollection_ListNode SelectBasics_ListNodeOfListOfSensitive
#define TCollection_ListNode_hxx <SelectBasics_ListNodeOfListOfSensitive.hxx>
#define TCollection_ListIterator SelectBasics_ListIteratorOfListOfSensitive
#define TCollection_ListIterator_hxx <SelectBasics_ListIteratorOfListOfSensitive.hxx>
#define Handle_TCollection_ListNode Handle_SelectBasics_ListNodeOfListOfSensitive
#define TCollection_ListNode_Type_() SelectBasics_ListNodeOfListOfSensitive_Type_()
#define TCollection_List SelectBasics_ListOfSensitive
#define TCollection_List_hxx <SelectBasics_ListOfSensitive.hxx>

#include <TCollection_ListNode.lxx>

#undef Item
#undef Item_hxx
#undef TCollection_ListNode
#undef TCollection_ListNode_hxx
#undef TCollection_ListIterator
#undef TCollection_ListIterator_hxx
#undef Handle_TCollection_ListNode
#undef TCollection_ListNode_Type_
#undef TCollection_List
#undef TCollection_List_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif