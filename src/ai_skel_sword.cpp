
/* from: ai_skel_sword.cpp
   addr: 00452F80 */

entENTITY * __fastcall aiSKEL_SWORD::Create(animINST *param_1)

{
  aiNPC *this;
  
  this = (aiNPC *)operator_new(0x54f);
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




/* from: ai_skel_sword.cpp
   addr: 00452FD0 */

int __thiscall aiSKEL_SWORD::ProcessINIT(aiSKEL_SWORD *this,void *param_1)

{
  objOBJ *poVar1;
  int iVar2;
  
  *(undefined4 *)(this + 0x547) = 0;
  aiSKEL_GENERIC::ProcessINIT((aiSKEL_GENERIC *)this,param_1);
  *(undefined4 *)(this + 0xd0) = 0x40000000;
  *(undefined4 *)(this + 0xcc) = 0x40000000;
  *(undefined4 *)(this + 0x197) = 0x41a00000;
  *(undefined4 *)(this + 0x4a7) = 0x43960000;
  *(undefined4 *)(this + 0x4ab) = 0x43960000;
  *(undefined4 *)(this + 0x15f) = 0x41a00000;
  *(undefined4 *)(this + 0x17f) = 0x43340000;
  *(undefined4 *)(this + 0x153) = 0x41300000;
  *(undefined4 *)(this + 0x15b) = 0x43340000;
  *(uint *)(this + 0x44f) = *(uint *)(this + 0x44f) | 0x20002;
  poVar1 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_SWORD__lod);
  *(objOBJ **)(this + 0x54b) = poVar1;
  if (poVar1 == (objOBJ *)0x0) {
    poVar1 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_SWORD);
    *(objOBJ **)(this + 0x54b) = poVar1;
  }
  if (*(int *)(this + 0x54b) == 0) {
    return 0;
  }
  aiSKEL_GENERIC::GetBlueClothes((aiSKEL_GENERIC *)this);
  iVar2 = (**(code **)(*(int *)this + 200))();
  animSYSTEM_INST::AdvanceAnimation
            (*(animSYSTEM_INST **)(*(animINST **)(this + 0xbc) + 0xe8),*(animINST **)(this + 0xbc),
             iVar2,0.0);
  return 1;
}




/* from: ai_skel_sword.cpp
   addr: 004530C0 */

void __thiscall aiSKEL_SWORD::ProcessINIT_LEVEL(aiSKEL_SWORD *this)

{
  aiSKEL_GENERIC::GetBlueClothes((aiSKEL_GENERIC *)this);
  aiNPC_WR::ProcessINIT_LEVEL((aiNPC_WR *)this);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_skel_sword.cpp
   addr: 004530D0 */

void __thiscall aiSKEL_SWORD::ProcessFRAME(aiSKEL_SWORD *this)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 extraout_MM1;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  undefined1 auVar6 [16];
  float fStack_54;
  uint uStack_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float fStack_3c;
  float local_38;
  float local_34 [2];
  float local_2c;
  m3dV local_28 [12];
  dmgGENERAL local_1c [8];
  float local_14;
  float local_c;
  float fStack_8;
  float fStack_4;
  
  aiNPC_WR::ProcessFRAME((aiNPC_WR *)this);
  if ((((*(uint *)(this + 1099) & 0x200000) == 0) && (((byte)this[0x547] & 0x20) != 0)) &&
     (dmgGENERAL::dmgGENERAL(local_1c), (*(uint *)(this + 1099) & 0x200000) == 0)) {
    if (((byte)this[0x547] & 0x20) == 0) {
      animINST::GetPos(*(animINST **)(this + 0xbc),(m3dV *)&local_c);
      local_14 = 2.0;
    }
    else {
      animINST::Validate(*(animINST **)(this + 0xbc),4);
      objOBJ::GetOrigin(*(objOBJ **)(this + 0x54b),(m3dV *)&local_4c);
      (**(code **)(*(int *)this + 0xe4))(&local_40);
      fStack_54 = (local_40 - local_4c) * (local_40 - local_4c) +
                  (fStack_3c - local_48) * (fStack_3c - local_48) +
                  (local_38 - local_44) * (local_38 - local_44);
      if (m3dSimdType == 0) {
        fStack_54 = fStack_54 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
        auVar6 = rsqrtss(ZEXT416((uint)fStack_54),ZEXT416((uint)fStack_54));
        fVar5 = auVar6._0_4_;
        fStack_54 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar5 *
                    (`float___cdecl_m3dSqrt(float)'::__l2::three - fStack_54 * fVar5 * fVar5) *
                    fStack_54;
      }
      else if (m3dSimdType == 1) {
        FastExitMediaState();
        uVar2 = (ulonglong)(uint)fStack_54;
        uVar3 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar2);
        uVar4 = PackedFloatingMUL(uVar3,uVar3);
        uVar4 = PackedFloatingReciprocalSQRIter1(uVar4,uVar2);
        uVar3 = PackedFloatingReciprocalIter2(uVar4,uVar3);
        uVar3 = PackedFloatingMUL(uVar3,uVar2);
        fStack_54 = (float)uVar3;
        FastExitMediaState();
      }
      else {
        fStack_54 = SQRT(fStack_54);
      }
      if (___real_40200000 < fStack_54) {
        return;
      }
      fStack_4 = local_44;
      local_c = local_4c;
      fStack_8 = local_48;
      local_14 = ___real_41700000;
      if (((___real_3e99999a <= fStack_54) &&
          (local_14 = ___real_40000000, fStack_54 <= ___real_40200000)) &&
         (uStack_50 = (uint)(2.2 < _DAT_005d45c0), local_14 = ___real_41080000,
         (float)uStack_50 == ___real_00000000)) {
        local_14 = ___real_41700000 - (fStack_54 - ___real_3e99999a) * ___real_40bd1746;
      }
    }
    if (*(msgADDR **)(this + 0x4c3) != (msgADDR *)0x0) {
      msgSYSTEM::SendMsg(&msgSystem,*(msgADDR **)(this + 0x4c3),0x4c5,local_1c,(msgADDR *)this);
    }
    aiENEMY::GetPos((aiENEMY *)(this + 0x4bb),(m3dV *)&local_40);
    aiNPC::GetPosRooted((aiNPC *)this,(m3dV *)local_34);
    animINST::GetDir(*(animINST **)(this + 0xbc),local_28);
    iVar1 = m3dIsBelongPointCone((m3dV *)&local_40,(m3dV *)local_34,local_28,1.5,0.2,60.0);
    if (iVar1 != 0) {
      local_4c = local_40 - local_34[0];
      local_48 = 0.0;
      local_44 = local_38 - local_2c;
      m3dNormalize((m3dV *)&local_4c);
      local_48 = 0.3;
      m3dNormalize((m3dV *)&local_4c);
      local_4c = local_4c * ___real_41200000;
      local_48 = local_48 * ___real_41200000;
      local_44 = local_44 * ___real_41200000;
      aiENEMY::ApplySpeed((aiENEMY *)(this + 0x4bb),(m3dV *)&local_4c);
    }
    (**(code **)(*(int *)this + 0x1c4))(0,0,1);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_skel_sword.cpp
   addr: 004533F0 */

void __thiscall aiSKEL_SWORD::ProcessActionFrame(aiSKEL_SWORD *this)

{
  int iVar1;
  float fVar2;
  
  iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),0x10,0);
  if (iVar1 != 0) {
    *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) & 0xfffffffb;
  }
  iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),0xe,0);
  if (iVar1 != 0) {
    *(undefined4 *)(this + 0x15b) = 0;
  }
  iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),0xe,1);
  if (iVar1 != 0) {
    *(uint *)(this + 0x547) = *(uint *)(this + 0x547) | 0x20;
  }
  iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),0xe,2);
  if (iVar1 != 0) {
    *(uint *)(this + 0x547) = *(uint *)(this + 0x547) & 0xffffffdf;
  }
  iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),0xe,3);
  if (iVar1 != 0) {
    *(uint *)(this + 1099) = *(uint *)(this + 1099) & 0xffffefdf;
    fVar2 = m3dRandom();
    if (___real_3e4ccccd <= fVar2) {
      fVar2 = m3dRandom();
      if (___real_3dcccccd <= fVar2) {
        *(undefined4 *)(this + 0x15b) = 0x43340000;
        *(uint *)(this + 0x547) = *(uint *)(this + 0x547) | 0x10000;
      }
      else {
        (**(code **)(*(int *)this + 0x1c4))(0,0,0);
      }
    }
    else {
      *(uint *)(this + 0x547) = *(uint *)(this + 0x547) | 0x400;
      if ((*(uint *)(this + 1099) & 0x200000) == 0) {
        (**(code **)(*(int *)this + 0x1c4))(0,0,0);
      }
    }
  }
  iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),0xc,0);
  if (iVar1 != 0) {
    *(uint *)(this + 0x547) = *(uint *)(this + 0x547) & 0xfffeffff;
  }
  iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),0x12,0);
  if (iVar1 != 0) {
    *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) & 0xffffffdf;
  }
  return;
}




/* from: ai_skel_sword.cpp
   addr: 00453560 */

int __thiscall aiSKEL_SWORD::EvalAnimGoalSeq(aiSKEL_SWORD *this)

{
  int iVar1;
  
  if (((byte)this[0x53f] & 4) != 0) {
    return 0x10;
  }
  iVar1 = aiENEMY::IsDead((aiENEMY *)(this + 0x4bb));
  if (iVar1 != 0) {
    return 0xf;
  }
  if ((*(uint *)(this + 0x547) & 0x10000) != 0) {
    return 0xc;
  }
  return ((*(uint *)(this + 1099) & 0x201000) != 0) + 0xd;
}




/* from: ai_skel_sword.cpp
   addr: 004535C0 */

void __thiscall aiSKEL_SWORD::FillSoundFlags(aiSKEL_SWORD *this)

{
  if ((*(uint *)(this + 1099) & 0x200000) != 0) {
    *(undefined4 *)(this + 0xf8) = 4;
    return;
  }
  if ((*(uint *)(*(int *)(this + 0xbc) + 4) & 0x4000) != 0) {
    switch(*(undefined4 *)(*(int *)(this + 0xbc) + 0xe0)) {
    case 0xc:
      *(undefined4 *)(this + 0xf8) = 0x1000;
      break;
    case 0xd:
      *(undefined4 *)(this + 0xf8) = 1;
      return;
    case 0xe:
      *(undefined4 *)(this + 0xf8) = 0x40;
      return;
    case 0xf:
      *(undefined4 *)(this + 0xf8) = 0;
      return;
    case 0x10:
      *(undefined4 *)(this + 0xf8) = 2;
      return;
    case 0x12:
      *(undefined4 *)(this + 0xf8) = 0x4000;
      return;
    }
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_skel_sword.cpp
   addr: 00453660 */

void __thiscall aiSKEL_SWORD::Think(aiSKEL_SWORD *this)

{
  int iVar1;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  aiNPC_WR::Think((aiNPC_WR *)this);
  if ((*(int *)(*(animINST **)(this + 0xbc) + 0xe0) == 0xd) &&
     ((*(uint *)(this + 1099) & 0x1000) == 0)) {
    *(uint *)(this + 0x547) = *(uint *)(this + 0x547) | 0x8000;
  }
  if ((((byte)this[0x53f] & 3) == 0) && ((*(uint *)(this + 0x547) & 0x8000) != 0)) {
    animINST::GetPos(*(animINST **)(this + 0xbc),(m3dV *)&local_18);
    iVar1 = aiPLANNER::GetEnemyMeetPoint(aiAttackPlanner,(aiNPC *)this,11.0,(m3dV *)&local_c);
    if ((iVar1 != 0) &&
       ((local_18 - local_c) * (local_18 - local_c) +
        (local_14 - local_8) * (local_14 - local_8) + (local_10 - local_4) * (local_10 - local_4) <
        ___real_43c80000)) {
      *(uint *)(this + 0x547) = *(uint *)(this + 0x547) & 0xffff7fff;
      *(uint *)(this + 1099) = *(uint *)(this + 1099) | 0x1020;
      *(undefined4 *)(this + 0x37f) = *(undefined4 *)(this + 0x153);
    }
  }
  return;
}




/* from: ai_skel_sword.cpp
   addr: 00453740 */

int __thiscall aiSKEL_SWORD::SelectGoal(aiSKEL_SWORD *this)

{
  int iVar1;
  
  if (*(int *)(*(int *)(this + 0xbc) + 0xe0) != 0xd) {
    *(uint *)(this + 1099) = *(uint *)(this + 1099) | 0x200;
  }
  iVar1 = aiSKEL_GENERIC::SelectGoal((aiSKEL_GENERIC *)this);
  return iVar1;
}




/* from: ai_skel_sword.cpp
   addr: 00453770 */

void __thiscall aiSKEL_SWORD::MoveToGoal(aiSKEL_SWORD *this)

{
  if (((byte)this[0x53f] & 1) != 0) {
    return;
  }
  if (*(int *)(*(int *)(this + 0xbc) + 0xe0) != 0xe) {
    *(undefined4 *)(this + 0x197) = 0x40c00000;
    aiSKEL_GENERIC::MoveToGoal((aiSKEL_GENERIC *)this);
    return;
  }
  *(undefined4 *)(this + 0x197) = 0x41b00000;
  aiSKEL_GENERIC::MoveToGoal((aiSKEL_GENERIC *)this);
  return;
}




/* from: ai_skel_sword.cpp
   addr: 004537B0 */

int __thiscall aiSKEL_SWORD::ClassifyCollisionTarget(aiSKEL_SWORD *this,cdtINFO *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 == 0) || ((*(byte *)(iVar1 + 4) & 0x48) != 0)) {
    return 0;
  }
  iVar2 = *(int *)(*(int *)(iVar1 + 0x13c) + 0x14);
  if (iVar2 == 0x504c5952) {
    return 1;
  }
  if (iVar2 == 0x244e5043) {
    return (*(int *)(*(int *)(iVar1 + 0x13c) + 0x94) != 0) + 2;
  }
  return -1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_skel_sword.cpp
   addr: 00453810 */

int __thiscall aiSKEL_SWORD::ProcessCDT(aiSKEL_SWORD *this,cdtINFO *param_1)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 extraout_MM1;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float afStack_38 [2];
  float fStack_30;
  m3dV amStack_2c [12];
  dmgGENERAL adStack_20 [8];
  float fStack_18;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  
  iVar1 = (**(code **)(*(int *)this + 0x1cc))(param_1);
  if (iVar1 == 0) {
LAB_00453831:
    (**(code **)(*(int *)this + 0x1c4))(0,param_1,1);
    return 1;
  }
  if (iVar1 != 1) {
    if (iVar1 != 3) {
      return 1;
    }
    goto LAB_00453831;
  }
  dmgGENERAL::dmgGENERAL(adStack_20);
  if ((*(uint *)(this + 1099) & 0x200000) != 0) {
    return 1;
  }
  if (((byte)this[0x547] & 0x20) == 0) {
    animINST::GetPos(*(animINST **)(this + 0xbc),(m3dV *)&fStack_10);
    fStack_18 = 2.0;
  }
  else {
    animINST::Validate(*(animINST **)(this + 0xbc),4);
    objOBJ::GetOrigin(*(objOBJ **)(this + 0x54b),(m3dV *)&fStack_50);
    (**(code **)(*(int *)this + 0xe4))(&fStack_44);
    fVar5 = (fStack_44 - fStack_50) * (fStack_44 - fStack_50) +
            (fStack_40 - fStack_4c) * (fStack_40 - fStack_4c) +
            (fStack_3c - fStack_48) * (fStack_3c - fStack_48);
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
    if (___real_40200000 < fVar5) goto LAB_00453a5a;
    fStack_c = fStack_4c;
    fStack_10 = fStack_50;
    fStack_8 = fStack_48;
    fStack_18 = ___real_41700000;
    if (((___real_3e99999a <= fVar5) && (fStack_18 = ___real_40000000, fVar5 <= ___real_40200000))
       && (fStack_18 = ___real_41080000, (float)(2.2 < _DAT_005d45c0) == ___real_00000000)) {
      fStack_18 = ___real_41700000 - (fVar5 - ___real_3e99999a) * ___real_40bd1746;
    }
  }
  if (*(msgADDR **)(this + 0x4c3) != (msgADDR *)0x0) {
    msgSYSTEM::SendMsg(&msgSystem,*(msgADDR **)(this + 0x4c3),0x4c5,adStack_20,(msgADDR *)this);
  }
LAB_00453a5a:
  aiENEMY::GetPos((aiENEMY *)(this + 0x4bb),(m3dV *)&fStack_44);
  aiNPC::GetPosRooted((aiNPC *)this,(m3dV *)afStack_38);
  animINST::GetDir(*(animINST **)(this + 0xbc),amStack_2c);
  iVar1 = m3dIsBelongPointCone((m3dV *)&fStack_44,(m3dV *)afStack_38,amStack_2c,1.5,0.2,60.0);
  if (iVar1 != 0) {
    fStack_50 = fStack_44 - afStack_38[0];
    fStack_4c = 0.0;
    fStack_48 = fStack_3c - fStack_30;
    m3dNormalize((m3dV *)&fStack_50);
    fStack_4c = 0.3;
    m3dNormalize((m3dV *)&fStack_50);
    fStack_50 = fStack_50 * ___real_41200000;
    fStack_4c = fStack_4c * ___real_41200000;
    fStack_48 = fStack_48 * ___real_41200000;
    aiENEMY::ApplySpeed((aiENEMY *)(this + 0x4bb),(m3dV *)&fStack_50);
  }
  (**(code **)(*(int *)this + 0x1c4))(0,0,1);
  return 1;
}

