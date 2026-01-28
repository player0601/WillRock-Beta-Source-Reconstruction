
/* from: ai_skel_spear.cpp
   addr: 00450BC0 */

entENTITY * __fastcall aiSKEL_SPEAR::Create(animINST *param_1)

{
  aiNPC *this;
  
  this = (aiNPC *)operator_new(0x577);
  if (this != (aiNPC *)0x0) {
    aiNPC::aiNPC(this);
    *(undefined4 *)(this + 0x51b) = 0;
    *(undefined4 *)(this + 0x527) = 0;
    *(undefined4 *)(this + 0x94) = 5;
    *(undefined ***)this = &_vftable_;
    return (entENTITY *)this;
  }
  return (entENTITY *)0x0;
}




/* from: ai_skel_spear.cpp
   addr: 00450C10 */

int __thiscall aiSKEL_SPEAR::ProcessINIT(aiSKEL_SPEAR *this,void *param_1)

{
  objOBJ *poVar1;
  int iVar2;
  entENTITY *peVar3;
  float local_4;
  
  local_4 = 0.07;
  *(undefined4 *)(this + 0x547) = 0;
  poVar1 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_SWORD__lod);
  *(objOBJ **)(this + 0x563) = poVar1;
  poVar1 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_SPEAR__lod);
  *(objOBJ **)(this + 0x55f) = poVar1;
  if ((*(int *)(this + 0x563) != 0) && (poVar1 != (objOBJ *)0x0)) {
    iVar2 = aiSKEL_GENERIC::ProcessINIT((aiSKEL_GENERIC *)this,param_1);
    if (iVar2 != 0) {
      *(undefined4 *)(this + 399) = 0x41700000;
      *(undefined4 *)(this + 0x56b) = 0x41700000;
      *(undefined4 *)(this + 0x15b) = 0x42b40000;
      *(undefined4 *)(this + 0x56f) = 0x42b40000;
      *(undefined4 *)(this + 0x54b) = 0x41a00000;
      *(undefined4 *)(this + 0x15f) = 0x41a00000;
      *(undefined4 *)(this + 0xd0) = 0x40000000;
      *(undefined4 *)(this + 0x197) = 0x3fcccccd;
      *(undefined4 *)(this + 0x17f) = 0x43340000;
      *(undefined4 *)(this + 0x153) = 0x41500000;
      *(undefined4 *)(this + 0xcc) = 0x40000000;
      *(undefined4 *)(this + 0x54f) = 0;
      *(undefined4 *)(this + 0x557) = 0;
      *(undefined4 *)(this + 0x553) = 0;
      *(uint *)(this + 0x44f) = *(uint *)(this + 0x44f) | 0x10002;
      animINST::GetFloat(*(animINST **)(this + 0xbc),s_ANIM_PROP,s_scale,&local_4);
      peVar3 = entCreate(gsScenePtr,s_sfx_skel_spear_appear,s_sfx_skel_spear_appear,
                         (animCREATE_DATA *)0x0,&local_4,0);
      *(entENTITY **)(this + 0x573) = peVar3;
      if (peVar3 != (entENTITY *)0x0) {
        *(aiSKEL_SPEAR **)(peVar3 + 0x15f) = this;
        **(uint **)(this + 0x163) = **(uint **)(this + 0x163) | 0x200;
        return 1;
      }
    }
  }
  return 0;
}




/* from: ai_skel_spear.cpp
   addr: 00450D70 */

void __thiscall aiSKEL_SPEAR::ParseNameClass(aiSKEL_SPEAR *this)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  
  pcVar2 = s_;
  if (*(char **)(*(int *)(this + 0xbc) + 0x1c) != (char *)0x0) {
    pcVar2 = *(char **)(*(int *)(this + 0xbc) + 0x1c);
  }
  aiSKEL_GENERIC::ParseNameClass((aiSKEL_GENERIC *)this);
  pcVar1 = strstr(pcVar2,s__sword);
  if (pcVar1 != (char *)0x0) {
    *(uint *)(this + 0x547) = *(uint *)(this + 0x547) | 0x20;
  }
  pcVar1 = strstr(pcVar2,s__spear);
  if (pcVar1 != (char *)0x0) {
    *(uint *)(this + 0x547) = *(uint *)(this + 0x547) | 0x10;
  }
  pcVar2 = strstr(pcVar2,s__flexible);
  if (pcVar2 != (char *)0x0) {
    *(uint *)(this + 0x547) = *(uint *)(this + 0x547) | 0x40;
  }
  if ((*(uint *)(this + 1099) & 0x40000) != 0) {
    *(uint *)(this + 0x547) = *(uint *)(this + 0x547) & 0xffffff9f | 0x10;
  }
  if (((byte)this[0x53f] & 1) != 0) {
    *(uint *)(this + 0x547) = *(uint *)(this + 0x547) & 0xffffffef | 0x20;
  }
  if ((*(uint *)(this + 1099) & 0x40000) != 0) {
    *(undefined4 *)(this + 399) = 0x3dcccccd;
    *(undefined4 *)(this + 0x56b) = 0;
    *(uint *)(this + 0x547) = *(uint *)(this + 0x547) | 0x10;
    *(undefined4 *)(this + 0x56f) = 0x43160000;
  }
  SetupWeaponOnINIT(this);
  iVar3 = (**(code **)(*(int *)this + 200))();
  animSYSTEM_INST::AdvanceAnimation
            (*(animSYSTEM_INST **)(*(animINST **)(this + 0xbc) + 0xe8),*(animINST **)(this + 0xbc),
             iVar3,0.0);
  return;
}




/* from: ai_skel_spear.cpp
   addr: 00450E90 */

void __thiscall aiSKEL_SPEAR::ProcessINIT_LEVEL(aiSKEL_SPEAR *this)

{
  if (((byte)this[0x547] & 0x60) != 0) {
    aiSKEL_GENERIC::GetBlueClothes((aiSKEL_GENERIC *)this);
  }
  aiNPC_WR::ProcessINIT_LEVEL((aiNPC_WR *)this);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_skel_spear.cpp
   addr: 00450EB0 */

void __thiscall aiSKEL_SPEAR::SetupWeaponOnINIT(aiSKEL_SPEAR *this)

{
  uint uVar1;
  float fVar2;
  
  SetupWeaponByDistance(this);
  uVar1 = *(uint *)(this + 0x547);
  if ((uVar1 & 0x40) == 0) {
    if ((~(byte)uVar1 & 2) == 0) goto LAB_00450f06;
  }
  else {
    *(uint *)(this + 0x547) = uVar1 & 0xffffffbf;
    fVar2 = m3dRandom();
    if (___real_3f000000 <= fVar2) {
      *(uint *)(this + 0x547) = *(uint *)(this + 0x547) | 0x10;
LAB_00450f06:
      *(undefined4 *)(this + 0x55b) = *(undefined4 *)(this + 0x55f);
      *(uint *)(this + 0x547) = *(uint *)(this + 0x547) & 0xfffffffb | 2;
      goto LAB_00450f24;
    }
    *(uint *)(this + 0x547) = *(uint *)(this + 0x547) | 0x20;
  }
  *(undefined4 *)(this + 0x55b) = *(undefined4 *)(this + 0x563);
  *(uint *)(this + 0x547) = *(uint *)(this + 0x547) & 0xfffffffd | 4;
LAB_00450f24:
  if (*(objOBJ **)(this + 0x55b) == *(objOBJ **)(this + 0x563)) {
    objOBJ::SetStateProcYes(*(objOBJ **)(this + 0x55f),8,(_func_int_objOBJ_ptr_void_ptr *)0x0);
    objOBJ::SetStateProcNo(*(objOBJ **)(this + 0x563),8,(_func_int_objOBJ_ptr_void_ptr *)0x0);
    return;
  }
  objOBJ::SetStateProcYes(*(objOBJ **)(this + 0x563),8,(_func_int_objOBJ_ptr_void_ptr *)0x0);
  objOBJ::SetStateProcNo(*(objOBJ **)(this + 0x55f),8,(_func_int_objOBJ_ptr_void_ptr *)0x0);
  return;
}




/* from: ai_skel_spear.cpp
   addr: 00450F90 */

int __thiscall aiSKEL_SPEAR::EvalSwordAnimGoalSeq(aiSKEL_SPEAR *this)

{
  uint uVar1;
  int iVar2;
  
  if ((*(uint *)(this + 0x53f) & 0x70) != 0) {
    return 0x11;
  }
  if ((*(uint *)(this + 0x53f) & 4) != 0) {
    return 0xc;
  }
  iVar2 = aiENEMY::IsDead((aiENEMY *)(this + 0x4bb));
  if (iVar2 != 0) {
    return 9;
  }
  if ((((byte)this[0x547] & 6) == 0) || (uVar1 = *(uint *)(this + 1099), (uVar1 & 0x1000) != 0)) {
    return (int)this;
  }
  if ((uVar1 & 1) == 0) {
    return (uint)(byte)(((byte)uVar1 & 4 | 0x20) >> 2);
  }
  if (((byte)this[0x53f] & 8) != 0) {
    return 9;
  }
  if (*(int *)(this + 0x567) == 0x14) {
    iVar2 = m3dRandSelect(4,5);
    return iVar2;
  }
  if (*(int *)(this + 0x567) == 4) {
    iVar2 = m3dRandSelect(0x14,5);
    return iVar2;
  }
  iVar2 = m3dRandSelect(0x14,4);
  return iVar2;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_skel_spear.cpp
   addr: 00451050 */

int __thiscall aiSKEL_SPEAR::EvalSpearAnimGoalSeq(aiSKEL_SPEAR *this)

{
  uint uVar1;
  int iVar2;
  aiSKEL_SPEAR *paVar3;
  
  if ((*(uint *)(this + 0x53f) & 0x70) != 0) {
    return 0x13;
  }
  if ((*(uint *)(this + 0x53f) & 4) != 0) {
    return 0xb;
  }
  iVar2 = aiENEMY::IsDead((aiENEMY *)(this + 0x4bb));
  if (iVar2 != 0) {
    return 10;
  }
  paVar3 = this;
  if (((byte)this[0x547] & 6) != 0) {
    uVar1 = *(uint *)(this + 1099);
    if ((uVar1 & 0x1000) != 0) {
      return 1;
    }
    paVar3 = (aiSKEL_SPEAR *)0x6;
    if ((uVar1 & 1) == 0) {
      if (*(float *)(this + 0x557) <= ___real_3c23d70a) {
        return -(uint)((uVar1 & 4) != 0) & 10;
      }
      return 10;
    }
  }
  return (int)paVar3;
}




/* from: ai_skel_spear.cpp
   addr: 00451110 */

int __thiscall aiSKEL_SPEAR::EvalAnimGoalSeq(aiSKEL_SPEAR *this)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(this + 0xbc) + 0xe0);
  if (((iVar1 == 0x14) || (iVar1 == 4)) || (iVar1 == 5)) {
    *(int *)(this + 0x567) = iVar1;
  }
  if ((*(uint *)(this + 1099) & 0x40000) == 0) {
    if ((*(uint *)(this + 0x547) & 4) != 0) {
      iVar1 = EvalSwordAnimGoalSeq(this);
      return iVar1;
    }
    if ((*(uint *)(this + 0x547) & 2) != 0) {
      iVar1 = EvalSpearAnimGoalSeq(this);
      return iVar1;
    }
    if (((byte)this[0x53f] & 0x74) == 0) {
      iVar1 = aiENEMY::IsDead((aiENEMY *)(this + 0x4bb));
      if (iVar1 != 0) {
        return 3;
      }
      if (((byte)this[0x547] & 6) == 0) {
        return 7;
      }
      if ((*(uint *)(this + 1099) & 0x1000) == 0) {
        return ((int)(char)*(uint *)(this + 1099) & 1U) << 2 | 3;
      }
    }
    return (int)this;
  }
  if ((*(uint *)(this + 0x53f) & 0x70) != 0) {
    return 0x13;
  }
  if ((*(uint *)(this + 0x53f) & 4) != 0) {
    return 0xb;
  }
  iVar1 = aiENEMY::IsDead((aiENEMY *)(this + 0x4bb));
  if (iVar1 != 0) {
    return 10;
  }
  if (((byte)this[0x547] & 6) == 0) {
    return 7;
  }
  return ((uint)(~(byte)((uint)*(undefined4 *)(this + 1099) >> 8) & 0x10 | 4) << 8) >> 9;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_skel_spear.cpp
   addr: 00451220 */

void __thiscall aiSKEL_SPEAR::SetupWeaponByDistance(aiSKEL_SPEAR *this)

{
  uint uVar1;
  ulonglong uVar2;
  undefined8 extraout_MM1;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  float fStack_1c;
  float local_18;
  float fStack_14;
  float fStack_10;
  float local_c;
  float fStack_8;
  
  animINST::GetPos(*(animINST **)(this + 0xbc),(m3dV *)&local_18);
  (**(code **)(*(int *)this + 0xe4))(&local_c);
  uVar1 = *(uint *)(this + 0x547);
  if ((uVar1 & 0x10) == 0) {
    if ((uVar1 & 0x20) == 0) {
      fVar5 = (fStack_1c - fStack_10) * (fStack_1c - fStack_10) +
              (local_18 - local_c) * (local_18 - local_c) +
              (fStack_14 - fStack_8) * (fStack_14 - fStack_8);
      if (m3dSimdType == 0) {
        fVar5 = fVar5 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
        auVar7 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
        fVar6 = auVar7._0_4_;
        fVar5 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar6 *
                (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar5 * fVar6 * fVar6) * fVar5;
      }
      else if (m3dSimdType == 1) {
        FastExitMediaState();
        uVar2 = (ulonglong)(uint)fVar5;
        uVar3 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar2);
        uVar4 = PackedFloatingMUL(uVar3,uVar3);
        uVar4 = PackedFloatingReciprocalSQRIter1(uVar4,uVar2);
        uVar3 = PackedFloatingReciprocalIter2(uVar4,uVar3);
        uVar3 = PackedFloatingMUL(uVar3,uVar2);
        fVar5 = (float)uVar3;
        FastExitMediaState();
      }
      else {
        fVar5 = SQRT(fVar5);
      }
      if (___real_42000000 < fVar5) {
        *(undefined4 *)(this + 0x55b) = *(undefined4 *)(this + 0x55f);
        *(uint *)(this + 0x547) = *(uint *)(this + 0x547) & 0xfffffffb | 2;
        goto LAB_00451376;
      }
      uVar1 = *(uint *)(this + 0x547);
    }
    *(undefined4 *)(this + 0x55b) = *(undefined4 *)(this + 0x563);
    uVar1 = uVar1 & 0xfffffffd | 4;
  }
  else {
    *(undefined4 *)(this + 0x55b) = *(undefined4 *)(this + 0x55f);
    uVar1 = uVar1 & 0xfffffffb | 2;
  }
  *(uint *)(this + 0x547) = uVar1;
LAB_00451376:
  if (*(objOBJ **)(this + 0x55b) == *(objOBJ **)(this + 0x563)) {
    objOBJ::SetStateProcYes(*(objOBJ **)(this + 0x55f),8,(_func_int_objOBJ_ptr_void_ptr *)0x0);
    objOBJ::SetStateProcNo(*(objOBJ **)(this + 0x563),8,(_func_int_objOBJ_ptr_void_ptr *)0x0);
    return;
  }
  objOBJ::SetStateProcYes(*(objOBJ **)(this + 0x563),8,(_func_int_objOBJ_ptr_void_ptr *)0x0);
  objOBJ::SetStateProcNo(*(objOBJ **)(this + 0x55f),8,(_func_int_objOBJ_ptr_void_ptr *)0x0);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_skel_spear.cpp
   addr: 004513D0 */

void __thiscall aiSKEL_SPEAR::ProcessActionFrame(aiSKEL_SPEAR *this)

{
  uint uVar1;
  int iVar2;
  objOBJ *this_00;
  uint uVar3;
  ulonglong uVar4;
  undefined8 extraout_MM1;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  undefined1 auVar8 [16];
  float fStack_54;
  uint uStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  dmgGENERAL local_1c [8];
  float fStack_14;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  dmgGENERAL::dmgGENERAL(local_1c);
  iVar2 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),0xc,0);
  if ((iVar2 != 0) ||
     (iVar2 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),0xb,0), iVar2 != 0)) {
    uVar1 = *(uint *)(this + 0x53f);
    uVar3 = uVar1 & 0xfffffffb;
    *(uint *)(this + 0x53f) = uVar3;
    if ((char)uVar3 < '\0') {
      *(uint *)(this + 0x53f) = uVar1 & 0xffffff7b;
      (**(code **)(*(int *)this + 0xc0))(0x3f000000,0x3fc00000);
    }
  }
  iVar2 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),1,0);
  if ((iVar2 != 0) || (iVar2 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),2,0), iVar2 != 0)
     ) {
    LaunchOneProjectile(this);
  }
  iVar2 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),1,1);
  if ((iVar2 != 0) || (iVar2 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),2,1), iVar2 != 0)
     ) {
    *(uint *)(this + 0x547) = *(uint *)(this + 0x547) & 0xfffffffd;
    *(uint *)(this + 1099) = *(uint *)(this + 1099) & 0xffffefdf;
    objOBJ::SetStateProcYes(*(objOBJ **)(this + 0x55f),8,(_func_int_objOBJ_ptr_void_ptr *)0x0);
    objOBJ::SetStateProcYes(*(objOBJ **)(this + 0x563),8,(_func_int_objOBJ_ptr_void_ptr *)0x0);
  }
  iVar2 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),4,0);
  if ((((iVar2 != 0) ||
       (iVar2 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),5,0), iVar2 != 0)) ||
      (iVar2 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),6,0), iVar2 != 0)) ||
     ((iVar2 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),6,1), iVar2 != 0 ||
      (iVar2 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),0x14,0), iVar2 != 0)))) {
    animINST::GetPos(*(animINST **)(this + 0xbc),(m3dV *)&fStack_28);
    animINST::GetDir(*(animINST **)(this + 0xbc),(m3dV *)&fStack_4c);
    fStack_40 = fStack_4c * ___real_3fcccccd + fStack_28;
    fStack_3c = fStack_48 * ___real_3fcccccd + fStack_24;
    fStack_38 = fStack_44 * ___real_3fcccccd + fStack_20;
    (**(code **)(*(int *)this + 0xe4))(&fStack_34);
    fStack_4c = fStack_34 - fStack_40;
    fStack_48 = fStack_30 - fStack_3c;
    fStack_44 = fStack_2c - fStack_38;
    fStack_54 = fStack_4c * fStack_4c + fStack_48 * fStack_48 + fStack_44 * fStack_44;
    if (m3dSimdType == 0) {
      fStack_54 = fStack_54 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
      auVar8 = rsqrtss(ZEXT416((uint)fStack_54),ZEXT416((uint)fStack_54));
      fVar7 = auVar8._0_4_;
      fStack_54 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar7 *
                  (`float___cdecl_m3dSqrt(float)'::__l2::three - fStack_54 * fVar7 * fVar7) *
                  fStack_54;
    }
    else if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar4 = (ulonglong)(uint)fStack_54;
      uVar5 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar4);
      uVar6 = PackedFloatingMUL(uVar5,uVar5);
      uVar6 = PackedFloatingReciprocalSQRIter1(uVar6,uVar4);
      uVar5 = PackedFloatingReciprocalIter2(uVar6,uVar5);
      uVar5 = PackedFloatingMUL(uVar5,uVar4);
      fStack_54 = (float)uVar5;
      FastExitMediaState();
    }
    else {
      fStack_54 = SQRT(fStack_54);
    }
    iVar2 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),0x14,0);
    if (iVar2 == 0) {
      fStack_8 = fStack_3c;
      fStack_c = fStack_40;
      fStack_4 = fStack_38;
      fStack_14 = ___real_40400000;
      if (((___real_3f800000 <= fStack_54) &&
          (fStack_14 = ___real_00000000, fStack_54 <= ___real_3fc00000)) &&
         (uStack_50 = (uint)(0.5 < _DAT_005d4278), fStack_14 = ___real_3fc00000,
         (float)uStack_50 == ___real_00000000)) {
        fStack_14 = ___real_40400000 - (fStack_54 - ___real_3f800000) * ___real_40c00000;
      }
    }
    else {
      fStack_14 = ___real_40c00000;
      if (((___real_3f800000 <= fStack_54) &&
          (fStack_14 = ___real_00000000, fStack_54 <= ___real_3fc00000)) &&
         (uStack_50 = (uint)(0.5 < _DAT_005d4278), fStack_14 = ___real_40400000,
         (float)uStack_50 == ___real_00000000)) {
        fStack_14 = ___real_40c00000 - (fStack_54 - ___real_3f800000) * ___real_41400000;
      }
    }
    if ((___real_3dcccccd < fStack_14) && (*(msgADDR **)(this + 0x4c3) != (msgADDR *)0x0)) {
      msgSYSTEM::SendMsg(&msgSystem,*(msgADDR **)(this + 0x4c3),0x4c5,local_1c,(msgADDR *)this);
    }
  }
  iVar2 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),7,0);
  if (iVar2 != 0) {
    SetupWeaponByDistance(this);
    *(uint *)(this + 0x547) = *(uint *)(this + 0x547) | 8;
  }
  iVar2 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),7,1);
  if (iVar2 != 0) {
    if (*(objOBJ **)(this + 0x55b) == *(objOBJ **)(this + 0x563)) {
      objOBJ::SetStateProcYes(*(objOBJ **)(this + 0x55f),8,(_func_int_objOBJ_ptr_void_ptr *)0x0);
      this_00 = *(objOBJ **)(this + 0x563);
    }
    else {
      objOBJ::SetStateProcYes(*(objOBJ **)(this + 0x563),8,(_func_int_objOBJ_ptr_void_ptr *)0x0);
      this_00 = *(objOBJ **)(this + 0x55f);
    }
    objOBJ::SetStateProcNo(this_00,8,(_func_int_objOBJ_ptr_void_ptr *)0x0);
  }
  iVar2 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),7,2);
  if ((iVar2 != 0) && (*(int *)(this + 0x55b) != *(int *)(this + 0x563))) {
    *(undefined4 *)(this + 0x557) = 0;
    *(undefined4 *)(this + 0x553) = 0;
  }
  iVar2 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),0x13,0);
  if ((iVar2 != 0) ||
     (iVar2 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),0x11,0), iVar2 != 0)) {
    *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) & 0xffffffdf;
  }
  return;
}




/* from: ai_skel_spear.cpp
   addr: 004518C0 */

void __thiscall aiSKEL_SPEAR::FillSoundFlags(aiSKEL_SPEAR *this)

{
  uint uVar1;
  
  if ((*(uint *)(this + 1099) & 0x200000) != 0) {
    *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 4;
    return;
  }
  if ((*(uint *)(*(int *)(this + 0xbc) + 4) & 0x4000) != 0) {
    switch(*(undefined4 *)(*(int *)(this + 0xbc) + 0xe0)) {
    case 0:
    case 8:
      *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 1;
      return;
    case 1:
    case 2:
      *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 0x10;
      return;
    default:
      return;
    case 4:
      *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 0x200;
      return;
    case 5:
      *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 0x400;
      return;
    case 6:
      *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 0x20;
      return;
    case 7:
      *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 8;
      return;
    case 0xb:
      uVar1 = *(uint *)(this + 0xf8);
      if (((byte)this[0x53f] & 0xc0) != 0) {
        *(uint *)(this + 0xf8) = uVar1 | 0x2000;
        return;
      }
      break;
    case 0xc:
      uVar1 = *(uint *)(this + 0xf8);
      if (((byte)this[0x53f] & 0xc0) != 0) {
        *(uint *)(this + 0xf8) = uVar1 | 0x1000;
        return;
      }
      break;
    case 0x11:
    case 0x13:
      *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 0x4000;
      return;
    case 0x14:
      *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 0x100;
      return;
    }
    *(uint *)(this + 0xf8) = uVar1 | 2;
    return;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_skel_spear.cpp
   addr: 00451A10 */

void __thiscall aiSKEL_SPEAR::FillAttackFlag(aiSKEL_SPEAR *this)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
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
  
  if ((*(int *)(*(int *)(this + 0xbc) + 0xe0) != 1) && (*(int *)(*(int *)(this + 0xbc) + 0xe0) != 2)
     ) {
    uVar1 = *(uint *)(this + 1099);
    uVar3 = uVar1 & 0xffffefff;
    *(uint *)(this + 1099) = uVar3;
    if (((int)uVar3 < 0) ||
       (((uVar1 & 0x10000000) == 0 || ((*(uint *)(this + 0x51b) & 0x200) != 0)))) {
      *(uint *)(this + 1099) = uVar3;
      return;
    }
    if (*(float *)(this + 0x553) <= ___real_3c23d70a) {
      aiNPC::GetPosRooted((aiNPC *)this,(m3dV *)&local_24);
      animINST::GetDir(*(animINST **)(this + 0xbc),local_c);
      if (((*(uint *)(this + 1099) & 0x40000) == 0) || (((byte)this[0x51b] & 0x10) != 0)) {
        aiENEMY::GetPos((aiENEMY *)(this + 0x4bb),(m3dV *)&local_30);
      }
      else {
        iVar2 = aiPLANNER::GetEnemyMeetPoint(aiAttackPlanner,(aiNPC *)this,27.0,(m3dV *)&local_30);
        if (iVar2 == 0) {
          return;
        }
      }
      fVar4 = (local_24 - local_30) * (local_24 - local_30) +
              (local_1c - local_28) * (local_1c - local_28);
      if (((*(float *)(this + 0x56b) * *(float *)(this + 0x56b) <= fVar4) &&
          (fVar4 <= *(float *)(this + 0x56f) * *(float *)(this + 0x56f))) &&
         (((byte)this[0x547] & 2) != 0)) {
        local_18 = local_30 - local_24;
        local_14 = local_2c - local_20;
        local_10 = local_28 - local_1c;
        fVar4 = m3dAngleVector((m3dV *)&local_18,local_c);
        if (ABS(fVar4) <= *(float *)(this + 0x54b)) {
          *(uint *)(this + 1099) = *(uint *)(this + 1099) | 0x1000;
          return;
        }
      }
    }
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_skel_spear.cpp
   addr: 00451BC0 */

void __thiscall aiSKEL_SPEAR::Think(aiSKEL_SPEAR *this)

{
  bool bVar1;
  
  aiNPC_WR::Think((aiNPC_WR *)this);
  FillAttackFlag(this);
  if (((byte)this[0x547] & 2) != 0) {
    bVar1 = ___real_41a00000 <= *(float *)(this + 0x3cf);
    *(undefined4 *)(this + 0x37f) = 0x41d80000;
    if ((bVar1) && (((byte)this[0x51b] & 0x10) == 0)) {
      *(uint *)(this + 1099) = *(uint *)(this + 1099) | 0x20;
      return;
    }
    *(uint *)(this + 1099) = *(uint *)(this + 1099) & 0xffffffdf;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_skel_spear.cpp
   addr: 00451C20 */

void __thiscall aiSKEL_SPEAR::SetMovementSpeed(aiSKEL_SPEAR *this)

{
  int iVar1;
  float fVar2;
  undefined1 local_24 [8];
  m3dV amStack_1c [12];
  m3dV amStack_10 [4];
  undefined4 local_c [3];
  
  if ((*(uint *)(this + 1099) & 0x40000) != 0) {
    *(undefined4 *)(this + 0x15b) = 0x42b40000;
    return;
  }
  iVar1 = *(int *)(*(animINST **)(this + 0xbc) + 0xe0);
  if ((iVar1 != 0) && (iVar1 != 8)) {
    *(uint *)(this + 1099) = *(uint *)(this + 1099) | 0x200;
  }
  if (((byte)this[1099] & 0x10) == 0) {
    if (((iVar1 == 3) || (iVar1 == 9)) || (iVar1 == 10)) {
      if (___real_3c23d70a < *(float *)(this + 0x557)) {
        *(undefined4 *)(this + 0x15b) = 0x42b40000;
        return;
      }
      *(undefined4 *)(this + 0x15b) = 0;
      return;
    }
    if (iVar1 == 7) {
      *(undefined4 *)(this + 0x15b) = 0x42b40000;
      return;
    }
    if (((iVar1 != 0xb) && (iVar1 != 0xc)) &&
       ((iVar1 != 0x13 && ((iVar1 != 0x12 && (iVar1 != 0x11)))))) {
      animINST::GetDir(*(animINST **)(this + 0xbc),(m3dV *)local_c);
      (**(code **)(*(int *)this + 0xe4))(local_24);
      animINST::GetPos(*(animINST **)(this + 0xbc),amStack_1c);
      local_c[0] = 0;
      fVar2 = m3dAngleVector_COS(amStack_10,(m3dV *)&stack0xffffffcc);
      if (___real_3e4ccccd < fVar2) {
        *(undefined4 *)(this + 0x15b) = 0x42b40000;
        *(undefined4 *)(this + 0x153) = 0x41500000;
        return;
      }
      *(undefined4 *)(this + 0x15b) = 0x43610000;
      *(undefined4 *)(this + 0x153) = 0x40d00000;
      return;
    }
  }
  *(undefined4 *)(this + 0x15b) = 0x42f00000;
  return;
}




/* from: ai_skel_spear.cpp
   addr: 00451DB0 */

void __thiscall aiSKEL_SPEAR::MoveToGoal(aiSKEL_SPEAR *this)

{
  if (*(int *)(*(int *)(this + 0xbc) + 0xe0) == 1) {
    *(uint *)(this + 1099) = *(uint *)(this + 1099) | 0x200;
  }
  aiSKEL_GENERIC::MoveToGoal((aiSKEL_GENERIC *)this);
  return;
}




/* from: ai_skel_spear.cpp
   addr: 00451DE0 */

void __thiscall aiSKEL_SPEAR::UpdateTimers(aiSKEL_SPEAR *this)

{
  int iVar1;
  float extraout_EDX;
  float extraout_EDX_00;
  
  aiNPC_WR::UpdateTimers((aiNPC_WR *)this);
  iVar1 = m3dUpdateTimeField((float *)(this + 0x54f),extraout_EDX);
  if (iVar1 != 0) {
    *(float *)(this + 0x54f) = 10.0;
  }
  m3dUpdateTimeField((float *)(this + 0x557),extraout_EDX_00);
  m3dUpdateTimeField((float *)(this + 0x553),gsElapsedTime);
  return;
}




/* from: ai_skel_spear.cpp
   addr: 00451E30 */

void __thiscall aiSKEL_SPEAR::UpdateSFX(aiSKEL_SPEAR *this)

{
  if (((byte)this[0x547] & 8) != 0) {
    wrsfxSKELETON_SPEAR_APPEAR::Start
              (*(wrsfxSKELETON_SPEAR_APPEAR **)(this + 0x573),
               (uint)(*(int *)(this + 0x55b) == *(int *)(this + 0x563)));
    *(uint *)(this + 0x547) = *(uint *)(this + 0x547) & 0xfffffff7;
  }
  return;
}




/* from: ai_skel_spear.cpp
   addr: 00451E70 */

int __thiscall aiSKEL_SPEAR::Activate(aiSKEL_SPEAR *this,int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  objOBJ *this_00;
  
  uVar1 = *(uint *)(this + 0x547);
  if ((uVar1 & 2) == 0) {
    if ((uVar1 & 4) != 0) {
      uVar1 = uVar1 & 0xfffffffd;
      *(undefined4 *)(this + 0x55b) = *(undefined4 *)(this + 0x563);
      goto LAB_00451eab;
    }
    uVar3 = *(undefined4 *)(this + 0x563);
    uVar1 = uVar1 & 0xfffffffd | 4;
  }
  else {
    uVar3 = *(undefined4 *)(this + 0x55f);
    uVar1 = uVar1 & 0xfffffffb;
  }
  *(undefined4 *)(this + 0x55b) = uVar3;
LAB_00451eab:
  *(uint *)(this + 0x547) = uVar1;
  if (*(objOBJ **)(this + 0x55b) == *(objOBJ **)(this + 0x563)) {
    objOBJ::SetStateProcYes(*(objOBJ **)(this + 0x55f),8,(_func_int_objOBJ_ptr_void_ptr *)0x0);
    this_00 = *(objOBJ **)(this + 0x563);
  }
  else {
    objOBJ::SetStateProcYes(*(objOBJ **)(this + 0x563),8,(_func_int_objOBJ_ptr_void_ptr *)0x0);
    this_00 = *(objOBJ **)(this + 0x55f);
  }
  objOBJ::SetStateProcNo(this_00,8,(_func_int_objOBJ_ptr_void_ptr *)0x0);
  iVar2 = aiSKEL_GENERIC::Activate((aiSKEL_GENERIC *)this,param_1);
  return iVar2;
}

