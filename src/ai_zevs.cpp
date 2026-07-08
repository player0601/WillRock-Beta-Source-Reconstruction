/* from: ai_zevs.cpp
   addr: 00456490 */

void aiZevsSndList(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  sncSOUND_DESCR *this;

  // function is quite strange, bitting/swimming sounds
  apNAME::SetName((apNAME *)&_aiZevsSndList, zevs_being_hit);
  _DAT_0060df4c = 0x40000;
  _DAT_0060df50 = 0;
  _DAT_0060df54 = 0;
  _DAT_0060df58 = 0;
  _DAT_0060df5c = 0;
  _DAT_0060df60 = 0;
  _DAT_0060df64 = 0;
  _DAT_0060df68 = 0;
  _DAT_0060df6c = 0;
  _DAT_0060df08 = &sncSOUND_DESCR_3D::_vftable_;
   
  apNAME::SetName((apNAME *)&_aiZevsSndDeath, zevs_death);
  _DAT_0060dfb4 = 0x40000;
  _DAT_0060dfb8 = 0;
  _DAT_0060dfbc = 0;
  _DAT_0060dfc0 = 0;
  _DAT_0060dfc4 = 0;
  _DAT_0060dfc8 = 0;
  _DAT_0060dfcc = 0;
  _DAT_0060dfd0 = 0;
  _DAT_0060dfd4 = 0;
  _DAT_0060df70 = &sncSOUND_DESCR_3D::_vftable_;
   
  apNAME::SetName((apNAME *)&_aiZevsSndSwim, zevs_swim);
  _DAT_0060e01c = 0x40000;
  _DAT_0060e020 = 0;
  _DAT_0060e024 = 0;
  _DAT_0060e028 = 0;
  _DAT_0060e02c = 0;
  _DAT_0060e030 = 0;
  _DAT_0060e034 = 0;
  _DAT_0060e038 = 0;
  _DAT_0060e03c = 0;
  _DAT_0060dfd8 = &sncSOUND_DESCR_3D::_vftable_;

  // *insert squidward bite gif*
  apNAME::SetName((apNAME *)&_aiZevsSndBite, zevs_bite);
  _DAT_0060e084 = 0x40000;
  _DAT_0060e088 = 0;
  _DAT_0060e08c = 0;
  _DAT_0060e090 = 0;
  _DAT_0060e094 = 0;
  _DAT_0060e098 = 0;
  _DAT_0060e09c = 0;
  _DAT_0060e0a0 = 0;
  _DAT_0060e0a4 = 0;
  _DAT_0060e040 = &sncSOUND_DESCR_3D::_vftable_;

  // allocate 2 empty sound slots 
  iVar2 = 2;
  puVar3 = &DAT_0060e0a8;
  for (iVar1 = 0x34; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = 0; // ...for it to be zeroed out and never used
    puVar3 = puVar3 + 1;
  }
  // then init them as empty sound slots
  this = (sncSOUND_DESCR *)&DAT_0060e0a8;
  do {
    sncSOUND_DESCR::sncSOUND_DESCR(this);
    *(undefined4 *)(this + 0x60) = 0;
    *(undefined4 *)(this + 100) = 0;
    *(undefined ***)this = &sncSOUND_DESCR_3D::_vftable_;
    this = this + 0x68;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

/* from: ai_zevs.cpp
   addr: 00456610 */

int __fastcall aiZevsInit(void)

{
  int iVar1;
  
  iVar1 = entRegisterClass(ai_zevs, $NPC, 0x32, aiZEVS::Create, ai_zevs, 0);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = aiPjlZevsMoteInit();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = wrsfxZeusInit();
  if (iVar1 == 0) {
    return 0;
  }
  aiZEVS::pTexStars = txmMANAGER::Add(txmManager, sfx_zeus_death_stars, 0x40003, 1);
  if (aiZEVS::pTexStars == NULL) {
    return 0;
  }
  aiZEVS::pTexLgtn = txmMANAGER::Add(txmManager, sfx_zeus_death_lgtn, 0x40003, 1);
  return (uint)(aiZEVS::pTexLgtn != NULL);
}

/* from: ai_zevs.cpp
   addr: 004566A0 */

int __thiscall aiZEVS::SetupAniSystem(aiZEVS *this)

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
  iVar6 = 5;
  *(undefined4 *)(paVar1 + 0x8c) = 5;
  puVar2 = (undefined4 *)operator_new(0x2ac);
  if (puVar2 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = puVar2 + 1;
    *puVar2 = 5;
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
  _entAnimSetSeqName(paVar1,0,s_ZEVS_SEQ_BREATHE);
  _entAnimSetSeqName(paVar1,1,s_ZEVS_SEQ_BASH);
  _entAnimSetSeqName(paVar1,3,s_ZEVS_SEQ_LOOK);
  _entAnimSetSeqName(paVar1,2,s_ZEVS_SEQ_BLOW);
  _entAnimSetSeqName(paVar1,4,s_ZEVS_SEQ_TURN);
  entAnimAssignTplSeq(paVar1,local_8,local_4);
  this_00 = (animSYSTEM *)operator_new(0x14);
  if ((this_00 != (animSYSTEM *)0x0) &&
     (piVar4 = (int *)animSYSTEM::animSYSTEM(this_00,5,0), piVar4 != (int *)0x0)) {
    *(int **)(paVar1 + 0xa4) = piVar4;
    (**(code **)(*piVar4 + 4))(0,1,1,1,0);
    (**(code **)(*piVar4 + 4))(0,3,1,3,0);
    (**(code **)(*piVar4 + 4))(0,2,1,2,0);
    (**(code **)(*piVar4 + 4))(1,0,1,0,0);
    (**(code **)(*piVar4 + 4))(1,3,1,3,0);
    (**(code **)(*piVar4 + 4))(1,2,1,2,0);
    (**(code **)(*piVar4 + 4))(3,0,1,0,0);
    (**(code **)(*piVar4 + 4))(3,1,1,1,0);
    (**(code **)(*piVar4 + 4))(3,2,1,2,0);
    (**(code **)(*piVar4 + 4))(2,0,1,0,0);
    (**(code **)(*piVar4 + 4))(2,1,1,1,0);
    (**(code **)(*piVar4 + 4))(2,3,1,3,0);
    (**(code **)(*piVar4 + 4))(2,2,1,3,0);
    (**(code **)(*piVar4 + 4))(1,1,1,0,0);
    if (local_8 != (animSEQ *)0x0) {
      operator_delete(local_8 + -4);
    }
    return 1;
  }
  return 0;
}




/* from: ai_zevs.cpp
   addr: 004568D0 */

void __thiscall aiZEVS::SetMovementSpeed(aiZEVS *this)

{
  *(uint *)(this + 1099) = *(uint *)(this + 1099) | 0x600;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_zevs.cpp
   addr: 004568E0 */

int __thiscall aiZEVS::ProcessINIT(aiZEVS *this,void *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  sncCHANNEL *this_00;
  objOBJ *poVar4;
  uint uVar5;
  char *pcVar6;
  
  iVar3 = aiNPC_WR::ProcessINIT((aiNPC_WR *)this,param_1);
  if (iVar3 == 0) {
    return 0;
  }
  *(undefined4 *)(this + 0xd0) = 0x461c4000;
  *(undefined4 *)(this + 0xcc) = 0x461c4000;
  *(undefined4 *)(this + 0x52b) = 0x461c4000;
  *(undefined4 *)(this + 0x4a7) = 0x43960000;
  *(undefined4 *)(this + 0x4ab) = 0x43960000;
  *(undefined4 *)(this + 0x16b) = 0x41700000;
  *(undefined4 *)(this + 0x16f) = 0x41700000;
  *(undefined4 *)(this + 0x173) = 0x42200000;
  *(undefined4 *)(this + 0x17f) = 0x43340000;
  *(undefined4 *)(this + 0x15f) = 0x428c0000;
  *(undefined4 *)(this + 0x547) = 0;
  *(undefined4 *)(this + 0x4b3) = 0x45610000;
  *(undefined4 *)(this + 0x49b) = 0x3eaaaaab;
  *(undefined4 *)(this + 0x497) = 0x3fd55555;
  *(uint *)(this + 1099) = *(uint *)(this + 1099) | 0x40000;
  *(uint *)(this + 0x44f) = *(uint *)(this + 0x44f) | 0x30000;
  this_00 = (sncCHANNEL *)operator_new(0xbc);
  if (this_00 == (sncCHANNEL *)0x0) {
    this_00 = (sncCHANNEL *)0x0;
  }
  else {
    sncCHANNEL::sncCHANNEL(this_00);
    *(undefined4 *)(this_00 + 0x74) = _m3dVZero;
    *(undefined4 *)(this_00 + 0x78) = DAT_00963740;
    uVar2 = DAT_00963744;
    *(undefined4 *)(this_00 + 0x80) = 0;
    *(undefined4 *)(this_00 + 0x8c) = 0x43b40000;
    *(undefined4 *)(this_00 + 0x90) = 0x43b40000;
    *(undefined4 *)(this_00 + 0x7c) = uVar2;
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
    uVar2 = DAT_005f99a4;
    *(undefined ***)this_00 = &sncCHANNEL_SPH::_vftable_;
    *(undefined4 *)(this_00 + 0xb8) = uVar2;
  }
  *(sncCHANNEL **)(this + 0x543) = this_00;
  if (this_00 == (sncCHANNEL *)0x0) {
    return 0;
  }
  gsSND_SYSTEM::AddChannel(gsSysSound,this_00,(entIACTIVE_OBJ *)this,(objOBJ *)0x0);
  poVar4 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_ROOT);
  *(objOBJ **)(this + 0x163) = poVar4;
  if (poVar4 == (objOBJ *)0x0) {
    return 0;
  }
  *(objOBJ **)(this + 0x527) = poVar4;
  *(uint *)poVar4 = *(uint *)poVar4 | 0x200;
  poVar4 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_ATTACKfocus);
  *(objOBJ **)(this + 0x553) = poVar4;
  if (poVar4 == (objOBJ *)0x0) {
    return 0;
  }
  poVar4 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_Garp_lod_8);
  *(objOBJ **)(this + 0x557) = poVar4;
  if (poVar4 == (objOBJ *)0x0) {
    return 0;
  }
  uVar5 = 0xffffffff;
  pcVar6 = s_emitter;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  poVar4 = objFindNameN(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_emitter,~uVar5 - 1);
  *(objOBJ **)(this + 0x55f) = poVar4;
  *(uint *)(*(int *)(this + 0xbc) + 4) = *(uint *)(*(int *)(this + 0xbc) + 4) | 1;
  *(undefined4 *)(this + 0x54f) = 0x46ea6000;
  *(uint *)(this + 0xb4) = *(uint *)(this + 0xb4) | 0x800;
  return 1;
}




/* from: ai_zevs.cpp
   addr: 00456B70 */

void __thiscall aiZEVS::ProcessINIT_LEVEL(aiZEVS *this)

{
  undefined4 local_1c;
  undefined1 local_18 [8];
  m3dV amStack_10 [16];
  
  local_1c = 0;
  animINST::Validate(*(animINST **)(this + 0xbc),2);
  (**(code **)(*(int *)(*(int *)(*(int *)(this + 0xbc) + 0x10) + 0xc0) + 0x24))(local_18);
  scnSCENE::FloorPlace
            (gsScenePtr,(m3dV *)&local_1c,100.0,amStack_10,1.0,0.0,0,(cdtREFINE *)&stack0xffffffd8,
             (cdtINFO *)(this + 0x453));
  MakeRoofsIgnoreCDT(this);
  aiNPC_WR::ProcessINIT_LEVEL((aiNPC_WR *)this);
  return;
}




/* from: ai_zevs.cpp
   addr: 00456C00 */

int __thiscall aiZEVS::Activate(aiZEVS *this,int param_1)

{
  int iVar1;
  
  if ((*(uint *)(this + 0x53f) & 0x10000) == 0) {
    aiPLANNER::SetBoss(aiAttackPlanner,(aiNPC *)this);
  }
  *(undefined4 *)(this + 0x54f) = 0x40400000;
  objOBJ::SetConstColor(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),0,1,0);
  *(uint *)(*(int *)(this + 0xbc) + 4) = *(uint *)(*(int *)(this + 0xbc) + 4) & 0xfffffffe;
  if (*(objOBJ **)(this + 0x55f) != (objOBJ *)0x0) {
    objOBJ::SetStateProcYes(*(objOBJ **)(this + 0x55f),8,(_func_int_objOBJ_ptr_void_ptr *)0x0);
  }
  *(undefined4 *)(this + 0x55b) = 0;
  *(undefined4 *)(this + 0x54b) = 0x41200000;
  StartMainSFX(this);
  iVar1 = aiNPC::Activate((aiNPC *)this,param_1);
  return iVar1;
}




/* from: ai_zevs.cpp
   addr: 00456C90 */

void __thiscall aiZEVS::ProcessTERM(aiZEVS *this)

{
  if ((*(uint *)(this + 0x53f) & 0x100) != 0) {
    (**(code **)(*(int *)(this + 0x583) + 8))();
  }
  aiNPC_WR::ProcessTERM((aiNPC_WR *)this);
  return;
}




/* from: ai_zevs.cpp
   addr: 00456CC0 */

void __thiscall aiZEVS::ProcessFRAME(aiZEVS *this)

{
  aiNPC_WR::ProcessFRAME((aiNPC_WR *)this);
  if (*(int *)(*(int *)(this + 0xbc) + 0xe0) == 3) {
    *(undefined4 *)(this + 0xf8) = 0x10;
    return;
  }
  if (*(int *)(*(int *)(this + 0xbc) + 0xe0) == 1) {
    *(undefined4 *)(this + 0xf8) = 8;
  }
  return;
}




/* from: ai_zevs.cpp
   addr: 00456D00 */

int __thiscall aiZEVS::ProcessCDT_FIREABLE(aiZEVS *this,dmgDAMAGE *param_1)

{
  uint uVar1;
  
  aiNPC_WR::ProcessCDT_FIREABLE((aiNPC_WR *)this,param_1);
  if ((*(uint *)(this + 1099) & 0x200000) == 0) {
    uVar1 = *(uint *)(this + 0xf8) | 4;
  }
  else {
    uVar1 = *(uint *)(this + 0xf8) | 2;
  }
  *(uint *)(this + 0xf8) = uVar1;
  if ((*(uint *)(this + 1099) & 0x200000) != 0) {
    aiPLANNER::SetBoss(aiAttackPlanner,(aiNPC *)0x0);
  }
  return 1;
}




/* from: ai_zevs.cpp
   addr: 00456D70 */

void __thiscall aiZEVS::StartMainSFX(aiZEVS *this)

{
  aiZEVS_DEATH_SFX_STARS *this_00;
  partEMITTER_PHYS *ppVar1;
  aiZEVS_DEATH_SFX_LGTN *this_01;
  objOBJ *local_8;
  objOBJ *local_4;
  
  this_00 = (aiZEVS_DEATH_SFX_STARS *)operator_new(0x2c0);
  if (this_00 != (aiZEVS_DEATH_SFX_STARS *)0x0) {
    ppVar1 = (partEMITTER_PHYS *)
             aiZEVS_DEATH_SFX_STARS::aiZEVS_DEATH_SFX_STARS(this_00,DAT_005d4bfc);
    if (ppVar1 != (partEMITTER_PHYS *)0x0) {
      local_8 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_torso);
      local_4 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_cyl2_1);
      if ((local_8 != (objOBJ *)0x0) && (local_4 != (objOBJ *)0x0)) {
        partSetAreaEmissionObjList(ppVar1,2,&local_8,200,(m3dV *)0x0);
        partEMITTER_PHYS::StartEmission(ppVar1);
      }
    }
  }
  this_01 = (aiZEVS_DEATH_SFX_LGTN *)operator_new(0x2c0);
  if (this_01 != (aiZEVS_DEATH_SFX_LGTN *)0x0) {
    ppVar1 = (partEMITTER_PHYS *)aiZEVS_DEATH_SFX_LGTN::aiZEVS_DEATH_SFX_LGTN(this_01,DAT_005d4bfc);
    if ((ppVar1 != (partEMITTER_PHYS *)0x0) && (*(objOBJ **)(this + 0x55f) != (objOBJ *)0x0)) {
      partSetAreaEmissionObj(ppVar1,*(objOBJ **)(this + 0x55f),-1,(m3dV *)0x0);
      partEMITTER_PHYS::StartEmission(ppVar1);
    }
  }
  return;
}




/* from: ai_zevs.cpp
   addr: 00456E40 */

void __thiscall aiZEVS::StartDeath(aiZEVS *this,dmgDAMAGE *param_1)

{
  StartMainSFX(this);
  aiNPC_WR::StartDeath((aiNPC_WR *)this,param_1);
  return;
}




/* from: ai_zevs.cpp
   addr: 00456E60 */

int __thiscall aiZEVS::SelectGoal(aiZEVS *this)

{
  m3dV local_18 [12];
  m3dV local_c [12];
  
  aiENEMY::GetPos((aiENEMY *)(this + 0x4bb),local_18);
  animINST::GetPos(*(animINST **)(this + 0xbc),local_c);
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_zevs.cpp
   addr: 00456E90 */

int __thiscall aiZEVS::EvalAnimGoalSeq(aiZEVS *this)

{
  int iVar1;
  
  if (0 < *(int *)(this + 0x55b)) {
    iVar1 = m3dRandSelect(3,0);
    return iVar1;
  }
  if (_DAT_005d4bf4 < *(float *)(this + 0x54b)) {
    return 2;
  }
  if (_DAT_005d4bf4 < *(float *)(this + 0x547)) {
    iVar1 = m3dRandSelect(0,2,3);
    return iVar1;
  }
  iVar1 = m3dRandSelect(0,2,1,1);
  return iVar1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_zevs.cpp
   addr: 00456EF0 */

void __thiscall aiZEVS::UpdateTimers(aiZEVS *this)

{
  int iVar1;
  float extraout_EDX;
  float extraout_EDX_00;
  float extraout_EDX_01;
  float fVar2;
  float extraout_EDX_02;
  objAPPLY_COLOR oVar3;
  int iVar4;
  
  aiNPC_WR::UpdateTimers((aiNPC_WR *)this);
  iVar1 = m3dUpdateTimeField((float *)(this + 0x547),extraout_EDX);
  fVar2 = extraout_EDX_00;
  if ((iVar1 != 0) && (*(int *)(this + 0x55b) != 0)) {
    LaunchOneBolt(this);
    fVar2 = extraout_EDX_01;
  }
  m3dUpdateTimeField((float *)(this + 0x54b),fVar2);
  if (_DAT_005d4bf4 < *(float *)(this + 0x54f)) {
    iVar4 = 0;
    oVar3 = 1;
    iVar1 = ftol();
    objOBJ::SetConstColor(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),iVar1 << 0x18,oVar3,iVar4);
    iVar1 = m3dUpdateTimeField((float *)(this + 0x54f),extraout_EDX_02);
    if (iVar1 != 0) {
      objOBJ::SetConstColor(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),0xff000000,1,0);
      objOBJ::SetTransparency(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),0,0xff);
    }
  }
  return;
}




/* from: ai_zevs.cpp
   addr: 00456FC0 */

void __thiscall aiZEVS::PlaySounds(aiZEVS *this)

{
  if (((byte)this[0xf8] & 2) != 0) {
    (**(code **)(**(int **)(this + 0x543) + 4))(&DAT_0060dfd8,0);
  }
  if (((byte)this[0xf8] & 4) != 0) {
    (**(code **)(**(int **)(this + 0x543) + 4))(&DAT_0060df08,0);
  }
  if (((byte)this[0xf8] & 0x10) != 0) {
    (**(code **)(**(int **)(this + 0x543) + 4))(&DAT_0060e040,0);
  }
  if (((byte)this[0xf8] & 8) != 0) {
    (**(code **)(**(int **)(this + 0x543) + 4))(&DAT_0060e0a8,0);
  }
  aiNPC::PlaySounds((aiNPC *)this);
  return;
}




/* from: ai_zevs.cpp
   addr: 00457040 */

void __thiscall aiZEVS::ParseNameClass(aiZEVS *this)

{
  char *pcVar1;
  objOBJ *poVar2;
  
  pcVar1 = s_;
  if (*(char **)(*(int *)(this + 0xbc) + 0x1c) != (char *)0x0) {
    pcVar1 = *(char **)(*(int *)(this + 0xbc) + 0x1c);
  }
  aiNPC_WR::ParseNameClass((aiNPC_WR *)this);
  pcVar1 = strstr(pcVar1,s__mini);
  if (pcVar1 != (char *)0x0) {
    *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) | 0x10000;
  }
  if ((*(uint *)(this + 0x53f) & 0x10000) == 0) {
    *(uint *)(this + 0x44f) = *(uint *)(this + 0x44f) | 0x40000;
    poVar2 = objFindName(*(objOBJ **)(gsScenePtr + 0x44),s__dom_ai_zevs_bolts);
    if (poVar2 != (objOBJ *)0x0) {
      *(objOBJ **)(this + 0x5b7) = poVar2;
      *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) | 0x100;
                    /* WARNING: Could not recover jumptable at 0x004570cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(int *)(this + 0x583) + 4))();
      return;
    }
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_zevs.cpp
   addr: 004570E0 */

void __thiscall aiZEVS::Think(aiZEVS *this)

{
  float fVar1;
  int iVar2;
  aiZEVS *paVar3;
  float local_8;
  
  aiNPC_WR::Think((aiNPC_WR *)this);
  fVar1 = *(float *)(this + 0xd0) * ___real_3e4ccccd;
  paVar3 = this + 0x563;
  iVar2 = 5;
  local_8 = *(float *)(this + 0xd0);
  do {
    local_8 = local_8 - fVar1;
    if ((*(int *)paVar3 != 0) && (*(float *)(this + 0xcc) < local_8)) {
      wrsobNICHE::StartExplos(*(wrsobNICHE **)(*(int *)paVar3 + 0x13c),0);
      *(int *)paVar3 = 0;
    }
    paVar3 = paVar3 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}




/* from: ai_zevs.cpp
   addr: 00457160 */

void __thiscall aiZEVS::MakeRoofsIgnoreCDT(aiZEVS *this)

{
  int iVar1;
  animINST *paVar2;
  char *pcVar3;
  int iVar4;
  aiZEVS *paVar5;
  
  paVar5 = this + 0x563;
  paVar2 = scnSCENE::FindInstName(gsScenePtr,s_Actor_roof_break_01);
  *(animINST **)paVar5 = paVar2;
  paVar2 = scnSCENE::FindInstName(gsScenePtr,s_Actor_roof_break_02);
  *(animINST **)(this + 0x567) = paVar2;
  paVar2 = scnSCENE::FindInstName(gsScenePtr,s_Actor_roof_break_03);
  *(animINST **)(this + 0x56b) = paVar2;
  paVar2 = scnSCENE::FindInstName(gsScenePtr,s_Actor_roof_break_04);
  *(animINST **)(this + 0x56f) = paVar2;
  paVar2 = scnSCENE::FindInstName(gsScenePtr,s_Actor_roof_break_05);
  *(animINST **)(this + 0x573) = paVar2;
  iVar4 = 5;
  do {
    iVar1 = *(int *)paVar5;
    if (iVar1 != 0) {
      if (*(int *)(iVar1 + 0x13c) == 0) {
        pcVar3 = *(char **)(iVar1 + 0x18);
        if (pcVar3 == (char *)0x0) {
          pcVar3 = s_;
        }
        apLogErr(s_AI__zeus_roof_has_no_entity___s_,pcVar3);
      }
      else {
        *(undefined4 *)(*(int *)(iVar1 + 0x13c) + 0x153) = 1;
      }
    }
    paVar5 = paVar5 + 4;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return;
}




/* from: ai_zevs.cpp
   addr: 00457220 */

void __thiscall aiZEVS::ProcessActionFrame(aiZEVS *this)

{
  int iVar1;
  
  iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),1,0);
  if (iVar1 != 0) {
    iVar1 = ftol();
    *(int *)(this + 0x55b) = 2 - iVar1;
    objOBJ::GetOrigin(*(objOBJ **)(this + 0x557),(m3dV *)(this + 0x577));
    LaunchOneBolt(this);
  }
  iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),2,0);
  if (iVar1 != 0) {
    LaunchOneProjectile(this);
    return;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_zevs.cpp
   addr: 00457290 */

void __thiscall aiZEVS::LaunchOneProjectile(aiZEVS *this)

{
  int iVar1;
  undefined4 *puVar2;
  m3dMATR *pmVar3;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  undefined1 local_fc;
  undefined1 local_fb;
  undefined2 local_fa;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
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
  undefined1 local_ac;
  undefined4 local_ab;
  float local_a4;
  float local_a0;
  float local_9c;
  animCREATE_DATA local_98 [18];
  m3dMATR local_86 [134];
  
  local_f8 = (float)_m3dVZero;
  local_ec = (float)_m3dVZero;
  local_f4 = (float)DAT_00963740;
  local_e8 = (float)DAT_00963740;
  local_dc = DAT_005d4bf8;
  local_d8 = 1;
  local_ac = 1;
  local_fc = 0;
  local_fb = 0x40;
  local_f0 = (float)DAT_00963744;
  local_e4 = (float)DAT_00963744;
  local_e0 = 0x3dcccccd;
  local_d4 = 0;
  local_d0 = 0;
  local_cc = 0;
  local_c8 = 0;
  local_c4 = 0xbf800000;
  local_c0 = 0;
  local_bc = 0xffffffff;
  local_b8 = 0xffffffff;
  local_b4 = 0xffffffff;
  local_b0 = 0xbf800000;
  local_ab = 0x3dcccccd;
  local_fa = 0x55;
  animCREATE_DATA::animCREATE_DATA(local_98);
  animINST::Validate(*(animINST **)(this + 0xbc),4);
  objOBJ::GetOrigin(*(objOBJ **)(this + 0x553),(m3dV *)&local_a4);
  puVar2 = (undefined4 *)(*(int *)(this + 0x553) + 0x3c);
  pmVar3 = local_86;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pmVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    pmVar3 = pmVar3 + 4;
  }
  m3dMATR::RemoveScale(local_86);
  local_b4 = *(undefined4 *)(this + 0x8c);
  local_e0 = 0x3f800000;
  local_dc = 0x447a0000;
  local_d8 = 5;
  local_d0 = 0;
  local_ac = 0;
  local_c4 = 0x41f00000;
  local_c0 = 0x40000000;
  local_b8 = 3;
  animINST::GetDir(*(animINST **)(this + 0xbc),(m3dV *)&local_108);
  local_104 = 0.0;
  aiENEMY::GetPos((aiENEMY *)(this + 0x4bb),(m3dV *)&local_114);
  local_a0 = local_110 - local_a0;
  local_f4 = (local_a0 * local_104 +
             (local_114 - local_a4) * local_108 + local_100 * (local_10c - local_9c)) *
             ___real_3d888889;
  local_114 = local_108 * ___real_41700000;
  local_110 = local_104 * ___real_41700000;
  local_10c = local_100 * ___real_41700000;
  local_f4 = (local_a0 - local_f4 * local_f4 * ___real_bdcccccd) / local_f4;
  local_ec = _m3dVUnitY * ___real_be4ccccd;
  local_e8 = DAT_005f9994 * ___real_be4ccccd;
  local_e4 = DAT_005f9998 * ___real_be4ccccd;
  local_f8 = local_114;
  local_f0 = local_10c;
  entCreate(gsScenePtr,s_pjl_zevs,s_pjl_medusa,local_98,&local_fc,0);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_zevs.cpp
   addr: 004574E0 */

void __thiscall aiZEVS::LaunchOneBolt(aiZEVS *this)

{
  int iVar1;
  m3dMATR *pmVar2;
  undefined4 *puVar3;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  undefined4 local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  undefined **local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  m3dMATR local_d8 [64];
  animCREATE_DATA local_98 [18];
  undefined4 local_86 [33];
  
  animCREATE_DATA::animCREATE_DATA(local_98);
  local_e0 = 0;
  local_e4 = 2;
  local_dc = 0;
  local_e8 = &entCDT_REFINE_EXCL::_vftable_;
  if (*(int *)(this + 0x55b) < 1) {
    *(undefined4 *)(this + 0x55b) = 0;
    return;
  }
  CalcBoltPosition(this,(m3dV *)&local_110);
  scnSCENE::FloorPlace
            (gsScenePtr,(m3dV *)&local_110,DAT_005d4bf8,(m3dV *)&local_110,80.0,0.0,0,
             (cdtREFINE *)&local_e8,(cdtINFO *)(this + 0x453));
  m3dMATR::MakeLCS2WCS_VZ(local_d8,(m3dV *)&local_110,&m3dVUnitX);
  pmVar2 = local_d8;
  puVar3 = local_86;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *(undefined4 *)pmVar2;
    pmVar2 = pmVar2 + 4;
    puVar3 = puVar3 + 1;
  }
  local_f8 = 0x3f333333;
  entCreate(gsScenePtr,s_sfx_zeus_lgtn,s_sfx_zeus_lgtn,local_98,&local_f8,0);
  aiENEMY::GetPos((aiENEMY *)(this + 0x4bb),(m3dV *)&local_f4);
  local_104 = local_f4 - local_110;
  local_100 = local_f0 - local_10c;
  local_fc = local_ec - local_108;
  m3dNormalize((m3dV *)&local_104);
  local_110 = local_104 * ___real_40800000 + local_110;
  local_10c = local_100 * ___real_40800000 + local_10c;
  local_108 = local_fc * ___real_40800000 + local_108;
  dmgDispatchExplosDamage
            ((entENTITY *)this,(m3dV *)&local_110,100.0,8.0,3,-1,(cdtINFO *)0x0,0xffffffff,
             (dmgDISPATCHER *)0x0);
  _DAT_0060de78 = 0x41000000;
  _DAT_0060de80 = local_110;
  _DAT_0060de84 = local_10c;
  _DAT_0060de88 = local_108;
  iVar1 = *(int *)(this + 0x55b);
  *(int *)(this + 0x55b) = iVar1 + -1;
  if (iVar1 + -1 == 0) {
    *(undefined4 *)(this + 0x547) = 0x40a00000;
    return;
  }
  *(undefined4 *)(this + 0x547) = 0x3ecccccd;
  return;
}




/* from: ai_zevs.cpp
   addr: 004576B0 */

int __thiscall aiZEVS::IsArmoredObject(aiZEVS *this,char *param_1)

{
  int iVar1;
  
  iVar1 = strnicmp(param_1,s_cyl2_1,6);
  if (iVar1 != 0) {
    iVar1 = strnicmp(param_1,s_sphere,6);
    if (iVar1 != 0) {
      iVar1 = strnicmp(param_1,s_garp_lod,8);
      if (iVar1 != 0) {
        return 0;
      }
    }
  }
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_zevs.cpp
   addr: 00457700 */

aiZEVS_DEATH_SFX_STARS * __thiscall
aiZEVS_DEATH_SFX_STARS::aiZEVS_DEATH_SFX_STARS(aiZEVS_DEATH_SFX_STARS *this,float param_1)

{
  uint uVar1;
  float fVar2;
  m3dSPL *pmVar3;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,800.0,1.0);
  *(undefined ***)this = &_vftable_;
  pmVar3 = (m3dSPL *)operator_new(0x34);
  if (pmVar3 == (m3dSPL *)0x0) {
    pmVar3 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar3,0,8,1);
    *(undefined ***)pmVar3 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar3,3);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,0.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,1.0,800.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,2,2.0,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,0.0,(m3dSPL_LINEAR1D *)pmVar3);
  pmVar3 = (m3dSPL *)operator_new(0x34);
  if (pmVar3 == (m3dSPL *)0x0) {
    pmVar3 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar3,0,8,1);
    *(undefined ***)pmVar3 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar3,2);
  }
  fVar2 = param_1 * ___real_40400000;
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,fVar2);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,1.0,param_1 * ___real_00000000);
  partEMITTER_PHYS::SetSize((partEMITTER_PHYS *)this,fVar2,0.0,(m3dSPL_LINEAR1D *)pmVar3,1.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)0x0);
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,aiZEVS::pTexStars);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,180.5,179.5,0.0,0.0);
  fVar2 = param_1 * ___real_3f000000;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  *(float *)(this + 0xb4) = param_1;
  *(undefined4 *)(this + 0xbc) = 0;
  *(float *)(this + 0xc0) = param_1;
  *(float *)(this + 0xb8) = fVar2;
  *(float *)(this + 0xc4) = fVar2;
  fVar2 = param_1 * ___real_41f00000;
  *(undefined4 *)(this + 200) = 0;
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0xe4) = 0;
  *(float *)(this + 0xe0) = fVar2;
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 0x401;
  *(uint *)(this + 4) = uVar1 | 0xa401;
  *(uint *)(this + 4) = uVar1 | 0xa601;
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_zevs.cpp
   addr: 004578B0 */

aiZEVS_DEATH_SFX_LGTN * __thiscall
aiZEVS_DEATH_SFX_LGTN::aiZEVS_DEATH_SFX_LGTN(aiZEVS_DEATH_SFX_LGTN *this,float param_1)

{
  uint uVar1;
  float fVar2;
  m3dSPL *pmVar3;
  m3dMATR local_40 [64];
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,0x1e,30.0,0.4);
  *(undefined ***)this = &_vftable_;
  pmVar3 = (m3dSPL *)operator_new(0x34);
  if (pmVar3 == (m3dSPL *)0x0) {
    pmVar3 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar3,0,8,1);
    *(undefined ***)pmVar3 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar3,3);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,0.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,0.6666667,30.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,2,1.6666666,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,0.0,(m3dSPL_LINEAR1D *)pmVar3);
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,0.3,0.1);
  pmVar3 = (m3dSPL *)operator_new(0x34);
  if (pmVar3 == (m3dSPL *)0x0) {
    pmVar3 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar3,0,8,1);
    *(undefined ***)pmVar3 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar3,2);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,param_1 * ___real_41c60000);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,1.0,param_1 * ___real_41cb47ae);
  partEMITTER_PHYS::SetSize
            ((partEMITTER_PHYS *)this,param_1 * ___real_41340000,param_1 * ___real_40200000,
             (m3dSPL_LINEAR1D *)pmVar3,1.0);
  pmVar3 = (m3dSPL *)operator_new(0x34);
  if (pmVar3 == (m3dSPL *)0x0) {
    pmVar3 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar3,0,8,1);
    *(undefined ***)pmVar3 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar3,2);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,255.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar3);
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,aiZEVS::pTexLgtn);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,180.5,179.5,0.0,0.0);
  fVar2 = param_1 * ___real_40a00000;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0xec) = 0;
  *(float *)(this + 0xb4) = param_1;
  *(float *)(this + 0xe8) = fVar2;
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 0x401;
  *(uint *)(this + 4) = uVar1 | 0xa401;
  *(uint *)(this + 4) = uVar1 | 0xa601;
  *(uint *)(this + 4) = uVar1 | 0x100a601;
  partEMITTER_PHYS::SetScaleCSVal((partEMITTER_PHYS *)this,0.5,1.0,0.5);
  m3dMATR::Identity(local_40);
  partEMITTER_PHYS::SetScaleCS((partEMITTER_PHYS *)this,local_40);
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_zevs.cpp
   addr: 00457AF0 */

void __thiscall aiZEVS::CalcBoltPosition(aiZEVS *this,m3dV *param_1)

{
  aiZEVS *paVar1;
  float fVar2;
  float fVar3;
  ulonglong uVar4;
  float10 fVar5;
  float10 fVar6;
  undefined8 extraout_MM1;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
  undefined1 auVar10 [16];
  float local_20;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  aiENEMY::GetPos((aiENEMY *)(this + 0x4bb),(m3dV *)&local_c);
  aiENEMY::GetDir((aiENEMY *)(this + 0x4bb),(m3dV *)&local_18);
  paVar1 = this + 0x577;
  local_c = local_18 * ___real_41200000 + local_c;
  local_14 = local_14 * ___real_41200000;
  local_4 = local_10 * ___real_41200000 + local_4;
  fVar2 = local_c - *(float *)paVar1;
  fVar3 = local_4 - *(float *)(this + 0x57f);
  local_20 = fVar2 * fVar2 + fVar3 * fVar3;
  if (m3dSimdType == 0) {
    local_20 = local_20 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar10 = rsqrtss(ZEXT416((uint)local_20),ZEXT416((uint)local_20));
    fVar9 = auVar10._0_4_;
    local_20 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar9 *
               (`float___cdecl_m3dSqrt(float)'::__l2::three - local_20 * fVar9 * fVar9) * local_20;
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar4 = (ulonglong)(uint)local_20;
    uVar7 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar4);
    uVar8 = PackedFloatingMUL(uVar7,uVar7);
    uVar8 = PackedFloatingReciprocalSQRIter1(uVar8,uVar4);
    uVar7 = PackedFloatingReciprocalIter2(uVar8,uVar7);
    uVar7 = PackedFloatingMUL(uVar7,uVar4);
    local_20 = (float)uVar7;
    FastExitMediaState();
  }
  else {
    local_20 = SQRT(local_20);
  }
  if (local_20 < ___real_41f00000) {
    *(float *)param_1 = local_c;
    *(float *)(param_1 + 4) = local_14 + local_8;
    *(float *)(param_1 + 8) = local_4;
    *(undefined4 *)(this + 0x55b) = 1;
    return;
  }
  fVar5 = (float10)___real_41f00000 / (float10)local_20;
  fVar6 = (float10)fsin((float10)*(int *)(this + 0x55b) + (float10)*(int *)(this + 0x55b));
  fVar9 = (float)(fVar6 * fVar5 * (float10)local_20 * (float10)___real_3ba3d70a);
  *(float *)paVar1 =
       (float)(-(float10)fVar3 * (float10)fVar9 + (float10)fVar2 * fVar5 + (float10)*(float *)paVar1
              );
  *(float *)(this + 0x57b) =
       fVar9 * 0.0 + (float)(fVar5 * (float10)0.0 + (float10)*(float *)(this + 0x57b));
  *(float *)(this + 0x57f) =
       fVar2 * fVar9 + (float)((float10)fVar3 * fVar5 + (float10)*(float *)(this + 0x57f));
  *(float *)param_1 = *(float *)paVar1;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(this + 0x57b);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(this + 0x57f);
  return;
}




/* from: ai_zevs.cpp
   addr: 00457D00 */

void __thiscall aiZEVS::ProcessMP_NOTIFY(aiZEVS *this,gsEVENT *param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) == -100) {
    iVar1 = *(int *)(param_1 + 8);
    *(undefined4 *)(this + 0x55b) = *(undefined4 *)(iVar1 + 0x5c);
    *(undefined4 *)(this + 0x577) = *(undefined4 *)(iVar1 + 0x60);
    *(undefined4 *)(this + 0x57b) = *(undefined4 *)(iVar1 + 100);
    *(undefined4 *)(this + 0x57f) = *(undefined4 *)(iVar1 + 0x68);
  }
  aiNPC_WR::ProcessMP_NOTIFY((aiNPC_WR *)this,param_1);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_zevs.cpp
   addr: 00457D40 */

void __thiscall aiZEVS::ProcessMP_GET_SYNC_DATA(aiZEVS *this,void *param_1)

{
  undefined4 *puVar1;
  
                    /* WARNING: Load size is inaccurate */
  puVar1 = *param_1;
  if (puVar1 == (undefined4 *)0x0) {
    if ((DAT_0060de7c & 1) == 0) {
      DAT_0060de7c = DAT_0060de7c | 1;
      _DAT_0060dea0 = 0xffffffff;
      _DAT_0060dea8 = 0xffffffff;
      DAT_0060de98._0_1_ = 0;
      DAT_0060de98._1_1_ = 0x40;
      DAT_0060de9c = 0;
      _DAT_0060dea4 = 0;
      _DAT_0060deac = 0;
      _DAT_0060dec0 = _m3dVZero;
      _DAT_0060dec4 = DAT_00963740;
      _DAT_0060dec8 = DAT_00963744;
      _DAT_0060decc = _m3dVZero;
      _DAT_0060ded0 = DAT_00963740;
      _DAT_0060ded4 = DAT_00963744;
      _DAT_0060ded8 = _m3dVZero;
      _DAT_0060dedc = DAT_00963740;
      _DAT_0060dee0 = DAT_00963744;
      _DAT_0060dee4 = 0;
      _DAT_0060dee8 = _m3dVZero;
      _DAT_0060deec = DAT_00963740;
      _DAT_0060def0 = DAT_00963744;
      DAT_0060de98._2_2_ = 0x6c;
      DAT_0060def4 = 0;
      DAT_0060def8 = _m3dVZero;
      DAT_0060defc = DAT_00963740;
      DAT_0060df00 = DAT_00963744;
      atexit((_func_4879 *)&__E31);
    }
    puVar1 = &DAT_0060de98;
    *(undefined4 **)param_1 = &DAT_0060de98;
  }
  puVar1[0x17] = *(undefined4 *)(this + 0x55b);
  puVar1[0x18] = *(undefined4 *)(this + 0x577);
  puVar1[0x19] = *(undefined4 *)(this + 0x57b);
  puVar1[0x1a] = *(undefined4 *)(this + 0x57f);
  aiNPC::ProcessMP_GET_SYNC_DATA((aiNPC *)this,param_1);
  return;
}




/* from: ai_zevs.cpp
   addr: 00457E60 */

void __thiscall aiZEVS::ProcessMP_WRITE_SYNC_DATA(aiZEVS *this,gsMSG_MP_SAVELOAD *param_1)

{
  int iVar1;
  gsMSG_MP_SAVELOAD *pgVar2;
  gsMSG_MP_SAVELOAD **ppgStack_28;
  undefined2 local_10;
  undefined4 local_e;
  undefined4 local_a;
  undefined4 local_6;
  
  pgVar2 = param_1;
  local_e = 0xffffffff;
  local_a = 0xffffffff;
  local_6 = 0xffffffff;
  iVar1 = *(int *)param_1;
  local_10 = 0;
  ppgStack_28 = (gsMSG_MP_SAVELOAD **)0x457e96;
  fioFILE::WriteChunk(*(fioFILE **)(param_1 + 4),0xf0,(fioCHUNK *)&local_10);
  param_1 = *(gsMSG_MP_SAVELOAD **)(iVar1 + 0x5c);
  ppgStack_28 = &param_1;
  (**(code **)(**(int **)(pgVar2 + 4) + 0x18))();
  fioFILE::UpdateChunk(*(fioFILE **)(pgVar2 + 4),(fioCHUNK *)&stack0xffffffe4);
  fioFILE::WriteChunk(*(fioFILE **)(pgVar2 + 4),0xf1,(fioCHUNK *)&stack0xffffffe4);
  (**(code **)(**(int **)(pgVar2 + 4) + 0x18))(iVar1 + 0x60,0xc,4);
  fioFILE::UpdateChunk(*(fioFILE **)(pgVar2 + 4),(fioCHUNK *)&ppgStack_28);
  fioFILE::WriteLastChunk(*(fioFILE **)(pgVar2 + 4));
  aiNPC::ProcessMP_WRITE_SYNC_DATA((aiNPC *)this,pgVar2);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_zevs.cpp
   addr: 00457F10 */

void __thiscall aiZEVS::ProcessMP_READ_SYNC_DATA(aiZEVS *this,gsMSG_MP_SAVELOAD *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  short local_84;
  undefined2 uStack_82;
  undefined2 uStack_80;
  undefined4 local_7e;
  undefined4 local_7a;
  aiNPC *local_74;
  undefined4 *local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
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
  
  puVar3 = *(undefined4 **)param_1;
  local_84 = 0;
  uStack_82 = 0xffff;
  uStack_80 = 0xffff;
  local_7e = 0xffffffff;
  local_7a = 0xffffffff;
  local_74 = (aiNPC *)this;
  if (puVar3 == (undefined4 *)0x0) {
    if ((DAT_0060de7c & 1) == 0) {
      DAT_0060de7c = DAT_0060de7c | 1;
      DAT_0060de98._0_1_ = 0;
      DAT_0060de98._1_1_ = 0x40;
      DAT_0060de9c = 0;
      _DAT_0060dea0 = 0xffffffff;
      _DAT_0060dea4 = 0;
      _DAT_0060dea8 = 0xffffffff;
      _DAT_0060deac = 0;
      _DAT_0060dec0 = _m3dVZero;
      _DAT_0060dec4 = DAT_00963740;
      _DAT_0060dec8 = DAT_00963744;
      _DAT_0060decc = _m3dVZero;
      _DAT_0060ded0 = DAT_00963740;
      _DAT_0060ded4 = DAT_00963744;
      _DAT_0060ded8 = _m3dVZero;
      _DAT_0060dedc = DAT_00963740;
      _DAT_0060dee0 = DAT_00963744;
      _DAT_0060dee4 = 0;
      _DAT_0060dee8 = _m3dVZero;
      _DAT_0060deec = DAT_00963740;
      _DAT_0060def0 = DAT_00963744;
      DAT_0060de98._2_2_ = 0x6c;
      DAT_0060def4 = 0;
      DAT_0060def8 = _m3dVZero;
      DAT_0060defc = DAT_00963740;
      DAT_0060df00 = DAT_00963744;
      atexit((_func_4879 *)&__E31);
    }
    *(undefined4 **)param_1 = &DAT_0060de98;
    local_64 = 0xffffffff;
    local_5c = 0xffffffff;
    local_40 = DAT_00963740;
    local_34 = DAT_00963740;
    local_28 = DAT_00963740;
    local_18 = DAT_00963740;
    local_6c._2_2_ = 0x6c;
    local_8 = DAT_00963740;
    local_6c._0_1_ = 0;
    local_6c._1_1_ = 0x40;
    local_68 = 0;
    local_60 = 0;
    local_58 = 0;
    local_44 = _m3dVZero;
    local_3c = DAT_00963744;
    local_38 = _m3dVZero;
    local_30 = DAT_00963744;
    local_2c = _m3dVZero;
    local_24 = DAT_00963744;
    local_20 = 0;
    local_1c = _m3dVZero;
    local_14 = DAT_00963744;
    local_10 = 0;
    local_c = _m3dVZero;
    local_4 = DAT_00963744;
    local_70 = &DAT_0060de98;
    puVar3 = &local_6c;
    puVar1 = &DAT_0060de98;
    for (iVar2 = 0x1b; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar1 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar1 = puVar1 + 1;
    }
    puVar3 = &DAT_0060de98;
  }
  iVar2 = fioFILE::ReadChunk(*(fioFILE **)(param_1 + 4),(fioCHUNK *)&local_84);
  do {
    if ((iVar2 == 0) || (local_84 == 1)) {
      aiNPC::ProcessMP_READ_SYNC_DATA(local_74,param_1);
      return;
    }
    if (local_84 == 0xf0) {
      uVar4 = 4;
      puVar1 = puVar3 + 0x17;
LAB_00458106:
      (**(code **)(**(int **)(param_1 + 4) + 0x14))(puVar1,uVar4,4);
    }
    else if (local_84 == 0xf1) {
      uVar4 = 0xc;
      puVar1 = puVar3 + 0x18;
      goto LAB_00458106;
    }
    iVar2 = fioFILE::ReadChunk(*(fioFILE **)(param_1 + 4),(fioCHUNK *)&local_84);
  } while( true );
}




/* from: ai_zevs.cpp
   addr: 00458140 */

void __thiscall sncSOUND_DESCR::sncSOUND_DESCR(sncSOUND_DESCR *this)

{
  this[4] = (sncSOUND_DESCR)0x0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined ***)this = &_vftable_;
  return;
}




/* from: ai_zevs.cpp
   addr: 00458170 */

entENTITY * __fastcall aiZEVS::Create(animINST *param_1)

{
  aiNPC *this;
  
  this = (aiNPC *)operator_new(0x70f);
  if (this != (aiNPC *)0x0) {
    aiNPC::aiNPC(this);
    *(undefined4 *)(this + 0x51b) = 0;
    *(undefined4 *)(this + 0x527) = 0;
    *(undefined4 *)(this + 0x53f) = 0;
    *(undefined4 *)(this + 0x543) = 0;
    *(undefined4 *)(this + 0x55f) = 0;
    *(undefined4 *)(this + 0x587) = 0;
    *(undefined4 *)(this + 0x58b) = 0;
    *(undefined4 *)(this + 0x58f) = 0;
    *(undefined4 *)(this + 0x597) = 1;
    *(undefined ***)(this + 0x593) = &m3dBOX::_vftable_;
    *(undefined4 *)(this + 0x5b3) = 0;
    *(undefined4 *)(this + 0x5b7) = 0;
    *(undefined4 *)(this + 0x5bb) = 0;
    *(undefined4 *)(this + 0x5bf) = 0;
    *(undefined4 *)(this + 0x5c3) = 0;
    *(undefined4 *)(this + 0x70b) = 2;
    *(undefined ***)(this + 0x583) = &aiAREA::_vftable_;
    *(undefined ***)this = &_vftable_;
    *(undefined4 *)(this + 0x94) = 0x14;
    return (entENTITY *)this;
  }
  return (entENTITY *)0x0;
}




/* from: ai_zevs.cpp
   addr: 00458240
   addr: 00458240 */

void * __thiscall aiZEVS::_vector_deleting_destructor_(aiZEVS *this,uint param_1)

{
  *(undefined ***)(this + 0x583) = &scnDOMAIN::_vftable_;
  *(undefined ***)(this + 0x593) = &m3dVOL::_vftable_;
  aiNPC::~aiNPC((aiNPC *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

