
/* from: libgsclient:GSFriendsLIB.cpp
   addr: 005AC300
   addr: 005AC300
   addr: 005AC300 */

void __thiscall CGLSessionLib::FixCallbacks(CGLSessionLib *this,clSessionCallbacks *param_1)

{
  int iVar1;
  undefined4 unaff_retaddr;
  
  if (this[0x14] != (CGLSessionLib)0x0) {
    this[0x14] = (CGLSessionLib)0x1;
    *(clSessionCallbacks **)(this + 0x10) = param_1;
    return;
  }
  iVar1 = *(int *)(this + 0x10);
  if (iVar1 != 0) {
    (*(code *)**(undefined4 **)(*(int *)(*(int *)(iVar1 + 4) + 8) + 4 + iVar1))(1);
    this[0x14] = (CGLSessionLib)0x1;
    *(undefined4 *)(this + 0x10) = unaff_retaddr;
    return;
  }
  this[0x14] = (CGLSessionLib)0x1;
  *(clSessionCallbacks **)(this + 0x10) = param_1;
  return;
}




/* from: libgsclient:GSFriendsLIB.cpp
   addr: 005AC350
   addr: 005AC350 */

void __thiscall CGLFriendsLib::GetNewCurMessage(CGLFriendsLib *this,int param_1)

{
  clRcvElement *this_00;
  CCurMessage *pCVar1;
  
  this_00 = *(clRcvElement **)(this + 4);
  if (this_00 != (clRcvElement *)0x0) {
    clRcvElement::~clRcvElement(this_00);
    ExtAlloc_Free_4(this_00);
    *(undefined4 *)(this + 4) = 0;
  }
  pCVar1 = CMsgQueue::GetMessageA(*(CMsgQueue **)(this + 0xc),(ushort)param_1);
  *(CCurMessage **)(this + 4) = pCVar1;
  return;
}




/* from: libgsclient:GSFriendsLIB.cpp
   addr: 005AC390 */

uchar __thiscall
CGLFriendsLib::GLDecodeRcv_Result(CGLFriendsLib *this,uchar param_1,uchar *param_2,int *param_3)

{
  uchar *puVar1;
  uchar uVar2;
  undefined1 uVar3;
  undefined **local_28;
  undefined4 *local_24;
  undefined4 local_20;
  undefined **local_1c;
  list<class_clData*> local_18 [4];
  undefined8 *local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puVar1 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005caf04;
  local_c = ExceptionList;
  if (*(int *)(this + 4) != 0) {
    uVar2 = *(uchar *)(*(int *)(this + 4) + 4);
    ExceptionList = &local_c;
    *param_2 = uVar2;
    if ((((uVar2 == '&') || (uVar2 == '\'')) &&
        (uVar2 = clDataList::GetIndex(*(clDataList **)(*(int *)(this + 4) + 8),&param_2,1,0),
        uVar2 != '\0')) && ((uchar)param_2 == param_1)) {
      if (*puVar1 != '\'') {
        ExceptionList = local_c;
        return '\x01';
      }
      local_24 = &clDataList::_vbtable__for__clData__;
      local_14 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
      local_20 = 3;
      local_28 = &clData::_vftable_;
      local_4 = 1;
      ExtAlloc::list<class_clData*>::list<class_clData*>(local_18);
      local_1c = &clDataList::_vftable__for__clPointerList<class_clData*>__;
      local_28 = &clDataList::_vftable__for__clData__;
      local_4 = 3;
      uVar2 = clDataList::GetIndex
                        (*(clDataList **)(*(int *)(this + 4) + 8),(clDataList *)&local_28,1);
      if (uVar2 == '\0') {
        uVar3 = 4;
        local_4._0_1_ = 5;
      }
      else {
        uVar2 = clDataList::GetIndex((clDataList *)&local_28,param_3,4,0);
        local_28 = &clDataList::_vftable__for__clData__;
        if (uVar2 != '\0') {
          local_1c = &clPointerList<class_clData*>::_vftable_;
          local_4._0_1_ = 9;
          local_4._1_3_ = 0;
          clPointerList<class_clRcvElement*>::clear((clPointerList<class_clRcvElement*> *)&local_1c)
          ;
          local_4 = CONCAT31(local_4._1_3_,8);
          ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
                    ((list<class_clRcvElement*> *)local_18);
          ExceptionList = local_c;
          return '\x01';
        }
        uVar3 = 6;
        local_4._0_1_ = 7;
      }
      local_4._1_3_ = 0;
      local_1c = &clPointerList<class_clData*>::_vftable_;
      local_28 = &clDataList::_vftable__for__clData__;
      clPointerList<class_clRcvElement*>::clear((clPointerList<class_clRcvElement*> *)&local_1c);
      local_4 = CONCAT31(local_4._1_3_,uVar3);
      ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
                ((list<class_clRcvElement*> *)local_18);
    }
  }
  ExceptionList = local_c;
  return '\0';
}




/* from: libgsclient:GSFriendsLIB.cpp
   addr: 005AC550
   addr: 005AC550 */

uchar __thiscall
CGLFriendsLib::Friends_Init(CGLFriendsLib *this,CConnection *param_1,CMsgQueue *param_2)

{
  if (*(int *)(this + 8) != 0) {
    return '\0';
  }
  *(CConnection **)(this + 8) = param_1;
  *(CMsgQueue **)(this + 0xc) = param_2;
  return '\x01';
}




/* from: libgsclient:GSFriendsLIB.cpp
   addr: 005AC570 */

uchar __thiscall CGLFriendsLib::FriendsSend_Disconnection(CGLFriendsLib *this)

{
  Allocator<class_clProxyMessage*> local_2d;
  undefined ***local_2c;
  _Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
  **local_28;
  undefined **local_24;
  undefined4 *local_20;
  undefined4 local_1c;
  undefined **local_18;
  _Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
  *local_14;
  undefined8 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005caf5f;
  local_c = ExceptionList;
  local_2c = (undefined ***)0x0;
  if (*(int *)(this + 8) == 0) {
    return '\0';
  }
  local_20 = &clDataList::_vbtable__for__clData__;
  local_10 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
  local_1c = 3;
  local_24 = &clData::_vftable_;
  local_4 = 1;
  ExceptionList = &local_c;
  _STL::_List_base<class_clProxyMessage*,class_ExtAlloc::Allocator<class_clProxyMessage*>_>::
  List_base<class_clProxyMessage*,class_ExtAlloc::Allocator<class_clProxyMessage*>_>
            ((_List_base<class_clProxyMessage*,class_ExtAlloc::Allocator<class_clProxyMessage*>_> *)
             &local_14,&local_2d);
  local_24 = &clDataList::_vftable__for__clData__;
  local_18 = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_4 = 2;
  CConnection::SendMessageA(*(CConnection **)(this + 8),'\\','\x01',(clDataList *)&local_24);
  local_24 = &clDataList::_vftable__for__clData__;
  local_2c = &local_18;
  local_18 = &clPointerList<class_clData*>::_vftable_;
  local_4._0_1_ = 4;
  local_4._1_3_ = 0;
  clPointerList<class_clRcvElement*>::clear((clPointerList<class_clRcvElement*> *)&local_18);
  local_28 = &local_14;
  local_4 = CONCAT31(local_4._1_3_,5);
  _STL::_List_base<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_>::clear
            ((_List_base<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_> *)
             &local_14);
  _STL::
  _STLP_alloc_proxy<struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>*,struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
  ::deallocate((_STLP_alloc_proxy<struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>*,struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
                *)&local_14,local_14,1);
  ExceptionList = local_c;
  return '\x01';
}




/* from: libgsclient:GSFriendsLIB.cpp
   addr: 005AC680 */

uchar __thiscall CGLFriendsLib::FriendsSend_Login(CGLFriendsLib *this,int param_1,int param_2)

{
  Allocator<class_clProxyMessage*> local_2d;
  undefined ***local_2c;
  _Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
  **local_28;
  undefined **local_24;
  undefined4 *local_20;
  undefined4 local_1c;
  undefined **local_18;
  _Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
  *local_14;
  undefined8 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005cafbf;
  local_c = ExceptionList;
  local_2c = (undefined ***)0x0;
  if (*(int *)(this + 8) == 0) {
    return '\0';
  }
  local_20 = &clDataList::_vbtable__for__clData__;
  local_10 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
  local_1c = 3;
  local_24 = &clData::_vftable_;
  local_4 = 1;
  ExceptionList = &local_c;
  _STL::_List_base<class_clProxyMessage*,class_ExtAlloc::Allocator<class_clProxyMessage*>_>::
  List_base<class_clProxyMessage*,class_ExtAlloc::Allocator<class_clProxyMessage*>_>
            ((_List_base<class_clProxyMessage*,class_ExtAlloc::Allocator<class_clProxyMessage*>_> *)
             &local_14,&local_2d);
  local_24 = &clDataList::_vftable__for__clData__;
  local_18 = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_4 = 2;
  clDataList::Add((clDataList *)&local_24,&param_1,4);
  clDataList::Add((clDataList *)&local_24,&param_2,4);
  CConnection::SendMessageA(*(CConnection **)(this + 8),'N','\x01',(clDataList *)&local_24);
  local_24 = &clDataList::_vftable__for__clData__;
  local_2c = &local_18;
  local_18 = &clPointerList<class_clData*>::_vftable_;
  local_4._0_1_ = 4;
  local_4._1_3_ = 0;
  clPointerList<class_clRcvElement*>::clear((clPointerList<class_clRcvElement*> *)&local_18);
  local_28 = &local_14;
  local_4 = CONCAT31(local_4._1_3_,5);
  _STL::_List_base<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_>::clear
            ((_List_base<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_> *)
             &local_14);
  _STL::
  _STLP_alloc_proxy<struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>*,struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
  ::deallocate((_STLP_alloc_proxy<struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>*,struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
                *)&local_14,local_14,1);
  ExceptionList = local_c;
  return '\x01';
}




/* from: libgsclient:GSFriendsLIB.cpp
   addr: 005AC7B0 */

uchar __thiscall
CGLFriendsLib::FriendsRcv_LoginResult(CGLFriendsLib *this,uchar *param_1,int *param_2)

{
  uchar uVar1;
  
  GetNewCurMessage(this,0x4e);
  uVar1 = GLDecodeRcv_Result(this,'N',param_1,param_2);
  return uVar1 != '\0';
}




/* from: libgsclient:GSFriendsLIB.cpp
   addr: 005AC7E0 */

uchar __thiscall
CGLFriendsLib::FriendsRcv_AddFriend(CGLFriendsLib *this,uchar *param_1,int *param_2,char *param_3)

{
  uchar uVar1;
  CGLFriendsLib *local_4;
  
  local_4 = this;
  GetNewCurMessage(this,0x4b);
  uVar1 = GLDecodeRcv_Result(this,'K',param_1,param_2);
  if (uVar1 == '\0') {
    return '\0';
  }
  if (*param_1 != '\'') {
    uVar1 = clDataList::GetIndex(*(clDataList **)(*(int *)(this + 4) + 8),(clDataStr **)&local_4,1);
    if (uVar1 == '\0') {
      return '\0';
    }
    GLCopyString(this,param_3,*(char **)(local_4 + 0xc));
  }
  return '\x01';
}




/* from: libgsclient:GSFriendsLIB.cpp
   addr: 005AC850 */

uchar __thiscall
CGLFriendsLib::FriendsRcv_DelFriend(CGLFriendsLib *this,uchar *param_1,int *param_2,char *param_3)

{
  uchar uVar1;
  CGLFriendsLib *local_4;
  
  local_4 = this;
  GetNewCurMessage(this,0x4c);
  uVar1 = GLDecodeRcv_Result(this,'L',param_1,param_2);
  if (uVar1 == '\0') {
    return '\0';
  }
  if (*param_1 != '\'') {
    uVar1 = clDataList::GetIndex(*(clDataList **)(*(int *)(this + 4) + 8),(clDataStr **)&local_4,1);
    if (uVar1 == '\0') {
      return '\0';
    }
    GLCopyString(this,param_3,*(char **)(local_4 + 0xc));
  }
  return '\x01';
}




/* from: libgsclient:GSFriendsLIB.cpp
   addr: 005AC8C0 */

uchar __thiscall
CGLFriendsLib::FriendsRcv_GetSession
          (CGLFriendsLib *this,uchar *param_1,int *param_2,char *param_3,char *param_4,int *param_5,
          int *param_6,int *param_7,int *param_8,int *param_9,int *param_10,char *param_11,
          int *param_12,char *param_13,char *param_14)

{
  uchar uVar1;
  undefined **local_24;
  undefined4 *local_20;
  undefined **local_18 [2];
  undefined8 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005cb000;
  local_c = ExceptionList;
  local_20 = &clDataList::_vbtable__for__clData__;
  local_10 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
  ExceptionList = &local_c;
  clData::clData((clData *)&local_24,3);
  local_4 = 0;
  clPointerList<class_clData*>::clPointerList<class_clData*>
            ((clPointerList<class_clData*> *)local_18);
  local_24 = &clDataList::_vftable__for__clData__;
  local_18[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_4 = 1;
  GetNewCurMessage(this,0x57);
  uVar1 = GLDecodeRcv_Result(this,'W',param_1,param_2);
  if (uVar1 != '\0') {
    if (*param_1 == '\'') {
      local_4 = 0xffffffff;
      clDataList::~clDataList((clDataList *)&local_24);
      ExceptionList = local_c;
      return '\x01';
    }
    uVar1 = clDataList::GetIndex(*(clDataList **)(*(int *)(this + 4) + 8),(clDataList *)&local_24,1)
    ;
    if ((uVar1 != '\0') &&
       (uVar1 = clDataList::GetIndex((clDataList *)&local_24,param_3,0), uVar1 != '\0')) {
      uVar1 = clDataList::GetIndex((clDataList *)&local_24,param_4,1);
      if (uVar1 != '\0') {
        uVar1 = clDataList::GetIndex((clDataList *)&local_24,param_5,4,2);
        if ((uVar1 != '\0') &&
           (uVar1 = clDataList::GetIndex((clDataList *)&local_24,param_6,4,3), uVar1 != '\0')) {
          uVar1 = clDataList::GetIndex((clDataList *)&local_24,param_7,4,4);
          if (uVar1 == '\0') {
            local_24 = &clDataList::_vftable__for__clData__;
            local_18[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
            local_4 = 2;
            clPointerList<class_clData*>::~clPointerList<class_clData*>
                      ((clPointerList<class_clData*> *)local_18);
            ExceptionList = local_c;
            return '\0';
          }
          uVar1 = clDataList::GetIndex((clDataList *)&local_24,param_8,4,5);
          if (uVar1 == '\0') {
            local_4 = 0xffffffff;
            clDataList::~clDataList((clDataList *)&local_24);
            ExceptionList = local_c;
            return '\0';
          }
          uVar1 = clDataList::GetIndex((clDataList *)&local_24,param_9,4,6);
          if (uVar1 == '\0') {
            local_24 = &clDataList::_vftable__for__clData__;
            local_18[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
            local_4 = 3;
            clPointerList<class_clData*>::~clPointerList<class_clData*>
                      ((clPointerList<class_clData*> *)local_18);
            ExceptionList = local_c;
            return '\0';
          }
          uVar1 = clDataList::GetIndex((clDataList *)&local_24,param_10,4,7);
          if (uVar1 == '\0') {
            local_4 = 0xffffffff;
            clDataList::~clDataList((clDataList *)&local_24);
            ExceptionList = local_c;
            return '\0';
          }
          uVar1 = clDataList::GetIndex((clDataList *)&local_24,param_11,8);
          if (uVar1 == '\0') {
            local_4 = 0xffffffff;
            clDataList::~clDataList((clDataList *)&local_24);
            ExceptionList = local_c;
            return '\0';
          }
          uVar1 = clDataList::GetIndex((clDataList *)&local_24,param_12,4,9);
          if (uVar1 == '\0') {
            local_24 = &clDataList::_vftable__for__clData__;
            local_18[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
            local_4 = 4;
            clPointerList<class_clData*>::~clPointerList<class_clData*>
                      ((clPointerList<class_clData*> *)local_18);
            ExceptionList = local_c;
            return '\0';
          }
          uVar1 = clDataList::GetIndex((clDataList *)&local_24,param_13,10);
          if (uVar1 == '\0') {
            local_4 = 0xffffffff;
            clDataList::~clDataList((clDataList *)&local_24);
            ExceptionList = local_c;
            return '\0';
          }
          uVar1 = clDataList::GetIndex((clDataList *)&local_24,param_14,0xb);
          if (uVar1 != '\0') {
            local_24 = &clDataList::_vftable__for__clData__;
            local_18[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
            local_4 = 5;
            clPointerList<class_clData*>::~clPointerList<class_clData*>
                      ((clPointerList<class_clData*> *)local_18);
            ExceptionList = local_c;
            return '\x01';
          }
        }
      }
    }
  }
  local_4 = 0xffffffff;
  clDataList::~clDataList((clDataList *)&local_24);
  ExceptionList = local_c;
  return '\0';
}




/* from: libgsclient:GSFriendsLIB.cpp
   addr: 005ACC20 */

uchar __thiscall
CGLFriendsLib::FriendsRcv_GetWebBased(CGLFriendsLib *this,char *param_1,char *param_2)

{
  int iVar1;
  uchar uVar2;
  
  GetNewCurMessage(this,200);
  iVar1 = *(int *)(this + 4);
  if (iVar1 == 0) {
    return '\0';
  }
  if (*(char *)(iVar1 + 4) != -0x38) {
    return '\0';
  }
  uVar2 = clDataList::GetIndex(*(clDataList **)(iVar1 + 8),param_1,0);
  if (uVar2 == '\0') {
    return '\0';
  }
  uVar2 = clDataList::GetIndex(*(clDataList **)(*(int *)(this + 4) + 8),param_2,1);
  return uVar2 != '\0';
}




/* from: libgsclient:GSFriendsLIB.cpp
   addr: 005ACC80 */

uchar __thiscall
CGLFriendsLib::FriendsRcv_Page(CGLFriendsLib *this,char *param_1,char *param_2,char *param_3)

{
  int iVar1;
  uchar uVar2;
  clDataStr *local_c;
  clDataStr *local_8;
  clDataStr *local_4;
  
  GetNewCurMessage(this,0x65);
  iVar1 = *(int *)(this + 4);
  if (iVar1 == 0) {
    return '\0';
  }
  if (*(char *)(iVar1 + 4) != 'e') {
    return '\0';
  }
  uVar2 = clDataList::GetIndex(*(clDataList **)(iVar1 + 8),&local_c,0);
  if (uVar2 == '\0') {
    return '\0';
  }
  GLCopyString(this,param_1,*(char **)(local_c + 0xc));
  uVar2 = clDataList::GetIndex(*(clDataList **)(*(int *)(this + 4) + 8),&local_8,1);
  if (uVar2 == '\0') {
    return '\0';
  }
  GLCopyString(this,param_2,*(char **)(local_8 + 0xc));
  uVar2 = clDataList::GetIndex(*(clDataList **)(*(int *)(this + 4) + 8),&local_4,2);
  if (uVar2 == '\0') {
    return '\0';
  }
  GLCopyString(this,param_3,*(char **)(local_4 + 0xc));
  return '\x01';
}




/* from: libgsclient:GSFriendsLIB.cpp
   addr: 005ACD50 */

uchar __thiscall
CGLFriendsLib::FriendsRcv_PagePlayer(CGLFriendsLib *this,uchar *param_1,int *param_2,char *param_3)

{
  uchar uVar1;
  clDataStr *local_28;
  undefined **local_24;
  undefined4 *local_20;
  undefined4 local_1c;
  undefined **local_18;
  list<class_clRcvElement*> local_14 [4];
  undefined8 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005cb077;
  local_c = ExceptionList;
  local_28 = (clDataStr *)0x0;
  local_20 = &clDataList::_vbtable__for__clData__;
  local_10 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
  local_1c = 3;
  local_24 = &clData::_vftable_;
  local_4 = 0;
  ExceptionList = &local_c;
  clPointerList<class_clData*>::clPointerList<class_clData*>
            ((clPointerList<class_clData*> *)&local_18);
  local_18 = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_24 = &clDataList::_vftable__for__clData__;
  local_4 = 1;
  GetNewCurMessage(this,0x58);
  uVar1 = GLDecodeRcv_Result(this,'X',param_1,param_2);
  if (uVar1 == '\0') {
    local_24 = &clDataList::_vftable__for__clData__;
    local_18 = &clDataList::_vftable__for__clPointerList<class_clData*>__;
    local_4 = 2;
    clPointerList<class_clData*>::~clPointerList<class_clData*>
              ((clPointerList<class_clData*> *)&local_18);
    ExceptionList = local_c;
    return '\0';
  }
  if (*param_1 == '&') {
    uVar1 = clDataList::GetIndex(*(clDataList **)(*(int *)(this + 4) + 8),&local_28,1);
    if (uVar1 == '\0') {
      local_24 = &clDataList::_vftable__for__clData__;
      local_18 = &clDataList::_vftable__for__clPointerList<class_clData*>__;
      local_4 = 3;
      clPointerList<class_clData*>::~clPointerList<class_clData*>
                ((clPointerList<class_clData*> *)&local_18);
      ExceptionList = local_c;
      return '\0';
    }
    GLCopyString(this,param_3,*(char **)(local_28 + 0xc));
    local_24 = &clDataList::_vftable__for__clData__;
    local_18 = &clDataList::_vftable__for__clPointerList<class_clData*>__;
    local_4 = 4;
    clPointerList<class_clData*>::~clPointerList<class_clData*>
              ((clPointerList<class_clData*> *)&local_18);
  }
  else {
    uVar1 = clDataList::GetIndex(*(clDataList **)(*(int *)(this + 4) + 8),(clDataList *)&local_24,1)
    ;
    if (uVar1 == '\0') {
      local_24 = &clDataList::_vftable__for__clData__;
      local_18 = &clDataList::_vftable__for__clPointerList<class_clData*>__;
      local_4 = 5;
      clPointerList<class_clData*>::~clPointerList<class_clData*>
                ((clPointerList<class_clData*> *)&local_18);
      ExceptionList = local_c;
      return '\0';
    }
    uVar1 = clDataList::GetIndex((clDataList *)&local_24,&local_28,1);
    if (uVar1 == '\0') {
      local_24 = &clDataList::_vftable__for__clData__;
      local_18 = &clDataList::_vftable__for__clPointerList<class_clData*>__;
      local_4 = 6;
      clPointerList<class_clData*>::~clPointerList<class_clData*>
                ((clPointerList<class_clData*> *)&local_18);
      ExceptionList = local_c;
      return '\0';
    }
    GLCopyString(this,param_3,*(char **)(local_28 + 0xc));
    local_24 = &clDataList::_vftable__for__clData__;
    local_18 = &clPointerList<class_clData*>::_vftable_;
    local_4._0_1_ = 8;
    local_4._1_3_ = 0;
    clPointerList<class_clRcvElement*>::clear((clPointerList<class_clRcvElement*> *)&local_18);
    local_4 = CONCAT31(local_4._1_3_,7);
    ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>(local_14);
  }
  ExceptionList = local_c;
  return '\x01';
}




/* from: libgsclient:GSFriendsLIB.cpp
   addr: 005ACF90 */

uchar __thiscall
CGLFriendsLib::FriendsRcv_PeerMsg(CGLFriendsLib *this,char *param_1,void **param_2,uint *param_3)

{
  int iVar1;
  uchar uVar2;
  void *pvVar3;
  clDataStr *local_28;
  undefined **local_24;
  undefined4 *local_20;
  undefined4 local_1c;
  undefined **local_18 [2];
  undefined8 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005cb0d0;
  local_c = ExceptionList;
  local_28 = (clDataStr *)0x0;
  local_20 = &clDataList::_vbtable__for__clData__;
  local_10 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
  local_1c = 3;
  local_24 = &clData::_vftable_;
  local_4 = 0;
  ExceptionList = &local_c;
  clPointerList<class_clData*>::clPointerList<class_clData*>
            ((clPointerList<class_clData*> *)local_18);
  local_24 = &clDataList::_vftable__for__clData__;
  local_18[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_4 = 1;
  GetNewCurMessage(this,0x5a);
  iVar1 = *(int *)(this + 4);
  if (iVar1 == 0) {
    local_24 = &clDataList::_vftable__for__clData__;
    local_18[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
    local_4 = 2;
    clPointerList<class_clData*>::~clPointerList<class_clData*>
              ((clPointerList<class_clData*> *)local_18);
    ExceptionList = local_c;
    return '\0';
  }
  if (*(char *)(iVar1 + 4) != 'Z') {
    local_24 = &clDataList::_vftable__for__clData__;
    local_18[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
    local_4 = 3;
    clPointerList<class_clData*>::~clPointerList<class_clData*>
              ((clPointerList<class_clData*> *)local_18);
    ExceptionList = local_c;
    return '\0';
  }
  uVar2 = clDataList::GetIndex(*(clDataList **)(iVar1 + 8),&local_28,0);
  if (uVar2 == '\0') {
    local_24 = &clDataList::_vftable__for__clData__;
    local_18[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
    local_4 = 4;
    clPointerList<class_clData*>::~clPointerList<class_clData*>
              ((clPointerList<class_clData*> *)local_18);
    ExceptionList = local_c;
    return '\0';
  }
  GLCopyString(this,param_1,*(char **)(local_28 + 0xc));
  uVar2 = clDataList::GetIndex(*(clDataList **)(*(int *)(this + 4) + 8),(clDataList *)&local_24,1);
  if (uVar2 == '\0') {
    local_24 = &clDataList::_vftable__for__clData__;
    local_18[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
    local_4 = 5;
    clPointerList<class_clData*>::~clPointerList<class_clData*>
              ((clPointerList<class_clData*> *)local_18);
    ExceptionList = local_c;
    return '\0';
  }
  uVar2 = clDataList::GetIndex((clDataList *)&local_24,param_3,4,0);
  if (uVar2 == '\0') {
    local_24 = &clDataList::_vftable__for__clData__;
    local_18[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
    local_4 = 6;
    clPointerList<class_clData*>::~clPointerList<class_clData*>
              ((clPointerList<class_clData*> *)local_18);
    ExceptionList = local_c;
    return '\0';
  }
  pvVar3 = (void *)ExtAlloc_Malloc_4(*param_3);
  *param_2 = pvVar3;
  uVar2 = clDataList::GetIndex((clDataList *)&local_24,pvVar3,*param_3,1);
  if (uVar2 == '\0') {
    local_24 = &clDataList::_vftable__for__clData__;
    local_18[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
    local_4 = 7;
    clPointerList<class_clData*>::~clPointerList<class_clData*>
              ((clPointerList<class_clData*> *)local_18);
    ExceptionList = local_c;
    return '\0';
  }
  local_4 = 0xffffffff;
  clDataList::~clDataList((clDataList *)&local_24);
  ExceptionList = local_c;
  return '\x01';
}




/* from: libgsclient:GSFriendsLIB.cpp
   addr: 005AD1E0 */

uchar __thiscall
CGLFriendsLib::FriendsRcv_PeerPlayer(CGLFriendsLib *this,uchar *param_1,int *param_2,char *param_3)

{
  uchar uVar1;
  clDataStr *local_28;
  undefined **local_24;
  undefined4 *local_20;
  undefined4 local_1c;
  undefined **local_18;
  list<class_clRcvElement*> local_14 [4];
  undefined8 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005cb147;
  local_c = ExceptionList;
  local_28 = (clDataStr *)0x0;
  local_20 = &clDataList::_vbtable__for__clData__;
  local_10 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
  local_1c = 3;
  local_24 = &clData::_vftable_;
  local_4 = 0;
  ExceptionList = &local_c;
  clPointerList<class_clData*>::clPointerList<class_clData*>
            ((clPointerList<class_clData*> *)&local_18);
  local_18 = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_24 = &clDataList::_vftable__for__clData__;
  local_4 = 1;
  GetNewCurMessage(this,0x5b);
  uVar1 = GLDecodeRcv_Result(this,'[',param_1,param_2);
  if (uVar1 == '\0') {
    local_24 = &clDataList::_vftable__for__clData__;
    local_18 = &clDataList::_vftable__for__clPointerList<class_clData*>__;
    local_4 = 2;
    clPointerList<class_clData*>::~clPointerList<class_clData*>
              ((clPointerList<class_clData*> *)&local_18);
    ExceptionList = local_c;
    return '\0';
  }
  if (*param_1 == '&') {
    uVar1 = clDataList::GetIndex(*(clDataList **)(*(int *)(this + 4) + 8),&local_28,1);
    if (uVar1 == '\0') {
      local_24 = &clDataList::_vftable__for__clData__;
      local_18 = &clDataList::_vftable__for__clPointerList<class_clData*>__;
      local_4 = 3;
      clPointerList<class_clData*>::~clPointerList<class_clData*>
                ((clPointerList<class_clData*> *)&local_18);
      ExceptionList = local_c;
      return '\0';
    }
    GLCopyString(this,param_3,*(char **)(local_28 + 0xc));
    local_24 = &clDataList::_vftable__for__clData__;
    local_18 = &clDataList::_vftable__for__clPointerList<class_clData*>__;
    local_4 = 4;
    clPointerList<class_clData*>::~clPointerList<class_clData*>
              ((clPointerList<class_clData*> *)&local_18);
  }
  else {
    uVar1 = clDataList::GetIndex(*(clDataList **)(*(int *)(this + 4) + 8),(clDataList *)&local_24,1)
    ;
    if (uVar1 == '\0') {
      local_24 = &clDataList::_vftable__for__clData__;
      local_18 = &clDataList::_vftable__for__clPointerList<class_clData*>__;
      local_4 = 5;
      clPointerList<class_clData*>::~clPointerList<class_clData*>
                ((clPointerList<class_clData*> *)&local_18);
      ExceptionList = local_c;
      return '\0';
    }
    uVar1 = clDataList::GetIndex((clDataList *)&local_24,&local_28,1);
    if (uVar1 == '\0') {
      local_24 = &clDataList::_vftable__for__clData__;
      local_18 = &clDataList::_vftable__for__clPointerList<class_clData*>__;
      local_4 = 6;
      clPointerList<class_clData*>::~clPointerList<class_clData*>
                ((clPointerList<class_clData*> *)&local_18);
      ExceptionList = local_c;
      return '\0';
    }
    GLCopyString(this,param_3,*(char **)(local_28 + 0xc));
    local_24 = &clDataList::_vftable__for__clData__;
    local_18 = &clPointerList<class_clData*>::_vftable_;
    local_4._0_1_ = 8;
    local_4._1_3_ = 0;
    clPointerList<class_clRcvElement*>::clear((clPointerList<class_clRcvElement*> *)&local_18);
    local_4 = CONCAT31(local_4._1_3_,7);
    ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>(local_14);
  }
  ExceptionList = local_c;
  return '\x01';
}




/* from: libgsclient:GSFriendsLIB.cpp
   addr: 005AD420 */

uchar __thiscall
CGLFriendsLib::FriendsRcv_ChangeFriend(CGLFriendsLib *this,uchar *param_1,int *param_2)

{
  uchar uVar1;
  
  GetNewCurMessage(this,0x85);
  uVar1 = GLDecodeRcv_Result(this,0x85,param_1,param_2);
  return uVar1 != '\0';
}




/* from: libgsclient:GSFriendsLIB.cpp
   addr: 005AD450 */

uchar __thiscall
CGLFriendsLib::FriendsRcv_StatusChange(CGLFriendsLib *this,uchar *param_1,int *param_2)

{
  uchar uVar1;
  
  GetNewCurMessage(this,0x51);
  uVar1 = GLDecodeRcv_Result(this,'Q',param_1,param_2);
  return uVar1 != '\0';
}




/* from: libgsclient:GSFriendsLIB.cpp
   addr: 005AD480 */

uchar __thiscall
CGLFriendsLib::FriendsRcv_UpdateFriend
          (CGLFriendsLib *this,char *param_1,int *param_2,char *param_3,int *param_4,int *param_5,
          char *param_6)

{
  int iVar1;
  uchar uVar2;
  clDataStr *local_8;
  clDataStr *local_4;
  
  GetNewCurMessage(this,0x4a);
  iVar1 = *(int *)(this + 4);
  if (iVar1 == 0) {
    return '\0';
  }
  if (*(char *)(iVar1 + 4) != 'J') {
    return '\0';
  }
  uVar2 = clDataList::GetIndex(*(clDataList **)(iVar1 + 8),&local_8,0);
  if (uVar2 == '\0') {
    return '\0';
  }
  GLCopyString(this,param_1,*(char **)(local_8 + 0xc));
  uVar2 = clDataList::GetIndex(*(clDataList **)(*(int *)(this + 4) + 8),param_2,4,1);
  if (uVar2 == '\0') {
    return '\0';
  }
  uVar2 = clDataList::GetIndex(*(clDataList **)(*(int *)(this + 4) + 8),&local_4,2);
  if (uVar2 == '\0') {
    return '\0';
  }
  GLCopyString(this,param_3,*(char **)(local_4 + 0xc));
  uVar2 = clDataList::GetIndex(*(clDataList **)(*(int *)(this + 4) + 8),param_4,4,3);
  if (uVar2 == '\0') {
    return '\0';
  }
  uVar2 = clDataList::GetIndex(*(clDataList **)(*(int *)(this + 4) + 8),param_5,4,4);
  if (uVar2 == '\0') {
    return '\0';
  }
  uVar2 = clDataList::GetIndex(*(clDataList **)(*(int *)(this + 4) + 8),param_6,5);
  if (uVar2 == '\0') {
    strncpy(param_6,s_,0x84);
    if (param_6[0x83] != '\0') {
      param_6[0x83] = '\0';
    }
  }
  return '\x01';
}




/* from: libgsclient:GSFriendsLIB.cpp
   addr: 005AD5B0 */

uchar __thiscall
CGLFriendsLib::FriendsRcv_SearchPlayer
          (CGLFriendsLib *this,uchar *param_1,int *param_2,char *param_3,int *param_4,char *param_5)

{
  char cVar1;
  uchar uVar2;
  char *pcVar3;
  undefined1 uVar4;
  undefined **local_24;
  undefined4 *local_20;
  undefined4 local_1c;
  undefined **local_18;
  list<class_clRcvElement*> local_14 [4];
  undefined8 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005cb22c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GetNewCurMessage(this,8);
  uVar2 = GLDecodeRcv_Result(this,'\b',param_1,param_2);
  if (uVar2 != '\0') {
    if (*param_1 != '&') {
      ExceptionList = local_c;
      return '\x01';
    }
    local_20 = &clDataList::_vbtable__for__clData__;
    local_10 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
    local_1c = 3;
    local_24 = &clData::_vftable_;
    local_4 = 0;
    clPointerList<class_clData*>::clPointerList<class_clData*>
              ((clPointerList<class_clData*> *)&local_18);
    local_18 = &clDataList::_vftable__for__clPointerList<class_clData*>__;
    local_24 = &clDataList::_vftable__for__clData__;
    local_4 = 1;
    uVar2 = clDataList::GetIndex(*(clDataList **)(*(int *)(this + 4) + 8),(clDataList *)&local_24,1)
    ;
    if (uVar2 == '\0') {
      local_24 = &clDataList::_vftable__for__clData__;
      local_18 = &clPointerList<class_clData*>::_vftable_;
      local_4._0_1_ = 3;
      local_4._1_3_ = 0;
      clPointerList<class_clRcvElement*>::clear((clPointerList<class_clRcvElement*> *)&local_18);
      local_4 = CONCAT31(local_4._1_3_,2);
      ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>(local_14);
      ExceptionList = local_c;
      return '\0';
    }
    uVar2 = clDataList::GetIndex((clDataList *)&local_24,param_3,0);
    if (uVar2 == '\0') {
      uVar4 = 4;
      local_4._0_1_ = 5;
    }
    else {
      uVar2 = clDataList::GetIndex((clDataList *)&local_24,param_4,4,1);
      if (uVar2 != '\0') {
        uVar2 = clDataList::GetIndex((clDataList *)&local_24,param_5,2);
        if (uVar2 == '\0') {
          pcVar3 = s_;
          do {
            cVar1 = *pcVar3;
            (param_5 + -0x601fe8)[(int)pcVar3] = cVar1;
            pcVar3 = pcVar3 + 1;
          } while (cVar1 != '\0');
        }
        local_24 = &clDataList::_vftable__for__clData__;
        local_18 = &clPointerList<class_clData*>::_vftable_;
        local_4._0_1_ = 9;
        local_4._1_3_ = 0;
        clPointerList<class_clRcvElement*>::clear((clPointerList<class_clRcvElement*> *)&local_18);
        local_4 = CONCAT31(local_4._1_3_,8);
        ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>(local_14);
        ExceptionList = local_c;
        return '\x01';
      }
      uVar4 = 6;
      local_4._0_1_ = 7;
    }
    local_4._1_3_ = 0;
    local_18 = &clPointerList<class_clData*>::_vftable_;
    local_24 = &clDataList::_vftable__for__clData__;
    clPointerList<class_clRcvElement*>::clear((clPointerList<class_clRcvElement*> *)&local_18);
    local_4 = CONCAT31(local_4._1_3_,uVar4);
    ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>(local_14);
  }
  ExceptionList = local_c;
  return '\0';
}




/* from: libgsclient:GSFriendsLIB.cpp
   addr: 005AD7D0 */

uchar __thiscall
CGLFriendsLib::FriendsRcv_ScoreCard
          (CGLFriendsLib *this,uchar *param_1,int *param_2,char *param_3,char *param_4,char *param_5
          )

{
  uchar uVar1;
  undefined **local_24;
  undefined4 *local_20;
  undefined4 local_1c;
  undefined **local_18;
  list<class_clRcvElement*> local_14 [4];
  undefined8 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005cb2c6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GetNewCurMessage(this,0x98);
  uVar1 = GLDecodeRcv_Result(this,0x98,param_1,param_2);
  if (uVar1 == '\0') {
    ExceptionList = local_c;
    return '\0';
  }
  if (*param_1 == '&') {
    local_20 = &clDataList::_vbtable__for__clData__;
    local_10 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
    local_1c = 3;
    local_24 = &clData::_vftable_;
    local_4 = 0;
    clPointerList<class_clData*>::clPointerList<class_clData*>
              ((clPointerList<class_clData*> *)&local_18);
    local_24 = &clDataList::_vftable__for__clData__;
    local_18 = &clDataList::_vftable__for__clPointerList<class_clData*>__;
    local_4 = 1;
    uVar1 = clDataList::GetIndex(*(clDataList **)(*(int *)(this + 4) + 8),(clDataList *)&local_24,1)
    ;
    if (uVar1 == '\0') {
      local_24 = &clDataList::_vftable__for__clData__;
      local_18 = &clDataList::_vftable__for__clPointerList<class_clData*>__;
      local_4 = 2;
      clPointerList<class_clData*>::~clPointerList<class_clData*>
                ((clPointerList<class_clData*> *)&local_18);
      ExceptionList = local_c;
      return '\0';
    }
    uVar1 = clDataList::GetIndex((clDataList *)&local_24,param_3,0);
    if (uVar1 == '\0') {
      local_24 = &clDataList::_vftable__for__clData__;
      local_18 = &clDataList::_vftable__for__clPointerList<class_clData*>__;
      local_4 = 3;
      clPointerList<class_clData*>::~clPointerList<class_clData*>
                ((clPointerList<class_clData*> *)&local_18);
      ExceptionList = local_c;
      return '\0';
    }
    uVar1 = clDataList::GetIndex((clDataList *)&local_24,param_4,1);
    if (uVar1 == '\0') {
      local_24 = &clDataList::_vftable__for__clData__;
      local_18 = &clDataList::_vftable__for__clPointerList<class_clData*>__;
      local_4 = 4;
      clPointerList<class_clData*>::~clPointerList<class_clData*>
                ((clPointerList<class_clData*> *)&local_18);
      ExceptionList = local_c;
      return '\0';
    }
    uVar1 = clDataList::GetIndex((clDataList *)&local_24,param_5,2);
    local_24 = &clDataList::_vftable__for__clData__;
    if (uVar1 == '\0') {
      local_18 = &clPointerList<class_clData*>::_vftable_;
      local_4._0_1_ = 6;
      local_4._1_3_ = 0;
      clPointerList<class_clRcvElement*>::clear((clPointerList<class_clRcvElement*> *)&local_18);
      local_4 = CONCAT31(local_4._1_3_,5);
      ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>(local_14);
      ExceptionList = local_c;
      return '\0';
    }
    local_18 = &clPointerList<class_clData*>::_vftable_;
    local_4._0_1_ = 8;
    local_4._1_3_ = 0;
    clPointerList<class_clRcvElement*>::clear((clPointerList<class_clRcvElement*> *)&local_18);
    local_4 = CONCAT31(local_4._1_3_,7);
    ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>(local_14);
  }
  ExceptionList = local_c;
  return '\x01';
}




/* from: libgsclient:GSFriendsLIB.cpp
   addr: 005ADA00 */

uchar __thiscall CGLFriendsLib::FriendsRcv_LoginResultCB(CGLFriendsLib *this)

{
  uchar uVar1;
  int local_8;
  undefined4 local_4;
  
  uVar1 = FriendsRcv_LoginResult(this,(uchar *)&local_4,&local_8);
  if (uVar1 != '\0') {
    (**(code **)**(undefined4 **)(this + 0x10))(local_4,local_8);
    return '\x01';
  }
  return '\0';
}




/* from: libgsclient:GSFriendsLIB.cpp
   addr: 005ADA40 */

uchar __thiscall CGLFriendsLib::FriendsRcv_AddFriendCB(CGLFriendsLib *this)

{
  uchar uVar1;
  int local_18;
  undefined4 local_14;
  char local_10 [16];
  
  uVar1 = FriendsRcv_AddFriend(this,(uchar *)&local_14,&local_18,local_10);
  if (uVar1 != '\0') {
    (**(code **)(**(int **)(this + 0x10) + 4))(local_14,local_18,local_10);
    return '\x01';
  }
  return '\0';
}




/* from: libgsclient:GSFriendsLIB.cpp
   addr: 005ADA90 */

uchar __thiscall CGLFriendsLib::FriendsRcv_DelFriendCB(CGLFriendsLib *this)

{
  uchar uVar1;
  int local_18;
  undefined4 local_14;
  char local_10 [16];
  
  uVar1 = FriendsRcv_DelFriend(this,(uchar *)&local_14,&local_18,local_10);
  if (uVar1 != '\0') {
    (**(code **)(**(int **)(this + 0x10) + 8))(local_14,local_18,local_10);
    return '\x01';
  }
  return '\0';
}




/* from: libgsclient:GSFriendsLIB.cpp
   addr: 005ADAE0 */

uchar __thiscall CGLFriendsLib::FriendsRcv_GetSessionCB(CGLFriendsLib *this)

{
  uchar uVar1;
  int local_48c;
  int local_488;
  int local_484;
  undefined4 local_480;
  int local_47c;
  int local_478;
  int local_474;
  int local_470;
  int local_46c;
  char local_468 [16];
  char local_458 [16];
  char local_448 [36];
  char local_424 [36];
  char local_400 [1024];
  
  uVar1 = FriendsRcv_GetSession
                    (this,(uchar *)&local_480,&local_488,local_458,local_424,&local_48c,&local_470,
                     &local_46c,&local_47c,&local_474,&local_484,local_468,&local_478,local_400,
                     local_448);
  if (uVar1 != '\0') {
    (**(code **)(**(int **)(this + 0x10) + 0xc))
              (local_480,local_488,local_458,local_424,local_48c,local_470,local_46c,local_47c,
               local_474,local_484,local_468,local_478,local_400,local_448);
    return '\x01';
  }
  return '\0';
}




/* from: libgsclient:GSFriendsLIB.cpp
   addr: 005ADBB0 */

uchar __thiscall CGLFriendsLib::FriendsRcv_GetWebBasedCB(CGLFriendsLib *this)

{
  uchar uVar1;
  char local_414 [16];
  char local_404 [1028];
  
  uVar1 = FriendsRcv_GetWebBased(this,local_414,local_404);
  if (uVar1 != '\0') {
    (**(code **)(**(int **)(this + 0x10) + 0x10))(local_414,local_404);
    return '\x01';
  }
  return '\0';
}




/* from: libgsclient:GSFriendsLIB.cpp
   addr: 005ADC00 */

uchar __thiscall CGLFriendsLib::FriendsRcv_PageCB(CGLFriendsLib *this)

{
  uchar uVar1;
  char local_424 [16];
  char local_414 [16];
  char local_404 [1028];
  
  uVar1 = FriendsRcv_Page(this,local_414,local_404,local_424);
  if (uVar1 != '\0') {
    (**(code **)(**(int **)(this + 0x10) + 0x14))(local_414,local_404,local_424);
    return '\x01';
  }
  return '\0';
}




/* from: libgsclient:GSFriendsLIB.cpp
   addr: 005ADC50 */

uchar __thiscall CGLFriendsLib::FriendsRcv_PagePlayerCB(CGLFriendsLib *this)

{
  uchar uVar1;
  int local_18;
  undefined4 local_14;
  char local_10 [16];
  
  uVar1 = FriendsRcv_PagePlayer(this,(uchar *)&local_14,&local_18,local_10);
  if (uVar1 != '\0') {
    (**(code **)(**(int **)(this + 0x10) + 0x18))(local_14,local_18,local_10);
    return '\x01';
  }
  return '\0';
}




/* from: libgsclient:GSFriendsLIB.cpp
   addr: 005ADCA0 */

uchar __thiscall CGLFriendsLib::FriendsRcv_PeerMsgCB(CGLFriendsLib *this)

{
  void *pvVar1;
  uchar uVar2;
  void *local_18;
  uint local_14;
  char local_10 [16];
  
  local_18 = (void *)0x0;
  uVar2 = FriendsRcv_PeerMsg(this,local_10,&local_18,&local_14);
  pvVar1 = local_18;
  if (uVar2 != '\0') {
    (**(code **)(**(int **)(this + 0x10) + 0x1c))(local_10,local_18,local_14);
    ExtAlloc_Free_4(pvVar1);
    return '\x01';
  }
  return '\0';
}




/* from: libgsclient:GSFriendsLIB.cpp
   addr: 005ADD00 */

uchar __thiscall CGLFriendsLib::FriendsRcv_PeerPlayerCB(CGLFriendsLib *this)

{
  uchar uVar1;
  int local_18;
  undefined4 local_14;
  char local_10 [16];
  
  uVar1 = FriendsRcv_PeerPlayer(this,(uchar *)&local_14,&local_18,local_10);
  if (uVar1 != '\0') {
    (**(code **)(**(int **)(this + 0x10) + 0x20))(local_14,local_18,local_10);
    return '\x01';
  }
  return '\0';
}




/* from: libgsclient:GSFriendsLIB.cpp
   addr: 005ADD50 */

uchar __thiscall CGLFriendsLib::FriendsRcv_ChangeFriendCB(CGLFriendsLib *this)

{
  uchar uVar1;
  int local_8;
  undefined4 local_4;
  
  uVar1 = FriendsRcv_ChangeFriend(this,(uchar *)&local_4,&local_8);
  if (uVar1 != '\0') {
    (**(code **)(**(int **)(this + 0x10) + 0x24))(local_4,local_8);
    return '\x01';
  }
  return '\0';
}




/* from: libgsclient:GSFriendsLIB.cpp
   addr: 005ADD90 */

uchar __thiscall CGLFriendsLib::FriendsRcv_StatusChangeCB(CGLFriendsLib *this)

{
  uchar uVar1;
  int local_8;
  undefined4 local_4;
  
  uVar1 = FriendsRcv_StatusChange(this,(uchar *)&local_4,&local_8);
  if (uVar1 != '\0') {
    (**(code **)(**(int **)(this + 0x10) + 0x28))(local_4,local_8);
    return '\x01';
  }
  return '\0';
}




/* from: libgsclient:GSFriendsLIB.cpp
   addr: 005ADDD0 */

uchar __thiscall CGLFriendsLib::FriendsRcv_UpdateFriendCB(CGLFriendsLib *this)

{
  uchar uVar1;
  int local_c4;
  int local_c0;
  int local_bc;
  char local_b8 [16];
  char local_a8 [36];
  char local_84 [132];
  
  uVar1 = FriendsRcv_UpdateFriend(this,local_b8,&local_c4,local_a8,&local_c0,&local_bc,local_84);
  if (uVar1 != '\0') {
    (**(code **)(**(int **)(this + 0x10) + 0x2c))
              (local_b8,local_c4,local_a8,local_c0,local_bc,local_84);
    return '\x01';
  }
  return '\0';
}




/* from: libgsclient:GSFriendsLIB.cpp
   addr: 005ADE40 */

uchar __thiscall CGLFriendsLib::FriendsRcv_SearchPlayerCB(CGLFriendsLib *this)

{
  uchar uVar1;
  undefined4 local_a0;
  int local_9c;
  int local_98;
  char local_94 [16];
  char local_84 [132];
  
  uVar1 = FriendsRcv_SearchPlayer(this,(uchar *)&local_a0,&local_98,local_94,&local_9c,local_84);
  if (uVar1 != '\0') {
    (**(code **)(**(int **)(this + 0x10) + 0x30))(local_a0,local_98,local_94,local_9c,local_84);
    return '\x01';
  }
  return '\0';
}




/* from: libgsclient:GSFriendsLIB.cpp
   addr: 005ADEB0 */

uchar __thiscall CGLFriendsLib::FriendsRcv_ScoreCardCB(CGLFriendsLib *this)

{
  uchar uVar1;
  int local_43c;
  undefined4 local_438;
  char local_434 [16];
  char local_424 [36];
  char local_400 [1024];
  
  uVar1 = FriendsRcv_ScoreCard(this,(uchar *)&local_438,&local_43c,local_434,local_424,local_400);
  if (uVar1 != '\0') {
    (**(code **)(**(int **)(this + 0x10) + 0x34))(local_438,local_43c,local_434,local_424,local_400)
    ;
    return '\x01';
  }
  return '\0';
}

