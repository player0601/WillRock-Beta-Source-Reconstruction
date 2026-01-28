
/* from: ai_glad_generic.cpp
   addr: 004406F0 */

int __fastcall aiGladiatorsAllInit(void)

{
  int iVar1;
  
  iVar1 = entRegisterClass(s_ai_glad_knife,0x244e5043,0x32,aiGLAD_KNIFE::Create,s_ai_glad,0);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = entRegisterClass(s_ai_glad_mace,0x244e5043,0x32,aiGLAD_MACE::Create,s_ai_glad,0);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = aiGladKnifePjlInit();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = aiGladMacePjlInit();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = wrsfxGladInit();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = sncLinkSndListData(0xe,(sncSOUND_DESCR_3D *)&_aiGladSndList);
  return (uint)(iVar1 != 0);
}




/* from: ai_glad_generic.cpp
   addr: 00440770 */

int __thiscall aiGLAD_GENERIC::SetupAniSystem(aiGLAD_GENERIC *this)

{
  animTPL *paVar1;
  animSEQ *paVar2;
  int iVar3;
  undefined4 *puVar4;
  animSYSTEM *this_00;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  int local_1c;
  int local_10 [4];
  
  paVar1 = *(animTPL **)(*(int *)(this + 0xbc) + 0x138);
  local_10[1] = 7;
  paVar2 = *(animSEQ **)(paVar1 + 0x90);
  local_10[0] = 0;
  local_10[2] = 0xe;
  local_10[3] = 0x16;
  if (paVar2 == (animSEQ *)0x0) {
    local_1c = 0;
  }
  else {
    local_1c = *(int *)(paVar1 + 0x8c);
  }
  iVar8 = 0x1e;
  *(undefined4 *)(paVar1 + 0x8c) = 0x1e;
  puVar4 = (undefined4 *)operator_new(0xff4);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = 0x1e;
    puVar4 = puVar4 + 1;
    puVar7 = puVar4;
    do {
      puVar9 = puVar7;
      for (iVar6 = 0x22; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar9 = 0;
        puVar9 = puVar9 + 1;
      }
      puVar7[0x20] = 2;
      iVar8 = iVar8 + -1;
      puVar7 = puVar7 + 0x22;
    } while (iVar8 != 0);
  }
  *(undefined4 **)(paVar1 + 0x90) = puVar4;
  _entAnimSetSeqName(paVar1,0,s_GLAD_SEQ_IDLE_KNIFE);
  _entAnimSetSeqName(paVar1,1,s_GLAD_SEQ_RUN_KNIFE);
  _entAnimSetSeqName(paVar1,2,s_GLAD_SEQ_APPEAR_KNIFE);
  _entAnimSetSeqName(paVar1,3,s_GLAD_SEQ_THROW_KNIFE);
  _entAnimSetSeqName(paVar1,4,s_GLAD_SEQ_SLASH_KNIFE);
  _entAnimSetSeqName(paVar1,5,s_GLAD_SEQ_SHOT_KNIFE);
  _entAnimSetSeqName(paVar1,6,s_GLAD_SEQ_DEATH_KNIFE);
  _entAnimSetSeqName(paVar1,7,s_GLAD_SEQ_IDLE_FAT_KNIFE);
  _entAnimSetSeqName(paVar1,8,s_GLAD_SEQ_RUN_FAT_KNIFE);
  _entAnimSetSeqName(paVar1,9,s_GLAD_SEQ_APPEAR_FAT_KNIFE);
  _entAnimSetSeqName(paVar1,10,s_GLAD_SEQ_THROW_FAT_KNIFE);
  _entAnimSetSeqName(paVar1,0xb,s_GLAD_SEQ_SLASH_FAT_KNIFE);
  _entAnimSetSeqName(paVar1,0xc,s_GLAD_SEQ_SHOT_FAT_KNIFE);
  _entAnimSetSeqName(paVar1,0xd,s_GLAD_SEQ_DEATH_FAT_KNIFE);
  _entAnimSetSeqName(paVar1,0xe,s_GLAD_SEQ_IDLE_MACE);
  _entAnimSetSeqName(paVar1,0xf,s_GLAD_SEQ_RUN_MACE);
  _entAnimSetSeqName(paVar1,0x10,s_GLAD_SEQ_APPEAR_MACE);
  _entAnimSetSeqName(paVar1,0x11,s_GLAD_SEQ_THROW_MACE);
  _entAnimSetSeqName(paVar1,0x12,s_GLAD_SEQ_SLASH1_MACE);
  _entAnimSetSeqName(paVar1,0x13,s_GLAD_SEQ_SHOT_MACE);
  _entAnimSetSeqName(paVar1,0x14,s_GLAD_SEQ_DEATH_MACE);
  _entAnimSetSeqName(paVar1,0x15,s_GLAD_SEQ_SLASH2_MACE);
  _entAnimSetSeqName(paVar1,0x16,s_GLAD_SEQ_IDLE_FAT_MACE);
  _entAnimSetSeqName(paVar1,0x17,s_GLAD_SEQ_RUN_FAT_MACE);
  _entAnimSetSeqName(paVar1,0x18,s_GLAD_SEQ_APPEAR_FAT_MACE);
  _entAnimSetSeqName(paVar1,0x19,s_GLAD_SEQ_THROW_FAT_MACE);
  _entAnimSetSeqName(paVar1,0x1a,s_GLAD_SEQ_SLASH1_FAT_MACE);
  _entAnimSetSeqName(paVar1,0x1b,s_GLAD_SEQ_SHOT_FAT_MACE);
  _entAnimSetSeqName(paVar1,0x1c,s_GLAD_SEQ_DEATH_FAT_MACE);
  _entAnimSetSeqName(paVar1,0x1d,s_GLAD_SEQ_SLASH2_FAT_MACE);
  entAnimAssignTplSeq(paVar1,paVar2,local_1c);
  this_00 = (animSYSTEM *)operator_new(0x14);
  if ((this_00 != (animSYSTEM *)0x0) &&
     (piVar5 = (int *)animSYSTEM::animSYSTEM(this_00,0x1e,0), piVar5 != (int *)0x0)) {
    *(int **)(paVar1 + 0xa4) = piVar5;
    local_1c = 0;
    do {
      iVar3 = local_10[local_1c];
      (**(code **)(*piVar5 + 0xc))(iVar3,0,1,0xffffffff);
      (**(code **)(*piVar5 + 0x14))(iVar3);
      iVar8 = iVar3 + 5;
      (**(code **)(*piVar5 + 0x10))(iVar8,0,1,iVar8);
      (**(code **)(*piVar5 + 0x14))(iVar8);
      iVar8 = iVar3 + 6;
      (**(code **)(*piVar5 + 0x10))(iVar8,0,1,iVar8);
      iVar6 = iVar3 + 1;
      (**(code **)(*piVar5 + 4))(iVar6,iVar3 + 4,0,iVar3 + 4,1);
      (**(code **)(*piVar5 + 4))(iVar8,iVar8,2,iVar3 + 6,1);
      (**(code **)(*piVar5 + 4))(iVar3 + 2,iVar3 + 2,2,iVar3 + 2,1);
      iVar8 = iVar3 + 3;
      (**(code **)(*piVar5 + 0x14))(iVar8);
      (**(code **)(*piVar5 + 4))(iVar8,iVar6,1,iVar3 + 1,0);
      (**(code **)(*piVar5 + 4))(iVar6,iVar8,1,iVar3 + 3,0);
      local_1c = local_1c + 1;
    } while (local_1c < 4);
    iVar8 = 0x15;
    (**(code **)(*piVar5 + 4))(0xf,0x15,0,0x15,1);
    (**(code **)(*piVar5 + 4))(0x17,0x1d,0,0x1d,1);
    if (iVar8 != 0) {
      operator_delete((void *)(iVar8 + -4));
    }
    return 1;
  }
  if (*(int *)(paVar1 + 0x90) != 0) {
    operator_delete((void *)(*(int *)(paVar1 + 0x90) + -4));
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_glad_generic.cpp
   addr: 00440B70 */

int __thiscall aiGLAD_GENERIC::ProcessINIT(aiGLAD_GENERIC *this,void *param_1)

{
  undefined4 uVar1;
  int iVar2;
  sncCHANNEL *this_00;
  objOBJ *poVar3;
  
  iVar2 = aiNPC_WR::ProcessINIT((aiNPC_WR *)this,param_1);
  if (iVar2 == 0) {
    return 0;
  }
  *(undefined4 *)(this + 0xd0) = 0x41700000;
  *(undefined4 *)(this + 0x197) = 0x3fd9999a;
  *(undefined4 *)(this + 0x4a7) = 0x43960000;
  *(undefined4 *)(this + 0x4ab) = 0x43960000;
  *(undefined4 *)(this + 0x17f) = 0x43340000;
  *(undefined4 *)(this + 0x153) = 0x40d0cccc;
  *(undefined4 *)(this + 0x15b) = 0x42dc0000;
  *(undefined4 *)(this + 0x187) = 0x41a00000;
  *(undefined4 *)(this + 0x18b) = 0x42200000;
  *(undefined4 *)(this + 0x557) = 0x40a00000;
  *(undefined4 *)(this + 0x173) = 0x3f99999a;
  *(undefined4 *)(this + 0x497) = 0x40e00000;
  *(undefined4 *)(this + 0x49b) = 0x40c00000;
  *(undefined4 *)(this + 0x54f) = 1;
  *(undefined4 *)(this + 399) = 0x41200000;
  *(undefined4 *)(this + 0x193) = 0x40000000;
  *(undefined4 *)(this + 0x52b) = 0x42b40000;
  *(undefined4 *)(this + 0xcc) = 0x41700000;
  *(undefined4 *)(this + 0x543) = 0;
  *(undefined4 *)(this + 0x547) = 5;
  *(undefined4 *)(this + 0x53f) = 2;
  *(uint *)(this + 0x44f) = *(uint *)(this + 0x44f) | 0x18000;
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
  *(sncCHANNEL **)(this + 0x553) = this_00;
  if (this_00 == (sncCHANNEL *)0x0) {
    return 0;
  }
  gsSND_SYSTEM::AddChannel(gsSysSound,this_00,(entIACTIVE_OBJ *)this,(objOBJ *)0x0);
  poVar3 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_AttackFocus);
  *(objOBJ **)(this + 0x55b) = poVar3;
  if (poVar3 == (objOBJ *)0x0) {
    return 0;
  }
  poVar3 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_ROOT);
  *(objOBJ **)(this + 0x163) = poVar3;
  if (poVar3 == (objOBJ *)0x0) {
    return 0;
  }
  *(objOBJ **)(this + 0x527) = poVar3;
  *(uint *)poVar3 = *(uint *)poVar3 | 0x200;
  if (((byte)this[0xb4] & 1) != 0) {
    *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) | 0x200;
  }
  return 1;
}




/* from: ai_glad_generic.cpp
   addr: 00440E00 */

void __thiscall aiGLAD_GENERIC::ParseNameClass(aiGLAD_GENERIC *this)

{
  char *pcVar1;
  int iVar2;
  
  pcVar1 = s_;
  if (*(char **)(*(int *)(this + 0xbc) + 0x1c) != (char *)0x0) {
    pcVar1 = *(char **)(*(int *)(this + 0xbc) + 0x1c);
  }
  aiNPC_WR::ParseNameClass((aiNPC_WR *)this);
  pcVar1 = strstr(pcVar1,s__fat);
  if (pcVar1 != (char *)0x0) {
    *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) | 0x40;
  }
  if (((byte)this[0x53f] & 0x40) == 0) {
    *(undefined4 *)(this + 0x153) = 0x40e5ae15;
    *(uint *)(this + 0x547) = (-(uint)((*(uint *)(this + 0xb4) & 1) != 0) & 2) + 2;
  }
  else {
    *(undefined4 *)(this + 0xd0) = 0x41f00000;
    *(undefined4 *)(this + 0x153) = 0x40e80000;
    *(undefined4 *)(this + 0x52b) = 0x42dc0000;
    *(uint *)(this + 0x547) = ((*(uint *)(this + 0xb4) & 1) != 0) + 3;
  }
  *(undefined4 *)(this + 0xcc) = *(undefined4 *)(this + 0xd0);
  iVar2 = (**(code **)(*(int *)this + 200))();
  animSYSTEM_INST::AdvanceAnimation
            (*(animSYSTEM_INST **)(*(animINST **)(this + 0xbc) + 0xe8),*(animINST **)(this + 0xbc),
             iVar2,0.0);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_glad_generic.cpp
   addr: 00440ED0 */

void __thiscall aiGLAD_GENERIC::FillAttackFlag(aiGLAD_GENERIC *this)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  uint uVar5;
  
  iVar1 = *(int *)(*(int *)(this + 0xbc) + 0xe0);
  if ((((iVar1 != 3) && (iVar1 != 10)) && (iVar1 != 0x11)) && (iVar1 != 0x19)) {
    uVar2 = *(uint *)(this + 1099);
    uVar5 = uVar2 & 0xffffefff;
    *(uint *)(this + 1099) = uVar5;
    uVar3 = *(uint *)(this + 0x53f);
    if ((uVar3 & 2) != 0) {
      if ((uVar2 & 0x40000) == 0) {
        if ((0 < *(int *)(this + 0x547)) &&
           (*(float *)(this + 0x197) + *(float *)(this + 0x197) < *(float *)(this + 0x3cf))) {
          if (((((uVar2 & 0x10000000) != 0) && ((uVar2 & 0x80000008) == 0)) &&
              ((*(uint *)(this + 0x51b) & 0x200) == 0)) &&
             (((*(float *)(this + 0x543) <= _DAT_005d2fc4 &&
               (*(float *)(this + 0x557) <= *(float *)(this + 0x3cf))) &&
              (*(float *)(this + 0x3d7) <= *(float *)(this + 0x187))))) {
            *(uint *)(this + 1099) = uVar5 | 0x1000;
          }
          *(uint *)(this + 0x53f) = uVar3 & 0xfffffffb;
          return;
        }
        if ((uVar2 & 1) == 0) {
          fVar4 = *(float *)(this + 0x197) * ___real_40800000;
          *(uint *)(this + 0x53f) = uVar3 & 0xfffffffb;
          if ((fVar4 < *(float *)(this + 0x3cf)) && (*(float *)(this + 0x543) < _DAT_005d2fc4)) {
            *(uint *)(this + 0x547) = (uint)(byte)(((byte)uVar3 & 0x40 | 0x80) >> 6);
          }
        }
        else if (*(float *)(this + 0x3d7) <= *(float *)(this + 0x187)) {
          *(uint *)(this + 0x53f) = uVar3 | 4;
          return;
        }
      }
      else if ((((uVar2 & 0x10000000) != 0) && ((uVar2 & 0x80000008) == 0)) &&
              (((*(uint *)(this + 0x51b) & 0x200) == 0 &&
               (*(float *)(this + 0x3d7) <= *(float *)(this + 0x187))))) {
        *(undefined4 *)(this + 0x547) = 1;
        *(uint *)(this + 1099) = uVar5 | 0x1000;
        return;
      }
    }
  }
  return;
}




/* from: ai_glad_generic.cpp
   addr: 00441090 */

void __thiscall aiGLAD_GENERIC::Think(aiGLAD_GENERIC *this)

{
  int iVar1;
  
  aiNPC_WR::Think((aiNPC_WR *)this);
  FillAttackFlag(this);
  iVar1 = *(int *)(*(int *)(this + 0xbc) + 0xe0);
  if ((((iVar1 != 1) && (iVar1 != 8)) && (iVar1 != 0xf)) && (iVar1 != 0x17)) {
    *(uint *)(this + 1099) = *(uint *)(this + 1099) | 0x200;
  }
  if (((((iVar1 != 3) && (iVar1 != 10)) && ((iVar1 != 0x11 && ((iVar1 != 0x19 && (iVar1 != 2))))))
      && (iVar1 != 9)) && ((iVar1 != 0x10 && (iVar1 != 0x18)))) {
    *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) | 2;
  }
  return;
}




/* from: ai_glad_generic.cpp
   addr: 00441120 */

int __thiscall aiGLAD_GENERIC::ProcessCDT_FIREABLE(aiGLAD_GENERIC *this,dmgDAMAGE *param_1)

{
  uint uVar1;
  
  if (((byte)this[0x88] & 4) == 0) {
    return 1;
  }
  if (*(int *)(param_1 + 4) == 0) {
    switch(*(undefined4 *)(param_1 + 0x1c)) {
    case 0:
    case 1:
    case 3:
    case 4:
    case 5:
    case 7:
      if ((*(uint *)(this + 0x53f) & 8) != 0) goto switchD_00441147_default;
      uVar1 = *(uint *)(this + 0x53f) | 0x10;
      break;
    case 2:
    case 6:
    case 8:
    case 9:
    case 10:
      uVar1 = *(uint *)(this + 0x53f) | 0x20;
      break;
    default:
      goto switchD_00441147_default;
    }
    *(uint *)(this + 0x53f) = uVar1;
  }
switchD_00441147_default:
  aiNPC_WR::ProcessCDT_FIREABLE((aiNPC_WR *)this,param_1);
  if ((*(uint *)(this + 1099) & 0x200000) != 0) {
    *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) | 0x20;
  }
  return 1;
}




/* from: ai_glad_generic.cpp
   addr: 004411B0 */

int __thiscall aiGLAD_GENERIC::StartPassivePhysics(aiGLAD_GENERIC *this,dmgDAMAGE *param_1)

{
  int iVar1;
  
  if ((param_1 != (dmgDAMAGE *)0x0) && (*(int *)(param_1 + 4) == 0)) {
    iVar1 = aiNPC_WR::StartPassivePhysics((aiNPC_WR *)this,param_1);
    return iVar1;
  }
  return 0;
}




/* from: ai_glad_generic.cpp
   addr: 004411D0 */

void __thiscall aiGLAD_GENERIC::PlaySounds(aiGLAD_GENERIC *this)

{
  if (((byte)this[0xf8] & 2) != 0) {
    (**(code **)(**(int **)(this + 0x553) + 4))(&DAT_0060ba08,0);
  }
  if (((byte)this[0xf8] & 4) != 0) {
    (**(code **)(**(int **)(this + 0x553) + 4))(&DAT_0060ba70,0);
  }
  if (((byte)this[0xf8] & 8) != 0) {
    (**(code **)(**(int **)(this + 0x553) + 4))(&DAT_0060bad8,0);
  }
  if (((byte)this[0xf8] & 0x20) != 0) {
    (**(code **)(**(int **)(this + 0x553) + 4))(&DAT_0060bba8,0);
  }
  if (((byte)this[0xf8] & 0x40) != 0) {
    (**(code **)(**(int **)(this + 0x553) + 4))(&DAT_0060bc10,0);
  }
  if ((char)this[0xf8] < '\0') {
    (**(code **)(**(int **)(this + 0x553) + 4))(&DAT_0060bc78,0);
  }
  if ((*(uint *)(this + 0xf8) & 0x100) != 0) {
    (**(code **)(**(int **)(this + 0x553) + 4))(&DAT_0060bce0,0);
  }
  if (-1 < (char)this[0x53f]) {
    if (((byte)this[0xf8] & 0x10) != 0) {
      (**(code **)(**(int **)(this + 0x553) + 4))(&DAT_0060bb40,0);
      *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) | 0x80;
    }
    if (((byte)this[0xf8] & 1) != 0) {
      (**(code **)(**(int **)(this + 0x553) + 4))(&_aiGladSndList,0);
      *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) | 0x80;
    }
  }
  if ((*(uint *)(this + 0xf8) & 0x200) != 0) {
    (**(code **)(**(int **)(this + 0x553) + 4))(&DAT_0060bd48,0);
  }
  aiNPC::PlaySounds((aiNPC *)this);
  return;
}




/* from: ai_glad_generic.cpp
   addr: 00441320 */

void __thiscall aiGLAD_GENERIC::FillSoundFlags(aiGLAD_GENERIC *this)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(this + 0xbc) + 0xe0);
  switch(iVar1) {
  case 0:
  case 7:
  case 0xe:
  case 0x16:
    *(undefined4 *)(this + 0xf8) = 0;
    break;
  case 1:
  case 0xf:
    *(undefined4 *)(this + 0xf8) = 0x200;
    break;
  case 5:
  case 0xc:
  case 0x13:
  case 0x1b:
    if (-1 < (char)this[0x53f]) {
      *(undefined4 *)(this + 0xf8) = 1;
    }
    break;
  case 6:
  case 0xd:
  case 0x14:
  case 0x1c:
    if (-1 < (char)this[0x53f]) {
      *(undefined4 *)(this + 0xf8) = 0x10;
    }
  }
  if (((((iVar1 != 0x14) && (iVar1 != 6)) && (iVar1 != 0xd)) && ((iVar1 != 0x1c && (iVar1 != 0x13)))
      ) && ((iVar1 != 5 && ((iVar1 != 0xc && (iVar1 != 0x1b)))))) {
    *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) & 0xffffff7f;
  }
  return;
}




/* from: ai_glad_generic.cpp
   addr: 004413F0 */

void __thiscall aiGLAD_GENERIC::ProcessActionFrame(aiGLAD_GENERIC *this)

{
  int iVar1;
  
  iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),1,0);
  if ((((iVar1 != 0) ||
       (iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),8,0), iVar1 != 0)) ||
      (iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),0xf,0), iVar1 != 0)) ||
     (iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),0x17,0), iVar1 != 0)) {
    *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 0x200;
  }
  iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),3,0);
  if (((iVar1 != 0) ||
      (iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),10,0), iVar1 != 0)) ||
     ((iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),3,1), iVar1 != 0 ||
      (iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),10,1), iVar1 != 0)))) {
    *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 0x100;
  }
  iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),3,2);
  if ((iVar1 != 0) ||
     (iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),10,2), iVar1 != 0)) {
    *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 0x80;
  }
  iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),3,3);
  if ((iVar1 != 0) ||
     (iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),10,3), iVar1 != 0)) {
    *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 0x40;
  }
  iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),4,0);
  if ((((iVar1 != 0) ||
       (iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),0xb,0), iVar1 != 0)) ||
      (iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),4,1), iVar1 != 0)) ||
     (iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),0xb,1), iVar1 != 0)) {
    *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 0x20;
  }
  iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),0x11,3);
  if ((iVar1 != 0) ||
     (iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),0x19,3), iVar1 != 0)) {
    *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 2;
  }
  iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),0x12,0);
  if ((((iVar1 != 0) ||
       (iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),0x15,0), iVar1 != 0)) ||
      ((iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),0x1a,0), iVar1 != 0 ||
       (((iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),0x1d,0), iVar1 != 0 ||
         (iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),0x12,1), iVar1 != 0)) ||
        (iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),0x15,1), iVar1 != 0)))))) ||
     ((iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),0x1a,1), iVar1 != 0 ||
      (iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),0x1d,1), iVar1 != 0)))) {
    *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 4;
  }
  iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),0x11,0);
  if (((iVar1 == 0) &&
      (iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),0x19,0), iVar1 == 0)) &&
     ((iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),0x11,1), iVar1 == 0 &&
      (iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),0x19,1), iVar1 == 0)))) {
    return;
  }
  *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 8;
  return;
}




/* from: ai_glad_generic.cpp
   addr: 004416B0 */

int __thiscall aiGLAD_GENERIC::IsAnimSeqGoodForFallback(aiGLAD_GENERIC *this)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)this + 200))();
  if ((((iVar1 != 6) && (iVar1 != 0xd)) && (iVar1 != 0x14)) && (iVar1 != 0x1c)) {
    return 1;
  }
  return 0;
}

