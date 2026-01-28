
/* from: ai_cent.cpp
   addr: 004341D0 */

int __fastcall aiCentInit(void)

{
  int iVar1;
  
  iVar1 = entRegisterClass(s_ai_cent,0x244e5043,0x32,aiCENT::Create,s_ai_cent,0);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = aiSketavrInit();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = pjlTridentInit();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = sncLinkSndListData(0xb,(sncSOUND_DESCR_3D *)&DAT_0060a3f8);
  return (uint)(iVar1 != 0);
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_cent.cpp
   addr: 00434220 */

int __fastcall m3dIsBelongPointCyl(m3dV *param_1,m3dV *param_2,m3dV *param_3,float param_4)

{
  m3dV *pmVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 in_MM1;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  float local_24;
  float local_20;
  float local_1c;
  undefined **local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  float local_4;
  
  local_14 = 3;
  local_18 = &m3dSPHERE::_vftable_;
  fVar6 = (*(float *)param_2 - *(float *)param_3) * (*(float *)param_2 - *(float *)param_3) +
          (*(float *)(param_2 + 4) - *(float *)(param_3 + 4)) *
          (*(float *)(param_2 + 4) - *(float *)(param_3 + 4)) +
          (*(float *)(param_2 + 8) - *(float *)(param_3 + 8)) *
          (*(float *)(param_2 + 8) - *(float *)(param_3 + 8));
  if (m3dSimdType == 0) {
    auVar8 = ZEXT416((uint)(fVar6 + `float___cdecl_m3dSqrt(float)'::__l2::very_small));
    rsqrtss(auVar8,auVar8);
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar3 = (ulonglong)(uint)fVar6;
    uVar4 = PackedFloatingReciprocalSQRAprox(in_MM1,uVar3);
    uVar5 = PackedFloatingMUL(uVar4,uVar4);
    uVar5 = PackedFloatingReciprocalSQRIter1(uVar5,uVar3);
    uVar4 = PackedFloatingReciprocalIter2(uVar5,uVar4);
    in_MM1 = PackedFloatingMUL(uVar4,uVar3);
    FastExitMediaState();
  }
  local_24 = *(float *)param_3 - *(float *)param_2;
  local_20 = *(float *)(param_3 + 4) - *(float *)(param_2 + 4);
  local_1c = *(float *)(param_3 + 8) - *(float *)(param_2 + 8);
  fVar6 = (*(float *)param_2 - *(float *)param_3) * (*(float *)param_2 - *(float *)param_3) +
          (*(float *)(param_2 + 4) - *(float *)(param_3 + 4)) *
          (*(float *)(param_2 + 4) - *(float *)(param_3 + 4)) +
          (*(float *)(param_2 + 8) - *(float *)(param_3 + 8)) *
          (*(float *)(param_2 + 8) - *(float *)(param_3 + 8));
  if (m3dSimdType == 0) {
    fVar6 = fVar6 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar8 = rsqrtss(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6));
    fVar7 = auVar8._0_4_;
    param_3 = (m3dV *)(`float___cdecl_m3dSqrt(float)'::__l2::half * fVar7 *
                       (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar6 * fVar7 * fVar7) * fVar6
                      );
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar3 = (ulonglong)(uint)fVar6;
    uVar4 = PackedFloatingReciprocalSQRAprox(in_MM1,uVar3);
    uVar5 = PackedFloatingMUL(uVar4,uVar4);
    uVar5 = PackedFloatingReciprocalSQRIter1(uVar5,uVar3);
    uVar4 = PackedFloatingReciprocalIter2(uVar5,uVar4);
    in_MM1 = PackedFloatingMUL(uVar4,uVar3);
    param_3 = (m3dV *)in_MM1;
    FastExitMediaState();
  }
  else {
    param_3 = (m3dV *)SQRT(fVar6);
  }
  pmVar1 = param_3;
  param_3 = (m3dV *)(uint)(ABS((float)param_3) < ___real_3a83126f);
  if ((float)(int)param_3 != ___real_00000000) {
    fVar6 = (*(float *)param_2 - *(float *)param_1) * (*(float *)param_2 - *(float *)param_1) +
            (*(float *)(param_2 + 4) - *(float *)(param_1 + 4)) *
            (*(float *)(param_2 + 4) - *(float *)(param_1 + 4)) +
            (*(float *)(param_2 + 8) - *(float *)(param_1 + 8)) *
            (*(float *)(param_2 + 8) - *(float *)(param_1 + 8));
    if (m3dSimdType == 0) {
      fVar6 = fVar6 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
      auVar8 = rsqrtss(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6));
      fVar7 = auVar8._0_4_;
      param_3 = (m3dV *)(`float___cdecl_m3dSqrt(float)'::__l2::half * fVar7 *
                         (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar6 * fVar7 * fVar7) *
                        fVar6);
    }
    else if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar3 = (ulonglong)(uint)fVar6;
      uVar4 = PackedFloatingReciprocalSQRAprox(in_MM1,uVar3);
      uVar5 = PackedFloatingMUL(uVar4,uVar4);
      uVar5 = PackedFloatingReciprocalSQRIter1(uVar5,uVar3);
      uVar4 = PackedFloatingReciprocalIter2(uVar5,uVar4);
      uVar4 = PackedFloatingMUL(uVar4,uVar3);
      param_3 = (m3dV *)uVar4;
      FastExitMediaState();
    }
    else {
      param_3 = (m3dV *)SQRT(fVar6);
    }
    if ((float)param_3 < param_4) {
      return 1;
    }
    return 0;
  }
  m3dNormalize((m3dV *)&local_24);
  local_c = *(undefined4 *)(param_1 + 4);
  local_10 = *(undefined4 *)param_1;
  local_8 = *(undefined4 *)(param_1 + 8);
  local_4 = param_4;
  iVar2 = m3dSPHERE::IsectRay((m3dSPHERE *)&local_18,param_2,(m3dV *)&local_24,(float)pmVar1,
                              (m3dV *)0x0,(float *)0x0,(int *)0x0);
  return (uint)(iVar2 != 0);
}




/* from: ai_cent.cpp
   addr: 00434530 */

entENTITY * __fastcall aiCENT::Create(animINST *param_1)

{
  aiNPC *this;
  
  this = (aiNPC *)operator_new(0x593);
  if (this != (aiNPC *)0x0) {
    aiNPC::aiNPC(this);
    *(undefined4 *)(this + 0x51b) = 0;
    *(undefined4 *)(this + 0x527) = 0;
    *(undefined4 *)(this + 0x577) = 0;
    *(undefined4 *)(this + 0x58b) = 0;
    *(undefined ***)this = &_vftable_;
    *(undefined4 *)(this + 0x94) = 1;
    return (entENTITY *)this;
  }
  return (entENTITY *)0x0;
}




/* from: ai_cent.cpp
   addr: 00434580 */

int __thiscall aiCENT::SetupAniSystem(aiCENT *this)

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
  *(undefined4 *)(paVar1 + 0x8c) = 0xe;
  puVar2 = (undefined4 *)operator_new(0x774);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = 0xe;
    puVar2 = puVar2 + 1;
    iVar6 = 0xe;
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
  _entAnimSetSeqName(paVar1,0,s_CENT_SEQ_UNUSED);
  _entAnimSetSeqName(paVar1,1,s_CENT_SEQ_APPEAR);
  _entAnimSetSeqName(paVar1,2,s_CENT_SEQ_APPEAR2RUN);
  _entAnimSetSeqName(paVar1,3,s_CENT_SEQ_RUN);
  _entAnimSetSeqName(paVar1,4,s_CENT_SEQ_ATTACK);
  _entAnimSetSeqName(paVar1,5,s_CENT_SEQ_BEING_HIT);
  _entAnimSetSeqName(paVar1,6,s_CENT_SEQ_DEATH);
  _entAnimSetSeqName(paVar1,7,s_CENT_SEQ_ATTACK_HOOK);
  _entAnimSetSeqName(paVar1,8,s_CENT_SEQ_ATTACK_THROW);
  _entAnimSetSeqName(paVar1,9,s_CENT_SEQ_ATTACK_RUN);
  _entAnimSetSeqName(paVar1,10,s_CENT_SEQ_NEIGH);
  _entAnimSetSeqName(paVar1,0xb,s_CENT_SEQ_RUN2THROW);
  _entAnimSetSeqName(paVar1,0xc,s_CENT_SEQ_THROW);
  _entAnimSetSeqName(paVar1,0xd,s_CENT_SEQ_THROW2RUN);
  entAnimAssignTplSeq(paVar1,local_4,local_8);
  *(undefined4 *)(*(int *)(paVar1 + 0x90) + 0x40) = 0;
  *(undefined4 *)(*(int *)(paVar1 + 0x90) + 0x44) = 0x3f800000;
  *(undefined4 *)(*(int *)(paVar1 + 0x90) + 0x50) = 0x43fa0000;
  *(undefined4 *)(*(int *)(paVar1 + 0x90) + 0x80) = 0;
  this_00 = (animSYSTEM *)operator_new(0x14);
  if ((this_00 != (animSYSTEM *)0x0) &&
     (piVar3 = (int *)animSYSTEM::animSYSTEM(this_00,0xe,0), piVar3 != (int *)0x0)) {
    *(int **)(paVar1 + 0xa4) = piVar3;
    (**(code **)(*piVar3 + 0xc))(0,0,1,0xffffffff);
    (**(code **)(*piVar3 + 0x14))(3);
    (**(code **)(*piVar3 + 0x14))(9);
    (**(code **)(*piVar3 + 0xc))(1,1,1,3);
    (**(code **)(*piVar3 + 4))(1,3,1,2,1);
    (**(code **)(*piVar3 + 4))(3,4,0,4,1);
    (**(code **)(*piVar3 + 4))(4,3,1,3,0);
    (**(code **)(*piVar3 + 4))(10,3,0,0xd,1);
    (**(code **)(*piVar3 + 4))(10,4,0,4,1);
    (**(code **)(*piVar3 + 4))(6,6,2,6,1);
    (**(code **)(*piVar3 + 0x10))(5,0,1,5);
    (**(code **)(*piVar3 + 0x14))(5);
    (**(code **)(*piVar3 + 4))(3,0xc,1,0xb,1);
    (**(code **)(*piVar3 + 4))(9,0xc,1,0xb,1);
    (**(code **)(*piVar3 + 4))(0xc,3,1,0xd,1);
    (**(code **)(*piVar3 + 4))(0xc,9,1,0xd,1);
    (**(code **)(*piVar3 + 4))(0xb,10,1,0xc,1);
    if (local_4 != (animSEQ *)0x0) {
      operator_delete(local_4 + -4);
    }
    return 1;
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_cent.cpp
   addr: 00434890 */

int __thiscall aiCENT::ProcessINIT(aiCENT *this,void *param_1)

{
  undefined4 uVar1;
  int iVar2;
  sncCHANNEL *this_00;
  objOBJ *poVar3;
  animINST *this_01;
  entENTITY *this_02;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  *(undefined4 *)(this + 0x4a7) = 0x43480000;
  *(undefined4 *)(this + 0x4ab) = 0x43480000;
  *(undefined4 *)(this + 0x16b) = 0x3f333333;
  *(undefined4 *)(this + 0x173) = 0x3f8ccccd;
  *(undefined4 *)(this + 0x153) = 0x41a00000;
  *(undefined4 *)(this + 0x157) = 0x41600000;
  *(undefined4 *)(this + 0x197) = 0x3f800000;
  *(undefined4 *)(this + 0x15b) = 0x42f00000;
  *(undefined4 *)(this + 0x1a7) = 0x42200000;
  *(undefined4 *)(this + 0x15f) = 0x41f00000;
  iVar2 = aiNPC_WR::ProcessINIT((aiNPC_WR *)this,param_1);
  if (iVar2 == 0) {
    return 0;
  }
  *(undefined4 *)(this + 0x543) = 0;
  *(undefined4 *)(this + 0x54b) = 0;
  *(undefined4 *)(this + 0x53f) = 0;
  *(undefined4 *)(this + 0xd0) = 0x428c0000;
  *(undefined4 *)(this + 0xcc) = 0x428c0000;
  *(undefined4 *)(this + 0x52b) = 0x43160000;
  *(undefined4 *)(this + 0x547) = 0;
  *(undefined4 *)(this + 0x54f) = 0;
  *(undefined4 *)(this + 0x587) = 0;
  *(uint *)(this + 0x44f) = *(uint *)(this + 0x44f) | 0x20002;
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
    *(undefined4 *)(this_00 + 0x84) = 0x41a00000;
    *(undefined4 *)(this_00 + 0x88) = 0x42c80000;
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
  *(sncCHANNEL **)(this + 0x58b) = this_00;
  if (this_00 == (sncCHANNEL *)0x0) {
    return 0;
  }
  gsSND_SYSTEM::AddChannel(gsSysSound,this_00,(entIACTIVE_OBJ *)this,(objOBJ *)0x0);
  poVar3 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_plr_hook);
  *(objOBJ **)(this + 0x577) = poVar3;
  if (poVar3 == (objOBJ *)0x0) {
    poVar3 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_ATTACKfocus);
    *(objOBJ **)(this + 0x577) = poVar3;
  }
  *(undefined4 *)(this + 0x57b) = *(undefined4 *)(this + 0x577);
  *(undefined1 **)(this + 0x57f) = &DAT_42480000;
  *(undefined4 *)(this + 0x187) = 0x41a00000;
  *(undefined4 *)(this + 0x583) = 0x43160000;
  if (((byte)this[0xb4] & 1) != 0) {
    *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) | 4;
    (**(code **)(*(int *)this + 0x16c))(0);
  }
  poVar3 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_ROOT_2);
  *(objOBJ **)(this + 0x527) = poVar3;
  if (poVar3 == (objOBJ *)0x0) {
    poVar3 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_CENTRE);
    *(objOBJ **)(this + 0x527) = poVar3;
  }
  this_01 = scnSCENE::FindInstName(gsScenePtr,s_cent_colis_center);
  if (this_01 != (animINST *)0x0) {
    animINST::GetPos(this_01,(m3dV *)(this + 0x553));
    *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) | 0x10;
  }
  uStack_10 = 0x3f800000;
  uStack_c = 0x40a00000;
  uStack_4 = 0x3f800000;
  uStack_8 = 0x40133333;
  this_02 = entCreate(gsScenePtr,s_sfx_dust,s_sfx_dust,(animCREATE_DATA *)0x0,&uStack_10,0);
  *(entENTITY **)(this + 0x58f) = this_02;
  if (this_02 != (entENTITY *)0x0) {
    entENTITY::SetFollow(this_02,(entENTITY *)this,(objOBJ *)0x0,0);
  }
  return 1;
}




/* from: ai_cent.cpp
   addr: 00434BC0 */

int __thiscall aiCENT::ProcessCDT_FIREABLE(aiCENT *this,dmgDAMAGE *param_1)

{
  if (((byte)this[0x88] & 4) != 0) {
    aiNPC_WR::ProcessCDT_FIREABLE((aiNPC_WR *)this,param_1);
  }
  return 1;
}




/* from: ai_cent.cpp
   addr: 00434BE0 */

void __thiscall aiCENT::Explode(aiCENT *this,dmgDAMAGE *param_1,int param_2)

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
  gsSND_SYSTEM::Play(gsSysSound,(sncSOUND_DESCR_3D *)&DAT_0060a668,local_c);
  msgSYSTEM::PostMsg(&msgSystem,(msgADDR *)this,2,(msgADDR *)this);
  return;
}




/* from: ai_cent.cpp
   addr: 00434C70 */

int __thiscall aiCENT::ProcessASK_KEEP_LEVEL_RELOAD(aiCENT *this)

{
  uint *puVar1;
  int iVar2;
  
  if (*(int *)(this + 0x58f) != 0) {
    puVar1 = (uint *)(*(int *)(this + 0x58f) + 0xb4);
    *puVar1 = *puVar1 | 8;
  }
  iVar2 = gsMP_CLIENT::Init((gsMP_CLIENT *)this);
  return iVar2;
}




/* from: ai_cent.cpp
   addr: 00434C90 */

void __thiscall aiCENT::StartDeath(aiCENT *this,dmgDAMAGE *param_1)

{
  aiNPC_WR::StartDeath((aiNPC_WR *)this,param_1);
  if ((((((byte)this[0x88] & 4) != 0) && (param_1 != (dmgDAMAGE *)0x0)) &&
      (*(int *)(param_1 + 4) == 0)) &&
     ((*(int *)(param_1 + 0x1c) == 6 || (*(int *)(param_1 + 0x1c) == 0)))) {
    (**(code **)(*(int *)this + 0x194))(param_1,0);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_cent.cpp
   addr: 00434CE0 */

void __thiscall aiCENT::SetMovementSpeed(aiCENT *this)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float local_c;
  float local_8;
  
  iVar1 = *(int *)(*(int *)(this + 0xbc) + 0xe0);
  if ((iVar1 == 0xc) || (iVar1 == 0xb)) {
    *(undefined4 *)(this + 0x15b) = 0;
LAB_00434d31:
    if ((iVar1 != 0xc) && (iVar1 != 10)) goto LAB_00434d56;
  }
  else {
    if (iVar1 != 10) {
      if (iVar1 == 4) {
        *(undefined4 *)(this + 0x15b) = 0x42200000;
        goto LAB_00434d56;
      }
      *(undefined4 *)(this + 0x15b) = 0x42dc0000;
      goto LAB_00434d31;
    }
    *(undefined4 *)(this + 0x15b) = 0x43870000;
  }
  *(uint *)(this + 1099) = *(uint *)(this + 1099) | 0x200;
  *(undefined4 *)(this + 0x153) = DAT_005ef9d4;
LAB_00434d56:
  if (((*(uint *)(this + 0x51b) & 0x10000) != 0) || (*(float *)(this + 0x3eb) < ___real_42340000)) {
    local_8 = 20.0;
  }
  else {
    local_8 = DAT_005ef9d8;
  }
  fVar2 = gsElapsedTime * ___real_40a00000 + *(float *)(this + 0x153);
  fVar3 = *(float *)(this + 0x153) - gsElapsedTime * ___real_40a00000;
  local_c = fVar2;
  if (fVar2 < fVar3) {
    local_c = fVar3;
    fVar3 = fVar2;
  }
  if (local_8 < fVar3) {
    *(float *)(this + 0x153) = fVar3;
    return;
  }
  if (local_c < local_8) {
    *(float *)(this + 0x153) = local_c;
    return;
  }
  *(float *)(this + 0x153) = local_8;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_cent.cpp
   addr: 00434E30 */

void __thiscall aiCENT::MoveToGoal(aiCENT *this)

{
  aiENEMY *this_00;
  uint uVar1;
  animINST *this_01;
  int iVar2;
  ulonglong uVar3;
  undefined8 extraout_MM1;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  undefined1 auVar7 [16];
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  m3dV local_34 [12];
  m3dV local_28 [12];
  dmgGENERAL local_1c [8];
  undefined4 local_14;
  m3dV local_c [12];
  
  uVar1 = *(uint *)(this + 0x53f);
  if ((uVar1 & 4) != 0) {
LAB_00434e8b:
    *(uint *)(this + 1099) = *(uint *)(this + 1099) | 0x200;
    aiNPC_WR::MoveToGoal((aiNPC_WR *)this);
    return;
  }
  if (((uVar1 & 8) == 0) && ((*(uint *)(this + 0x51b) & 0x10000) != 0)) {
    if (___real_41100000 < *(float *)(this + 0x54f)) {
      *(uint *)(this + 0x53f) = uVar1 | 0x20;
    }
  }
  else {
    *(undefined4 *)(this + 0x54f) = 0;
  }
  this_01 = *(animINST **)(this + 0xbc);
  if (*(int *)(this_01 + 0xe0) == 10) goto LAB_00434e8b;
  uVar1 = *(uint *)(this + 0x53f);
  *(uint *)(this + 0x53f) = uVar1 & 0xfffffff7;
  if ((uVar1 & 1) == 0) {
    if ((*(int *)(this_01 + 0xe0) == 3) && (*(float *)(this + 0x543) <= _DAT_005d203c)) {
      iVar2 = aiENEMY::IsDead((aiENEMY *)(this + 0x4bb));
      if (iVar2 == 0) {
        animINST::GetPos(*(animINST **)(this + 0xbc),(m3dV *)&local_58);
        aiENEMY::GetPos((aiENEMY *)(this + 0x4bb),(m3dV *)&local_4c);
        *(undefined4 *)(this + 0x56b) = *(undefined4 *)(this + 0x55f);
        *(undefined4 *)(this + 0x56f) = *(undefined4 *)(this + 0x563);
        local_5c = (local_58 - local_4c) * (local_58 - local_4c) +
                   (local_50 - local_44) * (local_50 - local_44);
        *(undefined4 *)(this + 0x573) = *(undefined4 *)(this + 0x567);
        if (m3dSimdType == 0) {
          local_5c = local_5c + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
          auVar7 = rsqrtss(ZEXT416((uint)local_5c),ZEXT416((uint)local_5c));
          fVar6 = auVar7._0_4_;
          local_5c = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar6 *
                     (`float___cdecl_m3dSqrt(float)'::__l2::three - local_5c * fVar6 * fVar6) *
                     local_5c;
        }
        else if (m3dSimdType == 1) {
          FastExitMediaState();
          uVar3 = (ulonglong)(uint)local_5c;
          uVar4 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar3);
          uVar5 = PackedFloatingMUL(uVar4,uVar4);
          uVar5 = PackedFloatingReciprocalSQRIter1(uVar5,uVar3);
          uVar4 = PackedFloatingReciprocalIter2(uVar5,uVar4);
          uVar4 = PackedFloatingMUL(uVar4,uVar3);
          local_5c = (float)uVar4;
          FastExitMediaState();
        }
        else {
          local_5c = SQRT(local_5c);
        }
        if (local_5c < ___real_40c00000) {
          if (ABS(local_54 - local_48) < ___real_40400000) {
            *(undefined4 *)(this + 0x547) = 0;
            *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) | 1;
          }
        }
      }
    }
    goto LAB_00435125;
  }
  animINST::Validate(this_01,4);
  objOBJ::GetOrigin(*(objOBJ **)(this + 0x577),(m3dV *)&local_40);
  if (((byte)this[0x53f] & 2) != 0) {
    GetHookPos(this,(m3dV *)&local_4c);
    aiENEMY::GetPos((aiENEMY *)(this + 0x4bb),(m3dV *)&local_58);
    if (ABS((local_54 + ___real_3fcccccd) - local_48) <= ___real_3fc00000) {
      local_48 = 0.0;
      local_54 = 0.0;
      animINST::GetDir(*(animINST **)(this + 0xbc),local_34);
      iVar2 = m3dIsBelongPointCone((m3dV *)&local_58,(m3dV *)&local_4c,local_34,1.5,0.5,45.0);
      if (iVar2 == 0) {
        iVar2 = m3dIsBelongPointCyl((m3dV *)&local_58,(m3dV *)&local_4c,(m3dV *)(this + 0x56b),0.5);
        if (iVar2 == 0) goto LAB_00434f96;
      }
      Throw(this);
    }
  }
LAB_00434f96:
  *(undefined4 *)(this + 0x56b) = local_40;
  *(undefined4 *)(this + 0x56f) = local_3c;
  *(undefined4 *)(this + 0x573) = local_38;
LAB_00435125:
  if ((((byte)this[0x53f] & 2) == 0) && (*(float *)(this + 0x54b) <= _DAT_005d203c)) {
    this_00 = (aiENEMY *)(this + 0x4bb);
    aiENEMY::GetPos(this_00,(m3dV *)&local_4c);
    animINST::GetPos(*(animINST **)(this + 0xbc),(m3dV *)&local_40);
    animINST::GetDir(*(animINST **)(this + 0xbc),local_34);
    iVar2 = m3dIsBelongPointCone((m3dV *)&local_4c,(m3dV *)&local_40,local_34,1.5,0.5,60.0);
    if (iVar2 != 0) {
      dmgGENERAL::dmgGENERAL(local_1c);
      local_14 = 0x41200000;
      animINST::Validate(*(animINST **)(this + 0xbc),4);
      objOBJ::GetOrigin(*(objOBJ **)(this + 0x577),local_c);
      aiENEMY::ProcessCDT_FIREABLE(this_00,(dmgDAMAGE *)local_1c);
      animINST::GetDir(*(animINST **)(this + 0xbc),local_28);
      m3dMakeVUnitConusRandom(local_28,(float)&local_58,(m3dV *)0x42960000);
      local_54 = 0.0;
      m3dNormalize((m3dV *)&local_58);
      local_54 = 1.5;
      m3dNormalize((m3dV *)&local_58);
      local_58 = local_58 * ___real_41200000;
      local_54 = local_54 * ___real_41200000;
      local_50 = local_50 * ___real_41200000;
      aiENEMY::ApplySpeed(this_00,(m3dV *)&local_58);
      *(undefined4 *)(this + 0x54b) = 0x3f99999a;
      *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) & 0xfffffffe;
    }
  }
  aiNPC_WR::MoveToGoal((aiNPC_WR *)this);
  return;
}




/* from: ai_cent.cpp
   addr: 00435290 */

void __thiscall aiCENT::Think(aiCENT *this)

{
  int iVar1;
  uint uVar2;
  
  aiNPC_WR::Think((aiNPC_WR *)this);
  aiNPC_WR::UpdateInAreaFlags((aiNPC_WR *)this);
  iVar1 = CheckShootCond(this);
  if (iVar1 == 0) {
    uVar2 = *(uint *)(this + 0x53f) & 0xffffefff;
  }
  else {
    uVar2 = *(uint *)(this + 0x53f) | 0x1000;
  }
  *(uint *)(this + 0x53f) = uVar2;
  if (*(int *)(*(int *)(this + 0xbc) + 0xe0) == 10) {
    *(undefined4 *)(this + 0x54f) = 0;
  }
  return;
}




/* from: ai_cent.cpp
   addr: 004352E0 */

int __thiscall aiCENT::EvalAnimGoalSeq(aiCENT *this)

{
  uint uVar1;
  
  if ((*(uint *)(this + 1099) & 0x200000) != 0) {
    return 6;
  }
  uVar1 = *(uint *)(this + 0x53f);
  if ((uVar1 & 4) != 0) {
    return 1;
  }
  if (((*(uint *)(this + 0x51b) & 0x10000) == 0) && ((*(uint *)(this + 1099) & 2) == 0)) {
    return 10;
  }
  if ((uVar1 & 0x1000) != 0) {
    return 0xc;
  }
  if ((uVar1 & 1) != 0) {
    return 4;
  }
  return (-(uint)((uVar1 & 0x20) != 0) & 7) + 3;
}




/* from: ai_cent.cpp
   addr: 00435350 */

void __thiscall aiCENT::ProcessActionFrame(aiCENT *this)

{
  int iVar1;
  float extraout_ECX;
  float extraout_EDX;
  float fVar2;
  
  iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),1,0);
  if (iVar1 != 0) {
    *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) & 0xfffffffb;
  }
  iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),10,0);
  if (iVar1 != 0) {
    *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) & 0xffffffdf;
  }
  iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),4,0);
  if (iVar1 != 0) {
    *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) | 2;
  }
  iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),4,1);
  if (iVar1 != 0) {
    *(undefined4 *)(this + 0x543) = 0x40a00000;
    *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) & 0xfffffffc;
  }
  iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),0xc,0);
  if (iVar1 != 0) {
    LaunchOneProjectile(this);
    fVar2 = m3dRandRange(extraout_ECX,extraout_EDX);
    *(float *)(this + 0x587) = fVar2;
    *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) & 0xffffefff;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_cent.cpp
   addr: 00435430
   addr: 00435430
   addr: 00435430 */

void __thiscall aiCENT::GetWpnTip(aiCENT *this,m3dV *param_1)

{
  animINST::GetPos(*(animINST **)(this + 0xbc),param_1);
  *(float *)(param_1 + 4) = *(float *)(param_1 + 4) + ___real_3f800000;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_cent.cpp
   addr: 00435460 */

void __thiscall aiCENT::UpdateTimers(aiCENT *this)

{
  float extraout_EDX;
  float extraout_EDX_00;
  float extraout_EDX_01;
  
  aiNPC_WR::UpdateTimers((aiNPC_WR *)this);
  m3dUpdateTimeField((float *)(this + 0x543),extraout_EDX);
  m3dUpdateTimeField((float *)(this + 0x547),extraout_EDX_00);
  m3dUpdateTimeField((float *)(this + 0x54b),gsElapsedTime);
  m3dUpdateTimeField((float *)(this + 0x587),extraout_EDX_01);
  if (((byte)this[0x53f] & 0x20) == 0) {
    *(float *)(this + 0x54f) = gsElapsedTime + *(float *)(this + 0x54f);
  }
  return;
}




/* from: ai_cent.cpp
   addr: 00435500 */

void __thiscall aiCENT::FillSoundFlags(aiCENT *this)

{
  int iVar1;
  
  iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),10,1);
  if (iVar1 != 0) {
    *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 2;
  }
  iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),4,0);
  if (iVar1 != 0) {
    *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 0x10;
  }
  if ((*(uint *)(*(int *)(this + 0xbc) + 4) & 0x4000) != 0) {
    switch(*(undefined4 *)(*(int *)(this + 0xbc) + 0xe0)) {
    case 1:
    case 2:
      *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 1;
      return;
    case 3:
    case 4:
    case 5:
    case 7:
    case 8:
    case 9:
    case 0xb:
    case 0xd:
      *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 8;
      return;
    case 6:
      *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 4;
      break;
    case 0xc:
      *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 0x20;
      return;
    }
  }
  return;
}




/* from: ai_cent.cpp
   addr: 004355E0 */

void __thiscall aiCENT::PlaySounds(aiCENT *this)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined4 uVar5;
  m3dV *pmVar6;
  m3dV local_c [12];
  
  uVar1 = *(uint *)(this + 0xf8);
  if ((uVar1 & 1) == 0) {
    if ((uVar1 & 4) != 0) {
      (**(code **)(**(int **)(this + 0x58b) + 4))(&DAT_0060a598,0);
      goto LAB_00435679;
    }
    if ((uVar1 & 2) != 0) {
      uVar5 = 0;
      iVar3 = **(int **)(this + 0x58b);
      iVar2 = m3dRandSelect(1,2,3);
      (**(code **)(iVar3 + 4))(&DAT_0060a3f8 + iVar2 * 0x68,uVar5);
      goto LAB_00435679;
    }
    if ((uVar1 & 0x20) != 0) {
      (**(code **)(**(int **)(this + 0x58b) + 4))(&DAT_0060a6d0,0);
      goto LAB_00435679;
    }
    if ((uVar1 & 8) == 0) goto LAB_00435679;
    puVar4 = &DAT_0060a600;
  }
  else {
    puVar4 = &DAT_0060a3f8;
  }
  (**(code **)(**(int **)(this + 0x58b) + 4))(puVar4,0);
LAB_00435679:
  if (((byte)this[0xf8] & 0x10) != 0) {
    animINST::GetPos(*(animINST **)(this + 0xbc),local_c);
    pmVar6 = local_c;
    iVar3 = m3dRandSelect(1,2,3);
    gsSND_SYSTEM::Play(gsSysSound,(sncSOUND_DESCR_3D *)(&DAT_0060a3f8 + iVar3 * 0x68),pmVar6);
  }
  aiNPC::PlaySounds((aiNPC *)this);
  return;
}




/* from: ai_cent.cpp
   addr: 004356D0 */

void __thiscall aiCENT::SelectGoalToRunAway(aiCENT *this,float param_1)

{
  aiNPC_WR::SelectGoalToRunAway((aiNPC_WR *)this,param_1);
  *(undefined4 *)(this + 0x547) = 0x3f800000;
  *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) & 0xfffffff7;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_cent.cpp
   addr: 00435700 */

int __thiscall aiCENT::SelectGoal(aiCENT *this)

{
  int iVar1;
  m3dV local_24 [4];
  undefined4 uStack_20;
  undefined1 local_18 [12];
  m3dV amStack_c [12];
  
  iVar1 = aiNPC_WR::SelectEscapeWhenOut((aiNPC_WR *)this);
  if (iVar1 == 0) {
    (**(code **)(*(int *)this + 0xe4))(local_18);
    animINST::GetPos(*(animINST **)(this + 0xbc),amStack_c);
    if (___real_40400000 <= *(float *)(this + 0x3cf)) {
      if (*(float *)(this + 0x3d7) <= ___real_428c0000) {
        iVar1 = 3;
      }
      else {
        iVar1 = 2;
      }
    }
    else {
      iVar1 = 0;
    }
    StartRunStraight(this,iVar1);
  }
  animINST::GetPos(*(animINST **)(this + 0xbc),local_24);
  *(undefined4 *)(this + 0x3f7) = uStack_20;
  (**(code **)(*(int *)this + 0x1b0))();
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_cent.cpp
   addr: 004357A0 */

void __thiscall aiCENT::StartRunStraight(aiCENT *this,int param_1)

{
  bool bVar1;
  float extraout_ECX;
  float extraout_ECX_00;
  float extraout_ECX_01;
  float extraout_ECX_02;
  float extraout_EDX;
  float extraout_EDX_00;
  float extraout_EDX_01;
  float fVar2;
  float fVar3;
  aiCENT *paVar4;
  m3dV local_18 [12];
  m3dV local_c [12];
  
  if (((_DAT_005d203c < *(float *)(this + 0x547)) && (((byte)this[1099] & 1) == 0)) &&
     ((*(uint *)(this + 0x51b) & 0x10000) != 0)) {
    return;
  }
  animINST::GetPos(*(animINST **)(this + 0xbc),local_18);
  animINST::GetDir(*(animINST **)(this + 0xbc),local_c);
  bVar1 = false;
  fVar3 = extraout_ECX;
  fVar2 = extraout_EDX;
  switch(param_1) {
  case 0:
  case 1:
    paVar4 = this + 0x3f3;
    *(undefined4 *)(this + 0x547) = 0x40400000;
    fVar3 = m3dRandRange(extraout_ECX,(float)paVar4);
    aiPLANNER::GetFleeGoalPoint(aiAttackPlanner,(aiNPC *)this,fVar3,(m3dV *)paVar4);
    fVar3 = extraout_ECX_00;
    fVar2 = extraout_EDX_00;
    break;
  case 2:
    if (*(float *)(this + 0x3cf) < ___real_41a00000) {
      paVar4 = this + 0x3f3;
      *(undefined4 *)(this + 0x547) = 0x40800000;
      fVar3 = m3dRandRange(extraout_ECX,extraout_EDX);
      aiPLANNER::GetFleeGoalPoint(aiAttackPlanner,(aiNPC *)this,fVar3,(m3dV *)paVar4);
      fVar3 = extraout_ECX_01;
      fVar2 = extraout_EDX_01;
      break;
    }
  case 3:
    bVar1 = true;
    *(undefined4 *)(this + 0x547) = 0;
  }
  if ((*(float *)(this + 0x547) < _DAT_005d203c) && (((byte)this[1099] & 4) != 0)) {
    paVar4 = this + 0x3f3;
    *(undefined4 *)(this + 0x547) = 0x40c00000;
    fVar3 = m3dRandRange((float)paVar4,fVar2);
    aiPLANNER::GetFleeGoalPoint(aiAttackPlanner,(aiNPC *)this,fVar3,(m3dV *)paVar4);
    fVar3 = extraout_ECX_02;
  }
  if (*(float *)(this + 0x547) < _DAT_005d203c) {
    if (((!bVar1) || (_DAT_005d203c < *(float *)(this + 0x543))) ||
       (((*(uint *)(this + 1099) & 0x10000000) == 0 || ((*(uint *)(this + 0x51b) & 0x30000) == 0))))
    {
      paVar4 = this + 0x3f3;
      *(undefined4 *)(this + 0x547) = 0x40c00000;
      fVar3 = m3dRandRange(fVar3,(float)paVar4);
      aiPLANNER::GetFleeGoalPoint(aiAttackPlanner,(aiNPC *)this,fVar3,(m3dV *)paVar4);
    }
    else {
      *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) | 8;
      aiNPC::SelectGoal((aiNPC *)this);
    }
  }
  *(undefined4 *)(this + 0x3ff) = *(undefined4 *)(this + 0x3f3);
  *(undefined4 *)(this + 0x403) = *(undefined4 *)(this + 0x3f7);
  *(undefined4 *)(this + 0x407) = *(undefined4 *)(this + 0x3fb);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_cent.cpp
   addr: 004359A0 */

void __thiscall aiCENT::Throw(aiCENT *this)

{
  float local_28;
  float local_24;
  float local_20;
  dmgGENERAL local_1c [8];
  undefined4 local_14;
  m3dV local_c [12];
  
  dmgGENERAL::dmgGENERAL(local_1c);
  local_14 = 0x41900000;
  animINST::Validate(*(animINST **)(this + 0xbc),4);
  objOBJ::GetOrigin(*(objOBJ **)(this + 0x577),local_c);
  aiENEMY::ProcessCDT_FIREABLE((aiENEMY *)(this + 0x4bb),(dmgDAMAGE *)local_1c);
  animINST::GetDir(*(animINST **)(this + 0xbc),(m3dV *)&local_28);
  local_28 = local_28 * ___real_bf800000;
  local_24 = 1.7;
  local_20 = local_20 * ___real_bf800000;
  m3dNormalize((m3dV *)&local_28);
  local_28 = local_28 * ___real_41e00000;
  local_24 = local_24 * ___real_41e00000;
  local_20 = local_20 * ___real_41e00000;
  aiENEMY::ApplySpeed((aiENEMY *)(this + 0x4bb),(m3dV *)&local_28);
  *(undefined4 *)(this + 0x54b) = 0x3fc00000;
  *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) & 0xfffffffc;
  return;
}




/* from: ai_cent.cpp
   addr: 00435A90 */

void __thiscall aiCENT::GetHookPos(aiCENT *this,m3dV *param_1)

{
  animINST::Validate(*(animINST **)(this + 0xbc),4);
  objOBJ::GetOrigin(*(objOBJ **)(this + 0x577),param_1);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_cent.cpp
   addr: 00435AC0 */

void __thiscall aiCENT::ApplySpeedTrampoline(aiCENT *this,m3dV *param_1)

{
  float local_c;
  float local_8;
  float local_4;
  
  local_c = *(float *)param_1 * ___real_3f000000;
  local_8 = *(float *)(param_1 + 4) * ___real_3f000000;
  local_4 = *(float *)(param_1 + 8) * ___real_3f000000;
  aiNPC::ApplySpeedTrampoline((aiNPC *)this,(m3dV *)&local_c);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_cent.cpp
   addr: 00435B00 */

void __thiscall
aiCENT::AdjustSpeedsOnFallbackStart(aiCENT *this,dmgWEAPON *param_1,float *param_2,float *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(this + 0xbc) + 0xe0);
  if ((((iVar1 == 3) || (iVar1 == 4)) || (iVar1 == 7)) || (iVar1 == 9)) {
    *param_2 = *param_2 * ___real_3f400000;
  }
  return;
}




/* from: ai_cent.cpp
   addr: 00435B40 */

int __thiscall aiCENT::IsArmoredObject(aiCENT *this,char *param_1)

{
  int iVar1;
  
  iVar1 = strnicmp(param_1,s_plr_hook2,8);
  if (iVar1 != 0) {
    iVar1 = strnicmp(param_1,s_obj01,5);
    if (iVar1 != 0) {
      return 0;
    }
  }
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_cent.cpp
   addr: 00435B80 */

void __thiscall aiCENT::GetShootPjlPhysParam(aiCENT *this,m3dV *param_1,physINIT *param_2)

{
  float fVar1;
  m3dV *pmVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 extraout_MM1;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 in_MM2;
  float fVar7;
  undefined1 auVar8 [16];
  float fVar9;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  pmVar2 = param_1;
  animINST::GetDir(*(animINST **)(this + 0xbc),(m3dV *)&local_18);
  local_14 = 0.0;
  if (((byte)this[0x51b] & 0x10) == 0) {
    iVar3 = aiPLANNER::GetEnemyMeetPoint(aiAttackPlanner,(aiNPC *)this,25.0,(m3dV *)&local_c);
    if (iVar3 != 0) {
      local_8 = local_8 + ___real_3fc00000;
      local_20 = 0.0;
      local_24 = local_c - *(float *)param_1;
      local_1c = local_4 - *(float *)(param_1 + 8);
      m3dNormalize((m3dV *)&local_24);
      fVar9 = m3xzAngleVector((m3dV *)&local_24,(m3dV *)&local_18);
      if (*(float *)(this + 0x187) < ABS(fVar9)) {
        local_24 = local_18;
        local_20 = local_14;
        local_1c = local_10;
      }
      goto LAB_00435c71;
    }
  }
  aiENEMY::GetPos((aiENEMY *)(this + 0x4bb),(m3dV *)&local_c);
  local_24 = local_18;
  local_20 = local_14;
  local_1c = local_10;
  in_MM2 = extraout_MM1;
LAB_00435c71:
  local_20 = local_20 * ___real_41c80000;
  local_1c = local_1c * ___real_41c80000;
  fVar9 = (*(float *)param_1 - local_c) * (*(float *)param_1 - local_c) +
          (*(float *)(param_1 + 8) - local_4) * (*(float *)(param_1 + 8) - local_4);
  if (m3dSimdType == 0) {
    fVar9 = fVar9 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar8 = rsqrtss(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9));
    fVar7 = auVar8._0_4_;
    param_1 = (m3dV *)(`float___cdecl_m3dSqrt(float)'::__l2::half * fVar7 *
                       (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar9 * fVar7 * fVar7) * fVar9
                      );
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar4 = (ulonglong)(uint)fVar9;
    uVar5 = PackedFloatingReciprocalSQRAprox(in_MM2,uVar4);
    uVar6 = PackedFloatingMUL(uVar5,uVar5);
    uVar6 = PackedFloatingReciprocalSQRIter1(uVar6,uVar4);
    uVar5 = PackedFloatingReciprocalIter2(uVar6,uVar5);
    uVar5 = PackedFloatingMUL(uVar5,uVar4);
    param_1 = (m3dV *)uVar5;
    FastExitMediaState();
  }
  else {
    param_1 = (m3dV *)SQRT(fVar9);
  }
  fVar7 = (float)param_1 * ___real_3d23d70a;
  fVar9 = *(float *)(pmVar2 + 4);
  fVar1 = fVar7 * fVar7 * ___real_c0a00000;
  *(float *)(param_2 + 4) = local_24 * ___real_41c80000;
  *(float *)(param_2 + 8) = local_20;
  *(float *)(param_2 + 0xc) = local_1c;
  *(float *)(param_2 + 8) = ((local_8 - fVar9) - fVar1) / fVar7;
  *(float *)(param_2 + 0x10) = _m3dVUnitY * ___real_c1200000;
  *(float *)(param_2 + 0x14) = DAT_005f9994 * ___real_c1200000;
  *(float *)(param_2 + 0x18) = DAT_005f9998 * ___real_c1200000;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_cent.cpp
   addr: 00435DC0 */

void __thiscall aiCENT::LaunchOneProjectile(aiCENT *this)

{
  entENTITY *peVar1;
  int iVar2;
  objOBJ *poVar3;
  undefined4 *puVar4;
  physINIT local_f8;
  undefined1 local_f7;
  undefined2 local_f6;
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
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined1 local_a8;
  m3dV local_a4 [12];
  animCREATE_DATA local_98 [18];
  undefined4 local_86 [33];
  
  local_f4 = _m3dVZero;
  local_e8 = _m3dVZero;
  local_f0 = DAT_00963740;
  local_e4 = DAT_00963740;
  local_d8 = DAT_005d2040;
  local_d4 = 1;
  local_a8 = 1;
  local_f8 = (physINIT)0x0;
  local_f7 = 0x40;
  local_ec = DAT_00963744;
  local_e0 = DAT_00963744;
  local_dc = 0x3dcccccd;
  local_d0 = 0;
  local_cc = 0;
  local_c8 = 0;
  local_c4 = 0;
  local_c0 = 0xbf800000;
  local_bc = 0;
  local_b8 = 0xffffffff;
  local_b4 = 0xffffffff;
  local_b0 = 0xffffffff;
  local_ac = 0xbf800000;
  local_f6 = 0x51;
  animCREATE_DATA::animCREATE_DATA(local_98);
  poVar3 = *(objOBJ **)(this + 0x57b);
  animINST::Validate(*(animINST **)(this + 0xbc),4);
  objOBJ::GetOrigin(poVar3,local_a4);
  local_b0 = *(undefined4 *)(this + 0x8c);
  poVar3 = poVar3 + 0x3c;
  puVar4 = local_86;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *(undefined4 *)poVar3;
    poVar3 = poVar3 + 4;
    puVar4 = puVar4 + 1;
  }
  local_d4 = 2;
  local_c8 = 2;
  local_dc = 0x3e99999a;
  local_d8 = 0x40e00000;
  local_cc = 0;
  local_c0 = 0x41700000;
  local_bc = 0x3fc00000;
  local_b4 = 3;
  local_a8 = 0;
  GetShootPjlPhysParam(this,local_a4,&local_f8);
  peVar1 = entCreate(gsScenePtr,s_pjl_trident,s_pjl_trident,local_98,&local_f8,0);
  if (peVar1 != (entENTITY *)0x0) {
    gsEffApplyLMChar(peVar1,(cdtINFO *)(this + 0x453),0);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_cent.cpp
   addr: 00435F30 */

int __thiscall aiCENT::CheckShootCond(aiCENT *this)

{
  if (((((*(uint *)(this + 1099) & 0x10000000) != 0) && ((*(uint *)(this + 1099) & 0x80000008) == 0)
       ) && ((*(uint *)(this + 0x51b) & 0x200) == 0)) &&
     ((*(float *)(this + 0x587) <= _DAT_005d203c &&
      (*(float *)(this + 0x3cf) <= *(float *)(this + 0x583))))) {
    if ((*(uint *)(this + 0x51b) & 0x20000) == 0) {
      if (*(float *)(this + 0x3cf) < ___real_41200000) {
        return 0;
      }
    }
    else if (*(float *)(this + 0x3cf) < *(float *)(this + 0x57f)) {
      return 0;
    }
    if (*(float *)(this + 0x3d7) <= *(float *)(this + 0x187)) {
      return 1;
    }
  }
  return 0;
}




/* from: ai_cent.cpp
   addr: 00435FC0 */

sncSOUND_DESCR_3D * __thiscall pjlTRIDENT::GetArrowSound(pjlTRIDENT *this,int param_1)

{
  if (param_1 == 0) {
    return (sncSOUND_DESCR_3D *)&DAT_0060a738;
  }
  if (param_1 != 1) {
    if (param_1 != 2) {
      return (sncSOUND_DESCR_3D *)0x0;
    }
    return (sncSOUND_DESCR_3D *)&DAT_0060a808;
  }
  return (sncSOUND_DESCR_3D *)&DAT_0060a7a0;
}




/* from: ai_cent.cpp
   addr: 00435FF0 */

int __thiscall aiCENT::IsAnimSeqGoodForFallback(aiCENT *this)

{
  return (uint)(*(int *)(*(int *)(this + 0xbc) + 0xe0) != 6);
}

