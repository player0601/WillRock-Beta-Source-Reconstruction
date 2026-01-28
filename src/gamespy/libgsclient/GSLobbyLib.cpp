
/* from: libgsclient:GSLobbyLib.cpp
   addr: 005A1D60 */

CGSLobbyLib * __thiscall CGSLobbyLib::CGSLobbyLib(CGSLobbyLib *this)

{
  _STLP_alloc_proxy<struct__STL::_List_node<class_CConnection*>*,struct__STL::_List_node<class_CConnection*>,class_ExtAlloc::Allocator<class_CConnection*>_>
  *this_00;
  _Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
  *p_Var1;
  undefined4 uVar2;
  _Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
  *p_Var3;
  CGSLobbyLib CStack00000004;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c9559;
  local_c = ExceptionList;
  p_Var3 = (_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
            *)0x0;
  ExceptionList = &local_c;
  if (_CStack00000004 != (clLobbyCB *)0x0) {
    ExceptionList = &local_c;
    *(undefined1 **)this = &_vbtable_;
  }
  this_00 = (_STLP_alloc_proxy<struct__STL::_List_node<class_CConnection*>*,struct__STL::_List_node<class_CConnection*>,class_ExtAlloc::Allocator<class_CConnection*>_>
             *)(this + 0x24);
  *(undefined8 **)(this + 0x30) =
       &ExtAlloc::
        set<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,struct__STL::less<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
        ::_vbtable_;
  local_4 = 2;
  _STL::
  _STLP_alloc_proxy<struct__STL::_List_node<class_CConnection*>*,struct__STL::_List_node<class_CConnection*>,class_ExtAlloc::Allocator<class_CConnection*>_>
  ::
  STLP_alloc_proxy<struct__STL::_List_node<class_CConnection*>*,struct__STL::_List_node<class_CConnection*>,class_ExtAlloc::Allocator<class_CConnection*>_>
            (this_00,(Allocator<class_CConnection*> *)&stack0x00000004,
             (_List_node<class_CConnection*> *)0x0);
  uVar2 = ExtAlloc_Malloc_4(0x1c);
  *(undefined4 *)this_00 = uVar2;
  local_4 = CONCAT31(local_4._1_3_,3);
  this[0x2c] = CStack00000004;
  *(undefined4 *)(this + 0x28) = 0;
  _STL::
  _Rb_tree<int,int,struct__STL::_Identity<int>,struct__STL::less<int>,class_ExtAlloc::Allocator<int>_>
  ::M_empty_initialize
            ((_Rb_tree<int,int,struct__STL::_Identity<int>,struct__STL::less<int>,class_ExtAlloc::Allocator<int>_>
              *)this_00);
  local_4 = 4;
  if (*(int *)(this + 0x28) != 0) {
    p_Var1 = *(_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
               **)(*(int *)this_00 + 4);
    while (p_Var1 != (_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
                      *)0x0) {
      _STL::
      _Rb_tree<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,struct__STL::_Identity<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,struct__STL::less<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
      ::M_erase((_Rb_tree<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,struct__STL::_Identity<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,struct__STL::less<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
                 *)this_00,
                *(_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
                  **)(p_Var1 + 0xc));
      p_Var3 = *(_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
                 **)(p_Var1 + 8);
      _STL::
      pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResult*>
      ::_scalar_deleting_destructor_
                ((pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResult*>
                  *)(p_Var1 + 0x10),0);
      _STL::
      _STLP_alloc_proxy<struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>*,struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
      ::deallocate((_STLP_alloc_proxy<struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>*,struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
                    *)this_00,p_Var1,1);
      p_Var1 = p_Var3;
    }
    *(int *)(*(int *)this_00 + 8) = *(int *)this_00;
    *(_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
      **)(*(int *)this_00 + 4) = p_Var3;
    *(int *)(*(int *)this_00 + 0xc) = *(int *)this_00;
    *(_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
      **)(this + 0x28) = p_Var3;
  }
  *(_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
    **)(this + 8) = p_Var3;
  *(_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
    **)(this + 0xc) = p_Var3;
  *(_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
    **)(this + 0x10) = p_Var3;
  _CStack00000004 = (clLobbyCB *)ExtAlloc_Malloc_4(0xbc);
  local_4 = CONCAT31(local_4._1_3_,5);
  if (_CStack00000004 == (clLobbyCB *)p_Var3) {
    uVar2 = 0;
  }
  else {
    uVar2 = clLobbyCB::clLobbyCB(_CStack00000004);
  }
  *(undefined4 *)(this + 0x14) = uVar2;
  this[0x18] = (CGSLobbyLib)0x0;
  this[0x19] = (CGSLobbyLib)0x0;
  this[0x1a] = (CGSLobbyLib)0x1;
  *(short *)(this + 0x1c) = (short)p_Var3;
  ExceptionList = local_c;
  return this;
}




/* from: libgsclient:GSLobbyLib.cpp
   addr: 005A1EA0 */

void __thiscall
ExtAlloc::
set<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,struct__STL::less<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
::
~set<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,struct__STL::less<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
          (set<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,struct__STL::less<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
           *this)

{
  int iVar1;
  int iVar2;
  void **ppvVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c9578;
  local_c = ExceptionList;
  local_4 = 0;
  ppvVar3 = &local_c;
  if (*(int *)(this + 4) != 0) {
    iVar2 = *(int *)(*(int *)this + 4);
    ExceptionList = &local_c;
    while (iVar2 != 0) {
      _STL::
      _Rb_tree<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,struct__STL::_Identity<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,struct__STL::less<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
      ::M_erase((_Rb_tree<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,struct__STL::_Identity<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,struct__STL::less<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
                 *)this,*(_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
                          **)(iVar2 + 0xc));
      iVar1 = *(int *)(iVar2 + 8);
      _STL::
      pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResult*>
      ::_scalar_deleting_destructor_
                ((pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResult*>
                  *)(iVar2 + 0x10),0);
      ExtAlloc_Free_4(iVar2);
      iVar2 = iVar1;
    }
    *(int *)(*(int *)this + 8) = *(int *)this;
    *(undefined4 *)(*(int *)this + 4) = 0;
    *(int *)(*(int *)this + 0xc) = *(int *)this;
    *(undefined4 *)(this + 4) = 0;
    ppvVar3 = (void **)ExceptionList;
  }
  ExceptionList = ppvVar3;
  ExtAlloc_Free_4(*(undefined4 *)this);
  ExceptionList = local_c;
  return;
}




/* from: libgsclient:GSLobbyLib.cpp
   addr: 005A1F30 */

void __thiscall CGSLobbyLib::~CGSLobbyLib(CGSLobbyLib *this)

{
  _Rb_tree<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,struct__STL::_Identity<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,struct__STL::less<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
  *this_00;
  clRcvElement *this_01;
  int iVar1;
  _Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
  *p_Var2;
  _Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
  *p_Var3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c95a3;
  pvStack_c = ExceptionList;
  this_01 = *(clRcvElement **)(this + 8);
  local_4 = 0;
  ExceptionList = &pvStack_c;
  if (this_01 != (clRcvElement *)0x0) {
    ExceptionList = &pvStack_c;
    clRcvElement::~clRcvElement(this_01);
    ExtAlloc_Free_4(this_01);
    *(undefined4 *)(this + 8) = 0;
  }
  if (*(undefined4 **)(this + 0x10) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x10))(1);
    *(undefined4 *)(this + 0x10) = 0;
  }
  if (this[0x18] == (CGSLobbyLib)0x0) {
    iVar1 = *(int *)(this + 0x14);
    if (iVar1 != 0) {
      (*(code *)**(undefined4 **)(*(int *)(*(int *)(iVar1 + 4) + 8) + 4 + iVar1))(1);
    }
    *(undefined4 *)(this + 0x14) = 0;
  }
  this_00 = (_Rb_tree<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,struct__STL::_Identity<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,struct__STL::less<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
             *)(this + 0x24);
  local_4 = 1;
  if (*(int *)(this + 0x28) != 0) {
    p_Var3 = *(_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
               **)(*(int *)this_00 + 4);
    while (p_Var3 != (_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
                      *)0x0) {
      _STL::
      _Rb_tree<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,struct__STL::_Identity<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,struct__STL::less<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
      ::M_erase(this_00,*(_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
                          **)(p_Var3 + 0xc));
      p_Var2 = *(_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
                 **)(p_Var3 + 8);
      _STL::
      pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResult*>
      ::_scalar_deleting_destructor_
                ((pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResult*>
                  *)(p_Var3 + 0x10),0);
      _STL::
      _STLP_alloc_proxy<struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>*,struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
      ::deallocate((_STLP_alloc_proxy<struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>*,struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
                    *)this_00,p_Var3,1);
      p_Var3 = p_Var2;
    }
    *(int *)(*(int *)this_00 + 8) = *(int *)this_00;
    *(undefined4 *)(*(int *)this_00 + 4) = 0;
    *(int *)(*(int *)this_00 + 0xc) = *(int *)this_00;
    *(undefined4 *)(this + 0x28) = 0;
  }
  ExtAlloc_Free_4(*(undefined4 *)this_00);
  ExceptionList = pvStack_c;
  return;
}




/* from: libgsclient:GSLobbyLib.cpp
   addr: 005A2020 */

uchar __thiscall CGSLobbyLib::Lobby_CheckConnection(CGSLobbyLib *this)

{
  uchar uVar1;
  
  if (*(CLobbySrvConnectionList **)(this + 0x10) == (CLobbySrvConnectionList *)0x0) {
    return '\0';
  }
  uVar1 = CLobbySrvConnectionList::CheckConnection(*(CLobbySrvConnectionList **)(this + 0x10));
  return uVar1 != '\0';
}




/* from: libgsclient:GSLobbyLib.cpp
   addr: 005A2050 */

void __thiscall CGSLobbyLib::GetNewCurMessage(CGSLobbyLib *this,int param_1)

{
  clRcvElement *this_00;
  CCurMessage *pCVar1;
  
  this_00 = *(clRcvElement **)(this + 8);
  if (this_00 != (clRcvElement *)0x0) {
    clRcvElement::~clRcvElement(this_00);
    ExtAlloc_Free_4(this_00);
    *(undefined4 *)(this + 8) = 0;
  }
  pCVar1 = CMsgQueue::GetMessageA(*(CMsgQueue **)(this + 0x20),(ushort)param_1);
  *(CCurMessage **)(this + 8) = pCVar1;
  return;
}




/* from: libgsclient:GSLobbyLib.cpp
   addr: 005A2090 */

uchar __thiscall
CGSLobbyLib::DecodeRcv_Result(CGSLobbyLib *this,ushort param_1,uchar *param_2,int *param_3)

{
  int iVar1;
  uchar uVar2;
  undefined2 extraout_var;
  ushort local_42;
  undefined4 local_40;
  undefined **local_3c;
  undefined4 *local_38;
  undefined **local_30 [2];
  undefined8 *local_28;
  undefined **local_24;
  undefined4 *local_20;
  undefined **local_18 [2];
  undefined8 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c95e0;
  local_c = ExceptionList;
  local_40 = 0;
  local_38 = &clDataList::_vbtable__for__clData__;
  local_28 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
  ExceptionList = &local_c;
  clData::clData((clData *)&local_3c,3);
  local_4 = 0;
  clPointerList<class_clData*>::clPointerList<class_clData*>
            ((clPointerList<class_clData*> *)local_30);
  local_3c = &clDataList::_vftable__for__clData__;
  local_30[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  iVar1 = *(int *)(this + 8);
  local_4 = 1;
  if ((iVar1 != 0) &&
     (local_40 = CONCAT22(extraout_var,(ushort)*(byte *)(iVar1 + 4)), *(byte *)(iVar1 + 4) == 0xd1))
  {
    uVar2 = clDataList::GetIndex(*(clDataList **)(iVar1 + 8),(ushort *)&local_40,0);
    if (uVar2 != '\0') {
      uVar2 = clDataList::GetIndex
                        (*(clDataList **)(*(int *)(this + 8) + 8),(clDataList *)&local_3c,1);
      if (uVar2 != '\0') {
        *param_2 = (uchar)local_40;
        uVar2 = clDataList::GetIndex((clDataList *)&local_3c,&local_42,0);
        if ((uVar2 != '\0') && (local_42 == param_1)) {
          if (*param_2 != '&') {
            if (*param_2 != '\'') {
              local_3c = &clDataList::_vftable__for__clData__;
              local_30[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
              local_4 = 5;
              clPointerList<class_clData*>::~clPointerList<class_clData*>
                        ((clPointerList<class_clData*> *)local_30);
              ExceptionList = local_c;
              return '\0';
            }
            local_20 = &clDataList::_vbtable__for__clData__;
            local_10 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
            clData::clData((clData *)&local_24,3);
            local_4._0_1_ = 2;
            clPointerList<class_clData*>::clPointerList<class_clData*>
                      ((clPointerList<class_clData*> *)local_18);
            local_18[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
            local_24 = &clDataList::_vftable__for__clData__;
            local_4._0_1_ = 3;
            uVar2 = clDataList::GetIndex((clDataList *)&local_3c,(clDataList *)&local_24,1);
            if (uVar2 == '\0') {
              local_4 = CONCAT31(local_4._1_3_,1);
              clDataList::~clDataList((clDataList *)&local_24);
              goto LAB_005a2222;
            }
            uVar2 = clDataList::GetIndex((clDataList *)&local_24,param_3,0);
            local_4 = CONCAT31(local_4._1_3_,1);
            if (uVar2 == '\0') {
              clDataList::~clDataList((clDataList *)&local_24);
              local_3c = &clDataList::_vftable__for__clData__;
              local_30[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
              local_4 = 4;
              clPointerList<class_clData*>::~clPointerList<class_clData*>
                        ((clPointerList<class_clData*> *)local_30);
              ExceptionList = local_c;
              return '\0';
            }
            clDataList::~clDataList((clDataList *)&local_24);
          }
          local_4 = 0xffffffff;
          clDataList::~clDataList((clDataList *)&local_3c);
          ExceptionList = local_c;
          return '\x01';
        }
      }
    }
  }
LAB_005a2222:
  local_4 = 0xffffffff;
  clDataList::~clDataList((clDataList *)&local_3c);
  ExceptionList = local_c;
  return '\0';
}




/* from: libgsclient:GSLobbyLib.cpp
   addr: 005A22C0 */

uchar __thiscall
CGSLobbyLib::GetGroupInfoFlag(CGSLobbyLib *this,int *param_1,ushort *param_2,int *param_3)

{
  uchar uVar1;
  ushort local_40 [2];
  undefined **local_3c;
  undefined4 *local_38;
  undefined4 local_34;
  undefined **local_30 [2];
  undefined8 *local_28;
  undefined **local_24;
  undefined4 *local_20;
  undefined4 local_1c;
  undefined **local_18 [2];
  undefined8 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c9630;
  local_c = ExceptionList;
  local_40[0] = 0;
  local_40[1] = 0;
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
  local_38 = &clDataList::_vbtable__for__clData__;
  local_28 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
  local_34 = 3;
  local_3c = &clData::_vftable_;
  local_4._0_1_ = 2;
  local_4._1_3_ = 0;
  clPointerList<class_clData*>::clPointerList<class_clData*>
            ((clPointerList<class_clData*> *)local_30);
  local_3c = &clDataList::_vftable__for__clData__;
  local_30[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_4._0_1_ = 3;
  *param_2 = 0;
  clDataList::GetIndex(*(clDataList **)(*(int *)(this + 8) + 8),local_40,0);
  clDataList::GetIndex(*(clDataList **)(*(int *)(this + 8) + 8),(clDataList *)&local_24,1);
  if (*(int *)(this + 8) == 0) {
    local_3c = &clDataList::_vftable__for__clData__;
    local_30[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
    local_4 = CONCAT31(local_4._1_3_,4);
    clPointerList<class_clData*>::~clPointerList<class_clData*>
              ((clPointerList<class_clData*> *)local_30);
    local_3c = &clData::_vftable_;
    local_24 = &clDataList::_vftable__for__clData__;
    local_18[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
    local_4 = 5;
    clPointerList<class_clData*>::~clPointerList<class_clData*>
              ((clPointerList<class_clData*> *)local_18);
    uVar1 = '\0';
  }
  else if (local_40[0] == 0x35) {
    clDataList::GetIndex((clDataList *)&local_24,param_3,0);
    clDataList::GetIndex((clDataList *)&local_24,param_1,1);
    clDataList::GetIndex((clDataList *)&local_24,(clDataList *)&local_3c,2);
    clDataList::GetIndex((clDataList *)&local_3c,param_2,0);
    local_3c = &clDataList::_vftable__for__clData__;
    local_30[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
    local_4 = CONCAT31(local_4._1_3_,7);
    clPointerList<class_clData*>::~clPointerList<class_clData*>
              ((clPointerList<class_clData*> *)local_30);
    local_3c = &clData::_vftable_;
    local_4 = 0xffffffff;
    clDataList::~clDataList((clDataList *)&local_24);
    uVar1 = '\x01';
  }
  else {
    local_3c = &clDataList::_vftable__for__clData__;
    local_30[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
    local_4 = CONCAT31(local_4._1_3_,6);
    clPointerList<class_clData*>::~clPointerList<class_clData*>
              ((clPointerList<class_clData*> *)local_30);
    local_3c = &clData::_vftable_;
    local_4 = 0xffffffff;
    clDataList::~clDataList((clDataList *)&local_24);
    uVar1 = '\0';
  }
  ExceptionList = local_c;
  return uVar1;
}




/* from: libgsclient:GSLobbyLib.cpp
   addr: 005A24A0 */

short __thiscall CGSLobbyLib::GetGroupType(CGSLobbyLib *this)

{
  ushort auVar1 [2];
  ushort local_2e;
  ushort local_2c [2];
  undefined ***local_28;
  undefined **local_24;
  undefined4 *local_20;
  undefined4 local_1c;
  undefined **local_18;
  list<class_clData*> local_14 [4];
  undefined8 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c96dd;
  local_c = ExceptionList;
  local_2c[0] = 0;
  local_2c[1] = 0;
  local_20 = &clDataList::_vbtable__for__clData__;
  local_10 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
  local_1c = 3;
  local_24 = &clData::_vftable_;
  local_4 = 0;
  ExceptionList = &local_c;
  ExtAlloc::list<class_clData*>::list<class_clData*>(local_14);
  local_18 = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_24 = &clDataList::_vftable__for__clData__;
  local_4 = 1;
  clDataList::GetIndex(*(clDataList **)(*(int *)(this + 8) + 8),&local_2e,0);
  clDataList::GetIndex(*(clDataList **)(*(int *)(this + 8) + 8),(clDataList *)&local_24,1);
  if (*(int *)(this + 8) == 0) {
    local_24 = &clDataList::_vftable__for__clData__;
    local_28 = &local_18;
    local_18 = &clPointerList<class_clData*>::_vftable_;
    local_4._0_1_ = 3;
    local_4._1_3_ = 0;
    clPointerList<class_clRcvElement*>::clear((clPointerList<class_clRcvElement*> *)&local_18);
    local_4 = CONCAT31(local_4._1_3_,2);
    ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
              ((list<class_clRcvElement*> *)local_14);
    ExceptionList = local_c;
    return 0;
  }
  if (local_2e != 0x36) {
    local_24 = &clDataList::_vftable__for__clData__;
    local_28 = &local_18;
    local_18 = &clPointerList<class_clData*>::_vftable_;
    local_4._0_1_ = 5;
    local_4._1_3_ = 0;
    clPointerList<class_clRcvElement*>::clear((clPointerList<class_clRcvElement*> *)&local_18);
    local_4 = CONCAT31(local_4._1_3_,4);
    ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
              ((list<class_clRcvElement*> *)local_14);
    ExceptionList = local_c;
    return 0;
  }
  clDataList::GetIndex((clDataList *)&local_24,local_2c,0);
  auVar1 = local_2c;
  local_24 = &clDataList::_vftable__for__clData__;
  local_28 = &local_18;
  local_18 = &clPointerList<class_clData*>::_vftable_;
  local_4._0_1_ = 7;
  local_4._1_3_ = 0;
  clPointerList<class_clRcvElement*>::clear((clPointerList<class_clRcvElement*> *)&local_18);
  local_4 = CONCAT31(local_4._1_3_,6);
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            ((list<class_clRcvElement*> *)local_14);
  ExceptionList = local_c;
  return auVar1[0];
}




/* from: libgsclient:GSLobbyLib.cpp
   addr: 005A2640 */

int __thiscall CGSLobbyLib::GetGroupInfoSize(CGSLobbyLib *this,clDataList *param_1)

{
  uchar uVar1;
  Allocator<char> local_2d;
  undefined4 local_2c;
  undefined **local_28;
  undefined4 *local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  undefined8 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c9718;
  local_c = ExceptionList;
  local_2c = 0;
  local_24 = &clDataBin::_vbtable__for__clData__;
  local_10 = &clDataBin::_vbtable__for__ExtAlloc__vector<char>__;
  local_20 = 2;
  local_28 = &clData::_vftable_;
  local_4 = 1;
  ExceptionList = &local_c;
  _STL::vector<char,class_ExtAlloc::Allocator<char>_>::vector<char,class_ExtAlloc::Allocator<char>_>
            ((vector<char,class_ExtAlloc::Allocator<char>_> *)&local_1c,&local_2d);
  local_28 = &clDataBin::_vftable_;
  local_4 = 2;
  uVar1 = clDataList::GetIndex(param_1,(clDataBin *)&local_28,10);
  local_28 = &clDataBin::_vftable_;
  if (uVar1 == '\0') {
    local_4 = 3;
    _STL::
    _Vector_base<void*,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
    ::
    ~_Vector_base<void*,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
              ((_Vector_base<void*,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
                *)&local_1c);
    ExceptionList = local_c;
    return 0;
  }
  local_4 = 4;
  _STL::
  _Vector_base<void*,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
  ::
  ~_Vector_base<void*,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
            ((_Vector_base<void*,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
              *)&local_1c);
  ExceptionList = local_c;
  return local_18 - local_1c;
}




/* from: libgsclient:GSLobbyLib.cpp
   addr: 005A2720 */

uchar __thiscall CGSLobbyLib::GetGameDataSize(CGSLobbyLib *this,int *param_1)

{
  uchar uVar1;
  undefined **local_40;
  undefined4 *local_3c;
  undefined **local_34 [2];
  undefined8 *local_2c;
  undefined **local_28;
  undefined4 *local_24;
  int local_1c;
  int local_18;
  undefined8 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c9780;
  local_c = ExceptionList;
  local_24 = &clDataBin::_vbtable__for__clData__;
  local_10 = &clDataBin::_vbtable__for__ExtAlloc__vector<char>__;
  ExceptionList = &local_c;
  clData::clData((clData *)&local_28,2);
  local_4 = 0;
  ExtAlloc::vector<char>::vector<char>((vector<char> *)&local_1c);
  local_28 = &clDataBin::_vftable_;
  local_4 = 1;
  local_3c = &clDataList::_vbtable__for__clData__;
  local_2c = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
  clData::clData((clData *)&local_40,3);
  local_4._0_1_ = 2;
  clPointerList<class_clData*>::clPointerList<class_clData*>
            ((clPointerList<class_clData*> *)local_34);
  local_40 = &clDataList::_vftable__for__clData__;
  local_34[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_4._0_1_ = 3;
  GetNewCurMessage(this,0x38);
  if (*(int *)(this + 8) == 0) {
    local_40 = &clDataList::_vftable__for__clData__;
    local_34[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
    local_4 = CONCAT31(local_4._1_3_,4);
    clPointerList<class_clData*>::~clPointerList<class_clData*>
              ((clPointerList<class_clData*> *)local_34);
    local_40 = &clData::_vftable_;
    local_28 = &clDataBin::_vftable_;
    local_4 = 5;
    _STL::
    _Vector_base<void*,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
    ::
    ~_Vector_base<void*,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
              ((_Vector_base<void*,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
                *)&local_1c);
    ExceptionList = local_c;
    return '\0';
  }
  uVar1 = clDataList::GetIndex(*(clDataList **)(*(int *)(this + 8) + 8),(clDataList *)&local_40,1);
  if (uVar1 == '\0') {
    local_40 = &clDataList::_vftable__for__clData__;
    local_34[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
    local_4 = CONCAT31(local_4._1_3_,6);
    clPointerList<class_clData*>::~clPointerList<class_clData*>
              ((clPointerList<class_clData*> *)local_34);
    local_40 = &clData::_vftable_;
    local_28 = &clDataBin::_vftable_;
    local_4 = 7;
    _STL::
    _Vector_base<void*,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
    ::
    ~_Vector_base<void*,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
              ((_Vector_base<void*,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
                *)&local_1c);
    ExceptionList = local_c;
    return '\0';
  }
  uVar1 = clDataList::GetIndex((clDataList *)&local_40,(clDataBin *)&local_28,1);
  if (uVar1 == '\0') {
    local_4 = CONCAT31(local_4._1_3_,1);
    clDataList::~clDataList((clDataList *)&local_40);
    local_4 = 0xffffffff;
    clDataBin::~clDataBin((clDataBin *)&local_28);
    ExceptionList = local_c;
    return '\0';
  }
  local_40 = &clDataList::_vftable__for__clData__;
  local_34[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  *param_1 = local_18 - local_1c;
  local_4 = CONCAT31(local_4._1_3_,8);
  clPointerList<class_clData*>::~clPointerList<class_clData*>
            ((clPointerList<class_clData*> *)local_34);
  local_40 = &clData::_vftable_;
  local_28 = &clDataBin::_vftable_;
  local_4 = 9;
  _STL::
  _Vector_base<void*,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
  ::
  ~_Vector_base<void*,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
            ((_Vector_base<void*,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
              *)&local_1c);
  ExceptionList = local_c;
  return '\x01';
}




/* from: libgsclient:GSLobbyLib.cpp
   addr: 005A2930 */

uchar __thiscall
CGSLobbyLib::ExtractRoomInfo
          (CGSLobbyLib *this,clDataList *param_1,short *param_2,char *param_3,int *param_4,
          int *param_5,int *param_6,int *param_7,short *param_8,char *param_9,char *param_10,
          char *param_11,char *param_12,char *param_13,void *param_14,int param_15,uint *param_16,
          uint *param_17,uint *param_18,uint *param_19,char *param_20,char *param_21,int *param_22)

{
  uchar uVar1;
  
  uVar1 = clDataList::GetIndex(param_1,param_2,0);
  if (uVar1 == '\0') {
    return '\0';
  }
  uVar1 = clDataList::GetIndex(param_1,param_3,1,0x21);
  if (uVar1 == '\0') {
    return '\0';
  }
  uVar1 = clDataList::GetIndex(param_1,param_4,2);
  if (uVar1 == '\0') {
    return '\0';
  }
  uVar1 = clDataList::GetIndex(param_1,param_5,3);
  if (uVar1 == '\0') {
    return '\0';
  }
  uVar1 = clDataList::GetIndex(param_1,param_6,4);
  if (uVar1 == '\0') {
    return '\0';
  }
  uVar1 = clDataList::GetIndex(param_1,param_7,5);
  if (uVar1 == '\0') {
    return '\0';
  }
  uVar1 = clDataList::GetIndex(param_1,param_8,6);
  if (uVar1 == '\0') {
    return '\0';
  }
  uVar1 = clDataList::GetIndex(param_1,param_9,7,0x10);
  if (uVar1 == '\0') {
    return '\0';
  }
  uVar1 = clDataList::GetIndex(param_1,param_10,8,0x84);
  if (uVar1 == '\0') {
    return '\0';
  }
  uVar1 = clDataList::GetIndex(param_1,param_11,9,99);
  if (uVar1 == '\0') {
    return '\0';
  }
  if (param_15 != 0) {
    uVar1 = clDataList::GetIndex(param_1,param_14,param_15,10);
    if (uVar1 == '\0') {
      return '\0';
    }
  }
  uVar1 = clDataList::GetIndex(param_1,param_22,0xb);
  if (uVar1 == '\0') {
    return '\0';
  }
  uVar1 = clDataList::GetIndex(param_1,param_16,0xc);
  if (uVar1 == '\0') {
    return '\0';
  }
  uVar1 = clDataList::GetIndex(param_1,param_17,0xd);
  if (uVar1 == '\0') {
    return '\0';
  }
  uVar1 = clDataList::GetIndex(param_1,param_18,0xe);
  if (uVar1 == '\0') {
    return '\0';
  }
  uVar1 = clDataList::GetIndex(param_1,param_19,0xf);
  if (uVar1 == '\0') {
    return '\0';
  }
  uVar1 = clDataList::GetIndex(param_1,param_12,0x10);
  if (uVar1 == '\0') {
    return '\0';
  }
  uVar1 = clDataList::GetIndex(param_1,param_13,0x11);
  if (uVar1 == '\0') {
    return '\0';
  }
  uVar1 = clDataList::GetIndex(param_1,param_20,0x12);
  if (uVar1 == '\0') {
    return '\0';
  }
  uVar1 = clDataList::GetIndex(param_1,param_21,0x13);
  return uVar1 != '\0';
}




/* from: libgsclient:GSLobbyLib.cpp
   addr: 005A2B10 */

uchar __thiscall
CGSLobbyLib::ExtractLobbyInfo
          (CGSLobbyLib *this,clDataList *param_1,short *param_2,char *param_3,int *param_4,
          int *param_5,int *param_6,int *param_7,short *param_8,char *param_9,char *param_10,
          char *param_11,void *param_12,int param_13,uint *param_14,uint *param_15,int *param_16)

{
  uchar uVar1;
  
  uVar1 = clDataList::GetIndex(param_1,param_2,0);
  if (uVar1 == '\0') {
    return '\0';
  }
  uVar1 = clDataList::GetIndex(param_1,param_3,1,0x21);
  if (uVar1 == '\0') {
    return '\0';
  }
  uVar1 = clDataList::GetIndex(param_1,param_4,2);
  if (uVar1 == '\0') {
    return '\0';
  }
  uVar1 = clDataList::GetIndex(param_1,param_5,3);
  if (uVar1 == '\0') {
    return '\0';
  }
  uVar1 = clDataList::GetIndex(param_1,param_6,4);
  if (uVar1 == '\0') {
    return '\0';
  }
  uVar1 = clDataList::GetIndex(param_1,param_7,5);
  if (uVar1 == '\0') {
    return '\0';
  }
  uVar1 = clDataList::GetIndex(param_1,param_8,6);
  if (uVar1 == '\0') {
    return '\0';
  }
  uVar1 = clDataList::GetIndex(param_1,param_9,7,0x10);
  if (uVar1 == '\0') {
    return '\0';
  }
  uVar1 = clDataList::GetIndex(param_1,param_10,8,0x84);
  if (uVar1 == '\0') {
    return '\0';
  }
  uVar1 = clDataList::GetIndex(param_1,param_11,9,99);
  if (uVar1 == '\0') {
    return '\0';
  }
  if (param_13 != 0) {
    uVar1 = clDataList::GetIndex(param_1,param_12,param_13,10);
    if (uVar1 == '\0') {
      return '\0';
    }
  }
  uVar1 = clDataList::GetIndex(param_1,param_16,0xb);
  if (uVar1 == '\0') {
    return '\0';
  }
  uVar1 = clDataList::GetIndex(param_1,param_14,0xc);
  if (uVar1 == '\0') {
    return '\0';
  }
  uVar1 = clDataList::GetIndex(param_1,param_15,0xd);
  return uVar1 != '\0';
}




/* from: libgsclient:GSLobbyLib.cpp
   addr: 005A2C60 */

uchar __thiscall
CGSLobbyLib::Lobby_Init
          (CGSLobbyLib *this,CConnection *param_1,CMsgQueue *param_2,char *param_3,char *param_4,
          char *param_5)

{
  CLobbySrvConnectionList *this_00;
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c979a;
  local_c = ExceptionList;
  if ((param_1 != (CConnection *)0x0) && (param_3 != (char *)0x0)) {
    if (*(int *)(this + 0x10) != 0) {
      return '\x01';
    }
    ExceptionList = &local_c;
    this_00 = (CLobbySrvConnectionList *)ExtAlloc_Malloc_4(0x1dc);
    local_4 = 0;
    if (this_00 == (CLobbySrvConnectionList *)0x0) {
      iVar1 = 0;
    }
    else {
      iVar1 = CLobbySrvConnectionList::CLobbySrvConnectionList(this_00,param_1);
    }
    *(int *)(this + 0x10) = iVar1;
    strncpy((char *)(iVar1 + 0xbc),param_3,0x10);
    strncpy((char *)(*(int *)(this + 0x10) + 0xcc),param_4,0x81);
    strncpy((char *)(*(int *)(this + 0x10) + 0x14d),param_5,0x81);
    *(CConnection **)(this + 0xc) = param_1;
    *(CMsgQueue **)(this + 0x20) = param_2;
    ExceptionList = local_c;
    return '\x01';
  }
  return '\0';
}




/* from: libgsclient:GSLobbyLib.cpp
   addr: 005A2D60 */

uchar __thiscall CGSLobbyLib::Lobby_UnInit(CGSLobbyLib *this)

{
  if (*(undefined4 **)(this + 0x10) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x10))(1);
    *(undefined4 *)(this + 0x10) = 0;
  }
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  return '\x01';
}




/* from: libgsclient:GSLobbyLib.cpp
   addr: 005A2D90 */

uchar __thiscall CGSLobbyLib::Lobby_RemoveLobbySrv(CGSLobbyLib *this)

{
  uchar uVar1;
  int local_28;
  undefined **local_24;
  undefined4 *local_20;
  undefined4 local_1c;
  undefined **local_18 [2];
  undefined8 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c97f0;
  local_c = ExceptionList;
  local_28 = 0;
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
  if (*(int *)(this + 0x10) == 0) {
    local_4 = 2;
  }
  else {
    GetNewCurMessage(this,0x13);
    if (*(int *)(this + 8) == 0) {
      local_4 = 3;
    }
    else {
      uVar1 = clDataList::GetIndex
                        (*(clDataList **)(*(int *)(this + 8) + 8),(clDataList *)&local_24,1);
      if (uVar1 == '\0') {
        local_4 = 4;
      }
      else {
        uVar1 = clDataList::GetIndex((clDataList *)&local_24,&local_28,0);
        if (uVar1 == '\0') {
          local_4 = 5;
        }
        else {
          uVar1 = CLobbySrvConnectionList::RemoveLobbySrvFromList
                            (*(CLobbySrvConnectionList **)(this + 0x10),local_28);
          local_18[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
          local_24 = &clDataList::_vftable__for__clData__;
          if (uVar1 != '\0') {
            local_4 = 6;
            clPointerList<class_clData*>::~clPointerList<class_clData*>
                      ((clPointerList<class_clData*> *)local_18);
            ExceptionList = local_c;
            return '\x01';
          }
          local_4 = 7;
        }
      }
    }
  }
  local_18[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_24 = &clDataList::_vftable__for__clData__;
  clPointerList<class_clData*>::~clPointerList<class_clData*>
            ((clPointerList<class_clData*> *)local_18);
  ExceptionList = local_c;
  return '\0';
}




/* from: libgsclient:GSLobbyLib.cpp
   addr: 005A2F00 */

uchar __thiscall
CGSLobbyLib::LobbySend_Login(CGSLobbyLib *this,char *param_1,uchar param_2,ushort param_3)

{
  char cVar1;
  uchar uVar2;
  int iVar3;
  char *pcVar4;
  undefined3 in_stack_00000009;
  undefined **local_3c;
  undefined4 *local_38;
  undefined4 local_34;
  undefined **local_30 [2];
  undefined8 *local_28;
  undefined **local_24;
  undefined4 *local_20;
  undefined4 local_1c;
  undefined **local_18 [2];
  undefined8 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c9838;
  local_c = ExceptionList;
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
  local_38 = &clDataList::_vbtable__for__clData__;
  local_28 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
  local_34 = 3;
  local_3c = &clData::_vftable_;
  local_4._0_1_ = 2;
  local_4._1_3_ = 0;
  clPointerList<class_clData*>::clPointerList<class_clData*>
            ((clPointerList<class_clData*> *)local_30);
  local_3c = &clDataList::_vftable__for__clData__;
  local_30[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_4._0_1_ = 3;
  iVar3 = -1;
  pcVar4 = param_1;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  if (iVar3 != -2) {
    ParseRequestedGames(this,param_1);
  }
  *(ushort *)(this + 0x1c) = param_3;
  this[0x1a] = (CGSLobbyLib)param_2;
  clDataList::Add((clDataList *)&local_24,param_1);
  _param_2 = 0x15;
  clDataList::Add((clDataList *)&local_3c,(int *)&param_2);
  clDataList::Add((clDataList *)&local_3c,(clDataList *)&local_24);
  uVar2 = CConnection::SendMessageA
                    (*(CConnection **)(this + 0xc),0xd1,'\x01',(clDataList *)&local_3c);
  local_30[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  if (uVar2 == '\0') {
    local_3c = &clDataList::_vftable__for__clData__;
    local_4 = CONCAT31(local_4._1_3_,6);
    clPointerList<class_clData*>::~clPointerList<class_clData*>
              ((clPointerList<class_clData*> *)local_30);
    local_3c = &clData::_vftable_;
    local_4 = 0xffffffff;
    clDataList::~clDataList((clDataList *)&local_24);
  }
  else {
    local_3c = &clDataList::_vftable__for__clData__;
    local_4 = CONCAT31(local_4._1_3_,4);
    clPointerList<class_clData*>::~clPointerList<class_clData*>
              ((clPointerList<class_clData*> *)local_30);
    local_3c = &clData::_vftable_;
    local_24 = &clDataList::_vftable__for__clData__;
    local_18[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
    local_4 = 5;
    clPointerList<class_clData*>::~clPointerList<class_clData*>
              ((clPointerList<class_clData*> *)local_18);
  }
  ExceptionList = local_c;
  return uVar2 != '\0';
}




/* from: libgsclient:GSLobbyLib.cpp
   addr: 005A30A0 */

uchar __thiscall CGSLobbyLib::LobbySend_DisconnectAll(CGSLobbyLib *this)

{
  if (*(CLobbySrvConnectionList **)(this + 0x10) == (CLobbySrvConnectionList *)0x0) {
    return '\0';
  }
  CLobbySrvConnectionList::RemoveAllLobbySrvFromList(*(CLobbySrvConnectionList **)(this + 0x10));
  return '\x01';
}




/* from: libgsclient:GSLobbyLib.cpp
   addr: 005A30C0 */

uchar __thiscall
CGSLobbyLib::LobbySend_JoinRoom
          (CGSLobbyLib *this,int param_1,int param_2,char *param_3,uchar param_4,char *param_5,
          int param_6)

{
  uchar uVar1;
  undefined3 in_stack_00000011;
  clDataList acStack_44 [16];
  undefined4 uStack_34;
  undefined **local_24;
  undefined4 *local_20;
  undefined4 local_1c;
  undefined **local_18;
  list<class_clData*> local_14 [4];
  undefined8 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c98be;
  local_c = ExceptionList;
  if (*(int *)(this + 0x10) != 0) {
    local_20 = &clDataList::_vbtable__for__clData__;
    local_10 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
    local_1c = 3;
    local_24 = &clData::_vftable_;
    local_4 = 0;
    uStack_34 = 0x5a311a;
    ExceptionList = &local_c;
    ExtAlloc::list<class_clData*>::list<class_clData*>(local_14);
    local_24 = &clDataList::_vftable__for__clData__;
    local_18 = &clDataList::_vftable__for__clPointerList<class_clData*>__;
    local_4 = 1;
    uStack_34 = 0x5a3140;
    clDataList::Add((clDataList *)&local_24,&param_1);
    uStack_34 = 0x5a314e;
    clDataList::Add((clDataList *)&local_24,param_3);
    uStack_34 = 0x5a315c;
    clDataList::Add((clDataList *)&local_24,&param_6);
    _param_4 = (clDataList *)(uint)(param_4 != '\0');
    uStack_34 = 0x5a3179;
    clDataList::Add((clDataList *)&local_24,(int *)&param_4);
    uStack_34 = 0x5a3187;
    clDataList::Add((clDataList *)&local_24,param_5);
    _param_4 = acStack_44;
    clDataList::clDataList(acStack_44,(clDataList *)&local_24);
    uVar1 = CLobbySrvConnectionList::SendMessageA
                      (*(CLobbySrvConnectionList **)(this + 0x10),param_1,param_2,0x18,2);
    local_24 = &clDataList::_vftable__for__clData__;
    if (uVar1 != '\0') {
      _param_4 = (clDataList *)&local_18;
      local_18 = &clPointerList<class_clData*>::_vftable_;
      local_4._0_1_ = 3;
      local_4._1_3_ = 0;
      clPointerList<class_clRcvElement*>::clear((clPointerList<class_clRcvElement*> *)&local_18);
      local_4 = CONCAT31(local_4._1_3_,2);
      ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
                ((list<class_clRcvElement*> *)local_14);
      ExceptionList = local_c;
      return '\x01';
    }
    _param_4 = (clDataList *)&local_18;
    local_18 = &clPointerList<class_clData*>::_vftable_;
    local_4._0_1_ = 5;
    local_4._1_3_ = 0;
    clPointerList<class_clRcvElement*>::clear((clPointerList<class_clRcvElement*> *)&local_18);
    local_4 = CONCAT31(local_4._1_3_,4);
    ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
              ((list<class_clRcvElement*> *)local_14);
  }
  ExceptionList = local_c;
  return '\0';
}




/* from: libgsclient:GSLobbyLib.cpp
   addr: 005A3250 */

uchar __thiscall
CGSLobbyLib::LobbySend_PlayerMatchStarted(CGSLobbyLib *this,int param_1,int param_2)

{
  uchar uVar1;
  clDataList acStack_50 [12];
  undefined4 uStack_44;
  Allocator<class_clProxyMessage*> local_2d;
  undefined1 *local_2c;
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
  
  puStack_8 = &LAB_005c991f;
  local_c = ExceptionList;
  local_2c = (undefined1 *)0x0;
  if (*(int *)(this + 0x10) == 0) {
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
  clDataList::Add((clDataList *)&local_24,&param_1);
  local_2c = acStack_50;
  clDataList::clDataList(acStack_50,(clDataList *)&local_24);
  uVar1 = CLobbySrvConnectionList::SendMessageA
                    (*(CLobbySrvConnectionList **)(this + 0x10),param_1,param_2,0x2c,2);
  local_24 = &clDataList::_vftable__for__clData__;
  param_2 = (int)&local_18;
  local_18 = &clPointerList<class_clData*>::_vftable_;
  local_4._0_1_ = 4;
  local_4._1_3_ = 0;
  clPointerList<class_clRcvElement*>::clear((clPointerList<class_clRcvElement*> *)&local_18);
  local_28 = &local_14;
  local_4 = CONCAT31(local_4._1_3_,5);
  _STL::_List_base<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_>::clear
            ((_List_base<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_> *)
             &local_14);
  uStack_44 = 0x5a336d;
  _STL::
  _STLP_alloc_proxy<struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>*,struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
  ::deallocate((_STLP_alloc_proxy<struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>*,struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
                *)&local_14,local_14,1);
  ExceptionList = local_c;
  return uVar1;
}




/* from: libgsclient:GSLobbyLib.cpp
   addr: 005A3390 */

uchar __thiscall
CGSLobbyLib::LobbySend_PlayerMatchFinished(CGSLobbyLib *this,int param_1,int param_2)

{
  uchar uVar1;
  clDataList acStack_50 [12];
  undefined4 uStack_44;
  Allocator<class_clProxyMessage*> local_2d;
  undefined1 *local_2c;
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
  
  puStack_8 = &LAB_005c997f;
  local_c = ExceptionList;
  local_2c = (undefined1 *)0x0;
  if (*(int *)(this + 0x10) == 0) {
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
  clDataList::Add((clDataList *)&local_24,&param_1);
  local_2c = acStack_50;
  clDataList::clDataList(acStack_50,(clDataList *)&local_24);
  uVar1 = CLobbySrvConnectionList::SendMessageA
                    (*(CLobbySrvConnectionList **)(this + 0x10),param_1,param_2,0x46,2);
  local_24 = &clDataList::_vftable__for__clData__;
  param_2 = (int)&local_18;
  local_18 = &clPointerList<class_clData*>::_vftable_;
  local_4._0_1_ = 4;
  local_4._1_3_ = 0;
  clPointerList<class_clRcvElement*>::clear((clPointerList<class_clRcvElement*> *)&local_18);
  local_28 = &local_14;
  local_4 = CONCAT31(local_4._1_3_,5);
  _STL::_List_base<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_>::clear
            ((_List_base<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_> *)
             &local_14);
  uStack_44 = 0x5a34ad;
  _STL::
  _STLP_alloc_proxy<struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>*,struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
  ::deallocate((_STLP_alloc_proxy<struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>*,struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
                *)&local_14,local_14,1);
  ExceptionList = local_c;
  return uVar1;
}




/* from: libgsclient:GSLobbyLib.cpp
   addr: 005A34D0 */

uchar __thiscall
CGSLobbyLib::LobbySend_SubmitMatchResult
          (CGSLobbyLib *this,int param_1,int param_2,clDataList *param_3)

{
  uchar uVar1;
  clDataList acStack_20 [24];
  
  if (*(int *)(this + 0x10) == 0) {
    return '\0';
  }
  clDataList::clDataList(acStack_20,param_3);
  uVar1 = CLobbySrvConnectionList::SendMessageA
                    (*(CLobbySrvConnectionList **)(this + 0x10),param_1,param_2,0x1e,2);
  return uVar1 != '\0';
}




/* from: libgsclient:GSLobbyLib.cpp
   addr: 005A3520 */

uchar __thiscall CGSLobbyLib::LobbySend_GameConnected(CGSLobbyLib *this,int param_1,int param_2)

{
  uchar uVar1;
  clDataList acStack_44 [16];
  undefined4 uStack_34;
  undefined **local_24;
  undefined4 *local_20;
  undefined4 local_1c;
  undefined **local_18;
  list<class_clData*> local_14 [4];
  undefined8 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c99fe;
  local_c = ExceptionList;
  if (*(int *)(this + 0x10) != 0) {
    local_20 = &clDataList::_vbtable__for__clData__;
    local_10 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
    local_1c = 3;
    local_24 = &clData::_vftable_;
    local_4 = 0;
    uStack_34 = 0x5a357a;
    ExceptionList = &local_c;
    ExtAlloc::list<class_clData*>::list<class_clData*>(local_14);
    local_24 = &clDataList::_vftable__for__clData__;
    local_18 = &clDataList::_vftable__for__clPointerList<class_clData*>__;
    local_4 = 1;
    uStack_34 = 0x5a35a0;
    clDataList::Add((clDataList *)&local_24,&param_1);
    clDataList::clDataList(acStack_44,(clDataList *)&local_24);
    uVar1 = CLobbySrvConnectionList::SendMessageA
                      (*(CLobbySrvConnectionList **)(this + 0x10),param_1,param_2,0x22,2);
    local_24 = &clDataList::_vftable__for__clData__;
    if (uVar1 != '\0') {
      param_2 = (int)&local_18;
      local_18 = &clPointerList<class_clData*>::_vftable_;
      local_4._0_1_ = 3;
      local_4._1_3_ = 0;
      clPointerList<class_clRcvElement*>::clear((clPointerList<class_clRcvElement*> *)&local_18);
      local_4 = CONCAT31(local_4._1_3_,2);
      ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
                ((list<class_clRcvElement*> *)local_14);
      ExceptionList = local_c;
      return '\x01';
    }
    param_2 = (int)&local_18;
    local_18 = &clPointerList<class_clData*>::_vftable_;
    local_4._0_1_ = 5;
    local_4._1_3_ = 0;
    clPointerList<class_clRcvElement*>::clear((clPointerList<class_clRcvElement*> *)&local_18);
    local_4 = CONCAT31(local_4._1_3_,4);
    ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
              ((list<class_clRcvElement*> *)local_14);
  }
  ExceptionList = local_c;
  return '\0';
}




/* from: libgsclient:GSLobbyLib.cpp
   addr: 005A3670 */

uchar __thiscall
CGSLobbyLib::LobbySend_GetGroupInfo(CGSLobbyLib *this,int param_1,int param_2,int param_3)

{
  uchar uVar1;
  clDataList acStack_50 [12];
  undefined4 uStack_44;
  Allocator<class_clProxyMessage*> local_2d;
  undefined1 *local_2c;
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
  
  puStack_8 = &LAB_005c9a5f;
  local_c = ExceptionList;
  local_2c = (undefined1 *)0x0;
  if (*(int *)(this + 0x10) == 0) {
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
  clDataList::Add((clDataList *)&local_24,&param_1);
  clDataList::Add((clDataList *)&local_24,&param_3);
  local_2c = acStack_50;
  clDataList::clDataList(acStack_50,(clDataList *)&local_24);
  uVar1 = CLobbySrvConnectionList::SendMessageA
                    (*(CLobbySrvConnectionList **)(this + 0x10),param_1,param_2,9,2);
  local_24 = &clDataList::_vftable__for__clData__;
  param_2 = (int)&local_18;
  local_18 = &clPointerList<class_clData*>::_vftable_;
  local_4._0_1_ = 4;
  local_4._1_3_ = 0;
  clPointerList<class_clRcvElement*>::clear((clPointerList<class_clRcvElement*> *)&local_18);
  local_28 = &local_14;
  local_4 = CONCAT31(local_4._1_3_,5);
  _STL::_List_base<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_>::clear
            ((_List_base<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_> *)
             &local_14);
  uStack_44 = 0x5a379b;
  _STL::
  _STLP_alloc_proxy<struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>*,struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
  ::deallocate((_STLP_alloc_proxy<struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>*,struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
                *)&local_14,local_14,1);
  ExceptionList = local_c;
  return uVar1;
}




/* from: libgsclient:GSLobbyLib.cpp
   addr: 005A37B0 */

uchar __thiscall CGSLobbyLib::LobbyRcv_LoginResult(CGSLobbyLib *this,uchar *param_1,int *param_2)

{
  uchar uVar1;
  
  GetNewCurMessage(this,0x15);
  uVar1 = DecodeRcv_Result(this,0x15,param_1,param_2);
  return uVar1 != '\0';
}




/* from: libgsclient:GSLobbyLib.cpp
   addr: 005A37E0 */

uchar __thiscall CGSLobbyLib::LobbyRcv_LobbyDisconnection(CGSLobbyLib *this,int *param_1)

{
  GetNewCurMessage(this,0x12);
  if (*(int *)(this + 8) == 0) {
    return '\0';
  }
  *param_1 = *(int *)(*(int *)(this + 8) + 0x18);
  return '\x01';
}




/* from: libgsclient:GSLobbyLib.cpp
   addr: 005A3810
   addr: 005A3810 */

uchar __thiscall
CGSLobbyLib::LobbyRcv_LobbyInfo
          (CGSLobbyLib *this,clDataList *param_1,short *param_2,char *param_3,int *param_4,
          int *param_5,int *param_6,int *param_7,short *param_8,char *param_9,char *param_10,
          char *param_11,void *param_12,int param_13,uint *param_14,uint *param_15,int *param_16)

{
  uchar uVar1;
  
  if (*(int *)(this + 0x10) == 0) {
    return '\0';
  }
  uVar1 = ExtractLobbyInfo(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                           param_9,param_10,param_11,param_12,param_13,param_14,param_15,param_16);
  if (uVar1 == '\0') {
    return '\0';
  }
  CLobbySrvConnectionList::RegisterGroup
            (*(CLobbySrvConnectionList **)(this + 0x10),*param_4,*param_5);
  return '\x01';
}




/* from: libgsclient:GSLobbyLib.cpp
   addr: 005A38A0
   addr: 005A38A0 */

uchar __thiscall
CGSLobbyLib::LobbyRcv_RoomInfo
          (CGSLobbyLib *this,clDataList *param_1,short *param_2,char *param_3,int *param_4,
          int *param_5,int *param_6,int *param_7,short *param_8,char *param_9,char *param_10,
          char *param_11,char *param_12,char *param_13,void *param_14,int param_15,uint *param_16,
          uint *param_17,uint *param_18,uint *param_19,char *param_20,char *param_21,int *param_22)

{
  uchar uVar1;
  
  if (*(int *)(this + 0x10) == 0) {
    return '\0';
  }
  uVar1 = ExtractRoomInfo(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                          param_9,param_10,param_11,param_12,param_13,param_14,param_15,param_16,
                          param_17,param_18,param_19,param_20,param_21,param_22);
  if (uVar1 == '\0') {
    return '\0';
  }
  CLobbySrvConnectionList::RegisterGroup
            (*(CLobbySrvConnectionList **)(this + 0x10),*param_4,*param_5);
  return '\x01';
}




/* from: libgsclient:GSLobbyLib.cpp
   addr: 005A3950 */

uchar __thiscall
CGSLobbyLib::LobbyRcv_GroupInfoGet(CGSLobbyLib *this,uchar *param_1,int *param_2,int *param_3)

{
  uchar uVar1;
  undefined **local_3c;
  undefined4 *local_38;
  undefined **local_30 [2];
  undefined8 *local_28;
  undefined **local_24;
  undefined4 *local_20;
  undefined **local_18 [2];
  undefined8 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c9aa8;
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
  local_38 = &clDataList::_vbtable__for__clData__;
  local_28 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
  clData::clData((clData *)&local_3c,3);
  local_4._0_1_ = 2;
  clPointerList<class_clData*>::clPointerList<class_clData*>
            ((clPointerList<class_clData*> *)local_30);
  local_3c = &clDataList::_vftable__for__clData__;
  local_30[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_4._0_1_ = 3;
  if (*(int *)(this + 0x10) == 0) {
    local_4 = CONCAT31(local_4._1_3_,1);
    clDataList::~clDataList((clDataList *)&local_3c);
  }
  else {
    GetNewCurMessage(this,9);
    uVar1 = clDataList::GetIndex(*(clDataList **)(*(int *)(this + 8) + 8),(clDataList *)&local_24,1)
    ;
    if (uVar1 == '\0') {
      local_4 = CONCAT31(local_4._1_3_,1);
      clDataList::~clDataList((clDataList *)&local_3c);
    }
    else {
      *param_1 = '\'';
      uVar1 = clDataList::GetIndex((clDataList *)&local_24,(clDataList *)&local_3c,1);
      if (uVar1 == '\0') {
        local_4 = CONCAT31(local_4._1_3_,1);
        clDataList::~clDataList((clDataList *)&local_3c);
      }
      else {
        uVar1 = clDataList::GetIndex((clDataList *)&local_3c,param_2,0);
        if (uVar1 != '\0') {
          uVar1 = clDataList::GetIndex((clDataList *)&local_3c,param_3,1);
          local_4 = CONCAT31(local_4._1_3_,1);
          if (uVar1 == '\0') {
            clDataList::~clDataList((clDataList *)&local_3c);
            local_24 = &clDataList::_vftable__for__clData__;
            local_18[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
            local_4 = 5;
            clPointerList<class_clData*>::~clPointerList<class_clData*>
                      ((clPointerList<class_clData*> *)local_18);
            ExceptionList = local_c;
            return '\0';
          }
          clDataList::~clDataList((clDataList *)&local_3c);
          local_24 = &clDataList::_vftable__for__clData__;
          local_18[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
          local_4 = 6;
          clPointerList<class_clData*>::~clPointerList<class_clData*>
                    ((clPointerList<class_clData*> *)local_18);
          ExceptionList = local_c;
          return '\x01';
        }
        local_3c = &clDataList::_vftable__for__clData__;
        local_30[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
        local_4 = CONCAT31(local_4._1_3_,4);
        clPointerList<class_clData*>::~clPointerList<class_clData*>
                  ((clPointerList<class_clData*> *)local_30);
        local_3c = &clData::_vftable_;
      }
    }
  }
  local_4 = 0xffffffff;
  clDataList::~clDataList((clDataList *)&local_24);
  ExceptionList = local_c;
  return '\0';
}




/* from: libgsclient:GSLobbyLib.cpp
   addr: 005A3B20 */

uchar __thiscall
CGSLobbyLib::LobbyRcv_JoinLobbyReply
          (CGSLobbyLib *this,uchar *param_1,int *param_2,char *param_3,int *param_4,int *param_5)

{
  char cVar1;
  uchar uVar2;
  uchar uVar3;
  char *pcVar4;
  undefined **local_3c;
  undefined4 *local_38;
  undefined **local_30 [2];
  undefined8 *local_28;
  undefined **local_24;
  undefined4 *local_20;
  undefined **local_18 [2];
  undefined8 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c9b00;
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
  local_38 = &clDataList::_vbtable__for__clData__;
  local_28 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
  clData::clData((clData *)&local_3c,3);
  local_4._0_1_ = 2;
  clPointerList<class_clData*>::clPointerList<class_clData*>
            ((clPointerList<class_clData*> *)local_30);
  local_3c = &clDataList::_vftable__for__clData__;
  local_30[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_4._0_1_ = 3;
  GetNewCurMessage(this,0x17);
  uVar2 = DecodeRcv_Result(this,0x17,param_1,param_2);
  if (uVar2 == '\0') {
    local_4 = CONCAT31(local_4._1_3_,4);
  }
  else {
    *param_5 = *(int *)(*(int *)(this + 8) + 0x18);
    uVar2 = clDataList::GetIndex(*(clDataList **)(*(int *)(this + 8) + 8),(clDataList *)&local_24,1)
    ;
    if (uVar2 == '\0') {
      local_4 = CONCAT31(local_4._1_3_,1);
      clDataList::~clDataList((clDataList *)&local_3c);
      local_24 = &clDataList::_vftable__for__clData__;
      local_18[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
      local_4 = 5;
      clPointerList<class_clData*>::~clPointerList<class_clData*>
                ((clPointerList<class_clData*> *)local_18);
      ExceptionList = local_c;
      return '\0';
    }
    uVar2 = clDataList::GetIndex((clDataList *)&local_24,(clDataList *)&local_3c,1);
    if (uVar2 == '\0') {
      local_4 = CONCAT31(local_4._1_3_,1);
      clDataList::~clDataList((clDataList *)&local_3c);
      goto LAB_005a3cc1;
    }
    uVar2 = *param_1;
    uVar3 = clDataList::GetIndex((clDataList *)&local_3c,param_4,(uint)(uVar2 != '&'));
    if (uVar3 != '\0') {
      uVar2 = clDataList::GetIndex((clDataList *)&local_3c,param_3,(uVar2 != '&') + 1);
      if (uVar2 == '\0') {
        pcVar4 = s_;
        do {
          cVar1 = *pcVar4;
          (param_3 + -0x601fe8)[(int)pcVar4] = cVar1;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
      }
      local_4 = CONCAT31(local_4._1_3_,1);
      clDataList::~clDataList((clDataList *)&local_3c);
      local_24 = &clDataList::_vftable__for__clData__;
      local_18[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
      local_4 = 7;
      clPointerList<class_clData*>::~clPointerList<class_clData*>
                ((clPointerList<class_clData*> *)local_18);
      ExceptionList = local_c;
      return '\x01';
    }
    local_4 = CONCAT31(local_4._1_3_,6);
  }
  local_30[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_3c = &clDataList::_vftable__for__clData__;
  clPointerList<class_clData*>::~clPointerList<class_clData*>
            ((clPointerList<class_clData*> *)local_30);
  local_3c = &clData::_vftable_;
LAB_005a3cc1:
  local_4 = 0xffffffff;
  clDataList::~clDataList((clDataList *)&local_24);
  ExceptionList = local_c;
  return '\0';
}




/* from: libgsclient:GSLobbyLib.cpp
   addr: 005A3D50 */

uchar __thiscall
CGSLobbyLib::LobbyRcv_JoinRoomReply
          (CGSLobbyLib *this,uchar *param_1,int *param_2,char *param_3,int *param_4,int *param_5)

{
  char cVar1;
  uchar uVar2;
  uchar uVar3;
  char *pcVar4;
  undefined **local_3c;
  undefined4 *local_38;
  undefined **local_30 [2];
  undefined8 *local_28;
  undefined **local_24;
  undefined4 *local_20;
  undefined **local_18 [2];
  undefined8 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c9b50;
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
  local_38 = &clDataList::_vbtable__for__clData__;
  local_28 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
  clData::clData((clData *)&local_3c,3);
  local_4._0_1_ = 2;
  clPointerList<class_clData*>::clPointerList<class_clData*>
            ((clPointerList<class_clData*> *)local_30);
  local_3c = &clDataList::_vftable__for__clData__;
  local_30[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_4._0_1_ = 3;
  GetNewCurMessage(this,0x18);
  uVar2 = DecodeRcv_Result(this,0x18,param_1,param_2);
  if (uVar2 == '\0') {
    local_4 = CONCAT31(local_4._1_3_,4);
  }
  else {
    *param_5 = *(int *)(*(int *)(this + 8) + 0x18);
    uVar2 = clDataList::GetIndex(*(clDataList **)(*(int *)(this + 8) + 8),(clDataList *)&local_24,1)
    ;
    if (uVar2 == '\0') {
      local_4 = CONCAT31(local_4._1_3_,1);
      clDataList::~clDataList((clDataList *)&local_3c);
      local_24 = &clDataList::_vftable__for__clData__;
      local_18[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
      local_4 = 5;
      clPointerList<class_clData*>::~clPointerList<class_clData*>
                ((clPointerList<class_clData*> *)local_18);
      ExceptionList = local_c;
      return '\0';
    }
    uVar2 = clDataList::GetIndex((clDataList *)&local_24,(clDataList *)&local_3c,1);
    if (uVar2 == '\0') {
      local_4 = CONCAT31(local_4._1_3_,1);
      clDataList::~clDataList((clDataList *)&local_3c);
      goto LAB_005a3ef1;
    }
    uVar2 = *param_1;
    uVar3 = clDataList::GetIndex((clDataList *)&local_3c,param_4,(uint)(uVar2 != '&'));
    if (uVar3 != '\0') {
      uVar2 = clDataList::GetIndex((clDataList *)&local_3c,param_3,(uVar2 != '&') + 1);
      if (uVar2 == '\0') {
        pcVar4 = s_;
        do {
          cVar1 = *pcVar4;
          (param_3 + -0x601fe8)[(int)pcVar4] = cVar1;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
      }
      local_4 = CONCAT31(local_4._1_3_,1);
      clDataList::~clDataList((clDataList *)&local_3c);
      local_24 = &clDataList::_vftable__for__clData__;
      local_18[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
      local_4 = 7;
      clPointerList<class_clData*>::~clPointerList<class_clData*>
                ((clPointerList<class_clData*> *)local_18);
      ExceptionList = local_c;
      return '\x01';
    }
    local_4 = CONCAT31(local_4._1_3_,6);
  }
  local_30[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_3c = &clDataList::_vftable__for__clData__;
  clPointerList<class_clData*>::~clPointerList<class_clData*>
            ((clPointerList<class_clData*> *)local_30);
  local_3c = &clData::_vftable_;
LAB_005a3ef1:
  local_4 = 0xffffffff;
  clDataList::~clDataList((clDataList *)&local_24);
  ExceptionList = local_c;
  return '\0';
}




/* from: libgsclient:GSLobbyLib.cpp
   addr: 005A3F80 */

uchar __thiscall CGSLobbyLib::LobbyRcv_LoginLobbyServerResult(CGSLobbyLib *this)

{
  uchar uVar1;
  undefined1 uVar2;
  int local_30;
  int local_2c;
  clPointerList<class_clRcvElement*> *local_28;
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
  puStack_8 = &LAB_005c9c05;
  local_c = ExceptionList;
  local_2c = 0;
  ExceptionList = &local_c;
  GetNewCurMessage(this,0xd2);
  if (*(int *)(this + 8) == 0) {
    ExceptionList = local_c;
    return '\0';
  }
  uVar2 = 3;
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
  clDataList::GetIndex(*(clDataList **)(*(int *)(this + 8) + 8),(clDataList *)&local_24,1);
  if (*(char *)(*(int *)(this + 8) + 4) == '&') {
    uVar1 = clDataList::GetIndex((clDataList *)&local_24,&local_30,0);
    if (uVar1 == '\0') {
      local_24 = &clDataList::_vftable__for__clData__;
      local_18 = &clDataList::_vftable__for__clPointerList<class_clData*>__;
      local_4 = 2;
      clPointerList<class_clData*>::~clPointerList<class_clData*>
                ((clPointerList<class_clData*> *)&local_18);
      ExceptionList = local_c;
      return '\0';
    }
    CLobbySrvConnectionList::LobbyServerFinishConnection
              (*(CLobbySrvConnectionList **)(this + 0x10),local_30);
    this[0x19] = (CGSLobbyLib)0x1;
  }
  else if (*(char *)(*(int *)(this + 8) + 4) == '\'') {
    uVar1 = clDataList::GetIndex((clDataList *)&local_24,&local_2c,0);
    if (uVar1 == '\0') {
      local_4._0_1_ = 4;
    }
    else {
      uVar1 = clDataList::GetIndex((clDataList *)&local_24,&local_30,1);
      if (uVar1 != '\0') {
        CLobbySrvConnectionList::ConnectFailed
                  (*(CLobbySrvConnectionList **)(this + 0x10),local_30,local_2c);
        goto LAB_005a4125;
      }
      uVar2 = 5;
      local_4._0_1_ = 6;
    }
    local_4._1_3_ = 0;
    local_18 = &clPointerList<class_clData*>::_vftable_;
    local_24 = &clDataList::_vftable__for__clData__;
    local_28 = (clPointerList<class_clRcvElement*> *)&local_18;
    clPointerList<class_clRcvElement*>::clear(local_28);
    local_4 = CONCAT31(local_4._1_3_,uVar2);
    ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>(local_14);
    ExceptionList = local_c;
    return '\0';
  }
LAB_005a4125:
  local_24 = &clDataList::_vftable__for__clData__;
  local_28 = (clPointerList<class_clRcvElement*> *)&local_18;
  local_18 = &clPointerList<class_clData*>::_vftable_;
  local_4._0_1_ = 8;
  local_4._1_3_ = 0;
  clPointerList<class_clRcvElement*>::clear((clPointerList<class_clRcvElement*> *)&local_18);
  local_4 = CONCAT31(local_4._1_3_,7);
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>(local_14);
  ExceptionList = local_c;
  return '\x01';
}




/* from: libgsclient:GSLobbyLib.cpp
   addr: 005A4180 */

uchar __thiscall
CGSLobbyLib::LobbyRcv_JoinLobbyServer(CGSLobbyLib *this,uchar *param_1,int *param_2)

{
  uchar uVar1;
  int local_c8;
  undefined **local_c4;
  undefined4 *local_c0;
  undefined **local_b8 [2];
  undefined8 *local_b0;
  int local_ac;
  undefined **local_a8;
  undefined4 *local_a4;
  undefined **local_9c [2];
  undefined8 *local_94;
  char local_90 [132];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c9c3c;
  local_c = ExceptionList;
  local_ac = 0;
  local_a4 = &clDataList::_vbtable__for__clData__;
  local_94 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
  ExceptionList = &local_c;
  clData::clData((clData *)&local_a8,3);
  local_4 = 0;
  clPointerList<class_clData*>::clPointerList<class_clData*>
            ((clPointerList<class_clData*> *)local_9c);
  local_a8 = &clDataList::_vftable__for__clData__;
  local_9c[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_4 = 1;
  local_c0 = &clDataList::_vbtable__for__clData__;
  local_b0 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
  clData::clData((clData *)&local_c4,3);
  local_4._0_1_ = 2;
  clPointerList<class_clData*>::clPointerList<class_clData*>
            ((clPointerList<class_clData*> *)local_b8);
  local_c4 = &clDataList::_vftable__for__clData__;
  local_b8[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_4 = CONCAT31(local_4._1_3_,3);
  GetNewCurMessage(this,3);
  uVar1 = DecodeRcv_Result(this,3,param_1,param_2);
  if (((uVar1 != '\0') &&
      (uVar1 = clDataList::GetIndex
                         (*(clDataList **)(*(int *)(this + 8) + 8),(clDataList *)&local_a8,1),
      uVar1 != '\0')) &&
     (uVar1 = clDataList::GetIndex((clDataList *)&local_a8,(clDataList *)&local_c4,1), uVar1 != '\0'
     )) {
    if (*param_1 == '\'') {
      uVar1 = clDataList::GetIndex((clDataList *)&local_c4,&local_c8,1);
      if (uVar1 != '\0') {
        CLobbySrvConnectionList::ConnectFailed
                  (*(CLobbySrvConnectionList **)(this + 0x10),local_c8,*param_2);
LAB_005a432d:
        local_4 = CONCAT31(local_4._1_3_,1);
        clDataList::~clDataList((clDataList *)&local_c4);
        local_4 = 0xffffffff;
        clDataList::~clDataList((clDataList *)&local_a8);
        ExceptionList = local_c;
        return '\x01';
      }
    }
    else {
      uVar1 = clDataList::GetIndex((clDataList *)&local_c4,&local_c8,0);
      if (uVar1 != '\0') {
        uVar1 = clDataList::GetIndex((clDataList *)&local_c4,local_90,1);
        if ((uVar1 != '\0') &&
           (uVar1 = clDataList::GetIndex((clDataList *)&local_c4,&local_ac,2), uVar1 != '\0')) {
          CLobbySrvConnectionList::RouterFinishConnection
                    (*(CLobbySrvConnectionList **)(this + 0x10),local_c8,local_90,(ushort)local_ac,
                     (uchar)this[0x1a],*(ushort *)(this + 0x1c));
          goto LAB_005a432d;
        }
      }
    }
  }
  local_4 = CONCAT31(local_4._1_3_,1);
  clDataList::~clDataList((clDataList *)&local_c4);
  local_4 = 0xffffffff;
  clDataList::~clDataList((clDataList *)&local_a8);
  ExceptionList = local_c;
  return '\0';
}




/* from: libgsclient:GSLobbyLib.cpp
   addr: 005A4370 */

uchar __thiscall CGSLobbyLib::LobbyRcv_GroupRemove(CGSLobbyLib *this,int *param_1,int *param_2)

{
  uchar uVar1;
  undefined1 uVar2;
  undefined **local_24;
  undefined4 *local_20;
  undefined4 local_1c;
  undefined **local_18;
  list<class_clRcvElement*> local_14 [4];
  undefined8 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c9d1c;
  local_c = ExceptionList;
  if (*(int *)(this + 0x10) != 0) {
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
    GetNewCurMessage(this,0x37);
    if (*(int *)(this + 8) == 0) {
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
    *param_2 = *(int *)(*(int *)(this + 8) + 0x18);
    uVar1 = clDataList::GetIndex(*(clDataList **)(*(int *)(this + 8) + 8),(clDataList *)&local_24,1)
    ;
    if (uVar1 == '\0') {
      uVar2 = 4;
      local_4._0_1_ = 5;
    }
    else {
      uVar1 = clDataList::GetIndex((clDataList *)&local_24,param_1,0);
      if (uVar1 != '\0') {
        CLobbySrvConnectionList::RemoveGroup
                  (*(CLobbySrvConnectionList **)(this + 0x10),*param_1,
                   *(int *)(*(int *)(this + 8) + 0x18));
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
      uVar2 = 6;
      local_4._0_1_ = 7;
    }
    local_4._1_3_ = 0;
    local_18 = &clPointerList<class_clData*>::_vftable_;
    local_24 = &clDataList::_vftable__for__clData__;
    clPointerList<class_clRcvElement*>::clear((clPointerList<class_clRcvElement*> *)&local_18);
    local_4 = CONCAT31(local_4._1_3_,uVar2);
    ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>(local_14);
  }
  ExceptionList = local_c;
  return '\0';
}




/* from: libgsclient:GSLobbyLib.cpp
   addr: 005A4530 */

uchar __thiscall
CGSLobbyLib::LobbyRcv_CreateRoom
          (CGSLobbyLib *this,uchar *param_1,int *param_2,char *param_3,int *param_4,int *param_5)

{
  uchar uVar1;
  undefined **local_3c;
  undefined4 *local_38;
  undefined **local_30 [2];
  undefined8 *local_28;
  undefined **local_24;
  undefined4 *local_20;
  undefined **local_18 [2];
  undefined8 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c9d50;
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
  local_38 = &clDataList::_vbtable__for__clData__;
  local_28 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
  clData::clData((clData *)&local_3c,3);
  local_4._0_1_ = 2;
  clPointerList<class_clData*>::clPointerList<class_clData*>
            ((clPointerList<class_clData*> *)local_30);
  local_3c = &clDataList::_vftable__for__clData__;
  local_30[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_4 = CONCAT31(local_4._1_3_,3);
  GetNewCurMessage(this,0xc);
  if ((((*(int *)(this + 8) != 0) &&
       (uVar1 = DecodeRcv_Result(this,0xc,param_1,param_2), uVar1 != '\0')) &&
      (uVar1 = clDataList::GetIndex
                         (*(clDataList **)(*(int *)(this + 8) + 8),(clDataList *)&local_24,1),
      uVar1 != '\0')) &&
     (uVar1 = clDataList::GetIndex((clDataList *)&local_24,(clDataList *)&local_3c,1), uVar1 != '\0'
     )) {
    if (*param_1 == '\'') {
      uVar1 = clDataList::GetIndex((clDataList *)&local_3c,param_3,1);
      if (uVar1 != '\0') {
LAB_005a46c8:
        local_4 = CONCAT31(local_4._1_3_,1);
        clDataList::_vbase_destructor_((clDataList *)&local_3c);
        local_4 = 0xffffffff;
        clDataList::_vbase_destructor_((clDataList *)&local_24);
        ExceptionList = local_c;
        return '\x01';
      }
    }
    else {
      uVar1 = clDataList::GetIndex((clDataList *)&local_3c,param_4,0);
      if (uVar1 != '\0') {
        uVar1 = clDataList::GetIndex((clDataList *)&local_3c,param_3,1);
        if ((uVar1 != '\0') &&
           (uVar1 = clDataList::GetIndex((clDataList *)&local_3c,param_5,2), uVar1 != '\0')) {
          CLobbySrvConnectionList::RegisterGroup
                    (*(CLobbySrvConnectionList **)(this + 0x10),*param_4,*param_5);
          goto LAB_005a46c8;
        }
      }
    }
  }
  local_4 = CONCAT31(local_4._1_3_,1);
  clDataList::~clDataList((clDataList *)&local_3c);
  local_4 = 0xffffffff;
  clDataList::~clDataList((clDataList *)&local_24);
  ExceptionList = local_c;
  return '\0';
}




/* from: libgsclient:GSLobbyLib.cpp
   addr: 005A4700 */

uchar __thiscall
CGSLobbyLib::LobbyRcv_StartMatch
          (CGSLobbyLib *this,uchar *param_1,int *param_2,int *param_3,int *param_4)

{
  uchar uVar1;
  undefined **local_3c;
  undefined4 *local_38;
  undefined **local_30 [2];
  undefined8 *local_28;
  undefined **local_24;
  undefined4 *local_20;
  undefined **local_18 [2];
  undefined8 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c9d98;
  local_c = ExceptionList;
  local_38 = &clDataList::_vbtable__for__clData__;
  local_28 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
  ExceptionList = &local_c;
  clData::clData((clData *)&local_3c,3);
  local_4 = 0;
  clPointerList<class_clData*>::clPointerList<class_clData*>
            ((clPointerList<class_clData*> *)local_30);
  local_3c = &clDataList::_vftable__for__clData__;
  local_30[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_4 = 1;
  local_20 = &clDataList::_vbtable__for__clData__;
  local_10 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
  clData::clData((clData *)&local_24,3);
  local_4._0_1_ = 2;
  clPointerList<class_clData*>::clPointerList<class_clData*>
            ((clPointerList<class_clData*> *)local_18);
  local_18[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_24 = &clDataList::_vftable__for__clData__;
  local_4._0_1_ = 3;
  GetNewCurMessage(this,0x11);
  if (*(int *)(this + 8) == 0) {
    local_4 = CONCAT31(local_4._1_3_,1);
    clDataList::~clDataList((clDataList *)&local_24);
  }
  else {
    *param_4 = *(int *)(*(int *)(this + 8) + 0x18);
    uVar1 = DecodeRcv_Result(this,0x11,param_1,param_2);
    if (uVar1 == '\0') {
      local_4 = CONCAT31(local_4._1_3_,1);
      clDataList::~clDataList((clDataList *)&local_24);
    }
    else {
      uVar1 = clDataList::GetIndex
                        (*(clDataList **)(*(int *)(this + 8) + 8),(clDataList *)&local_3c,1);
      if (uVar1 == '\0') {
        local_4 = CONCAT31(local_4._1_3_,1);
        clDataList::~clDataList((clDataList *)&local_24);
      }
      else {
        uVar1 = clDataList::GetIndex((clDataList *)&local_3c,(clDataList *)&local_24,1);
        if (uVar1 != '\0') {
          uVar1 = clDataList::GetIndex((clDataList *)&local_24,param_3,(uint)(*param_1 != '&'));
          local_4 = CONCAT31(local_4._1_3_,1);
          if (uVar1 == '\0') {
            clDataList::~clDataList((clDataList *)&local_24);
            local_3c = &clDataList::_vftable__for__clData__;
            local_30[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
            local_4 = 5;
            clPointerList<class_clData*>::~clPointerList<class_clData*>
                      ((clPointerList<class_clData*> *)local_30);
            ExceptionList = local_c;
            return '\0';
          }
          clDataList::~clDataList((clDataList *)&local_24);
          local_3c = &clDataList::_vftable__for__clData__;
          local_30[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
          local_4 = 6;
          clPointerList<class_clData*>::~clPointerList<class_clData*>
                    ((clPointerList<class_clData*> *)local_30);
          ExceptionList = local_c;
          return '\x01';
        }
        local_24 = &clDataList::_vftable__for__clData__;
        local_18[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
        local_4 = CONCAT31(local_4._1_3_,4);
        clPointerList<class_clData*>::~clPointerList<class_clData*>
                  ((clPointerList<class_clData*> *)local_18);
        local_24 = &clData::_vftable_;
      }
    }
  }
  local_4 = 0xffffffff;
  clDataList::~clDataList((clDataList *)&local_3c);
  ExceptionList = local_c;
  return '\0';
}




/* from: libgsclient:GSLobbyLib.cpp
   addr: 005A4920 */

uchar __thiscall
CGSLobbyLib::LobbyRcv_MasterChanged
          (CGSLobbyLib *this,int *param_1,int *param_2,char *param_3,char *param_4,char *param_5)

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
  
  puStack_8 = &LAB_005c9e36;
  local_c = ExceptionList;
  local_20 = &clDataList::_vbtable__for__clData__;
  local_10 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
  local_1c = 3;
  local_24 = &clData::_vftable_;
  local_4 = 0;
  ExceptionList = &local_c;
  clPointerList<class_clData*>::clPointerList<class_clData*>
            ((clPointerList<class_clData*> *)&local_18);
  local_24 = &clDataList::_vftable__for__clData__;
  local_18 = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_4 = 1;
  GetNewCurMessage(this,0x3b);
  if (*(int *)(this + 8) == 0) {
    local_24 = &clDataList::_vftable__for__clData__;
    local_18 = &clDataList::_vftable__for__clPointerList<class_clData*>__;
    local_4 = 2;
    clPointerList<class_clData*>::~clPointerList<class_clData*>
              ((clPointerList<class_clData*> *)&local_18);
    uVar1 = '\0';
  }
  else {
    *param_2 = *(int *)(*(int *)(this + 8) + 0x18);
    uVar1 = clDataList::GetIndex(*(clDataList **)(*(int *)(this + 8) + 8),(clDataList *)&local_24,1)
    ;
    if (uVar1 == '\0') {
      local_24 = &clDataList::_vftable__for__clData__;
      local_18 = &clDataList::_vftable__for__clPointerList<class_clData*>__;
      local_4 = 3;
      clPointerList<class_clData*>::~clPointerList<class_clData*>
                ((clPointerList<class_clData*> *)&local_18);
      uVar1 = '\0';
    }
    else {
      uVar1 = clDataList::GetIndex((clDataList *)&local_24,param_1,0);
      if (uVar1 == '\0') {
        local_24 = &clDataList::_vftable__for__clData__;
        local_18 = &clDataList::_vftable__for__clPointerList<class_clData*>__;
        local_4 = 4;
        clPointerList<class_clData*>::~clPointerList<class_clData*>
                  ((clPointerList<class_clData*> *)&local_18);
        uVar1 = '\0';
      }
      else {
        uVar1 = clDataList::GetIndex((clDataList *)&local_24,param_3,1);
        if (uVar1 == '\0') {
          local_24 = &clDataList::_vftable__for__clData__;
          local_18 = &clPointerList<class_clData*>::_vftable_;
          local_4._0_1_ = 6;
          local_4._1_3_ = 0;
          clPointerList<class_clRcvElement*>::clear((clPointerList<class_clRcvElement*> *)&local_18)
          ;
          local_4 = CONCAT31(local_4._1_3_,5);
          ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>(local_14);
          uVar1 = '\0';
        }
        else {
          clDataList::GetIndex((clDataList *)&local_24,param_4,2);
          clDataList::GetIndex((clDataList *)&local_24,param_5,3);
          local_24 = &clDataList::_vftable__for__clData__;
          local_18 = &clPointerList<class_clData*>::_vftable_;
          local_4._0_1_ = 8;
          local_4._1_3_ = 0;
          clPointerList<class_clRcvElement*>::clear((clPointerList<class_clRcvElement*> *)&local_18)
          ;
          local_4 = CONCAT31(local_4._1_3_,7);
          ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>(local_14);
          uVar1 = '\x01';
        }
      }
    }
  }
  ExceptionList = local_c;
  return uVar1;
}




/* from: libgsclient:GSLobbyLib.cpp
   addr: 005A4AF0 */

uchar __thiscall
CGSLobbyLib::LobbyRcv_MasterNew
          (CGSLobbyLib *this,uchar *param_1,int *param_2,char *param_3,int *param_4,int *param_5)

{
  uchar uVar1;
  uchar uVar2;
  undefined **local_3c;
  undefined4 *local_38;
  undefined **local_30 [2];
  undefined8 *local_28;
  undefined **local_24;
  undefined4 *local_20;
  undefined **local_18 [2];
  undefined8 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c9e68;
  local_c = ExceptionList;
  local_38 = &clDataList::_vbtable__for__clData__;
  local_28 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
  ExceptionList = &local_c;
  clData::clData((clData *)&local_3c,3);
  local_4 = 0;
  clPointerList<class_clData*>::clPointerList<class_clData*>
            ((clPointerList<class_clData*> *)local_30);
  local_3c = &clDataList::_vftable__for__clData__;
  local_30[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_4 = 1;
  local_20 = &clDataList::_vbtable__for__clData__;
  local_10 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
  clData::clData((clData *)&local_24,3);
  local_4._0_1_ = 2;
  clPointerList<class_clData*>::clPointerList<class_clData*>
            ((clPointerList<class_clData*> *)local_18);
  local_24 = &clDataList::_vftable__for__clData__;
  local_18[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_4._0_1_ = 3;
  GetNewCurMessage(this,0x1b);
  if (((*(int *)(this + 8) != 0) &&
      (uVar1 = DecodeRcv_Result(this,0x1b,param_1,param_2), uVar1 != '\0')) &&
     (uVar1 = clDataList::GetIndex
                        (*(clDataList **)(*(int *)(this + 8) + 8),(clDataList *)&local_3c,1),
     uVar1 != '\0')) {
    *param_5 = *(int *)(*(int *)(this + 8) + 0x18);
    uVar1 = clDataList::GetIndex((clDataList *)&local_3c,(clDataList *)&local_24,1);
    if (uVar1 != '\0') {
      uVar1 = *param_1;
      uVar2 = clDataList::GetIndex((clDataList *)&local_24,param_3,(uint)(uVar1 != '&'));
      if (uVar2 != '\0') {
        uVar1 = clDataList::GetIndex((clDataList *)&local_24,param_4,(uVar1 != '&') + 1);
        local_4 = CONCAT31(local_4._1_3_,1);
        if (uVar1 != '\0') {
          clDataList::~clDataList((clDataList *)&local_24);
          local_4 = 0xffffffff;
          clDataList::~clDataList((clDataList *)&local_3c);
          ExceptionList = local_c;
          return '\x01';
        }
        clDataList::~clDataList((clDataList *)&local_24);
        local_3c = &clDataList::_vftable__for__clData__;
        local_30[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
        local_4 = 4;
        clPointerList<class_clData*>::~clPointerList<class_clData*>
                  ((clPointerList<class_clData*> *)local_30);
        ExceptionList = local_c;
        return '\0';
      }
    }
  }
  local_4 = CONCAT31(local_4._1_3_,1);
  clDataList::~clDataList((clDataList *)&local_24);
  local_4 = 0xffffffff;
  clDataList::~clDataList((clDataList *)&local_3c);
  ExceptionList = local_c;
  return '\0';
}




/* from: libgsclient:GSLobbyLib.cpp
   addr: 005A4CF0 */

uchar __thiscall
CGSLobbyLib::LobbyRcv_PlayerKick
          (CGSLobbyLib *this,uchar *param_1,int *param_2,char *param_3,int *param_4,int *param_5)

{
  uchar uVar1;
  uchar uVar2;
  undefined **local_3c;
  undefined4 *local_38;
  undefined **local_30 [2];
  undefined8 *local_28;
  undefined **local_24;
  undefined4 *local_20;
  undefined **local_18 [2];
  undefined8 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c9ea8;
  local_c = ExceptionList;
  local_38 = &clDataList::_vbtable__for__clData__;
  local_28 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
  ExceptionList = &local_c;
  clData::clData((clData *)&local_3c,3);
  local_4 = 0;
  clPointerList<class_clData*>::clPointerList<class_clData*>
            ((clPointerList<class_clData*> *)local_30);
  local_3c = &clDataList::_vftable__for__clData__;
  local_30[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_4 = 1;
  local_20 = &clDataList::_vbtable__for__clData__;
  local_10 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
  clData::clData((clData *)&local_24,3);
  local_4._0_1_ = 2;
  clPointerList<class_clData*>::clPointerList<class_clData*>
            ((clPointerList<class_clData*> *)local_18);
  local_24 = &clDataList::_vftable__for__clData__;
  local_18[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_4._0_1_ = 3;
  GetNewCurMessage(this,10);
  if (((*(int *)(this + 8) != 0) &&
      (uVar1 = DecodeRcv_Result(this,10,param_1,param_2), uVar1 != '\0')) &&
     (uVar1 = clDataList::GetIndex
                        (*(clDataList **)(*(int *)(this + 8) + 8),(clDataList *)&local_3c,1),
     uVar1 != '\0')) {
    *param_5 = *(int *)(*(int *)(this + 8) + 0x18);
    uVar1 = clDataList::GetIndex((clDataList *)&local_3c,(clDataList *)&local_24,1);
    if (uVar1 != '\0') {
      uVar1 = *param_1;
      uVar2 = clDataList::GetIndex((clDataList *)&local_24,param_3,(uint)(uVar1 != '&'));
      if (uVar2 != '\0') {
        uVar1 = clDataList::GetIndex((clDataList *)&local_24,param_4,(uVar1 != '&') + 1);
        local_4 = CONCAT31(local_4._1_3_,1);
        if (uVar1 != '\0') {
          clDataList::~clDataList((clDataList *)&local_24);
          local_4 = 0xffffffff;
          clDataList::~clDataList((clDataList *)&local_3c);
          ExceptionList = local_c;
          return '\x01';
        }
        clDataList::~clDataList((clDataList *)&local_24);
        local_3c = &clDataList::_vftable__for__clData__;
        local_30[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
        local_4 = 4;
        clPointerList<class_clData*>::~clPointerList<class_clData*>
                  ((clPointerList<class_clData*> *)local_30);
        ExceptionList = local_c;
        return '\0';
      }
    }
  }
  local_4 = CONCAT31(local_4._1_3_,1);
  clDataList::~clDataList((clDataList *)&local_24);
  local_4 = 0xffffffff;
  clDataList::~clDataList((clDataList *)&local_3c);
  ExceptionList = local_c;
  return '\0';
}




/* from: libgsclient:GSLobbyLib.cpp
   addr: 005A4EF0 */

uchar __thiscall
CGSLobbyLib::LobbyRcv_KickOut(CGSLobbyLib *this,int *param_1,int *param_2,char *param_3)

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
  
  puStack_8 = &LAB_005c9f46;
  local_c = ExceptionList;
  local_20 = &clDataList::_vbtable__for__clData__;
  local_10 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
  local_1c = 3;
  local_24 = &clData::_vftable_;
  local_4 = 0;
  ExceptionList = &local_c;
  clPointerList<class_clData*>::clPointerList<class_clData*>
            ((clPointerList<class_clData*> *)&local_18);
  local_24 = &clDataList::_vftable__for__clData__;
  local_18 = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_4 = 1;
  GetNewCurMessage(this,0x3d);
  if (*(int *)(this + 8) == 0) {
    local_24 = &clDataList::_vftable__for__clData__;
    local_18 = &clDataList::_vftable__for__clPointerList<class_clData*>__;
    local_4 = 2;
    clPointerList<class_clData*>::~clPointerList<class_clData*>
              ((clPointerList<class_clData*> *)&local_18);
    uVar1 = '\0';
  }
  else {
    *param_2 = *(int *)(*(int *)(this + 8) + 0x18);
    uVar1 = clDataList::GetIndex(*(clDataList **)(*(int *)(this + 8) + 8),(clDataList *)&local_24,1)
    ;
    if (uVar1 == '\0') {
      local_24 = &clDataList::_vftable__for__clData__;
      local_18 = &clDataList::_vftable__for__clPointerList<class_clData*>__;
      local_4 = 3;
      clPointerList<class_clData*>::~clPointerList<class_clData*>
                ((clPointerList<class_clData*> *)&local_18);
      uVar1 = '\0';
    }
    else {
      uVar1 = clDataList::GetIndex((clDataList *)&local_24,param_1,0);
      if (uVar1 == '\0') {
        local_24 = &clDataList::_vftable__for__clData__;
        local_18 = &clDataList::_vftable__for__clPointerList<class_clData*>__;
        local_4 = 4;
        clPointerList<class_clData*>::~clPointerList<class_clData*>
                  ((clPointerList<class_clData*> *)&local_18);
        uVar1 = '\0';
      }
      else {
        uVar1 = clDataList::GetIndex((clDataList *)&local_24,param_3,1,0x81);
        local_24 = &clDataList::_vftable__for__clData__;
        if (uVar1 == '\0') {
          local_18 = &clPointerList<class_clData*>::_vftable_;
          local_4._0_1_ = 6;
          local_4._1_3_ = 0;
          clPointerList<class_clRcvElement*>::clear((clPointerList<class_clRcvElement*> *)&local_18)
          ;
          local_4 = CONCAT31(local_4._1_3_,5);
          ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>(local_14);
          uVar1 = '\0';
        }
        else {
          local_18 = &clPointerList<class_clData*>::_vftable_;
          local_4._0_1_ = 8;
          local_4._1_3_ = 0;
          clPointerList<class_clRcvElement*>::clear((clPointerList<class_clRcvElement*> *)&local_18)
          ;
          local_4 = CONCAT31(local_4._1_3_,7);
          ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>(local_14);
          uVar1 = '\x01';
        }
      }
    }
  }
  ExceptionList = local_c;
  return uVar1;
}




/* from: libgsclient:GSLobbyLib.cpp
   addr: 005A50A0 */

uchar __thiscall
CGSLobbyLib::LobbyRcv_GroupConfigUpdate(CGSLobbyLib *this,int *param_1,int *param_2,int *param_3)

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
  
  puStack_8 = &LAB_005c9fd6;
  local_c = ExceptionList;
  local_20 = &clDataList::_vbtable__for__clData__;
  local_10 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
  local_1c = 3;
  local_24 = &clData::_vftable_;
  local_4 = 0;
  ExceptionList = &local_c;
  clPointerList<class_clData*>::clPointerList<class_clData*>
            ((clPointerList<class_clData*> *)&local_18);
  local_24 = &clDataList::_vftable__for__clData__;
  local_18 = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_4 = 1;
  GetNewCurMessage(this,0x39);
  if (*(int *)(this + 8) == 0) {
    local_24 = &clDataList::_vftable__for__clData__;
    local_18 = &clDataList::_vftable__for__clPointerList<class_clData*>__;
    local_4 = 2;
    clPointerList<class_clData*>::~clPointerList<class_clData*>
              ((clPointerList<class_clData*> *)&local_18);
    uVar1 = '\0';
  }
  else {
    *param_2 = *(int *)(*(int *)(this + 8) + 0x18);
    uVar1 = clDataList::GetIndex(*(clDataList **)(*(int *)(this + 8) + 8),(clDataList *)&local_24,1)
    ;
    if (uVar1 == '\0') {
      local_24 = &clDataList::_vftable__for__clData__;
      local_18 = &clDataList::_vftable__for__clPointerList<class_clData*>__;
      local_4 = 3;
      clPointerList<class_clData*>::~clPointerList<class_clData*>
                ((clPointerList<class_clData*> *)&local_18);
      uVar1 = '\0';
    }
    else {
      uVar1 = clDataList::GetIndex((clDataList *)&local_24,param_1,0);
      if (uVar1 == '\0') {
        local_24 = &clDataList::_vftable__for__clData__;
        local_18 = &clDataList::_vftable__for__clPointerList<class_clData*>__;
        local_4 = 4;
        clPointerList<class_clData*>::~clPointerList<class_clData*>
                  ((clPointerList<class_clData*> *)&local_18);
        uVar1 = '\0';
      }
      else {
        uVar1 = clDataList::GetIndex((clDataList *)&local_24,param_3,1);
        local_24 = &clDataList::_vftable__for__clData__;
        if (uVar1 == '\0') {
          local_18 = &clPointerList<class_clData*>::_vftable_;
          local_4._0_1_ = 6;
          local_4._1_3_ = 0;
          clPointerList<class_clRcvElement*>::clear((clPointerList<class_clRcvElement*> *)&local_18)
          ;
          local_4 = CONCAT31(local_4._1_3_,5);
          ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>(local_14);
          uVar1 = '\0';
        }
        else {
          local_18 = &clPointerList<class_clData*>::_vftable_;
          local_4._0_1_ = 8;
          local_4._1_3_ = 0;
          clPointerList<class_clRcvElement*>::clear((clPointerList<class_clRcvElement*> *)&local_18)
          ;
          local_4 = CONCAT31(local_4._1_3_,7);
          ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>(local_14);
          uVar1 = '\x01';
        }
      }
    }
  }
  ExceptionList = local_c;
  return uVar1;
}




/* from: libgsclient:GSLobbyLib.cpp
   addr: 005A5250 */

uchar __thiscall
CGSLobbyLib::LobbyRcv_ParentGroupID
          (CGSLobbyLib *this,uchar *param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  uchar uVar1;
  undefined **local_3c;
  undefined4 *local_38;
  undefined **local_30 [2];
  undefined8 *local_28;
  undefined **local_24;
  undefined4 *local_20;
  undefined **local_18 [2];
  undefined8 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005ca000;
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
  local_38 = &clDataList::_vbtable__for__clData__;
  local_28 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
  clData::clData((clData *)&local_3c,3);
  local_4._0_1_ = 2;
  clPointerList<class_clData*>::clPointerList<class_clData*>
            ((clPointerList<class_clData*> *)local_30);
  local_3c = &clDataList::_vftable__for__clData__;
  local_30[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_4 = CONCAT31(local_4._1_3_,3);
  GetNewCurMessage(this,0xe);
  if (*(int *)(this + 8) != 0) {
    *param_4 = *(int *)(*(int *)(this + 8) + 0x18);
    uVar1 = DecodeRcv_Result(this,0xe,param_1,param_2);
    if ((((uVar1 != '\0') &&
         (uVar1 = clDataList::GetIndex
                            (*(clDataList **)(*(int *)(this + 8) + 8),(clDataList *)&local_24,1),
         uVar1 != '\0')) &&
        (uVar1 = clDataList::GetIndex((clDataList *)&local_24,(clDataList *)&local_3c,1),
        uVar1 != '\0')) &&
       (((*param_1 == '\'' ||
         (uVar1 = clDataList::GetIndex((clDataList *)&local_3c,param_3,0), param_3 = param_5,
         uVar1 != '\0')) &&
        (uVar1 = clDataList::GetIndex((clDataList *)&local_3c,param_3,1), uVar1 != '\0')))) {
      local_4 = CONCAT31(local_4._1_3_,1);
      clDataList::~clDataList((clDataList *)&local_3c);
      local_4 = 0xffffffff;
      clDataList::~clDataList((clDataList *)&local_24);
      ExceptionList = local_c;
      return '\x01';
    }
  }
  local_4 = CONCAT31(local_4._1_3_,1);
  clDataList::~clDataList((clDataList *)&local_3c);
  local_4 = 0xffffffff;
  clDataList::~clDataList((clDataList *)&local_24);
  ExceptionList = local_c;
  return '\0';
}




/* from: libgsclient:GSLobbyLib.cpp
   addr: 005A5400 */

uchar __thiscall
CGSLobbyLib::LobbyRcv_GroupLeave
          (CGSLobbyLib *this,uchar *param_1,int *param_2,int *param_3,int *param_4)

{
  uchar uVar1;
  undefined **local_3c;
  undefined4 *local_38;
  undefined **local_30 [2];
  undefined8 *local_28;
  undefined **local_24;
  undefined4 *local_20;
  undefined **local_18 [2];
  undefined8 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005ca048;
  local_c = ExceptionList;
  local_38 = &clDataList::_vbtable__for__clData__;
  local_28 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
  ExceptionList = &local_c;
  clData::clData((clData *)&local_3c,3);
  local_4 = 0;
  clPointerList<class_clData*>::clPointerList<class_clData*>
            ((clPointerList<class_clData*> *)local_30);
  local_3c = &clDataList::_vftable__for__clData__;
  local_30[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_4 = 1;
  local_20 = &clDataList::_vbtable__for__clData__;
  local_10 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
  clData::clData((clData *)&local_24,3);
  local_4._0_1_ = 2;
  clPointerList<class_clData*>::clPointerList<class_clData*>
            ((clPointerList<class_clData*> *)local_18);
  local_18[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_24 = &clDataList::_vftable__for__clData__;
  local_4._0_1_ = 3;
  GetNewCurMessage(this,8);
  if (*(int *)(this + 8) == 0) {
    local_4 = CONCAT31(local_4._1_3_,1);
    clDataList::~clDataList((clDataList *)&local_24);
  }
  else {
    *param_4 = *(int *)(*(int *)(this + 8) + 0x18);
    uVar1 = DecodeRcv_Result(this,8,param_1,param_2);
    if (uVar1 == '\0') {
      local_4 = CONCAT31(local_4._1_3_,1);
      clDataList::~clDataList((clDataList *)&local_24);
    }
    else {
      uVar1 = clDataList::GetIndex
                        (*(clDataList **)(*(int *)(this + 8) + 8),(clDataList *)&local_3c,1);
      if (uVar1 == '\0') {
        local_4 = CONCAT31(local_4._1_3_,1);
        clDataList::~clDataList((clDataList *)&local_24);
      }
      else {
        uVar1 = clDataList::GetIndex((clDataList *)&local_3c,(clDataList *)&local_24,1);
        if (uVar1 != '\0') {
          uVar1 = clDataList::GetIndex((clDataList *)&local_24,param_3,(uint)(*param_1 != '&'));
          local_4 = CONCAT31(local_4._1_3_,1);
          if (uVar1 == '\0') {
            clDataList::~clDataList((clDataList *)&local_24);
            local_3c = &clDataList::_vftable__for__clData__;
            local_30[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
            local_4 = 5;
            clPointerList<class_clData*>::~clPointerList<class_clData*>
                      ((clPointerList<class_clData*> *)local_30);
            ExceptionList = local_c;
            return '\0';
          }
          clDataList::~clDataList((clDataList *)&local_24);
          local_3c = &clDataList::_vftable__for__clData__;
          local_30[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
          local_4 = 6;
          clPointerList<class_clData*>::~clPointerList<class_clData*>
                    ((clPointerList<class_clData*> *)local_30);
          ExceptionList = local_c;
          return '\x01';
        }
        local_24 = &clDataList::_vftable__for__clData__;
        local_18[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
        local_4 = CONCAT31(local_4._1_3_,4);
        clPointerList<class_clData*>::~clPointerList<class_clData*>
                  ((clPointerList<class_clData*> *)local_18);
        local_24 = &clData::_vftable_;
      }
    }
  }
  local_4 = 0xffffffff;
  clDataList::~clDataList((clDataList *)&local_3c);
  ExceptionList = local_c;
  return '\0';
}




/* from: libgsclient:GSLobbyLib.cpp
   addr: 005A5620 */

uchar __thiscall
CGSLobbyLib::LobbyRcv_MatchStarted(CGSLobbyLib *this,int *param_1,int *param_2,uint *param_3)

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
  
  puStack_8 = &LAB_005ca0e6;
  local_c = ExceptionList;
  local_20 = &clDataList::_vbtable__for__clData__;
  local_10 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
  local_1c = 3;
  local_24 = &clData::_vftable_;
  local_4 = 0;
  ExceptionList = &local_c;
  clPointerList<class_clData*>::clPointerList<class_clData*>
            ((clPointerList<class_clData*> *)&local_18);
  local_24 = &clDataList::_vftable__for__clData__;
  local_18 = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_4 = 1;
  GetNewCurMessage(this,0x3e);
  if (*(int *)(this + 8) == 0) {
    local_24 = &clDataList::_vftable__for__clData__;
    local_18 = &clDataList::_vftable__for__clPointerList<class_clData*>__;
    local_4 = 2;
    clPointerList<class_clData*>::~clPointerList<class_clData*>
              ((clPointerList<class_clData*> *)&local_18);
    uVar1 = '\0';
  }
  else {
    *param_2 = *(int *)(*(int *)(this + 8) + 0x18);
    uVar1 = clDataList::GetIndex(*(clDataList **)(*(int *)(this + 8) + 8),(clDataList *)&local_24,1)
    ;
    if (uVar1 == '\0') {
      local_24 = &clDataList::_vftable__for__clData__;
      local_18 = &clDataList::_vftable__for__clPointerList<class_clData*>__;
      local_4 = 3;
      clPointerList<class_clData*>::~clPointerList<class_clData*>
                ((clPointerList<class_clData*> *)&local_18);
      uVar1 = '\0';
    }
    else {
      uVar1 = clDataList::GetIndex((clDataList *)&local_24,param_1,0);
      if (uVar1 == '\0') {
        local_24 = &clDataList::_vftable__for__clData__;
        local_18 = &clDataList::_vftable__for__clPointerList<class_clData*>__;
        local_4 = 4;
        clPointerList<class_clData*>::~clPointerList<class_clData*>
                  ((clPointerList<class_clData*> *)&local_18);
        uVar1 = '\0';
      }
      else {
        uVar1 = clDataList::GetIndex((clDataList *)&local_24,param_3,1);
        local_24 = &clDataList::_vftable__for__clData__;
        if (uVar1 == '\0') {
          local_18 = &clPointerList<class_clData*>::_vftable_;
          local_4._0_1_ = 6;
          local_4._1_3_ = 0;
          clPointerList<class_clRcvElement*>::clear((clPointerList<class_clRcvElement*> *)&local_18)
          ;
          local_4 = CONCAT31(local_4._1_3_,5);
          ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>(local_14);
          uVar1 = '\0';
        }
        else {
          local_18 = &clPointerList<class_clData*>::_vftable_;
          local_4._0_1_ = 8;
          local_4._1_3_ = 0;
          clPointerList<class_clRcvElement*>::clear((clPointerList<class_clRcvElement*> *)&local_18)
          ;
          local_4 = CONCAT31(local_4._1_3_,7);
          ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>(local_14);
          uVar1 = '\x01';
        }
      }
    }
  }
  ExceptionList = local_c;
  return uVar1;
}




/* from: libgsclient:GSLobbyLib.cpp
   addr: 005A57D0 */

uchar __thiscall
CGSLobbyLib::LobbyRcv_GroupConfigUpdateResult
          (CGSLobbyLib *this,uchar *param_1,int *param_2,int *param_3,int *param_4)

{
  uchar uVar1;
  undefined **local_3c;
  undefined4 *local_38;
  undefined **local_30 [2];
  undefined8 *local_28;
  undefined **local_24;
  undefined4 *local_20;
  undefined **local_18 [2];
  undefined8 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005ca128;
  local_c = ExceptionList;
  local_38 = &clDataList::_vbtable__for__clData__;
  local_28 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
  ExceptionList = &local_c;
  clData::clData((clData *)&local_3c,3);
  local_4 = 0;
  clPointerList<class_clData*>::clPointerList<class_clData*>
            ((clPointerList<class_clData*> *)local_30);
  local_3c = &clDataList::_vftable__for__clData__;
  local_30[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_4 = 1;
  local_20 = &clDataList::_vbtable__for__clData__;
  local_10 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
  clData::clData((clData *)&local_24,3);
  local_4._0_1_ = 2;
  clPointerList<class_clData*>::clPointerList<class_clData*>
            ((clPointerList<class_clData*> *)local_18);
  local_18[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_24 = &clDataList::_vftable__for__clData__;
  local_4._0_1_ = 3;
  GetNewCurMessage(this,0x1f);
  if (*(int *)(this + 8) == 0) {
    local_4 = CONCAT31(local_4._1_3_,1);
    clDataList::~clDataList((clDataList *)&local_24);
  }
  else {
    *param_4 = *(int *)(*(int *)(this + 8) + 0x18);
    uVar1 = DecodeRcv_Result(this,0x1f,param_1,param_2);
    if (uVar1 == '\0') {
      local_4 = CONCAT31(local_4._1_3_,1);
      clDataList::~clDataList((clDataList *)&local_24);
    }
    else {
      uVar1 = clDataList::GetIndex
                        (*(clDataList **)(*(int *)(this + 8) + 8),(clDataList *)&local_3c,1);
      if (uVar1 == '\0') {
        local_4 = CONCAT31(local_4._1_3_,1);
        clDataList::~clDataList((clDataList *)&local_24);
      }
      else {
        uVar1 = clDataList::GetIndex((clDataList *)&local_3c,(clDataList *)&local_24,1);
        if (uVar1 != '\0') {
          uVar1 = clDataList::GetIndex((clDataList *)&local_24,param_3,(uint)(*param_1 != '&'));
          local_4 = CONCAT31(local_4._1_3_,1);
          if (uVar1 == '\0') {
            clDataList::~clDataList((clDataList *)&local_24);
            local_3c = &clDataList::_vftable__for__clData__;
            local_30[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
            local_4 = 5;
            clPointerList<class_clData*>::~clPointerList<class_clData*>
                      ((clPointerList<class_clData*> *)local_30);
            ExceptionList = local_c;
            return '\0';
          }
          clDataList::~clDataList((clDataList *)&local_24);
          local_3c = &clDataList::_vftable__for__clData__;
          local_30[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
          local_4 = 6;
          clPointerList<class_clData*>::~clPointerList<class_clData*>
                    ((clPointerList<class_clData*> *)local_30);
          ExceptionList = local_c;
          return '\x01';
        }
        local_24 = &clDataList::_vftable__for__clData__;
        local_18[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
        local_4 = CONCAT31(local_4._1_3_,4);
        clPointerList<class_clData*>::~clPointerList<class_clData*>
                  ((clPointerList<class_clData*> *)local_18);
        local_24 = &clData::_vftable_;
      }
    }
  }
  local_4 = 0xffffffff;
  clDataList::~clDataList((clDataList *)&local_3c);
  ExceptionList = local_c;
  return '\0';
}




/* from: libgsclient:GSLobbyLib.cpp
   addr: 005A59F0 */

uchar __thiscall
CGSLobbyLib::LobbyRcv_SubmitMatchResult(CGSLobbyLib *this,uchar *param_1,int *param_2,int *param_3)

{
  uchar uVar1;
  undefined **local_3c;
  undefined4 *local_38;
  undefined **local_30 [2];
  undefined8 *local_28;
  undefined **local_24;
  undefined4 *local_20;
  undefined **local_18 [2];
  undefined8 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005ca178;
  local_c = ExceptionList;
  local_38 = &clDataList::_vbtable__for__clData__;
  local_28 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
  ExceptionList = &local_c;
  clData::clData((clData *)&local_3c,3);
  local_4 = 0;
  clPointerList<class_clData*>::clPointerList<class_clData*>
            ((clPointerList<class_clData*> *)local_30);
  local_3c = &clDataList::_vftable__for__clData__;
  local_30[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_4 = 1;
  local_20 = &clDataList::_vbtable__for__clData__;
  local_10 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
  clData::clData((clData *)&local_24,3);
  local_4._0_1_ = 2;
  clPointerList<class_clData*>::clPointerList<class_clData*>
            ((clPointerList<class_clData*> *)local_18);
  local_24 = &clDataList::_vftable__for__clData__;
  local_18[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_4._0_1_ = 3;
  GetNewCurMessage(this,0x1e);
  if (*(int *)(this + 8) == 0) {
    local_4 = CONCAT31(local_4._1_3_,1);
    clDataList::~clDataList((clDataList *)&local_24);
  }
  else {
    uVar1 = DecodeRcv_Result(this,0x1e,param_1,param_2);
    if (uVar1 == '\0') {
      local_4 = CONCAT31(local_4._1_3_,1);
      clDataList::~clDataList((clDataList *)&local_24);
    }
    else {
      uVar1 = clDataList::GetIndex
                        (*(clDataList **)(*(int *)(this + 8) + 8),(clDataList *)&local_3c,1);
      if (uVar1 == '\0') {
        local_4 = CONCAT31(local_4._1_3_,1);
        clDataList::~clDataList((clDataList *)&local_24);
      }
      else {
        uVar1 = clDataList::GetIndex((clDataList *)&local_3c,(clDataList *)&local_24,1);
        if (uVar1 != '\0') {
          uVar1 = clDataList::GetIndex((clDataList *)&local_24,param_3,(uint)(*param_1 != '&'));
          local_4 = CONCAT31(local_4._1_3_,1);
          if (uVar1 == '\0') {
            clDataList::~clDataList((clDataList *)&local_24);
            local_3c = &clDataList::_vftable__for__clData__;
            local_30[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
            local_4 = 5;
            clPointerList<class_clData*>::~clPointerList<class_clData*>
                      ((clPointerList<class_clData*> *)local_30);
            ExceptionList = local_c;
            return '\0';
          }
          clDataList::~clDataList((clDataList *)&local_24);
          local_3c = &clDataList::_vftable__for__clData__;
          local_30[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
          local_4 = 6;
          clPointerList<class_clData*>::~clPointerList<class_clData*>
                    ((clPointerList<class_clData*> *)local_30);
          ExceptionList = local_c;
          return '\x01';
        }
        local_24 = &clDataList::_vftable__for__clData__;
        local_18[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
        local_4 = CONCAT31(local_4._1_3_,4);
        clPointerList<class_clData*>::~clPointerList<class_clData*>
                  ((clPointerList<class_clData*> *)local_18);
        local_24 = &clData::_vftable_;
      }
    }
  }
  local_4 = 0xffffffff;
  clDataList::~clDataList((clDataList *)&local_3c);
  ExceptionList = local_c;
  return '\0';
}




/* from: libgsclient:GSLobbyLib.cpp
   addr: 005A5BD0 */

uchar __thiscall CGSLobbyLib::LobbyRcv_UpdatePing(CGSLobbyLib *this)

{
  int iVar1;
  undefined4 uVar2;
  uchar uVar3;
  uint uVar4;
  undefined4 local_54;
  int local_50;
  char local_4c [16];
  undefined **local_3c;
  undefined4 *local_38;
  undefined **local_30 [2];
  undefined8 *local_28;
  undefined **local_24;
  undefined4 *local_20;
  undefined **local_18 [2];
  undefined8 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005ca1c8;
  local_c = ExceptionList;
  local_50 = 0;
  local_38 = &clDataList::_vbtable__for__clData__;
  local_28 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
  ExceptionList = &local_c;
  clData::clData((clData *)&local_3c,3);
  local_4 = 0;
  clPointerList<class_clData*>::clPointerList<class_clData*>
            ((clPointerList<class_clData*> *)local_30);
  local_3c = &clDataList::_vftable__for__clData__;
  local_30[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_4 = 1;
  local_20 = &clDataList::_vbtable__for__clData__;
  local_10 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
  clData::clData((clData *)&local_24,3);
  local_4._0_1_ = 2;
  clPointerList<class_clData*>::clPointerList<class_clData*>
            ((clPointerList<class_clData*> *)local_18);
  local_24 = &clDataList::_vftable__for__clData__;
  local_18[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_4._0_1_ = 3;
  local_54 = 0;
  uVar4 = 1;
  GetNewCurMessage(this,0x20);
  iVar1 = *(int *)(this + 8);
  if (iVar1 == 0) {
    local_4 = CONCAT31(local_4._1_3_,1);
    clDataList::~clDataList((clDataList *)&local_24);
  }
  else {
    uVar2 = *(undefined4 *)(iVar1 + 0x18);
    uVar3 = clDataList::GetIndex(*(clDataList **)(iVar1 + 8),(clDataList *)&local_3c,1);
    if (uVar3 == '\0') {
      local_4 = CONCAT31(local_4._1_3_,1);
      clDataList::~clDataList((clDataList *)&local_24);
    }
    else {
      uVar3 = clDataList::GetIndex((clDataList *)&local_3c,&local_50,0);
      if (uVar3 == '\0') {
        local_4 = CONCAT31(local_4._1_3_,1);
        clDataList::~clDataList((clDataList *)&local_24);
      }
      else {
        uVar3 = clDataList::GetIndex((clDataList *)&local_3c,(clDataList *)&local_24,1);
        while( true ) {
          if (uVar3 == '\0') {
            local_4 = CONCAT31(local_4._1_3_,1);
            clDataList::~clDataList((clDataList *)&local_24);
            local_3c = &clDataList::_vftable__for__clData__;
            local_30[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
            local_4 = 6;
            clPointerList<class_clData*>::~clPointerList<class_clData*>
                      ((clPointerList<class_clData*> *)local_30);
            ExceptionList = local_c;
            return '\x01';
          }
          uVar3 = clDataList::GetIndex((clDataList *)&local_24,local_4c,0);
          if (uVar3 == '\0') break;
          uVar3 = clDataList::GetIndex((clDataList *)&local_24,(ushort *)&local_54,1);
          if (uVar3 == '\0') {
            local_4 = CONCAT31(local_4._1_3_,1);
            clDataList::~clDataList((clDataList *)&local_24);
            local_3c = &clDataList::_vftable__for__clData__;
            local_30[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
            local_4 = 5;
            clPointerList<class_clData*>::~clPointerList<class_clData*>
                      ((clPointerList<class_clData*> *)local_30);
            ExceptionList = local_c;
            return '\0';
          }
          (**(code **)(**(int **)(this + 0x14) + 0x6c))(local_50,uVar2,local_4c,local_54);
          uVar4 = uVar4 + 1;
          uVar3 = clDataList::GetIndex((clDataList *)&local_3c,(clDataList *)&local_24,uVar4);
        }
        local_24 = &clDataList::_vftable__for__clData__;
        local_18[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
        local_4 = CONCAT31(local_4._1_3_,4);
        clPointerList<class_clData*>::~clPointerList<class_clData*>
                  ((clPointerList<class_clData*> *)local_18);
        local_24 = &clData::_vftable_;
      }
    }
  }
  local_4 = 0xffffffff;
  clDataList::~clDataList((clDataList *)&local_3c);
  ExceptionList = local_c;
  return '\0';
}




/* from: libgsclient:GSLobbyLib.cpp
   addr: 005A5E40 */

uchar __thiscall
CGSLobbyLib::LobbyRcv_StartGameReply
          (CGSLobbyLib *this,uchar *param_1,int *param_2,int *param_3,int *param_4)

{
  uchar uVar1;
  undefined **local_3c;
  undefined4 *local_38;
  undefined **local_30 [2];
  undefined8 *local_28;
  undefined **local_24;
  undefined4 *local_20;
  undefined **local_18 [2];
  undefined8 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005ca218;
  local_c = ExceptionList;
  local_38 = &clDataList::_vbtable__for__clData__;
  local_28 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
  ExceptionList = &local_c;
  clData::clData((clData *)&local_3c,3);
  local_4 = 0;
  clPointerList<class_clData*>::clPointerList<class_clData*>
            ((clPointerList<class_clData*> *)local_30);
  local_3c = &clDataList::_vftable__for__clData__;
  local_30[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_4 = 1;
  local_20 = &clDataList::_vbtable__for__clData__;
  local_10 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
  clData::clData((clData *)&local_24,3);
  local_4._0_1_ = 2;
  clPointerList<class_clData*>::clPointerList<class_clData*>
            ((clPointerList<class_clData*> *)local_18);
  local_18[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_24 = &clDataList::_vftable__for__clData__;
  local_4._0_1_ = 3;
  GetNewCurMessage(this,0xf);
  if (*(int *)(this + 8) == 0) {
    local_4 = CONCAT31(local_4._1_3_,1);
    clDataList::~clDataList((clDataList *)&local_24);
  }
  else {
    *param_4 = *(int *)(*(int *)(this + 8) + 0x18);
    uVar1 = DecodeRcv_Result(this,0xf,param_1,param_2);
    if (uVar1 == '\0') {
      local_4 = CONCAT31(local_4._1_3_,1);
      clDataList::~clDataList((clDataList *)&local_24);
    }
    else {
      uVar1 = clDataList::GetIndex
                        (*(clDataList **)(*(int *)(this + 8) + 8),(clDataList *)&local_3c,1);
      if (uVar1 == '\0') {
        local_4 = CONCAT31(local_4._1_3_,1);
        clDataList::~clDataList((clDataList *)&local_24);
      }
      else {
        uVar1 = clDataList::GetIndex((clDataList *)&local_3c,(clDataList *)&local_24,1);
        if (uVar1 != '\0') {
          uVar1 = clDataList::GetIndex((clDataList *)&local_24,param_3,(uint)(*param_1 != '&'));
          local_4 = CONCAT31(local_4._1_3_,1);
          if (uVar1 == '\0') {
            clDataList::~clDataList((clDataList *)&local_24);
            local_3c = &clDataList::_vftable__for__clData__;
            local_30[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
            local_4 = 5;
            clPointerList<class_clData*>::~clPointerList<class_clData*>
                      ((clPointerList<class_clData*> *)local_30);
            ExceptionList = local_c;
            return '\0';
          }
          clDataList::~clDataList((clDataList *)&local_24);
          local_3c = &clDataList::_vftable__for__clData__;
          local_30[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
          local_4 = 6;
          clPointerList<class_clData*>::~clPointerList<class_clData*>
                    ((clPointerList<class_clData*> *)local_30);
          ExceptionList = local_c;
          return '\x01';
        }
        local_24 = &clDataList::_vftable__for__clData__;
        local_18[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
        local_4 = CONCAT31(local_4._1_3_,4);
        clPointerList<class_clData*>::~clPointerList<class_clData*>
                  ((clPointerList<class_clData*> *)local_18);
        local_24 = &clData::_vftable_;
      }
    }
  }
  local_4 = 0xffffffff;
  clDataList::~clDataList((clDataList *)&local_3c);
  ExceptionList = local_c;
  return '\0';
}




/* from: libgsclient:GSLobbyLib.cpp
   addr: 005A6060 */

uchar __thiscall
CGSLobbyLib::LobbyRcv_GameReadyReply
          (CGSLobbyLib *this,uchar *param_1,int *param_2,int *param_3,int *param_4)

{
  uchar uVar1;
  undefined **local_3c;
  undefined4 *local_38;
  undefined **local_30 [2];
  undefined8 *local_28;
  undefined **local_24;
  undefined4 *local_20;
  undefined **local_18 [2];
  undefined8 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005ca268;
  local_c = ExceptionList;
  local_38 = &clDataList::_vbtable__for__clData__;
  local_28 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
  ExceptionList = &local_c;
  clData::clData((clData *)&local_3c,3);
  local_4 = 0;
  clPointerList<class_clData*>::clPointerList<class_clData*>
            ((clPointerList<class_clData*> *)local_30);
  local_3c = &clDataList::_vftable__for__clData__;
  local_30[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_4 = 1;
  local_20 = &clDataList::_vbtable__for__clData__;
  local_10 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
  clData::clData((clData *)&local_24,3);
  local_4._0_1_ = 2;
  clPointerList<class_clData*>::clPointerList<class_clData*>
            ((clPointerList<class_clData*> *)local_18);
  local_18[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_24 = &clDataList::_vftable__for__clData__;
  local_4._0_1_ = 3;
  GetNewCurMessage(this,0x21);
  if (*(int *)(this + 8) == 0) {
    local_4 = CONCAT31(local_4._1_3_,1);
    clDataList::~clDataList((clDataList *)&local_24);
  }
  else {
    *param_4 = *(int *)(*(int *)(this + 8) + 0x18);
    uVar1 = DecodeRcv_Result(this,0x21,param_1,param_2);
    if (uVar1 == '\0') {
      local_4 = CONCAT31(local_4._1_3_,1);
      clDataList::~clDataList((clDataList *)&local_24);
    }
    else {
      uVar1 = clDataList::GetIndex
                        (*(clDataList **)(*(int *)(this + 8) + 8),(clDataList *)&local_3c,1);
      if (uVar1 == '\0') {
        local_4 = CONCAT31(local_4._1_3_,1);
        clDataList::~clDataList((clDataList *)&local_24);
      }
      else {
        uVar1 = clDataList::GetIndex((clDataList *)&local_3c,(clDataList *)&local_24,1);
        if (uVar1 != '\0') {
          uVar1 = clDataList::GetIndex((clDataList *)&local_24,param_3,(uint)(*param_1 != '&'));
          local_4 = CONCAT31(local_4._1_3_,1);
          if (uVar1 == '\0') {
            clDataList::~clDataList((clDataList *)&local_24);
            local_3c = &clDataList::_vftable__for__clData__;
            local_30[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
            local_4 = 5;
            clPointerList<class_clData*>::~clPointerList<class_clData*>
                      ((clPointerList<class_clData*> *)local_30);
            ExceptionList = local_c;
            return '\0';
          }
          clDataList::~clDataList((clDataList *)&local_24);
          local_3c = &clDataList::_vftable__for__clData__;
          local_30[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
          local_4 = 6;
          clPointerList<class_clData*>::~clPointerList<class_clData*>
                    ((clPointerList<class_clData*> *)local_30);
          ExceptionList = local_c;
          return '\x01';
        }
        local_24 = &clDataList::_vftable__for__clData__;
        local_18[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
        local_4 = CONCAT31(local_4._1_3_,4);
        clPointerList<class_clData*>::~clPointerList<class_clData*>
                  ((clPointerList<class_clData*> *)local_18);
        local_24 = &clData::_vftable_;
      }
    }
  }
  local_4 = 0xffffffff;
  clDataList::~clDataList((clDataList *)&local_3c);
  ExceptionList = local_c;
  return '\0';
}




/* from: libgsclient:GSLobbyLib.cpp
   addr: 005A6280 */

uchar __thiscall
CGSLobbyLib::LobbyRcv_GameStarted
          (CGSLobbyLib *this,int *param_1,int *param_2,void *param_3,int *param_4,char *param_5,
          char *param_6,ushort *param_7)

{
  uchar uVar1;
  undefined **local_58;
  undefined4 *local_54;
  undefined **local_4c [2];
  undefined8 *local_44;
  undefined **local_40;
  undefined4 *local_3c;
  undefined **local_34 [2];
  undefined8 *local_2c;
  undefined **local_28;
  undefined4 *local_24;
  void **local_1c [3];
  undefined8 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005ca2b0;
  local_c = ExceptionList;
  local_24 = &clDataBin::_vbtable__for__clData__;
  local_10 = &clDataBin::_vbtable__for__ExtAlloc__vector<char>__;
  ExceptionList = &local_c;
  clData::clData((clData *)&local_28,2);
  local_4 = 0;
  ExtAlloc::vector<char>::vector<char>((vector<char> *)local_1c);
  local_28 = &clDataBin::_vftable_;
  local_4 = 1;
  local_54 = &clDataList::_vbtable__for__clData__;
  local_44 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
  clData::clData((clData *)&local_58,3);
  local_4._0_1_ = 2;
  clPointerList<class_clData*>::clPointerList<class_clData*>
            ((clPointerList<class_clData*> *)local_4c);
  local_58 = &clDataList::_vftable__for__clData__;
  local_4c[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_3c = &clDataList::_vbtable__for__clData__;
  local_2c = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
  clData::clData((clData *)&local_40,3);
  local_4._0_1_ = 4;
  clPointerList<class_clData*>::clPointerList<class_clData*>
            ((clPointerList<class_clData*> *)local_34);
  local_40 = &clDataList::_vftable__for__clData__;
  local_34[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_4._0_1_ = 5;
  if ((((*(int *)(this + 8) != 0) &&
       (uVar1 = clDataList::GetIndex
                          (*(clDataList **)(*(int *)(this + 8) + 8),(clDataList *)&local_58,1),
       uVar1 != '\0')) &&
      (uVar1 = clDataList::GetIndex((clDataList *)&local_58,param_1,0), uVar1 != '\0')) &&
     (uVar1 = clDataList::GetIndex((clDataList *)&local_58,(clDataBin *)&local_28,1), uVar1 != '\0')
     ) {
    *param_2 = *(int *)(*(int *)(this + 8) + 0x18);
    if (*param_4 != 0) {
      _STL::copy_aux(local_1c[0],(void **)(*param_4 + (int)local_1c[0]),(void **)param_3,
                     (__true_type *)&param_1);
    }
    uVar1 = clDataList::GetIndex((clDataList *)&local_58,param_7,2);
    if (uVar1 == '\0') {
      local_4._0_1_ = 3;
      clDataList::~clDataList((clDataList *)&local_40);
    }
    else {
      uVar1 = clDataList::GetIndex((clDataList *)&local_58,param_5,3);
      if (uVar1 != '\0') {
        uVar1 = clDataList::GetIndex((clDataList *)&local_58,param_6,4);
        local_4._0_1_ = 3;
        if (uVar1 != '\0') {
          clDataList::_vbase_destructor_((clDataList *)&local_40);
          local_4 = CONCAT31(local_4._1_3_,1);
          clDataList::_vbase_destructor_((clDataList *)&local_58);
          local_4 = 0xffffffff;
          clDataBin::_vbase_destructor_((clDataBin *)&local_28);
          ExceptionList = local_c;
          return '\x01';
        }
      }
      local_4._0_1_ = 3;
      clDataList::_vbase_destructor_((clDataList *)&local_40);
    }
    local_4 = CONCAT31(local_4._1_3_,1);
    clDataList::_vbase_destructor_((clDataList *)&local_58);
    local_4 = 0xffffffff;
    clDataBin::_vbase_destructor_((clDataBin *)&local_28);
    ExceptionList = local_c;
    return '\0';
  }
  local_4._0_1_ = 3;
  clDataList::~clDataList((clDataList *)&local_40);
  local_4 = CONCAT31(local_4._1_3_,1);
  clDataList::~clDataList((clDataList *)&local_58);
  clDataBin::~clDataBin((clDataBin *)&local_28);
  ExceptionList = local_c;
  return '\0';
}




/* from: libgsclient:GSLobbyLib.cpp
   addr: 005A64F0 */

uchar __thiscall
CGSLobbyLib::LobbyRcv_UpdateGameInfoReply
          (CGSLobbyLib *this,uchar *param_1,int *param_2,int *param_3,int *param_4)

{
  uchar uVar1;
  undefined **local_3c;
  undefined4 *local_38;
  undefined **local_30 [2];
  undefined8 *local_28;
  undefined **local_24;
  undefined4 *local_20;
  undefined **local_18 [2];
  undefined8 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005ca2f8;
  local_c = ExceptionList;
  local_38 = &clDataList::_vbtable__for__clData__;
  local_28 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
  ExceptionList = &local_c;
  clData::clData((clData *)&local_3c,3);
  local_4 = 0;
  clPointerList<class_clData*>::clPointerList<class_clData*>
            ((clPointerList<class_clData*> *)local_30);
  local_3c = &clDataList::_vftable__for__clData__;
  local_30[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_4 = 1;
  local_20 = &clDataList::_vbtable__for__clData__;
  local_10 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
  clData::clData((clData *)&local_24,3);
  local_4._0_1_ = 2;
  clPointerList<class_clData*>::clPointerList<class_clData*>
            ((clPointerList<class_clData*> *)local_18);
  local_18[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_24 = &clDataList::_vftable__for__clData__;
  local_4._0_1_ = 3;
  GetNewCurMessage(this,0x29);
  if (*(int *)(this + 8) == 0) {
    local_4 = CONCAT31(local_4._1_3_,1);
    clDataList::~clDataList((clDataList *)&local_24);
  }
  else {
    *param_4 = *(int *)(*(int *)(this + 8) + 0x18);
    uVar1 = DecodeRcv_Result(this,0x29,param_1,param_2);
    if (uVar1 == '\0') {
      local_4 = CONCAT31(local_4._1_3_,1);
      clDataList::~clDataList((clDataList *)&local_24);
    }
    else {
      uVar1 = clDataList::GetIndex
                        (*(clDataList **)(*(int *)(this + 8) + 8),(clDataList *)&local_3c,1);
      if (uVar1 == '\0') {
        local_4 = CONCAT31(local_4._1_3_,1);
        clDataList::~clDataList((clDataList *)&local_24);
      }
      else {
        uVar1 = clDataList::GetIndex((clDataList *)&local_3c,(clDataList *)&local_24,1);
        if (uVar1 != '\0') {
          uVar1 = clDataList::GetIndex((clDataList *)&local_24,param_3,(uint)(*param_1 != '&'));
          local_4 = CONCAT31(local_4._1_3_,1);
          if (uVar1 == '\0') {
            clDataList::~clDataList((clDataList *)&local_24);
            local_3c = &clDataList::_vftable__for__clData__;
            local_30[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
            local_4 = 5;
            clPointerList<class_clData*>::~clPointerList<class_clData*>
                      ((clPointerList<class_clData*> *)local_30);
            ExceptionList = local_c;
            return '\0';
          }
          clDataList::~clDataList((clDataList *)&local_24);
          local_3c = &clDataList::_vftable__for__clData__;
          local_30[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
          local_4 = 6;
          clPointerList<class_clData*>::~clPointerList<class_clData*>
                    ((clPointerList<class_clData*> *)local_30);
          ExceptionList = local_c;
          return '\x01';
        }
        local_24 = &clDataList::_vftable__for__clData__;
        local_18[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
        local_4 = CONCAT31(local_4._1_3_,4);
        clPointerList<class_clData*>::~clPointerList<class_clData*>
                  ((clPointerList<class_clData*> *)local_18);
        local_24 = &clData::_vftable_;
      }
    }
  }
  local_4 = 0xffffffff;
  clDataList::~clDataList((clDataList *)&local_3c);
  ExceptionList = local_c;
  return '\0';
}




/* from: libgsclient:GSLobbyLib.cpp
   addr: 005A6710 */

uchar __thiscall
CGSLobbyLib::LobbyRcv_PlayerBanReply
          (CGSLobbyLib *this,uchar *param_1,int *param_2,int *param_3,int *param_4,char *param_5)

{
  uchar uVar1;
  uchar uVar2;
  undefined **local_3c;
  undefined4 *local_38;
  undefined **local_30 [2];
  undefined8 *local_28;
  undefined **local_24;
  undefined4 *local_20;
  undefined **local_18 [2];
  undefined8 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005ca328;
  local_c = ExceptionList;
  local_38 = &clDataList::_vbtable__for__clData__;
  local_28 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
  ExceptionList = &local_c;
  clData::clData((clData *)&local_3c,3);
  clPointerList<class_clData*>::clPointerList<class_clData*>
            ((clPointerList<class_clData*> *)local_30);
  local_3c = &clDataList::_vftable__for__clData__;
  local_30[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_4 = 0;
  local_20 = &clDataList::_vbtable__for__clData__;
  local_10 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
  clData::clData((clData *)&local_24,3);
  clPointerList<class_clData*>::clPointerList<class_clData*>
            ((clPointerList<class_clData*> *)local_18);
  local_24 = &clDataList::_vftable__for__clData__;
  local_18[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_4._0_1_ = 1;
  GetNewCurMessage(this,0x24);
  if (*(int *)(this + 8) != 0) {
    *param_4 = *(int *)(*(int *)(this + 8) + 0x18);
    uVar1 = DecodeRcv_Result(this,0x24,param_1,param_2);
    if (((uVar1 != '\0') &&
        (uVar1 = clDataList::GetIndex
                           (*(clDataList **)(*(int *)(this + 8) + 8),(clDataList *)&local_3c,1),
        uVar1 != '\0')) &&
       (uVar1 = clDataList::GetIndex((clDataList *)&local_3c,(clDataList *)&local_24,1),
       uVar1 != '\0')) {
      uVar1 = *param_1;
      uVar2 = clDataList::GetIndex((clDataList *)&local_24,param_3,(uint)(uVar1 != '&'));
      if (uVar2 != '\0') {
        uVar1 = clDataList::GetIndex((clDataList *)&local_24,param_5,(uVar1 != '&') + 1);
        local_4 = (uint)local_4._1_3_ << 8;
        if (uVar1 != '\0') {
          clDataList::~clDataList((clDataList *)&local_24);
          local_4 = 0xffffffff;
          clDataList::~clDataList((clDataList *)&local_3c);
          ExceptionList = local_c;
          return '\x01';
        }
        clDataList::~clDataList((clDataList *)&local_24);
        local_3c = &clDataList::_vftable__for__clData__;
        local_30[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
        local_4 = 2;
        clPointerList<class_clData*>::~clPointerList<class_clData*>
                  ((clPointerList<class_clData*> *)local_30);
        ExceptionList = local_c;
        return '\0';
      }
    }
  }
  local_4 = (uint)local_4._1_3_ << 8;
  clDataList::~clDataList((clDataList *)&local_24);
  local_4 = 0xffffffff;
  clDataList::~clDataList((clDataList *)&local_3c);
  ExceptionList = local_c;
  return '\0';
}




/* from: libgsclient:GSLobbyLib.cpp
   addr: 005A68F0 */

uchar __thiscall
CGSLobbyLib::LobbyRcv_PlayerUnBanReply
          (CGSLobbyLib *this,uchar *param_1,int *param_2,int *param_3,int *param_4,char *param_5)

{
  uchar uVar1;
  uchar uVar2;
  undefined **local_3c;
  undefined4 *local_38;
  undefined **local_30 [2];
  undefined8 *local_28;
  undefined **local_24;
  undefined4 *local_20;
  undefined **local_18 [2];
  undefined8 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005ca358;
  local_c = ExceptionList;
  local_38 = &clDataList::_vbtable__for__clData__;
  local_28 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
  ExceptionList = &local_c;
  clData::clData((clData *)&local_3c,3);
  clPointerList<class_clData*>::clPointerList<class_clData*>
            ((clPointerList<class_clData*> *)local_30);
  local_3c = &clDataList::_vftable__for__clData__;
  local_30[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_4 = 0;
  local_20 = &clDataList::_vbtable__for__clData__;
  local_10 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
  clData::clData((clData *)&local_24,3);
  clPointerList<class_clData*>::clPointerList<class_clData*>
            ((clPointerList<class_clData*> *)local_18);
  local_24 = &clDataList::_vftable__for__clData__;
  local_18[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_4._0_1_ = 1;
  GetNewCurMessage(this,0x28);
  if (*(int *)(this + 8) != 0) {
    *param_4 = *(int *)(*(int *)(this + 8) + 0x18);
    uVar1 = DecodeRcv_Result(this,0x28,param_1,param_2);
    if (((uVar1 != '\0') &&
        (uVar1 = clDataList::GetIndex
                           (*(clDataList **)(*(int *)(this + 8) + 8),(clDataList *)&local_3c,1),
        uVar1 != '\0')) &&
       (uVar1 = clDataList::GetIndex((clDataList *)&local_3c,(clDataList *)&local_24,1),
       uVar1 != '\0')) {
      uVar1 = *param_1;
      uVar2 = clDataList::GetIndex((clDataList *)&local_24,param_3,(uint)(uVar1 != '&'));
      if (uVar2 != '\0') {
        uVar1 = clDataList::GetIndex((clDataList *)&local_24,param_5,(uVar1 != '&') + 1);
        local_4 = (uint)local_4._1_3_ << 8;
        if (uVar1 != '\0') {
          clDataList::~clDataList((clDataList *)&local_24);
          local_4 = 0xffffffff;
          clDataList::~clDataList((clDataList *)&local_3c);
          ExceptionList = local_c;
          return '\x01';
        }
        clDataList::~clDataList((clDataList *)&local_24);
        local_3c = &clDataList::_vftable__for__clData__;
        local_30[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
        local_4 = 2;
        clPointerList<class_clData*>::~clPointerList<class_clData*>
                  ((clPointerList<class_clData*> *)local_30);
        ExceptionList = local_c;
        return '\0';
      }
    }
  }
  local_4 = (uint)local_4._1_3_ << 8;
  clDataList::~clDataList((clDataList *)&local_24);
  local_4 = 0xffffffff;
  clDataList::~clDataList((clDataList *)&local_3c);
  ExceptionList = local_c;
  return '\0';
}




/* from: libgsclient:GSLobbyLib.cpp
   addr: 005A6AD0 */

uchar __thiscall
CGSLobbyLib::LobbyRcv_PlayerBanned(CGSLobbyLib *this,int *param_1,int *param_2,char *param_3)

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
  puStack_8 = &LAB_005ca3ee;
  local_c = ExceptionList;
  local_20 = &clDataList::_vbtable__for__clData__;
  local_10 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
  local_1c = 3;
  local_24 = &clData::_vftable_;
  ExceptionList = &local_c;
  clPointerList<class_clData*>::clPointerList<class_clData*>
            ((clPointerList<class_clData*> *)&local_18);
  local_24 = &clDataList::_vftable__for__clData__;
  local_18 = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_4 = 0;
  GetNewCurMessage(this,0x3f);
  if (*(int *)(this + 8) == 0) {
    local_24 = &clDataList::_vftable__for__clData__;
    local_18 = &clDataList::_vftable__for__clPointerList<class_clData*>__;
    local_4 = 1;
    clPointerList<class_clData*>::~clPointerList<class_clData*>
              ((clPointerList<class_clData*> *)&local_18);
    ExceptionList = local_c;
    return '\0';
  }
  *param_2 = *(int *)(*(int *)(this + 8) + 0x18);
  uVar1 = clDataList::GetIndex(*(clDataList **)(*(int *)(this + 8) + 8),(clDataList *)&local_24,1);
  if (uVar1 == '\0') {
    local_24 = &clDataList::_vftable__for__clData__;
    local_18 = &clDataList::_vftable__for__clPointerList<class_clData*>__;
    local_4 = 2;
    clPointerList<class_clData*>::~clPointerList<class_clData*>
              ((clPointerList<class_clData*> *)&local_18);
    ExceptionList = local_c;
    return '\0';
  }
  uVar1 = clDataList::GetIndex((clDataList *)&local_24,param_1,0);
  if (uVar1 == '\0') {
    local_24 = &clDataList::_vftable__for__clData__;
    local_18 = &clDataList::_vftable__for__clPointerList<class_clData*>__;
    local_4 = 3;
    clPointerList<class_clData*>::~clPointerList<class_clData*>
              ((clPointerList<class_clData*> *)&local_18);
    ExceptionList = local_c;
    return '\0';
  }
  uVar1 = clDataList::GetIndex((clDataList *)&local_24,param_3,1,0x81);
  local_24 = &clDataList::_vftable__for__clData__;
  if (uVar1 == '\0') {
    local_18 = &clPointerList<class_clData*>::_vftable_;
    local_4._0_1_ = 5;
    local_4._1_3_ = 0;
    clPointerList<class_clRcvElement*>::clear((clPointerList<class_clRcvElement*> *)&local_18);
    local_4 = CONCAT31(local_4._1_3_,4);
    ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>(local_14);
    ExceptionList = local_c;
    return '\0';
  }
  local_18 = &clPointerList<class_clData*>::_vftable_;
  local_4._0_1_ = 7;
  local_4._1_3_ = 0;
  clPointerList<class_clRcvElement*>::clear((clPointerList<class_clRcvElement*> *)&local_18);
  local_4 = CONCAT31(local_4._1_3_,6);
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>(local_14);
  ExceptionList = local_c;
  return '\x01';
}




/* from: libgsclient:GSLobbyLib.cpp
   addr: 005A6CC0 */

uchar __thiscall CGSLobbyLib::LobbyRcv_MatchReady(CGSLobbyLib *this,int *param_1,int *param_2)

{
  uchar uVar1;
  undefined1 uVar2;
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
  puStack_8 = &LAB_005ca4c4;
  local_c = ExceptionList;
  uVar2 = 3;
  local_20 = &clDataList::_vbtable__for__clData__;
  local_10 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
  local_1c = 3;
  local_24 = &clData::_vftable_;
  ExceptionList = &local_c;
  clPointerList<class_clData*>::clPointerList<class_clData*>
            ((clPointerList<class_clData*> *)&local_18);
  local_18 = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_24 = &clDataList::_vftable__for__clData__;
  local_4 = 0;
  GetNewCurMessage(this,0x41);
  if (*(int *)(this + 8) == 0) {
    local_24 = &clDataList::_vftable__for__clData__;
    local_18 = &clPointerList<class_clData*>::_vftable_;
    local_4._0_1_ = 2;
    local_4._1_3_ = 0;
    clPointerList<class_clRcvElement*>::clear((clPointerList<class_clRcvElement*> *)&local_18);
    local_4 = CONCAT31(local_4._1_3_,1);
    ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>(local_14);
    ExceptionList = local_c;
    return '\0';
  }
  *param_2 = *(int *)(*(int *)(this + 8) + 0x18);
  uVar1 = clDataList::GetIndex(*(clDataList **)(*(int *)(this + 8) + 8),(clDataList *)&local_24,1);
  if (uVar1 == '\0') {
    local_4._0_1_ = 4;
  }
  else {
    uVar1 = clDataList::GetIndex((clDataList *)&local_24,param_1,0);
    local_24 = &clDataList::_vftable__for__clData__;
    if (uVar1 != '\0') {
      local_18 = &clPointerList<class_clData*>::_vftable_;
      local_4._0_1_ = 8;
      local_4._1_3_ = 0;
      clPointerList<class_clRcvElement*>::clear((clPointerList<class_clRcvElement*> *)&local_18);
      local_4 = CONCAT31(local_4._1_3_,7);
      ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>(local_14);
      ExceptionList = local_c;
      return '\x01';
    }
    uVar2 = 5;
    local_4._0_1_ = 6;
  }
  local_4._1_3_ = 0;
  local_18 = &clPointerList<class_clData*>::_vftable_;
  local_24 = &clDataList::_vftable__for__clData__;
  clPointerList<class_clRcvElement*>::clear((clPointerList<class_clRcvElement*> *)&local_18);
  local_4 = CONCAT31(local_4._1_3_,uVar2);
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>(local_14);
  ExceptionList = local_c;
  return '\0';
}




/* from: libgsclient:GSLobbyLib.cpp
   addr: 005A6E80 */

uchar __thiscall CGSLobbyLib::LobbyRcv_InfoRefresh(CGSLobbyLib *this,int *param_1)

{
  GetNewCurMessage(this,6);
  if (*(int *)(this + 8) == 0) {
    return '\0';
  }
  *param_1 = *(int *)(*(int *)(this + 8) + 0x18);
  return '\x01';
}




/* from: libgsclient:GSLobbyLib.cpp
   addr: 005A6EB0 */

uchar __thiscall
CGSLobbyLib::LobbyRcv_SetPlayerInfoReply(CGSLobbyLib *this,uchar *param_1,int *param_2)

{
  uchar uVar1;
  
  GetNewCurMessage(this,0x2a);
  if (*(int *)(this + 8) == 0) {
    return '\0';
  }
  uVar1 = DecodeRcv_Result(this,0x2a,param_1,param_2);
  return uVar1 != '\0';
}




/* from: libgsclient:GSLobbyLib.cpp
   addr: 005A6EF0 */

uchar __thiscall CGSLobbyLib::FixCallbacks(CGSLobbyLib *this,clLobbyCallbacks *param_1)

{
  int iVar1;
  
  if ((this[0x18] == (CGSLobbyLib)0x0) && (iVar1 = *(int *)(this + 0x14), iVar1 != 0)) {
    (*(code *)**(undefined4 **)(*(int *)(*(int *)(iVar1 + 4) + 8) + 4 + iVar1))(1);
  }
  this[0x18] = (CGSLobbyLib)0x1;
  *(clLobbyCallbacks **)(this + 0x14) = param_1;
  return '\x01';
}




/* from: libgsclient:GSLobbyLib.cpp
   addr: 005A6F30 */

uchar __thiscall CGSLobbyLib::LobbyRcv_LoginResultCB(CGSLobbyLib *this)

{
  uchar uVar1;
  int local_8;
  undefined4 local_4;
  
  uVar1 = LobbyRcv_LoginResult(this,(uchar *)&local_4,&local_8);
  if (uVar1 != '\0') {
    (**(code **)**(undefined4 **)(this + 0x14))(local_4,local_8);
    return '\x01';
  }
  return '\0';
}




/* from: libgsclient:GSLobbyLib.cpp
   addr: 005A6F70 */

uchar __thiscall CGSLobbyLib::LobbyRcv_LobbyDisconnectAllCB(CGSLobbyLib *this)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  iVar1 = *(int *)(this + 0x10);
  if (iVar1 != 0) {
    piVar2 = *(int **)(iVar1 + 0xa4);
    iVar4 = 0;
    piVar3 = (int *)*piVar2;
    if (piVar3 != piVar2) {
      do {
        piVar3 = (int *)*piVar3;
        iVar4 = iVar4 + 1;
      } while (piVar3 != piVar2);
      if (iVar4 != 0) {
        return '\x01';
      }
    }
    if (*(int *)(iVar1 + 0xb0) == 0) {
      (**(code **)(**(int **)(this + 0x14) + 8))();
      this[0x19] = (CGSLobbyLib)0x0;
    }
  }
  return '\x01';
}




/* from: libgsclient:GSLobbyLib.cpp
   addr: 005A6FB0 */

uchar __thiscall CGSLobbyLib::LobbyRcv_LobbyDisconnectionCB(CGSLobbyLib *this)

{
  uchar uVar1;
  CGSLobbyLib *local_4;
  
  local_4 = this;
  uVar1 = LobbyRcv_LobbyDisconnection(this,(int *)&local_4);
  if ((uVar1 != '\0') && (this[0x19] != (CGSLobbyLib)0x0)) {
    (**(code **)(**(int **)(this + 0x14) + 4))(local_4);
  }
  return '\x01';
}




/* from: libgsclient:GSLobbyLib.cpp
   addr: 005A6FE0 */

uchar __thiscall CGSLobbyLib::LobbyRcv_LobbyErrorDisconnectionCB(CGSLobbyLib *this)

{
  if (this[0x19] == (CGSLobbyLib)0x0) {
    return '\0';
  }
  GetNewCurMessage(this,-3);
  LobbyRcv_LobbyDisconnectAllCB(this);
  return '\x01';
}




/* from: libgsclient:GSLobbyLib.cpp
   addr: 005A7010 */

uchar __thiscall CGSLobbyLib::LobbyRcv_NewGroupCB(CGSLobbyLib *this)

{
  uchar uVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined1 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int local_2cc;
  undefined **local_2c8;
  undefined4 *local_2c4;
  undefined4 local_2c0;
  undefined **local_2bc;
  list<class_clData*> local_2b8 [4];
  undefined8 *local_2b4;
  int local_2b0;
  int local_2ac;
  undefined4 local_2a8;
  int local_2a4;
  ushort local_29e;
  int local_29c;
  undefined4 local_298;
  uint local_294;
  clPointerList<class_clRcvElement*> *local_290;
  uint local_28c;
  uint local_288;
  uint local_284;
  uint local_280;
  uint local_27c;
  char local_278 [16];
  char local_268 [36];
  char local_244 [36];
  char local_220 [36];
  char local_1fc [100];
  char local_198 [132];
  char local_114 [132];
  char local_90 [132];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005ca5a9;
  local_c = ExceptionList;
  puVar7 = (undefined4 *)0x0;
  local_294 = 0;
  local_2c4 = &clDataList::_vbtable__for__clData__;
  local_2b4 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
  local_2c0 = 3;
  local_2c8 = &clData::_vftable_;
  local_4 = 0;
  ExceptionList = &local_c;
  ExtAlloc::list<class_clData*>::list<class_clData*>(local_2b8);
  local_2bc = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_2c8 = &clDataList::_vftable__for__clData__;
  local_4 = 1;
  local_2cc = 0;
  GetNewCurMessage(this,0x36);
  clDataList::GetIndex(*(clDataList **)(*(int *)(this + 8) + 8),&local_29e,0);
  clDataList::GetIndex(*(clDataList **)(*(int *)(this + 8) + 8),(clDataList *)&local_2c8,1);
  if (*(int *)(this + 8) == 0) {
    uVar6 = 2;
    local_4._0_1_ = 3;
  }
  else {
    if (local_29e == 0x36) {
      iVar3 = GetGroupInfoSize(this,(clDataList *)&local_2c8);
      if (iVar3 != 0) {
        uVar5 = iVar3 + 1;
        puVar7 = (undefined4 *)ExtAlloc_Malloc_4(uVar5);
        puVar8 = puVar7;
        for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar8 = 0;
          puVar8 = puVar8 + 1;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined1 *)puVar8 = 0;
          puVar8 = (undefined4 *)((int)puVar8 + 1);
        }
      }
      sVar2 = GetGroupType(this);
      if (sVar2 == 0) {
        uVar1 = LobbyRcv_LobbyInfo(this,(clDataList *)&local_2c8,(short *)&local_2a8,local_268,
                                   &local_2ac,&local_2b0,&local_2a4,&local_29c,(short *)&local_298,
                                   local_278,local_198,local_1fc,puVar7,iVar3,&local_27c,&local_280,
                                   &local_2cc);
        if (uVar1 != '\0') {
          (**(code **)(**(int **)(this + 0x14) + 0x1c))
                    (local_2a8,local_268,local_2ac,local_2b0,local_2a4,local_29c,local_298,local_278
                     ,local_198,local_1fc,puVar7,iVar3,local_27c,local_280,local_2cc);
        }
      }
      else {
        uVar1 = LobbyRcv_RoomInfo(this,(clDataList *)&local_2c8,(short *)&local_2a8,local_268,
                                  &local_2ac,&local_2b0,&local_2a4,&local_29c,(short *)&local_298,
                                  local_278,local_198,local_1fc,local_220,local_244,puVar7,iVar3,
                                  &local_294,&local_284,&local_28c,&local_288,local_114,local_90,
                                  &local_2cc);
        if ((uVar1 != '\0') && (uVar1 = IsGameRequested(this,local_1fc), uVar1 != '\0')) {
          (**(code **)(**(int **)(this + 0x14) + 0x18))
                    (local_2a8,local_268,local_2ac,local_2b0,local_2a4,local_29c,local_298,local_278
                     ,local_198,local_1fc,local_220,local_244,puVar7,iVar3,local_294,local_284,
                     local_28c,local_288,local_114,local_90,local_2cc);
        }
      }
      if (puVar7 != (undefined4 *)0x0) {
        ExtAlloc_Free_4(puVar7);
      }
      local_2c8 = &clDataList::_vftable__for__clData__;
      local_290 = (clPointerList<class_clRcvElement*> *)&local_2bc;
      local_2bc = &clPointerList<class_clData*>::_vftable_;
      local_4._0_1_ = 7;
      local_4._1_3_ = 0;
      clPointerList<class_clRcvElement*>::clear((clPointerList<class_clRcvElement*> *)&local_2bc);
      local_4 = CONCAT31(local_4._1_3_,6);
      ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
                ((list<class_clRcvElement*> *)local_2b8);
      ExceptionList = local_c;
      return '\x01';
    }
    uVar6 = 4;
    local_4._0_1_ = 5;
  }
  local_4._1_3_ = 0;
  local_2bc = &clPointerList<class_clData*>::_vftable_;
  local_2c8 = &clDataList::_vftable__for__clData__;
  local_290 = (clPointerList<class_clRcvElement*> *)&local_2bc;
  clPointerList<class_clRcvElement*>::clear(local_290);
  local_4 = CONCAT31(local_4._1_3_,uVar6);
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            ((list<class_clRcvElement*> *)local_2b8);
  ExceptionList = local_c;
  return '\0';
}




/* from: libgsclient:GSLobbyLib.cpp
   addr: 005A73D0 */

uchar __thiscall CGSLobbyLib::LobbyRcv_GroupInfoCB(CGSLobbyLib *this)

{
  uchar uVar1;
  int iVar2;
  void *pvVar3;
  _List_iterator<class_clData*,struct__STL::_Const_traits<class_clData*>_> *p_Var4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 *puVar9;
  input_iterator_tag iStack_389;
  int local_388;
  int local_384;
  int local_380;
  undefined4 local_37a;
  ushort local_376;
  int local_374;
  uchar uStack_36d;
  undefined4 local_36c;
  clDataList *local_368;
  uint uStack_364;
  int local_360;
  undefined **local_35c;
  undefined4 *local_358;
  undefined **local_350 [2];
  undefined8 *local_348;
  void *pvStack_344;
  uint local_340;
  ushort local_33a;
  uint local_338;
  uint local_334;
  uint local_330;
  uint local_32c;
  int iStack_328;
  uint local_324;
  uint local_320;
  uint local_31c;
  undefined **local_318;
  undefined4 *local_314;
  undefined **local_30c [2];
  undefined8 *local_304;
  undefined **local_300;
  undefined4 *local_2fc;
  void *local_2f4;
  void *pvStack_2f0;
  undefined8 *local_2e8;
  undefined **local_2e4;
  undefined4 *local_2e0;
  undefined **local_2d8 [2];
  undefined8 *local_2d0;
  undefined **local_2cc;
  undefined4 *local_2c8;
  undefined **local_2c0 [2];
  undefined8 *local_2b8;
  undefined4 uStack_2b4;
  undefined4 local_2b0;
  int iStack_2ac;
  int *piStack_2a8;
  char local_2a4 [16];
  undefined4 auStack_294 [2];
  char local_28c [36];
  char local_268 [36];
  char local_244 [36];
  char local_220 [100];
  char acStack_1bc [36];
  char local_198 [132];
  char local_114 [132];
  char local_90 [132];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005ca62e;
  local_c = ExceptionList;
  local_2b0 = 0;
  local_2e0 = &clDataList::_vbtable__for__clData__;
  local_2d0 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
  ExceptionList = &local_c;
  clData::clData((clData *)&local_2e4,3);
  clPointerList<class_clData*>::clPointerList<class_clData*>
            ((clPointerList<class_clData*> *)local_2d8);
  local_2e4 = &clDataList::_vftable__for__clData__;
  local_2d8[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_4 = 0;
  local_314 = &clDataList::_vbtable__for__clData__;
  local_304 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
  clData::clData((clData *)&local_318,3);
  clPointerList<class_clData*>::clPointerList<class_clData*>
            ((clPointerList<class_clData*> *)local_30c);
  local_318 = &clDataList::_vftable__for__clData__;
  local_30c[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_2c8 = &clDataList::_vbtable__for__clData__;
  local_2b8 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
  clData::clData((clData *)&local_2cc,3);
  clPointerList<class_clData*>::clPointerList<class_clData*>
            ((clPointerList<class_clData*> *)local_2c0);
  local_2cc = &clDataList::_vftable__for__clData__;
  local_2c0[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_358 = &clDataList::_vbtable__for__clData__;
  local_348 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
  clData::clData((clData *)&local_35c,3);
  clPointerList<class_clData*>::clPointerList<class_clData*>
            ((clPointerList<class_clData*> *)local_350);
  local_35c = &clDataList::_vftable__for__clData__;
  local_350[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  puVar7 = (undefined4 *)0x0;
  local_384 = 0;
  local_2fc = &clDataBin::_vbtable__for__clData__;
  local_2e8 = &clDataBin::_vbtable__for__ExtAlloc__vector<char>__;
  clData::clData((clData *)&local_300,2);
  local_4._0_1_ = 4;
  ExtAlloc::vector<char>::vector<char>((vector<char> *)&local_2f4);
  local_300 = &clDataBin::_vftable_;
  local_334 = 0;
  local_4 = CONCAT31(local_4._1_3_,5);
  local_388 = *(int *)(*(int *)(this + 8) + 0x18);
  GetNewCurMessage(this,0x35);
  if (*(int *)(this + 8) != 0) {
    clDataList::GetIndex(*(clDataList **)(*(int *)(this + 8) + 8),&local_33a,0);
    clDataList::GetIndex(*(clDataList **)(*(int *)(this + 8) + 8),(clDataList *)&local_2e4,1);
    if (local_33a == 0x35) {
      GetGroupInfoFlag(this,(int *)&local_340,&local_376,&local_360);
      if (((local_340 & 0x40) != 0) &&
         (uVar1 = clDataList::GetIndex((clDataList *)&local_2e4,(clDataList *)&local_318,2),
         uVar1 != '\0')) {
        iVar2 = GetGroupInfoSize(this,(clDataList *)&local_318);
        if (iVar2 != 0) {
          uVar6 = iVar2 + 1;
          puVar7 = (undefined4 *)ExtAlloc_Malloc_4(uVar6);
          puVar9 = puVar7;
          for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
            *puVar9 = 0;
            puVar9 = puVar9 + 1;
          }
          for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(undefined1 *)puVar9 = 0;
            puVar9 = (undefined4 *)((int)puVar9 + 1);
          }
        }
        if ((local_376 == 0) &&
           (uVar1 = LobbyRcv_LobbyInfo(this,(clDataList *)&local_318,(short *)&local_37a,local_28c,
                                       &local_360,&local_388,&local_374,&local_380,
                                       (short *)&local_36c,local_2a4,local_198,local_220,puVar7,
                                       iVar2,&local_320,&local_31c,&local_384), uVar1 != '\0')) {
          (**(code **)(**(int **)(this + 0x14) + 0x24))
                    (local_37a,local_28c,local_360,local_388,local_374,local_380,local_36c,local_2a4
                     ,local_198,local_220,puVar7,iVar2,local_320,local_31c,local_384);
        }
        else {
          uVar1 = LobbyRcv_RoomInfo(this,(clDataList *)&local_318,(short *)&local_37a,local_28c,
                                    &local_360,&local_388,&local_374,&local_380,(short *)&local_36c,
                                    local_2a4,local_198,local_220,local_244,local_268,puVar7,iVar2,
                                    &local_32c,&local_330,&local_324,&local_338,local_114,local_90,
                                    &local_384);
          if (uVar1 != '\0') {
            (**(code **)(**(int **)(this + 0x14) + 0x20))
                      (local_37a,local_28c,local_360,local_388,local_374,local_380,local_36c,
                       local_2a4,local_198,local_220,local_244,local_268,puVar7,iVar2,local_32c,
                       local_330,local_324,local_338,local_114,local_90,local_384);
          }
        }
        if (puVar7 != (undefined4 *)0x0) {
          ExtAlloc_Free_4(puVar7);
          puVar7 = (undefined4 *)0x0;
        }
      }
      if (((local_340 & 0x100) != 0) &&
         (uVar1 = clDataList::GetIndex((clDataList *)&local_2e4,&local_368,3), uVar1 != '\0')) {
        uStack_364 = 1;
        uVar1 = clDataList::GetIndex(local_368,(clDataList *)&local_35c,0);
        while (uVar1 != '\0') {
          iVar2 = GetGroupInfoSize(this,(clDataList *)&local_35c);
          if (iVar2 != 0) {
            uVar6 = iVar2 + 1;
            puVar7 = (undefined4 *)ExtAlloc_Malloc_4(uVar6);
            puVar9 = puVar7;
            for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
              *puVar9 = 0;
              puVar9 = puVar9 + 1;
            }
            for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
              *(undefined1 *)puVar9 = 0;
              puVar9 = (undefined4 *)((int)puVar9 + 1);
            }
          }
          clDataList::GetIndex((clDataList *)&local_35c,&local_376,0);
          if ((local_376 == 0) &&
             (uVar1 = LobbyRcv_LobbyInfo(this,(clDataList *)&local_35c,(short *)&local_37a,local_28c
                                         ,&iStack_328,&local_388,&local_374,&local_380,
                                         (short *)&local_36c,local_2a4,local_198,local_220,puVar7,
                                         iVar2,&local_320,&local_31c,&local_384), uVar1 != '\0')) {
            (**(code **)(**(int **)(this + 0x14) + 0x1c))
                      (local_37a,local_28c,iStack_328,local_388,local_374,local_380,local_36c,
                       local_2a4,local_198,local_220,puVar7,iVar2,local_320,local_31c,local_384);
          }
          else {
            uVar1 = LobbyRcv_RoomInfo(this,(clDataList *)&local_35c,(short *)&local_37a,local_28c,
                                      &iStack_328,&local_388,&local_374,&local_380,
                                      (short *)&local_36c,local_2a4,local_198,local_220,local_244,
                                      local_268,puVar7,iVar2,&local_32c,&local_330,&local_324,
                                      &local_338,local_114,local_90,&local_384);
            if (uVar1 != '\0') {
              (**(code **)(**(int **)(this + 0x14) + 0x18))
                        (local_37a,local_28c,iStack_328,local_388,local_374,local_380,local_36c,
                         local_2a4,local_198,local_220,local_244,local_268,puVar7,iVar2,local_32c,
                         local_330,local_324,local_338,local_114,local_90,local_384);
            }
          }
          if (puVar7 != (undefined4 *)0x0) {
            ExtAlloc_Free_4(puVar7);
            puVar7 = (undefined4 *)0x0;
          }
          uVar6 = uStack_364;
          uStack_364 = uStack_364 + 1;
          uVar1 = clDataList::GetIndex(local_368,(clDataList *)&local_35c,uVar6);
        }
      }
      if (((char)local_340 < '\0') &&
         (uVar1 = clDataList::GetIndex((clDataList *)&local_2e4,(clDataList *)&local_2cc,4),
         uVar1 != '\0')) {
        uStack_364 = 1;
        uVar1 = clDataList::GetIndex((clDataList *)&local_2cc,(clDataList *)&local_35c,0);
        while (uVar1 != '\0') {
          uVar1 = clDataList::GetIndex((clDataList *)&local_35c,acStack_1bc,0);
          if ((uVar1 == '\0') ||
             (uVar1 = clDataList::GetIndex((clDataList *)&local_35c,&uStack_36d,1), uVar1 == '\0'))
          goto LAB_005a756a;
          local_2b0 = CONCAT31(local_2b0._1_3_,uStack_36d != '\0');
          uVar1 = clDataList::GetIndex((clDataList *)&local_35c,local_114,2);
          if ((uVar1 == '\0') ||
             (uVar1 = clDataList::GetIndex((clDataList *)&local_35c,local_90,3), uVar1 == '\0'))
          goto LAB_005a756a;
          uVar1 = clDataList::GetIndex((clDataList *)&local_35c,(clDataBin *)&local_300,4);
          if (uVar1 == '\0') {
            local_4 = CONCAT31(local_4._1_3_,3);
            local_300 = &clDataBin::_vftable_;
            _STL::
            _Vector_base<void*,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
            ::
            ~_Vector_base<void*,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
                      ((_Vector_base<void*,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
                        *)&local_2f4);
            local_300 = &clData::_vftable_;
            goto LAB_005a7576;
          }
          iVar2 = (int)pvStack_2f0 - (int)local_2f4;
          iStack_2ac = iVar2;
          if (iVar2 == 0) {
            pvVar3 = (void *)0x0;
            pvStack_344 = (void *)0x0;
          }
          else {
            pvVar3 = (void *)ExtAlloc_Malloc_4(iVar2 + 1);
            pvStack_344 = pvVar3;
            _STL::copy_trivial(local_2f4,pvStack_2f0,pvVar3);
            *(undefined1 *)((int)pvVar3 + iVar2) = 0;
          }
          uVar1 = clDataList::GetIndex((clDataList *)&local_35c,&local_368,5);
          if (uVar1 == '\0') {
            local_4._0_1_ = 3;
            local_300 = &clDataBin::_vftable_;
            _STL::
            _Vector_base<void*,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
            ::
            ~_Vector_base<void*,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
                      ((_Vector_base<void*,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
                        *)&local_2f4);
            local_300 = &clData::_vftable_;
            local_35c = &clDataList::_vftable__for__clData__;
            local_350[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
            local_4._0_1_ = 6;
            clPointerList<class_clData*>::~clPointerList<class_clData*>
                      ((clPointerList<class_clData*> *)local_350);
            local_35c = &clData::_vftable_;
            local_2cc = &clDataList::_vftable__for__clData__;
            local_2c0[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
            local_4._0_1_ = 7;
            clPointerList<class_clData*>::~clPointerList<class_clData*>
                      ((clPointerList<class_clData*> *)local_2c0);
            local_2cc = &clData::_vftable_;
            local_318 = &clDataList::_vftable__for__clData__;
            local_30c[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
            local_4 = CONCAT31(local_4._1_3_,8);
            clPointerList<class_clData*>::~clPointerList<class_clData*>
                      ((clPointerList<class_clData*> *)local_30c);
            local_318 = &clData::_vftable_;
            goto LAB_005a7f1f;
          }
          uVar1 = clDataList::GetIndex((clDataList *)&local_35c,(ushort *)&uStack_2b4,6);
          if (uVar1 == '\0') {
            uStack_2b4 = 0xffff;
          }
          clDataList::GetIndex((clDataList *)&local_35c,(ushort *)&local_334,local_334 & 0xffff);
          auStack_294[0] = *(undefined4 *)(local_368 + 0x10);
          p_Var4 = (_List_iterator<class_clData*,struct__STL::_Const_traits<class_clData*>_> *)
                   _STL::list<class_clRcvElement*,class_ExtAlloc::Allocator<class_clRcvElement*>_>::
                   begin((list<class_clRcvElement*,class_ExtAlloc::Allocator<class_clRcvElement*>_>
                          *)(local_368 + 0x10));
          iVar2 = _STL::distance(p_Var4,(_List_iterator<class_clData*,struct__STL::_Const_traits<class_clData*>_>
                                         *)auStack_294,&iStack_389);
          iVar2 = iVar2 * 4 + 4;
          piVar8 = (int *)0x0;
          uVar6 = 1;
          if (iVar2 != 0) {
            piVar8 = (int *)ExtAlloc_Malloc_4(iVar2);
            *piVar8 = local_360;
            uVar1 = clDataList::GetIndex(local_368,piVar8 + 1,0);
            pvVar3 = pvStack_344;
            if (uVar1 != '\0') {
              piStack_2a8 = piVar8 + 1;
              uVar5 = uVar6;
              do {
                uVar6 = uVar5 + 1;
                piStack_2a8 = piStack_2a8 + 1;
                uVar1 = clDataList::GetIndex(local_368,piStack_2a8,uVar5);
                pvVar3 = pvStack_344;
                uVar5 = uVar6;
              } while (uVar1 != '\0');
            }
          }
          (**(code **)(**(int **)(this + 0x14) + 0x30))
                    (acStack_1bc,local_2b0,piVar8,uVar6,local_388,local_114,local_90,uStack_2b4,
                     pvVar3,iStack_2ac,0,local_334);
          ExtAlloc_Free_4(pvVar3);
          ExtAlloc_Free_4(piVar8);
          uVar6 = uStack_364;
          uStack_364 = uStack_364 + 1;
          uVar1 = clDataList::GetIndex((clDataList *)&local_2cc,(clDataList *)&local_35c,uVar6);
        }
      }
      local_4._0_1_ = 3;
      local_300 = &clDataBin::_vftable_;
      _STL::
      _Vector_base<void*,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
      ::
      ~_Vector_base<void*,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
                ((_Vector_base<void*,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
                  *)&local_2f4);
      local_300 = &clData::_vftable_;
      local_4._0_1_ = 2;
      clDataList::~clDataList((clDataList *)&local_35c);
      local_4._0_1_ = 1;
      clDataList::~clDataList((clDataList *)&local_2cc);
      local_4 = (uint)local_4._1_3_ << 8;
      clDataList::~clDataList((clDataList *)&local_318);
      local_2e4 = &clDataList::_vftable__for__clData__;
      local_2d8[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
      local_4 = 9;
      clPointerList<class_clData*>::~clPointerList<class_clData*>
                ((clPointerList<class_clData*> *)local_2d8);
      ExceptionList = local_c;
      return '\x01';
    }
  }
LAB_005a756a:
  clDataBin::~clDataBin((clDataBin *)&local_300);
LAB_005a7576:
  local_4._0_1_ = 2;
  clDataList::~clDataList((clDataList *)&local_35c);
  local_4._0_1_ = 1;
  clDataList::~clDataList((clDataList *)&local_2cc);
  local_4 = (uint)local_4._1_3_ << 8;
  clDataList::~clDataList((clDataList *)&local_318);
LAB_005a7f1f:
  local_4 = 0xffffffff;
  clDataList::~clDataList((clDataList *)&local_2e4);
  ExceptionList = local_c;
  return '\0';
}




/* from: libgsclient:GSLobbyLib.cpp
   addr: 005A7F40 */

uchar __thiscall CGSLobbyLib::LobbyRcv_GroupInfoGetCB(CGSLobbyLib *this)

{
  uchar uVar1;
  int local_c;
  int local_8;
  undefined4 local_4;
  
  uVar1 = LobbyRcv_GroupInfoGet(this,(uchar *)&local_4,&local_8,&local_c);
  if (uVar1 != '\0') {
    (**(code **)(**(int **)(this + 0x14) + 0x28))(local_4,local_8,local_c);
    return '\x01';
  }
  return '\0';
}




/* from: libgsclient:GSLobbyLib.cpp
   addr: 005A7F90 */

uchar __thiscall CGSLobbyLib::LobbyRcv_CreateRoomCB(CGSLobbyLib *this)

{
  uchar uVar1;
  int local_34;
  int local_30;
  int local_2c;
  undefined4 local_28;
  char local_24 [36];
  
  uVar1 = LobbyRcv_CreateRoom(this,(uchar *)&local_28,&local_2c,local_24,&local_30,&local_34);
  if (uVar1 != '\0') {
    (**(code **)(**(int **)(this + 0x14) + 0xc))(local_28,local_2c,local_24,local_30,local_34);
    return '\x01';
  }
  return '\0';
}




/* from: libgsclient:GSLobbyLib.cpp
   addr: 005A7FF0 */

uchar __thiscall CGSLobbyLib::LobbyRcv_JoinRoomResultCB(CGSLobbyLib *this)

{
  uchar uVar1;
  int iVar2;
  char *pcVar3;
  int local_94;
  int local_90;
  undefined4 local_8c;
  int local_88;
  char local_84 [132];
  
  pcVar3 = local_84;
  for (iVar2 = 0x20; iVar2 != 0; iVar2 = iVar2 + -1) {
    pcVar3[0] = '\0';
    pcVar3[1] = '\0';
    pcVar3[2] = '\0';
    pcVar3[3] = '\0';
    pcVar3 = pcVar3 + 4;
  }
  *pcVar3 = '\0';
  uVar1 = LobbyRcv_JoinRoomReply(this,(uchar *)&local_8c,&local_94,local_84,&local_88,&local_90);
  if (uVar1 != '\0') {
    (**(code **)(**(int **)(this + 0x14) + 0x14))(local_8c,local_94,local_84,local_88,local_90);
    return '\x01';
  }
  return '\0';
}




/* from: libgsclient:GSLobbyLib.cpp
   addr: 005A8070 */

uchar __thiscall CGSLobbyLib::LobbyRcv_JoinLobbyResultCB(CGSLobbyLib *this)

{
  uchar uVar1;
  int iVar2;
  char *pcVar3;
  int local_94;
  int local_90;
  undefined4 local_8c;
  int local_88;
  char local_84 [132];
  
  pcVar3 = local_84;
  for (iVar2 = 0x20; iVar2 != 0; iVar2 = iVar2 + -1) {
    pcVar3[0] = '\0';
    pcVar3[1] = '\0';
    pcVar3[2] = '\0';
    pcVar3[3] = '\0';
    pcVar3 = pcVar3 + 4;
  }
  *pcVar3 = '\0';
  uVar1 = LobbyRcv_JoinLobbyReply(this,(uchar *)&local_8c,&local_94,local_84,&local_88,&local_90);
  if (uVar1 != '\0') {
    (**(code **)(**(int **)(this + 0x14) + 0x10))(local_8c,local_94,local_84,local_88,local_90);
    return '\x01';
  }
  return '\0';
}




/* from: libgsclient:GSLobbyLib.cpp
   addr: 005A80F0 */

uchar __thiscall CGSLobbyLib::LobbyRcv_MemberJoinCB(CGSLobbyLib *this)

{
  uchar uVar1;
  void **ppvVar2;
  int iVar3;
  undefined4 uStack_1a8;
  char *pcStack_1a4;
  char *pcStack_1a0;
  undefined4 uStack_19c;
  __true_type local_17c;
  __true_type local_17b;
  ushort local_17a;
  undefined **local_178;
  undefined4 *local_174;
  undefined **local_16c [2];
  undefined8 *local_164;
  int local_160;
  ushort local_15c [2];
  undefined **local_158;
  undefined4 *local_154;
  void **local_14c;
  void **local_148;
  undefined8 *local_140;
  undefined4 local_13c;
  char local_138 [36];
  char local_114 [132];
  char local_90 [84];
  void *pvStack_3c;
  undefined4 uStack_34;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005ca661;
  local_c = ExceptionList;
  local_160 = 0;
  local_174 = &clDataList::_vbtable__for__clData__;
  local_164 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
  ExceptionList = &local_c;
  clData::clData((clData *)&local_178,3);
  clPointerList<class_clData*>::clPointerList<class_clData*>
            ((clPointerList<class_clData*> *)local_16c);
  local_178 = &clDataList::_vftable__for__clData__;
  local_16c[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_4 = 0;
  local_15c[0] = 0;
  local_15c[1] = 0;
  local_154 = &clDataBin::_vbtable__for__clData__;
  local_140 = &clDataBin::_vbtable__for__ExtAlloc__vector<char>__;
  clData::clData((clData *)&local_158,2);
  local_4._0_1_ = 1;
  ExtAlloc::vector<char>::vector<char>((vector<char> *)&local_14c);
  local_158 = &clDataBin::_vftable_;
  local_4 = CONCAT31(local_4._1_3_,2);
  GetNewCurMessage(this,0x32);
  iVar3 = *(int *)(this + 8);
  if (iVar3 != 0) {
    local_13c = *(undefined4 *)(iVar3 + 0x18);
    clDataList::GetIndex(*(clDataList **)(iVar3 + 8),&local_17a,0);
    clDataList::GetIndex(*(clDataList **)(*(int *)(this + 8) + 8),(clDataList *)&local_178,1);
    if (local_17a == 0x32) {
      uVar1 = clDataList::GetIndex((clDataList *)&local_178,local_138,0);
      if (uVar1 != '\0') {
        uVar1 = clDataList::GetIndex((clDataList *)&local_178,(uchar *)&local_17c,1);
        if (uVar1 != '\0') {
          uVar1 = clDataList::GetIndex((clDataList *)&local_178,&local_160,2);
          if (uVar1 != '\0') {
            uVar1 = clDataList::GetIndex((clDataList *)&local_178,local_90,3);
            if (uVar1 != '\0') {
              uVar1 = clDataList::GetIndex((clDataList *)&local_178,local_114,4);
              if (uVar1 != '\0') {
                uVar1 = clDataList::GetIndex((clDataList *)&local_178,(clDataBin *)&local_158,5);
                if (uVar1 != '\0') {
                  iVar3 = (int)local_148 - (int)local_14c;
                  if (iVar3 == 0) {
                    ppvVar2 = (void **)0x0;
                  }
                  else {
                    ppvVar2 = (void **)ExtAlloc_Malloc_4();
                    local_17b = local_17c;
                    uStack_19c = 0x5a82cb;
                    _STL::copy_aux(local_14c,local_148,ppvVar2,&local_17b);
                    *(undefined1 *)((int)ppvVar2 + iVar3) = 0;
                  }
                  clDataList::GetIndex((clDataList *)&local_178,local_15c,6);
                  pcStack_1a0 = local_114;
                  uStack_19c = 0xffff;
                  pcStack_1a4 = local_90;
                  uStack_1a8 = local_13c;
                  (**(code **)(**(int **)(this + 0x14) + 0x30))
                            (local_138,
                             CONCAT31((int3)((uint)&local_160 >> 8),local_17c != (__true_type)0x0),
                             &local_160,1);
                  ExtAlloc_Free_4(ppvVar2);
                  clDataBin::~clDataBin((clDataBin *)&stack0xfffffe78);
                  uStack_34 = 0xffffffff;
                  clDataList::~clDataList((clDataList *)&uStack_1a8);
                  ExceptionList = pvStack_3c;
                  return '\x01';
                }
              }
            }
          }
        }
      }
    }
  }
  clDataBin::~clDataBin((clDataBin *)&local_158);
  local_4 = 0xffffffff;
  clDataList::~clDataList((clDataList *)&local_178);
  ExceptionList = local_c;
  return '\0';
}




/* from: libgsclient:GSLobbyLib.cpp
   addr: 005A8370 */

uchar __thiscall CGSLobbyLib::LobbyRcv_MemberLeaveCB(CGSLobbyLib *this)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uchar uVar4;
  int local_64;
  undefined **local_60;
  undefined4 *local_5c;
  undefined **local_54 [2];
  undefined8 *local_4c;
  undefined **local_48;
  undefined4 *local_44;
  undefined4 local_40;
  undefined **local_3c [2];
  undefined8 *local_34;
  char local_30 [36];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005ca6a0;
  local_c = ExceptionList;
  local_64 = 0;
  local_44 = &clDataList::_vbtable__for__clData__;
  local_34 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
  local_40 = 3;
  local_48 = &clData::_vftable_;
  ExceptionList = &local_c;
  clPointerList<class_clData*>::clPointerList<class_clData*>
            ((clPointerList<class_clData*> *)local_3c);
  local_48 = &clDataList::_vftable__for__clData__;
  local_3c[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_4 = 0;
  local_5c = &clDataList::_vbtable__for__clData__;
  local_4c = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
  clData::clData((clData *)&local_60,3);
  clPointerList<class_clData*>::clPointerList<class_clData*>
            ((clPointerList<class_clData*> *)local_54);
  local_60 = &clDataList::_vftable__for__clData__;
  local_54[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_4._0_1_ = 1;
  GetNewCurMessage(this,0x33);
  iVar1 = *(int *)(this + 8);
  if (iVar1 == 0) {
    local_60 = &clDataList::_vftable__for__clData__;
    local_54[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
    local_4 = CONCAT31(local_4._1_3_,2);
    clPointerList<class_clData*>::~clPointerList<class_clData*>
              ((clPointerList<class_clData*> *)local_54);
    local_60 = &clData::_vftable_;
    local_48 = &clDataList::_vftable__for__clData__;
    local_3c[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
    local_4 = 3;
    clPointerList<class_clData*>::~clPointerList<class_clData*>
              ((clPointerList<class_clData*> *)local_3c);
    ExceptionList = local_c;
    return '\0';
  }
  uVar2 = *(undefined4 *)(iVar1 + 0x18);
  uVar4 = clDataList::GetIndex(*(clDataList **)(iVar1 + 8),(clDataList *)&local_48,1);
  if (uVar4 == '\0') {
    local_4 = (uint)local_4._1_3_ << 8;
    clDataList::~clDataList((clDataList *)&local_60);
  }
  else {
    uVar4 = clDataList::GetIndex((clDataList *)&local_48,local_30,0,0x21);
    if (uVar4 != '\0') {
      uVar4 = clDataList::GetIndex((clDataList *)&local_48,&local_64,1);
      uVar3 = 2;
      while (uVar4 != '\0') {
        (**(code **)(**(int **)(this + 0x14) + 0x34))(local_30,local_64,uVar2);
        uVar4 = clDataList::GetIndex((clDataList *)&local_48,&local_64,uVar3);
        uVar3 = uVar3 + 1;
      }
      local_60 = &clDataList::_vftable__for__clData__;
      local_54[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
      local_4 = CONCAT31(local_4._1_3_,5);
      clPointerList<class_clData*>::~clPointerList<class_clData*>
                ((clPointerList<class_clData*> *)local_54);
      local_60 = &clData::_vftable_;
      local_4 = 0xffffffff;
      clDataList::~clDataList((clDataList *)&local_48);
      ExceptionList = local_c;
      return '\x01';
    }
    local_60 = &clDataList::_vftable__for__clData__;
    local_54[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
    local_4 = CONCAT31(local_4._1_3_,4);
    clPointerList<class_clData*>::~clPointerList<class_clData*>
              ((clPointerList<class_clData*> *)local_54);
    local_60 = &clData::_vftable_;
  }
  local_4 = 0xffffffff;
  clDataList::~clDataList((clDataList *)&local_48);
  ExceptionList = local_c;
  return '\0';
}




/* from: libgsclient:GSLobbyLib.cpp
   addr: 005A8580 */

uchar __thiscall CGSLobbyLib::LobbyRcv_GroupRemoveCB(CGSLobbyLib *this)

{
  uchar uVar1;
  int local_8;
  int local_4;
  
  uVar1 = LobbyRcv_GroupRemove(this,&local_4,&local_8);
  if (uVar1 != '\0') {
    (**(code **)(**(int **)(this + 0x14) + 0x2c))(local_4,local_8);
    return '\x01';
  }
  return '\0';
}




/* from: libgsclient:GSLobbyLib.cpp
   addr: 005A85C0 */

uchar __thiscall CGSLobbyLib::LobbyRcv_StartMatchCB(CGSLobbyLib *this)

{
  uchar uVar1;
  int local_10;
  int local_c;
  int local_8;
  undefined4 local_4;
  
  uVar1 = LobbyRcv_StartMatch(this,(uchar *)&local_4,&local_8,&local_c,&local_10);
  if (uVar1 != '\0') {
    (**(code **)(**(int **)(this + 0x14) + 0x38))(local_4,local_8,local_c,local_10);
    return '\x01';
  }
  return '\0';
}




/* from: libgsclient:GSLobbyLib.cpp
   addr: 005A8610 */

uchar __thiscall CGSLobbyLib::LobbyRcv_MasterNewCB(CGSLobbyLib *this)

{
  uchar uVar1;
  int local_20;
  int local_1c;
  int local_18;
  undefined4 local_14;
  char local_10 [16];
  
  uVar1 = LobbyRcv_MasterNew(this,(uchar *)&local_14,&local_18,local_10,&local_1c,&local_20);
  if (uVar1 != '\0') {
    (**(code **)(**(int **)(this + 0x14) + 0x3c))(local_14,local_18,local_10,local_1c,local_20);
    return '\x01';
  }
  return '\0';
}




/* from: libgsclient:GSLobbyLib.cpp
   addr: 005A8670 */

uchar __thiscall CGSLobbyLib::LobbyRcv_MasterChangedCB(CGSLobbyLib *this)

{
  uchar uVar1;
  int iVar2;
  char *pcVar3;
  int local_120;
  int local_11c;
  char local_118 [16];
  char local_108 [132];
  char local_84 [132];
  
  pcVar3 = local_84;
  for (iVar2 = 0x20; iVar2 != 0; iVar2 = iVar2 + -1) {
    pcVar3[0] = '\0';
    pcVar3[1] = '\0';
    pcVar3[2] = '\0';
    pcVar3[3] = '\0';
    pcVar3 = pcVar3 + 4;
  }
  *pcVar3 = '\0';
  pcVar3 = local_108;
  for (iVar2 = 0x20; iVar2 != 0; iVar2 = iVar2 + -1) {
    pcVar3[0] = '\0';
    pcVar3[1] = '\0';
    pcVar3[2] = '\0';
    pcVar3[3] = '\0';
    pcVar3 = pcVar3 + 4;
  }
  *pcVar3 = '\0';
  uVar1 = LobbyRcv_MasterChanged(this,&local_11c,&local_120,local_118,local_84,local_108);
  if (uVar1 != '\0') {
    (**(code **)(**(int **)(this + 0x14) + 0x40))(local_11c,local_120,local_118,local_84,local_108);
    return '\x01';
  }
  return '\0';
}




/* from: libgsclient:GSLobbyLib.cpp
   addr: 005A8700 */

uchar __thiscall CGSLobbyLib::LobbyRcv_MatchFinishCB(CGSLobbyLib *this)

{
  uchar uVar1;
  uint uVar2;
  clDataList *local_14;
  int local_10;
  int local_c;
  uint local_8;
  clDataList *local_4;
  
  GetNewCurMessage(this,0x2d);
  if ((((*(int *)(this + 8) != 0) &&
       (uVar1 = clDataList::GetIndex(*(clDataList **)(*(int *)(this + 8) + 8),(ushort *)&local_8,0),
       uVar1 != '\0')) &&
      (uVar1 = clDataList::GetIndex(*(clDataList **)(*(int *)(this + 8) + 8),&local_4,1),
      uVar1 != '\0')) && (uVar1 = clDataList::GetIndex(local_4,&local_14,1), uVar1 != '\0')) {
    if ((local_8 & 0xffff) == 0x26) {
      uVar2 = 0;
      local_c = 0;
    }
    else {
      if ((local_8 & 0xffff) != 0x27) {
        return '\0';
      }
      uVar1 = clDataList::GetIndex(local_14,&local_c,0);
      if (uVar1 == '\0') {
        return '\0';
      }
      uVar2 = 1;
    }
    uVar1 = clDataList::GetIndex(local_14,&local_10,uVar2);
    if (uVar1 != '\0') {
      (**(code **)(**(int **)(this + 0x14) + 0x44))
                (local_8,local_c,local_10,*(undefined4 *)(*(int *)(this + 8) + 0x18));
      return '\x01';
    }
  }
  return '\0';
}




/* from: libgsclient:GSLobbyLib.cpp
   addr: 005A87E0 */

uchar __thiscall CGSLobbyLib::LobbyRcv_PlayerUpdateStatusCB(CGSLobbyLib *this)

{
  uchar uVar1;
  clDataList *local_18;
  undefined4 local_14;
  char local_10 [16];
  
  GetNewCurMessage(this,0x45);
  if (*(int *)(this + 8) == 0) {
    return '\0';
  }
  uVar1 = clDataList::GetIndex(*(clDataList **)(*(int *)(this + 8) + 8),&local_18,1);
  if (uVar1 == '\0') {
    return '\0';
  }
  uVar1 = clDataList::GetIndex(local_18,local_10,0,0x10);
  if (uVar1 == '\0') {
    return '\0';
  }
  uVar1 = clDataList::GetIndex(local_18,(ushort *)&local_14,1);
  if (uVar1 == '\0') {
    return '\0';
  }
  (**(code **)(**(int **)(this + 0x14) + 0xa8))(local_10,local_14);
  return '\x01';
}




/* from: libgsclient:GSLobbyLib.cpp
   addr: 005A8870 */

uchar __thiscall CGSLobbyLib::LobbyRcv_PlayerKickCB(CGSLobbyLib *this)

{
  uchar uVar1;
  int local_20;
  int local_1c;
  int local_18;
  undefined4 local_14;
  char local_10 [16];
  
  uVar1 = LobbyRcv_PlayerKick(this,(uchar *)&local_14,&local_18,local_10,&local_1c,&local_20);
  if (uVar1 != '\0') {
    (**(code **)(**(int **)(this + 0x14) + 0x4c))(local_14,local_18,local_10,local_1c,local_20);
    return '\x01';
  }
  return '\0';
}




/* from: libgsclient:GSLobbyLib.cpp
   addr: 005A88D0 */

uchar __thiscall CGSLobbyLib::LobbyRcv_KickOutCB(CGSLobbyLib *this)

{
  uchar uVar1;
  int local_40c;
  int local_408;
  char local_404 [1028];
  
  uVar1 = LobbyRcv_KickOut(this,&local_40c,&local_408,local_404);
  if (uVar1 != '\0') {
    (**(code **)(**(int **)(this + 0x14) + 0x48))(local_40c,local_408,local_404);
    return '\x01';
  }
  return '\0';
}




/* from: libgsclient:GSLobbyLib.cpp
   addr: 005A8920 */

uchar __thiscall CGSLobbyLib::LobbyRcv_ParentGroupIDCB(CGSLobbyLib *this)

{
  uchar uVar1;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  undefined4 local_4;
  
  uVar1 = LobbyRcv_ParentGroupID(this,(uchar *)&local_4,&local_8,&local_c,&local_10,&local_14);
  if (uVar1 != '\0') {
    (**(code **)(**(int **)(this + 0x14) + 0x50))(local_4,local_8,local_c,local_10,local_14);
    return '\x01';
  }
  return '\0';
}




/* from: libgsclient:GSLobbyLib.cpp
   addr: 005A8980 */

uchar __thiscall CGSLobbyLib::LobbyRcv_GetAltGroupInfoCB(CGSLobbyLib *this)

{
  void *_Src;
  uchar uVar1;
  void *_Dst;
  int iVar2;
  clDataList *local_18;
  clDataBin *local_14;
  int local_10;
  int local_c;
  uint local_8;
  clDataList *local_4;
  
  _Dst = (void *)0x0;
  iVar2 = 0;
  GetNewCurMessage(this,0x2e);
  if (*(int *)(this + 8) == 0) {
    return '\0';
  }
  uVar1 = clDataList::GetIndex(*(clDataList **)(*(int *)(this + 8) + 8),(ushort *)&local_8,0);
  if (uVar1 == '\0') {
    return '\0';
  }
  uVar1 = clDataList::GetIndex(*(clDataList **)(*(int *)(this + 8) + 8),&local_4,1);
  if (uVar1 == '\0') {
    return '\0';
  }
  uVar1 = clDataList::GetIndex(local_4,&local_18,1);
  if (uVar1 == '\0') {
    return '\0';
  }
  if ((local_8 & 0xffff) == 0x26) {
    local_c = 0;
    uVar1 = clDataList::GetIndex(local_18,&local_10,0);
    if (uVar1 == '\0') {
      return '\0';
    }
    uVar1 = clDataList::GetIndex(local_18,&local_14,1);
    if (uVar1 == '\0') {
      return '\0';
    }
    iVar2 = (**(code **)(*(int *)local_14 + 0x14))();
    _Dst = (void *)ExtAlloc_Malloc_4(iVar2 + 1);
    _Src = *(void **)(local_14 + 0xc);
    if (*(void **)(local_14 + 0x10) != _Src) {
      memmove(_Dst,_Src,(int)*(void **)(local_14 + 0x10) - (int)_Src);
    }
    *(undefined1 *)(iVar2 + (int)_Dst) = 0;
  }
  else {
    if ((local_8 & 0xffff) != 0x27) {
      return '\0';
    }
    uVar1 = clDataList::GetIndex(local_18,&local_c,0);
    if (uVar1 == '\0') {
      return '\0';
    }
    uVar1 = clDataList::GetIndex(local_18,&local_10,1);
    if (uVar1 == '\0') {
      return '\0';
    }
  }
  (**(code **)(**(int **)(this + 0x14) + 0x54))
            (local_8,local_c,_Dst,iVar2,local_10,*(undefined4 *)(*(int *)(this + 8) + 0x18));
  ExtAlloc_Free_4(_Dst);
  return '\x01';
}




/* from: libgsclient:GSLobbyLib.cpp
   addr: 005A8AF0 */

uchar __thiscall CGSLobbyLib::LobbyRcv_GroupLeaveCB(CGSLobbyLib *this)

{
  uchar uVar1;
  int local_10;
  int local_c;
  int local_8;
  undefined4 local_4;
  
  uVar1 = LobbyRcv_GroupLeave(this,(uchar *)&local_4,&local_8,&local_c,&local_10);
  if (uVar1 != '\0') {
    (**(code **)(**(int **)(this + 0x14) + 0x58))(local_4,local_8,local_c,local_10);
    return '\x01';
  }
  return '\0';
}




/* from: libgsclient:GSLobbyLib.cpp
   addr: 005A8B40 */

uchar __thiscall CGSLobbyLib::LobbyRcv_GroupConfigUpdateCB(CGSLobbyLib *this)

{
  uchar uVar1;
  int local_c;
  int local_8;
  int local_4;
  
  uVar1 = LobbyRcv_GroupConfigUpdate(this,&local_4,&local_8,&local_c);
  if (uVar1 != '\0') {
    (**(code **)(**(int **)(this + 0x14) + 0x5c))(local_4,local_8,local_c);
    return '\x01';
  }
  return '\0';
}




/* from: libgsclient:GSLobbyLib.cpp
   addr: 005A8B90 */

uchar __thiscall CGSLobbyLib::LobbyRcv_MatchStartedCB(CGSLobbyLib *this)

{
  uchar uVar1;
  uint local_c;
  int local_8;
  int local_4;
  
  local_c = 0;
  uVar1 = LobbyRcv_MatchStarted(this,&local_4,&local_8,&local_c);
  if (uVar1 != '\0') {
    (**(code **)(**(int **)(this + 0x14) + 0x60))(local_4,local_8,local_c);
    return '\x01';
  }
  return '\0';
}




/* from: libgsclient:GSLobbyLib.cpp
   addr: 005A8BE0 */

uchar __thiscall CGSLobbyLib::LobbyRcv_GroupConfigUpdateResultCB(CGSLobbyLib *this)

{
  uchar uVar1;
  int local_10;
  int local_c;
  int local_8;
  undefined4 local_4;
  
  uVar1 = LobbyRcv_GroupConfigUpdateResult(this,(uchar *)&local_4,&local_8,&local_c,&local_10);
  if (uVar1 != '\0') {
    (**(code **)(**(int **)(this + 0x14) + 100))(local_4,local_8,local_c,local_10);
    return '\x01';
  }
  return '\0';
}




/* from: libgsclient:GSLobbyLib.cpp
   addr: 005A8C30 */

uchar __thiscall CGSLobbyLib::LobbyRcv_SubmitMatchResultCB(CGSLobbyLib *this)

{
  uchar uVar1;
  int local_c;
  int local_8;
  undefined4 local_4;
  
  uVar1 = LobbyRcv_SubmitMatchResult(this,(uchar *)&local_4,&local_8,&local_c);
  if (uVar1 != '\0') {
    (**(code **)(**(int **)(this + 0x14) + 0x68))(local_4,local_8,local_c);
    return '\x01';
  }
  return '\0';
}




/* from: libgsclient:GSLobbyLib.cpp
   addr: 005A8C90 */

uchar __thiscall CGSLobbyLib::LobbyRcv_StartGameReplyCB(CGSLobbyLib *this)

{
  uchar uVar1;
  int local_10;
  int local_c;
  int local_8;
  undefined4 local_4;
  
  uVar1 = LobbyRcv_StartGameReply(this,(uchar *)&local_4,&local_8,&local_c,&local_10);
  if (uVar1 != '\0') {
    (**(code **)(**(int **)(this + 0x14) + 0x70))(local_4,local_8,local_c,local_10);
    return '\x01';
  }
  return '\0';
}




/* from: libgsclient:GSLobbyLib.cpp
   addr: 005A8CE0 */

uchar __thiscall CGSLobbyLib::LobbyRcv_GameReadyReplyCB(CGSLobbyLib *this)

{
  uchar uVar1;
  int local_10;
  int local_c;
  int local_8;
  undefined4 local_4;
  
  uVar1 = LobbyRcv_GameReadyReply(this,(uchar *)&local_4,&local_8,&local_c,&local_10);
  if (uVar1 != '\0') {
    (**(code **)(**(int **)(this + 0x14) + 0x74))(local_4,local_8,local_c,local_10);
    return '\x01';
  }
  return '\0';
}




/* from: libgsclient:GSLobbyLib.cpp
   addr: 005A8D30 */

uchar __thiscall CGSLobbyLib::LobbyRcv_GameStartedCB(CGSLobbyLib *this)

{
  uchar uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int local_118;
  undefined4 local_114;
  int local_110;
  int local_10c;
  char local_108 [132];
  char local_84 [132];
  
  puVar4 = (undefined4 *)0x0;
  local_114 = 0;
  uVar1 = GetGameDataSize(this,&local_118);
  if (uVar1 != '\0') {
    if (local_118 != 0) {
      uVar3 = local_118 + 1;
      puVar4 = (undefined4 *)ExtAlloc_Malloc_4(uVar3);
      puVar5 = puVar4;
      for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined1 *)puVar5 = 0;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
    }
    uVar1 = LobbyRcv_GameStarted
                      (this,&local_10c,&local_110,puVar4,&local_118,local_84,local_108,
                       (ushort *)&local_114);
    if (uVar1 != '\0') {
      (**(code **)(**(int **)(this + 0x14) + 0x78))
                (local_10c,local_110,puVar4,local_118,local_84,local_108,local_114);
      if (puVar4 != (undefined4 *)0x0) {
        ExtAlloc_Free_4(puVar4);
      }
      return '\x01';
    }
    if (puVar4 != (undefined4 *)0x0) {
      ExtAlloc_Free_4(puVar4);
    }
  }
  return '\0';
}




/* from: libgsclient:GSLobbyLib.cpp
   addr: 005A8E00 */

uchar __thiscall CGSLobbyLib::LobbyRcv_MemberListCB(CGSLobbyLib *this)

{
  uint uVar1;
  uchar uVar2;
  uchar local_6f;
  ushort local_6e;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  undefined **local_60;
  undefined4 *local_5c;
  undefined **local_54 [2];
  undefined8 *local_4c;
  undefined **local_48;
  undefined4 *local_44;
  undefined **local_3c [2];
  undefined8 *local_34;
  char local_30 [36];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005ca6d8;
  local_c = ExceptionList;
  local_64 = 0;
  local_5c = &clDataList::_vbtable__for__clData__;
  local_4c = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
  ExceptionList = &local_c;
  clData::clData((clData *)&local_60,3);
  clPointerList<class_clData*>::clPointerList<class_clData*>
            ((clPointerList<class_clData*> *)local_54);
  local_60 = &clDataList::_vftable__for__clData__;
  local_54[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_4 = 0;
  local_44 = &clDataList::_vbtable__for__clData__;
  local_34 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
  clData::clData((clData *)&local_48,3);
  clPointerList<class_clData*>::clPointerList<class_clData*>
            ((clPointerList<class_clData*> *)local_3c);
  local_48 = &clDataList::_vftable__for__clData__;
  local_3c[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_4._0_1_ = 1;
  GetNewCurMessage(this,0x97);
  if (*(int *)(this + 8) == 0) {
    local_4 = (uint)local_4._1_3_ << 8;
    clDataList::~clDataList((clDataList *)&local_48);
  }
  else {
    clDataList::GetIndex(*(clDataList **)(*(int *)(this + 8) + 8),&local_6e,0);
    clDataList::GetIndex(*(clDataList **)(*(int *)(this + 8) + 8),(clDataList *)&local_60,1);
    if (local_6e == 0x97) {
      local_68 = *(undefined4 *)(*(int *)(this + 8) + 0x18);
      uVar2 = clDataList::GetIndex((clDataList *)&local_60,&local_64,0);
      if (uVar2 == '\0') {
        local_4 = (uint)local_4._1_3_ << 8;
        clDataList::~clDataList((clDataList *)&local_48);
      }
      else {
        uVar2 = clDataList::GetIndex((clDataList *)&local_60,(clDataList *)&local_48,1);
        uVar1 = 2;
        while( true ) {
          if (uVar2 == '\0') {
            local_4 = (uint)local_4._1_3_ << 8;
            clDataList::~clDataList((clDataList *)&local_48);
            local_60 = &clDataList::_vftable__for__clData__;
            local_54[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
            local_4 = 4;
            clPointerList<class_clData*>::~clPointerList<class_clData*>
                      ((clPointerList<class_clData*> *)local_54);
            ExceptionList = local_c;
            return '\x01';
          }
          uVar2 = clDataList::GetIndex((clDataList *)&local_48,local_30,0);
          if (uVar2 == '\0') break;
          uVar2 = clDataList::GetIndex((clDataList *)&local_48,&local_6f,1);
          if (uVar2 == '\0') {
            local_4 = (uint)local_4._1_3_ << 8;
            clDataList::~clDataList((clDataList *)&local_48);
            local_60 = &clDataList::_vftable__for__clData__;
            local_54[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
            local_4 = 3;
            clPointerList<class_clData*>::~clPointerList<class_clData*>
                      ((clPointerList<class_clData*> *)local_54);
            ExceptionList = local_c;
            return '\0';
          }
          local_6c = CONCAT31(local_6c._1_3_,local_6f != '\0');
          (**(code **)(**(int **)(this + 0x14) + 0x7c))(local_64,local_68,local_30,local_6c);
          uVar2 = clDataList::GetIndex((clDataList *)&local_60,(clDataList *)&local_48,uVar1);
          uVar1 = uVar1 + 1;
        }
        local_48 = &clDataList::_vftable__for__clData__;
        local_3c[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
        local_4 = CONCAT31(local_4._1_3_,2);
        clPointerList<class_clData*>::~clPointerList<class_clData*>
                  ((clPointerList<class_clData*> *)local_3c);
        local_48 = &clData::_vftable_;
      }
    }
    else {
      local_4 = (uint)local_4._1_3_ << 8;
      clDataList::~clDataList((clDataList *)&local_48);
    }
  }
  local_4 = 0xffffffff;
  clDataList::~clDataList((clDataList *)&local_60);
  ExceptionList = local_c;
  return '\0';
}




/* from: libgsclient:GSLobbyLib.cpp
   addr: 005A9080 */

uchar __thiscall CGSLobbyLib::LobbyRcv_UpdateGameInfoReplyCB(CGSLobbyLib *this)

{
  uchar uVar1;
  int local_10;
  int local_c;
  int local_8;
  undefined4 local_4;
  
  uVar1 = LobbyRcv_UpdateGameInfoReply(this,(uchar *)&local_4,&local_8,&local_c,&local_10);
  if (uVar1 != '\0') {
    (**(code **)(**(int **)(this + 0x14) + 0x80))(local_4,local_8,local_c,local_10);
    return '\x01';
  }
  return '\0';
}




/* from: libgsclient:GSLobbyLib.cpp
   addr: 005A90E0 */

uchar __thiscall CGSLobbyLib::LobbyRcv_PlayerBanReplyCB(CGSLobbyLib *this)

{
  uchar uVar1;
  int local_20;
  int local_1c;
  int local_18;
  undefined4 local_14;
  char local_10 [16];
  
  uVar1 = LobbyRcv_PlayerBanReply(this,(uchar *)&local_14,&local_18,&local_1c,&local_20,local_10);
  if (uVar1 != '\0') {
    (**(code **)(**(int **)(this + 0x14) + 0x84))(local_14,local_18,local_1c,local_20,local_10);
    return '\x01';
  }
  return '\0';
}




/* from: libgsclient:GSLobbyLib.cpp
   addr: 005A9140 */

uchar __thiscall CGSLobbyLib::LobbyRcv_PlayerUnBanReplyCB(CGSLobbyLib *this)

{
  uchar uVar1;
  int local_20;
  int local_1c;
  int local_18;
  undefined4 local_14;
  char local_10 [16];
  
  uVar1 = LobbyRcv_PlayerUnBanReply(this,(uchar *)&local_14,&local_18,&local_1c,&local_20,local_10);
  if (uVar1 != '\0') {
    (**(code **)(**(int **)(this + 0x14) + 0x88))(local_14,local_18,local_1c,local_20,local_10);
    return '\x01';
  }
  return '\0';
}




/* from: libgsclient:GSLobbyLib.cpp
   addr: 005A91A0 */

uchar __thiscall CGSLobbyLib::LobbyRcv_PlayerBanListCB(CGSLobbyLib *this)

{
  undefined4 uVar1;
  uint uVar2;
  uchar uVar3;
  undefined1 uVar4;
  ushort local_3e;
  int local_3c;
  clPointerList<class_clRcvElement*> *local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
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
  puStack_8 = &LAB_005ca7b4;
  local_c = ExceptionList;
  uVar4 = 3;
  local_3c = 0;
  local_20 = &clDataList::_vbtable__for__clData__;
  local_10 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
  local_1c = 3;
  local_24 = &clData::_vftable_;
  ExceptionList = &local_c;
  clPointerList<class_clData*>::clPointerList<class_clData*>
            ((clPointerList<class_clData*> *)&local_18);
  local_18 = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_24 = &clDataList::_vftable__for__clData__;
  local_34 = 0;
  local_30 = 0;
  local_4 = 0;
  local_2c = 0;
  local_28 = 0;
  GetNewCurMessage(this,0x40);
  if (*(int *)(this + 8) == 0) {
    uVar4 = 1;
    local_4._0_1_ = 2;
  }
  else {
    clDataList::GetIndex(*(clDataList **)(*(int *)(this + 8) + 8),&local_3e,0);
    clDataList::GetIndex(*(clDataList **)(*(int *)(this + 8) + 8),(clDataList *)&local_24,1);
    if (local_3e == 0x40) {
      uVar1 = *(undefined4 *)(*(int *)(this + 8) + 0x18);
      uVar3 = clDataList::GetIndex((clDataList *)&local_24,&local_3c,0);
      if (uVar3 != '\0') {
        uVar3 = clDataList::GetIndex((clDataList *)&local_24,(char *)&local_34,1);
        uVar2 = 2;
        while (uVar3 != '\0') {
          (**(code **)(**(int **)(this + 0x14) + 0x8c))(local_3c,uVar1,&local_34);
          uVar3 = clDataList::GetIndex((clDataList *)&local_24,(char *)&local_34,uVar2);
          uVar2 = uVar2 + 1;
        }
        local_24 = &clDataList::_vftable__for__clData__;
        local_38 = (clPointerList<class_clRcvElement*> *)&local_18;
        local_18 = &clPointerList<class_clData*>::_vftable_;
        local_4._0_1_ = 8;
        local_4._1_3_ = 0;
        clPointerList<class_clRcvElement*>::clear((clPointerList<class_clRcvElement*> *)&local_18);
        local_4 = CONCAT31(local_4._1_3_,7);
        ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>(local_14);
        ExceptionList = local_c;
        return '\x01';
      }
      uVar4 = 5;
      local_4._0_1_ = 6;
    }
    else {
      local_4._0_1_ = 4;
    }
  }
  local_4._1_3_ = 0;
  local_18 = &clPointerList<class_clData*>::_vftable_;
  local_24 = &clDataList::_vftable__for__clData__;
  local_38 = (clPointerList<class_clRcvElement*> *)&local_18;
  clPointerList<class_clRcvElement*>::clear(local_38);
  local_4 = CONCAT31(local_4._1_3_,uVar4);
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>(local_14);
  ExceptionList = local_c;
  return '\0';
}




/* from: libgsclient:GSLobbyLib.cpp
   addr: 005A93A0 */

uchar __thiscall CGSLobbyLib::LobbyRcv_PlayerBannedCB(CGSLobbyLib *this)

{
  uchar uVar1;
  int iVar2;
  char *pcVar3;
  int local_8c;
  int local_88;
  char local_84 [132];
  
  pcVar3 = local_84;
  for (iVar2 = 0x20; iVar2 != 0; iVar2 = iVar2 + -1) {
    pcVar3[0] = '\0';
    pcVar3[1] = '\0';
    pcVar3[2] = '\0';
    pcVar3[3] = '\0';
    pcVar3 = pcVar3 + 4;
  }
  *pcVar3 = '\0';
  uVar1 = LobbyRcv_PlayerBanned(this,&local_8c,&local_88,local_84);
  if (uVar1 != '\0') {
    (**(code **)(**(int **)(this + 0x14) + 0x90))(local_8c,local_88,local_84);
    return '\x01';
  }
  return '\0';
}




/* from: libgsclient:GSLobbyLib.cpp
   addr: 005A9410 */

uchar __thiscall CGSLobbyLib::LobbyRcv_MatchReadyCB(CGSLobbyLib *this)

{
  uchar uVar1;
  int local_8;
  int local_4;
  
  uVar1 = LobbyRcv_MatchReady(this,&local_4,&local_8);
  if (uVar1 != '\0') {
    (**(code **)(**(int **)(this + 0x14) + 0x94))(local_4,local_8);
    return '\x01';
  }
  return '\0';
}




/* from: libgsclient:GSLobbyLib.cpp
   addr: 005A9450 */

uchar __thiscall CGSLobbyLib::LobbyRcv_InfoRefreshCB(CGSLobbyLib *this)

{
  uchar uVar1;
  int local_4;
  
  local_4 = 0;
  uVar1 = LobbyRcv_InfoRefresh(this,&local_4);
  if (uVar1 != '\0') {
    (**(code **)(**(int **)(this + 0x14) + 0x98))(local_4);
    return '\x01';
  }
  return '\0';
}




/* from: libgsclient:GSLobbyLib.cpp
   addr: 005A9490 */

uchar __thiscall CGSLobbyLib::LobbyRcv_SetPlayerInfoReplyCB(CGSLobbyLib *this)

{
  uchar uVar1;
  int local_8;
  undefined4 local_4;
  
  uVar1 = LobbyRcv_SetPlayerInfoReply(this,(uchar *)&local_4,&local_8);
  if (uVar1 != '\0') {
    (**(code **)(**(int **)(this + 0x14) + 0x9c))(local_4,local_8);
    return '\x01';
  }
  return '\0';
}




/* from: libgsclient:GSLobbyLib.cpp
   addr: 005A94D0 */

uchar __thiscall CGSLobbyLib::LobbyRcv_PlayerInfoUpdateCB(CGSLobbyLib *this)

{
  uchar uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  char local_50 [4];
  clDataList acStack_4c [12];
  undefined **local_40;
  undefined4 *local_3c;
  undefined **local_34 [2];
  undefined8 *local_2c;
  undefined **local_28;
  undefined4 *local_24;
  int local_1c;
  void *local_18;
  undefined8 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005ca7e0;
  local_c = ExceptionList;
  puVar5 = (undefined4 *)0x0;
  local_24 = &clDataBin::_vbtable__for__clData__;
  local_10 = &clDataBin::_vbtable__for__ExtAlloc__vector<char>__;
  ExceptionList = &local_c;
  clData::clData((clData *)&local_28,2);
  local_4 = 0;
  ExtAlloc::vector<char>::vector<char>((vector<char> *)&local_1c);
  local_28 = &clDataBin::_vftable_;
  local_4 = 1;
  local_3c = &clDataList::_vbtable__for__clData__;
  local_2c = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
  clData::clData((clData *)&local_40,3);
  clPointerList<class_clData*>::clPointerList<class_clData*>
            ((clPointerList<class_clData*> *)local_34);
  local_40 = &clDataList::_vftable__for__clData__;
  local_34[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_4._0_1_ = 2;
  GetNewCurMessage(this,0x42);
  if (*(int *)(this + 8) != 0) {
    uVar1 = clDataList::GetIndex(*(clDataList **)(*(int *)(this + 8) + 8),(clDataList *)&local_40,1)
    ;
    if (uVar1 != '\0') {
      uVar1 = clDataList::GetIndex((clDataList *)&local_40,local_50,0);
      if (uVar1 != '\0') {
        uVar1 = clDataList::GetIndex((clDataList *)&local_40,(clDataBin *)&local_28,1);
        if (uVar1 == '\0') {
          local_4 = CONCAT31(local_4._1_3_,1);
          clDataList::~clDataList((clDataList *)&local_40);
          local_4 = 0xffffffff;
          local_28 = &clDataBin::_vftable_;
          _STL::
          _Vector_base<void*,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
          ::
          ~_Vector_base<void*,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
                    ((_Vector_base<void*,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
                      *)&local_1c);
          ExceptionList = local_c;
          return '\0';
        }
        uVar4 = (int)local_18 - local_1c;
        if (uVar4 != 0) {
          uVar3 = uVar4 + 1;
          puVar5 = (undefined4 *)ExtAlloc_Malloc_4(uVar3);
          puVar6 = puVar5;
          for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar6 = 0;
            puVar6 = puVar6 + 1;
          }
          for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
            *(undefined1 *)puVar6 = 0;
            puVar6 = (undefined4 *)((int)puVar6 + 1);
          }
          uVar1 = clDataList::GetIndex((clDataList *)&local_40,puVar5,uVar4,1);
          if (uVar1 == '\0') {
            local_40 = &clDataList::_vftable__for__clData__;
            local_34[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
            local_4 = CONCAT31(local_4._1_3_,3);
            clPointerList<class_clData*>::~clPointerList<class_clData*>
                      ((clPointerList<class_clData*> *)local_34);
            local_40 = &clData::_vftable_;
            clDataBin::~clDataBin((clDataBin *)&local_28);
            ExceptionList = local_c;
            return '\0';
          }
        }
        (**(code **)(**(int **)(this + 0x14) + 0xa0))(local_50,puVar5,uVar4);
        if (puVar5 != (undefined4 *)0x0) {
          ExtAlloc_Free_4(puVar5);
        }
        local_10 = (undefined8 *)CONCAT31(local_10._1_3_,1);
        clDataList::~clDataList(acStack_4c);
        local_10 = (undefined8 *)0xffffffff;
        local_34[0] = &clDataBin::_vftable_;
        _STL::
        _Vector_base<void*,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
        ::
        ~_Vector_base<void*,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
                  ((_Vector_base<void*,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
                    *)&local_28);
        ExceptionList = local_18;
        return '\x01';
      }
    }
  }
  local_4 = CONCAT31(local_4._1_3_,1);
  clDataList::~clDataList((clDataList *)&local_40);
  clDataBin::~clDataBin((clDataBin *)&local_28);
  ExceptionList = local_c;
  return '\0';
}




/* from: libgsclient:GSLobbyLib.cpp
   addr: 005A9700 */

uchar __thiscall CGSLobbyLib::LobbyRcv_PlayerGroupGetCB(CGSLobbyLib *this)

{
  uint uVar1;
  uchar uVar2;
  int local_54;
  int local_50;
  char local_4c [4];
  undefined **ppuStack_48;
  undefined **local_3c;
  undefined4 *local_38;
  undefined **local_30 [2];
  undefined8 *local_28;
  undefined **local_24;
  undefined4 *local_20;
  undefined4 local_1c;
  undefined **local_18 [2];
  undefined8 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005ca820;
  local_c = ExceptionList;
  local_50 = 0;
  local_20 = &clDataList::_vbtable__for__clData__;
  local_10 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
  local_1c = 3;
  local_24 = &clData::_vftable_;
  ExceptionList = &local_c;
  clPointerList<class_clData*>::clPointerList<class_clData*>
            ((clPointerList<class_clData*> *)local_18);
  local_24 = &clDataList::_vftable__for__clData__;
  local_18[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_4 = 0;
  local_38 = &clDataList::_vbtable__for__clData__;
  local_28 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
  clData::clData((clData *)&local_3c,3);
  clPointerList<class_clData*>::clPointerList<class_clData*>
            ((clPointerList<class_clData*> *)local_30);
  local_3c = &clDataList::_vftable__for__clData__;
  local_30[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_4._0_1_ = 1;
  GetNewCurMessage(this,0x6a);
  if (*(int *)(this + 8) == 0) {
    local_3c = &clDataList::_vftable__for__clData__;
    local_30[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
    local_4 = CONCAT31(local_4._1_3_,2);
    clPointerList<class_clData*>::~clPointerList<class_clData*>
              ((clPointerList<class_clData*> *)local_30);
    local_3c = &clData::_vftable_;
    local_24 = &clDataList::_vftable__for__clData__;
    local_18[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
    local_4 = 3;
    clPointerList<class_clData*>::~clPointerList<class_clData*>
              ((clPointerList<class_clData*> *)local_18);
    ExceptionList = local_c;
    return '\0';
  }
  uVar2 = clDataList::GetIndex(*(clDataList **)(*(int *)(this + 8) + 8),(clDataList *)&local_24,1);
  if (uVar2 == '\0') {
    local_4 = (uint)local_4._1_3_ << 8;
    clDataList::~clDataList((clDataList *)&local_3c);
  }
  else {
    uVar2 = clDataList::GetIndex((clDataList *)&local_24,local_4c,0);
    if (uVar2 != '\0') {
      uVar2 = clDataList::GetIndex((clDataList *)&local_24,(clDataList *)&local_3c,1);
      uVar1 = 2;
      while (uVar2 != '\0') {
        clDataList::GetIndex((clDataList *)&local_3c,&local_54,0);
        clDataList::GetIndex((clDataList *)&local_3c,&local_50,1);
        (**(code **)(**(int **)(this + 0x14) + 0xa4))(local_4c,local_50,local_54);
        uVar2 = clDataList::GetIndex((clDataList *)&local_24,(clDataList *)&local_3c,uVar1);
        uVar1 = uVar1 + 1;
      }
      (**(code **)(**(int **)(this + 0x14) + 0xa4))(local_4c,0,0);
      ppuStack_48 = &clDataList::_vftable__for__clData__;
      local_3c = &clDataList::_vftable__for__clPointerList<class_clData*>__;
      local_10 = (undefined8 *)CONCAT31(local_10._1_3_,5);
      clPointerList<class_clData*>::~clPointerList<class_clData*>
                ((clPointerList<class_clData*> *)&local_3c);
      ppuStack_48 = &clData::_vftable_;
      local_10 = (undefined8 *)0xffffffff;
      clDataList::~clDataList((clDataList *)local_30);
      ExceptionList = local_18[0];
      return '\x01';
    }
    local_3c = &clDataList::_vftable__for__clData__;
    local_30[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
    local_4 = CONCAT31(local_4._1_3_,4);
    clPointerList<class_clData*>::~clPointerList<class_clData*>
              ((clPointerList<class_clData*> *)local_30);
    local_3c = &clData::_vftable_;
  }
  local_4 = 0xffffffff;
  clDataList::~clDataList((clDataList *)&local_24);
  ExceptionList = local_c;
  return '\0';
}




/* from: libgsclient:GSLobbyLib.cpp
   addr: 005A9940 */

uchar __thiscall CGSLobbyLib::IsGameRequested(CGSLobbyLib *this,char *param_1)

{
  char cVar1;
  _Rb_tree_node<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>_>
  *p_Var2;
  uint uVar3;
  char *pcVar4;
  Allocator<class_CConnection*> local_19;
  undefined4 local_18;
  undefined4 local_14;
  _STLP_alloc_proxy<struct__STL::_List_node<class_CConnection*>*,struct__STL::_List_node<class_CConnection*>,class_ExtAlloc::Allocator<class_CConnection*>_>
  local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005ca848;
  local_c = ExceptionList;
  if (*(int *)(this + 0x28) == 0) {
    return '\x01';
  }
  local_4 = 0;
  local_18 = 0;
  local_14 = 0;
  ExceptionList = &local_c;
  _STL::
  _STLP_alloc_proxy<struct__STL::_List_node<class_CConnection*>*,struct__STL::_List_node<class_CConnection*>,class_ExtAlloc::Allocator<class_CConnection*>_>
  ::
  STLP_alloc_proxy<struct__STL::_List_node<class_CConnection*>*,struct__STL::_List_node<class_CConnection*>,class_ExtAlloc::Allocator<class_CConnection*>_>
            (local_10,&local_19,(_List_node<class_CConnection*> *)0x0);
  uVar3 = 0xffffffff;
  pcVar4 = param_1;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  local_4._0_1_ = 1;
  _STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::
  M_range_initialize((basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>
                      *)&local_18,param_1,param_1 + (~uVar3 - 1),(forward_iterator_tag *)&param_1);
  local_4 = CONCAT31(local_4._1_3_,3);
  p_Var2 = _STL::
           _Rb_tree<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>,struct__STL::_Select1st<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>_>,struct__STL::less<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>_>_>
           ::M_find((_Rb_tree<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>,struct__STL::_Select1st<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>_>,struct__STL::less<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>_>_>
                     *)(this + 0x24),
                    (basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>
                     *)&local_18);
  if (p_Var2 != *(_Rb_tree_node<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>_>
                  **)(this + 0x24)) {
    ExtAlloc_Free_4(local_18);
    ExceptionList = local_c;
    return '\x01';
  }
  ExtAlloc_Free_4(local_18);
  ExceptionList = local_c;
  return '\0';
}




/* from: libgsclient:GSLobbyLib.cpp
   addr: 005A9A20 */

void __thiscall CGSLobbyLib::ParseRequestedGames(CGSLobbyLib *this,char *param_1)

{
  _Rb_tree<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,struct__STL::_Identity<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,struct__STL::less<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
  *this_00;
  char cVar1;
  char *pcVar2;
  uint uVar3;
  char *pcVar4;
  Allocator<class_CConnection*> local_421;
  void *local_420;
  undefined1 *local_41c;
  _STLP_alloc_proxy<struct__STL::_List_node<class_CConnection*>*,struct__STL::_List_node<class_CConnection*>,class_ExtAlloc::Allocator<class_CConnection*>_>
  local_418 [4];
  basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> local_414 [8];
  char local_40c [1024];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005ca881;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  strncpy(local_40c,param_1,0x3ff);
  this_00 = (_Rb_tree<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,struct__STL::_Identity<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,struct__STL::less<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
             *)(this + 0x24);
  if (*(int *)(this + 0x28) != 0) {
    _STL::
    _Rb_tree<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,struct__STL::_Identity<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,struct__STL::less<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
    ::M_erase(this_00,*(_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
                        **)(*(int *)this_00 + 4));
    *(int *)(*(int *)this_00 + 8) = *(int *)this_00;
    *(undefined4 *)(*(int *)this_00 + 4) = 0;
    *(int *)(*(int *)this_00 + 0xc) = *(int *)this_00;
    *(undefined4 *)(this + 0x28) = 0;
  }
  pcVar2 = strtok(local_40c,s_______);
  do {
    if (pcVar2 == (char *)0x0) {
      ExceptionList = local_c;
      return;
    }
    local_4 = 0;
    local_420 = (void *)0x0;
    local_41c = (undefined1 *)0x0;
    _STL::
    _STLP_alloc_proxy<struct__STL::_List_node<class_CConnection*>*,struct__STL::_List_node<class_CConnection*>,class_ExtAlloc::Allocator<class_CConnection*>_>
    ::
    STLP_alloc_proxy<struct__STL::_List_node<class_CConnection*>*,struct__STL::_List_node<class_CConnection*>,class_ExtAlloc::Allocator<class_CConnection*>_>
              (local_418,&local_421,(_List_node<class_CConnection*> *)0x0);
    uVar3 = 0xffffffff;
    local_4._0_1_ = 1;
    pcVar4 = pcVar2;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    _STL::_String_base<char,class_ExtAlloc::Allocator<char>_>::M_allocate_block
              ((_String_base<char,class_ExtAlloc::Allocator<char>_> *)&local_420,
               (uint)(pcVar2 + (~uVar3 - 1) + (1 - (int)pcVar2)));
    local_41c = (undefined1 *)_STL::copy_trivial(pcVar2,pcVar2 + (~uVar3 - 1),local_420);
    *local_41c = 0;
    local_4 = CONCAT31(local_4._1_3_,3);
    _STL::
    _Rb_tree<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,struct__STL::_Identity<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,struct__STL::less<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
    ::insert_unique(this_00,local_414);
    pcVar2 = strtok((char *)0x0,s_______);
    local_4 = 0xffffffff;
    ExtAlloc_Free_4(local_420);
  } while( true );
}




/* from: libgsclient:GSLobbyLib.cpp
   addr: 005A9B60
   addr: 005A9B60
   addr: 005A9B60 */

void __thiscall
_STL::
_Rb_tree<int,int,struct__STL::_Identity<int>,struct__STL::less<int>,class_ExtAlloc::Allocator<int>_>
::M_empty_initialize
          (_Rb_tree<int,int,struct__STL::_Identity<int>,struct__STL::less<int>,class_ExtAlloc::Allocator<int>_>
           *this)

{
  **(undefined1 **)this = 0;
  *(undefined4 *)(*(int *)this + 4) = 0;
  *(int *)(*(int *)this + 8) = *(int *)this;
  *(int *)(*(int *)this + 0xc) = *(int *)this;
  return;
}




/* from: libgsclient:GSLobbyLib.cpp
   addr: 005A9B80 */

void __thiscall
_STL::
_Rb_tree<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,struct__STL::_Identity<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,struct__STL::less<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
::M_erase(_Rb_tree<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,struct__STL::_Identity<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,struct__STL::less<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
          *this,_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
                *param_1)

{
  _Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
  *p_Var1;
  
  if (param_1 !=
      (_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
       *)0x0) {
    do {
      M_erase(this,*(_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
                     **)(param_1 + 0xc));
      p_Var1 = *(_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
                 **)(param_1 + 8);
      _String_base<char,class_ExtAlloc::Allocator<char>_>::
      ~_String_base<char,class_ExtAlloc::Allocator<char>_>
                ((_String_base<char,class_ExtAlloc::Allocator<char>_> *)(param_1 + 0x10));
      ExtAlloc_Free_4(param_1);
      param_1 = p_Var1;
    } while (p_Var1 != (_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
                        *)0x0);
  }
  return;
}




/* from: libgsclient:GSLobbyLib.cpp
   addr: 005A9BC0 */

void __thiscall
_STL::
_Rb_tree<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,struct__STL::_Identity<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,struct__STL::less<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
::insert_unique(_Rb_tree<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,struct__STL::_Identity<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,struct__STL::less<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
                *this,basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>
                      *param_1)

{
  _Rb_tree_node_base *p_Var1;
  int iVar2;
  _Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
  *p_Var3;
  _Rb_tree_node_base *p_Var4;
  bool bVar5;
  basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>
  *in_stack_00000008;
  
  bVar5 = true;
  p_Var1 = *(_Rb_tree_node_base **)this;
  p_Var4 = *(_Rb_tree_node_base **)(*(_Rb_tree_node_base **)this + 4);
  while (p_Var4 != (_Rb_tree_node_base *)0x0) {
    iVar2 = basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::
            M_compare(*(char **)in_stack_00000008,*(char **)(in_stack_00000008 + 4),
                      *(char **)(p_Var4 + 0x10),*(char **)(p_Var4 + 0x14));
    bVar5 = iVar2 < 0;
    p_Var1 = p_Var4;
    if (bVar5) {
      p_Var4 = *(_Rb_tree_node_base **)(p_Var4 + 8);
    }
    else {
      p_Var4 = *(_Rb_tree_node_base **)(p_Var4 + 0xc);
    }
  }
  p_Var4 = p_Var1;
  if (bVar5) {
    if (p_Var1 == *(_Rb_tree_node_base **)(*(_Rb_tree_node_base **)this + 8)) {
      if ((p_Var1 == *(_Rb_tree_node_base **)this) ||
         (bVar5 = operator<(in_stack_00000008,
                            (basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>
                             *)(p_Var1 + 0x10)), bVar5)) {
        p_Var3 = M_create_node(this,in_stack_00000008);
        *(_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
          **)(p_Var1 + 8) = p_Var3;
        p_Var4 = *(_Rb_tree_node_base **)this;
        if (p_Var1 == p_Var4) {
          *(_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
            **)(p_Var4 + 4) = p_Var3;
          *(_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
            **)(*(int *)this + 0xc) = p_Var3;
        }
        else if (p_Var1 == *(_Rb_tree_node_base **)(p_Var4 + 8)) {
          *(_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
            **)(p_Var4 + 8) = p_Var3;
        }
      }
      else {
        p_Var3 = M_create_node(this,in_stack_00000008);
        *(_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
          **)(p_Var1 + 0xc) = p_Var3;
        if (p_Var1 == *(_Rb_tree_node_base **)(*(int *)this + 0xc)) {
          *(_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
            **)(*(int *)this + 0xc) = p_Var3;
        }
      }
      *(_Rb_tree_node_base **)((_Rb_tree_node_base *)p_Var3 + 4) = p_Var1;
      *(undefined4 *)((_Rb_tree_node_base *)p_Var3 + 8) = 0;
      *(undefined4 *)((_Rb_tree_node_base *)p_Var3 + 0xc) = 0;
      _Rb_global<bool>::Rebalance
                ((_Rb_tree_node_base *)p_Var3,(_Rb_tree_node_base **)(*(int *)this + 4));
      *(int *)(this + 4) = *(int *)(this + 4) + 1;
      *(_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
        **)param_1 = p_Var3;
      param_1[4] = (basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>
                    )0x1;
      return;
    }
    p_Var4 = _Rb_global<bool>::M_decrement(p_Var1);
  }
  iVar2 = basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::
          M_compare(*(char **)(p_Var4 + 0x10),*(char **)(p_Var4 + 0x14),*(char **)in_stack_00000008,
                    *(char **)(in_stack_00000008 + 4));
  if (iVar2 < 0) {
    if ((p_Var1 == *(_Rb_tree_node_base **)this) ||
       (bVar5 = operator<(in_stack_00000008,
                          (basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>
                           *)(p_Var1 + 0x10)), bVar5)) {
      p_Var3 = M_create_node(this,in_stack_00000008);
      *(_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
        **)(p_Var1 + 8) = p_Var3;
      p_Var4 = *(_Rb_tree_node_base **)this;
      if (p_Var1 == p_Var4) {
        *(_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
          **)(p_Var4 + 4) = p_Var3;
        *(_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
          **)(*(int *)this + 0xc) = p_Var3;
      }
      else if (p_Var1 == *(_Rb_tree_node_base **)(p_Var4 + 8)) {
        *(_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
          **)(p_Var4 + 8) = p_Var3;
      }
    }
    else {
      p_Var3 = M_create_node(this,in_stack_00000008);
      *(_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
        **)(p_Var1 + 0xc) = p_Var3;
      if (p_Var1 == *(_Rb_tree_node_base **)(*(int *)this + 0xc)) {
        *(_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
          **)(*(int *)this + 0xc) = p_Var3;
      }
    }
    *(_Rb_tree_node_base **)((_Rb_tree_node_base *)p_Var3 + 4) = p_Var1;
    *(undefined4 *)((_Rb_tree_node_base *)p_Var3 + 8) = 0;
    *(undefined4 *)((_Rb_tree_node_base *)p_Var3 + 0xc) = 0;
    _Rb_global<bool>::Rebalance
              ((_Rb_tree_node_base *)p_Var3,(_Rb_tree_node_base **)(*(int *)this + 4));
    *(int *)(this + 4) = *(int *)(this + 4) + 1;
    *(_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
      **)param_1 = p_Var3;
    param_1[4] = (basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>)
                 0x1;
    return;
  }
  *(_Rb_tree_node_base **)param_1 = p_Var4;
  param_1[4] = (basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>)
               0x0;
  return;
}




/* from: libgsclient:GSLobbyLib.cpp
   addr: 005A9D80 */

_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
* __thiscall
_STL::
_Rb_tree<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,struct__STL::_Identity<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,struct__STL::less<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
::M_create_node(_Rb_tree<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,struct__STL::_Identity<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,struct__STL::less<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
                *this,basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>
                      *param_1)

{
  _String_base<char,class_ExtAlloc::Allocator<char>_> *this_00;
  void **ppvVar1;
  basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *pbVar2;
  _Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
  *p_Var3;
  void **ppvVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005ca8a9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  p_Var3 = (_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
            *)ExtAlloc_Malloc_4(0x1c);
  pbVar2 = param_1;
  this_00 = (_String_base<char,class_ExtAlloc::Allocator<char>_> *)(p_Var3 + 0x10);
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  if (this_00 != (_String_base<char,class_ExtAlloc::Allocator<char>_> *)0x0) {
    animSYSTEM::GetBaseSeqNmb((animSYSTEM *)param_1);
    *(undefined4 *)this_00 = 0;
    *(undefined4 *)(p_Var3 + 0x14) = 0;
    *(undefined4 *)(p_Var3 + 0x18) = 0;
    ppvVar4 = *(void ***)(pbVar2 + 4);
    ppvVar1 = *(void ***)pbVar2;
    local_8 = CONCAT31(local_8._1_3_,2);
    _String_base<char,class_ExtAlloc::Allocator<char>_>::M_allocate_block
              (this_00,(int)ppvVar4 + (1 - (int)ppvVar1));
    ppvVar4 = copy_aux(ppvVar1,ppvVar4,*(void ***)this_00,(__true_type *)((int)&param_1 + 3));
    *(void ***)(p_Var3 + 0x14) = ppvVar4;
    *(undefined1 *)ppvVar4 = 0;
  }
  ExceptionList = local_10;
  return p_Var3;
}

