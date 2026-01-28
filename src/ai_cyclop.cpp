
/* from: ai_cyclop.cpp
   addr: 0043AE90 */

int __fastcall aiCyclopInit(void)

{
  int iVar1;
  
  iVar1 = entRegisterClass(s_ai_cyclop,0x244e5043,0x32,aiCYCLOP::Create,s_ai_cyclop,0);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = aiCycStonePjlInit();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = wrsfxCyclopInit();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = sncLinkSndListData(0xf,(sncSOUND_DESCR_3D *)&_aiCyclopSndList);
  if (iVar1 == 0) {
    return 0;
  }
  aiCYCLOP::pTexScorchMark = txmMANAGER::Add(txmManager,s_sfx_ax_scorch_mark,0x40003,1);
  return (uint)(aiCYCLOP::pTexScorchMark != (txmTEXTURE *)0x0);
}




/* from: ai_cyclop.cpp
   addr: 0043AF00 */

entENTITY * __fastcall aiCYCLOP::Create(animINST *param_1)

{
  aiNPC *this;
  
  this = (aiNPC *)operator_new(0x57f);
  if (this != (aiNPC *)0x0) {
    aiNPC::aiNPC(this);
    *(undefined4 *)(this + 0x51b) = 0;
    *(undefined4 *)(this + 0x527) = 0;
    *(undefined ***)this = &_vftable_;
    *(undefined4 *)(this + 0x94) = 0x11;
    return (entENTITY *)this;
  }
  return (entENTITY *)0x0;
}




/* from: ai_cyclop.cpp
   addr: 0043AF50 */

int __thiscall aiCYCLOP::SetupAniSystem(aiCYCLOP *this)

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
  iVar7 = 0xc;
  *(undefined4 *)(paVar1 + 0x8c) = 0xc;
  puVar3 = (undefined4 *)operator_new(0x664);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = 0xc;
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
  _entAnimSetSeqName(paVar1,0,s_CYCLOP_SEQ_APPEAR);
  _entAnimSetSeqName(paVar1,1,s_CYCLOP_SEQ_WALK);
  _entAnimSetSeqName(paVar1,2,s_CYCLOP_SEQ_ATTACK);
  _entAnimSetSeqName(paVar1,3,s_CYCLOP_SEQ_IDLE);
  _entAnimSetSeqName(paVar1,4,s_CYCLOP_SEQ_ROAR);
  _entAnimSetSeqName(paVar1,5,s_CYCLOP_SEQ_DEATH);
  _entAnimSetSeqName(paVar1,6,s_CYCLOP_SEQ_GRAB);
  _entAnimSetSeqName(paVar1,7,s_CYCLOP_SEQ_SPIT);
  _entAnimSetSeqName(paVar1,8,s_CYCLOP_SEQ_MUNCH);
  _entAnimSetSeqName(paVar1,9,s_CYCLOP_SEQ_BLINK);
  _entAnimSetSeqName(paVar1,10,s_CYCLOP_SEQ_SHOT);
  _entAnimSetSeqName(paVar1,0xb,s_CYCLOP_SEQ_CLOSE_ATTACK);
  entAnimAssignTplSeq(paVar1,paVar2,local_8);
  this_00 = (animSYSTEM *)operator_new(0x14);
  if ((this_00 != (animSYSTEM *)0x0) &&
     (piVar4 = (int *)animSYSTEM::animSYSTEM(this_00,0xc,0), piVar4 != (int *)0x0)) {
    *(int **)(paVar1 + 0xa4) = piVar4;
    (**(code **)(*piVar4 + 0x10))(10,0,1,10);
    (**(code **)(*piVar4 + 0x10))(5,0,1,5);
    (**(code **)(*piVar4 + 4))(3,2,0,2,1);
    (**(code **)(*piVar4 + 4))(3,6,0,6,1);
    (**(code **)(*piVar4 + 4))(0,0,2,0,1);
    (**(code **)(*piVar4 + 4))(4,4,2,4,1);
    (**(code **)(*piVar4 + 4))(5,5,2,5,1);
    (**(code **)(*piVar4 + 4))(10,10,2,10,1);
    (**(code **)(*piVar4 + 4))(1,2,1,2,0);
    (**(code **)(*piVar4 + 4))(0,2,1,2,0);
    (**(code **)(*piVar4 + 4))(0,1,1,6,0);
    (**(code **)(*piVar4 + 4))(1,7,1,7,0);
    (**(code **)(*piVar4 + 4))(2,1,1,3,0);
    (**(code **)(*piVar4 + 4))(10,1,1,3,0);
    (**(code **)(*piVar4 + 4))(10,7,1,7,0);
    (**(code **)(*piVar4 + 4))(3,1,0,1,1);
    (**(code **)(*piVar4 + 4))(0,7,1,6,0);
    if (paVar2 != (animSEQ *)0x0) {
      operator_delete(paVar2 + -4);
    }
    *(uint *)(*(int *)(paVar1 + 0x90) + 0x194) = *(uint *)(*(int *)(paVar1 + 0x90) + 0x194) | 1;
    *(uint *)(*(int *)(paVar1 + 0x90) + 0x32c) = *(uint *)(*(int *)(paVar1 + 0x90) + 0x32c) | 1;
    *(uint *)(*(int *)(paVar1 + 0x90) + 0x5d4) = *(uint *)(*(int *)(paVar1 + 0x90) + 0x5d4) | 1;
    *(uint *)(*(int *)(paVar1 + 0x90) + 0x194) = *(uint *)(*(int *)(paVar1 + 0x90) + 0x194) | 2;
    *(uint *)(*(int *)(paVar1 + 0x90) + 0x10c) = *(uint *)(*(int *)(paVar1 + 0x90) + 0x10c) | 2;
    return 1;
  }
  if (*(int *)(paVar1 + 0x90) != 0) {
    operator_delete((void *)(*(int *)(paVar1 + 0x90) + -4));
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_cyclop.cpp
   addr: 0043B280 */

int __thiscall aiCYCLOP::ProcessINIT(aiCYCLOP *this,void *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  sncCHANNEL *this_00;
  objOBJ *poVar4;
  
  aiNPC_WR::ProcessINIT((aiNPC_WR *)this,param_1);
  *(undefined4 *)(this + 0x4a7) = 0x43960000;
  *(undefined4 *)(this + 0x4ab) = 0x43960000;
  *(undefined4 *)(this + 0xd0) = 0x457a0000;
  *(undefined4 *)(this + 0x197) = 0x40800000;
  *(undefined4 *)(this + 0x17f) = 0x43340000;
  *(undefined4 *)(this + 0x153) = 0x40a1eb85;
  *(undefined4 *)(this + 0x15b) = 0x42b40000;
  *(undefined4 *)(this + 0x577) = 0x40a66666;
  *(undefined4 *)(this + 0x57b) = 0x3f800000;
  *(undefined4 *)(this + 0x563) = 0x41f00000;
  *(undefined4 *)(this + 0x4b3) = 0x45610000;
  *(undefined4 *)(this + 0xcc) = 0x457a0000;
  *(undefined4 *)(this + 0x53f) = 1;
  *(undefined4 *)(this + 0xf8) = 0;
  *(undefined4 *)(this + 0x547) = 9;
  *(undefined4 *)(this + 0x54b) = 9;
  *(undefined4 *)(this + 0x15f) = 0x41a00000;
  *(undefined4 *)(this + 0x54f) = 0;
  *(undefined4 *)(this + 0x553) = 0;
  *(undefined4 *)(this + 0x557) = 0;
  *(undefined4 *)(this + 0x55b) = DAT_005d29f0;
  *(undefined4 *)(this + 0x55f) = DAT_005d29f0;
  *(undefined4 *)(this + 0x567) = 0;
  *(uint *)(this + 0x44f) = *(uint *)(this + 0x44f) | 0x38042;
  *(uint *)(this + 0x14f) = *(uint *)(this + 0x14f) | 4;
  this_00 = (sncCHANNEL *)operator_new(0xbc);
  uVar2 = DAT_005d29f8;
  uVar1 = DAT_005d29f4;
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
  if (this_00 != (sncCHANNEL *)0x0) {
    gsSND_SYSTEM::AddChannel(gsSysSound,this_00,(entIACTIVE_OBJ *)this,(objOBJ *)0x0);
    poVar4 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_AttackFocus);
    *(objOBJ **)(this + 0x56b) = poVar4;
    if (poVar4 != (objOBJ *)0x0) {
      poVar4 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_RotationPIVOT);
      *(objOBJ **)(this + 0x167) = poVar4;
      if (poVar4 != (objOBJ *)0x0) {
        poVar4 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_ROOT);
        *(objOBJ **)(this + 0x163) = poVar4;
        if (poVar4 != (objOBJ *)0x0) {
          *(objOBJ **)(this + 0x527) = poVar4;
          *(uint *)poVar4 = *(uint *)poVar4 | 0x200;
          scnSCENE::SetStateYesInst(gsScenePtr,*(animINST **)(this + 0xbc),8);
          objOBJ::SetStateYes(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),0x20);
          poVar4 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_LKOP);
          *(objOBJ **)(this + 0x56f) = poVar4;
          poVar4 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_RKOP);
          *(objOBJ **)(this + 0x573) = poVar4;
          if ((*(int *)(this + 0x56f) != 0) && (poVar4 != (objOBJ *)0x0)) {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_cyclop.cpp
   addr: 0043B570 */

void __thiscall aiCYCLOP::ParseNameClass(aiCYCLOP *this)

{
  float fVar1;
  char *pcVar2;
  int iVar3;
  objOBJ *this_00;
  aiCYCLOP *local_4;
  
  pcVar2 = s_;
  if (*(char **)(*(int *)(this + 0xbc) + 0x1c) != (char *)0x0) {
    pcVar2 = *(char **)(*(int *)(this + 0xbc) + 0x1c);
  }
  local_4 = this;
  aiNPC_WR::ParseNameClass((aiNPC_WR *)this);
  *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) & 0xfffffffc;
  pcVar2 = strstr(pcVar2,s__mini);
  if (pcVar2 == (char *)0x0) {
    *(uint *)(this + 0x44f) = *(uint *)(this + 0x44f) | 0x40000;
    *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) | 1;
    *(undefined4 *)(this + 0x497) = 0x41700000;
    *(undefined4 *)(this + 0x49b) = 0x41600000;
    *(undefined4 *)(this + 0x52b) = 0x461c4000;
    *(uint *)(*(int *)(this + 0xbc) + 8) = *(uint *)(*(int *)(this + 0xbc) + 8) | 4;
  }
  else {
    *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) & 0xfffffffc | 0x10000000;
    *(undefined4 *)(this + 0x577) = 0xbf800000;
    *(undefined4 *)(this + 0xd0) = 0x43960000;
    *(undefined4 *)(this + 0xcc) = 0x43960000;
    *(undefined4 *)(this + 0x57b) = 0x3f000000;
    animINST::Scale(*(animINST **)(this + 0xbc),0.5,0.5,0.5,2);
    iVar3 = animINST::GetFloat(*(animINST **)(this + 0xbc),s_AI_PROP,s_size,(float *)&local_4);
    if (iVar3 != 0) {
      *(float *)(this + 0x57b) = (float)local_4 * *(float *)(this + 0x57b);
    }
    fVar1 = *(float *)(this + 0x57b) * ___real_40c00000;
    *(float *)(this + 0x16b) = fVar1;
    *(float *)(this + 0x16f) = fVar1;
    fVar1 = *(float *)(this + 0x57b) * ___real_41200000;
    *(float *)(this + 0x173) = fVar1;
    *(float *)(this + 0x387) = *(float *)(this + 0x57b) * ___real_40a00000;
    *(float *)(this + 899) = fVar1;
    *(float *)(this + 0x153) =
         *(float *)(this + 0x153) * *(float *)(this + 0x57b) * ___real_4039999a;
    if ((*(uint *)(this + 1099) & 0x40000) != 0) {
      this_00 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_DUBINA);
      if (this_00 != (objOBJ *)0x0) {
        objOBJ::SetStateProcYes(this_00,8,(_func_int_objOBJ_ptr_void_ptr *)0x0);
      }
    }
    *(undefined4 *)(this + 0x497) = 0x41200000;
    *(undefined4 *)(this + 0x49b) = 0x41100000;
    *(undefined4 *)(this + 0x52b) = 0x43c80000;
  }
  iVar3 = (**(code **)(*(int *)this + 200))();
  animSYSTEM_INST::AdvanceAnimation
            (*(animSYSTEM_INST **)(*(animINST **)(this + 0xbc) + 0xe8),*(animINST **)(this + 0xbc),
             iVar3,0.0);
  return;
}




/* from: ai_cyclop.cpp
   addr: 0043B750 */

int __thiscall aiCYCLOP::Activate(aiCYCLOP *this,int param_1)

{
  int iVar1;
  
  if ((*(uint *)(this + 0x53f) & 0x10000000) == 0) {
    aiPLANNER::SetBoss(aiAttackPlanner,(aiNPC *)this);
  }
  iVar1 = aiNPC::Activate((aiNPC *)this,param_1);
  return iVar1;
}




/* from: ai_cyclop.cpp
   addr: 0043B780 */

void __thiscall aiCYCLOP::ActivatePlrVisibility(aiCYCLOP *this)

{
  if ((*(uint *)(this + 0x53f) & 1) != 0) {
    *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) & 0xfffffffe | 2;
    *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 4;
    *(uint *)(*(int *)(this + 0xbc) + 8) = *(uint *)(*(int *)(this + 0xbc) + 8) & 0xfffffffb;
  }
  aiNPC::ActivatePlrVisibility((aiNPC *)this);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_cyclop.cpp
   addr: 0043B7E0 */

void __thiscall aiCYCLOP::SendClubDamage(aiCYCLOP *this)

{
  float fVar1;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  undefined1 *local_b0;
  uint local_ac [2];
  float local_a4;
  float local_a0;
  float local_9c;
  animCREATE_DATA local_98 [18];
  m3dMATR local_86 [134];
  
  animCREATE_DATA::animCREATE_DATA(local_98);
  m3dMATR::GetOrigin((m3dMATR *)(*(int *)(this + 0x56b) + 0x3c),(m3dV *)&local_c0);
  animINST::GetDir(*(animINST **)(this + 0xbc),(m3dV *)&local_a4);
  fVar1 = *(float *)(this + 0x57b) * ___real_c0e00000;
  local_c0 = local_a4 * fVar1 + local_c0;
  local_bc = local_a0 * fVar1 + local_bc;
  local_b8 = local_9c * fVar1 + local_b8;
  if ((*(uint *)(this + 0x53f) & 0x10000000) == 0) {
    local_b0 = (undefined1 *)0x42c80000;
    local_b4 = 15.0;
  }
  else {
    local_b0 = &DAT_42480000;
    local_b4 = 7.5;
  }
  dmgDispatchExplosDamage
            ((entENTITY *)this,(m3dV *)&local_c0,(float)local_b0,local_b4,3,-1,(cdtINFO *)0x0,
             0xffffffff,(dmgDISPATCHER *)0x0);
  _radDmg = local_b4;
  __centerDmg = local_c0;
  _DAT_0060aec0 = local_bc;
  _DAT_0060aec4 = local_b8;
  m3dMATR::GetOrigin((m3dMATR *)(*(int *)(this + 0x56b) + 0x3c),(m3dV *)&local_c0);
  wrsfxSCORCHMARK::Add
            ((float)pTexScorchMark,(float)&local_c0,
             (txmTEXTURE *)(*(float *)(this + 0x57b) * ___real_40200000),(m3dV *)0x41200000,0,
             0x5343524d,0.0,0.0);
  local_bc = local_bc + ___real_3f000000;
  m3dMATR::MakeLCS2WCS_VY(local_86,(m3dV *)&local_c0,&m3dVUnitY);
  local_ac[0] = *(uint *)(this + 0x53f) >> 0x1c & 1;
  local_ac[1] = 0x3dcccccd;
  entCreate(gsScenePtr,s_sfx_cyclop_hit,s_sfx_cyclop_hit,local_98,local_ac,0);
  return;
}




/* from: ai_cyclop.cpp
   addr: 0043B970 */

void __thiscall aiCYCLOP::ProcessFRAME(aiCYCLOP *this)

{
  uint uVar1;
  
  aiNPC_WR::ProcessFRAME((aiNPC_WR *)this);
  uVar1 = *(uint *)(this + 0x53f);
  if (((uVar1 & 0x2000) != 0) && ((uVar1 & 0x4000) != 0)) {
    if ((uVar1 & 0x10000000) != 0) {
      LaunchOneStone(this);
      return;
    }
    LaunchSeveralStones(this);
    return;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_cyclop.cpp
   addr: 0043B9A0 */

int __thiscall aiCYCLOP::DecideShotSequence(aiCYCLOP *this)

{
  uint uVar1;
  int iVar2;
  float fVar3;
  
  if ((*(uint *)(this + 1099) & 0x200000) != 0) {
    iVar2 = 5;
    *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 2;
    goto LAB_0043ba1e;
  }
  if (*(float *)(this + 0x51f) <= _DAT_005d29e8) {
    if ((*(uint *)(this + 0x53f) & 4) == 0) {
      if (((*(uint *)(this + 0x53f) & 8) != 0) &&
         (iVar2 = 10, *(float *)(this + 0x3d7) < ___real_42700000)) goto LAB_0043ba1e;
    }
    else {
      fVar3 = m3dRandom();
      if (___real_3f333333 <= fVar3) {
        iVar2 = 4;
        goto LAB_0043ba1e;
      }
    }
  }
  iVar2 = 9;
LAB_0043ba1e:
  uVar1 = *(uint *)(this + 0x53f);
  *(uint *)(this + 0x53f) = uVar1 & 0xfffffff3;
  if (iVar2 != 9) {
    *(uint *)(this + 0x53f) = uVar1 & 0xfffffff3 | 0x10;
  }
  return iVar2;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_cyclop.cpp
   addr: 0043BA40 */

int __thiscall aiCYCLOP::EvalAnimGoalSeq(aiCYCLOP *this)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  
  if ((*(uint *)(this + 0x53f) & 1) != 0) {
    return 0;
  }
  if ((*(uint *)(this + 0x53f) & 2) != 0) {
    return 0;
  }
  if ((*(uint *)(this + 1099) & 0x200000) != 0) {
    return 5;
  }
  iVar1 = aiENEMY::IsDead((aiENEMY *)(this + 0x4bb));
  if (iVar1 != 0) {
    fVar3 = m3dRandom();
    if (___real_3f4ccccd <= fVar3) {
      return 4;
    }
    return 3;
  }
  uVar2 = *(uint *)(this + 0x53f);
  if ((uVar2 & 0xc) != 0) {
    iVar1 = DecideShotSequence(this);
    *(int *)(this + 0x547) = iVar1;
    return iVar1;
  }
  if ((uVar2 & 0x10) != 0) {
    return *(int *)(this + 0x547);
  }
  if ((*(uint *)(this + 1099) & 0x40000) != 0) {
    if (___real_41f00000 < *(float *)(this + 0x3d7)) {
      return 1;
    }
    if ((uVar2 & 0x1000) != 0) {
      return 7;
    }
    fVar3 = m3dRandom();
    if (fVar3 < ___real_3f266666) {
      return 7;
    }
    fVar3 = m3dRandom();
    if (___real_3f000000 <= fVar3) {
      return 4;
    }
    return 6;
  }
  if ((*(uint *)(this + 1099) & 0x1000) == 0) {
    if ((uVar2 & 800) == 0) {
      return 1;
    }
    fVar3 = CalcBorderForClubAttack(this);
    *(float *)(this + 0x55b) = fVar3;
    fVar3 = CalcBorderForSpitAttack(this);
    *(float *)(this + 0x55f) = fVar3;
    if (*(float *)(this + 0x577) <= *(float *)(this + 0x3cf)) {
      fVar3 = m3dRandom();
      if (fVar3 < *(float *)(this + 0x55b)) {
        *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) | 0x200;
      }
      fVar3 = m3dRandom();
      if (*(float *)(this + 0x55f) <= fVar3) goto LAB_0043bcf9;
      uVar2 = *(uint *)(this + 0x53f) | 0x100;
    }
    else {
      uVar2 = *(uint *)(this + 0x53f) | 0x20;
    }
    *(uint *)(this + 0x53f) = uVar2;
LAB_0043bcf9:
    if ((*(uint *)(this + 0x53f) & 0x20) == 0) {
      if ((*(uint *)(this + 0x53f) & 0x200) == 0) {
        iVar1 = 7;
      }
      else if (___real_41200000 <= *(float *)(this + 0x3cf) / *(float *)(this + 0x57b)) {
        if (___real_41a00000 <= *(float *)(this + 0x3cf) / *(float *)(this + 0x57b)) {
          iVar1 = 2;
        }
        else {
          iVar1 = m3dRandSelect(0xb,2);
        }
      }
      else {
        iVar1 = 0xb;
      }
    }
    else {
      iVar1 = 0xb;
    }
    *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) & 0xfffffcdf;
    *(uint *)(this + 1099) = *(uint *)(this + 1099) | 0x1000;
    *(int *)(this + 0x54b) = iVar1;
    return iVar1;
  }
  iVar1 = *(int *)(this + 0x54b);
  if (((iVar1 == 7) || (iVar1 == 2)) || (iVar1 == 0xb)) goto LAB_0043bc6b;
  fVar3 = CalcBorderForClubAttack(this);
  *(float *)(this + 0x55b) = fVar3;
  fVar3 = CalcBorderForSpitAttack(this);
  *(float *)(this + 0x55f) = fVar3;
  if (*(float *)(this + 0x577) <= *(float *)(this + 0x3cf)) {
    fVar3 = m3dRandom();
    if (fVar3 < *(float *)(this + 0x55b)) {
      *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) | 0x200;
    }
    fVar3 = m3dRandom();
    if (fVar3 < *(float *)(this + 0x55f)) {
      uVar2 = *(uint *)(this + 0x53f) | 0x100;
      goto LAB_0043bbd2;
    }
  }
  else {
    uVar2 = *(uint *)(this + 0x53f) | 0x20;
LAB_0043bbd2:
    *(uint *)(this + 0x53f) = uVar2;
  }
  if ((*(uint *)(this + 0x53f) & 0x20) == 0) {
    if ((*(uint *)(this + 0x53f) & 0x200) == 0) {
      iVar1 = 7;
    }
    else if (___real_41200000 <= *(float *)(this + 0x3cf) / *(float *)(this + 0x57b)) {
      if (___real_41a00000 <= *(float *)(this + 0x3cf) / *(float *)(this + 0x57b)) {
        iVar1 = 2;
      }
      else {
        iVar1 = m3dRandSelect(0xb,2);
      }
    }
    else {
      iVar1 = 0xb;
    }
  }
  else {
    iVar1 = 0xb;
  }
  *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) & 0xfffffcdf;
  *(uint *)(this + 1099) = *(uint *)(this + 1099) | 0x1000;
  *(int *)(this + 0x54b) = iVar1;
LAB_0043bc6b:
  return *(int *)(this + 0x54b);
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_cyclop.cpp
   addr: 0043BDA0 */

void __thiscall aiCYCLOP::ProcessActionFrame(aiCYCLOP *this)

{
  uint uVar1;
  objOBJ *poVar2;
  int iVar3;
  int *piVar4;
  float fVar5;
  undefined4 uVar6;
  uint local_d8;
  float local_d4;
  undefined4 local_d0;
  m3dV local_cc [4];
  float local_c8;
  uint auStack_c0 [2];
  aiCYCLOP *paStack_b8;
  dmgGENERAL adStack_b4 [8];
  undefined4 uStack_ac;
  undefined1 auStack_a4 [12];
  animCREATE_DATA local_98 [18];
  m3dMATR local_86 [134];
  
  animINST::IsActionFrame(*(animINST **)(this + 0xbc),0,0);
  animINST::IsActionFrame(*(animINST **)(this + 0xbc),0,1);
  animINST::IsActionFrame(*(animINST **)(this + 0xbc),0,2);
  iVar3 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),0,3);
  if (iVar3 != 0) {
    uVar1 = *(uint *)(this + 0x53f);
    *(uint *)(this + 0x53f) = uVar1 & 0xfffffffd;
    if (((*(uint *)(this + 0x44f) & 0x40000) != 0) && ((uVar1 & 1) == 0)) {
      *(undefined4 *)(this + 0x173) = 0x41080000;
      *(undefined4 *)(this + 0x16b) = 0x40a00000;
      *(undefined4 *)(this + 0x16f) = 0x40a00000;
      *(undefined4 *)(this + 0x387) = 0x40400000;
      *(undefined4 *)(this + 899) = 0x41100000;
    }
  }
  iVar3 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),1,0);
  if (iVar3 != 0) {
    *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 0x80;
    poVar2 = *(objOBJ **)(this + 0x56f);
    animCREATE_DATA::animCREATE_DATA(local_98);
    objOBJ::GetOrigin(poVar2,local_cc);
    local_c8 = local_c8 - *(float *)(this + 0x57b) * ___real_3f99999a;
    m3dMATR::MakeLCS2WCS_VY(local_86,local_cc,&m3dVUnitY);
    local_d8 = *(uint *)(this + 0x53f) >> 0x1c & 1;
    local_d4 = 0.13;
    entCreate(gsScenePtr,s_sfx_cyclop_walk,s_sfx_cyclop_walk,local_98,&local_d8,0);
    objOBJ::GetOrigin(*(objOBJ **)(this + 0x56f),(m3dV *)&local_d8);
    local_d4 = local_d4 - *(float *)(this + 0x57b) * ___real_3f99999a;
    dmgDispatchExplosDamage
              ((entENTITY *)this,(m3dV *)&local_d8,10.0,5.0,3,-1,(cdtINFO *)0x0,0xffffffff,
               (dmgDISPATCHER *)0x0);
    _radDmg = 5.0;
    __centerDmg = local_d8;
    _DAT_0060aec0 = local_d4;
    _DAT_0060aec4 = local_d0;
  }
  iVar3 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),1,1);
  if (iVar3 != 0) {
    *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 0x100;
    poVar2 = *(objOBJ **)(this + 0x573);
    animCREATE_DATA::animCREATE_DATA(local_98);
    objOBJ::GetOrigin(poVar2,local_cc);
    local_c8 = local_c8 - *(float *)(this + 0x57b) * ___real_3f99999a;
    m3dMATR::MakeLCS2WCS_VY(local_86,local_cc,&m3dVUnitY);
    local_d8 = *(uint *)(this + 0x53f) >> 0x1c & 1;
    local_d4 = 0.13;
    entCreate(gsScenePtr,s_sfx_cyclop_walk,s_sfx_cyclop_walk,local_98,&local_d8,0);
    objOBJ::GetOrigin(*(objOBJ **)(this + 0x573),(m3dV *)&local_d8);
    local_d4 = local_d4 - *(float *)(this + 0x57b) * ___real_3f99999a;
    dmgDispatchExplosDamage
              ((entENTITY *)this,(m3dV *)&local_d8,10.0,5.0,3,-1,(cdtINFO *)0x0,0xffffffff,
               (dmgDISPATCHER *)0x0);
    _radDmg = 5.0;
    __centerDmg = local_d8;
    _DAT_0060aec0 = local_d4;
    _DAT_0060aec4 = local_d0;
  }
  iVar3 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),1,2);
  if (iVar3 == 0) {
    animINST::IsActionFrame(*(animINST **)(this + 0xbc),1,3);
  }
  iVar3 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),4,0);
  if (iVar3 != 0) {
    *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 0x20;
  }
  iVar3 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),4,1);
  if (iVar3 != 0) {
    *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) & 0xffffffef;
  }
  animINST::IsActionFrame(*(animINST **)(this + 0xbc),10,0);
  iVar3 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),10,1);
  if (iVar3 != 0) {
    *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) & 0xffffffef;
  }
  iVar3 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),2,0);
  if (iVar3 != 0) {
    *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 0x80;
    poVar2 = *(objOBJ **)(this + 0x56f);
    animCREATE_DATA::animCREATE_DATA(local_98);
    objOBJ::GetOrigin(poVar2,local_cc);
    local_c8 = local_c8 - *(float *)(this + 0x57b) * ___real_3f99999a;
    m3dMATR::MakeLCS2WCS_VY(local_86,local_cc,&m3dVUnitY);
    local_d8 = *(uint *)(this + 0x53f) >> 0x1c & 1;
    local_d4 = 0.13;
    entCreate(gsScenePtr,s_sfx_cyclop_walk,s_sfx_cyclop_walk,local_98,&local_d8,0);
    objOBJ::GetOrigin(*(objOBJ **)(this + 0x56f),(m3dV *)&local_d8);
    local_d4 = local_d4 - *(float *)(this + 0x57b) * ___real_3f99999a;
    dmgDispatchExplosDamage
              ((entENTITY *)this,(m3dV *)&local_d8,10.0,5.0,3,-1,(cdtINFO *)0x0,0xffffffff,
               (dmgDISPATCHER *)0x0);
    _radDmg = 5.0;
    __centerDmg = local_d8;
    _DAT_0060aec0 = local_d4;
    _DAT_0060aec4 = local_d0;
  }
  iVar3 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),2,1);
  if (iVar3 != 0) {
    *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 0x10;
    poVar2 = *(objOBJ **)(this + 0x573);
    animCREATE_DATA::animCREATE_DATA(local_98);
    objOBJ::GetOrigin(poVar2,local_cc);
    local_c8 = local_c8 - *(float *)(this + 0x57b) * ___real_3f99999a;
    m3dMATR::MakeLCS2WCS_VY(local_86,local_cc,&m3dVUnitY);
    local_d8 = *(uint *)(this + 0x53f) >> 0x1c & 1;
    local_d4 = 0.13;
    entCreate(gsScenePtr,s_sfx_cyclop_walk,s_sfx_cyclop_walk,local_98,&local_d8,0);
    objOBJ::GetOrigin(*(objOBJ **)(this + 0x573),(m3dV *)&local_d8);
    local_d4 = local_d4 - *(float *)(this + 0x57b) * ___real_3f99999a;
    dmgDispatchExplosDamage
              ((entENTITY *)this,(m3dV *)&local_d8,10.0,5.0,3,-1,(cdtINFO *)0x0,0xffffffff,
               (dmgDISPATCHER *)0x0);
    _radDmg = 5.0;
    __centerDmg = local_d8;
    _DAT_0060aec0 = local_d4;
    _DAT_0060aec4 = local_d0;
  }
  iVar3 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),2,2);
  if (iVar3 != 0) {
    SendClubDamage(this);
  }
  iVar3 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),2,3);
  if (iVar3 != 0) {
    *(uint *)(this + 1099) = *(uint *)(this + 1099) & 0xffffefff;
    *(undefined4 *)(this + 0x54f) = 0x3fc00000;
    aiNPC::GetPosRooted((aiNPC *)this,local_cc);
    if (((byte)this[0x44f] & 8) != 0) {
      iVar3 = (**(code **)(*(int *)(this + 0x1ab) + 0x10))(local_cc);
      if (iVar3 == 0) {
        *(undefined4 *)(this + 0x567) = 0x1e;
        *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) | 0x8000;
      }
    }
  }
  iVar3 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),0xb,2);
  if (iVar3 != 0) {
    *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 0x10;
  }
  iVar3 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),0xb,0);
  if (iVar3 != 0) {
    SendClubDamage(this);
  }
  iVar3 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),0xb,1);
  if (iVar3 != 0) {
    *(uint *)(this + 1099) = *(uint *)(this + 1099) & 0xffffefff;
  }
  iVar3 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),6,0);
  if (iVar3 != 0) {
    *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) | 0x400;
    *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 8;
  }
  iVar3 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),6,1);
  if (iVar3 != 0) {
    uVar1 = *(uint *)(this + 0x53f);
    *(uint *)(this + 0x53f) = uVar1 & 0xfffffbff;
    if ((uVar1 & 0x800) == 0) {
      *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 1;
    }
    else {
      dmgGENERAL::dmgGENERAL(adStack_b4);
      *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) & 0xfffff7ff;
      (**(code **)(*(int *)this + 0xe4))(auStack_a4);
      uStack_ac = 0x43c80000;
      if (*(msgADDR **)(this + 0x4c3) != (msgADDR *)0x0) {
        msgSYSTEM::SendMsg(&msgSystem,*(msgADDR **)(this + 0x4c3),0x4c5,adStack_b4,(msgADDR *)this);
      }
    }
  }
  iVar3 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),6,2);
  if (iVar3 != 0) {
    *(uint *)(this + 1099) = *(uint *)(this + 1099) & 0xffffefff;
    *(undefined4 *)(this + 0x54f) = 0x40000000;
    *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) | 0x1000;
  }
  iVar3 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),7,0);
  if (iVar3 != 0) {
    *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) | 0x6000;
    *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 0x200;
  }
  iVar3 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),7,1);
  if (iVar3 != 0) {
    *(undefined4 *)(this + 0x553) = 0;
    *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) & 0xffff9fff;
    fVar5 = m3dRandom();
    if (fVar5 <= ___real_3f4ccccd) {
      uVar6 = 1;
      piVar4 = *(int **)(*(int *)(*(int *)(this + 0xbc) + 0x138) + 0xa4);
    }
    else {
      uVar6 = 6;
      piVar4 = *(int **)(*(int *)(*(int *)(this + 0xbc) + 0x138) + 0xa4);
    }
    (**(code **)(*piVar4 + 4))(7,1,1,uVar6,fVar5 <= ___real_3f4ccccd);
    *(uint *)(this + 1099) = *(uint *)(this + 1099) & 0xffffefff;
    *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) & 0xffffefff;
    *(undefined4 *)(this + 0x54f) = 0x40000000;
  }
  animINST::IsActionFrame(*(animINST **)(this + 0xbc),7,2);
  iVar3 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),5,0);
  if (iVar3 != 0) {
    auStack_c0[0] = *(uint *)(this + 0x53f) >> 0x1c & 1;
    auStack_c0[1] = 0x3dcccccd;
    paStack_b8 = this;
    entCreate(gsScenePtr,s_sfx_cyclop_death,s_,(animCREATE_DATA *)0x0,auStack_c0,0);
  }
  animINST::IsActionFrame(*(animINST **)(this + 0xbc),5,1);
  iVar3 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),5,2);
  if (iVar3 != 0) {
    poVar2 = *(objOBJ **)(this + 0x573);
    *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 0x80;
    animCREATE_DATA::animCREATE_DATA(local_98);
    objOBJ::GetOrigin(poVar2,local_cc);
    local_c8 = local_c8 - *(float *)(this + 0x57b) * ___real_3f99999a;
    m3dMATR::MakeLCS2WCS_VY(local_86,local_cc,&m3dVUnitY);
    local_d8 = *(uint *)(this + 0x53f) >> 0x1c & 1;
    local_d4 = 0.13;
    entCreate(gsScenePtr,s_sfx_cyclop_walk,s_sfx_cyclop_walk,local_98,&local_d8,0);
    objOBJ::GetOrigin(*(objOBJ **)(this + 0x573),(m3dV *)&local_d8);
    local_d4 = local_d4 - *(float *)(this + 0x57b) * ___real_3f99999a;
    dmgDispatchExplosDamage
              ((entENTITY *)this,(m3dV *)&local_d8,10.0,5.0,3,-1,(cdtINFO *)0x0,0xffffffff,
               (dmgDISPATCHER *)0x0);
    _radDmg = 5.0;
    __centerDmg = local_d8;
    _DAT_0060aec0 = local_d4;
    _DAT_0060aec4 = local_d0;
  }
  iVar3 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),5,3);
  if (iVar3 != 0) {
    poVar2 = *(objOBJ **)(this + 0x56f);
    *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 0x80;
    animCREATE_DATA::animCREATE_DATA(local_98);
    objOBJ::GetOrigin(poVar2,local_cc);
    local_c8 = local_c8 - *(float *)(this + 0x57b) * ___real_3f99999a;
    m3dMATR::MakeLCS2WCS_VY(local_86,local_cc,&m3dVUnitY);
    local_d8 = *(uint *)(this + 0x53f) >> 0x1c & 1;
    local_d4 = 0.13;
    entCreate(gsScenePtr,s_sfx_cyclop_walk,s_sfx_cyclop_walk,local_98,&local_d8,0);
    objOBJ::GetOrigin(*(objOBJ **)(this + 0x56f),(m3dV *)&local_d8);
    local_d4 = local_d4 - *(float *)(this + 0x57b) * ___real_3f99999a;
    dmgDispatchExplosDamage
              ((entENTITY *)this,(m3dV *)&local_d8,10.0,5.0,3,-1,(cdtINFO *)0x0,0xffffffff,
               (dmgDISPATCHER *)0x0);
    _radDmg = 5.0;
    __centerDmg = local_d8;
    _DAT_0060aec0 = local_d4;
    _DAT_0060aec4 = local_d0;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_cyclop.cpp
   addr: 0043C840 */

float __thiscall aiCYCLOP::GetAnimPlayRate(aiCYCLOP *this)

{
  if ((*(uint *)(this + 0x53f) & 1) != 0) {
    return ___real_00000000;
  }
  if ((((*(uint *)(this + 0x53f) & 0x10000000) != 0) &&
      (*(int *)(*(int *)(this + 0xbc) + 0xe0) != 3)) &&
     (*(int *)(*(int *)(this + 0xbc) + 0xe0) != 4)) {
    return ___real_4039999a;
  }
  return ___real_3f800000;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_cyclop.cpp
   addr: 0043C880 */

float __thiscall aiCYCLOP::CalcBorderForClubAttack(aiCYCLOP *this)

{
  float fVar1;
  int iVar2;
  
  if (((*(uint *)(this + 1099) & 0x10000000) == 0) || (___real_42dc0000 < *(float *)(this + 0x3d7)))
  {
    return ___real_bf800000;
  }
  fVar1 = *(float *)(this + 0x3cf) / *(float *)(this + 0x57b);
  if (((byte)this[0x44f] & 8) != 0) {
    iVar2 = (**(code **)(*(int *)(this + 0x1ab) + 0x10))(this + 0x3ff);
    if (iVar2 == 0) {
      if ((___real_41200000 < fVar1) && (fVar1 < ___real_41c80000)) {
        return ___real_3f4ccccd;
      }
      return ___real_bf800000;
    }
  }
  if (fVar1 < ___real_41200000) {
    return ___real_3f800000;
  }
  if (___real_41a00000 < fVar1) {
    return ___real_3f333333 - (fVar1 - ___real_41a00000) * ___real_3e333333;
  }
  return ___real_3f333333;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_cyclop.cpp
   addr: 0043C970 */

float __thiscall aiCYCLOP::CalcBorderForSpitAttack(aiCYCLOP *this)

{
  uint uVar1;
  float fVar2;
  
  uVar1 = *(uint *)(this + 1099);
  if ((int)uVar1 < 0) {
    return ___real_00000000;
  }
  if (((uVar1 & 0x10000000) == 0) || (___real_42700000 < *(float *)(this + 0x3d7))) {
    return ___real_bf800000;
  }
  fVar2 = *(float *)(this + 0x3cf) / *(float *)(this + 0x57b);
  if (((((uVar1 & 1) != 0) && ((uVar1 & 2) != 0)) && (*(float *)(this + 0x3d7) < ___real_41200000))
     && (___real_41c80000 < fVar2)) {
    return ___real_3f800000;
  }
  if (fVar2 < ___real_41a00000) {
    return (fVar2 - ___real_41000000) * ___real_3c888889;
  }
  if (___real_430c0000 < fVar2) {
    return ___real_3e4ccccd - (fVar2 - ___real_430c0000) * ___real_3bea0ea1;
  }
  return ___real_3e4ccccd;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_cyclop.cpp
   addr: 0043CA50 */

void __thiscall aiCYCLOP::Think(aiCYCLOP *this)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  
  aiNPC_WR::Think((aiNPC_WR *)this);
  fVar3 = ___real_41f00000;
  if (((*(uint *)(this + 1099) & 0x1000) == 0) && (*(float *)(this + 0x54f) <= ___real_3c23d70a)) {
    uVar2 = *(uint *)(this + 0x53f);
    uVar1 = uVar2 & 0xfffffcdf;
    *(uint *)(this + 0x53f) = uVar1;
    if (((*(float *)(this + 0x3d7) <= fVar3) && (-1 < (char)(uVar1 >> 8))) &&
       (((uVar2 & 0x10000000) == 0 || ((*(uint *)(this + 0x51b) & 0x200) == 0)))) {
      fVar3 = CalcBorderForClubAttack(this);
      *(float *)(this + 0x55b) = fVar3;
      fVar3 = CalcBorderForSpitAttack(this);
      *(float *)(this + 0x55f) = fVar3;
      if (*(float *)(this + 0x577) <= *(float *)(this + 0x3cf)) {
        fVar3 = m3dRandom();
        if (fVar3 < *(float *)(this + 0x55b)) {
          *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) | 0x200;
        }
        fVar3 = m3dRandom();
        if (*(float *)(this + 0x55f) <= fVar3) goto LAB_0043cb40;
        uVar2 = *(uint *)(this + 0x53f) | 0x100;
      }
      else {
        uVar2 = *(uint *)(this + 0x53f) | 0x20;
      }
      *(uint *)(this + 0x53f) = uVar2;
    }
  }
LAB_0043cb40:
  if (*(int *)(*(int *)(this + 0xbc) + 0xe0) == 10) {
    *(undefined4 *)(this + 0x51f) = 0x41200000;
  }
  aiNPC_WR::UpdateInAreaFlags((aiNPC_WR *)this);
  return;
}




/* from: ai_cyclop.cpp
   addr: 0043CB70 */

int __thiscall aiCYCLOP::SelectGoal(aiCYCLOP *this)

{
  int iVar1;
  m3dV local_18 [12];
  m3dV local_c [12];
  
  aiNPC::SelectGoal((aiNPC *)this);
  aiNPC::GetPosRooted((aiNPC *)this,local_c);
  if (((byte)this[0x44f] & 8) != 0) {
    if ((char)((uint)*(undefined4 *)(this + 0x53f) >> 8) < '\0') {
      aiPLANNER::GetNavAreaCenter(aiAttackPlanner,(aiNPC *)this,(m3dV *)(this + 0x3f3));
      *(undefined4 *)(this + 0x3ff) = *(undefined4 *)(this + 0x3f3);
      *(undefined4 *)(this + 0x403) = *(undefined4 *)(this + 0x3f7);
      *(undefined4 *)(this + 0x407) = *(undefined4 *)(this + 0x3fb);
    }
    if ((*(uint *)(this + 0x51b) & 0x10000) == 0) {
      if ((___real_40000000 < *(float *)(this + 0x557)) &&
         (-1 < (char)((uint)*(undefined4 *)(this + 0x53f) >> 8))) {
        aiNPC::GetPosRooted((aiNPC *)this,local_18);
        if (((byte)this[0x44f] & 8) != 0) {
          iVar1 = (**(code **)(*(int *)(this + 0x1ab) + 0x10))(local_18);
          if (iVar1 == 0) {
            *(undefined4 *)(this + 0x567) = 0x1e;
            *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) | 0x8000;
          }
        }
      }
    }
    else {
      iVar1 = *(int *)(this + 0x567);
      *(int *)(this + 0x567) = iVar1 + -1;
      if (iVar1 + -1 < 1) {
        *(undefined4 *)(this + 0x567) = 0;
        *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) & 0xffff7fff;
        return 1;
      }
    }
  }
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_cyclop.cpp
   addr: 0043CC90 */

void __thiscall aiCYCLOP::SetMovementSpeed(aiCYCLOP *this)

{
  int iVar1;
  float fVar2;
  undefined1 local_24 [8];
  m3dV amStack_1c [12];
  m3dV amStack_10 [4];
  undefined4 local_c [3];
  
  iVar1 = *(int *)(*(int *)(this + 0xbc) + 0xe0);
  if ((iVar1 != 1) && (*(uint *)(this + 1099) = *(uint *)(this + 1099) | 0x200, iVar1 != 2)) {
    *(undefined4 *)(this + 0x15b) = 0;
    return;
  }
  iVar1 = aiNPC::IsPivotUsable((aiNPC *)this);
  if (iVar1 == 0) {
    *(undefined4 *)(this + 0x15b) = 0;
    return;
  }
  animINST::GetDir(*(animINST **)(this + 0xbc),(m3dV *)local_c);
  (**(code **)(*(int *)this + 0xe4))(local_24);
  animINST::GetPos(*(animINST **)(this + 0xbc),amStack_1c);
  local_c[0] = 0;
  fVar2 = m3dAngleVector_COS(amStack_10,(m3dV *)&stack0xffffffcc);
  if (___real_3e4ccccd < fVar2) {
    *(undefined4 *)(this + 0x15b) = 0x42b40000;
    return;
  }
  *(undefined4 *)(this + 0x15b) = 0x42d80001;
  return;
}



/* from: ai_cyclop.cpp
   addr: 0043CD80 */

void __thiscall aiCYCLOP::ClampGoalFrame(aiCYCLOP *this,float param_1,m3dV *param_2,m3dV *param_3)

{
  float *pfVar1;
  m3dV *pmVar2;
  m3dV *pmVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  ulonglong uVar7;
  undefined8 extraout_MM1;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 in_MM2;
  undefined8 uVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  m3dV *pmVar15;
  float local_70 [4];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  float local_30 [3];
  float local_24 [3];
  float local_18;
  float local_14;
  float local_10;
  m3dV *local_c;
  float local_8;
  
  local_8 = *(float *)(this + 0x157);
  aiNPC::GetClampingSpeeds((aiNPC *)this,param_1,&param_1,&local_8);
  animINST::GetPos(*(animINST **)(this + 0xbc),(m3dV *)&local_18);
  animINST::GetDir(*(animINST **)(this + 0xbc),(m3dV *)local_24);
  pmVar15 = (m3dV *)m3xzAngleVector((m3dV *)local_24,param_2);
  pmVar3 = param_3;
  local_c = (m3dV *)ABS((float)pmVar15);
  if (*(float *)(this + 0x15f) < (float)local_c) {
    if ((float)local_c <= ___real_42f00000) {
      param_3 = *(m3dV **)(this + 0x15f);
      pmVar2 = (m3dV *)-*(float *)(this + 0x15f);
      param_2 = pmVar2;
      if ((float)param_3 < (float)pmVar2) {
        param_2 = param_3;
        param_3 = pmVar2;
        local_c = pmVar2;
      }
      if (((float)param_2 <= (float)pmVar15) && (param_2 = pmVar15, (float)param_3 < (float)pmVar15)
         ) {
        param_2 = param_3;
      }
      m3dMATR::MakeRotY((m3dMATR *)local_70,(float)param_2);
      param_3 = (m3dV *)local_24;
      local_c = (m3dV *)local_70;
      in_MM2 = extraout_MM1;
      if (m3dSimdType != 0) {
        if (m3dSimdType == 1) {
          FastExitMediaState();
          uVar8 = PackedFloatingMUL(CONCAT44(local_24[0],local_24[0]),
                                    CONCAT44(local_70[1],local_70[0]));
          uVar9 = PackedFloatingMUL(CONCAT44(local_24[1],local_24[1]),CONCAT44(uStack_5c,local_60));
          uVar10 = PackedFloatingMUL(CONCAT44(local_24[2],local_24[2]),CONCAT44(uStack_4c,local_50))
          ;
          uVar11 = PackedFloatingMUL(CONCAT44(local_24[0],local_24[0]),
                                     CONCAT44(local_70[3],local_70[2]));
          in_MM2 = PackedFloatingADD(uVar9,uVar10);
          uVar9 = PackedFloatingMUL(CONCAT44(local_24[1],local_24[1]),CONCAT44(uStack_54,uStack_58))
          ;
          uVar10 = PackedFloatingMUL(CONCAT44(local_24[2],local_24[2]),CONCAT44(uStack_44,uStack_48)
                                    );
          uVar8 = PackedFloatingADD(uVar8,in_MM2);
          uVar9 = PackedFloatingADD(uVar9,uVar10);
          local_30[1] = (float)((ulonglong)uVar8 >> 0x20);
          local_30[0] = (float)uVar8;
          uVar8 = PackedFloatingADD(uVar11,uVar9);
          local_30[2] = (float)uVar8;
          FastExitMediaState();
        }
        else {
          iVar6 = 0;
          do {
            *(undefined4 *)((int)local_30 + iVar6) = 0;
            iVar4 = 0;
            pfVar5 = (float *)((int)local_70 + iVar6);
            fVar12 = ___real_00000000;
            do {
              pfVar1 = local_24 + iVar4;
              fVar13 = *pfVar5;
              iVar4 = iVar4 + 1;
              pfVar5 = pfVar5 + 4;
              fVar12 = *pfVar1 * fVar13 + fVar12;
            } while (iVar4 < 3);
            *(float *)((int)local_30 + iVar6) = fVar12;
            iVar6 = iVar6 + 4;
          } while (iVar6 < 0xc);
        }
      }
      *(float *)pmVar3 = local_30[0] * ___real_41a00000 + local_18;
      *(float *)(pmVar3 + 4) = local_30[1] * ___real_41a00000 + local_14;
    }
    else {
      *(float *)param_3 = local_24[0] * ___real_41a00000 + local_18;
      *(float *)(param_3 + 4) = local_24[1] * ___real_41a00000 + local_14;
      local_30[2] = local_24[2];
    }
    *(float *)(pmVar3 + 8) = local_30[2] * ___real_41a00000 + local_10;
  }
  fVar12 = (local_18 - *(float *)pmVar3) * (local_18 - *(float *)pmVar3) +
           (local_10 - *(float *)(pmVar3 + 8)) * (local_10 - *(float *)(pmVar3 + 8));
  if (m3dSimdType == 0) {
    fVar12 = fVar12 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar14 = rsqrtss(ZEXT416((uint)fVar12),ZEXT416((uint)fVar12));
    fVar13 = auVar14._0_4_;
    param_2 = (m3dV *)(`float___cdecl_m3dSqrt(float)'::__l2::half * fVar13 *
                       (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar12 * fVar13 * fVar13) *
                      fVar12);
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar7 = (ulonglong)(uint)fVar12;
    uVar8 = PackedFloatingReciprocalSQRAprox(in_MM2,uVar7);
    uVar9 = PackedFloatingMUL(uVar8,uVar8);
    uVar9 = PackedFloatingReciprocalSQRIter1(uVar9,uVar7);
    uVar8 = PackedFloatingReciprocalIter2(uVar9,uVar8);
    uVar8 = PackedFloatingMUL(uVar8,uVar7);
    param_2 = (m3dV *)uVar8;
    FastExitMediaState();
  }
  else {
    param_2 = (m3dV *)SQRT(fVar12);
  }
  if ((float)param_2 < gsElapsedTime * param_1) {
    *(float *)pmVar3 = local_24[0] * ___real_41a00000 + local_18;
    *(float *)(pmVar3 + 4) = local_24[1] * ___real_41a00000 + local_14;
    *(float *)(pmVar3 + 8) = local_24[2] * ___real_41a00000 + local_10;
  }
  m3dClampVector_L((m3dV *)&local_18,pmVar3,gsElapsedTime * param_1);
  return;
}




/* from: ai_cyclop.cpp
   addr: 0043D110 */

void __thiscall aiCYCLOP::UpdateTimers(aiCYCLOP *this)

{
  int iVar1;
  float extraout_EDX;
  float extraout_EDX_00;
  
  aiNPC_WR::UpdateTimers((aiNPC_WR *)this);
  m3dUpdateTimeField((float *)(this + 0x54f),extraout_EDX);
  iVar1 = m3dUpdateTimeField((float *)(this + 0x553),extraout_EDX_00);
  if (iVar1 != 0) {
    *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) | 0x4000;
  }
  if ((*(uint *)(this + 0x51b) & 0x10000) != 0) {
    *(undefined4 *)(this + 0x557) = 0;
    return;
  }
  *(float *)(this + 0x557) = gsElapsedTime + *(float *)(this + 0x557);
  return;
}




/* from: ai_cyclop.cpp
   addr: 0043D180 */

int __thiscall aiCYCLOP::ProcessCDT_FIREABLE(aiCYCLOP *this,dmgDAMAGE *param_1)

{
  int iVar1;
  
  if (((byte)this[0x88] & 4) != 0) {
    if ((*(int *)(param_1 + 4) == 0) &&
       ((iVar1 = *(int *)(param_1 + 0x1c), iVar1 == 6 || ((8 < iVar1 && (iVar1 < 0xb)))))) {
      *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) | 8;
    }
    aiNPC_WR::ProcessCDT_FIREABLE((aiNPC_WR *)this,param_1);
    if (((byte)this[0x53f] & 3) != 0) {
      *(undefined4 *)(this + 0xcc) = *(undefined4 *)(this + 0xd0);
    }
    if ((*(uint *)(this + 1099) & 0x200000) != 0) {
      aiPLANNER::SetBoss(aiAttackPlanner,(aiNPC *)0x0);
    }
  }
  return 1;
}




/* from: ai_cyclop.cpp
   addr: 0043D200 */

void __thiscall aiCYCLOP::PlaySounds(aiCYCLOP *this)

{
  uint uVar1;
  
  if ((*(uint *)(this + 0xf8) & 1) != 0) {
    *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) & 0xfffffffe;
    (**(code **)(**(int **)(this + 0x543) + 4))(&_aiCyclopSndList,0);
  }
  uVar1 = *(uint *)(this + 0xf8);
  if (((uVar1 & 2) != 0) && ((uVar1 & 0x10000) == 0)) {
    *(uint *)(this + 0xf8) = uVar1 & 0xfffffffd;
    (**(code **)(**(int **)(this + 0x543) + 4))(&DAT_0060af48,0);
    *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 0x10000;
  }
  if ((*(uint *)(this + 0xf8) & 4) != 0) {
    *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) & 0xfffffffb;
    (**(code **)(**(int **)(this + 0x543) + 4))(&DAT_0060afb0,0);
  }
  if ((*(uint *)(this + 0xf8) & 8) != 0) {
    *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) & 0xfffffff7;
    (**(code **)(**(int **)(this + 0x543) + 4))(&DAT_0060b018,0);
  }
  if (((byte)this[0xf8] & 0x10) != 0) {
    (**(code **)(**(int **)(this + 0x543) + 4))(&DAT_0060b080,0);
    *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) & 0xffffffef;
  }
  if ((*(uint *)(this + 0xf8) & 0x20) != 0) {
    *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) & 0xffffffdf;
    (**(code **)(**(int **)(this + 0x543) + 4))(&DAT_0060b0e8,0);
  }
  if ((char)this[0xf8] < '\0') {
    (**(code **)(**(int **)(this + 0x543) + 4))(&DAT_0060b150,0);
    *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) & 0xffffff7f;
  }
  if ((*(uint *)(this + 0xf8) & 0x100) != 0) {
    (**(code **)(**(int **)(this + 0x543) + 4))(&DAT_0060b1b8,0);
    *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) & 0xfffffeff;
  }
  if ((*(uint *)(this + 0xf8) & 0x200) != 0) {
    (**(code **)(**(int **)(this + 0x543) + 4))(&DAT_0060b220,0);
    *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) & 0xfffffdff;
  }
  aiNPC::PlaySounds((aiNPC *)this);
  return;
}




/* from: ai_cyclop.cpp
   addr: 0043D3A0 */

void __thiscall aiCYCLOP::ProcessMP_NOTIFY(aiCYCLOP *this,gsEVENT *param_1)

{
  uint uVar1;
  
  aiNPC_WR::ProcessMP_NOTIFY((aiNPC_WR *)this,param_1);
  if (*(int *)(param_1 + 4) == -100) {
    uVar1 = *(uint *)(this + 0x53f);
    *(uint *)(this + 0x53f) = uVar1 & 0xfffffcdf;
    *(uint *)(this + 1099) = *(uint *)(this + 1099) & 0xffffefff;
    if (((*(uint *)(this + 0x44f) & 0x40000) != 0) && ((uVar1 & 3) == 0)) {
      *(undefined4 *)(this + 0x173) = 0x41080000;
      *(undefined4 *)(this + 0x16b) = 0x40a00000;
      *(undefined4 *)(this + 0x16f) = 0x40a00000;
      *(undefined4 *)(this + 0x387) = 0x40400000;
      *(undefined4 *)(this + 899) = 0x41100000;
    }
  }
  return;
}




/* from: ai_cyclop.cpp
   addr: 0043D420 */

int __thiscall aiCYCLOP::IsArmoredObject(aiCYCLOP *this,char *param_1)

{
  int iVar1;
  
  iVar1 = strnicmp(param_1,s_dubina,6);
  if (iVar1 != 0) {
    iVar1 = strnicmp(param_1,s_cherep,6);
    if (iVar1 != 0) {
      return 0;
    }
  }
  return 1;
}




/* from: ai_cyclop.cpp
   addr: 0043D460 */

int __thiscall aiCYCLOP::IsAnimSeqGoodForFallback(aiCYCLOP *this)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)this + 200))();
  if ((iVar1 != 5) && (iVar1 != 0)) {
    return 1;
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_cyclop.cpp
   addr: 0043D480 */

cdtREFINE * __thiscall aiCYCLOP::GetFloorPlaceRefiner(aiCYCLOP *this)

{
  cdtREFINE *pcVar1;
  
  if ((DAT_0060aecc & 1) == 0) {
    DAT_0060aecc = DAT_0060aecc | 1;
    _DAT_0060aed4 = 0;
    _DAT_0060aed8 = 0;
    _DAT_0060aedc = 0;
    _DAT_0060aed0 = &aiCYCLOP_REFINE::_vftable_;
    atexit((_func_4879 *)&__E53);
  }
  pcVar1 = aiNPC::GetFloorPlaceRefiner((aiNPC *)this);
  aiCDT_REFINE::Init((aiCDT_REFINE *)&DAT_0060aed0,(aiCDT_REFINE *)pcVar1);
  return (cdtREFINE *)&DAT_0060aed0;
}




/* from: ai_cyclop.cpp
   addr: 0043D4F0 */

int __thiscall aiCYCLOP_REFINE::IsInclObj(aiCYCLOP_REFINE *this,objOBJ *param_1)

{
  int iVar1;
  char *pcVar2;
  char *_Str1;
  char *pcVar3;
  bool bVar4;
  
  _Str1 = *(char **)(param_1 + 0x18);
  if (_Str1 != (char *)0x0) {
    iVar1 = strncmp(_Str1,s_cube,4);
    if (iVar1 == 0) {
      iVar1 = 9;
      bVar4 = true;
      pcVar2 = _Str1;
      pcVar3 = &s_cube1623;
      do {
        if (iVar1 == 0) break;
        iVar1 = iVar1 + -1;
        bVar4 = *pcVar2 == *pcVar3;
        pcVar2 = pcVar2 + 1;
        pcVar3 = pcVar3 + 1;
      } while (bVar4);
      if (!bVar4) {
        iVar1 = 9;
        bVar4 = true;
        pcVar2 = &s_cube6_13;
        do {
          if (iVar1 == 0) break;
          iVar1 = iVar1 + -1;
          bVar4 = *_Str1 == *pcVar2;
          _Str1 = _Str1 + 1;
          pcVar2 = pcVar2 + 1;
        } while (bVar4);
        if (!bVar4) {
          return 0;
        }
      }
    }
  }
  iVar1 = aiCDT_REFINE::IsInclObj((aiCDT_REFINE *)this,param_1);
  return iVar1;
}


