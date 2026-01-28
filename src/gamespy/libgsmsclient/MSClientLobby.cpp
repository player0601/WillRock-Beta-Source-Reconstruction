
/* from: libgsmsclient:MSClientLobby.cpp
   addr: 0058D9A0 */

void __thiscall
clMSClientClass::LobbyRcv_LoginReply(clMSClientClass *this,uchar param_1,int param_2)

{
  if (param_1 == '\'') {
    (**(code **)(*(int *)(this + -0xc) + 0x28))(param_2,0,0);
  }
  return;
}




/* from: libgsmsclient:MSClientLobby.cpp
   addr: 0058D9C0 */

void __thiscall clMSClientClass::LobbyRcv_LobbyDisconnection(clMSClientClass *this,int param_1)

{
  if (((this[0xfd] != (clMSClientClass)0x0) && (*(int *)(this + 0xf4) != 0)) &&
     (*(int *)(*(int *)(this + 0xf4) + 4) == param_1)) {
    (**(code **)(*(int *)(this + -0xc) + 0x34))();
    clGLClient::FriendsSend_Disconnect((clGLClient *)(this + -0xc));
  }
  LobbyDisconnect(this + -0xc);
  return;
}




/* from: libgsmsclient:MSClientLobby.cpp
   addr: 0058DA10 */

void __thiscall clMSClientClass::LobbyRcv_LobbyDisconnectAll(clMSClientClass *this)

{
  if (this[0xfd] != (clMSClientClass)0x0) {
    (**(code **)(*(int *)(this + -0xc) + 0x34))();
    clGLClient::FriendsSend_Disconnect((clGLClient *)(this + -0xc));
  }
  LobbyDisconnect(this + -0xc);
  return;
}




/* from: libgsmsclient:MSClientLobby.cpp
   addr: 0058DA40 */

void __thiscall
clMSClientClass::LobbyRcv_JoinLobbyReply
          (clMSClientClass *this,uchar param_1,int param_2,char *param_3,int param_4,int param_5)

{
  _STL::
  _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
  ::
  ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
            ((_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
              *)param_5);
  return;
}




/* from: libgsmsclient:MSClientLobby.cpp
   addr: 0058DA60 */

void __thiscall
clMSClientClass::LobbyRcv_JoinRoomReply
          (clMSClientClass *this,uchar param_1,int param_2,char *param_3,int param_4,int param_5)

{
  _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
  *this_00;
  
  _STL::
  _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
  ::
  ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
            ((_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
              *)this);
  if (param_1 == '\'') {
    _STL::
    _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
    ::
    ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
              (this_00);
    (**(code **)(*(int *)(this + -0xc) + 0x28))(param_2,param_5,param_4);
  }
  return;
}




/* from: libgsmsclient:MSClientLobby.cpp
   addr: 0058DAB0 */

void __thiscall
clMSClientClass::LobbyRcv_NewRoom
          (clMSClientClass *this,short param_1,char *param_2,int param_3,int param_4,int param_5,
          int param_6,short param_7,char *param_8,char *param_9,char *param_10,char *param_11,
          char *param_12,void *param_13,int param_14,uint param_15,uint param_16,uint param_17,
          uint param_18,char *param_19,char *param_20,int param_21)

{
  time_t tVar1;
  undefined2 in_stack_00000006;
  
  _STL::
  _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
  ::
  ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
            ((_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
              *)this);
  if (this[0xfc] != (clMSClientClass)0x0) {
    if ((param_6 & 8U) != 0) {
      (**(code **)(*(int *)(this + -0xc) + 0x24))
                (param_4,param_3,_param_1,param_2,param_6,param_8,param_9,param_10,param_11,param_12
                 ,param_13,param_14,param_15,param_16,param_17,param_18,param_19,param_20,param_21);
    }
    tVar1 = time((time_t *)0x0);
    *(int *)(this + 0xf0) = (int)tVar1 + 3;
  }
  return;
}




/* from: libgsmsclient:MSClientLobby.cpp
   addr: 0058DB60 */

void __thiscall
clMSClientClass::LobbyRcv_NewLobby
          (clMSClientClass *this,short param_1,char *param_2,int param_3,int param_4,int param_5,
          int param_6,short param_7,char *param_8,char *param_9,char *param_10,void *param_11,
          int param_12,uint param_13,uint param_14,int param_15)

{
  list<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_> *this_00;
  undefined4 *puVar1;
  int iVar2;
  _List_base<class_LobbyInfo,class_ExtAlloc::Allocator<class_LobbyInfo>_> *this_01;
  _List_node<class_LobbyInfo> *p_Var3;
  time_t tVar4;
  undefined1 *local_4c;
  int local_48;
  int local_44;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c7e04;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  _STL::
  _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
  ::
  ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
            ((_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
              *)param_2);
  local_4c = &LobbyInfo::_vbtable_;
  local_4 = 0;
  local_48 = param_4;
  local_44 = param_3;
  if (*(int *)(this + 0xf8) == 0) {
    this_01 = (_List_base<class_LobbyInfo,class_ExtAlloc::Allocator<class_LobbyInfo>_> *)
              ExtAlloc_Malloc_4(8);
    if (this_01 == (_List_base<class_LobbyInfo,class_ExtAlloc::Allocator<class_LobbyInfo>_> *)0x0) {
      this_01 = (_List_base<class_LobbyInfo,class_ExtAlloc::Allocator<class_LobbyInfo>_> *)0x0;
    }
    else {
      *(undefined8 **)(this_01 + 4) = &LobbyInfoList::_vbtable_;
      local_4 = 4;
      _STL::_List_base<class_LobbyInfo,class_ExtAlloc::Allocator<class_LobbyInfo>_>::
      List_base<class_LobbyInfo,class_ExtAlloc::Allocator<class_LobbyInfo>_>
                (this_01,(Allocator<class_LobbyInfo> *)&param_10);
      local_4 = 0;
    }
    local_4 = local_4 & 0xffffff00;
    *(_List_base<class_LobbyInfo,class_ExtAlloc::Allocator<class_LobbyInfo>_> **)(this + 0xf8) =
         this_01;
  }
  this_00 = *(list<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_> **)
             (this + 0xf8);
  _STL::list<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_>::end(this_00);
  p_Var3 = _STL::list<class_LobbyInfo,class_ExtAlloc::Allocator<class_LobbyInfo>_>::M_create_node
                     ((list<class_LobbyInfo,class_ExtAlloc::Allocator<class_LobbyInfo>_> *)this_00,
                      (LobbyInfo *)&local_4c);
  puVar1 = *(undefined4 **)(param_10 + 4);
  *(char **)p_Var3 = param_10;
  *(undefined4 **)(p_Var3 + 4) = puVar1;
  *puVar1 = p_Var3;
  *(_List_node<class_LobbyInfo> **)(param_10 + 4) = p_Var3;
  if (this[0xfc] != (clMSClientClass)0x0) {
    clGLClient::LobbySend_GetGroupInfo((clGLClient *)(this + -0xc),param_3,param_4,0x100);
    tVar4 = time((time_t *)0x0);
    *(int *)(this + 0xf0) = (int)tVar4 + 3;
  }
  if (((this[0xfe] != (clMSClientClass)0x0) && (iVar2 = *(int *)(this + 0xf4), iVar2 != 0)) &&
     (*(int *)(iVar2 + 4) == param_4)) {
    clGLClient::LobbySend_JoinRoom
              ((clGLClient *)(this + -0xc),*(int *)(iVar2 + 8),*(int *)(iVar2 + 4),
               (char *)(iVar2 + 0x2d),'\0',(char *)(iVar2 + 0xc),0);
    this[0xfe] = (clMSClientClass)0x0;
  }
  ExceptionList = local_c;
  return;
}




/* from: libgsmsclient:MSClientLobby.cpp
   addr: 0058DCC0 */

void __thiscall
clMSClientClass::LobbyRcv_RoomInfo
          (clMSClientClass *this,short param_1,char *param_2,int param_3,int param_4,int param_5,
          int param_6,short param_7,char *param_8,char *param_9,char *param_10,char *param_11,
          char *param_12,void *param_13,int param_14,uint param_15,uint param_16,uint param_17,
          uint param_18,char *param_19,char *param_20,int param_21)

{
  undefined2 in_stack_00000006;
  
  _STL::
  _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
  ::
  ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
            ((_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
              *)this);
  (**(code **)(*(int *)(this + -0xc) + 0x24))
            (param_4,param_3,_param_1,param_2,param_6,param_8,param_9,param_10,param_11,param_12,
             param_13,param_14,param_15,param_16,param_17,param_18,param_19,param_20,param_21);
  return;
}




/* from: libgsmsclient:MSClientLobby.cpp
   addr: 0058DD50 */

void __thiscall
clMSClientClass::LobbyRcv_LobbyInfo
          (clMSClientClass *this,short param_1,char *param_2,int param_3,int param_4,int param_5,
          int param_6,short param_7,char *param_8,char *param_9,char *param_10,void *param_11,
          int param_12,uint param_13,uint param_14,int param_15)

{
  _STL::
  _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
  ::
  ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
            ((_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
              *)param_2);
  return;
}




/* from: libgsmsclient:MSClientLobby.cpp
   addr: 0058DD70 */

void __thiscall
clMSClientClass::LobbyRcv_GroupInfoGet(clMSClientClass *this,uchar param_1,int param_2,int param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0058dd7e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(this + -0xc) + 0x28))();
  return;
}




/* from: libgsmsclient:MSClientLobby.cpp
   addr: 0058DD90 */

void __thiscall
clMSClientClass::LobbyRcv_MatchStarted(clMSClientClass *this,int param_1,int param_2,uint param_3)

{
  (**(code **)(*(int *)(this + -0xc) + 0x44))(param_2,param_1,param_3);
  return;
}




/* from: libgsmsclient:MSClientLobby.cpp
   addr: 0058DDB0 */

void __thiscall
clMSClientClass::LobbyRcv_SubmitMatchResultReply
          (clMSClientClass *this,uchar param_1,int param_2,int param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0058ddbe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(this + -0xc) + 0x48))();
  return;
}




/* from: libgsmsclient:MSClientLobby.cpp
   addr: 0058DDD0 */

void __thiscall
clMSClientClass::LobbyRcv_GameStarted
          (clMSClientClass *this,int param_1,int param_2,void *param_3,int param_4,char *param_5,
          char *param_6,ushort param_7)

{
  undefined2 in_stack_0000001e;
  
  (**(code **)(*(int *)(this + -0xc) + 0x3c))
            (param_2,param_1,param_3,param_4,param_5,param_6,_param_7);
  this[0xfd] = (clMSClientClass)0x1;
  return;
}




/* from: libgsmsclient:MSClientLobby.cpp
   addr: 0058DE10 */

void __thiscall
clMSClientClass::LobbyRcv_GetAlternateGroupInfoReply
          (clMSClientClass *this,uchar param_1,int param_2,void *param_3,int param_4,int param_5,
          int param_6)

{
  if (param_1 == '&') {
    (**(code **)(*(int *)(this + -0xc) + 0x40))(param_6,param_5,param_3,param_4);
    return;
  }
  (**(code **)(*(int *)(this + -0xc) + 0x28))(param_2,param_6,param_5);
  return;
}




/* from: libgsmsclient:MSClientLobby.cpp
   addr: 0058DE50 */

uchar __thiscall clMSClientClass::LobbyDisconnect(clMSClientClass *this)

{
  list<class_clRcvElement*> *this_00;
  
  clGLClient::LobbySend_DisconnectAll((clGLClient *)this);
  this_00 = *(list<class_clRcvElement*> **)(this + 0x104);
  this[0x10b] = (clMSClientClass)0x0;
  this[0x109] = (clMSClientClass)0x0;
  this[0x10a] = (clMSClientClass)0x0;
  this[0x108] = (clMSClientClass)0x0;
  *(undefined4 *)(this + 0xfc) = 0;
  if (this_00 != (list<class_clRcvElement*> *)0x0) {
    ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>(this_00);
    ExtAlloc_Free_4(this_00);
    *(undefined4 *)(this + 0x104) = 0;
  }
  if (*(int *)(this + 0x100) != 0) {
    ExtAlloc_Free_4(*(int *)(this + 0x100));
    *(undefined4 *)(this + 0x100) = 0;
  }
  return '\x01';
}




/* from: libgsmsclient:MSClientLobby.cpp
   addr: 0058DEC0 */

uchar __thiscall clMSClientClass::LobbyConnect(clMSClientClass *this)

{
  uchar uVar1;
  
  if (this[0x10b] == (clMSClientClass)0x0) {
    uVar1 = clGLClient::LobbySend_Login((clGLClient *)this,(char *)(this + 0xda),'\x01',1);
    if (uVar1 == '\0') {
      return '\0';
    }
  }
  this[0x10b] = (clMSClientClass)0x1;
  return '\x01';
}




/* from: libgsmsclient:MSClientLobby.cpp
   addr: 0058DEF0 */

uchar __thiscall clMSClientClass::RequestGameServers(clMSClientClass *this,char *param_1)

{
  int *piVar1;
  uchar uVar2;
  int iVar3;
  int *piVar4;
  time_t tVar5;
  
  iVar3 = strncmp((char *)(this + 0xda),param_1,0x21);
  if (iVar3 != 0) {
    strncpy((char *)(this + 0xda),param_1,0x21);
    if (this[0xfa] != (clMSClientClass)0x0) {
      this[0xfa] = (clMSClientClass)0x0;
    }
    LobbyDisconnect(this);
  }
  this[0x108] = (clMSClientClass)0x1;
  if (this[0x10b] != (clMSClientClass)0x0) {
    if (*(int **)(this + 0x104) != (int *)0x0) {
      piVar1 = (int *)**(int **)(this + 0x104);
      piVar4 = (int *)*piVar1;
      if (piVar4 != piVar1) {
        do {
          clGLClient::LobbySend_GetGroupInfo((clGLClient *)this,piVar4[4],piVar4[3],0x100);
          piVar4 = (int *)*piVar4;
        } while (piVar4 != (int *)**(int **)(this + 0x104));
      }
      tVar5 = time((time_t *)0x0);
      *(int *)(this + 0xfc) = (int)tVar5 + 3;
      return '\x01';
    }
    return '\0';
  }
  tVar5 = time((time_t *)0x0);
  *(int *)(this + 0xfc) = (int)tVar5 + 3;
  uVar2 = LobbyConnect(this);
  return uVar2;
}




/* from: libgsmsclient:MSClientLobby.cpp
   addr: 0058DFC0 */

uchar __thiscall
clMSClientClass::JoinGameServer
          (clMSClientClass *this,int param_1,int param_2,char *param_3,char *param_4,char *param_5)

{
  uchar uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = strncmp((char *)(this + 0xda),param_5,0x21);
  if (iVar2 != 0) {
    strncpy((char *)(this + 0xda),param_5,0x21);
    if (this[0xfa] != (clMSClientClass)0x0) {
      this[0xfa] = (clMSClientClass)0x0;
    }
  }
  LobbyDisconnect(this);
  uVar1 = LobbyConnect(this);
  if (uVar1 == '\0') {
    return '\0';
  }
  if (*(int *)(this + 0x100) != 0) {
    ExtAlloc_Free_4(*(int *)(this + 0x100));
  }
  puVar3 = (undefined4 *)ExtAlloc_Malloc_4(0x40);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = &LobbyInfo::_vbtable_;
  }
  *(undefined4 **)(this + 0x100) = puVar3;
  puVar3[1] = param_1;
  *(int *)(*(int *)(this + 0x100) + 8) = param_2;
  iVar2 = *(int *)(this + 0x100);
  strncpy((char *)(iVar2 + 0xc),param_4,0x21);
  if (*(char *)(iVar2 + 0x2c) != '\0') {
    *(undefined1 *)(iVar2 + 0x2c) = 0;
  }
  iVar2 = *(int *)(this + 0x100);
  strncpy((char *)(iVar2 + 0x2d),param_3,0x11);
  if (*(char *)(iVar2 + 0x3d) != '\0') {
    *(undefined1 *)(iVar2 + 0x3d) = 0;
  }
  this[0x10a] = (clMSClientClass)0x1;
  clGLClient::FriendsSend_Login((clGLClient *)this,7,0);
  return '\x01';
}




/* from: libgsmsclient:MSClientLobby.cpp
   addr: 0058E0C0 */

uchar __thiscall clMSClientClass::LeaveGameServer(clMSClientClass *this,int param_1,int param_2)

{
  LobbyDisconnect(this);
  clGLClient::FriendsSend_Disconnect((clGLClient *)this);
  return '\x01';
}




/* from: libgsmsclient:MSClientLobby.cpp
   addr: 0058E0E0 */

uchar __thiscall clMSClientClass::GameServerConnected(clMSClientClass *this,int param_1,int param_2)

{
  uchar uVar1;
  
  uVar1 = clGLClient::LobbySend_GameConnected((clGLClient *)this,param_2,param_1);
  return uVar1;
}




/* from: libgsmsclient:MSClientLobby.cpp
   addr: 0058E120 */

uchar __thiscall clMSClientClass::SubmitMatchResult(clMSClientClass *this,int param_1,int param_2)

{
  uchar uVar1;
  
  uVar1 = clGLClient::LobbySend_SubmitMatchResult((clGLClient *)this,param_2,param_1);
  return uVar1;
}




/* from: libgsmsclient:MSClientLobby.cpp
   addr: 0058E150 */

uchar __thiscall clMSClientClass::MatchStarted(clMSClientClass *this,int param_1,int param_2)

{
  uchar uVar1;
  
  uVar1 = clGLClient::LobbySend_PlayerMatchStarted((clGLClient *)this,param_2,param_1);
  return uVar1;
}




/* from: libgsmsclient:MSClientLobby.cpp
   addr: 0058E170 */

uchar __thiscall clMSClientClass::MatchFinished(clMSClientClass *this,int param_1,int param_2)

{
  uchar uVar1;
  
  uVar1 = clGLClient::LobbySend_PlayerMatchFinished((clGLClient *)this,param_2,param_1);
  return uVar1;
}




/* from: libgsmsclient:MSClientLobby.cpp
   addr: 0058E190 */

_List_node<class_LobbyInfo> * __thiscall
_STL::list<class_LobbyInfo,class_ExtAlloc::Allocator<class_LobbyInfo>_>::M_create_node
          (list<class_LobbyInfo,class_ExtAlloc::Allocator<class_LobbyInfo>_> *this,
          LobbyInfo *param_1)

{
  _List_node<class_LobbyInfo> *p_Var1;
  int iVar2;
  _List_node<class_LobbyInfo> *p_Var3;
  _List_node<class_LobbyInfo> *p_Var4;
  
  p_Var1 = (_List_node<class_LobbyInfo> *)ExtAlloc_Malloc_4(0x48);
  if (p_Var1 + 8 != (_List_node<class_LobbyInfo> *)0x0) {
    *(undefined1 **)(p_Var1 + 8) = &LobbyInfo::_vbtable_;
    *(undefined4 *)(p_Var1 + 0xc) = *(undefined4 *)(param_1 + 4);
    *(undefined4 *)(p_Var1 + 0x10) = *(undefined4 *)(param_1 + 8);
    p_Var3 = (_List_node<class_LobbyInfo> *)(param_1 + 0xc);
    p_Var4 = p_Var1 + 0x14;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined4 *)p_Var4 = *(undefined4 *)p_Var3;
      p_Var3 = p_Var3 + 4;
      p_Var4 = p_Var4 + 4;
    }
    *p_Var4 = *p_Var3;
    *(undefined4 *)(p_Var1 + 0x35) = *(undefined4 *)(param_1 + 0x2d);
    *(undefined4 *)(p_Var1 + 0x39) = *(undefined4 *)(param_1 + 0x31);
    *(undefined4 *)(p_Var1 + 0x3d) = *(undefined4 *)(param_1 + 0x35);
    *(undefined4 *)(p_Var1 + 0x41) = *(undefined4 *)(param_1 + 0x39);
    p_Var1[0x45] = *(_List_node<class_LobbyInfo> *)(param_1 + 0x3d);
  }
  return p_Var1;
}




/* from: libgsmsclient:MSClientLobby.cpp
   addr: 0058E200 */

_List_base<class_LobbyInfo,class_ExtAlloc::Allocator<class_LobbyInfo>_> * __thiscall
_STL::_List_base<class_LobbyInfo,class_ExtAlloc::Allocator<class_LobbyInfo>_>::
List_base<class_LobbyInfo,class_ExtAlloc::Allocator<class_LobbyInfo>_>
          (_List_base<class_LobbyInfo,class_ExtAlloc::Allocator<class_LobbyInfo>_> *this,
          Allocator<class_LobbyInfo> *param_1)

{
  int iVar1;
  
  *(undefined4 *)this = 0;
  iVar1 = ExtAlloc_Malloc_4(0x48);
  *(int *)iVar1 = iVar1;
  *(int *)(iVar1 + 4) = iVar1;
  *(int *)this = iVar1;
  return this;
}

