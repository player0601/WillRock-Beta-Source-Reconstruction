
/* from: libgsclient:GSPersistentCallback.cpp
   addr: 005B2190 */

void __thiscall clPersistentCB::clPersistentCB(clPersistentCB *this)

{
  int in_stack_00000004;
  
  if (in_stack_00000004 != 0) {
    *(undefined1 **)(this + 4) = &_vbtable__for__clPersistentCB__;
    *(undefined8 **)(this + 0x1c) = &_vbtable__for__clExtalloc_Override_Baseclass__;
    *(undefined ***)(this + 0x18) = &clExtalloc_Override_Baseclass::_vftable_;
  }
  *(undefined ***)this = &_vftable__for__clPersistentCallbacks__;
  *(undefined ***)(this + *(int *)(*(int *)(this + 4) + 8) + 4) =
       &_vftable__for__clExtalloc_Override_Baseclass__;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  return;
}




/* from: libgsclient:GSPersistentCallback.cpp
   addr: 005B21E0
   addr: 005B21E0 */

void * __thiscall clPersistentCB::_scalar_deleting_destructor_(clPersistentCB *this,uint param_1)

{
  ~clPersistentCB(this);
  *(undefined ***)this = &clExtalloc_Override_Baseclass::_vftable_;
  if ((param_1 & 1) != 0) {
    ExtAlloc_Free_4(this + -0x18);
  }
  return this + -0x18;
}




/* from: libgsclient:GSPersistentCallback.cpp
   addr: 005B2210 */

void __thiscall clPersistentCB::~clPersistentCB(clPersistentCB *this)

{
  *(undefined ***)(this + -0x18) = &_vftable__for__clPersistentCallbacks__;
  *(undefined ***)(this + *(int *)(*(int *)(this + -0x14) + 8) + -0x14) =
       &_vftable__for__clExtalloc_Override_Baseclass__;
  return;
}




/* from: libgsclient:GSPersistentCallback.cpp
   addr: 005B2240 */

void __thiscall
clPersistentCB::PSRcv_GetDataReply
          (clPersistentCB *this,uchar param_1,int param_2,uint param_3,void *param_4,int param_5)

{
  if (*(code **)(this + 0x14) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005b224f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this + 0x14))();
    return;
  }
  return;
}




/* from: libgsclient:GSPersistentCallback.cpp
   addr: 005B2260
   addr: 005B2260 */

void __thiscall
clFriendsCB::FriendsRcv_DelFriend(clFriendsCB *this,uchar param_1,int param_2,uint param_3)

{
  if (*(code **)(this + 0x10) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005b226f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this + 0x10))();
    return;
  }
  return;
}

