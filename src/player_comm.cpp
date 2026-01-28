
/* from: player_comm.cpp
   addr: 00422A70 */

int __fastcall plrCommInit(void)

{
  int iVar1;
  
  iVar1 = sncLinkSndListData(0x13,(sncSOUND_DESCR_3D *)&DAT_00603628);
  return (uint)(iVar1 != 0);
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: player_comm.cpp
   addr: 00422AA0 */

plrSYNC_DATA * __fastcall plrPLAYER_COMMON::GetPlrSyncDataStorage(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((DAT_00603de0 & 1) == 0) {
    DAT_00603de0 = DAT_00603de0 | 1;
    DAT_00603de8._1_1_ = 0x40;
    DAT_00603de8._0_1_ = 0;
    puVar1 = &DAT_00603df8;
    iVar2 = 10;
    do {
      *puVar1 = 0;
      puVar1 = puVar1 + 4;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    _DAT_00603e8c = 0;
    DAT_00603ea0 = 0xffffffff;
    DAT_00603ea8 = 0xffffffff;
    _DAT_00603e90 = 0;
    DAT_00603e94 = 0xbf800000;
    DAT_00603e98 = 0xbf800000;
    DAT_00603e9c = 0;
    DAT_00603ea4 = 0;
    puVar1 = &DAT_00603eb4;
    iVar2 = 0xb;
    do {
      puVar1[-2] = 0;
      puVar1[-1] = 0x3f800000;
      *puVar1 = 0;
      puVar1 = puVar1 + 3;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    _DAT_00603f30 = _m3dVZero;
    _DAT_00603f34 = DAT_00963740;
    _DAT_00603f38 = DAT_00963744;
    puVar1 = &DAT_00603f3c;
    iVar2 = 3;
    do {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = puVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    DAT_00603f54 = 0;
    DAT_00603de8._2_2_ = 0x180;
    DAT_00603f58 = 0;
    DAT_00603f5c = 0;
    _DAT_00603f64 = 0;
    atexit((_func_4879 *)&__E45);
  }
  return (plrSYNC_DATA *)&DAT_00603de8;
}




/* from: player_comm.cpp
   addr: 00422BB0 */

int __thiscall plrPLAYER_COMMON::SetupAniSystem(plrPLAYER_COMMON *this)

{
  char cVar1;
  animTPL *this_00;
  int iVar2;
  animSYSTEM_GROUP *paVar3;
  undefined4 *puVar4;
  char *pcVar5;
  objOBJ *poVar6;
  int iVar7;
  char *pcVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  animSEQ *paVar13;
  
  this_00 = *(animTPL **)(*(int *)(this + 0xbc) + 0x138);
  paVar3 = (animSYSTEM_GROUP *)operator_new(0x20);
  if ((paVar3 != (animSYSTEM_GROUP *)0x0) &&
     (paVar3 = (animSYSTEM_GROUP *)animSYSTEM_GROUP::animSYSTEM_GROUP(paVar3,0x76,5,2),
     paVar3 != (animSYSTEM_GROUP *)0x0)) {
    *(animSYSTEM_GROUP **)(this_00 + 0xa4) = paVar3;
    animSYSTEM_GROUP::DeclareGroupSeq(paVar3,1,1);
    animSYSTEM_GROUP::DeclareGroupSeq(paVar3,7,2);
    animSYSTEM_GROUP::DeclareGroupSeq(paVar3,0x12,2);
    animSYSTEM_GROUP::DeclareGroupSeq(paVar3,0x1d,1);
    animSYSTEM_GROUP::DeclareGroupSeq(paVar3,0x23,2);
    animSYSTEM_GROUP::DeclareGroupSeq(paVar3,0x2e,1);
    animSYSTEM_GROUP::DeclareGroupSeq(paVar3,0x34,1);
    animSYSTEM_GROUP::DeclareGroupSeq(paVar3,0x3a,1);
    animSYSTEM_GROUP::DeclareGroupSeq(paVar3,0x40,1);
    animSYSTEM_GROUP::DeclareGroupSeq(paVar3,0x46,1);
    animSYSTEM_GROUP::DeclareGroupSeq(paVar3,0x58,1);
    animSYSTEM_GROUP::DeclareGroupSeq(paVar3,0x4c,1);
    animSYSTEM_GROUP::DeclareGroupSeq(paVar3,0x52,1);
    animSYSTEM_GROUP::DeclareGroupSeq(paVar3,0x5e,1);
    animSYSTEM_GROUP::DeclareGroupSeq(paVar3,100,1);
    animSYSTEM_GROUP::DeclareGroupSeq(paVar3,0x6a,1);
    animSYSTEM_GROUP::DeclareGroupSeq(paVar3,0x70,1);
    animSYSTEM_GROUP::SetGroupSuffix(paVar3,0,s__SHOULDER);
    animSYSTEM_GROUP::SetGroupSuffix(paVar3,1,s__HIP);
    animSYSTEM_GROUP::SetGroupSuffix(paVar3,2,s__HAND);
    animSYSTEM_GROUP::SetGroupSuffix(paVar3,3,s__SHOVEL);
    animSYSTEM_GROUP::SetGroupSuffix(paVar3,4,s__BOMB);
    (**(code **)(*(int *)paVar3 + 0xc))(0,0,1,0xffffffff);
    (**(code **)(*(int *)paVar3 + 0xc))(1,0,1,0xffffffff);
    (**(code **)(*(int *)paVar3 + 0x14))(2);
    (**(code **)(*(int *)paVar3 + 0x18))(8,0xd);
    (**(code **)(*(int *)paVar3 + 0x18))(0x13,0x18);
    (**(code **)(*(int *)paVar3 + 0x1c))(8,0xd,0x13,0x18,0);
    (**(code **)(*(int *)paVar3 + 4))(7,1,0,2,1);
    (**(code **)(*(int *)paVar3 + 0xc))(0x1d,0,0,0xffffffff);
    (**(code **)(*(int *)paVar3 + 4))(0x1d,0x1d,2,0x1d,1);
    (**(code **)(*(int *)paVar3 + 0xc))(0x58,0,0,0xffffffff);
    (**(code **)(*(int *)paVar3 + 4))(0x58,0x58,2,0x58,1);
    (**(code **)(*(int *)paVar3 + 4))(7,0x23,0,0x29,1);
    (**(code **)(*(int *)paVar3 + 4))(0x12,0x23,0,0x29,1);
    (**(code **)(*(int *)paVar3 + 4))(1,0x23,0,0x24,1);
    (**(code **)(*(int *)paVar3 + 4))(0x24,0x23,1,0x29,0);
    (**(code **)(*(int *)paVar3 + 4))(0x29,0x23,2,0x29,0);
    (**(code **)(*(int *)paVar3 + 4))(0x2e,0x23,1,0x24,1);
    (**(code **)(*(int *)paVar3 + 4))(0x23,0x2e,1,0x2f,0);
    (**(code **)(*(int *)paVar3 + 4))(0x2e,0x2e,2,0x2f,0);
    (**(code **)(*(int *)paVar3 + 4))(0x24,1,1,0x29,1);
    (**(code **)(*(int *)paVar3 + 4))(0x24,7,1,0x29,1);
    (**(code **)(*(int *)paVar3 + 4))(0x24,0x12,1,0x29,1);
    (**(code **)(*(int *)paVar3 + 4))(0x29,1,0,0x2f,1);
    (**(code **)(*(int *)paVar3 + 4))(0x29,7,0,0xd,1);
    (**(code **)(*(int *)paVar3 + 4))(0x29,0x12,0,0x18,1);
    (**(code **)(*(int *)paVar3 + 4))(0x2e,1,1,2,1);
    (**(code **)(*(int *)paVar3 + 4))(0x2e,7,1,8,1);
    (**(code **)(*(int *)paVar3 + 4))(0x2e,0x12,1,8,1);
    (**(code **)(*(int *)paVar3 + 0xc))(0x34,0,1,0xffffffff);
    (**(code **)(*(int *)paVar3 + 0xc))(0x3a,0,1,0xffffffff);
    (**(code **)(*(int *)paVar3 + 4))(0x35,1,1,2,0);
    (**(code **)(*(int *)paVar3 + 4))(0x3b,1,1,2,0);
    (**(code **)(*(int *)paVar3 + 0x14))(0x35);
    (**(code **)(*(int *)paVar3 + 0x14))(0x3b);
    (**(code **)(*(int *)paVar3 + 0xc))(0x40,0,0,0xffffffff);
    (**(code **)(*(int *)paVar3 + 0xc))(0x47,0,1,0xffffffff);
    (**(code **)(*(int *)paVar3 + 0xc))(0x52,0,1,0xffffffff);
    (**(code **)(*(int *)paVar3 + 0xc))(0x4c,0,1,0xffffffff);
    (**(code **)(*(int *)paVar3 + 0x14))(0x4d);
    (**(code **)(*(int *)paVar3 + 0x14))(0x53);
    (**(code **)(*(int *)paVar3 + 0xc))(0x6a,0,1,0xffffffff);
    (**(code **)(*(int *)paVar3 + 0xc))(0x70,0,1,0xffffffff);
    (**(code **)(*(int *)paVar3 + 4))(0x6a,1,1,2,1);
    paVar13 = (animSEQ *)0x1;
    (**(code **)(*(int *)paVar3 + 4))(0x70,1,1,2,1);
    (**(code **)(*(int *)paVar3 + 0x14))(0x4d);
    (**(code **)(*(int *)paVar3 + 0x14))(0x53);
    if (*(animSEQ **)(this_00 + 0x90) == (animSEQ *)0x0) {
      iVar12 = 0;
    }
    else {
      iVar12 = *(int *)(this_00 + 0x8c);
      paVar13 = *(animSEQ **)(this_00 + 0x90);
    }
    iVar10 = 0x79;
    *(undefined4 *)(this_00 + 0x8c) = 0x79;
    puVar4 = (undefined4 *)operator_new(0x404c);
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      *puVar4 = 0x79;
      puVar4 = puVar4 + 1;
      puVar9 = puVar4;
      do {
        puVar11 = puVar9;
        for (iVar7 = 0x22; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar11 = 0;
          puVar11 = puVar11 + 1;
        }
        puVar9[0x20] = 2;
        iVar10 = iVar10 + -1;
        puVar9 = puVar9 + 0x22;
      } while (iVar10 != 0);
    }
    *(undefined4 **)(this_00 + 0x90) = puVar4;
    _entAnimSetSeqGroupName(this_00,0,s_PLR_SEQ_UNUSED);
    _entAnimSetSeqGroupName(this_00,2,s_PLR_SEQ_IDLE1);
    _entAnimSetSeqGroupName(this_00,8,s_PLR_SEQ_RUN_1);
    _entAnimSetSeqGroupName(this_00,0xd,s_PLR_SEQ_RUN_2);
    _entAnimSetSeqGroupName(this_00,0x13,s_PLR_SEQ_RUN_BACK_1);
    _entAnimSetSeqGroupName(this_00,0x18,s_PLR_SEQ_RUN_BACK_2);
    _entAnimSetSeqGroupName(this_00,0x1e,s_PLR_SEQ_DEATH);
    _entAnimSetSeqGroupName(this_00,0x24,s_PLR_SEQ_JUMP_START);
    _entAnimSetSeqGroupName(this_00,0x29,s_PLR_SEQ_JUMP_FLY);
    _entAnimSetSeqGroupName(this_00,0x2f,s_PLR_SEQ_JUMP_END);
    _entAnimSetSeqGroupName(this_00,0x35,s_PLR_SEQ_TURN_LEFT);
    _entAnimSetSeqGroupName(this_00,0x3b,s_PLR_SEQ_TURN_RIGHT);
    _entAnimSetSeqGroupName(this_00,0x41,s_PLR_SEQ_GET_POWER);
    _entAnimSetSeqGroupName(this_00,0x47,s_PLR_SEQ_SWIMMING);
    _entAnimSetSeqGroupName(this_00,0x4d,s_PLR_SEQ_CROUCH);
    _entAnimSetSeqGroupName(this_00,0x53,s_PLR_SEQ_CROUCH_IDLE);
    _entAnimSetSeqGroupName(this_00,0x59,s_PLR_SEQ_DROWNING);
    _entAnimSetSeqGroupName(this_00,0x5f,s_PLR_SEQ_FALLING);
    _entAnimSetSeqGroupName(this_00,0x65,s_PLR_SEQ_LANDING);
    _entAnimSetSeqGroupName(this_00,0x6b,s_PLR_SEQ_SLIGHTLY_WOUNDED);
    _entAnimSetSeqGroupName(this_00,0x71,s_PLR_SEQ_BADLY_WOUNDED);
    pcVar8 = s_ATTACK_SHOVEL;
    pcVar5 = (char *)(*(int *)(this_00 + 0x90) + 0x3f38);
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      *pcVar5 = cVar1;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    pcVar8 = s_ATTACK_BOMB;
    pcVar5 = (char *)(*(int *)(this_00 + 0x90) + 0x3fc0);
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      *pcVar5 = cVar1;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    entAnimAssignTplSeq(this_00,paVar13,iVar12);
    poVar6 = objFindName(*(objOBJ **)(this_00 + 0x88),s_LowBACK);
    iVar10 = animTPL::FindSeqName(this_00,s_ATTACK_SHOVEL);
    iVar12 = *(int *)(this_00 + 0x90);
    if (poVar6 == (objOBJ *)0x0) {
      iVar7 = 0;
    }
    else {
      iVar7 = (int)*(short *)(poVar6 + 0x1c);
    }
    puVar4 = *(undefined4 **)(paVar3 + 8);
    *puVar4 = 0x77;
    puVar4[1] = iVar7;
    puVar4[2] = 0x3dcccccd;
    puVar4[3] = iVar12 + iVar10 * 0x88;
    puVar4[4] = 4;
    poVar6 = objFindName(*(objOBJ **)(this_00 + 0x88),s_LowBACK);
    iVar10 = animTPL::FindSeqName(this_00,s_ATTACK_BOMB);
    iVar12 = *(int *)(this_00 + 0x90);
    if (poVar6 == (objOBJ *)0x0) {
      iVar7 = 0;
    }
    else {
      iVar7 = (int)*(short *)(poVar6 + 0x1c);
    }
    iVar2 = *(int *)(paVar3 + 8);
    *(undefined4 *)(iVar2 + 0x14) = 0x78;
    *(int *)(iVar2 + 0x18) = iVar7;
    *(undefined4 *)(iVar2 + 0x1c) = 0x3dcccccd;
    *(int *)(iVar2 + 0x20) = iVar12 + iVar10 * 0x88;
    *(undefined4 *)(iVar2 + 0x24) = 4;
    *(undefined4 *)(*(int *)(this_00 + 0x90) + 0x40) = 0;
    *(undefined4 *)(*(int *)(this_00 + 0x90) + 0x44) = 0x3f800000;
    *(undefined4 *)(*(int *)(this_00 + 0x90) + 0x50) = 0x43fa0000;
    *(undefined4 *)(*(int *)(this_00 + 0x90) + 0x80) = 0;
    if (paVar13 != (animSEQ *)0x0) {
      operator_delete(paVar13 + -4);
    }
    return 1;
  }
  return 0;
}




/* from: player_comm.cpp
   addr: 004232C0 */

int __thiscall
plrPLAYER_COMMON::ProcessMsg
          (plrPLAYER_COMMON *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  int iVar1;
  
  if (param_1 < 0x3f4) {
    if (param_1 == 0x3f3) {
      (**(code **)(*(int *)this + 0xb4))();
      return 0;
    }
    if (param_1 < 0x3f0) {
      if (param_1 == 0x3ef) {
        (**(code **)(*(int *)this + 0xb8))();
        return 0;
      }
      if (param_1 == 1) {
        (**(code **)(*(int *)this + 0x80))();
        return 0;
      }
      if (param_1 == 2) {
        (**(code **)(*(int *)this + 0xac))();
        return 0;
      }
      if ((param_1 == 1000) &&
         (((iVar1 = _apCfgReadBool((void **)&DAT_00603620,s_Debug,s_Decompose4,(int *)&param_2),
           iVar1 == 0 || (param_2 == (void *)0x0)) || (DAT_008b6a88 < 0xb)))) {
        (**(code **)(*(int *)this + 0x88))();
        return 0;
      }
    }
    else {
      if (param_1 == 0x3f0) {
        (**(code **)(*(int *)this + 0xbc))();
        return 0;
      }
      if (param_1 == 0x3f1) {
        (**(code **)(*(int *)this + 0xb0))();
        return 0;
      }
    }
  }
  else {
    switch(param_1) {
    case 0x3f4:
      (**(code **)(*(int *)this + 0x84))();
      return 0;
    case 0x405:
      (**(code **)(*(int *)this + 0xcc))(param_2);
      break;
    case 0x40c:
      (**(code **)(*(int *)this + 0x90))(param_2);
      return 0;
    case 0x4c5:
      (**(code **)(*(int *)this + 0xc4))(param_2);
      return 0;
    case 0x4c6:
      (**(code **)(*(int *)this + 200))(param_2);
      return 0;
    case 0x4c7:
      (**(code **)(*(int *)this + 0xc0))(param_2);
      return 0;
    }
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: player_comm.cpp
   addr: 00423550 */

int __thiscall plrPLAYER_COMMON::ProcessINIT(plrPLAYER_COMMON *this)

{
  uint *puVar1;
  char *pcVar2;
  undefined4 uVar3;
  sncCHANNEL *this_00;
  int iVar4;
  void *pvVar5;
  int iVar6;
  entENTITY *peVar7;
  undefined1 *puVar8;
  plrPLAYER_COMMON *ppVar9;
  int local_5c;
  char *local_58 [11];
  char *local_2c [11];
  
  local_58[0] = s_pwp_svl;
  local_58[1] = s_pwp_clt;
  local_58[2] = s_pwp_stg;
  local_58[3] = s_pwp_mcg;
  local_58[4] = s_pwp_crb;
  local_58[5] = s_pwp_acd;
  local_58[6] = s_pwp_bsk;
  local_58[7] = s_pwp_mdg;
  local_58[8] = s_pwp_mng;
  local_58[9] = s_pwp_bmb;
  local_58[10] = s_pwp_amg;
  local_2c[0] = s_pwp_svl_item;
  local_2c[1] = s_pwp_clt_item;
  local_2c[2] = s_pwp_stg_item;
  local_2c[3] = s_pwp_mcg_item;
  local_2c[4] = s_pwp_crb_item;
  local_2c[5] = s_pwp_acd_item;
  local_2c[6] = s_pwp_bsk_item;
  local_2c[7] = &s_pwp_mdg_item;
  local_2c[8] = s_pwp_mng_item;
  local_2c[9] = s_pwp_bmb_item;
  local_2c[10] = s_pwp_amg_item;
  gsMP_CLIENT::Init((gsMP_CLIENT *)this);
  ppVar9 = this + 0x28b;
  *(uint *)(this + 0xb4) = *(uint *)(this + 0xb4) | 4;
  *(undefined4 *)(this + 0xf8) = 0;
  local_5c = 0;
  do {
    this_00 = (sncCHANNEL *)operator_new(0xbc);
    if (this_00 == (sncCHANNEL *)0x0) {
      this_00 = (sncCHANNEL *)0x0;
    }
    else {
      sncCHANNEL::sncCHANNEL(this_00);
      *(undefined4 *)(this_00 + 0x74) = _m3dVZero;
      *(undefined4 *)(this_00 + 0x78) = DAT_00963740;
      uVar3 = DAT_00963744;
      *(undefined4 *)(this_00 + 0x80) = 0;
      *(undefined ***)this_00 = &sncCHANNEL_3D::_vftable_;
      *(undefined4 *)(this_00 + 0x7c) = uVar3;
      *(undefined4 *)(this_00 + 0x84) = 0x41200000;
      *(undefined4 *)(this_00 + 0x88) = 0x41f00000;
      *(undefined4 *)(this_00 + 0x8c) = 0x43b40000;
      *(undefined4 *)(this_00 + 0x90) = 0x43b40000;
      *(undefined4 *)(this_00 + 0x94) = 0;
      *(undefined4 *)(this_00 + 0x98) = _m3dVZero;
      *(undefined4 *)(this_00 + 0x9c) = DAT_00963740;
      *(undefined4 *)(this_00 + 0xa0) = DAT_00963744;
      *(undefined4 *)(this_00 + 0xa4) = _m3dVZero;
      *(undefined4 *)(this_00 + 0xa8) = DAT_00963740;
      *(undefined4 *)(this_00 + 0xac) = DAT_00963744;
      *(undefined4 *)(this_00 + 0xb0) = _m3dVUnitZ;
      *(undefined4 *)(this_00 + 0xb4) = DAT_005f99a0;
      uVar3 = DAT_005f99a4;
      *(undefined ***)this_00 = &sncCHANNEL_SPH::_vftable_;
      *(undefined4 *)(this_00 + 0xb8) = uVar3;
    }
    *(sncCHANNEL **)ppVar9 = this_00;
    if (this_00 == (sncCHANNEL *)0x0) {
      return 0;
    }
    iVar4 = (**(code **)(*(int *)this + 0x110))();
    if (iVar4 == 0) {
      *(uint *)(*(int *)ppVar9 + 4) = *(uint *)(*(int *)ppVar9 + 4) | 1;
    }
    gsSND_SYSTEM::AddChannel(gsSysSound,*(sncCHANNEL **)ppVar9,(entIACTIVE_OBJ *)this,(objOBJ *)0x0)
    ;
    ppVar9 = ppVar9 + 4;
    local_5c = local_5c + 1;
  } while (local_5c < 3);
  pvVar5 = apCalloc(4,0xb);
  *(void **)(this + 0x23f) = pvVar5;
  if (pvVar5 != (void *)0x0) {
    iVar4 = 0;
    while( true ) {
      iVar6 = (**(code **)(*(int *)this + 0x110))();
      pcVar2 = *(char **)((int)local_58 + iVar4);
      if (iVar6 == 0) {
        peVar7 = entCreate(gsScenePtr,pcVar2,pcVar2,(animCREATE_DATA *)0x0,(void *)0x0,0);
        *(entENTITY **)(iVar4 + *(int *)(this + 0x23f)) = peVar7;
      }
      else {
        peVar7 = entCreate(gsScenePtr,pcVar2,*(char **)((int)local_2c + iVar4),
                           (animCREATE_DATA *)0x0,(void *)0x0,0);
        *(entENTITY **)(iVar4 + *(int *)(this + 0x23f)) = peVar7;
        puVar1 = (uint *)(*(int *)(*(int *)(this + 0x23f) + iVar4) + 0x193);
        *puVar1 = *puVar1 | 4;
      }
      if (*(int *)(iVar4 + *(int *)(this + 0x23f)) == 0) break;
      *(plrPLAYER_COMMON **)(*(int *)(iVar4 + *(int *)(this + 0x23f)) + 0x187) = this;
      (**(code **)(**(int **)(iVar4 + *(int *)(this + 0x23f)) + 0xa8))(0);
      iVar4 = iVar4 + 4;
      if (0x2b < iVar4) {
        *(uint *)(this + 0xb4) = *(uint *)(this + 0xb4) | 0x500;
        *(uint *)(this + 0xb8) = *(uint *)(this + 0xb8) | 4;
        this[0xfc] = (plrPLAYER_COMMON)0x4b;
        *(undefined4 *)(this + 0x24f) = 0;
        *(undefined4 *)(this + 0x253) = 0;
        *(undefined4 *)(this + 599) = 0;
        *(undefined4 *)(this + 0x25b) = 0;
        *(undefined4 *)(this + 0x24b) = 0x42b40000;
        *(undefined4 *)(this + 0x243) = 0;
        *(uint *)(*(int *)(this + 0xbc) + 4) = *(uint *)(*(int *)(this + 0xbc) + 4) | 0x10000000;
        puVar8 = (undefined1 *)operator_new(0x27);
        if (puVar8 == (undefined1 *)0x0) {
          *(undefined4 *)(this + 0x297) = 0;
          return 1;
        }
        *puVar8 = 0;
        puVar8[1] = 0x40;
        *(undefined4 *)(puVar8 + 4) = 0xffffff9d;
        puVar8[0xc] = 0xff;
        puVar8[0xd] = 0xf;
        puVar8[0xe] = 0;
        *(undefined4 *)(puVar8 + 0xf) = 0;
        *(undefined4 *)(puVar8 + 0x13) = 0;
        *(undefined4 *)(puVar8 + 0x23) = 0;
        *(undefined2 *)(puVar8 + 2) = 0x27;
        *(undefined1 **)(this + 0x297) = puVar8;
        return 1;
      }
    }
  }
  return 0;
}




/* from: player_comm.cpp
   addr: 004238B0 */

void __thiscall plrPLAYER_COMMON::ProcessTERM(plrPLAYER_COMMON *this)

{
  int iVar1;
  
  ReleaseTreasures(this,0);
  iVar1 = 0;
  do {
    if (*(msgADDR **)(iVar1 + *(int *)(this + 0x23f)) != (msgADDR *)0x0) {
      msgSYSTEM::PostMsg(&msgSystem,*(msgADDR **)(iVar1 + *(int *)(this + 0x23f)),2,(msgADDR *)0x0);
    }
    iVar1 = iVar1 + 4;
  } while (iVar1 < 0x2c);
  apFree(*(void **)(this + 0x23f));
  *(undefined4 *)(this + 0x23f) = 0;
  operator_delete(*(void **)(this + 0x297));
  *(undefined4 *)(this + 0x297) = 0;
  return;
}




/* from: player_comm.cpp
   addr: 00423920 */

int __thiscall plrPLAYER_COMMON::ProcessINIT_LEVEL(plrPLAYER_COMMON *this)

{
  plgsACTION::ProcessINIT_LEVEL((plgsACTION *)this);
  *(undefined4 *)(this + 0x287) = 0x42c80000;
  return 1;
}




/* from: player_comm.cpp
   addr: 00423940 */

int __thiscall plrPLAYER_COMMON::ProcessINIT_MAP(plrPLAYER_COMMON *this)

{
  m3dV *pmVar1;
  m3dV *pmVar2;
  m3dV local_18 [12];
  m3dV local_c [12];
  
  if (*(int *)(gsSysMP + 0x28) == 3) {
    animINST::GetPos(*(animINST **)(this + 0xbc),local_c);
    animINST::GetDir(*(animINST **)(this + 0xbc),local_18);
    pmVar2 = local_18;
    pmVar1 = local_c;
  }
  else {
    pmVar2 = (m3dV *)0x0;
    pmVar1 = (m3dV *)0x0;
  }
  (**(code **)(*(int *)this + 0x74))(pmVar1,pmVar2,1);
  if ((((byte)this[0x2a3] & 4) != 0) || (*(int *)(gsSysMP + 0x28) != 1)) {
    (**(code **)(*(int *)this + 0xf8))();
  }
  *(uint *)(this + 0x2a3) = *(uint *)(this + 0x2a3) & 0xfffffffb;
  *(undefined4 *)(this + 0x2b7) = 0;
  *(undefined4 *)(this + 699) = 0;
  *(undefined4 *)(this + 0x2bf) = 0;
  return 1;
}




/* from: player_comm.cpp
   addr: 004239E0 */

int __thiscall plrPLAYER_COMMON::ProcessINIT_GAME(plrPLAYER_COMMON *this)

{
  byte *pbVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  plrPLAYER_COMMON *ppVar6;
  
  uVar3 = *(uint *)(this + 0x88);
  iVar5 = 0;
  *(undefined4 *)(this + 0x29b) = 0;
  *(undefined4 *)(this + 0x29f) = 0;
  *(undefined4 *)(this + 0x2a3) = 0;
  do {
    puVar2 = (uint *)(*(int *)(*(int *)(this + 0x23f) + iVar5) + 0x88);
    *puVar2 = *puVar2 & 0xfffffff8;
    puVar2 = (uint *)(*(int *)(*(int *)(this + 0x23f) + iVar5) + 0x88);
    *puVar2 = *puVar2 | uVar3 & 7;
    iVar4 = *(int *)(*(int *)(*(int *)(this + 0x23f) + iVar5) + 0xbc);
    if (((byte)this[0x88] & 1) == 0) {
      puVar2 = (uint *)(iVar4 + 4);
      *puVar2 = *puVar2 | 0x1000;
    }
    else {
      pbVar1 = (byte *)(iVar4 + 5);
      *pbVar1 = *pbVar1 & 0xef;
    }
    iVar5 = iVar5 + 4;
  } while (iVar5 < 0x2c);
  ppVar6 = this + 0x2c7;
  *(undefined4 *)(this + 0x2ab) = 0;
  iVar5 = 3;
  do {
    *(undefined4 *)ppVar6 = 0;
    ppVar6 = ppVar6 + 8;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  *(undefined4 *)(this + 0x2af) = 0;
  *(undefined4 *)(this + 0x2b7) = 0;
  *(undefined4 *)(this + 699) = 0;
  *(undefined4 *)(this + 0x2bf) = 0;
  *(undefined4 *)(this + 0x2b3) = 0xffffffff;
  *(uint *)(this + 0x2a3) = *(uint *)(this + 0x2a3) | 4;
  return 1;
}




/* from: player_comm.cpp
   addr: 00423AA0 */

void __thiscall plrPLAYER_COMMON::SetDefaultValues(plrPLAYER_COMMON *this)

{
  plrPLAYER_COMMON *ppVar1;
  char *_Src;
  int iVar2;
  int unaff_EBP;
  int iVar3;
  
  if (*(int *)(this + 0x94) != 2) {
    *(uint *)(this + 0x29b) = *(uint *)(this + 0x29b) & 0xfffffffd;
    *(undefined4 *)(this + 0x287) = 0;
    *(undefined4 *)(this + 0xcc) = 0x42c80000;
    *(undefined4 *)(this + 0x2a7) = 0;
    *(undefined4 *)(this + 0x2ab) = 0;
    iVar2 = 0;
    do {
      (**(code **)(**(int **)(iVar2 + *(int *)(this + 0x23f)) + 0xa8))();
      wpnWEAPON::SetAmmo(*(wpnWEAPON **)(iVar2 + *(int *)(this + 0x23f)),0.0);
      iVar3 = iVar2 + 4;
      *(undefined4 *)(*(int *)(iVar2 + *(int *)(this + 0x23f)) + 399) = 0xffffffff;
      iVar2 = *(int *)(*(int *)(iVar2 + *(int *)(this + 0x23f)) + 0xbc);
      *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) | 1;
      iVar2 = iVar3;
    } while (iVar3 < 0x2c);
    iVar3 = 1;
    (**(code **)(**(int **)(*(int *)(this + 0x23f) + 4) + 0xa8))();
    wpnWEAPON::SetAmmo(*(wpnWEAPON **)(*(int *)(this + 0x23f) + 4),14.0);
    pwpWEAPON::Recharge(*(pwpWEAPON **)(*(int *)(this + 0x23f) + 4));
    (**(code **)(*(int *)this + 0xfc))(1,0);
    (**(code **)(*(int *)**(undefined4 **)(this + 0x23f) + 0xa8))(1);
    wpnWEAPON::SetAmmo((wpnWEAPON *)**(undefined4 **)(this + 0x23f),1.0);
    ppVar1 = this + 0x2cb;
    iVar2 = 3;
    do {
      *(undefined4 *)(ppVar1 + -4) = 0;
      *(undefined4 *)ppVar1 = 0;
      ppVar1 = ppVar1 + 8;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    _Src = strstr((char *)&gsSceneFullName,s_lev_);
    if (_Src != (char *)0x0) {
      iVar2 = sscanf(_Src,s_lev__d__d,&stack0xffffffe8,&stack0xffffffec);
      if (iVar2 == 2) {
        iVar2 = unaff_EBP + iVar3 * 10;
        if (0x1e < iVar2) {
          (**(code **)(**(int **)(*(int *)(this + 0x23f) + 8) + 0xa8))(1);
          wpnWEAPON::SetAmmo(*(wpnWEAPON **)(*(int *)(this + 0x23f) + 8),200.0);
        }
        if (0x1f < iVar2) {
          (**(code **)(**(int **)(*(int *)(this + 0x23f) + 0xc) + 0xa8))(1);
          wpnWEAPON::SetAmmo(*(wpnWEAPON **)(*(int *)(this + 0x23f) + 0xc),1000.0);
          (**(code **)(**(int **)(*(int *)(this + 0x23f) + 0x10) + 0xa8))(1);
          wpnWEAPON::SetAmmo(*(wpnWEAPON **)(*(int *)(this + 0x23f) + 0x10),50.0);
          (**(code **)(**(int **)(*(int *)(this + 0x23f) + 0x18) + 0xa8))(1);
          wpnWEAPON::SetAmmo(*(wpnWEAPON **)(*(int *)(this + 0x23f) + 0x18),100.0);
        }
      }
    }
  }
  return;
}




/* from: player_comm.cpp
   addr: 00423CB0 */

void __thiscall plrPLAYER_COMMON::ProcessFRAME(plrPLAYER_COMMON *this)

{
  int iVar1;
  int iVar2;
  plrPLAYER_COMMON *local_4;
  
  local_4 = this;
  _apCfgReadInt((void **)&DAT_00603618,s_GameOpt,s_AutoWeapon,(int *)&local_4);
  if (((int)local_4 < 0) || (3 < (int)local_4)) {
    local_4 = (plrPLAYER_COMMON *)0x0;
  }
  *(uint *)(this + 0x2df) =
       ((int)local_4 * 2 ^ *(uint *)(this + 0x2df)) & 6 ^ *(uint *)(this + 0x2df);
  if ((((*(int *)(wrSysGO + 0x94) == 3) && (*(int *)(gsSysMP + 0x28) != 3)) &&
      (*(int *)(this + 0x94) != 2)) && (*(int *)(this + 0x2b3) == -1)) {
    iVar1 = *(int *)this;
    iVar2 = wrGO_SYSTEM::SelectDefaultTeam(wrSysGO,this);
    (**(code **)(iVar1 + 0x118))(iVar2);
  }
  if ((wrSysStat != (wrSTAT_SYSTEM *)0x0) && (*(int *)(this + 0x94) != 2)) {
    wrSTAT_SYSTEM::Notify_PlrUseWpn
              (wrSysStat,this,*(entENTITY **)(*(int *)(this + 0x23f) + *(int *)(this + 0x243) * 4));
  }
  plgsACTION::ProcessFRAME((plgsACTION *)this);
  *(float *)(this + 0x287) = gsElapsedTime + *(float *)(this + 0x287);
  UpdateSound(this);
  return;
}




/* from: player_comm.cpp
   addr: 00423D90 */

void __thiscall plrPLAYER_COMMON::ProcessMP_NOTIFY(plrPLAYER_COMMON *this,gsEVENT *param_1)

{
  float *pfVar1;
  int *piVar2;
  short sVar3;
  int iVar4;
  undefined4 *puVar5;
  plrPLAYER_COMMON *ppVar6;
  uint uVar7;
  int iVar8;
  float *pfVar9;
  gsEVENT *pgVar10;
  
  plgsACTION::ProcessMP_NOTIFY((plgsACTION *)this,param_1);
  switch(*(undefined4 *)(param_1 + 4)) {
  case 10:
    (**(code **)(*(int *)this + 0x118))(*(undefined4 *)(param_1 + 8));
    break;
  case 0xc:
    (**(code **)(*(int *)this + 0xf0))(0,param_1 + 8);
    break;
  case 0xd:
    (**(code **)(*(int *)this + 0xf0))(1,param_1 + 8);
    break;
  case 0xffffff9c:
    iVar4 = *(int *)(param_1 + 8);
    iVar8 = 0;
    pfVar9 = (float *)(iVar4 + 200);
    do {
      (**(code **)(**(int **)(iVar8 + *(int *)(this + 0x23f)) + 0xa8))(pfVar9[-1]);
      wpnWEAPON::SetAmmo(*(wpnWEAPON **)(iVar8 + *(int *)(this + 0x23f)),*pfVar9);
      pfVar1 = pfVar9 + 1;
      pfVar9 = pfVar9 + 3;
      piVar2 = (int *)(iVar8 + *(int *)(this + 0x23f));
      iVar8 = iVar8 + 4;
      *(float *)(*piVar2 + 399) = *pfVar1;
    } while (iVar8 < 0x2c);
    ppVar6 = this + 0x2cb;
    iVar8 = 3;
    puVar5 = (undefined4 *)(iVar4 + 0x158);
    do {
      *(undefined4 *)(ppVar6 + -4) = puVar5[-1];
      *(undefined4 *)ppVar6 = *puVar5;
      ppVar6 = ppVar6 + 8;
      iVar8 = iVar8 + -1;
      puVar5 = puVar5 + 2;
    } while (iVar8 != 0);
    (**(code **)(*(int *)this + 0xfc))(*(undefined4 *)(iVar4 + 0xc0),0);
    *(undefined4 *)(this + 0xcc) = *(undefined4 *)(iVar4 + 0xac);
    *(undefined4 *)(this + 0x2a7) = *(undefined4 *)(iVar4 + 0xb0);
    *(undefined4 *)(this + 0x29b) = *(undefined4 *)(iVar4 + 0xb4);
    *(undefined4 *)(this + 0x2ab) = *(undefined4 *)(iVar4 + 0xbc);
    (**(code **)(*(int *)this + 0x114))(*(undefined4 *)(iVar4 + 0xb8));
    *(undefined4 *)(this + 0x2b7) = *(undefined4 *)(iVar4 + 0x16c);
    *(undefined4 *)(this + 699) = *(undefined4 *)(iVar4 + 0x170);
    *(undefined4 *)(this + 0x2bf) = *(undefined4 *)(iVar4 + 0x174);
    *(undefined4 *)(this + 0x2b3) = *(undefined4 *)(iVar4 + 0x178);
    break;
  case 0xffffffa1:
    (**(code **)(*(int *)this + 0x74))(param_1 + 8,param_1 + 0x14,1);
  }
  if ((*(int *)(gsSysMP + 0x28) != 1) && (((byte)this[0x88] & 4) != 0)) {
    if (*(int *)(param_1 + 4) == -99) {
      sVar3 = *(short *)(param_1 + 2);
      pgVar10 = *(gsEVENT **)(this + 0x297);
      for (uVar7 = (uint)(int)sVar3 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pgVar10 = *(undefined4 *)param_1;
        param_1 = param_1 + 4;
        pgVar10 = pgVar10 + 4;
      }
      for (uVar7 = (int)sVar3 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pgVar10 = *param_1;
        param_1 = param_1 + 1;
        pgVar10 = pgVar10 + 1;
      }
      return;
    }
    gsMP_SERVER::SendMsgClientAll
              (gsSysServer,(entIACTIVE_OBJ *)this,0x40c,(msgDATA *)param_1,0x20000,0xffffffff,
               0xfffffffd);
  }
  return;
}




/* from: player_comm.cpp
   addr: 00423FE0 */

void __thiscall
plrPLAYER_COMMON::ProcessMP_CLIENT_READY(plrPLAYER_COMMON *this,gsMSG_MP_CLIENT_READY *param_1)

{
  if ((param_1 != (gsMSG_MP_CLIENT_READY *)0x0) && (*(int *)(param_1 + 8) != 0)) {
    msgSYSTEM::SendAll(&msgSystem,0x406,this,(msgADDR *)0x0);
    if (*(int *)(param_1 + 8) != 0) {
      *(uint *)(this + 0x2a3) = *(uint *)(this + 0x2a3) | 8;
      return;
    }
  }
  *(uint *)(this + 0x2a3) = *(uint *)(this + 0x2a3) & 0xfffffff7;
  return;
}




/* from: player_comm.cpp
   addr: 00424040 */

gsMSG_MP_UPD_STATE * __thiscall plrPLAYER_COMMON::GetMP_UPD_STATE(plrPLAYER_COMMON *this)

{
  *(uint *)(this + 0x88) = *(uint *)(this + 0x88) & 0xffffffef;
  return *(gsMSG_MP_UPD_STATE **)(this + 0x297);
}




/* from: player_comm.cpp
   addr: 00424060 */

int __thiscall plrPLAYER_COMMON::Pick(plrPLAYER_COMMON *this,entENTITY *param_1)

{
  int iVar1;
  undefined1 local_c;
  undefined1 local_b;
  undefined2 local_a;
  undefined4 local_8;
  undefined4 local_4;
  
  local_c = 0;
  local_b = 0x40;
  local_a = 0xc;
  if (*(int *)(param_1 + 0x14) != 0x2449544d) {
    return 0;
  }
  local_8 = *(undefined4 *)(param_1 + 0x94);
  local_4 = *(undefined4 *)(param_1 + 0x153);
  iVar1 = (**(code **)(*(int *)this + 0xc0))(&local_c);
  return iVar1;
}




/* from: player_comm.cpp
   addr: 004240B0 */

void __thiscall plrPLAYER_COMMON::ProcessSHOOT(plrPLAYER_COMMON *this,void *param_1)

{
  int *piVar1;
  int iVar2;
  entENTITY *peVar3;
  msgDATA local_14;
  undefined1 local_13;
  undefined2 local_12;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar2 = *(int *)((int)param_1 + 4);
  if (((-1 < iVar2) && (iVar2 < 0xb)) &&
     (peVar3 = *(entENTITY **)(*(int *)(this + 0x23f) + iVar2 * 4), peVar3 != (entENTITY *)0x0)) {
    if (wrSysStat != (wrSTAT_SYSTEM *)0x0) {
      wrSTAT_SYSTEM::Notify_PlrShoot(wrSysStat,this,peVar3);
    }
    msgSYSTEM::SendMsg(&msgSystem,
                       *(msgADDR **)(*(int *)(this + 0x23f) + *(int *)((int)param_1 + 4) * 4),0x4c6,
                       param_1,(msgADDR *)0x0);
  }
  if (((byte)this[0x88] & 4) != 0) {
    local_10 = 4;
    local_c = *(int *)(this + 0x243);
    local_14 = (msgDATA)0x0;
    local_13 = 0x40;
    piVar1 = (int *)(*(int *)(this + 0x23f) + local_c * 4);
    local_12 = 0x14;
    local_8 = *(undefined4 *)(*piVar1 + 0x17f);
    local_4 = *(undefined4 *)(*piVar1 + 399);
    gsMP_SERVER::SendMsgClientAll
              (gsSysServer,(entIACTIVE_OBJ *)this,0x40c,&local_14,0x20000,0xffffffff,0xfffffffd);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: player_comm.cpp
   addr: 00424190 */

void __thiscall plrPLAYER_COMMON::ProcessCDT_FIREABLE(plrPLAYER_COMMON *this,dmgDAMAGE *param_1)

{
  int iVar1;
  float fVar2;
  float local_8;
  float local_4;
  
  if (((((byte)this[0x29b] & 4) == 0) && (((byte)this[0x88] & 4) != 0)) &&
     (iVar1 = IsIgnoreDmg(this,param_1), iVar1 == 0)) {
    fVar2 = wrGO_SYSTEM::GetPlrDmgScale(wrSysGO);
    fVar2 = fVar2 * *(float *)(param_1 + 8);
    local_8 = 0.0;
    local_4 = 0.0;
    *(float *)(param_1 + 8) = fVar2;
    if (*(int *)(param_1 + 4) != 4) {
      local_8 = fVar2;
      if (*(float *)(this + 0x2a7) < fVar2) {
        local_8 = *(float *)(this + 0x2a7);
      }
      local_4 = ___real_3eaaaaab * local_8;
      fVar2 = fVar2 - local_8;
    }
    *(float *)(this + 0x2a7) = *(float *)(this + 0x2a7) - local_8;
    *(float *)(this + 0xcc) = *(float *)(this + 0xcc) - (fVar2 + local_4);
    (**(code **)(*(int *)this + 0x104))(param_1);
    fVar2 = wrGO_SYSTEM::GetPlrDmgScale(wrSysGO);
    *(float *)(param_1 + 8) = *(float *)(param_1 + 8) / fVar2;
  }
  return;
}




/* from: player_comm.cpp
   addr: 00424270 */

int __thiscall plrPLAYER_COMMON::IsIgnoreDmg(plrPLAYER_COMMON *this,dmgDAMAGE *param_1)

{
  wrGO_SYSTEM *pwVar1;
  int iVar2;
  entIACTIVE_OBJ *peVar3;
  
  if ((*(uint *)(this + 0x29b) & 4) != 0) {
    return 1;
  }
  if ((((byte)this[0x88] & 4) != 0) && (*(int *)(param_1 + 4) != 4)) {
    if (*(int *)(this + 0x2cf) == 2) {
      return 1;
    }
    iVar2 = *(int *)(wrSysGO + 0x94);
    if (((iVar2 == 2) || (iVar2 == 0)) && ((*(uint *)(this + 0x29b) & 0x400000) != 0)) {
      return 1;
    }
    pwVar1 = wrSysGO + 0x98;
    if ((*(int *)(wrSysGO + 0x9c) == 0) && (*(int *)(param_1 + 4) == 0)) {
      if ((iVar2 == 2) && (*(int *)(this + 0x8c) != *(int *)(param_1 + 0xc))) {
        return 1;
      }
      if (((iVar2 == 3) &&
          (peVar3 = gsMP_SYSTEM::FindEnt(gsSysMP,*(int *)(param_1 + 0xc),0),
          peVar3 != (entIACTIVE_OBJ *)0x0)) &&
         ((*(int *)(peVar3 + 0x14) == 0x504c5952 &&
          ((*(int *)(this + 0x2b3) == *(int *)(peVar3 + 0x2b3) &&
           (*(int *)(this + 0x8c) != *(int *)(param_1 + 0xc))))))) {
        return 1;
      }
    }
    if (((*(int *)(wrSysGO + 0x94) == 1) || (*(int *)(wrSysGO + 0x94) == 3)) &&
       (*(float *)(this + 0x287) < *(float *)pwVar1)) {
      return 1;
    }
  }
  return 0;
}




/* from: player_comm.cpp
   addr: 004243B0 */

int __thiscall plrPLAYER_COMMON::ProcessPICK(plrPLAYER_COMMON *this,gssMSG_PICK *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)this + 0x78))();
  if (iVar1 != 0) {
    return 0;
  }
  if (((byte)this[0x2a3] & 8) == 0) {
    return 0;
  }
  iVar1 = 0;
  switch(*(undefined4 *)(param_1 + 4)) {
  case 2:
    iVar1 = (**(code **)(*(int *)this + 0xd0))(2,*(undefined4 *)(param_1 + 8));
    break;
  case 3:
    iVar1 = (**(code **)(*(int *)this + 0xd0))(3,*(undefined4 *)(param_1 + 8));
    break;
  case 4:
    iVar1 = (**(code **)(*(int *)this + 0xd0))(4,*(undefined4 *)(param_1 + 8));
    break;
  case 5:
    iVar1 = (**(code **)(*(int *)this + 0xd0))(5,*(undefined4 *)(param_1 + 8));
    break;
  case 6:
    iVar1 = (**(code **)(*(int *)this + 0xd0))(6,*(undefined4 *)(param_1 + 8));
    break;
  case 7:
    iVar1 = (**(code **)(*(int *)this + 0xd0))(7,*(undefined4 *)(param_1 + 8));
    break;
  case 8:
    iVar1 = (**(code **)(*(int *)this + 0xd0))(8,*(undefined4 *)(param_1 + 8));
    break;
  case 9:
    iVar1 = (**(code **)(*(int *)this + 0xd0))(9,*(undefined4 *)(param_1 + 8));
    break;
  case 10:
    iVar1 = (**(code **)(*(int *)this + 0xd0))(10,*(undefined4 *)(param_1 + 8));
    break;
  default:
    goto switchD_004243f0_caseD_b;
  case 0x14:
    iVar1 = (**(code **)(*(int *)this + 0xd4))(2,*(undefined4 *)(param_1 + 8));
    break;
  case 0x15:
    iVar1 = (**(code **)(*(int *)this + 0xd4))(3,*(undefined4 *)(param_1 + 8));
    break;
  case 0x16:
    iVar1 = (**(code **)(*(int *)this + 0xd4))(4,*(undefined4 *)(param_1 + 8));
    break;
  case 0x17:
    iVar1 = (**(code **)(*(int *)this + 0xd4))(5,*(undefined4 *)(param_1 + 8));
    break;
  case 0x18:
    iVar1 = (**(code **)(*(int *)this + 0xd4))(6,*(undefined4 *)(param_1 + 8));
    break;
  case 0x19:
    iVar1 = (**(code **)(*(int *)this + 0xd4))(7,*(undefined4 *)(param_1 + 8));
    break;
  case 0x1a:
    iVar1 = (**(code **)(*(int *)this + 0xd4))(8,*(undefined4 *)(param_1 + 8));
    break;
  case 0x1b:
    iVar1 = (**(code **)(*(int *)this + 0xd4))(9,*(undefined4 *)(param_1 + 8));
    break;
  case 0x1c:
    iVar1 = (**(code **)(*(int *)this + 0xd4))(10,*(undefined4 *)(param_1 + 8));
    break;
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
    iVar1 = (**(code **)(*(int *)this + 0xd8))(*(undefined4 *)(param_1 + 8));
    break;
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
    iVar1 = (**(code **)(*(int *)this + 0xdc))(*(undefined4 *)(param_1 + 8));
    break;
  case 0x30:
    iVar1 = (**(code **)(*(int *)this + 0xe8))(*(undefined4 *)(param_1 + 8));
    break;
  case 0x31:
    iVar1 = (**(code **)(*(int *)this + 0xe4))();
    break;
  case 0x32:
    iVar1 = (**(code **)(*(int *)this + 0xe0))(0);
    break;
  case 0x33:
    iVar1 = (**(code **)(*(int *)this + 0xe0))(1);
    break;
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x3c:
    iVar1 = (**(code **)(*(int *)this + 0xec))(*(undefined4 *)(param_1 + 8));
  }
  if (iVar1 != 0) {
    if (((byte)this[0x88] & 4) != 0) {
      gsMP_SERVER::SendMsgClientAll
                (gsSysServer,(entIACTIVE_OBJ *)this,0x4c7,(msgDATA *)param_1,0x20000,0xffffffff,
                 0xfffffffd);
    }
    if (wrSysStat != (wrSTAT_SYSTEM *)0x0) {
      wrSTAT_SYSTEM::Notify_PickItem(wrSysStat,this,*(int *)(param_1 + 4),*(float *)(param_1 + 8));
    }
  }
switchD_004243f0_caseD_b:
  return iVar1;
}




/* from: player_comm.cpp
   addr: 004246C0 */

int __thiscall plrPLAYER_COMMON::PickWeapon(plrPLAYER_COMMON *this,int param_1,float param_2)

{
  wpnWEAPON *this_00;
  uint uVar1;
  uint uVar2;
  
  this_00 = *(wpnWEAPON **)(*(int *)(this + 0x23f) + param_1 * 4);
  if (this_00 == (wpnWEAPON *)0x0) {
    return 0;
  }
  uVar1 = *(uint *)(this_00 + 0x14f);
  if ((uVar1 & 1) != 0) {
    param_2 = 1.0;
  }
  wpnWEAPON::AddAmmo(this_00,param_2);
  (**(code **)(**(int **)(*(int *)(this + 0x23f) + param_1 * 4) + 0xa8))(1);
  if ((((byte)this[0x88] & 1) == 0) && (param_1 != *(int *)(this + 0x243))) {
    uVar2 = *(uint *)(this + 0x2df) >> 1 & 3;
    if (uVar2 == 1) {
      if ((uVar1 & 1) != 0) {
        return 1;
      }
    }
    else if (uVar2 != 2) {
      return 1;
    }
    if (*(int *)(this + 0x243) < param_1) {
      (**(code **)(*(int *)this + 0xfc))(param_1,1);
    }
  }
  return 1;
}




/* from: player_comm.cpp
   addr: 00424760 */

int __thiscall plrPLAYER_COMMON::PickAmmo(plrPLAYER_COMMON *this,int param_1,float param_2)

{
  wpnWEAPON *this_00;
  int iVar1;
  msgDATA local_14;
  undefined1 local_13;
  undefined2 local_12;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (((byte)this[0x88] & 4) != 0) {
    this_00 = *(wpnWEAPON **)(*(int *)(this + 0x23f) + param_1 * 4);
    if (this_00 != (wpnWEAPON *)0x0) {
      iVar1 = wpnWEAPON::AddAmmo(this_00,param_2);
      if (iVar1 == 0) {
        return 0;
      }
      local_14 = (msgDATA)0x0;
      local_13 = 0x40;
      local_4 = 0xfffffffe;
      local_10 = 4;
      local_12 = 0x14;
      local_c = param_1;
      local_8 = *(undefined4 *)(*(int *)(*(int *)(this + 0x23f) + param_1 * 4) + 0x17f);
      gsMP_SERVER::SendMsgClientAll
                (gsSysServer,(entIACTIVE_OBJ *)this,0x40c,&local_14,0xa0000,0xffffffff,0xfffffffd);
    }
  }
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: player_comm.cpp
   addr: 00424810 */

int __thiscall plrPLAYER_COMMON::PickHealth(plrPLAYER_COMMON *this,float param_1)

{
  float fVar1;
  msgDATA local_c;
  undefined1 local_b;
  undefined2 local_a;
  undefined4 local_8;
  undefined4 local_4;
  
  if (((byte)this[0x88] & 4) != 0) {
    if ((param_1 < ___real_41300000) || (___real_43160000 <= param_1)) {
      if (___real_43470000 < *(float *)(this + 0xcc)) {
        return 0;
      }
      fVar1 = *(float *)(this + 0xcc);
      *(float *)(this + 0xcc) = param_1 + fVar1;
      if (___real_43480000 < param_1 + fVar1) {
        *(undefined4 *)(this + 0xcc) = 0x43480000;
      }
    }
    else {
      if (___real_42c60000 < *(float *)(this + 0xcc)) {
        return 0;
      }
      fVar1 = *(float *)(this + 0xcc);
      *(float *)(this + 0xcc) = param_1 + fVar1;
      if (___real_42c80000 < param_1 + fVar1) {
        *(undefined4 *)(this + 0xcc) = 0x42c80000;
      }
    }
    local_4 = *(undefined4 *)(this + 0xcc);
    local_c = (msgDATA)0x0;
    local_b = 0x40;
    local_8 = 0xffffff9f;
    local_a = 0xc;
    gsMP_SERVER::SendMsgClientAll
              (gsSysServer,(entIACTIVE_OBJ *)this,0x40c,&local_c,0xa0000,0xffffffff,0xfffffffd);
  }
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: player_comm.cpp
   addr: 00424920 */

int __thiscall plrPLAYER_COMMON::PickArmor(plrPLAYER_COMMON *this,float param_1)

{
  float fVar1;
  msgDATA local_c;
  undefined1 local_b;
  undefined2 local_a;
  undefined4 local_8;
  undefined4 local_4;
  
  if (((byte)this[0x88] & 4) != 0) {
    if (___real_43160000 <= param_1) {
      if (___real_43470000 < *(float *)(this + 0x2a7)) {
        return 0;
      }
      fVar1 = *(float *)(this + 0x2a7);
      *(float *)(this + 0x2a7) = param_1 + fVar1;
      if (___real_43480000 < param_1 + fVar1) {
        *(undefined4 *)(this + 0x2a7) = 0x43480000;
      }
    }
    else {
      if (___real_42c60000 < *(float *)(this + 0x2a7)) {
        return 0;
      }
      fVar1 = *(float *)(this + 0x2a7);
      *(float *)(this + 0x2a7) = param_1 + fVar1;
      if (___real_42c80000 < param_1 + fVar1) {
        *(undefined4 *)(this + 0x2a7) = 0x42c80000;
      }
    }
    local_4 = *(undefined4 *)(this + 0x2a7);
    local_c = (msgDATA)0x0;
    local_b = 0x40;
    local_8 = 5;
    local_a = 0xc;
    gsMP_SERVER::SendMsgClientAll
              (gsSysServer,(entIACTIVE_OBJ *)this,0x40c,&local_c,0xa0000,0xffffffff,0xfffffffd);
  }
  return 1;
}




/* from: player_comm.cpp
   addr: 00424A20 */

int __thiscall plrPLAYER_COMMON::PickTreasure(plrPLAYER_COMMON *this,float param_1)

{
  msgDATA local_14;
  undefined1 local_13;
  undefined2 local_12;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (((byte)this[0x88] & 4) != 0) {
    if (*(int *)(wrSysGO + 0x94) == 3) {
      if ((*(int *)(this + 0x2b3) != 0) && (*(int *)(this + 0x2b3) != 1)) {
        return 0;
      }
      *(int *)(this + 0x2bf) = *(int *)(this + 0x2bf) + 1;
      local_c = *(undefined4 *)(this + 0x2b7);
      local_14 = (msgDATA)0x0;
      local_8 = *(undefined4 *)(this + 699);
      local_13 = 0x40;
      local_4 = *(undefined4 *)(this + 0x2bf);
      local_10 = 8;
      local_12 = 0x14;
      gsMP_SERVER::SendMsgClientAll
                (gsSysServer,(entIACTIVE_OBJ *)this,0x40c,&local_14,0x20000,0xffffffff,0xfffffffd);
      return 1;
    }
    *(float *)(this + 0x2ab) = param_1 + *(float *)(this + 0x2ab);
  }
  return 1;
}




/* from: player_comm.cpp
   addr: 00424AF0 */

int __thiscall plrPLAYER_COMMON::PickMoney(plrPLAYER_COMMON *this,float param_1)

{
  msgDATA local_c;
  undefined1 local_b;
  undefined2 local_a;
  undefined4 local_8;
  float local_4;
  
  if (((byte)this[0x88] & 4) != 0) {
    local_4 = param_1 + *(float *)(this + 0x2ab);
    *(float *)(this + 0x2ab) = local_4;
    local_c = (msgDATA)0x0;
    local_b = 0x40;
    local_8 = 0xb;
    local_a = 0xc;
    gsMP_SERVER::SendMsgClientAll
              (gsSysServer,(entIACTIVE_OBJ *)this,0x40c,&local_c,0x20000,0xffffffff,0xfffffffd);
  }
  return 1;
}




/* from: player_comm.cpp
   addr: 00424B60 */

int __thiscall plrPLAYER_COMMON::PickPowerup(plrPLAYER_COMMON *this,int param_1)

{
  if ((*(int *)(wrSysGO + 0x94) == 3) || (*(int *)(wrSysGO + 0x94) == 1)) {
    if (*(int *)(this + param_1 * 8 + 0x2c7) != 0) {
      return 0;
    }
    *(undefined4 *)(this + param_1 * 8 + 0x2c7) = 1;
    *(undefined4 *)(this + param_1 * 8 + 0x2cb) = 0;
    return 1;
  }
  if (((float)(&_plrPwrCostTbl)[param_1] <= *(float *)(this + 0x2ab)) &&
     (*(int *)(this + param_1 * 8 + 0x2c7) == 0)) {
    *(undefined4 *)(this + param_1 * 8 + 0x2c7) = 1;
    *(undefined4 *)(this + param_1 * 8 + 0x2cb) = 0;
    *(float *)(this + 0x2ab) = *(float *)(this + 0x2ab) - (float)(&_plrPwrCostTbl)[param_1];
    return 1;
  }
  return 0;
}




/* from: player_comm.cpp
   addr: 00424C00 */

void __thiscall plrPLAYER_COMMON::SetCurWpn(plrPLAYER_COMMON *this,int param_1,int param_2)

{
  int iVar1;
  
  if (param_1 < 0) {
    param_1 = *(int *)(this + 0x243);
  }
  switch(param_1) {
  case 0:
    iVar1 = 3;
    break;
  case 1:
    iVar1 = 2;
    break;
  case 2:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 10:
    iVar1 = 0;
    break;
  default:
    iVar1 = 1;
    break;
  case 9:
    iVar1 = 4;
  }
  animSYSTEM_INST::SetGroupCur(*(animSYSTEM_INST **)(*(int *)(this + 0xbc) + 0xe8),iVar1,0.2);
  return;
}




/* from: player_comm.cpp
   addr: 00424C80 */

void __thiscall plrPLAYER_COMMON::Revitalize(plrPLAYER_COMMON *this,int param_1)

{
  int iVar1;
  
  (**(code **)(*(int *)this + 0xf8))();
  *(uint *)(this + 0x29b) = *(uint *)(this + 0x29b) & 0x1001;
  *(undefined4 *)(this + 0x287) = 0;
  iVar1 = *(int *)(*(int *)(*(int *)(this + 0x23f) + *(int *)(this + 0x243) * 4) + 0xbc);
  *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) & 0xfffffffe;
  *(uint *)(this + 0x29b) = *(uint *)(this + 0x29b) & 0xfffeffff;
  if (param_1 != 0) {
    (**(code **)(**(int **)(*(int *)(this + 0x23f) + 8) + 0xa8))(1);
    wpnWEAPON::SetAmmo(*(wpnWEAPON **)(*(int *)(this + 0x23f) + 8),200.0);
    (**(code **)(**(int **)(*(int *)(this + 0x23f) + 0xc) + 0xa8))(1);
    wpnWEAPON::SetAmmo(*(wpnWEAPON **)(*(int *)(this + 0x23f) + 0xc),1000.0);
    (**(code **)(**(int **)(*(int *)(this + 0x23f) + 0x10) + 0xa8))(1);
    wpnWEAPON::SetAmmo(*(wpnWEAPON **)(*(int *)(this + 0x23f) + 0x10),50.0);
    (**(code **)(**(int **)(*(int *)(this + 0x23f) + 0x18) + 0xa8))(1);
    wpnWEAPON::SetAmmo(*(wpnWEAPON **)(*(int *)(this + 0x23f) + 0x18),100.0);
    (**(code **)(**(int **)(*(int *)(this + 0x23f) + 0x14) + 0xa8))(1);
    wpnWEAPON::SetAmmo(*(wpnWEAPON **)(*(int *)(this + 0x23f) + 0x14),100.0);
    *(undefined4 *)(this + 0x2ab) = 0x43480000;
    *(undefined4 *)(this + 0x2c7) = 1;
    *(undefined4 *)(this + 0x2cf) = 1;
    *(undefined4 *)(this + 0x2d7) = 1;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: player_comm.cpp
   addr: 00424DD0 */

void __thiscall plrPLAYER_COMMON::NotifyHealthChange(plrPLAYER_COMMON *this,dmgDAMAGE *param_1)

{
  entIACTIVE_OBJ *peVar1;
  msgDATA local_2c;
  undefined1 local_2b;
  undefined2 local_2a;
  undefined4 local_28;
  undefined4 local_24;
  msgDATA local_20;
  undefined1 local_1f;
  undefined2 local_1e;
  undefined4 local_1c;
  undefined4 local_18;
  msgDATA local_14;
  undefined1 local_13;
  undefined2 local_12;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_2c = (msgDATA)0x0;
  local_2b = 0x40;
  local_24 = 0;
  local_28 = 0xffffff9f;
  local_2a = 0xc;
  local_20 = (msgDATA)0x0;
  local_1f = 0x40;
  local_18 = 0;
  local_1c = 5;
  local_1e = 0xc;
  if (wrSysStat != (wrSTAT_SYSTEM *)0x0) {
    wrSTAT_SYSTEM::Notify_PlrDmg(wrSysStat,this,param_1);
  }
  if (((byte)this[0x88] & 4) != 0) {
    local_24 = *(undefined4 *)(this + 0xcc);
    gsMP_SERVER::SendMsgClientAll
              (gsSysServer,(entIACTIVE_OBJ *)this,0x40c,&local_2c,0xa0000,0xffffffff,0xfffffffd);
    local_18 = *(undefined4 *)(this + 0x2a7);
    gsMP_SERVER::SendMsgClientAll
              (gsSysServer,(entIACTIVE_OBJ *)this,0x40c,&local_20,0xa0000,0xffffffff,0xfffffffd);
    if ((wrSysStat != (wrSTAT_SYSTEM *)0x0) && (*(int *)(param_1 + 4) == 0)) {
      peVar1 = gsMP_SYSTEM::FindEnt(gsSysMP,*(int *)(param_1 + 0xc),0);
      if ((peVar1 != (entIACTIVE_OBJ *)0x0) &&
         ((peVar1 != (entIACTIVE_OBJ *)this && (*(int *)(peVar1 + 0x14) == 0x504c5952)))) {
        wrSTAT_SYSTEM::Notify_PlrHit(wrSysStat,(plrPLAYER_COMMON *)peVar1);
      }
    }
    if (*(float *)(this + 0xcc) < _DAT_005d0988) {
      local_c = *(undefined4 *)(param_1 + 0xc);
      local_14 = (msgDATA)0x0;
      local_13 = 0x40;
      local_4 = 0;
      local_10 = 0xffffffa0;
      local_12 = 0x14;
      if (*(int *)(param_1 + 4) == 0) {
        local_8 = *(undefined4 *)(param_1 + 0x1c);
      }
      else {
        local_8 = 0xffffffff;
      }
      if ((*(int *)(param_1 + 4) == 4) && (___real_43fa0000 < *(float *)(param_1 + 8))) {
        local_4 = 1;
      }
      gsMP_SERVER::SendMsgClientAll
                (gsSysServer,(entIACTIVE_OBJ *)this,0x40c,&local_14,0x20000,0xfffffffd,0xfffffffd);
    }
  }
  return;
}




/* from: player_comm.cpp
   addr: 00424F60 */

void __thiscall plrPLAYER_COMMON::StartDeath(plrPLAYER_COMMON *this,plrEV_START_DEATH *param_1)

{
  entIACTIVE_OBJ *peVar1;
  char *pcVar2;
  entIACTIVE_OBJ *peVar3;
  int iVar4;
  msgDATA local_a0;
  undefined1 local_9f;
  undefined2 local_9e;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  msgDATA mStack_8c;
  undefined1 uStack_8b;
  undefined2 uStack_8a;
  apNAME aaStack_88 [64];
  apNAME aaStack_48 [64];
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if (((byte)this[0x29b] & 2) != 0) goto LAB_00425191;
  if ((((byte)this[0x88] & 4) != 0) && (*(int *)(gsSysMP + 0x28) != 1)) {
    peVar3 = (entIACTIVE_OBJ *)0x0;
    *(int *)(this + 699) = *(int *)(this + 699) + 1;
    local_98 = *(undefined4 *)(this + 0x2b7);
    local_94 = *(undefined4 *)(this + 699);
    local_90 = *(undefined4 *)(this + 0x2bf);
    local_a0 = (msgDATA)0x0;
    local_9f = 0x40;
    local_9c = 8;
    local_9e = 0x14;
    gsMP_SERVER::SendMsgClientAll
              (gsSysServer,(entIACTIVE_OBJ *)this,0x40c,&local_a0,0xa0000,0xffffffff,0xfffffffd);
    peVar1 = gsMP_SYSTEM::FindEnt(gsSysMP,*(int *)(param_1 + 8),0);
    if ((peVar1 == (entIACTIVE_OBJ *)0x0) ||
       ((peVar1 == (entIACTIVE_OBJ *)this || (*(int *)(peVar1 + 0x14) != 0x504c5952)))) {
      (**(code **)(*(int *)this + 0x10c))(0xffffffff);
      if (wrSysStat != (wrSTAT_SYSTEM *)0x0) {
        iVar4 = -1;
        peVar1 = (entIACTIVE_OBJ *)this;
        goto LAB_00425065;
      }
    }
    else {
      (**(code **)(*(int *)peVar1 + 0x10c))(1);
      peVar3 = peVar1;
      if (wrSysStat != (wrSTAT_SYSTEM *)0x0) {
        iVar4 = 1;
LAB_00425065:
        wrSTAT_SYSTEM::Notify_PlrFrag(wrSysStat,(plrPLAYER_COMMON *)peVar1,iVar4);
      }
    }
    mStack_8c = (msgDATA)0x0;
    uStack_8b = 0x40;
    uStack_8 = *(undefined4 *)(param_1 + 0xc);
    aaStack_88[0] = (apNAME)0x0;
    aaStack_48[0] = (apNAME)0x0;
    uStack_8a = 0x8c;
    uStack_4 = 0;
    if (peVar3 != (entIACTIVE_OBJ *)0x0) {
      pcVar2 = *(char **)(*(int *)(peVar3 + 0xbc) + 0x18);
      if (pcVar2 == (char *)0x0) {
        pcVar2 = s_;
      }
      apNAME::SetName(aaStack_88,pcVar2);
    }
    pcVar2 = *(char **)(*(int *)(this + 0xbc) + 0x18);
    if (pcVar2 == (char *)0x0) {
      pcVar2 = s_;
    }
    apNAME::SetName(aaStack_48,pcVar2);
    gsMP_SERVER::SendMsgClientAll
              (gsSysServer,(entIACTIVE_OBJ *)0x0,0x409,&mStack_8c,0x90000,0xfffffffd,0xfffffffd);
    ReleaseTreasures(this,0);
  }
  if (((byte)this[0x29b] & 2) == 0) {
    if (wrSysStat != (wrSTAT_SYSTEM *)0x0) {
      wrSTAT_SYSTEM::Notify_PlrDeath(wrSysStat,this);
    }
    if (*(int *)(param_1 + 0x10) != 0) {
      *(uint *)(this + 0x29b) = *(uint *)(this + 0x29b) | 0x10000;
      animINST::GetPos(*(animINST **)(this + 0xbc),(m3dV *)&local_a0);
      if (((byte)this[0x88] & 4) != 0) {
        wrsfxStartChunkMeat(3,0,(m3dV *)&local_a0,(m3dV *)0x0,(aiNPC_WR *)0x0);
      }
      wrsfxStartBlood(7,0,(m3dV *)&local_a0,(m3dV *)0x0,(m3dV *)0x0,(m3dV *)0x0);
    }
    if ((*(uint *)(this + 0x29b) & 0x40000000) != 0) {
      *(uint *)(this + 0x29b) = *(uint *)(this + 0x29b) | 0x10000;
    }
  }
LAB_00425191:
  *(uint *)(this + 0x29b) = *(uint *)(this + 0x29b) | 2;
  return;
}




/* from: player_comm.cpp
   addr: 004251B0 */

void __thiscall plrPLAYER_COMMON::GetMPSysSyncData(plrPLAYER_COMMON *this,gsMSG_MP_SYNC *param_1)

{
  gsMSG_MP_SYNC gVar1;
  int iVar2;
  undefined4 uVar3;
  msgDATA *pmVar4;
  char *pcVar5;
  gsMSG_MP_SYNC *pgVar6;
  float fVar7;
  
  iVar2 = *(int *)(gsSysMP + 0x28);
  pcVar5 = *(char **)(*(int *)(this + 0xbc) + 0x18);
  if ((gsMSG_MP_SYNC *)pcVar5 == (gsMSG_MP_SYNC *)0x0) {
    pcVar5 = s_;
  }
  pgVar6 = param_1 + 0x98;
  do {
    gVar1 = (gsMSG_MP_SYNC)*pcVar5;
    pcVar5 = (char *)((gsMSG_MP_SYNC *)pcVar5 + 1);
    *pgVar6 = gVar1;
    pgVar6 = pgVar6 + 1;
  } while (gVar1 != (gsMSG_MP_SYNC)0x0);
  animINST::MakeCreateData(*(animINST **)(this + 0xbc),(animCREATE_DATA *)(param_1 + 0xdc));
  if (((gsAppState & 0xc00U) != 0) || (iVar2 == 1)) {
    pcVar5 = *(char **)(*(int *)(this + 0xbc) + 0x20);
    if ((gsMSG_MP_SYNC *)pcVar5 == (gsMSG_MP_SYNC *)0x0) {
      pcVar5 = s_;
    }
    pgVar6 = param_1 + 0x18;
    do {
      gVar1 = (gsMSG_MP_SYNC)*pcVar5;
      pcVar5 = (char *)((gsMSG_MP_SYNC *)pcVar5 + 1);
      *pgVar6 = gVar1;
      pgVar6 = pgVar6 + 1;
    } while (gVar1 != (gsMSG_MP_SYNC)0x0);
    pcVar5 = *(char **)(*(int *)(this + 0xbc) + 0x1c);
    if ((gsMSG_MP_SYNC *)pcVar5 == (gsMSG_MP_SYNC *)0x0) {
      pcVar5 = s_;
    }
    pgVar6 = param_1 + 0x58;
    do {
      gVar1 = (gsMSG_MP_SYNC)*pcVar5;
      pcVar5 = (char *)((gsMSG_MP_SYNC *)pcVar5 + 1);
      *pgVar6 = gVar1;
      pgVar6 = pgVar6 + 1;
    } while (gVar1 != (gsMSG_MP_SYNC)0x0);
  }
  else {
    pcVar5 = s_player_mp;
    do {
      gVar1 = (gsMSG_MP_SYNC)*pcVar5;
      (param_1 + -0x5ee37c)[(int)pcVar5] = gVar1;
      pcVar5 = (char *)((gsMSG_MP_SYNC *)pcVar5 + 1);
    } while (gVar1 != (gsMSG_MP_SYNC)0x0);
    pcVar5 = s_player_mp;
    do {
      gVar1 = (gsMSG_MP_SYNC)*pcVar5;
      (param_1 + -0x5ee33c)[(int)pcVar5] = gVar1;
      pcVar5 = (char *)((gsMSG_MP_SYNC *)pcVar5 + 1);
    } while (gVar1 != (gsMSG_MP_SYNC)0x0);
    if (*(int *)(this + 0x94) == 0) {
      fVar7 = animINST::GetScale(*(animINST **)(*(int *)(this + 0x377) + 0xbc));
      *(float *)(param_1 + 0xdc) = fVar7;
      *(float *)(param_1 + 0xe0) = fVar7;
      *(float *)(param_1 + 0xe4) = fVar7;
    }
  }
  if ((((byte)this[0xb4] & 1) == 0) && ((*(int *)(param_1 + 0xc) != 0x504c5952 || (iVar2 == 1)))) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  pmVar4 = entUnpackInitDataPacked(*(void **)(this + 0x145));
  *(msgDATA **)(param_1 + 4) = pmVar4;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: player_comm.cpp
   addr: 004252D0 */

void __thiscall plrPLAYER_COMMON::ProcessMP_GET_SYNC_DATA(plrPLAYER_COMMON *this,void *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  plrPLAYER_COMMON *ppVar3;
  int iVar4;
  undefined4 *puVar5;
  
                    /* WARNING: Load size is inaccurate */
  puVar1 = *param_1;
  if (puVar1 == (undefined4 *)0x0) {
    if ((DAT_00603de0 & 1) == 0) {
      DAT_00603de0 = DAT_00603de0 | 1;
      DAT_00603de8._0_1_ = 0;
      DAT_00603de8._1_1_ = 0x40;
      DAT_00603de8._2_2_ = 0xffff;
      _vector_constructor_iterator_(&DAT_00603dec,0x10,10,plgsBREADCRUMB::plgsBREADCRUMB);
      _DAT_00603e8c = 0;
      _DAT_00603e90 = 0;
      DAT_00603e94 = 0xbf800000;
      DAT_00603e98 = 0xbf800000;
      DAT_00603e9c = 0;
      DAT_00603ea0 = 0xffffffff;
      DAT_00603ea4 = 0;
      DAT_00603ea8 = 0xffffffff;
      puVar1 = &DAT_00603eb4;
      iVar4 = 0xb;
      do {
        puVar1[-2] = 0;
        puVar1[-1] = 0x3f800000;
        *puVar1 = 0;
        puVar1 = puVar1 + 3;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      _DAT_00603f30 = _m3dVZero;
      _DAT_00603f34 = DAT_00963740;
      _DAT_00603f38 = DAT_00963744;
      puVar1 = &DAT_00603f3c;
      iVar4 = 3;
      do {
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = puVar1 + 2;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      DAT_00603f54 = 0;
      DAT_00603de8._2_2_ = 0x180;
      DAT_00603f58 = 0;
      DAT_00603f5c = 0;
      _DAT_00603f64 = 0;
      atexit((_func_4879 *)&__E45);
    }
    puVar1 = &DAT_00603de8;
    *(undefined4 **)param_1 = &DAT_00603de8;
  }
  puVar1[0x2b] = *(undefined4 *)(this + 0xcc);
  puVar1[0x2c] = *(undefined4 *)(this + 0x2a7);
  puVar1[0x2f] = *(undefined4 *)(this + 0x2ab);
  puVar1[0x2d] = *(undefined4 *)(this + 0x29b);
  puVar1[0x2e] = *(undefined4 *)(this + 0x23b);
  puVar1[0x30] = *(undefined4 *)(this + 0x243);
  iVar4 = 0;
  puVar5 = puVar1 + 0x33;
  do {
    iVar2 = iVar4 + 4;
    puVar5[-1] = *(undefined4 *)(*(int *)(iVar4 + *(int *)(this + 0x23f)) + 0x17f);
    *puVar5 = *(undefined4 *)(*(int *)(iVar4 + *(int *)(this + 0x23f)) + 399);
    puVar5[-2] = *(uint *)(*(int *)(iVar4 + *(int *)(this + 0x23f)) + 0x14f) & 1;
    iVar4 = iVar2;
    puVar5 = puVar5 + 3;
  } while (iVar2 < 0x2c);
  (**(code **)(*(int *)this + 0xf4))(puVar1 + 0x52);
  puVar5 = puVar1 + 0x56;
  iVar4 = 3;
  ppVar3 = this + 0x2cb;
  do {
    puVar5[-1] = *(undefined4 *)(ppVar3 + -4);
    *puVar5 = *(undefined4 *)ppVar3;
    puVar5 = puVar5 + 2;
    iVar4 = iVar4 + -1;
    ppVar3 = ppVar3 + 8;
  } while (iVar4 != 0);
  puVar1[0x5b] = *(undefined4 *)(this + 0x2b7);
  puVar1[0x5c] = *(undefined4 *)(this + 699);
  puVar1[0x5d] = *(undefined4 *)(this + 0x2bf);
  puVar1[0x5e] = *(undefined4 *)(this + 0x2b3);
  plgsACTION::ProcessMP_GET_SYNC_DATA((plgsACTION *)this,param_1);
  return;
}




/* from: player_comm.cpp
   addr: 004254F0 */

void __thiscall
plrPLAYER_COMMON::ProcessMP_WRITE_SYNC_DATA(plrPLAYER_COMMON *this,gsMSG_MP_SAVELOAD *param_1)

{
  int iVar1;
  gsMSG_MP_SAVELOAD *pgVar2;
  int iVar3;
  int iVar4;
  plgsACTION *this_00;
  undefined1 *puStack_80;
  undefined1 *puStack_74;
  undefined2 *puStack_68;
  undefined2 *puStack_5c;
  undefined2 *puStack_50;
  gsMSG_MP_SAVELOAD **ppgStack_44;
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 uStack_1c;
  undefined4 local_1a;
  undefined2 local_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 local_10;
  undefined4 local_e;
  undefined2 local_a;
  undefined2 uStack_8;
  undefined2 local_6;
  undefined2 uStack_4;
  
  pgVar2 = param_1;
  local_1e = 0xffff;
  uStack_1c = 0xffff;
  local_1a = 0xffffffff;
  iVar1 = *(int *)param_1;
  local_16 = 0xffff;
  uStack_14 = 0xffff;
  local_e = 0xffffffff;
  local_a = 0xffff;
  uStack_8 = 0xffff;
  local_6 = 0xffff;
  uStack_4 = 0xffff;
  local_20 = 0;
  local_10 = 0;
  ppgStack_44 = (gsMSG_MP_SAVELOAD **)0x42553a;
  fioFILE::WriteChunk(*(fioFILE **)(param_1 + 4),0xf0,(fioCHUNK *)&local_20);
  param_1 = *(gsMSG_MP_SAVELOAD **)(iVar1 + 0xac);
  ppgStack_44 = &param_1;
  (**(code **)(**(int **)(pgVar2 + 4) + 0x18))();
  fioFILE::UpdateChunk(*(fioFILE **)(pgVar2 + 4),(fioCHUNK *)&stack0xffffffd4);
  puStack_50 = (undefined2 *)0x425574;
  fioFILE::WriteChunk(*(fioFILE **)(pgVar2 + 4),0xf1,(fioCHUNK *)&stack0xffffffd4);
  uStack_8 = (undefined2)*(undefined4 *)(iVar1 + 0xb0);
  local_6 = (undefined2)((uint)*(undefined4 *)(iVar1 + 0xb0) >> 0x10);
  puStack_50 = &uStack_8;
  (**(code **)(**(int **)(pgVar2 + 4) + 0x18))();
  fioFILE::UpdateChunk(*(fioFILE **)(pgVar2 + 4),(fioCHUNK *)&stack0xffffffc8);
  puStack_5c = (undefined2 *)0x4255ae;
  fioFILE::WriteChunk(*(fioFILE **)(pgVar2 + 4),0xf2,(fioCHUNK *)&stack0xffffffc8);
  uStack_14 = (undefined2)*(undefined4 *)(iVar1 + 0xb4);
  uStack_12 = (undefined2)((uint)*(undefined4 *)(iVar1 + 0xb4) >> 0x10);
  puStack_5c = &uStack_14;
  (**(code **)(**(int **)(pgVar2 + 4) + 0x18))();
  fioFILE::UpdateChunk(*(fioFILE **)(pgVar2 + 4),(fioCHUNK *)&ppgStack_44);
  puStack_68 = (undefined2 *)0x4255e8;
  fioFILE::WriteChunk(*(fioFILE **)(pgVar2 + 4),0xf3,(fioCHUNK *)&ppgStack_44);
  local_20 = (undefined2)*(undefined4 *)(iVar1 + 0xb8);
  local_1e = (undefined2)((uint)*(undefined4 *)(iVar1 + 0xb8) >> 0x10);
  puStack_68 = &local_20;
  (**(code **)(**(int **)(pgVar2 + 4) + 0x18))();
  fioFILE::UpdateChunk(*(fioFILE **)(pgVar2 + 4),(fioCHUNK *)&puStack_50);
  puStack_74 = (undefined1 *)0x425622;
  fioFILE::WriteChunk(*(fioFILE **)(pgVar2 + 4),0xf4,(fioCHUNK *)&puStack_50);
  puStack_74 = &stack0xffffffd4;
  (**(code **)(**(int **)(pgVar2 + 4) + 0x18))();
  fioFILE::UpdateChunk(*(fioFILE **)(pgVar2 + 4),(fioCHUNK *)&puStack_5c);
  puStack_80 = (undefined1 *)0x42565c;
  fioFILE::WriteChunk(*(fioFILE **)(pgVar2 + 4),0xf5,(fioCHUNK *)&puStack_5c);
  iVar4 = iVar1 + 200;
  iVar3 = 0xb;
  do {
    puStack_80 = (undefined1 *)0x425679;
    fioFILE::WriteChunk(*(fioFILE **)(pgVar2 + 4),0x4d8,(fioCHUNK *)&stack0xffffffb4);
    puStack_80 = &stack0xffffffc8;
    (**(code **)(**(int **)(pgVar2 + 4) + 0x18))();
    fioFILE::UpdateChunk(*(fioFILE **)(pgVar2 + 4),(fioCHUNK *)&stack0xffffffa8);
    fioFILE::WriteChunk(*(fioFILE **)(pgVar2 + 4),0x4d9,(fioCHUNK *)&stack0xffffffa8);
    (**(code **)(**(int **)(pgVar2 + 4) + 0x18))(&stack0xffffff90,4,4);
    fioFILE::UpdateChunk(*(fioFILE **)(pgVar2 + 4),(fioCHUNK *)&stack0xffffff9c);
    fioFILE::WriteChunk(*(fioFILE **)(pgVar2 + 4),0x4da,(fioCHUNK *)&stack0xffffff9c);
    puStack_50 = *(undefined2 **)(iVar4 + 4);
    (**(code **)(**(int **)(pgVar2 + 4) + 0x18))(&puStack_50,4,4);
    fioFILE::UpdateChunk(*(fioFILE **)(pgVar2 + 4),(fioCHUNK *)&stack0xffffffb4);
    fioFILE::WriteLastChunk(*(fioFILE **)(pgVar2 + 4));
    iVar4 = iVar4 + 0xc;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  fioFILE::UpdateChunk(*(fioFILE **)(pgVar2 + 4),(fioCHUNK *)&puStack_5c);
  puStack_80 = (undefined1 *)0x42573c;
  fioFILE::WriteChunk(*(fioFILE **)(pgVar2 + 4),0xf6,(fioCHUNK *)&puStack_5c);
  iVar4 = 3;
  do {
    puStack_80 = (undefined1 *)0x425759;
    fioFILE::WriteChunk(*(fioFILE **)(pgVar2 + 4),0x4d8,(fioCHUNK *)&stack0xffffffb4);
    puStack_80 = &stack0xffffffc8;
    (**(code **)(**(int **)(pgVar2 + 4) + 0x18))();
    fioFILE::UpdateChunk(*(fioFILE **)(pgVar2 + 4),(fioCHUNK *)&stack0xffffffa8);
    fioFILE::WriteChunk(*(fioFILE **)(pgVar2 + 4),0x4d9,(fioCHUNK *)&stack0xffffffa8);
    (**(code **)(**(int **)(pgVar2 + 4) + 0x18))(&stack0xffffff90,4,4);
    fioFILE::UpdateChunk(*(fioFILE **)(pgVar2 + 4),(fioCHUNK *)&stack0xffffffb4);
    fioFILE::WriteLastChunk(*(fioFILE **)(pgVar2 + 4));
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  fioFILE::UpdateChunk(*(fioFILE **)(pgVar2 + 4),(fioCHUNK *)&puStack_5c);
  puStack_80 = (undefined1 *)0x4257e1;
  fioFILE::WriteChunk(*(fioFILE **)(pgVar2 + 4),0xf7,(fioCHUNK *)&puStack_5c);
  puStack_80 = &stack0xffffffc8;
  (**(code **)(**(int **)(pgVar2 + 4) + 0x18))();
  fioFILE::UpdateChunk(*(fioFILE **)(pgVar2 + 4),(fioCHUNK *)&puStack_68);
  fioFILE::WriteChunk(*(fioFILE **)(pgVar2 + 4),0xf8,(fioCHUNK *)&puStack_68);
  this_00 = (plgsACTION *)0x4;
  (**(code **)(**(int **)(pgVar2 + 4) + 0x18))(iVar1 + 0x148,0xc);
  fioFILE::UpdateChunk(*(fioFILE **)(pgVar2 + 4),(fioCHUNK *)&puStack_74);
  fioFILE::WriteChunk(*(fioFILE **)(pgVar2 + 4),0xf9,(fioCHUNK *)&puStack_74);
  puStack_50 = *(undefined2 **)(iVar1 + 0x17c);
  (**(code **)(**(int **)(pgVar2 + 4) + 0x18))(&puStack_50,4,4);
  fioFILE::UpdateChunk(*(fioFILE **)(pgVar2 + 4),(fioCHUNK *)&puStack_80);
  fioFILE::WriteLastChunk(*(fioFILE **)(pgVar2 + 4));
  plgsACTION::ProcessMP_WRITE_SYNC_DATA(this_00,pgVar2);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: player_comm.cpp
   addr: 004258A0 */

void __thiscall
plrPLAYER_COMMON::ProcessMP_READ_SYNC_DATA(plrPLAYER_COMMON *this,gsMSG_MP_SAVELOAD *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  msgDATA *pmVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  short local_194;
  undefined2 uStack_192;
  undefined2 uStack_190;
  undefined4 local_18e;
  undefined4 local_18a;
  plgsACTION *local_184;
  msgDATA local_180 [2];
  undefined2 local_17e;
  undefined1 local_17c [160];
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined1 local_bc [132];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c [24];
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_4;
  
  puVar4 = *(undefined4 **)param_1;
  local_194 = 0;
  uStack_192 = 0xffff;
  uStack_190 = 0xffff;
  local_18e = 0xffffffff;
  local_18a = 0xffffffff;
  local_184 = (plgsACTION *)this;
  if (puVar4 == (undefined4 *)0x0) {
    if ((DAT_00603de0 & 1) == 0) {
      DAT_00603de0 = DAT_00603de0 | 1;
      plrSYNC_DATA::plrSYNC_DATA((plrSYNC_DATA *)&DAT_00603de8);
      atexit((_func_4879 *)&__E45);
    }
    puVar4 = &DAT_00603de8;
    *(undefined4 **)param_1 = &DAT_00603de8;
    msgDATA::msgDATA(local_180);
    _vector_constructor_iterator_(local_17c,0x10,10,plgsBREADCRUMB::plgsBREADCRUMB);
    local_dc = 0;
    local_d8 = 0;
    local_17e = 0xac;
    local_d4 = 0xbf800000;
    local_d0 = 0xbf800000;
    local_cc = 0;
    local_c8 = 0xffffffff;
    local_c4 = 0;
    local_c0 = 0xffffffff;
    _vector_constructor_iterator_(local_bc,0xc,0xb,plrSYNC_WPN_DATA::plrSYNC_WPN_DATA);
    local_38 = _m3dVZero;
    local_34 = DAT_00963740;
    local_30 = DAT_00963744;
    _vector_constructor_iterator_(local_2c,8,3,objSPLIT_UNSHARED::objSPLIT_UNSHARED);
    local_14 = 0;
    local_10 = 0;
    local_c = 0;
    local_4 = 0;
    local_17e = 0x180;
    pmVar5 = local_180;
    puVar2 = &DAT_00603de8;
    for (iVar3 = 0x60; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar2 = *(undefined4 *)pmVar5;
      pmVar5 = pmVar5 + 4;
      puVar2 = puVar2 + 1;
    }
  }
  iVar3 = fioFILE::ReadChunk(*(fioFILE **)(param_1 + 4),(fioCHUNK *)&local_194);
  do {
    if ((iVar3 == 0) || (local_194 == 1)) {
      plgsACTION::ProcessMP_READ_SYNC_DATA(local_184,param_1);
      return;
    }
    switch(local_194) {
    case 0xf0:
      (**(code **)(**(int **)(param_1 + 4) + 0x14))(puVar4 + 0x2b,4,4);
      break;
    case 0xf1:
      (**(code **)(**(int **)(param_1 + 4) + 0x14))(puVar4 + 0x2c,4,4);
      break;
    case 0xf2:
      (**(code **)(**(int **)(param_1 + 4) + 0x14))(puVar4 + 0x2d,4,4);
      break;
    case 0xf3:
      (**(code **)(**(int **)(param_1 + 4) + 0x14))(puVar4 + 0x2e,4,4);
      break;
    case 0xf4:
      (**(code **)(**(int **)(param_1 + 4) + 0x14))(puVar4 + 0x30,4,4);
      break;
    case 0xf5:
      puVar2 = puVar4 + 0x32;
      iVar3 = 0xb;
      do {
        iVar1 = fioFILE::ReadChunk(*(fioFILE **)(param_1 + 4),(fioCHUNK *)&local_194);
        while ((iVar1 != 0 && (local_194 != 1))) {
          if (local_194 == 0x4d8) {
            (**(code **)(**(int **)(param_1 + 4) + 0x14))(puVar2 + -1,4,4);
          }
          else if (local_194 == 0x4d9) {
            (**(code **)(**(int **)(param_1 + 4) + 0x14))(puVar2,4,4);
          }
          else if (local_194 == 0x4da) {
            (**(code **)(**(int **)(param_1 + 4) + 0x14))(puVar2 + 1,4,4);
          }
          iVar1 = fioFILE::ReadChunk(*(fioFILE **)(param_1 + 4),(fioCHUNK *)&local_194);
        }
        puVar2 = puVar2 + 3;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      break;
    case 0xf6:
      puVar2 = puVar4 + 0x55;
      iVar3 = 3;
      do {
        iVar1 = fioFILE::ReadChunk(*(fioFILE **)(param_1 + 4),(fioCHUNK *)&local_194);
        while ((iVar1 != 0 && (local_194 != 1))) {
          puVar6 = puVar2;
          if (local_194 == 0x4d8) {
LAB_00425b7e:
            (**(code **)(**(int **)(param_1 + 4) + 0x14))(puVar6,4,4);
          }
          else if (local_194 == 0x4d9) {
            puVar6 = puVar2 + 1;
            goto LAB_00425b7e;
          }
          iVar1 = fioFILE::ReadChunk(*(fioFILE **)(param_1 + 4),(fioCHUNK *)&local_194);
        }
        puVar2 = puVar2 + 2;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      break;
    case 0xf7:
      puVar2 = puVar4 + 0x2f;
      goto LAB_00425bb9;
    case 0xf8:
      uVar7 = 0xc;
      puVar2 = puVar4 + 0x52;
      goto LAB_00425bbd;
    case 0xf9:
      puVar2 = puVar4 + 0x5f;
LAB_00425bb9:
      uVar7 = 4;
LAB_00425bbd:
      (**(code **)(**(int **)(param_1 + 4) + 0x14))(puVar2,uVar7,4);
    }
    iVar3 = fioFILE::ReadChunk(*(fioFILE **)(param_1 + 4),(fioCHUNK *)&local_194);
  } while( true );
}




/* from: player_comm.cpp
   addr: 00425C20 */

int __thiscall plrPLAYER_COMMON::GetMountType(plrPLAYER_COMMON *this,int param_1)

{
  if (param_1 < 0) {
    param_1 = *(int *)(this + 0x243);
  }
  switch(param_1) {
  case 0:
    return 3;
  case 1:
    return 2;
  case 2:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 10:
    return 0;
  default:
    return 1;
  case 9:
    return 4;
  }
}




/* from: player_comm.cpp
   addr: 00425C90 */

int __thiscall plrPLAYER_COMMON::IsCanBuyPwr(plrPLAYER_COMMON *this,int param_1)

{
  if (*(float *)(this + 0x2ab) < (float)(&_plrPwrCostTbl)[param_1]) {
    return 0;
  }
  return (uint)(*(int *)(this + param_1 * 8 + 0x2c7) == 0);
}




/* from: player_comm.cpp
   addr: 00425CC0 */

int __thiscall plrPLAYER_COMMON::IsActivePowerup(plrPLAYER_COMMON *this,int param_1)

{
  return (uint)(*(int *)(this + param_1 * 8 + 0x2c7) == 2);
}




/* from: player_comm.cpp
   addr: 00425CE0 */

void __thiscall plrPLAYER_COMMON::UpdateKillsCount(plrPLAYER_COMMON *this,int param_1)

{
  msgDATA local_14;
  undefined1 local_13;
  undefined2 local_12;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_14 = (msgDATA)0x0;
  local_13 = 0x40;
  local_10 = 8;
  local_12 = 0x14;
  if (((byte)this[0x88] & 4) != 0) {
    local_c = *(int *)(this + 0x2b7) + param_1;
    *(int *)(this + 0x2b7) = local_c;
    local_8 = *(undefined4 *)(this + 699);
    local_4 = *(undefined4 *)(this + 0x2bf);
    gsMP_SERVER::SendMsgClientAll
              (gsSysServer,(entIACTIVE_OBJ *)this,0x40c,&local_14,0x20000,0xffffffff,0xfffffffd);
  }
  return;
}




/* from: player_comm.cpp
   addr: 00425D70 */

void __thiscall plrPLAYER_COMMON::SetTeam(plrPLAYER_COMMON *this,int param_1)

{
  msgDATA local_c;
  undefined1 local_b;
  undefined2 local_a;
  undefined4 local_8;
  int local_4;
  
  local_c = (msgDATA)0x0;
  local_b = 0x40;
  local_4 = -1;
  local_8 = 10;
  local_a = 0xc;
  if (param_1 != 0) {
    param_1 = 1;
  }
  *(int *)(this + 0x2b3) = param_1;
  if (((byte)this[0x88] & 4) != 0) {
    local_4 = param_1;
    gsMP_SERVER::SendMsgClientAll
              (gsSysServer,(entIACTIVE_OBJ *)this,0x40c,&local_c,0x20000,0xffffffff,0xfffffffd);
  }
  ReleaseTreasures(this,1);
  return;
}




/* from: player_comm.cpp
   addr: 00425DF0 */

void __thiscall plrPLAYER_COMMON::ReleaseTreasures(plrPLAYER_COMMON *this,int param_1)

{
  int iVar1;
  int iVar2;
  m3dV *pmVar3;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  msgDATA local_14;
  undefined1 local_13;
  undefined2 local_12;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if ((((byte)this[0x88] & 4) != 0) && (*(int *)(wrSysGO + 0x94) == 3)) {
    animINST::GetPos(*(animINST **)(this + 0xbc),(m3dV *)&local_2c);
    iVar1 = 0;
    if (0 < *(int *)(this + 0x2bf)) {
      do {
        if (param_1 == 0) {
          m3dMakeVTangRandom(&m3dVUnitY,(m3dV *)&local_20);
          local_2c = local_20 + local_2c;
          pmVar3 = (m3dV *)&local_2c;
          iVar2 = 2;
          local_28 = local_1c + local_28;
          local_24 = local_18 + local_24;
        }
        else {
          pmVar3 = (m3dV *)0x0;
          iVar2 = 0;
        }
        wrGO_SYSTEM::GenerateMP_Treasure(wrSysGO,iVar2,pmVar3);
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(this + 0x2bf));
    }
    *(undefined4 *)(this + 0x2bf) = 0;
    local_c = *(undefined4 *)(this + 0x2b7);
    local_8 = *(undefined4 *)(this + 699);
    local_4 = *(undefined4 *)(this + 0x2bf);
    local_14 = (msgDATA)0x0;
    local_13 = 0x40;
    local_10 = 8;
    local_12 = 0x14;
    gsMP_SERVER::SendMsgClientAll
              (gsSysServer,(entIACTIVE_OBJ *)this,0x40c,&local_14,0x20000,0xffffffff,0xfffffffd);
  }
  return;
}




/* from: player_comm.cpp
   addr: 00425F10 */

void __thiscall plrPLAYER_COMMON::UpdateSound(plrPLAYER_COMMON *this)

{
  int iVar1;
  
  if (((byte)this[0xf8] & 1) != 0) {
    (**(code **)(**(int **)(this + 0x28b) + 4))(sndList,0);
  }
  if (((byte)this[0xf8] & 8) != 0) {
    (**(code **)(**(int **)(this + 0x28b) + 4))(sndList + 0x138,0);
  }
  if (((byte)this[0xf8] & 0x10) != 0) {
    (**(code **)(**(int **)(this + 0x28b) + 4))(sndList + 0x1a0,0);
  }
  if (((byte)this[0xf8] & 0x20) != 0) {
    (**(code **)(**(int **)(this + 0x28b) + 4))(sndList + 0x208,0);
  }
  if (((byte)this[0xf8] & 0x40) != 0) {
    (**(code **)(**(int **)(this + 0x28b) + 4))(sndList + 0x270,0);
  }
  if ((char)this[0xf8] < '\0') {
    (**(code **)(**(int **)(this + 0x28f) + 4))(sndList + 0x2d8,0);
  }
  if ((*(uint *)(this + 0xf8) & 0x100) != 0) {
    (**(code **)(**(int **)(this + 0x28f) + 4))(sndList + 0x340,0);
  }
  if ((*(uint *)(this + 0xf8) & 0x200) != 0) {
    (**(code **)(**(int **)(this + 0x293) + 4))(sndList + 0x3a8,0);
  }
  if ((*(uint *)(this + 0xf8) & 0x400) != 0) {
    iVar1 = m3dRandIntRange(0x10,0x11);
    (**(code **)(**(int **)(this + 0x293) + 4))(sndList + iVar1 * 0x68,0);
  }
  if ((*(uint *)(this + 0xf8) & 0x800) != 0) {
    (**(code **)(**(int **)(this + 0x293) + 4))(sndList + 0x750,0);
  }
  if ((*(uint *)(this + 0xf8) & 0x1000) != 0) {
    (**(code **)(**(int **)(this + 0x293) + 4))(sndList + 0x548,0);
  }
  if ((*(uint *)(this + 0xf8) & 0x2000) != 0) {
    (**(code **)(**(int **)(this + 0x293) + 4))(sndList + 0x410,0);
  }
  if ((*(uint *)(this + 0xf8) & 0x4000) != 0) {
    (**(code **)(**(int **)(this + 0x293) + 4))(sndList + 0x478,0);
  }
  if ((char)((uint)*(undefined4 *)(this + 0xf8) >> 8) < '\0') {
    (**(code **)(**(int **)(this + 0x293) + 4))(sndList + 0x618,0);
  }
  if ((*(uint *)(this + 0xf8) & 0x10000) != 0) {
    (**(code **)(**(int **)(this + 0x293) + 4))(sndList + 0x4e0,0);
  }
  if ((*(uint *)(this + 0xf8) & 0x20000) != 0) {
    (**(code **)(**(int **)(this + 0x293) + 4))(sndList + 0x5b0,0);
  }
  if ((*(uint *)(this + 0xf8) & 0x40000) != 0) {
    (**(code **)(**(int **)(this + 0x293) + 4))(sndList + 0x5b0,0);
  }
  *(undefined4 *)(*(int *)(this + 0x297) + 0xf) = *(undefined4 *)(this + 0xf8);
  *(undefined4 *)(*(int *)(this + 0x297) + 0x13) =
       *(undefined4 *)(*(int *)(*(int *)(this + 0x23f) + *(int *)(this + 0x243) * 4) + 0x1ab);
  if ((*(int *)(*(int *)(this + 0x297) + 0xf) != 0) ||
     (*(int *)(*(int *)(this + 0x297) + 0x13) != 0)) {
    *(uint *)(this + 0x88) = *(uint *)(this + 0x88) | 0x10;
  }
  *(undefined4 *)(this + 0xf8) = 0;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: player_comm.cpp
   addr: 004261E0 */

void __thiscall
plrPLAYER_COMMON::GetHealthArmorDiff
          (plrPLAYER_COMMON *this,dmgDAMAGE *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float local_8;
  float local_4;
  
  local_4 = 0.0;
  local_8 = 0.0;
  fVar1 = *(float *)(param_1 + 8);
  if (*(int *)(param_1 + 4) != 4) {
    if (*(float *)(param_1 + 8) <= *(float *)(this + 0x2a7)) {
      local_4 = *(float *)(param_1 + 8);
    }
    else {
      local_4 = *(float *)(this + 0x2a7);
    }
    local_8 = ___real_3eaaaaab * local_4;
    fVar1 = fVar1 - local_4;
  }
  *param_2 = fVar1 + local_8;
  *param_3 = local_4;
  return;
}




/* from: player_comm.cpp
   addr: 00426250 */

ushort * __thiscall plrPLAYER_COMMON::WpnType2String(plrPLAYER_COMMON *this,int param_1)

{
  int iVar1;
  ushort *puVar2;
  
  iVar1 = gsSTRINGS::GetStringIdFmt(gsStrings,(char *)gsStrings,s_WPN__i,param_1);
  puVar2 = gsSTRINGS::GetStringById(gsStrings,iVar1);
  return puVar2;
}




/* from: player_comm.cpp
   addr: 00426280 */

sncSOUND_DESCR_3D * __thiscall
sncSOUND_DESCR_3D::sncSOUND_DESCR_3D
          (sncSOUND_DESCR_3D *this,char *param_1,int param_2,int param_3,float param_4,ulong param_5
          ,float param_6,float param_7)

{
  apNAME::SetName((apNAME *)(this + 4),param_1);
  *(int *)(this + 0x44) = param_3;
  *(ulong *)(this + 0x4c) = param_5;
  *(float *)(this + 0x48) = param_4;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  *(int *)(this + 0x5c) = param_2;
  *(float *)(this + 100) = param_7;
  *(float *)(this + 0x60) = param_6;
  *(undefined ***)this = &_vftable_;
  return this;
}




/* from: player_comm.cpp
   addr: 004262F0
   addr: 004262F0 */

void __thiscall objSPLIT_UNSHARED::objSPLIT_UNSHARED(objSPLIT_UNSHARED *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  return;
}




/* from: player_comm.cpp
   addr: 00426300 */

void __thiscall plrSYNC_WPN_DATA::plrSYNC_WPN_DATA(plrSYNC_WPN_DATA *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0x3f800000;
  *(undefined4 *)(this + 8) = 0;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: player_comm.cpp
   addr: 00426320 */

void __thiscall plrSYNC_DATA::plrSYNC_DATA(plrSYNC_DATA *this)

{
  plrSYNC_DATA *ppVar1;
  int iVar2;
  
  iVar2 = 10;
  *this = (plrSYNC_DATA)0x0;
  this[1] = (plrSYNC_DATA)0x40;
  *(undefined2 *)(this + 2) = 0xffff;
  ppVar1 = this + 0x10;
  do {
    *(undefined4 *)ppVar1 = 0;
    ppVar1 = ppVar1 + 0x10;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined4 *)(this + 0xb8) = 0xffffffff;
  *(undefined4 *)(this + 0xac) = 0xbf800000;
  *(undefined4 *)(this + 0xb0) = 0xbf800000;
  *(undefined4 *)(this + 0xc0) = 0xffffffff;
  *(undefined4 *)(this + 0xa4) = 0;
  *(undefined4 *)(this + 0xa8) = 0;
  *(undefined2 *)(this + 2) = 0xac;
  *(undefined4 *)(this + 0xb4) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  ppVar1 = this + 0xc4;
  iVar2 = 0xb;
  do {
    *(undefined4 *)ppVar1 = 0;
    *(undefined4 *)(ppVar1 + 4) = 0x3f800000;
    *(undefined4 *)(ppVar1 + 8) = 0;
    ppVar1 = ppVar1 + 0xc;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined4 *)(this + 0x148) = _m3dVZero;
  *(undefined4 *)(this + 0x14c) = DAT_00963740;
  *(undefined4 *)(this + 0x150) = DAT_00963744;
  ppVar1 = this + 0x154;
  iVar2 = 3;
  do {
    *(undefined4 *)ppVar1 = 0;
    *(undefined4 *)(ppVar1 + 4) = 0;
    ppVar1 = ppVar1 + 8;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined4 *)(this + 0x16c) = 0;
  *(undefined4 *)(this + 0x170) = 0;
  *(undefined4 *)(this + 0x174) = 0;
  *(undefined4 *)(this + 0x17c) = 0;
  *(undefined2 *)(this + 2) = 0x180;
  return;
}

