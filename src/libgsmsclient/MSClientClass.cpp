
/* from: libgsmsclient:MSClientClass.cpp
   addr: 0058E220 */

clMSClientClass * __thiscall clMSClientClass::clMSClientClass(clMSClientClass *this)

{
  clGLClient::clGLClient((clGLClient *)this);
  *(undefined ***)this = &_vftable__for__clLoginCallbacks__;
  *(undefined ***)(this + 4) = &_vftable__for__clFriendsCallbacks__;
  *(undefined ***)(this + 8) = &_vftable__for__clSessionCallbacks__;
  *(undefined ***)(this + 0xc) = &_vftable__for__clLobbyCallbacks__;
  *(undefined4 *)(this + 0x100) = 0;
  this[0x10b] = (clMSClientClass)0x0;
  strncmp((char *)(this + 0xda),s_,0x21);
  *(undefined4 *)(this + 0xfc) = 0;
  return this;
}




/* from: libgsmsclient:MSClientClass.cpp
   addr: 0058E280
   addr: 0058E280 */

void * __thiscall clMSClientClass::_scalar_deleting_destructor_(clMSClientClass *this,uint param_1)

{
  ~clMSClientClass(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: libgsmsclient:MSClientClass.cpp
   addr: 0058E2A0 */

void __thiscall clMSClientClass::~clMSClientClass(clMSClientClass *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c7e18;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = &_vftable__for__clLoginCallbacks__;
  *(undefined ***)(this + 4) = &_vftable__for__clFriendsCallbacks__;
  *(undefined ***)(this + 8) = &_vftable__for__clSessionCallbacks__;
  *(undefined ***)(this + 0xc) = &_vftable__for__clLobbyCallbacks__;
  local_4 = 0;
  Uninitialize(this);
  local_4 = 0xffffffff;
  clGLClient::~clGLClient((clGLClient *)this);
  ExceptionList = local_c;
  return;
}




/* from: libgsmsclient:MSClientClass.cpp
   addr: 0058E310 */

uchar __thiscall
clMSClientClass::Initialize
          (clMSClientClass *this,char *param_1,ushort param_2,char *param_3,char *param_4,
          char *param_5)

{
  uchar uVar1;
  
  strncpy((char *)(this + 0x56),param_1,0x81);
  if (this[0xd6] != (clMSClientClass)0x0) {
    this[0xd6] = (clMSClientClass)0x0;
  }
  *(ushort *)(this + 0xd8) = param_2;
  strncpy((char *)(this + 0x14),param_3,0x10);
  if (this[0x23] != (clMSClientClass)0x0) {
    this[0x23] = (clMSClientClass)0x0;
  }
  strncpy((char *)(this + 0x24),param_4,0x10);
  if (this[0x33] != (clMSClientClass)0x0) {
    this[0x33] = (clMSClientClass)0x0;
  }
  strncpy((char *)(this + 0x35),param_5,0x21);
  if (this[0x55] != (clMSClientClass)0x0) {
    this[0x55] = (clMSClientClass)0x0;
  }
  this[0x108] = (clMSClientClass)0x0;
  this[0x109] = (clMSClientClass)0x0;
  *(undefined4 *)(this + 0x104) = 0;
  uVar1 = StartLogin(this);
  return uVar1;
}




/* from: libgsmsclient:MSClientClass.cpp
   addr: 0058E3C0 */

uchar __thiscall clMSClientClass::Uninitialize(clMSClientClass *this)

{
  list<class_clRcvElement*> *this_00;
  
  if (*(int *)(this + 0x100) != 0) {
    ExtAlloc_Free_4(*(int *)(this + 0x100));
    *(undefined4 *)(this + 0x100) = 0;
  }
  this_00 = *(list<class_clRcvElement*> **)(this + 0x104);
  if (this_00 != (list<class_clRcvElement*> *)0x0) {
    ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>(this_00);
    ExtAlloc_Free_4(this_00);
    *(undefined4 *)(this + 0x104) = 0;
  }
  LobbyDisconnect(this);
  clGLClient::LoginSend_Disconnect((clGLClient *)this);
  return '\x01';
}




/* from: libgsmsclient:MSClientClass.cpp
   addr: 0058E420 */

uchar __thiscall clMSClientClass::Engine(clMSClientClass *this,uint param_1,uint param_2)

{
  uchar uVar1;
  time_t tVar2;
  
  uVar1 = clGLClient::Login_Engine((clGLClient *)this,500,800);
  if (uVar1 == '\0') {
    return '\0';
  }
  if (this[0x10b] != (clMSClientClass)0x0) {
    if (*(int *)(this + 0xfc) != 0) {
      tVar2 = time((time_t *)0x0);
      if (*(int *)(this + 0xfc) < (int)tVar2) {
        *(undefined4 *)(this + 0xfc) = 0;
        (**(code **)(*(int *)this + 0x38))();
        this[0x108] = (clMSClientClass)0x0;
      }
    }
    uVar1 = clGLClient::Lobby_Engine((clGLClient *)this,500,800);
    if (uVar1 == '\0') {
      return '\0';
    }
  }
  if (this[0x109] != (clMSClientClass)0x0) {
    clGLClient::Friends_Engine((clGLClient *)this,500,800);
  }
  return '\x01';
}

