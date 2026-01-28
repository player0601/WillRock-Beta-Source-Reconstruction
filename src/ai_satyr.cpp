
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_satyr.cpp
   addr: 0044D780 */

void __cdecl InitSatyrSounds(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  sncSOUND_DESCR::sncSOUND_DESCR((sncSOUND_DESCR *)&DAT_0060c920,s_satyr_beeing_hit,0,0x40000,0.0,0)
  ;
  _DAT_0060c980 = 0;
  _DAT_0060c984 = 0;
  _DAT_0060c920 = &sncSOUND_DESCR_3D::_vftable_;
  sncSOUND_DESCR::sncSOUND_DESCR
            ((sncSOUND_DESCR *)&DAT_0060c988,s_satyr_arrow_hit_body,0,0x40000,0.0,0);
  _DAT_0060c9e8 = 0;
  _DAT_0060c9ec = 0;
  _DAT_0060c988 = &sncSOUND_DESCR_3D::_vftable_;
  apNAME::SetName((apNAME *)&DAT_0060c9f4,s_satyr_death);
  _DAT_0060ca34 = 0x40000;
  _DAT_0060ca38 = 0;
  _DAT_0060ca3c = 0;
  _DAT_0060ca40 = 0;
  _DAT_0060ca44 = 0;
  _DAT_0060ca48 = 0;
  _DAT_0060ca4c = 0;
  _DAT_0060ca50 = 0;
  _DAT_0060ca54 = 0;
  _DAT_0060c9f0 = &sncSOUND_DESCR_3D::_vftable_;
  sncSOUND_DESCR::sncSOUND_DESCR((sncSOUND_DESCR *)&DAT_0060ca58,s_mino_death_1,0,0x40000,0.0,0);
  _DAT_0060cab8 = 0;
  _DAT_0060cabc = 0;
  _DAT_0060ca58 = &sncSOUND_DESCR_3D::_vftable_;
  sncSOUND_DESCR::sncSOUND_DESCR((sncSOUND_DESCR *)&DAT_0060cac0,s_satyr_run,0,0x40000,0.0,0);
  _DAT_0060cb20 = 0;
  _DAT_0060cb24 = 0;
  _DAT_0060cac0 = &sncSOUND_DESCR_3D::_vftable_;
  apNAME::SetName((apNAME *)&DAT_0060cb2c,s_satyr_shot_arrow);
  uVar2 = DAT_005d3fa0;
  uVar1 = DAT_005d3f9c;
  _DAT_0060cb6c = 0x40000;
  _DAT_0060cb70 = 0;
  _DAT_0060cb74 = 0;
  _DAT_0060cb78 = 0;
  _DAT_0060cb7c = 0;
  _DAT_0060cb80 = 0;
  _DAT_0060cb84 = 0;
  _DAT_0060cb88 = 0;
  _DAT_0060cb8c = 0;
  _DAT_0060cb28 = &sncSOUND_DESCR_3D::_vftable_;
  sncSOUND_DESCR::sncSOUND_DESCR((sncSOUND_DESCR *)&DAT_0060cb90,s_char_explos,0,0,0.0,0);
  _DAT_0060cb90 = &sncSOUND_DESCR_3D::_vftable_;
  _DAT_0060cbf0 = uVar1;
  _DAT_0060cbf4 = uVar2;
  return;
}




/* from: ai_satyr.cpp
   addr: 0044D920 */

int __fastcall aiSatyrInit(void)

{
  int iVar1;
  
  iVar1 = entRegisterClass(s_ai_satyr,0x244e5043,0x32,aiSATYR::Create,s_ai_satyr,0);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = pjlSatyrArrowInit();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = sncLinkSndListData(7,(sncSOUND_DESCR_3D *)&DAT_0060c920);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = wrsfxSatirInit();
  return (uint)(iVar1 != 0);
}




/* from: ai_satyr.cpp
   addr: 0044D970 */

int __thiscall aiSATYR::SetupAniSystem(aiSATYR *this)

{
  animTPL *paVar1;
  undefined4 *puVar2;
  animSYSTEM *this_00;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  int local_8;
  animSEQ *local_4;
  
  paVar1 = *(animTPL **)(*(int *)(this + 0xbc) + 0x138);
  if (*(animSEQ **)(paVar1 + 0x90) == (animSEQ *)0x0) {
    local_8 = 0;
  }
  else {
    local_8 = *(int *)(paVar1 + 0x8c);
    local_4 = *(animSEQ **)(paVar1 + 0x90);
  }
  iVar6 = 7;
  *(undefined4 *)(paVar1 + 0x8c) = 7;
  puVar2 = (undefined4 *)operator_new(0x3bc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = 7;
    puVar2 = puVar2 + 1;
    puVar5 = puVar2;
    do {
      puVar7 = puVar5;
      for (iVar4 = 0x22; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
      puVar5[0x20] = 2;
      iVar6 = iVar6 + -1;
      puVar5 = puVar5 + 0x22;
    } while (iVar6 != 0);
  }
  *(undefined4 **)(paVar1 + 0x90) = puVar2;
  _entAnimSetSeqName(paVar1,0,s_SATYR_SEQ_IDLE);
  _entAnimSetSeqName(paVar1,1,s_SATYR_SEQ_SHOOT_ARROW);
  _entAnimSetSeqName(paVar1,2,s_SATYR_SEQ_WOUNDED);
  _entAnimSetSeqName(paVar1,3,s_SATYR_SEQ_RUN);
  _entAnimSetSeqName(paVar1,4,s_SATYR_SEQ_DEATH1);
  _entAnimSetSeqName(paVar1,5,s_SATYR_SEQ_DEATH2);
  _entAnimSetSeqName(paVar1,6,s_SATYR_SEQ_APPEAR);
  entAnimAssignTplSeq(paVar1,local_4,local_8);
  this_00 = (animSYSTEM *)operator_new(0x14);
  if ((this_00 != (animSYSTEM *)0x0) &&
     (piVar3 = (int *)animSYSTEM::animSYSTEM(this_00,7,0), piVar3 != (int *)0x0)) {
    *(int **)(paVar1 + 0xa4) = piVar3;
    (**(code **)(*piVar3 + 0xc))(0,0,1,0xffffffff);
    (**(code **)(*piVar3 + 0x14))(0);
    (**(code **)(*piVar3 + 0x14))(3);
    (**(code **)(*piVar3 + 0x10))(2,0,1,2);
    (**(code **)(*piVar3 + 0x14))(2);
    (**(code **)(*piVar3 + 0x10))(4,0,1,4);
    (**(code **)(*piVar3 + 0x10))(5,0,1,5);
    (**(code **)(*piVar3 + 4))(3,1,0,1,1);
    (**(code **)(*piVar3 + 4))(4,4,2,4,1);
    (**(code **)(*piVar3 + 4))(5,5,2,5,1);
    (**(code **)(*piVar3 + 4))(4,5,2,4,1);
    (**(code **)(*piVar3 + 4))(5,4,2,5,1);
    if (local_4 != (animSEQ *)0x0) {
      operator_delete(local_4 + -4);
    }
    *(uint *)(*(int *)(paVar1 + 0x90) + 0x2a4) = *(uint *)(*(int *)(paVar1 + 0x90) + 0x2a4) | 1;
    *(uint *)(*(int *)(paVar1 + 0x90) + 0x32c) = *(uint *)(*(int *)(paVar1 + 0x90) + 0x32c) | 1;
    return 1;
  }
  return 0;
}




/* from: ai_satyr.cpp
   addr: 0044DB90 */

void __thiscall aiSATYR::SetMovementSpeed(aiSATYR *this)

{
  *(undefined4 *)(this + 0x153) = 0x41700000;
  if (*(int *)(*(int *)(this + 0xbc) + 0xe0) == 3) {
    *(undefined4 *)(this + 0x15b) = 0x43b40000;
  }
  else {
    *(undefined4 *)(this + 0x15b) = 0x43340000;
    *(uint *)(this + 1099) = *(uint *)(this + 1099) | 0x200;
  }
  if (0 < *(int *)(this + 0x54f)) {
    *(uint *)(this + 1099) = *(uint *)(this + 1099) | 0x200;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_satyr.cpp
   addr: 0044DBF0 */

int __thiscall aiSATYR::ProcessINIT(aiSATYR *this,void *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  objOBJ *poVar5;
  sncCHANNEL *this_00;
  int local_10;
  m3dV local_c [12];
  
  local_10 = 0;
  if (((byte)this[0xb4] & 1) == 0) {
    *(uint *)(this + 1099) = *(uint *)(this + 1099) | 0x40000;
  }
  iVar4 = aiNPC_WR::ProcessINIT((aiNPC_WR *)this,param_1);
  if (iVar4 == 0) {
    return 0;
  }
  *(undefined4 *)(this + 0x4a7) = 0x43960000;
  *(undefined4 *)(this + 0x4ab) = 0x43960000;
  *(undefined4 *)(this + 0x16b) = 0x3f333333;
  *(undefined4 *)(this + 0x17f) = 0x43340000;
  *(undefined4 *)(this + 0x187) = 0x43340000;
  *(undefined4 *)(this + 0x16f) = 0x3f570a3e;
  *(undefined1 **)(this + 0x52b) = &DAT_42480000;
  *(undefined4 *)(this + 0x15f) = 0x428c0000;
  *(undefined4 *)(this + 0x18b) = 0x42f00000;
  *(uint *)(this + 0x44f) = *(uint *)(this + 0x44f) | 0x8002;
  *(undefined4 *)(this + 0x547) = 0;
  *(undefined4 *)(this + 0x54b) = 0;
  *(undefined4 *)(this + 0xd0) = 0x40e00000;
  *(undefined4 *)(this + 0xcc) = 0x40e00000;
  poVar5 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_CENTRE);
  *(objOBJ **)(this + 0x527) = poVar5;
  if (poVar5 == (objOBJ *)0x0) {
    return 0;
  }
  animINST::GetPos(*(animINST **)(this + 0xbc),local_c);
  this_00 = (sncCHANNEL *)operator_new(0xbc);
  uVar2 = DAT_005d3fa0;
  uVar1 = DAT_005d3f9c;
  if (this_00 == (sncCHANNEL *)0x0) {
    this_00 = (sncCHANNEL *)0x0;
  }
  else {
    sncCHANNEL::sncCHANNEL(this_00);
    *(undefined4 *)(this_00 + 0x74) = _m3dVZero;
    *(undefined4 *)(this_00 + 0x78) = DAT_00963740;
    uVar3 = DAT_00963744;
    *(undefined4 *)(this_00 + 0x80) = 0;
    *(undefined4 *)(this_00 + 0x7c) = uVar3;
    *(undefined ***)this_00 = &sncCHANNEL_3D::_vftable_;
    *(undefined4 *)(this_00 + 0x8c) = 0x43b40000;
    *(undefined4 *)(this_00 + 0x90) = 0x43b40000;
    *(undefined4 *)(this_00 + 0x84) = uVar1;
    *(undefined4 *)(this_00 + 0x88) = uVar2;
    *(undefined4 *)(this_00 + 0x94) = 0;
    *(undefined4 *)(this_00 + 0x98) = _m3dVZero;
    *(undefined4 *)(this_00 + 0x9c) = DAT_00963740;
    *(undefined4 *)(this_00 + 0xa0) = DAT_00963744;
    *(undefined4 *)(this_00 + 0xa4) = _m3dVZero;
    *(undefined4 *)(this_00 + 0xa8) = DAT_00963740;
    *(undefined4 *)(this_00 + 0xac) = DAT_00963744;
    *(undefined4 *)(this_00 + 0xb0) = _m3dVUnitZ;
    *(undefined4 *)(this_00 + 0xb4) = DAT_005f99a0;
    uVar1 = DAT_005f99a4;
    *(undefined ***)this_00 = &sncCHANNEL_SPH::_vftable_;
    *(undefined4 *)(this_00 + 0xb8) = uVar1;
  }
  *(sncCHANNEL **)(this + 0x543) = this_00;
  if (this_00 == (sncCHANNEL *)0x0) {
    return 0;
  }
  gsSND_SYSTEM::AddChannel(gsSysSound,this_00,(entIACTIVE_OBJ *)this,(objOBJ *)0x0);
  aiNPC::GetInt((aiNPC *)this,s_AI_PROP,s_isNoSFXAppear,&local_10);
  poVar5 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_ROOT);
  *(objOBJ **)(this + 0x163) = poVar5;
  if (poVar5 == (objOBJ *)0x0) {
    return 0;
  }
  *(objOBJ **)(this + 0x527) = poVar5;
  *(uint *)poVar5 = *(uint *)poVar5 | 0x200;
  if (((byte)this[0xb4] & 1) != 0) {
    *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) | 0x1000000;
  }
  return 1;
}




/* from: ai_satyr.cpp
   addr: 0044DE70 */

void __thiscall aiSATYR::ParseNameClass(aiSATYR *this)

{
  int iVar1;
  
  aiNPC_WR::ParseNameClass((aiNPC_WR *)this);
  *(undefined4 *)(this + 0x553) = 0;
  if ((*(uint *)(this + 1099) & 0x40000) != 0) {
    *(undefined4 *)(this + 0x37f) = 0x42200000;
    *(uint *)(this + 1099) = *(uint *)(this + 1099) | 0x20;
    *(undefined4 *)(this + 0x54f) = 5;
    return;
  }
  if (*(int *)(this + 0x49f) != 0) {
    iVar1 = *(int *)(*(int *)(this + 0x49f) + 0xd8);
    if ((iVar1 != 0) && (iVar1 != 0x94)) {
      *(undefined4 *)(this + 0x54f) = 5;
      *(int *)(this + 0x553) = iVar1;
      return;
    }
    *(undefined4 *)(this + 0x553) = 0;
  }
  *(undefined4 *)(this + 0x54f) = 5;
  return;
}




/* from: ai_satyr.cpp
   addr: 0044DF00 */

int __thiscall aiSATYR::ProcessCDT_FIREABLE(aiSATYR *this,dmgDAMAGE *param_1)

{
  aiNPC_WR::ProcessCDT_FIREABLE((aiNPC_WR *)this,param_1);
  return 1;
}




/* from: ai_satyr.cpp
   addr: 0044DF30 */

void __thiscall aiSATYR::Explode(aiSATYR *this,dmgDAMAGE *param_1,int param_2)

{
  int iVar1;
  m3dV *pmVar2;
  m3dV local_c [12];
  
  pmVar2 = (m3dV *)0x0;
  iVar1 = *(int *)(param_1 + 4);
  if (((iVar1 == 0) || (iVar1 == 2)) || (iVar1 == 3)) {
    pmVar2 = (m3dV *)(param_1 + 0x10);
  }
  objOBJ::GetOrigin(*(objOBJ **)(this + 0x527),local_c);
  aiNPC_WR::StartChunkMeat((aiNPC_WR *)this,3,param_2,local_c,pmVar2);
  aiNPC_WR::StartBlood((aiNPC_WR *)this,7,param_2,local_c,(m3dV *)0x0,(m3dV *)0x0,pmVar2);
  gsSND_SYSTEM::Play(gsSysSound,(sncSOUND_DESCR_3D *)&DAT_0060cb90,local_c);
  msgSYSTEM::PostMsg(&msgSystem,(msgADDR *)this,2,(msgADDR *)this);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_satyr.cpp
   addr: 0044DFE0 */

int __thiscall aiSATYR::SelectGoal(aiSATYR *this)

{
  aiENEMY *this_00;
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 extraout_MM1;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  undefined1 auVar7 [16];
  float local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  m3dV local_c [4];
  undefined4 local_8;
  
  uVar1 = *(uint *)(this + 1099);
  if ((uVar1 & 0x40000) != 0) {
    if (((((uVar1 & 0x10000000) != 0) && ((uVar1 & 0x80000008) == 0)) &&
        ((*(uint *)(this + 0x51b) & 0x200) == 0)) && (*(float *)(this + 0x547) <= _DAT_005d3f94)) {
      *(undefined4 *)(this + 0x54f) = 1;
      *(uint *)(this + 1099) = uVar1 | 0x1000;
      iVar2 = aiNPC::SelectGoal((aiNPC *)this);
      return iVar2;
    }
    *(uint *)(this + 1099) = uVar1 & 0xffffefff;
    iVar2 = aiNPC::SelectGoal((aiNPC *)this);
    return iVar2;
  }
  this_00 = (aiENEMY *)(this + 0x4bb);
  aiENEMY::GetPos(this_00,(m3dV *)&local_30);
  aiNPC::GetPosRooted((aiNPC *)this,local_c);
  if ((_DAT_005d3f94 <= *(float *)(this + 0x54b)) && ((*(uint *)(this + 1099) & 0x400000) == 0))
  goto LAB_0044e25c;
  uVar1 = *(uint *)(this + 1099);
  if (((uVar1 & 0x10000000) == 0) ||
     ((((uVar1 & 0x80000008) != 0 || ((*(uint *)(this + 0x51b) & 0x200) != 0)) ||
      (_DAT_005d3f94 < *(float *)(this + 0x547))))) {
LAB_0044e20b:
    *(undefined4 *)(this + 0x54f) = 0;
    *(undefined4 *)(this + 0x54b) = 0x40400000;
    *(uint *)(this + 1099) = *(uint *)(this + 1099) & 0xffffefff;
    if (*(aiAREA **)(this + 0x553) == (aiAREA *)0x0) {
      aiNPC::SelectGoal((aiNPC *)this);
    }
    else {
      aiAREA::GetRandomPos(*(aiAREA **)(this + 0x553),(m3dV *)(this + 0x3f3),(m3dV *)&local_30);
      *(undefined4 *)(this + 0x3f7) = local_8;
    }
  }
  else {
    if ((uVar1 & 0x40000) == 0) {
      animINST::GetPos(*(animINST **)(this + 0xbc),(m3dV *)&local_24);
      aiENEMY::GetPos(this_00,(m3dV *)&local_18);
      local_34 = (local_24 - local_18) * (local_24 - local_18) +
                 (local_20 - local_14) * (local_20 - local_14) +
                 (local_1c - local_10) * (local_1c - local_10);
      if (m3dSimdType == 0) {
        local_34 = local_34 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
        auVar7 = rsqrtss(ZEXT416((uint)local_34),ZEXT416((uint)local_34));
        fVar6 = auVar7._0_4_;
        local_34 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar6 *
                   (`float___cdecl_m3dSqrt(float)'::__l2::three - local_34 * fVar6 * fVar6) *
                   local_34;
      }
      else if (m3dSimdType == 1) {
        FastExitMediaState();
        uVar3 = (ulonglong)(uint)local_34;
        uVar4 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar3);
        uVar5 = PackedFloatingMUL(uVar4,uVar4);
        uVar5 = PackedFloatingReciprocalSQRIter1(uVar5,uVar3);
        uVar4 = PackedFloatingReciprocalIter2(uVar5,uVar4);
        uVar4 = PackedFloatingMUL(uVar4,uVar3);
        local_34 = (float)uVar4;
        FastExitMediaState();
      }
      else {
        local_34 = SQRT(local_34);
      }
      if (local_34 < ___real_41a00000) goto LAB_0044e20b;
    }
    if (*(int *)(this + 0x54f) == 0) {
      *(undefined4 *)(this + 0x54f) = 5;
    }
    *(uint *)(this + 1099) = *(uint *)(this + 1099) | 0x1000;
    animINST::GetPos(*(animINST **)(this + 0xbc),(m3dV *)(this + 0x3f3));
  }
LAB_0044e25c:
  if ((((*(uint *)(this + 1099) & 0x1000) == 0) && ((*(uint *)(this + 1099) & 1) != 0)) &&
     (*(float *)(this + 0x54b) < _DAT_005d3f94)) {
    iVar2 = aiENEMY::IsDead(this_00);
    if ((iVar2 == 0) && ((*(uint *)(this + 1099) & 0x10000000) != 0)) {
      if (*(int *)(this + 0x54f) == 0) {
        *(undefined4 *)(this + 0x54f) = 5;
      }
      *(uint *)(this + 1099) = *(uint *)(this + 1099) | 0x1000;
      animINST::GetPos(*(animINST **)(this + 0xbc),(m3dV *)(this + 0x3f3));
    }
    else {
      *(undefined4 *)(this + 0x54f) = 0;
      *(uint *)(this + 1099) = *(uint *)(this + 1099) & 0xffffefff;
      aiNPC::SelectGoal((aiNPC *)this);
      *(undefined4 *)(this + 0x54b) = 0x40400000;
    }
  }
  if (*(int *)(*(int *)(this + 0xbc) + 0xe0) == 1) {
    *(undefined4 *)(this + 0x3ff) = local_30;
    *(undefined4 *)(this + 0x403) = local_2c;
    *(undefined4 *)(this + 0x407) = local_28;
    return 1;
  }
  *(undefined4 *)(this + 0x3ff) = *(undefined4 *)(this + 0x3f3);
  *(undefined4 *)(this + 0x403) = *(undefined4 *)(this + 0x3f7);
  *(undefined4 *)(this + 0x407) = *(undefined4 *)(this + 0x3fb);
  return 1;
}




/* from: ai_satyr.cpp
   addr: 0044E360 */

int __thiscall aiSATYR::EvalRunningGoalSeq(aiSATYR *this)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this + 1099);
  if ((uVar1 & 1) != 0) {
    return uVar1 >> 0x1c & 1;
  }
  return ((uint)(~(byte)(uVar1 >> 8) & 0x10 | 8) << 8) >> 0xb;
}




/* from: ai_satyr.cpp
   addr: 0044E380 */

int __thiscall aiSATYR::EvalAnimGoalSeq(aiSATYR *this)

{
  int iVar1;
  
  if ((*(uint *)(this + 1099) & 0x200000) != 0) {
    iVar1 = m3dRandSelect(4,5);
    return iVar1;
  }
  iVar1 = aiENEMY::IsDead((aiENEMY *)(this + 0x4bb));
  if (iVar1 != 0) {
    return 0;
  }
  if ((*(uint *)(this + 0x53f) & 0x1000000) != 0) {
    return 6;
  }
  if ((*(uint *)(this + 1099) & 0x40000) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0044e3d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (**(code **)(*(int *)this + 0x1c4))();
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x0044e3e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)(*(int *)this + 0x1c8))();
  return iVar1;
}




/* from: ai_satyr.cpp
   addr: 0044E3F0 */

void __thiscall aiSATYR::ProcessActionFrame(aiSATYR *this)

{
  int iVar1;
  
  iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),1,0);
  if (iVar1 != 0) {
    LaunchOneProjectile(this);
  }
  iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),6,0);
  if (iVar1 != 0) {
    *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) & 0xfeffffff;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_satyr.cpp
   addr: 0044E430 */

void __thiscall aiSATYR::LaunchOneProjectile(aiSATYR *this)

{
  objOBJ *poVar1;
  entENTITY *peVar2;
  int iVar3;
  m3dMATR *pmVar4;
  physINIT local_104;
  undefined1 local_103;
  undefined2 local_102;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined1 local_b4;
  undefined4 local_b0 [2];
  undefined4 local_a8;
  undefined4 local_a4 [2];
  undefined4 local_9c;
  animCREATE_DATA local_98 [18];
  m3dMATR local_86 [134];
  
  local_100 = _m3dVZero;
  local_f4 = _m3dVZero;
  local_fc = DAT_00963740;
  local_f0 = DAT_00963740;
  local_e4 = DAT_005d3f98;
  local_e0 = 1;
  local_b4 = 1;
  local_104 = (physINIT)0x0;
  local_103 = 0x40;
  local_f8 = DAT_00963744;
  local_ec = DAT_00963744;
  local_e8 = 0x3dcccccd;
  local_dc = 0;
  local_d8 = 0;
  local_d4 = 0;
  local_d0 = 0;
  local_cc = 0xbf800000;
  local_c8 = 0;
  local_c4 = 0xffffffff;
  local_c0 = 0xffffffff;
  local_bc = 0xffffffff;
  local_b8 = 0xbf800000;
  local_102 = 0x51;
  animCREATE_DATA::animCREATE_DATA(local_98);
  animINST::Validate(*(animINST **)(this + 0xbc),4);
  poVar1 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_arrow__lod01_4);
  if (poVar1 != (objOBJ *)0x0) {
    objOBJ::GetOrigin(poVar1,(m3dV *)local_b0);
    if (*(float *)(this + 0x3cf) < ___real_40000000) {
      aiNPC::GetPosRooted((aiNPC *)this,(m3dV *)local_a4);
      local_b0[0] = local_a4[0];
      local_a8 = local_9c;
    }
    local_e0 = 2;
    local_d4 = 2;
    local_bc = *(undefined4 *)(this + 0x8c);
    local_cc = 0x41400000;
    local_c8 = 0x3fc00000;
    local_c0 = 3;
    local_e8 = 0x3e99999a;
    local_e4 = 0x40e00000;
    local_d8 = 0;
    local_b4 = 0;
    GetShootArrowPhysParam(this,(m3dV *)local_b0,&local_104);
    poVar1 = poVar1 + 0x3c;
    pmVar4 = local_86;
    for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined4 *)pmVar4 = *(undefined4 *)poVar1;
      poVar1 = poVar1 + 4;
      pmVar4 = pmVar4 + 4;
    }
    m3dMATR::Translate(local_86,(m3dV *)local_b0,0);
    peVar2 = entCreate(gsScenePtr,s_pjl_satyr_arrow,s_pjl_satyr_arrow,local_98,&local_104,0);
    if ((peVar2 != (entENTITY *)0x0) &&
       (iVar3 = *(int *)(this + 0x54f), *(int *)(this + 0x54f) = iVar3 + -1, iVar3 + -1 < 1)) {
      *(undefined4 *)(this + 0x547) = 0x3dcccccd;
    }
  }
  return;
}




/* from: ai_satyr.cpp
   addr: 0044E610
   addr: 0044E610 */

void __thiscall aiGEFEST_GENERIC::UpdateTimers(aiGEFEST_GENERIC *this)

{
  float extraout_EDX;
  float extraout_EDX_00;
  
  aiNPC_WR::UpdateTimers((aiNPC_WR *)this);
  m3dUpdateTimeField((float *)(this + 0x547),extraout_EDX);
  m3dUpdateTimeField((float *)(this + 0x54b),extraout_EDX_00);
  return;
}




/* from: ai_satyr.cpp
   addr: 0044E640 */

void __thiscall aiSATYR::FillSoundFlags(aiSATYR *this)

{
  if ((*(uint *)(*(int *)(this + 0xbc) + 4) & 0x4000) != 0) {
    switch(*(undefined4 *)(*(int *)(this + 0xbc) + 0xe0)) {
    case 1:
      *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 0x10;
      return;
    case 2:
      *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 8;
      return;
    case 3:
      *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 0x20;
      return;
    case 4:
      *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 2;
      return;
    case 5:
      *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 4;
      break;
    case 6:
      *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 1;
      return;
    }
  }
  return;
}




/* from: ai_satyr.cpp
   addr: 0044E6E0 */

void __thiscall aiSATYR::PlaySounds(aiSATYR *this)

{
  uint uVar1;
  
  if (((byte)this[0xf8] & 2) != 0) {
    (**(code **)(**(int **)(this + 0x543) + 4))(&DAT_0060c9f0,0);
  }
  uVar1 = *(uint *)(this + 0xf8);
  if ((uVar1 & 4) != 0) {
    (**(code **)(**(int **)(this + 0x543) + 4))(&DAT_0060ca58,0);
    aiNPC::PlaySounds((aiNPC *)this);
    return;
  }
  if ((uVar1 & 8) != 0) {
    (**(code **)(**(int **)(this + 0x543) + 4))(&DAT_0060c920,0);
    aiNPC::PlaySounds((aiNPC *)this);
    return;
  }
  if ((uVar1 & 0x10) != 0) {
    (**(code **)(**(int **)(this + 0x543) + 4))(&DAT_0060cb28,0);
    aiNPC::PlaySounds((aiNPC *)this);
    return;
  }
  if (((uVar1 & 1) == 0) && ((uVar1 & 0x20) != 0)) {
    (**(code **)(**(int **)(this + 0x543) + 4))(&DAT_0060cac0,0);
  }
  aiNPC::PlaySounds((aiNPC *)this);
  return;
}




/* from: ai_satyr.cpp
   addr: 0044E790 */

int __thiscall aiSATYR::IsArmoredObject(aiSATYR *this,char *param_1)

{
  int iVar1;
  
  iVar1 = strnicmp(param_1,s_bow_,4);
  if (iVar1 != 0) {
    iVar1 = strnicmp(param_1,s_cyl4,4);
    if (iVar1 != 0) {
      iVar1 = strnicmp(param_1,s_quiver,6);
      if (iVar1 != 0) {
        iVar1 = strnicmp(param_1,s_arrow_,6);
        if (iVar1 != 0) {
          return 0;
        }
      }
    }
  }
  return 1;
}




/* from: ai_satyr.cpp
   addr: 0044E800 */

entENTITY * __fastcall aiSATYR::Create(animINST *param_1)

{
  aiNPC *this;
  
  this = (aiNPC *)operator_new(0x557);
  if (this != (aiNPC *)0x0) {
    aiNPC::aiNPC(this);
    *(undefined4 *)(this + 0x51b) = 0;
    *(undefined4 *)(this + 0x527) = 0;
    *(undefined4 *)(this + 0x53f) = 0;
    *(undefined4 *)(this + 0x543) = 0;
    *(undefined ***)this = &_vftable_;
    *(undefined4 *)(this + 0x94) = 9;
    return (entENTITY *)this;
  }
  return (entENTITY *)0x0;
}




/* from: ai_satyr.cpp
   addr: 0044E850 */

int __thiscall aiSATYR::IsAnimSeqGoodForFallback(aiSATYR *this)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)this + 200))();
  return (uint)(iVar1 != 5);
}

