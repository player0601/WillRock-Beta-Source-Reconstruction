
/* from: libgsclient:GSLoginLIB.cpp
   addr: 005ADF20 */

uchar __thiscall
CGLLoginLib::GLDecodeRcv_Result(CGLLoginLib *this,uchar param_1,uchar *param_2,int *param_3)

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
  puStack_8 = &LAB_005cb384;
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




/* from: libgsclient:GSLoginLIB.cpp
   addr: 005AE0F0 */

uchar __thiscall CGLLoginLib::LoginLibSend_Connection(CGLLoginLib *this,char *param_1,int param_2)

{
  uchar uVar1;
  
  if (*(CConnection **)(this + 8) != (CConnection *)0x0) {
    uVar1 = CConnection::Connect
                      (*(CConnection **)(this + 8),param_1,(ushort)param_2,'\x01',0x1e,0,0);
    if (uVar1 != '\0') {
      clConnectElem::InitializeSecureTransmission(*(clConnectElem **)(*(int *)(this + 8) + 4));
      return '\x01';
    }
  }
  return '\0';
}




/* from: libgsclient:GSLoginLIB.cpp
   addr: 005AE130 */

uchar __thiscall CGLLoginLib::LoginLibSend_Disconnection(CGLLoginLib *this)

{
  uchar uVar1;
  
  if (*(CRegServerConnection **)(this + 8) == (CRegServerConnection *)0x0) {
    return '\0';
  }
  uVar1 = CRegServerConnection::Disconnect(*(CRegServerConnection **)(this + 8));
  return uVar1 != '\0';
}




/* from: libgsclient:GSLoginLIB.cpp
   addr: 005AE150 */

uchar __thiscall
CGLLoginLib::LoginLibSend_LoginRouter
          (CGLLoginLib *this,char *param_1,char *param_2,char *param_3,uchar param_4)

{
  Allocator<class_clProxyMessage*> local_29;
  uint local_28;
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
  
  puStack_8 = &LAB_005cb3df;
  local_c = ExceptionList;
  local_28 = 0;
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
             &local_14,&local_29);
  local_24 = &clDataList::_vftable__for__clData__;
  local_18 = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_4 = 2;
  local_28 = (uint)(param_4 != '\0');
  clDataList::Add((clDataList *)&local_24,param_1);
  clDataList::Add((clDataList *)&local_24,param_2);
  clDataList::Add((clDataList *)&local_24,param_3);
  clDataList::Add((clDataList *)&local_24,&local_28,1);
  CConnection::SendSecureMessage(*(CConnection **)(this + 8),'f','\x01',(clDataList *)&local_24);
  local_24 = &clDataList::_vftable__for__clData__;
  local_18 = &clPointerList<class_clData*>::_vftable_;
  local_4._0_1_ = 4;
  local_4._1_3_ = 0;
  clPointerList<class_clRcvElement*>::clear((clPointerList<class_clRcvElement*> *)&local_18);
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




/* from: libgsclient:GSLoginLIB.cpp
   addr: 005AE2A0 */

uchar __thiscall CGLLoginLib::LoginLibSend_LoginWaitModule(CGLLoginLib *this,char *param_1)

{
  Allocator<class_clProxyMessage*> local_29;
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
  
  puStack_8 = &LAB_005cb43f;
  local_c = ExceptionList;
  local_28 = (_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
              **)0x0;
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
             &local_14,&local_29);
  local_24 = &clDataList::_vftable__for__clData__;
  local_18 = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_4 = 2;
  clDataList::Add((clDataList *)&local_24,param_1);
  CConnection::SendMessageA(*(CConnection **)(this + 8),'M','\x01',(clDataList *)&local_24);
  local_24 = &clDataList::_vftable__for__clData__;
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




/* from: libgsclient:GSLoginLIB.cpp
   addr: 005AE3C0 */

uchar __thiscall CGLLoginLib::LoginLibSend_JoinWaitModule(CGLLoginLib *this)

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
  
  puStack_8 = &LAB_005cb49f;
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
  CConnection::SendMessageA(*(CConnection **)(this + 8),']','\x01',(clDataList *)&local_24);
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




/* from: libgsclient:GSLoginLIB.cpp
   addr: 005AE4D0 */

uchar __thiscall CGLLoginLib::LoginLibSend_PlayerInfo(CGLLoginLib *this,char *param_1)

{
  Allocator<class_clProxyMessage*> local_29;
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
  
  puStack_8 = &LAB_005cb4ff;
  local_c = ExceptionList;
  local_28 = (_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
              **)0x0;
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
             &local_14,&local_29);
  local_24 = &clDataList::_vftable__for__clData__;
  local_18 = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_4 = 2;
  clDataList::Add((clDataList *)&local_24,param_1);
  CConnection::SendMessageA(*(CConnection **)(this + 8),'\x13','\x01',(clDataList *)&local_24);
  local_24 = &clDataList::_vftable__for__clData__;
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




/* from: libgsclient:GSLoginLIB.cpp
   addr: 005AE5F0 */

uchar __thiscall CGLLoginLib::LoginLibRcv_PlayerInfoCB(CGLLoginLib *this)

{
  uchar uVar1;
  undefined4 local_1b8;
  int local_1b4;
  char local_1b0 [12];
  char local_1a4 [16];
  char local_194 [36];
  char local_170 [36];
  char local_14c [68];
  char local_108 [132];
  char local_84 [132];
  
  uVar1 = LoginLibRcv_PlayerInfo
                    (this,(uchar *)&local_1b8,local_1a4,local_170,local_194,local_14c,local_84,
                     local_1b0,local_108,&local_1b4);
  if (uVar1 != '\0') {
    (**(code **)**(undefined4 **)(this + 0x10))
              (local_1b8,local_1a4,local_170,local_194,local_14c,local_84,local_1b0,local_108,
               local_1b4);
    return '\x01';
  }
  return '\0';
}




/* from: libgsclient:GSLoginLIB.cpp
   addr: 005AE690 */

uchar __thiscall CGLLoginLib::LoginLibRcv_JoinWaitModuleResultCB(CGLLoginLib *this)

{
  uchar uVar1;
  int local_90;
  undefined4 local_8c;
  int local_88;
  char local_84 [132];
  
  uVar1 = LoginLibRcv_JoinWaitModuleResult(this,(uchar *)&local_8c,local_84,&local_90,&local_88);
  if (uVar1 != '\0') {
    (**(code **)(**(int **)(this + 0x10) + 4))(local_8c,local_84,local_90,local_88);
    return '\x01';
  }
  return '\0';
}




/* from: libgsclient:GSLoginLIB.cpp
   addr: 005AE6F0 */

uchar __thiscall CGLLoginLib::LoginLibRcv_LoginRouterResultCB(CGLLoginLib *this)

{
  uchar uVar1;
  int local_8;
  undefined4 local_4;
  
  uVar1 = LoginLibRcv_LoginRouterResult(this,(uchar *)&local_4,&local_8);
  if (uVar1 != '\0') {
    (**(code **)(**(int **)(this + 0x10) + 8))(local_4,local_8);
    return '\x01';
  }
  return '\0';
}




/* from: libgsclient:GSLoginLIB.cpp
   addr: 005AE730 */

uchar __thiscall CGLLoginLib::LoginLibRcv_LoginWaitModuleResultCB(CGLLoginLib *this)

{
  uchar uVar1;
  int local_8;
  undefined4 local_4;
  
  uVar1 = LoginLibRcv_LoginWaitModuleResult(this,(uchar *)&local_4,&local_8);
  if (uVar1 != '\0') {
    (**(code **)(**(int **)(this + 0x10) + 0xc))(local_4,local_8);
    return '\x01';
  }
  return '\0';
}




/* from: libgsclient:GSLoginLIB.cpp
   addr: 005AE770 */

uchar __thiscall CGLLoginLib::LoginLibRcv_SystemPageCB(CGLLoginLib *this)

{
  uchar uVar1;
  int local_408;
  char local_404 [1028];
  
  uVar1 = LoginLibRcv_SystemPage(this,&local_408,local_404);
  if (uVar1 != '\0') {
    (**(code **)(**(int **)(this + 0x10) + 0x10))(local_408,local_404);
    return '\x01';
  }
  return '\0';
}




/* from: libgsclient:GSLoginLIB.cpp
   addr: 005AE7C0 */

uchar __thiscall CGLLoginLib::LoginLibRcv_AccountCreationResultCB(CGLLoginLib *this)

{
  uchar uVar1;
  int local_8;
  undefined4 local_4;
  
  uVar1 = LoginLibRcv_AccountCreationResult(this,(uchar *)&local_4,&local_8);
  if (uVar1 != '\0') {
    (**(code **)(**(int **)(this + 0x10) + 0x18))(local_4,local_8);
    return '\x01';
  }
  return '\0';
}




/* from: libgsclient:GSLoginLIB.cpp
   addr: 005AE800 */

uchar __thiscall CGLLoginLib::LoginLibRcv_ModifyUserResultCB(CGLLoginLib *this)

{
  uchar uVar1;
  int local_8;
  undefined4 local_4;
  
  uVar1 = LoginLibRcv_ModifyUserResult(this,(uchar *)&local_4,&local_8);
  if (uVar1 != '\0') {
    (**(code **)(**(int **)(this + 0x10) + 0x1c))(local_4,local_8);
    return '\x01';
  }
  return '\0';
}




/* from: libgsclient:GSLoginLIB.cpp
   addr: 005AE840 */

uchar __thiscall CGLLoginLib::LoginLibRcv_LoginDisconnectionCB(CGLLoginLib *this)

{
  CGLFriendsLib::GetNewCurMessage((CGLFriendsLib *)this,-1);
  (**(code **)(**(int **)(this + 0x10) + 0x14))();
  return '\x01';
}




/* from: libgsclient:GSLoginLIB.cpp
   addr: 005AE860 */

uchar __thiscall
CGLLoginLib::LoginLibRcv_PlayerInfo
          (CGLLoginLib *this,uchar *param_1,char *param_2,char *param_3,char *param_4,char *param_5,
          char *param_6,char *param_7,char *param_8,int *param_9)

{
  uchar uVar1;
  undefined **local_40;
  undefined4 *local_3c;
  undefined **local_34 [2];
  undefined8 *local_2c;
  undefined **local_28;
  undefined4 *local_24;
  vector<char> local_1c [12];
  undefined8 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005cb530;
  local_c = ExceptionList;
  local_3c = &clDataList::_vbtable__for__clData__;
  local_2c = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
  ExceptionList = &local_c;
  clData::clData((clData *)&local_40,3);
  local_4 = 0;
  clPointerList<class_clData*>::clPointerList<class_clData*>
            ((clPointerList<class_clData*> *)local_34);
  local_40 = &clDataList::_vftable__for__clData__;
  local_34[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_4 = 1;
  local_24 = &clDataBin::_vbtable__for__clData__;
  local_10 = &clDataBin::_vbtable__for__ExtAlloc__vector<char>__;
  clData::clData((clData *)&local_28,2);
  local_4._0_1_ = 2;
  ExtAlloc::vector<char>::vector<char>(local_1c);
  local_28 = &clDataBin::_vftable_;
  local_4._0_1_ = 3;
  CGLFriendsLib::GetNewCurMessage((CGLFriendsLib *)this,0x13);
  uVar1 = GLDecodeRcv_Result(this,'\x13',param_1,param_9);
  if (uVar1 != '\0') {
    if (*param_1 == '\'') {
      local_4 = CONCAT31(local_4._1_3_,1);
      clDataBin::~clDataBin((clDataBin *)&local_28);
      local_4 = 0xffffffff;
      clDataList::~clDataList((clDataList *)&local_40);
      ExceptionList = local_c;
      return '\x01';
    }
    uVar1 = clDataList::GetIndex(*(clDataList **)(*(int *)(this + 4) + 8),(clDataList *)&local_40,1)
    ;
    if ((((uVar1 != '\0') &&
         (uVar1 = clDataList::GetIndex((clDataList *)&local_40,param_7,0), uVar1 != '\0')) &&
        (uVar1 = clDataList::GetIndex((clDataList *)&local_40,param_2,1), uVar1 != '\0')) &&
       (((uVar1 = clDataList::GetIndex((clDataList *)&local_40,param_3,2), uVar1 != '\0' &&
         (uVar1 = clDataList::GetIndex((clDataList *)&local_40,param_4,3), uVar1 != '\0')) &&
        (uVar1 = clDataList::GetIndex((clDataList *)&local_40,param_5,4), uVar1 != '\0')))) {
      uVar1 = clDataList::GetIndex((clDataList *)&local_40,param_6,5);
      if (uVar1 == '\0') {
        local_4 = CONCAT31(local_4._1_3_,1);
      }
      else {
        uVar1 = clDataList::GetIndex((clDataList *)&local_40,param_8,6);
        local_4 = CONCAT31(local_4._1_3_,1);
        if (uVar1 != '\0') {
          clDataBin::_vbase_destructor_((clDataBin *)&local_28);
          local_4 = 0xffffffff;
          clDataList::_vbase_destructor_((clDataList *)&local_40);
          ExceptionList = local_c;
          return '\x01';
        }
      }
      clDataBin::_vbase_destructor_((clDataBin *)&local_28);
      local_4 = 0xffffffff;
      clDataList::_vbase_destructor_((clDataList *)&local_40);
      ExceptionList = local_c;
      return '\0';
    }
  }
  local_4 = CONCAT31(local_4._1_3_,1);
  clDataBin::~clDataBin((clDataBin *)&local_28);
  local_4 = 0xffffffff;
  clDataList::~clDataList((clDataList *)&local_40);
  ExceptionList = local_c;
  return '\0';
}




/* from: libgsclient:GSLoginLIB.cpp
   addr: 005AEAA0 */

uchar __thiscall
CGLLoginLib::LoginLibRcv_JoinWaitModuleResult
          (CGLLoginLib *this,uchar *param_1,char *param_2,int *param_3,int *param_4)

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
  
  puStack_8 = &LAB_005cb5a7;
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
  CGLFriendsLib::GetNewCurMessage((CGLFriendsLib *)this,0x5d);
  uVar1 = GLDecodeRcv_Result(this,']',param_1,param_4);
  if (uVar1 == '\0') {
    local_24 = &clDataList::_vftable__for__clData__;
    local_18 = &clDataList::_vftable__for__clPointerList<class_clData*>__;
    local_4 = 2;
    clPointerList<class_clData*>::~clPointerList<class_clData*>
              ((clPointerList<class_clData*> *)&local_18);
    ExceptionList = local_c;
    return '\0';
  }
  if (*param_1 == '\'') {
    local_24 = &clDataList::_vftable__for__clData__;
    local_18 = &clDataList::_vftable__for__clPointerList<class_clData*>__;
    local_4 = 3;
    clPointerList<class_clData*>::~clPointerList<class_clData*>
              ((clPointerList<class_clData*> *)&local_18);
  }
  else {
    uVar1 = clDataList::GetIndex(*(clDataList **)(*(int *)(this + 4) + 8),(clDataList *)&local_24,1)
    ;
    if (uVar1 == '\0') {
      local_24 = &clDataList::_vftable__for__clData__;
      local_18 = &clDataList::_vftable__for__clPointerList<class_clData*>__;
      local_4 = 4;
      clPointerList<class_clData*>::~clPointerList<class_clData*>
                ((clPointerList<class_clData*> *)&local_18);
      ExceptionList = local_c;
      return '\0';
    }
    uVar1 = clDataList::GetIndex((clDataList *)&local_24,&local_28,0);
    if (uVar1 == '\0') {
      local_24 = &clDataList::_vftable__for__clData__;
      local_18 = &clDataList::_vftable__for__clPointerList<class_clData*>__;
      local_4 = 5;
      clPointerList<class_clData*>::~clPointerList<class_clData*>
                ((clPointerList<class_clData*> *)&local_18);
      ExceptionList = local_c;
      return '\0';
    }
    CGLFriendsLib::GLCopyString((CGLFriendsLib *)this,param_2,*(char **)(local_28 + 0xc));
    uVar1 = clDataList::GetIndex((clDataList *)&local_24,param_3,4,1);
    local_24 = &clDataList::_vftable__for__clData__;
    if (uVar1 == '\0') {
      local_18 = &clDataList::_vftable__for__clPointerList<class_clData*>__;
      local_4 = 6;
      clPointerList<class_clData*>::~clPointerList<class_clData*>
                ((clPointerList<class_clData*> *)&local_18);
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




/* from: libgsclient:GSLoginLIB.cpp
   addr: 005AECC0 */

uchar __thiscall
CGLLoginLib::LoginLibRcv_LoginRouterResult(CGLLoginLib *this,uchar *param_1,int *param_2)

{
  uchar uVar1;
  
  CGLFriendsLib::GetNewCurMessage((CGLFriendsLib *)this,0x66);
  uVar1 = GLDecodeRcv_Result(this,'f',param_1,param_2);
  return uVar1 != '\0';
}




/* from: libgsclient:GSLoginLIB.cpp
   addr: 005AECF0 */

uchar __thiscall
CGLLoginLib::LoginLibRcv_LoginWaitModuleResult(CGLLoginLib *this,uchar *param_1,int *param_2)

{
  uchar uVar1;
  
  CGLFriendsLib::GetNewCurMessage((CGLFriendsLib *)this,0x4d);
  uVar1 = GLDecodeRcv_Result(this,'M',param_1,param_2);
  return uVar1 != '\0';
}




/* from: libgsclient:GSLoginLIB.cpp
   addr: 005AED20 */

uchar __thiscall CGLLoginLib::LoginLibRcv_SystemPage(CGLLoginLib *this,int *param_1,char *param_2)

{
  int iVar1;
  uchar uVar2;
  CGLLoginLib *local_4;
  
  local_4 = this;
  CGLFriendsLib::GetNewCurMessage((CGLFriendsLib *)this,0xb5);
  iVar1 = *(int *)(this + 4);
  if (iVar1 == 0) {
    return '\0';
  }
  if (*(char *)(iVar1 + 4) != -0x4b) {
    return '\0';
  }
  uVar2 = clDataList::GetIndex(*(clDataList **)(iVar1 + 8),param_1,4,0);
  if (uVar2 == '\0') {
    return '\0';
  }
  uVar2 = clDataList::GetIndex(*(clDataList **)(*(int *)(this + 4) + 8),(clDataStr **)&local_4,1);
  if (uVar2 == '\0') {
    return '\0';
  }
  CGLFriendsLib::GLCopyString((CGLFriendsLib *)this,param_2,*(char **)(local_4 + 0xc));
  return '\x01';
}




/* from: libgsclient:GSLoginLIB.cpp
   addr: 005AEDA0 */

uchar __thiscall
CGLLoginLib::LoginLibRcv_AccountCreationResult(CGLLoginLib *this,uchar *param_1,int *param_2)

{
  uchar uVar1;
  
  CGLFriendsLib::GetNewCurMessage((CGLFriendsLib *)this,1);
  uVar1 = GLDecodeRcv_Result(this,'\x01',param_1,param_2);
  return uVar1 != '\0';
}




/* from: libgsclient:GSLoginLIB.cpp
   addr: 005AEDD0 */

uchar __thiscall
CGLLoginLib::LoginLibRcv_ModifyUserResult(CGLLoginLib *this,uchar *param_1,int *param_2)

{
  uchar uVar1;
  
  CGLFriendsLib::GetNewCurMessage((CGLFriendsLib *)this,0x62);
  uVar1 = GLDecodeRcv_Result(this,'b',param_1,param_2);
  return uVar1 != '\0';
}

