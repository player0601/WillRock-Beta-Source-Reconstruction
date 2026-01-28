
/* from: libgsclient:GSLobbyCallback.cpp
   addr: 005B2280 */

void __thiscall clLobbyCB::clLobbyCB(clLobbyCB *this)

{
  int in_stack_00000004;
  
  if (in_stack_00000004 != 0) {
    *(undefined1 **)(this + 4) = &_vbtable__for__clLobbyCB__;
    *(undefined8 **)(this + 0xb8) = &_vbtable__for__clExtalloc_Override_Baseclass__;
    *(undefined ***)(this + 0xb4) = &clExtalloc_Override_Baseclass::_vftable_;
  }
  *(undefined ***)this = &_vftable__for__clLobbyCallbacks__;
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
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 100) = 0;
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x7c) = 0;
  *(undefined4 *)(this + 0x80) = 0;
  *(undefined4 *)(this + 0x84) = 0;
  *(undefined4 *)(this + 0x88) = 0;
  *(undefined4 *)(this + 0x8c) = 0;
  *(undefined4 *)(this + 0x90) = 0;
  *(undefined4 *)(this + 0x94) = 0;
  *(undefined4 *)(this + 0x98) = 0;
  *(undefined4 *)(this + 0x9c) = 0;
  *(undefined4 *)(this + 0xa0) = 0;
  *(undefined4 *)(this + 0xa4) = 0;
  *(undefined4 *)(this + 0xa8) = 0;
  *(undefined4 *)(this + 0xac) = 0;
  *(undefined4 *)(this + 0xb0) = 0;
  return;
}




/* from: libgsclient:GSLobbyCallback.cpp
   addr: 005B2370
   addr: 005B2370 */

void * __thiscall clLobbyCB::_vector_deleting_destructor_(clLobbyCB *this,uint param_1)

{
  ~clLobbyCB(this);
  *(undefined ***)this = &clExtalloc_Override_Baseclass::_vftable_;
  if ((param_1 & 1) != 0) {
    ExtAlloc_Free_4(this + -0xb4);
  }
  return this + -0xb4;
}




/* from: libgsclient:GSLobbyCallback.cpp
   addr: 005B23A0 */

void __thiscall clLobbyCB::~clLobbyCB(clLobbyCB *this)

{
  *(undefined ***)(this + -0xb4) = &_vftable__for__clLobbyCallbacks__;
  *(undefined ***)(this + *(int *)(*(int *)(this + -0xb0) + 8) + -0xb0) =
       &_vftable__for__clExtalloc_Override_Baseclass__;
  return;
}




/* from: libgsclient:GSLobbyCallback.cpp
   addr: 005B23C0
   addr: 005B23C0
   addr: 005B23C0 */

void __thiscall clFriendsCB::FriendsRcv_LoginResult(clFriendsCB *this,uchar param_1,int param_2)

{
  if (*(code **)(this + 8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005b23cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this + 8))();
    return;
  }
  return;
}




/* from: libgsclient:GSLobbyCallback.cpp
   addr: 005B2400 */

void __thiscall
clLobbyCB::LobbyRcv_NewRoom
          (clLobbyCB *this,short param_1,char *param_2,int param_3,int param_4,int param_5,
          int param_6,short param_7,char *param_8,char *param_9,char *param_10,char *param_11,
          char *param_12,void *param_13,int param_14,uint param_15,uint param_16,uint param_17,
          uint param_18,char *param_19,char *param_20,int param_21)

{
  if (*(code **)(this + 0x18) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005b2417. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this + 0x18))();
    return;
  }
  return;
}




/* from: libgsclient:GSLobbyCallback.cpp
   addr: 005B2420 */

void __thiscall
clLobbyCB::LobbyRcv_NewLobby
          (clLobbyCB *this,short param_1,char *param_2,int param_3,int param_4,int param_5,
          int param_6,short param_7,char *param_8,char *param_9,char *param_10,void *param_11,
          int param_12,uint param_13,uint param_14,int param_15)

{
  if (*(code **)(this + 0x14) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005b2437. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this + 0x14))();
    return;
  }
  return;
}




/* from: libgsclient:GSLobbyCallback.cpp
   addr: 005B2440 */

void __thiscall
clLobbyCB::LobbyRcv_RoomInfo
          (clLobbyCB *this,short param_1,char *param_2,int param_3,int param_4,int param_5,
          int param_6,short param_7,char *param_8,char *param_9,char *param_10,char *param_11,
          char *param_12,void *param_13,int param_14,uint param_15,uint param_16,uint param_17,
          uint param_18,char *param_19,char *param_20,int param_21)

{
  if (*(code **)(this + 0x20) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005b2457. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this + 0x20))();
    return;
  }
  return;
}




/* from: libgsclient:GSLobbyCallback.cpp
   addr: 005B2460 */

void __thiscall
clLobbyCB::LobbyRcv_LobbyInfo
          (clLobbyCB *this,short param_1,char *param_2,int param_3,int param_4,int param_5,
          int param_6,short param_7,char *param_8,char *param_9,char *param_10,void *param_11,
          int param_12,uint param_13,uint param_14,int param_15)

{
  if (*(code **)(this + 0x1c) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005b2477. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this + 0x1c))();
    return;
  }
  return;
}




/* from: libgsclient:GSLobbyCallback.cpp
   addr: 005B2480 */

void __thiscall
clLobbyCB::LobbyRcv_CreateRoomReply
          (clLobbyCB *this,uchar param_1,int param_2,char *param_3,int param_4,int param_5)

{
  if (*(code **)(this + 0x28) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005b248f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this + 0x28))();
    return;
  }
  return;
}




/* from: libgsclient:GSLobbyCallback.cpp
   addr: 005B24A0 */

void __thiscall
clLobbyCB::LobbyRcv_JoinLobbyReply
          (clLobbyCB *this,uchar param_1,int param_2,char *param_3,int param_4,int param_5)

{
  if (*(code **)(this + 0x2c) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005b24af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this + 0x2c))();
    return;
  }
  return;
}




/* from: libgsclient:GSLobbyCallback.cpp
   addr: 005B24C0 */

void __thiscall
clLobbyCB::LobbyRcv_JoinRoomReply
          (clLobbyCB *this,uchar param_1,int param_2,char *param_3,int param_4,int param_5)

{
  if (*(code **)(this + 0x30) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005b24cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this + 0x30))();
    return;
  }
  return;
}




/* from: libgsclient:GSLobbyCallback.cpp
   addr: 005B24E0 */

void __thiscall
clLobbyCB::LobbyRcv_MemberJoined
          (clLobbyCB *this,char *param_1,uchar param_2,int *param_3,ushort param_4,int param_5,
          char *param_6,char *param_7,ushort param_8,void *param_9,int param_10,uchar param_11,
          ushort param_12)

{
  if (*(code **)(this + 0x34) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005b250f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this + 0x34))();
    return;
  }
  return;
}




/* from: libgsclient:GSLobbyCallback.cpp
   addr: 005B2540 */

void __thiscall
clLobbyCB::LobbyRcv_StartMatchReply
          (clLobbyCB *this,uchar param_1,int param_2,int param_3,int param_4)

{
  if (*(code **)(this + 0x40) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005b254f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this + 0x40))();
    return;
  }
  return;
}




/* from: libgsclient:GSLobbyCallback.cpp
   addr: 005B2570 */

void __thiscall
clLobbyCB::LobbyRcv_MasterNewReply
          (clLobbyCB *this,uchar param_1,int param_2,char *param_3,int param_4,int param_5)

{
  if (*(code **)(this + 0x48) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005b257f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this + 0x48))();
    return;
  }
  return;
}




/* from: libgsclient:GSLobbyCallback.cpp
   addr: 005B2590 */

void __thiscall
clLobbyCB::LobbyRcv_MatchFinishReply
          (clLobbyCB *this,uchar param_1,int param_2,int param_3,int param_4)

{
  if (*(code **)(this + 0x4c) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005b259f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this + 0x4c))();
    return;
  }
  return;
}




/* from: libgsclient:GSLobbyCallback.cpp
   addr: 005B25B0 */

void __thiscall
clLobbyCB::LobbyRcv_PlayerKickReply
          (clLobbyCB *this,uchar param_1,int param_2,char *param_3,int param_4,int param_5)

{
  if (*(code **)(this + 0x50) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005b25bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this + 0x50))();
    return;
  }
  return;
}




/* from: libgsclient:GSLobbyCallback.cpp
   addr: 005B25E0 */

void __thiscall
clLobbyCB::LobbyRcv_ParentGroupIDReply
          (clLobbyCB *this,uchar param_1,int param_2,int param_3,int param_4,int param_5)

{
  if (*(code **)(this + 0x58) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005b25ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this + 0x58))();
    return;
  }
  return;
}




/* from: libgsclient:GSLobbyCallback.cpp
   addr: 005B2600 */

void __thiscall
clLobbyCB::LobbyRcv_GetAlternateGroupInfoReply
          (clLobbyCB *this,uchar param_1,int param_2,void *param_3,int param_4,int param_5,
          int param_6)

{
  if (*(code **)(this + 0x5c) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005b260f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this + 0x5c))();
    return;
  }
  return;
}




/* from: libgsclient:GSLobbyCallback.cpp
   addr: 005B2620 */

void __thiscall
clLobbyCB::LobbyRcv_GroupLeaveReply
          (clLobbyCB *this,uchar param_1,int param_2,int param_3,int param_4)

{
  if (*(code **)(this + 0x60) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005b262f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this + 0x60))();
    return;
  }
  return;
}




/* from: libgsclient:GSLobbyCallback.cpp
   addr: 005B2660 */

void __thiscall
clLobbyCB::LobbyRcv_GroupConfigUpdateReply
          (clLobbyCB *this,uchar param_1,int param_2,int param_3,int param_4)

{
  if (*(code **)(this + 0x6c) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005b266f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this + 0x6c))();
    return;
  }
  return;
}




/* from: libgsclient:GSLobbyCallback.cpp
   addr: 005B2680 */

void __thiscall
clLobbyCB::LobbyRcv_SubmitMatchResultReply(clLobbyCB *this,uchar param_1,int param_2,int param_3)

{
  if (*(code **)(this + 0x70) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005b268f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this + 0x70))();
    return;
  }
  return;
}




/* from: libgsclient:GSLobbyCallback.cpp
   addr: 005B26A0 */

void __thiscall
clLobbyCB::LobbyRcv_UpdatePing(clLobbyCB *this,int param_1,int param_2,char *param_3,ushort param_4)

{
  if (*(code **)(this + 0x74) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005b26af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this + 0x74))();
    return;
  }
  return;
}




/* from: libgsclient:GSLobbyCallback.cpp
   addr: 005B26C0 */

void __thiscall
clLobbyCB::LobbyRcv_StartGameReply
          (clLobbyCB *this,uchar param_1,int param_2,int param_3,int param_4)

{
  if (*(code **)(this + 0x78) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005b26cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this + 0x78))();
    return;
  }
  return;
}




/* from: libgsclient:GSLobbyCallback.cpp
   addr: 005B26E0 */

void __thiscall
clLobbyCB::LobbyRcv_GameReadyReply
          (clLobbyCB *this,uchar param_1,int param_2,int param_3,int param_4)

{
  if (*(code **)(this + 0x7c) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005b26ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this + 0x7c))();
    return;
  }
  return;
}




/* from: libgsclient:GSLobbyCallback.cpp
   addr: 005B2700 */

void __thiscall
clLobbyCB::LobbyRcv_GameStarted
          (clLobbyCB *this,int param_1,int param_2,void *param_3,int param_4,char *param_5,
          char *param_6,ushort param_7)

{
  if (*(code **)(this + 0x80) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005b2712. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this + 0x80))();
    return;
  }
  return;
}




/* from: libgsclient:GSLobbyCallback.cpp
   addr: 005B2720 */

void __thiscall
clLobbyCB::LobbyRcv_NewGameMember
          (clLobbyCB *this,int param_1,int param_2,char *param_3,uchar param_4)

{
  if (*(code **)(this + 0x84) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005b2732. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this + 0x84))();
    return;
  }
  return;
}




/* from: libgsclient:GSLobbyCallback.cpp
   addr: 005B2740 */

void __thiscall
clLobbyCB::LobbyRcv_UpdateGameInfoReply
          (clLobbyCB *this,uchar param_1,int param_2,int param_3,int param_4)

{
  if (*(code **)(this + 0x88) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005b2752. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this + 0x88))();
    return;
  }
  return;
}




/* from: libgsclient:GSLobbyCallback.cpp
   addr: 005B2760 */

void __thiscall
clLobbyCB::LobbyRcv_PlayerBanReply
          (clLobbyCB *this,uchar param_1,int param_2,int param_3,int param_4,char *param_5)

{
  if (*(code **)(this + 0x8c) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005b2772. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this + 0x8c))();
    return;
  }
  return;
}




/* from: libgsclient:GSLobbyCallback.cpp
   addr: 005B2780 */

void __thiscall
clLobbyCB::LobbyRcv_PlayerUnBanReply
          (clLobbyCB *this,uchar param_1,int param_2,int param_3,int param_4,char *param_5)

{
  if (*(code **)(this + 0x90) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005b2792. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this + 0x90))();
    return;
  }
  return;
}




/* from: libgsclient:GSLobbyCallback.cpp
   addr: 005B27E0 */

void __thiscall clLobbyCB::LobbyRcv_SetPlayerInfoReply(clLobbyCB *this,uchar param_1,int param_2)

{
  if (*(code **)(this + 0xa4) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005b27f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this + 0xa4))();
    return;
  }
  return;
}




/* from: libgsclient:GSLobbyCallback.cpp
   addr: 005B2820 */

void __thiscall clLobbyCB::LobbyRcv_PlayerUpdateStatus(clLobbyCB *this,char *param_1,ushort param_2)

{
  if (*(code **)(this + 0xb0) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005b2832. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this + 0xb0))();
    return;
  }
  return;
}

