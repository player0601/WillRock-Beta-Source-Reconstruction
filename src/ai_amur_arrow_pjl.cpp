
/* from: ai_amur_arrow_pjl.cpp
   addr: 004320D0 */

int __fastcall pjlAmurArrowInit(void)

{
  int iVar1;
  
  iVar1 = entRegisterClass(s_pjl_amur_arrow,0x41525257,0x32,pjlAMUR_ARROW::Create,(char *)0x0,1);
  return (uint)(iVar1 != 0);
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_amur_arrow_pjl.cpp
   addr: 00432100 */

void __thiscall
aiAMUR_GENERIC::GetShootArrowPhysParam(aiAMUR_GENERIC *this,m3dV *param_1,physINIT *param_2)

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
    iVar3 = aiPLANNER::GetEnemyMeetPoint(aiAttackPlanner,(aiNPC *)this,40.0,(m3dV *)&local_c);
    if (iVar3 != 0) {
      local_8 = local_8 + ___real_3f800000;
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
      goto LAB_004321f1;
    }
  }
  aiENEMY::GetPos((aiENEMY *)(this + 0x4bb),(m3dV *)&local_c);
  local_24 = local_18;
  local_20 = local_14;
  local_1c = local_10;
  in_MM2 = extraout_MM1;
LAB_004321f1:
  local_20 = local_20 * ___real_42200000;
  local_1c = local_1c * ___real_42200000;
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
  fVar7 = (float)param_1 * ___real_3ccccccd;
  fVar9 = *(float *)(pmVar2 + 4);
  fVar1 = fVar7 * fVar7 * ___real_c0a00000;
  *(float *)(param_2 + 4) = local_24 * ___real_42200000;
  *(float *)(param_2 + 8) = local_20;
  *(float *)(param_2 + 0xc) = local_1c;
  *(float *)(param_2 + 8) = ((local_8 - fVar9) - fVar1) / fVar7;
  *(float *)(param_2 + 0x10) = _m3dVUnitY * ___real_c1200000;
  *(float *)(param_2 + 0x14) = DAT_005f9994 * ___real_c1200000;
  *(float *)(param_2 + 0x18) = DAT_005f9998 * ___real_c1200000;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_amur_arrow_pjl.cpp
   addr: 00432340 */

void __thiscall aiAMUR_GENERIC::LaunchOneProjectile(aiAMUR_GENERIC *this)

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
  local_d8 = DAT_005d1cc8;
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
  local_c0 = 0x41000000;
  local_bc = 0;
  local_b4 = 3;
  local_a8 = 0;
  GetShootArrowPhysParam(this,local_a4,&local_f8);
  peVar1 = entCreate(gsScenePtr,s_pjl_amur_arrow,s_pjl_amur_arrow,local_98,&local_f8,0);
  if (peVar1 != (entENTITY *)0x0) {
    gsEffApplyLMChar(peVar1,(cdtINFO *)(this + 0x453),0);
    iVar2 = *(int *)(this + 0x563);
    *(int *)(this + 0x563) = iVar2 + -1;
    if (iVar2 + -1 == 0) {
      *(undefined4 *)(this + 0x54f) = 0x3dcccccd;
    }
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_amur_arrow_pjl.cpp
   addr: 004324E0 */

entENTITY * __fastcall pjlAMUR_ARROW::Create(animINST *param_1)

{
  undefined4 uVar1;
  physPHYS *this;
  
  this = (physPHYS *)operator_new(0x1ec);
  if (this != (physPHYS *)0x0) {
    physPHYS::physPHYS(this);
    *(undefined4 *)(this + 0x153) = 0;
    *(undefined4 *)(this + 0x157) = 0;
    *(undefined4 *)(this + 0x15b) = 0xbf800000;
    *(undefined4 *)(this + 0x15f) = 0;
    *(undefined4 *)(this + 0x163) = 0xffffffff;
    *(undefined4 *)(this + 0x167) = 0xffffffff;
    *(undefined4 *)(this + 0x16b) = 0xffffffff;
    *(undefined4 *)(this + 0x16f) = 0xbf800000;
    *(undefined4 *)(this + 0x174) = 0;
    *(undefined ***)this = &pjlPJL<struct_pjlARROW_GENERIC_SFX>::_vftable_;
    *(undefined4 *)(this + 0x178) = 0;
    *(undefined4 *)(this + 0x17c) = 0;
    *(undefined4 *)(this + 0x180) = 0;
    *(undefined4 *)(this + 0x184) = 0;
    *(undefined4 *)(this + 0x188) = 0;
    *(undefined4 *)(this + 0x18c) = _m3dVZero;
    *(undefined4 *)(this + 400) = DAT_00963740;
    uVar1 = DAT_00963744;
    *(undefined4 *)(this + 0x198) = 0;
    *(undefined4 *)(this + 0x194) = uVar1;
    *(undefined4 *)(this + 0x1e8) = 0;
    *(undefined ***)this = &_vftable_;
    return (entENTITY *)this;
  }
  return (entENTITY *)0x0;
}




/* from: ai_amur_arrow_pjl.cpp
   addr: 004325B0 */

int __thiscall
pjlPJL<struct_pjlARROW_GENERIC_SFX>::ProcessINIT
          (pjlPJL<struct_pjlARROW_GENERIC_SFX> *this,physINIT *param_1)

{
  int iVar1;
  entIACTIVE_OBJ *peVar2;
  
  iVar1 = physPHYS::ProcessINIT((physPHYS *)this,param_1);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(this + 0x15b) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(this + 0x15f) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x167) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(this + 0x163) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(this + 0x16f) = *(undefined4 *)(param_1 + 0x4c);
  this[0x173] = *(pjlPJL<struct_pjlARROW_GENERIC_SFX> *)(param_1 + 0x50);
  if (((byte)this[0x88] & 4) != 0) {
    if (*(int *)(param_1 + 0x48) != -1) {
      peVar2 = gsMP_SYSTEM::FindEnt(gsSysMP,*(int *)(param_1 + 0x48),4);
      if (peVar2 != (entIACTIVE_OBJ *)0x0) {
        physPHYS::AddEntCDTExclude((physPHYS *)this,(entENTITY *)peVar2);
      }
    }
    *(undefined4 *)(this + 0x16b) = *(undefined4 *)(param_1 + 0x48);
  }
  if (*(int *)(gsSysMP + 0x28) != 4) {
    pjlARROW_GENERIC_SFX::StartSFX
              ((pjlARROW_GENERIC_SFX *)(this + 0x153),(physPHYS *)this,(pjlPJL_INIT *)param_1);
  }
  return 1;
}




/* from: ai_amur_arrow_pjl.cpp
   addr: 00432660 */

void __thiscall
pjlPJL<struct_pjlARROW_GENERIC_SFX>::ProcessFRAME(pjlPJL<struct_pjlARROW_GENERIC_SFX> *this)

{
  if (((byte)gsSysCinema[0x80] & 1) == 0) {
    physPHYS::ProcessFRAME((physPHYS *)this);
    pjlARROW_GENERIC_SFX::UpdateSFX((pjlARROW_GENERIC_SFX *)(this + 0x153),(physPHYS *)this);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_amur_arrow_pjl.cpp
   addr: 00432690
   addr: 00432690
   addr: 00432690
   addr: 00432690 */

void __thiscall
pjlPJL<struct_pjlCERBER_FIREBALL_SFX>::ProcessEV_CDT
          (pjlPJL<struct_pjlCERBER_FIREBALL_SFX> *this,pjlEV_CDT *param_1)

{
  int iVar1;
  
  *(uint *)(this + 0x174) = *(uint *)(this + 0x174) | 1;
  pjlGEFEST_SFX::StopSFX((pjlGEFEST_SFX *)(this + 0x153),(physPHYS *)this);
  if (*(int *)(gsSysMP + 0x28) != 4) {
    (**(code **)(*(int *)this + 0x84))(param_1);
  }
  iVar1 = *(int *)(this + 0x14f);
  *(undefined4 *)(iVar1 + 0x48) = _m3dVZero;
  *(undefined4 *)(iVar1 + 0x4c) = DAT_00963740;
  *(undefined4 *)(iVar1 + 0x50) = DAT_00963744;
  *(uint *)(*(int *)(this + 0x14f) + 4) = *(uint *)(*(int *)(this + 0x14f) + 4) | 0x10;
  (**(code **)(*(int *)this + 0x88))();
  return;
}




/* from: ai_amur_arrow_pjl.cpp
   addr: 00432710
   addr: 00432710
   addr: 00432710
   addr: 00432710
   addr: 00432710
   addr: 00432710
   addr: 00432710
   addr: 00432710 */

void * __thiscall
pjlPJL<struct_pjlARROW_GENERIC_SFX>::_vector_deleting_destructor_
          (pjlPJL<struct_pjlARROW_GENERIC_SFX> *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  physPHYS::~physPHYS((physPHYS *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

