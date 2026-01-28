
/* from: libgsclient:GSClientClass.cpp
   addr: 0059DBE0 */

clGLClient * __thiscall clGLClient::clGLClient(clGLClient *this)

{
  clFriendsCallbacks *pcVar1;
  clSessionCallbacks *pcVar2;
  clLobbyCallbacks *pcVar3;
  CGLClientLIB *pCVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c8e5a;
  local_c = ExceptionList;
  pcVar1 = (clFriendsCallbacks *)(this + 4);
  pcVar2 = (clSessionCallbacks *)(this + 8);
  pcVar3 = (clLobbyCallbacks *)(this + 0xc);
  ExceptionList = &local_c;
  *(undefined ***)pcVar1 = &clFriendsCallbacks::_vftable_;
  *(undefined ***)pcVar2 = &clSessionCallbacks::_vftable_;
  *(undefined ***)pcVar3 = &clLobbyCallbacks::_vftable_;
  *(undefined ***)this = &_vftable__for__clLoginCallbacks__;
  *(undefined ***)pcVar1 = &_vftable__for__clFriendsCallbacks__;
  *(undefined ***)pcVar2 = &_vftable__for__clSessionCallbacks__;
  *(undefined ***)pcVar3 = &_vftable__for__clLobbyCallbacks__;
  if (DAT_009645cc == '\0') {
    DAT_009645cc = '\x01';
  }
  pCVar4 = (CGLClientLIB *)ExtAlloc_Malloc_4(0x1c8);
  local_4 = 0;
  if (pCVar4 == (CGLClientLIB *)0x0) {
    pCVar4 = (CGLClientLIB *)0x0;
  }
  else {
    pCVar4 = (CGLClientLIB *)CGLClientLIB::CGLClientLIB(pCVar4);
  }
  local_4 = 0xffffffff;
  *(CGLClientLIB **)(this + 0x10) = pCVar4;
  CGLClientLIB::Login_FixCallbacks(pCVar4,(clLoginCallbacks *)this);
  CGLClientLIB::Friends_FixCallbacks(*(CGLClientLIB **)(this + 0x10),pcVar1);
  CGLClientLIB::Session_FixCallbacks(*(CGLClientLIB **)(this + 0x10),pcVar2);
  CGLClientLIB::Lobby_FixCallbacks(*(CGLClientLIB **)(this + 0x10),pcVar3);
  ExceptionList = local_c;
  return this;
}




/* from: libgsclient:GSClientClass.cpp
   addr: 0059DCB0
   addr: 0059DCB0 */

void * __thiscall clGLClient::_scalar_deleting_destructor_(clGLClient *this,uint param_1)

{
  ~clGLClient(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: libgsclient:GSClientClass.cpp
   addr: 0059DCD0 */

void __thiscall clGLClient::~clGLClient(clGLClient *this)

{
  CGLClientLIB *this_00;
  
  *(undefined ***)this = &_vftable__for__clLoginCallbacks__;
  *(undefined ***)(this + 4) = &_vftable__for__clFriendsCallbacks__;
  *(undefined ***)(this + 8) = &_vftable__for__clSessionCallbacks__;
  *(undefined ***)(this + 0xc) = &_vftable__for__clLobbyCallbacks__;
  if (DAT_009645cc != '\0') {
    DAT_009645cc = '\0';
  }
  this_00 = *(CGLClientLIB **)(this + 0x10);
  if (this_00 != (CGLClientLIB *)0x0) {
    CGLClientLIB::~CGLClientLIB(this_00);
    ExtAlloc_Free_4(this_00);
  }
  return;
}




/* from: libgsclient:GSClientClass.cpp
   addr: 0059DD30 */

uchar __thiscall clGLClient::LoginSend_Connect(clGLClient *this,char *param_1,ushort param_2)

{
  uchar uVar1;
  
  uVar1 = CGLClientLIB::LoginSend_Connect(*(CGLClientLIB **)(this + 0x10),param_1,(uint)param_2);
  return uVar1;
}




/* from: libgsclient:GSClientClass.cpp
   addr: 0059DD60 */

uchar __thiscall
clGLClient::LoginSend_LoginRouter
          (clGLClient *this,char *param_1,char *param_2,char *param_3,uchar param_4)

{
  uchar uVar1;
  
  uVar1 = CGLClientLIB::LoginSend_LoginRouter
                    (*(CGLClientLIB **)(this + 0x10),param_1,param_2,param_3,param_4);
  return uVar1;
}




/* from: libgsclient:GSClientClass.cpp
   addr: 0059DDE0 */

uchar __thiscall
clGLClient::LobbySend_Login(clGLClient *this,char *param_1,uchar param_2,ushort param_3)

{
  uchar uVar1;
  
  uVar1 = CGLClientLIB::LobbySend_Login(*(CGLClientLIB **)(this + 0x10),param_1,param_2,param_3);
  return uVar1;
}




/* from: libgsclient:GSClientClass.cpp
   addr: 0059DE10 */

uchar __thiscall
clGLClient::LobbySend_JoinRoom
          (clGLClient *this,int param_1,int param_2,char *param_3,uchar param_4,char *param_5,
          int param_6)

{
  uchar uVar1;
  
  uVar1 = CGLClientLIB::LobbySend_JoinRoom
                    (*(CGLClientLIB **)(this + 0x10),param_1,param_2,param_3,param_4,param_5,param_6
                    );
  return uVar1;
}

