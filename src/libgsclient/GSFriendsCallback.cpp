
/* from: libgsclient:GSFriendsCallback.cpp
   addr: 005AA150 */

void __thiscall clFriendsCB::clFriendsCB(clFriendsCB *this)

{
  int in_stack_00000004;
  
  if (in_stack_00000004 != 0) {
    *(undefined1 **)(this + 4) = &_vbtable__for__clFriendsCB__;
    *(undefined8 **)(this + 0x44) = &_vbtable__for__clExtalloc_Override_Baseclass__;
    *(undefined ***)(this + 0x40) = &clExtalloc_Override_Baseclass::_vftable_;
  }
  *(undefined ***)this = &_vftable__for__clFriendsCallbacks__;
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
  return;
}




/* from: libgsclient:GSFriendsCallback.cpp
   addr: 005AA1C0
   addr: 005AA1C0 */

void * __thiscall clFriendsCB::_vector_deleting_destructor_(clFriendsCB *this,uint param_1)

{
  ~clFriendsCB(this);
  *(undefined ***)this = &clExtalloc_Override_Baseclass::_vftable_;
  if ((param_1 & 1) != 0) {
    ExtAlloc_Free_4(this + -0x40);
  }
  return this + -0x40;
}




/* from: libgsclient:GSFriendsCallback.cpp
   addr: 005AA1F0 */

void __thiscall clFriendsCB::~clFriendsCB(clFriendsCB *this)

{
  *(undefined ***)(this + -0x40) = &_vftable__for__clFriendsCallbacks__;
  *(undefined ***)(this + *(int *)(*(int *)(this + -0x3c) + 8) + -0x3c) =
       &_vftable__for__clExtalloc_Override_Baseclass__;
  return;
}




/* from: libgsclient:GSFriendsCallback.cpp
   addr: 005AA210 */

void __thiscall
clFriendsCB::FriendsRcv_AddFriend(clFriendsCB *this,uchar param_1,int param_2,char *param_3)

{
  if (*(code **)(this + 0xc) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005aa21f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this + 0xc))();
    return;
  }
  return;
}




/* from: libgsclient:GSFriendsCallback.cpp
   addr: 005AA230 */

void __thiscall
clFriendsCB::FriendsRcv_GetSession
          (clFriendsCB *this,uchar param_1,int param_2,char *param_3,char *param_4,int param_5,
          int param_6,int param_7,int param_8,int param_9,int param_10,char *param_11,int param_12,
          char *param_13,char *param_14)

{
  if (*(code **)(this + 0x14) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005aa23f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this + 0x14))();
    return;
  }
  return;
}




/* from: libgsclient:GSFriendsCallback.cpp
   addr: 005AA270 */

void __thiscall
clFriendsCB::FriendsRcv_PagePlayer(clFriendsCB *this,uchar param_1,int param_2,char *param_3)

{
  if (*(code **)(this + 0x20) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005aa27f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this + 0x20))();
    return;
  }
  return;
}




/* from: libgsclient:GSFriendsCallback.cpp
   addr: 005AA2A0 */

void __thiscall
clFriendsCB::FriendsRcv_PeerPlayer(clFriendsCB *this,uchar param_1,int param_2,char *param_3)

{
  if (*(code **)(this + 0x28) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005aa2af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this + 0x28))();
    return;
  }
  return;
}




/* from: libgsclient:GSFriendsCallback.cpp
   addr: 005AA2C0 */

void __thiscall clFriendsCB::FriendsRcv_ChangeFriend(clFriendsCB *this,uchar param_1,int param_2)

{
  if (*(code **)(this + 0x2c) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005aa2cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this + 0x2c))();
    return;
  }
  return;
}




/* from: libgsclient:GSFriendsCallback.cpp
   addr: 005AA2E0 */

void __thiscall clFriendsCB::FriendsRcv_StatusChange(clFriendsCB *this,uchar param_1,int param_2)

{
  if (*(code **)(this + 0x30) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005aa2ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this + 0x30))();
    return;
  }
  return;
}




/* from: libgsclient:GSFriendsCallback.cpp
   addr: 005AA310 */

void __thiscall
clFriendsCB::FriendsRcv_SearchPlayer
          (clFriendsCB *this,uchar param_1,int param_2,char *param_3,int param_4,char *param_5)

{
  if (*(code **)(this + 0x38) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005aa31f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this + 0x38))();
    return;
  }
  return;
}




/* from: libgsclient:GSFriendsCallback.cpp
   addr: 005AA330 */

void __thiscall
clFriendsCB::FriendsRcv_ScoreCard
          (clFriendsCB *this,uchar param_1,int param_2,char *param_3,char *param_4,char *param_5)

{
  if (*(code **)(this + 0x3c) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005aa33f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this + 0x3c))();
    return;
  }
  return;
}

