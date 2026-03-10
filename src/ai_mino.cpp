#include "entity.h"
#include "ai_npc_wr.h"

/* from: ai_mino.cpp
   addr: 00447d20 */

void InitMinoSounds(void)

{
  sncSOUND_DESCR::sncSOUND_DESCR((sncSOUND_DESCR *)&_aiMinoSndList, mino_appear, 0, 0x40000, 0.0, 0);
  _DAT_0060c2c0 = 0;
  _DAT_0060c2c4 = 0;
  _aiMinoSndList = (sncSOUND_DESCR_3D *)&sncSOUND_DESCR_3D::`vftable';
  sncSOUND_DESCR::sncSOUND_DESCR((sncSOUND_DESCR *)&DAT_0060c2c8, mino_regeneration, 0, 0, 0.0, 0);
  _DAT_0060c328 = 0;
  _DAT_0060c32c = 0;
  _DAT_0060c2c8 = &sncSOUND_DESCR_3D::`vftable';
  sncSOUND_DESCR::sncSOUND_DESCR((sncSOUND_DESCR *)&DAT_0060c330, mino_roar, 0, 0x10400, 0.0, 6000);
  _DAT_0060c390 = 0;
  _DAT_0060c394 = 0;
  _DAT_0060c330 = &sncSOUND_DESCR_3D::`vftable';
  sncSOUND_DESCR::sncSOUND_DESCR((sncSOUND_DESCR *)&DAT_0060c398, mino_death_1, 0, 0, 0.0, 0);
  _DAT_0060c3f8 = 0;
  _DAT_0060c3fc = 0;
  _DAT_0060c398 = &sncSOUND_DESCR_3D::`vftable';
  sncSOUND_DESCR::sncSOUND_DESCR((sncSOUND_DESCR *)&DAT_0060c400, mino_death_2, 0, 0,0.0, 0);
  _DAT_0060c460 = 0;
  _DAT_0060c464 = 0;
  _DAT_0060c400 = &sncSOUND_DESCR_3D::`vftable';
  sncSOUND_DESCR::sncSOUND_DESCR((sncSOUND_DESCR *)&DAT_0060c468, mino_hit, 0, 0x40000, 0.0, 0);
  _DAT_0060c4c8 = 0;
  _DAT_0060c4cc = 0;
  _DAT_0060c468 = &sncSOUND_DESCR_3D::`vftable';
  sncSOUND_DESCR::sncSOUND_DESCR((sncSOUND_DESCR *)&DAT_0060c4d0, char_explos, 0, 0x20000, 0.0, 0);
  _DAT_0060c530 = 0;
  _DAT_0060c534 = 0;
  _DAT_0060c4d0 = &sncSOUND_DESCR_3D::`vftable';
  sncSOUND_DESCR::sncSOUND_DESCR((sncSOUND_DESCR *)&DAT_0060c538, mino_ax_appear, 0, 0x40000, -10.0 , 0);
  _DAT_0060c598 = 0;
  _DAT_0060c59c = 0;
  _DAT_0060c538 = &sncSOUND_DESCR_3D::`vftable';
  sncSOUND_DESCR::sncSOUND_DESCR((sncSOUND_DESCR *)&DAT_0060c5a0, mino_ax_slash, 0, 0x40000, 0.0, 0);
  _DAT_0060c600 = 0;
  _DAT_0060c604 = 0;
  _DAT_0060c5a0 = &sncSOUND_DESCR_3D::`vftable';
  sncSOUND_DESCR_3D::sncSOUND_DESCR_3D
            ((sncSOUND_DESCR_3D *)&DAT_0060c608, mino_statue_appear, 0, 0x40000, 0.0, 0, 0.0, 0.0);
  sncSOUND_DESCR_3D::sncSOUND_DESCR_3D
            ((sncSOUND_DESCR_3D *)&DAT_0060c670, mino_fall, 0, 0x40001, 0.0, 0, 0.0, 0.0);
  return;
}

/* from: ai_mino.cpp
   addr: 00447F40 */

int __fastcall aiMinoInit(void)

{
  int result;
  
  result = entRegisterClass(ai_mino_atrium, $NPC, 0x32, aiMINO_ATRIUM::Create, ai_mino, 0); 
  if (result == 0) {
    return 0;
  }
  result = entRegisterClass(ai_mino, $NPC, 0x32, aiMINO::Create, ai_mino, 0);
  if (result == 0) {
    return 0;
  }
  result = minoAxInit();
  if (result == 0) {
    return 0;
  }
  result = minoSFXInit();
  if (result == 0) {
    return 0;
  }
  result = sncLinkSndListData(0xb,(sncSOUND_DESCR_3D *)&_aiMinoSndList);
  return (uint)(result != 0);
}

/* from: ai_mino.cpp
   addr: 00447FB0 */

int __thiscall aiMINO::SetupAniSystem(aiMINO *this)

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
  *(undefined4 *)(paVar1 + 0x8c) = 0xf;
  puVar2 = (undefined4 *)operator_new(0x7fc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = 0xf;
    puVar2 = puVar2 + 1;
    iVar6 = 0xf;
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
  _entAnimSetSeqName(paVar1,0,s_MINO_SEQ_UNUSED);
  _entAnimSetSeqName(paVar1,1,s_MINO_SEQ_APPEAR);
  _entAnimSetSeqName(paVar1,2,s_MINO_SEQ_RUN);
  _entAnimSetSeqName(paVar1,3,s_MINO_SEQ_THROW_AX);
  _entAnimSetSeqName(paVar1,4,s_MINO_SEQ_SLASH);
  _entAnimSetSeqName(paVar1,5,s_MINO_SEQ_SLASH_2);
  _entAnimSetSeqName(paVar1,6,s_MINO_SEQ_SLASH_3);
  _entAnimSetSeqName(paVar1,7,s_MINO_SEQ_SLASH_4);
  _entAnimSetSeqName(paVar1,8,s_MINO_SEQ_DEATH);
  _entAnimSetSeqName(paVar1,9,s_MINO_SEQ_DEATH_FALLBACK);
  _entAnimSetSeqName(paVar1,10,s_MINO_SEQ_STATUE2LIFE);
  _entAnimSetSeqName(paVar1,0xb,s_MINO_SEQ_REGENERATION);
  _entAnimSetSeqName(paVar1,0xc,s_MINO_SEQ_HIT_FALLBACK);
  _entAnimSetSeqName(paVar1,0xd,s_MINO_SEQ_HIT_FALLBACK_2);
  _entAnimSetSeqName(paVar1,0xe,s_MINO_SEQ_IDLE);
  entAnimAssignTplSeq(paVar1,local_4,local_8);
  *(undefined4 *)(*(int *)(paVar1 + 0x90) + 0x40) = 0;
  *(undefined4 *)(*(int *)(paVar1 + 0x90) + 0x44) = 0x3f800000;
  *(undefined4 *)(*(int *)(paVar1 + 0x90) + 0x50) = 0x43fa0000;
  *(undefined4 *)(*(int *)(paVar1 + 0x90) + 0x80) = 0;
  this_00 = (animSYSTEM *)operator_new(0x14);
  if ((this_00 != (animSYSTEM *)0x0) &&
     (piVar3 = (int *)animSYSTEM::animSYSTEM(this_00,0xf,0), piVar3 != (int *)0x0)) {
    *(int **)(paVar1 + 0xa4) = piVar3;
    (**(code **)(*piVar3 + 0xc))(0,0,1,0xffffffff);
    (**(code **)(*piVar3 + 0x14))(2);
    (**(code **)(*piVar3 + 0xc))(0xe,0,1,0xffffffff);
    (**(code **)(*piVar3 + 0x14))(0xe);
    (**(code **)(*piVar3 + 0xc))(10,1,1,2);
    (**(code **)(*piVar3 + 0xc))(0xb,1,1,2);
    (**(code **)(*piVar3 + 0xc))(1,1,1,2);
    (**(code **)(*piVar3 + 4))(1,0xe,1,0xe,1);
    (**(code **)(*piVar3 + 4))(2,3,0,3,1);
    (**(code **)(*piVar3 + 4))(3,2,1,2,1);
    (**(code **)(*piVar3 + 4))(2,4,0,4,1);
    (**(code **)(*piVar3 + 4))(2,5,0,5,1);
    (**(code **)(*piVar3 + 4))(2,6,0,6,1);
    (**(code **)(*piVar3 + 4))(2,7,0,7,1);
    (**(code **)(*piVar3 + 4))(4,2,0,2,1);
    (**(code **)(*piVar3 + 4))(5,2,0,2,1);
    (**(code **)(*piVar3 + 4))(6,2,0,2,1);
    (**(code **)(*piVar3 + 4))(7,2,0,2,1);
    (**(code **)(*piVar3 + 4))(4,3,0,3,1);
    (**(code **)(*piVar3 + 4))(5,3,0,3,1);
    (**(code **)(*piVar3 + 4))(6,3,0,3,1);
    (**(code **)(*piVar3 + 4))(7,3,0,3,1);
    (**(code **)(*piVar3 + 4))(3,4,1,4,1);
    (**(code **)(*piVar3 + 4))(3,5,1,5,1);
    (**(code **)(*piVar3 + 4))(3,6,1,6,1);
    (**(code **)(*piVar3 + 4))(3,7,1,7,1);
    (**(code **)(*piVar3 + 4))(2,0xc,0,0xc,1);
    (**(code **)(*piVar3 + 4))(2,0xd,0,0xd,1);
    (**(code **)(*piVar3 + 4))(4,0xc,0,0xc,1);
    (**(code **)(*piVar3 + 4))(4,0xd,0,0xd,1);
    (**(code **)(*piVar3 + 4))(5,0xc,0,0xc,1);
    (**(code **)(*piVar3 + 4))(5,0xd,0,0xd,1);
    (**(code **)(*piVar3 + 4))(6,0xc,0,0xc,1);
    (**(code **)(*piVar3 + 4))(6,0xd,0,0xd,1);
    (**(code **)(*piVar3 + 4))(7,0xc,0,0xc,1);
    (**(code **)(*piVar3 + 4))(7,0xd,0,0xd,1);
    (**(code **)(*piVar3 + 0xc))(0xc,0,1,0xffffffff);
    (**(code **)(*piVar3 + 0xc))(0xd,0,1,0xffffffff);
    (**(code **)(*piVar3 + 0x10))(8,0,1,8);
    (**(code **)(*piVar3 + 0x10))(9,0,1,9);
    (**(code **)(*piVar3 + 4))(8,8,2,8,1);
    (**(code **)(*piVar3 + 4))(9,9,2,9,1);
    (**(code **)(*piVar3 + 4))(0xc,0xd,2,0xc,1);
    (**(code **)(*piVar3 + 4))(0xd,0xc,2,0xd,1);
    if (local_4 != (animSEQ *)0x0) {
      operator_delete(local_4 + -4);
    }
    *(uint *)(*(int *)(paVar1 + 0x90) + 0x54c) = *(uint *)(*(int *)(paVar1 + 0x90) + 0x54c) | 1;
    return 1;
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_mino.cpp
   addr: 004484A0 */

int __thiscall aiMINO::ProcessINIT(aiMINO *this,void *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  objOBJ *poVar3;
  int iVar4;
  sncCHANNEL *this_00;
  undefined4 uVar5;
  undefined2 local_18;
  undefined1 *local_16;
  undefined4 local_12;
  undefined1 local_c [4];
  undefined4 local_8;
  undefined4 local_4;
  
  *(undefined4 *)(this + 0x15b) = 0x42b40000;
  *(undefined4 *)(this + 0x52b) = 0x42b40000;
  *(undefined4 *)(this + 0x4a7) = 0x42b40000;
  *(undefined4 *)(this + 0x16b) = 0x3f333333;
  *(undefined4 *)(this + 0x16f) = 0x3fe00000;
  *(undefined4 *)(this + 0x173) = 0x3f8ccccd;
  *(undefined4 *)(this + 0x153) = 0x41300000;
  *(undefined4 *)(this + 0x157) = 0x40f66666;
  *(undefined4 *)(this + 0x15f) = 0x42340000;
  *(undefined4 *)(this + 0x187) = 0x42340000;
  *(undefined4 *)(this + 0x4ab) = 0x41a00000;
  *(undefined4 *)(this + 0x197) = 0x40000000;
  *(uint *)(this + 0x44f) = *(uint *)(this + 0x44f) | 0x18000;
  *(undefined4 *)(this + 0x547) = 0x3f800000;
  *(undefined4 *)(this + 0x56f) = 0;
  *(undefined4 *)(this + 399) = 0x41200000;
  poVar3 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_CENTRE);
  *(objOBJ **)(this + 0x527) = poVar3;
  if (poVar3 == (objOBJ *)0x0) {
    return 0;
  }
  poVar3 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_ROOT);
  *(objOBJ **)(this + 0x163) = poVar3;
  if (poVar3 == (objOBJ *)0x0) {
    return 0;
  }
  if ((((((byte)this[0xb4] & 1) != 0) && (param_1 != (void *)0x0)) &&
      (*(int *)((int)param_1 + 4) == 0x41575349)) && (*(int *)((int)param_1 + 0x10) != 0)) {
    *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) | 0x80;
  }
  iVar4 = aiNPC_WR::ProcessINIT((aiNPC_WR *)this,param_1);
  if (iVar4 == 0) {
    return 0;
  }
  *(undefined4 *)(this + 0x543) = 0;
  uVar5 = 0x40e00000;
  if (-1 < (char)*(uint *)(this + 0x53f)) {
    uVar5 = 0x41700000;
  }
  *(undefined4 *)(this + 0xd0) = uVar5;
  *(undefined4 *)(this + 0xcc) = uVar5;
  if ((*(uint *)(this + 0x53f) & 0x20) != 0) {
    *(uint *)(this + 1099) = *(uint *)(this + 1099) & 0xfeffffff;
  }
  this_00 = (sncCHANNEL *)operator_new(0xbc);
  uVar1 = DAT_005d39a0;
  uVar5 = DAT_005d399c;
  if (this_00 == (sncCHANNEL *)0x0) {
    this_00 = (sncCHANNEL *)0x0;
  }
  else {
    sncCHANNEL::sncCHANNEL(this_00);
    *(undefined4 *)(this_00 + 0x74) = _m3dVZero;
    *(undefined4 *)(this_00 + 0x78) = DAT_00963740;
    uVar2 = DAT_00963744;
    *(undefined4 *)(this_00 + 0x80) = 0;
    *(undefined4 *)(this_00 + 0x7c) = uVar2;
    *(undefined4 *)(this_00 + 0x84) = uVar5;
    *(undefined ***)this_00 = &sncCHANNEL_3D::_vftable_;
    *(undefined4 *)(this_00 + 0x88) = uVar1;
    *(undefined4 *)(this_00 + 0x8c) = 0x43b40000;
    *(undefined4 *)(this_00 + 0x90) = 0x43b40000;
    *(undefined4 *)(this_00 + 0x94) = 0;
    *(undefined4 *)(this_00 + 0x98) = _m3dVZero;
    *(undefined4 *)(this_00 + 0x9c) = DAT_00963740;
    *(undefined4 *)(this_00 + 0xa0) = DAT_00963744;
    *(undefined4 *)(this_00 + 0xa4) = _m3dVZero;
    *(undefined4 *)(this_00 + 0xa8) = DAT_00963740;
    *(undefined4 *)(this_00 + 0xac) = DAT_00963744;
    *(undefined4 *)(this_00 + 0xb0) = _m3dVUnitZ;
    *(undefined4 *)(this_00 + 0xb4) = DAT_005f99a0;
    uVar5 = DAT_005f99a4;
    *(undefined ***)this_00 = &sncCHANNEL_SPH::_vftable_;
    *(undefined4 *)(this_00 + 0xb8) = uVar5;
  }
  *(sncCHANNEL **)(this + 0x54b) = this_00;
  if (this_00 == (sncCHANNEL *)0x0) {
    return 0;
  }
  gsSND_SYSTEM::AddChannel(gsSysSound,this_00,(entIACTIVE_OBJ *)this,(objOBJ *)0x0);
  local_18 = 0;
  local_16 = (undefined1 *)0x0;
  local_12 = 0xbf800000;
  poVar3 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_SEKIRA);
  if (poVar3 == (objOBJ *)0x0) {
    return 0;
  }
  local_16 = local_c;
  local_12 = 0xbf800000;
  local_18 = 1;
  local_8 = 10;
  local_4 = 0;
  (**(code **)(*(int *)rendDrv + 0x78))(poVar3,&local_18);
  return 1;
}




/* from: ai_mino.cpp
   addr: 004487A0 */

void __thiscall aiMINO::ParseNameClass(aiMINO *this)

{
  bool bVar1;
  bool bVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  uint uVar7;
  float extraout_ECX;
  float extraout_ECX_00;
  float extraout_ECX_01;
  float extraout_ECX_02;
  float extraout_EDX;
  float extraout_EDX_00;
  float extraout_EDX_01;
  float fVar8;
  float extraout_EDX_02;
  float fVar9;
  int local_4;
  
  bVar2 = false;
  pcVar6 = s_;
  if (*(char **)(*(int *)(this + 0xbc) + 0x1c) != (char *)0x0) {
    pcVar6 = *(char **)(*(int *)(this + 0xbc) + 0x1c);
  }
  local_4 = 0;
  aiNPC_WR::ParseNameClass((aiNPC_WR *)this);
  pcVar3 = strstr(pcVar6,s__gen2);
  if (pcVar3 == (char *)0x0) {
    iVar4 = aiNPC::GetInt((aiNPC *)this,s_AI_MINO,s_isRed,&local_4);
    if ((iVar4 != 0) && (local_4 != 0)) goto LAB_004487fa;
  }
  else {
LAB_004487fa:
    *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) | 0x8000;
  }
  pcVar3 = strstr(pcVar6,s__atrium);
  if (pcVar3 != (char *)0x0) {
    m3dRandRange(extraout_ECX,extraout_EDX);
    uVar5 = ftol();
    *(undefined4 *)(this + 0x56f) = uVar5;
  }
  if (((*(uint *)(this + 0xb4) & 1) == 0) || (((byte)this[0x53f] & 0x80) == 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if ((((*(uint *)(this + 0xb4) & 1) != 0) && (((byte)this[0x53f] & 0x80) == 0)) ||
     ((char)((uint)*(undefined4 *)(this + 0x53f) >> 8) < '\0')) {
    bVar2 = true;
  }
  iVar4 = animINST::GetBool(*(animINST **)(this + 0xbc),s_AI_PROP,s_isStatue,&local_4);
  if ((iVar4 == 0) || (fVar9 = extraout_ECX_00, fVar8 = extraout_EDX_00, local_4 == 0)) {
    pcVar6 = strstr(pcVar6,s__statue);
    fVar9 = extraout_ECX_01;
    fVar8 = extraout_EDX_01;
    if (pcVar6 == (char *)0x0) goto LAB_004488ab;
  }
  pcVar6 = (char *)0x1;
LAB_004488ab:
  if (bVar1) {
    *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) | 0x100;
    fVar9 = m3dRandRange(fVar9,fVar8);
    *(float *)(this + 0x547) = fVar9;
    animSYSTEM_INST::AdvanceAnimation
              (*(animSYSTEM_INST **)(*(animINST **)(this + 0xbc) + 0xe8),*(animINST **)(this + 0xbc)
               ,0xb,0.0);
    (**(code **)(*(int *)this + 0x16c))(0);
    *(undefined4 *)(this + 0xd0) = 0x40e00000;
    *(undefined4 *)(this + 0xcc) = 0x40e00000;
    m3dRandRange(extraout_ECX_02,extraout_EDX_02);
    uVar5 = ftol();
    *(undefined4 *)(this + 0x56f) = uVar5;
    *(undefined4 *)(this + 0x17f) = 0x43b40000;
    *(undefined4 *)(this + 0x18b) = 0x43960000;
  }
  else if (bVar2) {
    uVar7 = *(uint *)(this + 0x53f);
    *(uint *)(this + 0x53f) = uVar7 | 0x10;
    if (-1 < (char)(uVar7 >> 8)) {
      *(uint *)(this + 0x53f) = uVar7 | 0x210;
    }
    (**(code **)(*(int *)this + 0x16c))(0);
  }
  else {
    if (pcVar6 == (char *)0x0) {
      uVar7 = *(uint *)(this + 0x53f) | 0x200;
    }
    else {
      *(undefined4 *)(this + 0x4a7) = 0x41400000;
      *(undefined4 *)(this + 0x4ab) = 0x41400000;
      uVar7 = *(uint *)(this + 0x53f) | 0x220;
    }
    *(uint *)(this + 0x53f) = uVar7;
  }
  iVar4 = aiNPC::GetBool((aiNPC *)this,s_AI_MINO,s_isRegen,&local_4);
  if ((iVar4 != 0) && (local_4 == 0)) {
    *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) & 0xfffffdff;
  }
  iVar4 = (**(code **)(*(int *)this + 200))();
  animSYSTEM_INST::AdvanceAnimation
            (*(animSYSTEM_INST **)(*(animINST **)(this + 0xbc) + 0xe8),*(animINST **)(this + 0xbc),
             iVar4,0.0);
  if ((char)((uint)*(undefined4 *)(this + 0x53f) >> 8) < '\0') {
    *(undefined4 *)(this + 0x52b) = 0x42a00000;
  }
  return;
}




/* from: ai_mino.cpp
   addr: 00448A30 */

void __thiscall aiMINO::ProcessFRAME(aiMINO *this)

{
  int iVar1;
  
  aiNPC_WR::ProcessFRAME((aiNPC_WR *)this);
  if ((((*(uint *)(this + 1099) & 0x800000) != 0) && (*(int *)(this + 0x54f) != 0)) &&
     (iVar1 = *(int *)(*(int *)(this + 0x54f) + 0xbc), iVar1 != 0)) {
    *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) | 1;
    *(undefined4 *)(this + 0x55b) = 0;
  }
  return;
}




/* from: ai_mino.cpp
   addr: 00448A70 */

void __thiscall aiMINO::ProcessDESTROY_ENT(aiMINO *this,entENTITY *param_1)

{
  aiNPC::ProcessDESTROY_ENT((aiNPC *)this,param_1);
  if (param_1 == *(entENTITY **)(this + 0x54f)) {
    *(undefined4 *)(this + 0x54f) = 0;
  }
  return;
}




/* from: ai_mino.cpp
   addr: 00448AA0 */

int __thiscall aiMINO::ProcessCDT(aiMINO *this,cdtINFO *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  m3dV local_c [12];
  
  if (((((byte)this[0x88] & 1) == 0) && (uVar1 = *(uint *)(this + 0x53f), (uVar1 & 0x400) != 0)) &&
     ((uVar1 & 0x4000) == 0)) {
    *(uint *)(this + 0x53f) = uVar1 | 0x4000;
    aiNPC::GetPosRooted((aiNPC *)this,local_c);
    iVar2 = *(int *)(this + 0x43f);
    local_18 = *(undefined4 *)(iVar2 + 0x48);
    local_14 = *(undefined4 *)(iVar2 + 0x4c);
    local_10 = *(undefined4 *)(iVar2 + 0x50);
    aiNPC_WR::StartBlood((aiNPC_WR *)this,4,1,local_c,(m3dV *)0x0,(m3dV *)&local_18,local_c);
  }
  return 0;
}




/* from: ai_mino.cpp
   addr: 00448B20 */

int __thiscall aiMINO::IsAnimSeqGoodForFallback(aiMINO *this)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(this + 0xbc) + 0xe0);
  if ((((iVar1 != 2) && (iVar1 != 4)) && (iVar1 != 5)) && ((iVar1 != 6 && (iVar1 != 7)))) {
    return 0;
  }
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_mino.cpp
   addr: 00448B50 */

void __thiscall
aiMINO::AdjustSpeedsOnFallbackStart(aiMINO *this,dmgWEAPON *param_1,float *param_2,float *param_3)

{
  *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) | 0x8000;
  if (*(int *)(*(int *)(this + 0xbc) + 0xe0) == 2) {
    *param_2 = *param_2 * ___real_3f400000;
  }
  return;
}




/* from: ai_mino.cpp
   addr: 00448B80 */

int __thiscall aiMINO::IsArmoredObject(aiMINO *this,char *param_1)

{
  int iVar1;
  
  iVar1 = strnicmp(param_1,s_SEKIRA,6);
  return (uint)(iVar1 == 0);
}




/* from: ai_mino.cpp
   addr: 00448BA0 */

int __thiscall aiMINO::ProcessCDT_FIREABLE(aiMINO *this,dmgDAMAGE *param_1)

{
  aiNPC_WR::ProcessCDT_FIREABLE((aiNPC_WR *)this,param_1);
  if ((*(uint *)(this + 1099) & 0x200000) == 0) {
    *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 0x20;
  }
  return 1;
}




/* from: ai_mino.cpp
   addr: 00448BD0 */

int __thiscall aiMINO::ProcessASK_KEEP_LEVEL_RELOAD(aiMINO *this)

{
  uint *puVar1;
  int iVar2;
  
  if (*(int *)(this + 0x56b) != 0) {
    puVar1 = (uint *)(*(int *)(this + 0x56b) + 0xb4);
    *puVar1 = *puVar1 | 8;
  }
  if (*(int *)(this + 0x54f) != 0) {
    puVar1 = (uint *)(*(int *)(this + 0x54f) + 0xb4);
    *puVar1 = *puVar1 | 8;
  }
  iVar2 = gsMP_CLIENT::Init((gsMP_CLIENT *)this);
  return iVar2;
}




/* from: ai_mino.cpp
   addr: 00448C00 */

void __thiscall aiMINO::Explode(aiMINO *this,dmgDAMAGE *param_1,int param_2,int param_3)

{
  m3dV *pmVar1;
  int iVar2;
  m3dV local_c [12];
  
  pmVar1 = (m3dV *)0x0;
  if (param_1 != (dmgDAMAGE *)0x0) {
    iVar2 = *(int *)(param_1 + 4);
    if (iVar2 == 0) {
      if (*(int *)(param_1 + 0x1c) == 7) {
        return;
      }
    }
    else if ((iVar2 != 2) && (iVar2 != 3)) goto LAB_00448c32;
    pmVar1 = (m3dV *)(param_1 + 0x10);
  }
LAB_00448c32:
  objOBJ::GetOrigin(*(objOBJ **)(this + 0x527),local_c);
  if ((param_2 == 0) || (*(int *)(this + 1099) < 0)) {
    iVar2 = 0;
  }
  else if ((*(int *)(param_1 + 4) == 0) && (*(int *)(param_1 + 0x1c) == 6)) {
    iVar2 = 2;
  }
  else {
    iVar2 = 1;
  }
  aiNPC_WR::StartChunkMeat((aiNPC_WR *)this,iVar2,param_3,local_c,pmVar1);
  aiNPC_WR::StartBlood((aiNPC_WR *)this,6,param_3,local_c,(m3dV *)0x0,(m3dV *)0x0,pmVar1);
  *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 0x40;
  msgSYSTEM::PostMsg(&msgSystem,(msgADDR *)this,2,(msgADDR *)this);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_mino.cpp
   addr: 00448CD0 */

void __thiscall aiMINO::StartDeath(aiMINO *this,dmgDAMAGE *param_1)

{
  uint *puVar1;
  int iVar2;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  m3dV local_18 [12];
  m3dV local_c [12];
  
  puVar1 = (uint *)(*(int *)(*(int *)(this + 0x54f) + 0xbc) + 4);
  *puVar1 = *puVar1 | 1;
  aiNPC_WR::StartDeath((aiNPC_WR *)this,param_1);
  if (((byte)this[0x88] & 4) != 0) {
    iVar2 = *(int *)(param_1 + 4);
    if (iVar2 == 0) {
      local_24 = *(undefined4 *)(param_1 + 0x10);
      local_20 = *(undefined4 *)(param_1 + 0x14);
      local_1c = *(undefined4 *)(param_1 + 0x18);
    }
    else {
      if ((iVar2 != 2) && (iVar2 != 3)) {
        return;
      }
      local_24 = *(undefined4 *)(param_1 + 0x10);
      local_20 = *(undefined4 *)(param_1 + 0x14);
      local_1c = *(undefined4 *)(param_1 + 0x18);
    }
    objOBJ::GetOrigin(*(objOBJ **)(this + 0x527),local_18);
    aiNPC::GetPosRooted((aiNPC *)this,local_c);
    if (((*(uint *)(this + 0x53f) & 0x200) == 0) || (((byte)this[0x51b] & 4) != 0)) {
      iVar2 = (**(code **)(*(int *)this + 0x1c4))();
      if (iVar2 == 9) {
        *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) | 0x400;
        return;
      }
      aiNPC_WR::StartBlood((aiNPC_WR *)this,3,1,local_18,(m3dV *)0x0,(m3dV *)0x0,(m3dV *)&local_24);
    }
    else if (*(float *)(param_1 + 8) < ___real_459c4000) {
      Explode(this,param_1,1,0);
      return;
    }
  }
  return;
}




/* from: ai_mino.cpp
   addr: 00448DE0 */

int __thiscall aiMINO::SelectDeathAnim(aiMINO *this)

{
  return (uint)((byte)((uint)*(undefined4 *)(this + 1099) >> 8) & 1 | 8);
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_mino.cpp
   addr: 00448E00 */

void __thiscall aiMINO::MoveToGoal(aiMINO *this)

{
  aiENEMY *this_00;
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 extraout_MM1;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  undefined1 auVar7 [16];
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  uVar1 = *(uint *)(this + 0x53f);
  if ((uVar1 & 0x60) == 0) {
    if (((uVar1 & 0x10) == 0) && ((uVar1 & 0x100) == 0)) {
      this_00 = (aiENEMY *)(this + 0x4bb);
      iVar2 = aiENEMY::IsDead(this_00);
      if (iVar2 != 0) {
        *(uint *)(this + 1099) = *(uint *)(this + 1099) | 0x200;
      }
      iVar2 = *(int *)(*(int *)(this + 0xbc) + 0xe0);
      if ((((iVar2 == 3) || (iVar2 == 4)) || (iVar2 == 5)) ||
         (((iVar2 == 6 || (iVar2 == 7)) || ((char)((uint)*(undefined4 *)(this + 0x53f) >> 8) < '\0')
          ))) {
        *(uint *)(this + 1099) = *(uint *)(this + 1099) | 0x200;
      }
      aiNPC_WR::MoveToGoal((aiNPC_WR *)this);
      if ((((*(uint *)(this + 1099) & 0x1000) != 0) &&
          (*(int *)(*(int *)(*(animINST **)(this + 0xbc) + 0xe8) + 0x20) == 3)) &&
         (iVar2 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),3,0), iVar2 != 0)) {
        fVar6 = ___real_40800000;
        if ((*(uint *)(this + 1099) & 0x40000) != 0) {
          fVar6 = ___real_3f800000;
        }
        *(float *)(this + 0x543) = fVar6;
        (**(code **)(*(int *)this + 0x1c8))();
        *(uint *)(this + 1099) = *(uint *)(this + 1099) | 0x2000;
      }
      if ((*(uint *)(this + 0x53f) & 8) != 0) {
        iVar2 = *(int *)(*(int *)(*(int *)(this + 0xbc) + 0xe8) + 0x20);
        if ((iVar2 == 0xc) || (iVar2 == 0xd)) {
          *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) & 0xfffffff7;
        }
        else {
          SingleProcessSlash(this,iVar2,4);
          SingleProcessSlash(this,iVar2,5);
          SingleProcessSlash(this,iVar2,6);
          SingleProcessSlash(this,iVar2,7);
        }
      }
      if (((byte)this[1099] & 0x10) == 0) {
        animINST::GetPos(*(animINST **)(this + 0xbc),(m3dV *)&fStack_18);
        aiENEMY::GetPos(this_00,(m3dV *)&fStack_c);
        iVar2 = aiENEMY::IsDead(this_00);
        if (iVar2 == 0) {
          fStack_1c = (fStack_18 - fStack_c) * (fStack_18 - fStack_c) +
                      (fStack_10 - fStack_4) * (fStack_10 - fStack_4);
          if (m3dSimdType == 0) {
            fStack_1c = fStack_1c + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
            auVar7 = rsqrtss(ZEXT416((uint)fStack_1c),ZEXT416((uint)fStack_1c));
            fVar6 = auVar7._0_4_;
            fStack_1c = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar6 *
                        (`float___cdecl_m3dSqrt(float)'::__l2::three - fStack_1c * fVar6 * fVar6) *
                        fStack_1c;
          }
          else if (m3dSimdType == 1) {
            FastExitMediaState();
            uVar3 = (ulonglong)(uint)fStack_1c;
            uVar4 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar3);
            uVar5 = PackedFloatingMUL(uVar4,uVar4);
            uVar5 = PackedFloatingReciprocalSQRIter1(uVar5,uVar3);
            uVar4 = PackedFloatingReciprocalIter2(uVar5,uVar4);
            uVar4 = PackedFloatingMUL(uVar4,uVar3);
            fStack_1c = (float)uVar4;
            FastExitMediaState();
          }
          else {
            fStack_1c = SQRT(fStack_1c);
          }
          if (((fStack_1c < ___real_40800000) && (ABS(fStack_14 - fStack_8) < ___real_40400000)) &&
             (((byte)this[1099] & 1) != 0)) {
            *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) | 8;
            return;
          }
        }
      }
    }
    else {
      *(uint *)(this + 1099) = *(uint *)(this + 1099) | 0x200;
      aiNPC_WR::MoveToGoal((aiNPC_WR *)this);
    }
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_mino.cpp
   addr: 00449090 */

int __thiscall aiMINO::SelectGoal(aiMINO *this)

{
  aiENEMY *this_00;
  int iVar1;
  ulonglong uVar2;
  undefined8 extraout_MM1;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  undefined1 auVar6 [16];
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  animINST::GetPos(*(animINST **)(this + 0xbc),(m3dV *)&local_18);
  this_00 = (aiENEMY *)(this + 0x4bb);
  aiENEMY::GetPos(this_00,(m3dV *)&local_c);
  if (((((0 < *(int *)(this + 0x56f)) && (___real_41200000 < *(float *)(this + 0x3cf))) &&
       (*(float *)(this + 0x3cf) < ___real_42b40000)) &&
      (((*(uint *)(this + 1099) & 0x10000000) != 0 && ((*(uint *)(this + 1099) & 0x80000008) == 0)))
      ) && ((*(uint *)(this + 0x51b) & 0x200) == 0)) {
    iVar1 = aiENEMY::IsDead(this_00);
    if ((iVar1 == 0) && (((byte)this[1099] & 0x10) == 0)) {
      animINST::GetPos(*(animINST **)(this + 0xbc),(m3dV *)&local_30);
      aiENEMY::GetPos(this_00,(m3dV *)&local_24);
      iVar1 = aiENEMY::IsDead(this_00);
      if (iVar1 == 0) {
        local_34 = (local_30 - local_24) * (local_30 - local_24) +
                   (local_28 - local_1c) * (local_28 - local_1c);
        if (m3dSimdType == 0) {
          local_34 = local_34 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
          auVar6 = rsqrtss(ZEXT416((uint)local_34),ZEXT416((uint)local_34));
          fVar5 = auVar6._0_4_;
          local_34 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar5 *
                     (`float___cdecl_m3dSqrt(float)'::__l2::three - local_34 * fVar5 * fVar5) *
                     local_34;
        }
        else if (m3dSimdType == 1) {
          FastExitMediaState();
          uVar2 = (ulonglong)(uint)local_34;
          uVar3 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar2);
          uVar4 = PackedFloatingMUL(uVar3,uVar3);
          uVar4 = PackedFloatingReciprocalSQRIter1(uVar4,uVar2);
          uVar3 = PackedFloatingReciprocalIter2(uVar4,uVar3);
          uVar3 = PackedFloatingMUL(uVar3,uVar2);
          local_34 = (float)uVar3;
          FastExitMediaState();
        }
        else {
          local_34 = SQRT(local_34);
        }
        if (local_34 < ___real_40800000) {
          if (ABS(local_2c - local_20) < ___real_40400000) goto LAB_004492bc;
        }
      }
      if ((((byte)this[0x53f] & 8) == 0) &&
         (((*(uint *)(this + 1099) & 0x40000) != 0 ||
          (*(float *)(this + 399) < *(float *)(this + 0x3cf))))) {
        *(uint *)(this + 1099) = *(uint *)(this + 1099) | 0x200;
        *(undefined4 *)(this + 0x3f3) = local_18;
        *(undefined4 *)(this + 0x3f7) = local_14;
        *(undefined4 *)(this + 0x3ff) = local_c;
        *(undefined4 *)(this + 0x3fb) = local_10;
        *(undefined4 *)(this + 0x403) = local_8;
        *(undefined4 *)(this + 0x407) = local_4;
        return 1;
      }
    }
  }
LAB_004492bc:
  iVar1 = aiNPC::SelectGoal((aiNPC *)this);
  return iVar1;
}




/* from: ai_mino.cpp
   addr: 004492D0 */

int __thiscall aiMINO::Activate(aiMINO *this,int param_1)

{
  int iVar1;
  
  if ((param_1 == 0) && (0 < *(int *)(this + 0x30))) {
    return param_1;
  }
  if (((byte)this[0x53f] & 0x20) != 0) {
    if (param_1 == 0) {
      iVar1 = aiNPC::GetNOpp((char *)0x0,s_ai_mino);
      if (3 < iVar1) {
        return 0;
      }
    }
    *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) & 0xffffffdf | 0x40;
    *(uint *)(this + 1099) = *(uint *)(this + 1099) | 0x1000000;
  }
  *(undefined4 *)(this + 0x4a7) = 0x428c0000;
  *(undefined4 *)(this + 0x4ab) = 0x41a00000;
  iVar1 = aiNPC::Activate((aiNPC *)this,0);
  return iVar1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_mino.cpp
   addr: 00449350 */

float __thiscall aiMINO::GetAnimPlayRate(aiMINO *this)

{
  if ((*(uint *)(this + 0x53f) & 0x100) != 0) {
    return *(float *)(this + 0x547);
  }
  return ___real_3f800000;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_mino.cpp
   addr: 00449370 */

int __thiscall aiMINO::EvalAnimGoalSeq(aiMINO *this)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  if ((*(uint *)(this + 1099) & 0x10205) == 0) {
    iVar3 = aiENEMY::IsDead((aiENEMY *)(this + 0x4bb));
    iVar4 = 2;
    if (iVar3 == 0) goto LAB_00449399;
  }
  iVar4 = 0xe;
LAB_00449399:
  uVar1 = *(uint *)(this + 1099);
  if ((uVar1 & 0x200000) != 0) {
    return ((uint)((byte)((uint)*(undefined4 *)(this + 0x53f) >> 8) & 4 | 0x20) << 8) >> 10;
  }
  uVar2 = *(uint *)(this + 0x53f);
  if ((uVar2 & 0x60) == 0) {
    if ((uVar2 & 0x10) != 0) {
      return 1;
    }
    if ((uVar2 & 0x100) != 0) {
      return 0xb;
    }
    if (_DAT_005d3994 < *(float *)(this + 0x517)) {
      return 0xe;
    }
    if (((uVar1 & 0x1000) != 0) && ((uVar1 & 0x2000) == 0)) {
      return 3;
    }
    if ((char)(uVar2 >> 8) < '\0') {
      iVar3 = m3dRandSelect(0xc,0xd);
      return iVar3;
    }
    if ((uVar2 & 8) != 0) {
      iVar3 = m3dRandSelect(4,5,6,7);
      return iVar3;
    }
    if (((byte)this[0x14f] & 1) != 0) {
      return 2;
    }
    if ((uVar1 & 0x40000) != 0) {
      return (-(uint)((uVar1 & 2) != 0) & 0xc) + 2;
    }
  }
  else {
    iVar4 = 10;
  }
  return iVar4;
}




/* from: ai_mino.cpp
   addr: 00449490 */

void __thiscall aiMINO::ProcessActionFrame(aiMINO *this)

{
  int iVar1;
  
  iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),1,0);
  if (iVar1 != 0) {
    *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) & 0xffffffef;
  }
  iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),0xb,0);
  if (iVar1 != 0) {
    *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) & 0xfffffeff;
  }
  iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),10,0);
  if (iVar1 != 0) {
    *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) & 0xffffffbf;
  }
  iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),0xc,0);
  if ((iVar1 == 0) &&
     (iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),0xd,0), iVar1 == 0)) {
    return;
  }
  *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) & 0xffff7fff;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_mino.cpp
   addr: 00449530 */

void __thiscall aiMINO::Think(aiMINO *this)

{
  aiENEMY *this_00;
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 extraout_MM1;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  float fVar7;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  aiNPC_WR::Think((aiNPC_WR *)this);
  if ((___real_41a00000 < *(float *)(this + 0x473)) && ((*(uint *)(this + 1099) & 0x200000) == 0)) {
    *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 0x200;
  }
  if ((((*(uint *)(this + 1099) & 0x200000) != 0) && ((*(uint *)(this + 1099) & 0x20000000) != 0))
     && (*(float *)(this + 0x477) < ___real_c1200000)) {
    fVar7 = m3dRandom();
    if (___real_3e19999a < fVar7) {
      Explode(this,(dmgDAMAGE *)0x0,0,0);
    }
  }
  uVar1 = *(uint *)(this + 1099);
  if ((((uVar1 & 0x2000) == 0) && ((uVar1 & 0x10000000) != 0)) &&
     (((uVar1 & 0x80000008) == 0 && ((*(uint *)(this + 0x51b) & 0x200) == 0)))) {
    this_00 = (aiENEMY *)(this + 0x4bb);
    iVar2 = aiENEMY::IsDead(this_00);
    if ((iVar2 == 0) && (((byte)this[1099] & 0x10) == 0)) {
      animINST::GetPos(*(animINST **)(this + 0xbc),(m3dV *)&local_18);
      aiENEMY::GetPos(this_00,(m3dV *)&local_c);
      iVar2 = aiENEMY::IsDead(this_00);
      if (iVar2 == 0) {
        local_1c = (local_18 - local_c) * (local_18 - local_c) +
                   (local_10 - local_4) * (local_10 - local_4);
        if (m3dSimdType == 0) {
          local_1c = local_1c + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
          auVar6 = rsqrtss(ZEXT416((uint)local_1c),ZEXT416((uint)local_1c));
          fVar7 = auVar6._0_4_;
          local_1c = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar7 *
                     (`float___cdecl_m3dSqrt(float)'::__l2::three - local_1c * fVar7 * fVar7) *
                     local_1c;
        }
        else if (m3dSimdType == 1) {
          FastExitMediaState();
          uVar3 = (ulonglong)(uint)local_1c;
          uVar4 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar3);
          uVar5 = PackedFloatingMUL(uVar4,uVar4);
          uVar5 = PackedFloatingReciprocalSQRIter1(uVar5,uVar3);
          uVar4 = PackedFloatingReciprocalIter2(uVar5,uVar4);
          uVar4 = PackedFloatingMUL(uVar4,uVar3);
          local_1c = (float)uVar4;
          FastExitMediaState();
        }
        else {
          local_1c = SQRT(local_1c);
        }
        if (local_1c < ___real_40800000) {
          if (ABS(local_14 - local_8) < ___real_40400000) goto LAB_0044975a;
        }
      }
      if ((((byte)this[0x53f] & 8) == 0) &&
         ((((*(uint *)(this + 1099) & 0x40000) != 0 ||
           (*(float *)(this + 399) < *(float *)(this + 0x3cf))) &&
          (*(float *)(this + 0x543) < _DAT_005d3994)))) {
        *(uint *)(this + 1099) = *(uint *)(this + 1099) & 0xffffdfff | 0x1000;
      }
    }
  }
LAB_0044975a:
  if (((*(uint *)(this + 1099) & 0x2000) != 0) &&
     (*(int *)(*(int *)(*(int *)(this + 0xbc) + 0xe8) + 0x20) != 3)) {
    *(uint *)(this + 1099) = *(uint *)(this + 1099) & 0xffffcfff;
  }
  if (((byte)this[1099] & 0x10) != 0) {
    *(undefined4 *)(this + 0x197) = 0x40400000;
    return;
  }
  *(undefined4 *)(this + 0x197) = 0x40000000;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_mino.cpp
   addr: 004497B0 */

void __thiscall aiMINO::SingleProcessSlash(aiMINO *this,int param_1,int param_2)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 extraout_MM1;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  dmgGENERAL local_1c [8];
  undefined4 local_14;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  dmgGENERAL::dmgGENERAL(local_1c);
  if (param_1 == param_2) {
    iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),param_2,0);
    if ((iVar1 != 0) ||
       (iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),param_2,1), iVar1 != 0)) {
      *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) & 0xfffffff7;
      fVar5 = ___real_40400000;
      if ((*(uint *)(this + 1099) & 0x40000) != 0) {
        fVar5 = ___real_3f800000;
      }
      *(float *)(this + 0x543) = fVar5;
    }
    iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),param_2,1);
    if (((iVar1 != 0) ||
        (iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),param_2,2), iVar1 != 0)) &&
       (((byte)this[1099] & 0x10) == 0)) {
      animINST::GetPos(*(animINST **)(this + 0xbc),(m3dV *)&local_40);
      aiENEMY::GetPos((aiENEMY *)(this + 0x4bb),(m3dV *)&local_34);
      iVar1 = aiENEMY::IsDead((aiENEMY *)(this + 0x4bb));
      if (iVar1 == 0) {
        fVar5 = (local_40 - local_34) * (local_40 - local_34) +
                (local_38 - local_2c) * (local_38 - local_2c);
        if (m3dSimdType == 0) {
          fVar5 = fVar5 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
          auVar7 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
          fVar6 = auVar7._0_4_;
          param_2 = (int)(`float___cdecl_m3dSqrt(float)'::__l2::half * fVar6 *
                          (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar5 * fVar6 * fVar6) *
                         fVar5);
        }
        else if (m3dSimdType == 1) {
          FastExitMediaState();
          uVar2 = (ulonglong)(uint)fVar5;
          uVar3 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar2);
          uVar4 = PackedFloatingMUL(uVar3,uVar3);
          uVar4 = PackedFloatingReciprocalSQRIter1(uVar4,uVar2);
          uVar3 = PackedFloatingReciprocalIter2(uVar4,uVar3);
          uVar3 = PackedFloatingMUL(uVar3,uVar2);
          param_2 = (int)uVar3;
          FastExitMediaState();
        }
        else {
          param_2 = (int)SQRT(fVar5);
        }
        if (((float)param_2 < ___real_40800000) && (ABS(local_3c - local_30) < ___real_40400000)) {
          animINST::GetPos(*(animINST **)(this + 0xbc),(m3dV *)&local_28);
          local_c = local_28;
          local_14 = 0x40c00000;
          local_8 = local_24;
          local_4 = local_20;
          if (*(msgADDR **)(this + 0x4c3) != (msgADDR *)0x0) {
            msgSYSTEM::SendMsg(&msgSystem,*(msgADDR **)(this + 0x4c3),0x4c5,local_1c,(msgADDR *)this
                              );
          }
        }
      }
    }
  }
  return;
}




/* from: ai_mino.cpp
   addr: 004499D0
   addr: 004499D0 */

void __thiscall aiGLAD_GENERIC::UpdateTimers(aiGLAD_GENERIC *this)

{
  float extraout_EDX;
  
  aiNPC_WR::UpdateTimers((aiNPC_WR *)this);
  m3dUpdateTimeField((float *)(this + 0x543),extraout_EDX);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_mino.cpp
   addr: 004499F0 */

void __thiscall aiMINO::AimAxToPlayer(aiMINO *this,m3dV *param_1,physINIT *param_2)

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
    iVar3 = aiPLANNER::GetEnemyMeetPoint(aiAttackPlanner,(aiNPC *)this,35.0,(m3dV *)&local_c);
    if (iVar3 != 0) {
      local_8 = local_8 + ___real_3fa66666;
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
      goto LAB_00449ae1;
    }
  }
  aiENEMY::GetPos((aiENEMY *)(this + 0x4bb),(m3dV *)&local_c);
  local_24 = local_18;
  local_20 = local_14;
  local_1c = local_10;
  in_MM2 = extraout_MM1;
LAB_00449ae1:
  local_20 = local_20 * ___real_420c0000;
  local_1c = local_1c * ___real_420c0000;
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
  fVar7 = (float)param_1 * ___real_3cea0ea1;
  fVar9 = *(float *)(pmVar2 + 4);
  fVar1 = fVar7 * fVar7 * ___real_c0a00000;
  *(float *)(param_2 + 4) = local_24 * ___real_420c0000;
  *(float *)(param_2 + 8) = local_20;
  *(float *)(param_2 + 0xc) = local_1c;
  *(float *)(param_2 + 8) = ((local_8 - fVar9) - fVar1) / fVar7;
  *(float *)(param_2 + 0x10) = _m3dVUnitY * ___real_c1200000;
  *(float *)(param_2 + 0x14) = DAT_005f9994 * ___real_c1200000;
  *(float *)(param_2 + 0x18) = DAT_005f9998 * ___real_c1200000;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_mino.cpp
   addr: 00449C30 */

void __thiscall aiMINO::ThrowAx(aiMINO *this)

{
  objOBJ *poVar1;
  entENTITY *this_00;
  int iVar2;
  undefined4 *puVar3;
  physINIT local_104;
  undefined1 local_103;
  undefined2 local_102;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
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
  undefined1 local_b4;
  m3dV local_b0 [12];
  m3dV local_a4 [12];
  animCREATE_DATA local_98 [18];
  undefined4 local_86 [33];
  
  local_100 = _m3dVZero;
  local_f4 = _m3dVZero;
  local_e4 = DAT_005d3998;
  local_fc = DAT_00963740;
  local_f0 = DAT_00963740;
  local_104 = (physINIT)0x0;
  local_103 = 0x40;
  local_f8 = DAT_00963744;
  local_ec = DAT_00963744;
  local_e8 = 0x3dcccccd;
  local_e0 = 1;
  local_dc = 0;
  local_d8 = 0;
  local_d4 = 0;
  local_d0 = 0;
  local_cc = 0xbf800000;
  local_c8 = 0;
  local_c4 = 0xffffffff;
  local_c0 = 0xffffffff;
  local_bc = 0xffffffff;
  local_b8 = 0xbf800000;
  local_b4 = 1;
  local_102 = 0x51;
  animCREATE_DATA::animCREATE_DATA(local_98);
  animINST::Validate(*(animINST **)(this + 0xbc),4);
  poVar1 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_SEKIRA);
  if (poVar1 != (objOBJ *)0x0) {
    local_bc = *(undefined4 *)(this + 0x8c);
    local_e8 = 0x3e99999a;
    local_e4 = 0x40e00000;
    local_e0 = 1;
    local_d8 = 0;
    local_cc = 0x41000000;
    local_c8 = 0x40600000;
    local_c0 = 3;
    objOBJ::GetOrigin(poVar1,local_b0);
    animINST::GetDir(*(animINST **)(this + 0xbc),local_a4);
    AimAxToPlayer(this,local_b0,&local_104);
    poVar1 = poVar1 + 0x3c;
    puVar3 = local_86;
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *(undefined4 *)poVar1;
      poVar1 = poVar1 + 4;
      puVar3 = puVar3 + 1;
    }
    this_00 = entCreate(gsScenePtr,s_mino_ax,s_mino_ax,local_98,&local_104,0);
    if (this_00 != (entENTITY *)0x0) {
      physPHYS::AddEntCDTExclude((physPHYS *)this_00,(entENTITY *)this);
      gsEffApplyLMChar(this_00,(cdtINFO *)(this + 0x453),0);
      iVar2 = *(int *)(this + 0x56f);
      *(int *)(this + 0x56f) = iVar2 + -1;
      if (0 < iVar2 + -1) {
        *(undefined4 *)(this + 0x543) = 0x3f800000;
      }
    }
  }
  return;
}




/* from: ai_mino.cpp
   addr: 00449DF0 */

void __thiscall aiMINO::SettleSurface(aiMINO *this)

{
  m3dV local_c [12];
  
  animINST::GetPos(*(animINST **)(this + 0xbc),local_c);
  aiNPC::SettleSurface((aiNPC *)this);
  if ((char)this[0x53f] < '\0') {
    animINST::Translate(*(animINST **)(this + 0xbc),local_c,0);
    *(undefined4 *)(this + 0x477) = 0x3f800000;
  }
  return;
}




/* from: ai_mino.cpp
   addr: 00449E40 */

void __thiscall aiMINO::FillSoundFlags(aiMINO *this)

{
  int iVar1;
  
  iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),4,1);
  if (iVar1 == 0) {
    iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),4,2);
    if (iVar1 == 0) {
      iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),5,1);
      if (iVar1 == 0) {
        iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),5,2);
        if (iVar1 == 0) {
          iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),6,1);
          if (iVar1 == 0) {
            iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),6,2);
            if (iVar1 == 0) {
              iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),7,1);
              if (iVar1 == 0) {
                iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),7,2);
                if (iVar1 == 0) goto LAB_00449eed;
              }
            }
          }
        }
      }
    }
  }
  *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 0x80;
LAB_00449eed:
  iVar1 = *(int *)(*(int *)(this + 0xbc) + 0xe0);
  if ((*(uint *)(*(int *)(this + 0xbc) + 4) & 0x4000) == 0) {
    if (iVar1 == 1) {
      *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 1;
      return;
    }
    if ((iVar1 == 10) && (((byte)this[0x53f] & 0x20) == 0)) {
      *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 0x100;
      return;
    }
  }
  else if (iVar1 == 8) {
    *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 8;
  }
  else {
    if (iVar1 == 9) {
      *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 0x10;
      return;
    }
    if (iVar1 == 0xb) {
      *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 2;
      return;
    }
  }
  return;
}




/* from: ai_mino.cpp
   addr: 00449F70 */

void __thiscall aiMINO::PlaySounds(aiMINO *this)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0xf8);
  if ((uVar1 & 0x40) != 0) {
    (**(code **)(**(int **)(this + 0x54b) + 4))(&DAT_0060c4d0,0);
    aiNPC::PlaySounds((aiNPC *)this);
    return;
  }
  if ((uVar1 & 8) != 0) {
    (**(code **)(**(int **)(this + 0x54b) + 4))(&DAT_0060c398,0);
    aiNPC::PlaySounds((aiNPC *)this);
    return;
  }
  if ((uVar1 & 0x10) != 0) {
    (**(code **)(**(int **)(this + 0x54b) + 4))(&DAT_0060c400,0);
    aiNPC::PlaySounds((aiNPC *)this);
    return;
  }
  if ((uVar1 & 2) != 0) {
    (**(code **)(**(int **)(this + 0x54b) + 4))(&DAT_0060c2c8,0);
    aiNPC::PlaySounds((aiNPC *)this);
    return;
  }
  if ((uVar1 & 0x20) != 0) {
    (**(code **)(**(int **)(this + 0x54b) + 4))(&DAT_0060c468,0);
    aiNPC::PlaySounds((aiNPC *)this);
    return;
  }
  if ((uVar1 & 1) != 0) {
    (**(code **)(**(int **)(this + 0x54b) + 4))(&_aiMinoSndList,0);
    aiNPC::PlaySounds((aiNPC *)this);
    return;
  }
  if ((uVar1 & 0x100) != 0) {
    (**(code **)(**(int **)(this + 0x54b) + 4))(&DAT_0060c608,0);
    aiNPC::PlaySounds((aiNPC *)this);
    return;
  }
  if ((uVar1 & 0x200) != 0) {
    (**(code **)(**(int **)(this + 0x54b) + 4))(&DAT_0060c670,0);
    aiNPC::PlaySounds((aiNPC *)this);
    return;
  }
  if ((char)uVar1 < '\0') {
    (**(code **)(**(int **)(this + 0x54b) + 4))(&DAT_0060c5a0,0);
  }
  aiNPC::PlaySounds((aiNPC *)this);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_mino.cpp
   addr: 0044A090 */

aiNPC * __fastcall aiMINO::Regenerate(physPHYS *param_1)

{
  animINST *this;
  entENTITY *peVar1;
  int iVar2;
  animINST *paVar3;
  undefined4 *puVar4;
  float local_c4;
  aiINIT_DATA local_c0 [2];
  undefined2 local_be;
  undefined4 local_bc;
  undefined4 local_b0;
  float local_ac;
  float local_a8;
  m3dV local_a4 [12];
  float local_98;
  float local_94;
  float local_90;
  undefined4 local_86 [33];
  
  animCREATE_DATA::animCREATE_DATA((animCREATE_DATA *)&local_98);
  aiINIT_DATA::aiINIT_DATA(local_c0);
  local_b0 = 0;
  local_bc = 0x41575349;
  local_be = 0x14;
  m3dMATR::GetScale((m3dMATR *)(*(int *)(*(int *)(*(int *)(param_1 + 0xbc) + 0x10) + 0x38) + 0x7c),
                    &local_c4,&local_ac,&local_a8);
  this = *(animINST **)(param_1 + 0xbc);
  local_98 = local_c4 * ___real_41200000;
  paVar3 = this + 0x60;
  puVar4 = local_86;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *(undefined4 *)paVar3;
    paVar3 = paVar3 + 4;
    puVar4 = puVar4 + 1;
  }
  local_94 = local_98;
  local_90 = local_98;
  animINST::GetPos(this,local_a4);
  local_b0 = 1;
  peVar1 = entCreate(gsScenePtr,s_ai_mino,s_ai_mino,(animCREATE_DATA *)&local_98,local_c0,0);
  return (aiNPC *)peVar1;
}




/* from: ai_mino.cpp
   addr: 0044A150 */

int __thiscall aiMINO::IsReadyActivate(aiMINO *this)

{
  int iVar1;
  
  if ((((byte)this[0x53f] & 0x20) != 0) && (0 < *(int *)(this + 0x30))) {
    return 0;
  }
  iVar1 = aiNPC_WR::IsReadyActivate((aiNPC_WR *)this);
  return iVar1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_mino.cpp
   addr: 0044A170 */

void __thiscall aiMINO::SetMovementSpeed(aiMINO *this)

{
  if (_DAT_005d3994 < *(float *)(this + 0x517)) {
    *(uint *)(this + 1099) = *(uint *)(this + 1099) | 0x200;
  }
  return;
}




/* from: ai_mino.cpp
   addr: 0044A1A0 */

entENTITY * __fastcall aiMINO::Create(animINST *param_1)

{
  aiNPC *this;
  
  this = (aiNPC *)operator_new(0x573);
  if (this != (aiNPC *)0x0) {
    aiNPC::aiNPC(this);
    *(undefined4 *)(this + 0x51b) = 0;
    *(undefined4 *)(this + 0x527) = 0;
    *(undefined4 *)(this + 0x53f) = 0;
    *(undefined4 *)(this + 0x54b) = 0;
    *(undefined4 *)(this + 0x54f) = 0;
    *(undefined4 *)(this + 0x55f) = 0;
    *(undefined4 *)(this + 0x563) = 0;
    *(undefined4 *)(this + 0x567) = 0;
    *(undefined4 *)(this + 0x56b) = 0;
    *(undefined4 *)(this + 0x553) = 0;
    *(undefined4 *)(this + 0x557) = 0;
    *(undefined4 *)(this + 0x94) = 0;
    *(undefined ***)this = &_vftable_;
    return (entENTITY *)this;
  }
  return (entENTITY *)0x0;
}




/* from: ai_mino.cpp
   addr: 0044A230 */

void __thiscall aiMINO::Explode(aiMINO *this,dmgDAMAGE *param_1,int param_2)

{
  Explode(this,param_1,0,param_2);
  return;
}




/* from: ai_mino.cpp
   addr: 0044A250 */

entENTITY * __fastcall aiMINO_ATRIUM::Create(animINST *param_1)

{
  aiNPC *this;
  
  this = (aiNPC *)operator_new(0x577);
  if (this != (aiNPC *)0x0) {
    aiNPC::aiNPC(this);
    *(undefined4 *)(this + 0x51b) = 0;
    *(undefined4 *)(this + 0x527) = 0;
    *(undefined4 *)(this + 0x53f) = 0;
    *(undefined4 *)(this + 0x54b) = 0;
    *(undefined4 *)(this + 0x54f) = 0;
    *(undefined4 *)(this + 0x55f) = 0;
    *(undefined4 *)(this + 0x563) = 0;
    *(undefined4 *)(this + 0x567) = 0;
    *(undefined4 *)(this + 0x56b) = 0;
    *(undefined4 *)(this + 0x553) = 0;
    *(undefined4 *)(this + 0x557) = 0;
    *(undefined4 *)(this + 0x94) = 0;
    *(undefined ***)this = &_vftable_;
    return (entENTITY *)this;
  }
  return (entENTITY *)0x0;
}



