
/* from: libgsclient:GSClientLIB.cpp
   addr: 0059DEA0 */

CGLClientLIB * __thiscall CGLClientLIB::CGLClientLIB(CGLClientLIB *this)

{
  CMsgQueue *this_00;
  undefined4 uVar1;
  undefined4 *puVar2;
  clLoginCB *this_01;
  clFriendsCB *this_02;
  clSessionCB *this_03;
  CGSLobbyLib *this_04;
  CGSProxyLib *this_05;
  int iVar3;
  CGLClientLIB *pCVar4;
  int in_stack_00000004;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c8f92;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (in_stack_00000004 != 0) {
    ExceptionList = &local_c;
    *(undefined1 **)this = &_vbtable_;
    local_4 = 0;
  }
  CMsgQueue::CMsgQueue((CMsgQueue *)(this + 0x16c));
  local_4 = 1;
  CMsgQueue::CMsgQueue((CMsgQueue *)(this + 0x180));
  local_4._0_1_ = 2;
  CMsgQueue::CMsgQueue((CMsgQueue *)(this + 0x194));
  local_4._0_1_ = 3;
  CMsgQueue::CMsgQueue((CMsgQueue *)(this + 0x1a8));
  *(undefined4 *)(this + 0x14c) = 0;
  this[0x149] = (CGLClientLIB)0x0;
  this[0x148] = (CGLClientLIB)0x0;
  this[0x14a] = (CGLClientLIB)0x0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  pCVar4 = this + 0x46;
  for (iVar3 = 0x20; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)pCVar4 = 0;
    pCVar4 = pCVar4 + 4;
  }
  *pCVar4 = (CGLClientLIB)0x0;
  pCVar4 = this + 199;
  for (iVar3 = 0x20; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)pCVar4 = 0;
    pCVar4 = pCVar4 + 4;
  }
  *pCVar4 = (CGLClientLIB)0x0;
  this_00 = (CMsgQueue *)ExtAlloc_Malloc_4(0x14);
  local_4._0_1_ = 5;
  if (this_00 == (CMsgQueue *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = CMsgQueue::CMsgQueue(this_00);
  }
  *(undefined4 *)(this + 0x168) = uVar1;
  puVar2 = (undefined4 *)ExtAlloc_Malloc_4(0x18);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CGLLoginLib::_vbtable_;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    this_01 = (clLoginCB *)ExtAlloc_Malloc_4(0x30);
    local_4 = 8;
    if (this_01 == (clLoginCB *)0x0) {
      *(undefined1 *)(puVar2 + 5) = 0;
      puVar2[4] = 0;
      local_4._0_1_ = 6;
      local_4._1_3_ = 0;
    }
    else {
      uVar1 = clLoginCB::clLoginCB(this_01);
      puVar2[4] = uVar1;
      *(undefined1 *)(puVar2 + 5) = 0;
      local_4._0_1_ = 6;
      local_4._1_3_ = 0;
    }
  }
  *(undefined4 **)(this + 0x150) = puVar2;
  puVar2 = (undefined4 *)ExtAlloc_Malloc_4(0x18);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CGLFriendsLib::_vbtable_;
    puVar2[1] = 0;
    puVar2[2] = 0;
    this_02 = (clFriendsCB *)ExtAlloc_Malloc_4(0x48);
    local_4 = 0xb;
    if (this_02 == (clFriendsCB *)0x0) {
      *(undefined1 *)(puVar2 + 5) = 0;
      puVar2[4] = 0;
      local_4._0_1_ = 9;
      local_4._1_3_ = 0;
    }
    else {
      uVar1 = clFriendsCB::clFriendsCB(this_02);
      puVar2[4] = uVar1;
      *(undefined1 *)(puVar2 + 5) = 0;
      local_4._0_1_ = 9;
      local_4._1_3_ = 0;
    }
  }
  *(undefined4 **)(this + 0x154) = puVar2;
  puVar2 = (undefined4 *)ExtAlloc_Malloc_4(0x30);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &CGLSessionLib::_vbtable_;
    puVar2[0xb] = &clPointerMap<int,class_clGameResult*>::_vbtable_;
    local_4 = 0xe;
    ExtAlloc::map<int,class_clGameResult*,struct__STL::less<int>_>::
    map<int,class_clGameResult*,struct__STL::less<int>_>
              ((map<int,class_clGameResult*,struct__STL::less<int>_> *)(puVar2 + 8));
    puVar2[7] = &clPointerMap<int,class_clGameResult*>::_vftable_;
    local_4 = 0xf;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    this_03 = (clSessionCB *)ExtAlloc_Malloc_4(0x78);
    local_4._0_1_ = 0x10;
    if (this_03 == (clSessionCB *)0x0) {
      *(undefined1 *)(puVar2 + 5) = 0;
      puVar2[4] = 0;
      *(undefined1 *)((int)puVar2 + 0x15) = 0;
      *(undefined1 *)((int)puVar2 + 0x16) = 1;
    }
    else {
      uVar1 = clSessionCB::clSessionCB(this_03);
      puVar2[4] = uVar1;
      *(undefined1 *)(puVar2 + 5) = 0;
      *(undefined1 *)((int)puVar2 + 0x15) = 0;
      *(undefined1 *)((int)puVar2 + 0x16) = 1;
    }
  }
  *(undefined4 **)(this + 0x158) = puVar2;
  this_04 = (CGSLobbyLib *)ExtAlloc_Malloc_4(0x34);
  local_4._0_1_ = 0x11;
  if (this_04 == (CGSLobbyLib *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = CGSLobbyLib::CGSLobbyLib(this_04);
  }
  *(undefined4 *)(this + 0x15c) = uVar1;
  local_4._0_1_ = 4;
  *(undefined4 *)(this + 0x164) = 0;
  GetNetInterface((char *)(this + 0x46),(char *)(this + 199),0,0);
  this_05 = (CGSProxyLib *)ExtAlloc_Malloc_4(0x20);
  local_4 = CONCAT31(local_4._1_3_,0x12);
  if (this_05 == (CGSProxyLib *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = CGSProxyLib::CGSProxyLib(this_05);
  }
  *(undefined4 *)(this + 0x160) = uVar1;
  puVar2 = (undefined4 *)ExtAlloc_Malloc_4(8);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2[1] = &CProxyHandler::_vbtable_;
    *puVar2 = &CProxyHandler::_vftable_;
  }
  *(undefined4 **)(this + 0x1c4) = puVar2;
  g_pGSClientClass = this;
  *(undefined4 *)(this + 0x1bc) = 0;
  *(undefined4 *)(this + 0x1c0) = 0;
  this[0x14b] = (CGLClientLIB)0x0;
  ExceptionList = local_c;
  return this;
}




/* from: libgsclient:GSClientLIB.cpp
   addr: 0059E1F0 */

void __thiscall CGLClientLIB::~CGLClientLIB(CGLClientLIB *this)

{
  CConnection *this_00;
  CGLFriendsLib *pCVar1;
  CGLSessionLib *this_01;
  CGSLobbyLib *this_02;
  CGSProxyLib *this_03;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_005c8fd8;
  pvStack_c = ExceptionList;
  this_00 = *(CConnection **)(this + 0x14c);
  local_4 = 3;
  ExceptionList = &pvStack_c;
  if (this_00 != (CConnection *)0x0) {
    ExceptionList = &pvStack_c;
    CConnection::~CConnection(this_00);
    ExtAlloc_Free_4(this_00);
    *(undefined4 *)(this + 0x14c) = 0;
  }
  if (*(undefined4 **)(this + 0x168) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x168))(1);
    *(undefined4 *)(this + 0x168) = 0;
  }
  pCVar1 = *(CGLFriendsLib **)(this + 0x150);
  if (pCVar1 != (CGLFriendsLib *)0x0) {
    CGLFriendsLib::~CGLFriendsLib(pCVar1);
    ExtAlloc_Free_4(pCVar1);
    *(undefined4 *)(this + 0x150) = 0;
  }
  pCVar1 = *(CGLFriendsLib **)(this + 0x154);
  if (pCVar1 != (CGLFriendsLib *)0x0) {
    CGLFriendsLib::~CGLFriendsLib(pCVar1);
    ExtAlloc_Free_4(pCVar1);
    *(undefined4 *)(this + 0x154) = 0;
  }
  this_01 = *(CGLSessionLib **)(this + 0x158);
  if (this_01 != (CGLSessionLib *)0x0) {
    CGLSessionLib::~CGLSessionLib(this_01);
    ExtAlloc_Free_4(this_01);
    *(undefined4 *)(this + 0x158) = 0;
  }
  this_02 = *(CGSLobbyLib **)(this + 0x15c);
  if (this_02 != (CGSLobbyLib *)0x0) {
    CGSLobbyLib::~CGSLobbyLib(this_02);
    ExtAlloc_Free_4(this_02);
    *(undefined4 *)(this + 0x15c) = 0;
  }
  if (*(undefined4 **)(this + 0x164) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x164))(1);
    *(undefined4 *)(this + 0x164) = 0;
  }
  if (*(undefined4 **)(this + 0x1c4) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x1c4))(1);
    *(undefined4 *)(this + 0x1c4) = 0;
  }
  this_03 = *(CGSProxyLib **)(this + 0x160);
  if (this_03 != (CGSProxyLib *)0x0) {
    CGSProxyLib::~CGSProxyLib(this_03);
    ExtAlloc_Free_4(this_03);
    *(undefined4 *)(this + 0x160) = 0;
  }
  local_4._0_1_ = 2;
  CMsgQueue::~CMsgQueue((CMsgQueue *)(this + 0x1a8));
  local_4._0_1_ = 1;
  CMsgQueue::~CMsgQueue((CMsgQueue *)(this + 0x194));
  local_4 = (uint)local_4._1_3_ << 8;
  CMsgQueue::~CMsgQueue((CMsgQueue *)(this + 0x180));
  local_4 = 0xffffffff;
  CMsgQueue::~CMsgQueue((CMsgQueue *)(this + 0x16c));
  ExceptionList = pvStack_c;
  return;
}




/* from: libgsclient:GSClientLIB.cpp
   addr: 0059E360 */

void __thiscall
CProxyHandler::HandleMessage
          (CProxyHandler *this,ushort param_1,ushort param_2,uint param_3,clDataList *param_4)

{
  clDataList *this_00;
  CCurMessage *pCVar1;
  uint local_58;
  undefined **local_54;
  undefined4 *local_50;
  undefined **local_48 [2];
  undefined8 *local_40;
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
  undefined4 local_4;
  
  puStack_8 = &LAB_005c9042;
  local_c = ExceptionList;
  local_58 = 0;
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
  local_50 = &clDataList::_vbtable__for__clData__;
  local_40 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
  clData::clData((clData *)&local_54,3);
  local_4._0_1_ = 2;
  clPointerList<class_clData*>::clPointerList<class_clData*>
            ((clPointerList<class_clData*> *)local_48);
  local_54 = &clDataList::_vftable__for__clData__;
  local_48[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_4._0_1_ = 3;
  local_38 = &clDataList::_vbtable__for__clData__;
  local_28 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
  clData::clData((clData *)&local_3c,3);
  local_4._0_1_ = 4;
  clPointerList<class_clData*>::clPointerList<class_clData*>
            ((clPointerList<class_clData*> *)local_30);
  this_00 = param_4;
  local_3c = &clDataList::_vftable__for__clData__;
  local_30[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_4._0_1_ = 5;
  clDataList::GetIndex(param_4,(uchar *)&local_58,0);
  if (((char)local_58 == '&') || ((char)local_58 == '\'')) {
    clDataList::GetIndex(this_00,(clDataList *)&local_3c,1);
    clDataList::Add((clDataList *)&local_3c,(int *)&param_3);
    param_4 = (clDataList *)(uint)param_2;
    clDataList::Add((clDataList *)&local_24,(int *)&param_4);
    clDataList::Add((clDataList *)&local_24,(clDataList *)&local_3c);
    param_4 = (clDataList *)(local_58 & 0xff);
    clDataList::Add((clDataList *)&local_54,(int *)&param_4);
    clDataList::Add((clDataList *)&local_54,(clDataList *)&local_24);
    pCVar1 = (CCurMessage *)ExtAlloc_Malloc_4(0x1c);
    local_4._0_1_ = 7;
    if (pCVar1 == (CCurMessage *)0x0) {
      pCVar1 = (CCurMessage *)0x0;
    }
    else {
      pCVar1 = (CCurMessage *)CCurMessage::CCurMessage(pCVar1,0xcc,(clDataList *)&local_54,0);
    }
    local_4._0_1_ = 5;
    CGLClientLIB::GSAddMessageToProxyQueue(g_pGSClientClass,pCVar1);
    local_3c = &clDataList::_vftable__for__clData__;
    local_30[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
    local_4._0_1_ = 8;
    clPointerList<class_clData*>::~clPointerList<class_clData*>
              ((clPointerList<class_clData*> *)local_30);
    local_54 = &clDataList::_vftable__for__clData__;
    local_3c = &clData::_vftable_;
    local_48[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
    local_4 = CONCAT31(local_4._1_3_,9);
    clPointerList<class_clData*>::~clPointerList<class_clData*>
              ((clPointerList<class_clData*> *)local_48);
  }
  else {
    local_4._0_1_ = 3;
    clDataList::~clDataList((clDataList *)&local_3c);
    local_54 = &clDataList::_vftable__for__clData__;
    local_48[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
    local_4 = CONCAT31(local_4._1_3_,6);
    clPointerList<class_clData*>::~clPointerList<class_clData*>
              ((clPointerList<class_clData*> *)local_48);
  }
  local_54 = &clData::_vftable_;
  local_4 = 0xffffffff;
  clDataList::~clDataList((clDataList *)&local_24);
  ExceptionList = local_c;
  return;
}




/* from: libgsclient:GSClientLIB.cpp
   addr: 0059E590 */

void __thiscall
CProxyHandler::ReceivedLogin(CProxyHandler *this,ushort param_1,ushort param_2,clDataList *param_3)

{
  uint uVar1;
  clDataList *pcVar2;
  CCurMessage *pCVar3;
  undefined2 in_stack_0000000a;
  undefined **local_54;
  undefined4 *local_50;
  undefined **local_48 [2];
  undefined8 *local_40;
  undefined **local_3c;
  undefined4 *local_38;
  undefined4 local_34;
  undefined **local_30 [2];
  undefined8 *local_28;
  undefined **local_24;
  undefined4 *local_20;
  undefined **local_18 [2];
  undefined8 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c90a2;
  local_c = ExceptionList;
  local_38 = &clDataList::_vbtable__for__clData__;
  local_28 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
  local_34 = 3;
  local_3c = &clData::_vftable_;
  local_4 = 0;
  ExceptionList = &local_c;
  clPointerList<class_clData*>::clPointerList<class_clData*>
            ((clPointerList<class_clData*> *)local_30);
  local_3c = &clDataList::_vftable__for__clData__;
  local_30[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_4 = 1;
  local_50 = &clDataList::_vbtable__for__clData__;
  local_40 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
  clData::clData((clData *)&local_54,3);
  local_4._0_1_ = 2;
  clPointerList<class_clData*>::clPointerList<class_clData*>
            ((clPointerList<class_clData*> *)local_48);
  local_54 = &clDataList::_vftable__for__clData__;
  local_48[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_4._0_1_ = 3;
  local_20 = &clDataList::_vbtable__for__clData__;
  local_10 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
  clData::clData((clData *)&local_24,3);
  local_4._0_1_ = 4;
  clPointerList<class_clData*>::clPointerList<class_clData*>
            ((clPointerList<class_clData*> *)local_18);
  pcVar2 = param_3;
  uVar1 = _param_2;
  local_24 = &clDataList::_vftable__for__clData__;
  local_18[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_4._0_1_ = 5;
  if (((short)_param_2 == 0x26) || ((short)_param_2 == 0x27)) {
    _param_2 = (uint)param_1;
    clDataList::Add(param_3,(int *)&param_2);
    _param_2 = 0x66;
    clDataList::Add((clDataList *)&local_3c,(int *)&param_2);
    clDataList::Add((clDataList *)&local_3c,pcVar2);
    _param_2 = uVar1 & 0xffff;
    clDataList::Add((clDataList *)&local_54,(int *)&param_2);
    clDataList::Add((clDataList *)&local_54,(clDataList *)&local_3c);
    pCVar3 = (CCurMessage *)ExtAlloc_Malloc_4(0x1c);
    local_4._0_1_ = 7;
    if (pCVar3 == (CCurMessage *)0x0) {
      pCVar3 = (CCurMessage *)0x0;
    }
    else {
      pCVar3 = (CCurMessage *)CCurMessage::CCurMessage(pCVar3,0xcc,(clDataList *)&local_54,0);
    }
    local_4._0_1_ = 5;
    CGLClientLIB::GSAddMessageToProxyQueue(g_pGSClientClass,pCVar3);
    local_24 = &clDataList::_vftable__for__clData__;
    local_18[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
    local_4._0_1_ = 8;
    clPointerList<class_clData*>::~clPointerList<class_clData*>
              ((clPointerList<class_clData*> *)local_18);
    local_54 = &clDataList::_vftable__for__clData__;
    local_24 = &clData::_vftable_;
    local_48[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
    local_4 = CONCAT31(local_4._1_3_,9);
    clPointerList<class_clData*>::~clPointerList<class_clData*>
              ((clPointerList<class_clData*> *)local_48);
  }
  else {
    local_4._0_1_ = 3;
    clDataList::~clDataList((clDataList *)&local_24);
    local_54 = &clDataList::_vftable__for__clData__;
    local_48[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
    local_4 = CONCAT31(local_4._1_3_,6);
    clPointerList<class_clData*>::~clPointerList<class_clData*>
              ((clPointerList<class_clData*> *)local_48);
  }
  local_54 = &clData::_vftable_;
  local_4 = 0xffffffff;
  clDataList::~clDataList((clDataList *)&local_3c);
  ExceptionList = local_c;
  return;
}




/* from: libgsclient:GSClientLIB.cpp
   addr: 0059E7B0 */

void __thiscall
CProxyHandler::ReceivedJoinWaitModule
          (CProxyHandler *this,ushort param_1,ushort param_2,clDataList *param_3)

{
  uint uVar1;
  clDataList *pcVar2;
  CCurMessage *pCVar3;
  undefined2 in_stack_0000000a;
  undefined **local_54;
  undefined4 *local_50;
  undefined **local_48 [2];
  undefined8 *local_40;
  undefined **local_3c;
  undefined4 *local_38;
  undefined4 local_34;
  undefined **local_30 [2];
  undefined8 *local_28;
  undefined **local_24;
  undefined4 *local_20;
  undefined **local_18 [2];
  undefined8 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c9102;
  local_c = ExceptionList;
  local_38 = &clDataList::_vbtable__for__clData__;
  local_28 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
  local_34 = 3;
  local_3c = &clData::_vftable_;
  local_4 = 0;
  ExceptionList = &local_c;
  clPointerList<class_clData*>::clPointerList<class_clData*>
            ((clPointerList<class_clData*> *)local_30);
  local_3c = &clDataList::_vftable__for__clData__;
  local_30[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_4 = 1;
  local_50 = &clDataList::_vbtable__for__clData__;
  local_40 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
  clData::clData((clData *)&local_54,3);
  local_4._0_1_ = 2;
  clPointerList<class_clData*>::clPointerList<class_clData*>
            ((clPointerList<class_clData*> *)local_48);
  local_54 = &clDataList::_vftable__for__clData__;
  local_48[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_4._0_1_ = 3;
  local_20 = &clDataList::_vbtable__for__clData__;
  local_10 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
  clData::clData((clData *)&local_24,3);
  local_4._0_1_ = 4;
  clPointerList<class_clData*>::clPointerList<class_clData*>
            ((clPointerList<class_clData*> *)local_18);
  pcVar2 = param_3;
  uVar1 = _param_2;
  local_24 = &clDataList::_vftable__for__clData__;
  local_18[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_4._0_1_ = 5;
  if (((short)_param_2 == 0x26) || ((short)_param_2 == 0x27)) {
    _param_2 = (uint)param_1;
    clDataList::Add(param_3,(int *)&param_2);
    _param_2 = 0x5d;
    clDataList::Add((clDataList *)&local_3c,(int *)&param_2);
    clDataList::Add((clDataList *)&local_3c,pcVar2);
    _param_2 = uVar1 & 0xffff;
    clDataList::Add((clDataList *)&local_54,(int *)&param_2);
    clDataList::Add((clDataList *)&local_54,(clDataList *)&local_3c);
    pCVar3 = (CCurMessage *)ExtAlloc_Malloc_4(0x1c);
    local_4._0_1_ = 7;
    if (pCVar3 == (CCurMessage *)0x0) {
      pCVar3 = (CCurMessage *)0x0;
    }
    else {
      pCVar3 = (CCurMessage *)CCurMessage::CCurMessage(pCVar3,0xcc,(clDataList *)&local_54,0);
    }
    local_4._0_1_ = 5;
    CGLClientLIB::GSAddMessageToProxyQueue(g_pGSClientClass,pCVar3);
    local_24 = &clDataList::_vftable__for__clData__;
    local_18[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
    local_4._0_1_ = 8;
    clPointerList<class_clData*>::~clPointerList<class_clData*>
              ((clPointerList<class_clData*> *)local_18);
    local_54 = &clDataList::_vftable__for__clData__;
    local_24 = &clData::_vftable_;
    local_48[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
    local_4 = CONCAT31(local_4._1_3_,9);
    clPointerList<class_clData*>::~clPointerList<class_clData*>
              ((clPointerList<class_clData*> *)local_48);
  }
  else {
    local_4._0_1_ = 3;
    clDataList::~clDataList((clDataList *)&local_24);
    local_54 = &clDataList::_vftable__for__clData__;
    local_48[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
    local_4 = CONCAT31(local_4._1_3_,6);
    clPointerList<class_clData*>::~clPointerList<class_clData*>
              ((clPointerList<class_clData*> *)local_48);
  }
  local_54 = &clData::_vftable_;
  local_4 = 0xffffffff;
  clDataList::~clDataList((clDataList *)&local_3c);
  ExceptionList = local_c;
  return;
}




/* from: libgsclient:GSClientLIB.cpp
   addr: 0059E9D0 */

void __thiscall
CProxyHandler::ReceivedLoginWaitModule
          (CProxyHandler *this,ushort param_1,ushort param_2,clDataList *param_3)

{
  uint uVar1;
  clDataList *pcVar2;
  CCurMessage *pCVar3;
  undefined2 in_stack_0000000a;
  undefined **local_54;
  undefined4 *local_50;
  undefined **local_48 [2];
  undefined8 *local_40;
  undefined **local_3c;
  undefined4 *local_38;
  undefined4 local_34;
  undefined **local_30 [2];
  undefined8 *local_28;
  undefined **local_24;
  undefined4 *local_20;
  undefined **local_18 [2];
  undefined8 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c9162;
  local_c = ExceptionList;
  local_38 = &clDataList::_vbtable__for__clData__;
  local_28 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
  local_34 = 3;
  local_3c = &clData::_vftable_;
  local_4 = 0;
  ExceptionList = &local_c;
  clPointerList<class_clData*>::clPointerList<class_clData*>
            ((clPointerList<class_clData*> *)local_30);
  local_3c = &clDataList::_vftable__for__clData__;
  local_30[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_4 = 1;
  local_50 = &clDataList::_vbtable__for__clData__;
  local_40 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
  clData::clData((clData *)&local_54,3);
  local_4._0_1_ = 2;
  clPointerList<class_clData*>::clPointerList<class_clData*>
            ((clPointerList<class_clData*> *)local_48);
  local_54 = &clDataList::_vftable__for__clData__;
  local_48[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_4._0_1_ = 3;
  local_20 = &clDataList::_vbtable__for__clData__;
  local_10 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
  clData::clData((clData *)&local_24,3);
  local_4._0_1_ = 4;
  clPointerList<class_clData*>::clPointerList<class_clData*>
            ((clPointerList<class_clData*> *)local_18);
  pcVar2 = param_3;
  uVar1 = _param_2;
  local_24 = &clDataList::_vftable__for__clData__;
  local_18[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_4._0_1_ = 5;
  if (((short)_param_2 == 0x26) || ((short)_param_2 == 0x27)) {
    _param_2 = (uint)param_1;
    clDataList::Add(param_3,(int *)&param_2);
    _param_2 = 0x4d;
    clDataList::Add((clDataList *)&local_3c,(int *)&param_2);
    clDataList::Add((clDataList *)&local_3c,pcVar2);
    _param_2 = uVar1 & 0xffff;
    clDataList::Add((clDataList *)&local_54,(int *)&param_2);
    clDataList::Add((clDataList *)&local_54,(clDataList *)&local_3c);
    pCVar3 = (CCurMessage *)ExtAlloc_Malloc_4(0x1c);
    local_4._0_1_ = 7;
    if (pCVar3 == (CCurMessage *)0x0) {
      pCVar3 = (CCurMessage *)0x0;
    }
    else {
      pCVar3 = (CCurMessage *)CCurMessage::CCurMessage(pCVar3,0xcc,(clDataList *)&local_54,0);
    }
    local_4._0_1_ = 5;
    CGLClientLIB::GSAddMessageToProxyQueue(g_pGSClientClass,pCVar3);
    local_24 = &clDataList::_vftable__for__clData__;
    local_18[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
    local_4._0_1_ = 8;
    clPointerList<class_clData*>::~clPointerList<class_clData*>
              ((clPointerList<class_clData*> *)local_18);
    local_54 = &clDataList::_vftable__for__clData__;
    local_24 = &clData::_vftable_;
    local_48[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
    local_4 = CONCAT31(local_4._1_3_,9);
    clPointerList<class_clData*>::~clPointerList<class_clData*>
              ((clPointerList<class_clData*> *)local_48);
  }
  else {
    local_4._0_1_ = 3;
    clDataList::~clDataList((clDataList *)&local_24);
    local_54 = &clDataList::_vftable__for__clData__;
    local_48[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
    local_4 = CONCAT31(local_4._1_3_,6);
    clPointerList<class_clData*>::~clPointerList<class_clData*>
              ((clPointerList<class_clData*> *)local_48);
  }
  local_54 = &clData::_vftable_;
  local_4 = 0xffffffff;
  clDataList::~clDataList((clDataList *)&local_3c);
  ExceptionList = local_c;
  return;
}




/* from: libgsclient:GSClientLIB.cpp
   addr: 0059EBF0 */

void __thiscall CGLClientLIB::GSAddMessageToProxyQueue(CGLClientLIB *this,CCurMessage *param_1)

{
  if (param_1 != (CCurMessage *)0x0) {
    CMsgQueue::AddMessage((CMsgQueue *)(this + 0x1a8),param_1);
    return;
  }
  return;
}




/* from: libgsclient:GSClientLIB.cpp
   addr: 0059EC10 */

int __thiscall CGLClientLIB::GetSubMessageType(CGLClientLIB *this,CCurMessage *param_1)

{
  int iVar1;
  Allocator<class_clProxyMessage*> local_31;
  int local_30;
  int local_2c;
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
  
  puStack_8 = &LAB_005c91bf;
  local_c = ExceptionList;
  local_2c = 0;
  local_30 = 0;
  local_20 = &clDataList::_vbtable__for__clData__;
  local_10 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
  local_1c = 3;
  local_24 = &clData::_vftable_;
  local_4 = 1;
  ExceptionList = &local_c;
  _STL::_List_base<class_clProxyMessage*,class_ExtAlloc::Allocator<class_clProxyMessage*>_>::
  List_base<class_clProxyMessage*,class_ExtAlloc::Allocator<class_clProxyMessage*>_>
            ((_List_base<class_clProxyMessage*,class_ExtAlloc::Allocator<class_clProxyMessage*>_> *)
             &local_14,&local_31);
  local_24 = &clDataList::_vftable__for__clData__;
  local_18 = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_4 = 2;
  clDataList::GetIndex(*(clDataList **)(param_1 + 8),&local_2c,0);
  if ((local_2c < 0x26) || (0x27 < local_2c)) {
    local_30 = local_2c;
  }
  else {
    clDataList::GetIndex(*(clDataList **)(param_1 + 8),(clDataList *)&local_24,1);
    clDataList::GetIndex((clDataList *)&local_24,&local_30,0);
  }
  iVar1 = local_30;
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
  return iVar1;
}




/* from: libgsclient:GSClientLIB.cpp
   addr: 0059ED50 */

void __thiscall CGLClientLIB::CheckServerDisconnection(CGLClientLIB *this)

{
  CConnection *this_00;
  uchar uVar1;
  
  if (this[0x148] != (CGLClientLIB)0x0) {
    uVar1 = CConnection::CheckConnection(*(CConnection **)(this + 0x14c));
    if (uVar1 == '\0') {
      CGLLoginLib::LoginLibRcv_LoginDisconnectionCB(*(CGLLoginLib **)(this + 0x150));
      this_00 = *(CConnection **)(this + 0x14c);
      this[0x148] = (CGLClientLIB)0x0;
      if (this_00 != (CConnection *)0x0) {
        CConnection::~CConnection(this_00);
        ExtAlloc_Free_4(this_00);
      }
      *(undefined4 *)(this + 0x14c) = 0;
      CGLLoginLib::LoginLib_UnInit(*(CGLLoginLib **)(this + 0x150));
      CGLLoginLib::LoginLib_UnInit(*(CGLLoginLib **)(this + 0x154));
      if (this[0x149] != (CGLClientLIB)0x0) {
        CGLSessionLib::SessionSend_ErrorDisconnection(*(CGLSessionLib **)(this + 0x158));
      }
      if (this[0x14b] != (CGLClientLIB)0x0) {
        CGSLobbyLib::LobbySend_DisconnectAll(*(CGSLobbyLib **)(this + 0x15c));
      }
    }
  }
  if (this[0x149] != (CGLClientLIB)0x0) {
    uVar1 = CGLSessionLib::Session_CheckConnection(*(CGLSessionLib **)(this + 0x158));
    if (uVar1 == '\0') {
      CGLSessionLib::SessionRcv_SessionErrorDisconnectionCB(*(CGLSessionLib **)(this + 0x158));
    }
  }
  uVar1 = CGSLobbyLib::Lobby_CheckConnection(*(CGSLobbyLib **)(this + 0x15c));
  if ((uVar1 == '\0') && ((*(CGSLobbyLib **)(this + 0x15c))[0x19] != (CGSLobbyLib)0x0)) {
    CGSLobbyLib::LobbyRcv_LobbyErrorDisconnectionCB(*(CGSLobbyLib **)(this + 0x15c));
    return;
  }
  return;
}




/* from: libgsclient:GSClientLIB.cpp
   addr: 0059EE30 */

void __thiscall CGLClientLIB::AddMessagesToQueues(CGLClientLIB *this,int param_1,uint param_2)

{
  CCurMessage *pCVar1;
  uint uVar2;
  uint uVar3;
  
  PTIMER_fn_ulElapsedMiliSeconds();
  uVar3 = 0;
  switch(param_1) {
  case 2:
    if ((this[0x148] != (CGLClientLIB)0x0) &&
       (pCVar1 = CConnection::ReadMessage(*(CConnection **)(this + 0x14c)),
       pCVar1 != (CCurMessage *)0x0)) {
      while( true ) {
        ProcessRouterMessage(this,pCVar1);
        uVar2 = PTIMER_fn_ulElapsedMiliSeconds();
        uVar3 = uVar3 + uVar2;
        if (param_2 < uVar3) break;
        pCVar1 = CConnection::ReadMessage(*(CConnection **)(this + 0x14c));
        if (pCVar1 == (CCurMessage *)0x0) {
          return;
        }
      }
    }
    break;
  case 4:
    if ((this[0x149] != (CGLClientLIB)0x0) &&
       (pCVar1 = CGLSessionLib::Session_ReadMessage(*(CGLSessionLib **)(this + 0x158)),
       pCVar1 != (CCurMessage *)0x0)) {
      while( true ) {
        ProcessArenaMessage(this,pCVar1);
        uVar2 = PTIMER_fn_ulElapsedMiliSeconds();
        uVar3 = uVar3 + uVar2;
        if (param_2 < uVar3) break;
        pCVar1 = CGLSessionLib::Session_ReadMessage(*(CGLSessionLib **)(this + 0x158));
        if (pCVar1 == (CCurMessage *)0x0) {
          return;
        }
      }
    }
    break;
  case 8:
    if ((this[0x14b] != (CGLClientLIB)0x0) &&
       (pCVar1 = CGSLobbyLib::Lobby_ReadMessage(*(CGSLobbyLib **)(this + 0x15c)),
       pCVar1 != (CCurMessage *)0x0)) {
      while( true ) {
        ProcessLobbyMessage(this,pCVar1);
        uVar2 = PTIMER_fn_ulElapsedMiliSeconds();
        uVar3 = uVar3 + uVar2;
        if (param_2 < uVar3) break;
        pCVar1 = CGSLobbyLib::Lobby_ReadMessage(*(CGSLobbyLib **)(this + 0x15c));
        if (pCVar1 == (CCurMessage *)0x0) {
          return;
        }
      }
    }
    break;
  case 0x10:
    if (this[0x14a] != (CGLClientLIB)0x0) {
      pCVar1 = CGSProxyLib::Proxy_ReadMessage(*(CGSProxyLib **)(this + 0x160));
      while (pCVar1 != (CCurMessage *)0x0) {
        ProcessProxyMessage(this,pCVar1);
        uVar2 = PTIMER_fn_ulElapsedMiliSeconds();
        uVar3 = uVar3 + uVar2;
        if (param_2 < uVar3) {
          return;
        }
        pCVar1 = CGSProxyLib::Proxy_ReadMessage(*(CGSProxyLib **)(this + 0x160));
      }
    }
  }
  return;
}




/* from: libgsclient:GSClientLIB.cpp
   addr: 0059EFB0 */

void __thiscall CGLClientLIB::ProcessRouterMessage(CGLClientLIB *this,CCurMessage *param_1)

{
  CCurMessage CVar1;
  CCurMessage *this_00;
  CCurMessage *pCVar2;
  uint uVar3;
  int local_4;
  
  this_00 = param_1;
  if (param_1 != (CCurMessage *)0x0) {
    CVar1 = param_1[4];
    param_1 = (CCurMessage *)((uint)param_1 & 0xffffff00);
    local_4 = 0;
    pCVar2 = (CCurMessage *)(uint)(byte)CVar1;
    if ((0x25 < (byte)CVar1) && ((byte)CVar1 < 0x28)) {
      clDataList::GetIndex(*(clDataList **)(this_00 + 8),&param_1,1,0);
      pCVar2 = param_1;
    }
    switch((uint)pCVar2 & 0xff) {
    case 1:
    case 0x13:
    case 0x4d:
    case 0x5d:
    case 0x62:
    case 0x66:
    case 0xb5:
      CMsgQueue::AddMessage(*(CMsgQueue **)(this + 0x168),this_00);
      return;
    default:
      clRcvElement::~clRcvElement((clRcvElement *)this_00);
      ExtAlloc_Free_4(this_00);
      break;
    case 8:
    case 0x4a:
    case 0x4b:
    case 0x4c:
    case 0x4e:
    case 0x51:
    case 0x57:
    case 0x58:
    case 0x5a:
    case 0x5b:
    case 0x65:
    case 0x85:
    case 0x98:
    case 200:
      CMsgQueue::AddMessage((CMsgQueue *)(this + 0x16c),this_00);
      return;
    case 0x52:
      if (this[0x149] != (CGLClientLIB)0x0) {
        CMsgQueue::AddMessage((CMsgQueue *)(this + 0x180),this_00);
        CGLSessionLib::SessionRcv_JoinArena
                  (*(CGLSessionLib **)(this + 0x158),(uchar *)&param_1,&local_4);
        return;
      }
      break;
    case 0x5e:
    case 0x8f:
    case 0x91:
    case 0xa9:
      if (this[0x149] != (CGLClientLIB)0x0) {
        CMsgQueue::AddMessage((CMsgQueue *)(this + 0x180),this_00);
        return;
      }
      break;
    case 0x8d:
      if (this[0x149] != (CGLClientLIB)0x0) {
        CMsgQueue::AddMessage((CMsgQueue *)(this + 0x180),this_00);
        CGLSessionLib::Session_AddArena(*(CGLSessionLib **)(this + 0x158));
        return;
      }
      break;
    case 0x90:
      if (this[0x149] != (CGLClientLIB)0x0) {
        CMsgQueue::AddMessage((CMsgQueue *)(this + 0x180),this_00);
        CGLSessionLib::Session_RemoveArena(*(CGLSessionLib **)(this + 0x158));
        return;
      }
      break;
    case 0xcc:
      uVar3 = GetSubMessageType(this,this_00);
      if ((uVar3 & 0xffff) == 1) {
        if (this[0x14a] != (CGLClientLIB)0x0) {
          CMsgQueue::AddMessage((CMsgQueue *)(this + 0x1a8),this_00);
          CGSProxyLib::ProxyRcv_ProxyServerRequest
                    (*(CGSProxyLib **)(this + 0x160),(uchar *)&param_1,&local_4);
          return;
        }
      }
      else if ((uVar3 & 0xffff) == 2) {
        if (this[0x14a] != (CGLClientLIB)0x0) {
          CMsgQueue::AddMessage((CMsgQueue *)(this + 0x1a8),this_00);
          CGSProxyLib::ProxyRcv_ProxyConnectAttempt
                    (*(CGSProxyLib **)(this + 0x160),(uchar *)&param_1,&local_4);
          return;
        }
      }
      else if (this[0x14a] != (CGLClientLIB)0x0) {
        CMsgQueue::AddMessage((CMsgQueue *)(this + 0x1a8),this_00);
        return;
      }
      break;
    case 0xd1:
      uVar3 = GetSubMessageType(this,this_00);
      if ((uVar3 & 0xffff) == 3) {
        if (this[0x14b] != (CGLClientLIB)0x0) {
          CMsgQueue::AddMessage((CMsgQueue *)(this + 0x194),this_00);
          CGSLobbyLib::LobbyRcv_JoinLobbyServer
                    (*(CGSLobbyLib **)(this + 0x15c),(uchar *)&param_1,&local_4);
          return;
        }
      }
      else if ((uVar3 & 0xffff) == 0x13) {
        if (this[0x14b] != (CGLClientLIB)0x0) {
          CMsgQueue::AddMessage((CMsgQueue *)(this + 0x194),this_00);
          CGSLobbyLib::Lobby_RemoveLobbySrv(*(CGSLobbyLib **)(this + 0x15c));
          return;
        }
      }
      else if (this[0x14b] != (CGLClientLIB)0x0) {
        CMsgQueue::AddMessage((CMsgQueue *)(this + 0x194),this_00);
        return;
      }
    }
  }
  return;
}




/* from: libgsclient:GSClientLIB.cpp
   addr: 0059F310 */

void __thiscall CGLClientLIB::ProcessArenaMessage(CGLClientLIB *this,CCurMessage *param_1)

{
  CCurMessage CVar1;
  CCurMessage *this_00;
  CCurMessage *pCVar2;
  
  this_00 = param_1;
  if (param_1 != (CCurMessage *)0x0) {
    CVar1 = param_1[4];
    param_1 = (CCurMessage *)((uint)param_1 & 0xffffff00);
    pCVar2 = (CCurMessage *)(uint)(byte)CVar1;
    if (0x25 < (byte)CVar1) {
      if ((byte)CVar1 < 0x28) {
        clDataList::GetIndex(*(clDataList **)(this_00 + 8),&param_1,1,0);
        pCVar2 = param_1;
        if ((char)param_1 == 'h') {
          CMsgQueue::AddMessage((CMsgQueue *)(this + 0x180),this_00);
          CGLSessionLib::SessionRcv_LoginArenaResult(*(CGLSessionLib **)(this + 0x158));
          return;
        }
      }
      else if (CVar1 == (CCurMessage)0x3b) {
        CMsgQueue::AddMessage((CMsgQueue *)(this + 0x180),this_00);
        CGLSessionLib::SessionRcv_Ping(*(CGLSessionLib **)(this + 0x158));
        return;
      }
    }
    switch((uint)pCVar2 & 0xff) {
    case 0x11:
    case 0x1a:
    case 0x1b:
    case 0x1c:
    case 0x1f:
    case 0x21:
    case 0x22:
    case 0x28:
    case 0x30:
    case 0x33:
    case 0x3c:
    case 0x5e:
    case 99:
    case 0x8b:
    case 0x8e:
    case 0x8f:
    case 0x91:
    case 0x93:
    case 0x94:
    case 0xa6:
    case 0xa9:
    case 0xb6:
    case 0xb7:
    case 0xca:
    case 0xcd:
    case 0xd3:
    case 0xd4:
      CMsgQueue::AddMessage((CMsgQueue *)(this + 0x180),this_00);
      return;
    default:
      clRcvElement::~clRcvElement((clRcvElement *)this_00);
      ExtAlloc_Free_4(this_00);
    }
  }
  return;
}




/* from: libgsclient:GSClientLIB.cpp
   addr: 0059F4A0 */

void __thiscall CGLClientLIB::ProcessLobbyMessage(CGLClientLIB *this,CCurMessage *param_1)

{
  int iVar1;
  
  if (param_1 != (CCurMessage *)0x0) {
    iVar1 = GetSubMessageType(this,param_1);
    if (iVar1 != 0xd2) {
      CMsgQueue::AddMessage((CMsgQueue *)(this + 0x194),param_1);
      return;
    }
    CMsgQueue::AddMessage((CMsgQueue *)(this + 0x194),param_1);
    CGSLobbyLib::LobbyRcv_LoginLobbyServerResult(*(CGSLobbyLib **)(this + 0x15c));
  }
  return;
}




/* from: libgsclient:GSClientLIB.cpp
   addr: 0059F4E0 */

void __thiscall CGLClientLIB::ProcessProxyMessage(CGLClientLIB *this,CCurMessage *param_1)

{
  if (param_1 != (CCurMessage *)0x0) {
    GetSubMessageType(this,param_1);
    CMsgQueue::AddMessage((CMsgQueue *)(this + 0x1a8),param_1);
  }
  return;
}




/* from: libgsclient:GSClientLIB.cpp
   addr: 0059F510 */

uchar __thiscall CGLClientLIB::Login_FixCallbacks(CGLClientLIB *this,clLoginCallbacks *param_1)

{
  CGLSessionLib::FixCallbacks(*(CGLSessionLib **)(this + 0x150),(clSessionCallbacks *)param_1);
  return '\x01';
}




/* from: libgsclient:GSClientLIB.cpp
   addr: 0059F530 */

uchar __thiscall CGLClientLIB::Login_Engine(CGLClientLIB *this,uint param_1,uint param_2)

{
  ushort uVar1;
  CCurMessage *this_00;
  uint uVar2;
  uint uVar3;
  
  CheckServerDisconnection(this);
  if (this[0x148] == (CGLClientLIB)0x0) {
    return '\0';
  }
  AddMessagesToQueues(this,2,param_1);
  PTIMER_fn_ulElapsedMiliSeconds();
  uVar3 = 0;
  uVar1 = CMsgQueue::GetFrontMessageType(*(CMsgQueue **)(this + 0x168));
  do {
    if (uVar1 == 0) {
      return '\x01';
    }
    switch(uVar1) {
    case 1:
      CGLLoginLib::LoginLibRcv_AccountCreationResultCB(*(CGLLoginLib **)(this + 0x150));
      break;
    case 0x13:
      CGLLoginLib::LoginLibRcv_PlayerInfoCB(*(CGLLoginLib **)(this + 0x150));
      break;
    case 0x4d:
      CGLLoginLib::LoginLibRcv_LoginWaitModuleResultCB(*(CGLLoginLib **)(this + 0x150));
      break;
    case 0x5d:
      CGLLoginLib::LoginLibRcv_JoinWaitModuleResultCB(*(CGLLoginLib **)(this + 0x150));
      break;
    case 0x62:
      CGLLoginLib::LoginLibRcv_ModifyUserResultCB(*(CGLLoginLib **)(this + 0x150));
    default:
      this_00 = CMsgQueue::GetMessageA(*(CMsgQueue **)(this + 0x168),uVar1);
      if (this_00 != (CCurMessage *)0x0) {
        clRcvElement::~clRcvElement((clRcvElement *)this_00);
        ExtAlloc_Free_4(this_00);
      }
      break;
    case 0x66:
      CGLLoginLib::LoginLibRcv_LoginRouterResultCB(*(CGLLoginLib **)(this + 0x150));
      break;
    case 0xb5:
      CGLLoginLib::LoginLibRcv_SystemPageCB(*(CGLLoginLib **)(this + 0x150));
    }
    uVar2 = PTIMER_fn_ulElapsedMiliSeconds();
    uVar3 = uVar3 + uVar2;
    if (param_2 < uVar3) {
      return '\x01';
    }
    uVar1 = CMsgQueue::GetFrontMessageType(*(CMsgQueue **)(this + 0x168));
  } while( true );
}




/* from: libgsclient:GSClientLIB.cpp
   addr: 0059F720 */

uchar __thiscall CGLClientLIB::LoginSend_Connect(CGLClientLIB *this,char *param_1,int param_2)

{
  uchar uVar1;
  CGLClientLIB CVar2;
  CConnection *pCVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c91da;
  local_c = ExceptionList;
  if (*(int *)(this + 0x14c) != 0) {
    ExceptionList = &local_c;
    uVar1 = CGLLoginLib::LoginLibSend_Connection(*(CGLLoginLib **)(this + 0x150),param_1,param_2);
    ExceptionList = local_c;
    return uVar1;
  }
  ExceptionList = &local_c;
  pCVar3 = (CConnection *)ExtAlloc_Malloc_4(0x98);
  local_4 = 0;
  if (pCVar3 == (CConnection *)0x0) {
    pCVar3 = (CConnection *)0x0;
  }
  else {
    pCVar3 = (CConnection *)CConnection::CConnection(pCVar3);
  }
  local_4 = 0xffffffff;
  *(CConnection **)(this + 0x14c) = pCVar3;
  CGLFriendsLib::Friends_Init
            (*(CGLFriendsLib **)(this + 0x150),pCVar3,*(CMsgQueue **)(this + 0x168));
  CVar2 = (CGLClientLIB)
          CGLLoginLib::LoginLibSend_Connection(*(CGLLoginLib **)(this + 0x150),param_1,param_2);
  this[0x148] = CVar2;
  if (CVar2 == (CGLClientLIB)0x0) {
    pCVar3 = *(CConnection **)(this + 0x14c);
    if (pCVar3 != (CConnection *)0x0) {
      CConnection::~CConnection(pCVar3);
      ExtAlloc_Free_4(pCVar3);
    }
    *(undefined4 *)(this + 0x14c) = 0;
    CGLLoginLib::LoginLib_UnInit(*(CGLLoginLib **)(this + 0x150));
  }
  ExceptionList = local_c;
  return (uchar)this[0x148];
}




/* from: libgsclient:GSClientLIB.cpp
   addr: 0059F820 */

uchar __thiscall CGLClientLIB::LoginSend_Disconnect(CGLClientLIB *this)

{
  if (this[0x148] == (CGLClientLIB)0x0) {
    return '\0';
  }
  CGLLoginLib::LoginLibSend_Disconnection(*(CGLLoginLib **)(this + 0x150));
  return '\x01';
}




/* from: libgsclient:GSClientLIB.cpp
   addr: 0059F840 */

uchar __thiscall
CGLClientLIB::LoginSend_LoginRouter
          (CGLClientLIB *this,char *param_1,char *param_2,char *param_3,uchar param_4)

{
  uchar uVar1;
  
  strncpy((char *)(this + 4),param_1,0xf);
  strncpy((char *)(this + 0x14),param_2,0x10);
  strncpy((char *)(this + 0x25),param_3,0x20);
  uVar1 = CGLLoginLib::LoginLibSend_LoginRouter
                    (*(CGLLoginLib **)(this + 0x150),param_1,param_2,param_3,param_4);
  return uVar1;
}




/* from: libgsclient:GSClientLIB.cpp
   addr: 0059F8A0 */

uchar __thiscall CGLClientLIB::LoginSend_LoginWaitModule(CGLClientLIB *this,char *param_1)

{
  uchar uVar1;
  
  strncpy((char *)(this + 4),param_1,0x10);
  uVar1 = CGLLoginLib::LoginLibSend_LoginWaitModule(*(CGLLoginLib **)(this + 0x150),param_1);
  return uVar1;
}




/* from: libgsclient:GSClientLIB.cpp
   addr: 0059F8F0 */

uchar __thiscall CGLClientLIB::Friends_FixCallbacks(CGLClientLIB *this,clFriendsCallbacks *param_1)

{
  CGLSessionLib::FixCallbacks(*(CGLSessionLib **)(this + 0x154),(clSessionCallbacks *)param_1);
  return '\x01';
}




/* from: libgsclient:GSClientLIB.cpp
   addr: 0059F910 */

uchar __thiscall CGLClientLIB::Friends_Engine(CGLClientLIB *this,uint param_1,uint param_2)

{
  CMsgQueue *this_00;
  ushort uVar1;
  CCurMessage *this_01;
  uint uVar2;
  uint uVar3;
  
  CheckServerDisconnection(this);
  if (this[0x148] == (CGLClientLIB)0x0) {
    return '\0';
  }
  AddMessagesToQueues(this,2,param_1);
  PTIMER_fn_ulElapsedMiliSeconds();
  this_00 = (CMsgQueue *)(this + 0x16c);
  uVar3 = 0;
  uVar1 = CMsgQueue::GetFrontMessageType(this_00);
  while( true ) {
    if (uVar1 == 0) {
      return '\x01';
    }
    switch(uVar1) {
    case 8:
      CGLFriendsLib::FriendsRcv_SearchPlayerCB(*(CGLFriendsLib **)(this + 0x154));
      break;
    default:
      this_01 = CMsgQueue::GetMessageA(this_00,uVar1);
      if (this_01 != (CCurMessage *)0x0) {
        clRcvElement::~clRcvElement((clRcvElement *)this_01);
        ExtAlloc_Free_4(this_01);
      }
      break;
    case 0x4a:
      CGLFriendsLib::FriendsRcv_UpdateFriendCB(*(CGLFriendsLib **)(this + 0x154));
      break;
    case 0x4b:
      CGLFriendsLib::FriendsRcv_AddFriendCB(*(CGLFriendsLib **)(this + 0x154));
      break;
    case 0x4c:
      CGLFriendsLib::FriendsRcv_DelFriendCB(*(CGLFriendsLib **)(this + 0x154));
      break;
    case 0x4e:
      CGLFriendsLib::FriendsRcv_LoginResultCB(*(CGLFriendsLib **)(this + 0x154));
      break;
    case 0x51:
      CGLFriendsLib::FriendsRcv_StatusChangeCB(*(CGLFriendsLib **)(this + 0x154));
      break;
    case 0x57:
      CGLFriendsLib::FriendsRcv_GetSessionCB(*(CGLFriendsLib **)(this + 0x154));
      break;
    case 0x58:
      CGLFriendsLib::FriendsRcv_PagePlayerCB(*(CGLFriendsLib **)(this + 0x154));
      break;
    case 0x5a:
      CGLFriendsLib::FriendsRcv_PeerMsgCB(*(CGLFriendsLib **)(this + 0x154));
      break;
    case 0x5b:
      CGLFriendsLib::FriendsRcv_PeerPlayerCB(*(CGLFriendsLib **)(this + 0x154));
      break;
    case 0x65:
      CGLFriendsLib::FriendsRcv_PageCB(*(CGLFriendsLib **)(this + 0x154));
      break;
    case 0x85:
      CGLFriendsLib::FriendsRcv_ChangeFriendCB(*(CGLFriendsLib **)(this + 0x154));
      break;
    case 0x98:
      CGLFriendsLib::FriendsRcv_ScoreCardCB(*(CGLFriendsLib **)(this + 0x154));
      break;
    case 200:
      CGLFriendsLib::FriendsRcv_GetWebBasedCB(*(CGLFriendsLib **)(this + 0x154));
    }
    uVar2 = PTIMER_fn_ulElapsedMiliSeconds();
    uVar3 = uVar3 + uVar2;
    if (param_2 < uVar3) break;
    uVar1 = CMsgQueue::GetFrontMessageType(this_00);
  }
  return '\x01';
}




/* from: libgsclient:GSClientLIB.cpp
   addr: 0059FB90 */

uchar __thiscall CGLClientLIB::FriendsSend_Login(CGLClientLIB *this,int param_1,int param_2)

{
  uchar uVar1;
  
  if ((this[0x148] != (CGLClientLIB)0x0) && (*(int *)(this + 0x14c) != 0)) {
    CMsgQueue::Clear((CMsgQueue *)(this + 0x16c));
    CGLFriendsLib::Friends_Init
              (*(CGLFriendsLib **)(this + 0x154),*(CConnection **)(this + 0x14c),
               (CMsgQueue *)(this + 0x16c));
    uVar1 = CGLFriendsLib::FriendsSend_Login(*(CGLFriendsLib **)(this + 0x154),param_1,param_2);
    return uVar1;
  }
  return '\0';
}




/* from: libgsclient:GSClientLIB.cpp
   addr: 0059FC00 */

uchar __thiscall CGLClientLIB::Session_FixCallbacks(CGLClientLIB *this,clSessionCallbacks *param_1)

{
  CGLSessionLib::FixCallbacks(*(CGLSessionLib **)(this + 0x158),param_1);
  return '\x01';
}




/* from: libgsclient:GSClientLIB.cpp
   addr: 0059FC20 */

uchar __thiscall CGLClientLIB::Lobby_FixCallbacks(CGLClientLIB *this,clLobbyCallbacks *param_1)

{
  CGSLobbyLib::FixCallbacks(*(CGSLobbyLib **)(this + 0x15c),param_1);
  return '\x01';
}




/* from: libgsclient:GSClientLIB.cpp
   addr: 0059FC40 */

uchar __thiscall CGLClientLIB::Lobby_Engine(CGLClientLIB *this,uint param_1,uint param_2)

{
  CMsgQueue *this_00;
  ushort uVar1;
  CCurMessage *this_01;
  uint uVar2;
  uint uVar3;
  
  if (this[0x14b] == (CGLClientLIB)0x0) {
    return '\0';
  }
  CheckServerDisconnection(this);
  AddMessagesToQueues(this,8,param_1);
  PTIMER_fn_ulElapsedMiliSeconds();
  this_00 = (CMsgQueue *)(this + 0x194);
  uVar3 = 0;
  uVar1 = CMsgQueue::GetFrontMessageType(this_00);
  while( true ) {
    if (uVar1 == 0) {
      return '\x01';
    }
    switch(uVar1) {
    case 6:
      CGSLobbyLib::LobbyRcv_InfoRefreshCB(*(CGSLobbyLib **)(this + 0x15c));
      break;
    default:
      this_01 = CMsgQueue::GetMessageA(this_00,uVar1);
      if (this_01 != (CCurMessage *)0x0) {
        clRcvElement::~clRcvElement((clRcvElement *)this_01);
        ExtAlloc_Free_4(this_01);
      }
      break;
    case 8:
      CGSLobbyLib::LobbyRcv_GroupLeaveCB(*(CGSLobbyLib **)(this + 0x15c));
      break;
    case 9:
      CGSLobbyLib::LobbyRcv_GroupInfoGetCB(*(CGSLobbyLib **)(this + 0x15c));
      break;
    case 10:
      CGSLobbyLib::LobbyRcv_PlayerKickCB(*(CGSLobbyLib **)(this + 0x15c));
      break;
    case 0xc:
      CGSLobbyLib::LobbyRcv_CreateRoomCB(*(CGSLobbyLib **)(this + 0x15c));
      break;
    case 0xe:
      CGSLobbyLib::LobbyRcv_ParentGroupIDCB(*(CGSLobbyLib **)(this + 0x15c));
      break;
    case 0xf:
      CGSLobbyLib::LobbyRcv_StartGameReplyCB(*(CGSLobbyLib **)(this + 0x15c));
      break;
    case 0x11:
      CGSLobbyLib::LobbyRcv_StartMatchCB(*(CGSLobbyLib **)(this + 0x15c));
      break;
    case 0x12:
      CGSLobbyLib::LobbyRcv_LobbyDisconnectionCB(*(CGSLobbyLib **)(this + 0x15c));
      break;
    case 0x15:
      CGSLobbyLib::LobbyRcv_LoginResultCB(*(CGSLobbyLib **)(this + 0x15c));
      break;
    case 0x17:
      CGSLobbyLib::LobbyRcv_JoinLobbyResultCB(*(CGSLobbyLib **)(this + 0x15c));
      break;
    case 0x18:
      CGSLobbyLib::LobbyRcv_JoinRoomResultCB(*(CGSLobbyLib **)(this + 0x15c));
      break;
    case 0x1b:
      CGSLobbyLib::LobbyRcv_MasterNewCB(*(CGSLobbyLib **)(this + 0x15c));
      break;
    case 0x1e:
      CGSLobbyLib::LobbyRcv_SubmitMatchResultCB(*(CGSLobbyLib **)(this + 0x15c));
      break;
    case 0x1f:
      CGSLobbyLib::LobbyRcv_GroupConfigUpdateResultCB(*(CGSLobbyLib **)(this + 0x15c));
      break;
    case 0x20:
      CGSLobbyLib::LobbyRcv_UpdatePingCB(*(CGSLobbyLib **)(this + 0x15c));
      break;
    case 0x21:
      CGSLobbyLib::LobbyRcv_GameReadyReplyCB(*(CGSLobbyLib **)(this + 0x15c));
      break;
    case 0x24:
      CGSLobbyLib::LobbyRcv_PlayerBanReplyCB(*(CGSLobbyLib **)(this + 0x15c));
      break;
    case 0x28:
      CGSLobbyLib::LobbyRcv_PlayerUnBanReplyCB(*(CGSLobbyLib **)(this + 0x15c));
      break;
    case 0x29:
      CGSLobbyLib::LobbyRcv_UpdateGameInfoReplyCB(*(CGSLobbyLib **)(this + 0x15c));
      break;
    case 0x2a:
      CGSLobbyLib::LobbyRcv_SetPlayerInfoReplyCB(*(CGSLobbyLib **)(this + 0x15c));
      break;
    case 0x2b:
      CGSLobbyLib::LobbyRcv_LobbyDisconnectAllCB(*(CGSLobbyLib **)(this + 0x15c));
      if ((*(CGSLobbyLib **)(this + 0x15c))[0x19] == (CGSLobbyLib)0x0) {
        this[0x14b] = (CGLClientLIB)0x0;
        CGSLobbyLib::Lobby_UnInit(*(CGSLobbyLib **)(this + 0x15c));
        return '\0';
      }
      break;
    case 0x2d:
      CGSLobbyLib::LobbyRcv_MatchFinishCB(*(CGSLobbyLib **)(this + 0x15c));
      break;
    case 0x2e:
      CGSLobbyLib::LobbyRcv_GetAltGroupInfoCB(*(CGSLobbyLib **)(this + 0x15c));
      break;
    case 0x32:
      CGSLobbyLib::LobbyRcv_MemberJoinCB(*(CGSLobbyLib **)(this + 0x15c));
      break;
    case 0x33:
      CGSLobbyLib::LobbyRcv_MemberLeaveCB(*(CGSLobbyLib **)(this + 0x15c));
      break;
    case 0x35:
      CGSLobbyLib::LobbyRcv_GroupInfoCB(*(CGSLobbyLib **)(this + 0x15c));
      break;
    case 0x36:
      CGSLobbyLib::LobbyRcv_NewGroupCB(*(CGSLobbyLib **)(this + 0x15c));
      break;
    case 0x37:
      CGSLobbyLib::LobbyRcv_GroupRemoveCB(*(CGSLobbyLib **)(this + 0x15c));
      break;
    case 0x38:
      CGSLobbyLib::LobbyRcv_GameStartedCB(*(CGSLobbyLib **)(this + 0x15c));
      break;
    case 0x39:
      CGSLobbyLib::LobbyRcv_GroupConfigUpdateCB(*(CGSLobbyLib **)(this + 0x15c));
      break;
    case 0x3b:
      CGSLobbyLib::LobbyRcv_MasterChangedCB(*(CGSLobbyLib **)(this + 0x15c));
      break;
    case 0x3d:
      CGSLobbyLib::LobbyRcv_KickOutCB(*(CGSLobbyLib **)(this + 0x15c));
      break;
    case 0x3e:
      CGSLobbyLib::LobbyRcv_MatchStartedCB(*(CGSLobbyLib **)(this + 0x15c));
      break;
    case 0x3f:
      CGSLobbyLib::LobbyRcv_PlayerBannedCB(*(CGSLobbyLib **)(this + 0x15c));
      break;
    case 0x40:
      CGSLobbyLib::LobbyRcv_PlayerBanListCB(*(CGSLobbyLib **)(this + 0x15c));
      break;
    case 0x41:
      CGSLobbyLib::LobbyRcv_MatchReadyCB(*(CGSLobbyLib **)(this + 0x15c));
      break;
    case 0x42:
      CGSLobbyLib::LobbyRcv_PlayerInfoUpdateCB(*(CGSLobbyLib **)(this + 0x15c));
      break;
    case 0x45:
      CGSLobbyLib::LobbyRcv_PlayerUpdateStatusCB(*(CGSLobbyLib **)(this + 0x15c));
      break;
    case 0x6a:
      CGSLobbyLib::LobbyRcv_PlayerGroupGetCB(*(CGSLobbyLib **)(this + 0x15c));
      break;
    case 0x97:
      CGSLobbyLib::LobbyRcv_MemberListCB(*(CGSLobbyLib **)(this + 0x15c));
    }
    uVar2 = PTIMER_fn_ulElapsedMiliSeconds();
    uVar3 = uVar3 + uVar2;
    if (param_2 < uVar3) break;
    uVar1 = CMsgQueue::GetFrontMessageType(this_00);
  }
  return '\x01';
}




/* from: libgsclient:GSClientLIB.cpp
   addr: 005A00D0 */

uchar __thiscall
CGLClientLIB::LobbySend_Login(CGLClientLIB *this,char *param_1,uchar param_2,ushort param_3)

{
  CGLClientLIB CVar1;
  
  if ((this[0x148] != (CGLClientLIB)0x0) && (*(int *)(this + 0x14c) != 0)) {
    CMsgQueue::Clear((CMsgQueue *)(this + 0x194));
    CGSLobbyLib::Lobby_UnInit(*(CGSLobbyLib **)(this + 0x15c));
    CGSLobbyLib::Lobby_Init
              (*(CGSLobbyLib **)(this + 0x15c),*(CConnection **)(this + 0x14c),
               (CMsgQueue *)(this + 0x194),(char *)(this + 4),(char *)(this + 0x46),
               (char *)(this + 199));
    CVar1 = (CGLClientLIB)
            CGSLobbyLib::LobbySend_Login(*(CGSLobbyLib **)(this + 0x15c),param_1,param_2,param_3);
    this[0x14b] = CVar1;
    *(undefined4 *)(this + 0x1bc) = 0;
    return (uchar)CVar1;
  }
  return '\0';
}




/* from: libgsclient:GSClientLIB.cpp
   addr: 005A0170 */

uchar __thiscall
CGLClientLIB::LobbySend_JoinRoom
          (CGLClientLIB *this,int param_1,int param_2,char *param_3,uchar param_4,char *param_5,
          int param_6)

{
  uchar uVar1;
  
  uVar1 = CGSLobbyLib::LobbySend_JoinRoom
                    (*(CGSLobbyLib **)(this + 0x15c),param_1,param_2,param_3,param_4,param_5,param_6
                    );
  return uVar1;
}




/* from: libgsclient:GSClientLIB.cpp
   addr: 005A01B0 */

uchar __thiscall CGLClientLIB::LobbySend_InitMatchResults(CGLClientLIB *this,uint param_1)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  
  if (*(int *)(this + 0x164) != 0) {
    return '\0';
  }
  puVar1 = (undefined4 *)ExtAlloc_Malloc_4(0x20);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = &clMatchResults::_vbtable_;
    puVar1[5] = &ExtAlloc::
                 map<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,class_clPlayerResults,struct__STL::less<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
                 ::_vbtable_;
    puVar1[2] = 0;
    puVar2 = (undefined1 *)ExtAlloc_Malloc_4(0x50);
    puVar1[2] = puVar2;
    puVar1[3] = 0;
    *(undefined1 *)(puVar1 + 4) = (undefined1)param_1;
    *puVar2 = 0;
    *(undefined4 *)(puVar1[2] + 4) = 0;
    *(undefined4 *)(puVar1[2] + 8) = puVar1[2];
    *(undefined4 *)(puVar1[2] + 0xc) = puVar1[2];
    puVar1[6] = param_1;
    puVar1[7] = 0;
    *puVar1 = &clMatchResults::_vftable_;
    *(undefined4 **)(this + 0x164) = puVar1;
    return '\x01';
  }
  *(undefined4 *)(this + 0x164) = 0;
  return '\x01';
}




/* from: libgsclient:GSClientLIB.cpp
   addr: 005A0250 */

uchar __thiscall
CGLClientLIB::LobbySend_SetMatchResult(CGLClientLIB *this,char *param_1,uint param_2,int param_3)

{
  if (*(clMatchResults **)(this + 0x164) == (clMatchResults *)0x0) {
    return '\0';
  }
  clMatchResults::SetNum(*(clMatchResults **)(this + 0x164),param_1,param_2,param_3);
  return '\x01';
}




/* from: libgsclient:GSClientLIB.cpp
   addr: 005A0280 */

uchar __thiscall
CGLClientLIB::LobbySend_SubmitMatchResult(CGLClientLIB *this,int param_1,int param_2)

{
  uchar uVar1;
  clDataList *pcVar2;
  int iVar3;
  
  if (*(int *)(this + 0x164) != 0) {
    pcVar2 = (clDataList *)ExtAlloc_Malloc_4(0x18);
    if (pcVar2 != (clDataList *)0x0) {
      *(undefined4 **)(pcVar2 + 4) = &clDataList::_vbtable__for__clData__;
      *(undefined8 **)(pcVar2 + 0x14) = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
      *(undefined4 *)(pcVar2 + 8) = 3;
      *(undefined ***)pcVar2 = &clData::_vftable_;
      *(undefined4 *)(pcVar2 + 0x10) = 0;
      iVar3 = ExtAlloc_Malloc_4(0xc);
      *(int *)iVar3 = iVar3;
      *(int *)(iVar3 + 4) = iVar3;
      *(int *)(pcVar2 + 0x10) = iVar3;
      *(undefined ***)(pcVar2 + 0xc) = &clPointerList<class_clData*>::_vftable_;
      *(undefined ***)pcVar2 = &clDataList::_vftable__for__clData__;
      *(undefined ***)(pcVar2 + 0xc) = &clDataList::_vftable__for__clPointerList<class_clData*>__;
      clMatchResults::ToDataList(*(clMatchResults **)(this + 0x164),pcVar2);
      uVar1 = CGSLobbyLib::LobbySend_SubmitMatchResult
                        (*(CGSLobbyLib **)(this + 0x15c),param_1,param_2,pcVar2);
      (*(code *)**(undefined4 **)pcVar2)(1);
      return uVar1;
    }
  }
  return '\0';
}




/* from: libgsclient:GSClientLIB.cpp
   addr: 005A0330 */

uchar __thiscall CGLClientLIB::LobbySend_ClearMatchResult(CGLClientLIB *this)

{
  _Rb_tree<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>,struct__STL::_Select1st<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>_>,struct__STL::less<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>_>_>
  *this_00;
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(this + 0x164);
  if (iVar1 == 0) {
    return '\0';
  }
  this_00 = (_Rb_tree<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>,struct__STL::_Select1st<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>_>,struct__STL::less<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>_>_>
             *)(iVar1 + 8);
  if (*(int *)(iVar1 + 0xc) != 0) {
    iVar3 = *(int *)(*(int *)this_00 + 4);
    while (iVar3 != 0) {
      _STL::
      _Rb_tree<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>,struct__STL::_Select1st<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>_>,struct__STL::less<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>_>_>
      ::M_erase(this_00,*(_Rb_tree_node<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>_>
                          **)(iVar3 + 0xc));
      iVar2 = *(int *)(iVar3 + 8);
      _STL::
      pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>
      ::
      ~pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>
                ((pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>
                  *)(iVar3 + 0x10));
      ExtAlloc_Free_4(iVar3);
      iVar3 = iVar2;
    }
    *(int *)(*(int *)this_00 + 8) = *(int *)this_00;
    *(undefined4 *)(*(int *)this_00 + 4) = 0;
    *(int *)(*(int *)this_00 + 0xc) = *(int *)this_00;
    *(undefined4 *)(iVar1 + 0xc) = 0;
  }
  if (*(undefined4 **)(this + 0x164) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x164))(1);
  }
  *(undefined4 *)(this + 0x164) = 0;
  return '\x01';
}




/* from: libgsclient:GSClientLIB.cpp
   addr: 005A03E0
   addr: 005A03E0 */

void * __thiscall clMatchResults::_scalar_deleting_destructor_(clMatchResults *this,uint param_1)

{
  ~clMatchResults(this);
  if ((param_1 & 1) != 0) {
    ExtAlloc_Free_4(this);
  }
  return this;
}




/* from: libgsclient:GSClientLIB.cpp
   addr: 005A0400 */

void __thiscall clMatchResults::~clMatchResults(clMatchResults *this)

{
  _Rb_tree<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>,struct__STL::_Select1st<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>_>,struct__STL::less<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>_>_>
  *this_00;
  _Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
  *p_Var1;
  _Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
  *p_Var2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_c = ExceptionList;
  puStack_8 = &LAB_005c91f8;
  this_00 = (_Rb_tree<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>,struct__STL::_Select1st<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>_>,struct__STL::less<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>_>_>
             *)(this + 8);
  ExceptionList = &local_c;
  *(undefined ***)this = &_vftable_;
  local_4 = 0;
  if (*(int *)(this + 0xc) != 0) {
    p_Var2 = *(_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
               **)(*(int *)this_00 + 4);
    while (p_Var2 != (_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
                      *)0x0) {
      _STL::
      _Rb_tree<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>,struct__STL::_Select1st<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>_>,struct__STL::less<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>_>_>
      ::M_erase(this_00,*(_Rb_tree_node<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>_>
                          **)(p_Var2 + 0xc));
      p_Var1 = *(_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
                 **)(p_Var2 + 8);
      _STL::
      pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>
      ::_scalar_deleting_destructor_
                ((pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>
                  *)(p_Var2 + 0x10),0);
      _STL::
      _STLP_alloc_proxy<struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>*,struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
      ::deallocate((_STLP_alloc_proxy<struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>*,struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
                    *)this_00,p_Var2,1);
      p_Var2 = p_Var1;
    }
    *(int *)(*(int *)this_00 + 8) = *(int *)this_00;
    *(undefined4 *)(*(int *)this_00 + 4) = 0;
    *(int *)(*(int *)this_00 + 0xc) = *(int *)this_00;
    *(undefined4 *)(this + 0xc) = 0;
  }
  ExtAlloc_Free_4(*(undefined4 *)this_00);
  ExceptionList = local_c;
  return;
}




/* from: libgsclient:GSClientLIB.cpp
   addr: 005A04A0
   addr: 005A04A0 */

void __thiscall CGLFriendsLib::~CGLFriendsLib(CGLFriendsLib *this)

{
  clRcvElement *this_00;
  int iVar1;
  
  this_00 = *(clRcvElement **)(this + 4);
  if (this_00 != (clRcvElement *)0x0) {
    clRcvElement::~clRcvElement(this_00);
    ExtAlloc_Free_4(this_00);
  }
  if ((this[0x14] == (CGLFriendsLib)0x0) && (iVar1 = *(int *)(this + 0x10), iVar1 != 0)) {
    (*(code *)**(undefined4 **)(*(int *)(*(int *)(iVar1 + 4) + 8) + 4 + iVar1))(1);
  }
  return;
}




/* from: libgsclient:GSClientLIB.cpp
   addr: 005A04E0 */

void __thiscall CGLSessionLib::~CGLSessionLib(CGLSessionLib *this)

{
  CGLSessionLib *pCVar1;
  map<void*,class_PKCAlgorithm*,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_PKCAlgorithm*>_>_>
  *this_00;
  int iVar2;
  _Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
  *p_Var3;
  _Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
  *p_Var4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c9252;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  if (*(clRcvElement **)(this + 4) != (clRcvElement *)0x0) {
    ExceptionList = &pvStack_c;
    clRcvElement::~clRcvElement(*(clRcvElement **)(this + 4));
    ExtAlloc_Free_4();
  }
  if (*(undefined4 **)(this + 0xc) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0xc))();
  }
  if ((this[0x14] == (CGLSessionLib)0x0) && (iVar2 = *(int *)(this + 0x10), iVar2 != 0)) {
    (*(code *)**(undefined4 **)(*(int *)(*(int *)(iVar2 + 4) + 8) + 4 + iVar2))();
  }
  pCVar1 = this + 0x1c;
  *(undefined ***)pCVar1 = &clPointerMap<int,class_clGameResult*>::_vftable_;
  this_00 = (map<void*,class_PKCAlgorithm*,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_PKCAlgorithm*>_>_>
             *)(this + 0x20);
  iVar2 = *(int *)pCVar1;
  local_4 = 1;
  _STL::
  map<void*,class_PKCAlgorithm*,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_PKCAlgorithm*>_>_>
  ::begin(this_00);
  (**(code **)(iVar2 + 0xc))();
  pvStack_c = (void *)0x2;
  if (*(int *)(this + 0x24) != 0) {
    p_Var4 = *(_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
               **)(*(int *)this_00 + 4);
    while (p_Var4 != (_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
                      *)0x0) {
      _STL::
      _Rb_tree<int,struct__STL::pair<int_const_,class_clGameResult*>,struct__STL::_Select1st<struct__STL::pair<int_const_,class_clGameResult*>_>,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,class_clGameResult*>_>_>
      ::M_erase((_Rb_tree<int,struct__STL::pair<int_const_,class_clGameResult*>,struct__STL::_Select1st<struct__STL::pair<int_const_,class_clGameResult*>_>,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,class_clGameResult*>_>_>
                 *)this_00,
                *(_Rb_tree_node<struct__STL::pair<int_const_,class_clGameResult*>_> **)
                 (p_Var4 + 0xc));
      p_Var3 = *(_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
                 **)(p_Var4 + 8);
      _STL::
      _STLP_alloc_proxy<struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>*,struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
      ::deallocate((_STLP_alloc_proxy<struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>*,struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
                    *)this_00,p_Var4,1);
      p_Var4 = p_Var3;
    }
    *(int *)(*(int *)this_00 + 8) = *(int *)this_00;
    *(undefined4 *)(*(int *)this_00 + 4) = 0;
    *(int *)(*(int *)this_00 + 0xc) = *(int *)this_00;
    *(undefined4 *)(this + 0x24) = 0;
  }
  pvStack_c = (void *)0x3;
  _STL::
  _STLP_alloc_proxy<struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>*,struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
  ::deallocate((_STLP_alloc_proxy<struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>*,struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
                *)this_00,
               *(_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
                 **)this_00,1);
  ExceptionList = pCVar1;
  return;
}




/* from: libgsclient:GSClientLIB.cpp
   addr: 005A0610
   addr: 005A0610 */

void * __thiscall
clPointerMap<int,class_clGameResult*>::_scalar_deleting_destructor_
          (clPointerMap<int,class_clGameResult*> *this,uint param_1)

{
  ~clPointerMap<int,class_clGameResult*>(this);
  if ((param_1 & 1) != 0) {
    ExtAlloc_Free_4(this);
  }
  return this;
}




/* from: libgsclient:GSClientLIB.cpp
   addr: 005A0630 */

void __thiscall
ExtAlloc::map<int,class_clGameResult*,struct__STL::less<int>_>::
~map<int,class_clGameResult*,struct__STL::less<int>_>
          (map<int,class_clGameResult*,struct__STL::less<int>_> *this)

{
  int iVar1;
  int iVar2;
  void **ppvVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c9268;
  local_c = ExceptionList;
  local_4 = 0;
  ppvVar3 = &local_c;
  if (*(int *)(this + 4) != 0) {
    iVar2 = *(int *)(*(int *)this + 4);
    ExceptionList = &local_c;
    while (iVar2 != 0) {
      _STL::
      _Rb_tree<int,struct__STL::pair<int_const_,class_clGameResult*>,struct__STL::_Select1st<struct__STL::pair<int_const_,class_clGameResult*>_>,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,class_clGameResult*>_>_>
      ::M_erase((_Rb_tree<int,struct__STL::pair<int_const_,class_clGameResult*>,struct__STL::_Select1st<struct__STL::pair<int_const_,class_clGameResult*>_>,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,class_clGameResult*>_>_>
                 *)this,*(_Rb_tree_node<struct__STL::pair<int_const_,class_clGameResult*>_> **)
                         (iVar2 + 0xc));
      iVar1 = *(int *)(iVar2 + 8);
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




/* from: libgsclient:GSClientLIB.cpp
   addr: 005A06C0
   addr: 005A06C0 */

void * __thiscall CProxyHandler::_vector_deleting_destructor_(CProxyHandler *this,uint param_1)

{
  ~CProxyHandler(this);
  if ((param_1 & 1) != 0) {
    ExtAlloc_Free_4(this);
  }
  return this;
}




/* from: libgsclient:GSClientLIB.cpp
   addr: 005A06F0
   addr: 005A06F0 */

void * __thiscall clProxyHandler::_vector_deleting_destructor_(clProxyHandler *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  if ((param_1 & 1) != 0) {
    ExtAlloc_Free_4(this);
  }
  return this;
}




/* from: libgsclient:GSClientLIB.cpp
   addr: 005A0710 */

void __thiscall
clPointerMap<int,class_clGameResult*>::~clPointerMap<int,class_clGameResult*>
          (clPointerMap<int,class_clGameResult*> *this)

{
  map<void*,class_PKCAlgorithm*,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_PKCAlgorithm*>_>_>
  *this_00;
  int iVar1;
  int iVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c92af;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = &_vftable_;
  this_00 = (map<void*,class_PKCAlgorithm*,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_PKCAlgorithm*>_>_>
             *)(this + 4);
  iVar1 = *(int *)this;
  local_4 = 0;
  _STL::
  map<void*,class_PKCAlgorithm*,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_PKCAlgorithm*>_>_>
  ::begin(this_00);
  (**(code **)(iVar1 + 0xc))();
  pvStack_c = (void *)0x1;
  if (*(int *)(this + 8) != 0) {
    iVar1 = *(int *)(*(int *)this_00 + 4);
    while (iVar1 != 0) {
      _STL::
      _Rb_tree<int,struct__STL::pair<int_const_,class_clGameResult*>,struct__STL::_Select1st<struct__STL::pair<int_const_,class_clGameResult*>_>,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,class_clGameResult*>_>_>
      ::M_erase((_Rb_tree<int,struct__STL::pair<int_const_,class_clGameResult*>,struct__STL::_Select1st<struct__STL::pair<int_const_,class_clGameResult*>_>,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,class_clGameResult*>_>_>
                 *)this_00,
                *(_Rb_tree_node<struct__STL::pair<int_const_,class_clGameResult*>_> **)(iVar1 + 0xc)
               );
      iVar2 = *(int *)(iVar1 + 8);
      ExtAlloc_Free_4(iVar1);
      iVar1 = iVar2;
    }
    *(int *)(*(int *)this_00 + 8) = *(int *)this_00;
    *(undefined4 *)(*(int *)this_00 + 4) = 0;
    *(int *)(*(int *)this_00 + 0xc) = *(int *)this_00;
    *(undefined4 *)(this + 8) = 0;
  }
  ExtAlloc_Free_4(*(undefined4 *)this_00);
  ExceptionList = this;
  return;
}




/* from: libgsclient:GSClientLIB.cpp
   addr: 005A07D0 */

void __thiscall
clPointerMap<int,class_clGameResult*>::erase
          (clPointerMap<int,class_clGameResult*> *this,int *param_2,_Rb_tree_node_base *param_3)

{
  clGameResult *this_00;
  int iVar1;
  _Rb_tree_node_base *p_Var2;
  _Rb_tree_node_base *p_Var3;
  
  if (param_3 != *(_Rb_tree_node_base **)(this + 4)) {
    this_00 = *(clGameResult **)(param_3 + 0x14);
    if (this_00 != (clGameResult *)0x0) {
      clGameResult::~clGameResult(this_00);
      ExtAlloc_Free_4(this_00);
    }
    p_Var3 = *(_Rb_tree_node_base **)(param_3 + 0xc);
    *(undefined4 *)(param_3 + 0x14) = 0;
    if (p_Var3 == (_Rb_tree_node_base *)0x0) {
      p_Var2 = *(_Rb_tree_node_base **)(param_3 + 4);
      p_Var3 = param_3;
      if (param_3 == *(_Rb_tree_node_base **)(p_Var2 + 0xc)) {
        do {
          p_Var3 = p_Var2;
          p_Var2 = *(_Rb_tree_node_base **)(p_Var3 + 4);
        } while (p_Var3 == *(_Rb_tree_node_base **)(p_Var2 + 0xc));
      }
      if (*(_Rb_tree_node_base **)(p_Var3 + 0xc) != p_Var2) {
        p_Var3 = p_Var2;
      }
    }
    else {
      for (p_Var2 = *(_Rb_tree_node_base **)(p_Var3 + 8); p_Var2 != (_Rb_tree_node_base *)0x0;
          p_Var2 = *(_Rb_tree_node_base **)(p_Var2 + 8)) {
        p_Var3 = p_Var2;
      }
    }
    iVar1 = *(int *)(this + 4);
    p_Var2 = _STL::_Rb_global<bool>::Rebalance_for_erase
                       (param_3,(_Rb_tree_node_base **)(iVar1 + 4),
                        (_Rb_tree_node_base **)(iVar1 + 8),(_Rb_tree_node_base **)(iVar1 + 0xc));
    ExtAlloc_Free_4(p_Var2);
    *(int *)(this + 8) = *(int *)(this + 8) + -1;
    *param_2 = (int)p_Var3;
    return;
  }
  *param_2 = (int)param_3;
  return;
}




/* from: libgsclient:GSClientLIB.cpp
   addr: 005A0870 */

void __thiscall clGameResult::~clGameResult(clGameResult *this)

{
  map<void*,class_PKCAlgorithm*,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_PKCAlgorithm*>_>_>
  *this_00;
  int iVar1;
  _Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
  *p_Var2;
  _Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
  *p_Var3;
  clGameResult *pcVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c92fa;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  if (*(undefined4 **)(this + 0x1c) != (undefined4 *)0x0) {
    ExceptionList = &pvStack_c;
    (**(code **)**(undefined4 **)(this + 0x1c))();
  }
  pcVar4 = this + 8;
  *(undefined ***)pcVar4 =
       &clPointerMap<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,class_clPlayerResult*>
        ::_vftable_;
  this_00 = (map<void*,class_PKCAlgorithm*,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_PKCAlgorithm*>_>_>
             *)(this + 0xc);
  iVar1 = *(int *)pcVar4;
  local_4 = 1;
  _STL::
  map<void*,class_PKCAlgorithm*,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_PKCAlgorithm*>_>_>
  ::begin(this_00);
  (**(code **)(iVar1 + 0xc))();
  pvStack_c = (void *)0x2;
  if (*(int *)(this + 0x10) != 0) {
    p_Var3 = *(_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
               **)(*(int *)this_00 + 4);
    while (p_Var3 != (_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
                      *)0x0) {
      _STL::
      _Rb_tree<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResult*>,struct__STL::_Select1st<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResult*>_>,struct__STL::less<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResult*>_>_>
      ::M_erase((_Rb_tree<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResult*>,struct__STL::_Select1st<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResult*>_>,struct__STL::less<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResult*>_>_>
                 *)this_00,
                *(_Rb_tree_node<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResult*>_>
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
    *(undefined4 *)(this + 0x10) = 0;
  }
  ExtAlloc_Free_4(*(undefined4 *)this_00);
  ExceptionList = pcVar4;
  return;
}




/* from: libgsclient:GSClientLIB.cpp
   addr: 005A0960
   addr: 005A0960 */

void * __thiscall
clPointerMap<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,class_clPlayerResult*>
::_vector_deleting_destructor_
          (clPointerMap<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,class_clPlayerResult*>
           *this,uint param_1)

{
  ~clPointerMap<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,class_clPlayerResult*>
            (this);
  if ((param_1 & 1) != 0) {
    ExtAlloc_Free_4(this);
  }
  return this;
}




/* from: libgsclient:GSClientLIB.cpp
   addr: 005A0980 */

void __thiscall
ExtAlloc::
map<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,class_clPlayerResult*,struct__STL::less<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
::
~map<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,class_clPlayerResult*,struct__STL::less<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
          (map<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,class_clPlayerResult*,struct__STL::less<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
           *this)

{
  int iVar1;
  int iVar2;
  void **ppvVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c9318;
  local_c = ExceptionList;
  local_4 = 0;
  ppvVar3 = &local_c;
  if (*(int *)(this + 4) != 0) {
    iVar2 = *(int *)(*(int *)this + 4);
    ExceptionList = &local_c;
    while (iVar2 != 0) {
      _STL::
      _Rb_tree<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResult*>,struct__STL::_Select1st<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResult*>_>,struct__STL::less<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResult*>_>_>
      ::M_erase((_Rb_tree<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResult*>,struct__STL::_Select1st<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResult*>_>,struct__STL::less<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResult*>_>_>
                 *)this,*(_Rb_tree_node<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResult*>_>
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




/* from: libgsclient:GSClientLIB.cpp
   addr: 005A0A10 */

void __thiscall
clPointerMap<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,class_clPlayerResult*>
::
~clPointerMap<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,class_clPlayerResult*>
          (clPointerMap<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,class_clPlayerResult*>
           *this)

{
  map<void*,class_PKCAlgorithm*,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_PKCAlgorithm*>_>_>
  *this_00;
  int iVar1;
  int iVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c935f;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = &_vftable_;
  this_00 = (map<void*,class_PKCAlgorithm*,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_PKCAlgorithm*>_>_>
             *)(this + 4);
  iVar1 = *(int *)this;
  local_4 = 0;
  _STL::
  map<void*,class_PKCAlgorithm*,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_PKCAlgorithm*>_>_>
  ::begin(this_00);
  (**(code **)(iVar1 + 0xc))();
  pvStack_c = (void *)0x1;
  if (*(int *)(this + 8) != 0) {
    iVar1 = *(int *)(*(int *)this_00 + 4);
    while (iVar1 != 0) {
      _STL::
      _Rb_tree<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResult*>,struct__STL::_Select1st<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResult*>_>,struct__STL::less<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResult*>_>_>
      ::M_erase((_Rb_tree<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResult*>,struct__STL::_Select1st<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResult*>_>,struct__STL::less<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResult*>_>_>
                 *)this_00,
                *(_Rb_tree_node<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResult*>_>
                  **)(iVar1 + 0xc));
      iVar2 = *(int *)(iVar1 + 8);
      _STL::
      pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResult*>
      ::_scalar_deleting_destructor_
                ((pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResult*>
                  *)(iVar1 + 0x10),0);
      ExtAlloc_Free_4(iVar1);
      iVar1 = iVar2;
    }
    *(int *)(*(int *)this_00 + 8) = *(int *)this_00;
    *(undefined4 *)(*(int *)this_00 + 4) = 0;
    *(int *)(*(int *)this_00 + 0xc) = *(int *)this_00;
    *(undefined4 *)(this + 8) = 0;
  }
  ExtAlloc_Free_4(*(undefined4 *)this_00);
  ExceptionList = this;
  return;
}




/* from: libgsclient:GSClientLIB.cpp
   addr: 005A0AD0 */

void __thiscall
clPointerMap<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,class_clPlayerResult*>
::erase(clPointerMap<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,class_clPlayerResult*>
        *this,int *param_2,_Rb_tree_node_base *param_3)

{
  clPlayerResult *this_00;
  int iVar1;
  _Rb_tree_node_base *p_Var2;
  _Rb_tree_node_base *p_Var3;
  
  if (param_3 != *(_Rb_tree_node_base **)(this + 4)) {
    this_00 = *(clPlayerResult **)(param_3 + 0x1c);
    if (this_00 != (clPlayerResult *)0x0) {
      clPlayerResult::~clPlayerResult(this_00);
      ExtAlloc_Free_4(this_00);
    }
    p_Var3 = *(_Rb_tree_node_base **)(param_3 + 0xc);
    *(undefined4 *)(param_3 + 0x1c) = 0;
    if (p_Var3 == (_Rb_tree_node_base *)0x0) {
      p_Var2 = *(_Rb_tree_node_base **)(param_3 + 4);
      p_Var3 = param_3;
      if (param_3 == *(_Rb_tree_node_base **)(p_Var2 + 0xc)) {
        do {
          p_Var3 = p_Var2;
          p_Var2 = *(_Rb_tree_node_base **)(p_Var3 + 4);
        } while (p_Var3 == *(_Rb_tree_node_base **)(p_Var2 + 0xc));
      }
      if (*(_Rb_tree_node_base **)(p_Var3 + 0xc) != p_Var2) {
        p_Var3 = p_Var2;
      }
    }
    else {
      for (p_Var2 = *(_Rb_tree_node_base **)(p_Var3 + 8); p_Var2 != (_Rb_tree_node_base *)0x0;
          p_Var2 = *(_Rb_tree_node_base **)(p_Var2 + 8)) {
        p_Var3 = p_Var2;
      }
    }
    iVar1 = *(int *)(this + 4);
    p_Var2 = _STL::_Rb_global<bool>::Rebalance_for_erase
                       (param_3,(_Rb_tree_node_base **)(iVar1 + 4),
                        (_Rb_tree_node_base **)(iVar1 + 8),(_Rb_tree_node_base **)(iVar1 + 0xc));
    _STL::_String_base<char,class_ExtAlloc::Allocator<char>_>::
    ~_String_base<char,class_ExtAlloc::Allocator<char>_>
              ((_String_base<char,class_ExtAlloc::Allocator<char>_> *)(p_Var2 + 0x10));
    ExtAlloc_Free_4(p_Var2);
    *(int *)(this + 8) = *(int *)(this + 8) + -1;
    *param_2 = (int)p_Var3;
    return;
  }
  *param_2 = (int)param_3;
  return;
}




/* from: libgsclient:GSClientLIB.cpp
   addr: 005A0B80 */

int __thiscall
clPointerMap<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,class_clPlayerResult*>
::erase(clPointerMap<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,class_clPlayerResult*>
        *this,_Rb_tree_node_base *param_2,_Rb_tree_node_base *param_3)

{
  _Rb_tree<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResult*>,struct__STL::_Select1st<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResult*>_>,struct__STL::less<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResult*>_>_>
  *this_00;
  clPlayerResult *this_01;
  _Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
  *p_Var1;
  int iVar2;
  _Rb_tree_node_base *p_Var3;
  _Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
  *p_Var4;
  _Rb_tree_node_base *p_Var5;
  _Rb_tree_node_base *p_Var6;
  int local_8;
  _List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
  local_4 [4];
  
  p_Var5 = param_3;
  local_8 = 0;
  p_Var6 = param_2;
  if (param_2 != param_3) {
    do {
      if (p_Var6 == *(_Rb_tree_node_base **)(this + 4)) break;
      this_01 = *(clPlayerResult **)(p_Var6 + 0x1c);
      if (this_01 != (clPlayerResult *)0x0) {
        clPlayerResult::~clPlayerResult(this_01);
        ExtAlloc_Free_4(this_01);
      }
      local_8 = local_8 + 1;
      *(undefined4 *)(p_Var6 + 0x1c) = 0;
      p_Var6 = _STL::_Rb_global<bool>::M_increment(p_Var6);
    } while (p_Var6 != p_Var5);
  }
  _STL::_List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
  ::List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
            (local_4,(_List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
                      *)&param_2);
  this_00 = (_Rb_tree<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResult*>,struct__STL::_Select1st<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResult*>_>,struct__STL::less<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResult*>_>_>
             *)(this + 4);
  _STL::_List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
  ::List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
            ((_List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
              *)&param_3,local_4);
  p_Var6 = *(_Rb_tree_node_base **)this_00;
  p_Var3 = param_3;
  if ((param_3 == *(_Rb_tree_node_base **)(p_Var6 + 8)) && (p_Var5 == p_Var6)) {
    if (*(int *)(this + 8) != 0) {
      p_Var4 = *(_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
                 **)(p_Var6 + 4);
      while (p_Var4 != (_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
                        *)0x0) {
        _STL::
        _Rb_tree<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResult*>,struct__STL::_Select1st<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResult*>_>,struct__STL::less<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResult*>_>_>
        ::M_erase(this_00,*(_Rb_tree_node<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResult*>_>
                            **)(p_Var4 + 0xc));
        p_Var1 = *(_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
                   **)(p_Var4 + 8);
        _STL::
        pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResult*>
        ::_scalar_deleting_destructor_
                  ((pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResult*>
                    *)(p_Var4 + 0x10),0);
        _STL::
        _STLP_alloc_proxy<struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>*,struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
        ::deallocate((_STLP_alloc_proxy<struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>*,struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
                      *)this_00,p_Var4,1);
        p_Var4 = p_Var1;
      }
      *(int *)(*(int *)this_00 + 8) = *(int *)this_00;
      *(undefined4 *)(*(int *)this_00 + 4) = 0;
      *(int *)(*(int *)this_00 + 0xc) = *(int *)this_00;
      *(undefined4 *)(this + 8) = 0;
      return local_8;
    }
  }
  else {
    while (p_Var3 != p_Var5) {
      param_3 = *(_Rb_tree_node_base **)(p_Var3 + 0xc);
      if (param_3 == (_Rb_tree_node_base *)0x0) {
        p_Var6 = *(_Rb_tree_node_base **)(p_Var3 + 4);
        param_3 = p_Var3;
        if (p_Var3 == *(_Rb_tree_node_base **)(p_Var6 + 0xc)) {
          do {
            param_3 = p_Var6;
            p_Var6 = *(_Rb_tree_node_base **)(param_3 + 4);
          } while (param_3 == *(_Rb_tree_node_base **)(p_Var6 + 0xc));
        }
        if (*(_Rb_tree_node_base **)(param_3 + 0xc) != p_Var6) {
          param_3 = p_Var6;
        }
      }
      else {
        for (p_Var6 = *(_Rb_tree_node_base **)(param_3 + 8); p_Var6 != (_Rb_tree_node_base *)0x0;
            p_Var6 = *(_Rb_tree_node_base **)(p_Var6 + 8)) {
          param_3 = p_Var6;
        }
      }
      iVar2 = *(int *)this_00;
      p_Var6 = _STL::_Rb_global<bool>::Rebalance_for_erase
                         (p_Var3,(_Rb_tree_node_base **)(iVar2 + 4),
                          (_Rb_tree_node_base **)(iVar2 + 8),(_Rb_tree_node_base **)(iVar2 + 0xc));
      _STL::_String_base<char,class_ExtAlloc::Allocator<char>_>::
      ~_String_base<char,class_ExtAlloc::Allocator<char>_>
                ((_String_base<char,class_ExtAlloc::Allocator<char>_> *)(p_Var6 + 0x10));
      ExtAlloc_Free_4(p_Var6);
      *(int *)(this + 8) = *(int *)(this + 8) + -1;
      p_Var3 = param_3;
    }
  }
  return local_8;
}




/* from: libgsclient:GSClientLIB.cpp
   addr: 005A0CE0 */

void __thiscall
clPointerMap<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,class_clPlayerResult*>
::erase(clPointerMap<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,class_clPlayerResult*>
        *this,char *param_2,char *param_3)

{
  clPointerMap<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,class_clPlayerResult*>
  *pcVar1;
  void **ppvVar2;
  bool bVar3;
  int iVar4;
  clPointerMap<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,class_clPlayerResult*>
  *pcVar5;
  clPointerMap<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,class_clPlayerResult*>
  *local_24;
  undefined1 local_10 [4];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c9378;
  local_4 = 0;
  ppvVar2 = &pvStack_c;
  pcVar5 = *(clPointerMap<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,class_clPlayerResult*>
             **)(this + 4);
  pcVar1 = *(clPointerMap<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,class_clPlayerResult*>
             **)(*(clPointerMap<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,class_clPlayerResult*>
                   **)(this + 4) + 4);
  local_24 = this;
  pvStack_c = ExceptionList;
  while (ExceptionList = ppvVar2,
        pcVar1 != (clPointerMap<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,class_clPlayerResult*>
                   *)0x0) {
    bVar3 = _STL::operator<((basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>
                             *)(pcVar1 + 0x10),
                            (basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>
                             *)&param_2);
    ppvVar2 = (void **)ExceptionList;
    if (bVar3) {
      pcVar1 = *(clPointerMap<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,class_clPlayerResult*>
                 **)(pcVar1 + 0xc);
    }
    else {
      pcVar5 = pcVar1;
      pcVar1 = *(clPointerMap<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,class_clPlayerResult*>
                 **)(pcVar1 + 8);
    }
  }
  if ((pcVar5 == *(clPointerMap<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,class_clPlayerResult*>
                   **)(this + 4)) ||
     (iVar4 = _STL::
              basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::
              M_compare(param_2,param_3,*(char **)(pcVar5 + 0x10),*(char **)(pcVar5 + 0x14)),
     iVar4 < 0)) {
    pcVar5 = *(clPointerMap<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,class_clPlayerResult*>
               **)(this + 4);
  }
  local_24 = pcVar5;
  (**(code **)(*(int *)this + 0x10))(local_10);
  ExtAlloc_Free_4(local_4);
  ExceptionList = &local_24;
  return;
}




/* from: libgsclient:GSClientLIB.cpp
   addr: 005A0DA0 */

int __thiscall
clPointerMap<int,class_clGameResult*>::erase
          (clPointerMap<int,class_clGameResult*> *this,_Rb_tree_node_base *param_2,
          _Rb_tree_node_base *param_3)

{
  _Rb_tree<int,struct__STL::pair<int_const_,class_clGameResult*>,struct__STL::_Select1st<struct__STL::pair<int_const_,class_clGameResult*>_>,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,class_clGameResult*>_>_>
  *this_00;
  clGameResult *this_01;
  _Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
  *p_Var1;
  int iVar2;
  _Rb_tree_node_base *p_Var3;
  _Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
  *p_Var4;
  _Rb_tree_node_base *p_Var5;
  _Rb_tree_node_base *p_Var6;
  int local_8;
  _List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
  local_4 [4];
  
  p_Var5 = param_3;
  local_8 = 0;
  p_Var6 = param_2;
  if (param_2 != param_3) {
    do {
      if (p_Var6 == *(_Rb_tree_node_base **)(this + 4)) break;
      this_01 = *(clGameResult **)(p_Var6 + 0x14);
      if (this_01 != (clGameResult *)0x0) {
        clGameResult::~clGameResult(this_01);
        ExtAlloc_Free_4(this_01);
      }
      local_8 = local_8 + 1;
      *(undefined4 *)(p_Var6 + 0x14) = 0;
      p_Var6 = _STL::_Rb_global<bool>::M_increment(p_Var6);
    } while (p_Var6 != p_Var5);
  }
  _STL::_List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
  ::List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
            (local_4,(_List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
                      *)&param_2);
  this_00 = (_Rb_tree<int,struct__STL::pair<int_const_,class_clGameResult*>,struct__STL::_Select1st<struct__STL::pair<int_const_,class_clGameResult*>_>,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,class_clGameResult*>_>_>
             *)(this + 4);
  _STL::_List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
  ::List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
            ((_List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
              *)&param_3,local_4);
  p_Var6 = *(_Rb_tree_node_base **)this_00;
  p_Var3 = param_3;
  if ((param_3 == *(_Rb_tree_node_base **)(p_Var6 + 8)) && (p_Var5 == p_Var6)) {
    if (*(int *)(this + 8) != 0) {
      p_Var4 = *(_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
                 **)(p_Var6 + 4);
      while (p_Var4 != (_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
                        *)0x0) {
        _STL::
        _Rb_tree<int,struct__STL::pair<int_const_,class_clGameResult*>,struct__STL::_Select1st<struct__STL::pair<int_const_,class_clGameResult*>_>,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,class_clGameResult*>_>_>
        ::M_erase(this_00,*(_Rb_tree_node<struct__STL::pair<int_const_,class_clGameResult*>_> **)
                           (p_Var4 + 0xc));
        p_Var1 = *(_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
                   **)(p_Var4 + 8);
        _STL::
        _STLP_alloc_proxy<struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>*,struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
        ::deallocate((_STLP_alloc_proxy<struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>*,struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
                      *)this_00,p_Var4,1);
        p_Var4 = p_Var1;
      }
      *(int *)(*(int *)this_00 + 8) = *(int *)this_00;
      *(undefined4 *)(*(int *)this_00 + 4) = 0;
      *(int *)(*(int *)this_00 + 0xc) = *(int *)this_00;
      *(undefined4 *)(this + 8) = 0;
      return local_8;
    }
  }
  else {
    while (p_Var3 != p_Var5) {
      param_3 = *(_Rb_tree_node_base **)(p_Var3 + 0xc);
      if (param_3 == (_Rb_tree_node_base *)0x0) {
        p_Var6 = *(_Rb_tree_node_base **)(p_Var3 + 4);
        param_3 = p_Var3;
        if (p_Var3 == *(_Rb_tree_node_base **)(p_Var6 + 0xc)) {
          do {
            param_3 = p_Var6;
            p_Var6 = *(_Rb_tree_node_base **)(param_3 + 4);
          } while (param_3 == *(_Rb_tree_node_base **)(p_Var6 + 0xc));
        }
        if (*(_Rb_tree_node_base **)(param_3 + 0xc) != p_Var6) {
          param_3 = p_Var6;
        }
      }
      else {
        for (p_Var6 = *(_Rb_tree_node_base **)(param_3 + 8); p_Var6 != (_Rb_tree_node_base *)0x0;
            p_Var6 = *(_Rb_tree_node_base **)(p_Var6 + 8)) {
          param_3 = p_Var6;
        }
      }
      iVar2 = *(int *)this_00;
      p_Var6 = _STL::_Rb_global<bool>::Rebalance_for_erase
                         (p_Var3,(_Rb_tree_node_base **)(iVar2 + 4),
                          (_Rb_tree_node_base **)(iVar2 + 8),(_Rb_tree_node_base **)(iVar2 + 0xc));
      ExtAlloc_Free_4(p_Var6);
      *(int *)(this + 8) = *(int *)(this + 8) + -1;
      p_Var3 = param_3;
    }
  }
  return local_8;
}




/* from: libgsclient:GSClientLIB.cpp
   addr: 005A0EF0 */

void __thiscall
clPointerMap<int,class_clGameResult*>::erase
          (clPointerMap<int,class_clGameResult*> *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(this + 4);
  iVar3 = iVar1;
  iVar2 = *(int *)(iVar1 + 4);
  while (iVar2 != 0) {
    if (*(int *)(iVar2 + 0x10) < param_1) {
      iVar2 = *(int *)(iVar2 + 0xc);
    }
    else {
      iVar3 = iVar2;
      iVar2 = *(int *)(iVar2 + 8);
    }
  }
  if ((iVar3 == iVar1) || (param_1 < *(int *)(iVar3 + 0x10))) {
    iVar3 = iVar1;
  }
  (**(code **)(*(int *)this + 0x10))(&param_1,iVar3);
  return;
}




/* from: libgsclient:GSClientLIB.cpp
   addr: 005A0F40 */

map<int,class_clGameResult*,struct__STL::less<int>_> * __thiscall
ExtAlloc::map<int,class_clGameResult*,struct__STL::less<int>_>::
map<int,class_clGameResult*,struct__STL::less<int>_>
          (map<int,class_clGameResult*,struct__STL::less<int>_> *this)

{
  undefined1 *puVar1;
  map<int,class_clGameResult*,struct__STL::less<int>_> mStack00000004;
  
  if (_mStack00000004 != 0) {
    *(undefined1 **)(this + 0xc) = &_vbtable_;
  }
  *(undefined4 *)this = 0;
  puVar1 = (undefined1 *)ExtAlloc_Malloc_4(0x18);
  *(undefined1 **)this = puVar1;
  *(undefined4 *)(this + 4) = 0;
  this[8] = mStack00000004;
  *puVar1 = 0;
  *(undefined4 *)(*(int *)this + 4) = 0;
  *(int *)(*(int *)this + 8) = *(int *)this;
  *(int *)(*(int *)this + 0xc) = *(int *)this;
  return this;
}




/* from: libgsclient:GSClientLIB.cpp
   addr: 005A0FA0 */

void __thiscall
_STL::
_Rb_tree<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>,struct__STL::_Select1st<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>_>,struct__STL::less<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>_>_>
::M_erase(_Rb_tree<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>,struct__STL::_Select1st<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>_>,struct__STL::less<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>_>_>
          *this,_Rb_tree_node<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>_>
                *param_1)

{
  _Rb_tree_node<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>_>
  *p_Var1;
  
  if (param_1 !=
      (_Rb_tree_node<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>_>
       *)0x0) {
    do {
      M_erase(this,*(_Rb_tree_node<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>_>
                     **)(param_1 + 0xc));
      p_Var1 = *(_Rb_tree_node<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>_>
                 **)(param_1 + 8);
      pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>
      ::
      ~pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>
                ((pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>
                  *)(param_1 + 0x10));
      ExtAlloc_Free_4(param_1);
      param_1 = p_Var1;
    } while (p_Var1 != (_Rb_tree_node<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>_>
                        *)0x0);
  }
  return;
}




/* from: libgsclient:GSClientLIB.cpp
   addr: 005A0FE0 */

void __thiscall
_STL::
_Rb_tree<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResult*>,struct__STL::_Select1st<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResult*>_>,struct__STL::less<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResult*>_>_>
::M_erase(_Rb_tree<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResult*>,struct__STL::_Select1st<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResult*>_>,struct__STL::less<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResult*>_>_>
          *this,_Rb_tree_node<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResult*>_>
                *param_1)

{
  _Rb_tree_node<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResult*>_>
  *p_Var1;
  
  if (param_1 !=
      (_Rb_tree_node<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResult*>_>
       *)0x0) {
    do {
      M_erase(this,*(_Rb_tree_node<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResult*>_>
                     **)(param_1 + 0xc));
      p_Var1 = *(_Rb_tree_node<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResult*>_>
                 **)(param_1 + 8);
      _String_base<char,class_ExtAlloc::Allocator<char>_>::
      ~_String_base<char,class_ExtAlloc::Allocator<char>_>
                ((_String_base<char,class_ExtAlloc::Allocator<char>_> *)(param_1 + 0x10));
      ExtAlloc_Free_4(param_1);
      param_1 = p_Var1;
    } while (p_Var1 != (_Rb_tree_node<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResult*>_>
                        *)0x0);
  }
  return;
}




/* from: libgsclient:GSClientLIB.cpp
   addr: 005A1020 */

void __thiscall
_STL::
_Rb_tree<int,struct__STL::pair<int_const_,class_clGameResult*>,struct__STL::_Select1st<struct__STL::pair<int_const_,class_clGameResult*>_>,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,class_clGameResult*>_>_>
::M_erase(_Rb_tree<int,struct__STL::pair<int_const_,class_clGameResult*>,struct__STL::_Select1st<struct__STL::pair<int_const_,class_clGameResult*>_>,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,class_clGameResult*>_>_>
          *this,_Rb_tree_node<struct__STL::pair<int_const_,class_clGameResult*>_> *param_1)

{
  _Rb_tree_node<struct__STL::pair<int_const_,class_clGameResult*>_> *p_Var1;
  
  if (param_1 != (_Rb_tree_node<struct__STL::pair<int_const_,class_clGameResult*>_> *)0x0) {
    do {
      M_erase(this,*(_Rb_tree_node<struct__STL::pair<int_const_,class_clGameResult*>_> **)
                    (param_1 + 0xc));
      p_Var1 = *(_Rb_tree_node<struct__STL::pair<int_const_,class_clGameResult*>_> **)(param_1 + 8);
      ExtAlloc_Free_4(param_1);
      param_1 = p_Var1;
    } while (p_Var1 != (_Rb_tree_node<struct__STL::pair<int_const_,class_clGameResult*>_> *)0x0);
  }
  return;
}




/* from: libgsclient:GSClientLIB.cpp
   addr: 005A1050
   addr: 005A1050
   addr: 005A1050 */

void * __thiscall
_STL::
pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResult*>
::_scalar_deleting_destructor_
          (pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResult*>
           *this,uint param_1)

{
  _String_base<char,class_ExtAlloc::Allocator<char>_>::
  ~_String_base<char,class_ExtAlloc::Allocator<char>_>
            ((_String_base<char,class_ExtAlloc::Allocator<char>_> *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: libgsclient:GSClientLIB.cpp
   addr: 005A1070 */

void * __thiscall
_STL::
pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>
::_scalar_deleting_destructor_
          (pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>
           *this,uint param_1)

{
  ~pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>
            (this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: libgsclient:GSClientLIB.cpp
   addr: 005A1090 */

void __thiscall
_STL::
pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>
::
~pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>
          (pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>
           *this)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_005c93a0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)(this + 0xc) = &clPlayerResults::_vftable_;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  _Rb_tree<unsigned_int,struct__STL::pair<unsigned_int_const_,int>,struct__STL::_Select1st<struct__STL::pair<unsigned_int_const_,int>_>,struct__STL::less<unsigned_int>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_int_const_,int>_>_>
  ::clear((_Rb_tree<unsigned_int,struct__STL::pair<unsigned_int_const_,int>,struct__STL::_Select1st<struct__STL::pair<unsigned_int_const_,int>_>,struct__STL::less<unsigned_int>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_int_const_,int>_>_>
           *)(this + 0x14));
  local_4 = (uint)local_4._1_3_ << 8;
  _String_base<char,class_ExtAlloc::Allocator<char>_>::
  ~_String_base<char,class_ExtAlloc::Allocator<char>_>
            ((_String_base<char,class_ExtAlloc::Allocator<char>_> *)(this + 0x14));
  ExtAlloc_Free_4(*(undefined4 *)this);
  ExceptionList = local_c;
  return;
}




/* from: libgsclient:GSClientLIB.cpp
   addr: 005A1100
   addr: 005A1100 */

void * __thiscall clPlayerResults::_vector_deleting_destructor_(clPlayerResults *this,uint param_1)

{
  ~clPlayerResults(this);
  if ((param_1 & 1) != 0) {
    ExtAlloc_Free_4(this);
  }
  return this;
}




/* from: libgsclient:GSClientLIB.cpp
   addr: 005A1120 */

void __thiscall clPlayerResults::~clPlayerResults(clPlayerResults *this)

{
  _Rb_tree<unsigned_int,struct__STL::pair<unsigned_int_const_,int>,struct__STL::_Select1st<struct__STL::pair<unsigned_int_const_,int>_>,struct__STL::less<unsigned_int>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_int_const_,int>_>_>
  *this_00;
  _Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
  *p_Var1;
  _Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
  *p_Var2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_c = ExceptionList;
  puStack_8 = &LAB_005c93b8;
  this_00 = (_Rb_tree<unsigned_int,struct__STL::pair<unsigned_int_const_,int>,struct__STL::_Select1st<struct__STL::pair<unsigned_int_const_,int>_>,struct__STL::less<unsigned_int>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_int_const_,int>_>_>
             *)(this + 8);
  ExceptionList = &local_c;
  *(undefined ***)this = &_vftable_;
  local_4 = 0;
  if (*(int *)(this + 0xc) != 0) {
    p_Var2 = *(_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
               **)(*(int *)this_00 + 4);
    while (p_Var2 != (_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
                      *)0x0) {
      _STL::
      _Rb_tree<unsigned_int,struct__STL::pair<unsigned_int_const_,int>,struct__STL::_Select1st<struct__STL::pair<unsigned_int_const_,int>_>,struct__STL::less<unsigned_int>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_int_const_,int>_>_>
      ::M_erase(this_00,*(_Rb_tree_node<struct__STL::pair<unsigned_int_const_,int>_> **)
                         (p_Var2 + 0xc));
      p_Var1 = *(_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
                 **)(p_Var2 + 8);
      _STL::
      _STLP_alloc_proxy<struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>*,struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
      ::deallocate((_STLP_alloc_proxy<struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>*,struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
                    *)this_00,p_Var2,1);
      p_Var2 = p_Var1;
    }
    *(int *)(*(int *)this_00 + 8) = *(int *)this_00;
    *(undefined4 *)(*(int *)this_00 + 4) = 0;
    *(int *)(*(int *)this_00 + 0xc) = *(int *)this_00;
    *(undefined4 *)(this + 0xc) = 0;
  }
  ExtAlloc_Free_4(*(undefined4 *)this_00);
  ExceptionList = local_c;
  return;
}




/* from: libgsclient:GSClientLIB.cpp
   addr: 005A11B0 */

void __thiscall
_STL::
_Rb_tree<unsigned_int,struct__STL::pair<unsigned_int_const_,int>,struct__STL::_Select1st<struct__STL::pair<unsigned_int_const_,int>_>,struct__STL::less<unsigned_int>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_int_const_,int>_>_>
::clear(_Rb_tree<unsigned_int,struct__STL::pair<unsigned_int_const_,int>,struct__STL::_Select1st<struct__STL::pair<unsigned_int_const_,int>_>,struct__STL::less<unsigned_int>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_int_const_,int>_>_>
        *this)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(this + 4) != 0) {
    iVar2 = *(int *)(*(int *)this + 4);
    while (iVar2 != 0) {
      M_erase(this,*(_Rb_tree_node<struct__STL::pair<unsigned_int_const_,int>_> **)(iVar2 + 0xc));
      iVar1 = *(int *)(iVar2 + 8);
      ExtAlloc_Free_4(iVar2);
      iVar2 = iVar1;
    }
    *(int *)(*(int *)this + 8) = *(int *)this;
    *(undefined4 *)(*(int *)this + 4) = 0;
    *(int *)(*(int *)this + 0xc) = *(int *)this;
    *(undefined4 *)(this + 4) = 0;
  }
  return;
}




/* from: libgsclient:GSClientLIB.cpp
   addr: 005A1200 */

void __thiscall
_STL::
_Rb_tree<unsigned_int,struct__STL::pair<unsigned_int_const_,int>,struct__STL::_Select1st<struct__STL::pair<unsigned_int_const_,int>_>,struct__STL::less<unsigned_int>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_int_const_,int>_>_>
::M_erase(_Rb_tree<unsigned_int,struct__STL::pair<unsigned_int_const_,int>,struct__STL::_Select1st<struct__STL::pair<unsigned_int_const_,int>_>,struct__STL::less<unsigned_int>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_int_const_,int>_>_>
          *this,_Rb_tree_node<struct__STL::pair<unsigned_int_const_,int>_> *param_1)

{
  _Rb_tree_node<struct__STL::pair<unsigned_int_const_,int>_> *p_Var1;
  
  if (param_1 != (_Rb_tree_node<struct__STL::pair<unsigned_int_const_,int>_> *)0x0) {
    do {
      M_erase(this,*(_Rb_tree_node<struct__STL::pair<unsigned_int_const_,int>_> **)(param_1 + 0xc));
      p_Var1 = *(_Rb_tree_node<struct__STL::pair<unsigned_int_const_,int>_> **)(param_1 + 8);
      ExtAlloc_Free_4(param_1);
      param_1 = p_Var1;
    } while (p_Var1 != (_Rb_tree_node<struct__STL::pair<unsigned_int_const_,int>_> *)0x0);
  }
  return;
}




/* from: libgsclient:GSClientLIB.cpp
   addr: 005A1230 */

bool __cdecl
_STL::operator<(basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>
                *param_1,
               basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>
               *param_2)

{
  basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> **ppbVar1;
  basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *pbVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  bool bVar6;
  bool bVar7;
  
  pbVar4 = *(byte **)param_1;
  pbVar5 = *(byte **)param_2;
  param_1 = (basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *)
            (*(int *)(param_1 + 4) - (int)pbVar4);
  param_2 = (basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *)
            (*(int *)(param_2 + 4) - (int)pbVar5);
  ppbVar1 = &param_2;
  if ((int)param_1 <= (int)param_2) {
    ppbVar1 = &param_1;
  }
  pbVar2 = *ppbVar1;
  bVar6 = false;
  uVar3 = 0;
  bVar7 = true;
  do {
    if (pbVar2 == (basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>
                   *)0x0) break;
    pbVar2 = pbVar2 + -1;
    bVar6 = *pbVar4 < *pbVar5;
    bVar7 = *pbVar4 == *pbVar5;
    pbVar4 = pbVar4 + 1;
    pbVar5 = pbVar5 + 1;
  } while (bVar7);
  if (!bVar7) {
    uVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
  }
  if (uVar3 == 0) {
    if ((int)param_1 < (int)param_2) {
      return true;
    }
    uVar3 = (uint)((int)param_2 < (int)param_1);
  }
  return (int)uVar3 < 0;
}




/* from: libgsclient:GSClientLIB.cpp
   addr: 005A12A0 */

int __cdecl
_STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::M_compare
          (char *param_1,char *param_2,char *param_3,char *param_4)

{
  char **ppcVar1;
  uint uVar2;
  char *pcVar3;
  byte *pbVar4;
  bool bVar5;
  bool bVar6;
  
  pbVar4 = (byte *)param_1;
  param_1 = param_2 + -(int)param_1;
  param_2 = param_4 + -(int)param_3;
  ppcVar1 = &param_2;
  if ((int)param_1 <= (int)param_2) {
    ppcVar1 = &param_1;
  }
  pcVar3 = *ppcVar1;
  bVar5 = false;
  uVar2 = 0;
  bVar6 = true;
  do {
    if (pcVar3 == (char *)0x0) break;
    pcVar3 = pcVar3 + -1;
    bVar5 = *pbVar4 < (byte)*param_3;
    bVar6 = *pbVar4 == *param_3;
    pbVar4 = pbVar4 + 1;
    param_3 = (char *)((byte *)param_3 + 1);
  } while (bVar6);
  if (!bVar6) {
    uVar2 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
  }
  if (uVar2 == 0) {
    if ((int)param_1 < (int)param_2) {
      return -1;
    }
    uVar2 = (uint)((int)param_2 < (int)param_1);
  }
  return uVar2;
}

