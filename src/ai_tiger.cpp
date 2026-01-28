
/* from: ai_tiger.cpp
   addr: 00454630 */

int __fastcall aiTigerInit(void)

{
  int iVar1;
  
  iVar1 = entRegisterClass(s_ai_lion,0x244e5043,0x32,aiTIGER::Create,s_ai_lion,0);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = entRegisterClass(s_ai_tiger,0x244e5043,0x32,aiTIGER::Create,s_ai_tiger,0);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = sncLinkSndListData(0xb,(sncSOUND_DESCR_3D *)&_aiTigerSndList);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = sncLinkSndListData(0xb,(sncSOUND_DESCR_3D *)&_aiLionSndList);
  return (uint)(iVar1 != 0);
}




/* from: ai_tiger.cpp
   addr: 004546A0 */

void __thiscall aiTIGER::ParseNameClass(aiTIGER *this)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar3 = s_;
  if (*(char **)(*(int *)(this + 0xbc) + 0x1c) != (char *)0x0) {
    pcVar3 = *(char **)(*(int *)(this + 0xbc) + 0x1c);
  }
  aiNPC_WR::ParseNameClass((aiNPC_WR *)this);
  pcVar1 = strstr(pcVar3,s__arena);
  if (pcVar1 != (char *)0x0) {
    *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) & 0xfffff7ff | 0x100;
  }
  pcVar2 = strstr(pcVar3,s__sniper);
  if (pcVar2 != (char *)0x0) {
    *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) & 0xfffffeff | 0x800;
  }
  pcVar3 = strstr(pcVar3,s__lion);
  if (pcVar3 == (char *)0x0) {
    *(undefined4 *)(this + 0x52b) = 0x42f00000;
  }
  else {
    *(undefined4 *)(this + 0x94) = 8;
    *(undefined4 *)(this + 0x52b) = 0x43020000;
    *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) | 0x8000;
    *(undefined4 *)(this + 0xd0) = 0x42700000;
    *(undefined4 *)(this + 0xcc) = 0x42700000;
  }
  if (pcVar2 == (char *)0x0 && pcVar1 == (char *)0x0) {
    *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) & 0xfffff7ff | 0x100;
  }
  return;
}




/* from: ai_tiger.cpp
   addr: 00454780 */

entENTITY * __fastcall aiTIGER::Create(animINST *param_1)

{
  aiNPC *this;
  
  this = (aiNPC *)operator_new(0x56b);
  if (this != (aiNPC *)0x0) {
    aiNPC::aiNPC(this);
    *(undefined4 *)(this + 0x51b) = 0;
    *(undefined4 *)(this + 0x527) = 0;
    *(undefined ***)this = &_vftable_;
    *(undefined4 *)(this + 0x94) = 7;
    return (entENTITY *)this;
  }
  return (entENTITY *)0x0;
}




/* from: ai_tiger.cpp
   addr: 004547D0 */

int __thiscall aiTIGER::SetupAniSystem(aiTIGER *this)

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
  iVar7 = 0x10;
  *(undefined4 *)(paVar1 + 0x8c) = 0x10;
  puVar3 = (undefined4 *)operator_new(0x884);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = 0x10;
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
  _entAnimSetSeqName(paVar1,0,s_TIGER_SEQ_IDLE_CALM);
  _entAnimSetSeqName(paVar1,1,s_TIGER_SEQ_IDLE_ROAR);
  _entAnimSetSeqName(paVar1,2,s_TIGER_SEQ_IDLE_ANGRY);
  _entAnimSetSeqName(paVar1,3,s_TIGER_SEQ_ATTACK_LCLOSE);
  _entAnimSetSeqName(paVar1,4,s_TIGER_SEQ_TROT);
  _entAnimSetSeqName(paVar1,5,s_TIGER_SEQ_GALLOP);
  _entAnimSetSeqName(paVar1,6,s_TIGER_SEQ_ATTACK_JUMP);
  _entAnimSetSeqName(paVar1,7,s_TIGER_SEQ_SHOT_BY_BLAST);
  _entAnimSetSeqName(paVar1,8,s_TIGER_SEQ_DEATH_BY_BLAST);
  _entAnimSetSeqName(paVar1,9,s_TIGER_SEQ_ATTACK_RCLOSE);
  _entAnimSetSeqName(paVar1,10,s_TIGER_SEQ_GALL_TO_JUMP);
  _entAnimSetSeqName(paVar1,0xb,s_TIGER_SEQ_JUMP_END_180);
  _entAnimSetSeqName(paVar1,0xc,s_TIGER_SEQ_TURN_LEFT);
  _entAnimSetSeqName(paVar1,0xd,s_TIGER_SEQ_TURN_RIGHT);
  _entAnimSetSeqName(paVar1,0xe,s_TIGER_SEQ_DEATH_STAY);
  _entAnimSetSeqName(paVar1,0xf,s_TIGER_SEQ_SHOT_STAY);
  entAnimAssignTplSeq(paVar1,paVar2,local_8);
  this_00 = (animSYSTEM *)operator_new(0x14);
  if ((this_00 != (animSYSTEM *)0x0) &&
     (piVar4 = (int *)animSYSTEM::animSYSTEM(this_00,0x10,0), piVar4 != (int *)0x0)) {
    *(int **)(paVar1 + 0xa4) = piVar4;
    (**(code **)(*piVar4 + 4))(0,1,1,1,0);
    (**(code **)(*piVar4 + 4))(1,0,1,0,0);
    (**(code **)(*piVar4 + 4))(0,2,1,2,0);
    (**(code **)(*piVar4 + 4))(2,0,1,0,0);
    (**(code **)(*piVar4 + 4))(1,2,1,2,0);
    (**(code **)(*piVar4 + 4))(2,1,1,1,0);
    (**(code **)(*piVar4 + 4))(10,6,1,6,0);
    (**(code **)(*piVar4 + 4))(6,0xb,1,0xb,0);
    (**(code **)(*piVar4 + 4))(0xb,5,1,5,0);
    (**(code **)(*piVar4 + 4))(7,5,1,5,0);
    (**(code **)(*piVar4 + 0x10))(0xf,0,1,0xf);
    (**(code **)(*piVar4 + 0x14))(0xf);
    (**(code **)(*piVar4 + 0x10))(7,0,1,7);
    (**(code **)(*piVar4 + 0x14))(7);
    (**(code **)(*piVar4 + 0x10))(0xe,0,1,0xe);
    (**(code **)(*piVar4 + 0x10))(8,0,1,8);
    (**(code **)(*piVar4 + 4))(0,3,0,3,1);
    (**(code **)(*piVar4 + 4))(0,9,0,9,1);
    (**(code **)(*piVar4 + 4))(2,3,0,3,1);
    (**(code **)(*piVar4 + 4))(2,9,0,9,1);
    (**(code **)(*piVar4 + 4))(2,5,0,5,1);
    (**(code **)(*piVar4 + 4))(5,6,0,10,1);
    (**(code **)(*piVar4 + 0xc))(8,2,1,8);
    (**(code **)(*piVar4 + 0xc))(0xe,2,1,0xe);
    (**(code **)(*piVar4 + 4))(8,8,2,8,1);
    (**(code **)(*piVar4 + 4))(0xc,0xc,2,0xc,1);
    (**(code **)(*piVar4 + 4))(0xd,0xd,2,0xd,1);
    (**(code **)(*piVar4 + 4))(0xe,0xe,2,0xe,1);
    (**(code **)(*piVar4 + 4))(0xb,0xb,2,0xb,1);
    if (paVar2 != (animSEQ *)0x0) {
      operator_delete(paVar2 + -4);
    }
    *(uint *)(*(int *)(paVar1 + 0x90) + 0x3b4) = *(uint *)(*(int *)(paVar1 + 0x90) + 0x3b4) | 1;
    *(uint *)(*(int *)(paVar1 + 0x90) + 0x65c) = *(uint *)(*(int *)(paVar1 + 0x90) + 0x65c) | 1;
    *(uint *)(*(int *)(paVar1 + 0x90) + 0x65c) = *(uint *)(*(int *)(paVar1 + 0x90) + 0x65c) | 4;
    *(uint *)(*(int *)(paVar1 + 0x90) + 0x43c) = *(uint *)(*(int *)(paVar1 + 0x90) + 0x43c) | 1;
    *(uint *)(*(int *)(paVar1 + 0x90) + 0x4c4) = *(uint *)(*(int *)(paVar1 + 0x90) + 0x4c4) | 1;
    *(uint *)(*(int *)(paVar1 + 0x90) + 0x6e4) = *(uint *)(*(int *)(paVar1 + 0x90) + 0x6e4) | 1;
    *(uint *)(*(int *)(paVar1 + 0x90) + 0x76c) = *(uint *)(*(int *)(paVar1 + 0x90) + 0x76c) | 1;
    return 1;
  }
  if (*(int *)(paVar1 + 0x90) != 0) {
    operator_delete((void *)(*(int *)(paVar1 + 0x90) + -4));
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_tiger.cpp
   addr: 00454C30 */

int __thiscall aiTIGER::ProcessINIT(aiTIGER *this,void *param_1)

{
  undefined4 uVar1;
  int iVar2;
  sncCHANNEL *this_00;
  objOBJ *poVar3;
  
  iVar2 = aiNPC_WR::ProcessINIT((aiNPC_WR *)this,param_1);
  if (iVar2 == 0) {
    return 0;
  }
  *(undefined1 **)(this + 0xd0) = &DAT_42480000;
  *(undefined4 *)(this + 0x197) = 0x40366666;
  *(undefined4 *)(this + 0x4a7) = 0x43960000;
  *(undefined4 *)(this + 0x4ab) = 0x43960000;
  *(undefined4 *)(this + 0x17f) = 0x43340000;
  *(undefined4 *)(this + 0x153) = 0x40600000;
  *(undefined4 *)(this + 0x15b) = 0x428c0000;
  *(undefined4 *)(this + 0x563) = 0x41f00000;
  *(undefined4 *)(this + 0x1a7) = 0x41200000;
  *(undefined1 **)(this + 0xcc) = &DAT_42480000;
  *(undefined4 *)(this + 0x53f) = 0;
  *(undefined4 *)(this + 0x543) = 0xe;
  *(undefined4 *)(this + 0x547) = 3;
  *(undefined4 *)(this + 0x54b) = 2;
  *(undefined4 *)(this + 0x3d3) = DAT_005d4a20;
  *(uint *)(this + 0x44f) = *(uint *)(this + 0x44f) | 0x30002;
  *(undefined4 *)(this + 0x54f) = 0;
  *(undefined4 *)(this + 0x553) = 0;
  *(undefined4 *)(this + 0x557) = 0;
  *(undefined4 *)(this + 0x55b) = 0;
  *(undefined4 *)(this + 0x15f) = 0x41a00000;
  *(undefined4 *)(this + 0x497) = 0x41a00000;
  *(undefined4 *)(this + 0x49b) = 0x41880000;
  *(undefined4 *)(this + 0x55f) = 1;
  *(undefined4 *)(this + 0x53f) = 0x800;
  iVar2 = aiNPC::GetBool((aiNPC *)this,s_AI_TIGER,s_isArena,(int *)&param_1);
  if ((iVar2 != 0) && (param_1 != (void *)0x0)) {
    *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) & 0xfffff7ff | 0x100;
  }
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
  *(sncCHANNEL **)(this + 0x567) = this_00;
  if (this_00 == (sncCHANNEL *)0x0) {
    return 0;
  }
  gsSND_SYSTEM::AddChannel(gsSysSound,this_00,(entIACTIVE_OBJ *)this,(objOBJ *)0x0);
  poVar3 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_ROOT);
  *(objOBJ **)(this + 0x163) = poVar3;
  if (poVar3 == (objOBJ *)0x0) {
    return 0;
  }
  *(objOBJ **)(this + 0x527) = poVar3;
  *(uint *)poVar3 = *(uint *)poVar3 | 0x200;
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_tiger.cpp
   addr: 00454EA0 */

int __thiscall aiTIGER::EvalAnimGoalSeq(aiTIGER *this)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  aiTIGER *paVar5;
  undefined4 uVar6;
  int iVar7;
  ushort uVar8;
  float fVar9;
  
  fVar9 = m3dRandom();
  iVar7 = 2;
  if (___real_3f4ccccd <= fVar9) {
    iVar7 = 1;
  }
  if ((*(uint *)(this + 1099) & 1) == 0) {
    uVar3 = (*(uint *)(this + 0x53f) & 0x100 | 0x400) >> 8;
  }
  else if ((*(uint *)(this + 1099) & 0x10000000) == 0) {
    uVar3 = 4;
  }
  else {
    uVar3 = m3dRandSelect(9,3);
  }
  if ((*(uint *)(this + 1099) & 0x200000) != 0) {
    return (-(uint)(*(int *)(this + 0x543) != 8) & 6) + 8;
  }
  iVar4 = aiENEMY::IsDead((aiENEMY *)(this + 0x4bb));
  if (((iVar4 != 0) || (uVar1 = *(uint *)(this + 1099), (uVar1 & 4) != 0)) ||
     ((uVar1 & 0x10000) != 0)) {
    return iVar7;
  }
  uVar2 = *(uint *)(this + 0x53f);
  if ((uVar2 & 3) == 0) {
    if ((uVar2 & 4) != 0) {
      return *(int *)(this + 0x543);
    }
    if (_DAT_005d4a18 < *(float *)(this + 0x517)) {
      iVar7 = m3dRandSelect(1,2,1);
      return iVar7;
    }
    if ((uVar1 & 0x1000) != 0) {
      if (*(int *)(this + 0x547) < 0) {
        if ((uVar2 & 0x10) == 0) {
          uVar6 = 6;
        }
        else {
          if (*(float *)(this + 0x3d7) <= ___real_41a00000) {
            fVar9 = m3dRandom();
            uVar8 = (ushort)(fVar9 < ___real_3f000000) << 8 |
                    (ushort)(fVar9 == ___real_3f000000) << 0xe;
          }
          else {
            uVar8 = (ushort)(*(float *)(this + 0x3d3) < ___real_00000000) << 8 |
                    (ushort)(*(float *)(this + 0x3d3) == ___real_00000000) << 0xe;
          }
          if (uVar8 == 0) {
            uVar6 = 3;
          }
          else {
            uVar6 = 9;
          }
        }
        *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) & 0xffffffcf;
        *(uint *)(this + 1099) = *(uint *)(this + 1099) | 0x1000;
        *(undefined4 *)(this + 0x547) = uVar6;
      }
      return *(int *)(this + 0x547);
    }
    if ((uVar2 & 0x30) != 0) {
      if ((uVar2 & 0x10) == 0) {
        iVar7 = 6;
      }
      else {
        if (*(float *)(this + 0x3d7) <= ___real_41a00000) {
          fVar9 = m3dRandom();
          uVar8 = (ushort)(fVar9 < ___real_3f000000) << 8 |
                  (ushort)(fVar9 == ___real_3f000000) << 0xe;
        }
        else {
          uVar8 = (ushort)(*(float *)(this + 0x3d3) < ___real_00000000) << 8 |
                  (ushort)(*(float *)(this + 0x3d3) == ___real_00000000) << 0xe;
        }
        if (uVar8 == 0) {
          iVar7 = 3;
        }
        else {
          iVar7 = 9;
        }
      }
      *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) & 0xffffffcf;
      *(uint *)(this + 1099) = *(uint *)(this + 1099) | 0x1000;
      *(int *)(this + 0x547) = iVar7;
      return iVar7;
    }
    if ((uVar2 & 0x1000) != 0) {
      return *(int *)(this + 0x54b);
    }
    if ((uVar2 & 0x2000) != 0) {
      iVar7 = 0xd;
      if (*(float *)(this + 0x3d3) <= ___real_00000000) {
        iVar7 = 0xc;
      }
      *(int *)(this + 0x54b) = iVar7;
      return iVar7;
    }
    if ((uVar1 & 0x40000) == 0) {
      if ((char)uVar2 < '\0') {
        return 5;
      }
      return uVar3;
    }
    if (___real_40400000 <= *(float *)(this + 0x3cf)) {
      return iVar7;
    }
    if (___real_42480000 <= *(float *)(this + 0x3d7)) {
      return iVar7;
    }
    iVar7 = m3dRandSelect(9,3);
    return iVar7;
  }
  if ((uVar1 & 0x200000) != 0) {
    paVar5 = (aiTIGER *)0xe;
    goto LAB_00454f9d;
  }
  if ((uVar2 & 1) == 0) {
    paVar5 = this;
    if ((uVar2 & 2) == 0) goto LAB_00454f9d;
    if (*(float *)(this + 0x3d7) < ___real_42700000) {
      paVar5 = (aiTIGER *)0x7;
      goto LAB_00454f9d;
    }
  }
  paVar5 = (aiTIGER *)0xf;
LAB_00454f9d:
  *(uint *)(this + 0x55f) = ~uVar1 >> 0x15 & 1;
  *(uint *)(this + 1099) = uVar1 & 0xffffefff;
  *(uint *)(this + 0x53f) = uVar2 & 0xffffffcc | 4;
  *(aiTIGER **)(this + 0x543) = paVar5;
  return (int)paVar5;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_tiger.cpp
   addr: 004551C0 */

int __thiscall aiTIGER::CalcDamageToTarget(aiTIGER *this,dmgGENERAL *param_1)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  ulonglong uVar4;
  undefined8 extraout_MM1;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  int unaff_retaddr;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float fStack_14;
  float local_c;
  float local_8;
  float local_4;
  
  aiNPC::GetPosRooted((aiNPC *)this,(m3dV *)&local_c);
  animINST::GetDir(*(animINST **)(this + 0xbc),(m3dV *)&local_30);
  fVar7 = ___real_40400000;
  if (*(int *)(this + 0x547) == 6) {
    fVar7 = ___real_3f000000;
  }
  local_24 = local_30 * fVar7 + local_c;
  local_20 = local_2c * fVar7 + local_8;
  local_1c = local_28 * fVar7 + local_4;
  (**(code **)(*(int *)this + 0xe4))(&local_18);
  fVar7 = (local_1c - local_28) * (local_1c - local_28) +
          (local_18 - local_24) * (local_18 - local_24) +
          (fStack_14 - local_20) * (fStack_14 - local_20);
  if (m3dSimdType == 0) {
    fVar7 = fVar7 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar9 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
    fVar8 = auVar9._0_4_;
    fVar7 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar8 *
            (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar7 * fVar8 * fVar8) * fVar7;
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar4 = (ulonglong)(uint)fVar7;
    uVar5 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar4);
    uVar6 = PackedFloatingMUL(uVar5,uVar5);
    uVar6 = PackedFloatingReciprocalSQRIter1(uVar6,uVar4);
    uVar5 = PackedFloatingReciprocalIter2(uVar6,uVar5);
    uVar5 = PackedFloatingMUL(uVar5,uVar4);
    fVar7 = (float)uVar5;
    FastExitMediaState();
  }
  else {
    fVar7 = SQRT(fVar7);
  }
  bVar2 = ___real_3f800000 <= fVar7;
  *(float *)(unaff_retaddr + 0x10) = local_28;
  *(float *)(unaff_retaddr + 0x14) = local_24;
  *(float *)(unaff_retaddr + 0x18) = local_20;
  fVar8 = ___real_3fc00000;
  if (((bVar2) && (fVar8 = ___real_00000000, fVar7 <= ___real_3fa66666)) &&
     (fVar8 = ___real_3f400000, (float)(0.29999995 < _DAT_005d4a18) == ___real_00000000)) {
    fVar8 = ___real_3fc00000 - (fVar7 - ___real_3f800000) * ___real_40a00002;
  }
  *(float *)(unaff_retaddr + 8) = fVar8;
  iVar1 = *(int *)(this + 0x547);
  if (iVar1 == 6) {
    cVar3 = (char)(*(uint *)(this + 0x53f) >> 8);
    if ((*(uint *)(this + 0x53f) & 8) != 0) {
      fVar7 = ___real_41700000;
      if (cVar3 < '\0') {
        fVar7 = ___real_41a00000;
      }
      goto LAB_00455418;
    }
    if (cVar3 < '\0') {
      fVar8 = ___real_40400000 + fVar8;
    }
    else {
      fVar8 = fVar8 + fVar8;
    }
  }
  else {
    if ((iVar1 != 3) && (iVar1 != 9)) {
      *(undefined4 *)(unaff_retaddr + 8) = 0;
      goto LAB_0045541d;
    }
    fVar7 = ___real_41200000;
    if ((char)((uint)*(undefined4 *)(this + 0x53f) >> 8) < '\0') {
      fVar7 = ___real_41500000;
    }
LAB_00455418:
    fVar8 = fVar7 * fVar8;
  }
  *(float *)(unaff_retaddr + 8) = fVar8;
LAB_0045541d:
  if (___real_3dcccccd < *(float *)(unaff_retaddr + 8)) {
    return 1;
  }
  return 0;
}




/* from: ai_tiger.cpp
   addr: 00455450 */

void __thiscall aiTIGER::SelectGoalToRunAway(aiTIGER *this,float param_1)

{
  aiNPC_WR::SelectGoalToRunAway((aiNPC_WR *)this,param_1);
  *(undefined4 *)(this + 0x557) = 0x40400000;
  *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) | 0x80;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_tiger.cpp
   addr: 00455480 */

void __thiscall aiTIGER::ProcessActionFrame(aiTIGER *this)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  float fVar4;
  dmgGENERAL local_1c [28];
  
  iVar3 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),7,0);
  if (((((iVar3 != 0) ||
        (iVar3 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),8,0), iVar3 != 0)) ||
       (iVar3 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),0xf,0), iVar3 != 0)) ||
      (iVar3 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),0xe,0), iVar3 != 0)) &&
     (*(int *)(this + 0x55f) != 0)) {
    *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) & 0xfffffffb;
  }
  iVar3 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),6,0);
  if (iVar3 != 0) {
    *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) | 0x408;
  }
  animINST::IsActionFrame(*(animINST **)(this + 0xbc),6,1);
  iVar3 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),6,2);
  if (iVar3 != 0) {
    *(undefined4 *)(this + 0x547) = 0xb;
    *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) & 0xfffffff7;
  }
  iVar3 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),6,3);
  if (iVar3 == 0) goto LAB_004555fe;
  uVar1 = *(uint *)(this + 0x53f);
  *(uint *)(this + 0x53f) = uVar1 & 0xfffffbff;
  if ((uVar1 & 0x800) == 0) {
    if ((___real_3f000000 < *(float *)(this + 0x3cf)) &&
       (___real_42a00000 < *(float *)(this + 0x3d7))) {
      *(undefined4 *)(this + 0x547) = 0xb;
      goto LAB_004555fe;
    }
    *(uint *)(this + 1099) = *(uint *)(this + 1099) & 0xffffefff;
    *(uint *)(this + 0x53f) = uVar1 & 0xfffff9ff;
  }
  else {
    if ((uVar1 & 0x200) == 0) {
      *(undefined4 *)(this + 0x547) = 0xb;
      goto LAB_004555fe;
    }
    *(uint *)(this + 0x53f) = uVar1 & 0xfffff9ff;
    fVar4 = m3dRandom();
    if (fVar4 < ___real_3f19999a) {
      *(undefined4 *)(this + 0x547) = 0xb;
      goto LAB_004555fe;
    }
    *(uint *)(this + 1099) = *(uint *)(this + 1099) & 0xffffefff;
  }
  *(undefined4 *)(this + 0x54f) = 0x40000000;
LAB_004555fe:
  iVar3 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),0xb,0);
  if (iVar3 != 0) {
    uVar1 = *(uint *)(this + 0x53f);
    uVar2 = *(uint *)(this + 1099);
    fVar4 = (float)(uVar1 & 0xfffffdff);
    *(uint *)(this + 1099) = uVar2 & 0xffffefff;
    *(float *)(this + 0x53f) = fVar4;
    if ((uVar1 & 0x800) == 0) {
      iVar3 = *(int *)this;
      fVar4 = m3dRandRange(fVar4,(float)(uVar2 & 0xffffefff));
      (**(code **)(iVar3 + 0x1b4))(-fVar4);
    }
    else {
      *(undefined4 *)(this + 0x54f) = 0x40000000;
    }
  }
  iVar3 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),3,0);
  if ((iVar3 != 0) || (iVar3 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),9,0), iVar3 != 0)
     ) {
    dmgGENERAL::dmgGENERAL(local_1c);
    *(undefined4 *)(this + 0x547) = 3;
    iVar3 = CalcDamageToTarget(this,local_1c);
    if ((iVar3 != 0) && (*(msgADDR **)(this + 0x4c3) != (msgADDR *)0x0)) {
      msgSYSTEM::SendMsg(&msgSystem,*(msgADDR **)(this + 0x4c3),0x4c5,local_1c,(msgADDR *)this);
    }
  }
  iVar3 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),3,1);
  if ((iVar3 != 0) || (iVar3 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),9,1), iVar3 != 0)
     ) {
    *(undefined4 *)(this + 0x54f) = 0x3f000000;
    *(uint *)(this + 1099) = *(uint *)(this + 1099) & 0xffffefff;
  }
  iVar3 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),0xc,0);
  if ((iVar3 == 0) &&
     (iVar3 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),0xd,0), iVar3 == 0)) {
    return;
  }
  *(undefined4 *)(this + 0x55b) = 0x3f000000;
  *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) & 0xffffcfff;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_tiger.cpp
   addr: 00455740 */

void __thiscall aiTIGER::Think(aiTIGER *this)

{
  ulonglong uVar1;
  undefined8 extraout_MM1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  float fVar5;
  float local_10;
  float local_c [2];
  float local_4;
  
  aiNPC_WR::Think((aiNPC_WR *)this);
  FillAttackFlags(this);
  fVar5 = aiENEMY::GetSpeedScalar((aiENEMY *)(this + 0x4bb));
  if (fVar5 <= ___real_3f800000) {
    *(undefined4 *)(this + 0x197) = 0x3f000000;
  }
  else {
    *(undefined4 *)(this + 0x197) = 0xbf800000;
  }
  if ((char)this[0x53f] < '\0') {
    animINST::GetPos(*(animINST **)(this + 0xbc),(m3dV *)local_c);
    local_10 = (local_c[0] - *(float *)(this + 0x3f3)) * (local_c[0] - *(float *)(this + 0x3f3)) +
               (local_4 - *(float *)(this + 0x3fb)) * (local_4 - *(float *)(this + 0x3fb));
    if (m3dSimdType == 0) {
      local_10 = local_10 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
      auVar4 = rsqrtss(ZEXT416((uint)local_10),ZEXT416((uint)local_10));
      fVar5 = auVar4._0_4_;
      local_10 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar5 *
                 (`float___cdecl_m3dSqrt(float)'::__l2::three - local_10 * fVar5 * fVar5) * local_10
      ;
    }
    else if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar1 = (ulonglong)(uint)local_10;
      uVar2 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar1);
      uVar3 = PackedFloatingMUL(uVar2,uVar2);
      uVar3 = PackedFloatingReciprocalSQRIter1(uVar3,uVar1);
      uVar2 = PackedFloatingReciprocalIter2(uVar3,uVar2);
      uVar2 = PackedFloatingMUL(uVar2,uVar1);
      local_10 = (float)uVar2;
      FastExitMediaState();
    }
    else {
      local_10 = SQRT(local_10);
    }
    if (local_10 < ___real_40000000) {
      *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) & 0xffffff7f;
    }
  }
  aiNPC_WR::UpdateInAreaFlags((aiNPC_WR *)this);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_tiger.cpp
   addr: 00455880 */

void __thiscall aiTIGER::PostThink(aiTIGER *this)

{
  int iVar1;
  
  aiNPC_WR::PostThink((aiNPC_WR *)this);
  iVar1 = *(int *)(*(int *)(this + 0xbc) + 0xe0);
  if (((*(uint *)(this + 0x53f) & 0x30) != 0) &&
     ((((iVar1 == 6 || (iVar1 == 10)) || (iVar1 == 3)) || (iVar1 == 9)))) {
    *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) & 0xffffffcf;
    *(uint *)(this + 1099) = *(uint *)(this + 1099) | 0x1000;
  }
  if (((*(uint *)(this + 0x53f) & 0x2000) != 0) && ((iVar1 == 0xc || (iVar1 == 0xd)))) {
    _DAT_0060d578 = *(undefined4 *)(this + 0x3d3);
    *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) & 0xffffdfff | 0x1000;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_tiger.cpp
   addr: 00455900 */

void __thiscall aiTIGER::FillAttackFlags(aiTIGER *this)

{
  bool bVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 extraout_MM1;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  float fVar7;
  float local_38;
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
  
  iVar2 = *(int *)(*(int *)(this + 0xbc) + 0xe0);
  if ((((iVar2 != 3) && (iVar2 != 9)) && (iVar2 != 6)) &&
     ((((*(uint *)(this + 1099) & 0x1000) == 0 && (*(float *)(this + 0x54f) <= ___real_3c23d70a)) &&
      ((*(uint *)(this + 0x53f) & 0x84) == 0)))) {
    bVar1 = ___real_3f800000 < *(float *)(this + 0x3cf);
    *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) & 0xffffffcf;
    if (((bVar1) &&
        (*(float *)(this + 0x3cf) < ___real_40400000 !=
         (*(float *)(this + 0x3cf) == ___real_40400000))) &&
       (*(float *)(this + 0x3d7) < *(float *)(this + 0x563) !=
        (*(float *)(this + 0x3d7) == *(float *)(this + 0x563)))) {
      fVar7 = aiENEMY::GetSpeedScalar((aiENEMY *)(this + 0x4bb));
      if (fVar7 < ___real_3f4ccccd) {
        *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) | 0x10;
      }
    }
    if ((((*(uint *)(this + 0x53f) & 0x800) == 0) && (*(float *)(this + 0x3cf) <= ___real_42200000))
       && (*(int *)(*(int *)(this + 0xbc) + 0xe0) == 5)) {
      iVar2 = aiPLANNER::GetEnemyMeetPoint(aiAttackPlanner,(aiNPC *)this,16.0,(m3dV *)&local_18);
      if (iVar2 != 0) {
        animINST::GetPos(*(animINST **)(this + 0xbc),(m3dV *)&local_24);
        animINST::GetDir(*(animINST **)(this + 0xbc),local_c);
        local_30 = local_18 - local_24;
        local_2c = local_14 - local_20;
        local_28 = local_10 - local_1c;
        local_38 = local_30 * local_30 + local_2c * local_2c + local_28 * local_28;
        if (m3dSimdType == 0) {
          local_38 = local_38 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
          auVar6 = rsqrtss(ZEXT416((uint)local_38),ZEXT416((uint)local_38));
          fVar7 = auVar6._0_4_;
          local_38 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar7 *
                     (`float___cdecl_m3dSqrt(float)'::__l2::three - local_38 * fVar7 * fVar7) *
                     local_38;
        }
        else if (m3dSimdType == 1) {
          FastExitMediaState();
          uVar3 = (ulonglong)(uint)local_38;
          uVar4 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar3);
          uVar5 = PackedFloatingMUL(uVar4,uVar4);
          uVar5 = PackedFloatingReciprocalSQRIter1(uVar5,uVar3);
          uVar4 = PackedFloatingReciprocalIter2(uVar5,uVar4);
          uVar4 = PackedFloatingMUL(uVar4,uVar3);
          local_38 = (float)uVar4;
          FastExitMediaState();
        }
        else {
          local_38 = SQRT(local_38);
        }
        m3xzAngleVector((m3dV *)&local_30,local_c);
        if ((ABS(*(float *)(this + 0x3d3)) < ___real_41200000 !=
             (ABS(*(float *)(this + 0x3d3)) == ___real_41200000)) &&
           (local_38 < ___real_41880000 != (local_38 == ___real_41880000))) {
          *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) | 0x20;
        }
      }
    }
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_tiger.cpp
   addr: 00455B70 */

void __thiscall aiTIGER::SetMovementSpeed(aiTIGER *this)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(this + 0x53f);
  if (((uVar2 & 0x800) != 0) && (*(float *)(this + 0x55b) <= ___real_3c23d70a)) {
    if (___real_425c0000 <= *(float *)(this + 0x3d7)) {
      uVar2 = uVar2 | 0x2000;
    }
    else {
      uVar2 = uVar2 & 0xffffdfff;
    }
    *(uint *)(this + 0x53f) = uVar2;
  }
  iVar1 = *(int *)(*(int *)(this + 0xbc) + 0xe0);
  if ((((((iVar1 == 6) || (iVar1 == 0xb)) || (iVar1 == 7)) || ((iVar1 == 8 || (iVar1 == 0xe)))) ||
      (iVar1 == 0xf)) ||
     (((iVar1 == 3 || (iVar1 == 9)) ||
      ((iVar1 == 0xc || (((iVar1 == 0xd || (iVar1 == 2)) || (iVar1 == 1)))))))) {
    *(uint *)(this + 1099) = *(uint *)(this + 1099) | 0x200;
  }
  if ((*(uint *)(this + 0x53f) & 0x100) == 0) {
    *(undefined4 *)(this + 0x153) = 0x40600000;
LAB_00455c3d:
    if ((((iVar1 == 0xb) || (iVar1 == 7)) || ((iVar1 == 8 || ((iVar1 == 0xf || (iVar1 == 0xe))))))
       || ((iVar1 == 0xc || ((((iVar1 == 0xd || (iVar1 == 0)) || (iVar1 == 2)) || (iVar1 == 1))))))
    {
      *(undefined4 *)(this + 0x15b) = 0;
      goto LAB_00455ce4;
    }
    if (iVar1 == 6) {
      if ((*(uint *)(this + 0x53f) & 0x400) == 0) {
        *(undefined4 *)(this + 0x15b) = ___real_428c0000;
      }
      else {
        *(undefined4 *)(this + 0x15b) = ___real_00000000;
      }
      goto LAB_00455ce4;
    }
    if ((iVar1 == 3) || (iVar1 == 9)) {
      *(undefined4 *)(this + 0x15b) = 0x41a00000;
      goto LAB_00455ce4;
    }
  }
  else {
    if (iVar1 != 4) {
      *(undefined4 *)(this + 0x153) = 0x41800000;
      goto LAB_00455c3d;
    }
    *(undefined4 *)(this + 0x153) = 0x40600000;
  }
  *(undefined4 *)(this + 0x15b) = 0x428c0000;
  if ((*(uint *)(this + 0x51b) & 0x10000) == 0) {
    *(undefined4 *)(this + 0x15b) = 0x43870000;
  }
LAB_00455ce4:
  uVar2 = *(uint *)(this + 1099);
  *(uint *)(this + 1099) = uVar2 & 0xffffffdf;
  if ((iVar1 == 6) || (iVar1 == 10)) {
    *(undefined4 *)(this + 0x37f) = 0x41800000;
    *(uint *)(this + 1099) = uVar2 & 0xffffffdf | 0x20;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_tiger.cpp
   addr: 00455D20 */

int __thiscall aiTIGER::SelectGoal(aiTIGER *this)

{
  int iVar1;
  float extraout_ECX;
  float extraout_EDX;
  float fVar2;
  m3dV local_c [4];
  undefined4 uStack_8;
  
  iVar1 = aiNPC_WR::SelectEscapeWhenOut((aiNPC_WR *)this);
  if ((iVar1 == 0) && (-1 < (char)*(uint *)(this + 0x53f))) {
    if (((*(uint *)(this + 0x53f) & 0x800) != 0) ||
       ((*(float *)(this + 0x3cf) < ___real_41200000 ==
         (*(float *)(this + 0x3cf) == ___real_41200000) ||
        (*(float *)(this + 0x3d7) <= ___real_42a00000)))) {
      aiNPC::SelectGoal((aiNPC *)this);
    }
    else {
      iVar1 = *(int *)this;
      fVar2 = m3dRandRange(extraout_ECX,extraout_EDX);
      (**(code **)(iVar1 + 0x1b4))(fVar2);
    }
  }
  animINST::GetPos(*(animINST **)(this + 0xbc),local_c);
  *(undefined4 *)(this + 0x3f7) = uStack_8;
  (**(code **)(*(int *)this + 0x1b0))();
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_tiger.cpp
   addr: 00455DC0 */

void __thiscall aiTIGER::MoveToGoal(aiTIGER *this)

{
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
  
  if (*(int *)(*(int *)(this + 0xbc) + 0xe0) == 0xb) {
    aiENEMY::GetPos((aiENEMY *)(this + 0x4bb),(m3dV *)&local_18);
    aiNPC::GetPosRooted((aiNPC *)this,(m3dV *)&local_24);
    local_30 = local_24 - local_18;
    local_2c = local_20 - local_14;
    local_28 = local_1c - local_10;
    m3dNormalize((m3dV *)&local_30);
    m3dClampVector_A((m3dV *)(this + 0x3c3),(m3dV *)&local_30,gsElapsedTime * ___real_42b40000,
                     local_c,(m3dV *)0x0,0);
    animINST::SetDir_XZ_UsePivot(*(animINST **)(this + 0xbc),local_c,(m3dV *)&local_24);
    return;
  }
  aiNPC_WR::MoveToGoal((aiNPC_WR *)this);
  return;
}




/* from: ai_tiger.cpp
   addr: 00455E80 */

void __thiscall aiTIGER::UpdateTimers(aiTIGER *this)

{
  int iVar1;
  float extraout_EDX;
  float extraout_EDX_00;
  float extraout_EDX_01;
  
  aiNPC_WR::UpdateTimers((aiNPC_WR *)this);
  m3dUpdateTimeField((float *)(this + 0x54f),extraout_EDX);
  m3dUpdateTimeField((float *)(this + 0x553),extraout_EDX_00);
  m3dUpdateTimeField((float *)(this + 0x55b),gsElapsedTime);
  iVar1 = m3dUpdateTimeField((float *)(this + 0x557),extraout_EDX_01);
  if (iVar1 != 0) {
    *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) & 0xffffff7f;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_tiger.cpp
   addr: 00455EF0 */

int __thiscall aiTIGER::ProcessCDT_FIREABLE(aiTIGER *this,dmgDAMAGE *param_1)

{
  uint uVar1;
  float fVar2;
  
  if (((byte)this[0x88] & 4) == 0) {
    return 1;
  }
  if (*(int *)(param_1 + 4) != 0) goto switchD_00455f1d_default;
  switch(*(undefined4 *)(param_1 + 0x1c)) {
  case 0:
  case 1:
  case 3:
  case 4:
  case 7:
    if ((((byte)this[0x53f] & 4) != 0) || (fVar2 = m3dRandom(), ___real_3e99999a <= fVar2))
    goto switchD_00455f1d_default;
    break;
  case 2:
  case 8:
    if (*(float *)(this + 0x3cf) < ___real_42200000) goto switchD_00455f1d_caseD_5;
    break;
  case 5:
  case 6:
  case 9:
  case 10:
switchD_00455f1d_caseD_5:
    uVar1 = *(uint *)(this + 0x53f) | 2;
    goto LAB_00455f46;
  default:
    goto switchD_00455f1d_default;
  }
  uVar1 = *(uint *)(this + 0x53f) | 1;
LAB_00455f46:
  *(uint *)(this + 0x53f) = uVar1;
switchD_00455f1d_default:
  aiNPC_WR::ProcessCDT_FIREABLE((aiNPC_WR *)this,param_1);
  if ((((*(uint *)(this + 1099) & 0x200000) != 0) && (((byte)this[0x53f] & 2) != 0)) &&
     (*(float *)(this + 0x3d7) < ___real_42700000)) {
    *(undefined4 *)(this + 0x543) = 8;
  }
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_tiger.cpp
   addr: 00455FD0 */

void __thiscall aiTIGER::Kick(aiTIGER *this)

{
  int iVar1;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  m3dV local_18 [12];
  m3dV local_c [12];
  
  aiENEMY::GetPos((aiENEMY *)(this + 0x4bb),local_c);
  aiNPC::GetPosRooted((aiNPC *)this,local_18);
  animINST::GetDir(*(animINST **)(this + 0xbc),(m3dV *)&local_24);
  iVar1 = m3dIsBelongPointCone(local_c,local_18,(m3dV *)&local_24,1.5,0.2,60.0);
  if (iVar1 != 0) {
    local_20 = ___real_00000000;
    if (*(float *)(this + 0x3d3) <= ___real_00000000) {
      local_30 = local_24 - local_1c;
      local_28 = local_1c - -local_24;
    }
    else {
      local_30 = local_24 + local_1c;
      local_28 = -local_24 + local_1c;
    }
    local_2c = ___real_00000000;
    m3dNormalize((m3dV *)&local_30);
    local_2c = 0.3;
    m3dNormalize((m3dV *)&local_30);
    local_30 = local_30 * ___real_41700000;
    local_2c = local_2c * ___real_41700000;
    local_28 = local_28 * ___real_41700000;
    aiENEMY::ApplySpeed((aiENEMY *)(this + 0x4bb),(m3dV *)&local_30);
    _DAT_0060d9f8 = _DAT_0060d9f8 + 1;
  }
  return;
}




/* from: ai_tiger.cpp
   addr: 004560E0 */

int __thiscall aiTIGER::ProcessCDT(aiTIGER *this,cdtINFO *param_1)

{
  int iVar1;
  dmgGENERAL local_1c [28];
  
  dmgGENERAL::dmgGENERAL(local_1c);
  iVar1 = ClassifyCollisionTarget(param_1);
  if ((iVar1 == 1) && ((*(uint *)(this + 0x53f) & 0x200) == 0)) {
    Kick(this);
    iVar1 = CalcDamageToTarget(this,local_1c);
    if ((iVar1 != 0) && (*(msgADDR **)(this + 0x4c3) != (msgADDR *)0x0)) {
      msgSYSTEM::SendMsg(&msgSystem,*(msgADDR **)(this + 0x4c3),0x4c5,local_1c,(msgADDR *)this);
    }
    *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) | 0x200;
  }
  return 1;
}




/* from: ai_tiger.cpp
   addr: 00456160 */

void __thiscall aiTIGER::PlaySounds(aiTIGER *this)

{
  sncSOUND_DESCR_3D **ppsVar1;
  
  ppsVar1 = &_aiLionSndList;
  if (-1 < (char)((uint)*(undefined4 *)(this + 0x53f) >> 8)) {
    ppsVar1 = &_aiTigerSndList;
  }
  if (((byte)this[0xf8] & 1) != 0) {
    (**(code **)(**(int **)(this + 0x567) + 4))(ppsVar1,0);
  }
  if ((*(uint *)(this + 0xf8) & 0x10000) != 0) {
    (**(code **)(**(int **)(this + 0x567) + 4))(ppsVar1 + 0x1a,0);
  }
  if (((byte)this[0xf8] & 2) != 0) {
    (**(code **)(**(int **)(this + 0x567) + 4))(ppsVar1 + 0x34,0);
  }
  if ((*(uint *)(this + 0xf8) & 0x20000) != 0) {
    (**(code **)(**(int **)(this + 0x567) + 4))(ppsVar1 + 0x4e,0);
  }
  if (((byte)this[0xf8] & 8) != 0) {
    (**(code **)(**(int **)(this + 0x567) + 4))(ppsVar1 + 0x9c,0);
  }
  if (((byte)this[0xf8] & 0x10) != 0) {
    (**(code **)(**(int **)(this + 0x567) + 4))(ppsVar1 + 0xb6,0);
  }
  if (((byte)this[0xf8] & 4) != 0) {
    (**(code **)(**(int **)(this + 0x567) + 4))(ppsVar1 + 0x82,0);
    *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) | 0x4000;
  }
  if ((*(uint *)(this + 0xf8) & 0x40000) != 0) {
    (**(code **)(**(int **)(this + 0x567) + 4))(ppsVar1 + 0x68,0);
    *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) | 0x4000;
  }
  if ((*(uint *)(this + 0x53f) & 0x4000) == 0) {
    if ((*(uint *)(this + 0xf8) & 0x200000) != 0) {
      (**(code **)(**(int **)(this + 0x567) + 4))(ppsVar1 + 0xd0,0);
      *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) | 0x4000;
    }
    if (((byte)this[0xf8] & 0x20) != 0) {
      (**(code **)(**(int **)(this + 0x567) + 4))(ppsVar1 + 0xea,0);
      *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) | 0x4000;
    }
  }
  if (((byte)this[0xf8] & 0x40) != 0) {
    (**(code **)(**(int **)(this + 0x567) + 4))(ppsVar1 + 0x104,0);
  }
  aiNPC::PlaySounds((aiNPC *)this);
  return;
}




/* from: ai_tiger.cpp
   addr: 004562F0 */

void __thiscall aiTIGER::FillSoundFlags(aiTIGER *this)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(*(int *)(this + 0xbc) + 0xe0);
  if ((*(uint *)(*(int *)(this + 0xbc) + 4) & 0x4000) != 0) {
    switch(iVar1) {
    case 0:
    case 0xb:
    case 0xc:
    case 0xd:
      *(undefined4 *)(this + 0xf8) = 0;
      break;
    case 1:
      iVar1 = m3dRandSelect(1,0x10000);
      *(int *)(this + 0xf8) = iVar1;
      *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) & 0xffffbfff;
      return;
    case 2:
      *(undefined4 *)(this + 0xf8) = 0x10;
      *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) & 0xffffbfff;
      return;
    case 3:
    case 9:
      iVar2 = m3dRandSelect(2,0x20000);
      *(int *)(this + 0xf8) = iVar2;
      break;
    case 4:
    case 5:
      *(undefined4 *)(this + 0xf8) = 0x40;
      break;
    case 6:
    case 10:
      *(undefined4 *)(this + 0xf8) = 8;
      break;
    case 7:
      *(undefined4 *)(this + 0xf8) = 0x200000;
      return;
    case 8:
      *(undefined4 *)(this + 0xf8) = 0x40000;
      return;
    case 0xe:
      *(undefined4 *)(this + 0xf8) = 4;
      return;
    case 0xf:
      *(undefined4 *)(this + 0xf8) = 0x20;
      return;
    }
    if ((((iVar1 != 7) && (iVar1 != 0xf)) && (iVar1 != 0xe)) && (iVar1 != 8)) {
      *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) & 0xffffbfff;
    }
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_tiger.cpp
   addr: 00456440 */

int __thiscall aiTIGER::IsAnimSeqGoodForFallback(aiTIGER *this)

{
  if ((((byte)this[0x53f] & 2) != 0) && (*(float *)(this + 0x3d7) < ___real_42700000)) {
    return 0;
  }
  return 1;
}




/* from: ai_tiger.cpp
   addr: 00456470
   addr: 00456470
   addr: 00456470
   addr: 00456470
   addr: 00456470
   addr: 00456470
   addr: 00456470
   addr: 00456470
   addr: 00456470
   addr: 00456470
   addr: 00456470
   addr: 00456470
   addr: 00456470
   addr: 00456470
   addr: 00456470
   addr: 00456470
   addr: 00456470
   addr: 00456470
   addr: 00456470
   addr: 00456470
   addr: 00456470
   addr: 00456470
   addr: 00456470
   addr: 00456470
   addr: 00456470
   addr: 00456470
   addr: 00456470
   addr: 00456470
   addr: 00456470
   addr: 00456470
   addr: 00456470
   addr: 00456470
   addr: 00456470
   addr: 00456470 */

void * __thiscall aiSKEL_SPEAR::_vector_deleting_destructor_(aiSKEL_SPEAR *this,uint param_1)

{
  aiNPC::~aiNPC((aiNPC *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

