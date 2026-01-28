
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ais_perseus.cpp
   addr: 0042C500 */

int __fastcall aisPerseusInit(void)

{
  int iVar1;
  
  iVar1 = entRegisterClass(s_ai_perseus,0x24445354,0x28,aisPERSEUS::Create,(char *)0x0,1);
  if (iVar1 == 0) {
    return 0;
  }
  _DAT_006040b0 = txmMANAGER::Add(txmManager,s_sfx_mcg_part,0x40003,1);
  if (_DAT_006040b0 == (txmTEXTURE *)0x0) {
    return 0;
  }
  _DAT_006040a8 = txmMANAGER::Add(txmManager,s_sfx_mcg_cloud,0x40003,1);
  if (_DAT_006040a8 == (txmTEXTURE *)0x0) {
    return 0;
  }
  iVar1 = sncLinkSndListData(1,(sncSOUND_DESCR_3D *)&DAT_006040b8);
  return (uint)(iVar1 != 0);
}




/* from: ais_perseus.cpp
   addr: 0042C580 */

int __thiscall aisPERSEUS::ProcessINIT(aisPERSEUS *this,void *param_1)

{
  int iVar1;
  objOBJ *poVar2;
  entENTITY *peVar3;
  char *pcVar4;
  int local_dc;
  char local_d8 [64];
  animCREATE_DATA local_98 [18];
  m3dMATR local_86 [134];
  
  animCREATE_DATA::animCREATE_DATA(local_98);
  iVar1 = aisSTATUE::ProcessINIT((aisSTATUE *)this,param_1);
  if (iVar1 == 0) {
    return 0;
  }
  poVar2 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_emitter);
  *(objOBJ **)(this + 0x59f) = poVar2;
  if (poVar2 == (objOBJ *)0x0) {
    return 0;
  }
  m3dMATR::Transform(local_86,(m3dMATR *)(*(int *)(this + 0xbc) + 0x60),0);
  peVar3 = entCreate(gsScenePtr,s_sfx_perseus,s_sfx_perseus,local_98,(void *)0x0,0);
  *(entENTITY **)(this + 0x5a3) = peVar3;
  if (peVar3 == (entENTITY *)0x0) {
    return 0;
  }
  *(undefined4 *)(peVar3 + 0x183) = *(undefined4 *)(this + 0x8c);
  pcVar4 = *(char **)(*(int *)(this + 0xbc) + 0x18);
  if (pcVar4 == (char *)0x0) {
    pcVar4 = s_;
  }
  sprintf(local_d8,s__s_sfx,pcVar4);
  animINST::SetName(*(animINST **)(*(int *)(this + 0x5a3) + 0xbc),local_d8);
  apNAME::SetName((apNAME *)(*(int *)(this + 0x5a3) + 0x44),local_d8);
  *(uint *)(this + 0x44f) = *(uint *)(this + 0x44f) | 0x8000;
  *(undefined4 *)(this + 0xd0) = 0x41c80000;
  *(undefined4 *)(this + 0xcc) = 0x41c80000;
  *(uint *)(this + 1099) = *(uint *)(this + 1099) | 0x40000;
  *(undefined4 *)(this + 0x15b) = 0;
  *(undefined4 *)(this + 0x52b) = 0x461c4000;
  local_dc = 1;
  animINST::GetBool(*(animINST **)(this + 0xbc),s_AI_STATUE,s_isActive,&local_dc);
  if (local_dc != 0) {
    wrsfxPERSEUS::Enable(*(wrsfxPERSEUS **)(this + 0x5a3),1);
    return 1;
  }
  wrsfxPERSEUS::Enable(*(wrsfxPERSEUS **)(this + 0x5a3),0);
  return 1;
}




/* from: ais_perseus.cpp
   addr: 0042C720 */

int __thiscall aisPERSEUS::SetupAniSystem(aisPERSEUS *this)

{
  animTPL *paVar1;
  undefined4 *puVar2;
  animSYSTEM *this_00;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  paVar1 = *(animTPL **)(*(int *)(this + 0xbc) + 0x138);
  if (*(animSEQ **)(paVar1 + 0x90) == (animSEQ *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(paVar1 + 0x8c);
    this = (aisPERSEUS *)*(animSEQ **)(paVar1 + 0x90);
  }
  *(undefined4 *)(paVar1 + 0x8c) = 1;
  puVar2 = (undefined4 *)operator_new(0x8c);
  if (puVar2 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5 = puVar2 + 1;
    *puVar2 = 1;
    puVar6 = puVar5;
    for (iVar4 = 0x22; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    puVar2[0x21] = 2;
  }
  *(undefined4 **)(paVar1 + 0x90) = puVar5;
  _entAnimSetSeqName(paVar1,0,s_PERSEUS_SEQ_DESTROY);
  entAnimAssignTplSeq(paVar1,(animSEQ *)this,iVar3);
  *(undefined4 *)(*(int *)(paVar1 + 0x90) + 0x40) = 0;
  *(undefined4 *)(*(int *)(paVar1 + 0x90) + 0x44) = 0x3f800000;
  *(undefined4 *)(*(int *)(paVar1 + 0x90) + 0x50) = 0x43fa0000;
  *(undefined4 *)(*(int *)(paVar1 + 0x90) + 0x80) = 0;
  this_00 = (animSYSTEM *)operator_new(0x14);
  if (this_00 != (animSYSTEM *)0x0) {
    iVar3 = animSYSTEM::animSYSTEM(this_00,1,0);
    if (iVar3 != 0) {
      *(int *)(paVar1 + 0xa4) = iVar3;
      if (this != (aisPERSEUS *)0x0) {
        operator_delete((animSEQ *)this + -4);
      }
      return 1;
    }
  }
  return 0;
}




/* from: ais_perseus.cpp
   addr: 0042C840 */

void __thiscall aisPERSEUS::ProcessFRAME(aisPERSEUS *this)

{
  m3dV local_c [12];
  
  *(uint *)(this + 1099) = *(uint *)(this + 1099) | 0x400;
  aiNPC_WR_FLY::ProcessFRAME((aiNPC_WR_FLY *)this);
  if ((*(uint *)(this + 1099) & 0x200000) == 0) {
    animINST::Validate(*(animINST **)(this + 0xbc),4);
    objOBJ::GetOrigin(*(objOBJ **)(this + 0x59f),local_c);
    if (*(partEMITTER_PHYS **)(this + 0x597) != (partEMITTER_PHYS *)0x0) {
      partEMITTER_PHYS::SetPosDirSpeed
                (*(partEMITTER_PHYS **)(this + 0x597),local_c,(m3dV *)0x0,(m3dV *)0x0);
    }
    if (*(partEMITTER_PHYS **)(this + 0x59b) != (partEMITTER_PHYS *)0x0) {
      partEMITTER_PHYS::SetPosDirSpeed
                (*(partEMITTER_PHYS **)(this + 0x59b),local_c,(m3dV *)0x0,(m3dV *)0x0);
    }
  }
  return;
}




/* from: ais_perseus.cpp
   addr: 0042C8C0 */

void __thiscall aisPERSEUS::ProcessTERM(aisPERSEUS *this)

{
  aiMINO::ProcessTERM((aiMINO *)this);
  if (*(undefined4 **)(this + 0x597) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x597))(1);
  }
  if (*(undefined4 **)(this + 0x59b) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x59b))(1);
  }
  return;
}




/* from: ais_perseus.cpp
   addr: 0042C8F0 */

int __thiscall aisPERSEUS::ProcessCDT_FIREABLE(aisPERSEUS *this,dmgDAMAGE *param_1)

{
  if ((*(int *)(param_1 + 4) != 1) || (*(int *)(param_1 + 0xc) != *(int *)(this + 0x8c))) {
    aisSTATUE::ProcessCDT_FIREABLE((aisSTATUE *)this,param_1);
  }
  return 0;
}




/* from: ais_perseus.cpp
   addr: 0042C920 */

void __thiscall aisPERSEUS::StartDeath(aisPERSEUS *this,dmgDAMAGE *param_1)

{
  m3dV local_c [12];
  
  aisSTATUE::StartDeath((aisSTATUE *)this,param_1);
  msgSYSTEM::PostMsg(&msgSystem,*(msgADDR **)(this + 0x5a3),2,(msgADDR *)0x0);
  objOBJ::GetOrigin(*(objOBJ **)(this + 0x59f),local_c);
  gsSND_SYSTEM::Play(gsSysSound,(sncSOUND_DESCR_3D *)&DAT_006040b8,local_c);
  return;
}




/* from: ais_perseus.cpp
   addr: 0042C980 */

void __thiscall aisPERSEUS::ProcessDESTROY_ENT(aisPERSEUS *this,entENTITY *param_1)

{
  aiNPC::ProcessDESTROY_ENT((aiNPC *)this,param_1);
  if (*(entENTITY **)(this + 0x5a3) == param_1) {
    *(undefined4 *)(this + 0x5a3) = 0;
  }
  return;
}




/* from: ais_perseus.cpp
   addr: 0042C9B0 */

int __thiscall
aisPERSEUS::ProcessMsg(aisPERSEUS *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  int iVar1;
  wrsfxPERSEUS *this_00;
  
  if (param_1 == 0x3f8) {
    iVar1 = apNAME::IsName((apNAME *)((int)param_2 + 8),s_ACTIVATE);
    if (iVar1 == 0) {
      iVar1 = apNAME::IsName((apNAME *)((int)param_2 + 8),s_DEACTIVATE);
      if ((iVar1 == 0) ||
         (this_00 = *(wrsfxPERSEUS **)(this + 0x5a3), this_00 == (wrsfxPERSEUS *)0x0))
      goto LAB_0042ca08;
      iVar1 = 0;
    }
    else {
      this_00 = *(wrsfxPERSEUS **)(this + 0x5a3);
      if (this_00 == (wrsfxPERSEUS *)0x0) goto LAB_0042ca08;
      iVar1 = 1;
    }
    wrsfxPERSEUS::Enable(this_00,iVar1);
  }
LAB_0042ca08:
  iVar1 = aiNPC_WR::ProcessMsg((aiNPC_WR *)this,param_1,param_2,param_3,param_4);
  return iVar1;
}




/* from: ais_perseus.cpp
   addr: 0042CA30 */

int __thiscall aisPERSEUS::IsArmoredObject(aisPERSEUS *this,char *param_1)

{
  int iVar1;
  
  iVar1 = strnicmp(param_1,s_grapia_fin,10);
  return (uint)(iVar1 == 0);
}




/* from: ais_perseus.cpp
   addr: 0042CA50 */

entENTITY * __fastcall aisPERSEUS::Create(animINST *param_1)

{
  aisSTATUE *this;
  
  this = (aisSTATUE *)operator_new(0x5a7);
  if (this != (aisSTATUE *)0x0) {
    aisSTATUE::aisSTATUE(this);
    *(undefined4 *)(this + 0x597) = 0;
    *(undefined4 *)(this + 0x59b) = 0;
    *(undefined4 *)(this + 0x59f) = 0;
    *(undefined4 *)(this + 0x5a3) = 0;
    *(undefined ***)this = &_vftable_;
    *(undefined4 *)(this + 0x94) = 0xf;
    return (entENTITY *)this;
  }
  return (entENTITY *)0x0;
}

