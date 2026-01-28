
/* from: gs_shared:part_eff.cpp
   addr: 00545900 */

int __fastcall peffInit(void)

{
  int iVar1;
  
  iVar1 = entRegisterClass(s_steam,0x24504546,0x2d,peffPART_EFF::CreateSteam,(char *)0x0,1);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = entRegisterClass(s_smoke,0x24504546,0x2d,peffPART_EFF::CreateSmoke,(char *)0x0,1);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = entRegisterClass(s_gas,0x24504546,0x2d,peffPART_EFF::CreateGas,(char *)0x0,1);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = entRegisterClass(s_flame,0x24504546,0x2d,peffPART_EFF::CreateFlame,(char *)0x0,1);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = entRegisterClass(s_follow,0x24504546,0x50,peffPART_EFF::CreateFollow,(char *)0x0,1);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = entRegisterClass(s_spark,0x24504546,0x50,peffPART_EFF_SPARK::Create,(char *)0x0,1);
  return (uint)(iVar1 != 0);
}




/* from: gs_shared:part_eff.cpp
   addr: 005459C0
   addr: 005459C0 */

void * __thiscall peffPART_EFF::_vector_deleting_destructor_(peffPART_EFF *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  if (*(undefined4 **)(this + 0x16f) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x16f))(1);
  }
  gsDOMAIN_LIST::~gsDOMAIN_LIST((gsDOMAIN_LIST *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:part_eff.cpp
   addr: 00545A00 */

entENTITY * __fastcall peffPART_EFF::CreateSteam(animINST *param_1)

{
  entENTITY *this;
  peffSMOKE *this_00;
  undefined4 uVar1;
  
  this = (entENTITY *)operator_new(0x173);
  if (this == (entENTITY *)0x0) {
    this = (entENTITY *)0x0;
  }
  else {
    entENTITY::entENTITY(this);
    *(undefined ***)this = &_vftable_;
    *(undefined4 *)(this + 0x14f) = 0;
    *(undefined4 *)(this + 0x15f) = _m3dVZero;
    *(undefined4 *)(this + 0x163) = DAT_00963740;
    *(undefined4 *)(this + 0x167) = DAT_00963744;
    *(undefined4 *)(this + 0x153) = _m3dVZero;
    *(undefined4 *)(this + 0x157) = DAT_00963740;
    uVar1 = DAT_00963744;
    *(undefined4 *)(this + 0x16b) = 0;
    *(undefined4 *)(this + 0x16f) = 0;
    *(undefined4 *)(this + 0x15b) = uVar1;
  }
  this_00 = (peffSMOKE *)operator_new(0x2c0);
  if (this_00 != (peffSMOKE *)0x0) {
    uVar1 = peffSMOKE::peffSMOKE(this_00,2.0);
    *(undefined4 *)(this + 0x16f) = uVar1;
    return this;
  }
  *(undefined4 *)(this + 0x16f) = 0;
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:part_eff.cpp
   addr: 00545AC0 */

entENTITY * __fastcall peffPART_EFF::CreateSmoke(animINST *param_1)

{
  entENTITY *this;
  peffSMOKE_ANIM *this_00;
  undefined4 uVar1;
  
  this = (entENTITY *)operator_new(0x173);
  if (this == (entENTITY *)0x0) {
    this = (entENTITY *)0x0;
  }
  else {
    entENTITY::entENTITY(this);
    *(undefined ***)this = &_vftable_;
    *(undefined4 *)(this + 0x14f) = 1;
    *(undefined4 *)(this + 0x15f) = _m3dVZero;
    *(undefined4 *)(this + 0x163) = DAT_00963740;
    *(undefined4 *)(this + 0x167) = DAT_00963744;
    *(undefined4 *)(this + 0x153) = _m3dVZero;
    *(undefined4 *)(this + 0x157) = DAT_00963740;
    uVar1 = DAT_00963744;
    *(undefined4 *)(this + 0x16b) = 0;
    *(undefined4 *)(this + 0x16f) = 0;
    *(undefined4 *)(this + 0x15b) = uVar1;
  }
  this_00 = (peffSMOKE_ANIM *)operator_new(0x2c0);
  if (this_00 != (peffSMOKE_ANIM *)0x0) {
    uVar1 = peffSMOKE_ANIM::peffSMOKE_ANIM(this_00,1.0);
    *(undefined4 *)(this + 0x16f) = uVar1;
    return this;
  }
  *(undefined4 *)(this + 0x16f) = 0;
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:part_eff.cpp
   addr: 00545B80 */

entENTITY * __fastcall peffPART_EFF::CreateGas(animINST *param_1)

{
  entENTITY *this;
  peffGAS *this_00;
  undefined4 uVar1;
  
  this = (entENTITY *)operator_new(0x173);
  if (this == (entENTITY *)0x0) {
    this = (entENTITY *)0x0;
  }
  else {
    entENTITY::entENTITY(this);
    *(undefined ***)this = &_vftable_;
    *(undefined4 *)(this + 0x14f) = 2;
    *(undefined4 *)(this + 0x15f) = _m3dVZero;
    *(undefined4 *)(this + 0x163) = DAT_00963740;
    *(undefined4 *)(this + 0x167) = DAT_00963744;
    *(undefined4 *)(this + 0x153) = _m3dVZero;
    *(undefined4 *)(this + 0x157) = DAT_00963740;
    uVar1 = DAT_00963744;
    *(undefined4 *)(this + 0x16b) = 0;
    *(undefined4 *)(this + 0x16f) = 0;
    *(undefined4 *)(this + 0x15b) = uVar1;
  }
  this_00 = (peffGAS *)operator_new(0x2c8);
  if (this_00 != (peffGAS *)0x0) {
    uVar1 = peffGAS::peffGAS(this_00,2.0);
    *(undefined4 *)(this + 0x16f) = uVar1;
    return this;
  }
  *(undefined4 *)(this + 0x16f) = 0;
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:part_eff.cpp
   addr: 00545C40 */

entENTITY * __fastcall peffPART_EFF::CreateFlame(animINST *param_1)

{
  entENTITY *this;
  peffFLAME *this_00;
  undefined4 uVar1;
  
  this = (entENTITY *)operator_new(0x173);
  if (this == (entENTITY *)0x0) {
    this = (entENTITY *)0x0;
  }
  else {
    entENTITY::entENTITY(this);
    *(undefined ***)this = &_vftable_;
    *(undefined4 *)(this + 0x14f) = 3;
    *(undefined4 *)(this + 0x15f) = _m3dVZero;
    *(undefined4 *)(this + 0x163) = DAT_00963740;
    *(undefined4 *)(this + 0x167) = DAT_00963744;
    *(undefined4 *)(this + 0x153) = _m3dVZero;
    *(undefined4 *)(this + 0x157) = DAT_00963740;
    uVar1 = DAT_00963744;
    *(undefined4 *)(this + 0x16b) = 0;
    *(undefined4 *)(this + 0x16f) = 0;
    *(undefined4 *)(this + 0x15b) = uVar1;
  }
  this_00 = (peffFLAME *)operator_new(0x2c0);
  if (this_00 != (peffFLAME *)0x0) {
    uVar1 = peffFLAME::peffFLAME(this_00,5.0);
    *(undefined4 *)(this + 0x16f) = uVar1;
    return this;
  }
  *(undefined4 *)(this + 0x16f) = 0;
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:part_eff.cpp
   addr: 00545D00 */

entENTITY * __fastcall peffPART_EFF::CreateFollow(animINST *param_1)

{
  undefined4 uVar1;
  entENTITY *this;
  
  this = (entENTITY *)operator_new(0x173);
  if (this != (entENTITY *)0x0) {
    entENTITY::entENTITY(this);
    *(undefined ***)this = &_vftable_;
    *(undefined4 *)(this + 0x14f) = 4;
    *(undefined4 *)(this + 0x15f) = _m3dVZero;
    *(undefined4 *)(this + 0x163) = DAT_00963740;
    *(undefined4 *)(this + 0x167) = DAT_00963744;
    *(undefined4 *)(this + 0x153) = _m3dVZero;
    *(undefined4 *)(this + 0x157) = DAT_00963740;
    uVar1 = DAT_00963744;
    *(undefined4 *)(this + 0x16b) = 0;
    *(undefined4 *)(this + 0x16f) = 0;
    *(undefined4 *)(this + 0x15b) = uVar1;
    return this;
  }
  return (entENTITY *)0x0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:part_eff.cpp
   addr: 00545D90 */

int __thiscall
peffPART_EFF::ProcessMsg(peffPART_EFF *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  int iVar1;
  float fVar2;
  animINST *this_00;
  undefined8 *puVar3;
  int iVar4;
  objOBJ *poVar5;
  float *pfVar6;
  float *pfVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 extraout_MM1;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  char local_90 [64];
  peffPART_EFF *local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34 [3];
  float local_28;
  float local_24;
  float local_20;
  undefined8 *local_1c;
  float local_18;
  float local_14;
  float local_10;
  ulong local_c;
  float *local_8;
  
  if (param_1 == 1) {
    *(uint *)(*(int *)(this + 0x16f) + 4) = *(uint *)(*(int *)(this + 0x16f) + 4) | 0x800;
    if (*(int *)(this + 0x14f) == 2) {
      local_90[0] = '\0';
      iVar4 = animINST::GetStr(*(animINST **)(this + 0xbc),s_GEOM,s_object,local_90,0x40);
      if (iVar4 != 0) {
        poVar5 = objFindName(*(objOBJ **)(gsScenePtr + 0x44),local_90);
        peffGAS::SetObjEmitter(*(peffGAS **)(this + 0x16f),poVar5);
      }
    }
    iVar4 = animINST::GetFloat(*(animINST **)(this + 0xbc),s_ANIM,s_emitTime,(float *)&param_2);
    if ((iVar4 != 0) &&
       (iVar4 = animINST::GetFloat(*(animINST **)(this + 0xbc),s_ANIM,s_delayTime,(float *)&param_1)
       , iVar4 != 0)) {
      partEMITTER_PHYS::SetAnimEmission
                (*(partEMITTER_PHYS **)(this + 0x16f),(float)param_2,(float)param_1);
      *(uint *)(*(int *)(this + 0x16f) + 4) = *(uint *)(*(int *)(this + 0x16f) + 4) | 0x100;
    }
    iVar4 = animINST::GetHEX(*(animINST **)(this + 0xbc),s_COLOR,s_color,&local_c);
    if (iVar4 != 0) {
      (**(code **)(**(int **)(this + 0x16f) + 4))(local_c,0,0);
    }
    if (*(int *)(this + 0x16b) != 0) {
      animINST::GetPos(*(animINST **)(*(int *)(this + 0x16b) + 0xbc),(m3dV *)(this + 0x153));
      *(uint *)(this + 0xc) = *(uint *)(this + 0xc) | 2;
    }
  }
  else if (param_1 == 3) {
    if (*(void **)(this + 0x16b) == param_2) {
      partEMITTER_PHYS::StopEmission(*(partEMITTER_PHYS **)(this + 0x16f));
      *(undefined4 *)(this + 0x16b) = 0;
      return 0;
    }
  }
  else if (param_1 == 1000) {
    if ((*(int *)(this + 0x16b) != 0) &&
       (this_00 = *(animINST **)(*(int *)(this + 0x16b) + 0xbc), this_00 != (animINST *)0x0)) {
      animINST::GetPos(this_00,(m3dV *)&local_18);
      animINST::GetDir(*(animINST **)(*(int *)(this + 0x16b) + 0xbc),(m3dV *)&local_28);
      fVar17 = *(float *)(this + 0x153);
      fVar18 = *(float *)(this + 0x157);
      fVar2 = *(float *)(this + 0x15b);
      local_50 = this + 0x15f;
      local_38 = ___real_3f800000 / gsElapsedTime;
      *(float *)(this + 0x153) = local_18;
      *(float *)(this + 0x157) = local_14;
      local_8 = local_34;
      *(float *)(this + 0x15b) = local_10;
      local_40 = (local_18 - fVar17) * local_38;
      local_3c = (local_14 - fVar18) * local_38;
      local_38 = (local_10 - fVar2) * local_38;
      iVar4 = *(int *)(*(int *)(this + 0x16b) + 0xbc);
      puVar3 = (undefined8 *)(iVar4 + 0x60);
      local_1c = puVar3;
      if (m3dSimdType != 0) {
        if (m3dSimdType == 1) {
          FastExitMediaState();
          uVar8 = (undefined4)*(undefined8 *)local_50;
          uVar12 = CONCAT44(uVar8,uVar8);
          uVar8 = (undefined4)((ulonglong)*(undefined8 *)local_50 >> 0x20);
          uVar16 = CONCAT44(uVar8,uVar8);
          uVar13 = CONCAT44(*(undefined4 *)(this + 0x167),*(undefined4 *)(this + 0x167));
          uVar9 = PackedFloatingMUL(uVar12,*puVar3);
          uVar11 = PackedFloatingMUL(uVar16,*(undefined8 *)(iVar4 + 0x70));
          uVar14 = PackedFloatingMUL(uVar13,*(undefined8 *)(iVar4 + 0x80));
          uVar15 = PackedFloatingMUL(uVar12,*(undefined8 *)(iVar4 + 0x68));
          uVar12 = PackedFloatingADD(uVar11,uVar14);
          uVar16 = PackedFloatingMUL(uVar16,*(undefined8 *)(iVar4 + 0x78));
          uVar11 = PackedFloatingMUL(uVar13,*(undefined8 *)(iVar4 + 0x88));
          uVar12 = PackedFloatingADD(uVar9,uVar12);
          uVar9 = PackedFloatingADD(uVar16,uVar11);
          local_34[1] = (float)((ulonglong)uVar12 >> 0x20);
          local_34[0] = (float)uVar12;
          uVar12 = PackedFloatingADD(uVar15,uVar9);
          local_34[2] = (float)uVar12;
          FastExitMediaState();
        }
        else {
          pfVar6 = local_34;
          local_8 = (float *)0x3;
          do {
            *pfVar6 = 0.0;
            iVar4 = 0;
            pfVar7 = (float *)(((int)puVar3 - (int)local_34) + (int)pfVar6);
            do {
              iVar1 = iVar4 * 4;
              fVar17 = *pfVar7;
              iVar4 = iVar4 + 1;
              pfVar7 = pfVar7 + 4;
              *pfVar6 = *(float *)(local_50 + iVar1) * fVar17 + *pfVar6;
            } while (iVar4 < 3);
            pfVar6 = pfVar6 + 1;
            local_8 = (float *)((int)local_8 + -1);
          } while (local_8 != (float *)0x0);
        }
      }
      local_4c = local_18 - local_34[0];
      local_48 = local_14 - local_34[1];
      local_44 = local_10 - local_34[2];
      partEMITTER_PHYS::SetPosDirSpeed
                (*(partEMITTER_PHYS **)(this + 0x16f),(m3dV *)&local_4c,(m3dV *)&local_28,
                 (m3dV *)&local_40);
      (**(code **)(**(int **)(this + 0x16f) + 0xc))(gsCameraPtr,gsElapsedTime);
      return 0;
    }
    iVar4 = (**(code **)(**(int **)(this + 0x16f) + 0xc))(gsCameraPtr,gsElapsedTime);
    if (iVar4 == 0) {
      msgSYSTEM::PostMsg(&msgSystem,(msgADDR *)this,2,(msgADDR *)this);
    }
    animINST::GetPos(*(animINST **)(this + 0xbc),(m3dV *)&local_18);
    animINST::GetDirUp(*(animINST **)(this + 0xbc),(m3dV *)&local_28);
    fVar17 = local_28 * local_28 + local_24 * local_24 + local_20 * local_20;
    if (m3dSimdType == 0) {
      fVar17 = fVar17 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
      auVar19 = rsqrtss(ZEXT416((uint)fVar17),ZEXT416((uint)fVar17));
      fVar18 = auVar19._0_4_;
      local_8 = (float *)(`float___cdecl_m3dSqrt(float)'::__l2::half * fVar18 *
                          (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar17 * fVar18 * fVar18) *
                         fVar17);
    }
    else if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar10 = (ulonglong)(uint)fVar17;
      uVar12 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar10);
      uVar9 = PackedFloatingMUL(uVar12,uVar12);
      uVar9 = PackedFloatingReciprocalSQRIter1(uVar9,uVar10);
      uVar12 = PackedFloatingReciprocalIter2(uVar9,uVar12);
      uVar12 = PackedFloatingMUL(uVar12,uVar10);
      local_8 = (float *)uVar12;
      FastExitMediaState();
    }
    else {
      local_8 = (float *)SQRT(fVar17);
    }
    local_8 = (float *)ABS((float)local_8);
    local_1c = (undefined8 *)(uint)((float)local_8 < _DAT_005de0d8);
    if ((float)(int)local_1c == ___real_00000000) {
      partEMITTER_PHYS::SetPosDirSpeed
                (*(partEMITTER_PHYS **)(this + 0x16f),(m3dV *)&local_18,(m3dV *)&local_28,
                 (m3dV *)0x0);
      return 0;
    }
  }
  return 0;
}




/* from: gs_shared:part_eff.cpp
   addr: 005462A0
   addr: 005462A0 */

void * __thiscall
peffPART_EFF_SPARK::_vector_deleting_destructor_(peffPART_EFF_SPARK *this,uint param_1)

{
  int iVar1;
  peffPART_EFF_SPARK *ppVar2;
  
  iVar1 = 3;
  *(undefined ***)this = &_vftable_;
  ppVar2 = this + 0x14f;
  do {
    if (*(undefined4 **)ppVar2 != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)ppVar2)(1);
    }
    ppVar2 = ppVar2 + 4;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  gsDOMAIN_LIST::~gsDOMAIN_LIST((gsDOMAIN_LIST *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: gs_shared:part_eff.cpp
   addr: 005462F0 */

entENTITY * __fastcall peffPART_EFF_SPARK::Create(animINST *param_1)

{
  entENTITY *this;
  
  this = (entENTITY *)operator_new(0x15b);
  if (this != (entENTITY *)0x0) {
    entENTITY::entENTITY(this);
    *(undefined ***)this = &_vftable_;
    *(undefined4 *)(this + 0x14f) = 0;
    *(undefined4 *)(this + 0x153) = 0;
    *(undefined4 *)(this + 0x157) = 0;
    return this;
  }
  return (entENTITY *)0x0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:part_eff.cpp
   addr: 00546330 */

int __thiscall
peffPART_EFF_SPARK::ProcessMsg
          (peffPART_EFF_SPARK *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  partEMITTER_PHYS *this_00;
  peffSPARKLE *this_01;
  int iVar1;
  int iVar2;
  peffPART_EFF_SPARK *ppVar3;
  float fVar4;
  float local_24;
  float local_20;
  float local_1c;
  m3dV local_18 [12];
  m3dV local_c [12];
  
  if (param_1 == 1) {
    iVar2 = 0;
    ppVar3 = this + 0x14f;
    do {
      this_01 = (peffSPARKLE *)operator_new(0x2d0);
      if (this_01 == (peffSPARKLE *)0x0) {
        iVar1 = 0;
      }
      else {
        iVar1 = peffSPARKLE::peffSPARKLE(this_01);
      }
      *(int *)ppVar3 = iVar1;
      if (iVar1 == 0) {
        return 0;
      }
      iVar2 = iVar2 + 1;
      ppVar3 = ppVar3 + 4;
    } while (iVar2 < 3);
  }
  else if (param_1 == 1000) {
    animINST::GetPos(*(animINST **)(this + 0xbc),local_c);
    animINST::GetDir(*(animINST **)(this + 0xbc),local_18);
    ppVar3 = this + 0x14f;
    iVar2 = 3;
    do {
      if (((*(byte *)(*(int *)ppVar3 + 8) & 1) == 0) &&
         (fVar4 = m3dRandom(), fVar4 < ___real_3f000000)) {
        partEMITTER_PHYS::KillAll(*(partEMITTER_PHYS **)ppVar3);
        m3dMakeVUnitConusRandom(local_18,(float)&local_24,(m3dV *)0x41a00000);
        local_24 = local_24 * ___real_40400000;
        local_20 = local_20 * ___real_40400000;
        local_1c = local_1c * ___real_40400000;
        partEMITTER_PHYS::SetPosDirSpeed
                  (*(partEMITTER_PHYS **)ppVar3,local_c,(m3dV *)0x0,(m3dV *)&local_24);
        this_00 = *(partEMITTER_PHYS **)ppVar3;
        partEMITTER_PHYS::StopEmission(this_00);
        partEMITTER_PHYS::StartEmission(this_00);
      }
      ppVar3 = ppVar3 + 4;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    return 0;
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:part_eff.cpp
   addr: 00546470 */

peffFLAME * __thiscall peffFLAME::peffFLAME(peffFLAME *this,float param_1)

{
  float fVar1;
  m3dSPL *pmVar2;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,150.0,2.5);
  fVar1 = param_1 * ___real_3e99999a;
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0xec) = 0;
  *(float *)(this + 0xb4) = fVar1;
  fVar1 = param_1 * ___real_3e19999a;
  *(undefined4 *)(this + 0xf8) = 0x41a00000;
  *(undefined4 *)(this + 0xfc) = 0;
  *(float *)(this + 0xb8) = fVar1;
  *(float *)(this + 0xe8) = param_1 * ___real_3df5c28f;
  pmVar2 = (m3dSPL *)operator_new(0x34);
  if (pmVar2 == (m3dSPL *)0x0) {
    pmVar2 = (m3dSPL *)0x0;
  }
  else {
    *(undefined4 *)(pmVar2 + 4) = 0;
    *(undefined4 *)(pmVar2 + 8) = 8;
    *(undefined4 *)(pmVar2 + 0xc) = 0;
    *(undefined4 *)(pmVar2 + 0x14) = 0x14;
    *(undefined4 *)(pmVar2 + 0x18) = 0x14;
    *(undefined4 *)(pmVar2 + 0x1c) = 4;
    *(undefined4 *)(pmVar2 + 0x20) = 0;
    *(undefined4 *)(pmVar2 + 0x24) = 0;
    *(undefined4 *)(pmVar2 + 0x28) = 0;
    *(undefined4 *)(pmVar2 + 0x2c) = 0;
    *(undefined4 *)(pmVar2 + 0x30) = 0;
    *(undefined ***)pmVar2 = &m3dSPL_COLOR::_vftable_;
    m3dSPL::AllocKpList(pmVar2,4);
  }
  m3dSPL_COLOR::SetKp((m3dSPL_COLOR *)pmVar2,0,0.0,255.0,255.0,137.0,255.0);
  m3dSPL_COLOR::SetKp((m3dSPL_COLOR *)pmVar2,1,0.33,255.0,255.0,10.0,255.0);
  m3dSPL_COLOR::SetKp((m3dSPL_COLOR *)pmVar2,2,0.75,255.0,75.0,10.0,155.0);
  m3dSPL_COLOR::SetKp((m3dSPL_COLOR *)pmVar2,3,1.0,255.0,75.0,10.0,5.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0,(m3dSPL_COLOR *)pmVar2,(m3dSPL_LINEAR1D *)0x0);
  pmVar2 = (m3dSPL *)operator_new(0x34);
  if (pmVar2 == (m3dSPL *)0x0) {
    pmVar2 = (m3dSPL *)0x0;
  }
  else {
    *(undefined4 *)(pmVar2 + 4) = 0;
    *(undefined4 *)(pmVar2 + 8) = 0;
    *(undefined4 *)(pmVar2 + 0xc) = 0;
    *(undefined4 *)(pmVar2 + 0x14) = 8;
    *(undefined4 *)(pmVar2 + 0x18) = 8;
    *(undefined4 *)(pmVar2 + 0x1c) = 1;
    *(undefined4 *)(pmVar2 + 0x20) = 0;
    *(undefined4 *)(pmVar2 + 0x24) = 0;
    *(undefined4 *)(pmVar2 + 0x28) = 0;
    *(undefined4 *)(pmVar2 + 0x2c) = 0;
    *(undefined4 *)(pmVar2 + 0x30) = 0;
    *(undefined ***)pmVar2 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar2,2);
  }
  fVar1 = param_1 * ___real_3d75c28f;
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,0,0.0,fVar1);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,1.0,param_1 * ___real_3ca3d70a);
  partEMITTER_PHYS::SetSize((partEMITTER_PHYS *)this,fVar1,0.0,(m3dSPL_LINEAR1D *)pmVar2,1.0);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 8;
  partEMITTER_PHYS::StartEmission((partEMITTER_PHYS *)this);
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:part_eff.cpp
   addr: 00546670 */

peffSMOKE * __thiscall peffSMOKE::peffSMOKE(peffSMOKE *this,float param_1)

{
  float fVar1;
  m3dSPL *pmVar2;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,100.0,3.0);
  fVar1 = param_1 * ___real_3e2e147b;
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 0xb4) = 0x40200000;
  *(undefined4 *)(this + 0xb8) = 0x3f333333;
  *(float *)(this + 0xe8) = fVar1;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0xe0) = 0x3e99999a;
  *(undefined4 *)(this + 0xe4) = 0;
  *(undefined4 *)(this + 0xb0) = 0x3f333333;
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0xec) = 0;
  *(undefined4 *)(this + 0xf8) = 0x41700000;
  *(undefined4 *)(this + 0xfc) = 0;
  pmVar2 = (m3dSPL *)operator_new(0x34);
  if (pmVar2 == (m3dSPL *)0x0) {
    pmVar2 = (m3dSPL *)0x0;
  }
  else {
    *(undefined4 *)(pmVar2 + 4) = 0;
    *(undefined4 *)(pmVar2 + 8) = 0;
    *(undefined4 *)(pmVar2 + 0xc) = 0;
    *(undefined4 *)(pmVar2 + 0x14) = 8;
    *(undefined4 *)(pmVar2 + 0x18) = 8;
    *(undefined4 *)(pmVar2 + 0x1c) = 1;
    *(undefined4 *)(pmVar2 + 0x20) = 0;
    *(undefined4 *)(pmVar2 + 0x24) = 0;
    *(undefined4 *)(pmVar2 + 0x28) = 0;
    *(undefined4 *)(pmVar2 + 0x2c) = 0;
    *(undefined4 *)(pmVar2 + 0x30) = 0;
    *(undefined ***)pmVar2 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar2,2);
  }
  fVar1 = param_1 * ___real_3d75c28f;
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,0,0.0,fVar1);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,1.0,param_1 * ___real_3e75c28f);
  partEMITTER_PHYS::SetSize((partEMITTER_PHYS *)this,fVar1,0.0,(m3dSPL_LINEAR1D *)pmVar2,1.0);
  pmVar2 = (m3dSPL *)operator_new(0x34);
  if (pmVar2 == (m3dSPL *)0x0) {
    pmVar2 = (m3dSPL *)0x0;
  }
  else {
    *(undefined4 *)(pmVar2 + 4) = 0;
    *(undefined4 *)(pmVar2 + 8) = 8;
    *(undefined4 *)(pmVar2 + 0xc) = 0;
    *(undefined4 *)(pmVar2 + 0x14) = 0x14;
    *(undefined4 *)(pmVar2 + 0x18) = 0x14;
    *(undefined4 *)(pmVar2 + 0x1c) = 4;
    *(undefined4 *)(pmVar2 + 0x20) = 0;
    *(undefined4 *)(pmVar2 + 0x24) = 0;
    *(undefined4 *)(pmVar2 + 0x28) = 0;
    *(undefined4 *)(pmVar2 + 0x2c) = 0;
    *(undefined4 *)(pmVar2 + 0x30) = 0;
    *(undefined ***)pmVar2 = &m3dSPL_COLOR::_vftable_;
    m3dSPL::AllocKpList(pmVar2,3);
  }
  m3dSPL_COLOR::SetKp((m3dSPL_COLOR *)pmVar2,0,0.0,255.0,255.0,255.0,0.0);
  m3dSPL_COLOR::SetKp((m3dSPL_COLOR *)pmVar2,1,0.05,255.0,255.0,255.0,135.0);
  m3dSPL_COLOR::SetKp((m3dSPL_COLOR *)pmVar2,2,1.0,255.0,255.0,255.0,10.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0,(m3dSPL_COLOR *)pmVar2,(m3dSPL_LINEAR1D *)0x0);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 8;
  partEMITTER_PHYS::StartEmission((partEMITTER_PHYS *)this);
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:part_eff.cpp
   addr: 00546860 */

peffSMOKE_ANIM * __thiscall peffSMOKE_ANIM::peffSMOKE_ANIM(peffSMOKE_ANIM *this,float param_1)

{
  float fVar1;
  m3dSPL *pmVar2;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,100.0,4.0);
  fVar1 = param_1 * ___real_3e99999a;
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 0xb4) = 0x3f19999a;
  *(undefined4 *)(this + 0xb8) = 0x3e4ccccd;
  *(undefined4 *)(this + 0xbc) = 0;
  *(float *)(this + 0xe8) = fVar1;
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0xe0) = 0x3ecccccd;
  *(undefined4 *)(this + 0xe4) = 0;
  *(undefined4 *)(this + 0xb0) = 0x3f000000;
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0xec) = 0;
  *(undefined4 *)(this + 0xf8) = 0x420c0000;
  *(undefined4 *)(this + 0xfc) = 0;
  partEMITTER_PHYS::StartEmission((partEMITTER_PHYS *)this);
  pmVar2 = (m3dSPL *)operator_new(0x34);
  if (pmVar2 == (m3dSPL *)0x0) {
    pmVar2 = (m3dSPL *)0x0;
  }
  else {
    *(undefined4 *)(pmVar2 + 4) = 0;
    *(undefined4 *)(pmVar2 + 8) = 0;
    *(undefined4 *)(pmVar2 + 0xc) = 0;
    *(undefined4 *)(pmVar2 + 0x14) = 8;
    *(undefined4 *)(pmVar2 + 0x18) = 8;
    *(undefined4 *)(pmVar2 + 0x1c) = 1;
    *(undefined4 *)(pmVar2 + 0x20) = 0;
    *(undefined4 *)(pmVar2 + 0x24) = 0;
    *(undefined4 *)(pmVar2 + 0x28) = 0;
    *(undefined4 *)(pmVar2 + 0x2c) = 0;
    *(undefined4 *)(pmVar2 + 0x30) = 0;
    *(undefined ***)pmVar2 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar2,2);
  }
  fVar1 = param_1 * ___real_3dcccccd;
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,0,0.0,fVar1);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,1.0,param_1 * ___real_3e99999a);
  partEMITTER_PHYS::SetSize((partEMITTER_PHYS *)this,fVar1,0.0,(m3dSPL_LINEAR1D *)pmVar2,1.0);
  pmVar2 = (m3dSPL *)operator_new(0x34);
  if (pmVar2 == (m3dSPL *)0x0) {
    pmVar2 = (m3dSPL *)0x0;
  }
  else {
    *(undefined4 *)(pmVar2 + 4) = 0;
    *(undefined4 *)(pmVar2 + 8) = 8;
    *(undefined4 *)(pmVar2 + 0xc) = 0;
    *(undefined4 *)(pmVar2 + 0x14) = 0x14;
    *(undefined4 *)(pmVar2 + 0x18) = 0x14;
    *(undefined4 *)(pmVar2 + 0x1c) = 4;
    *(undefined4 *)(pmVar2 + 0x20) = 0;
    *(undefined4 *)(pmVar2 + 0x24) = 0;
    *(undefined4 *)(pmVar2 + 0x28) = 0;
    *(undefined4 *)(pmVar2 + 0x2c) = 0;
    *(undefined4 *)(pmVar2 + 0x30) = 0;
    *(undefined ***)pmVar2 = &m3dSPL_COLOR::_vftable_;
    m3dSPL::AllocKpList(pmVar2,2);
  }
  m3dSPL_COLOR::SetKp((m3dSPL_COLOR *)pmVar2,0,0.0,255.0,255.0,255.0,155.0);
  m3dSPL_COLOR::SetKp((m3dSPL_COLOR *)pmVar2,1,1.0,255.0,255.0,255.0,10.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0,(m3dSPL_COLOR *)pmVar2,(m3dSPL_LINEAR1D *)0x0);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x40a;
  partEMITTER_PHYS::SetTextureFrameAnim((partEMITTER_PHYS *)this,8,8,4.0,0.0);
  _DAT_009635e4 = txmMANAGER::Add(txmManager,s_part_smoke64,0x40003,1);
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,_DAT_009635e4);
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:part_eff.cpp
   addr: 00546A70 */

peffGAS * __thiscall peffGAS::peffGAS(peffGAS *this,float param_1)

{
  float fVar1;
  m3dSPL *this_00;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,300.0,2.5);
  fVar1 = param_1 * ___real_3da3d70a;
  *(undefined ***)this = &_vftable_;
  partEMITTER_PHYS::SetSize((partEMITTER_PHYS *)this,fVar1,0.0,(m3dSPL_LINEAR1D *)0x0,1.0);
  fVar1 = param_1 * ___real_3e2e147b;
  *(undefined4 *)(this + 0xb4) = 0x40400000;
  *(undefined4 *)(this + 0xb8) = 0x3f800000;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0xb0) = 0x3f4ccccd;
  *(undefined4 *)(this + 0xf0) = 0;
  *(float *)(this + 0xe8) = fVar1;
  *(undefined4 *)(this + 0xec) = 0;
  *(undefined4 *)(this + 0xf8) = 0x41400000;
  *(undefined4 *)(this + 0xfc) = 0;
  partEMITTER_PHYS::StartEmission((partEMITTER_PHYS *)this);
  this_00 = (m3dSPL *)operator_new(0x34);
  if (this_00 == (m3dSPL *)0x0) {
    this_00 = (m3dSPL *)0x0;
  }
  else {
    *(undefined4 *)(this_00 + 4) = 0;
    *(undefined4 *)(this_00 + 8) = 8;
    *(undefined4 *)(this_00 + 0xc) = 0;
    *(undefined4 *)(this_00 + 0x14) = 0x14;
    *(undefined4 *)(this_00 + 0x18) = 0x14;
    *(undefined4 *)(this_00 + 0x1c) = 4;
    *(undefined4 *)(this_00 + 0x20) = 0;
    *(undefined4 *)(this_00 + 0x24) = 0;
    *(undefined4 *)(this_00 + 0x28) = 0;
    *(undefined4 *)(this_00 + 0x2c) = 0;
    *(undefined4 *)(this_00 + 0x30) = 0;
    *(undefined ***)this_00 = &m3dSPL_COLOR::_vftable_;
    m3dSPL::AllocKpList(this_00,3);
  }
  m3dSPL_COLOR::SetKp((m3dSPL_COLOR *)this_00,0,0.0,255.0,255.0,255.0,0.0);
  m3dSPL_COLOR::SetKp((m3dSPL_COLOR *)this_00,1,0.05,255.0,255.0,255.0,135.0);
  m3dSPL_COLOR::SetKp((m3dSPL_COLOR *)this_00,2,1.0,255.0,255.0,255.0,10.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0,(m3dSPL_COLOR *)this_00,(m3dSPL_LINEAR1D *)0x0);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 8;
  *(undefined4 *)(this + 0x2c4) = 0;
  return this;
}




/* from: gs_shared:part_eff.cpp
   addr: 00546BD0
   addr: 00546BD0 */

void * __thiscall peffGAS::_scalar_deleting_destructor_(peffGAS *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  if (*(int **)(this + 0x2c4) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x2c4) + 4))(1);
  }
  partEMITTER_PHYS::~partEMITTER_PHYS((partEMITTER_PHYS *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: gs_shared:part_eff.cpp
   addr: 00546C10 */

int __thiscall peffGAS::SetObjEmitter(peffGAS *this,objOBJ *param_1)

{
  objOBJ *poVar1;
  byte *pbVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  byte *pbVar6;
  int *piVar7;
  uint uVar8;
  float *pfVar9;
  int iVar10;
  float *pfVar11;
  int iVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  float local_38 [3];
  undefined8 local_2c;
  undefined4 local_24;
  float local_20 [3];
  float *local_14;
  float *local_10;
  peffGAS *local_c;
  byte *local_8;
  
  local_c = this;
  if ((param_1 == (objOBJ *)0x0) || (*(int *)(param_1 + 0x10) == 0)) {
    return 0;
  }
  *(objOBJ **)(this + 0x2c0) = param_1;
  poVar1 = param_1 + 0x10;
  param_1 = (objOBJ *)0x0;
  if (0 < *(int *)poVar1) {
    do {
      pbVar6 = *(byte **)(this + 0x2c0);
      if ((*pbVar6 & 1) == 0) {
        piVar7 = *(int **)(pbVar6 + 0x28);
        local_10 = local_38;
        local_8 = pbVar6 + 0x3c;
        pfVar3 = (float *)(piVar7[0x10] +
                          (uint)*(ushort *)
                                 ((uint)*(byte *)(piVar7 + 1) * (int)param_1 + 2 + *piVar7) * 0xc);
        local_14 = pfVar3;
        if (m3dSimdType != 0) {
          if (m3dSimdType == 1) {
            FastExitMediaState();
            uVar13 = (undefined4)*(undefined8 *)pfVar3;
            uVar16 = CONCAT44(uVar13,uVar13);
            uVar13 = (undefined4)((ulonglong)*(undefined8 *)pfVar3 >> 0x20);
            uVar19 = CONCAT44(uVar13,uVar13);
            uVar20 = CONCAT44(pfVar3[2],pfVar3[2]);
            uVar14 = PackedFloatingMUL(uVar16,*(undefined8 *)local_8);
            uVar15 = PackedFloatingMUL(uVar19,*(undefined8 *)(pbVar6 + 0x4c));
            uVar17 = PackedFloatingMUL(uVar20,*(undefined8 *)(pbVar6 + 0x5c));
            uVar14 = PackedFloatingADD(uVar14,*(undefined8 *)(pbVar6 + 0x6c));
            uVar18 = PackedFloatingMUL(uVar16,*(undefined8 *)(pbVar6 + 0x44));
            uVar16 = PackedFloatingADD(uVar15,uVar17);
            uVar15 = PackedFloatingMUL(uVar19,*(undefined8 *)(pbVar6 + 0x54));
            uVar20 = PackedFloatingMUL(uVar20,*(undefined8 *)(pbVar6 + 100));
            uVar19 = PackedFloatingADD(uVar18,*(undefined8 *)(pbVar6 + 0x74));
            uVar16 = PackedFloatingADD(uVar14,uVar16);
            uVar14 = PackedFloatingADD(uVar15,uVar20);
            local_38[1] = (float)((ulonglong)uVar16 >> 0x20);
            local_38[0] = (float)uVar16;
            uVar16 = PackedFloatingADD(uVar19,uVar14);
            local_38[2] = (float)uVar16;
            FastExitMediaState();
          }
          else {
            iVar12 = 0;
            local_14 = (float *)(local_8 + -(int)local_38);
            pfVar9 = local_38;
            do {
              pfVar11 = local_14;
              iVar10 = 0;
              *pfVar9 = 0.0;
              pfVar11 = (float *)((int)pfVar11 + (int)pfVar9);
              do {
                pfVar4 = pfVar3 + iVar10;
                fVar5 = *pfVar11;
                iVar10 = iVar10 + 1;
                pfVar11 = pfVar11 + 4;
                *pfVar9 = *pfVar4 * fVar5 + *pfVar9;
              } while (iVar10 < 3);
              iVar10 = iVar12 + iVar10 * 4;
              iVar12 = iVar12 + 1;
              *pfVar9 = *(float *)(local_8 + iVar10 * 4) + *pfVar9;
              pfVar9 = pfVar9 + 1;
            } while (iVar12 < 3);
          }
        }
      }
      else {
        piVar7 = *(int **)(pbVar6 + 0x28);
        uVar8 = (uint)*(ushort *)((uint)*(byte *)(piVar7 + 1) * (int)param_1 + 2 + *piVar7);
        iVar12 = piVar7[0x10] + uVar8 * 0xc;
        local_38[0] = *(float *)(piVar7[0x10] + uVar8 * 0xc);
        local_38[1] = (float)*(undefined4 *)(iVar12 + 4);
        local_38[2] = (float)*(undefined4 *)(iVar12 + 8);
      }
      pbVar6 = *(byte **)(local_c + 0x2c0);
      if ((*pbVar6 & 1) == 0) {
        local_14 = (float *)&local_2c;
        piVar7 = *(int **)(pbVar6 + 0x28);
        pbVar2 = pbVar6 + 0x3c;
        local_8 = pbVar2;
        pfVar3 = (float *)(piVar7[0x10] +
                          (uint)*(ushort *)
                                 ((uint)*(byte *)(piVar7 + 1) * (int)param_1 + 4 + *piVar7) * 0xc);
        local_10 = pfVar3;
        if (m3dSimdType != 0) {
          if (m3dSimdType == 1) {
            FastExitMediaState();
            uVar13 = (undefined4)*(undefined8 *)pfVar3;
            uVar16 = CONCAT44(uVar13,uVar13);
            uVar13 = (undefined4)((ulonglong)*(undefined8 *)pfVar3 >> 0x20);
            uVar19 = CONCAT44(uVar13,uVar13);
            uVar20 = CONCAT44(pfVar3[2],pfVar3[2]);
            uVar14 = PackedFloatingMUL(uVar16,*(undefined8 *)pbVar2);
            uVar15 = PackedFloatingMUL(uVar19,*(undefined8 *)(pbVar6 + 0x4c));
            uVar17 = PackedFloatingMUL(uVar20,*(undefined8 *)(pbVar6 + 0x5c));
            uVar14 = PackedFloatingADD(uVar14,*(undefined8 *)(pbVar6 + 0x6c));
            uVar18 = PackedFloatingMUL(uVar16,*(undefined8 *)(pbVar6 + 0x44));
            uVar16 = PackedFloatingADD(uVar15,uVar17);
            uVar15 = PackedFloatingMUL(uVar19,*(undefined8 *)(pbVar6 + 0x54));
            uVar20 = PackedFloatingMUL(uVar20,*(undefined8 *)(pbVar6 + 100));
            uVar19 = PackedFloatingADD(uVar18,*(undefined8 *)(pbVar6 + 0x74));
            uVar16 = PackedFloatingADD(uVar14,uVar16);
            uVar14 = PackedFloatingADD(uVar15,uVar20);
            local_2c._4_4_ = (undefined4)((ulonglong)uVar16 >> 0x20);
            local_2c._0_4_ = (float)uVar16;
            uVar16 = PackedFloatingADD(uVar19,uVar14);
            local_24 = (undefined4)uVar16;
            FastExitMediaState();
          }
          else {
            iVar12 = 0;
            local_14 = (float *)(pbVar2 + -(int)&local_2c);
            pfVar9 = (float *)&local_2c;
            do {
              pfVar11 = local_14;
              iVar10 = 0;
              *pfVar9 = 0.0;
              pfVar11 = (float *)((int)pfVar11 + (int)pfVar9);
              do {
                pfVar4 = pfVar3 + iVar10;
                fVar5 = *pfVar11;
                iVar10 = iVar10 + 1;
                pfVar11 = pfVar11 + 4;
                *pfVar9 = *pfVar4 * fVar5 + *pfVar9;
              } while (iVar10 < 3);
              iVar10 = iVar12 + iVar10 * 4;
              iVar12 = iVar12 + 1;
              *pfVar9 = *(float *)(pbVar2 + iVar10 * 4) + *pfVar9;
              pfVar9 = pfVar9 + 1;
            } while (iVar12 < 3);
          }
        }
      }
      else {
        piVar7 = *(int **)(pbVar6 + 0x28);
        uVar8 = (uint)*(ushort *)((uint)*(byte *)(piVar7 + 1) * (int)param_1 + 4 + *piVar7);
        iVar12 = piVar7[0x10] + uVar8 * 0xc;
        local_2c._0_4_ = *(float *)(piVar7[0x10] + uVar8 * 0xc);
        local_2c._4_4_ = *(undefined4 *)(iVar12 + 4);
        local_24 = *(undefined4 *)(iVar12 + 8);
      }
      pbVar6 = *(byte **)(local_c + 0x2c0);
      if ((*pbVar6 & 1) == 0) {
        local_14 = local_20;
        piVar7 = *(int **)(pbVar6 + 0x28);
        pbVar2 = pbVar6 + 0x3c;
        local_8 = pbVar2;
        pfVar3 = (float *)(piVar7[0x10] +
                          (uint)*(ushort *)
                                 ((uint)*(byte *)(piVar7 + 1) * (int)param_1 + 6 + *piVar7) * 0xc);
        local_10 = pfVar3;
        if (m3dSimdType != 0) {
          if (m3dSimdType == 1) {
            FastExitMediaState();
            uVar13 = (undefined4)*(undefined8 *)pfVar3;
            uVar16 = CONCAT44(uVar13,uVar13);
            uVar13 = (undefined4)((ulonglong)*(undefined8 *)pfVar3 >> 0x20);
            uVar19 = CONCAT44(uVar13,uVar13);
            uVar20 = CONCAT44(pfVar3[2],pfVar3[2]);
            uVar14 = PackedFloatingMUL(uVar16,*(undefined8 *)pbVar2);
            uVar15 = PackedFloatingMUL(uVar19,*(undefined8 *)(pbVar6 + 0x4c));
            uVar17 = PackedFloatingMUL(uVar20,*(undefined8 *)(pbVar6 + 0x5c));
            uVar14 = PackedFloatingADD(uVar14,*(undefined8 *)(pbVar6 + 0x6c));
            uVar18 = PackedFloatingMUL(uVar16,*(undefined8 *)(pbVar6 + 0x44));
            uVar16 = PackedFloatingADD(uVar15,uVar17);
            uVar15 = PackedFloatingMUL(uVar19,*(undefined8 *)(pbVar6 + 0x54));
            uVar20 = PackedFloatingMUL(uVar20,*(undefined8 *)(pbVar6 + 100));
            uVar19 = PackedFloatingADD(uVar18,*(undefined8 *)(pbVar6 + 0x74));
            uVar16 = PackedFloatingADD(uVar14,uVar16);
            uVar14 = PackedFloatingADD(uVar15,uVar20);
            local_20[1] = (float)((ulonglong)uVar16 >> 0x20);
            local_20[0] = (float)uVar16;
            uVar16 = PackedFloatingADD(uVar19,uVar14);
            local_20[2] = (float)uVar16;
            FastExitMediaState();
          }
          else {
            iVar12 = 0;
            local_14 = (float *)(pbVar2 + -(int)local_20);
            pfVar9 = local_20;
            do {
              pfVar11 = local_14;
              iVar10 = 0;
              *pfVar9 = 0.0;
              pfVar11 = (float *)((int)pfVar11 + (int)pfVar9);
              do {
                pfVar4 = pfVar3 + iVar10;
                fVar5 = *pfVar11;
                iVar10 = iVar10 + 1;
                pfVar11 = pfVar11 + 4;
                *pfVar9 = *pfVar4 * fVar5 + *pfVar9;
              } while (iVar10 < 3);
              iVar10 = iVar12 + iVar10 * 4;
              iVar12 = iVar12 + 1;
              *pfVar9 = *(float *)(pbVar2 + iVar10 * 4) + *pfVar9;
              pfVar9 = pfVar9 + 1;
            } while (iVar12 < 3);
          }
        }
      }
      else {
        piVar7 = *(int **)(pbVar6 + 0x28);
        uVar8 = (uint)*(ushort *)((uint)*(byte *)(piVar7 + 1) * (int)param_1 + 6 + *piVar7);
        iVar12 = piVar7[0x10] + uVar8 * 0xc;
        local_20[0] = *(float *)(piVar7[0x10] + uVar8 * 0xc);
        local_20[1] = *(float *)(iVar12 + 4);
        local_20[2] = *(float *)(iVar12 + 8);
      }
      this = local_c;
      iVar12 = partEMITTER_PHYS::SetAreaEmission
                         ((partEMITTER_PHYS *)local_c,*(int *)(*(int *)(local_c + 0x2c0) + 0x10),
                          (int)param_1,(m3dTRI *)local_38,0);
      if (iVar12 == 0) {
        return 0;
      }
      param_1 = param_1 + 1;
    } while ((int)param_1 < *(int *)(*(int *)(this + 0x2c0) + 0x10));
  }
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0xa000;
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:part_eff.cpp
   addr: 00547230 */

void __thiscall
peffGAS::PartCreate(peffGAS *this,int param_1,partPART **param_2,float param_3,int param_4,
                   int param_5)

{
  partPART *ppVar1;
  int iVar2;
  int iVar3;
  float local_c;
  float local_8;
  float local_4;
  
  partEMITTER_PHYS::PartCreate((partEMITTER_PHYS *)this,param_1,param_2,param_3,param_4,param_5);
  iVar3 = 0;
  if (0 < param_1) {
    do {
      ppVar1 = param_2[iVar3];
      local_c = *(float *)(ppVar1 + 0x10) * ___real_3e99999a;
      local_8 = *(float *)(ppVar1 + 0x14) * ___real_3e99999a;
      local_4 = *(float *)(ppVar1 + 0x18) * ___real_3e99999a;
      (**(code **)(*(int *)m3dNoise + 8))(&local_c);
      iVar2 = ftol();
      iVar3 = iVar3 + 1;
      *(uint *)(ppVar1 + 0xc) = *(uint *)(ppVar1 + 0xc) & 0xffffff ^ iVar2 << 0x18;
    } while (iVar3 < param_1);
  }
  return;
}




/* from: gs_shared:part_eff.cpp
   addr: 005472E0 */

peffSPARKLE * __thiscall peffSPARKLE::peffSPARKLE(peffSPARKLE *this)

{
  m3dSPL *pmVar1;
  
  partEMITTER_PHYS_FLY::partEMITTER_PHYS_FLY((partEMITTER_PHYS_FLY *)this,200.0,0.15);
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 0xb4) = 0;
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0xcc) = 0x3e99999a;
  *(undefined4 *)(this + 0xd0) = 0x3d4ccccd;
  *(undefined4 *)(this + 0xf8) = 0x40400000;
  *(undefined4 *)(this + 0xfc) = 0;
  pmVar1 = (m3dSPL *)operator_new(0x34);
  if (pmVar1 == (m3dSPL *)0x0) {
    pmVar1 = (m3dSPL *)0x0;
  }
  else {
    *(undefined4 *)(pmVar1 + 4) = 0;
    *(undefined4 *)(pmVar1 + 8) = 0;
    *(undefined4 *)(pmVar1 + 0xc) = 0;
    *(undefined4 *)(pmVar1 + 0x14) = 8;
    *(undefined4 *)(pmVar1 + 0x18) = 8;
    *(undefined4 *)(pmVar1 + 0x1c) = 1;
    *(undefined4 *)(pmVar1 + 0x20) = 0;
    *(undefined4 *)(pmVar1 + 0x24) = 0;
    *(undefined4 *)(pmVar1 + 0x28) = 0;
    *(undefined4 *)(pmVar1 + 0x2c) = 0;
    *(undefined4 *)(pmVar1 + 0x30) = 0;
    *(undefined ***)pmVar1 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar1,3);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar1,0,0.0,0.02);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar1,1,0.1,0.012);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar1,2,1.0,0.005);
  partEMITTER_PHYS::SetSize((partEMITTER_PHYS *)this,0.015,0.0,(m3dSPL_LINEAR1D *)pmVar1,1.0);
  pmVar1 = (m3dSPL *)operator_new(0x34);
  if (pmVar1 == (m3dSPL *)0x0) {
    pmVar1 = (m3dSPL *)0x0;
  }
  else {
    *(undefined4 *)(pmVar1 + 4) = 0;
    *(undefined4 *)(pmVar1 + 8) = 8;
    *(undefined4 *)(pmVar1 + 0xc) = 0;
    *(undefined4 *)(pmVar1 + 0x14) = 0x14;
    *(undefined4 *)(pmVar1 + 0x18) = 0x14;
    *(undefined4 *)(pmVar1 + 0x1c) = 4;
    *(undefined4 *)(pmVar1 + 0x20) = 0;
    *(undefined4 *)(pmVar1 + 0x24) = 0;
    *(undefined4 *)(pmVar1 + 0x28) = 0;
    *(undefined4 *)(pmVar1 + 0x2c) = 0;
    *(undefined4 *)(pmVar1 + 0x30) = 0;
    *(undefined ***)pmVar1 = &m3dSPL_COLOR::_vftable_;
    m3dSPL::AllocKpList(pmVar1,2);
  }
  m3dSPL_COLOR::SetKp((m3dSPL_COLOR *)pmVar1,0,0.0,255.0,255.0,0.0,255.0);
  m3dSPL_COLOR::SetKp((m3dSPL_COLOR *)pmVar1,1,0.25,255.0,255.0,0.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0,(m3dSPL_COLOR *)pmVar1,(m3dSPL_LINEAR1D *)0x0);
  partEMITTER_PHYS::SetAnimEmission((partEMITTER_PHYS *)this,0.25,0.0);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x1010;
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:part_eff.cpp
   addr: 00547480 */

int __thiscall peffSPARKLE::Update(peffSPARKLE *this,camCAMERA *param_1,float param_2)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 extraout_MM1;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  undefined1 auVar6 [16];
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  partEMITTER_PHYS::GetPosDirSpeed
            ((partEMITTER_PHYS *)this,(m3dV *)0x0,(m3dV *)0x0,(m3dV *)&local_18);
  local_1c = local_18 * local_18 + local_14 * local_14 + local_10 * local_10;
  if (m3dSimdType == 0) {
    local_1c = local_1c + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar6 = rsqrtss(ZEXT416((uint)local_1c),ZEXT416((uint)local_1c));
    fVar5 = auVar6._0_4_;
    local_1c = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar5 *
               (`float___cdecl_m3dSqrt(float)'::__l2::three - local_1c * fVar5 * fVar5) * local_1c;
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar2 = (ulonglong)(uint)local_1c;
    uVar3 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar2);
    uVar4 = PackedFloatingMUL(uVar3,uVar3);
    uVar4 = PackedFloatingReciprocalSQRIter1(uVar4,uVar2);
    uVar3 = PackedFloatingReciprocalIter2(uVar4,uVar3);
    uVar3 = PackedFloatingMUL(uVar3,uVar2);
    local_1c = (float)uVar3;
    FastExitMediaState();
  }
  else {
    local_1c = SQRT(local_1c);
  }
  local_1c = (float)(uint)(ABS(local_1c) < _DAT_005de0d8);
  if ((float)(int)local_1c == ___real_00000000) {
    local_c = local_18 * ___real_bf800000;
    local_8 = local_14 * ___real_bf800000;
    local_4 = local_10 * ___real_bf800000;
    m3dNormalize((m3dV *)&local_c);
    partEMITTER_PHYS::SetPosDirSpeed
              ((partEMITTER_PHYS *)this,(m3dV *)0x0,(m3dV *)&local_c,(m3dV *)0x0);
  }
  iVar1 = partEMITTER_PHYS_FLY::Update((partEMITTER_PHYS_FLY *)this,param_1,param_2);
  return iVar1;
}

