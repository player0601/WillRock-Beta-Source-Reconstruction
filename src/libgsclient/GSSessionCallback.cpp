
/* from: libgsclient:GSSessionCallback.cpp
   addr: 005A9E30 */

void __thiscall clSessionCB::clSessionCB(clSessionCB *this)

{
  int in_stack_00000004;
  
  if (in_stack_00000004 != 0) {
    *(undefined1 **)(this + 4) = &_vbtable__for__clSessionCB__;
    *(undefined8 **)(this + 0x74) = &_vbtable__for__clExtalloc_Override_Baseclass__;
    *(undefined ***)(this + 0x70) = &clExtalloc_Override_Baseclass::_vftable_;
  }
  *(undefined ***)this = &_vftable__for__clSessionCallbacks__;
  *(undefined ***)(this + *(int *)(*(int *)(this + 4) + 8) + 4) =
       &_vftable__for__clExtalloc_Override_Baseclass__;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 100) = 0;
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x6c) = 0;
  return;
}




/* from: libgsclient:GSSessionCallback.cpp
   addr: 005A9EC0
   addr: 005A9EC0 */

void * __thiscall clSessionCB::_scalar_deleting_destructor_(clSessionCB *this,uint param_1)

{
  ~clSessionCB(this);
  *(undefined ***)this = &clExtalloc_Override_Baseclass::_vftable_;
  if ((param_1 & 1) != 0) {
    ExtAlloc_Free_4(this + -0x70);
  }
  return this + -0x70;
}




/* from: libgsclient:GSSessionCallback.cpp
   addr: 005A9EF0 */

void __thiscall clSessionCB::~clSessionCB(clSessionCB *this)

{
  *(undefined ***)(this + -0x70) = &_vftable__for__clSessionCallbacks__;
  *(undefined ***)(this + *(int *)(*(int *)(this + -0x6c) + 8) + -0x6c) =
       &_vftable__for__clExtalloc_Override_Baseclass__;
  return;
}




/* from: libgsclient:GSSessionCallback.cpp
   addr: 005A9F10 */

void __thiscall
clSessionCB::SessionRcv_BeginGameResult(clSessionCB *this,uchar param_1,int param_2,int param_3)

{
  if (*(code **)(this + 8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005a9f1f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this + 8))();
    return;
  }
  return;
}




/* from: libgsclient:GSSessionCallback.cpp
   addr: 005A9F30 */

void __thiscall
clSessionCB::SessionRcv_BeginClientHostGameResult
          (clSessionCB *this,uchar param_1,int param_2,int param_3,char *param_4,char *param_5,
          char *param_6,int param_7)

{
  if (*(code **)(this + 0xc) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005a9f3f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this + 0xc))();
    return;
  }
  return;
}




/* from: libgsclient:GSSessionCallback.cpp
   addr: 005A9F50 */

void __thiscall
clSessionCB::SessionRcv_CreateSession
          (clSessionCB *this,uchar param_1,int param_2,char *param_3,int param_4)

{
  if (*(code **)(this + 0x10) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005a9f5f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this + 0x10))();
    return;
  }
  return;
}




/* from: libgsclient:GSSessionCallback.cpp
   addr: 005A9FB0
   addr: 005A9FB0 */

void __thiscall
clLobbyCB::LobbyRcv_GroupInfoGet(clLobbyCB *this,uchar param_1,int param_2,int param_3)

{
  if (*(code **)(this + 0x24) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005a9fbf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this + 0x24))();
    return;
  }
  return;
}




/* from: libgsclient:GSSessionCallback.cpp
   addr: 005A9FD0 */

void __thiscall clSessionCB::SessionRcv_LoginResult(clSessionCB *this,uchar param_1,int param_2)

{
  if (*(code **)(this + 0x28) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005a9fdf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this + 0x28))();
    return;
  }
  return;
}




/* from: libgsclient:GSSessionCallback.cpp
   addr: 005AA030 */

void __thiscall
clSessionCB::SessionRcv_PlayerJoinSession
          (clSessionCB *this,char *param_1,int param_2,uchar param_3,char *param_4,char *param_5)

{
  if (*(code **)(this + 0x3c) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005aa03f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this + 0x3c))();
    return;
  }
  return;
}




/* from: libgsclient:GSSessionCallback.cpp
   addr: 005AA090 */

void __thiscall
clSessionCB::SessionRcv_SetGroupData(clSessionCB *this,uchar param_1,int param_2,int param_3)

{
  if (*(code **)(this + 0x50) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005aa09f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this + 0x50))();
    return;
  }
  return;
}




/* from: libgsclient:GSSessionCallback.cpp
   addr: 005AA0C0 */

void __thiscall
clSessionCB::SessionRcv_UpdatePlayerPing
          (clSessionCB *this,char *param_1,int param_2,uchar param_3,ushort param_4)

{
  if (*(code **)(this + 0x58) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005aa0d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this + 0x58))();
    return;
  }
  return;
}




/* from: libgsclient:GSSessionCallback.cpp
   addr: 005AA0E0 */

void __thiscall clSessionCB::SessionRcv_UpdateGroupPing(clSessionCB *this,int param_1,uchar param_2)

{
  if (*(code **)(this + 0x5c) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005aa0ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this + 0x5c))();
    return;
  }
  return;
}




/* from: libgsclient:GSSessionCallback.cpp
   addr: 005AA120 */

void __thiscall
clSessionCB::SessionRcv_SetGroupSZData(clSessionCB *this,uchar param_1,int param_2,int param_3)

{
  if (*(code **)(this + 0x68) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005aa12f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this + 0x68))();
    return;
  }
  return;
}

