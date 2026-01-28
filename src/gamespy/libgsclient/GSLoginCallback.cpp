
/* from: libgsclient:GSLoginCallback.cpp
   addr: 005AA350 */

void __thiscall clLoginCB::clLoginCB(clLoginCB *this)

{
  int in_stack_00000004;
  
  if (in_stack_00000004 != 0) {
    *(undefined1 **)(this + 4) = &_vbtable__for__clLoginCB__;
    *(undefined8 **)(this + 0x2c) = &_vbtable__for__clExtalloc_Override_Baseclass__;
    *(undefined ***)(this + 0x28) = &clExtalloc_Override_Baseclass::_vftable_;
  }
  *(undefined ***)this = &_vftable__for__clLoginCallbacks__;
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
  return;
}




/* from: libgsclient:GSLoginCallback.cpp
   addr: 005AA3B0
   addr: 005AA3B0 */

void * __thiscall clLoginCB::_vector_deleting_destructor_(clLoginCB *this,uint param_1)

{
  ~clLoginCB(this);
  *(undefined ***)this = &clExtalloc_Override_Baseclass::_vftable_;
  if ((param_1 & 1) != 0) {
    ExtAlloc_Free_4(this + -0x28);
  }
  return this + -0x28;
}




/* from: libgsclient:GSLoginCallback.cpp
   addr: 005AA3E0 */

void __thiscall clLoginCB::~clLoginCB(clLoginCB *this)

{
  *(undefined ***)(this + -0x28) = &_vftable__for__clLoginCallbacks__;
  *(undefined ***)(this + *(int *)(*(int *)(this + -0x24) + 8) + -0x24) =
       &_vftable__for__clExtalloc_Override_Baseclass__;
  return;
}




/* from: libgsclient:GSLoginCallback.cpp
   addr: 005AA400 */

void __thiscall
clLoginCB::LoginRcv_PlayerInfo
          (clLoginCB *this,uchar param_1,char *param_2,char *param_3,char *param_4,char *param_5,
          char *param_6,char *param_7,char *param_8,int param_9)

{
  if (*(code **)(this + 8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005aa40f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this + 8))();
    return;
  }
  return;
}




/* from: libgsclient:GSLoginCallback.cpp
   addr: 005AA420 */

void __thiscall
clLoginCB::LoginRcv_JoinWaitModuleResult
          (clLoginCB *this,uchar param_1,char *param_2,ushort param_3,int param_4)

{
  if (*(code **)(this + 0xc) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005aa437. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this + 0xc))();
    return;
  }
  return;
}




/* from: libgsclient:GSLoginCallback.cpp
   addr: 005AA440 */

void __thiscall clLoginCB::LoginRcv_LoginRouterResult(clLoginCB *this,uchar param_1,int param_2)

{
  if (*(code **)(this + 0x10) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005aa44f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this + 0x10))();
    return;
  }
  return;
}




/* from: libgsclient:GSLoginCallback.cpp
   addr: 005AA460 */

void __thiscall clLoginCB::LoginRcv_LoginWaitModuleResult(clLoginCB *this,uchar param_1,int param_2)

{
  if (*(code **)(this + 0x14) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005aa46f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this + 0x14))();
    return;
  }
  return;
}




/* from: libgsclient:GSLoginCallback.cpp
   addr: 005AA490 */

void __thiscall clLoginCB::LoginRcv_AccountCreationResult(clLoginCB *this,uchar param_1,int param_2)

{
  if (*(code **)(this + 0x20) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005aa49f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this + 0x20))();
    return;
  }
  return;
}




/* from: libgsclient:GSLoginCallback.cpp
   addr: 005AA4B0 */

void __thiscall clLoginCB::LoginRcv_ModifyUserResult(clLoginCB *this,uchar param_1,int param_2)

{
  if (*(code **)(this + 0x24) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005aa4bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this + 0x24))();
    return;
  }
  return;
}

