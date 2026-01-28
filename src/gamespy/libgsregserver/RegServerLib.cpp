
/* from: libgsregserver:RegServerLib.cpp
   addr: 00586370 */

CRegisterServer * __thiscall CRegisterServer::CRegisterServer(CRegisterServer *this)

{
  CRegisterServer CVar1;
  char *pcVar2;
  clParentGroups *this_00;
  undefined4 uVar3;
  int iVar4;
  CRegisterServer *pCVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c72ca;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 0x120) = 0;
  pCVar5 = this + 0x18;
  for (iVar4 = 0x20; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined4 *)pCVar5 = 0;
    pCVar5 = pCVar5 + 4;
  }
  *pCVar5 = (CRegisterServer)0x0;
  pcVar2 = s_;
  this[0x99] = (CRegisterServer)0x0;
  *(undefined4 *)(this + 0x124) = 0;
  this[0x9a] = (CRegisterServer)0x0;
  do {
    CVar1 = (CRegisterServer)*pcVar2;
    (this + -0x601fe0)[(int)pcVar2] = CVar1;
    pcVar2 = (char *)((CRegisterServer *)pcVar2 + 1);
  } while (CVar1 != (CRegisterServer)0x0);
  *(undefined4 *)(this + 0x128) = 0;
  *(undefined4 *)(this + 300) = 0;
  this[0x9b] = (CRegisterServer)0x0;
  this_00 = (clParentGroups *)ExtAlloc_Malloc_4(0xc);
  local_4 = 0;
  if (this_00 != (clParentGroups *)0x0) {
    uVar3 = clParentGroups::clParentGroups(this_00);
    *(undefined4 *)(this + 4) = uVar3;
    ExceptionList = local_c;
    return this;
  }
  *(undefined4 *)(this + 4) = 0;
  ExceptionList = local_c;
  return this;
}




/* from: libgsregserver:RegServerLib.cpp
   addr: 00586430
   addr: 00586430 */

void * __thiscall CRegisterServer::_vector_deleting_destructor_(CRegisterServer *this,uint param_1)

{
  ~CRegisterServer(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: libgsregserver:RegServerLib.cpp
   addr: 00586450 */

void __thiscall CRegisterServer::~CRegisterServer(CRegisterServer *this)

{
  *(undefined ***)this = &_vftable_;
  if (*(undefined4 **)(this + 0x124) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x124))(1);
  }
  if (*(undefined4 **)(this + 4) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 4))(1);
  }
  return;
}




/* from: libgsregserver:RegServerLib.cpp
   addr: 00586480 */

uchar __thiscall
CRegisterServer::RegServerSend_RouterConnect(CRegisterServer *this,char *param_1,int param_2)

{
  CRegisterServer CVar1;
  CRegServerConnection *pCVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c72ea;
  local_c = ExceptionList;
  if (*(CRegServerConnection **)(this + 0x120) == (CRegServerConnection *)0x0) {
    ExceptionList = &local_c;
    pCVar2 = (CRegServerConnection *)ExtAlloc_Malloc_4(0x98);
    local_4 = 0;
    if (pCVar2 == (CRegServerConnection *)0x0) {
      pCVar2 = (CRegServerConnection *)0x0;
    }
    else {
      pCVar2 = (CRegServerConnection *)CRegServerConnection::CRegServerConnection(pCVar2);
    }
    local_4 = 0xffffffff;
    *(CRegServerConnection **)(this + 0x120) = pCVar2;
    CVar1 = (CRegisterServer)
            CRegServerConnection::Connect(pCVar2,param_1,(ushort)param_2,'\x01',0,0,0);
    this[0x9b] = CVar1;
    if (*(int *)(this + 0x120) == 0) {
      RegServer_UnInitRouterConnection(this);
    }
  }
  else {
    ExceptionList = &local_c;
    CVar1 = (CRegisterServer)
            CRegServerConnection::Connect
                      (*(CRegServerConnection **)(this + 0x120),param_1,(ushort)param_2,'\x01',0,0,0
                      );
    this[0x9b] = CVar1;
  }
  ExceptionList = local_c;
  return (uchar)this[0x9b];
}




/* from: libgsregserver:RegServerLib.cpp
   addr: 00586540 */

void __thiscall CRegisterServer::RegServer_Engine(CRegisterServer *this)

{
  clRcvElement *this_00;
  uint uVar1;
  CRegisterServer *local_4;
  
  local_4 = this;
  CheckDisconnection(this);
  if (this[0x9b] != (CRegisterServer)0x0) {
    this_00 = (clRcvElement *)
              CRegServerConnection::ReadMessage(*(CRegServerConnection **)(this + 0x120));
    while (this_00 != (clRcvElement *)0x0) {
      if (((byte)this_00[4] < 0x26) || (0x27 < (byte)this_00[4])) {
        local_4 = (CRegisterServer *)((uint)local_4 & 0xffffff00);
      }
      else {
        clDataList::GetIndex(*(clDataList **)(this_00 + 8),&local_4,1,0);
      }
      uVar1 = (uint)local_4 & 0xff;
      if (uVar1 == 0x66) {
        RegServerRcv_LoginRouterResult(this,(ushort)(byte)this_00[4],*(clDataList **)(this_00 + 8));
      }
      else if (uVar1 == 0xd5) {
        RegServerRcv_RegisterServerResult
                  (this,(ushort)(byte)this_00[4],*(clDataList **)(this_00 + 8));
      }
      else if (uVar1 == 0xd9) {
        RegServerRcv_RequestParentGroupResult
                  (this,(ushort)(byte)this_00[4],*(clDataList **)(this_00 + 8));
      }
      clRcvElement::~clRcvElement(this_00);
      ExtAlloc_Free_4(this_00);
      this_00 = (clRcvElement *)
                CRegServerConnection::ReadMessage(*(CRegServerConnection **)(this + 0x120));
    }
  }
  return;
}




/* from: libgsregserver:RegServerLib.cpp
   addr: 00586610 */

void __thiscall CRegisterServer::CheckDisconnection(CRegisterServer *this)

{
  uchar uVar1;
  
  if (this[0x9b] != (CRegisterServer)0x0) {
    uVar1 = CConnection::CheckConnection(*(CConnection **)(this + 0x120));
    if (uVar1 == '\0') {
      RegServer_UnInitRouterConnection(this);
    }
  }
  if (this[0x9a] != (CRegisterServer)0x0) {
    uVar1 = ManageLobbyServerConnection(this);
    if (uVar1 == '\0') {
      RegServer_UnInitLobbyServerConnection(this);
                    /* WARNING: Could not recover jumptable at 0x00586654. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(int *)this + 0x1c))();
      return;
    }
  }
  return;
}




/* from: libgsregserver:RegServerLib.cpp
   addr: 00586660 */

void __thiscall CRegisterServer::RegServer_UnInitRouterConnection(CRegisterServer *this)

{
  CConnection *this_00;
  
  this_00 = *(CConnection **)(this + 0x120);
  if (this_00 != (CConnection *)0x0) {
    CConnection::~CConnection(this_00);
    ExtAlloc_Free_4(this_00);
  }
  *(undefined4 *)(this + 0x120) = 0;
  this[0x9b] = (CRegisterServer)0x0;
                    /* WARNING: Could not recover jumptable at 0x00586692. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)this + 8))();
  return;
}




/* from: libgsregserver:RegServerLib.cpp
   addr: 005866A0 */

void __thiscall CRegisterServer::RegServer_UnInitLobbyServerConnection(CRegisterServer *this)

{
  if (*(undefined4 **)(this + 0x124) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x124))(1);
  }
  *(undefined4 *)(this + 0x124) = 0;
  *(undefined4 *)(this + 0x128) = 0;
  *(undefined4 *)(this + 300) = 0;
  this[0x9a] = (CRegisterServer)0x0;
  return;
}




/* from: libgsregserver:RegServerLib.cpp
   addr: 005866E0 */

uchar __thiscall CRegisterServer::RegServerSend_RouterDisconnect(CRegisterServer *this)

{
  uchar uVar1;
  
  if (*(CRegServerConnection **)(this + 0x120) == (CRegServerConnection *)0x0) {
    return '\0';
  }
  uVar1 = CRegServerConnection::Disconnect(*(CRegServerConnection **)(this + 0x120));
  return uVar1;
}




/* from: libgsregserver:RegServerLib.cpp
   addr: 00586700 */

uchar __thiscall
CRegisterServer::RegServerSend_LoginRouter
          (CRegisterServer *this,char *param_1,char *param_2,char *param_3)

{
  char *pcVar1;
  undefined **local_28;
  undefined4 *local_24;
  undefined4 local_20;
  undefined **local_1c;
  list<class_clData*,class_ExtAlloc::Allocator<class_clData*>_> local_18 [4];
  undefined8 *local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  pcVar1 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c738d;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  strncpy((char *)(this + 8),param_1,0x10);
  local_24 = &clDataList::_vbtable__for__clData__;
  local_14 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
  local_20 = 3;
  local_28 = &clData::_vftable_;
  local_4 = 4;
  _STL::list<class_clData*,class_ExtAlloc::Allocator<class_clData*>_>::
  list<class_clData*,class_ExtAlloc::Allocator<class_clData*>_>
            (local_18,(Allocator<class_clData*> *)&param_1);
  local_1c = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_28 = &clDataList::_vftable__for__clData__;
  local_4 = 5;
  clDataList::Add((clDataList *)&local_28,pcVar1);
  clDataList::Add((clDataList *)&local_28,param_2);
  clDataList::Add((clDataList *)&local_28,param_3);
  if (*(CConnection **)(this + 0x120) == (CConnection *)0x0) {
    local_28 = &clDataList::_vftable__for__clData__;
    param_1 = (char *)&local_1c;
    local_1c = &clPointerList<class_clData*>::_vftable_;
    local_4._0_1_ = 7;
    local_4._1_3_ = 0;
    clPointerList<class_clRcvElement*>::clear((clPointerList<class_clRcvElement*> *)&local_1c);
    local_4 = CONCAT31(local_4._1_3_,6);
    ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
              ((list<class_clRcvElement*> *)local_18);
    ExceptionList = local_c;
    return '\0';
  }
  CConnection::SendMessageA(*(CConnection **)(this + 0x120),'f','\x01',(clDataList *)&local_28);
  local_28 = &clDataList::_vftable__for__clData__;
  param_1 = (char *)&local_1c;
  local_1c = &clPointerList<class_clData*>::_vftable_;
  local_4._0_1_ = 9;
  local_4._1_3_ = 0;
  clPointerList<class_clRcvElement*>::clear((clPointerList<class_clRcvElement*> *)&local_1c);
  local_4 = CONCAT31(local_4._1_3_,8);
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            ((list<class_clRcvElement*> *)local_18);
  ExceptionList = local_c;
  return '\x01';
}




/* from: libgsregserver:RegServerLib.cpp
   addr: 00586880 */

uchar __thiscall
CRegisterServer::RegServerSend_RequestParentGroupOnLobby(CRegisterServer *this,char *param_1)

{
  Allocator<class_clProxyMessage*> local_39;
  int local_38;
  undefined ***local_34;
  _Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
  **local_30;
  _Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
  **pp_Stack_2c;
  undefined **local_28;
  undefined4 *local_24;
  undefined4 local_20;
  undefined **local_1c;
  _Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
  *local_18;
  undefined8 *local_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c7406;
  pvStack_c = ExceptionList;
  local_24 = &clDataList::_vbtable__for__clData__;
  local_14 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
  local_38 = 1;
  local_20 = 3;
  local_28 = &clData::_vftable_;
  local_34 = &local_1c;
  local_30 = &local_18;
  local_4 = 4;
  ExceptionList = &pvStack_c;
  _STL::_List_base<class_clProxyMessage*,class_ExtAlloc::Allocator<class_clProxyMessage*>_>::
  List_base<class_clProxyMessage*,class_ExtAlloc::Allocator<class_clProxyMessage*>_>
            ((_List_base<class_clProxyMessage*,class_ExtAlloc::Allocator<class_clProxyMessage*>_> *)
             &local_18,&local_39);
  local_28 = &clDataList::_vftable__for__clData__;
  local_1c = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_4 = 5;
  local_38 = 0xc;
  clDataList::Add((clDataList *)&local_28,&local_38);
  clDataList::Add((clDataList *)&local_28,param_1);
  CConnection::SendMessageA(*(CConnection **)(this + 0x120),0xd9,'\x01',(clDataList *)&local_28);
  (**(code **)(**(int **)(this + 4) + 4))();
  local_28 = &clDataList::_vftable__for__clData__;
  local_1c = &clPointerList<class_clData*>::_vftable_;
  local_4._0_1_ = 7;
  local_4._1_3_ = 0;
  clPointerList<class_clRcvElement*>::clear((clPointerList<class_clRcvElement*> *)&local_1c);
  pp_Stack_2c = &local_18;
  local_4 = CONCAT31(local_4._1_3_,8);
  _STL::_List_base<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_>::clear
            ((_List_base<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_> *)
             &local_18);
  _STL::
  _STLP_alloc_proxy<struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>*,struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
  ::deallocate((_STLP_alloc_proxy<struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>*,struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
                *)&local_18,local_18,1);
  ExceptionList = pvStack_c;
  return '\x01';
}




/* from: libgsregserver:RegServerLib.cpp
   addr: 005869C0 */

uchar __thiscall
CRegisterServer::RegServerSend_RegisterServerOnLobby
          (CRegisterServer *this,uint param_1,int param_2,char *param_3,char *param_4,ushort param_5
          ,uint param_6,uint param_7,char *param_8,void *param_9,int param_10,void *param_11,
          int param_12,void *param_13,int param_14,ushort param_15,char *param_16,char *param_17,
          uchar param_18,uchar param_19)

{
  uchar uVar1;
  undefined2 in_stack_00000016;
  undefined2 in_stack_0000003e;
  uint local_e8;
  uint local_e4;
  undefined **local_e0;
  undefined4 *local_dc;
  undefined **local_d4 [2];
  undefined8 *local_cc;
  undefined **local_c4;
  undefined4 *local_c0;
  undefined **local_b8 [2];
  undefined8 *local_b0;
  undefined **local_a8;
  undefined4 *local_a4;
  vector<char> local_9c [12];
  undefined8 *local_90;
  undefined **local_88;
  undefined4 *local_84;
  vector<char> local_7c [12];
  undefined8 *local_70;
  undefined **local_68;
  undefined4 *local_64;
  vector<char> local_5c [12];
  undefined8 *local_50;
  clParentGroup local_48 [4];
  uint local_44;
  _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
  *local_40;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c7521;
  local_c = ExceptionList;
  local_dc = &clDataList::_vbtable__for__clData__;
  local_cc = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
  local_e8 = 1;
  local_4 = 0;
  ExceptionList = &local_c;
  clData::clData((clData *)&local_e0,3);
  local_4 = 1;
  clPointerList<class_clData*>::clPointerList<class_clData*>
            ((clPointerList<class_clData*> *)local_d4);
  local_e0 = &clDataList::_vftable__for__clData__;
  local_d4[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_c0 = &clDataList::_vbtable__for__clData__;
  local_b0 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
  local_e8 = 3;
  local_4 = 3;
  clData::clData((clData *)&local_c4,3);
  local_4 = 4;
  clPointerList<class_clData*>::clPointerList<class_clData*>
            ((clPointerList<class_clData*> *)local_b8);
  local_c4 = &clDataList::_vftable__for__clData__;
  local_b8[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_a4 = &clDataBin::_vbtable__for__clData__;
  local_90 = &clDataBin::_vbtable__for__ExtAlloc__vector<char>__;
  local_e8 = 7;
  local_4 = CONCAT31(local_4._1_3_,6);
  clData::clData((clData *)&local_a8,2);
  local_4 = 7;
  ExtAlloc::vector<char>::vector<char>(local_9c);
  local_a8 = &clDataBin::_vftable_;
  local_64 = &clDataBin::_vbtable__for__clData__;
  local_50 = &clDataBin::_vbtable__for__ExtAlloc__vector<char>__;
  local_e8 = 0xf;
  local_4 = CONCAT31(local_4._1_3_,9);
  clData::clData((clData *)&local_68,2);
  local_4 = 10;
  ExtAlloc::vector<char>::vector<char>(local_5c);
  local_68 = &clDataBin::_vftable_;
  local_84 = &clDataBin::_vbtable__for__clData__;
  local_70 = &clDataBin::_vbtable__for__ExtAlloc__vector<char>__;
  local_e8 = 0x1f;
  local_4 = CONCAT31(local_4._1_3_,0xc);
  clData::clData((clData *)&local_88,2);
  local_4 = 0xd;
  ExtAlloc::vector<char>::vector<char>(local_7c);
  local_88 = &clDataBin::_vftable_;
  local_4._0_1_ = 0xe;
  if ((param_1 == 0) || (param_2 == 0)) {
    clParentGroup::clParentGroup(local_48);
    local_4._0_1_ = 0xf;
    uVar1 = clParentGroups::GetParentGroup(*(clParentGroups **)(this + 4),local_48);
    if (uVar1 == '\0') {
      local_4._0_1_ = 0xe;
      m3dTerm2DMatr();
      local_4._0_1_ = 0xb;
      clDataBin::~clDataBin((clDataBin *)&local_88);
      local_4._0_1_ = 8;
      clDataBin::~clDataBin((clDataBin *)&local_68);
      local_4._0_1_ = 5;
      clDataBin::~clDataBin((clDataBin *)&local_a8);
      local_4 = CONCAT31(local_4._1_3_,2);
      clDataList::~clDataList((clDataList *)&local_c4);
      local_4 = 0xffffffff;
      clDataList::~clDataList((clDataList *)&local_e0);
      ExceptionList = local_c;
      return '\0';
    }
    param_1 = local_44;
    param_2 = (int)local_40;
    _STL::
    _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
    ::
    ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
              (local_40);
    local_4._0_1_ = 0xe;
    m3dTerm2DMatr();
  }
  local_e4 = 0x2010;
  if (param_18 != '\0') {
    local_e4 = 0x2810;
  }
  if (param_19 != '\0') {
    local_e4 = local_e4 | 0x4000;
  }
  clDataBin::Copy((clDataBin *)&local_a8,(char *)param_9,param_10);
  clDataBin::Copy((clDataBin *)&local_68,(char *)param_11,param_12);
  clDataBin::Copy((clDataBin *)&local_88,(char *)param_13,param_14);
  clDataList::Add((clDataList *)&local_e0,(char *)(this + 8));
  clDataList::Add((clDataList *)&local_e0,&param_2);
  clDataList::Add((clDataList *)&local_e0,param_3);
  clDataList::Add((clDataList *)&local_e0,param_4);
  local_e8 = _param_5 & 0xffff;
  clDataList::Add((clDataList *)&local_e0,(int *)&local_e8);
  clDataList::Add((clDataList *)&local_e0,(int *)&param_6);
  clDataList::Add((clDataList *)&local_e0,(int *)&param_7);
  clDataList::Add((clDataList *)&local_e0,(clDataBin *)&local_a8);
  clDataList::Add((clDataList *)&local_e0,(clDataBin *)&local_88);
  clDataList::Add((clDataList *)&local_e0,param_8);
  clDataList::Add((clDataList *)&local_e0,param_16);
  clDataList::Add((clDataList *)&local_e0,param_17);
  clDataList::Add((clDataList *)&local_e0,(int *)&local_e4);
  CRegServerConnection::GetLocalIPAddress
            (*(CRegServerConnection **)(this + 0x120),(char *)(this + 0x9c));
  clDataList::Add((clDataList *)&local_e0,(char *)(this + 0x9c));
  local_e8 = _param_15 & 0xffff;
  clDataList::Add((clDataList *)&local_e0,(int *)&local_e8);
  clDataList::Add((clDataList *)&local_e0,(clDataBin *)&local_68);
  local_e8 = 0xc;
  clDataList::Add((clDataList *)&local_c4,(int *)&local_e8);
  clDataList::Add((clDataList *)&local_c4,(int *)&param_1);
  clDataList::Add((clDataList *)&local_c4,(clDataList *)&local_e0);
  uVar1 = CConnection::SendMessageA
                    (*(CConnection **)(this + 0x120),0xd5,'\x01',(clDataList *)&local_c4);
  local_88 = &clDataBin::_vftable_;
  local_4._0_1_ = 0x10;
  _STL::
  _Vector_base<void*,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
  ::
  ~_Vector_base<void*,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
            ((_Vector_base<void*,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
              *)local_7c);
  local_88 = &clData::_vftable_;
  local_4._0_1_ = 8;
  clDataBin::~clDataBin((clDataBin *)&local_68);
  local_a8 = &clDataBin::_vftable_;
  local_4._0_1_ = 0x11;
  _STL::
  _Vector_base<void*,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
  ::
  ~_Vector_base<void*,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
            ((_Vector_base<void*,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
              *)local_9c);
  local_a8 = &clData::_vftable_;
  local_4 = CONCAT31(local_4._1_3_,2);
  clDataList::~clDataList((clDataList *)&local_c4);
  local_4 = 0xffffffff;
  clDataList::~clDataList((clDataList *)&local_e0);
  ExceptionList = local_c;
  return uVar1;
}




/* from: libgsregserver:RegServerLib.cpp
   addr: 00586F00 */

uchar __thiscall
CRegisterServer::RegServerRcv_LoginRouterResult
          (CRegisterServer *this,ushort param_1,clDataList *param_2)

{
  uchar uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined2 in_stack_00000006;
  clDataList *local_8c;
  undefined4 local_88;
  char local_84;
  undefined4 local_83 [32];
  
  local_84 = s_[0];
  puVar3 = local_83;
  for (iVar2 = 0x20; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  local_88 = 0;
  if (param_1 == 0x26) {
    uVar1 = clDataList::GetIndex(param_2,&local_8c,1);
    if (uVar1 == '\0') {
      return '\0';
    }
    uVar1 = clDataList::GetIndex(local_8c,&local_84,0,0x81);
    if (uVar1 == '\0') {
      return '\0';
    }
  }
  else {
    if (param_1 != 0x27) {
      return '\0';
    }
    uVar1 = clDataList::GetIndex(param_2,&local_8c,1);
    if (uVar1 == '\0') {
      return '\0';
    }
    uVar1 = clDataList::GetIndex(local_8c,&local_88,4,0);
    if (uVar1 == '\0') {
      return '\0';
    }
  }
  (**(code **)(*(int *)this + 4))(_param_1,local_88,&local_84);
  return '\x01';
}




/* from: libgsregserver:RegServerLib.cpp
   addr: 00587000 */

uchar __thiscall
CRegisterServer::RegServerRcv_RegisterServerResult
          (CRegisterServer *this,ushort param_1,clDataList *param_2)

{
  uchar uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined2 in_stack_00000006;
  clDataList *local_b8;
  int local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  char local_a8;
  undefined4 local_a7 [8];
  char local_84;
  undefined4 local_83 [32];
  
  local_a8 = s_[0];
  puVar3 = local_a7;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  local_84 = s_[0];
  local_b0 = 0;
  puVar3 = local_83;
  for (iVar2 = 0x20; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  local_b4 = 0;
  local_ac = 0;
  if (param_1 == 0x26) {
    clDataList::GetIndex(param_2,&local_b8,1);
    uVar1 = clDataList::GetIndex(local_b8,&local_84,0);
    if (uVar1 == '\0') {
      return '\0';
    }
    uVar1 = clDataList::GetIndex(local_b8,(ushort *)&local_ac,1);
    if (uVar1 == '\0') {
      return '\0';
    }
    uVar1 = clDataList::GetIndex(local_b8,&local_b4,2);
    if (uVar1 == '\0') {
      return '\0';
    }
    uVar1 = clDataList::GetIndex(local_b8,&local_a8,3);
    if (uVar1 == '\0') {
      return '\0';
    }
  }
  else {
    if (param_1 != 0x27) {
      return '\0';
    }
    uVar1 = clDataList::GetIndex(param_2,&local_b8,1);
    if (uVar1 == '\0') {
      return '\0';
    }
    uVar1 = clDataList::GetIndex(local_b8,&local_b0,4,0);
    if (uVar1 == '\0') {
      return '\0';
    }
  }
  (**(code **)(*(int *)this + 0xc))(_param_1,local_b0,local_b4,&local_84,local_ac,&local_a8);
  return '\x01';
}




/* from: libgsregserver:RegServerLib.cpp
   addr: 00587170 */

uchar __thiscall
CRegisterServer::RegServerRcv_RequestParentGroupResult
          (CRegisterServer *this,ushort param_1,clDataList *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uchar uVar4;
  _List_node<class_clData*> *p_Var5;
  undefined2 in_stack_00000006;
  undefined4 uVar6;
  undefined4 uVar7;
  uint local_50;
  uint local_4c;
  int local_48;
  uint local_44;
  undefined4 local_40;
  clData *local_3c;
  int local_38;
  clParentGroup *local_34;
  char local_30 [8];
  void *pvStack_28;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c753a;
  local_c = ExceptionList;
  if (param_1 == 0x26) {
    ExceptionList = &local_c;
    uVar4 = clDataList::GetIndex(param_2,(clDataList **)&param_1,1);
    if (uVar4 == '\0') {
      ExceptionList = local_c;
      return '\0';
    }
    uVar4 = clDataList::GetIndex(_param_1,&param_2,0);
    uVar3 = 1;
    while (uVar4 != '\0') {
      uVar4 = clDataList::GetIndex(param_2,&local_44,0);
      if (uVar4 == '\0') {
        ExceptionList = local_c;
        return '\0';
      }
      uVar4 = clDataList::GetIndex(param_2,&local_48,1);
      if (uVar4 == '\0') {
        ExceptionList = local_c;
        return '\0';
      }
      uVar4 = clDataList::GetIndex(param_2,local_30,2,0x21);
      if (uVar4 == '\0') {
        ExceptionList = local_c;
        return '\0';
      }
      uVar4 = clDataList::GetIndex(param_2,&local_4c,3);
      if (uVar4 == '\0') {
        ExceptionList = local_c;
        return '\0';
      }
      uVar4 = clDataList::GetIndex(param_2,&local_50,4);
      if (uVar4 == '\0') {
        local_50 = 0x3e9;
      }
      local_34 = (clParentGroup *)ExtAlloc_Malloc_4(0x3c);
      local_4 = 0;
      if (local_34 == (clParentGroup *)0x0) {
        local_3c = (clData *)0x0;
      }
      else {
        local_3c = (clData *)
                   clParentGroup::clParentGroup
                             (local_34,local_44,local_48,local_30,local_4c,local_50);
      }
      iVar1 = *(int *)(this + 4);
      local_4 = 0xffffffff;
      _STL::list<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_>::end
                ((list<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_> *)
                 (iVar1 + 4));
      p_Var5 = _STL::list<class_clData*,class_ExtAlloc::Allocator<class_clData*>_>::M_create_node
                         ((list<class_clData*,class_ExtAlloc::Allocator<class_clData*>_> *)
                          (iVar1 + 4),&local_3c);
      puVar2 = *(undefined4 **)(local_38 + 4);
      *(int *)p_Var5 = local_38;
      *(undefined4 **)(p_Var5 + 4) = puVar2;
      *puVar2 = p_Var5;
      *(_List_node<class_clData*> **)(local_38 + 4) = p_Var5;
      (**(code **)(*(int *)this + 0x10))(0x26,0,local_44,local_48,local_30,local_4c,local_50);
      uVar4 = clDataList::GetIndex(_param_1,&param_2,uVar3);
      uVar3 = uVar3 + 1;
    }
    uVar7 = 0;
    local_40 = 0;
    uVar6 = 0x26;
  }
  else {
    if (param_1 != 0x27) {
      return '\0';
    }
    ExceptionList = &local_c;
    uVar4 = clDataList::GetIndex(param_2,(clDataList **)&param_1,1);
    if (uVar4 == '\0') {
      ExceptionList = local_c;
      return '\0';
    }
    uVar4 = clDataList::GetIndex(_param_1,&local_40,4,0);
    if (uVar4 == '\0') {
      ExceptionList = local_c;
      return '\0';
    }
    uVar7 = 0xffffffff;
    uVar6 = 0x27;
  }
  (**(code **)(*(int *)this + 0x10))(uVar6,local_40,uVar7,0,s_,0,0);
  ExceptionList = pvStack_28;
  return '\x01';
}




/* from: libgsregserver:RegServerLib.cpp
   addr: 005873D0 */

uchar __thiscall
CRegisterServer::RegServerSend_LobbyServerConnection
          (CRegisterServer *this,char *param_1,ushort param_2,ushort param_3,uint param_4,
          uint param_5)

{
  char cVar1;
  uchar uVar2;
  clSRPGSClient *this_00;
  undefined4 uVar3;
  undefined2 in_stack_0000000a;
  undefined2 in_stack_0000000e;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c755a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(int *)(this + 0x124) == 0) {
    ExceptionList = &local_c;
    this_00 = (clSRPGSClient *)ExtAlloc_Malloc_4(0x6c);
    local_4 = 0;
    if (this_00 == (clSRPGSClient *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = clSRPGSClient::clSRPGSClient(this_00,param_4,'\b','\f',param_5);
    }
    *(undefined4 *)(this + 0x124) = uVar3;
  }
  local_4 = 0xffffffff;
  if (this[0x9a] == (CRegisterServer)0x0) {
    cVar1 = (**(code **)(**(int **)(this + 0x124) + 4))(param_1,_param_2,_param_3);
    if (cVar1 == '\0') {
LAB_0058745b:
      RegServer_UnInitLobbyServerConnection(this);
      ExceptionList = local_c;
      return '\0';
    }
    do {
      uVar2 = clSRPGSConnect::CheckConnection(*(clSRPGSConnect **)(this + 0x124));
      if (uVar2 == '\0') goto LAB_0058745b;
      uVar2 = clSRPGSConnect::IsConnected(*(clSRPGSConnect **)(this + 0x124));
    } while (uVar2 == '\0');
    this[0x9a] = (CRegisterServer)0x1;
  }
  ExceptionList = local_c;
  return '\x01';
}




/* from: libgsregserver:RegServerLib.cpp
   addr: 005874B0 */

uchar __thiscall CRegisterServer::RegServerSend_LobbyServerClose(CRegisterServer *this)

{
  uchar uVar1;
  
  if (*(int **)(this + 0x124) == (int *)0x0) {
    return '\0';
  }
                    /* WARNING: Could not recover jumptable at 0x005874bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(**(int **)(this + 0x124) + 8))();
  return uVar1;
}




/* from: libgsregserver:RegServerLib.cpp
   addr: 005874D0 */

uchar __thiscall
CRegisterServer::RegServerSend_LobbyServerLogin(CRegisterServer *this,char *param_1,int param_2)

{
  uchar uVar1;
  Allocator<class_clProxyMessage*> local_29;
  undefined4 local_28;
  undefined **local_24;
  undefined4 *local_20;
  undefined4 local_1c;
  undefined **local_18;
  _List_base<class_clProxyMessage*,class_ExtAlloc::Allocator<class_clProxyMessage*>_> local_14 [4];
  undefined8 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c75b7;
  local_c = ExceptionList;
  local_28 = 0;
  if ((*(int *)(this + 0x124) != 0) && (this[0x9a] != (CRegisterServer)0x0)) {
    local_20 = &clDataList::_vbtable__for__clData__;
    local_10 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
    local_1c = 3;
    local_24 = &clData::_vftable_;
    local_4 = 1;
    ExceptionList = &local_c;
    _STL::_List_base<class_clProxyMessage*,class_ExtAlloc::Allocator<class_clProxyMessage*>_>::
    List_base<class_clProxyMessage*,class_ExtAlloc::Allocator<class_clProxyMessage*>_>
              (local_14,&local_29);
    local_24 = &clDataList::_vftable__for__clData__;
    local_18 = &clDataList::_vftable__for__clPointerList<class_clData*>__;
    local_4 = 2;
    clDataList::Add((clDataList *)&local_24,param_1);
    clDataList::Add((clDataList *)&local_24,&param_2);
    uVar1 = clConnectElem::SendMessageA
                      (*(clConnectElem **)(this + 0x124),0xd2,(clDataList *)&local_24);
    local_24 = &clDataList::_vftable__for__clData__;
    local_18 = &clPointerList<class_clData*>::_vftable_;
    local_4._0_1_ = 4;
    local_4._1_3_ = 0;
    clPointerList<class_clRcvElement*>::clear((clPointerList<class_clRcvElement*> *)&local_18);
    local_4 = CONCAT31(local_4._1_3_,3);
    ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
              ((list<class_clRcvElement*> *)local_14);
    ExceptionList = local_c;
    return uVar1;
  }
  ExceptionList = &local_c;
  RegServer_UnInitLobbyServerConnection(this);
  ExceptionList = local_c;
  return '\0';
}




/* from: libgsregserver:RegServerLib.cpp
   addr: 00587600 */

uchar __thiscall
CRegisterServer::RegServerSend_UpdateGroupSettings
          (CRegisterServer *this,int param_1,char param_2,char param_3,char param_4,int param_5,
          int param_6,char *param_7,void *param_8,int param_9,void *param_10,int param_11,
          void *param_12,int param_13,ushort param_14)

{
  uchar uVar1;
  clDataList *pcVar2;
  undefined3 in_stack_00000009;
  undefined2 in_stack_0000003a;
  uint uStack_4c;
  uint local_48;
  CRegisterServer *local_44;
  undefined **ppuStack_40;
  undefined4 *puStack_3c;
  undefined4 uStack_38;
  undefined **appuStack_34 [2];
  undefined8 *puStack_2c;
  undefined **ppuStack_28;
  undefined4 *puStack_24;
  undefined4 uStack_20;
  vector<char> avStack_1c [12];
  undefined8 *puStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_005c763a;
  local_c = ExceptionList;
  local_48 = 0;
  local_44 = this;
  if ((*(int *)(this + 0x124) != 0) && (this[0x9a] != (CRegisterServer)0x0)) {
    uStack_4c = 0;
    puStack_3c = &clDataList::_vbtable__for__clData__;
    puStack_2c = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
    uStack_38 = 3;
    ppuStack_40 = &clData::_vftable_;
    uStack_4 = 0;
    ExceptionList = &local_c;
    clPointerList<class_clData*>::clPointerList<class_clData*>
              ((clPointerList<class_clData*> *)appuStack_34);
    ppuStack_40 = &clDataList::_vftable__for__clData__;
    appuStack_34[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
    uStack_4 = 1;
    local_48 = 0;
    if ((-1 < param_2) && (uStack_4c = uStack_4c | 2, param_2 != '\0')) {
      local_48 = 0x10;
    }
    if ((-1 < param_3) && (uStack_4c = uStack_4c | 4, param_3 != '\0')) {
      local_48 = local_48 | 0x800;
    }
    if ((-1 < param_4) && (uStack_4c = uStack_4c | 0x200, param_4 != '\0')) {
      local_48 = local_48 | 0x4000;
    }
    if (param_5 != -1) {
      uStack_4c = uStack_4c | 8;
    }
    if (param_6 != -1) {
      uStack_4c = uStack_4c | 0x10;
    }
    if (param_7 != (char *)0x0) {
      uStack_4c = uStack_4c | 0x20;
    }
    if ((param_8 != (void *)0x0) && (-1 < param_9)) {
      uStack_4c = uStack_4c | 0x40;
    }
    if ((param_10 != (void *)0x0) && (-1 < param_11)) {
      uStack_4c = uStack_4c | 0x400;
    }
    if ((param_12 != (void *)0x0) && (-1 < param_13)) {
      uStack_4c = uStack_4c | 0x80;
    }
    if (param_14 != 0) {
      uStack_4c = uStack_4c | 0x100;
    }
    pcVar2 = (clDataList *)ExtAlloc_Malloc_4(0x18);
    _param_2 = pcVar2;
    if (pcVar2 == (clDataList *)0x0) {
      pcVar2 = (clDataList *)0x0;
    }
    else {
      *(undefined4 **)(pcVar2 + 4) = &clDataList::_vbtable__for__clData__;
      *(undefined8 **)(pcVar2 + 0x14) = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
      *(undefined4 *)(pcVar2 + 8) = 3;
      *(undefined ***)pcVar2 = &clData::_vftable_;
      uStack_4 = CONCAT31(uStack_4._1_3_,3);
      clPointerList<class_clData*>::clPointerList<class_clData*>
                ((clPointerList<class_clData*> *)(pcVar2 + 0xc));
      *(undefined ***)pcVar2 = &clDataList::_vftable__for__clData__;
      *(undefined ***)(pcVar2 + 0xc) = &clDataList::_vftable__for__clPointerList<class_clData*>__;
    }
    uStack_4._0_1_ = 1;
    clDataList::Add(pcVar2,&param_1);
    clDataList::Add(pcVar2,(int *)&uStack_4c);
    if ((uStack_4c & 0x206) != 0) {
      clDataList::Add(pcVar2,(int *)&local_48);
    }
    if ((uStack_4c & 8) != 0) {
      clDataList::Add(pcVar2,&param_5);
    }
    if ((uStack_4c & 0x10) != 0) {
      clDataList::Add(pcVar2,&param_6);
    }
    if ((uStack_4c & 0x20) != 0) {
      clDataList::Add(pcVar2,param_7);
    }
    if ((uStack_4c & 0x40) != 0) {
      puStack_24 = &clDataBin::_vbtable__for__clData__;
      puStack_10 = &clDataBin::_vbtable__for__ExtAlloc__vector<char>__;
      uStack_20 = 2;
      ppuStack_28 = &clData::_vftable_;
      uStack_4._0_1_ = 4;
      ExtAlloc::vector<char>::vector<char>(avStack_1c);
      ppuStack_28 = &clDataBin::_vftable_;
      uStack_4._0_1_ = 5;
      clDataBin::Copy((clDataBin *)&ppuStack_28,(char *)param_8,param_9);
      clDataList::Add(pcVar2,(clDataBin *)&ppuStack_28);
      ppuStack_28 = &clDataBin::_vftable_;
      uStack_4._0_1_ = 6;
      _STL::
      _Vector_base<void*,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
      ::
      ~_Vector_base<void*,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
                ((_Vector_base<void*,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
                  *)avStack_1c);
      uStack_4._0_1_ = 1;
    }
    if ((uStack_4c & 0x400) != 0) {
      puStack_24 = &clDataBin::_vbtable__for__clData__;
      puStack_10 = &clDataBin::_vbtable__for__ExtAlloc__vector<char>__;
      uStack_20 = 2;
      ppuStack_28 = &clData::_vftable_;
      uStack_4._0_1_ = 7;
      ExtAlloc::vector<char>::vector<char>(avStack_1c);
      ppuStack_28 = &clDataBin::_vftable_;
      uStack_4._0_1_ = 8;
      clDataBin::Copy((clDataBin *)&ppuStack_28,(char *)param_10,param_11);
      clDataList::Add(pcVar2,(clDataBin *)&ppuStack_28);
      ppuStack_28 = &clDataBin::_vftable_;
      uStack_4._0_1_ = 9;
      _STL::
      _Vector_base<void*,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
      ::
      ~_Vector_base<void*,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
                ((_Vector_base<void*,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
                  *)avStack_1c);
      uStack_4._0_1_ = 1;
    }
    if ((char)uStack_4c < '\0') {
      puStack_24 = &clDataBin::_vbtable__for__clData__;
      puStack_10 = &clDataBin::_vbtable__for__ExtAlloc__vector<char>__;
      clData::clData((clData *)&ppuStack_28,2);
      uStack_4._0_1_ = 10;
      ExtAlloc::vector<char>::vector<char>(avStack_1c);
      ppuStack_28 = &clDataBin::_vftable_;
      uStack_4._0_1_ = 0xb;
      clDataBin::Copy((clDataBin *)&ppuStack_28,(char *)param_12,param_13);
      clDataList::Add(pcVar2,(clDataBin *)&ppuStack_28);
      ppuStack_28 = &clDataBin::_vftable_;
      uStack_4._0_1_ = 0xc;
      _STL::
      _Vector_base<void*,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
      ::
      ~_Vector_base<void*,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
                ((_Vector_base<void*,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
                  *)avStack_1c);
      uStack_4._0_1_ = 1;
    }
    if ((uStack_4c & 0x100) != 0) {
      _param_2 = (clDataList *)(_param_14 & 0xffff);
      clDataList::Add(pcVar2,(int *)&param_2);
    }
    _param_2 = (clDataList *)0x1f;
    clDataList::Add((clDataList *)&ppuStack_40,(int *)&param_2);
    clDataList::Add((clDataList *)&ppuStack_40,pcVar2);
    uVar1 = clConnectElem::SendMessageA
                      (*(clConnectElem **)(local_44 + 0x124),0xd1,(clDataList *)&ppuStack_40);
    uStack_4 = 0xffffffff;
    clDataList::~clDataList((clDataList *)&ppuStack_40);
    ExceptionList = local_c;
    return uVar1;
  }
  ExceptionList = &local_c;
  RegServer_UnInitLobbyServerConnection(this);
  ExceptionList = local_c;
  return '\0';
}




/* from: libgsregserver:RegServerLib.cpp
   addr: 00587A40 */

uchar __thiscall
CRegisterServer::RegServerSend_LobbyServerMemberLeave(CRegisterServer *this,char *param_1)

{
  uchar uVar1;
  clDataList *this_00;
  undefined **local_24;
  undefined4 *local_20;
  undefined4 local_1c;
  undefined **local_18;
  list<class_clData*> local_14 [4];
  undefined8 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c76a1;
  local_c = ExceptionList;
  if ((*(int *)(this + 0x124) != 0) && (this[0x9a] != (CRegisterServer)0x0)) {
    local_20 = &clDataList::_vbtable__for__clData__;
    local_10 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
    local_1c = 3;
    local_24 = &clData::_vftable_;
    local_4 = 0;
    ExceptionList = &local_c;
    ExtAlloc::list<class_clData*>::list<class_clData*>(local_14);
    local_24 = &clDataList::_vftable__for__clData__;
    local_18 = &clDataList::_vftable__for__clPointerList<class_clData*>__;
    local_4 = 1;
    this_00 = (clDataList *)ExtAlloc_Malloc_4(0x18);
    if (this_00 == (clDataList *)0x0) {
      this_00 = (clDataList *)0x0;
    }
    else {
      *(undefined4 **)(this_00 + 4) = &clDataList::_vbtable__for__clData__;
      *(undefined8 **)(this_00 + 0x14) = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
      *(undefined4 *)(this_00 + 8) = 3;
      *(undefined ***)this_00 = &clData::_vftable_;
      local_4 = CONCAT31(local_4._1_3_,3);
      ExtAlloc::list<class_clData*>::list<class_clData*>((list<class_clData*> *)(this_00 + 0x10));
      *(undefined ***)(this_00 + 0xc) = &clPointerList<class_clData*>::_vftable_;
      *(undefined ***)this_00 = &clDataList::_vftable__for__clData__;
      *(undefined ***)(this_00 + 0xc) = &clDataList::_vftable__for__clPointerList<class_clData*>__;
    }
    local_4 = CONCAT31(local_4._1_3_,1);
    clDataList::Add(this_00,param_1);
    param_1 = (char *)0x12e;
    clDataList::Add((clDataList *)&local_24,(int *)&param_1);
    clDataList::Add((clDataList *)&local_24,this_00);
    uVar1 = clConnectElem::SendMessageA
                      (*(clConnectElem **)(this + 0x124),0xd1,(clDataList *)&local_24);
    local_24 = &clDataList::_vftable__for__clData__;
    param_1 = (char *)&local_18;
    local_18 = &clPointerList<class_clData*>::_vftable_;
    local_4._0_1_ = 5;
    local_4._1_3_ = 0;
    clPointerList<class_clRcvElement*>::clear((clPointerList<class_clRcvElement*> *)&local_18);
    local_4 = CONCAT31(local_4._1_3_,4);
    ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
              ((list<class_clRcvElement*> *)local_14);
    ExceptionList = local_c;
    return uVar1;
  }
  ExceptionList = &local_c;
  RegServer_UnInitLobbyServerConnection(this);
  ExceptionList = local_c;
  return '\0';
}




/* from: libgsregserver:RegServerLib.cpp
   addr: 00587BD0 */

uchar __thiscall CRegisterServer::RegServerSend_MatchStart(CRegisterServer *this,uint param_1)

{
  uchar uVar1;
  clDataList *pcVar2;
  clDataList *local_28;
  undefined **local_24;
  undefined4 *local_20;
  undefined4 local_1c;
  undefined **local_18;
  list<class_clData*> local_14 [4];
  undefined8 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c7701;
  local_c = ExceptionList;
  local_28 = (clDataList *)0x0;
  if ((*(int *)(this + 0x124) != 0) && (this[0x9a] != (CRegisterServer)0x0)) {
    local_20 = &clDataList::_vbtable__for__clData__;
    local_10 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
    local_1c = 3;
    local_24 = &clData::_vftable_;
    local_4 = 0;
    ExceptionList = &local_c;
    ExtAlloc::list<class_clData*>::list<class_clData*>(local_14);
    local_24 = &clDataList::_vftable__for__clData__;
    local_18 = &clDataList::_vftable__for__clPointerList<class_clData*>__;
    local_4 = 1;
    pcVar2 = (clDataList *)ExtAlloc_Malloc_4(0x18);
    local_28 = pcVar2;
    if (pcVar2 == (clDataList *)0x0) {
      pcVar2 = (clDataList *)0x0;
    }
    else {
      *(undefined4 **)(pcVar2 + 4) = &clDataList::_vbtable__for__clData__;
      *(undefined8 **)(pcVar2 + 0x14) = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
      *(undefined4 *)(pcVar2 + 8) = 3;
      *(undefined ***)pcVar2 = &clData::_vftable_;
      local_4 = CONCAT31(local_4._1_3_,3);
      ExtAlloc::list<class_clData*>::list<class_clData*>((list<class_clData*> *)(pcVar2 + 0x10));
      *(undefined ***)(pcVar2 + 0xc) = &clPointerList<class_clData*>::_vftable_;
      *(undefined ***)pcVar2 = &clDataList::_vftable__for__clData__;
      *(undefined ***)(pcVar2 + 0xc) = &clDataList::_vftable__for__clPointerList<class_clData*>__;
    }
    local_4 = CONCAT31(local_4._1_3_,1);
    clDataList::Add(pcVar2,(int *)(this + 300));
    clDataList::Add(pcVar2,(int *)&param_1);
    local_28 = (clDataList *)0x11;
    clDataList::Add((clDataList *)&local_24,(int *)&local_28);
    clDataList::Add((clDataList *)&local_24,pcVar2);
    uVar1 = clConnectElem::SendMessageA
                      (*(clConnectElem **)(this + 0x124),0xd1,(clDataList *)&local_24);
    local_24 = &clDataList::_vftable__for__clData__;
    local_28 = (clDataList *)&local_18;
    local_18 = &clPointerList<class_clData*>::_vftable_;
    local_4._0_1_ = 5;
    local_4._1_3_ = 0;
    clPointerList<class_clRcvElement*>::clear((clPointerList<class_clRcvElement*> *)&local_18);
    local_4 = CONCAT31(local_4._1_3_,4);
    ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
              ((list<class_clRcvElement*> *)local_14);
    ExceptionList = local_c;
    return uVar1;
  }
  ExceptionList = &local_c;
  RegServer_UnInitLobbyServerConnection(this);
  ExceptionList = local_c;
  return '\0';
}




/* from: libgsregserver:RegServerLib.cpp
   addr: 00587D60 */

uchar __thiscall CRegisterServer::RegServerSend_MatchFinish(CRegisterServer *this)

{
  uchar uVar1;
  clDataList *pcVar2;
  clDataList *local_28;
  undefined **local_24;
  undefined4 *local_20;
  undefined4 local_1c;
  undefined **local_18;
  list<class_clData*> local_14 [4];
  undefined8 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c7761;
  local_c = ExceptionList;
  local_28 = (clDataList *)0x0;
  if ((*(int *)(this + 0x124) != 0) && (this[0x9a] != (CRegisterServer)0x0)) {
    local_20 = &clDataList::_vbtable__for__clData__;
    local_10 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
    local_1c = 3;
    local_24 = &clData::_vftable_;
    local_4 = 0;
    ExceptionList = &local_c;
    ExtAlloc::list<class_clData*>::list<class_clData*>(local_14);
    local_24 = &clDataList::_vftable__for__clData__;
    local_18 = &clDataList::_vftable__for__clPointerList<class_clData*>__;
    local_4 = 1;
    pcVar2 = (clDataList *)ExtAlloc_Malloc_4(0x18);
    local_28 = pcVar2;
    if (pcVar2 == (clDataList *)0x0) {
      pcVar2 = (clDataList *)0x0;
    }
    else {
      *(undefined4 **)(pcVar2 + 4) = &clDataList::_vbtable__for__clData__;
      *(undefined8 **)(pcVar2 + 0x14) = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
      *(undefined4 *)(pcVar2 + 8) = 3;
      *(undefined ***)pcVar2 = &clData::_vftable_;
      local_4 = CONCAT31(local_4._1_3_,3);
      ExtAlloc::list<class_clData*>::list<class_clData*>((list<class_clData*> *)(pcVar2 + 0x10));
      *(undefined ***)(pcVar2 + 0xc) = &clPointerList<class_clData*>::_vftable_;
      *(undefined ***)pcVar2 = &clDataList::_vftable__for__clData__;
      *(undefined ***)(pcVar2 + 0xc) = &clDataList::_vftable__for__clPointerList<class_clData*>__;
    }
    local_4 = CONCAT31(local_4._1_3_,1);
    clDataList::Add(pcVar2,(int *)(this + 300));
    local_28 = (clDataList *)0x2d;
    clDataList::Add((clDataList *)&local_24,(int *)&local_28);
    clDataList::Add((clDataList *)&local_24,pcVar2);
    uVar1 = clConnectElem::SendMessageA
                      (*(clConnectElem **)(this + 0x124),0xd1,(clDataList *)&local_24);
    local_24 = &clDataList::_vftable__for__clData__;
    local_28 = (clDataList *)&local_18;
    local_18 = &clPointerList<class_clData*>::_vftable_;
    local_4._0_1_ = 5;
    local_4._1_3_ = 0;
    clPointerList<class_clRcvElement*>::clear((clPointerList<class_clRcvElement*> *)&local_18);
    local_4 = CONCAT31(local_4._1_3_,4);
    ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
              ((list<class_clRcvElement*> *)local_14);
    ExceptionList = local_c;
    return uVar1;
  }
  ExceptionList = &local_c;
  RegServer_UnInitLobbyServerConnection(this);
  ExceptionList = local_c;
  return '\0';
}




/* from: libgsregserver:RegServerLib.cpp
   addr: 00587EE0 */

uchar __thiscall CRegisterServer::ManageLobbyServerConnection(CRegisterServer *this)

{
  uchar uVar1;
  
  if ((*(clSRPGSConnect **)(this + 0x124) == (clSRPGSConnect *)0x0) ||
     (this[0x9a] == (CRegisterServer)0x0)) {
    RegServer_UnInitLobbyServerConnection(this);
  }
  else {
    uVar1 = clSRPGSConnect::CheckConnection(*(clSRPGSConnect **)(this + 0x124));
    if (uVar1 != '\0') {
      CheckTheLobbyMessages(this);
      return '\x01';
    }
  }
  return '\0';
}




/* from: libgsregserver:RegServerLib.cpp
   addr: 00587F20 */

void __thiscall CRegisterServer::CheckTheLobbyMessages(CRegisterServer *this)

{
  uchar uVar1;
  undefined4 *puVar2;
  clDataList *pcStack_8;
  uint uStack_4;
  
  puVar2 = (undefined4 *)(**(code **)(**(int **)(this + 0x124) + 0xc))();
  do {
    if (puVar2 == (undefined4 *)0x0) {
      return;
    }
    uVar1 = *(uchar *)((int)puVar2 + 0xd);
    if (uVar1 == 0xd1) {
LAB_00587f5b:
      uVar1 = clDataList::GetIndex((clDataList *)puVar2[5],(ushort *)&uStack_4,0);
      if ((uVar1 != '\0') &&
         (uVar1 = clDataList::GetIndex((clDataList *)puVar2[5],&pcStack_8,1), uVar1 != '\0')) {
        switch(uStack_4 & 0xffff) {
        case 0x26:
        case 0x27:
          ReadLobbySeverAnswer(this,(uchar)uStack_4,pcStack_8);
          break;
        case 0x32:
          RegServerRcv_LobbyServerNewMembers(this,pcStack_8);
          break;
        case 0x33:
          RegServerRcv_LobbyServerMemberLeft(this,pcStack_8);
          break;
        case 0x36:
          RegServerRcv_LobbyServerNewGroup(this,pcStack_8);
          break;
        case 0x39:
          RegServerRcv_LobbyServerGroupConfigUpdate(this,pcStack_8);
          break;
        case 0x42:
          RegServerRcv_LobbyServerMemberUpdateInfo(this,pcStack_8);
          break;
        case 0x45:
          RegServerRcv_LobbyServerMemberUpdateStatus(this,pcStack_8);
        }
      }
    }
    else if ((uVar1 == '\'') || (uVar1 == '&')) {
      ReadLobbySeverAnswer(this,uVar1,(clDataList *)puVar2[5]);
      goto LAB_00587f5b;
    }
    (**(code **)*puVar2)(1);
    puVar2 = (undefined4 *)(**(code **)(**(int **)(this + 0x124) + 0xc))();
  } while( true );
}




/* from: libgsregserver:RegServerLib.cpp
   addr: 00588070 */

void __thiscall
CRegisterServer::ReadLobbySeverAnswer(CRegisterServer *this,uchar param_1,clDataList *param_2)

{
  clDataList *this_00;
  uchar uVar1;
  CRegisterServer *local_4;
  
  this_00 = param_2;
  local_4 = this;
  uVar1 = clDataList::GetIndex(param_2,(ushort *)&local_4,0);
  if (uVar1 != '\0') {
    uVar1 = clDataList::GetIndex(this_00,&param_2,1);
    if (uVar1 == '\0') {
      param_2 = (clDataList *)0x0;
    }
    switch((uint)local_4 & 0xffff) {
    case 0x11:
      RegServerRcv_LobbyServerMatchStartReply(this,param_1,param_2);
      return;
    case 0x1f:
      RegServerRcv_LobbyServerUpdateGroupSettingsResults(this,param_1,param_2);
      return;
    case 0x2d:
      RegServerRcv_LobbyServerMatchFinishReply(this,param_1,param_2);
      break;
    case 0xd2:
      RegServerRcv_LobbyServerLoginResults(this,param_1,param_2);
      return;
    }
  }
  return;
}




/* from: libgsregserver:RegServerLib.cpp
   addr: 00588200 */

void __thiscall
CRegisterServer::RegServerRcv_LobbyServerUpdateGroupSettingsResults
          (CRegisterServer *this,uchar param_1,clDataList *param_2)

{
  uchar uVar1;
  undefined3 in_stack_00000005;
  uint uVar2;
  int local_8;
  int local_4;
  
  local_4 = 0;
  local_8 = 0;
  if (param_2 == (clDataList *)0x0) {
    return;
  }
  if (param_1 == '&') {
    uVar2 = 0;
  }
  else {
    if (param_1 != '\'') goto LAB_00588253;
    uVar1 = clDataList::GetIndex(param_2,&local_4,0);
    if (uVar1 == '\0') {
      return;
    }
    uVar2 = 1;
  }
  uVar1 = clDataList::GetIndex(param_2,&local_8,uVar2);
  if (uVar1 == '\0') {
    return;
  }
LAB_00588253:
  (**(code **)(*(int *)this + 0x18))(_param_1,local_4,local_8);
  return;
}




/* from: libgsregserver:RegServerLib.cpp
   addr: 00588270 */

void __thiscall
CRegisterServer::RegServerRcv_LobbyServerLoginResults
          (CRegisterServer *this,uchar param_1,clDataList *param_2)

{
  clDataList *this_00;
  uchar uVar1;
  undefined3 in_stack_00000005;
  int local_8;
  int local_4;
  
  this_00 = param_2;
  local_4 = 0;
  local_8 = 0;
  if (param_1 == '&') {
    clDataList::GetIndex(param_2,&local_4,0);
    clDataList::GetIndex(this_00,&local_8,1);
    *(int *)(this + 0x128) = local_8;
    (**(code **)(*(int *)this + 0x14))(0x26,0,local_4,local_8);
    return;
  }
  if (param_1 == '\'') {
    uVar1 = clDataList::GetIndex(param_2,(int *)&param_1,0);
    if (uVar1 != '\0') {
      clDataList::GetIndex(this_00,&local_4,1);
      clDataList::GetIndex(this_00,&local_8,2);
      (**(code **)(*(int *)this + 0x14))(0x27,_param_1,local_4,local_8);
    }
  }
  return;
}




/* from: libgsregserver:RegServerLib.cpp
   addr: 00588330 */

void __thiscall
CRegisterServer::RegServerRcv_LobbyServerNewMembers(CRegisterServer *this,clDataList *param_1)

{
  uchar uVar1;
  int iVar2;
  int local_128;
  clDataBin *local_124;
  undefined4 local_120;
  undefined4 local_11c;
  char local_118 [16];
  char local_108 [132];
  char local_84 [132];
  
  iVar2 = 0;
  local_124 = (clDataBin *)0x0;
  local_128 = 0;
  uVar1 = clDataList::GetIndex(param_1,local_118,0,0x10);
  if (uVar1 != '\0') {
    uVar1 = clDataList::GetIndex(param_1,(ushort *)&local_120,1);
    if (uVar1 != '\0') {
      uVar1 = clDataList::GetIndex(param_1,local_84,3,0x81);
      if (uVar1 != '\0') {
        uVar1 = clDataList::GetIndex(param_1,local_108,4,0x81);
        if (uVar1 != '\0') {
          uVar1 = clDataList::GetIndex(param_1,&local_124,5);
          if (uVar1 != '\0') {
            uVar1 = clDataList::GetIndex(param_1,(ushort *)&local_11c,6);
            if (uVar1 != '\0') {
              local_128 = *(int *)(local_124 + 0x10) - *(int *)(local_124 + 0xc);
              if (local_128 != 0) {
                iVar2 = ExtAlloc_Malloc_4(local_128 + 1);
                (**(code **)(*(int *)local_124 + 0x18))(iVar2,&local_128);
                *(undefined1 *)(iVar2 + local_128) = 0;
              }
              (**(code **)(*(int *)this + 0x20))
                        (local_118,local_120,local_84,local_108,iVar2,local_128,local_11c);
              ExtAlloc_Free_4(iVar2);
            }
          }
        }
      }
    }
  }
  return;
}




/* from: libgsregserver:RegServerLib.cpp
   addr: 00588450 */

void __thiscall
CRegisterServer::RegServerRcv_LobbyServerMatchStartReply
          (CRegisterServer *this,uchar param_1,clDataList *param_2)

{
  int iVar1;
  clDataList *this_00;
  uchar uVar2;
  undefined3 in_stack_00000005;
  int local_4;
  
  this_00 = param_2;
  iVar1 = _param_1;
  local_4 = 0;
  if (param_1 == '&') {
    clDataList::GetIndex(param_2,&local_4,0);
    (**(code **)(*(int *)this + 0x24))(iVar1,0,local_4);
  }
  else if (param_1 == '\'') {
    _param_1 = 0;
    uVar2 = clDataList::GetIndex(param_2,(int *)&param_1,0);
    if (uVar2 != '\0') {
      clDataList::GetIndex(this_00,&local_4,1);
      (**(code **)(*(int *)this + 0x24))(iVar1,_param_1,local_4);
      return;
    }
  }
  return;
}




/* from: libgsregserver:RegServerLib.cpp
   addr: 005884E0 */

void __thiscall
CRegisterServer::RegServerRcv_LobbyServerMemberLeft(CRegisterServer *this,clDataList *param_1)

{
  uchar uVar1;
  char local_10 [16];
  
  uVar1 = clDataList::GetIndex(param_1,local_10,0,0x10);
  if (uVar1 != '\0') {
    (**(code **)(*(int *)this + 0x28))(local_10);
  }
  return;
}




/* from: libgsregserver:RegServerLib.cpp
   addr: 00588510 */

void __thiscall
CRegisterServer::RegServerRcv_LobbyServerMatchFinishReply
          (CRegisterServer *this,uchar param_1,clDataList *param_2)

{
  clDataList *this_00;
  uchar uVar1;
  undefined3 in_stack_00000005;
  int local_4;
  
  this_00 = param_2;
  local_4 = 0;
  if (param_1 == '&') {
    clDataList::GetIndex(param_2,&local_4,0);
    (**(code **)(*(int *)this + 0x2c))(0x26,0,local_4);
    return;
  }
  if (param_1 == '\'') {
    _param_1 = 0;
    uVar1 = clDataList::GetIndex(param_2,(int *)&param_1,0);
    if (uVar1 != '\0') {
      clDataList::GetIndex(this_00,&local_4,1);
      (**(code **)(*(int *)this + 0x2c))(0x27,_param_1,local_4);
    }
  }
  return;
}




/* from: libgsregserver:RegServerLib.cpp
   addr: 00588590 */

void __thiscall
CRegisterServer::RegServerRcv_LobbyServerGroupConfigUpdate
          (CRegisterServer *this,clDataList *param_1)

{
  clDataList *this_00;
  uchar uVar1;
  CRegisterServer *local_4;
  
  this_00 = param_1;
  local_4 = this;
  clDataList::GetIndex(param_1,(int *)&param_1,0);
  uVar1 = clDataList::GetIndex(this_00,(uint *)&local_4,1);
  if (uVar1 != '\0') {
    (**(code **)(*(int *)this + 0x30))(local_4,param_1);
  }
  return;
}




/* from: libgsregserver:RegServerLib.cpp
   addr: 005885D0 */

void __thiscall
CRegisterServer::RegServerRcv_LobbyServerMemberUpdateStatus
          (CRegisterServer *this,clDataList *param_1)

{
  clDataList *this_00;
  uchar uVar1;
  char local_10 [16];
  
  this_00 = param_1;
  uVar1 = clDataList::GetIndex(param_1,local_10,0);
  if (uVar1 != '\0') {
    uVar1 = clDataList::GetIndex(this_00,(ushort *)&param_1,1);
    if (uVar1 != '\0') {
      (**(code **)(*(int *)this + 0x34))(local_10,param_1);
    }
  }
  return;
}




/* from: libgsregserver:RegServerLib.cpp
   addr: 00588620 */

void __thiscall
CRegisterServer::RegServerRcv_LobbyServerNewGroup(CRegisterServer *this,clDataList *param_1)

{
  byte bVar1;
  uchar uVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  bool bVar7;
  int local_204;
  clDataBin *local_200;
  int local_1fc;
  int local_1f8;
  uint local_1f4;
  undefined4 local_1f0;
  uint local_1ec;
  CRegisterServer *local_1e8;
  uint local_1e4;
  int local_1e0;
  int local_1dc;
  uint local_1d8;
  undefined4 local_1d4;
  uint local_1d0;
  char local_1cc [16];
  char local_1bc [36];
  char local_198 [36];
  char local_174 [36];
  char local_150 [36];
  char local_12c [36];
  byte local_108 [132];
  char local_84 [132];
  
  iVar5 = 0;
  local_200 = (clDataBin *)0x0;
  local_204 = 0;
  local_1e8 = this;
  uVar2 = clDataList::GetIndex(param_1,(ushort *)&local_1f0,0);
  if (uVar2 != '\0') {
    uVar2 = clDataList::GetIndex(param_1,local_174,1);
    if (uVar2 != '\0') {
      uVar2 = clDataList::GetIndex(param_1,&local_1f8,2);
      if (uVar2 != '\0') {
        uVar2 = clDataList::GetIndex(param_1,&local_1e0,3);
        if (uVar2 != '\0') {
          uVar2 = clDataList::GetIndex(param_1,&local_1fc,4);
          if (uVar2 != '\0') {
            uVar2 = clDataList::GetIndex(param_1,&local_1dc,5);
            if (uVar2 != '\0') {
              uVar2 = clDataList::GetIndex(param_1,(short *)&local_1d4,6);
              if (uVar2 != '\0') {
                uVar2 = clDataList::GetIndex(param_1,local_1cc,7);
                if (uVar2 != '\0') {
                  uVar2 = clDataList::GetIndex(param_1,local_1bc,8);
                  if (uVar2 != '\0') {
                    uVar2 = clDataList::GetIndex(param_1,local_150,9);
                    if (uVar2 != '\0') {
                      uVar2 = clDataList::GetIndex(param_1,&local_200,10);
                      if (uVar2 != '\0') {
                        uVar2 = clDataList::GetIndex(param_1,&local_1e4,0xb);
                        if (uVar2 != '\0') {
                          uVar2 = clDataList::GetIndex(param_1,&local_1d0,0xc);
                          if (uVar2 != '\0') {
                            uVar2 = clDataList::GetIndex(param_1,&local_1ec,0xd);
                            if (uVar2 != '\0') {
                              uVar2 = clDataList::GetIndex(param_1,&local_1d8,0xe);
                              if (uVar2 != '\0') {
                                uVar2 = clDataList::GetIndex(param_1,&local_1f4,0xf);
                                if (uVar2 != '\0') {
                                  uVar2 = clDataList::GetIndex(param_1,local_12c,0x10);
                                  if (uVar2 != '\0') {
                                    uVar2 = clDataList::GetIndex(param_1,local_198,0x11);
                                    if (uVar2 != '\0') {
                                      uVar2 = clDataList::GetIndex(param_1,local_84,0x12);
                                      if (uVar2 != '\0') {
                                        uVar2 = clDataList::GetIndex(param_1,(char *)local_108,0x13)
                                        ;
                                        if (uVar2 != '\0') {
                                          local_204 = *(int *)(local_200 + 0x10) -
                                                      *(int *)(local_200 + 0xc);
                                          if (local_204 != 0) {
                                            iVar5 = ExtAlloc_Malloc_4(local_204 + 1);
                                            (**(code **)(*(int *)local_200 + 0x18))
                                                      (iVar5,&local_204);
                                            *(undefined1 *)(local_204 + iVar5) = 0;
                                          }
                                          pcVar6 = s_;
                                          pbVar3 = local_108;
                                          do {
                                            bVar1 = *pbVar3;
                                            bVar7 = bVar1 < (byte)*pcVar6;
                                            if (bVar1 != *pcVar6) {
LAB_0058886e:
                                              iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
                                              goto LAB_00588873;
                                            }
                                            if (bVar1 == 0) break;
                                            bVar1 = pbVar3[1];
                                            bVar7 = bVar1 < ((byte *)pcVar6)[1];
                                            if (bVar1 != ((byte *)pcVar6)[1]) goto LAB_0058886e;
                                            pbVar3 = pbVar3 + 2;
                                            pcVar6 = (char *)((byte *)pcVar6 + 2);
                                          } while (bVar1 != 0);
                                          iVar4 = 0;
LAB_00588873:
                                          if (iVar4 == 0) {
                                            strncpy((char *)local_108,local_84,0x81);
                                          }
                                          (**(code **)(*(int *)local_1e8 + 0x38))
                                                    (local_1f0,local_174,local_1f8,local_1e0,
                                                     local_1fc,local_1dc,local_1d4,local_1cc,
                                                     local_1bc,local_150,iVar5,local_204,local_1e4,
                                                     local_1d0,local_1ec,local_1d8,local_1f4,
                                                     local_12c,local_198,local_84,local_108);
                                          ExtAlloc_Free_4(iVar5);
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}




/* from: libgsregserver:RegServerLib.cpp
   addr: 00588930 */

void __thiscall
CRegisterServer::RegServerRcv_LobbyServerMemberUpdateInfo(CRegisterServer *this,clDataList *param_1)

{
  clDataList *this_00;
  uchar uVar1;
  int iVar2;
  clDataBin *local_14;
  char local_10 [16];
  
  this_00 = param_1;
  iVar2 = 0;
  uVar1 = clDataList::GetIndex(param_1,local_10,0,0x10);
  if (uVar1 != '\0') {
    uVar1 = clDataList::GetIndex(this_00,&local_14,1);
    if (uVar1 != '\0') {
      param_1 = (clDataList *)(*(int *)(local_14 + 0x10) - *(int *)(local_14 + 0xc));
      if (param_1 != (clDataList *)0x0) {
        iVar2 = ExtAlloc_Malloc_4(param_1 + 1);
        (**(code **)(*(int *)local_14 + 0x18))(iVar2,&param_1);
        param_1[iVar2] = (clDataList)0x0;
      }
      (**(code **)(*(int *)this + 0x3c))(local_10,iVar2,param_1);
      ExtAlloc_Free_4(iVar2);
    }
  }
  return;
}




/* from: libgsregserver:RegServerLib.cpp
   addr: 005889C0 */

void __thiscall ExtAlloc::vector<char>::vector<char>(vector<char> *this)

{
  int in_stack_00000004;
  
  if (in_stack_00000004 != 0) {
    *(undefined8 **)(this + 0xc) = &_vbtable_;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  return;
}




/* from: libgsregserver:RegServerLib.cpp
   addr: 005889F0 */

void __thiscall clData::clData(clData *this,eKindOf param_1)

{
  int in_stack_00000008;
  
  if (in_stack_00000008 != 0) {
    *(undefined8 **)(this + 4) = &_vbtable_;
  }
  *(undefined ***)this = &_vftable_;
  *(eKindOf *)(this + 8) = param_1;
  return;
}




/* from: libgsregserver:RegServerLib.cpp
   addr: 00588A30
   addr: 00588A30 */

void * __thiscall clData::_vector_deleting_destructor_(clData *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  if ((param_1 & 1) != 0) {
    ExtAlloc_Free_4(this);
  }
  return this;
}




/* from: libgsregserver:RegServerLib.cpp
   addr: 00588A50
   addr: 00588A50 */

void __thiscall
clPointerList<class_clGameMessage*>::pop_front(clPointerList<class_clGameMessage*> *this)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = *(int **)(this + 4);
  if ((int *)*piVar1 != piVar1) {
    if (*(undefined4 **)(*piVar1 + 8) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(*piVar1 + 8))(1);
    }
    piVar1 = (int *)**(int **)(this + 4);
    piVar2 = (int *)piVar1[1];
    iVar3 = *piVar1;
    *piVar2 = iVar3;
    *(int **)(iVar3 + 4) = piVar2;
    ExtAlloc_Free_4(piVar1);
  }
  return;
}




/* from: libgsregserver:RegServerLib.cpp
   addr: 00588A80
   addr: 00588A80 */

void __thiscall
clPointerList<class_clGameMessage*>::pop_back(clPointerList<class_clGameMessage*> *this)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  _List_iterator<class_clGameMessage*,struct__STL::_Nonconst_traits<class_clGameMessage*>_> *p_Var4;
  clPointerList<class_clGameMessage*> *local_4;
  
  piVar1 = *(int **)(this + 4);
  if ((int *)*piVar1 != piVar1) {
    if (*(undefined4 **)(piVar1[1] + 8) != (undefined4 *)0x0) {
      local_4 = this;
      (**(code **)**(undefined4 **)(piVar1[1] + 8))(1);
    }
    local_4 = *(clPointerList<class_clGameMessage*> **)(this + 4);
    p_Var4 = _STL::
             _List_iterator<class_clGameMessage*,struct__STL::_Nonconst_traits<class_clGameMessage*>_>
             ::operator--((_List_iterator<class_clGameMessage*,struct__STL::_Nonconst_traits<class_clGameMessage*>_>
                           *)&local_4);
    piVar1 = *(int **)p_Var4;
    piVar2 = (int *)piVar1[1];
    iVar3 = *piVar1;
    *piVar2 = iVar3;
    *(int **)(iVar3 + 4) = piVar2;
    ExtAlloc_Free_4(piVar1);
  }
  return;
}




/* from: libgsregserver:RegServerLib.cpp
   addr: 00588AC0
   addr: 00588AC0 */

void __thiscall
clPointerList<class_clData*>::erase(clPointerList<class_clData*> *this,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  
  if ((param_3 != *(int **)(this + 4)) && ((undefined4 *)param_3[2] != (undefined4 *)0x0)) {
    (*(code *)**(undefined4 **)param_3[2])(1);
  }
  piVar1 = (int *)param_3[1];
  iVar2 = *param_3;
  *piVar1 = iVar2;
  *(int **)(iVar2 + 4) = piVar1;
  ExtAlloc_Free_4(param_3);
  *param_2 = iVar2;
  return;
}




/* from: libgsregserver:RegServerLib.cpp
   addr: 00588B00 */

list<class_clData*> * __thiscall
ExtAlloc::list<class_clData*>::list<class_clData*>(list<class_clData*> *this)

{
  int iVar1;
  int in_stack_00000004;
  
  if (in_stack_00000004 != 0) {
    *(undefined8 **)(this + 4) = &_vbtable_;
  }
  *(undefined4 *)this = 0;
  iVar1 = ExtAlloc_Malloc_4(0xc);
  *(int *)iVar1 = iVar1;
  *(int *)(iVar1 + 4) = iVar1;
  *(int *)this = iVar1;
  return this;
}




/* from: libgsregserver:RegServerLib.cpp
   addr: 00588B40 */

void __thiscall clDataBin::~clDataBin(clDataBin *this)

{
  *(undefined ***)this = &_vftable_;
  if (*(int *)(this + 0xc) != 0) {
    ExtAlloc_Free_4(*(int *)(this + 0xc));
  }
  *(undefined ***)this = &clData::_vftable_;
  return;
}




/* from: libgsregserver:RegServerLib.cpp
   addr: 00588B60
   addr: 00588B60 */

void * __thiscall clDataBin::_vector_deleting_destructor_(clDataBin *this,uint param_1)

{
  ~clDataBin(this);
  if ((param_1 & 1) != 0) {
    ExtAlloc_Free_4(this);
  }
  return this;
}




/* from: libgsregserver:RegServerLib.cpp
   addr: 00588B90 */

void __thiscall clDataList::~clDataList(clDataList *this)

{
  clDataList *pcVar1;
  list<class_clRcvElement*,class_ExtAlloc::Allocator<class_clRcvElement*>_> *this_00;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined1 local_10 [4];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c779f;
  pvStack_c = ExceptionList;
  pcVar1 = this + 0xc;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = &_vftable__for__clData__;
  *(undefined ***)pcVar1 = &_vftable__for__clPointerList<class_clData*>__;
  *(undefined ***)pcVar1 = &clPointerList<class_clData*>::_vftable_;
  this_00 = (list<class_clRcvElement*,class_ExtAlloc::Allocator<class_clRcvElement*>_> *)
            (this + 0x10);
  iVar2 = *(int *)pcVar1;
  local_4 = 1;
  _STL::list<class_clRcvElement*,class_ExtAlloc::Allocator<class_clRcvElement*>_>::begin(this_00);
  (**(code **)(iVar2 + 0x10))(local_10);
  piVar4 = (int *)**(int **)this_00;
  if (piVar4 != *(int **)this_00) {
    do {
      piVar3 = (int *)*piVar4;
      ExtAlloc_Free_4(piVar4);
      piVar4 = piVar3;
    } while (piVar3 != (int *)*(int *)this_00);
  }
  *(undefined4 *)*(undefined4 *)this_00 = *(undefined4 *)this_00;
  *(int *)(*(int *)this_00 + 4) = *(int *)this_00;
  ExtAlloc_Free_4(*(undefined4 *)this_00);
  *(undefined ***)this = &clData::_vftable_;
  ExceptionList = this;
  return;
}




/* from: libgsregserver:RegServerLib.cpp
   addr: 00588C40
   addr: 00588C40 */

void * __thiscall clDataList::_vector_deleting_destructor_(clDataList *this,uint param_1)

{
  ~clDataList(this);
  if ((param_1 & 1) != 0) {
    ExtAlloc_Free_4(this);
  }
  return this;
}




/* from: libgsregserver:RegServerLib.cpp
   addr: 00588C60 */

clPointerList<class_clData*> * __thiscall
clPointerList<class_clData*>::clPointerList<class_clData*>(clPointerList<class_clData*> *this)

{
  int iVar1;
  int in_stack_00000004;
  
  if (in_stack_00000004 != 0) {
    *(undefined8 **)(this + 8) = &_vbtable_;
  }
  *(undefined4 *)(this + 4) = 0;
  iVar1 = ExtAlloc_Malloc_4(0xc);
  *(int *)iVar1 = iVar1;
  *(int *)(iVar1 + 4) = iVar1;
  *(int *)(this + 4) = iVar1;
  *(undefined ***)this = &_vftable_;
  return this;
}




/* from: libgsregserver:RegServerLib.cpp
   addr: 00588CB0
   addr: 00588CB0 */

void * __thiscall
clPointerList<class_clData*>::_scalar_deleting_destructor_
          (clPointerList<class_clData*> *this,uint param_1)

{
  ~clPointerList<class_clData*>(this);
  if ((param_1 & 1) != 0) {
    ExtAlloc_Free_4(this);
  }
  return this;
}




/* from: libgsregserver:RegServerLib.cpp
   addr: 00588CD0 */

void __thiscall
clPointerList<class_clData*>::~clPointerList<class_clData*>(clPointerList<class_clData*> *this)

{
  list<class_clRcvElement*,class_ExtAlloc::Allocator<class_clRcvElement*>_> *this_00;
  int iVar1;
  int *piVar2;
  void *unaff_EBX;
  int *piVar3;
  undefined1 local_10 [4];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c77d7;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = &_vftable_;
  this_00 = (list<class_clRcvElement*,class_ExtAlloc::Allocator<class_clRcvElement*>_> *)(this + 4);
  iVar1 = *(int *)this;
  local_4 = 0;
  _STL::list<class_clRcvElement*,class_ExtAlloc::Allocator<class_clRcvElement*>_>::begin(this_00);
  (**(code **)(iVar1 + 0x10))(local_10);
  piVar3 = (int *)**(int **)this_00;
  if (piVar3 != *(int **)this_00) {
    do {
      piVar2 = (int *)*piVar3;
      ExtAlloc_Free_4(piVar3);
      piVar3 = piVar2;
    } while (piVar2 != (int *)*(int *)this_00);
  }
  *(undefined4 *)*(undefined4 *)this_00 = *(undefined4 *)this_00;
  *(int *)(*(int *)this_00 + 4) = *(int *)this_00;
  ExtAlloc_Free_4(*(undefined4 *)this_00);
  ExceptionList = unaff_EBX;
  return;
}




/* from: libgsregserver:RegServerLib.cpp
   addr: 00588D70
   addr: 00588D70
   addr: 00588D70
   addr: 00588D70
   addr: 00588D70
   addr: 00588D70
   addr: 00588D70
   addr: 00588D70 */

void __thiscall
_STL::_List_base<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_>::clear
          (_List_base<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_> *this)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = (int *)**(int **)this;
  if (piVar2 != *(int **)this) {
    do {
      piVar1 = (int *)*piVar2;
      ExtAlloc_Free_4(piVar2);
      piVar2 = piVar1;
    } while (piVar1 != (int *)*(int *)this);
  }
  *(undefined4 *)*(undefined4 *)this = *(undefined4 *)this;
  *(int *)(*(int *)this + 4) = *(int *)this;
  return;
}

