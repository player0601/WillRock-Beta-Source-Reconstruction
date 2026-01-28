
/* from: ais_diskobolus.cpp
   addr: 0042B590 */

int __fastcall aisDiskblInit(void)

{
  int iVar1;
  
  iVar1 = entRegisterClass(s_ai_diskobolus,0x244e5043,0x32,aisDISKBL::Create,s_ai_diskobolus,0);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = diskblDiskInit();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = wrsfxDiscusInit();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = sncLinkSndListData(1,(sncSOUND_DESCR_3D *)&DAT_00604020);
  return (uint)(iVar1 != 0);
}




/* from: ais_diskobolus.cpp
   addr: 0042B5E0 */

int __thiscall aisDISKBL::SetupAniSystem(aisDISKBL *this)

{
  animTPL *paVar1;
  animSEQ *paVar2;
  undefined4 *puVar3;
  animSYSTEM *this_00;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  int local_8;
  
  paVar1 = *(animTPL **)(*(int *)(this + 0xbc) + 0x138);
  paVar2 = *(animSEQ **)(paVar1 + 0x90);
  if (paVar2 == (animSEQ *)0x0) {
    local_8 = 0;
  }
  else {
    local_8 = *(int *)(paVar1 + 0x8c);
  }
  iVar7 = 4;
  *(undefined4 *)(paVar1 + 0x8c) = 4;
  puVar3 = (undefined4 *)operator_new(0x224);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = 4;
    puVar3 = puVar3 + 1;
    puVar6 = puVar3;
    do {
      puVar8 = puVar6;
      for (iVar5 = 0x22; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
      }
      puVar6[0x20] = 2;
      iVar7 = iVar7 + -1;
      puVar6 = puVar6 + 0x22;
    } while (iVar7 != 0);
  }
  *(undefined4 **)(paVar1 + 0x90) = puVar3;
  _entAnimSetSeqName(paVar1,0,s_DISKBL_SEQ_THROW);
  _entAnimSetSeqName(paVar1,1,s_DISKBL_SEQ_SIT_DOWN);
  _entAnimSetSeqName(paVar1,2,s_DISKBL_SEQ_RUN);
  _entAnimSetSeqName(paVar1,3,s_DISKBL_SEQ_JUMP);
  entAnimAssignTplSeq(paVar1,paVar2,local_8);
  this_00 = (animSYSTEM *)operator_new(0x14);
  if ((this_00 != (animSYSTEM *)0x0) &&
     (piVar4 = (int *)animSYSTEM::animSYSTEM(this_00,4,0), piVar4 != (int *)0x0)) {
    *(int **)(paVar1 + 0xa4) = piVar4;
    (**(code **)(*piVar4 + 4))(0,0,1,1,0);
    (**(code **)(*piVar4 + 4))(3,3,2,3,1);
    (**(code **)(*piVar4 + 4))(1,1,2,1,0);
    (**(code **)(*piVar4 + 4))(1,0,1,0,0);
    (**(code **)(*piVar4 + 4))(3,2,1,2,0);
    (**(code **)(*piVar4 + 4))(2,0,1,1,1);
    if (paVar2 != (animSEQ *)0x0) {
      operator_delete(paVar2 + -4);
    }
    return 1;
  }
  if (*(int *)(paVar1 + 0x90) != 0) {
    operator_delete((void *)(*(int *)(paVar1 + 0x90) + -4));
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ais_diskobolus.cpp
   addr: 0042B780 */

int __thiscall aisDISKBL::ProcessINIT(aisDISKBL *this,void *param_1)

{
  undefined4 uVar1;
  int iVar2;
  objOBJ *poVar3;
  sncCHANNEL *this_00;
  
  iVar2 = aisSTATUE::ProcessINIT((aisSTATUE *)this,param_1);
  if (iVar2 == 0) {
    return 0;
  }
  *(undefined1 **)(this + 0xd0) = &DAT_42480000;
  *(undefined4 *)(this + 0x4a7) = 0x43480000;
  *(undefined1 **)(this + 0x4ab) = &DAT_42480000;
  *(undefined4 *)(this + 0x583) = 0x43700001;
  *(undefined4 *)(this + 0x17f) = 0x42f00000;
  *(undefined4 *)(this + 0x587) = 0x3f000000;
  *(undefined4 *)(this + 0x58b) = 0x42b40000;
  *(undefined4 *)(this + 0x153) = 0x41000000;
  *(undefined4 *)(this + 0x58f) = 0x428c0000;
  poVar3 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_DISK);
  *(objOBJ **)(this + 0x5af) = poVar3;
  poVar3 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_LowBACK);
  *(objOBJ **)(this + 0x5b3) = poVar3;
  poVar3 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_UpBACK);
  *(objOBJ **)(this + 0x5b7) = poVar3;
  *(undefined4 *)(this + 0x187) = 0x41a00000;
  *(undefined4 *)(this + 0x52b) = 0x461c4000;
  *(undefined4 *)(this + 0xcc) = *(undefined4 *)(this + 0xd0);
  *(undefined4 *)(this + 0x597) = 0;
  *(undefined4 *)(this + 0x59b) = 0;
  *(undefined4 *)(this + 0x59f) = 0;
  *(undefined4 *)(this + 0x5a3) = 0;
  *(undefined4 *)(this + 0x5a7) = 0;
  *(undefined4 *)(this + 0x5ab) = 0;
  animINST::SetAnimSeq(*(animINST **)(this + 0xbc),1,0.0);
  *(uint *)(this + 0x597) = *(uint *)(this + 0x597) | 1;
  poVar3 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_ROOT);
  *(objOBJ **)(this + 0x163) = poVar3;
  if (poVar3 == (objOBJ *)0x0) {
    return 0;
  }
  *(objOBJ **)(this + 0x527) = poVar3;
  *(uint *)poVar3 = *(uint *)poVar3 | 0x200;
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
    *(undefined4 *)(this_00 + 0x84) = 0x41200000;
    *(undefined4 *)(this_00 + 0x88) = 0x42820000;
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
  *(sncCHANNEL **)(this + 0x593) = this_00;
  if (this_00 == (sncCHANNEL *)0x0) {
    return 0;
  }
  gsSND_SYSTEM::AddChannel(gsSysSound,this_00,(entIACTIVE_OBJ *)this,(objOBJ *)0x0);
  *(uint *)(*(int *)(this + 0xbc) + 4) = *(uint *)(*(int *)(this + 0xbc) + 4) | 0x2000000;
  animSYSTEM_INST::AdvanceAnimation
            (*(animSYSTEM_INST **)(*(animINST **)(this + 0xbc) + 0xe8),*(animINST **)(this + 0xbc),0
             ,0.0);
  return 1;
}




/* from: ais_diskobolus.cpp
   addr: 0042BA10 */

void __thiscall aisDISKBL::ParseNameClass(aisDISKBL *this)

{
  char *_Str;
  
  _Str = s_;
  if (*(char **)(*(int *)(this + 0xbc) + 0x1c) != (char *)0x0) {
    _Str = *(char **)(*(int *)(this + 0xbc) + 0x1c);
  }
  aisSTATUE::ParseNameClass((aisSTATUE *)this);
  strstr(_Str,s__mini);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ais_diskobolus.cpp
   addr: 0042BA40 */

void __thiscall aisDISKBL::FillAttackFlag(aisDISKBL *this)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 extraout_MM1;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  undefined1 auVar6 [16];
  float fVar7;
  float fStack_34;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float local_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  m3dV amStack_10 [4];
  m3dV local_c [12];
  
  *(uint *)(this + 1099) = *(uint *)(this + 1099) & 0xffffefff;
  iVar1 = aiENEMY::IsDead((aiENEMY *)(this + 0x4bb));
  if ((((iVar1 == 0) && ((*(uint *)(this + 1099) & 0x10000000) != 0)) &&
      (*(float *)(this + 0x5a3) <= _DAT_005d0e7c)) && ((*(uint *)(this + 0x51b) & 0x200) == 0)) {
    animINST::GetPos(*(animINST **)(this + 0xbc),(m3dV *)&local_24);
    animINST::GetDir(*(animINST **)(this + 0xbc),local_c);
    (**(code **)(*(int *)this + 0xe4))(&local_30);
    fVar7 = (fStack_28 - fStack_34) * (fStack_28 - fStack_34) +
            (fStack_20 - fStack_2c) * (fStack_20 - fStack_2c);
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
    *(float *)(this + 0x59b) = fVar7;
    if ((*(float *)(this + 0x587) <= fVar7) && (fVar7 <= *(float *)(this + 0x58b))) {
      fStack_1c = fStack_34 - fStack_28;
      fStack_18 = local_30 - local_24;
      fStack_14 = fStack_2c - fStack_20;
      fVar7 = m3xzAngleVector((m3dV *)&fStack_1c,amStack_10);
      if (ABS(fVar7) <= *(float *)(this + 0x58f)) {
        *(uint *)(this + 1099) = *(uint *)(this + 1099) | 0x1000;
        return;
      }
    }
  }
  return;
}




/* from: ais_diskobolus.cpp
   addr: 0042BC10 */

int __thiscall aisDISKBL::SelectGoal(aisDISKBL *this)

{
  int iVar1;
  
  iVar1 = aisSTATUE::SelectGoal((aisSTATUE *)this);
  if (iVar1 == 0) {
    return 0;
  }
  FillAttackFlag(this);
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ais_diskobolus.cpp
   addr: 0042BC30 */

int __thiscall aisDISKBL::EvalAnimGoalSeq(aisDISKBL *this)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = aiENEMY::IsDead((aiENEMY *)(this + 0x4bb));
  if (iVar2 != 0) {
    return 1;
  }
  uVar1 = *(uint *)(this + 1099);
  uVar3 = ~uVar1 >> 0xc & 1;
  if ((uVar1 & 0x40000) == 0) {
    if ((*(uint *)(this + 0x53f) & 0x100) == 0) {
      return 3;
    }
    if (((*(float *)(this + 0x3d7) < ___real_42200000) &&
        (*(float *)(this + 0x5a7) < ___real_00000000 !=
         (*(float *)(this + 0x5a7) == ___real_00000000))) && ((uVar1 & 0x10000000) != 0)) {
      return 0;
    }
    uVar3 = 2;
  }
  return uVar3;
}




/* from: ais_diskobolus.cpp
   addr: 0042BCB0 */

void __thiscall aisDISKBL::ProcessActionFrame(aisDISKBL *this)

{
  int iVar1;
  float fVar2;
  float extraout_EDX;
  undefined4 *puVar3;
  m3dMATR *pmVar4;
  
  iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),0,0);
  if (iVar1 == 0) {
    iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),3,1);
    if (iVar1 == 0) goto LAB_0042bd13;
  }
  ThrowDisk(this);
  fVar2 = (float)(*(int *)(this + 0x5ab) + 1);
  *(float *)(this + 0x5ab) = fVar2;
  if (2 < (int)fVar2) {
    *(undefined4 *)(this + 0x5ab) = 0;
    fVar2 = m3dRandRange(fVar2,extraout_EDX);
    *(float *)(this + 0x5a7) = fVar2;
  }
LAB_0042bd13:
  iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),3,0);
  if (iVar1 != 0) {
    *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) | 0x100;
    objValidateLTM(*(objOBJ **)(this + 0x163));
    puVar3 = (undefined4 *)(*(int *)(this + 0x163) + 0x3c);
    pmVar4 = (m3dMATR *)(this + 0x543);
    for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined4 *)pmVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      pmVar4 = pmVar4 + 4;
    }
    m3dMATR::RemoveScale((m3dMATR *)(this + 0x543));
    *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) | 0x10;
    *(undefined4 *)(this + 0x5a7) = 0x3f000000;
    *(uint *)(this + 1099) = *(uint *)(this + 1099) | 0x1000000;
  }
  return;
}




/* from: ais_diskobolus.cpp
   addr: 0042BDC0 */

void __thiscall aisDISKBL::Think(aisDISKBL *this)

{
  int iVar1;
  
  aiNPC_WR::Think((aiNPC_WR *)this);
  iVar1 = *(int *)(*(int *)(this + 0xbc) + 0xe0);
  if ((iVar1 == 1) && ((*(uint *)(this + 1099) & 0x1000) == 0)) {
    *(uint *)(this + 0x597) = *(uint *)(this + 0x597) | 1;
  }
  else {
    *(uint *)(this + 0x597) = *(uint *)(this + 0x597) & 0xfffffffe;
    if (iVar1 == 2) {
      *(undefined4 *)(this + 0x5ab) = 0;
    }
  }
  if (((byte)this[1099] & 1) != 0) {
    *(undefined4 *)(this + 0x5ab) = 0;
    *(undefined4 *)(this + 0x5a7) = 0;
  }
  return;
}




/* from: ais_diskobolus.cpp
   addr: 0042BE30 */

void __thiscall aisDISKBL::SetMovementSpeed(aisDISKBL *this)

{
  int iVar1;
  m3dV local_c [12];
  
  aisSTATUE::SetMovementSpeed((aisSTATUE *)this);
  iVar1 = *(int *)(*(animINST **)(this + 0xbc) + 0xe0);
  if (iVar1 != 2) {
    *(uint *)(this + 1099) = *(uint *)(this + 1099) | 0x200;
  }
  if (iVar1 == 3) {
    *(uint *)(this + 1099) = *(uint *)(this + 1099) | 0x400;
    animINST::GetDir(*(animINST **)(this + 0xbc),local_c);
    animINST::SetDir_XZ(*(animINST **)(this + 0xbc),local_c);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ais_diskobolus.cpp
   addr: 0042BE90 */

void __thiscall aisDISKBL::AnimateProcedural(aisDISKBL *this)

{
  aisDISKBL *paVar1;
  float fVar2;
  float in_EDX;
  float extraout_EDX;
  float *local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  m3dV local_c [12];
  
  if (((byte)this[0x597] & 1) == 0) {
    animINST::GetDir(*(animINST **)(this + 0xbc),local_c);
    animINST::GetPos(*(animINST **)(this + 0xbc),(m3dV *)&local_24);
    aiENEMY::GetPos((aiENEMY *)(this + 0x4bb),(m3dV *)&local_30);
    local_18 = local_30 - local_24;
    local_14 = local_2c - local_20;
    local_10 = local_28 - local_1c;
    local_34 = (float *)m3xzAngleVector(local_c,(m3dV *)&local_18);
    in_EDX = extraout_EDX;
    if ((___real_c28c0000 < (float)local_34 != (___real_c28c0000 == (float)local_34)) &&
       ((float)local_34 < ___real_428c0000 != ((float)local_34 == ___real_428c0000)))
    goto LAB_0042bf31;
  }
  local_34 = (float *)0x0;
LAB_0042bf31:
  paVar1 = this + 0x59f;
  m3dLimitChange_Float((float)paVar1,in_EDX,*(float *)paVar1,local_34);
  if (_DAT_005d0e7c <= ABS(*(float *)paVar1)) {
    objValidateLTM(*(objOBJ **)(this + 0x5b7));
    fVar2 = *(float *)paVar1 * ___real_3f000000;
    objOBJ::RotateGlbAxis(*(objOBJ **)(this + 0x5b3),fVar2,&m3dVUnitY);
    objOBJ::RotateGlbAxis(*(objOBJ **)(this + 0x5b7),fVar2,&m3dVUnitY);
    animINST::Invalidate(*(animINST **)(this + 0xbc),4);
  }
  return;
}




/* from: ais_diskobolus.cpp
   addr: 0042BFD0 */

int __thiscall aisDISKBL::ProcessCDT_FIREABLE(aisDISKBL *this,dmgDAMAGE *param_1)

{
  aisSTATUE::ProcessCDT_FIREABLE((aisSTATUE *)this,param_1);
  return 1;
}




/* from: ais_diskobolus.cpp
   addr: 0042BFF0 */

void __thiscall aisDISKBL::UpdateTimers(aisDISKBL *this)

{
  float extraout_EDX;
  float extraout_EDX_00;
  
  aisSTATUE::UpdateTimers((aisSTATUE *)this);
  m3dUpdateTimeField((float *)(this + 0x5a3),extraout_EDX);
  m3dUpdateTimeField((float *)(this + 0x5a7),extraout_EDX_00);
  return;
}




/* from: ais_diskobolus.cpp
   addr: 0042C020 */

void __thiscall aisDISKBL::UpdateSound(aisDISKBL *this)

{
  if (((byte)this[0xf8] & 1) != 0) {
    (**(code **)(**(int **)(this + 0x593) + 4))(&DAT_00604020,0);
  }
  m3dTerm2DMatr();
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ais_diskobolus.cpp
   addr: 0042C050 */

void __thiscall aisDISKBL::ThrowDisk(aisDISKBL *this)

{
  entENTITY *this_00;
  int iVar1;
  undefined4 *puVar2;
  m3dMATR *pmVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 in_MM2;
  undefined1 auVar7 [16];
  float fVar8;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  undefined1 local_ec;
  undefined1 local_eb;
  undefined2 local_ea;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
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
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined1 local_9c;
  float local_98;
  float local_94;
  float local_90;
  m3dMATR local_86 [134];
  
  local_e8 = _m3dVZero;
  local_dc = (float)_m3dVZero;
  local_cc = DAT_005d0e80;
  local_e4 = DAT_00963740;
  local_d8 = (float)DAT_00963740;
  local_ec = 0;
  local_eb = 0x40;
  local_e0 = DAT_00963744;
  local_d4 = (float)DAT_00963744;
  local_d0 = 0x3dcccccd;
  local_c8 = 1;
  local_c4 = 0;
  local_c0 = 0;
  local_bc = 0;
  local_b8 = 0;
  local_b4 = 0xbf800000;
  local_b0 = 0;
  local_ac = 0xffffffff;
  local_a8 = 0xffffffff;
  local_a4 = 0xffffffff;
  local_a0 = 0xbf800000;
  local_9c = 1;
  local_ea = 0x51;
  animCREATE_DATA::animCREATE_DATA((animCREATE_DATA *)&local_98);
  animINST::Validate(*(animINST **)(this + 0xbc),4);
  objOBJ::GetOrigin(*(objOBJ **)(this + 0x5af),(m3dV *)&local_110);
  aiENEMY::GetPos((aiENEMY *)(this + 0x4bb),(m3dV *)&local_104);
  local_124 = local_104 - local_110;
  local_120 = 0.0;
  local_11c = local_fc - local_108;
  m3dNormalize((m3dV *)&local_124);
  animINST::GetDir(*(animINST **)(this + 0xbc),(m3dV *)&local_f8);
  fVar8 = m3xzAngleVector((m3dV *)&local_124,(m3dV *)&local_f8);
  if (*(float *)(this + 0x187) < ABS(fVar8)) {
    local_120 = local_f4;
    local_124 = local_f8;
    local_11c = local_f0;
    local_12c = (local_104 - local_110) * (local_104 - local_110) +
                (local_fc - local_108) * (local_fc - local_108);
    if (m3dSimdType == 0) {
      local_12c = local_12c + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
      auVar7 = rsqrtss(ZEXT416((uint)local_12c),ZEXT416((uint)local_12c));
      fVar8 = auVar7._0_4_;
      local_12c = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar8 *
                  (`float___cdecl_m3dSqrt(float)'::__l2::three - local_12c * fVar8 * fVar8) *
                  local_12c;
    }
    else if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar4 = (ulonglong)(uint)local_12c;
      uVar5 = PackedFloatingReciprocalSQRAprox(in_MM2,uVar4);
      uVar6 = PackedFloatingMUL(uVar5,uVar5);
      uVar6 = PackedFloatingReciprocalSQRIter1(uVar6,uVar4);
      uVar5 = PackedFloatingReciprocalIter2(uVar6,uVar5);
      uVar5 = PackedFloatingMUL(uVar5,uVar4);
      local_12c = (float)uVar5;
      FastExitMediaState();
    }
    else {
      local_12c = SQRT(local_12c);
    }
    local_104 = local_f8 * local_12c + local_110;
    local_100 = local_f4 * local_12c + local_10c;
    local_fc = local_f0 * local_12c + local_108;
  }
  cgmGetThrowSpeed_XZ((m3dV *)&local_110,(m3dV *)&local_104,35.0,-10.0,(m3dV *)&local_e8);
  local_dc = _m3dVUnitY * ___real_c1200000;
  local_c8 = 3;
  local_a8 = 3;
  local_a4 = *(undefined4 *)(this + 0x8c);
  local_d8 = DAT_005f9994 * ___real_c1200000;
  local_c0 = 0x3f800000;
  local_c4 = 0x3e19999a;
  local_bc = 2;
  local_d0 = 0x3e4ccccd;
  local_d4 = DAT_005f9998 * ___real_c1200000;
  local_cc = 0x40e00000;
  local_b4 = 0x41200000;
  local_b0 = 0x40600000;
  puVar2 = (undefined4 *)(*(int *)(this + 0x5af) + 0x3c);
  pmVar3 = local_86;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pmVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    pmVar3 = pmVar3 + 4;
  }
  m3dMATR::GetScale(local_86,&local_128,&local_118,&local_114);
  m3dMATR::RemoveScale(local_86);
  local_98 = local_128;
  local_94 = local_128;
  local_90 = local_128;
  this_00 = entCreate(gsScenePtr,s_diskbl_disk,s_diskbl_disk,(animCREATE_DATA *)&local_98,&local_ec,
                      0);
  if (this_00 != (entENTITY *)0x0) {
    entENTITY::ApplyColor(this_00,(cdtINFO *)(this + 0x453),0);
    *(undefined4 *)(this + 0x5a3) = 0x3fc00000;
    *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 1;
  }
  return;
}




/* from: ais_diskobolus.cpp
   addr: 0042C430 */

int __thiscall aisDISKBL::IsArmoredObject(aisDISKBL *this,char *param_1)

{
  int iVar1;
  
  iVar1 = strnicmp(param_1,s_disk,4);
  return (uint)(iVar1 == 0);
}




/* from: ais_diskobolus.cpp
   addr: 0042C450 */

entENTITY * __fastcall aisDISKBL::Create(animINST *param_1)

{
  aisSTATUE *this;
  
  this = (aisSTATUE *)operator_new(0x5bb);
  if (this != (aisSTATUE *)0x0) {
    aisSTATUE::aisSTATUE(this);
    *(undefined ***)this = &_vftable_;
    *(undefined4 *)(this + 0x94) = 0xe;
    return (entENTITY *)this;
  }
  return (entENTITY *)0x0;
}

