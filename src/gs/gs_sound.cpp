
/* from: gs:gs_sound.cpp
   addr: 004FDFC0 */

int __thiscall
gsSOUND_DESCR::ReadParams(gsSOUND_DESCR *this,psSHEET *param_1,char *param_2,char *param_3)

{
  int iVar1;
  char local_80 [64];
  char local_40 [64];
  
  iVar1 = sncSOUND_DESCR_3D::ReadParams((sncSOUND_DESCR_3D *)this,param_1,param_2,param_3);
  if (iVar1 == 0) {
    return 0;
  }
  sprintf(local_80,s__sanimSeq,param_3);
  psSHEET::GetStr(param_1,param_2,local_80,(char *)(this + 0x68),0x40);
  sprintf(local_80,s__sactionFrame,param_3);
  psSHEET::GetInt(param_1,param_2,local_80,(int *)(this + 0xa8));
  sprintf(local_80,s__snextSoundNmb,param_3);
  psSHEET::GetInt(param_1,param_2,local_80,(int *)(this + 0xb0));
  sprintf(local_80,s__saction,param_3);
  iVar1 = psSHEET::GetStr(param_1,param_2,local_80,local_40,0x40);
  if (iVar1 != 0) {
    iVar1 = entIACTIVE_OBJ::ActionName2State(local_40);
    *(int *)(this + 0xac) = iVar1;
  }
  return 1;
}




/* from: gs:gs_sound.cpp
   addr: 004FE0C0 */

int __thiscall gsCHANNEL_LIST::Init(gsCHANNEL_LIST *this,int param_1)

{
  int iVar1;
  void *pvVar2;
  
  iVar1 = sncCHANNEL_LIST::Init((sncCHANNEL_LIST *)this,param_1);
  if (iVar1 == 0) {
    return 0;
  }
  pvVar2 = apCalloc(param_1,4);
  *(void **)(this + 0x18) = pvVar2;
  if (pvVar2 == (void *)0x0) {
    return 0;
  }
  pvVar2 = apCalloc(param_1,4);
  *(void **)(this + 0x1c) = pvVar2;
  return (uint)(pvVar2 != (void *)0x0);
}




/* from: gs:gs_sound.cpp
   addr: 004FE110 */

void __thiscall gsCHANNEL_LIST::Term(gsCHANNEL_LIST *this)

{
  apFree(*(void **)(this + 0x18));
  apFree(*(void **)(this + 0x1c));
  return;
}




/* from: gs:gs_sound.cpp
   addr: 004FE130 */

int __thiscall gsCHANNEL_LIST::Del(gsCHANNEL_LIST *this,sncCHANNEL *param_1)

{
  int iVar1;
  
  iVar1 = sncCHANNEL_LIST::Del((sncCHANNEL_LIST *)this,param_1);
  if (iVar1 == -1) {
    return -1;
  }
  *(undefined4 *)(*(int *)(this + 0x18) + iVar1 * 4) = 0;
  *(undefined4 *)(*(int *)(this + 0x1c) + iVar1 * 4) = 0;
  return iVar1;
}




/* from: gs:gs_sound.cpp
   addr: 004FE160 */

gsSND_SYSTEM * __thiscall gsSND_SYSTEM::gsSND_SYSTEM(gsSND_SYSTEM *this)

{
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0x4d414452;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 0xec) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x1c) = 0x57;
  m3dMATR::Identity((m3dMATR *)(this + 0xac));
  return this;
}




/* from: gs:gs_sound.cpp
   addr: 004FE1B0
   addr: 004FE1B0 */

void * __thiscall gsSND_SYSTEM::_vector_deleting_destructor_(gsSND_SYSTEM *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  msgADDR::~msgADDR((msgADDR *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:gs_sound.cpp
   addr: 004FE1F0 */

int __thiscall gsSND_SYSTEM::Init(gsSND_SYSTEM *this)

{
  undefined4 uVar1;
  msgADDR *this_00;
  gsDOMAIN_LIST *this_01;
  int iVar2;
  int *piVar3;
  sncCHANNEL_3D *this_02;
  gsSND_SYSTEM *pgVar4;
  float10 fVar5;
  int iStack_10c;
  char acStack_108 [4];
  char local_104 [260];
  
  this_00 = (msgADDR *)operator_new(0x3c4);
  if (this_00 == (msgADDR *)0x0) {
    this_00 = (msgADDR *)0x0;
  }
  else {
    gsDOMAIN_LIST::gsDOMAIN_LIST((gsDOMAIN_LIST *)this_00);
    *(undefined ***)this_00 = &gsDOMAIN_LIST_SND::_vftable_;
  }
  *(msgADDR **)(this + 0x28) = this_00;
  if (this_00 == (msgADDR *)0x0) {
    return 0;
  }
  msgSYSTEM::InsertAddr(&msgSystem,this_00,0x24534e44,0x57);
  this_01 = (gsDOMAIN_LIST *)operator_new(0x538);
  if (this_01 == (gsDOMAIN_LIST *)0x0) {
    this_01 = (gsDOMAIN_LIST *)0x0;
  }
  else {
    gsDOMAIN_LIST::gsDOMAIN_LIST(this_01);
    *(undefined4 *)(this_01 + 0x3c4) = 0;
    this_01[0x3c8] = (gsDOMAIN_LIST)0x0;
    *(undefined4 *)(this_01 + 0x408) = 0;
    *(undefined4 *)(this_01 + 0x40c) = 0;
    *(undefined4 *)(this_01 + 0x410) = 0;
    *(undefined4 *)(this_01 + 0x414) = 0;
    this_01[0x418] = (gsDOMAIN_LIST)0x0;
    *(undefined4 *)(this_01 + 0x458) = 0;
    *(undefined4 *)(this_01 + 0x45c) = 0;
    *(undefined4 *)(this_01 + 0x460) = 0;
    *(undefined4 *)(this_01 + 0x464) = 0;
    this_01[0x468] = (gsDOMAIN_LIST)0x0;
    *(undefined4 *)(this_01 + 0x4a8) = 0;
    *(undefined4 *)(this_01 + 0x4ac) = 0;
    *(undefined4 *)(this_01 + 0x4b0) = 0;
    this_01[0x4b4] = (gsDOMAIN_LIST)0x0;
    *(undefined4 *)(this_01 + 0x4f4) = 0;
    this_01[0x4f8] = (gsDOMAIN_LIST)0x0;
    *(undefined ***)this_01 = &gsDOMAIN_LIST_MUS::_vftable_;
    apNAME::SetName((apNAME *)(this_01 + 0x44),s_music);
  }
  *(gsDOMAIN_LIST **)(this + 0x2c) = this_01;
  if (this_01 == (gsDOMAIN_LIST *)0x0) {
    return 0;
  }
  msgSYSTEM::InsertAddr(&msgSystem,(msgADDR *)this_01,0x24534e44,0x57);
  iVar2 = _apCfgReadBool((void **)0x0,s_Sound,s_Sound,(int *)(this + 0xec));
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = _apCfgReadString((void **)0x0,s_Sound,s_Path,local_104,0x104);
  if (iVar2 == 0) {
    return 0;
  }
  piVar3 = (int *)operator_new(0x20);
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3[1] = 0;
    piVar3[2] = 0;
    piVar3[3] = 0;
    piVar3[4] = 0;
    piVar3[5] = 0;
    *piVar3 = (int)&gsCHANNEL_LIST::_vftable_;
  }
  *(int **)(this + 0x30) = piVar3;
  if (piVar3 == (int *)0x0) {
    return 0;
  }
  iVar2 = (**(code **)(*piVar3 + 4))(400);
  if (iVar2 == 0) {
    return 0;
  }
  pgVar4 = this + 0x34;
  iStack_10c = 0;
  do {
    this_02 = (sncCHANNEL_3D *)operator_new(0xbc);
    if (this_02 == (sncCHANNEL_3D *)0x0) {
      this_02 = (sncCHANNEL_3D *)0x0;
    }
    else {
      sncCHANNEL_3D::sncCHANNEL_3D(this_02);
      *(undefined4 *)(this_02 + 0x84) = 0;
      *(undefined4 *)(this_02 + 0x88) = 0;
      *(undefined4 *)(this_02 + 0x8c) = 0x43b40000;
      *(undefined4 *)(this_02 + 0x90) = 0x43b40000;
      *(undefined4 *)(this_02 + 0x94) = 0;
      *(undefined4 *)(this_02 + 0x98) = _m3dVZero;
      *(undefined4 *)(this_02 + 0x9c) = DAT_00963740;
      *(undefined4 *)(this_02 + 0xa0) = DAT_00963744;
      *(undefined4 *)(this_02 + 0xa4) = _m3dVZero;
      *(undefined4 *)(this_02 + 0xa8) = DAT_00963740;
      *(undefined4 *)(this_02 + 0xac) = DAT_00963744;
      *(undefined4 *)(this_02 + 0xb0) = _m3dVUnitZ;
      *(undefined4 *)(this_02 + 0xb4) = DAT_005f99a0;
      uVar1 = DAT_005f99a4;
      *(undefined ***)this_02 = &sncCHANNEL_SPH::_vftable_;
      *(undefined4 *)(this_02 + 0xb8) = uVar1;
    }
    *(sncCHANNEL_3D **)pgVar4 = this_02;
    if (this_02 == (sncCHANNEL_3D *)0x0) {
      return 0;
    }
    piVar3 = *(int **)(this + 0x30);
    iVar2 = (**(code **)(*piVar3 + 8))(this_02);
    if (iVar2 != -1) {
      *(undefined4 *)(piVar3[7] + iVar2 * 4) = 0;
      *(undefined4 *)(piVar3[6] + iVar2 * 4) = 0;
    }
    iStack_10c = iStack_10c + 1;
    pgVar4 = pgVar4 + 4;
  } while (iStack_10c < 0x1e);
  if (*(int *)(this + 0xec) == 0) {
LAB_004fe583:
    ApplySettings(this);
    msgSYSTEM::InsertAddr(&msgSystem,(msgADDR *)this,0x57,0);
    return 1;
  }
  sndSystem = sndSYSTEM::make();
  if ((sndSystem != (sndSYSTEM *)0x0) &&
     (iVar2 = (**(code **)(*(int *)sndSystem + 0xc))(), iVar2 != 0)) {
    (**(code **)(*(int *)sndSystem + 0x14))(0);
    (**(code **)(*(int *)sndSystem + 0x38))(0x3f000000);
    fVar5 = (float10)(**(code **)(*(int *)sndSystem + 0x1c))();
    *(float *)(this + 0xf4) = (float)fVar5;
    (**(code **)(*(int *)sndSystem + 0x40))(&stack0xfffffef0);
    snmManager = (snmMANAGER *)operator_new(0x154);
    if (snmManager != (snmMANAGER *)0x0) {
      *(undefined4 *)snmManager = 0;
      *(undefined4 *)(snmManager + 0x148) = 0;
      *(undefined4 *)(snmManager + 0x14c) = 0;
      *(undefined4 *)(snmManager + 0x150) = 0;
      iVar2 = snmMANAGER::Init(snmManager,acStack_108,s_wav);
      if (iVar2 != 0) goto LAB_004fe583;
    }
  }
  sndSystem = (sndSYSTEM *)0x0;
  snmManager = (snmMANAGER *)0x0;
  *(undefined4 *)(this + 0xec) = 0;
  return 1;
}




/* from: gs:gs_sound.cpp
   addr: 004FE5B0
   addr: 004FE5B0 */

void * __thiscall gsCHANNEL_LIST::_scalar_deleting_destructor_(gsCHANNEL_LIST *this,uint param_1)

{
  sncCHANNEL_LIST::~sncCHANNEL_LIST((sncCHANNEL_LIST *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: gs:gs_sound.cpp
   addr: 004FE5D0 */

void __thiscall gsSND_SYSTEM::Term(gsSND_SYSTEM *this)

{
  snmMANAGER *psVar1;
  int iVar2;
  gsSND_SYSTEM *pgVar3;
  
  iVar2 = 0x1e;
  pgVar3 = this + 0x34;
  do {
    (**(code **)(**(int **)(this + 0x30) + 0xc))(*(int *)pgVar3);
    if (*(undefined4 **)pgVar3 != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)pgVar3)(1);
    }
    pgVar3 = pgVar3 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  (**(code **)(**(int **)(this + 0x30) + 0x14))();
  if (*(undefined4 **)(this + 0x30) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x30))(1);
  }
  if (sndSystem != (sndSYSTEM *)0x0) {
    (**(code **)(*(int *)sndSystem + 0x20))(*(undefined4 *)(this + 0xf4));
  }
  psVar1 = snmManager;
  if (snmManager != (snmMANAGER *)0x0) {
    if (*(int *)(snmManager + 0x14c) != 0) {
      snmMANAGER::Term(snmManager);
    }
    operator_delete(psVar1);
  }
  if (sndSystem != (sndSYSTEM *)0x0) {
    (*(code *)**(undefined4 **)sndSystem)(1);
  }
  msgSYSTEM::RemoveAddr(&msgSystem,(msgADDR *)this);
  msgSYSTEM::DestroyAddr(&msgSystem,*(msgADDR **)(this + 0x28));
  msgSYSTEM::DestroyAddr(&msgSystem,*(msgADDR **)(this + 0x2c));
  return;
}




/* from: gs:gs_sound.cpp
   addr: 004FE690 */

int __thiscall
gsSND_SYSTEM::ProcessMsg(gsSND_SYSTEM *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  uint uVar1;
  
  if (param_1 < 0x3f5) {
    if (param_1 == 0x3f4) {
      if (snmManager != (snmMANAGER *)0x0) {
        snmMANAGER::LoadAll(snmManager);
      }
      ApplySettings(this);
      return 0;
    }
    if (param_1 == 2) {
      return 1;
    }
    if (param_1 == 1000) {
      ProcessCamera(this);
      if (snmManager != (snmMANAGER *)0x0) {
        snmMANAGER::BeginFrame(snmManager);
      }
      if (sndSystem != (sndSYSTEM *)0x0) {
        (**(code **)(*(int *)sndSystem + 0x58))(gsElapsedTime);
        uVar1 = DAT_008b6a88 & 0x80000001;
        if ((int)uVar1 < 0) {
          uVar1 = (uVar1 - 1 | 0xfffffffe) + 1;
        }
        if (uVar1 == 0) {
          (**(code **)(*(int *)sndSystem + 0x3c))();
          return 0;
        }
      }
    }
  }
  else if (param_1 == 0x3fc) {
                    /* WARNING: Load size is inaccurate */
    if (*param_2 == 0) {
      Mute(this,1,0);
    }
    else if (*param_2 == 1) {
      Mute(this,0,0);
      return 0;
    }
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:gs_sound.cpp
   addr: 004FE790 */

void __thiscall gsSND_SYSTEM::ProcessCamera(gsSND_SYSTEM *this)

{
  int iVar1;
  camCAMERA *pcVar2;
  gsSND_SYSTEM *pgVar3;
  int local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  m3dV local_18 [12];
  m3dV local_c [12];
  
  camCAMERA::GetOrigin(gsCameraPtr,(m3dV *)&local_30);
  camCAMERA::GetLookAt(gsCameraPtr,local_18);
  camCAMERA::GetVUp(gsCameraPtr,(m3dV *)&local_48);
  local_48 = -local_48;
  local_44 = -local_44;
  local_40 = -local_40;
  camCAMERA::GetVRight(gsCameraPtr,local_c);
  iVar1 = _apCfgReadBool((void **)&DAT_00948318,s_Sound,s_SwitchChn,&local_4c);
  if ((iVar1 != 0) && (local_4c != 0)) {
    local_48 = -local_48;
    local_44 = -local_44;
    local_40 = -local_40;
  }
  if (gsElapsedTime <= _DAT_005dc650) {
    local_3c = _m3dVZero;
    local_38 = DAT_00963740;
    local_34 = DAT_00963744;
  }
  else {
    m3dMATR::GetOrigin((m3dMATR *)(this + 0xac),(m3dV *)&local_24);
    local_34 = ___real_3f800000 / gsElapsedTime;
    local_3c = (local_30 - local_24) * local_34;
    local_38 = (local_2c - local_20) * local_34;
    local_34 = (local_28 - local_1c) * local_34;
  }
  (**(code **)(**(int **)(this + 0x30) + 0x10))(gsTime,&local_30,local_18);
  pcVar2 = gsCameraPtr;
  pgVar3 = this + 0xac;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pgVar3 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pgVar3 = pgVar3 + 4;
  }
  if (sndSystem != (sndSYSTEM *)0x0) {
    (**(code **)(*(int *)sndSystem + 0x30))(&local_3c,&local_24,&stack0xffffffac,&local_48,0);
  }
  return;
}




/* from: gs:gs_sound.cpp
   addr: 004FE920 */

int __thiscall gsSND_SYSTEM::ApplySettings(gsSND_SYSTEM *this)

{
  int iVar1;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  if (*(int *)(this + 0xec) != 0) {
    _apCfgReadFloat((void **)0x0,s_Sound,s_Volume,&local_10);
    _apCfgReadFloat((void **)0x0,s_Sound,s_Music_Volume,&local_c);
    _apCfgReadFloat((void **)0x0,s_Sound,s_SFX_Volume,&local_8);
    _apCfgReadFloat((void **)0x0,s_Sound,s_Voice_Volume,&local_4);
    (**(code **)(*(int *)sndSystem + 0x20))();
    (**(code **)(*(int *)sndSystem + 0x5c))(local_10);
    iVar1 = 1;
    _apCfgReadBool((void **)0x0,s_Sound,s_Music,(int *)&stack0xffffffe4);
    (**(code **)(*(int *)sndSystem + 0x54))(iVar1 == 0,0);
    if (snmManager != (snmMANAGER *)0x0) {
      *(uint *)snmManager = *(uint *)snmManager & 0xfffffffe;
    }
  }
  return 1;
}




/* from: gs:gs_sound.cpp
   addr: 004FEA10 */

void __thiscall gsSND_SYSTEM::Mute(gsSND_SYSTEM *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  gsSND_SYSTEM *unaff_EBX;
  gsSND_SYSTEM *pgVar5;
  int local_8;
  gsSND_SYSTEM *local_4;
  
  iVar1 = param_1;
  if (*(int *)(this + 0xec) != 0) {
    *(int *)(this + 0xf0) = param_1;
    param_1 = 1;
    local_4 = this;
    _apCfgReadBool((void **)0x0,s_Sound,s_SFX,&param_1);
    iVar2 = param_2;
    if ((iVar1 == 0) && (param_1 != 0)) {
      iVar3 = 0;
    }
    else {
      iVar3 = 1;
    }
    sncCHANNEL_LIST::Mute(*(sncCHANNEL_LIST **)(this + 0x30),iVar3,param_2);
    pgVar5 = this + 0x34;
    iVar3 = 0x1e;
    do {
      if ((iVar1 == 0) && (param_1 != 0)) {
        iVar4 = 0;
      }
      else {
        iVar4 = 1;
      }
      sncCHANNEL::Mute(*(sncCHANNEL **)pgVar5,iVar4,iVar2);
      pgVar5 = pgVar5 + 4;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    local_8 = 1;
    _apCfgReadBool((void **)0x0,s_Sound,s_Music,&local_8);
    if ((iVar1 != 0) && ((iVar2 & 3U) != 0)) {
      local_8 = 0;
    }
    (**(code **)(*(int *)sndSystem + 0x54))(local_8 == 0,0);
    if (iVar1 == 0) {
      if ((iVar2 & 3U) != 0) {
        ApplySettings(unaff_EBX);
      }
    }
    else if (((iVar2 & 3U) != 0) && (sndSystem != (sndSYSTEM *)0x0)) {
      (**(code **)(*(int *)sndSystem + 0x20))(*(undefined4 *)(unaff_EBX + 0xf4));
      return;
    }
  }
  return;
}




/* from: gs:gs_sound.cpp
   addr: 004FEB30 */

int __thiscall
gsSND_SYSTEM::AddChannel
          (gsSND_SYSTEM *this,sncCHANNEL *param_1,entIACTIVE_OBJ *param_2,objOBJ *param_3)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  
  pvVar2 = apRealloc(*(void **)(param_2 + 0x38),*(int *)(param_2 + 0x34) * 4 + 4);
  *(void **)(param_2 + 0x38) = pvVar2;
  if (pvVar2 == (void *)0x0) {
    return 0;
  }
  piVar1 = *(int **)(this + 0x30);
  iVar3 = (**(code **)(*piVar1 + 8))(param_1);
  if (iVar3 == -1) {
    iVar3 = 0;
  }
  else {
    *(entIACTIVE_OBJ **)(piVar1[7] + iVar3 * 4) = param_2;
    *(entIACTIVE_OBJ **)(piVar1[6] + iVar3 * 4) = param_2;
  }
  *(int *)(*(int *)(param_2 + 0x38) + *(int *)(param_2 + 0x34) * 4) = iVar3;
  *(int *)(param_2 + 0x34) = *(int *)(param_2 + 0x34) + 1;
  if (*(int *)(param_2 + 0x20) == 0x454e5424) {
    UpdateEntPos(this,(entENTITY *)param_2);
  }
  return 1;
}




/* from: gs:gs_sound.cpp
   addr: 004FEBC0 */

void __thiscall gsSND_SYSTEM::DelChannel(gsSND_SYSTEM *this,entIACTIVE_OBJ *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  
  piVar1 = *(int **)(this + 0x30);
  if ((param_1 != (entIACTIVE_OBJ *)0x0) && (iVar3 = 0, 0 < piVar1[2])) {
    do {
      puVar2 = *(undefined4 **)(piVar1[3] + iVar3 * 4);
      if ((puVar2 != (undefined4 *)0x0) && (*(entIACTIVE_OBJ **)(piVar1[6] + iVar3 * 4) == param_1))
      {
        (**(code **)(*piVar1 + 0xc))(puVar2);
        (**(code **)*puVar2)(1);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < piVar1[2]);
  }
  apFree(*(void **)(param_1 + 0x38));
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  return;
}




/* from: gs:gs_sound.cpp
   addr: 004FEC30 */

int __thiscall
gsSND_SYSTEM::AddChannel
          (gsSND_SYSTEM *this,psSHEET *param_1,entIACTIVE_OBJ *param_2,objOBJ *param_3)

{
  int *piVar1;
  objOBJ *poVar2;
  sncCHANNEL *psVar3;
  void *pvVar4;
  int iVar5;
  int local_8;
  objOBJ *local_4;
  
  local_8 = 0;
  psVar3 = CreateChannel(this,param_1,0,s_SOUND_CHN,s_,s_SOUND,s_,param_3,&local_4);
  poVar2 = local_4;
  while (psVar3 != (sncCHANNEL *)0x0) {
    local_4 = poVar2;
    pvVar4 = apRealloc(*(void **)(param_2 + 0x38),*(int *)(param_2 + 0x34) * 4 + 4);
    *(void **)(param_2 + 0x38) = pvVar4;
    if (pvVar4 != (void *)0x0) {
      piVar1 = *(int **)(this + 0x30);
      iVar5 = (**(code **)(*piVar1 + 8))(psVar3);
      if (iVar5 == -1) {
        iVar5 = 0;
      }
      else {
        *(objOBJ **)(piVar1[7] + iVar5 * 4) = poVar2;
        *(entIACTIVE_OBJ **)(piVar1[6] + iVar5 * 4) = param_2;
      }
      *(int *)(*(int *)(param_2 + 0x38) + *(int *)(param_2 + 0x34) * 4) = iVar5;
      *(int *)(param_2 + 0x34) = *(int *)(param_2 + 0x34) + 1;
      if (*(int *)(param_2 + 0x20) == 0x454e5424) {
        UpdateEntPos(this,(entENTITY *)param_2);
      }
    }
    local_8 = local_8 + 1;
    psVar3 = CreateChannel(this,param_1,local_8,s_SOUND_CHN,s_,s_SOUND,s_,param_3,&local_4);
    poVar2 = local_4;
  }
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:gs_sound.cpp
   addr: 004FED40 */

sncCHANNEL * __thiscall
gsSND_SYSTEM::CreateChannel
          (gsSND_SYSTEM *this,psSHEET *param_1,int param_2,char *param_3,char *param_4,char *param_5
          ,char *param_6,objOBJ *param_7,objOBJ **param_8)

{
  char cVar1;
  undefined4 uVar2;
  psSHEET *this_00;
  psSECT *ppVar3;
  sncCHANNEL *this_01;
  int iVar4;
  objOBJ *poVar5;
  char *pcVar6;
  sncSOUND_DESCR *psVar7;
  int iVar8;
  int unaff_ESI;
  char acStack_cc [12];
  char local_c0 [52];
  char acStack_8c [64];
  char acStack_4c [68];
  psSHEET *ppStack_8;
  int iStack_4;
  
  if (param_1 != (psSHEET *)0x0) {
    if (param_2 == 0) {
      sprintf(local_c0,s__s,param_3);
    }
    else {
      sprintf(local_c0,s__s__d,param_3,param_2);
    }
    ppVar3 = psSHEET::FindSect(param_1,local_c0);
    if ((ppVar3 != (psSECT *)0x0) &&
       (this_01 = (sncCHANNEL *)operator_new(0xbc), this_01 != (sncCHANNEL *)0x0)) {
      sncCHANNEL::sncCHANNEL(this_01);
      *(undefined4 *)(this_01 + 0x74) = _m3dVZero;
      *(undefined4 *)(this_01 + 0x78) = DAT_00963740;
      uVar2 = DAT_00963744;
      *(undefined4 *)(this_01 + 0x80) = 0;
      *(undefined ***)this_01 = &sncCHANNEL_3D::_vftable_;
      *(undefined4 *)(this_01 + 0x7c) = uVar2;
      *(undefined4 *)(this_01 + 0x84) = 0;
      *(undefined4 *)(this_01 + 0x88) = 0;
      *(undefined4 *)(this_01 + 0x8c) = 0x43b40000;
      *(undefined4 *)(this_01 + 0x90) = 0x43b40000;
      *(undefined4 *)(this_01 + 0x94) = 0;
      *(undefined4 *)(this_01 + 0x98) = _m3dVZero;
      *(undefined4 *)(this_01 + 0x9c) = DAT_00963740;
      *(undefined4 *)(this_01 + 0xa0) = DAT_00963744;
      *(undefined4 *)(this_01 + 0xa4) = _m3dVZero;
      *(undefined4 *)(this_01 + 0xa8) = DAT_00963740;
      *(undefined4 *)(this_01 + 0xac) = DAT_00963744;
      *(undefined4 *)(this_01 + 0xb0) = _m3dVUnitZ;
      *(undefined4 *)(this_01 + 0xb4) = DAT_005f99a0;
      uVar2 = DAT_005f99a4;
      *(undefined ***)this_01 = &sncCHANNEL_SPH::_vftable_;
      *(undefined4 *)(this_01 + 0xb8) = uVar2;
      (**(code **)(*(int *)this_01 + 0x18))(param_1,local_c0,param_4);
      sprintf(acStack_8c,s__sisRandNext,param_3);
      iVar4 = psSHEET::GetBool(param_1,acStack_cc,acStack_8c,(int *)&stack0xffffff28);
      if ((iVar4 != 0) && (unaff_ESI != 0)) {
        *(uint *)(this_01 + 4) = *(uint *)(this_01 + 4) | 0x100;
      }
      sprintf(acStack_8c,s__sisRandPos,param_3);
      iVar4 = psSHEET::GetBool(param_1,acStack_cc,acStack_8c,(int *)&stack0xffffff28);
      if ((iVar4 != 0) && (unaff_ESI != 0)) {
        *(uint *)(this_01 + 4) = *(uint *)(this_01 + 4) | 0x200;
      }
      sprintf(acStack_8c,s__sisNoMuteHidden,param_3);
      iVar4 = psSHEET::GetBool(param_1,acStack_cc,acStack_8c,(int *)&stack0xffffff28);
      if ((iVar4 != 0) && (unaff_ESI != 0)) {
        *(uint *)(this_01 + 4) = *(uint *)(this_01 + 4) | 0x400;
      }
      param_5[0] = '\0';
      param_5[1] = '\0';
      param_5[2] = '\0';
      param_5[3] = '\0';
      if ((param_4 != (char *)0x0) &&
         (iVar4 = psSHEET::GetStr(ppStack_8,acStack_cc,s_followObj,acStack_4c,0x40), iVar4 != 0)) {
        poVar5 = objFindName((objOBJ *)param_4,acStack_4c);
        *(objOBJ **)param_5 = poVar5;
      }
      iVar4 = 0;
      do {
        if (iVar4 == 0) {
          pcVar6 = (char *)param_2;
          do {
            cVar1 = *pcVar6;
            pcVar6[(int)acStack_cc - param_2] = cVar1;
            pcVar6 = pcVar6 + 1;
          } while (cVar1 != '\0');
        }
        else {
          sprintf(acStack_cc,s__s__d,param_2,iVar4);
        }
        this_00 = ppStack_8;
        ppVar3 = psSHEET::FindSect(ppStack_8,acStack_cc);
        if (ppVar3 == (psSECT *)0x0) {
          if (iVar4 == 0) {
            pcVar6 = (char *)param_2;
            do {
              cVar1 = *pcVar6;
              pcVar6[(int)(acStack_cc + -param_2)] = cVar1;
              pcVar6 = pcVar6 + 1;
            } while (cVar1 != '\0');
          }
          else {
            sprintf(acStack_cc,s__s_d,param_2,iVar4);
          }
          ppVar3 = psSHEET::FindSect(this_00,acStack_cc);
          if (ppVar3 == (psSECT *)0x0) {
            return this_01;
          }
        }
        sprintf(acStack_8c,s__schannelNmb,param_3);
        psSHEET::GetInt(this_00,acStack_cc,acStack_8c,(int *)&stack0xffffff30);
        if (iStack_4 == 0) {
          psVar7 = (sncSOUND_DESCR *)operator_new(0xb4);
          if (psVar7 == (sncSOUND_DESCR *)0x0) {
            return (sncCHANNEL *)0x0;
          }
          psVar7[4] = (sncSOUND_DESCR)0x0;
          *(undefined4 *)(psVar7 + 0x44) = 0;
          *(undefined4 *)(psVar7 + 0x48) = 0;
          *(undefined4 *)(psVar7 + 0x4c) = 0;
          *(undefined4 *)(psVar7 + 0x50) = 0;
          *(undefined4 *)(psVar7 + 0x54) = 0;
          *(undefined4 *)(psVar7 + 0x58) = 0;
          *(undefined4 *)(psVar7 + 0x5c) = 0;
          *(undefined4 *)(psVar7 + 0x60) = 0;
          *(undefined4 *)(psVar7 + 100) = 0;
          psVar7[0x68] = (sncSOUND_DESCR)0x0;
          *(undefined4 *)(psVar7 + 0xa8) = 0xffffffff;
          *(undefined4 *)(psVar7 + 0xac) = 0;
          *(undefined4 *)(psVar7 + 0xb0) = 0xffffffff;
          *(undefined ***)psVar7 = &gsSOUND_DESCR::_vftable_;
          *(uint *)(psVar7 + 0x5c) = *(uint *)(psVar7 + 0x5c) | 6;
          iVar8 = (*(code *)**(undefined4 **)psVar7)(ppStack_8,acStack_cc,param_3);
          if (iVar8 == 0) {
            return this_01;
          }
          iVar8 = sncCHANNEL::AddDescr(this_01,psVar7);
          if (iVar8 == -1) {
            return (sncCHANNEL *)0x0;
          }
          sprintf(acStack_8c,s__sisStartPlay,param_3);
          iVar8 = psSHEET::GetBool(ppStack_8,acStack_cc,acStack_8c,(int *)&stack0xffffff28);
          if ((iVar8 != 0) && (unaff_ESI != 0)) {
            (**(code **)(*(int *)this_01 + 4))(psVar7,0);
          }
        }
        iVar4 = iVar4 + 1;
      } while( true );
    }
  }
  return (sncCHANNEL *)0x0;
}




/* from: gs:gs_sound.cpp
   addr: 004FF170 */

void __thiscall gsSND_SYSTEM::UpdateEntPos(gsSND_SYSTEM *this,entENTITY *param_1)

{
  int *piVar1;
  animINST *this_00;
  objOBJ *this_01;
  int iVar2;
  int local_2c;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  m3dV local_18 [12];
  m3dV local_c [12];
  
  local_2c = 0;
  if (0 < *(int *)(param_1 + 0x34)) {
    do {
      iVar2 = *(int *)(*(int *)(param_1 + 0x38) + local_2c * 4) * 4;
      piVar1 = *(int **)(iVar2 + *(int *)(*(int *)(this + 0x30) + 0xc));
      if (piVar1 != (int *)0x0) {
        this_00 = *(animINST **)(param_1 + 0xbc);
        this_01 = *(objOBJ **)(iVar2 + *(int *)(*(int *)(this + 0x30) + 0x1c));
        if (this_01 == (objOBJ *)0x0) {
          animINST::GetPos(this_00,local_c);
          animINST::GetDir(this_00,local_18);
        }
        else {
          animINST::Validate(this_00,4);
          objOBJ::GetOrigin(this_01,local_c);
          objOBJ::GetAxisZ(this_01,local_18);
        }
        local_24 = *(undefined4 *)(param_1 + 0xe0);
        local_20 = *(undefined4 *)(param_1 + 0xe4);
        local_1c = *(undefined4 *)(param_1 + 0xe8);
        (**(code **)(*piVar1 + 0x14))(local_c,&local_24,local_18);
      }
      local_2c = local_2c + 1;
    } while (local_2c < *(int *)(param_1 + 0x34));
  }
  return;
}




/* from: gs:gs_sound.cpp
   addr: 004FF250 */

void __thiscall gsSND_SYSTEM::UpdateEntAnim(gsSND_SYSTEM *this,entENTITY *param_1)

{
  char cVar1;
  sncCHANNEL *this_00;
  int iVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  int local_c;
  
  local_c = 0;
  if (0 < *(int *)(param_1 + 0x34)) {
    do {
      iVar5 = 0;
      this_00 = *(sncCHANNEL **)
                 (*(int *)(*(int *)(this + 0x30) + 0xc) +
                 *(int *)(*(int *)(param_1 + 0x38) + local_c * 4) * 4);
      if (this_00 != (sncCHANNEL *)0x0) {
        iVar2 = *(int *)(param_1 + 0xbc);
        if (((*(byte *)(iVar2 + 4) & 3) == 0) || ((*(uint *)(this_00 + 4) & 0x400) != 0)) {
          iVar7 = 0;
        }
        else {
          iVar7 = 1;
        }
        sncCHANNEL::Mute(this_00,iVar7,3);
        bVar3 = false;
        if (0 < *(int *)(this_00 + 0x48)) {
          do {
            iVar4 = -1;
            iVar7 = *(int *)(*(int *)(this_00 + 0x4c) + iVar5 * 4);
            pcVar6 = (char *)(iVar7 + 0x68);
            do {
              if (iVar4 == 0) break;
              iVar4 = iVar4 + -1;
              cVar1 = *pcVar6;
              pcVar6 = pcVar6 + 1;
            } while (cVar1 != '\0');
            if ((iVar4 != -2) &&
               (iVar4 = animTPL::FindSeqName(*(animTPL **)(iVar2 + 0x138),(char *)(iVar7 + 0x68)),
               iVar4 != -1)) {
              if (*(int *)(iVar7 + 0xa8) == -1) {
                if ((iVar4 == *(int *)(iVar2 + 0xe0)) &&
                   ((char)((uint)*(undefined4 *)(iVar2 + 4) >> 8) < '\0')) {
                  iVar4 = *(int *)(iVar7 + 0xb0);
LAB_004ff334:
                  sncCHANNEL::Play(this_00,iVar5,iVar4);
                  bVar3 = true;
                }
              }
              else if ((iVar4 == *(int *)(iVar2 + 0xe0)) &&
                      ((*(uint *)(iVar2 + 0x28) & 1 << ((byte)*(int *)(iVar7 + 0xa8) & 0x1f)) != 0))
              {
                iVar4 = *(int *)(iVar7 + 0xb0);
                goto LAB_004ff334;
              }
              iVar4 = sncCHANNEL::IsPlay(this_00,iVar5);
              if (((iVar4 != 0) && ((*(byte *)(iVar7 + 0x44) & 2) != 0)) &&
                 ((*(uint *)(iVar2 + 4) & 0x2000) == 0)) {
                sncCHANNEL::Play(this_00,-1,-1);
              }
              if (bVar3) break;
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < *(int *)(this_00 + 0x48));
        }
      }
      local_c = local_c + 1;
    } while (local_c < *(int *)(param_1 + 0x34));
  }
  return;
}




/* from: gs:gs_sound.cpp
   addr: 004FF3A0 */

int __thiscall gsSND_SYSTEM::UpdateIAction(gsSND_SYSTEM *this,entIACTIVE_OBJ *param_1,int param_2)

{
  sncCHANNEL *this_00;
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0;
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x34)) {
    do {
      this_00 = *(sncCHANNEL **)
                 (*(int *)(*(int *)(this + 0x30) + 0xc) +
                 *(int *)(*(int *)(param_1 + 0x38) + iVar2 * 4) * 4);
      if ((this_00 != (sncCHANNEL *)0x0) && (iVar3 = 0, 0 < *(int *)(this_00 + 0x48))) {
        do {
          if ((*(uint *)(*(int *)(*(int *)(this_00 + 0x4c) + iVar3 * 4) + 0xac) & param_2) != 0) {
            sncCHANNEL::Play(this_00,iVar3,-1);
            iVar1 = 1;
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < *(int *)(this_00 + 0x48));
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x34));
  }
  return iVar1;
}




/* from: gs:gs_sound.cpp
   addr: 004FF420 */

void __thiscall gsSND_SYSTEM::Play(gsSND_SYSTEM *this,sncSOUND_DESCR_3D *param_1,m3dV *param_2)

{
  undefined4 uVar1;
  int iVar2;
  gsSND_SYSTEM *pgVar3;
  int iVar4;
  
  if (((byte)param_1[0x44] & 2) == 0) {
    iVar4 = 0;
    pgVar3 = this + 0x34;
    while( true ) {
      iVar2 = sncCHANNEL::IsPlay(*(sncCHANNEL **)pgVar3,-1);
      if (iVar2 == 0) break;
      iVar4 = iVar4 + 1;
      pgVar3 = pgVar3 + 4;
      if (0x1d < iVar4) {
        return;
      }
    }
    uVar1 = *(undefined4 *)(param_1 + 100);
    iVar2 = *(int *)(this + iVar4 * 4 + 0x34);
    *(undefined4 *)(iVar2 + 0x84) = *(undefined4 *)(param_1 + 0x60);
    *(undefined4 *)(iVar2 + 0x88) = uVar1;
    (**(code **)(**(int **)(this + iVar4 * 4 + 0x34) + 0x14))(param_2,0,0);
    (**(code **)(**(int **)(this + iVar4 * 4 + 0x34) + 4))(param_1,0);
  }
  return;
}




/* from: gs:gs_sound.cpp
   addr: 004FF490 */

void __thiscall gsSND_SYSTEM::ReleaseMusic(gsSND_SYSTEM *this)

{
  *(uint *)(*(int *)(this + 0x2c) + 0x98) = *(uint *)(*(int *)(this + 0x2c) + 0x98) & 0xfffffeff;
  return;
}




/* from: gs:gs_sound.cpp
   addr: 004FF4C0 */

int __thiscall gsDOMAIN_SND::Init(gsDOMAIN_SND *this)

{
  int *piVar1;
  gsSND_SYSTEM *this_00;
  int iVar2;
  sncCHANNEL *psVar3;
  void *pvVar4;
  int local_c;
  objOBJ *local_8;
  psSHEET *local_4;
  
  iVar2 = gsDOMAIN::Init((gsDOMAIN *)this);
  this_00 = gsSysSound;
  if (iVar2 == 0) {
    return 0;
  }
  local_4 = *(psSHEET **)(*(int *)(this + 0x34) + 0xf0);
  local_c = 0;
  psVar3 = gsSND_SYSTEM::CreateChannel
                     (gsSysSound,local_4,0,s_SOUND_CHN,s_,s_SOUND,s_,(objOBJ *)0x0,&local_8);
  while (psVar3 != (sncCHANNEL *)0x0) {
    pvVar4 = apRealloc(*(void **)(this + -0x5c),*(int *)(this + -0x60) * 4 + 4);
    *(void **)(this + -0x5c) = pvVar4;
    if (pvVar4 != (void *)0x0) {
      piVar1 = *(int **)(this_00 + 0x30);
      iVar2 = (**(code **)(*piVar1 + 8))(psVar3);
      if (iVar2 == -1) {
        iVar2 = 0;
      }
      else {
        *(objOBJ **)(piVar1[7] + iVar2 * 4) = local_8;
        *(entENTITY **)(piVar1[6] + iVar2 * 4) = (entENTITY *)(this + -0x94);
      }
      *(int *)(*(int *)(this + -0x5c) + *(int *)(this + -0x60) * 4) = iVar2;
      *(int *)(this + -0x60) = *(int *)(this + -0x60) + 1;
      if (*(int *)(this + -0x74) == 0x454e5424) {
        gsSND_SYSTEM::UpdateEntPos(this_00,(entENTITY *)(this + -0x94));
      }
    }
    local_c = local_c + 1;
    psVar3 = gsSND_SYSTEM::CreateChannel
                       (this_00,local_4,local_c,s_SOUND_CHN,s_,s_SOUND,s_,(objOBJ *)0x0,&local_8);
  }
  return 1;
}




/* from: gs:gs_sound.cpp
   addr: 004FF5E0 */

void __thiscall gsDOMAIN_SND::Enter(gsDOMAIN_SND *this)

{
  sncCHANNEL *this_00;
  int iVar1;
  m3dV local_c [12];
  
  iVar1 = 0;
  if (0 < *(int *)(this + 0x34)) {
    do {
      this_00 = *(sncCHANNEL **)
                 (*(int *)(*(int *)(gsSysSound + 0x30) + 0xc) +
                 *(int *)(*(int *)(this + 0x38) + iVar1 * 4) * 4);
      if (this_00 != (sncCHANNEL *)0x0) {
        if ((*(uint *)(this_00 + 4) & 0x200) != 0) {
          scnDOMAIN::GetRandomPoint((scnDOMAIN *)(this + 0x94),local_c);
          (**(code **)(*(int *)this_00 + 0x14))(local_c,0,0);
        }
        sncCHANNEL::Play(this_00,0,-1);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(this + 0x34));
  }
  return;
}




/* from: gs:gs_sound.cpp
   addr: 004FF650 */

void __thiscall gsDOMAIN_SND::Leave(gsDOMAIN_SND *this)

{
  sncCHANNEL *this_00;
  int iVar1;
  
  iVar1 = 0;
  if (0 < *(int *)(this + 0x34)) {
    do {
      this_00 = *(sncCHANNEL **)
                 (*(int *)(*(int *)(gsSysSound + 0x30) + 0xc) +
                 *(int *)(*(int *)(this + 0x38) + iVar1 * 4) * 4);
      if (this_00 != (sncCHANNEL *)0x0) {
        sncCHANNEL::Play(this_00,-1,-1);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(this + 0x34));
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:gs_sound.cpp
   addr: 004FF690 */

void __thiscall gsDOMAIN_SND::Update(gsDOMAIN_SND *this,m3dV *param_1)

{
  sncCHANNEL *this_00;
  int iVar1;
  int iVar2;
  int iVar3;
  m3dV local_c [12];
  
  iVar2 = 0;
  if (0 < *(int *)(this + 0x34)) {
    do {
      this_00 = *(sncCHANNEL **)
                 (*(int *)(*(int *)(gsSysSound + 0x30) + 0xc) +
                 *(int *)(*(int *)(this + 0x38) + iVar2 * 4) * 4);
      if ((((this_00 != (sncCHANNEL *)0x0) && (((byte)this[0xd0] & 1) == 0)) &&
          ((*(uint *)(this_00 + 4) & 0x100) != 0)) &&
         (iVar1 = sncCHANNEL::IsPlay(this_00,-1), iVar1 == 0)) {
        if ((*(uint *)(this_00 + 4) & 0x200) != 0) {
          scnDOMAIN::GetRandomPoint((scnDOMAIN *)(this + 0x94),local_c);
          (**(code **)(*(int *)this_00 + 0x14))(local_c,0,0);
        }
        iVar3 = -1;
        m3dRandMax(*(float *)(this_00 + 0x48));
        iVar1 = ftol();
        sncCHANNEL::Play(this_00,iVar1,iVar3);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(this + 0x34));
  }
  return;
}




/* from: gs:gs_sound.cpp
   addr: 004FF750 */

int __thiscall gsDOMAIN_LIST_SND::IsAddObj(gsDOMAIN_LIST_SND *this,objOBJ *param_1)

{
  char *pcVar1;
  
  pcVar1 = strstr(*(char **)(param_1 + 0x18),s__dom_snd);
  return (uint)(pcVar1 != (char *)0x0);
}




/* from: gs:gs_sound.cpp
   addr: 004FF770 */

int __thiscall gsDOMAIN_MUS::Init(gsDOMAIN_MUS *this)

{
  int iVar1;
  
  iVar1 = gsDOMAIN::Init((gsDOMAIN *)this);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(psSHEET **)(*(int *)(this + 0x34) + 0xf0) != (psSHEET *)0x0) {
    psSHEET::GetStr(*(psSHEET **)(*(int *)(this + 0x34) + 0xf0),s_MUSIC,s_curMusic,
                    (char *)(this + 0x98),0x40);
    psSHEET::GetStr(*(psSHEET **)(*(int *)(this + 0x34) + 0xf0),s_MUSIC,s_cur,(char *)(this + 0x98),
                    0x40);
  }
  return 1;
}




/* from: gs:gs_sound.cpp
   addr: 004FF7D0 */

void __thiscall gsDOMAIN_MUS::Enter(gsDOMAIN_MUS *this)

{
  gsDOMAIN_LIST_MUS::SetMusicTempo(*(gsDOMAIN_LIST_MUS **)(this + 0x128),(char *)(this + 300));
  return;
}




/* from: gs:gs_sound.cpp
   addr: 004FF7F0 */

int __thiscall
gsDOMAIN_MUS::ProcessMsg(gsDOMAIN_MUS *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  int iVar1;
  
  if (param_1 == 0x3f8) {
    iVar1 = apNAME::IsName((apNAME *)((int)param_2 + 8),s_SET);
    if (iVar1 != 0) {
      gsDOMAIN_LIST_MUS::SetMusicTempo
                (*(gsDOMAIN_LIST_MUS **)(this + 0x128),(char *)((int)param_2 + 0x60));
    }
  }
  iVar1 = gsDOMAIN::ProcessMsg((gsDOMAIN *)this,param_1,param_2,param_3,param_4);
  return iVar1;
}




/* from: gs:gs_sound.cpp
   addr: 004FF840 */

int __thiscall gsDOMAIN_LIST_MUS::IsAddObj(gsDOMAIN_LIST_MUS *this,objOBJ *param_1)

{
  char *pcVar1;
  
  pcVar1 = strstr(*(char **)(param_1 + 0x18),s__dom_mus);
  return (uint)(pcVar1 != (char *)0x0);
}




/* from: gs:gs_sound.cpp
   addr: 004FF860 */

int __thiscall gsDOMAIN_LIST_MUS::ProcessINIT(gsDOMAIN_LIST_MUS *this)

{
  *(uint *)(this + 0x3c4) = *(uint *)(this + 0x3c4) | 1;
  *(uint *)(this + 0x414) = *(uint *)(this + 0x414) | 1;
  *(uint *)(this + 0x464) = *(uint *)(this + 0x464) | 1;
  return 1;
}




/* from: gs:gs_sound.cpp
   addr: 004FF890 */

void __thiscall gsDOMAIN_LIST_MUS::ProcessTERM(gsDOMAIN_LIST_MUS *this)

{
  if (sndSystem != (sndSYSTEM *)0x0) {
    (**(code **)(*(int *)sndSystem + 0x4c))(*(undefined4 *)(this + 0x4f4));
  }
  return;
}




/* from: gs:gs_sound.cpp
   addr: 004FF8B0 */

int __thiscall gsDOMAIN_LIST_MUS::ProcessINIT_LEVEL(gsDOMAIN_LIST_MUS *this)

{
  gsDOMAIN_LIST_MUS *pgVar1;
  int iVar2;
  
  (**(code **)(*(int *)this + 0x74))();
  iVar2 = gsDOMAIN_LIST::ProcessINIT_LEVEL((gsDOMAIN_LIST *)this);
  if (iVar2 == 0) {
    return 0;
  }
  if (*(psSHEET **)(gsScenePtr + 0x80) != (psSHEET *)0x0) {
    psSHEET::GetStr(*(psSHEET **)(gsScenePtr + 0x80),s_MUSIC,s_softMusic,(char *)(this + 0x3c8),0x40
                   );
    psSHEET::GetStr(*(psSHEET **)(gsScenePtr + 0x80),s_MUSIC,s_hardMusic,(char *)(this + 0x418),0x40
                   );
    psSHEET::GetStr(*(psSHEET **)(gsScenePtr + 0x80),s_MUSIC,s_fightMusic,(char *)(this + 0x468),
                    0x40);
    pgVar1 = this + 0x4b4;
    psSHEET::GetStr(*(psSHEET **)(gsScenePtr + 0x80),s_MUSIC,s_curMusic,(char *)pgVar1,0x40);
    psSHEET::GetStr(*(psSHEET **)(gsScenePtr + 0x80),s_MUSIC,s_soft,(char *)(this + 0x3c8),0x40);
    psSHEET::GetStr(*(psSHEET **)(gsScenePtr + 0x80),s_MUSIC,s_hard,(char *)(this + 0x418),0x40);
    psSHEET::GetStr(*(psSHEET **)(gsScenePtr + 0x80),s_MUSIC,s_fight,(char *)(this + 0x468),0x40);
    psSHEET::GetStr(*(psSHEET **)(gsScenePtr + 0x80),s_MUSIC,s_cur,(char *)pgVar1,0x40);
    SetMusicTempo(this,(char *)pgVar1);
  }
  return 1;
}




/* from: gs:gs_sound.cpp
   addr: 004FFA20 */

int __thiscall
gsDOMAIN_LIST_MUS::ProcessMsg
          (gsDOMAIN_LIST_MUS *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  apNAME *this_00;
  int iVar1;
  int iVar2;
  
  if (param_1 < 0x3f9) {
    if (param_1 != 0x3f8) {
      if (param_1 == 1) {
        (**(code **)(*(int *)this + 0x74))();
      }
      else if (param_1 == 2) {
        (**(code **)(*(int *)this + 0x78))();
      }
      else if (param_1 == 0x3ef) {
        gsMP_SERVER::DeclSyncable(gsSysServer,(entIACTIVE_OBJ *)this);
      }
      goto LAB_004ffb8c;
    }
    iVar2 = apNAME::IsName((apNAME *)((int)param_2 + 8),s_SET);
    if (iVar2 != 0) {
      SetMusicTempo(this,(char *)((int)param_2 + 0x60));
    }
  }
  else if (param_1 != 0x3fc) {
    if ((param_1 == 0x40c) && (*(int *)((int)param_2 + 4) == -100)) {
      iVar2 = *(int *)((int)param_2 + 8);
      this_00 = (apNAME *)(this + 0x4f8);
      apNAME::SetName(this_00,(char *)(iVar2 + 8));
      iVar1 = apNAME::IsName((apNAME *)(this + 0x3c8),(char *)this_00);
      if (iVar1 == 0) {
        iVar1 = apNAME::IsName((apNAME *)(this + 0x418),(char *)this_00);
        if (iVar1 == 0) {
          iVar1 = apNAME::IsName((apNAME *)(this + 0x468),(char *)this_00);
          if (iVar1 != 0) {
            *(gsDOMAIN_LIST_MUS **)(this + 0x4f4) = this + 0x464;
          }
        }
        else {
          *(gsDOMAIN_LIST_MUS **)(this + 0x4f4) = this + 0x414;
        }
      }
      else {
        *(gsDOMAIN_LIST_MUS **)(this + 0x4f4) = this + 0x3c4;
      }
      iVar1 = *(int *)(this + 0x4f4);
      if (iVar1 != 0) {
        *(undefined4 *)(iVar1 + 0x48) = *(undefined4 *)(iVar2 + 0x48);
        *(undefined4 *)(iVar1 + 0x4c) = *(undefined4 *)(iVar2 + 0x4c);
        if (sndSystem != (sndSYSTEM *)0x0) {
          (**(code **)(*(int *)sndSystem + 0x48))(0,0);
          (**(code **)(*(int *)sndSystem + 0x48))(*(undefined4 *)(this + 0x4f4),0);
        }
      }
    }
    goto LAB_004ffb8c;
  }
                    /* WARNING: Load size is inaccurate */
  if (((*param_2 == 1) || (*param_2 == 5)) && (sndSystem != (sndSYSTEM *)0x0)) {
    (**(code **)(*(int *)sndSystem + 0x48))(*(undefined4 *)(this + 0x4f4),0);
  }
LAB_004ffb8c:
  iVar2 = gsDOMAIN_LIST::ProcessMsg((gsDOMAIN_LIST *)this,param_1,param_2,param_3,param_4);
  return iVar2;
}




/* from: gs:gs_sound.cpp
   addr: 004FFBB0 */

void __fastcall gsDOMAIN_LIST_MUS::SetMusicTempo(gsDOMAIN_LIST_MUS *param_1,char *param_2)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = stricmp(param_2,s_soft);
  if (iVar2 == 0) {
    *(gsDOMAIN_LIST_MUS **)(param_1 + 0x4f4) = param_1 + 0x3c4;
  }
  else {
    iVar2 = stricmp(param_2,s_hard);
    if (iVar2 == 0) {
      *(gsDOMAIN_LIST_MUS **)(param_1 + 0x4f4) = param_1 + 0x414;
    }
    else {
      iVar2 = stricmp(param_2,s_fight);
      if (iVar2 == 0) {
        *(gsDOMAIN_LIST_MUS **)(param_1 + 0x4f4) = param_1 + 0x464;
      }
    }
  }
  bVar1 = false;
  if (*(int *)(param_1 + 0x4f4) != 0) {
    iVar2 = apNAME::IsName((apNAME *)(*(int *)(param_1 + 0x4f4) + 4),(char *)(param_1 + 0x4f8));
    if (iVar2 != 0) goto LAB_004ffc38;
  }
  bVar1 = true;
LAB_004ffc38:
  if (sndSystem != (sndSYSTEM *)0x0) {
    iVar2 = *(int *)(param_1 + 0x4f4);
    if (iVar2 != 0) {
      if (bVar1) {
        *(undefined4 *)(iVar2 + 0x48) = 0;
        *(undefined4 *)(iVar2 + 0x4c) = 0;
        (**(code **)(*(int *)sndSystem + 0x4c))(*(undefined4 *)(param_1 + 0x4f4));
      }
      apNAME::SetName((apNAME *)(param_1 + 0x4f8),(char *)(*(int *)(param_1 + 0x4f4) + 4));
      (**(code **)(*(int *)sndSystem + 0x48))(*(undefined4 *)(param_1 + 0x4f4),1);
      return;
    }
    (**(code **)(*(int *)sndSystem + 0x4c))(param_1 + 0x3c4);
    (**(code **)(*(int *)sndSystem + 0x4c))(param_1 + 0x414);
    (**(code **)(*(int *)sndSystem + 0x4c))(param_1 + 0x464);
  }
  return;
}




/* from: gs:gs_sound.cpp
   addr: 004FFCF0 */

void __thiscall gsDOMAIN_LIST_MUS::ProcessMP_GET_SYNC_DATA(gsDOMAIN_LIST_MUS *this,void *param_1)

{
  gsDOMAIN_LIST_MUS gVar1;
  int iVar2;
  gsDOMAIN_LIST_MUS *pgVar3;
  undefined4 *puVar4;
  
  if (*(int *)(gsSysMP + 0x28) == 1) {
                    /* WARNING: Load size is inaccurate */
    puVar4 = *param_1;
    if (puVar4 == (undefined4 *)0x0) {
      if ((DAT_00948314 & 1) == 0) {
        DAT_00948314 = DAT_00948314 | 1;
        DAT_00948320._0_1_ = 0;
        DAT_00948320._1_1_ = 0x40;
        DAT_00948324 = 0xffffffff;
        DAT_00948320._2_2_ = 0x50;
        DAT_00948328 = 0;
        DAT_00948368 = 0;
        DAT_0094836c = 0;
        atexit((_func_4879 *)&__E10);
      }
      puVar4 = &DAT_00948320;
      *(undefined4 **)param_1 = &DAT_00948320;
    }
    pgVar3 = this + 0x4f8;
    iVar2 = 8 - (int)pgVar3;
    do {
      gVar1 = *pgVar3;
      pgVar3[(int)puVar4 + iVar2] = gVar1;
      pgVar3 = pgVar3 + 1;
    } while (gVar1 != (gsDOMAIN_LIST_MUS)0x0);
    iVar2 = *(int *)(this + 0x4f4);
    if (iVar2 != 0) {
      puVar4[0x12] = *(undefined4 *)(iVar2 + 0x48);
      puVar4[0x13] = *(undefined4 *)(iVar2 + 0x4c);
      rendDRIVER::ConfigureTransp((rendDRIVER *)this,(camCAMERA *)param_1);
      return;
    }
    puVar4[0x12] = 0;
    puVar4[0x13] = 0;
    rendDRIVER::ConfigureTransp((rendDRIVER *)this,(camCAMERA *)param_1);
  }
  return;
}




/* from: gs:gs_sound.cpp
   addr: 004FFDD0 */

void __thiscall
gsDOMAIN_LIST_MUS::ProcessMP_WRITE_SYNC_DATA(gsDOMAIN_LIST_MUS *this,gsMSG_MP_SAVELOAD *param_1)

{
  int iVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined2 local_10;
  undefined4 local_e;
  undefined4 local_a;
  undefined4 local_6;
  
  local_e = 0xffffffff;
  local_a = 0xffffffff;
  local_6 = 0xffffffff;
  local_10 = 0;
  iVar1 = *(int *)param_1;
  if (*(int *)(gsSysMP + 0x28) == 1) {
    fioFILE::WriteChunk(*(fioFILE **)(param_1 + 4),0xf0,(fioCHUNK *)&local_10);
    fioFILE::Write(*(fioFILE **)(param_1 + 4),(char *)(iVar1 + 8));
    fioFILE::UpdateChunk(*(fioFILE **)(param_1 + 4),(fioCHUNK *)&local_10);
    fioFILE::WriteChunk(*(fioFILE **)(param_1 + 4),0xf1,(fioCHUNK *)&local_10);
    local_14 = *(undefined4 *)(iVar1 + 0x4c);
    local_18 = *(undefined4 *)(iVar1 + 0x48);
    (**(code **)(**(int **)(param_1 + 4) + 0x18))(&local_18,8,8);
    fioFILE::UpdateChunk(*(fioFILE **)(param_1 + 4),(fioCHUNK *)&stack0xffffffe4);
    fioFILE::WriteLastChunk(*(fioFILE **)(param_1 + 4));
    rendDRIVER::ConfigureTransp((rendDRIVER *)this,(camCAMERA *)param_1);
  }
  return;
}




/* from: gs:gs_sound.cpp
   addr: 004FFE90 */

void __thiscall
gsDOMAIN_LIST_MUS::ProcessMP_READ_SYNC_DATA(gsDOMAIN_LIST_MUS *this,gsMSG_MP_SAVELOAD *param_1)

{
  gsMSG_MP_SAVELOAD *pgVar1;
  gsMSG_MP_SAVELOAD *pgVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  short local_60;
  undefined2 uStack_5e;
  undefined2 uStack_5c;
  undefined4 local_5a;
  undefined4 local_56;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 local_48;
  undefined4 local_8;
  undefined4 local_4;
  
  pgVar1 = param_1;
  local_60 = 0;
  uStack_5e = 0xffff;
  uStack_5c = 0xffff;
  local_5a = 0xffffffff;
  local_56 = 0xffffffff;
  if (*(int *)(gsSysMP + 0x28) == 1) {
    pgVar2 = *(gsMSG_MP_SAVELOAD **)param_1;
    if (*(gsMSG_MP_SAVELOAD **)param_1 == (gsMSG_MP_SAVELOAD *)0x0) {
      if ((DAT_00948314 & 1) == 0) {
        DAT_00948314 = DAT_00948314 | 1;
        DAT_00948320._0_1_ = 0;
        DAT_00948320._1_1_ = 0x40;
        DAT_00948324 = 0xffffffff;
        DAT_00948320._2_2_ = 0x50;
        DAT_00948328 = 0;
        DAT_00948368 = 0;
        DAT_0094836c = 0;
        atexit((_func_4879 *)&__E10);
      }
      local_4c = 0xffffffff;
      local_50._2_2_ = 0x50;
      *(undefined4 **)param_1 = &DAT_00948320;
      local_50._0_1_ = 0;
      local_50._1_1_ = 0x40;
      local_48 = 0;
      local_8 = 0;
      local_4 = 0;
      param_1 = (gsMSG_MP_SAVELOAD *)&DAT_00948320;
      puVar4 = &local_50;
      puVar5 = &DAT_00948320;
      for (iVar3 = 0x14; pgVar2 = param_1, iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
    }
    param_1 = pgVar2;
    iVar3 = fioFILE::ReadChunk(*(fioFILE **)(pgVar1 + 4),(fioCHUNK *)&local_60);
    while ((iVar3 != 0 && (local_60 != 1))) {
      if (local_60 == 0xf0) {
        fioFILE::Read(*(fioFILE **)(pgVar1 + 4),(char *)(param_1 + 8),0x40);
      }
      else if (local_60 == 0xf1) {
        (**(code **)(**(int **)(pgVar1 + 4) + 0x14))(param_1 + 0x48,8,8);
      }
      iVar3 = fioFILE::ReadChunk(*(fioFILE **)(pgVar1 + 4),(fioCHUNK *)&local_60);
    }
    rendDRIVER::ConfigureTransp((rendDRIVER *)this,(camCAMERA *)pgVar1);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:gs_sound.cpp
   addr: 004FFFF0 */

sncCHANNEL_3D * __thiscall sncCHANNEL_3D::sncCHANNEL_3D(sncCHANNEL_3D *this)

{
  undefined4 uVar1;
  
  sncCHANNEL::sncCHANNEL((sncCHANNEL *)this);
  *(undefined4 *)(this + 0x74) = _m3dVZero;
  *(undefined4 *)(this + 0x78) = DAT_00963740;
  uVar1 = DAT_00963744;
  *(undefined4 *)(this + 0x80) = 0;
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 0x7c) = uVar1;
  return this;
}




/* from: gs:gs_sound.cpp
   addr: 00500030 */

gsDOMAIN * __thiscall gsDOMAIN_LIST_SND::MakeDomain(gsDOMAIN_LIST_SND *this)

{
  gsDOMAIN *this_00;
  
  this_00 = (gsDOMAIN *)operator_new(300);
  if (this_00 != (gsDOMAIN *)0x0) {
    gsDOMAIN::gsDOMAIN(this_00);
    *(undefined ***)this_00 = &gsDOMAIN_SND::_vftable__for__entIACTIVE_OBJ__;
    *(undefined ***)(this_00 + 0x94) = &gsDOMAIN_SND::_vftable__for__scnDOMAIN__;
    return this_00;
  }
  return (gsDOMAIN *)0x0;
}




/* from: gs:gs_sound.cpp
   addr: 00500070
   addr: 00500070
   addr: 00500070
   addr: 00500070
   addr: 00500070
   addr: 00500070
   addr: 00500070
   addr: 00500070
   addr: 00500070
   addr: 00500070
   addr: 00500070
   addr: 00500070
   addr: 00500070
   addr: 00500070
   addr: 00500070
   addr: 00500070
   addr: 00500070
   addr: 00500070 */

void * __thiscall wrDOMAIN_SECRET::_vector_deleting_destructor_(wrDOMAIN_SECRET *this,uint param_1)

{
  gsDOMAIN::~gsDOMAIN((gsDOMAIN *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: gs:gs_sound.cpp
   addr: 00500090 */

gsDOMAIN * __thiscall gsDOMAIN_LIST_MUS::MakeDomain(gsDOMAIN_LIST_MUS *this)

{
  gsDOMAIN *this_00;
  
  this_00 = (gsDOMAIN *)operator_new(0x16c);
  if (this_00 != (gsDOMAIN *)0x0) {
    gsDOMAIN::gsDOMAIN(this_00);
    this_00[300] = (gsDOMAIN)0x0;
    *(undefined ***)this_00 = &gsDOMAIN_MUS::_vftable__for__entIACTIVE_OBJ__;
    *(undefined ***)(this_00 + 0x94) = &gsDOMAIN_MUS::_vftable__for__scnDOMAIN__;
    return this_00;
  }
  return (gsDOMAIN *)0x0;
}

