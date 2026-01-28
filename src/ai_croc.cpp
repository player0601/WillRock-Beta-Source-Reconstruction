
/* from: ai_croc.cpp
   addr: 00438B60 */

int __fastcall aiCrocInit(void)

{
  int iVar1;
  
  iVar1 = entRegisterClass(s_ai_croc,0x244e5043,0x32,aiCROC::Create,s_ai_croc,0);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = sncLinkSndListData(1,(sncSOUND_DESCR_3D *)&DAT_0060ae48);
  return (uint)(iVar1 != 0);
}




/* from: ai_croc.cpp
   addr: 00438BA0 */

int __thiscall aiCROC::SetupAniSystem(aiCROC *this)

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
  iVar6 = 5;
  *(undefined4 *)(paVar1 + 0x8c) = 5;
  puVar2 = (undefined4 *)operator_new(0x2ac);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = 5;
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
  _entAnimSetSeqName(paVar1,0,s_CROC_SEQ_IDLE);
  _entAnimSetSeqName(paVar1,1,s_CROC_SEQ_SWIM);
  _entAnimSetSeqName(paVar1,2,s_CROC_SEQ_BITE);
  _entAnimSetSeqName(paVar1,3,s_CROC_SEQ_TURN);
  _entAnimSetSeqName(paVar1,4,s_CROC_SEQ_DEATH);
  entAnimAssignTplSeq(paVar1,local_4,local_8);
  this_00 = (animSYSTEM *)operator_new(0x14);
  if ((this_00 != (animSYSTEM *)0x0) &&
     (piVar3 = (int *)animSYSTEM::animSYSTEM(this_00,5,0), piVar3 != (int *)0x0)) {
    *(int **)(paVar1 + 0xa4) = piVar3;
    (**(code **)(*piVar3 + 0xc))(0,0,1,0xffffffff);
    (**(code **)(*piVar3 + 0x14))(0);
    (**(code **)(*piVar3 + 0x14))(1);
    (**(code **)(*piVar3 + 0x10))(3,0,1,3);
    (**(code **)(*piVar3 + 0x14))(3);
    (**(code **)(*piVar3 + 0x10))(4,0,1,4);
    (**(code **)(*piVar3 + 4))(1,2,0,2,1);
    (**(code **)(*piVar3 + 4))(4,4,2,4,1);
    if (local_4 != (animSEQ *)0x0) {
      operator_delete(local_4 + -4);
    }
    return 1;
  }
  return 0;
}




/* from: ai_croc.cpp
   addr: 00438D40 */

void __thiscall aiCROC::SetMovementSpeed(aiCROC *this)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(this + 0xbc) + 0xe0);
  if (iVar1 == 0) {
    *(undefined4 *)(this + 0x153) = 0x4091eb85;
    *(undefined4 *)(this + 0x15b) = 0x42340000;
    return;
  }
  if (iVar1 != 1) {
    if (iVar1 != 2) {
      *(undefined4 *)(this + 0x15b) = 0x43340000;
      *(uint *)(this + 1099) = *(uint *)(this + 1099) | 0x200;
      return;
    }
    *(undefined4 *)(this + 0x153) = 0x41245a1d;
    *(undefined4 *)(this + 0x15b) = 0x42340000;
    return;
  }
  *(undefined4 *)(this + 0x15b) = 0x42960000;
  *(undefined4 *)(this + 0x153) = 0x410e147b;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_croc.cpp
   addr: 00438DB0 */

int __thiscall aiCROC::ProcessINIT(aiCROC *this,void *param_1)

{
  undefined4 uVar1;
  int iVar2;
  sncCHANNEL *this_00;
  objOBJ *poVar3;
  int local_4;
  
  local_4 = 0;
  iVar2 = aiNPC_WR_FLY::ProcessINIT((aiNPC_WR_FLY *)this,param_1);
  if (iVar2 == 0) {
    return 0;
  }
  *(undefined1 **)(this + 0xd0) = &DAT_42480000;
  *(undefined1 **)(this + 0xcc) = &DAT_42480000;
  *(undefined4 *)(this + 0x16b) = 0x3f800000;
  *(undefined4 *)(this + 0x16f) = 0x40400000;
  *(undefined4 *)(this + 0x173) = 0xbf000000;
  *(undefined4 *)(this + 0x17b) = 0x40200000;
  *(undefined4 *)(this + 0x197) = 0x3ff33333;
  *(undefined4 *)(this + 0x4b3) = 0x42f00000;
  *(undefined4 *)(this + 0x4a7) = 0x43960000;
  *(undefined4 *)(this + 0x4ab) = 0x43960000;
  *(undefined4 *)(this + 0x557) = 0x41f00000;
  *(undefined4 *)(this + 0x52b) = 0x430c0000;
  *(undefined4 *)(this + 0x17f) = 0x43340000;
  *(undefined4 *)(this + 0x15f) = 0x428c0000;
  *(undefined4 *)(this + 0x54f) = 0;
  *(undefined4 *)(this + 0x553) = 0;
  *(undefined4 *)(this + 0x497) = 0x41200000;
  *(undefined4 *)(this + 0x49b) = 0x41100000;
  *(undefined4 *)(this + 0x55b) = 3;
  *(undefined4 *)(this + 0x373) = 0x3e800000;
  *(undefined4 *)(this + 0x377) = 0xc0400000;
  *(undefined4 *)(this + 0x37b) = 0xbfc00000;
  *(undefined4 *)(this + 0x53f) = 0xbf000000;
  *(uint *)(this + 0x44f) = *(uint *)(this + 0x44f) | 0x10003;
  this_00 = (sncCHANNEL *)operator_new(0xbc);
  if (this_00 == (sncCHANNEL *)0x0) {
    this_00 = (sncCHANNEL *)0x0;
  }
  else {
    sncCHANNEL::sncCHANNEL(this_00);
    *(undefined4 *)(this_00 + 0x74) = _m3dVZero;
    *(undefined4 *)(this_00 + 0x78) = DAT_00963740;
    uVar1 = DAT_00963744;
    *(undefined4 *)(this_00 + 0x80) = 0;
    *(undefined4 *)(this_00 + 0x8c) = 0x43b40000;
    *(undefined4 *)(this_00 + 0x90) = 0x43b40000;
    *(undefined4 *)(this_00 + 0x7c) = uVar1;
    *(undefined ***)this_00 = &sncCHANNEL_3D::_vftable_;
    *(undefined4 *)(this_00 + 0x84) = 0x41f00000;
    *(undefined4 *)(this_00 + 0x88) = 0x43160000;
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
  *(sncCHANNEL **)(this + 0x54b) = this_00;
  if (this_00 == (sncCHANNEL *)0x0) {
    return 0;
  }
  gsSND_SYSTEM::AddChannel(gsSysSound,this_00,(entIACTIVE_OBJ *)this,(objOBJ *)0x0);
  aiNPC::GetInt((aiNPC *)this,s_AI_PROP,s_isNoSFXAppear,&local_4);
  if (((*(uint *)(this + 0xb4) & 1) != 0) && (local_4 == 0)) {
    *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 1;
  }
  if ((*(uint *)(this + 0xb4) & 1) != 0) {
    *(uint *)(this + 0x547) = *(uint *)(this + 0x547) | 0x1000000;
  }
  poVar3 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_ROOT);
  *(objOBJ **)(this + 0x163) = poVar3;
  if (poVar3 == (objOBJ *)0x0) {
    return 0;
  }
  *(objOBJ **)(this + 0x527) = poVar3;
  *(uint *)poVar3 = *(uint *)poVar3 | 0x200;
  poVar3 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_ATTACKfocus);
  *(objOBJ **)(this + 0x55f) = poVar3;
  return (uint)(poVar3 != (objOBJ *)0x0);
}




/* from: ai_croc.cpp
   addr: 00439070 */

int __thiscall aiCROC::ProcessCDT_FIREABLE(aiCROC *this,dmgDAMAGE *param_1)

{
  aiNPC_WR::ProcessCDT_FIREABLE((aiNPC_WR *)this,param_1);
  if ((*(uint *)(this + 1099) & 0x200000) == 0) {
    *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 4;
    return 1;
  }
  *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 2;
  return 1;
}




/* from: ai_croc.cpp
   addr: 004390D0 */

void __thiscall aiCROC::Explode(aiCROC *this,dmgDAMAGE *param_1,int param_2)

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
  gsSND_SYSTEM::Play(gsSysSound,(sncSOUND_DESCR_3D *)&DAT_0060ae48,local_c);
  msgSYSTEM::PostMsg(&msgSystem,(msgADDR *)this,2,(msgADDR *)this);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_croc.cpp
   addr: 00439160 */

int __thiscall aiCROC::SelectGoal(aiCROC *this)

{
  int iVar1;
  float local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  m3dV local_c [12];
  
  aiNPC::SelectGoal((aiNPC *)this);
  *(float *)(this + 0x3f7) = *(float *)(this + 0x3f7) + ___real_3e99999a;
  aiENEMY::GetPos((aiENEMY *)(this + 0x4bb),local_c);
  animINST::GetPos(*(animINST **)(this + 0xbc),(m3dV *)&local_18);
  iVar1 = waterIsUnderWater((m3dV *)&local_18,(float)&local_1c,(float *)0x3dcccccd);
  if (iVar1 == 0) {
    *(undefined4 *)(this + 0x3f3) = local_18;
    *(undefined4 *)(this + 0x3f7) = local_14;
    *(undefined4 *)(this + 0x3fb) = local_10;
    *(float *)(this + 0x3f7) = *(float *)(this + 0x3f7) - ___real_40a00000;
    return 1;
  }
  if (local_1c - ___real_3f000000 < *(float *)(this + 0x3f7)) {
    *(float *)(this + 0x3f7) = local_1c - ___real_3f19999a;
  }
  return 1;
}




/* from: ai_croc.cpp
   addr: 00439240 */

int __thiscall aiCROC::EvalAnimGoalSeq(aiCROC *this)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if ((*(uint *)(this + 1099) & 0x200000) != 0) {
    iVar3 = m3dRandSelect(4,4);
    return iVar3;
  }
  iVar3 = aiENEMY::IsDead((aiENEMY *)(this + 0x4bb));
  if (iVar3 != 0) {
    return 0;
  }
  uVar1 = *(uint *)(this + 1099);
  if ((uVar1 & 0x10000) != 0) {
    return 0;
  }
  uVar2 = *(uint *)(this + 0x547);
  if ((uVar2 & 0x100000) != 0) {
    *(uint *)(this + 0x547) = uVar2 | 0x10000;
    *(undefined4 *)(this + 0x55b) = 3;
    return 3;
  }
  if ((uVar2 & 0x10000) != 0) {
    return *(int *)(this + 0x55b);
  }
  if ((uVar1 & 0x1000) != 0) {
    return 2;
  }
  return ((int)(char)~(byte)uVar1 & 4U) >> 2;
}




/* from: ai_croc.cpp
   addr: 004392D0 */

void __thiscall aiCROC::UpdateTimers(aiCROC *this)

{
  float extraout_EDX;
  float extraout_EDX_00;
  
  aiNPC_WR::UpdateTimers((aiNPC_WR *)this);
  m3dUpdateTimeField((float *)(this + 0x54f),extraout_EDX);
  m3dUpdateTimeField((float *)(this + 0x553),extraout_EDX_00);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_croc.cpp
   addr: 00439300 */

void __thiscall aiCROC::Think(aiCROC *this)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  
  aiNPC_WR::Think((aiNPC_WR *)this);
  if ((((*(int *)(*(int *)(this + 0xbc) + 0xe0) != 2) && ((*(uint *)(this + 1099) & 0x1000) == 0))
      && (*(float *)(this + 0x54f) <= ___real_3c23d70a)) &&
     ((*(uint *)(this + 0x547) & 0x10000) == 0)) {
    bVar1 = *(float *)(this + 0x3cf) < ___real_40900000;
    bVar2 = *(float *)(this + 0x3cf) == ___real_40900000;
    uVar3 = *(uint *)(this + 1099) & 0xffffefff;
    *(uint *)(this + 1099) = uVar3;
    if ((bVar1 != bVar2) &&
       (*(float *)(this + 0x3d7) < *(float *)(this + 0x557) !=
        (*(float *)(this + 0x3d7) == *(float *)(this + 0x557)))) {
      *(uint *)(this + 1099) = uVar3 | 0x1000;
    }
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_croc.cpp
   addr: 00439380 */

void __thiscall aiCROC::ProcessActionFrame(aiCROC *this)

{
  int iVar1;
  float extraout_ECX;
  float extraout_EDX;
  ulonglong uVar2;
  undefined8 extraout_MM1;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  undefined1 auVar6 [16];
  float fVar7;
  float fStack_38;
  float local_34;
  float fStack_30;
  float fStack_2c;
  float local_28;
  float fStack_24;
  undefined1 auStack_20 [4];
  dmgGENERAL local_1c [4];
  float fStack_18;
  float fStack_c;
  float fStack_8;
  
  dmgGENERAL::dmgGENERAL(local_1c);
  iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),2,0);
  if (iVar1 != 0) {
    *(uint *)(this + 1099) = *(uint *)(this + 1099) & 0xffffefff;
    fVar7 = m3dRandRange(extraout_ECX,extraout_EDX);
    *(float *)(this + 0x54f) = fVar7;
    animINST::Validate(*(animINST **)(this + 0xbc),4);
    objOBJ::GetOrigin(*(objOBJ **)(this + 0x55f),(m3dV *)&local_34);
    (**(code **)(*(int *)this + 0xe4))(&local_28);
    fVar7 = (fStack_2c - fStack_38) * (fStack_2c - fStack_38) +
            (local_28 - local_34) * (local_28 - local_34) +
            (fStack_24 - fStack_30) * (fStack_24 - fStack_30);
    if (m3dSimdType == 0) {
      fVar7 = fVar7 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
      auVar6 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
      fVar5 = auVar6._0_4_;
      fVar7 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar5 *
              (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar7 * fVar5 * fVar5) * fVar7;
    }
    else if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar2 = (ulonglong)(uint)fVar7;
      uVar3 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar2);
      uVar4 = PackedFloatingMUL(uVar3,uVar3);
      uVar4 = PackedFloatingReciprocalSQRIter1(uVar4,uVar2);
      uVar3 = PackedFloatingReciprocalIter2(uVar4,uVar3);
      uVar3 = PackedFloatingMUL(uVar3,uVar2);
      fVar7 = (float)uVar3;
      FastExitMediaState();
    }
    else {
      fVar7 = SQRT(fVar7);
    }
    fStack_8 = fStack_30;
    fStack_c = local_34;
    fStack_18 = ___real_41700000;
    if (((___real_3f000000 <= fVar7) && (fStack_18 = ___real_00000000, fVar7 <= ___real_3fc00000))
       && (fStack_18 = ___real_40f00000, (float)(1.0 < _DAT_005d26c4) == ___real_00000000)) {
      fStack_18 = ___real_41700000 - (fVar7 - ___real_3f000000) * ___real_41700000;
    }
    if ((___real_3dcccccd < fStack_18) && (*(msgADDR **)(this + 0x4c3) != (msgADDR *)0x0)) {
      msgSYSTEM::SendMsg(&msgSystem,*(msgADDR **)(this + 0x4c3),0x4c5,auStack_20,(msgADDR *)this);
    }
  }
  return;
}




/* from: ai_croc.cpp
   addr: 004395B0 */

void __thiscall aiCROC::FillSoundFlags(aiCROC *this)

{
  switch(*(undefined4 *)(*(int *)(this + 0xbc) + 0xe0)) {
  case 0:
  case 3:
    *(undefined4 *)(this + 0xf8) = 0;
    break;
  case 1:
    *(undefined4 *)(this + 0xf8) = 0x10;
    return;
  case 2:
    *(undefined4 *)(this + 0xf8) = 8;
    return;
  case 4:
    *(undefined4 *)(this + 0xf8) = 2;
    return;
  }
  return;
}




/* from: ai_croc.cpp
   addr: 00439610 */

void __thiscall aiCROC::PlaySounds(aiCROC *this)

{
  if (((byte)this[0xf8] & 8) != 0) {
    (**(code **)(**(int **)(this + 0x54b) + 4))(&DAT_0060ae48,0);
  }
  aiNPC::PlaySounds((aiNPC *)this);
  return;
}




/* from: ai_croc.cpp
   addr: 00439640 */

entENTITY * __fastcall aiCROC::Create(animINST *param_1)

{
  aiNPC *this;
  
  this = (aiNPC *)operator_new(0x563);
  if (this != (aiNPC *)0x0) {
    aiNPC::aiNPC(this);
    *(undefined4 *)(this + 0x51b) = 0;
    *(undefined4 *)(this + 0x527) = 0;
    *(undefined4 *)(this + 0x547) = 0;
    *(undefined4 *)(this + 0x54b) = 0;
    *(undefined ***)this = &_vftable_;
    *(undefined4 *)(this + 0x94) = 3;
    return (entENTITY *)this;
  }
  return (entENTITY *)0x0;
}

