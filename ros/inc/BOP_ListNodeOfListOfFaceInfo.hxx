// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BOP_ListNodeOfListOfFaceInfo_HeaderFile
#define _BOP_ListNodeOfListOfFaceInfo_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_BOP_ListNodeOfListOfFaceInfo_HeaderFile
#include <Handle_BOP_ListNodeOfListOfFaceInfo.hxx>
#endif

#ifndef _BOP_FaceInfo_HeaderFile
#include <BOP_FaceInfo.hxx>
#endif
#ifndef _TCollection_MapNode_HeaderFile
#include <TCollection_MapNode.hxx>
#endif
#ifndef _TCollection_MapNodePtr_HeaderFile
#include <TCollection_MapNodePtr.hxx>
#endif
class BOP_FaceInfo;
class BOP_ListOfFaceInfo;
class BOP_ListIteratorOfListOfFaceInfo;



class BOP_ListNodeOfListOfFaceInfo : public TCollection_MapNode {

public:

  
      BOP_ListNodeOfListOfFaceInfo(const BOP_FaceInfo& I,const TCollection_MapNodePtr& n);
  
        BOP_FaceInfo& Value() const;




  DEFINE_STANDARD_RTTI(BOP_ListNodeOfListOfFaceInfo)

protected:




private: 


BOP_FaceInfo myValue;


};

#define Item BOP_FaceInfo
#define Item_hxx <BOP_FaceInfo.hxx>
#define TCollection_ListNode BOP_ListNodeOfListOfFaceInfo
#define TCollection_ListNode_hxx <BOP_ListNodeOfListOfFaceInfo.hxx>
#define TCollection_ListIterator BOP_ListIteratorOfListOfFaceInfo
#define TCollection_ListIterator_hxx <BOP_ListIteratorOfListOfFaceInfo.hxx>
#define Handle_TCollection_ListNode Handle_BOP_ListNodeOfListOfFaceInfo
#define TCollection_ListNode_Type_() BOP_ListNodeOfListOfFaceInfo_Type_()
#define TCollection_List BOP_ListOfFaceInfo
#define TCollection_List_hxx <BOP_ListOfFaceInfo.hxx>

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