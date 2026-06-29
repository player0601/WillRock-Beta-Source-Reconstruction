#include "entity.h"
#include "ai_npc_wr_fly.h"

/* from: ai_medusa.cpp
   addr: 00444980 */

void aiMedusaSndList(void)
{
  sncSOUND_DESCR::sncSOUND_DESCR((sncSOUND_DESCR *)&_aiMedusaSndList, medusa_being_hit, 0, 0x40000, 0.0, 0x5dc);
  _DAT_0060bfd8 = 0;
  _DAT_0060bfdc = 0;
  _aiMedusaSndList = &sncSOUND_DESCR_3D::`vftable`;

  sncSOUND_DESCR::sncSOUND_DESCR((sncSOUND_DESCR *)&_aiMedusaSndDeath, medusa_death, 0, 0, 0.0, 0);
  _DAT_0060c040 = 0;
  _DAT_0060c044 = 0;
  _aiMedusaSndDeath = &sncSOUND_DESCR_3D::`vftable`;

  apNAME::SetName((apNAME *)&_aiMedusaSndAttack, medusa_attack);
  _DAT_0060c08c = 0x80000;
  _DAT_0060c090 = 0;
  _DAT_0060c094 = 0;
  _DAT_0060c098 = 0;
  _DAT_0060c09c = 0;
  _DAT_0060c0a0 = 0;
  _DAT_0060c0a4 = 0;
  _DAT_0060c0a8 = 0;
  _DAT_0060c0ac = 0;
  _aiMedusaSndAttack = &sncSOUND_DESCR_3D::`vftable`;

  sncSOUND_DESCR::sncSOUND_DESCR((sncSOUND_DESCR *)&_aiMedusaSndFly, medusa_fly, 0, 0, 0.0, 0);
  _DAT_0060c110 = 0;
  _DAT_0060c114 = 0;
  _aiMedusaSndFly = &sncSOUND_DESCR_3D::`vftable`;

  sncSOUND_DESCR::sncSOUND_DESCR((sncSOUND_DESCR *)&_aiMedusaSndPjlFly, medusa_pjl_fly, 0, 0x40002, 0.0, 0);
  _DAT_0060c178 = 0x41700000;
  _DAT_0060c17c = 0x428c0000;
  _aiMedusaSndPjlFly = &sncSOUND_DESCR_3D::`vftable`;

  apNAME::SetName((apNAME *)&_aiMedusaSndPjlHitGround, medusa_pjl_hit_ground);

  _DAT_0060c1c4 = 0;
  _DAT_0060c1c8 = 0;
  _DAT_0060c1cc = 0;
  _DAT_0060c1d0 = 0;
  _DAT_0060c1d4 = 0;
  _DAT_0060c1d8 = 0;
  _DAT_0060c1dc = 0;
  _DAT_0060c1e0 = 0x41200000;
  _DAT_0060c1e4 = 0x42820000;
  _aiMedusaSndPjlHitGround = &sncSOUND_DESCR_3D::`vftable`;

  sncSOUND_DESCR::sncSOUND_DESCR((sncSOUND_DESCR *)&_aiMedusaSndPjlHitBody, medusa_pjl_hit_body, 0, 0x40000, 0.0, 0);
  _aiMedusaSndPjlHitBody = &sncSOUND_DESCR_3D::`vftable`;

  _DAT_0060c248 = 0x41200000;
  _DAT_0060c24c = 0x42820000;

  return;
}

/* from: ai_medusa.cpp
   addr: 00444B10 */

int aiMedusaInit(void)

{
  int result;
  
  result = entRegisterClass(ai_medusa, $NPC, 0x32, aiMEDUSA::Create, ai_medusa, 0);
  if (result == 0) {
    return 0;
  }
  result = aiPjlMedusaInit();
  if (result == 0) {
    return 0;
  }
  result = sncLinkSndListData(7,(sncSOUND_DESCR_3D *)&_aiMedusaSndList);
  return (uint)(result != 0);
}




/* from: ai_medusa.cpp
   addr: 00444B60 */

int __thiscall aiMEDUSA::SetupAniSystem(aiMEDUSA *this)

{
  animTPL *paVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  animSYSTEM *this_00;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  animSEQ *local_8;
  int local_4;
  
  paVar1 = *(animTPL **)(*(int *)(this + 0xbc) + 0x138);
  if (*(animSEQ **)(paVar1 + 0x90) == (animSEQ *)0x0) {
    local_4 = 0;
  }
  else {
    local_4 = *(int *)(paVar1 + 0x8c);
    local_8 = *(animSEQ **)(paVar1 + 0x90);
  }
  iVar6 = 3;
  *(undefined4 *)(paVar1 + 0x8c) = 3;
  puVar2 = (undefined4 *)operator_new(0x19c);
  if (puVar2 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = puVar2 + 1;
    *puVar2 = 3;
    puVar2 = puVar3;
    do {
      puVar7 = puVar2;
      for (iVar5 = 0x22; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
      puVar2[0x20] = 2;
      iVar6 = iVar6 + -1;
      puVar2 = puVar2 + 0x22;
    } while (iVar6 != 0);
  }
  *(undefined4 **)(paVar1 + 0x90) = puVar3;
  _entAnimSetSeqName(paVar1,0,s_MEDUSA_SEQ_FLY);
  _entAnimSetSeqName(paVar1,1,s_MEDUSA_SEQ_ATTACK);
  _entAnimSetSeqName(paVar1,2,s_MEDUSA_SEQ_WOUNDED);
  entAnimAssignTplSeq(paVar1,local_8,local_4);
  this_00 = (animSYSTEM *)operator_new(0x14);
  if ((this_00 != (animSYSTEM *)0x0) &&
     (piVar4 = (int *)animSYSTEM::animSYSTEM(this_00,3,0), piVar4 != (int *)0x0)) {
    *(int **)(paVar1 + 0xa4) = piVar4;
    (**(code **)(*piVar4 + 0x10))(2,0,1,2);
    (**(code **)(*piVar4 + 0xc))(2,1,0,0xffffffff);
    (**(code **)(*piVar4 + 0x14))(2);
    (**(code **)(*piVar4 + 4))(0,1,1,1,0);
    (**(code **)(*piVar4 + 4))(1,0,1,0,0);
    if (local_8 != (animSEQ *)0x0) {
      operator_delete(local_8 + -4);
    }
    return 1;
  }
  return 0;
}




/* from: ai_medusa.cpp
   addr: 00444CC0 */

void __thiscall aiMEDUSA::SetMovementSpeed(aiMEDUSA *this)

{
  uint uVar1;
  int iVar2;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  iVar2 = *(int *)(*(animINST **)(this + 0xbc) + 0xe0);
  if ((iVar2 < 0) || (1 < iVar2)) {
    *(undefined4 *)(this + 0x15b) = 0x43340000;
    *(uint *)(this + 1099) = *(uint *)(this + 1099) | 0x200;
  }
  else {
    *(undefined4 *)(this + 0x15b) = 0x428c0000;
    *(undefined4 *)(this + 0x153) = 0x40c00000;
  }
  if ((((byte)this[0x44f] & 8) != 0) && ((*(uint *)(this + 0x51b) & 0x40000) == 0)) {
    animINST::GetPos(*(animINST **)(this + 0xbc),(m3dV *)&local_18);
    animINST::GetDir(*(animINST **)(this + 0xbc),(m3dV *)&local_c);
    local_18 = local_c + local_c + local_18;
    local_14 = local_8 + local_8 + local_14;
    local_10 = local_4 + local_4 + local_10;
    iVar2 = (**(code **)(*(int *)(this + 0x1ab) + 0x10))(&local_18);
    if (iVar2 == 0) {
      uVar1 = *(uint *)(this + 1099);
      *(uint *)(this + 1099) = uVar1 | 0x200;
      if ((uVar1 & 0x10000000) != 0) {
        return;
      }
      *(float *)(this + 0x583) = gsElapsedTime + *(float *)(this + 0x583);
      return;
    }
  }
  *(undefined4 *)(this + 0x583) = 0;
  return;
}




/* from: ai_medusa.cpp
   addr: 00444DD0 */

int __thiscall aiMEDUSA::Activate(aiMEDUSA *this,int param_1)

{
  int iVar1;
  undefined4 local_a8;
  m3dV local_a4 [12];
  animCREATE_DATA local_98 [18];
  m3dMATR local_86 [134];
  
  animCREATE_DATA::animCREATE_DATA(local_98);
  if ((*(uint *)(this + 0x547) & 0x1000) == 0) {
    aiPLANNER::SetBoss(aiAttackPlanner,(aiNPC *)this);
  }
  animINST::GetCenter(*(animINST **)(this + 0xbc),local_a4);
  m3dMATR::MakeLCS2WCS_VY(local_86,local_a4,&m3dVUnitY);
  local_a8 = 0x40000000;
  entCreate(gsScenePtr,s_sfx_medusa_death,s_sfx_medusa_death,local_98,&local_a8,0);
  *(uint *)(*(int *)(this + 0xbc) + 4) = *(uint *)(*(int *)(this + 0xbc) + 4) & 0xfffffffe;
  iVar1 = aiNPC::Activate((aiNPC *)this,param_1);
  return iVar1;
}




/* from: ai_medusa.cpp
   addr: 00444E70 */

void __thiscall aiMEDUSA::ProcessTERM(aiMEDUSA *this)

{
  if (*(void **)(this + 0x55b) != (void *)0x0) {
    apFree(*(void **)(this + 0x55b));
  }
  *(undefined4 *)(this + 0x55b) = 0;
  *(undefined4 *)(this + 0x55f) = 0;
  if (*(undefined4 **)(this + 0x56b) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x56b))(1);
  }
  *(undefined4 *)(this + 0x56b) = 0;
  if (*(undefined4 **)(this + 0x56f) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x56f))(1);
  }
  *(undefined4 *)(this + 0x56f) = 0;
  aiMINO::ProcessTERM((aiMINO *)this);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_medusa.cpp
   addr: 00444ED0 */

int __thiscall aiMEDUSA::ProcessINIT(aiMEDUSA *this,void *param_1)

{
  undefined4 uVar1;
  int iVar2;
  sncCHANNEL *this_00;
  objOBJ *poVar3;
  undefined4 *puVar4;
  int local_44;
  char local_40 [64];
  
  local_44 = 0;
  iVar2 = aiNPC_WR_FLY::ProcessINIT((aiNPC_WR_FLY *)this,param_1);
  if (iVar2 == 0) {
    return 0;
  }
  *(undefined4 *)(this + 0xd0) = 0x45bb8000;
  *(undefined4 *)(this + 0xcc) = 0x45bb8000;
  *(undefined4 *)(this + 0x173) = 0x40200000;
  *(undefined4 *)(this + 0x16b) = 0x40600000;
  *(undefined4 *)(this + 0x16f) = 0x40600000;
  *(undefined4 *)(this + 0x17f) = 0x43340000;
  *(undefined4 *)(this + 0x4a7) = 0x43960000;
  *(undefined4 *)(this + 0x4ab) = 0x43960000;
  *(undefined4 *)(this + 0x15f) = 0x428c0000;
  *(undefined4 *)(this + 0x54f) = 0;
  *(undefined4 *)(this + 0x553) = 0;
  *(undefined4 *)(this + 0x4b3) = 0x45610000;
  *(undefined4 *)(this + 0x197) = 0x41700000;
  *(undefined4 *)(this + 0x56f) = 0;
  *(undefined4 *)(this + 0x573) = _m3dVZero;
  *(undefined4 *)(this + 0x577) = DAT_00963740;
  uVar1 = DAT_00963744;
  *(undefined4 *)(this + 0x57f) = 0;
  *(undefined4 *)(this + 0x583) = 0;
  *(undefined4 *)(this + 0x57b) = uVar1;
  *(uint *)(this + 0x44f) = *(uint *)(this + 0x44f) | 0x10003;
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
    *(undefined ***)this_00 = &sncCHANNEL_3D::_vftable_;
    *(undefined4 *)(this_00 + 0x7c) = uVar1;
    *(undefined4 *)(this_00 + 0x84) = 0x42700000;
    *(undefined4 *)(this_00 + 0x88) = 0x43160000;
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
    uVar1 = DAT_005f99a4;
    *(undefined ***)this_00 = &sncCHANNEL_SPH::_vftable_;
    *(undefined4 *)(this_00 + 0xb8) = uVar1;
  }
  *(sncCHANNEL **)(this + 0x54b) = this_00;
  if (this_00 == (sncCHANNEL *)0x0) {
    return 0;
  }
  gsSND_SYSTEM::AddChannel(gsSysSound,this_00,(entIACTIVE_OBJ *)this,(objOBJ *)0x0);
  aiNPC::GetInt((aiNPC *)this,s_AI_PROP,s_isNoSFXAppear,&local_44);
  if (((*(uint *)(this + 0xb4) & 1) != 0) && (local_44 == 0)) {
    *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 1;
  }
  if ((*(uint *)(this + 0xb4) & 1) != 0) {
    *(uint *)(this + 0x547) = *(uint *)(this + 0x547) | 0x1000000;
  }
  *(undefined4 *)(this + 0x56b) = 0;
  iVar2 = aiNPC::GetStr((aiNPC *)this,s_AI_MEDUSA,s_navHeight,local_40,0x40);
  if (iVar2 != 0) {
    poVar3 = objFindName(*(objOBJ **)(gsScenePtr + 0x44),local_40);
    if (poVar3 != (objOBJ *)0x0) {
      puVar4 = (undefined4 *)operator_new(0x3c);
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        puVar4[1] = 0;
        puVar4[2] = 0;
        puVar4[3] = 0;
        puVar4[5] = 1;
        puVar4[4] = &m3dBOX::_vftable_;
        puVar4[0xc] = 0;
        puVar4[0xd] = 0;
        puVar4[0xe] = 0;
        *puVar4 = &scnDOMAIN::_vftable_;
      }
      *(undefined4 **)(this + 0x56b) = puVar4;
      puVar4[0xd] = poVar3;
      objOBJ::SetStateProcYes(poVar3,8,(_func_int_objOBJ_ptr_void_ptr *)0x0);
      (**(code **)(**(int **)(this + 0x56b) + 4))();
    }
  }
  poVar3 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_ROOT);
  *(objOBJ **)(this + 0x163) = poVar3;
  if (poVar3 == (objOBJ *)0x0) {
    return 0;
  }
  *(objOBJ **)(this + 0x527) = poVar3;
  *(uint *)poVar3 = *(uint *)poVar3 | 0x200;
  poVar3 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_ATTACKfocus);
  *(objOBJ **)(this + 0x567) = poVar3;
  if (poVar3 == (objOBJ *)0x0) {
    return 0;
  }
  *(undefined4 *)(this + 0x55b) = 0;
  *(undefined4 *)(this + 0x55f) = 0;
  countMedusaPJLs = 0;
  return 1;
}




/* from: ai_medusa.cpp
   addr: 00445220 */

void __thiscall aiMEDUSA::ParseNameClass(aiMEDUSA *this)

{
  char *pcVar1;
  objOBJ *this_00;
  undefined4 *puVar2;
  
  pcVar1 = s_;
  if (*(char **)(*(int *)(this + 0xbc) + 0x1c) != (char *)0x0) {
    pcVar1 = *(char **)(*(int *)(this + 0xbc) + 0x1c);
  }
  aiNPC_WR::ParseNameClass((aiNPC_WR *)this);
  pcVar1 = strstr(pcVar1,s__mini);
  *(undefined4 *)(this + 0x497) = 0x3f666666;
  *(undefined4 *)(this + 0x49b) = 0x3f3bbbbc;
  if (pcVar1 == (char *)0x0) {
    *(undefined4 *)(this + 0x52b) = 0x461c4000;
    *(undefined4 *)(this + 0x18b) = 0x447a0000;
    *(uint *)(this + 0x44f) = *(uint *)(this + 0x44f) | 0x40000;
  }
  else {
    *(undefined4 *)(this + 0x52b) = 0x437a0000;
    *(undefined4 *)(this + 0x18b) = 0x43480000;
    *(uint *)(this + 0x547) = *(uint *)(this + 0x547) | 0x1000;
  }
  if ((*(uint *)(this + 0x547) & 0x1000) == 0) {
    CollectPotentialEmitters(this,s_poly_stat_medusa,21.0);
    CollectPotentialEmitters(this,s_poly_colonn_medusa,17.5);
    CollectPotentialEmitters(this,s_poly_port_medusa,15.0);
    *(undefined4 *)(this + 0x56f) = 0;
    this_00 = objFindName(*(objOBJ **)(gsScenePtr + 0x44),s__dom_action_medusa);
    if (this_00 != (objOBJ *)0x0) {
      puVar2 = (undefined4 *)operator_new(0x3c);
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2[3] = 0;
        puVar2[5] = 1;
        puVar2[4] = &m3dBOX::_vftable_;
        puVar2[0xc] = 0;
        puVar2[0xd] = 0;
        puVar2[0xe] = 0;
        *puVar2 = &scnDOMAIN::_vftable_;
      }
      *(undefined4 **)(this + 0x56f) = puVar2;
      puVar2[0xd] = this_00;
      objOBJ::SetStateProcYes(this_00,8,(_func_int_objOBJ_ptr_void_ptr *)0x0);
      (**(code **)(**(int **)(this + 0x56f) + 4))();
    }
    *(uint *)(*(int *)(this + 0xbc) + 4) = *(uint *)(*(int *)(this + 0xbc) + 4) | 1;
  }
  return;
}




/* from: ai_medusa.cpp
   addr: 00445380 */

void __thiscall aiMEDUSA::CollectPotentialEmitters(aiMEDUSA *this,char *param_1,float param_2)

{
  objOBJ *poVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  objOBJ *poVar5;
  void *pvVar6;
  float *pfVar7;
  int iVar8;
  float *pfVar9;
  float *pfVar10;
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
  float fVar21;
  float fVar22;
  float fVar23;
  int local_18;
  int local_14;
  
  poVar5 = objFindName(*(objOBJ **)(gsScenePtr + 0x44),param_1);
  if ((poVar5 != (objOBJ *)0x0) && (0 < *(int *)(poVar5 + 0x10))) {
    iVar8 = *(int *)(this + 0x55f);
    iVar12 = *(int *)(poVar5 + 0x14) + iVar8;
    *(int *)(this + 0x55f) = iVar12;
    pvVar6 = apRealloc(*(void **)(this + 0x55b),iVar12 * 0x14);
    if (pvVar6 == (void *)0x0) {
      *(int *)(this + 0x55f) = *(int *)(this + 0x55f) - *(int *)(poVar5 + 0x14);
      return;
    }
    *(void **)(this + 0x55b) = pvVar6;
    pfVar10 = (float *)((int)pvVar6 + iVar8 * 0x14);
    local_14 = 0;
    if (0 < *(int *)(poVar5 + 0x14)) {
      local_18 = 0;
      do {
        if (((byte)*poVar5 & 1) == 0) {
          poVar1 = poVar5 + 0x3c;
          pfVar11 = (float *)(*(int *)(*(int *)(poVar5 + 0x28) + 0x40) + local_18);
          if (m3dSimdType == 0) {
            if (((uint)poVar1 & 0xf) == 0) {
              fVar23 = *pfVar11;
              fVar3 = pfVar11[1];
              fVar4 = pfVar11[2];
              fVar21 = fVar23 * *(float *)poVar1 + *(float *)(poVar5 + 0x6c) +
                       fVar3 * *(float *)(poVar5 + 0x4c) + fVar4 * *(float *)(poVar5 + 0x5c);
              fVar22 = fVar23 * *(float *)(poVar5 + 0x40) + *(float *)(poVar5 + 0x70) +
                       fVar3 * *(float *)(poVar5 + 0x50) + fVar4 * *(float *)(poVar5 + 0x60);
              fVar23 = fVar23 * *(float *)(poVar5 + 0x44) + *(float *)(poVar5 + 0x74) +
                       fVar3 * *(float *)(poVar5 + 0x54) + fVar4 * *(float *)(poVar5 + 100);
            }
            else {
              fVar23 = *pfVar11;
              fVar3 = pfVar11[1];
              fVar4 = pfVar11[2];
              fVar21 = fVar23 * (float)*(undefined8 *)poVar1 +
                       fVar3 * (float)*(undefined8 *)(poVar5 + 0x4c) +
                       fVar4 * (float)*(undefined8 *)(poVar5 + 0x5c) +
                       (float)*(undefined8 *)(poVar5 + 0x6c);
              fVar22 = fVar23 * (float)((ulonglong)*(undefined8 *)poVar1 >> 0x20) +
                       fVar3 * (float)((ulonglong)*(undefined8 *)(poVar5 + 0x4c) >> 0x20) +
                       fVar4 * (float)((ulonglong)*(undefined8 *)(poVar5 + 0x5c) >> 0x20) +
                       (float)((ulonglong)*(undefined8 *)(poVar5 + 0x6c) >> 0x20);
              fVar23 = fVar23 * (float)*(undefined8 *)(poVar5 + 0x44) +
                       fVar3 * (float)*(undefined8 *)(poVar5 + 0x54) +
                       fVar4 * (float)*(undefined8 *)(poVar5 + 100) +
                       (float)*(undefined8 *)(poVar5 + 0x74);
            }
            *(ulonglong *)pfVar10 = CONCAT44(fVar22,fVar21);
            pfVar10[2] = fVar23;
          }
          else if (m3dSimdType == 1) {
            FastExitMediaState();
            uVar13 = (undefined4)*(undefined8 *)pfVar11;
            uVar16 = CONCAT44(uVar13,uVar13);
            uVar13 = (undefined4)((ulonglong)*(undefined8 *)pfVar11 >> 0x20);
            uVar19 = CONCAT44(uVar13,uVar13);
            uVar20 = CONCAT44(pfVar11[2],pfVar11[2]);
            uVar14 = PackedFloatingMUL(uVar16,*(undefined8 *)poVar1);
            uVar15 = PackedFloatingMUL(uVar19,*(undefined8 *)(poVar5 + 0x4c));
            uVar17 = PackedFloatingMUL(uVar20,*(undefined8 *)(poVar5 + 0x5c));
            uVar14 = PackedFloatingADD(uVar14,*(undefined8 *)(poVar5 + 0x6c));
            uVar18 = PackedFloatingMUL(uVar16,*(undefined8 *)(poVar5 + 0x44));
            uVar16 = PackedFloatingADD(uVar15,uVar17);
            uVar15 = PackedFloatingMUL(uVar19,*(undefined8 *)(poVar5 + 0x54));
            uVar20 = PackedFloatingMUL(uVar20,*(undefined8 *)(poVar5 + 100));
            uVar19 = PackedFloatingADD(uVar18,*(undefined8 *)(poVar5 + 0x74));
            uVar16 = PackedFloatingADD(uVar14,uVar16);
            uVar14 = PackedFloatingADD(uVar15,uVar20);
            *(undefined8 *)pfVar10 = uVar16;
            uVar16 = PackedFloatingADD(uVar19,uVar14);
            pfVar10[2] = (float)uVar16;
            FastExitMediaState();
          }
          else {
            iVar12 = 0;
            pfVar7 = pfVar10;
            do {
              iVar8 = 0;
              *pfVar7 = 0.0;
              pfVar9 = (float *)(((int)poVar1 - (int)pfVar10) + (int)pfVar7);
              do {
                pfVar2 = pfVar11 + iVar8;
                fVar23 = *pfVar9;
                iVar8 = iVar8 + 1;
                pfVar9 = pfVar9 + 4;
                *pfVar7 = *pfVar2 * fVar23 + *pfVar7;
              } while (iVar8 < 3);
              iVar8 = iVar12 + iVar8 * 4;
              iVar12 = iVar12 + 1;
              *pfVar7 = *(float *)(poVar1 + iVar8 * 4) + *pfVar7;
              pfVar7 = pfVar7 + 1;
            } while (iVar12 < 3);
          }
        }
        else {
          pfVar11 = (float *)(*(int *)(*(int *)(poVar5 + 0x28) + 0x40) + local_18);
          *pfVar10 = *pfVar11;
          pfVar10[1] = pfVar11[1];
          pfVar10[2] = pfVar11[2];
        }
        pfVar10[3] = param_2;
        pfVar10[4] = 1.0;
        local_14 = local_14 + 1;
        local_18 = local_18 + 0xc;
        pfVar10 = pfVar10 + 5;
      } while (local_14 < *(int *)(poVar5 + 0x14));
    }
  }
  return;
}




/* from: ai_medusa.cpp
   addr: 00445600 */

void __thiscall aiMEDUSA::StartDeath(aiMEDUSA *this,dmgDAMAGE *param_1)

{
  undefined4 local_a8;
  m3dV local_a4 [12];
  animCREATE_DATA local_98 [18];
  m3dMATR local_86 [134];
  
  animCREATE_DATA::animCREATE_DATA(local_98);
  animINST::GetCenter(*(animINST **)(this + 0xbc),local_a4);
  m3dMATR::MakeLCS2WCS_VY(local_86,local_a4,&m3dVUnitY);
  local_a8 = 0x40000000;
  entCreate(gsScenePtr,s_sfx_medusa_death,s_sfx_medusa_death,local_98,&local_a8,0);
  aiNPC_WR_FLY::StartDeath((aiNPC_WR_FLY *)this,param_1);
  return;
}




/* from: ai_medusa.cpp
   addr: 00445680 */

void __thiscall aiMEDUSA::Explode(aiMEDUSA *this,dmgDAMAGE *param_1,int param_2)

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
  gsSND_SYSTEM::Play(gsSysSound,(sncSOUND_DESCR_3D *)&DAT_0060bfe0,local_c);
  msgSYSTEM::PostMsg(&msgSystem,(msgADDR *)this,2,(msgADDR *)this);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_medusa.cpp
   addr: 00445710 */

int __thiscall aiMEDUSA::SelectGoal(aiMEDUSA *this)

{
  int iVar1;
  float fStack_1c;
  m3dV amStack_18 [4];
  float fStack_14;
  m3dV amStack_c [12];
  
  InnerSelectGoal(this);
  (**(code **)(*(int *)this + 0x1b0))();
  aiENEMY::GetPos((aiENEMY *)(this + 0x4bb),amStack_18);
  animINST::GetPos(*(animINST **)(this + 0xbc),amStack_c);
  fStack_1c = fStack_14 + ___real_40000000;
  if (*(int **)(this + 0x56b) != (int *)0x0) {
    iVar1 = (**(code **)(**(int **)(this + 0x56b) + 0x10))(amStack_c);
    if ((iVar1 != 0) && (fStack_1c < *(float *)(*(int *)(this + 0x56b) + 0xc))) {
      fStack_1c = *(float *)(*(int *)(this + 0x56b) + 0xc);
    }
  }
  *(float *)(this + 0x3f7) = fStack_1c + ___real_41000000;
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_medusa.cpp
   addr: 004457B0 */

int __thiscall aiMEDUSA::InnerSelectGoal(aiMEDUSA *this)

{
  int iVar1;
  float extraout_ECX;
  float extraout_EDX;
  float fVar2;
  
  iVar1 = aiNPC_WR::SelectEscapeWhenOut((aiNPC_WR *)this);
  if (iVar1 != 0) {
    *(undefined4 *)(this + 0x57f) = 0x40a00000;
    *(undefined4 *)(this + 0x573) = *(undefined4 *)(this + 0x3f3);
    *(undefined4 *)(this + 0x577) = *(undefined4 *)(this + 0x3f7);
    *(undefined4 *)(this + 0x57b) = *(undefined4 *)(this + 0x3fb);
    return 1;
  }
  if ((_DAT_005d362c < *(float *)(this + 0x57f)) && (((byte)this[1099] & 1) == 0)) {
    *(undefined4 *)(this + 0x3f3) = *(undefined4 *)(this + 0x573);
    *(undefined4 *)(this + 0x3f7) = *(undefined4 *)(this + 0x577);
    *(undefined4 *)(this + 0x3fb) = *(undefined4 *)(this + 0x57b);
    *(undefined4 *)(this + 0x3ff) = *(undefined4 *)(this + 0x573);
    *(undefined4 *)(this + 0x403) = *(undefined4 *)(this + 0x577);
    *(undefined4 *)(this + 0x407) = *(undefined4 *)(this + 0x57b);
    return 1;
  }
  if (___real_40400000 < *(float *)(this + 0x583)) {
    iVar1 = *(int *)this;
    fVar2 = m3dRandRange(extraout_ECX,extraout_EDX);
    (**(code **)(iVar1 + 0x1b4))(fVar2);
    *(undefined4 *)(this + 0x57f) = 0x41000000;
    *(undefined4 *)(this + 0x573) = *(undefined4 *)(this + 0x3f3);
    *(undefined4 *)(this + 0x577) = *(undefined4 *)(this + 0x3f7);
    *(undefined4 *)(this + 0x57b) = *(undefined4 *)(this + 0x3fb);
    return 1;
  }
  iVar1 = aiNPC::SelectGoal((aiNPC *)this);
  return (uint)(iVar1 != 0);
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_medusa.cpp
   addr: 004458C0 */

int __thiscall aiMEDUSA::EvalAnimGoalSeq(aiMEDUSA *this)

{
  int iVar1;
  
  iVar1 = aiENEMY::IsDead((aiENEMY *)(this + 0x4bb));
  if (((iVar1 == 0) && ((*(uint *)(this + 1099) & 0x80010000) == 0)) &&
     (((*(uint *)(this + 0x547) & 0x1000) == 0 || ((*(uint *)(this + 0x51b) & 0x200) == 0)))) {
    if ((*(uint *)(this + 0x547) & 1) != 0) {
      return 2;
    }
    if (countMedusaPJLs < 0xc) {
      if ((*(uint *)(this + 1099) & 0x10000000) != 0) {
        iVar1 = m3dRandSelect(1,0);
        return iVar1;
      }
      if (*(float *)(this + 0x197) * ___real_3fc00000 < *(float *)(this + 0x3cf)) {
        iVar1 = m3dRandSelect(1,0);
        return iVar1;
      }
    }
  }
  return 0;
}




/* from: ai_medusa.cpp
   addr: 00445950 */

void __thiscall aiMEDUSA::ProcessActionFrame(aiMEDUSA *this)

{
  int iVar1;
  
  iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),1,0);
  if (iVar1 != 0) {
    LaunchOneProjectile(this,*(objOBJ **)(this + 0x567));
    countMedusaPJLs = countMedusaPJLs + 1;
  }
  return;
}




/* from: ai_medusa.cpp
   addr: 00445980 */

void __thiscall aiMEDUSA::UpdateTimers(aiMEDUSA *this)

{
  float extraout_EDX;
  float extraout_EDX_00;
  
  aiNPC_WR::UpdateTimers((aiNPC_WR *)this);
  m3dUpdateTimeField((float *)(this + 0x54f),extraout_EDX);
  m3dUpdateTimeField((float *)(this + 0x553),extraout_EDX_00);
  m3dUpdateTimeField((float *)(this + 0x57f),gsElapsedTime);
  return;
}




/* from: ai_medusa.cpp
   addr: 004459C0 */

void __thiscall aiMEDUSA::PlaySounds(aiMEDUSA *this)

{
  if (((byte)this[0xf8] & 2) != 0) {
    (**(code **)(**(int **)(this + 0x54b) + 4))(&DAT_0060bfe0,0);
  }
  if (((byte)this[0xf8] & 4) != 0) {
    (**(code **)(**(int **)(this + 0x54b) + 4))(&DAT_0060bf78,0);
  }
  if (((byte)this[0xf8] & 8) != 0) {
    (**(code **)(**(int **)(this + 0x54b) + 4))(&DAT_0060c048,0);
  }
  if (((byte)this[0xf8] & 0x10) != 0) {
    (**(code **)(**(int **)(this + 0x54b) + 4))(&DAT_0060c0b0,0);
  }
  aiNPC::PlaySounds((aiNPC *)this);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_medusa.cpp
   addr: 00445A50 */

void __thiscall aiMEDUSA::ClampGoalFrame(aiMEDUSA *this,float param_1,m3dV *param_2,m3dV *param_3)

{
  int iVar1;
  int iVar2;
  float local_c;
  float local_8;
  float local_4;
  
  aiNPC::ClampGoalFrame((aiNPC *)this,param_1,param_2,param_3);
  local_4 = DAT_00963744;
  iVar2 = 0;
  local_c = _m3dVZero;
  local_8 = DAT_00963740;
  if (0 < *(int *)(this + 0x55f)) {
    iVar1 = 0;
    do {
      AddEmitterShift(this,(aiEMITTER *)(*(int *)(this + 0x55b) + iVar1),param_2,(m3dV *)&local_c);
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x14;
    } while (iVar2 < *(int *)(this + 0x55f));
  }
  *(float *)param_3 = local_c + *(float *)param_3;
  *(float *)(param_3 + 4) = local_8 + *(float *)(param_3 + 4);
  *(float *)(param_3 + 8) = local_4 + *(float *)(param_3 + 8);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_medusa.cpp
   addr: 00445AF0 */

void __thiscall
aiMEDUSA::AddEmitterShift(aiMEDUSA *this,aiEMITTER *param_1,m3dV *param_2,m3dV *param_3)

{
  aiEMITTER *paVar1;
  aiEMITTER *paVar2;
  aiEMITTER *paVar3;
  ulonglong uVar4;
  undefined8 extraout_MM1;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  uint local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_10;
  float local_c [2];
  float local_4;
  
  paVar2 = param_1;
  animINST::GetPos(*(animINST **)(this + 0xbc),(m3dV *)local_c);
  local_18 = local_c[0] - *(float *)param_1;
  local_10 = local_4 - *(float *)(param_1 + 8);
  fVar7 = local_18 * local_18 + local_10 * local_10;
  if (m3dSimdType == 0) {
    fVar7 = fVar7 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar9 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
    fVar8 = auVar9._0_4_;
    param_1 = (aiEMITTER *)
              (`float___cdecl_m3dSqrt(float)'::__l2::half * fVar8 *
               (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar7 * fVar8 * fVar8) * fVar7);
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar4 = (ulonglong)(uint)fVar7;
    uVar5 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar4);
    uVar6 = PackedFloatingMUL(uVar5,uVar5);
    uVar6 = PackedFloatingReciprocalSQRIter1(uVar6,uVar4);
    uVar5 = PackedFloatingReciprocalIter2(uVar6,uVar5);
    uVar5 = PackedFloatingMUL(uVar5,uVar4);
    param_1 = (aiEMITTER *)uVar5;
    FastExitMediaState();
  }
  else {
    param_1 = (aiEMITTER *)SQRT(fVar7);
  }
  if (((float)param_1 <= *(float *)(paVar2 + 0xc)) &&
     (*(float *)(param_2 + 4) * ___real_00000000 +
      local_18 * *(float *)param_2 + local_10 * *(float *)(param_2 + 8) <=
      (float)param_1 * ___real_3e4ccccd)) {
    paVar1 = *(aiEMITTER **)(paVar2 + 0x10);
    paVar2 = *(aiEMITTER **)(paVar2 + 0xc);
    paVar3 = paVar2;
    if ((___real_40800000 <= (float)param_1) &&
       (paVar3 = paVar1, (float)param_1 <= ___real_41200000)) {
      local_28 = (uint)(6.0 < _DAT_005d362c);
      if ((float)local_28 == ___real_00000000) {
        paVar3 = (aiEMITTER *)
                 (((float)param_1 - ___real_40800000) * ((float)paVar1 - (float)paVar2) *
                  ___real_3e2aaaab + (float)paVar2);
      }
      else {
        paVar3 = (aiEMITTER *)(((float)paVar1 + (float)paVar2) * ___real_3f000000);
      }
    }
    param_1 = paVar3;
    animINST::GetDirRight(*(animINST **)(this + 0xbc),(m3dV *)&local_24);
    if (local_20 * ___real_00000000 + local_24 * local_18 + local_1c * local_10 < ___real_00000000)
    {
      local_24 = -local_24;
      local_20 = -local_20;
      local_1c = -local_1c;
    }
    fVar7 = gsElapsedTime * (float)param_1;
    *(float *)param_3 = local_24 * fVar7 + *(float *)param_3;
    *(float *)(param_3 + 4) = local_20 * fVar7 + *(float *)(param_3 + 4);
    *(float *)(param_3 + 8) = local_1c * fVar7 + *(float *)(param_3 + 8);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_medusa.cpp
   addr: 00445D50 */

void __thiscall aiMEDUSA::LaunchOneProjectile(aiMEDUSA *this,objOBJ *param_1)

{
  entENTITY *peVar1;
  int iVar2;
  objOBJ *poVar3;
  undefined4 *puVar4;
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
  undefined4 local_b3;
  undefined4 local_af;
  undefined4 local_ab;
  m3dV local_a4 [12];
  animCREATE_DATA local_98 [18];
  undefined4 local_86 [33];
  
  local_100 = _m3dVZero;
  local_f4 = _m3dVZero;
  local_fc = DAT_00963740;
  local_f0 = DAT_00963740;
  local_e4 = DAT_005d3630;
  local_e0 = 1;
  local_b4 = 1;
  local_104 = (physINIT)0x0;
  local_103 = 0x40;
  local_f8 = DAT_00963744;
  local_ec = DAT_00963744;
  local_e8 = 0x3dcccccd;
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
  local_b3 = 0;
  local_af = 0x3dcccccd;
  local_ab = 0x3f000000;
  local_102 = 0x5d;
  animCREATE_DATA::animCREATE_DATA(local_98);
  animINST::Validate(*(animINST **)(this + 0xbc),4);
  objOBJ::GetOrigin(param_1,local_a4);
  local_bc = *(undefined4 *)(this + 0x8c);
  poVar3 = param_1 + 0x3c;
  puVar4 = local_86;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *(undefined4 *)poVar3;
    poVar3 = poVar3 + 4;
    puVar4 = puVar4 + 1;
  }
  local_b3 = 2;
  local_e8 = 0x3f800000;
  local_e4 = 0x447a0000;
  local_e0 = 5;
  local_d8 = 0x3f000000;
  local_dc = 0x3f000000;
  local_cc = 0x41f00000;
  local_c8 = 0x40000000;
  local_c0 = 3;
  AimPjlToPlayer(this,local_a4,&local_104);
  peVar1 = entCreate(gsScenePtr,s_pjl_medusa,s_pjl_medusa,local_98,&local_104,0);
  if (peVar1 != (entENTITY *)0x0) {
    gsEffApplyLMChar(peVar1,(cdtINFO *)(this + 0x453),0);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_medusa.cpp
   addr: 00445EE0 */

void __thiscall aiMEDUSA::AimPjlToPlayer(aiMEDUSA *this,m3dV *param_1,physINIT *param_2)

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
    iVar3 = aiPLANNER::GetEnemyMeetPoint(aiAttackPlanner,(aiNPC *)this,15.0,(m3dV *)&local_c);
    if (iVar3 != 0) {
      local_8 = local_8 + ___real_40800000;
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
      goto LAB_00445fd1;
    }
  }
  aiENEMY::GetPos((aiENEMY *)(this + 0x4bb),(m3dV *)&local_c);
  local_24 = local_18;
  local_20 = local_14;
  local_1c = local_10;
  in_MM2 = extraout_MM1;
LAB_00445fd1:
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
  if (*(float *)(this + 0x18b) < (float)param_1) {
    local_24 = local_18;
    local_20 = local_14;
    local_1c = local_10;
  }
  fVar7 = (float)param_1 * ___real_3d888889;
  local_20 = local_20 * ___real_41700000;
  local_1c = local_1c * ___real_41700000;
  fVar9 = *(float *)(pmVar2 + 4);
  *(float *)(param_2 + 4) = local_24 * ___real_41700000;
  fVar1 = fVar7 * fVar7 * ___real_00000000;
  *(float *)(param_2 + 8) = local_20;
  *(float *)(param_2 + 0xc) = local_1c;
  *(float *)(param_2 + 8) = ((local_8 - fVar9) - fVar1) / fVar7;
  *(undefined4 *)(param_2 + 0x10) = _m3dVZero;
  *(undefined4 *)(param_2 + 0x14) = DAT_00963740;
  *(undefined4 *)(param_2 + 0x18) = DAT_00963744;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_medusa.cpp
   addr: 00446130 */

int __thiscall aiMEDUSA::ProcessCDT_FIREABLE(aiMEDUSA *this,dmgDAMAGE *param_1)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  aiNPC *paVar5;
  int iVar6;
  int iVar7;
  m3dMATR *pmVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  undefined8 extraout_MM1;
  undefined8 extraout_MM1_00;
  undefined8 extraout_MM1_01;
  undefined8 uVar11;
  undefined8 uVar12;
  float fVar13;
  undefined1 auVar14 [16];
  float local_11c;
  char *local_118;
  char *local_114;
  float local_110;
  undefined4 local_10c;
  float local_108;
  float local_104;
  undefined4 local_100;
  float local_fc;
  m3dV local_f8 [12];
  float local_ec [2];
  float local_e4;
  float local_e0;
  float local_dc;
  m3dMATR local_d8 [64];
  animCREATE_DATA local_98 [18];
  undefined4 local_86 [33];
  
  animCREATE_DATA::animCREATE_DATA(local_98);
  aiNPC_WR::ProcessCDT_FIREABLE((aiNPC_WR *)this,param_1);
  if ((*(uint *)(this + 1099) & 0x200000) != 0) {
    aiPLANNER::SetBoss(aiAttackPlanner,(aiNPC *)0x0);
  }
  if (param_1 == (dmgDAMAGE *)0x0) {
    return 1;
  }
  if (*(int *)(param_1 + 4) != 0) {
    return 1;
  }
  if ((*(uint *)(this + 1099) & 0x200000) == 0) {
    if (_DAT_005d362c <= *(float *)(this + 0x51f)) goto switchD_004461ba_default;
    switch(*(undefined4 *)(param_1 + 0x1c)) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 7:
    case 8:
      uVar4 = *(uint *)(this + 0xf8) | 4;
      goto LAB_004461e8;
    case 6:
    case 9:
    case 10:
      *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 4;
      *(uint *)(this + 0x547) = *(uint *)(this + 0x547) | 1;
    }
  }
  else {
    uVar4 = *(uint *)(this + 0xf8) | 2;
LAB_004461e8:
    *(uint *)(this + 0xf8) = uVar4;
  }
switchD_004461ba_default:
  animINST::GetDir(*(animINST **)(this + 0xbc),local_f8);
  if ((*(int *)(aiAttackPlanner + 0x28) < 10) && ((*(uint *)(this + 1099) & 0x200000) == 0)) {
    local_110 = *(float *)(param_1 + 0x10);
    local_10c = *(undefined4 *)(param_1 + 0x14);
    local_108 = *(float *)(param_1 + 0x18);
    if ((*(int *)(this + 0x56f) != 0) &&
       (paVar5 = aiNPC::GetNext((aiNPC *)0x0,0), paVar5 != (aiNPC *)0x0)) {
LAB_00446254:
      if ((paVar5 == (aiNPC *)this) || (*(animINST **)(paVar5 + 0xbc) == (animINST *)0x0))
      goto LAB_00446330;
      animINST::GetPos(*(animINST **)(paVar5 + 0xbc),(m3dV *)local_ec);
      local_11c = (local_ec[0] - local_110) * (local_ec[0] - local_110) +
                  (local_e4 - local_108) * (local_e4 - local_108);
      if (m3dSimdType == 0) {
        local_11c = local_11c + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
        auVar14 = rsqrtss(ZEXT416((uint)local_11c),ZEXT416((uint)local_11c));
        fVar13 = auVar14._0_4_;
        local_11c = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar13 *
                    (`float___cdecl_m3dSqrt(float)'::__l2::three - local_11c * fVar13 * fVar13) *
                    local_11c;
      }
      else if (m3dSimdType == 1) {
        FastExitMediaState();
        uVar10 = (ulonglong)(uint)local_11c;
        uVar11 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar10);
        uVar12 = PackedFloatingMUL(uVar11,uVar11);
        uVar12 = PackedFloatingReciprocalSQRIter1(uVar12,uVar10);
        uVar11 = PackedFloatingReciprocalIter2(uVar12,uVar11);
        uVar11 = PackedFloatingMUL(uVar11,uVar10);
        local_11c = (float)uVar11;
        FastExitMediaState();
      }
      else {
        local_11c = SQRT(local_11c);
      }
      if (___real_40400000 <= local_11c) goto LAB_00446330;
      local_dc = 80.0;
      iVar7 = 0;
      do {
        scnDOMAIN::GetRandomPoint(*(scnDOMAIN **)(this + 0x56f),(m3dV *)&local_104);
        fVar13 = local_104 - *(float *)(param_1 + 0x10);
        local_11c = fVar13 * fVar13 +
                    (local_fc - *(float *)(param_1 + 0x18)) *
                    (local_fc - *(float *)(param_1 + 0x18));
        if (m3dSimdType == 0) {
          local_11c = local_11c + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
          auVar14 = rsqrtss(ZEXT416((uint)local_11c),ZEXT416((uint)local_11c));
          fVar13 = auVar14._0_4_;
          local_11c = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar13 *
                      (`float___cdecl_m3dSqrt(float)'::__l2::three - local_11c * fVar13 * fVar13) *
                      local_11c;
        }
        else if (m3dSimdType == 1) {
          FastExitMediaState();
          uVar10 = (ulonglong)(uint)local_11c;
          uVar11 = PackedFloatingReciprocalSQRAprox(extraout_MM1_00,uVar10);
          uVar12 = PackedFloatingMUL(uVar11,uVar11);
          uVar12 = PackedFloatingReciprocalSQRIter1(uVar12,uVar10);
          uVar11 = PackedFloatingReciprocalIter2(uVar12,uVar11);
          uVar11 = PackedFloatingMUL(uVar11,uVar10);
          local_11c = (float)uVar11;
          FastExitMediaState();
        }
        else {
          local_11c = SQRT(local_11c);
        }
        local_e0 = local_11c;
        fVar13 = local_110;
        uVar1 = local_10c;
        fVar2 = local_108;
        fVar3 = local_dc;
        if ((local_11c <= ___real_42a00000) && (iVar7 = iVar7 + 1, local_11c < local_dc)) {
          for (paVar5 = aiNPC::GetNext((aiNPC *)0x0,0); fVar13 = local_104, uVar1 = local_100,
              fVar2 = local_fc, fVar3 = local_e0, paVar5 != (aiNPC *)0x0;
              paVar5 = aiNPC::GetNext(paVar5,0)) {
            if ((paVar5 != (aiNPC *)this) && (*(animINST **)(paVar5 + 0xbc) != (animINST *)0x0)) {
              animINST::GetPos(*(animINST **)(paVar5 + 0xbc),(m3dV *)local_ec);
              local_11c = (local_ec[0] - local_104) * (local_ec[0] - local_104) +
                          (local_e4 - local_fc) * (local_e4 - local_fc);
              if (m3dSimdType == 0) {
                local_11c = local_11c + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
                auVar14 = rsqrtss(ZEXT416((uint)local_11c),ZEXT416((uint)local_11c));
                fVar13 = auVar14._0_4_;
                local_11c = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar13 *
                            (`float___cdecl_m3dSqrt(float)'::__l2::three -
                            local_11c * fVar13 * fVar13) * local_11c;
              }
              else if (m3dSimdType == 1) {
                FastExitMediaState();
                uVar10 = (ulonglong)(uint)local_11c;
                uVar11 = PackedFloatingReciprocalSQRAprox(extraout_MM1_01,uVar10);
                uVar12 = PackedFloatingMUL(uVar11,uVar11);
                uVar12 = PackedFloatingReciprocalSQRIter1(uVar12,uVar10);
                uVar11 = PackedFloatingReciprocalIter2(uVar12,uVar11);
                uVar11 = PackedFloatingMUL(uVar11,uVar10);
                local_11c = (float)uVar11;
                FastExitMediaState();
              }
              else {
                local_11c = SQRT(local_11c);
              }
              fVar13 = local_110;
              uVar1 = local_10c;
              fVar2 = local_108;
              fVar3 = local_dc;
              if (local_11c < ___real_40400000) break;
            }
          }
        }
        local_dc = fVar3;
        local_108 = fVar2;
        local_10c = uVar1;
        local_110 = fVar13;
      } while (iVar7 < 0x32);
      local_10c = *(undefined4 *)(param_1 + 0x14);
    }
LAB_00446572:
    m3dMATR::MakeLCS2WCS_VZ(local_d8,(m3dV *)&local_110,local_f8);
    iVar7 = *(int *)(param_1 + 0x1c);
    pmVar8 = local_d8;
    puVar9 = local_86;
    for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar9 = *(undefined4 *)pmVar8;
      pmVar8 = pmVar8 + 4;
      puVar9 = puVar9 + 1;
    }
    SelectOpponentToSpawn(this,iVar7,&local_118,&local_114);
    entCreate(gsScenePtr,local_118,local_114,local_98,(void *)0x0,0);
  }
  return 1;
LAB_00446330:
  paVar5 = aiNPC::GetNext(paVar5,0);
  if (paVar5 == (aiNPC *)0x0) goto LAB_00446572;
  goto LAB_00446254;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_medusa.cpp
   addr: 00446600 */

void __thiscall
aiMEDUSA::SelectOpponentToSpawn(aiMEDUSA *this,int param_1,char **param_2,char **param_3)

{
  float fVar1;
  
  fVar1 = m3dRandom();
  if (fVar1 < ___real_3e19999a) {
    *param_2 = s_ai_amur;
    *param_3 = s_ai_amur;
    return;
  }
  switch(param_1) {
  case 2:
  case 4:
  case 5:
  case 7:
    goto switchD_0044663e_caseD_2;
  case 6:
  case 9:
  case 10:
    break;
  case 8:
    fVar1 = m3dRandom();
    if (fVar1 < ___real_3e4ccccd) {
      *param_2 = s_ai_skel_spear;
      *param_3 = &s_ai_skel;
      return;
    }
    fVar1 = m3dRandom();
    if (___real_3e4ccccd <= fVar1) {
      fVar1 = m3dRandom();
      if (___real_3f19999a <= fVar1) {
        *param_2 = s_ai_skel_flexible;
        *param_3 = &s_ai_skel;
        return;
      }
      *param_2 = s_ai_mino;
      *param_3 = s_ai_mino;
      return;
    }
  case 0:
  case 1:
  case 3:
    *param_2 = s_ai_rat;
    *param_3 = s_ai_rat;
    return;
  default:
    *param_2 = s_ai_rat;
    *param_3 = s_ai_rat;
    return;
  }
  fVar1 = m3dRandom();
  if (fVar1 < ___real_3ecccccd) {
    *param_2 = s_ai_mino;
    *param_3 = s_ai_mino;
    return;
  }
  fVar1 = m3dRandom();
  if (fVar1 < ___real_3e4ccccd) {
    *param_2 = s_ai_skel_spear;
    *param_3 = &s_ai_skel;
    return;
  }
  fVar1 = m3dRandom();
  if (fVar1 < ___real_3ecccccd) {
    *param_2 = s_ai_skel_flexible;
    *param_3 = &s_ai_skel;
    return;
  }
switchD_0044663e_caseD_2:
  *param_3 = s_ai_glad;
  fVar1 = m3dRandom();
  if (fVar1 < ___real_3e99999a) {
    *param_2 = s_ai_glad_knife;
    return;
  }
  fVar1 = m3dRandom();
  if (___real_3ecccccd <= fVar1) {
    fVar1 = m3dRandom();
    if (___real_3f000000 <= fVar1) {
      *param_2 = s_ai_glad_knife_fat;
      return;
    }
    *param_2 = s_ai_glad_mace_fat;
    return;
  }
  *param_2 = s_ai_glad_mace;
  return;
}




/* from: ai_medusa.cpp
   addr: 00446800 */

void __thiscall aiMEDUSA::FillSoundFlags(aiMEDUSA *this)

{
  int iVar1;
  
  if ((*(uint *)(*(int *)(this + 0xbc) + 4) & 0x4000) != 0) {
    iVar1 = *(int *)(*(int *)(this + 0xbc) + 0xe0);
    if (iVar1 == 0) {
      *(undefined4 *)(this + 0xf8) = 0x10;
    }
    else if (iVar1 == 1) {
      *(undefined4 *)(this + 0xf8) = 8;
      return;
    }
  }
  return;
}




/* from: ai_medusa.cpp
   addr: 00446840 */

void __thiscall aiMEDUSA::Think(aiMEDUSA *this)

{
  aiNPC_WR::Think((aiNPC_WR *)this);
  aiNPC_WR::UpdateInAreaFlags((aiNPC_WR *)this);
  if (*(int *)(*(int *)(this + 0xbc) + 0xe0) == 2) {
    *(undefined4 *)(this + 0x51f) = 0x41200000;
  }
  return;
}




/* from: ai_medusa.cpp
   addr: 00446870 */

void __thiscall aiMEDUSA::PostThink(aiMEDUSA *this)

{
  aiNPC_WR::PostThink((aiNPC_WR *)this);
  *(uint *)(this + 0x547) = *(uint *)(this + 0x547) & 0xfffffffe;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_medusa.cpp
   addr: 00446890 */

int __thiscall aiMEDUSA::StartPassivePhysics(aiMEDUSA *this,dmgDAMAGE *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  m3dV local_44 [12];
  undefined1 local_38;
  undefined1 local_37;
  undefined2 local_36;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_30 = DAT_00963740;
  local_24 = DAT_00963740;
  local_34 = _m3dVZero;
  local_28 = _m3dVZero;
  local_38 = 0;
  local_37 = 0x40;
  local_2c = DAT_00963744;
  local_20 = DAT_00963744;
  local_1c = 0x3dcccccd;
  local_18 = DAT_005d3630;
  local_14 = 1;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  local_36 = 0x38;
  objOBJ::GetOrigin(*(objOBJ **)(this + 0x527),local_44);
  dmgGetOrgDir(param_1,local_44,(m3dV *)0x0,(m3dV *)&local_34,(float *)0x0);
  local_24 = DAT_00963740;
  local_20 = DAT_00963744;
  local_1c = 0x3f800000;
  local_14 = 0xffffffff;
  local_c = 0x3f4ccccd;
  local_10 = 0;
  local_18 = 0xbf800000;
  local_30 = 0;
  local_28 = _m3dVZero;
  (**(code **)**(undefined4 **)(this + 0x43f))(&local_38);
  puVar2 = (undefined4 *)(*(int *)(this + 0xbc) + 0x60);
  puVar3 = (undefined4 *)(*(int *)(this + 0x43f) + 8);
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(uint *)(*(int *)(this + 0x43f) + 4) = *(uint *)(*(int *)(this + 0x43f) + 4) | 4;
  physMATH::AddEntCDTExclude(*(physMATH **)(this + 0x43f),(entENTITY *)this);
  iVar1 = *(int *)(this + 0xbc);
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) & 0xffffffef;
  }
  return 1;
}




/* from: ai_medusa.cpp
   addr: 004469F0 */

entENTITY * __fastcall aiMEDUSA::Create(animINST *param_1)

{
  aiNPC *this;
  
  this = (aiNPC *)operator_new(0x587);
  if (this != (aiNPC *)0x0) {
    aiNPC::aiNPC(this);
    *(undefined4 *)(this + 0x51b) = 0;
    *(undefined4 *)(this + 0x527) = 0;
    *(undefined4 *)(this + 0x547) = 0;
    *(undefined4 *)(this + 0x54b) = 0;
    *(undefined4 *)(this + 0x55b) = 0;
    *(undefined4 *)(this + 0x567) = 0;
    *(undefined4 *)(this + 0x56b) = 0;
    *(undefined4 *)(this + 0x56f) = 0;
    *(undefined ***)this = &_vftable_;
    *(undefined4 *)(this + 0x94) = 0x13;
    return (entENTITY *)this;
  }
  return (entENTITY *)0x0;
}


