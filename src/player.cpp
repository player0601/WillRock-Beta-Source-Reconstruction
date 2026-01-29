/* from: player.cpp
   addr: 0041A680 */

float __thiscall _plrFPS_FILTER::Update(_plrFPS_FILTER *this,float param_1)

{
  _plrFPS_FILTER *p_Var1;
  _plrFPS_FILTER *p_Var2;
  float fVar3;
  float fVar4;
  _plrFPS_FILTER *p_Var5;
  int iVar6;
  
  p_Var1 = this + 0x14;
  if (*(int *)this == 0) {
    *(undefined4 *)p_Var1 = *(undefined4 *)(this + 0x18);
    *(undefined4 *)(this + 0x18) = *(undefined4 *)(this + 0x1c);
    *(undefined4 *)(this + 0x1c) = *(undefined4 *)(this + 0x20);
    *(float *)(this + 0x20) = param_1;
  }
  else {
    *(float *)p_Var1 = param_1;
    *(undefined4 *)(this + 0x18) = *(undefined4 *)p_Var1;
    *(undefined4 *)(this + 0x1c) = *(undefined4 *)(this + 0x18);
    *(undefined4 *)(this + 0x20) = *(undefined4 *)(this + 0x1c);
  }
  p_Var5 = this + 4;
  iVar6 = 4;
  fVar4 = ___real_00000000;
  do {
    p_Var2 = p_Var5 + 0x10;
    fVar3 = *(float *)p_Var5;
    p_Var5 = p_Var5 + 4;
    iVar6 = iVar6 + -1;
    fVar4 = *(float *)p_Var2 * fVar3 + fVar4;
  } while (iVar6 != 0);
  if (param_1 * ___real_3eaaaaab < fVar4) {
    *(float *)p_Var1 = param_1;
    *(undefined4 *)(this + 0x18) = *(undefined4 *)p_Var1;
    *(undefined4 *)(this + 0x1c) = *(undefined4 *)(this + 0x18);
    *(undefined4 *)(this + 0x20) = *(undefined4 *)(this + 0x1c);
  }
  *(undefined4 *)this = 0;
  return fVar4;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: player.cpp
   addr: 0041A720 */

void __thiscall _plrMOVE_CTRL::Update(_plrMOVE_CTRL *this,int param_1)

{
  float fVar1;
  bool bVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  
  bVar3 = *(float *)(plrPlayer + 0x35f) <= ___real_3f000000;
  fVar4 = gsElapsedTime * *(float *)(this + 4);
  if (bVar3) {
    fVar1 = *(float *)this;
    fVar5 = ___real_bf800000;
    if ((___real_bf800000 <= fVar1) && (fVar5 = fVar1, ___real_3f800000 < fVar1)) {
      fVar5 = ___real_3f800000;
    }
    *(float *)this = fVar5;
  }
  else if (((0 < param_1) && (___real_00000000 < *(float *)this)) ||
          ((param_1 < 0 && (*(float *)this < ___real_00000000)))) {
    fVar4 = fVar4 * ___real_3eaaaaab;
  }
  else if (param_1 == 0) {
    fVar4 = fVar4 * ___real_3dcccccd;
    goto LAB_0041a78f;
  }
  if (0 < param_1) {
    fVar4 = fVar4 + *(float *)this;
    bVar2 = fVar4 < ___real_bf800000;
    *(float *)this = fVar4;
    if (bVar2) {
      *(undefined4 *)this = 0xbf800000;
      return;
    }
    if (fVar4 <= ___real_3f800000) {
      return;
    }
    if (!bVar3) {
      return;
    }
    *(undefined4 *)this = 0x3f800000;
    return;
  }
  if (param_1 < 0) {
    if (___real_3f800000 < *(float *)this) {
      *(undefined4 *)this = 0x3f800000;
    }
    fVar1 = *(float *)this;
    *(float *)this = fVar1 - fVar4;
    if (___real_bf800000 <= fVar1 - fVar4) {
      return;
    }
    if (!bVar3) {
      return;
    }
    *(undefined4 *)this = 0xbf800000;
    return;
  }
LAB_0041a78f:
  if (___real_00000000 < *(float *)this) {
    fVar1 = *(float *)this;
    *(float *)this = fVar1 - fVar4;
    if (fVar1 - fVar4 < ___real_00000000) {
      *(undefined4 *)this = 0;
      return;
    }
  }
  else if ((*(float *)this < ___real_00000000) &&
          (fVar1 = *(float *)this, *(float *)this = fVar4 + fVar1, ___real_00000000 < fVar4 + fVar1)
          ) {
    *(undefined4 *)this = 0;
    return;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: player.cpp
   addr: 0041A8A0 */

float __thiscall _plrMOVE_CTRL::GetValue(_plrMOVE_CTRL *this)

{
  float fVar1;
  
  if ((___real_bf800000 <= *(float *)this) &&
     (*(float *)this < ___real_3f800000 != (*(float *)this == ___real_3f800000))) {
    fVar1 = (*(float *)this - ___real_bf800000) * ___real_3f000000;
    fVar1 = (___real_40400000 - (fVar1 + fVar1)) * fVar1 * fVar1;
    return (fVar1 + fVar1) - ___real_3f800000;
  }
  if (___real_3f800000 < *(float *)this) {
    fVar1 = *(float *)this;
    if (fVar1 < ___real_3f800000) {
      return ___real_3f800000;
    }
    if (___real_41a00000 < fVar1) {
      return ___real_3fc00000;
    }
    return (fVar1 - ___real_3f800000) * ___real_3cd79436 + ___real_3f800000;
  }
  fVar1 = *(float *)this;
  if (fVar1 < ___real_3f800000) {
    return ___real_bf800000;
  }
  if (___real_41a00000 < fVar1) {
    return ___real_bfc00000;
  }
  return ___real_bf800000 - (fVar1 - ___real_3f800000) * ___real_3cd79436;
}




/* from: player.cpp
   addr: 0041A9A0 */

int __fastcall plrInit(void)

{
  int iVar1;
  
  iVar1 = plrCommInit();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = pwpInit();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = entRegisterClass(s_player,0x504c5952,0x32,plrPLAYER::Create,(char *)0x0,1);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = entRegisterClass(s_player_mp,0x504c5952,0x32,plrPLAYER_MP::Create,(char *)0x0,1);
  if (iVar1 == 0) {
    return 0;
  }
  plrPLAYER_MP::pTexPwrQd = txmMANAGER::Add(txmManager,s_plr_pwr_qd,0x40003,1);
  if (plrPLAYER_MP::pTexPwrQd == (txmTEXTURE *)0x0) {
    return 0;
  }
  plrPLAYER_MP::pTexPwrUa = txmMANAGER::Add(txmManager,s_plr_pwr_ua,0x40003,1);
  return (uint)(plrPLAYER_MP::pTexPwrUa != (txmTEXTURE *)0x0);
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: player.cpp
   addr: 0041AA50 */

entENTITY * __fastcall plrPLAYER::Create(animINST *param_1)

{
  undefined4 uVar1;
  plgsACTION *this;
  plgsACTION *ppVar2;
  int iVar3;
  
  this = (plgsACTION *)operator_new(0x3cf);
  if (this != (plgsACTION *)0x0) {
    plgsACTION::plgsACTION(this);
    *(undefined4 *)(this + 0x23b) = 0xffffffff;
    *(undefined4 *)(this + 0x29b) = 0;
    *(undefined4 *)(this + 0x2a3) = 0;
    *(undefined4 *)(this + 0x2a7) = 0;
    *(undefined4 *)(this + 0x2ab) = 0;
    *(undefined4 *)(this + 0x2b3) = 0xffffffff;
    *(undefined4 *)(this + 0x2b7) = 0;
    *(undefined4 *)(this + 699) = 0;
    *(undefined4 *)(this + 0x2bf) = 0;
    *(undefined4 *)(this + 0x2c3) = 0xffffffff;
    ppVar2 = this + 0x2c7;
    iVar3 = 3;
    do {
      *(undefined4 *)ppVar2 = 0;
      *(undefined4 *)(ppVar2 + 4) = 0;
      ppVar2 = ppVar2 + 8;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    plrPLAYER_COMMON_CFG::plrPLAYER_COMMON_CFG((plrPLAYER_COMMON_CFG *)(this + 0x2df));
    *(undefined ***)this = &plrPLAYER_COMMON::_vftable_;
    *(undefined4 *)(this + 0x30b) = 0;
    *(undefined4 *)(this + 0x30f) = 0;
    *(undefined4 *)(this + 0x313) = 0;
    *(undefined4 *)(this + 0x317) = 0;
    *(undefined4 *)(this + 0x31b) = _m3dVZero;
    *(undefined4 *)(this + 799) = DAT_00963740;
    uVar1 = DAT_00963744;
    *(undefined4 *)(this + 0x327) = 0;
    *(undefined4 *)(this + 0x323) = uVar1;
    *(undefined4 *)(this + 0x2c3) = 0xffffffff;
    *(undefined4 *)(this + 0x3c7) = 0;
    *(undefined4 *)(this + 0x94) = 0;
    *(undefined ***)this = &_vftable_;
    plrPlayer = (plrPLAYER *)this;
    plgsPlayer = this;
    return (entENTITY *)this;
  }
  plrPlayer = (plrPLAYER *)0x0;
  plgsPlayer = (plgsACTION *)0x0;
  return (entENTITY *)0x0;
}




/* from: player.cpp
   addr: 0041AB50 */

void * __thiscall plrPLAYER::_vector_deleting_destructor_(plrPLAYER *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  plrPlayer = (plrPLAYER *)0x0;
  plgsPlayer = (plgsACTION *)0x0;
  plgsACTION::~plgsACTION((plgsACTION *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: player.cpp
   addr: 0041AB80 */

int __thiscall plrPLAYER::ProcessINIT(plrPLAYER *this)

{
  uint *puVar1;
  int iVar2;
  plrHEIGHT_CTRL *this_00;
  undefined4 uVar3;
  plrCAM_CTRL *this_01;
  entENTITY *peVar4;
  
  *(undefined4 *)(this + 0x377) = 0;
  iVar2 = plrPLAYER_COMMON::ProcessINIT((plrPLAYER_COMMON *)this);
  if (iVar2 == 0) {
    return 0;
  }
  apNAME::SetName((apNAME *)(this + 0x44),s_player);
  *(undefined4 *)(this + 0x2ef) = 0x3fcccccd;
  *(undefined4 *)(this + 0x2f3) = 0x3f666666;
  *(undefined4 *)(this + 0x303) = 0x41f00000;
  *(undefined4 *)(this + 0x307) = 0x3f4ccccd;
  *(uint *)(this + 0x29b) = *(uint *)(this + 0x29b) & 0xfffffffe;
  iVar2 = 0;
  do {
    if (*(int *)(iVar2 + *(int *)(this + 0x23f)) != 0) {
      animINST::SetAnimSeq(*(animINST **)(*(int *)(iVar2 + *(int *)(this + 0x23f)) + 0xbc),1,0.0);
      puVar1 = (uint *)(*(int *)(*(int *)(iVar2 + *(int *)(this + 0x23f)) + 0xbc) + 4);
      *puVar1 = *puVar1 | 0x80000;
    }
    iVar2 = iVar2 + 4;
  } while (iVar2 < 0x2c);
  InitSFX(this);
  this_00 = (plrHEIGHT_CTRL *)operator_new(0x20);
  if (this_00 == (plrHEIGHT_CTRL *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = plrHEIGHT_CTRL::plrHEIGHT_CTRL(this_00);
  }
  *(undefined4 *)(this + 0x36f) = uVar3;
  this_01 = (plrCAM_CTRL *)operator_new(0x4c);
  if (this_01 == (plrCAM_CTRL *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = plrCAM_CTRL::plrCAM_CTRL(this_01);
  }
  *(undefined4 *)(this + 0x373) = uVar3;
  *(undefined4 *)(this + 0x8c) = 0xfffffffd;
  peVar4 = entCreate(gsScenePtr,s_player_mp,s_player_mp,(animCREATE_DATA *)0x0,(void *)0x0,0);
  *(entENTITY **)(this + 0x377) = peVar4;
  *(undefined4 *)(peVar4 + 0x94) = 2;
  *(uint *)(*(int *)(*(int *)(this + 0x377) + 0xbc) + 4) =
       *(uint *)(*(int *)(*(int *)(this + 0x377) + 0xbc) + 4) | 0x10;
  *(uint *)(*(int *)(this + 0x377) + 0xb4) = *(uint *)(*(int *)(this + 0x377) + 0xb4) & 0xfffffaff;
  animINST::SetName(*(animINST **)(*(int *)(this + 0x377) + 0xbc),s_player_3d);
  *(undefined4 *)(*(int *)(*(int *)(*(int *)(this + 0x377) + 0xbc) + 0x140) + 0x158) = 0xbf800000;
  SetupGhostRendState(this);
  plrPLAYER_MP::SetupGhostWpnState(*(plrPLAYER_MP **)(this + 0x377));
  iVar2 = 0;
  *(uint *)(*(int *)(*(int *)(this + 0x377) + 0xbc) + 4) =
       *(uint *)(*(int *)(*(int *)(this + 0x377) + 0xbc) + 4) & 0xfffffffe;
  do {
    if (*(int *)(iVar2 + *(int *)(this + 0x23f)) != 0) {
      pshSHADOW_SYSTEM::AddExcludeList
                (gsSysProjShd,*(animINST **)(*(int *)(iVar2 + *(int *)(this + 0x23f)) + 0xbc),
                 *(int *)(*(int *)(this + 0x377) + 0x2eb));
    }
    iVar2 = iVar2 + 4;
  } while (iVar2 < 0x2c);
  peVar4 = entCreate(gsScenePtr,s_sob_tra_camera,s_sfx_trading_altar_camera,(animCREATE_DATA *)0x0,
                     (void *)0x0,0);
  *(entENTITY **)(this + 0x3c7) = peVar4;
  if (peVar4 == (entENTITY *)0x0) {
    return 0;
  }
  *(undefined4 *)(this + 0x363) = 0;
  *(undefined4 *)(this + 0x3cb) = 0;
  *(undefined4 *)(this + 0x353) = _m3dVZero;
  *(undefined4 *)(this + 0x357) = DAT_00963740;
  *(undefined4 *)(this + 0x35b) = DAT_00963744;
  *(undefined4 *)(this + 0x2f7) = _m3dVZero;
  *(undefined4 *)(this + 0x2fb) = DAT_00963740;
  *(undefined4 *)(this + 0x2ff) = DAT_00963744;
  *(uint *)(this + 0xc) = *(uint *)(this + 0xc) | 2;
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: player.cpp
   addr: 0041ADE0 */

int __thiscall plrPLAYER::ProcessINIT_LEVEL(plrPLAYER *this)

{
  undefined4 uVar1;
  
  plrPLAYER_COMMON::ProcessINIT_LEVEL((plrPLAYER_COMMON *)this);
  *(undefined4 *)(this + 0x2e3) = 0xb;
  *(uint *)(this + 0x30b) = *(uint *)(this + 0x30b) & 0xfffffffd;
  __plrCtrlForw = 0;
  __plrCtrlSide = 0;
  *(undefined4 *)(this + 0x34f) = 0;
  *(undefined4 *)(this + 0x2f7) = _m3dVZero;
  *(undefined4 *)(this + 0x2fb) = DAT_00963740;
  uVar1 = DAT_00963744;
  *(undefined4 *)(this + 0x32f) = 0;
  *(undefined4 *)(this + 899) = 0;
  *(undefined4 *)(this + 0x2ff) = uVar1;
  *(undefined4 *)(this + 0x387) = 0;
  *(undefined4 *)(this + 0x3bb) = _m3dVZero;
  *(undefined4 *)(this + 0x3bf) = DAT_00963740;
  *(undefined4 *)(this + 0x3c3) = DAT_00963744;
  *(uint *)(this + 0x29b) = *(uint *)(this + 0x29b) | 0x8000000;
  NotifySFXBloodHands(this,(m3dV *)0x0);
  (**(code **)(*(int *)uiSystem + 0x90))(0,0xffff0000);
  *(undefined4 *)(this + 0x363) = 0;
  *(undefined4 *)(this + 0x33f) = 0;
  *(undefined4 *)(this + 0x343) = 0x3e4ccccd;
  *(undefined4 *)(this + 0x347) = 0xbf800000;
  *(undefined4 *)(this + 0x34b) = 0x3f4ccccd;
  return 1;
}




/* from: player.cpp
   addr: 0041AEE0 */

int __thiscall plrPLAYER::ProcessINIT_MAP(plrPLAYER *this)

{
  plrPLAYER *local_4;
  
  local_4 = this;
  plrPLAYER_COMMON::ProcessINIT_MAP((plrPLAYER_COMMON *)this);
  *(undefined4 *)(this + 0x24b) = 0x42b40000;
  *(undefined4 *)(this + 0x333) = 0x40a00000;
  *(undefined4 *)(this + 0x337) = 0x40a00000;
  *(undefined4 *)(this + 0x37f) = 0xffffffff;
  *(undefined4 *)(this + 0x33b) = 0;
  *(undefined4 *)(this + 0xf8) = 0;
  local_4 = (plrPLAYER *)0x0;
  if (*(int *)(gsSysMP + 0x28) != 1) {
    _apCfgReadInt((void **)0x0,s_Multiplayer,s_PlayerSkin,(int *)&local_4);
  }
  (**(code **)(*(int *)this + 0x114))(local_4);
  plrCAM_CTRL::ZoomClear(*(plrCAM_CTRL **)(this + 0x373));
  return 1;
}




/* from: player.cpp
   addr: 0041AF70 */

int __thiscall plrPLAYER::ProcessINIT_GAME(plrPLAYER *this)

{
  char local_40 [64];
  
  plrPLAYER_COMMON::ProcessINIT_GAME((plrPLAYER_COMMON *)this);
  local_40[0] = '\0';
  _apCfgReadString((void **)0x0,s_Multiplayer,s_PlayerName,local_40,0x40);
  animINST::SetName(*(animINST **)(this + 0xbc),local_40);
  plrCAM_CTRL::RevitalizeNotify(*(plrCAM_CTRL **)(this + 0x373));
  SetupGhostRendState(this);
  if (*(int *)(gsSysMP + 0x28) == 1) {
    *(uint *)(this + 0x2a3) = *(uint *)(this + 0x2a3) | 8;
  }
  if (*(int *)(gsSysMP + 0x28) == 1) {
    *(undefined4 *)(this + 0x90) = 0xffffffff;
  }
  return 1;
}




/* from: player.cpp
   addr: 0041AFF0 */

void __thiscall plrPLAYER::ProcessTERM(plrPLAYER *this)

{
  plrHEIGHT_CTRL *this_00;
  void *pvVar1;
  
  plrPLAYER_COMMON::ProcessTERM((plrPLAYER_COMMON *)this);
  this_00 = *(plrHEIGHT_CTRL **)(this + 0x36f);
  if (this_00 != (plrHEIGHT_CTRL *)0x0) {
    plrHEIGHT_CTRL::~plrHEIGHT_CTRL(this_00);
    operator_delete(this_00);
  }
  pvVar1 = *(void **)(this + 0x373);
  *(undefined4 *)(this + 0x36f) = 0;
  if (pvVar1 != (void *)0x0) {
    m3dTerm2DMatr();
    operator_delete(pvVar1);
  }
  *(undefined4 *)(this + 0x373) = 0;
  if (*(msgADDR **)(this + 0x377) != (msgADDR *)0x0) {
    msgSYSTEM::PostMsg(&msgSystem,*(msgADDR **)(this + 0x377),2,(msgADDR *)this);
  }
  return;
}




/* from: player.cpp
   addr: 0041B080 */

int __thiscall plrPLAYER::IdentifyMPSysSyncData(plrPLAYER *this,gsMSG_MP_SYNC *param_1)

{
  int iVar1;
  gsMSG_MP_SYNC *pgVar2;
  gsMSG_MP_SYNC *pgVar3;
  bool bVar4;
  
  iVar1 = 7;
  bVar4 = true;
  pgVar2 = param_1 + 0x58;
  pgVar3 = (gsMSG_MP_SYNC *)s_player;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *pgVar2 == *pgVar3;
    pgVar2 = pgVar2 + 1;
    pgVar3 = pgVar3 + 1;
  } while (bVar4);
  if (bVar4) {
    iVar1 = 7;
    bVar4 = true;
    pgVar2 = param_1 + 0x18;
    pgVar3 = (gsMSG_MP_SYNC *)s_player;
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar4 = *pgVar2 == *pgVar3;
      pgVar2 = pgVar2 + 1;
      pgVar3 = pgVar3 + 1;
    } while (bVar4);
    if (bVar4) {
      return 1;
    }
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: player.cpp
   addr: 0041B0C0 */

int __thiscall
plrPLAYER::ProcessMsg(plrPLAYER *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  int iVar1;
  
  if (param_1 < 0x3f9) {
    if (param_1 == 0x3f8) {
      iVar1 = apNAME::IsName((apNAME *)((int)param_2 + 8),s_USE_KEY);
      if (iVar1 != 0) {
        (**(code **)(*(int *)this + 0x98))();
      }
    }
    else if (param_1 == 3) {
      if (param_2 == *(void **)(this + 0x377)) {
        *(undefined4 *)(this + 0x377) = 0;
      }
      if ((DAT_009483ac[1] != 0) && (*(void **)(DAT_009483ac[1] + 0x13c) == param_2)) {
        DAT_009483ac[1] = 0;
        *DAT_009483ac = *DAT_009483ac & 0xfffffffd;
        *(float *)(this + 0x33f) = *(float *)(this + 0x343) + ___real_3f800000;
      }
    }
    else if ((param_1 == 0x3f7) && (*(int *)(wrSysGO + 0x94) == 2)) {
      SelectPosDirCOOP(this);
    }
  }
  else if ((0x4c9 < param_1) && (param_1 < 0x4ce)) {
    SetupGhostRendState(this);
  }
  iVar1 = plrPLAYER_COMMON::ProcessMsg((plrPLAYER_COMMON *)this,param_1,param_2,param_3,param_4);
  return (uint)(iVar1 != 0);
}




/* from: player.cpp
   addr: 0041B1B0 */

void __thiscall plrPLAYER::SetPos(plrPLAYER *this,m3dV *param_1)

{
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_c = *(undefined4 *)param_1;
  local_8 = *(undefined4 *)(param_1 + 4);
  local_4 = *(undefined4 *)(param_1 + 8);
  animINST::SetPos(*(animINST **)(this + 0xbc),(m3dV *)&local_c);
  return;
}




/* from: player.cpp
   addr: 0041B1F0 */

void __thiscall plrPLAYER::SetPosDir(plrPLAYER *this,m3dV *param_1,m3dV *param_2,int param_3)

{
  undefined4 uVar1;
  undefined **local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined **local_3c;
  undefined4 local_38;
  undefined4 local_34;
  m3dV local_30 [12];
  m3dV local_24 [12];
  m3dV local_18 [12];
  m3dV local_c [12];
  
  local_44 = 0;
  local_40 = 0;
  local_48 = &cdtREFINE::_vftable_;
  if ((param_1 == (m3dV *)0x0) || (param_2 == (m3dV *)0x0)) {
    gsMP_SYSTEM::SelectStartPosDir(gsSysMP,local_30,local_24);
    param_1 = local_30;
    param_2 = local_24;
  }
  if (param_3 != 0) {
    local_3c = *(undefined ***)param_1;
    local_38 = *(undefined4 *)(param_1 + 4);
    local_34 = *(undefined4 *)(param_1 + 8);
    scnSCENE::FloorPlace
              (gsScenePtr,(m3dV *)&local_3c,DAT_005d069c,param_1,3.0,0.0,0,(cdtREFINE *)&local_48,
               (cdtINFO *)(this + 0x30b));
  }
  *(float *)(param_1 + 4) = *(float *)(param_1 + 4) + *(float *)(this + 0x2ef);
  *(undefined4 *)(this + 0xd4) = *(undefined4 *)param_1;
  *(undefined4 *)(this + 0xd8) = *(undefined4 *)(param_1 + 4);
  uVar1 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0x24b) = 0x42b40000;
  *(undefined4 *)(this + 0xdc) = uVar1;
  camCAMERA::ResetVertRotation(gsCameraPtr);
  *(float *)(param_1 + 4) = *(float *)(param_1 + 4) - *(float *)(this + 0x2ef);
  animINST::SetPos(*(animINST **)(this + 0xbc),param_1);
  animINST::SetDir_XZ(*(animINST **)(this + 0xbc),param_2);
  local_34 = 0;
  local_3c = &cdtREFINE::_vftable_;
  local_38 = 2;
  if ((gsAppState & 0x800U) != 0) {
    animINST::GetPos(*(animINST **)(this + 0xbc),local_18);
    scnSCENE::FloorPlace
              (gsScenePtr,local_18,30.0,local_c,1.0,1.0,0,(cdtREFINE *)&local_3c,
               (cdtINFO *)(this + 0x30b));
  }
  entENTITY::ApplyColor
            (*(entENTITY **)(*(int *)(this + 0x23f) + *(int *)(this + 0x243) * 4),
             (cdtINFO *)(this + 0x30b),0);
  *(undefined4 *)(this + 0x25f) = *(undefined4 *)param_2;
  *(undefined4 *)(this + 0x263) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(this + 0x267) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(this + 0x277) = *(undefined4 *)param_1;
  *(undefined4 *)(this + 0x27b) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 0x27f) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0x26b) = *(undefined4 *)param_1;
  *(undefined4 *)(this + 0x26f) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 0x273) = *(undefined4 *)(param_1 + 8);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: player.cpp
   addr: 0041B3C0 */

void __thiscall plrPLAYER::SelectPosDirCOOP(plrPLAYER *this)

{
  float fVar1;
  int iVar2;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  m3dV local_3c [12];
  undefined **local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  float local_4;
  
  local_10 = _m3dVZero;
  local_c = DAT_00963740;
  local_28 = *(undefined4 *)(this + 0xbc);
  local_2c = 2;
  local_24 = 0;
  local_30 = &entCDT_REFINE_EXCL::_vftable_;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_8 = DAT_00963744;
  local_4 = 0.0;
  gsMP_SYSTEM::SelectStartPosDir(gsSysMP,(m3dV *)&local_60,local_3c);
  if (((byte)this[0x88] & 4) == 0) {
    m3dMakeVTangRandom(&m3dVUnitY,(m3dV *)&local_48);
    local_54 = local_48 * ___real_40a00000 + local_60;
    local_50 = local_44 * ___real_40a00000 + local_5c;
    local_4c = local_40 * ___real_40a00000 + local_58;
    local_5c = local_5c + ___real_3f800000;
    local_50 = local_50 + ___real_3f800000;
    iVar2 = scnSCENE::IsVisiblePoint
                      (gsScenePtr,(m3dV *)&local_60,(m3dV *)&local_54,0,(cdtREFINE *)&local_30,
                       (cdtINFO *)&local_20);
    if (iVar2 == 0) {
      fVar1 = local_4 - ___real_3f000000;
      if (local_4 - ___real_3f000000 < ___real_00000000) {
        fVar1 = ___real_00000000;
      }
      local_54 = local_48 * fVar1 + local_60;
      local_50 = local_44 * fVar1 + local_5c;
      local_4c = local_40 * fVar1 + local_58;
    }
    local_2c = 0;
    scnSCENE::ConstrSphere
              (gsScenePtr,(m3dV *)&local_54,(m3dV *)&local_54,*(float *)(this + 0x307),0x10,
               (cdtREFINE *)&local_30,(cdtINFO *)0x0);
    (**(code **)(*(int *)this + 0x74))(&local_54,local_3c,1);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: player.cpp
   addr: 0041B550 */

void __thiscall plrPLAYER::ProcessFRAME(plrPLAYER *this)

{
  int *piVar1;
  animINST *this_00;
  bool bVar2;
  float fVar3;
  gsSTRINGS *this_01;
  int iVar4;
  ushort *puVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float local_70 [3];
  undefined **local_64;
  float local_60;
  float local_5c;
  m3dV amStack_58 [12];
  m3dV amStack_4c [12];
  m3dMATR amStack_40 [64];
  
  uVar6 = *(uint *)(*(int *)(this + 0xbc) + 4);
  if ((uVar6 & 2) != 0) {
    *(uint *)(*(int *)(this + 0xbc) + 4) = uVar6 & 0xfffffffd;
  }
  animINST::GetPos(*(animINST **)(this + 0xbc),(m3dV *)&local_64);
  local_70[0] = ABS((float)local_64);
  if (((___real_461c4000 < local_70[0]) ||
      (local_70[0] = ABS(local_60), ___real_461c4000 < local_70[0])) ||
     (local_70[0] = ABS(local_5c), ___real_461c4000 < local_70[0])) {
    (**(code **)(*(int *)this + 0x74))(0,0,1);
  }
  uVar6 = *(uint *)(this + 0x29b);
  *(uint *)(this + 0x29b) = uVar6 & 0xffff7f9f;
  this_01 = gsStrings;
  if ((gsAppState & 0x40000U) == 0) {
    return;
  }
  if ((gsAppState & 0x400000U) != 0) {
    return;
  }
  if ((uVar6 & 0x8000000) != 0) {
    _DAT_0060353c = 1;
    _DAT_006035b8 = 1;
    _DAT_00603590 = 1;
  }
  if (((*(uint *)(this + 0x29b) & 2) == 0) || ((*(uint *)(this + 0x29b) & 0x40000000) != 0))
  goto LAB_0041b6ad;
  uVar10 = 0;
  uVar9 = 0x3f000000;
  if ((char)((uint)gsAppState >> 8) < '\0') {
    pcVar8 = s_GAME_PLAYER_IS_DEAD_RETAIL;
LAB_0041b687:
    iVar7 = *(int *)uiSystem;
  }
  else {
    if (*(int *)(gsSysMP + 0x28) == 1) {
      pcVar8 = s_GAME_PLAYER_IS_DEAD_DEBUG;
      goto LAB_0041b687;
    }
    pcVar8 = s_GAME_PLAYER_IS_DEAD_DEBUG_MP;
    iVar7 = *(int *)uiSystem;
  }
  iVar4 = gsSTRINGS::GetStringId(gsStrings,pcVar8);
  puVar5 = gsSTRINGS::GetStringById(this_01,iVar4);
  (**(code **)(iVar7 + 0x20))(puVar5,uVar9,uVar10);
LAB_0041b6ad:
  plrPLAYER_COMMON::ProcessFRAME((plrPLAYER_COMMON *)this);
  _apCfgReadBool((void **)&DAT_00603600,s_Video,s_VIDEO_PlrLegs,(int *)local_70);
  if (local_70[0] == 0.0) {
    uVar6 = *(uint *)(this + 0x2a3) & 0xfffffffe;
  }
  else {
    uVar6 = *(uint *)(this + 0x2a3) | 1;
  }
  *(uint *)(this + 0x2a3) = uVar6;
  _apCfgReadBool((void **)&DAT_0060358c,s_Video,s_VIDEO_WpnShdr,(int *)local_70);
  if (local_70[0] == 0.0) {
    uVar6 = *(uint *)(this + 0x2a3) & 0xfffffffd;
  }
  else {
    uVar6 = *(uint *)(this + 0x2a3) | 2;
  }
  *(uint *)(this + 0x2a3) = uVar6;
  SetupGhostRendState(this);
  if ((((gsAppState & 0x1800U) == 0) && ((*(uint *)(this + 0x29b) & 0x400000) == 0)) &&
     (((byte)gsSysCinema[0x80] & 1) == 0)) {
    ProcessInput(this);
  }
  else {
    _plrMOVE_CTRL::Update(&_plrCtrlForw,0);
    _plrMOVE_CTRL::Update(&_plrCtrlSide,0);
  }
  if ((gsAppState & 0x1000U) == 0) {
    UpdateCamera(this);
    UpdateCursor(this);
  }
  piVar1 = *(int **)(*(int *)(this + 0x23f) + *(int *)(this + 0x243) * 4);
  if ((*(uint *)(this + 0x29b) & 0x200000) != 0) {
    local_60 = DAT_00948390;
    local_64 = DAT_0094838c;
    local_5c = DAT_00948394;
    iVar7 = (**(code **)(*piVar1 + 0x6c))(this,&local_64);
    if (iVar7 != 0) {
      plrCAM_CTRL::ShootNotify(*(plrCAM_CTRL **)(this + 0x373),piVar1[0x25]);
    }
  }
  if (((char)*(uint *)(this + 0x29b) < '\0') || ((*(uint *)(this + 0x29b) & 0x10000000) != 0)) {
    local_64 = (undefined **)0x84000;
    local_60 = 9.80909e-45;
    (**(code **)(*(int *)gsSysClient + 0x2c))(plrPlayer,0x40c,&local_64,0x20000);
  }
  camCAMERA::GetOrigin(gsCameraPtr,amStack_58);
  camCAMERA::GetLookAt(gsCameraPtr,(m3dV *)&local_64);
  iVar7 = *(int *)(*(int *)(this + 0x23f) + *(int *)(this + 0x243) * 4);
  this_00 = *(animINST **)(iVar7 + 0xbc);
  iVar7 = *(int *)(iVar7 + 0x94);
  if ((iVar7 == 7) || (iVar7 == 9)) {
    local_64 = (undefined **)-(float)local_64;
    local_60 = -local_60;
    local_5c = -local_5c;
  }
  m3dMATR::Identity(amStack_40);
  m3dMATR::MakeLCS2WCS_VZ(amStack_40,amStack_58,(m3dV *)&local_64);
  animINST::Transform(this_00,amStack_40,0);
  AnimateWeapon(this);
  local_5c = 0.0;
  local_64 = &cdtREFINE::_vftable_;
  local_60 = 2.8026e-45;
  if ((gsAppState & 0x800U) != 0) {
    animINST::GetPos(*(animINST **)(this + 0xbc),amStack_58);
    scnSCENE::FloorPlace
              (gsScenePtr,amStack_58,30.0,amStack_4c,1.0,1.0,0,(cdtREFINE *)&local_64,
               (cdtINFO *)(this + 0x30b));
  }
  entENTITY::ApplyColor
            (*(entENTITY **)(*(int *)(this + 0x23f) + *(int *)(this + 0x243) * 4),
             (cdtINFO *)(this + 0x30b),1);
  Animate(this);
  m3dTerm2DMatr();
  UpdateTimers(this);
  bVar2 = ___real_00000000 <= *(float *)(this + 0x347);
  *(uint *)(this + 0x29b) = *(uint *)(this + 0x29b) & 0xf7ffffff;
  if (bVar2) {
    fVar3 = *(float *)(this + 0x34b) * ___real_3f000000;
    if (fVar3 <= *(float *)(this + 0x347)) {
      local_64 = *(undefined ***)(this + 0x347);
      local_70[1] = 0.0;
      local_70[0] = *(float *)(this + 0x34b);
      if (*(float *)(this + 0x34b) < fVar3) {
        local_70[1] = 1.0;
        local_70[0] = fVar3;
        local_70[2] = fVar3;
      }
    }
    else {
      local_70[2] = *(float *)(this + 0x347);
      local_70[0] = 0.0;
      local_70[1] = 1.0;
      if (fVar3 < ___real_00000000) {
        local_70[1] = 0.0;
        local_70[0] = fVar3;
      }
    }
    iVar7 = ftol();
    gsRENDER_SYSTEM::SetColorFullScr(gsSysRender,iVar7 << 0x18);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: player.cpp
   addr: 0041BA90 */

void __thiscall plrPLAYER::ProcessCDT_FIREABLE(plrPLAYER *this,dmgDAMAGE *param_1)

{
  dmgDAMAGE *pdVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 extraout_MM1;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  undefined1 auVar7 [16];
  float fVar8;
  undefined4 uVar9;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  pdVar1 = param_1;
  if (*(float *)(this + 0xcc) < ___real_00000000) {
    return;
  }
  plrPLAYER_COMMON::ProcessCDT_FIREABLE((plrPLAYER_COMMON *)this,param_1);
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 0x1c);
    if (((iVar2 != 6) && (iVar2 != 9)) && (iVar2 != 4)) goto LAB_0041bd51;
    local_c = *(float *)(param_1 + 0x10);
    local_8 = *(float *)(param_1 + 0x14);
    local_4 = *(float *)(param_1 + 0x18);
  }
  else {
    if ((iVar2 != 2) && (iVar2 != 3)) goto LAB_0041bd51;
    local_c = *(float *)(param_1 + 0x10);
    local_8 = *(float *)(param_1 + 0x14);
    local_4 = *(float *)(param_1 + 0x18);
  }
  if ((((___real_40e00000 < *(float *)(param_1 + 8)) &&
       (fVar8 = m3dRandom(), ___real_3e4ccccd < fVar8)) ||
      (___real_41a00000 < *(float *)(param_1 + 8))) && (___real_00000000 < *(float *)(this + 0xcc)))
  {
    animINST::GetPos(*(animINST **)(this + 0xbc),(m3dV *)&local_18);
    local_14 = local_14 + ___real_3f333333;
    local_24 = local_18 - local_c;
    local_20 = local_14 - local_8;
    local_1c = local_10 - local_4;
    if (local_20 < ___real_00000000) {
      local_20 = 0.0;
    }
    m3dNormalize((m3dV *)&local_24);
    fVar8 = ___real_3f333333;
    if ((___real_3f333333 <= local_20) && (fVar8 = local_20, ___real_3fa66666 < local_20)) {
      fVar8 = ___real_3fa66666;
    }
    local_20 = fVar8;
    m3dNormalize((m3dV *)&local_24);
    fVar8 = *(float *)(this + 0x2fb) * *(float *)(this + 0x2fb) +
            *(float *)(this + 0x2f7) * *(float *)(this + 0x2f7) +
            *(float *)(this + 0x2ff) * *(float *)(this + 0x2ff);
    if (m3dSimdType == 0) {
      fVar8 = fVar8 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
      auVar7 = rsqrtss(ZEXT416((uint)fVar8),ZEXT416((uint)fVar8));
      fVar6 = auVar7._0_4_;
      param_1 = (dmgDAMAGE *)
                (`float___cdecl_m3dSqrt(float)'::__l2::half * fVar6 *
                 (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar8 * fVar6 * fVar6) * fVar8);
    }
    else if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar3 = (ulonglong)(uint)fVar8;
      uVar4 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar3);
      uVar5 = PackedFloatingMUL(uVar4,uVar4);
      uVar5 = PackedFloatingReciprocalSQRIter1(uVar5,uVar3);
      uVar4 = PackedFloatingReciprocalIter2(uVar5,uVar4);
      uVar4 = PackedFloatingMUL(uVar4,uVar3);
      param_1 = (dmgDAMAGE *)uVar4;
      FastExitMediaState();
    }
    else {
      param_1 = (dmgDAMAGE *)SQRT(fVar8);
    }
    fVar8 = ___real_3f800000;
    if ((___real_3f800000 <= (float)param_1) &&
       (fVar8 = ___real_3d4ccccd, (float)param_1 <= ___real_40c00000)) {
      fVar8 = ___real_3f800000 - ((float)param_1 - ___real_3f800000) * ___real_3e428f5c;
    }
    fVar8 = fVar8 * ___real_41400000;
    local_24 = local_24 * fVar8;
    local_20 = local_20 * fVar8;
    local_1c = local_1c * fVar8;
    (**(code **)(*(int *)this + 0xa4))(&local_24,0);
  }
LAB_0041bd51:
  (**(code **)(*(int *)this + 0x68))(&local_18);
  switch(*(undefined4 *)(pdVar1 + 4)) {
  case 0:
    local_1c = *(float *)(pdVar1 + 0x10);
    local_18 = *(float *)(pdVar1 + 0x14);
    local_14 = *(float *)(pdVar1 + 0x18);
    break;
  case 1:
    local_1c = *(float *)(pdVar1 + 0x10);
    local_18 = *(float *)(pdVar1 + 0x14);
    local_14 = *(float *)(pdVar1 + 0x18);
    break;
  case 2:
  case 3:
    local_1c = *(float *)(pdVar1 + 0x10);
    local_18 = *(float *)(pdVar1 + 0x14);
    local_14 = *(float *)(pdVar1 + 0x18);
  }
  if (___real_3f800000 < *(float *)(pdVar1 + 8)) {
    iVar2 = plrPLAYER_COMMON::IsActivePowerup((plrPLAYER_COMMON *)this,1);
    if (iVar2 == 0) {
      NotifySFXBloodHands(this,(m3dV *)&local_1c);
      uVar9 = 0xffff0000;
    }
    else {
      uVar9 = 0x800050c8;
    }
    (**(code **)(*(int *)uiSystem + 0x90))(1,uVar9);
  }
  if ((((byte)this[0xb4] & 4) == 0) && (*(int *)(pdVar1 + 4) == 1)) {
    netUBI_SERVERREG::RegServerRcv_LobbyServerMemberUpdateInfo
              ((netUBI_SERVERREG *)gsSysRender,0x28ff1414,1,0x3e4ccccd);
  }
  *(undefined4 *)(this + 0x337) = 0;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: player.cpp
   addr: 0041BE50 */

void __thiscall plrPLAYER::ProcessMP_NOTIFY(plrPLAYER *this,gsEVENT *param_1)

{
  uint *puVar1;
  pwpWEAPON *this_00;
  int iVar2;
  gsEVENT *pgVar3;
  plrPLAYER *ppVar4;
  undefined4 *puVar5;
  int iVar6;
  float fVar7;
  m3dV local_64 [12];
  m3dV amStack_58 [12];
  msgDATA local_4c;
  undefined1 local_4b;
  undefined2 local_4a;
  undefined4 local_48;
  undefined4 local_44 [16];
  undefined4 local_4;
  
  plrPLAYER_COMMON::ProcessMP_NOTIFY((plrPLAYER_COMMON *)this,param_1);
  switch(*(undefined4 *)(param_1 + 4)) {
  case 0:
    if (*(float *)(this + 0x347) < ___real_00000000) {
      if (*(int *)(param_1 + 0x48) != 0) {
        local_4c = (msgDATA)0x0;
        local_4b = 0x40;
        local_4 = 0;
        local_4a = 0x4c;
        local_48 = 0xe;
        pgVar3 = param_1 + 8;
        puVar5 = local_44;
        for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar5 = *(undefined4 *)pgVar3;
          pgVar3 = pgVar3 + 4;
          puVar5 = puVar5 + 1;
        }
        fVar7 = *(float *)(this + 0x34b) * ___real_3f000000;
        *(undefined4 *)(this + 0x347) = 0;
        msgSYSTEM::PostTimeMsgData(&msgSystem,(msgADDR *)this,0x40c,&local_4c,(msgADDR *)this,fVar7)
        ;
        return;
      }
      goto LAB_0041c0a5;
    }
    break;
  case 1:
    if (*(int *)(param_1 + 0xc) == 0) {
      iVar2 = *(int *)(*(int *)(this + 0x23f) + *(int *)(this + 0x243) * 4);
      if (iVar2 != 0) {
        puVar1 = (uint *)(*(int *)(iVar2 + 0xbc) + 4);
        *puVar1 = *puVar1 | 1;
      }
      iVar2 = *(int *)(param_1 + 8);
      *(int *)(this + 0x243) = iVar2;
      puVar1 = (uint *)(*(int *)(*(int *)(*(int *)(this + 0x23f) + iVar2 * 4) + 0xbc) + 4);
      *puVar1 = *puVar1 & 0xfffffffe;
      return;
    }
    *(uint *)(this + 0x29b) = *(uint *)(this + 0x29b) | 0x18;
    *(undefined4 *)(this + 0x247) = *(undefined4 *)(param_1 + 8);
    return;
  case 2:
    (**(code **)(**(int **)(*(int *)(this + 0x23f) + *(int *)(param_1 + 8) * 4) + 0xa8))(1);
    return;
  case 3:
    (**(code **)(*(int *)this + 0x100))(*(undefined4 *)(param_1 + 8));
    return;
  case 4:
    wpnWEAPON::SetAmmo(*(wpnWEAPON **)(*(int *)(this + 0x23f) + *(int *)(param_1 + 8) * 4),
                       *(float *)(param_1 + 0xc));
    if (*(int *)(param_1 + 0x10) != -2) {
      *(int *)(*(int *)(*(int *)(this + 0x23f) + *(int *)(param_1 + 8) * 4) + 399) =
           *(int *)(param_1 + 0x10);
      return;
    }
    break;
  case 5:
    *(undefined4 *)(this + 0x2a7) = *(undefined4 *)(param_1 + 8);
    return;
  case 7:
    pwpWEAPON::Recharge(*(pwpWEAPON **)(*(int *)(this + 0x23f) + *(int *)(this + 0x243) * 4));
    return;
  case 8:
    *(undefined4 *)(this + 0x2b7) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(this + 699) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(this + 0x2bf) = *(undefined4 *)(param_1 + 0x10);
    return;
  case 0xb:
    *(undefined4 *)(this + 0x2ab) = *(undefined4 *)(param_1 + 8);
    break;
  case 0xe:
LAB_0041c0a5:
    animINST::Transform(*(animINST **)(this + 0xbc),(m3dMATR *)(param_1 + 8),0);
    animINST::GetDir(*(animINST **)(this + 0xbc),local_64);
    fVar7 = m3dAngleVector(local_64,&m3dVUnitY);
    *(float *)(this + 0x24b) = fVar7;
    *(undefined4 *)(this + 0x32f) = 0;
    return;
  case 0xf:
    camCAMERA::SetParameters
              (gsCameraPtr,(m3dV *)(param_1 + 8),(m3dV *)(param_1 + 0x20),(m3dV *)(param_1 + 0x14),
               (m3dV *)(param_1 + 0x2c));
    return;
  case 0xffffff9c:
    iVar2 = (**(code **)(*(int *)this + 0x78))();
    if (iVar2 != 0) {
      plrCAM_CTRL::DeathNotify(*(plrCAM_CTRL **)(this + 0x373),0);
    }
    *(uint *)(this + 0x29b) = *(uint *)(this + 0x29b) | 0x8000000;
    iVar2 = *(int *)(param_1 + 8);
    *(undefined4 *)(this + 0x363) = *(undefined4 *)(iVar2 + 0x17c);
    animINST::GetDir(*(animINST **)(this + 0xbc),amStack_58);
    fVar7 = m3dAngleVector(amStack_58,&m3dVUnitY);
    *(float *)(this + 0x24b) = fVar7;
    iVar6 = 0;
    ppVar4 = this + 0x2c7;
    do {
      if (*(int *)ppVar4 == 2) {
        ActivatePowerup(this,iVar6);
      }
      iVar6 = iVar6 + 1;
      ppVar4 = ppVar4 + 8;
    } while (iVar6 < 3);
    (**(code **)(*(int *)this + 0xa4))(iVar2 + 0x148,1);
    if ((*(uint *)(this + 0x29b) & 0x20000000) != 0) {
      plrCAM_CTRL::ZoomClear(*(plrCAM_CTRL **)(this + 0x373));
      (**(code **)(*(int *)uiSystem + 0x1c))(0);
      *(uint *)(this + 0x29b) = *(uint *)(this + 0x29b) & 0xdfffffff;
      this_00 = *(pwpWEAPON **)(*(int *)(this + 0x23f) + *(int *)(this + 0x243) * 4);
      puVar1 = (uint *)(*(int *)(this_00 + 0xbc) + 4);
      *puVar1 = *puVar1 & 0xfffffffe;
      pwpWEAPON::SetZoom(this_00,0);
      return;
    }
    break;
  case 0xffffff9d:
    if ((((byte)this[0x88] & 2) != 0) && ((gsAppState & 0x800U) != 0)) {
      *(undefined4 *)(this + 0xf8) = *(undefined4 *)(param_1 + 0xf);
      *(int *)(this + 0x37f) = (int)(char)((char)param_1[0xd] << 4) >> 4;
      return;
    }
    break;
  case 0xffffff9f:
    if (*(float *)(param_1 + 8) < *(float *)(this + 0xcc)) {
      *(uint *)(this + 0x2a3) = *(uint *)(this + 0x2a3) | 0x20;
    }
    *(undefined4 *)(this + 0xcc) = *(undefined4 *)(param_1 + 8);
    return;
  case 0xffffffa0:
    (**(code **)(*(int *)this + 0x108))(param_1);
    return;
  }
  return;
}




/* from: player.cpp
   addr: 0041C300 */

void __thiscall plrPLAYER::ProcessMP_GET_SYNC_DATA(plrPLAYER *this,void *param_1)

{
  plrSYNC_DATA *ppVar1;
  
                    /* WARNING: Load size is inaccurate */
  ppVar1 = *param_1;
  if (ppVar1 == (plrSYNC_DATA *)0x0) {
    ppVar1 = plrPLAYER_COMMON::GetPlrSyncDataStorage();
    *(plrSYNC_DATA **)param_1 = ppVar1;
  }
  *(undefined4 *)(ppVar1 + 0x17c) = *(undefined4 *)(this + 0x363);
  plrPLAYER_COMMON::ProcessMP_GET_SYNC_DATA((plrPLAYER_COMMON *)this,param_1);
  return;
}




/* from: player.cpp
   addr: 0041C330 */

void __thiscall plrPLAYER::SetDefaultValues(plrPLAYER *this)

{
  plrPLAYER_COMMON::SetDefaultValues((plrPLAYER_COMMON *)this);
  plrCAM_CTRL::RevitalizeNotify(*(plrCAM_CTRL **)(this + 0x373));
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: player.cpp
   addr: 0041C350 */

void __thiscall plrPLAYER::Revitalize(plrPLAYER *this,int param_1)

{
  int iVar1;
  gsSTRINGS *this_00;
  int iVar2;
  ushort *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  iVar1 = *(int *)(this + 0x377);
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 0x29b) = *(uint *)(iVar1 + 0x29b) & 0xfffffffd;
    objOBJ::SetStateProcNo
              (*(objOBJ **)(*(int *)(*(int *)(this + 0x377) + 0xbc) + 0x10),8,
               (_func_int_objOBJ_ptr_void_ptr *)0x0);
  }
  plrPLAYER_COMMON::Revitalize((plrPLAYER_COMMON *)this,param_1);
  (**(code **)(*(int *)this + 0x114))(*(undefined4 *)(this + 0x23b));
  if (*(int *)(wrSysGO + 0x94) == 3) {
    (**(code **)(*(int *)this + 0x118))(*(undefined4 *)(this + 0x2b3));
  }
  *(undefined4 *)(this + 0x353) = _m3dVZero;
  *(undefined4 *)(this + 0x357) = DAT_00963740;
  *(undefined4 *)(this + 0x35b) = DAT_00963744;
  *(undefined4 *)(this + 0x2f7) = _m3dVZero;
  *(undefined4 *)(this + 0x2fb) = DAT_00963740;
  *(undefined4 *)(this + 0x2ff) = DAT_00963744;
  plrCAM_CTRL::RevitalizeNotify(*(plrCAM_CTRL **)(this + 0x373));
  SetupGhostRendState(this);
  this_00 = gsStrings;
  uVar5 = 0;
  uVar4 = 0x40400000;
  iVar1 = *(int *)uiSystem;
  iVar2 = gsSTRINGS::GetStringId(gsStrings,s_GAME_PLAYER_REVITALIZED);
  puVar3 = gsSTRINGS::GetStringById(this_00,iVar2);
  (**(code **)(iVar1 + 0x20))(puVar3,uVar4,uVar5);
  return;
}




/* from: player.cpp
   addr: 0041C450 */

void __thiscall plrPLAYER::RevitalizeStart(plrPLAYER *this,int param_1)

{
  undefined1 local_c;
  undefined1 local_b;
  undefined2 local_a;
  undefined4 local_8;
  int local_4;
  
  if (((byte)this[0x88] & 2) != 0) {
    local_4 = param_1;
    local_c = 0;
    local_b = 0x40;
    local_8 = 3;
    local_a = 0xc;
    (**(code **)(*(int *)gsSysClient + 0x2c))(this,0x40c,&local_c,0x20000);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: player.cpp
   addr: 0041C4B0 */

void __thiscall plrPLAYER::SetupGhostRendState(plrPLAYER *this)

{
  uint *puVar1;
  int iVar2;
  objOBJ *this_00;
  uint uVar3;
  int iStack_c;
  undefined **ppuStack_8;
  char *pcStack_4;
  
  if (*(int *)(this + 0x377) == 0) {
    return;
  }
  iVar2 = *(int *)(*(int *)(this + 0x377) + 0xbc);
  if (((byte)gsSysCinema[0x80] & 1) == 0) {
    *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) | 0x10;
    iVar2 = *(int *)(*(int *)(*(int *)(*(int *)(this + 0x377) + 0x23f) +
                             *(int *)(*(int *)(this + 0x377) + 0x243) * 4) + 0xbc);
    uVar3 = *(uint *)(iVar2 + 4) & 0xfffffffe;
  }
  else {
    uVar3 = *(uint *)(iVar2 + 4) & 0xffffffef;
  }
  *(uint *)(iVar2 + 4) = uVar3;
  *(uint *)(*(int *)(*(int *)(this + 0x377) + 0xbc) + 8) =
       *(uint *)(*(int *)(*(int *)(this + 0x377) + 0xbc) + 8) & 0xfffffffb;
  *(uint *)(*(int *)(*(int *)(this + 0x377) + 0xbc) + 8) =
       *(uint *)(*(int *)(*(int *)(this + 0x377) + 0xbc) + 8) & 0xfffffff7;
  iVar2 = (**(code **)(*(int *)this + 0x78))();
  if (((iVar2 == 0) && ((*(uint *)(this + 0x29b) & 0x500000) == 0)) &&
     (iVar2 = (**(code **)(*(int *)this + 0x7c))(), iVar2 != 0)) {
    iStack_c = 1;
    _apCfgReadBool((void **)&DAT_00603570,s_Video,s_VIDEO_PlrLegs,&iStack_c);
    iVar2 = *(int *)(*(int *)(*(int *)(*(int *)(this + 0x377) + 0x23f) +
                             *(int *)(*(int *)(this + 0x377) + 0x243) * 4) + 0xbc);
    *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) | 0x100000;
    if ((*(uint *)(this + 0x29b) & 0x20000000) == 0) {
      puVar1 = (uint *)(*(int *)(*(int *)(*(int *)(this + 0x23f) + *(int *)(this + 0x243) * 4) +
                                0xbc) + 4);
      *puVar1 = *puVar1 & 0xfffffffe;
    }
    *(uint *)(*(int *)(*(int *)(this + 0x377) + 0xbc) + 4) =
         *(uint *)(*(int *)(*(int *)(this + 0x377) + 0xbc) + 4) & 0xfffffffe;
    iVar2 = *(int *)(*(int *)(*(int *)(*(int *)(this + 0x377) + 0x23f) +
                             *(int *)(*(int *)(this + 0x377) + 0x243) * 4) + 0xbc);
    *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) & 0xfffffffe;
    if (iStack_c == 0) {
      *(uint *)(*(int *)(*(int *)(this + 0x377) + 0xbc) + 4) =
           *(uint *)(*(int *)(*(int *)(this + 0x377) + 0xbc) + 4) | 0x100000;
      *(uint *)(*(int *)(*(int *)(this + 0x377) + 0xbc) + 4) =
           *(uint *)(*(int *)(*(int *)(this + 0x377) + 0xbc) + 4) | 0x2000000;
      puVar1 = (uint *)(*(int *)(*(int *)(*(int *)(*(int *)(this + 0x377) + 0x23f) +
                                         *(int *)(*(int *)(this + 0x377) + 0x243) * 4) + 0xbc) + 4);
      *puVar1 = *puVar1 | 0x2000000;
    }
    else if ((*(float *)(this + 0x24b) < ___real_43160000) ||
            ((*(uint *)(this + 0x29b) & 0x800) != 0)) {
      *(uint *)(*(int *)(*(int *)(this + 0x377) + 0xbc) + 4) =
           *(uint *)(*(int *)(*(int *)(this + 0x377) + 0xbc) + 4) | 0x100000;
      iVar2 = *(int *)(*(int *)(this + 0x377) + 0xbc);
      uVar3 = *(uint *)(iVar2 + 8) | 8;
LAB_0041c8eb:
      *(uint *)(iVar2 + 8) = uVar3;
    }
    else {
      *(uint *)(*(int *)(*(int *)(this + 0x377) + 0xbc) + 4) =
           *(uint *)(*(int *)(*(int *)(this + 0x377) + 0xbc) + 4) & 0xffefffff;
      objOBJ::SetStateProcYes
                (*(objOBJ **)(*(int *)(*(int *)(this + 0x377) + 0xbc) + 0x10),0x200,objIsNFace);
      pcStack_4 = s_DOWN_BODY;
      ppuStack_8 = &objFILTER_HIDDEN_NAME::_vftable_;
      this_00 = objFind(*(objOBJ **)(*(int *)(*(int *)(this + 0x377) + 0xbc) + 0x10),
                        (objFILTER *)&ppuStack_8);
      if (this_00 != (objOBJ *)0x0) {
        objOBJ::SetStateProcNo(this_00,0x200,(_func_int_objOBJ_ptr_void_ptr *)0x0);
      }
      *(uint *)(*(int *)(*(int *)(this + 0x377) + 0xbc) + 4) =
           *(uint *)(*(int *)(*(int *)(this + 0x377) + 0xbc) + 4) & 0xfdffffff;
      puVar1 = (uint *)(*(int *)(*(int *)(*(int *)(*(int *)(this + 0x377) + 0x23f) +
                                         *(int *)(*(int *)(this + 0x377) + 0x243) * 4) + 0xbc) + 4);
      *puVar1 = *puVar1 & 0xfdffffff;
    }
  }
  else {
    iVar2 = (**(code **)(*(int *)this + 0x78))();
    if ((iVar2 != 0) && ((*(uint *)(this + 0x29b) & 0x10000) != 0)) {
      *(uint *)(*(int *)(*(int *)(this + 0x377) + 0xbc) + 4) =
           *(uint *)(*(int *)(*(int *)(this + 0x377) + 0xbc) + 4) | 1;
      iVar2 = *(int *)(*(int *)(*(int *)(*(int *)(this + 0x377) + 0x23f) +
                               *(int *)(*(int *)(this + 0x377) + 0x243) * 4) + 0xbc);
      *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) | 0x100000;
      puVar1 = (uint *)(*(int *)(*(int *)(*(int *)(this + 0x23f) + *(int *)(this + 0x243) * 4) +
                                0xbc) + 4);
      *puVar1 = *puVar1 | 1;
      goto LAB_0041c929;
    }
    *(uint *)(*(int *)(*(int *)(this + 0x377) + 0xbc) + 4) =
         *(uint *)(*(int *)(*(int *)(this + 0x377) + 0xbc) + 4) & 0xffefffff;
    objOBJ::SetStateProcNo
              (*(objOBJ **)(*(int *)(*(int *)(this + 0x377) + 0xbc) + 0x10),0x200,objIsNFace);
    *(uint *)(*(int *)(*(int *)(this + 0x377) + 0xbc) + 4) =
         *(uint *)(*(int *)(*(int *)(this + 0x377) + 0xbc) + 4) & 0xfffffffe;
    iVar2 = *(int *)(*(int *)(*(int *)(*(int *)(this + 0x377) + 0x23f) +
                             *(int *)(*(int *)(this + 0x377) + 0x243) * 4) + 0xbc);
    *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) & 0xffefffff;
    iVar2 = *(int *)(*(int *)(*(int *)(this + 0x23f) + *(int *)(this + 0x243) * 4) + 0xbc);
    *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) | 1;
    if ((*(uint *)(this + 0x29b) & 0x40000000) != 0) {
      puVar1 = (uint *)(*(int *)(*(int *)(*(int *)(*(int *)(this + 0x377) + 0x23f) +
                                         *(int *)(*(int *)(this + 0x377) + 0x243) * 4) + 0xbc) + 4);
      *puVar1 = *puVar1 | 1;
    }
    *(uint *)(*(int *)(*(int *)(this + 0x377) + 0xbc) + 4) =
         *(uint *)(*(int *)(*(int *)(this + 0x377) + 0xbc) + 4) & 0xfdffffff;
    iVar2 = *(int *)(*(int *)(*(int *)(*(int *)(this + 0x377) + 0x23f) +
                             *(int *)(*(int *)(this + 0x377) + 0x243) * 4) + 0xbc);
    *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) & 0xfdffffff;
    if (*(int *)(*(int *)(this + 0x377) + 0x94) == 2) {
      iVar2 = *(int *)(*(int *)(this + 0x377) + 0xbc);
      uVar3 = *(uint *)(iVar2 + 8) | 4;
      goto LAB_0041c8eb;
    }
  }
  if (*(int *)(this + 0x377) != 0) {
    *(undefined4 *)(this + 0x37b) = 0x3d958106;
    animINST::Scale(*(animINST **)(*(int *)(this + 0x377) + 0xbc),0.073,0.073,0.073,0);
    plrPLAYER_MP::UpdateWeapon(*(plrPLAYER_MP **)(this + 0x377));
  }
LAB_0041c929:
  iVar2 = (**(code **)(*(int *)this + 0x7c))();
  if (iVar2 == 0) {
    puVar1 = (uint *)(*(int *)(*(int *)(*(int *)(*(int *)(this + 0x377) + 0x23f) +
                                       *(int *)(*(int *)(this + 0x377) + 0x243) * 4) + 0xbc) + 4);
    *puVar1 = *puVar1 | 1;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: player.cpp
   addr: 0041C960 */

void __thiscall plrPLAYER::ProcessInput(plrPLAYER *this)

{
  uint *puVar1;
  pwpWEAPON *ppVar2;
  uint uVar3;
  int *piVar4;
  gsSTRINGS *this_00;
  int iVar5;
  int iVar6;
  ushort *puVar7;
  int iVar8;
  gsINP_SYSTEM *this_01;
  uint uVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  m3dV local_7c;
  undefined1 uStack_7b;
  undefined2 uStack_7a;
  undefined4 local_78;
  int iStack_74;
  m3dV local_70 [12];
  m3dV local_64 [12];
  m3dV amStack_58 [12];
  m3dV amStack_4c [12];
  m3dMATR amStack_40 [64];
  
  *(undefined4 *)(this + 0x2e7) = 0x40a00000;
  *(undefined4 *)(this + 0x2eb) = 0x41f00000;
  iVar5 = *(int *)(gsSysInput + 0x40);
  if ((((0xf < *(int *)(iVar5 + 8)) || (*(int *)(iVar5 + 0xc) < 0x10)) ||
      ((*(uint *)(*(int *)(iVar5 + 4) + (0xf - *(int *)(iVar5 + 8)) * 0x9c) & 1) == 0)) &&
     ((((*(uint *)(this + 0x2df) & 1) != 0 &&
       (((0xd < *(int *)(iVar5 + 8) || (*(int *)(iVar5 + 0xc) < 0xe)) ||
        ((*(uint *)(*(int *)(iVar5 + 4) + (0xd - *(int *)(iVar5 + 8)) * 0x9c) & 1) == 0)))) ||
      ((((*(uint *)(this + 0x2df) & 1) == 0 && (*(int *)(iVar5 + 8) < 0xe)) &&
       ((0xd < *(int *)(iVar5 + 0xc) &&
        ((*(uint *)(*(int *)(iVar5 + 4) + (0xd - *(int *)(iVar5 + 8)) * 0x9c) & 1) != 0)))))))) {
    *(undefined4 *)(this + 0x2e7) = 0x41200000;
    *(undefined4 *)(this + 0x2eb) = 0x42b40000;
  }
  iVar5 = plrPLAYER_COMMON::IsActivePowerup((plrPLAYER_COMMON *)this,2);
  if (iVar5 != 0) {
    fVar10 = gsMsgGetElapsedTimeScale();
    *(float *)(this + 0x2eb) =
         (___real_3f800000 / fVar10) * *(float *)(this + 0x2eb) * ___real_3f4ccccd;
  }
  iVar5 = *(int *)(gsSysInput + 0x40);
  if (((*(int *)(iVar5 + 8) < 0x10) && (0xf < *(int *)(iVar5 + 0xc))) &&
     ((*(uint *)(*(int *)(iVar5 + 4) + (0xf - *(int *)(iVar5 + 8)) * 0x9c) & 1) != 0)) {
    if (((*(uint *)(this + 0x29b) & 0x200) == 0) && (*(float *)(this + 0x32b) <= ___real_3dcccccd))
    {
      *(uint *)(this + 0x29b) = *(uint *)(this + 0x29b) | 0x200;
    }
  }
  else {
    *(uint *)(this + 0x29b) = *(uint *)(this + 0x29b) & 0xfffffdff;
  }
  if (((-1 < (char)((uint)gsAppState >> 8)) &&
      (iVar5 = *(int *)(gsSysInput + 0x40), *(int *)(iVar5 + 8) < 0xd)) &&
     ((0xc < *(int *)(iVar5 + 0xc) &&
      ((((*(int *)(iVar5 + 8) < 0xd && (0xc < *(int *)(iVar5 + 0xc))) &&
        ((*(uint *)(*(int *)(iVar5 + 4) + (0xc - *(int *)(iVar5 + 8)) * 0x9c) & 1) != 0)) &&
       (iVar5 = gsINP_SYSTEM::IsToggled(gsSysInput,0xc), iVar5 != 0)))))) {
    if (((byte)this[0x29b] & 1) != 0) {
      camCAMERA::GetOrigin(gsCameraPtr,local_70);
      camCAMERA::GetLookAt(gsCameraPtr,&local_7c);
      local_78 = 0;
      m3dNormalize(&local_7c);
      (**(code **)(*(int *)this + 0x74))(local_70,&local_7c,0);
    }
    *(uint *)(this + 0x29b) = *(uint *)(this + 0x29b) ^ 1;
    if ((*(int *)(this + 0x3cb) != 0) && (DAT_006035dc = 1 - DAT_006035dc, DAT_006035dc == 0)) {
      *(uint *)(this + 0x29b) = *(uint *)(this + 0x29b) | 1;
    }
  }
  animINST::GetPos(*(animINST **)(this + 0xbc),local_64);
  this_00 = gsStrings;
  if (((byte)this[0x2a3] & 8) == 0) {
    uVar12 = 0;
    uVar11 = 0x3dcccccd;
    iVar5 = *(int *)uiSystem;
    iVar6 = gsSTRINGS::GetStringId(gsStrings,s_GAME_WAIT_FOR_SERVER);
    puVar7 = gsSTRINGS::GetStringById(this_00,iVar6);
    (**(code **)(iVar5 + 0x20))(puVar7,uVar11,uVar12);
  }
  else if ((*(uint *)(this + 0x29b) & 1) == 0) {
    if ((*(uint *)(this + 0x29b) & 2) == 0) {
      ControlFirstPerson(this);
    }
  }
  else {
    camCAMERA::GetOrigin(gsCameraPtr,amStack_58);
    ControlFlyThrough(this);
    camCAMERA::GetOrigin(gsCameraPtr,amStack_4c);
  }
  ProcessPhysics(this,local_64);
  iVar5 = (**(code **)(*(int *)this + 0x78))();
  if (iVar5 != 0) {
    *(uint *)(this + 0x29b) = *(uint *)(this + 0x29b) & 0xffdfffff;
    goto LAB_0041d545;
  }
  iVar5 = 0;
  iVar6 = 0x13;
  this_01 = gsSysInput;
  do {
    iVar8 = *(int *)(this_01 + 0x40);
    if (((((*(int *)(iVar8 + 8) <= iVar6) && (iVar6 < *(int *)(iVar8 + 0xc))) &&
         ((*(int *)(iVar8 + 8) <= iVar6 &&
          (((iVar6 < *(int *)(iVar8 + 0xc) &&
            ((*(uint *)(*(int *)(iVar8 + 4) + (iVar6 - *(int *)(iVar8 + 8)) * 0x9c) & 1) != 0)) &&
           (iVar8 = gsINP_SYSTEM::IsToggled(this_01,iVar6), this_01 = gsSysInput, iVar8 != 0))))))
        && ((iVar5 != *(int *)(this + 0x243) &&
            (ppVar2 = *(pwpWEAPON **)(*(int *)(this + 0x23f) + iVar5 * 4),
            ppVar2 != (pwpWEAPON *)0x0)))) &&
       ((((byte)ppVar2[0x14f] & 1) != 0 &&
        (iVar8 = pwpWEAPON::IsEmpty(ppVar2), this_01 = gsSysInput, iVar8 == 0)))) break;
    iVar5 = iVar5 + 1;
    iVar6 = iVar6 + 1;
  } while (iVar6 < 0x1e);
  if (iVar5 == 0xb) {
    iVar5 = *(int *)(this + 0x2e3);
    *(undefined4 *)(this + 0x2e3) = 0xb;
  }
  if (((iVar5 < 0xb) && (iVar5 != *(int *)(this + 0x243))) &&
     (uVar3 = *(uint *)(this + 0x29b), (uVar3 & 0x10) == 0)) {
    *(uint *)(this + 0x29b) = uVar3 | 0x18;
    *(int *)(this + 0x247) = iVar5;
    *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 0x200;
    if ((uVar3 & 0x20000000) != 0) {
      plrCAM_CTRL::ZoomClear(*(plrCAM_CTRL **)(this + 0x373));
      (**(code **)(*(int *)uiSystem + 0x1c))(0);
      *(uint *)(this + 0x29b) = *(uint *)(this + 0x29b) & 0xdfffffff;
      ppVar2 = *(pwpWEAPON **)(*(int *)(this + 0x23f) + *(int *)(this + 0x243) * 4);
      puVar1 = (uint *)(*(int *)(ppVar2 + 0xbc) + 4);
      *puVar1 = *puVar1 & 0xfffffffe;
      pwpWEAPON::SetZoom(ppVar2,0);
    }
  }
  else {
    *(int *)(this + 0x2e3) = iVar5;
  }
  if (((byte)this[0x29b] & 0x10) == 0) {
    iVar5 = *(int *)(gsSysInput + 0x40);
    if (((((*(int *)(iVar5 + 8) < 0x1f) && (0x1e < *(int *)(iVar5 + 0xc))) &&
         (*(int *)(iVar5 + 8) < 0x1f)) &&
        ((0x1e < *(int *)(iVar5 + 0xc) &&
         ((*(uint *)(*(int *)(iVar5 + 4) + (0x1e - *(int *)(iVar5 + 8)) * 0x9c) & 1) != 0)))) &&
       (iVar5 = gsINP_SYSTEM::IsToggled(gsSysInput,0x1e), iVar5 != 0)) {
      iVar5 = -1;
    }
    else {
      iVar5 = *(int *)(gsSysInput + 0x40);
      if (((0x1f < *(int *)(iVar5 + 8)) || (*(int *)(iVar5 + 0xc) < 0x20)) ||
         ((0x1f < *(int *)(iVar5 + 8) ||
          (((*(int *)(iVar5 + 0xc) < 0x20 ||
            ((*(uint *)(*(int *)(iVar5 + 4) + (0x1f - *(int *)(iVar5 + 8)) * 0x9c) & 1) == 0)) ||
           (iVar5 = gsINP_SYSTEM::IsToggled(gsSysInput,0x1f), iVar5 == 0)))))) goto LAB_0041cf10;
      iVar5 = 1;
    }
    iVar6 = *(int *)(this + 0x243);
    do {
      iVar6 = iVar6 + iVar5;
      if (iVar6 < 0) {
        iVar6 = 10;
      }
      else if (10 < iVar6) {
        iVar6 = 0;
      }
      ppVar2 = *(pwpWEAPON **)(*(int *)(this + 0x23f) + iVar6 * 4);
      if (((ppVar2 != (pwpWEAPON *)0x0) && (((byte)ppVar2[0x14f] & 1) != 0)) &&
         (iVar8 = pwpWEAPON::IsEmpty(ppVar2), iVar8 == 0)) {
        uVar3 = *(uint *)(this + 0x29b);
        *(uint *)(this + 0x29b) = uVar3 | 0x18;
        *(int *)(this + 0x247) = iVar6;
        *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 0x200;
        if ((uVar3 & 0x20000000) != 0) {
          plrCAM_CTRL::ZoomClear(*(plrCAM_CTRL **)(this + 0x373));
          (**(code **)(*(int *)uiSystem + 0x1c))(0);
          *(uint *)(this + 0x29b) = *(uint *)(this + 0x29b) & 0xdfffffff;
          ppVar2 = *(pwpWEAPON **)(*(int *)(this + 0x23f) + *(int *)(this + 0x243) * 4);
          puVar1 = (uint *)(*(int *)(ppVar2 + 0xbc) + 4);
          *puVar1 = *puVar1 & 0xfffffffe;
          pwpWEAPON::SetZoom(ppVar2,0);
        }
        break;
      }
    } while (iVar6 != *(int *)(this + 0x243));
  }
LAB_0041cf10:
  if ((((*(uint *)(this + 0x29b) & 0x10000000) == 0) && (iVar5 = *(int *)(this + 0x243), iVar5 != 3)
      ) && (((((iVar5 != 6 &&
               ((((iVar5 != 0 && (iVar5 != 9)) &&
                 (iVar5 = *(int *)(gsSysInput + 0x40), *(int *)(iVar5 + 8) < 0x24)) &&
                ((0x23 < *(int *)(iVar5 + 0xc) && (*(int *)(iVar5 + 8) < 0x24)))))) &&
              (0x23 < *(int *)(iVar5 + 0xc))) &&
             (((*(uint *)(*(int *)(iVar5 + 4) + (0x23 - *(int *)(iVar5 + 8)) * 0x9c) & 1) != 0 &&
              (iVar5 = gsINP_SYSTEM::IsToggled(gsSysInput,0x23), iVar5 != 0)))) &&
            (uVar3 = *(uint *)(this + 0x29b), *(uint *)(this + 0x29b) = uVar3 | 0x10000000,
            (uVar3 & 0x20000000) != 0)))) {
    plrCAM_CTRL::ZoomClear(*(plrCAM_CTRL **)(this + 0x373));
    (**(code **)(*(int *)uiSystem + 0x1c))(0);
    *(uint *)(this + 0x29b) = *(uint *)(this + 0x29b) & 0xdfffffff;
    ppVar2 = *(pwpWEAPON **)(*(int *)(this + 0x23f) + *(int *)(this + 0x243) * 4);
    puVar1 = (uint *)(*(int *)(ppVar2 + 0xbc) + 4);
    *puVar1 = *puVar1 & 0xfffffffe;
    pwpWEAPON::SetZoom(ppVar2,0);
  }
  if ((*(int *)(this + 0x243) == 4) && (((byte)this[0x29b] & 2) == 0)) {
    iVar5 = *(int *)(gsSysInput + 0x40);
    if (((*(int *)(iVar5 + 8) < 0x13) &&
        (((0x12 < *(int *)(iVar5 + 0xc) && (*(int *)(iVar5 + 8) < 0x13)) &&
         (0x12 < *(int *)(iVar5 + 0xc))))) &&
       (((*(uint *)(*(int *)(iVar5 + 4) + (0x12 - *(int *)(iVar5 + 8)) * 0x9c) & 1) != 0 &&
        (iVar5 = gsINP_SYSTEM::IsToggled(gsSysInput,0x12), iVar5 != 0)))) {
      plrCAM_CTRL::ZoomNotify(*(plrCAM_CTRL **)(this + 0x373),1);
      ppVar2 = *(pwpWEAPON **)(*(int *)(this + 0x23f) + *(int *)(this + 0x243) * 4);
      if ((*(uint *)(this + 0x29b) & 0x20000000) == 0) {
        *(uint *)(*(int *)(ppVar2 + 0xbc) + 4) = *(uint *)(*(int *)(ppVar2 + 0xbc) + 4) | 1;
        *(uint *)(this + 0x29b) = *(uint *)(this + 0x29b) | 0x20000000;
        (**(code **)(*(int *)uiSystem + 0x1c))(1);
        pwpWEAPON::SetZoom(ppVar2,1);
      }
      else {
        (**(code **)(*(int *)uiSystem + 0x1c))(0);
        *(uint *)(this + 0x29b) = *(uint *)(this + 0x29b) & 0xdfffffff;
        *(uint *)(*(int *)(ppVar2 + 0xbc) + 4) = *(uint *)(*(int *)(ppVar2 + 0xbc) + 4) & 0xfffffffe
        ;
        pwpWEAPON::SetZoom(ppVar2,0);
      }
    }
    else {
      iVar5 = *(int *)(gsSysInput + 0x40);
      if ((((*(int *)(iVar5 + 8) < 0x13) && (0x12 < *(int *)(iVar5 + 0xc))) &&
          ((0x12 < *(int *)(iVar5 + 8) ||
           ((*(int *)(iVar5 + 0xc) < 0x13 ||
            ((*(uint *)(*(int *)(iVar5 + 4) + (0x12 - *(int *)(iVar5 + 8)) * 0x9c) & 1) == 0))))))
         && (iVar5 = gsINP_SYSTEM::IsToggled(gsSysInput,0x12), iVar5 != 0)) {
        plrCAM_CTRL::ZoomNotify(*(plrCAM_CTRL **)(this + 0x373),0);
      }
    }
  }
  iVar5 = *(int *)(gsSysInput + 0x40);
  if (((((*(int *)(iVar5 + 8) < 0x25) && (0x24 < *(int *)(iVar5 + 0xc))) &&
       ((*(uint *)(*(int *)(iVar5 + 4) + (0x24 - *(int *)(iVar5 + 8)) * 0x9c) & 1) != 0)) &&
      (iVar5 = IsReadyShoot(this), iVar5 != 0)) &&
     (((*(int *)(this + 0x243) != 1 && (*(int *)(this + 0x243) != 0)) ||
      (((iVar5 = *(int *)(gsSysInput + 0x40), *(int *)(iVar5 + 8) < 0x25 &&
        ((0x24 < *(int *)(iVar5 + 0xc) && (*(int *)(iVar5 + 8) < 0x25)))) &&
       ((0x24 < *(int *)(iVar5 + 0xc) &&
        (((*(uint *)(*(int *)(iVar5 + 4) + (0x24 - *(int *)(iVar5 + 8)) * 0x9c) & 1) != 0 &&
         (iVar5 = gsINP_SYSTEM::IsToggled(gsSysInput,0x24), iVar5 != 0)))))))))) {
    *(uint *)(this + 0x29b) = *(uint *)(this + 0x29b) | 0x40;
  }
  if ((((*(int *)(this + 0x243) == 10) &&
       (iVar5 = *(int *)(gsSysInput + 0x40), *(int *)(iVar5 + 8) < 0x25)) &&
      (0x24 < *(int *)(iVar5 + 0xc))) &&
     ((((0x24 < *(int *)(iVar5 + 8) || (*(int *)(iVar5 + 0xc) < 0x25)) ||
       ((*(uint *)(*(int *)(iVar5 + 4) + (0x24 - *(int *)(iVar5 + 8)) * 0x9c) & 1) == 0)) &&
      ((iVar5 = gsINP_SYSTEM::IsToggled(gsSysInput,0x24), iVar5 != 0 &&
       (iVar5 = IsReadyShoot(this), iVar5 != 0)))))) {
    *(uint *)(this + 0x29b) = *(uint *)(this + 0x29b) | 0x40;
    pwpATOMICGUN::NotifyStopShoot
              (*(pwpATOMICGUN **)(*(int *)(this + 0x23f) + *(int *)(this + 0x243) * 4));
  }
  uVar3 = *(uint *)(this + 0x29b);
  uVar9 = uVar3 | 0x200000;
  *(uint *)(this + 0x29b) = uVar9;
  piVar4 = *(int **)(*(int *)(this + 0x23f) + *(int *)(this + 0x243) * 4);
  if ((*(byte *)((int)piVar4 + 0x193) & 2) == 0) {
    if ((uVar3 & 0x40) == 0) {
LAB_0041d2fc:
      *(uint *)(this + 0x29b) = uVar9 & 0xffdfffff;
    }
  }
  else {
    iVar5 = (**(code **)(*piVar4 + 0xc0))();
    if (((iVar5 == 0) || ((char)*(uint *)(this + 0x29b) < '\0')) ||
       ((*(uint *)(this + 0x29b) & 0x10000000) != 0)) {
      uVar9 = *(uint *)(this + 0x29b);
      goto LAB_0041d2fc;
    }
  }
  if ((*(uint *)(plrPlayer + 0x29b) & 0x40000000) == 0) {
    iVar5 = *(int *)(gsSysInput + 0x40);
    if ((((*(int *)(iVar5 + 8) < 0x21) && (0x20 < *(int *)(iVar5 + 0xc))) &&
        (((*(int *)(iVar5 + 8) < 0x21 &&
          ((0x20 < *(int *)(iVar5 + 0xc) &&
           ((*(uint *)(*(int *)(iVar5 + 4) + (0x20 - *(int *)(iVar5 + 8)) * 0x9c) & 1) != 0)))) &&
         (*(int *)(iVar5 + 8) < 0x21)))) &&
       ((0x20 < *(int *)(iVar5 + 0xc) &&
        ((*(uint *)(*(int *)(iVar5 + 4) + (0x20 - *(int *)(iVar5 + 8)) * 0x9c) & 2) != 0)))) {
      ActivatePowerup(this,0);
    }
    iVar5 = *(int *)(gsSysInput + 0x40);
    if ((((((*(int *)(iVar5 + 8) < 0x22) && (0x21 < *(int *)(iVar5 + 0xc))) &&
          (*(int *)(iVar5 + 8) < 0x22)) &&
         ((0x21 < *(int *)(iVar5 + 0xc) &&
          ((*(uint *)(*(int *)(iVar5 + 4) + (0x21 - *(int *)(iVar5 + 8)) * 0x9c) & 1) != 0)))) &&
        (*(int *)(iVar5 + 8) < 0x22)) &&
       ((0x21 < *(int *)(iVar5 + 0xc) &&
        ((*(uint *)(*(int *)(iVar5 + 4) + (0x21 - *(int *)(iVar5 + 8)) * 0x9c) & 2) != 0)))) {
      ActivatePowerup(this,1);
    }
    iVar5 = *(int *)(gsSysInput + 0x40);
    if ((((*(int *)(iVar5 + 8) < 0x23) && (0x22 < *(int *)(iVar5 + 0xc))) &&
        (*(int *)(iVar5 + 8) < 0x23)) &&
       (((0x22 < *(int *)(iVar5 + 0xc) &&
         ((*(uint *)(*(int *)(iVar5 + 4) + (0x22 - *(int *)(iVar5 + 8)) * 0x9c) & 1) != 0)) &&
        (iVar5 = gsINP_SYSTEM::IsToggled(gsSysInput,0x22), iVar5 != 0)))) {
      ActivatePowerup(this,2);
    }
  }
  NotifyMsgUse(this);
  iVar5 = *(int *)(gsSysInput + 0x40);
  if (((*(int *)(iVar5 + 8) < 0x11) && (0x10 < *(int *)(iVar5 + 0xc))) &&
     ((*(int *)(iVar5 + 8) < 0x11 &&
      (((0x10 < *(int *)(iVar5 + 0xc) &&
        ((*(uint *)(*(int *)(iVar5 + 4) + (0x10 - *(int *)(iVar5 + 8)) * 0x9c) & 1) != 0)) &&
       (iVar5 = gsINP_SYSTEM::IsToggled(gsSysInput,0x10), iVar5 != 0)))))) {
    ProcessUse(this);
  }
  iVar5 = *(int *)(gsSysInput + 0x40);
  if (((*(int *)(iVar5 + 8) < 0x2b) && (0x2a < *(int *)(iVar5 + 0xc))) &&
     (((*(int *)(iVar5 + 8) < 0x2b &&
       ((0x2a < *(int *)(iVar5 + 0xc) &&
        ((*(uint *)(*(int *)(iVar5 + 4) + (0x2a - *(int *)(iVar5 + 8)) * 0x9c) & 1) != 0)))) &&
      (iVar5 = gsINP_SYSTEM::IsToggled(gsSysInput,0x2a), iVar5 != 0)))) {
    iStack_74 = 1 - *(int *)(this + 0x2b3);
    local_7c = (m3dV)0x0;
    uStack_7b = 0x40;
    local_78 = 10;
    uStack_7a = 0xc;
    (**(code **)(*(int *)gsSysClient + 0x2c))(this,0x40c,&local_7c,0x20000);
  }
LAB_0041d545:
  iVar5 = *(int *)(gsSysInput + 0x40);
  if (((((*(int *)(iVar5 + 8) < 0x2c) && (0x2b < *(int *)(iVar5 + 0xc))) &&
       (*(int *)(iVar5 + 8) < 0x2c)) &&
      ((0x2b < *(int *)(iVar5 + 0xc) &&
       ((*(uint *)(*(int *)(iVar5 + 4) + (0x2b - *(int *)(iVar5 + 8)) * 0x9c) & 1) != 0)))) &&
     (iVar5 = gsINP_SYSTEM::IsToggled(gsSysInput,0x2b), iVar5 != 0)) {
    *(uint *)(gsSysRender + 4) = *(uint *)(gsSysRender + 4) | 8;
  }
  animINST::GetPos(*(animINST **)(this + 0xbc),local_70);
  m3dMATR::MakeLCS2WCS_VZ(amStack_40,local_70,(m3dV *)(this + 0x25f));
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: player.cpp
   addr: 0041D5D0 */

void __thiscall plrPLAYER::ProcessPhysics(plrPLAYER *this,m3dV *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  objOBJ *poVar4;
  float *pfVar5;
  plrPLAYER *ppVar6;
  uint uVar7;
  int iVar8;
  plrPLAYER *ppVar9;
  float *pfVar10;
  plrPLAYER *ppVar11;
  plrPLAYER *ppVar12;
  undefined4 *puVar13;
  uint uVar14;
  undefined4 uVar15;
  ulonglong uVar16;
  undefined8 uVar17;
  undefined8 extraout_MM1;
  undefined8 extraout_MM1_00;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar27 [16];
  float fVar28;
  float fVar29;
  float local_124 [4];
  float local_114;
  float fStack_110;
  float fStack_10c;
  undefined4 uStack_108;
  float local_104;
  float fStack_100;
  float fStack_fc;
  undefined4 uStack_f8;
  float local_e4 [4];
  float local_d4;
  float fStack_d0;
  float fStack_cc;
  undefined4 uStack_c8;
  float local_c4;
  float fStack_c0;
  float fStack_bc;
  undefined4 uStack_b8;
  float local_b4 [3];
  undefined4 uStack_a8;
  undefined **local_a4;
  float local_a0;
  float local_9c;
  undefined4 local_98 [5];
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined **local_78;
  uint local_74;
  undefined4 local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c [3];
  float local_50;
  float local_4c;
  float local_48;
  float local_44 [3];
  plrPLAYER *local_38;
  objOBJ *local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  plrPLAYER *local_c;
  objOBJ *local_8;
  
  local_98[4] = _m3dVZero;
  local_84 = DAT_00963740;
  local_98[0] = 0;
  local_98[1] = 0;
  local_98[2] = 0;
  local_98[3] = 0;
  local_80 = DAT_00963744;
  local_7c = 0;
  cdtREFINE::cdtREFINE((cdtREFINE *)&local_78,2,*(animINST **)(plrPlayer + 0xbc));
  local_6c = 1;
  local_78 = &plrCDT_REFINE::_vftable_;
  animINST::GetPos(*(animINST **)(this + 0xbc),(m3dV *)&local_24);
  if ((*(uint *)(this + 0x29b) & 0x800) != 0) {
    local_8 = (objOBJ *)(___real_3f800000 / gsElapsedTime);
    fVar29 = (float)local_8;
    if (___real_40a00000 < (float)local_8) {
      fVar29 = ___real_40a00000;
    }
    fVar26 = (float)local_8;
    if (___real_41a00000 < (float)local_8) {
      fVar26 = ___real_41a00000;
    }
    *(float *)(this + 0x2f7) =
         (___real_3f800000 - gsElapsedTime * fVar29) * *(float *)(this + 0x2f7);
    *(float *)(this + 0x2ff) =
         (___real_3f800000 - gsElapsedTime * fVar29) * *(float *)(this + 0x2ff);
    *(float *)(this + 0x2fb) =
         (___real_3f800000 - gsElapsedTime * fVar26) * *(float *)(this + 0x2fb);
  }
  *(float *)(this + 0x2fb) = *(float *)(this + 0x2fb) - gsElapsedTime * *(float *)(this + 0x303);
  if (((DAT_005ee370 != 0) && (((byte)this[0x30b] & 2) != 0)) &&
     ((*(float *)(this + 0x32b) < ___real_3d4ccccd ||
      ((___real_3ecccccd < *(float *)(this + 0x34f) && (*(float *)(this + 0x32b) < ___real_40a00000)
       ))))) {
    scnSCENE::GetCDTFace(gsScenePtr,(cdtINFO *)(this + 0x30b),(m3dPOLY *)0x0,(m3dV *)local_44);
    fVar28 = m3dAngleVector((m3dV *)local_44,&m3dVUnitY);
    fVar29 = local_44[0] * _m3dVUnitY + local_44[1] * DAT_005f9994 + local_44[2] * DAT_005f9998;
    local_a0 = DAT_005f9994 * fVar29;
    local_9c = DAT_005f9998 * fVar29;
    local_5c[1] = local_44[1] - local_a0;
    fVar26 = ___real_00000000;
    if ((___real_42340000 <= fVar28) && (fVar26 = ___real_3f800000, fVar28 <= ___real_42700000)) {
      fVar26 = (fVar28 - ___real_42340000) * ___real_3d888889;
    }
    fVar26 = fVar26 * gsElapsedTime * ___real_43960000;
    *(float *)(this + 0x2f7) =
         (local_44[0] - _m3dVUnitY * fVar29) * fVar26 + *(float *)(this + 0x2f7);
    *(float *)(this + 0x2fb) = local_5c[1] * fVar26 + *(float *)(this + 0x2fb);
    *(float *)(this + 0x2ff) = (local_44[2] - local_9c) * fVar26 + *(float *)(this + 0x2ff);
  }
  local_8 = (objOBJ *)gsElapsedTime;
  local_24 = gsElapsedTime * *(float *)(this + 0x353) +
             gsElapsedTime * *(float *)(this + 0x2f7) + local_24;
  local_20 = gsElapsedTime * *(float *)(this + 0x357) +
             gsElapsedTime * *(float *)(this + 0x2fb) + local_20;
  local_1c = gsElapsedTime * *(float *)(this + 0x35b) +
             gsElapsedTime * *(float *)(this + 0x2ff) + local_1c;
  animINST::Translate(*(animINST **)(this + 0xbc),(m3dV *)&local_24,0);
  if ((*(uint *)(this + 0x29b) & 0xc00) == 0) {
    if (gsElapsedTime * *(float *)(this + 0x303) <= *(float *)(this + 0x2f3)) {
      local_8 = *(objOBJ **)(this + 0x2f3);
    }
    else {
      local_8 = (objOBJ *)(gsElapsedTime * *(float *)(this + 0x303) * ___real_3f8ccccd);
    }
  }
  else {
    local_8 = (objOBJ *)0x40200000;
  }
  poVar4 = local_8;
  scnSCENE::FloorPlace
            (gsScenePtr,(m3dV *)&local_24,DAT_005d069c,(m3dV *)&local_18,(float)local_8,0.0,0,
             (cdtREFINE *)&local_78,(cdtINFO *)(this + 0x30b));
  if (((*(uint *)(this + 0x29b) & 0xc00) != 0) && ((*(uint *)(this + 0x29b) & 0x20) != 0)) {
    local_30 = *(float *)(this + 0xe0);
    local_2c = *(float *)(this + 0xe4);
    local_28 = *(float *)(this + 0xe8);
    iVar3 = _m3dNormalize((m3dV *)&local_30);
    if (iVar3 == 0) {
      animINST::GetDir(*(animINST **)(this + 0xbc),(m3dV *)&local_30);
    }
    fVar29 = *(float *)(this + 0x307) + ___real_3dcccccd;
    local_50 = local_30 * fVar29 + local_24;
    local_4c = local_2c * fVar29 + local_20;
    local_48 = local_28 * fVar29 + local_1c;
    iVar3 = scnSCENE::FloorPlace
                      (gsScenePtr,(m3dV *)&local_50,DAT_005d069c,(m3dV *)&local_68,(float)poVar4,0.0
                       ,0,(cdtREFINE *)&local_78,(cdtINFO *)local_98);
    if ((iVar3 != 0) && (local_14 < local_64)) {
      local_14 = local_64;
      puVar13 = local_98;
      ppVar9 = this + 0x30b;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(undefined4 *)ppVar9 = *puVar13;
        puVar13 = puVar13 + 1;
        ppVar9 = ppVar9 + 4;
      }
      local_10 = local_60;
      local_18 = local_68;
    }
  }
  if ((*(uint *)(this + 0x30b) & 2) == 0) {
    local_18 = local_24;
    local_14 = local_20;
    local_10 = local_1c;
LAB_0041e2e5:
    if (*(int *)(this + 899) != 0) {
      *(float *)(this + 0x2f7) = *(float *)(this + 0x2f7) + *(float *)(this + 0x3bb);
      *(float *)(this + 0x2fb) = *(float *)(this + 0x3bf) + *(float *)(this + 0x2fb);
      *(float *)(this + 0x2ff) = *(float *)(this + 0x3c3) + *(float *)(this + 0x2ff);
    }
    *(undefined4 *)(this + 899) = 0;
    *(undefined4 *)(this + 0x387) = 0;
  }
  else {
    if (((*(int *)(this + 0x30f) == 0) || ((*(byte *)(*(int *)(this + 0x30f) + 4) & 0x40) == 0)) ||
       (___real_3dcccccd <= *(float *)(this + 0x32b))) goto LAB_0041e2e5;
    poVar4 = scnSCENE::GetCDTObj(gsScenePtr,(cdtINFO *)(this + 0x30b));
    local_34 = poVar4;
    animINST::Validate(*(animINST **)(this + 0x30f),4);
    if (((*(int *)(this + 899) == 0) || (*(int *)(this + 899) != *(int *)(this + 0x30f))) ||
       (poVar4 != *(objOBJ **)(this + 0x387))) {
      *(undefined4 *)(this + 0x3bb) = _m3dVZero;
      *(undefined4 *)(this + 0x3bf) = DAT_00963740;
      *(undefined4 *)(this + 0x3c3) = DAT_00963744;
    }
    else {
      local_38 = (plrPLAYER *)local_44;
      local_8 = poVar4 + 0x3c;
      if (m3dSimdType != 0) {
        if (m3dSimdType == 1) {
          FastExitMediaState();
          uVar18 = *(undefined8 *)(this + 0x38b);
          uVar15 = (undefined4)uVar18;
          uVar19 = CONCAT44(uVar15,uVar15);
          uVar15 = (undefined4)((ulonglong)uVar18 >> 0x20);
          uVar22 = CONCAT44(uVar15,uVar15);
          uVar23 = CONCAT44(*(undefined4 *)(this + 0x393),*(undefined4 *)(this + 0x393));
          uVar18 = PackedFloatingMUL(uVar19,*(undefined8 *)local_8);
          uVar17 = PackedFloatingMUL(uVar22,*(undefined8 *)(poVar4 + 0x4c));
          uVar20 = PackedFloatingMUL(uVar23,*(undefined8 *)(poVar4 + 0x5c));
          uVar18 = PackedFloatingADD(uVar18,*(undefined8 *)(poVar4 + 0x6c));
          uVar21 = PackedFloatingMUL(uVar19,*(undefined8 *)(poVar4 + 0x44));
          uVar19 = PackedFloatingADD(uVar17,uVar20);
          uVar17 = PackedFloatingMUL(uVar22,*(undefined8 *)(poVar4 + 0x54));
          uVar23 = PackedFloatingMUL(uVar23,*(undefined8 *)(poVar4 + 100));
          uVar22 = PackedFloatingADD(uVar21,*(undefined8 *)(poVar4 + 0x74));
          uVar18 = PackedFloatingADD(uVar18,uVar19);
          uVar19 = PackedFloatingADD(uVar17,uVar23);
          local_44[0] = (float)uVar18;
          uVar18 = PackedFloatingADD(uVar22,uVar19);
          local_44[2] = (float)uVar18;
          FastExitMediaState();
        }
        else {
          iVar3 = 0;
          local_c = (plrPLAYER *)((int)local_8 - (int)local_44);
          pfVar5 = local_44;
          do {
            ppVar9 = local_c;
            iVar8 = 0;
            *pfVar5 = 0.0;
            pfVar10 = (float *)((int)ppVar9 + (int)pfVar5);
            do {
              iVar1 = iVar8 * 4;
              fVar29 = *pfVar10;
              iVar8 = iVar8 + 1;
              pfVar10 = pfVar10 + 4;
              *pfVar5 = *(float *)(this + 0x38b + iVar1) * fVar29 + *pfVar5;
            } while (iVar8 < 3);
            iVar8 = iVar3 + iVar8 * 4;
            iVar3 = iVar3 + 1;
            *pfVar5 = *(float *)(local_8 + iVar8 * 4) + *pfVar5;
            pfVar5 = pfVar5 + 1;
          } while (iVar3 < 3);
        }
      }
      local_5c[0] = local_44[0] - *(float *)(this + 0x397);
      local_c = (plrPLAYER *)local_5c;
      poVar4 = local_34 + 0x3c;
      local_5c[2] = local_44[2] - *(float *)(this + 0x39f);
      ppVar9 = this + 0x3a3;
      local_5c[1] = 0.0;
      local_38 = ppVar9;
      local_8 = poVar4;
      local_18 = local_18 + local_5c[0];
      local_10 = local_10 + local_5c[2];
      fVar29 = ___real_3f800000 / gsElapsedTime;
      *(float *)(this + 0x3bb) = local_5c[0] * fVar29;
      *(float *)(this + 0x3bf) = ___real_00000000 * fVar29;
      *(float *)(this + 0x3c3) = local_5c[2] * fVar29;
      if (m3dSimdType != 0) {
        if (m3dSimdType == 1) {
          FastExitMediaState();
          uVar15 = (undefined4)*(undefined8 *)ppVar9;
          uVar18 = CONCAT44(uVar15,uVar15);
          uVar15 = (undefined4)((ulonglong)*(undefined8 *)ppVar9 >> 0x20);
          uVar22 = CONCAT44(uVar15,uVar15);
          uVar23 = CONCAT44(*(undefined4 *)(this + 0x3ab),*(undefined4 *)(this + 0x3ab));
          uVar19 = PackedFloatingMUL(uVar18,*(undefined8 *)poVar4);
          uVar17 = PackedFloatingMUL(uVar22,*(undefined8 *)(local_34 + 0x4c));
          uVar20 = PackedFloatingMUL(uVar23,*(undefined8 *)(local_34 + 0x5c));
          uVar21 = PackedFloatingMUL(uVar18,*(undefined8 *)(local_34 + 0x44));
          uVar18 = PackedFloatingADD(uVar17,uVar20);
          uVar22 = PackedFloatingMUL(uVar22,*(undefined8 *)(local_34 + 0x54));
          uVar17 = PackedFloatingMUL(uVar23,*(undefined8 *)(local_34 + 100));
          uVar18 = PackedFloatingADD(uVar19,uVar18);
          uVar19 = PackedFloatingADD(uVar22,uVar17);
          local_5c[1] = (float)((ulonglong)uVar18 >> 0x20);
          local_5c[0] = (float)uVar18;
          uVar18 = PackedFloatingADD(uVar21,uVar19);
          local_5c[2] = (float)uVar18;
          FastExitMediaState();
        }
        else {
          pfVar5 = local_5c;
          local_c = (plrPLAYER *)0x3;
          do {
            *pfVar5 = 0.0;
            iVar3 = 0;
            pfVar10 = (float *)(((int)poVar4 - (int)local_5c) + (int)pfVar5);
            do {
              iVar8 = iVar3 * 4;
              fVar29 = *pfVar10;
              iVar3 = iVar3 + 1;
              pfVar10 = pfVar10 + 4;
              *pfVar5 = *(float *)(ppVar9 + iVar8) * fVar29 + *pfVar5;
            } while (iVar3 < 3);
            pfVar5 = pfVar5 + 1;
            local_c = (plrPLAYER *)((int)local_c + -1);
          } while (local_c != (plrPLAYER *)0x0);
        }
      }
      fVar29 = m3xzAngleVector((m3dV *)(this + 0x3af),(m3dV *)local_5c);
      local_c = (plrPLAYER *)fVar29;
      animINST::RotateY(*(animINST **)(this + 0xbc),fVar29,2);
      m3dMATR::MakeRotY((m3dMATR *)local_124,fVar29);
      local_38 = (plrPLAYER *)local_124;
      local_c = this + 0x25f;
      if (m3dSimdType == 0) {
        if (((uint)local_124 & 0xf) == 0) {
          fVar29 = *(float *)local_c;
          fVar26 = *(float *)(this + 0x263);
          fVar28 = *(float *)(this + 0x267);
          fVar24 = fVar29 * local_124[0] + fVar26 * local_114 + fVar28 * local_104;
          fVar25 = fVar29 * local_124[1] + fVar26 * fStack_110 + fVar28 * fStack_100;
          fVar29 = fVar29 * local_124[2] + fVar26 * fStack_10c + fVar28 * fStack_fc;
        }
        else {
          fVar29 = *(float *)local_c;
          fVar26 = *(float *)(this + 0x263);
          fVar28 = *(float *)(this + 0x267);
          fVar24 = fVar29 * local_124[0] + fVar26 * local_114 + fVar28 * local_104;
          fVar25 = fVar29 * local_124[1] + fVar26 * fStack_110 + fVar28 * fStack_100;
          fVar29 = fVar29 * local_124[2] + fVar26 * fStack_10c + fVar28 * fStack_fc;
        }
        *(ulonglong *)local_c = CONCAT44(fVar25,fVar24);
        *(float *)(this + 0x267) = fVar29;
      }
      else if (m3dSimdType == 1) {
        FastExitMediaState();
        uVar15 = (undefined4)*(undefined8 *)local_c;
        uVar18 = CONCAT44(uVar15,uVar15);
        uVar15 = (undefined4)((ulonglong)*(undefined8 *)local_c >> 0x20);
        uVar22 = CONCAT44(uVar15,uVar15);
        uVar23 = CONCAT44(*(undefined4 *)(this + 0x267),*(undefined4 *)(this + 0x267));
        uVar19 = PackedFloatingMUL(uVar18,CONCAT44(local_124[1],local_124[0]));
        uVar17 = PackedFloatingMUL(uVar22,CONCAT44(fStack_110,local_114));
        uVar20 = PackedFloatingMUL(uVar23,CONCAT44(fStack_100,local_104));
        uVar21 = PackedFloatingMUL(uVar18,CONCAT44(local_124[3],local_124[2]));
        uVar18 = PackedFloatingADD(uVar17,uVar20);
        uVar22 = PackedFloatingMUL(uVar22,CONCAT44(uStack_108,fStack_10c));
        uVar17 = PackedFloatingMUL(uVar23,CONCAT44(uStack_f8,fStack_fc));
        uVar18 = PackedFloatingADD(uVar19,uVar18);
        uVar19 = PackedFloatingADD(uVar22,uVar17);
        *(undefined8 *)local_c = uVar18;
        uVar18 = PackedFloatingADD(uVar21,uVar19);
        *(int *)(this + 0x267) = (int)uVar18;
        FastExitMediaState();
      }
      else {
        iVar3 = 0;
        do {
          *(undefined4 *)((int)&local_a4 + iVar3) = 0;
          iVar8 = 0;
          pfVar5 = (float *)((int)local_124 + iVar3);
          fVar29 = ___real_00000000;
          do {
            iVar1 = iVar8 * 4;
            fVar26 = *pfVar5;
            iVar8 = iVar8 + 1;
            pfVar5 = pfVar5 + 4;
            fVar29 = *(float *)(local_c + iVar1) * fVar26 + fVar29;
          } while (iVar8 < 3);
          *(float *)((int)&local_a4 + iVar3) = fVar29;
          iVar3 = iVar3 + 4;
        } while (iVar3 < 0xc);
        *(undefined ***)local_c = local_a4;
        *(float *)(this + 0x263) = local_a0;
        *(float *)(this + 0x267) = local_9c;
      }
    }
    ppVar9 = this + 0x397;
    *(float *)ppVar9 = local_18;
    *(float *)(this + 0x39b) = local_14;
    *(float *)(this + 0x39f) = local_10;
    animINST::GetDir(*(animINST **)(this + 0xbc),(m3dV *)(this + 0x3af));
    m3dMATR::Invert((m3dMATR *)(local_34 + 0x3c),(m3dMATR *)local_e4);
    ppVar12 = this + 0x38b;
    local_8 = (objOBJ *)local_e4;
    local_38 = ppVar9;
    if (m3dSimdType == 0) {
      if (((uint)local_e4 & 0xf) == 0) {
        fVar29 = *(float *)ppVar9;
        fVar26 = *(float *)(this + 0x39b);
        fVar28 = *(float *)(this + 0x39f);
        fVar24 = fVar29 * local_e4[0] + local_b4[0] + fVar26 * local_d4 + fVar28 * local_c4;
        fVar25 = fVar29 * local_e4[1] + local_b4[1] + fVar26 * fStack_d0 + fVar28 * fStack_c0;
        fVar29 = fVar29 * local_e4[2] + local_b4[2] + fVar26 * fStack_cc + fVar28 * fStack_bc;
      }
      else {
        fVar29 = *(float *)ppVar9;
        fVar26 = *(float *)(this + 0x39b);
        fVar28 = *(float *)(this + 0x39f);
        fVar24 = fVar29 * local_e4[0] + fVar26 * local_d4 + fVar28 * local_c4 + local_b4[0];
        fVar25 = fVar29 * local_e4[1] + fVar26 * fStack_d0 + fVar28 * fStack_c0 + local_b4[1];
        fVar29 = fVar29 * local_e4[2] + fVar26 * fStack_cc + fVar28 * fStack_bc + local_b4[2];
      }
      *(ulonglong *)ppVar12 = CONCAT44(fVar25,fVar24);
      *(float *)(this + 0x393) = fVar29;
    }
    else if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar15 = (undefined4)*(undefined8 *)ppVar9;
      uVar18 = CONCAT44(uVar15,uVar15);
      uVar15 = (undefined4)((ulonglong)*(undefined8 *)ppVar9 >> 0x20);
      uVar22 = CONCAT44(uVar15,uVar15);
      uVar23 = CONCAT44(*(undefined4 *)(this + 0x39f),*(undefined4 *)(this + 0x39f));
      uVar19 = PackedFloatingMUL(uVar18,CONCAT44(local_e4[1],local_e4[0]));
      uVar17 = PackedFloatingMUL(uVar22,CONCAT44(fStack_d0,local_d4));
      uVar20 = PackedFloatingMUL(uVar23,CONCAT44(fStack_c0,local_c4));
      uVar19 = PackedFloatingADD(uVar19,CONCAT44(local_b4[1],local_b4[0]));
      uVar21 = PackedFloatingMUL(uVar18,CONCAT44(local_e4[3],local_e4[2]));
      uVar18 = PackedFloatingADD(uVar17,uVar20);
      uVar17 = PackedFloatingMUL(uVar22,CONCAT44(uStack_c8,fStack_cc));
      uVar23 = PackedFloatingMUL(uVar23,CONCAT44(uStack_b8,fStack_bc));
      uVar22 = PackedFloatingADD(uVar21,CONCAT44(uStack_a8,local_b4[2]));
      uVar18 = PackedFloatingADD(uVar19,uVar18);
      uVar19 = PackedFloatingADD(uVar17,uVar23);
      *(undefined8 *)ppVar12 = uVar18;
      uVar18 = PackedFloatingADD(uVar22,uVar19);
      *(int *)(this + 0x393) = (int)uVar18;
      FastExitMediaState();
    }
    else {
      iVar3 = 0;
      local_c = (plrPLAYER *)((int)local_e4 - (int)ppVar12);
      ppVar6 = ppVar12;
      do {
        iVar8 = 0;
        *(float *)ppVar6 = 0.0;
        ppVar11 = ppVar6 + ((int)local_e4 - (int)ppVar12);
        do {
          iVar1 = iVar8 * 4;
          fVar29 = *(float *)ppVar11;
          iVar8 = iVar8 + 1;
          ppVar11 = ppVar11 + 0x10;
          *(float *)ppVar6 = *(float *)(ppVar9 + iVar1) * fVar29 + *(float *)ppVar6;
        } while (iVar8 < 3);
        iVar8 = iVar3 + iVar8 * 4;
        iVar3 = iVar3 + 1;
        *(float *)ppVar6 = local_e4[iVar8] + *(float *)ppVar6;
        ppVar6 = ppVar6 + 4;
      } while (iVar3 < 3);
    }
    ppVar9 = this + 0x3a3;
    local_38 = this + 0x3af;
    local_8 = (objOBJ *)local_e4;
    local_c = ppVar9;
    if (m3dSimdType == 0) {
      if (((uint)local_e4 & 0xf) == 0) {
        fVar29 = *(float *)local_38;
        fVar26 = *(float *)(this + 0x3b3);
        fVar28 = *(float *)(this + 0x3b7);
        fVar24 = fVar29 * local_e4[0] + fVar26 * local_d4 + fVar28 * local_c4;
        fVar25 = fVar29 * local_e4[1] + fVar26 * fStack_d0 + fVar28 * fStack_c0;
        fVar29 = fVar29 * local_e4[2] + fVar26 * fStack_cc + fVar28 * fStack_bc;
      }
      else {
        fVar29 = *(float *)local_38;
        fVar26 = *(float *)(this + 0x3b3);
        fVar28 = *(float *)(this + 0x3b7);
        fVar24 = fVar29 * local_e4[0] + fVar26 * local_d4 + fVar28 * local_c4;
        fVar25 = fVar29 * local_e4[1] + fVar26 * fStack_d0 + fVar28 * fStack_c0;
        fVar29 = fVar29 * local_e4[2] + fVar26 * fStack_cc + fVar28 * fStack_bc;
      }
      *(ulonglong *)ppVar9 = CONCAT44(fVar25,fVar24);
      *(float *)(this + 0x3ab) = fVar29;
    }
    else if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar15 = (undefined4)*(undefined8 *)local_38;
      uVar18 = CONCAT44(uVar15,uVar15);
      uVar15 = (undefined4)((ulonglong)*(undefined8 *)local_38 >> 0x20);
      uVar22 = CONCAT44(uVar15,uVar15);
      uVar23 = CONCAT44(*(undefined4 *)(this + 0x3b7),*(undefined4 *)(this + 0x3b7));
      uVar19 = PackedFloatingMUL(uVar18,CONCAT44(local_e4[1],local_e4[0]));
      uVar17 = PackedFloatingMUL(uVar22,CONCAT44(fStack_d0,local_d4));
      uVar20 = PackedFloatingMUL(uVar23,CONCAT44(fStack_c0,local_c4));
      uVar21 = PackedFloatingMUL(uVar18,CONCAT44(local_e4[3],local_e4[2]));
      uVar18 = PackedFloatingADD(uVar17,uVar20);
      uVar22 = PackedFloatingMUL(uVar22,CONCAT44(uStack_c8,fStack_cc));
      uVar17 = PackedFloatingMUL(uVar23,CONCAT44(uStack_b8,fStack_bc));
      uVar18 = PackedFloatingADD(uVar19,uVar18);
      uVar19 = PackedFloatingADD(uVar22,uVar17);
      *(undefined8 *)ppVar9 = uVar18;
      uVar18 = PackedFloatingADD(uVar21,uVar19);
      *(int *)(this + 0x3ab) = (int)uVar18;
      FastExitMediaState();
    }
    else {
      local_c = (plrPLAYER *)0x3;
      iVar3 = (int)local_e4 - (int)ppVar9;
      do {
        *(float *)ppVar9 = 0.0;
        iVar8 = 0;
        ppVar12 = ppVar9 + iVar3;
        do {
          iVar1 = iVar8 * 4;
          fVar29 = *(float *)ppVar12;
          iVar8 = iVar8 + 1;
          ppVar12 = ppVar12 + 0x10;
          *(float *)ppVar9 = *(float *)(local_38 + iVar1) * fVar29 + *(float *)ppVar9;
        } while (iVar8 < 3);
        ppVar9 = ppVar9 + 4;
        local_c = local_c + -1;
      } while (local_c != (plrPLAYER *)0x0);
    }
    *(undefined4 *)(this + 899) = *(undefined4 *)(this + 0x30f);
    *(objOBJ **)(this + 0x387) = local_34;
  }
  UpdateUnderwater(this);
  uVar14 = *(uint *)(this + 0x29b);
  if (((uVar14 & 0xc00) != 0) && (*(float *)(this + 799) < local_20)) {
    local_18 = local_24;
    local_14 = local_20;
    local_10 = local_1c;
  }
  if ((uVar14 & 0x2000) == 0) {
    if ((___real_00000000 < *(float *)(this + 0x2fb)) && (local_14 < local_20)) {
      local_14 = local_20;
    }
  }
  else {
    if (local_20 < local_14) {
      *(uint *)(this + 0x29b) = uVar14 & 0xffffdfff;
    }
    if (local_14 < local_20) {
      local_14 = local_20;
    }
  }
  if (*(float *)(this + 0x2f3) + *(float *)(this + 799) < local_20) {
    fVar29 = ___real_bf800000;
    if (*(float *)(this + 0x2fb) <= ___real_bf800000) {
      fVar29 = *(float *)(this + 0x2fb);
    }
    if (local_14 < gsElapsedTime * fVar29 + local_20) {
      local_14 = local_20;
      *(uint *)(this + 0x29b) = *(uint *)(this + 0x29b) | 0x2000;
    }
  }
  if (((byte)this[0x30b] & 2) != 0) {
    *(float *)(this + 0x32b) = local_14 - *(float *)(this + 799);
  }
  if (((*(float *)(this + 0x32b) <= ___real_3dcccccd) || ((*(uint *)(this + 0x29b) & 0xc00) != 0))
     || (___real_3ecccccd <= *(float *)(this + 0x34f))) {
    *(undefined4 *)(this + 0x35f) = 0;
  }
  else {
    *(float *)(this + 0x35f) = gsElapsedTime + *(float *)(this + 0x35f);
  }
  *(float *)(this + 0x32f) = (local_20 - *(float *)(param_1 + 4)) + *(float *)(this + 0x32f);
  if (___real_3e4ccccd < *(float *)(this + 0x32b)) {
    plrHEIGHT_CTRL::Reset(*(plrHEIGHT_CTRL **)(this + 0x36f));
  }
  fVar29 = plrHEIGHT_CTRL::Update(*(plrHEIGHT_CTRL **)(this + 0x36f));
  *(float *)(this + 0x2ef) = fVar29;
  local_74 = local_74 & 0xfffffffd;
  iVar3 = (**(code **)(*(int *)this + 0x78))();
  uVar14 = (-(uint)(iVar3 != 0) & 0xfffffff0) + 0x30;
  if ((((byte)this[0x30b] & 2) != 0) && (___real_3f800000 < *(float *)(this + 0x32b))) {
    uVar14 = uVar14 | 0x100;
  }
  *(float *)(param_1 + 4) = *(float *)(this + 0x2ef) + *(float *)(param_1 + 4);
  local_14 = local_14 + *(float *)(this + 0x2ef);
  iVar3 = scnSCENE::ConstrSphere
                    (gsScenePtr,param_1,(m3dV *)&local_18,*(float *)(this + 0x307),uVar14,
                     (cdtREFINE *)&local_78,(cdtINFO *)local_98);
  local_9c = 0.0;
  local_a4 = &cdtREFINE::_vftable_;
  local_a0 = 2.8026e-45;
  iVar8 = scnSCENE::IsVisiblePoint
                    (gsScenePtr,param_1,(m3dV *)&local_18,uVar14,(cdtREFINE *)&local_a4,
                     (cdtINFO *)0x0);
  if ((iVar8 == 0) &&
     (iVar8 = scnSCENE::IsVisiblePoint
                        (gsScenePtr,(m3dV *)&local_18,param_1,uVar14,(cdtREFINE *)&local_a4,
                         (cdtINFO *)0x0), iVar8 != 0)) {
    local_18 = *(float *)param_1;
    local_14 = *(float *)(param_1 + 4);
    local_10 = *(float *)(param_1 + 8);
  }
  local_14 = local_14 - *(float *)(this + 0x2ef);
  *(float *)(param_1 + 4) = *(float *)(param_1 + 4) - *(float *)(this + 0x2ef);
  animINST::Translate(*(animINST **)(this + 0xbc),(m3dV *)&local_18,0);
  if (iVar3 == 0) {
    *(undefined4 *)(this + 0x34f) = 0;
  }
  else {
    *(float *)(this + 0x34f) = gsElapsedTime + *(float *)(this + 0x34f);
    fVar29 = (*(float *)param_1 - local_18) * (*(float *)param_1 - local_18) +
             (*(float *)(param_1 + 8) - local_10) * (*(float *)(param_1 + 8) - local_10);
    if (m3dSimdType == 0) {
      fVar29 = fVar29 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
      auVar27 = rsqrtss(ZEXT416((uint)fVar29),ZEXT416((uint)fVar29));
      fVar26 = auVar27._0_4_;
      local_8 = (objOBJ *)
                (`float___cdecl_m3dSqrt(float)'::__l2::half * fVar26 *
                 (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar29 * fVar26 * fVar26) * fVar29);
    }
    else if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar16 = (ulonglong)(uint)fVar29;
      uVar18 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar16);
      uVar19 = PackedFloatingMUL(uVar18,uVar18);
      uVar19 = PackedFloatingReciprocalSQRIter1(uVar19,uVar16);
      uVar18 = PackedFloatingReciprocalIter2(uVar19,uVar18);
      uVar18 = PackedFloatingMUL(uVar18,uVar16);
      local_8 = (objOBJ *)uVar18;
      FastExitMediaState();
    }
    else {
      local_8 = (objOBJ *)SQRT(fVar29);
    }
    if (___real_3ba3d70a < (float)local_8) {
      *(uint *)(this + 0x29b) = *(uint *)(this + 0x29b) | 0x8000;
    }
  }
  if (((byte)this[0x30b] & 2) == 0) {
    *(undefined4 *)(this + 0x2f7) = _m3dVZero;
    *(undefined4 *)(this + 0x2fb) = DAT_00963740;
    *(undefined4 *)(this + 0x2ff) = DAT_00963744;
    *(uint *)(this + 0x29b) = *(uint *)(this + 0x29b) & 0xfffffeff;
    goto LAB_0041eb8c;
  }
  if (((___real_3dcccccd <= *(float *)(this + 0x32b)) && ((*(uint *)(this + 0x29b) & 0xc00) == 0))
     && (*(float *)(this + 0x34f) <= ___real_3ecccccd)) goto LAB_0041eb8c;
  ppVar9 = this + 0x2f7;
  local_30 = *(float *)ppVar9;
  local_2c = 0.0;
  local_28 = *(float *)(this + 0x2ff);
  iVar3 = _m3dNormalize((m3dV *)&local_30);
  if (iVar3 != 0) {
    fVar29 = gsElapsedTime * ___real_43480000;
    local_30 = local_30 * fVar29;
    local_2c = local_2c * fVar29;
    local_28 = local_28 * fVar29;
    if (local_30 * local_30 + local_28 * local_28 <=
        *(float *)ppVar9 * *(float *)ppVar9 + *(float *)(this + 0x2ff) * *(float *)(this + 0x2ff)) {
      local_50 = *(float *)ppVar9;
      local_4c = *(float *)(this + 0x2fb);
      local_48 = *(float *)(this + 0x2ff);
      *(float *)ppVar9 = *(float *)ppVar9 - local_30;
      *(float *)(this + 0x2fb) = *(float *)(this + 0x2fb) - local_2c;
      *(float *)(this + 0x2ff) = *(float *)(this + 0x2ff) - local_28;
    }
    else {
      *(undefined4 *)(this + 0x2ff) = 0;
      *(float *)ppVar9 = 0.0;
    }
  }
  if ((*(float *)(this + 0x2fb) < _DAT_005d0698 * ___real_41200000) &&
     ((*(float *)(this + 0x32b) < ___real_3d4ccccd || ((*(uint *)(this + 0x29b) & 0xc00) != 0)))) {
    uVar14 = *(uint *)(this + 0x29b) & 0x100;
    if ((uVar14 != 0) || (*(float *)(this + 0x32f) < ___real_c0400000)) {
      if ((*(uint *)(this + 0x29b) & 0x400) == 0) {
        uVar7 = *(uint *)(this + 0xf8) | 0x120;
      }
      else {
        uVar7 = *(uint *)(this + 0xf8) | 0x40;
      }
      *(uint *)(this + 0xf8) = uVar7;
    }
    if (uVar14 != 0) {
      (**(code **)(*(int *)this + 0x68))();
      fVar29 = (__plrPosJumpStart - local_44[0]) * (__plrPosJumpStart - local_44[0]) +
               (_DAT_00603538 - local_44[2]) * (_DAT_00603538 - local_44[2]);
      if (m3dSimdType == 0) {
        fVar29 = fVar29 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
        auVar27 = rsqrtss(ZEXT416((uint)fVar29),ZEXT416((uint)fVar29));
        fVar26 = auVar27._0_4_;
        local_8 = (objOBJ *)
                  (`float___cdecl_m3dSqrt(float)'::__l2::half * fVar26 *
                   (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar29 * fVar26 * fVar26) * fVar29
                  );
      }
      else if (m3dSimdType == 1) {
        FastExitMediaState();
        uVar16 = (ulonglong)(uint)fVar29;
        uVar18 = PackedFloatingReciprocalSQRAprox(extraout_MM1_00,uVar16);
        uVar19 = PackedFloatingMUL(uVar18,uVar18);
        uVar19 = PackedFloatingReciprocalSQRIter1(uVar19,uVar16);
        uVar18 = PackedFloatingReciprocalIter2(uVar19,uVar18);
        uVar18 = PackedFloatingMUL(uVar18,uVar16);
        local_8 = (objOBJ *)uVar18;
        FastExitMediaState();
      }
      else {
        local_8 = (objOBJ *)SQRT(fVar29);
      }
      m3dTerm2DMatr();
    }
    bVar2 = *(float *)(this + 0x2fb) < ___real_c0800000;
    *(uint *)(this + 0x29b) = *(uint *)(this + 0x29b) & 0xfffffeff;
    if (bVar2) {
      plrHEIGHT_CTRL::ApplySpeed(*(plrHEIGHT_CTRL **)(this + 0x36f),*(float *)(this + 0x2fb));
    }
    if ((*(float *)(this + 0x32f) < ___real_c0800000) &&
       (*(float *)(this + 0x2fb) < ___real_c1200000)) {
      if ((DAT_006035fc & 1) == 0) {
        DAT_006035fc = DAT_006035fc | 1;
        DAT_00603574 = 0;
        DAT_00603575 = 0x40;
        _DAT_00603578 = 4;
        _DAT_00603576 = 0x10;
        atexit((_func_4879 *)&__E65);
      }
      local_34 = (objOBJ *)-*(float *)(this + 0x32f);
      if ((*(uint *)(this + 0x29b) & 0xc00) == 0) {
        if (___real_41700000 <= (float)local_34) {
          if ((float)local_34 <= ___real_42480000) {
            _DAT_0060357c = ((float)local_34 - ___real_41700000) * ___real_3f924925;
            goto LAB_0041eaad;
          }
          _DAT_0060357c = 40.0;
          goto LAB_0041eac2;
        }
        _DAT_0060357c = 0.0;
      }
      else if (___real_420c0000 <= (float)local_34) {
        if ((float)local_34 <= ___real_428c0000) {
          _DAT_0060357c = ((float)local_34 - ___real_420c0000) * ___real_3f36db6e;
LAB_0041eaad:
          if (_DAT_0060357c <= ___real_3dcccccd) goto LAB_0041eadd;
        }
        else {
          _DAT_0060357c = 25.0;
        }
LAB_0041eac2:
        (**(code **)(*(int *)gsSysClient + 0x2c))(this,0x4c5,&DAT_00603574);
      }
      else {
        _DAT_0060357c = 0.0;
      }
    }
LAB_0041eadd:
    *(undefined4 *)(this + 0x2fb) = 0;
    *(undefined4 *)(this + 0x32f) = 0;
  }
  if (((*(int *)(this + 0x30f) != 0) &&
      ((*(byte *)(*(int *)(*(int *)(this + 0x30f) + 0x13c) + 0xb8) & 2) != 0)) &&
     (*(float *)(this + 0x32b) < ___real_3f800000)) {
    if ((DAT_006035fc & 2) == 0) {
      DAT_006035fc = DAT_006035fc | 2;
      DAT_00603604 = 0;
      DAT_00603605 = 0x40;
      _DAT_00603608 = 4;
      _DAT_00603606 = 0x10;
      atexit((_func_4879 *)&__E66);
    }
    _DAT_0060360c = gsElapsedTime * ___real_43480000;
    (**(code **)(*(int *)gsSysClient + 0x2c))(this,0x4c5,&DAT_00603604,0x20000);
  }
LAB_0041eb8c:
  fVar29 = (local_14 - *(float *)(param_1 + 4)) / gsElapsedTime;
  if ((fVar29 <= ___real_00000000) || (___real_00000000 <= *(float *)(this + 0x2fb))) {
    fVar26 = ___real_3f800000;
    if ((*(float *)(this + 0x2fb) <= ___real_00000000) &&
       (fVar26 = ___real_00000000, *(float *)(this + 0x2fb) < ___real_00000000)) {
      fVar26 = ___real_bf800000;
    }
    fVar29 = ABS(fVar29);
    fVar28 = ABS(*(float *)(this + 0x2fb));
    local_34 = (objOBJ *)fVar28;
    poVar4 = (objOBJ *)___real_00000000;
    if (fVar28 < ___real_00000000) {
      local_34 = (objOBJ *)0x0;
      poVar4 = (objOBJ *)fVar28;
    }
    if (((float)poVar4 <= fVar29) && (poVar4 = (objOBJ *)fVar29, (float)local_34 < fVar29)) {
      poVar4 = local_34;
    }
    *(float *)(this + 0x2fb) = (float)poVar4 * fVar26;
  }
  else {
    *(undefined4 *)(this + 0x2fb) = 0;
  }
  if ((*(uint *)(this + 0x29b) & 0x800) == 0) {
    if ((*(uint *)(this + 0x29b) & 0x400) == 0) {
      *(undefined4 *)(this + 0x303) = 0x41f00000;
    }
    else {
      *(undefined4 *)(this + 0x303) = 0;
    }
  }
  else {
    *(undefined4 *)(this + 0x303) = 0x40000000;
  }
  *(float *)(this + 0xf0) = -*(float *)(this + 0x303);
  *(undefined4 *)(this + 0xec) = 0;
  *(undefined4 *)(this + 0xf4) = 0;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: player.cpp
   addr: 0041ED00 */

void __thiscall plrPLAYER::UpdateUnderwater(plrPLAYER *this)

{
  uint uVar1;
  float fVar2;
  int iVar3;
  m3dV local_c [4];
  float local_8;
  
  camCAMERA::GetOrigin(gsCameraPtr,local_c);
  iVar3 = waterIsUnderWater(local_c,(float)(this + 0x283),(float *)0x3e99999a);
  if (iVar3 == 0) {
    *(uint *)(this + 0x29b) = *(uint *)(this + 0x29b) & 0xfffff3ff;
  }
  else {
    uVar1 = *(uint *)(this + 0x29b);
    fVar2 = ___real_00000000;
    if ((uVar1 & 0x400) != 0) {
      fVar2 = ___real_bf000000;
    }
    if (local_8 <= fVar2 + *(float *)(this + 0x283)) {
      *(uint *)(this + 0x29b) = uVar1 & 0xfffffbff | 0x800;
    }
    else {
      *(uint *)(this + 0x29b) = uVar1 & 0xfffff7ff | 0x400;
    }
  }
  if (((*(uint *)(this + 0x29b) & 0x800) == 0) ||
     (iVar3 = (**(code **)(*(int *)this + 0x78))(), iVar3 != 0)) {
    if (_DAT_005d0698 < *(float *)(this + 0x363)) {
      fVar2 = *(float *)(this + 0x363) - gsElapsedTime * ___real_41a00000;
      *(float *)(this + 0x363) = fVar2;
      if (fVar2 < _DAT_005d0698 != (fVar2 == _DAT_005d0698)) {
        *(undefined4 *)(this + 0x363) = 0;
      }
    }
  }
  else {
    fVar2 = gsElapsedTime + *(float *)(this + 0x363);
    *(float *)(this + 0x363) = fVar2;
    if (___real_41d00000 <= fVar2) {
      if ((DAT_006035b4 & 1) == 0) {
        DAT_006035b4 = DAT_006035b4 | 1;
        DAT_006035e0 = 0;
        DAT_006035e1 = 0x40;
        _DAT_006035e4 = 4;
        _DAT_006035e2 = 0x10;
        atexit((_func_4879 *)&__E68);
      }
      _DAT_006035e8 = 0x41200000;
      (**(code **)(*(int *)gsSysClient + 0x2c))(this,0x4c5,&DAT_006035e0,0x20000);
      *(float *)(this + 0x363) = *(float *)(this + 0x363) - ___real_3f800000;
      return;
    }
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: player.cpp
   addr: 0041EEA0 */

float __thiscall plrPLAYER::GetUnderwaterTimeLeft(plrPLAYER *this)

{
  if (___real_41c80000 <= *(float *)(this + 0x363)) {
    return ___real_00000000;
  }
  return (___real_41c80000 - *(float *)(this + 0x363)) * ___real_3d23d70a;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: player.cpp
   addr: 0041EED0 */

void __thiscall plrPLAYER::UpdateCamera(plrPLAYER *this)

{
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  undefined **local_50;
  float local_4c;
  float local_48;
  float local_44;
  undefined4 local_3c;
  msgDATA local_38;
  undefined1 local_37;
  undefined2 local_36;
  undefined4 local_34;
  m3dV local_30 [12];
  m3dV local_24 [12];
  m3dV local_18 [12];
  m3dV local_c [12];
  
  if ((gsAppState & 0x800U) == 0) {
    if (((byte)this[0x29b] & 1) == 0) {
      animINST::GetPos(*(animINST **)(this + 0xbc),(m3dV *)&local_68);
      local_64 = local_64 + *(float *)(this + 0x2ef);
      animINST::GetDir(*(animINST **)(this + 0xbc),(m3dV *)&local_80);
      animINST::GetDirRight(*(animINST **)(this + 0xbc),(m3dV *)&local_74);
      if ((*(uint *)(this + 0x29b) & 0x100000) == 0) {
        local_5c = local_78 * local_70 - local_7c * local_6c;
        local_58 = local_6c * local_80 - local_78 * local_74;
        local_54 = local_7c * local_74 - local_70 * local_80;
        camCAMERA::SetParameters
                  (gsCameraPtr,(m3dV *)&local_68,(m3dV *)&local_5c,(m3dV *)&local_74,
                   (m3dV *)&local_80);
        plrCAM_CTRL::Update(*(plrCAM_CTRL **)(this + 0x373));
      }
      else {
        local_50 = (undefined **)(local_68 - local_80 * ___real_40400000);
        local_48 = local_60 - local_78 * ___real_40400000;
        local_4c = (local_64 - local_7c * ___real_40400000) + ___real_3f800000;
        camCAMERA::MoveTo(gsCameraPtr,(m3dV *)&local_50);
        camCAMERA::SetInterest(gsCameraPtr,(m3dV *)&local_68);
      }
    }
    else {
      local_4c = 4.2039e-45;
      local_50 = &m3dSPHERE::_vftable_;
      animINST::GetPos(*(animINST **)(this + 0xbc),(m3dV *)&local_48);
      local_44 = local_44 + *(float *)(this + 0x2ef);
      local_3c = 0x3f333333;
      rendDRIVER::RenderSphere(rendDrv,gsCameraPtr,(m3dSPHERE *)&local_50,0xffffffff);
      rendDRIVER::RenderCS(rendDrv,gsCameraPtr,(m3dMATR *)(*(int *)(this + 0xbc) + 0x60),1.2);
    }
    if ((gsAppState & 0x400U) != 0) {
      local_38 = (msgDATA)0x0;
      local_37 = 0x40;
      local_34 = 0xf;
      local_36 = 0x38;
      camCAMERA::GetParameters(gsCameraPtr,local_30,local_18,local_24,local_c);
      gsMP_SERVER::SendMsgClientAll
                (gsSysServer,(entIACTIVE_OBJ *)this,0x40c,&local_38,0x20000,0xffffffff,0xfffffffd);
    }
  }
  return;
}




/* from: player.cpp
   addr: 0041F0F0 */

void __thiscall m3dSPHERE::GetCenter(m3dSPHERE *this,m3dV *param_1)

{
  *(undefined4 *)param_1 = *(undefined4 *)(this + 8);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(this + 0xc);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(this + 0x10);
  return;
}




/* from: player.cpp
   addr: 0041F110 */

void * __thiscall m3dSPHERE::_scalar_deleting_destructor_(m3dSPHERE *this,uint param_1)

{
  *(undefined ***)this = &m3dVOL::_vftable_;
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: player.cpp
   addr: 0041F130 */

void __thiscall plrPLAYER::ControlFlyThrough(plrPLAYER *this)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  
  iVar3 = *(int *)(gsSysInput + 0x40);
  if (((*(int *)(iVar3 + 8) < 0xe) && (0xd < *(int *)(iVar3 + 0xc))) &&
     ((*(uint *)(*(int *)(iVar3 + 4) + (0xd - *(int *)(iVar3 + 8)) * 0x9c) & 1) != 0)) {
    *(float *)(this + 0x2e7) = *(float *)(this + 0x2e7) * ___real_41200000;
    *(float *)(this + 0x2eb) = *(float *)(this + 0x2eb) * ___real_40a00000;
  }
  fVar1 = gsElapsedTime * *(float *)(this + 0x2e7);
  fVar4 = gsElapsedTime * *(float *)(this + 0x2eb);
  iVar3 = *(int *)(gsSysInput + 0x40);
  if (((*(int *)(iVar3 + 8) < 2) && (1 < *(int *)(iVar3 + 0xc))) &&
     ((*(uint *)(*(int *)(iVar3 + 4) + *(int *)(iVar3 + 8) * -0x9c + 0x9c) & 1) != 0)) {
    if ((*(int *)(iVar3 + 8) < 2) && (1 < *(int *)(iVar3 + 0xc))) {
      fVar2 = -(*(float *)(*(int *)(iVar3 + 4) + *(int *)(iVar3 + 8) * -0x9c + 0xe0) * fVar1);
    }
    else {
      fVar2 = -(___real_00000000 * fVar1);
    }
LAB_0041f283:
    camCAMERA::MoveRelForw(gsCameraPtr,fVar2);
  }
  else if (((*(int *)(iVar3 + 8) < 3) && (2 < *(int *)(iVar3 + 0xc))) &&
          ((*(uint *)(*(int *)(iVar3 + 4) + (2 - *(int *)(iVar3 + 8)) * 0x9c) & 1) != 0)) {
    fVar2 = ___real_00000000;
    if ((*(int *)(iVar3 + 8) < 3) && (2 < *(int *)(iVar3 + 0xc))) {
      fVar2 = *(float *)(*(int *)(iVar3 + 4) + *(int *)(iVar3 + 8) * -0x9c + 0x17c);
    }
    fVar2 = fVar2 * fVar1;
    goto LAB_0041f283;
  }
  iVar3 = *(int *)(gsSysInput + 0x40);
  if (((*(int *)(iVar3 + 8) < 4) && (3 < *(int *)(iVar3 + 0xc))) &&
     ((*(uint *)(*(int *)(iVar3 + 4) + (3 - *(int *)(iVar3 + 8)) * 0x9c) & 1) != 0)) {
    if ((*(int *)(iVar3 + 8) < 4) && (3 < *(int *)(iVar3 + 0xc))) {
      fVar2 = -(*(float *)(*(int *)(iVar3 + 4) + *(int *)(iVar3 + 8) * -0x9c + 0x218) * fVar4);
    }
    else {
      fVar2 = -(___real_00000000 * fVar4);
    }
LAB_0041f35d:
    camCAMERA::TurnRelAroundX(gsCameraPtr,fVar2);
  }
  else if (((*(int *)(iVar3 + 8) < 5) && (4 < *(int *)(iVar3 + 0xc))) &&
          ((*(uint *)(*(int *)(iVar3 + 4) + (4 - *(int *)(iVar3 + 8)) * 0x9c) & 1) != 0)) {
    fVar2 = ___real_00000000;
    if ((*(int *)(iVar3 + 8) < 5) && (4 < *(int *)(iVar3 + 0xc))) {
      fVar2 = *(float *)(*(int *)(iVar3 + 4) + *(int *)(iVar3 + 8) * -0x9c + 0x2b4);
    }
    fVar2 = fVar2 * fVar4;
    goto LAB_0041f35d;
  }
  iVar3 = *(int *)(gsSysInput + 0x40);
  if (((*(int *)(iVar3 + 8) < 6) && (5 < *(int *)(iVar3 + 0xc))) &&
     ((*(uint *)(*(int *)(iVar3 + 4) + (5 - *(int *)(iVar3 + 8)) * 0x9c) & 1) != 0)) {
    if ((*(int *)(iVar3 + 8) < 6) && (5 < *(int *)(iVar3 + 0xc))) {
      fVar4 = *(float *)(*(int *)(iVar3 + 4) + *(int *)(iVar3 + 8) * -0x9c + 0x350) * fVar4;
    }
    else {
      fVar4 = ___real_00000000 * fVar4;
    }
LAB_0041f435:
    camCAMERA::TurnAroundVert(gsCameraPtr,fVar4);
  }
  else if (((*(int *)(iVar3 + 8) < 7) && (6 < *(int *)(iVar3 + 0xc))) &&
          ((*(uint *)(*(int *)(iVar3 + 4) + (6 - *(int *)(iVar3 + 8)) * 0x9c) & 1) != 0)) {
    fVar2 = ___real_00000000;
    if ((*(int *)(iVar3 + 8) < 7) && (6 < *(int *)(iVar3 + 0xc))) {
      fVar2 = *(float *)(*(int *)(iVar3 + 4) + *(int *)(iVar3 + 8) * -0x9c + 0x3ec);
    }
    fVar4 = -(fVar2 * fVar4);
    goto LAB_0041f435;
  }
  iVar3 = *(int *)(gsSysInput + 0x40);
  if (((*(int *)(iVar3 + 8) < 8) && (7 < *(int *)(iVar3 + 0xc))) &&
     ((*(uint *)(*(int *)(iVar3 + 4) + (7 - *(int *)(iVar3 + 8)) * 0x9c) & 1) != 0)) {
    if ((*(int *)(iVar3 + 8) < 8) && (7 < *(int *)(iVar3 + 0xc))) {
      fVar4 = *(float *)(*(int *)(iVar3 + 4) + *(int *)(iVar3 + 8) * -0x9c + 0x488) * fVar1;
    }
    else {
      fVar4 = ___real_00000000 * fVar1;
    }
LAB_0041f4ea:
    camCAMERA::MoveRelUp(gsCameraPtr,fVar4);
  }
  else if (((*(int *)(iVar3 + 8) < 9) && (8 < *(int *)(iVar3 + 0xc))) &&
          ((*(uint *)(*(int *)(iVar3 + 4) + (8 - *(int *)(iVar3 + 8)) * 0x9c) & 1) != 0)) {
    fVar4 = gsINP_SYSTEM::Power(gsSysInput,8);
    fVar4 = -(fVar4 * fVar1);
    goto LAB_0041f4ea;
  }
  iVar3 = gsINP_SYSTEM::IsOn(gsSysInput,9);
  if (iVar3 == 0) {
    iVar3 = gsINP_SYSTEM::IsOn(gsSysInput,10);
    if (iVar3 == 0) goto LAB_0041f54d;
    fVar4 = gsINP_SYSTEM::Power(gsSysInput,10);
    fVar4 = fVar4 * fVar1;
  }
  else {
    fVar4 = gsINP_SYSTEM::Power(gsSysInput,9);
    fVar4 = -(fVar4 * fVar1);
  }
  camCAMERA::MoveRelSide(gsCameraPtr,fVar4);
LAB_0041f54d:
  iVar3 = gsINP_SYSTEM::IsOn(gsSysInput,0xb);
  if (iVar3 == 0) {
    return;
  }
  camCAMERA::ResetVertRotation(gsCameraPtr);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: player.cpp
   addr: 0041F570 */

void __thiscall plrPLAYER::ControlFirstPerson(plrPLAYER *this)

{
  m3dV *pmVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  uint uVar6;
  float *pfVar7;
  gsINP_SYSTEM *this_00;
  undefined4 uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined8 extraout_MM1;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  int iVar21;
  float local_8c [4];
  float local_7c;
  float fStack_78;
  float fStack_74;
  undefined4 uStack_70;
  float local_6c;
  float fStack_68;
  float fStack_64;
  undefined4 uStack_60;
  float local_4c [4];
  m3dV *local_3c;
  float local_38;
  float local_34;
  float local_30;
  float *local_2c;
  float local_28 [3];
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  local_3c = (m3dV *)0x457a0000;
  local_10 = 3000.0;
  if (*(float *)(gsCameraPtr + 0x14c) < ___real_42480000) {
    local_3c = (m3dV *)0x44480000;
    local_10 = 600.0;
  }
  local_c = *(float *)(gsSysInput + 0x34) * ___real_3e4ccccd;
  local_4c[3] = *(float *)(gsSysInput + 0x38) * ___real_3e4ccccd;
  local_2c = (float *)_plrFPS_FILTER::Update((_plrFPS_FILTER *)&DAT_0060353c,gsElapsedTime);
  local_8 = _plrFPS_FILTER::Update
                      ((_plrFPS_FILTER *)&DAT_00603590,(float)local_2c * local_4c[3] * local_10);
  if (((local_8 + *(float *)(this + 0x24b) <= ___real_432f0000) || (local_8 < ___real_00000000)) &&
     ((___real_40a00000 <= local_8 + *(float *)(this + 0x24b) ||
      (local_8 < ___real_00000000 == (local_8 == ___real_00000000))))) {
    animINST::RotateX(*(animINST **)(this + 0xbc),local_8,1);
    *(float *)(this + 0x24b) = local_8 + *(float *)(this + 0x24b);
  }
  local_8 = _plrFPS_FILTER::Update
                      ((_plrFPS_FILTER *)&DAT_006035b8,
                       -((float)local_2c * local_c * (float)local_3c));
  animINST::GetPos(*(animINST **)(this + 0xbc),(m3dV *)local_28);
  animINST::Translate(*(animINST **)(this + 0xbc),&m3dVZero,0);
  animINST::RotateY(*(animINST **)(this + 0xbc),local_8,2);
  animINST::SetPos(*(animINST **)(this + 0xbc),(m3dV *)local_28);
  animINST::GetDir(*(animINST **)(this + 0xbc),(m3dV *)&local_1c);
  animINST::GetDirRight(*(animINST **)(this + 0xbc),(m3dV *)&local_38);
  if ((*(uint *)(this + 0x29b) & 0xc00) == 0) {
    local_18 = 0.0;
    local_34 = 0.0;
  }
  m3dNormalize((m3dV *)&local_1c);
  m3dNormalize((m3dV *)&local_38);
  if ((*(uint *)(this + 0x29b) & 0x100) == 0) {
    *(uint *)(this + 0x29f) = *(uint *)(this + 0x29f) & 0xffffff0f;
  }
  else {
    iVar21 = *(int *)(gsSysInput + 0x40);
    if (((*(int *)(iVar21 + 8) < 2) && (1 < *(int *)(iVar21 + 0xc))) &&
       (local_c = (float)(*(uint *)(*(int *)(iVar21 + 4) + *(int *)(iVar21 + 8) * -0x9c + 0x9c) & 1)
       , local_c != 0.0)) {
      *(uint *)(this + 0x29f) = *(uint *)(this + 0x29f) & 0xffffff7f | 0x40;
    }
    iVar21 = *(int *)(gsSysInput + 0x40);
    if (((*(int *)(iVar21 + 8) < 3) && (2 < *(int *)(iVar21 + 0xc))) &&
       (local_c = (float)(*(uint *)(*(int *)(iVar21 + 4) + (2 - *(int *)(iVar21 + 8)) * 0x9c) & 1),
       local_c != 0.0)) {
      *(uint *)(this + 0x29f) = *(uint *)(this + 0x29f) & 0xffffffbf | 0x80;
    }
    iVar21 = *(int *)(gsSysInput + 0x40);
    if (((*(int *)(iVar21 + 8) < 10) && (9 < *(int *)(iVar21 + 0xc))) &&
       (local_c = (float)(*(uint *)(*(int *)(iVar21 + 4) + (9 - *(int *)(iVar21 + 8)) * 0x9c) & 1),
       local_c != 0.0)) {
      *(uint *)(this + 0x29f) = *(uint *)(this + 0x29f) & 0xffffffdf | 0x10;
    }
    iVar21 = *(int *)(gsSysInput + 0x40);
    if (((*(int *)(iVar21 + 8) < 0xb) && (10 < *(int *)(iVar21 + 0xc))) &&
       (local_c = (float)(*(uint *)(*(int *)(iVar21 + 4) + (10 - *(int *)(iVar21 + 8)) * 0x9c) & 1),
       local_c != 0.0)) {
      *(uint *)(this + 0x29f) = *(uint *)(this + 0x29f) & 0xffffffef | 0x20;
    }
  }
  this_00 = gsSysInput;
  iVar21 = *(int *)(gsSysInput + 0x40);
  if ((((*(int *)(iVar21 + 8) < 2) && (1 < *(int *)(iVar21 + 0xc))) &&
      (local_c = (float)(*(uint *)(*(int *)(iVar21 + 4) + *(int *)(iVar21 + 8) * -0x9c + 0x9c) & 1),
      local_c != 0.0)) || ((*(uint *)(this + 0x29f) & 0x40) != 0)) {
    iVar21 = 1;
  }
  else if ((((*(int *)(iVar21 + 8) < 3) && (2 < *(int *)(iVar21 + 0xc))) &&
           (local_c = (float)(*(uint *)(*(int *)(iVar21 + 4) + (2 - *(int *)(iVar21 + 8)) * 0x9c) &
                             1), local_c != 0.0)) || ((char)*(uint *)(this + 0x29f) < '\0')) {
    iVar21 = -1;
  }
  else {
    iVar21 = 0;
  }
  _plrMOVE_CTRL::Update(&_plrCtrlForw,iVar21);
  iVar21 = *(int *)(this_00 + 0x40);
  if ((((*(int *)(iVar21 + 8) < 10) && (9 < *(int *)(iVar21 + 0xc))) &&
      (local_c = (float)(*(uint *)(*(int *)(iVar21 + 4) + (9 - *(int *)(iVar21 + 8)) * 0x9c) & 1),
      local_c != 0.0)) || ((*(uint *)(this + 0x29f) & 0x10) != 0)) {
    iVar21 = -1;
  }
  else if ((((*(int *)(iVar21 + 8) < 0xb) && (10 < *(int *)(iVar21 + 0xc))) &&
           (local_c = (float)(*(uint *)(*(int *)(iVar21 + 4) + (10 - *(int *)(iVar21 + 8)) * 0x9c) &
                             1), local_c != 0.0)) || ((*(uint *)(this + 0x29f) & 0x20) != 0)) {
    iVar21 = 1;
  }
  else {
    iVar21 = 0;
  }
  _plrMOVE_CTRL::Update(&_plrCtrlSide,iVar21);
  iVar21 = *(int *)(this_00 + 0x40);
  if ((((((*(int *)(iVar21 + 8) < 2) && (1 < *(int *)(iVar21 + 0xc))) &&
        (local_c = (float)(*(uint *)(*(int *)(iVar21 + 4) + *(int *)(iVar21 + 8) * -0x9c + 0x9c) & 1
                          ), local_c != 0.0)) ||
       (((*(int *)(iVar21 + 8) < 3 && (2 < *(int *)(iVar21 + 0xc))) &&
        (local_c = (float)(*(uint *)(*(int *)(iVar21 + 4) + (2 - *(int *)(iVar21 + 8)) * 0x9c) & 1),
        local_c != 0.0)))) ||
      (((*(int *)(iVar21 + 8) < 10 && (9 < *(int *)(iVar21 + 0xc))) &&
       (local_c = (float)(*(uint *)(*(int *)(iVar21 + 4) + (9 - *(int *)(iVar21 + 8)) * 0x9c) & 1),
       local_c != 0.0)))) ||
     (((*(int *)(iVar21 + 8) < 0xb && (10 < *(int *)(iVar21 + 0xc))) &&
      (local_c = (float)(*(uint *)(*(int *)(iVar21 + 4) + (10 - *(int *)(iVar21 + 8)) * 0x9c) & 1),
      local_c != 0.0)))) {
    *(uint *)(this + 0x29b) = *(uint *)(this + 0x29b) | 0x20;
    this_00 = gsSysInput;
  }
  iVar21 = *(int *)(this_00 + 0x40);
  if (((((*(int *)(iVar21 + 8) < 0xf) && (0xe < *(int *)(iVar21 + 0xc))) &&
       (*(int *)(iVar21 + 8) < 0xf)) &&
      ((0xe < *(int *)(iVar21 + 0xc) &&
       (local_c = (float)(*(uint *)(*(int *)(iVar21 + 4) + (0xe - *(int *)(iVar21 + 8)) * 0x9c) & 1)
       , local_c != 0.0)))) &&
     ((((iVar21 = gsINP_SYSTEM::IsToggled(this_00,0xe), iVar21 != 0 &&
        (((*(uint *)(this + 0x29b) & 0x100) == 0 && (*(float *)(this + 0x32b) < ___real_3e4ccccd))))
       && ((*(uint *)(this + 0x29b) & 0x200) == 0)) &&
      ((((byte)this[0x30b] & 2) != 0 &&
       ((*(int *)(this + 0x30f) == 0 ||
        (*(int *)(*(int *)(*(int *)(this + 0x30f) + 0x13c) + 0x14) != 0x54524d50)))))))) {
    (**(code **)(*(int *)this + 0x70))(local_4c);
    local_4c[1] = 0.0;
    m3dNormalize((m3dV *)local_4c);
    *(uint *)(this + 0x29b) = *(uint *)(this + 0x29b) | 0x100;
    local_28[0] = _m3dVZero;
    local_28[2] = DAT_00963744;
    iVar21 = *(int *)(gsSysInput + 0x40);
    if ((*(int *)(iVar21 + 8) < 2) &&
       ((1 < *(int *)(iVar21 + 0xc) &&
        (local_c = (float)(*(uint *)(*(int *)(iVar21 + 4) + *(int *)(iVar21 + 8) * -0x9c + 0x9c) & 1
                          ), local_c != 0.0)))) {
      local_28[0] = local_4c[0] + local_4c[0];
      local_28[2] = local_4c[2] + local_4c[2];
    }
    else if ((*(int *)(iVar21 + 8) < 3) &&
            ((2 < *(int *)(iVar21 + 0xc) &&
             (local_c = (float)(*(uint *)(*(int *)(iVar21 + 4) + (2 - *(int *)(iVar21 + 8)) * 0x9c)
                               & 1), local_c != 0.0)))) {
      local_28[0] = local_4c[0] * ___real_c0000000;
      local_28[2] = local_4c[2] * ___real_c0000000;
    }
    local_28[1] = 10.0;
    (**(code **)(*(int *)this + 0xa4))(local_28,0);
    *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 0x90;
    (**(code **)(*(int *)this + 0x68))(&_plrPosJumpStart);
  }
  if (((*(uint *)(this + 0x29b) & 0x400) != 0) && (___real_00000000 < local_18)) {
    local_18 = 0.0;
  }
  animINST::GetPos(*(animINST **)(this + 0xbc),(m3dV *)local_28);
  if ((__plrCtrlSide < ___real_bf800000) ||
     (__plrCtrlSide < ___real_3f800000 == (__plrCtrlSide == ___real_3f800000))) {
    if (__plrCtrlSide <= ___real_3f800000) {
      local_8 = ___real_bf800000;
      if ((___real_3f800000 <= __plrCtrlSide) &&
         (local_8 = ___real_bfc00000, __plrCtrlSide <= ___real_41a00000)) {
        local_8 = ___real_bf800000 - (__plrCtrlSide - ___real_3f800000) * ___real_3cd79436;
      }
    }
    else {
      local_8 = ___real_3fc00000;
      if (__plrCtrlSide <= ___real_41a00000) {
        local_8 = (__plrCtrlSide - ___real_3f800000) * ___real_3cd79436 + ___real_3f800000;
      }
    }
  }
  else {
    fVar19 = (__plrCtrlSide - ___real_bf800000) * ___real_3f000000;
    fVar19 = (___real_40400000 - (fVar19 + fVar19)) * fVar19 * fVar19;
    local_8 = (fVar19 + fVar19) - ___real_3f800000;
  }
  if ((__plrCtrlForw < ___real_bf800000) ||
     (__plrCtrlForw < ___real_3f800000 == (__plrCtrlForw == ___real_3f800000))) {
    if (__plrCtrlForw <= ___real_3f800000) {
      fVar19 = ___real_bf800000;
      if ((___real_3f800000 <= __plrCtrlForw) &&
         (fVar19 = ___real_bfc00000, __plrCtrlForw <= ___real_41a00000)) {
        fVar19 = ___real_bf800000 - (__plrCtrlForw - ___real_3f800000) * ___real_3cd79436;
      }
    }
    else {
      fVar19 = ___real_3fc00000;
      if (__plrCtrlForw <= ___real_41a00000) {
        fVar19 = (__plrCtrlForw - ___real_3f800000) * ___real_3cd79436 + ___real_3f800000;
      }
    }
  }
  else {
    fVar19 = (__plrCtrlForw - ___real_bf800000) * ___real_3f000000;
    fVar19 = (___real_40400000 - (fVar19 + fVar19)) * fVar19 * fVar19;
    fVar19 = (fVar19 + fVar19) - ___real_3f800000;
  }
  local_8 = local_8 * *(float *)(this + 0x2e7);
  fVar19 = fVar19 * *(float *)(this + 0x2e7);
  *(float *)(this + 0x353) = local_38 * local_8 + local_1c * fVar19;
  *(float *)(this + 0x357) = local_8 * local_34 + local_18 * fVar19;
  *(float *)(this + 0x35b) = local_30 * local_8 + local_14 * fVar19;
  local_8 = *(float *)(this + 0x353) * *(float *)(this + 0x353) +
            *(float *)(this + 0x357) * *(float *)(this + 0x357) +
            *(float *)(this + 0x35b) * *(float *)(this + 0x35b);
  uVar12 = extraout_MM1;
  if (m3dSimdType == 0) {
    local_8 = local_8 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar20 = rsqrtss(ZEXT416((uint)local_8),ZEXT416((uint)local_8));
    fVar19 = auVar20._0_4_;
    local_8 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar19 *
              (`float___cdecl_m3dSqrt(float)'::__l2::three - local_8 * fVar19 * fVar19) * local_8;
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar9 = (ulonglong)(uint)local_8;
    uVar12 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar9);
    uVar10 = PackedFloatingMUL(uVar12,uVar12);
    uVar10 = PackedFloatingReciprocalSQRIter1(uVar10,uVar9);
    uVar12 = PackedFloatingReciprocalIter2(uVar10,uVar12);
    uVar12 = PackedFloatingMUL(uVar12,uVar9);
    local_8 = (float)uVar12;
    FastExitMediaState();
  }
  else {
    local_8 = SQRT(local_8);
  }
  if (*(float *)(this + 0x2e7) < local_8) {
    local_8 = *(float *)(this + 0x353) * *(float *)(this + 0x353) +
              *(float *)(this + 0x357) * *(float *)(this + 0x357) +
              *(float *)(this + 0x35b) * *(float *)(this + 0x35b);
    if (m3dSimdType == 0) {
      local_8 = local_8 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
      auVar20 = rsqrtss(ZEXT416((uint)local_8),ZEXT416((uint)local_8));
      fVar19 = auVar20._0_4_;
      local_8 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar19 *
                (`float___cdecl_m3dSqrt(float)'::__l2::three - local_8 * fVar19 * fVar19) * local_8;
    }
    else if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar9 = (ulonglong)(uint)local_8;
      uVar12 = PackedFloatingReciprocalSQRAprox(uVar12,uVar9);
      uVar10 = PackedFloatingMUL(uVar12,uVar12);
      uVar10 = PackedFloatingReciprocalSQRIter1(uVar10,uVar9);
      uVar12 = PackedFloatingReciprocalIter2(uVar10,uVar12);
      uVar12 = PackedFloatingMUL(uVar12,uVar9);
      local_8 = (float)uVar12;
      FastExitMediaState();
    }
    else {
      local_8 = SQRT(local_8);
    }
    fVar19 = *(float *)(this + 0x2e7) / local_8;
    *(float *)(this + 0x353) = fVar19 * *(float *)(this + 0x353);
    *(float *)(this + 0x357) = fVar19 * *(float *)(this + 0x357);
    *(float *)(this + 0x35b) = fVar19 * *(float *)(this + 0x35b);
  }
  *(uint *)(this + 0x29b) = *(uint *)(this + 0x29b) & 0xf9ffffff;
  animINST::GetDir(*(animINST **)(this + 0xbc),(m3dV *)&local_1c);
  iVar21 = *(int *)(*(int *)(*(int *)(this + 0xbc) + 0xe8) + 0x20);
  if (((iVar21 != 2) && (iVar21 != 0x35)) && (iVar21 != 0x3b)) {
    *(uint *)(this + 0x29b) = *(uint *)(this + 0x29b) & 0xfeffffff;
    *(float *)(this + 0x25f) = local_1c;
    *(float *)(this + 0x263) = local_18;
    *(float *)(this + 0x267) = local_14;
    return;
  }
  pmVar1 = (m3dV *)(this + 0x25f);
  local_10 = m3xzAngleVector(pmVar1,(m3dV *)&local_1c);
  local_10 = -local_10;
  if (___real_41c80000 < ABS(local_10)) {
    *(uint *)(this + 0x29b) = *(uint *)(this + 0x29b) | 0x1000000;
  }
  uVar6 = *(uint *)(this + 0x29b);
  if ((uVar6 & 0x1000000) == 0) {
    return;
  }
  fVar19 = ABS(local_10);
  fVar4 = ___real_3f800000;
  if ((___real_41f00000 <= fVar19) && (fVar4 = ___real_41200000, fVar19 <= ___real_42340000)) {
    fVar4 = (fVar19 - ___real_41f00000) * ___real_3f19999a + ___real_3f800000;
  }
  fVar19 = ___real_3f800000;
  if ((local_10 <= ___real_00000000) && (fVar19 = ___real_00000000, local_10 < ___real_00000000)) {
    fVar19 = ___real_bf800000;
  }
  local_4c[3] = -(fVar19 * gsElapsedTime * fVar4 * ___real_42a00000);
  if (___real_00000000 <= local_10) {
    if (ABS(local_10) <= ___real_41200000) goto LAB_00420172;
    uVar6 = uVar6 | 0x4000000;
  }
  else {
    if (ABS(local_10) <= ___real_41200000) goto LAB_00420172;
    uVar6 = uVar6 | 0x2000000;
  }
  *(uint *)(this + 0x29b) = uVar6;
LAB_00420172:
  local_8 = ABS(local_10);
  m3dMATR::MakeRotY((m3dMATR *)local_8c,local_4c[3]);
  local_3c = pmVar1;
  local_2c = local_8c;
  if (m3dSimdType == 0) {
    if (((uint)local_8c & 0xf) == 0) {
      fVar19 = *(float *)pmVar1;
      fVar4 = *(float *)(this + 0x263);
      fVar3 = *(float *)(this + 0x267);
      fVar17 = fVar19 * local_8c[0] + fVar4 * local_7c + fVar3 * local_6c;
      fVar18 = fVar19 * local_8c[1] + fVar4 * fStack_78 + fVar3 * fStack_68;
      fVar19 = fVar19 * local_8c[2] + fVar4 * fStack_74 + fVar3 * fStack_64;
    }
    else {
      fVar19 = *(float *)pmVar1;
      fVar4 = *(float *)(this + 0x263);
      fVar3 = *(float *)(this + 0x267);
      fVar17 = fVar19 * local_8c[0] + fVar4 * local_7c + fVar3 * local_6c;
      fVar18 = fVar19 * local_8c[1] + fVar4 * fStack_78 + fVar3 * fStack_68;
      fVar19 = fVar19 * local_8c[2] + fVar4 * fStack_74 + fVar3 * fStack_64;
    }
    *(ulonglong *)pmVar1 = CONCAT44(fVar18,fVar17);
    *(float *)(this + 0x267) = fVar19;
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar8 = (undefined4)*(undefined8 *)pmVar1;
    uVar12 = CONCAT44(uVar8,uVar8);
    uVar8 = (undefined4)((ulonglong)*(undefined8 *)pmVar1 >> 0x20);
    uVar16 = CONCAT44(uVar8,uVar8);
    uVar13 = CONCAT44(*(undefined4 *)(this + 0x267),*(undefined4 *)(this + 0x267));
    uVar10 = PackedFloatingMUL(uVar12,CONCAT44(local_8c[1],local_8c[0]));
    uVar11 = PackedFloatingMUL(uVar16,CONCAT44(fStack_78,local_7c));
    uVar14 = PackedFloatingMUL(uVar13,CONCAT44(fStack_68,local_6c));
    uVar15 = PackedFloatingMUL(uVar12,CONCAT44(local_8c[3],local_8c[2]));
    uVar12 = PackedFloatingADD(uVar11,uVar14);
    uVar16 = PackedFloatingMUL(uVar16,CONCAT44(uStack_70,fStack_74));
    uVar11 = PackedFloatingMUL(uVar13,CONCAT44(uStack_60,fStack_64));
    uVar12 = PackedFloatingADD(uVar10,uVar12);
    uVar10 = PackedFloatingADD(uVar16,uVar11);
    *(undefined8 *)pmVar1 = uVar12;
    uVar12 = PackedFloatingADD(uVar15,uVar10);
    *(int *)(this + 0x267) = (int)uVar12;
    FastExitMediaState();
  }
  else {
    iVar21 = 0;
    do {
      *(undefined4 *)((int)local_4c + iVar21) = 0;
      iVar5 = 0;
      pfVar7 = (float *)((int)local_8c + iVar21);
      fVar19 = ___real_00000000;
      do {
        iVar2 = iVar5 * 4;
        fVar4 = *pfVar7;
        iVar5 = iVar5 + 1;
        pfVar7 = pfVar7 + 4;
        fVar19 = *(float *)(pmVar1 + iVar2) * fVar4 + fVar19;
      } while (iVar5 < 3);
      *(float *)((int)local_4c + iVar21) = fVar19;
      iVar21 = iVar21 + 4;
    } while (iVar21 < 0xc);
    *(float *)pmVar1 = local_4c[0];
    *(float *)(this + 0x263) = local_4c[1];
    *(float *)(this + 0x267) = local_4c[2];
  }
  if ((___real_40400000 <= ABS(local_10)) && (ABS(local_4c[3]) <= ABS(local_10))) {
    return;
  }
  *(uint *)(this + 0x29b) = *(uint *)(this + 0x29b) & 0xfeffffff;
  return;
}




/* from: player.cpp
   addr: 00420340 */

void __thiscall plrPLAYER::ApplySpeed(plrPLAYER *this,m3dV *param_1,int param_2)

{
  if (param_2 != 0) {
    *(undefined4 *)(this + 0x2f7) = *(undefined4 *)param_1;
    *(undefined4 *)(this + 0x2fb) = *(undefined4 *)(param_1 + 4);
    *(undefined4 *)(this + 0x2ff) = *(undefined4 *)(param_1 + 8);
    return;
  }
  *(float *)(this + 0x2f7) = *(float *)(this + 0x2f7) + *(float *)param_1;
  *(float *)(this + 0x2fb) = *(float *)(param_1 + 4) + *(float *)(this + 0x2fb);
  *(float *)(this + 0x2ff) = *(float *)(param_1 + 8) + *(float *)(this + 0x2ff);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: player.cpp
   addr: 004203A0 */

int __thiscall plrPLAYER::IsStayOn(plrPLAYER *this,animINST *param_1,objOBJ *param_2,int param_3)

{
  float fVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  bool bVar5;
  
  if ((*(animINST **)(this + 0x30f) == param_1) &&
     ((param_2 == (objOBJ *)0x0 || (*(int *)(this + 0x313) == (int)*(short *)(param_2 + 0x1c))))) {
    pcVar2 = *(char **)(param_1 + 0x1c);
    if (pcVar2 == (char *)0x0) {
      pcVar2 = s_;
    }
    iVar3 = 0xd;
    bVar5 = true;
    pcVar4 = s_sob_katapult;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar5 = *pcVar2 == *pcVar4;
      pcVar2 = pcVar2 + 1;
      pcVar4 = pcVar4 + 1;
    } while (bVar5);
    fVar1 = ___real_3d4ccccd;
    if (bVar5) {
      fVar1 = ___real_3fc00000;
    }
    if ((*(float *)(this + 0x32b) <= fVar1) &&
       ((param_3 == 0 || (*(float *)(this + 0x2fb) <= _DAT_005d0698)))) {
      return 1;
    }
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: player.cpp
   addr: 00420430 */

void __thiscall plrPLAYER::AnimateWeapon(plrPLAYER *this)

{
  uint *puVar1;
  pwpWEAPON *this_00;
  int iVar2;
  uint uVar3;
  int iVar4;
  animINST *unaff_EDI;
  int *piVar5;
  int iVar6;
  float fVar7;
  
  piVar5 = *(int **)(*(int *)(this + 0x23f) + *(int *)(this + 0x243) * 4);
  uVar3 = *(uint *)(this + 0x29b);
  if ((uVar3 & 2) != 0) {
    return;
  }
  if (((gsAppState & 0x800U) != 0) && (((byte)this[0x88] & 4) == 0)) {
    (**(code **)(*piVar5 + 0xb4))(*(undefined4 *)(this + 0x37f));
    goto LAB_00420737;
  }
  if ((uVar3 & 8) == 0) {
    if ((uVar3 & 0x10) == 0) {
      if ((char)uVar3 < '\0') {
        iVar4 = 8;
      }
      else if ((uVar3 & 0x10000000) == 0) {
        if ((uVar3 & 0x40) == 0) {
          if (((uVar3 & 0x20) == 0) || (___real_3dcccccd <= *(float *)(this + 0x32b))) {
            if (((*(byte *)((int)piVar5 + 0x193) & 1) == 0) ||
               (iVar4 = 2, *(float *)(this + 0x333) <= ___real_41200000)) {
              iVar4 = 1;
            }
          }
          else {
            iVar4 = 3;
          }
        }
        else {
          iVar4 = 7;
        }
      }
      else {
        iVar4 = 9;
      }
    }
    else {
      iVar4 = 6;
    }
  }
  else if (*(float *)((int)piVar5 + 0x17f) < ___real_00000000 ==
           (*(float *)((int)piVar5 + 0x17f) == ___real_00000000)) {
    iVar4 = 4;
  }
  else {
    iVar4 = 5;
  }
  iVar6 = iVar4;
  fVar7 = gsElapsedTime;
  (**(code **)(*piVar5 + 0xb4))(iVar4,gsElapsedTime);
  iVar2 = animINST::IsActionFrame(unaff_EDI,5,0);
  if ((iVar2 == 0) && (iVar2 = animINST::IsActionFrame(unaff_EDI,4,0), iVar2 == 0)) {
    iVar2 = animINST::IsActionFrame(unaff_EDI,6,0);
    if ((iVar2 != 0) && (iVar4 != 4)) {
      uVar3 = *(uint *)(this + 0x29b) & 0xffffffe7;
      goto LAB_00420610;
    }
  }
  else {
    (**(code **)(*(int *)this + 0xfc))(*(undefined4 *)(this + 0x247),0);
    piVar5 = *(int **)(*(int *)(this + 0x23f) + *(int *)(this + 0x247) * 4);
    fVar7 = (float)piVar5[0x2f];
    if (*(int *)((int)piVar5 + 399) < 1) {
      unaff_EDI = (animINST *)0x7;
      (**(code **)(*(int *)gsSysClient + 0x2c))(plrPlayer,0x40c,&stack0xffffffe8,0x20000);
    }
    (**(code **)(*piVar5 + 0xb4))(6,gsElapsedTime);
    uVar3 = *(uint *)(this + 0x29b) & 0xfffffff7;
LAB_00420610:
    *(uint *)(this + 0x29b) = uVar3;
  }
  iVar4 = (**(code **)(*piVar5 + 0xc4))(iVar6,fVar7);
  if ((iVar4 == 0) || (0 < *(int *)((int)piVar5 + 399))) {
    iVar4 = (**(code **)(*piVar5 + 0xb8))();
    if (iVar4 != 7) {
      *(uint *)(this + 0x29b) = *(uint *)(this + 0x29b) & 0xefffff7f;
    }
  }
  else {
    if (*(float *)((int)piVar5 + 0x17f) <= ___real_00000000) {
      *(uint *)(this + 0x29b) = *(uint *)(this + 0x29b) | 0x18;
      iVar4 = GetNextPriorWeapon(this);
      *(int *)(this + 0x247) = iVar4;
      *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 0x200;
    }
    else if (*(int *)((int)piVar5 + 0x18b) != -1) {
      *(uint *)(this + 0x29b) = *(uint *)(this + 0x29b) | 0x80;
    }
    if ((*(uint *)(this + 0x29b) & 0x20000000) != 0) {
      plrCAM_CTRL::ZoomClear(*(plrCAM_CTRL **)(this + 0x373));
      (**(code **)(*(int *)uiSystem + 0x1c))(0);
      *(uint *)(this + 0x29b) = *(uint *)(this + 0x29b) & 0xdfffffff;
      this_00 = *(pwpWEAPON **)(*(int *)(this + 0x23f) + *(int *)(this + 0x243) * 4);
      puVar1 = (uint *)(*(int *)(this_00 + 0xbc) + 4);
      *puVar1 = *puVar1 & 0xfffffffe;
      pwpWEAPON::SetZoom(this_00,0);
    }
  }
  iVar4 = (**(code **)(*piVar5 + 0xb8))();
  if ((iVar4 == 1) && (((byte)this[0x29b] & 0x40) == 0)) {
    *(float *)(this + 0x333) = gsElapsedTime + *(float *)(this + 0x333);
  }
  else {
    *(undefined4 *)(this + 0x333) = 0;
  }
LAB_00420737:
  iVar4 = (**(code **)(*piVar5 + 0xb8))();
  if (((iVar4 == 3) && (*(float *)(this + 0x32b) < ___real_3e4ccccd)) &&
     (((byte)unaff_EDI[0x28] & 3) != 0)) {
    if ((*(uint *)(this + 0x29b) & 0x400) != 0) {
      *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 8;
      return;
    }
    *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 1;
  }
  return;
}




/* from: player.cpp
   addr: 00420790 */

void __thiscall plrPLAYER::SetCurWpn(plrPLAYER *this,int param_1,int param_2)

{
  int iVar1;
  undefined1 local_10;
  undefined1 local_f;
  undefined2 local_e;
  undefined4 local_c;
  int local_8;
  int local_4;
  
  iVar1 = *(int *)(*(int *)(this + 0x23f) + param_1 * 4);
  if ((iVar1 != 0) && ((*(byte *)(iVar1 + 0x14f) & 1) != 0)) {
    plrPLAYER_COMMON::SetCurWpn((plrPLAYER_COMMON *)this,param_1,param_2);
    if (((gsAppState & 0x800U) == 0) && (((byte)this[0x88] & 2) != 0)) {
      local_10 = 0;
      local_f = 0x40;
      local_c = 1;
      local_e = 0x10;
      local_8 = param_1;
      local_4 = param_2;
      (**(code **)(*(int *)gsSysClient + 0x2c))(this,0x40c,&local_10,0x20000);
    }
    if (*(int **)(this + 0x377) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x377) + 0xfc))(param_1,param_2);
    }
    SetupGhostRendState(this);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: player.cpp
   addr: 00420840 */

void __thiscall plrPLAYER::UpdateCursor(plrPLAYER *this)

{
  float fVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  cdtINFO *pcVar7;
  float local_8c;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  float fStack_70;
  undefined **local_6c;
  uint local_68;
  undefined4 local_64;
  uint local_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  m3dV local_50 [12];
  m3dV local_44 [12];
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  undefined4 local_20 [5];
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_64 = *(undefined4 *)(this + 0xbc);
  local_88 = DAT_00948388;
  local_68 = 0;
  local_60 = 0;
  local_6c = &entCDT_REFINE_EXCL::_vftable_;
  camCAMERA::GetViewWindowRayDir(gsCameraPtr,DAT_00948384,DAT_00948388,local_50);
  camCAMERA::TransformPointC2W(gsCameraPtr,&m3dVZero,local_44);
  if ((*(float *)(this + 0x343) < *(float *)(this + 0x33f)) ||
     ((*(uint *)(this + 0x29b) & 0x200000) != 0)) {
    *(undefined4 *)(this + 0x33f) = 0;
    m3dNormalize(local_50);
    uVar4 = *(uint *)(this + 0x29b) & 0x200000;
    if ((uVar4 == 0) || ((*(uint *)(this + 0x29b) & 0x800) != 0)) {
      local_60 = local_60 | 1;
    }
    if (uVar4 == 0) {
      local_68 = local_68 | 10;
    }
    iVar2 = *(int *)(*(int *)(this + 0x23f) + *(int *)(this + 0x243) * 4);
    if ((*(int *)(iVar2 + 0x94) != 4) || (local_8c = 1500.0, (*(byte *)(iVar2 + 0x193) & 8) == 0)) {
      local_8c = 150.0;
    }
    iVar2 = scnSCENE::ShootRay(gsScenePtr,local_44,local_50,local_8c,0x200,(cdtREFINE *)&local_6c,
                               DAT_009483ac);
    if ((*(uint *)(this + 0x29b) & 0x200000) == 0) {
      local_20[0] = 0;
      local_20[1] = 0;
      local_20[2] = 0;
      local_20[3] = 0;
      local_20[4] = _m3dVZero;
      local_c = DAT_00963740;
      local_8 = DAT_00963744;
      local_4 = 0;
      if (iVar2 != 0) {
        if (___real_43160000 <= *(float *)(DAT_009483ac + 0x1c)) {
          local_8c = 150.0;
        }
        else {
          local_8c = *(float *)(DAT_009483ac + 0x1c);
        }
      }
      local_68 = local_68 & 0xfffffff5 | 1;
      iVar3 = scnSCENE::ShootRay(gsScenePtr,local_44,local_50,local_8c,0x200,(cdtREFINE *)&local_6c,
                                 (cdtINFO *)local_20);
      if (iVar3 == 0) goto LAB_00420a3e;
      puVar5 = local_20;
      pcVar7 = DAT_009483ac;
      for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(undefined4 *)pcVar7 = *puVar5;
        puVar5 = puVar5 + 1;
        pcVar7 = pcVar7 + 4;
      }
LAB_00420a42:
      local_8c = *(float *)(DAT_009483ac + 0x1c);
      scnSCENE::GetCDTObj(gsScenePtr,DAT_009483ac);
    }
    else {
LAB_00420a3e:
      if (iVar2 != 0) goto LAB_00420a42;
      local_8c = 100.0;
    }
    if ((*(int *)(DAT_009483ac + 4) == 0) ||
       ((*(byte *)(*(int *)(*(int *)(DAT_009483ac + 4) + 0x13c) + 0xb8) & 4) == 0)) {
      GetTargetInst(this,local_44,local_50,local_8c,DAT_009483ac,3.0);
    }
  }
  DAT_009483a8 = (int *)0x0;
  if (((byte)*DAT_009483ac & 2) == 0) {
    (**(code **)(*(int *)this + 0x68))(&local_78);
    local_78 = local_78 + *(float *)(this + 0x2ef);
    (**(code **)(*(int *)this + 0x70))(&local_88);
    m3dNormalize((m3dV *)&fStack_84);
    fStack_2c = fStack_84 * ___real_bf800000;
    fStack_28 = fStack_80 * ___real_bf800000;
    fStack_24 = fStack_7c * ___real_bf800000;
    fStack_38 = fStack_84 * ___real_42480000 + local_78;
    fStack_34 = fStack_80 * ___real_42480000 + fStack_74;
    fStack_30 = fStack_7c * ___real_42480000 + fStack_70;
    iVar2 = m3dIsectRayVNPlane(local_44,local_50,(m3dV *)&fStack_38,(m3dV *)&fStack_2c,
                               (m3dV *)&fStack_5c,(float *)0x0);
    if (iVar2 == 0) {
      fStack_5c = fStack_84 * ___real_42480000 + local_78;
      fStack_54 = fStack_7c * ___real_42480000 + fStack_70;
      fStack_58 = fStack_74 + ___real_3f800000;
    }
    DAT_0094838c = fStack_5c;
    DAT_00948390 = fStack_58;
    DAT_00948394 = fStack_54;
  }
  else {
    DAT_0094838c = *(float *)(DAT_009483ac + 0x10);
    DAT_00948390 = *(float *)(DAT_009483ac + 0x14);
    DAT_00948394 = *(float *)(DAT_009483ac + 0x18);
    if (*(int *)(DAT_009483ac + 4) != 0) {
      DAT_009483a8 = *(int **)(*(int *)(DAT_009483ac + 4) + 0x13c);
    }
  }
  wrCURSORS::SetCursorType(wrCURSORS::pInstance,1);
  uVar6 = 0xffdfdfdf;
  if (DAT_009483a8 != (int *)0x0) {
    if (DAT_009483a8[5] == 0x244e5043) {
      if ((*(uint *)((int)DAT_009483a8 + 1099) & 0x200000) != 0) goto LAB_00420c95;
      fVar1 = (float)DAT_009483a8[0x33] / (float)DAT_009483a8[0x34];
    }
    else {
      if ((DAT_009483a8[5] != 0x504c5952) ||
         (iVar2 = (**(code **)(*DAT_009483a8 + 0x78))(), iVar2 != 0)) goto LAB_00420c95;
      fVar1 = (float)DAT_009483a8[0x33] * ___real_3c23d70a;
    }
    if (fVar1 <= ___real_3f000000) {
      uVar6 = 0xbfffff00;
      if (fVar1 <= ___real_3e800000) {
        uVar6 = 0xbfff0000;
      }
    }
    else {
      uVar6 = 0xbf00ff00;
    }
    wrCURSORS::SetCursorType(wrCURSORS::pInstance,1);
  }
LAB_00420c95:
  _DAT_009483a4 = ___real_3f266666;
  if (((((byte)*DAT_009483ac & 2) != 0) &&
      (fVar1 = *(float *)(DAT_009483ac + 0x1c), _DAT_009483a4 = ___real_3f666666,
      ___real_41200000 <= fVar1)) && (_DAT_009483a4 = ___real_3f266666, fVar1 <= ___real_428c0000))
  {
    _DAT_009483a4 = ___real_3f666666 - (fVar1 - ___real_41200000) * ___real_3b888889;
  }
  _DAT_009483a0 = uVar6;
  iVar2 = (**(code **)(*(int *)this + 0x78))();
  if (((iVar2 == 0) && (*(int *)(this + 0x243) != 0)) &&
     ((*(uint *)(this + 0x29b) & 0x20000000) == 0)) {
    _gscCursor = _gscCursor & 0xfffffffb;
    return;
  }
  _gscCursor = _gscCursor | 4;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: player.cpp
   addr: 00420D50 */

animINST * __thiscall
plrPLAYER::GetTargetInst
          (plrPLAYER *this,m3dV *param_1,m3dV *param_2,float param_3,cdtINFO *param_4,float param_5)

{
  animINST *this_00;
  objOBJ *poVar1;
  animINST *paVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 extraout_MM1;
  undefined8 extraout_MM1_00;
  undefined8 extraout_MM1_01;
  undefined8 extraout_MM1_02;
  undefined8 uVar5;
  undefined8 uVar6;
  unkbyte10 in_ST2;
  unkbyte10 in_ST3;
  unkbyte10 in_ST4;
  unkbyte10 in_ST5;
  float fVar7;
  undefined1 auVar8 [16];
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  undefined **local_c0 [3];
  undefined4 local_b4;
  float local_b0;
  animINST *local_ac;
  animINST *local_a8;
  float local_a4;
  scnAOBJ local_a0 [160];
  
  cdtREFINE::cdtREFINE((cdtREFINE *)local_c0,0,*(animINST **)(plrPlayer + 0xbc));
  local_cc = param_3 * *(float *)param_2 + *(float *)param_1;
  local_b4 = 4;
  local_c0[0] = &plrCDT_REFINE_NPC::_vftable_;
  local_c8 = param_3 * *(float *)(param_2 + 4) + *(float *)(param_1 + 4);
  local_c4 = param_3 * *(float *)(param_2 + 8) + *(float *)(param_1 + 8);
  this_00 = (animINST *)
            scnSCENE::MakeAnimList
                      (gsScenePtr,param_1,(m3dV *)&local_cc,3.0,(cdtREFINE *)local_c0,local_a0,0x14)
  ;
  iVar3 = 0;
  local_a4 = param_5;
  local_ac = (animINST *)0x0;
  paVar2 = (animINST *)0x0;
  local_a8 = this_00;
  if (0 < (int)this_00) {
    do {
      paVar2 = *(animINST **)(local_a0 + iVar3 * 8);
      if (*(int *)(*(int *)(paVar2 + 0x13c) + 0x14) == 0x244e5043) {
        poVar1 = objFindName(*(objOBJ **)(paVar2 + 0x10),s_target);
        if (poVar1 == (objOBJ *)0x0) {
          animINST::GetPos(paVar2,(m3dV *)&local_d8);
          local_d4 = local_d4 + ___real_3f800000;
          uVar5 = extraout_MM1_00;
        }
        else {
          objValidateLTM(poVar1);
          objOBJ::GetOrigin(poVar1,(m3dV *)&local_d8);
          uVar5 = extraout_MM1;
        }
        local_e4 = local_d8 - *(float *)param_1;
        local_e0 = local_d4 - *(float *)(param_1 + 4);
        local_dc = local_d0 - *(float *)(param_1 + 8);
        local_e8 = local_e4 * local_e4 + local_e0 * local_e0 + local_dc * local_dc;
        if (m3dSimdType == 0) {
          local_e8 = local_e8 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
          auVar8 = rsqrtss(ZEXT416((uint)local_e8),ZEXT416((uint)local_e8));
          fVar7 = auVar8._0_4_;
          local_e8 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar7 *
                     (`float___cdecl_m3dSqrt(float)'::__l2::three - local_e8 * fVar7 * fVar7) *
                     local_e8;
        }
        else if (m3dSimdType == 1) {
          FastExitMediaState();
          uVar4 = (ulonglong)(uint)local_e8;
          uVar5 = PackedFloatingReciprocalSQRAprox(uVar5,uVar4);
          in_ST2 = CONCAT28((short)((unkuint10)in_ST2 >> 0x40),uVar5);
          uVar6 = PackedFloatingMUL(uVar5,uVar5);
          uVar6 = PackedFloatingReciprocalSQRIter1(uVar6,uVar4);
          uVar5 = PackedFloatingReciprocalIter2(uVar6,uVar5);
          uVar5 = PackedFloatingMUL(uVar5,uVar4);
          local_e8 = (float)uVar5;
          FastExitMediaState();
        }
        else {
          local_e8 = SQRT(local_e8);
        }
        uVar5 = (undefined8)in_ST2;
        this_00 = paVar2;
        if ((___real_41a00000 <= local_e8) && (local_e8 <= param_3)) {
          in_ST2 = in_ST3;
          in_ST3 = in_ST4;
          in_ST4 = in_ST5;
          local_b0 = m3dAngleVector((m3dV *)&local_e4,param_2);
          local_e8 = local_e4 * local_e4 + local_e0 * local_e0 + local_dc * local_dc;
          if (m3dSimdType == 0) {
            local_e8 = local_e8 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
            auVar8 = rsqrtss(ZEXT416((uint)local_e8),ZEXT416((uint)local_e8));
            fVar7 = auVar8._0_4_;
            local_e8 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar7 *
                       (`float___cdecl_m3dSqrt(float)'::__l2::three - local_e8 * fVar7 * fVar7) *
                       local_e8;
          }
          else if (m3dSimdType == 1) {
            FastExitMediaState();
            uVar4 = (ulonglong)(uint)local_e8;
            uVar5 = PackedFloatingReciprocalSQRAprox(uVar5,uVar4);
            in_ST2 = CONCAT28((short)((unkuint10)in_ST2 >> 0x40),uVar5);
            uVar6 = PackedFloatingMUL(uVar5,uVar5);
            uVar6 = PackedFloatingReciprocalSQRIter1(uVar6,uVar4);
            uVar5 = PackedFloatingReciprocalIter2(uVar6,uVar5);
            uVar5 = PackedFloatingMUL(uVar5,uVar4);
            local_e8 = (float)uVar5;
            FastExitMediaState();
          }
          else {
            local_e8 = SQRT(local_e8);
          }
          fVar7 = ___real_3f000000;
          if ((___real_41f00000 <= local_e8) &&
             (fVar7 = ___real_3e4ccccd, local_e8 <= ___real_428c0000)) {
            fVar7 = ___real_3f000000 - (local_e8 - ___real_41f00000) * ___real_3bf5c28f;
          }
          in_ST5 = in_ST4;
          if ((local_b0 < param_5 * fVar7) && (local_b0 < local_a4)) {
            local_ac = *(animINST **)(local_a0 + iVar3 * 8);
            local_a4 = local_b0;
          }
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)local_a8);
    paVar2 = local_ac;
    if ((local_ac != (animINST *)0x0) && (param_4 != (cdtINFO *)0x0)) {
      poVar1 = objFindName(*(objOBJ **)(local_ac + 0x10),s_target);
      if (poVar1 == (objOBJ *)0x0) {
        animINST::GetPos(this_00,(m3dV *)(param_4 + 0x10));
        local_d4 = local_d4 + ___real_3f800000;
        uVar5 = extraout_MM1_02;
      }
      else {
        objOBJ::GetOrigin(poVar1,(m3dV *)(param_4 + 0x10));
        uVar5 = extraout_MM1_01;
      }
      *(undefined4 *)(param_4 + 8) = 0;
      *(animINST **)(param_4 + 4) = local_ac;
      *(undefined4 *)(param_4 + 0xc) = 0;
      local_e8 = (local_d8 - *(float *)param_1) * (local_d8 - *(float *)param_1) +
                 (local_d4 - *(float *)(param_1 + 4)) * (local_d4 - *(float *)(param_1 + 4)) +
                 (local_d0 - *(float *)(param_1 + 8)) * (local_d0 - *(float *)(param_1 + 8));
      if (m3dSimdType == 0) {
        local_e8 = local_e8 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
        auVar8 = rsqrtss(ZEXT416((uint)local_e8),ZEXT416((uint)local_e8));
        fVar7 = auVar8._0_4_;
        local_e8 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar7 *
                   (`float___cdecl_m3dSqrt(float)'::__l2::three - local_e8 * fVar7 * fVar7) *
                   local_e8;
      }
      else if (m3dSimdType == 1) {
        FastExitMediaState();
        uVar4 = (ulonglong)(uint)local_e8;
        uVar5 = PackedFloatingReciprocalSQRAprox(uVar5,uVar4);
        uVar6 = PackedFloatingMUL(uVar5,uVar5);
        uVar6 = PackedFloatingReciprocalSQRIter1(uVar6,uVar4);
        uVar5 = PackedFloatingReciprocalIter2(uVar6,uVar5);
        uVar5 = PackedFloatingMUL(uVar5,uVar4);
        local_e8 = (float)uVar5;
        FastExitMediaState();
      }
      else {
        local_e8 = SQRT(local_e8);
      }
      *(float *)(param_4 + 0x1c) = local_e8;
      *(uint *)param_4 = *(uint *)param_4 & 0xfffffeff | 2;
      paVar2 = local_ac;
    }
  }
  return paVar2;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: player.cpp
   addr: 004211E0 */

void __thiscall plrPLAYER::StartDeath(plrPLAYER *this,plrEV_START_DEATH *param_1)

{
  uint *puVar1;
  pwpWEAPON *this_00;
  int iVar2;
  float extraout_ECX;
  char *pcVar3;
  float extraout_EDX;
  int iVar4;
  float fVar5;
  undefined1 local_10;
  undefined1 local_f;
  undefined2 local_e;
  undefined4 local_c;
  int local_8;
  undefined4 local_4;
  
  if (((byte)this[0x29b] & 2) == 0) {
    plrPLAYER_COMMON::StartDeath((plrPLAYER_COMMON *)this,param_1);
    if (*(int *)(this + 0x377) != 0) {
      puVar1 = (uint *)(*(int *)(this + 0x377) + 0x29b);
      *puVar1 = *puVar1 | 2;
    }
    iVar4 = 0;
    do {
      if (*(int *)(this + iVar4 * 8 + 0x2c7) == 2) {
        local_10 = 0;
        local_f = 0x40;
        local_8 = 0;
        local_4 = 0;
        local_c = 6;
        local_e = 0x10;
        iVar2 = plrPLAYER_COMMON::IsActivePowerup((plrPLAYER_COMMON *)this,iVar4);
        if (iVar2 != 0) {
          *(undefined4 *)(this + iVar4 * 8 + 0x2c7) = 0;
          *(undefined4 *)(this + iVar4 * 8 + 0x2cb) = 0;
          if (iVar4 == 2) {
            gsMsgSetElapsedTimeScale(extraout_ECX);
          }
          local_4 = 0;
          local_8 = iVar4;
          (**(code **)(*(int *)gsSysClient + 0x2c))(this,0x40c,&local_10,0x20000);
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 3);
    if ((*(uint *)(this + 0x29b) & 0x20000000) != 0) {
      plrCAM_CTRL::ZoomClear(*(plrCAM_CTRL **)(this + 0x373));
      (**(code **)(*(int *)uiSystem + 0x1c))(0);
      *(uint *)(this + 0x29b) = *(uint *)(this + 0x29b) & 0xdfffffff;
      this_00 = *(pwpWEAPON **)(*(int *)(this + 0x23f) + *(int *)(this + 0x243) * 4);
      puVar1 = (uint *)(*(int *)(this_00 + 0xbc) + 4);
      *puVar1 = *puVar1 & 0xfffffffe;
      pwpWEAPON::SetZoom(this_00,0);
    }
    plrCAM_CTRL::DeathNotify(*(plrCAM_CTRL **)(this + 0x373),(uint)~gsAppState >> 0xc & 1);
    SetupGhostRendState(this);
    if ((*(int **)(this + 0x377) != (int *)0x0) &&
       ((((iVar4 = *(int *)(param_1 + 0xc), iVar4 == 4 || (iVar4 == 5)) || (iVar4 == 7)) ||
        (iVar4 == 10)))) {
      (**(code **)(**(int **)(this + 0x377) + 0xfc))(0xffffffff,0);
    }
    *(undefined4 *)(this + 0x353) = _m3dVZero;
    *(undefined4 *)(this + 0x357) = DAT_00963740;
    *(undefined4 *)(this + 0x35b) = DAT_00963744;
    if (*(int *)(gsSysMP + 0x28) == 1) {
      fVar5 = m3dRandom();
      pcVar3 = s_LIN_P_failed_mortal;
      if (fVar5 <= ___real_3e99999a) {
        pcVar3 = s_LIN_P_fool;
      }
      wrMSG_SYSTEM::ShowMsg(pcVar3,extraout_EDX);
    }
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: player.cpp
   addr: 004213A0 */

void __thiscall plrPLAYER::ProcessPowerup(plrPLAYER *this,int param_1,void *param_2)

{
  m3dV *pmVar1;
  undefined4 uVar2;
  int iVar3;
  float extraout_EDX;
  float extraout_EDX_00;
  float extraout_EDX_01;
  float fVar4;
  
  if (param_1 == 0) {
    pmVar1 = (m3dV *)((int)param_2 + 0x1c);
    *(uint *)(this + 0x29b) = *(uint *)(this + 0x29b) | 0x400000;
    animINST::SetPos(*(animINST **)(this + 0xbc),pmVar1);
    animINST::SetDir_XZ(*(animINST **)(this + 0xbc),(m3dV *)((int)param_2 + 0x28));
    *(undefined4 *)(this + 0x25f) = *(undefined4 *)((int)param_2 + 0x28);
    *(undefined4 *)(this + 0x263) = *(undefined4 *)((int)param_2 + 0x2c);
    *(undefined4 *)(this + 0x267) = *(undefined4 *)((int)param_2 + 0x30);
    *(undefined4 *)(this + 0x277) = *(undefined4 *)pmVar1;
    *(undefined4 *)(this + 0x27b) = *(undefined4 *)((int)param_2 + 0x20);
    *(undefined4 *)(this + 0x27f) = *(undefined4 *)((int)param_2 + 0x24);
    *(undefined4 *)(this + 0x26b) = *(undefined4 *)pmVar1;
    *(undefined4 *)(this + 0x26f) = *(undefined4 *)((int)param_2 + 0x20);
    *(undefined4 *)(this + 0x273) = *(undefined4 *)((int)param_2 + 0x24);
    animINST::SetPosDir_XZ
              (*(animINST **)(*(int *)(this + 0x3c7) + 0xbc),(m3dV *)((int)param_2 + 4),
               (m3dV *)((int)param_2 + 0x10));
    animINST::Validate(*(animINST **)(*(int *)(this + 0x3c7) + 0xbc),4);
    dynDYNAMIC::StartAnim(*(dynDYNAMIC **)(this + 0x3c7),0,0.0,0);
                    /* WARNING: Load size is inaccurate */
    plrCAM_CTRL::PowerupNotify
              (*(plrCAM_CTRL **)(this + 0x373),1,(plrPLAYER_TRALTAR_INFO *)param_2,
               *(objOBJ **)(*(int *)(this + 0x3c7) + 0x177 + *param_2 * 4));
    fVar4 = extraout_EDX_00;
    if (*(int **)(this + 0x377) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x377) + 0xfc))(0xffffffff,0);
      fVar4 = extraout_EDX_01;
    }
    if (*(int *)(gsSysMP + 0x28) == 1) {
                    /* WARNING: Load size is inaccurate */
      iVar3 = *param_2;
      if (iVar3 == 0) {
        wrMSG_SYSTEM::ShowMsg(s_LIN_P_titan_damage,fVar4);
        return;
      }
      if (iVar3 == 1) {
        wrMSG_SYSTEM::ShowMsg(s_LIN_P_immortality,fVar4);
        return;
      }
      if (iVar3 == 2) {
        wrMSG_SYSTEM::ShowMsg(s_LIN_P_titan_motion,fVar4);
      }
    }
  }
  else if (param_1 == 1) {
                    /* WARNING: Load size is inaccurate */
    uVar2 = *param_2;
    *(uint *)(this + 0x29b) = *(uint *)(this + 0x29b) & 0xffbfffff;
    plrCAM_CTRL::PowerupNotify
              (*(plrCAM_CTRL **)(this + 0x373),0,(plrPLAYER_TRALTAR_INFO *)0x0,(objOBJ *)0x0);
    SetupGhostRendState(this);
    (**(code **)(*(int *)this + 0xe0))(uVar2);
    animINST::GetDir(*(animINST **)(this + 0xbc),(m3dV *)&stack0xfffffff0);
    fVar4 = m3dAngleVector((m3dV *)&stack0xfffffff0,&m3dVUnitY);
    *(float *)(this + 0x24b) = fVar4;
    if (*(int *)(gsSysMP + 0x28) == 1) {
      fVar4 = m3dRandom();
      if ((float)___real_3fd999999999999a < fVar4) {
        wrMSG_SYSTEM::ShowMsg(s_LIN_P_use_power,extraout_EDX);
        return;
      }
      wrMSG_SYSTEM::ShowMsg(s_LIN_P_power_lead_victory,extraout_EDX);
      return;
    }
  }
  return;
}




/* from: player.cpp
   addr: 004215C0 */

void __thiscall plrPLAYER::ProcessUse(plrPLAYER *this)

{
  gsSTRINGS *this_00;
  int iVar1;
  int iVar2;
  ushort *puVar3;
  gsSTRINGS *this_01;
  int iVar4;
  undefined4 uVar5;
  undefined **local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  m3dV local_b0 [4];
  undefined4 local_ac;
  int local_a4;
  scnAOBJ local_a0 [160];
  
  local_b4 = *(undefined4 *)(plrPlayer + 0xbc);
  local_b8 = 0;
  local_bc = &plrCDT_REFINE_BUTTON::_vftable_;
  animINST::GetPos(*(animINST **)(this + 0xbc),local_b0);
  iVar1 = scnSCENE::MakeAnimList
                    (gsScenePtr,local_b0,local_b0,10.0,(cdtREFINE *)&local_bc,local_a0,0x14);
  iVar4 = 0;
  local_ac = 0;
  if (iVar1 < 1) {
    return;
  }
  while (iVar2 = IsCanUse(this,*(animINST **)(local_a0 + iVar4 * 8),(float *)0x0), iVar2 == 0) {
    iVar4 = iVar4 + 1;
    if (iVar1 <= iVar4) {
      return;
    }
  }
  iVar1 = *(int *)(*(int *)(*(int *)(local_a0 + iVar4 * 8) + 0x13c) + 0x94);
  if (iVar1 < 0x3ea) {
    if (iVar1 == 0x3e9) {
      iVar1 = 1;
    }
    else {
      if (iVar1 == 0) goto LAB_00421740;
      if (iVar1 != 1000) goto LAB_0042169a;
      iVar1 = 0;
    }
  }
  else if (iVar1 == 0x3ea) {
    iVar1 = 2;
  }
  else {
LAB_0042169a:
    iVar1 = local_a4;
    if (local_a4 == -1) goto LAB_00421740;
  }
  iVar2 = plrPLAYER_COMMON::IsCanBuyPwr((plrPLAYER_COMMON *)this,iVar1);
  this_00 = gsStrings;
  if (iVar2 == 0) {
    if (*(int *)(this + iVar1 * 8 + 0x2c7) == 0) {
      iVar1 = *(int *)uiSystem;
      uVar5 = ftol(0x40a00000,0);
      puVar3 = gsSTRINGS::Printf(this_01,(char *)gsStrings,s_GAME_MSG_NOT_ENOUGH_GOLD,uVar5);
      (**(code **)(iVar1 + 0x20))(puVar3);
      return;
    }
    uVar5 = 0x40600000;
    iVar1 = *(int *)uiSystem;
    iVar4 = gsSTRINGS::GetStringId(gsStrings,s_GAME_MSG_POWERUP_POSSESSED);
    puVar3 = gsSTRINGS::GetStringById(this_00,iVar4);
    (**(code **)(iVar1 + 0x20))(puVar3,uVar5);
    return;
  }
LAB_00421740:
  (**(code **)(**(int **)(*(int *)(local_a0 + iVar4 * 8) + 0x13c) + 0x68))(this);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: player.cpp
   addr: 00421760 */

void __thiscall plrPLAYER::NotifyMsgUse(plrPLAYER *this)

{
  gsSTRINGS *this_00;
  int iVar1;
  int iVar2;
  int iVar3;
  ushort *puVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined **local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  m3dV local_b0 [4];
  undefined4 local_ac;
  float local_a4;
  scnAOBJ local_a0 [160];
  
  local_b4 = *(undefined4 *)(plrPlayer + 0xbc);
  iVar5 = 0;
  local_b8 = 0;
  local_bc = &plrCDT_REFINE_BUTTON::_vftable_;
  if (___real_3f800000 <= *(float *)(this + 0x33b)) {
    *(undefined4 *)(this + 0x33b) = 0;
    animINST::GetPos(*(animINST **)(this + 0xbc),local_b0);
    iVar1 = scnSCENE::MakeAnimList
                      (gsScenePtr,local_b0,local_b0,10.0,(cdtREFINE *)&local_bc,local_a0,0x14);
    local_ac = 0;
    if (0 < iVar1) {
      do {
        iVar2 = IsCanUse(this,*(animINST **)(local_a0 + iVar5 * 8),&local_a4);
        this_00 = gsStrings;
        if (iVar2 != 0) {
          iVar2 = *(int *)(*(int *)(*(int *)(local_a0 + iVar5 * 8) + 0x13c) + 0x94);
          if (iVar2 < 0x3ea) {
            if (iVar2 == 0x3e9) {
              pcVar6 = s_GAME_TIP_BUY_IMMORTALITY;
              iVar2 = *(int *)uiSystem;
            }
            else {
              if (iVar2 != 0) {
                if (iVar2 == 1000) {
                  pcVar6 = s_GAME_TIP_BUY_TITAN_DAMAGE;
                  goto LAB_00421875;
                }
                goto LAB_0042189c;
              }
              pcVar6 = s_GAME_TIP_USE;
              iVar2 = *(int *)uiSystem;
            }
          }
          else {
            if (iVar2 != 0x3ea) goto LAB_0042189c;
            pcVar6 = s_GAME_TIP_BUY_TITAN_MOTION;
LAB_00421875:
            iVar2 = *(int *)uiSystem;
          }
          uVar8 = 0;
          uVar7 = 0x3f800000;
          iVar3 = gsSTRINGS::GetStringId(gsStrings,pcVar6);
          puVar4 = gsSTRINGS::GetStringById(this_00,iVar3);
          (**(code **)(iVar2 + 0x20))(puVar4,uVar7,uVar8);
        }
LAB_0042189c:
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar1);
    }
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: player.cpp
   addr: 004218C0 */

int __thiscall plrPLAYER::IsCanUse(plrPLAYER *this,animINST *param_1,float *param_2)

{
  animINST *paVar1;
  int iVar2;
  char *pcVar3;
  float unaff_EBX;
  int iVar4;
  ulonglong uVar5;
  undefined8 extraout_MM1;
  undefined8 extraout_MM1_00;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  m3dV local_c [12];
  
  paVar1 = param_1;
  iVar4 = 0;
  animINST::GetPos(*(animINST **)(this + 0xbc),(m3dV *)&local_24);
  animINST::GetDir(*(animINST **)(this + 0xbc),local_c);
  local_20 = local_20 + ___real_3f800000;
  animINST::GetPos(param_1,(m3dV *)&local_18);
  if (___real_40800000 < ABS(local_20 - local_14)) {
    return 0;
  }
  local_14 = local_20;
  if (param_2 != (float *)0x0) {
    fVar8 = (local_18 - local_24) * (local_18 - local_24) +
            ___real_00000000 * ___real_00000000 + (local_10 - local_1c) * (local_10 - local_1c);
    if (m3dSimdType == 0) {
      fVar8 = fVar8 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
      auVar10 = rsqrtss(ZEXT416((uint)fVar8),ZEXT416((uint)fVar8));
      fVar9 = auVar10._0_4_;
      param_1 = (animINST *)
                (`float___cdecl_m3dSqrt(float)'::__l2::half * fVar9 *
                 (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar8 * fVar9 * fVar9) * fVar8);
    }
    else if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar5 = (ulonglong)(uint)fVar8;
      uVar6 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar5);
      uVar7 = PackedFloatingMUL(uVar6,uVar6);
      uVar7 = PackedFloatingReciprocalSQRIter1(uVar7,uVar5);
      uVar6 = PackedFloatingReciprocalIter2(uVar7,uVar6);
      uVar6 = PackedFloatingMUL(uVar6,uVar5);
      param_1 = (animINST *)uVar6;
      FastExitMediaState();
    }
    else {
      param_1 = (animINST *)SQRT(fVar8);
    }
    *param_2 = (float)param_1;
  }
  iVar2 = (**(code **)(**(int **)(paVar1 + 0x13c) + 0x6c))(this);
  if (iVar2 == 0) {
    return 0;
  }
  pcVar3 = *(char **)(paVar1 + 0x18);
  if (pcVar3 == (char *)0x0) {
    pcVar3 = s_;
  }
  pcVar3 = strstr(pcVar3,s_katapult);
  if (pcVar3 == (char *)0x0) {
    iVar2 = m3dIsBelongPointCone
                      ((m3dV *)&local_1c,(m3dV *)&stack0xffffffd8,(m3dV *)&local_10,5.0,0.0,90.0);
    if (iVar2 != 0) {
      iVar4 = 1;
    }
  }
  else {
    fVar8 = (local_1c - unaff_EBX) * (local_1c - unaff_EBX) +
            (local_14 - local_20) * (local_14 - local_20);
    if (m3dSimdType == 0) {
      fVar8 = fVar8 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
      auVar10 = rsqrtss(ZEXT416((uint)fVar8),ZEXT416((uint)fVar8));
      fVar9 = auVar10._0_4_;
      fVar8 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar9 *
              (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar8 * fVar9 * fVar9) * fVar8;
    }
    else if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar5 = (ulonglong)(uint)fVar8;
      uVar6 = PackedFloatingReciprocalSQRAprox(extraout_MM1_00,uVar5);
      uVar7 = PackedFloatingMUL(uVar6,uVar6);
      uVar7 = PackedFloatingReciprocalSQRIter1(uVar7,uVar5);
      uVar6 = PackedFloatingReciprocalIter2(uVar7,uVar6);
      uVar6 = PackedFloatingMUL(uVar6,uVar5);
      fVar8 = (float)uVar6;
      FastExitMediaState();
    }
    else {
      fVar8 = SQRT(fVar8);
    }
    if (fVar8 < ___real_41200000) {
      return 1;
    }
  }
  return iVar4;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: player.cpp
   addr: 00421B50 */

void __thiscall plrPLAYER::UpdateTimers(plrPLAYER *this)

{
  float fVar1;
  int iVar2;
  float extraout_ECX;
  int iVar3;
  float fVar4;
  undefined1 local_10;
  undefined1 local_f;
  undefined2 local_e;
  undefined4 local_c;
  int local_8;
  undefined4 local_4;
  
  fVar4 = gsMsgGetElapsedTimeScale();
  *(float *)(this + 0x337) = gsElapsedTime + *(float *)(this + 0x337);
  *(float *)(this + 0x33b) = gsElapsedTime + *(float *)(this + 0x33b);
  fVar4 = ___real_3f800000 / fVar4;
  *(float *)(this + 0x33f) = fVar4 * gsElapsedTime + *(float *)(this + 0x33f);
  if ((___real_00000000 <= *(float *)(this + 0x347)) &&
     (fVar1 = gsElapsedTime + *(float *)(this + 0x347), *(float *)(this + 0x347) = fVar1,
     *(float *)(this + 0x34b) <= fVar1)) {
    *(undefined4 *)(this + 0x347) = 0xbf800000;
  }
  iVar3 = 0;
  do {
    if ((*(int *)(this + iVar3 * 8 + 0x2c7) == 2) &&
       (fVar1 = *(float *)(this + iVar3 * 8 + 0x2cb) - fVar4 * gsElapsedTime,
       *(float *)(this + iVar3 * 8 + 0x2cb) = fVar1, fVar1 < ___real_00000000)) {
      local_10 = 0;
      local_f = 0x40;
      local_8 = 0;
      local_4 = 0;
      local_c = 6;
      local_e = 0x10;
      iVar2 = plrPLAYER_COMMON::IsActivePowerup((plrPLAYER_COMMON *)this,iVar3);
      if (iVar2 != 0) {
        *(undefined4 *)(this + iVar3 * 8 + 0x2c7) = 0;
        *(undefined4 *)(this + iVar3 * 8 + 0x2cb) = 0;
        if (iVar3 == 2) {
          gsMsgSetElapsedTimeScale(extraout_ECX);
        }
        local_4 = 0;
        local_8 = iVar3;
        (**(code **)(*(int *)gsSysClient + 0x2c))(this,0x40c,&local_10,0x20000);
      }
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 3);
  return;
}




/* from: player.cpp
   addr: 00421CA0 */

int __thiscall plrPLAYER::PickWeapon(plrPLAYER *this,int param_1,float param_2)

{
  int iVar1;
  ushort *puVar2;
  gsSTRINGS *this_00;
  undefined4 uVar3;
  undefined4 uVar4;
  
  plrPLAYER_COMMON::PickWeapon((plrPLAYER_COMMON *)this,param_1,param_2);
  uVar4 = 3;
  uVar3 = 0x40400000;
  iVar1 = *(int *)uiSystem;
  puVar2 = plrPLAYER_COMMON::WpnType2String((plrPLAYER_COMMON *)this,param_1);
  puVar2 = gsSTRINGS::Printf(this_00,(char *)gsStrings,s_GAME_MSG_GOT_,puVar2,uVar3,uVar4);
  (**(code **)(iVar1 + 0x20))(puVar2);
  *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 0x1000;
  return 1;
}




/* from: player.cpp
   addr: 00421D10 */

int __thiscall plrPLAYER::PickAmmo(plrPLAYER *this,int param_1,float param_2)

{
  int iVar1;
  undefined4 uVar2;
  ushort *puVar3;
  gsSTRINGS *this_00;
  
  iVar1 = plrPLAYER_COMMON::PickAmmo((plrPLAYER_COMMON *)this,param_1,param_2);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = *(int *)uiSystem;
  uVar2 = ftol(0x40400000,0);
  puVar3 = plrPLAYER_COMMON::WpnType2String((plrPLAYER_COMMON *)this,param_1);
  puVar3 = gsSTRINGS::Printf(this_00,(char *)gsStrings,s_GAME_MSG_GOT_AMMO,puVar3,uVar2);
  (**(code **)(iVar1 + 0x20))(puVar3);
  *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 0x2000;
  return 1;
}




/* from: player.cpp
   addr: 00421D90 */

int __thiscall plrPLAYER::PickHealth(plrPLAYER *this,float param_1)

{
  int iVar1;
  undefined4 uVar2;
  ushort *puVar3;
  gsSTRINGS *this_00;
  
  iVar1 = plrPLAYER_COMMON::PickHealth((plrPLAYER_COMMON *)this,param_1);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = *(int *)uiSystem;
  uVar2 = ftol(0x40400000,0);
  puVar3 = gsSTRINGS::Printf(this_00,(char *)gsStrings,s_GAME_MSG_GOT_HEALTH,uVar2);
  (**(code **)(iVar1 + 0x20))(puVar3);
  *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 0x4000;
  return 1;
}




/* from: player.cpp
   addr: 00421E00 */

int __thiscall plrPLAYER::PickArmor(plrPLAYER *this,float param_1)

{
  int iVar1;
  undefined4 uVar2;
  ushort *puVar3;
  gsSTRINGS *this_00;
  
  iVar1 = plrPLAYER_COMMON::PickArmor((plrPLAYER_COMMON *)this,param_1);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = *(int *)uiSystem;
  uVar2 = ftol(0x40400000,0);
  puVar3 = gsSTRINGS::Printf(this_00,(char *)gsStrings,s_GAME_MSG_GOT_ARMOR,uVar2);
  (**(code **)(iVar1 + 0x20))(puVar3);
  *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 0x8000;
  return 1;
}




/* from: player.cpp
   addr: 00421E70 */

int __thiscall plrPLAYER::PickTreasure(plrPLAYER *this,float param_1)

{
  int iVar1;
  undefined4 uVar2;
  ushort *puVar3;
  gsSTRINGS *this_00;
  
  iVar1 = plrPLAYER_COMMON::PickTreasure((plrPLAYER_COMMON *)this,param_1);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = *(int *)uiSystem;
  uVar2 = ftol(0x40400000,1);
  puVar3 = gsSTRINGS::Printf(this_00,(char *)gsStrings,s_GAME_MSG_GOT_TREASURE,uVar2);
  (**(code **)(iVar1 + 0x20))(puVar3);
  *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 0x20000;
  return 1;
}




/* from: player.cpp
   addr: 00421EE0 */

int __thiscall plrPLAYER::PickMoney(plrPLAYER *this,float param_1)

{
  int iVar1;
  undefined4 uVar2;
  ushort *puVar3;
  gsSTRINGS *this_00;
  
  iVar1 = plrPLAYER_COMMON::PickMoney((plrPLAYER_COMMON *)this,param_1);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = *(int *)uiSystem;
  uVar2 = ftol(0x40400000,0);
  puVar3 = gsSTRINGS::Printf(this_00,(char *)gsStrings,s_GAME_MSG_GOT_MONEY,uVar2);
  (**(code **)(iVar1 + 0x20))(puVar3);
  *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 0x40000;
  return 1;
}




/* from: player.cpp
   addr: 00421F50 */

int __thiscall plrPLAYER::PickPowerup(plrPLAYER *this,int param_1)

{
  gsSTRINGS *this_00;
  int iVar1;
  int iVar2;
  ushort *puVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  iVar1 = plrPLAYER_COMMON::PickPowerup((plrPLAYER_COMMON *)this,param_1);
  this_00 = gsStrings;
  if (iVar1 == 0) {
    return 0;
  }
  uVar6 = 1;
  uVar5 = 0x40000000;
  if (param_1 == 0) {
    pcVar4 = s_GAME_MSG_GOT_QUAD_DAMAGE;
    iVar1 = *(int *)uiSystem;
  }
  else if (param_1 == 1) {
    pcVar4 = s_GAME_MSG_GOT_UNHOLY_ARMOR;
    iVar1 = *(int *)uiSystem;
  }
  else {
    pcVar4 = s_GAME_MSG_GOT_POWERUP;
    iVar1 = *(int *)uiSystem;
  }
  iVar2 = gsSTRINGS::GetStringId(gsStrings,pcVar4);
  puVar3 = gsSTRINGS::GetStringById(this_00,iVar2);
  (**(code **)(iVar1 + 0x20))(puVar3,uVar5,uVar6);
  return 1;
}




/* from: player.cpp
   addr: 00421FD0 */

int __thiscall plrPLAYER::PickKey(plrPLAYER *this)

{
  gsSTRINGS *this_00;
  int iVar1;
  int iVar2;
  ushort *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  iVar1 = plrPLAYER_COMMON::PickKey((plrPLAYER_COMMON *)this);
  this_00 = gsStrings;
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = *(int *)uiSystem;
  uVar5 = 1;
  uVar4 = 0x40400000;
  iVar2 = gsSTRINGS::GetStringId(gsStrings,s_GAME_MSG_GOT_KEY);
  puVar3 = gsSTRINGS::GetStringById(this_00,iVar2);
  (**(code **)(iVar1 + 0x20))(puVar3,uVar4,uVar5);
  *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 0x10000;
  return 1;
}




/* from: player.cpp
   addr: 00422040 */

void __thiscall plrPLAYER::UseKey(plrPLAYER *this)

{
  *(uint *)(this + 0x29b) = *(uint *)(this + 0x29b) & 0xffffefff;
  return;
}




/* from: player.cpp
   addr: 00422060 */

void __thiscall plrPLAYER::ClearZoom(plrPLAYER *this)

{
  uint *puVar1;
  pwpWEAPON *this_00;
  
  if ((*(uint *)(this + 0x29b) & 0x20000000) != 0) {
    plrCAM_CTRL::ZoomClear(*(plrCAM_CTRL **)(this + 0x373));
    (**(code **)(*(int *)uiSystem + 0x1c))(0);
    *(uint *)(this + 0x29b) = *(uint *)(this + 0x29b) & 0xdfffffff;
    this_00 = *(pwpWEAPON **)(*(int *)(this + 0x23f) + *(int *)(this + 0x243) * 4);
    puVar1 = (uint *)(*(int *)(this_00 + 0xbc) + 4);
    *puVar1 = *puVar1 & 0xfffffffe;
    pwpWEAPON::SetZoom(this_00,0);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: player.cpp
   addr: 004220C0 */

int __thiscall plrPLAYER::IsReadyShoot(plrPLAYER *this)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = *(int **)(*(int *)(this + 0x23f) + *(int *)(this + 0x243) * 4);
  iVar2 = (**(code **)(*piVar1 + 0xb8))();
  if ((((((*(uint *)(this + 0x29b) & 0x800) == 0) || (iVar3 = piVar1[0x25], iVar3 == 0)) ||
       (iVar3 == 1)) || (((iVar3 == 2 || (iVar3 == 8)) || (iVar3 == 3)))) &&
     (___real_00000000 < *(float *)((int)piVar1 + 0x17f))) {
    iVar3 = (**(code **)(*piVar1 + 0x7c))();
    if (((iVar3 != 0) && (iVar2 != 4)) &&
       (((iVar2 != 5 && (((iVar2 != 6 && (iVar2 != 8)) && (iVar2 != 9)))) && (iVar2 != 2)))) {
      return 1;
    }
  }
  return 0;
}




/* from: player.cpp
   addr: 00422160 */

void __thiscall plrPLAYER::ActivatePowerup(plrPLAYER *this,int param_1)

{
  float extraout_EDX;
  undefined1 local_10;
  undefined1 local_f;
  undefined2 local_e;
  undefined4 local_c;
  int local_8;
  undefined4 local_4;
  
  local_10 = 0;
  local_8 = 0;
  local_4 = 0;
  local_f = 0x40;
  local_c = 6;
  local_e = 0x10;
  if ((gsAppState & 0x20000U) == 0) {
    if (*(int *)(this + param_1 * 8 + 0x2c7) != 1) {
      return;
    }
    *(undefined4 *)(this + param_1 * 8 + 0x2c7) = 2;
    *(undefined4 *)(this + param_1 * 8 + 0x2cb) = 0x41f00000;
  }
  else if (*(int *)(this + param_1 * 8 + 0x2c7) != 2) {
    return;
  }
  if (param_1 == 2) {
    gsMsgSetElapsedTimeScale((float)this);
  }
  local_8 = param_1;
  local_4 = 1;
  (**(code **)(*(int *)gsSysClient + 0x2c))(this,0x40c,&local_10,0x20000);
  if ((*(int *)(gsSysMP + 0x28) == 1) && ((gsAppState & 0x20000U) == 0)) {
    wrMSG_SYSTEM::ShowMsg(s_LIN_P_vengeance_mine,extraout_EDX);
  }
  return;
}




/* from: player.cpp
   addr: 00422230 */

void __thiscall plrPLAYER::SelectSkin(plrPLAYER *this,int param_1)

{
  msgDATA local_c;
  undefined1 local_b;
  undefined2 local_a;
  undefined4 local_8;
  undefined4 local_4;
  
  local_c = (msgDATA)0x0;
  local_b = 0x40;
  local_4 = 0xffffffff;
  local_8 = 9;
  local_a = 0xc;
  if ((param_1 < 0) || (5 < param_1)) {
    param_1 = 0;
  }
  *(int *)(this + 0x23b) = param_1;
  if (*(int **)(this + 0x377) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x377) + 0x114))(param_1);
  }
  local_4 = *(undefined4 *)(this + 0x23b);
  if (((byte)this[0x88] & 4) == 0) {
    (**(code **)(*(int *)gsSysClient + 0x2c))(this,0x40c,&local_c,0x20000);
  }
  else {
    gsMP_SERVER::SendMsgClientAll
              (gsSysServer,(entIACTIVE_OBJ *)this,0x40c,&local_c,0x20000,0xffffffff,0xfffffffd);
  }
  SetupGhostRendState(this);
  plrPLAYER_MP::SetupGhostWpnState(*(plrPLAYER_MP **)(this + 0x377));
  return;
}




/* from: player.cpp
   addr: 004222F0 */

void __thiscall plrPLAYER::SetTeam(plrPLAYER *this,int param_1)

{
  if (*(int **)(this + 0x377) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x377) + 0x118))(param_1);
  }
  plrPLAYER_COMMON::SetTeam((plrPLAYER_COMMON *)this,param_1);
  return;
}




/* from: player.cpp
   addr: 00422320 */

int __thiscall plrPLAYER::IsCanSaveNow(plrPLAYER *this)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)this + 0x78))();
  if (iVar1 != 0) {
    return 0;
  }
  if ((*(uint *)(this + 0x29b) & 0x400000) != 0) {
    return 0;
  }
  if ((*(uint *)(this + 0x29b) & 0x40000000) != 0) {
    return 0;
  }
  return (uint)~gsAppState >> 0x13 & 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: player.cpp
   addr: 00422360 */

void __thiscall plrPLAYER::NotifyHealthChange(plrPLAYER *this,dmgDAMAGE *param_1)

{
  int iVar1;
  
  plrPLAYER_COMMON::NotifyHealthChange((plrPLAYER_COMMON *)this,param_1);
  if (_DAT_005d0698 <= *(float *)(this + 0xcc)) {
    *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 0x400;
    *(uint *)(this + 0x2a3) = *(uint *)(this + 0x2a3) | 0x20;
  }
  else if ((*(int *)(param_1 + 4) != 0) ||
          ((((iVar1 = *(int *)(param_1 + 0x1c), iVar1 != 4 && (iVar1 != 5)) && (iVar1 != 7)) &&
           (iVar1 != 10)))) {
    *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 0x800;
    return;
  }
  return;
}




/* from: player.cpp
   addr: 004223F0 */

int __thiscall plrPLAYER::GetNextPriorWeapon(plrPLAYER *this)

{
  pwpWEAPON *ppVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x243);
  do {
    iVar3 = iVar3 + 1;
    if (10 < iVar3) goto LAB_0042242a;
    ppVar1 = *(pwpWEAPON **)(*(int *)(this + 0x23f) + iVar3 * 4);
  } while (((ppVar1 == (pwpWEAPON *)0x0) || (((byte)ppVar1[0x14f] & 1) == 0)) ||
          (iVar2 = pwpWEAPON::IsEmpty(ppVar1), iVar2 != 0));
  if (iVar3 != -1) {
    return iVar3;
  }
LAB_0042242a:
  iVar3 = *(int *)(this + 0x243) + -1;
  if (1 < iVar3) {
    while (((ppVar1 = *(pwpWEAPON **)(*(int *)(this + 0x23f) + iVar3 * 4),
            ppVar1 == (pwpWEAPON *)0x0 || (((byte)ppVar1[0x14f] & 1) == 0)) ||
           (iVar2 = pwpWEAPON::IsEmpty(ppVar1), iVar2 != 0))) {
      iVar3 = iVar3 + -1;
      if (iVar3 < 2) {
        return 1;
      }
    }
    if (iVar3 != -1) {
      return iVar3;
    }
  }
  return 1;
}




/* from: player.cpp
   addr: 00422480 */

int __thiscall plrCDT_REFINE::IsInclInst(plrCDT_REFINE *this,animINST *param_1)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = aiIsNPCDead(*(entENTITY **)(param_1 + 0x13c),(int *)0x0);
  if (iVar1 != 0) {
    pcVar2 = *(char **)(param_1 + 0x20);
    if (pcVar2 == (char *)0x0) {
      pcVar2 = s_;
    }
    pcVar2 = strstr(pcVar2,s_ai_cyclop);
    if (pcVar2 == (char *)0x0) {
      pcVar2 = *(char **)(param_1 + 0x20);
      if (pcVar2 == (char *)0x0) {
        pcVar2 = s_;
      }
      pcVar2 = strstr(pcVar2,s_ai_gefest);
      if (pcVar2 == (char *)0x0) {
        pcVar2 = *(char **)(param_1 + 0x20);
        if (pcVar2 == (char *)0x0) {
          pcVar2 = s_;
        }
        pcVar2 = strstr(pcVar2,s_ai_medusa);
        if (pcVar2 == (char *)0x0) {
          pcVar2 = *(char **)(param_1 + 0x20);
          if (pcVar2 == (char *)0x0) {
            pcVar2 = s_;
          }
          pcVar2 = strstr(pcVar2,s_ai_zeus);
          if (pcVar2 == (char *)0x0) {
            pcVar2 = *(char **)(param_1 + 0x20);
            if (pcVar2 == (char *)0x0) {
              pcVar2 = s_;
            }
            pcVar2 = strstr(pcVar2,s_ai_gefest);
            if (pcVar2 == (char *)0x0) {
              return 0;
            }
          }
        }
      }
    }
  }
  if ((*(int **)(param_1 + 0x13c))[5] == 0x504c5952) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x13c) + 0x78))();
    if (iVar1 != 0) {
      return 0;
    }
  }
  iVar1 = entCDT_REFINE_EXCL::IsInclInst((entCDT_REFINE_EXCL *)this,param_1);
  return iVar1;
}




/* from: player.cpp
   addr: 00422570 */

int __thiscall plrCDT_REFINE::IsInclObj(plrCDT_REFINE *this,objOBJ *param_1)

{
  uint uVar1;
  char *pcVar2;
  
  if (*(char **)(param_1 + 0x18) != (char *)0x0) {
    pcVar2 = strstr(*(char **)(param_1 + 0x18),s__plrc);
    if (pcVar2 != (char *)0x0) {
      return 1;
    }
  }
  uVar1 = *(uint *)(param_1 + 8);
  if ((((uVar1 & 0x1f) == 0) || ((uVar1 & 0x10000) != 0)) && ((uVar1 & 0x40000) == 0)) {
    return 1;
  }
  return 0;
}




/* from: player.cpp
   addr: 004225C0 */

int __thiscall plrCDT_REFINE_BUTTON::IsInclInst(plrCDT_REFINE_BUTTON *this,animINST *param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x13c) != 0) && (*(int *)(*(int *)(param_1 + 0x13c) + 0x14) != 0x4254544e)
     ) {
    return 0;
  }
  iVar1 = cdtREFINE::IsInclInst((cdtREFINE *)this,param_1);
  return iVar1;
}




/* from: player.cpp
   addr: 004225F0 */

int __thiscall plrCDT_REFINE_NPC::IsInclInst(plrCDT_REFINE_NPC *this,animINST *param_1)

{
  entENTITY *peVar1;
  int iVar2;
  
  peVar1 = *(entENTITY **)(param_1 + 0x13c);
  if ((peVar1 != (entENTITY *)0x0) && (*(int *)(peVar1 + 0x14) != 0x244e5043)) {
    return 0;
  }
  iVar2 = aiIsNPCDead(peVar1,(int *)0x0);
  if (iVar2 != 0) {
    return 0;
  }
  iVar2 = cdtREFINE::IsInclInst((cdtREFINE *)this,param_1);
  return iVar2;
}




/* from: player.cpp
   addr: 00422640 */

int __thiscall objFILTER_HIDDEN_NAME::IsUse(objFILTER_HIDDEN_NAME *this,objOBJ *param_1)

{
  char *pcVar1;
  
  if (((byte)param_1[8] & 8) == 0) {
    pcVar1 = strstr(*(char **)(param_1 + 0x18),*(char **)(this + 4));
    if (pcVar1 != (char *)0x0) {
      return 1;
    }
  }
  return 0;
}




/* from: player.cpp
   addr: 00422670 */

int __thiscall gsINP_SYSTEM::IsOn(gsINP_SYSTEM *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x40);
  if ((*(int *)(iVar1 + 8) <= param_1) && (param_1 < *(int *)(iVar1 + 0xc))) {
    return *(uint *)(*(int *)(iVar1 + 4) + (param_1 - *(int *)(iVar1 + 8)) * 0x9c) & 1;
  }
  return 0;
}




/* from: player.cpp
   addr: 004226A0 */

int __thiscall gsINP_SYSTEM::IsToggled(gsINP_SYSTEM *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x40);
  if ((*(int *)(iVar1 + 8) <= param_1) && (param_1 < *(int *)(iVar1 + 0xc))) {
    return *(uint *)(*(int *)(iVar1 + 4) + (param_1 - *(int *)(iVar1 + 8)) * 0x9c) & 2;
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: player.cpp
   addr: 004226D0 */

float __thiscall gsINP_SYSTEM::Power(gsINP_SYSTEM *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x40);
  if ((*(int *)(iVar1 + 8) <= param_1) && (param_1 < *(int *)(iVar1 + 0xc))) {
    return *(float *)(*(int *)(iVar1 + 4) + 0x44 + (param_1 - *(int *)(iVar1 + 8)) * 0x9c);
  }
  return ___real_00000000;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: player.cpp
   addr: 00422730 */

void __thiscall plrPLAYER_COMMON::GetSpeed(plrPLAYER_COMMON *this,m3dV *param_1)

{
  *(undefined4 *)param_1 = _m3dVZero;
  *(undefined4 *)(param_1 + 4) = DAT_00963740;
  *(undefined4 *)(param_1 + 8) = DAT_00963744;
  return;
}




/* from: player.cpp
   addr: 00422760 */

void * __thiscall
plrPLAYER_COMMON::_scalar_deleting_destructor_(plrPLAYER_COMMON *this,uint param_1)

{
  plgsACTION::~plgsACTION((plgsACTION *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: player.cpp
   addr: 00422780 */

int __thiscall plrPLAYER::GetFloorInfo(plrPLAYER *this,cdtINFO *param_1)

{
  int iVar1;
  plrPLAYER *ppVar2;
  
  ppVar2 = this + 0x30b;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)param_1 = *(undefined4 *)ppVar2;
    ppVar2 = ppVar2 + 4;
    param_1 = param_1 + 4;
  }
  return 1;
}




/* from: player.cpp
   addr: 004227A0 */

void __thiscall plrPLAYER::GetSpeed(plrPLAYER *this,m3dV *param_1)

{
  *(undefined4 *)param_1 = *(undefined4 *)(this + 0x2f7);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(this + 0x2fb);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(this + 0x2ff);
  return;
}
