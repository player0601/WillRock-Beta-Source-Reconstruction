
/* from: gs:gs_saveload.cpp
   addr: 0051A5D0 */

int __fastcall gslInit(void)

{
  DAT_009570c0 = (undefined4 *)operator_new(0x124);
  if (DAT_009570c0 == (undefined4 *)0x0) {
    DAT_009570c0 = (undefined4 *)0x0;
  }
  else {
    DAT_009570c0[1] = 0;
    DAT_009570c0[0x43] = 0;
    DAT_009570c0[0x44] = 0;
    DAT_009570c0[0x45] = 0;
    DAT_009570c0[0x46] = 0;
    DAT_009570c0[0x47] = 0;
    *(undefined1 *)(DAT_009570c0 + 2) = 0;
    DAT_009570c0[0x48] = 0;
    *DAT_009570c0 = &fioFILE_DISK::_vftable_;
  }
  DAT_009574c4 = (undefined4 *)operator_new(300);
  if (DAT_009574c4 != (undefined4 *)0x0) {
    DAT_009574c4[1] = 0;
    DAT_009574c4[0x43] = 0;
    DAT_009574c4[0x44] = 0;
    DAT_009574c4[0x45] = 0;
    DAT_009574c4[0x46] = 0;
    DAT_009574c4[0x47] = 0;
    *(undefined1 *)(DAT_009574c4 + 2) = 0;
    DAT_009574c4[0x48] = 0;
    DAT_009574c4[0x49] = 0;
    DAT_009574c4[0x4a] = 0;
    *DAT_009574c4 = &fioFILE_MEM::_vftable_;
    return 1;
  }
  DAT_009574c4 = (undefined4 *)0x0;
  return 1;
}




/* from: gs:gs_saveload.cpp
   addr: 0051A690 */

void __fastcall gslTerm(void)

{
  if (DAT_009570c0 != (undefined4 *)0x0) {
    (**(code **)*DAT_009570c0)(1);
  }
  DAT_009570c0 = (undefined4 *)0x0;
  if (DAT_009574c4 != (undefined4 *)0x0) {
    (**(code **)*DAT_009574c4)(1);
  }
  DAT_009574c4 = (undefined4 *)0x0;
  return;
}




/* from: gs:gs_saveload.cpp
   addr: 0051A6F0 */

int __fastcall gslGetHdrEx(char *param_1,gslHDR_EX *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 1;
  iVar1 = (**(code **)(*DAT_009570c0 + 4))(param_1,5);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = gslSL::ReadFileHeader(&gslSaveLoad);
  if (iVar1 != 0) {
    iVar1 = gslSL::ReadFileHeaderEx(&gslSaveLoad,param_2);
    if (iVar1 != 0) goto LAB_0051a72f;
  }
  iVar2 = 0;
LAB_0051a72f:
  (**(code **)(*DAT_009570c0 + 8))();
  return iVar2;
}




/* from: gs:gs_saveload.cpp
   addr: 0051A740 */

int __thiscall gslSL::Save(gslSL *this,char *param_1,gslHDR_EX *param_2)

{
  gslSL gVar1;
  int iVar2;
  gslSL *pgVar3;
  entIACTIVE_OBJ *peVar4;
  msgDATA *pmVar5;
  gslSL *pgVar6;
  gslHDR_EX *unaff_retaddr;
  undefined4 uStack_19c;
  char *pcStack_188;
  undefined4 uStack_184;
  gsMSG_MP_PTR local_174 [2];
  undefined2 local_172;
  undefined4 uStack_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined1 local_15c;
  undefined1 local_dc;
  undefined4 local_9c;
  animCREATE_DATA local_98 [152];
  
  uStack_184 = 0x51a753;
  gsMSG_MP_PTR::gsMSG_MP_PTR(local_174);
  local_16c = 0xffffffff;
  local_168 = 0xfffffffd;
  local_164 = 0;
  local_9c = 0xffffffff;
  uStack_184 = 0x51a77b;
  animCREATE_DATA::animCREATE_DATA(local_98);
  local_15c = 0;
  local_dc = 0;
  local_172 = 0x172;
  if (*(int *)(gsSysMP + 0x28) != 1) {
    return 0;
  }
  uStack_184 = 6;
  pcStack_188 = param_1;
  iVar2 = (**(code **)(**(int **)(this + 0x118) + 4))();
  if (iVar2 != 0) {
    *(undefined4 *)(this + 8) = 0x53534746;
    pgVar3 = (gslSL *)fnmGetNameExt((char *)&gsSceneFullName);
    pgVar6 = this + 0xc;
    do {
      gVar1 = *pgVar3;
      pgVar3 = pgVar3 + 1;
      *pgVar6 = gVar1;
      pgVar6 = pgVar6 + 1;
    } while (gVar1 != (gslSL)0x0);
    *(undefined4 *)(this + 0x110) = 0;
    *(undefined4 *)(this + 0x114) = 0;
    WriteFileHeader(this);
    WriteFileHeaderEx(this,unaff_retaddr);
    for (peVar4 = entFindNextIO((entIACTIVE_OBJ *)0x0); peVar4 != (entIACTIVE_OBJ *)0x0;
        peVar4 = entFindNextIO(peVar4)) {
      if ((*(int *)(peVar4 + 0x20) != 0x454e5424) || (((byte)peVar4[0xb4] & 1) == 0)) {
        uStack_19c = 0x51a83c;
        iVar2 = gsMP_SERVER::CreateSyncInfo(gsSysServer,peVar4,(gsMSG_MP_SYNC *)&stack0xfffffe84);
        if (iVar2 != 0) {
          uStack_19c = 0x51a84d;
          WriteMsgSync(this,peVar4,(gsMSG_MP_SYNC *)&stack0xfffffe84);
        }
      }
    }
    for (peVar4 = entFindNextIO((entIACTIVE_OBJ *)0x0); peVar4 != (entIACTIVE_OBJ *)0x0;
        peVar4 = entFindNextIO(peVar4)) {
      if ((*(int *)(peVar4 + 0x20) == 0x454e5424) && (((byte)peVar4[0xb4] & 1) != 0)) {
        uStack_19c = 0x51a886;
        iVar2 = gsMP_SERVER::CreateSyncInfo(gsSysServer,peVar4,(gsMSG_MP_SYNC *)&stack0xfffffe84);
        if (iVar2 != 0) {
          uStack_19c = 0x51a897;
          WriteMsgSync(this,peVar4,(gsMSG_MP_SYNC *)&stack0xfffffe84);
        }
      }
    }
    uStack_170 = 0xffffffff;
    uStack_19c = 0x51a8bd;
    WriteMsgSync(this,(entIACTIVE_OBJ *)0x0,(gsMSG_MP_SYNC *)&stack0xfffffe84);
    for (peVar4 = entFindNextIO((entIACTIVE_OBJ *)0x0); peVar4 != (entIACTIVE_OBJ *)0x0;
        peVar4 = entFindNextIO(peVar4)) {
      pmVar5 = gsMP_SERVER::CreateSyncUsrInfo(gsSysServer,peVar4);
      if (pmVar5 != (msgDATA *)0x0) {
        uStack_19c = 0x51a8e3;
        WriteMsgSyncUsr(this,peVar4,pmVar5);
      }
    }
    WriteTimeMsgQueue(this);
    fioFILE::WriteLastChunk(*(fioFILE **)(this + 0x118));
    iVar2 = (*(int **)(this + 0x118))[0x44];
    uStack_19c = 0x51a918;
    (**(code **)(**(int **)(this + 0x118) + 0xc))();
    pcStack_188 = *(char **)(this + 0x110);
    uStack_19c = 4;
    (**(code **)(**(int **)(this + 0x118) + 0x18))(&pcStack_188,4);
    (**(code **)(**(int **)(this + 0x118) + 0xc))(*(undefined4 *)(this + 4),1);
    uStack_19c = *(undefined4 *)(this + 0x114);
    (**(code **)(**(int **)(this + 0x118) + 0x18))(&uStack_19c,4,4);
    (**(code **)(**(int **)(this + 0x118) + 0xc))(iVar2,1);
    (**(code **)(**(int **)(this + 0x118) + 8))();
    gspPLAY_SYSTEM::NotifyEvent(gspSysPlay,3,(char *)&gsSceneFullName,-1);
    return 1;
  }
  return 0;
}




/* from: gs:gs_saveload.cpp
   addr: 0051A9B0 */

int __thiscall gslSL::Load(gslSL *this,char *param_1,gslHDR_EX *param_2)

{
  gslSL gVar1;
  int iVar2;
  gslSL *pgVar3;
  entIACTIVE_OBJ *peVar4;
  int iVar5;
  int unaff_ESI;
  gslHDR_EX *unaff_retaddr;
  undefined4 local_158;
  undefined1 local_154;
  undefined1 local_153;
  undefined2 local_152;
  undefined1 local_150;
  undefined1 local_4c;
  undefined4 uStack_14;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_154 = 0;
  local_153 = 0x40;
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  local_150 = 0;
  local_4c = 0;
  local_152 = 0x154;
  local_158 = 1;
  if (*(int *)(gsSysMP + 0x28) != 1) {
    return 0;
  }
  if ((gsAppState & 0x4000U) != 0) {
    gsMsgChangeMode(3);
    gsAppState = gsAppState & 0xffffbfff;
  }
  iVar2 = (**(code **)(**(int **)(this + 0x118) + 4))(param_1,5);
  if (iVar2 == 0) {
    return 0;
  }
  gsAppState = gsAppState | 0x20000;
  iVar2 = ReadFileHeader(this);
  if ((iVar2 != 0) && (iVar2 = ReadFileHeaderEx(this,unaff_retaddr), iVar2 != 0)) {
    msgSYSTEM::SendAll(&msgSystem,0x3ef,(void *)0x0,(msgADDR *)0x0);
    pgVar3 = this + 0xc;
    uStack_14 = 0;
    iVar2 = (int)&local_158 - (int)pgVar3;
    do {
      gVar1 = *pgVar3;
      pgVar3[iVar2] = gVar1;
      pgVar3 = pgVar3 + 1;
    } while (gVar1 != (gslSL)0x0);
    (**(code **)(*(int *)gsSysLevel + 0x1c))(&stack0xfffffea4);
    msgSYSTEM::SendAll(&msgSystem,0x3f1,(void *)0x0,(msgADDR *)0x0);
    for (peVar4 = entFindNextIO((entIACTIVE_OBJ *)0x0); peVar4 != (entIACTIVE_OBJ *)0x0;
        peVar4 = entFindNextIO(peVar4)) {
      if (*(int *)(peVar4 + 0x8c) != -1) {
        *(undefined4 *)(peVar4 + 0x8c) = 0xfffffffd;
      }
    }
    iVar2 = 0;
    if (0 < *(int *)(this + 0x110)) {
      do {
        iVar5 = ReadMsgSync(this);
        if (iVar5 == 0) goto LAB_0051ab5c;
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(this + 0x110));
    }
    iVar2 = 0;
    if (0 < *(int *)(this + 0x114)) {
      do {
        iVar5 = ReadMsgSyncUsr(this);
        if (iVar5 == 0) goto LAB_0051ab5c;
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(this + 0x114));
    }
    ReadTimeMsgQueue(this);
    iVar2 = fioFILE::ReadLastChunk(*(fioFILE **)(this + 0x118));
    if (iVar2 != 0) goto LAB_0051ab60;
  }
LAB_0051ab5c:
  unaff_ESI = 0;
LAB_0051ab60:
  (**(code **)(**(int **)(this + 0x118) + 8))();
  gsAppState = gsAppState & 0xfffdffff;
  return unaff_ESI;
}




/* from: gs:gs_saveload.cpp
   addr: 0051AB90 */

int __thiscall gslSL::WriteFileHeader(gslSL *this)

{
  undefined4 *puStack_34;
  undefined4 local_24;
  undefined2 local_20;
  undefined4 local_1e;
  undefined4 local_1a;
  undefined4 local_16;
  undefined2 local_10;
  undefined4 local_e;
  undefined4 local_a;
  undefined4 local_6;
  
  local_1e = 0xffffffff;
  local_1a = 0xffffffff;
  local_16 = 0xffffffff;
  local_e = 0xffffffff;
  local_a = 0xffffffff;
  local_6 = 0xffffffff;
  local_20 = 0;
  local_10 = 0;
  puStack_34 = (undefined4 *)0x51abd2;
  fioFILE::WriteChunk(*(fioFILE **)(this + 0x118),0xf1,(fioCHUNK *)&local_10);
  puStack_34 = (undefined4 *)0x51abe7;
  fioFILE::WriteChunk(*(fioFILE **)(this + 0x118),0xf2,(fioCHUNK *)&local_20);
  local_24 = *(undefined4 *)(this + 8);
  puStack_34 = &local_24;
  (**(code **)(**(int **)(this + 0x118) + 0x18))();
  fioFILE::UpdateChunk(*(fioFILE **)(this + 0x118),(fioCHUNK *)&stack0xffffffd4);
  fioFILE::WriteChunk(*(fioFILE **)(this + 0x118),0xf3,(fioCHUNK *)&stack0xffffffd4);
  fioFILE::Write(*(fioFILE **)(this + 0x118),(char *)(this + 0xc));
  fioFILE::UpdateChunk(*(fioFILE **)(this + 0x118),(fioCHUNK *)&stack0xffffffd4);
  fioFILE::WriteChunk(*(fioFILE **)(this + 0x118),0xf4,(fioCHUNK *)&stack0xffffffd4);
  *(int *)this = (*(int **)(this + 0x118))[0x44];
  (**(code **)(**(int **)(this + 0x118) + 0x18))();
  fioFILE::UpdateChunk(*(fioFILE **)(this + 0x118),(fioCHUNK *)&stack0xffffffc8);
  fioFILE::WriteChunk(*(fioFILE **)(this + 0x118),0xf5,(fioCHUNK *)&stack0xffffffc8);
  *(int *)(this + 4) = (*(int **)(this + 0x118))[0x44];
  (**(code **)(**(int **)(this + 0x118) + 0x18))(&stack0xffffffc4,4);
  fioFILE::UpdateChunk(*(fioFILE **)(this + 0x118),(fioCHUNK *)&stack0xffffffbc);
  fioFILE::UpdateChunk(*(fioFILE **)(this + 0x118),(fioCHUNK *)&puStack_34);
  fioFILE::WriteLastChunk(*(fioFILE **)(this + 0x118));
  return 1;
}




/* from: gs:gs_saveload.cpp
   addr: 0051AD10 */

int __thiscall gslSL::ReadFileHeader(gslSL *this)

{
  int iVar1;
  short sVar2;
  short asStack_1c [2];
  short local_10 [8];
  
  local_10[0] = 0;
  local_10[1] = -1;
  local_10[2] = -1;
  local_10[3] = -1;
  local_10[4] = -1;
  local_10[5] = -1;
  local_10[6] = -1;
  asStack_1c[0] = -0x52c7;
  asStack_1c[1] = 0x51;
  iVar1 = fioFILE::ReadChunk(*(fioFILE **)(this + 0x118),(fioCHUNK *)0x0);
  if (iVar1 != 0xf1) {
    asStack_1c[0] = -0x52b3;
    asStack_1c[1] = 0x51;
    fioFILE::RevertChunk(*(fioFILE **)(this + 0x118),(fioCHUNK *)0x0);
    return 0;
  }
  asStack_1c[0] = -0x52a2;
  asStack_1c[1] = 0x51;
  fioFILE::ReadChunk(*(fioFILE **)(this + 0x118),(fioCHUNK *)local_10);
  if (local_10[0] != 0xf2) {
    return 0;
  }
  asStack_1c[0] = 4;
  asStack_1c[1] = 0;
  (**(code **)(**(int **)(this + 0x118) + 0x14))();
  if (*(int *)(this + 8) != 0x53534746) {
    return 0;
  }
  fioFILE::ReadChunk(*(fioFILE **)(this + 0x118),(fioCHUNK *)asStack_1c);
  if (asStack_1c[0] != 0xf3) {
    return 0;
  }
  fioFILE::Read(*(fioFILE **)(this + 0x118),(char *)(this + 0xc),0x104);
  fioFILE::ReadChunk(*(fioFILE **)(this + 0x118),(fioCHUNK *)asStack_1c);
  if (asStack_1c[0] != 0xf4) {
    return 0;
  }
  sVar2 = 4;
  (**(code **)(**(int **)(this + 0x118) + 0x14))(this + 0x110);
  fioFILE::ReadChunk(*(fioFILE **)(this + 0x118),(fioCHUNK *)&stack0xffffffd8);
  if (sVar2 != 0xf5) {
    return 0;
  }
  (**(code **)(**(int **)(this + 0x118) + 0x14))(this + 0x114,4,4);
  iVar1 = fioFILE::ReadLastChunk(*(fioFILE **)(this + 0x118));
  return (uint)(iVar1 != 0);
}




/* from: gs:gs_saveload.cpp
   addr: 0051AE70 */

int __thiscall gslSL::WriteFileHeaderEx(gslSL *this,gslHDR_EX *param_1)

{
  gspEVENT *this_00;
  char *pcVar1;
  int iVar2;
  gslHDR_EX *pgStack_34;
  undefined2 local_20;
  undefined4 local_1e;
  undefined4 local_1a;
  undefined2 local_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 local_10;
  undefined4 local_e;
  undefined2 local_a;
  undefined2 uStack_8;
  undefined2 local_6;
  undefined2 uStack_4;
  
  local_20 = 0;
  local_1e = 0xffffffff;
  local_1a = 0xffffffff;
  local_16 = 0xffff;
  uStack_14 = 0xffff;
  local_10 = 0;
  local_e = 0xffffffff;
  local_a = 0xffff;
  uStack_8 = 0xffff;
  local_6 = 0xffff;
  uStack_4 = 0xffff;
  if (param_1 != (gslHDR_EX *)0x0) {
    pgStack_34 = (gslHDR_EX *)0x51aec1;
    fioFILE::WriteChunk(*(fioFILE **)(this + 0x118),0x10e,(fioCHUNK *)&local_10);
    if (*(int *)param_1 != 0) {
      pgStack_34 = (gslHDR_EX *)0x51aedb;
      fioFILE::WriteChunk(*(fioFILE **)(this + 0x118),0x10f,(fioCHUNK *)&local_20);
      pctWrite(*(fioFILE **)(this + 0x118),*(pctPICTURE **)param_1);
      fioFILE::UpdateChunk(*(fioFILE **)(this + 0x118),(fioCHUNK *)&local_20);
    }
    pgStack_34 = (gslHDR_EX *)0x51af0d;
    fioFILE::WriteChunk(*(fioFILE **)(this + 0x118),0x110,(fioCHUNK *)&local_20);
    pgStack_34 = param_1 + 8;
    (**(code **)(**(int **)(this + 0x118) + 0x18))();
    fioFILE::UpdateChunk(*(fioFILE **)(this + 0x118),(fioCHUNK *)&stack0xffffffd4);
    fioFILE::WriteChunk(*(fioFILE **)(this + 0x118),0x111,(fioCHUNK *)&stack0xffffffd4);
    uStack_8 = (undefined2)*(undefined4 *)(param_1 + 4);
    local_6 = (undefined2)((uint)*(undefined4 *)(param_1 + 4) >> 0x10);
    (**(code **)(**(int **)(this + 0x118) + 0x18))();
    fioFILE::UpdateChunk(*(fioFILE **)(this + 0x118),(fioCHUNK *)&stack0xffffffc8);
    fioFILE::WriteChunk(*(fioFILE **)(this + 0x118),0x112,(fioCHUNK *)&stack0xffffffc8);
    uStack_14 = (undefined2)*(undefined4 *)(gspSysPlay + 0x28);
    uStack_12 = (undefined2)((uint)*(undefined4 *)(gspSysPlay + 0x28) >> 0x10);
    (**(code **)(**(int **)(this + 0x118) + 0x18))(&uStack_14,4);
    fioFILE::UpdateChunk(*(fioFILE **)(this + 0x118),(fioCHUNK *)&stack0xffffffbc);
    iVar2 = 0;
    if (0 < *(int *)(gspSysPlay + 0x28)) {
      do {
        this_00 = gspPLAY_SYSTEM::GetEvent(gspSysPlay,iVar2);
        if (this_00 != (gspEVENT *)0x0) {
          fioFILE::WriteChunk(*(fioFILE **)(this + 0x118),0x113,(fioCHUNK *)&stack0xffffffbc);
          pcVar1 = gspEVENT::GetString(this_00);
          fioFILE::Write(*(fioFILE **)(this + 0x118),pcVar1);
          fioFILE::UpdateChunk(*(fioFILE **)(this + 0x118),(fioCHUNK *)&stack0xffffffbc);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(gspSysPlay + 0x28));
    }
    fioFILE::WriteLastChunk(*(fioFILE **)(this + 0x118));
    fioFILE::UpdateChunk(*(fioFILE **)(this + 0x118),(fioCHUNK *)&pgStack_34);
  }
  return 1;
}




/* from: gs:gs_saveload.cpp
   addr: 0051B050 */

int __thiscall gslSL::ReadFileHeaderEx(gslSL *this,gslHDR_EX *param_1)

{
  int iVar1;
  pctPICTURE *ppVar2;
  short local_214;
  undefined2 uStack_212;
  undefined2 uStack_210;
  undefined4 local_20e;
  undefined4 local_20a;
  undefined1 local_204 [4];
  char local_200 [512];
  
  uStack_212 = 0xffff;
  uStack_210 = 0xffff;
  local_20e = 0xffffffff;
  local_20a = 0xffffffff;
  local_214 = 0;
  iVar1 = fioFILE::ReadChunk(*(fioFILE **)(this + 0x118),(fioCHUNK *)&local_214);
  if (iVar1 != 0x10e) {
    fioFILE::RevertChunk(*(fioFILE **)(this + 0x118),(fioCHUNK *)&local_214);
    return 1;
  }
  if (param_1 == (gslHDR_EX *)0x0) {
    fioFILE::SkipChunk(*(fioFILE **)(this + 0x118),(fioCHUNK *)&local_214);
    return 1;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  iVar1 = fioFILE::ReadChunk(*(fioFILE **)(this + 0x118),(fioCHUNK *)&local_214);
  while ((iVar1 != 0 && (local_214 != 1))) {
    switch(local_214) {
    case 0x10f:
      ppVar2 = pctRead(*(fioFILE **)(this + 0x118));
      *(pctPICTURE **)param_1 = ppVar2;
      break;
    case 0x110:
      (**(code **)(**(int **)(this + 0x118) + 0x14))(param_1 + 8,0x100,2);
      break;
    case 0x111:
      (**(code **)(**(int **)(this + 0x118) + 0x14))(param_1 + 4,4,4);
      break;
    case 0x112:
      (**(code **)(**(int **)(this + 0x118) + 0x14))(local_204,4,4);
      break;
    case 0x113:
      fioFILE::Read(*(fioFILE **)(this + 0x118),local_200,0x200);
    }
    iVar1 = fioFILE::ReadChunk(*(fioFILE **)(this + 0x118),(fioCHUNK *)&local_214);
  }
  return 1;
}




/* from: gs:gs_saveload.cpp
   addr: 0051B1C0 */

int __thiscall gslSL::WriteMsgSync(gslSL *this,entIACTIVE_OBJ *param_1,gsMSG_MP_SYNC *param_2)

{
  float extraout_ECX;
  float fVar1;
  float extraout_ECX_00;
  int iVar2;
  int iVar3;
  undefined2 local_20;
  undefined4 local_1e;
  undefined4 local_1a;
  undefined4 local_16;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 uStack_c;
  undefined4 local_a;
  undefined2 local_6;
  undefined2 uStack_4;
  undefined2 uStack_2;
  
  local_1e = 0xffffffff;
  local_1a = 0xffffffff;
  local_16 = 0xffffffff;
  local_e = 0xffff;
  uStack_c = 0xffff;
  local_a = 0xffffffff;
  local_6 = 0xffff;
  uStack_4 = 0xffff;
  local_20 = 0;
  local_10 = 0;
  fioFILE::WriteChunk(*(fioFILE **)(this + 0x118),300,(fioCHUNK *)&local_10);
  fioFILE::WriteChunk(*(fioFILE **)(this + 0x118),0x12d,(fioCHUNK *)&local_20);
  (**(code **)(**(int **)(this + 0x118) + 0x18))();
  fioFILE::UpdateChunk(*(fioFILE **)(this + 0x118),(fioCHUNK *)&stack0xffffffd4);
  fioFILE::WriteChunk(*(fioFILE **)(this + 0x118),0x12e,(fioCHUNK *)&stack0xffffffd4);
  uStack_4 = (undefined2)*(undefined4 *)(param_2 + 8);
  uStack_2 = (undefined2)((uint)*(undefined4 *)(param_2 + 8) >> 0x10);
  (**(code **)(**(int **)(this + 0x118) + 0x18))();
  fioFILE::UpdateChunk(*(fioFILE **)(this + 0x118),(fioCHUNK *)&stack0xffffffc8);
  fioFILE::WriteChunk(*(fioFILE **)(this + 0x118),0x12f,(fioCHUNK *)&stack0xffffffc8);
  local_10 = (undefined2)*(undefined4 *)(param_2 + 0x10);
  local_e = (undefined2)((uint)*(undefined4 *)(param_2 + 0x10) >> 0x10);
  (**(code **)(**(int **)(this + 0x118) + 0x18))();
  fioFILE::UpdateChunk(*(fioFILE **)(this + 0x118),(fioCHUNK *)&stack0xffffffbc);
  fioFILE::WriteChunk(*(fioFILE **)(this + 0x118),0x130,(fioCHUNK *)&stack0xffffffbc);
  fioFILE::Write(*(fioFILE **)(this + 0x118),(char *)(param_2 + 0x18));
  fioFILE::UpdateChunk(*(fioFILE **)(this + 0x118),(fioCHUNK *)&stack0xffffffbc);
  fioFILE::WriteChunk(*(fioFILE **)(this + 0x118),0x131,(fioCHUNK *)&stack0xffffffbc);
  fioFILE::Write(*(fioFILE **)(this + 0x118),(char *)(param_2 + 0x58));
  fioFILE::UpdateChunk(*(fioFILE **)(this + 0x118),(fioCHUNK *)&stack0xffffffbc);
  fioFILE::WriteChunk(*(fioFILE **)(this + 0x118),0x132,(fioCHUNK *)&stack0xffffffbc);
  fioFILE::Write(*(fioFILE **)(this + 0x118),(char *)(param_2 + 0x98));
  fioFILE::UpdateChunk(*(fioFILE **)(this + 0x118),(fioCHUNK *)&stack0xffffffbc);
  fioFILE::WriteChunk(*(fioFILE **)(this + 0x118),0x13d,(fioCHUNK *)&stack0xffffffbc);
  (**(code **)(**(int **)(this + 0x118) + 0x18))();
  fioFILE::UpdateChunk(*(fioFILE **)(this + 0x118),(fioCHUNK *)&stack0xffffffb0);
  fioFILE::WriteChunk(*(fioFILE **)(this + 0x118),0x13a,(fioCHUNK *)&stack0xffffffb0);
  (**(code **)(**(int **)(this + 0x118) + 0x18))();
  fioFILE::UpdateChunk(*(fioFILE **)(this + 0x118),(fioCHUNK *)&stack0xffffffa4);
  fioFILE::WriteChunk(*(fioFILE **)(this + 0x118),0x13b,(fioCHUNK *)&stack0xffffffa4);
  (**(code **)(**(int **)(this + 0x118) + 0x18))();
  fioFILE::UpdateChunk(*(fioFILE **)(this + 0x118),(fioCHUNK *)&stack0xffffff98);
  fioFILE::WriteChunk(*(fioFILE **)(this + 0x118),0x13c,(fioCHUNK *)&stack0xffffff98);
  iVar2 = 4;
  (**(code **)(**(int **)(this + 0x118) + 0x18))();
  fioFILE::UpdateChunk(*(fioFILE **)(this + 0x118),(fioCHUNK *)&stack0xffffff8c);
  fioFILE::WriteChunk(*(fioFILE **)(this + 0x118),0x134,(fioCHUNK *)&stack0xffffff8c);
  m3dTerm2DMatr();
  iVar3 = 0x10;
  fVar1 = extraout_ECX;
  do {
    _m3dCheckValid(fVar1);
    iVar3 = iVar3 + -1;
    fVar1 = extraout_ECX_00;
  } while (iVar3 != 0);
  (**(code **)(**(int **)(this + 0x118) + 0x18))();
  fioFILE::UpdateChunk(*(fioFILE **)(this + 0x118),(fioCHUNK *)&stack0xffffff80);
  fioFILE::WriteChunk(*(fioFILE **)(this + 0x118),0x135,(fioCHUNK *)&stack0xffffff80);
  (**(code **)(**(int **)(this + 0x118) + 0x18))();
  fioFILE::UpdateChunk(*(fioFILE **)(this + 0x118),(fioCHUNK *)&stack0xffffff74);
  fioFILE::WriteChunk(*(fioFILE **)(this + 0x118),0x136,(fioCHUNK *)&stack0xffffff74);
  (**(code **)(**(int **)(this + 0x118) + 0x18))(param_2 + 0xea);
  fioFILE::UpdateChunk(*(fioFILE **)(this + 0x118),(fioCHUNK *)&stack0xffffff68);
  fioFILE::WriteChunk(*(fioFILE **)(this + 0x118),0x139,(fioCHUNK *)&stack0xffffff68);
  (**(code **)(**(int **)(this + 0x118) + 0x18))(&stack0xffffff90,4,4);
  fioFILE::UpdateChunk(*(fioFILE **)(this + 0x118),(fioCHUNK *)&stack0xffffff5c);
  if (((iVar2 != 0) && (*(int *)(iVar2 + 0x20) == 0x454e5424)) && (*(int *)(iVar2 + 0x145) != 0)) {
    fioFILE::WriteChunk(*(fioFILE **)(this + 0x118),0x137,(fioCHUNK *)&stack0xffffff5c);
    (**(code **)(**(int **)(this + 0x118) + 0x18))(&stack0xffffff84,2,2);
    (**(code **)(**(int **)(this + 0x118) + 0x18))
              (*(undefined4 *)(iVar2 + 0x145),(int)*(short *)(iVar2 + 0x149),1);
    fioFILE::UpdateChunk(*(fioFILE **)(this + 0x118),(fioCHUNK *)&stack0xffffff5c);
  }
  fioFILE::UpdateChunk(*(fioFILE **)(this + 0x118),(fioCHUNK *)&stack0xffffff6c);
  fioFILE::WriteLastChunk(*(fioFILE **)(this + 0x118));
  *(int *)(this + 0x110) = *(int *)(this + 0x110) + 1;
  return 1;
}




/* from: gs:gs_saveload.cpp
   addr: 0051B640 */

int __thiscall gslSL::WriteMsgSyncUsr(gslSL *this,entIACTIVE_OBJ *param_1,msgDATA *param_2)

{
  short sVar1;
  msgADDR *pmVar2;
  undefined4 uVar3;
  undefined4 unaff_EDI;
  short local_10;
  undefined2 local_e;
  undefined2 uStack_c;
  undefined2 local_a;
  undefined2 uStack_8;
  undefined2 local_6;
  undefined2 uStack_4;
  undefined2 uStack_2;
  
  local_e = 0xffff;
  uStack_c = 0xffff;
  local_a = 0xffff;
  uStack_8 = 0xffff;
  local_6 = 0xffff;
  uStack_4 = 0xffff;
  local_10 = 0;
  fioFILE::WriteChunk(*(fioFILE **)(this + 0x118),0x138,(fioCHUNK *)&local_10);
  (**(code **)(**(int **)(this + 0x51c) + 0x1c))();
  pmVar2 = (msgADDR *)CONCAT22(local_6,uStack_8);
  msgSYSTEM::SendMsg(&msgSystem,pmVar2,0x40d,&stack0xffffffdc,(msgADDR *)0x0);
  uVar3 = *(undefined4 *)(pmVar2 + 0x8c);
  uStack_4 = (undefined2)uVar3;
  uStack_2 = (undefined2)((uint)uVar3 >> 0x10);
  sVar1 = *(short *)(*(int *)(this + 0x51c) + 0x110);
  (**(code **)(**(int **)(this + 0x118) + 0x18))();
  local_10 = sVar1;
  local_e = (short)((uint)unaff_EDI >> 0x10);
  (**(code **)(**(int **)(this + 0x118) + 0x18))(&local_10,2);
  uVar3 = (**(code **)(**(int **)(this + 0x51c) + 0x20))();
  (**(code **)(**(int **)(this + 0x118) + 0x18))(uVar3,(int)sVar1,1);
  (**(code **)(**(int **)(this + 0x51c) + 8))();
  fioFILE::UpdateChunk(*(fioFILE **)(this + 0x118),(fioCHUNK *)&stack0xffffffc0);
  *(int *)(this + 0x114) = *(int *)(this + 0x114) + 1;
  return 1;
}




/* from: gs:gs_saveload.cpp
   addr: 0051B750 */

int __thiscall gslSL::ReadMsgSync(gslSL *this)

{
  int iVar1;
  int iVar2;
  entIACTIVE_OBJ *peVar3;
  short unaff_SI;
  undefined4 uStack_58c;
  undefined4 local_588;
  short local_584;
  undefined2 uStack_582;
  undefined2 uStack_580;
  undefined4 local_57e;
  undefined4 local_57a;
  gsMSG_MP_PTR local_574 [2];
  undefined2 local_572;
  msgDATA *pmStack_570;
  ulong local_56c;
  undefined4 local_568;
  undefined4 local_564;
  undefined1 auStack_560 [4];
  char local_55c [64];
  char acStack_51c [64];
  char local_4dc [64];
  undefined4 local_49c;
  undefined4 local_498;
  undefined4 uStack_494;
  undefined4 uStack_490;
  undefined1 auStack_48c [2];
  undefined1 auStack_48a [4];
  m3dMATR amStack_486 [122];
  undefined1 auStack_40c [12];
  undefined1 auStack_400 [1024];
  
  local_584 = 0;
  uStack_582 = 0xffff;
  uStack_580 = 0xffff;
  local_57e = 0xffffffff;
  local_57a = 0xffffffff;
  gsMSG_MP_PTR::gsMSG_MP_PTR(local_574);
  local_56c = 0xffffffff;
  local_568 = 0xfffffffd;
  local_564 = 0;
  local_49c = 0xffffffff;
  animCREATE_DATA::animCREATE_DATA((animCREATE_DATA *)&local_498);
  local_55c[0] = '\0';
  local_4dc[0] = '\0';
  local_572 = 0x172;
  local_588 = 0;
  fioFILE::ReadChunk(*(fioFILE **)(this + 0x118),(fioCHUNK *)&local_584);
  if (local_584 != 300) {
    return 0;
  }
  iVar1 = fioFILE::ReadChunk(*(fioFILE **)(this + 0x118),(fioCHUNK *)&local_584);
  do {
    if ((iVar1 == 0) || (local_584 == 1)) {
      peVar3 = gsMP_CLIENT::Synchronize(gsSysClient,(gsMSG_MP_SYNC *)local_574);
      gsMP_SERVER::NotifyNewMPID(gsSysServer,local_56c);
      if (peVar3 != (entIACTIVE_OBJ *)0x0) {
        *(undefined4 *)(peVar3 + 0x88) = 6;
      }
      return 1;
    }
    switch(local_584) {
    case 0x12d:
      (**(code **)(**(int **)(this + 0x118) + 0x14))(&local_568,4,4);
      break;
    case 0x12e:
      (**(code **)(**(int **)(this + 0x118) + 0x14))(&local_56c,4,4);
      break;
    case 0x12f:
      (**(code **)(**(int **)(this + 0x118) + 0x14))(&local_564,4,4);
      break;
    case 0x130:
      fioFILE::Read(*(fioFILE **)(this + 0x118),local_55c,0x40);
      break;
    case 0x131:
      fioFILE::Read(*(fioFILE **)(this + 0x118),acStack_51c,0x40);
      break;
    case 0x132:
      fioFILE::Read(*(fioFILE **)(this + 0x118),local_4dc,0x40);
      break;
    case 0x133:
      (**(code **)(**(int **)(this + 0x118) + 0x14))(&uStack_58c,4,4);
      local_498 = uStack_58c;
      uStack_494 = uStack_58c;
      uStack_490 = uStack_58c;
      break;
    case 0x134:
      (**(code **)(**(int **)(this + 0x118) + 0x14))(amStack_486,0x40,4);
      m3dTerm2DMatr();
      iVar1 = 0;
      do {
        iVar2 = _m3dCheckValid(*(float *)(amStack_486 + iVar1 * 4));
        if (iVar2 == 0) {
          if (iVar1 < 0x10) {
            m3dMATR::MakeLCS2WCS_VZ(amStack_486,&m3dVZero,&m3dVUnitZ);
          }
          break;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < 0x10);
      break;
    case 0x135:
      (**(code **)(**(int **)(this + 0x118) + 0x14))(auStack_48c,2,2);
      break;
    case 0x136:
      (**(code **)(**(int **)(this + 0x118) + 0x14))(auStack_48a,4,4);
      break;
    case 0x137:
      (**(code **)(**(int **)(this + 0x118) + 0x14))(&local_588,2,2);
      (**(code **)(**(int **)(this + 0x118) + 0x14))(auStack_40c,(int)unaff_SI,1);
      pmStack_570 = entUnpackInitDataPacked(auStack_400);
      break;
    case 0x139:
      (**(code **)(**(int **)(this + 0x118) + 0x14))(auStack_560,4,4);
      break;
    case 0x13a:
      (**(code **)(**(int **)(this + 0x118) + 0x14))(&uStack_58c,4,4);
      local_498 = uStack_58c;
      break;
    case 0x13b:
      (**(code **)(**(int **)(this + 0x118) + 0x14))(&uStack_58c,4,4);
      uStack_494 = uStack_58c;
      break;
    case 0x13c:
      (**(code **)(**(int **)(this + 0x118) + 0x14))(&uStack_58c,4,4);
      uStack_490 = uStack_58c;
      break;
    case 0x13d:
      (**(code **)(**(int **)(this + 0x118) + 0x14))(&local_49c,4,4);
    }
    iVar1 = fioFILE::ReadChunk(*(fioFILE **)(this + 0x118),(fioCHUNK *)&local_584);
  } while( true );
}




/* from: gs:gs_saveload.cpp
   addr: 0051BB00 */

int __thiscall gslSL::ReadMsgSyncUsr(gslSL *this)

{
  gslSL *pgVar1;
  entIACTIVE_OBJ *peVar2;
  int unaff_ESI;
  gslSL *pgStack_68;
  int iStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  gslSL *pgStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  gsEV_SYNC local_1c [12];
  short local_10 [8];
  
  gsEV_SYNC::gsEV_SYNC(local_1c);
  local_10[1] = -1;
  local_10[2] = -1;
  local_10[3] = -1;
  local_10[4] = -1;
  local_10[5] = -1;
  local_10[6] = -1;
  local_10[0] = 0;
  fioFILE::ReadChunk(*(fioFILE **)(this + 0x118),(fioCHUNK *)local_10);
  if (local_10[0] != 0x138) {
    return 0;
  }
  (**(code **)(**(int **)(this + 0x118) + 0x14))();
  uStack_4c = 0x51bb6d;
  peVar2 = gsMP_SYSTEM::FindEnt(gsSysMP,unaff_ESI,0);
  if (peVar2 == (entIACTIVE_OBJ *)0x0) {
    fioFILE::SkipChunk(*(fioFILE **)(this + 0x118),(fioCHUNK *)local_1c);
    return 1;
  }
  uStack_50 = &stack0xffffffca;
  uStack_4c = 2;
  uStack_54 = 0x51bb9d;
  (**(code **)(*(int *)*(fioFILE **)(this + 0x118) + 0x14))();
  pgVar1 = this + 0x11c;
  uStack_54 = 0x17;
  pgStack_58 = (gslSL *)0x400;
  uStack_60 = 0x51bbb6;
  uStack_5c = pgVar1;
  (**(code **)(**(int **)(this + 0x51c) + 0x1c))();
  iStack_64 = (int)uStack_50._2_2_;
  uStack_60 = 1;
  pgStack_68 = pgVar1;
  (**(code **)(**(int **)(this + 0x118) + 0x14))();
  (**(code **)(**(int **)(this + 0x51c) + 0x18))(pgVar1,(int)uStack_5c._2_2_,1);
  (**(code **)(**(int **)(this + 0x51c) + 0xc))(0,1);
  iStack_64 = *(int *)(this + 0x51c);
  pgStack_68 = (gslSL *)0x0;
  msgSYSTEM::SendMsg(&msgSystem,(msgADDR *)peVar2,0x40e,&pgStack_68,(msgADDR *)0x0);
  pgStack_58 = pgStack_68;
  msgSYSTEM::SendMsg(&msgSystem,(msgADDR *)peVar2,0x40c,&uStack_60,(msgADDR *)0x0);
  return 1;
}




/* from: gs:gs_saveload.cpp
   addr: 0051BC50 */

int __thiscall gslSL::WriteTimeMsgQueue(gslSL *this)

{
  msgMSG_TIME *pmVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 local_28 [2];
  undefined2 local_20;
  undefined4 local_1e;
  undefined4 local_1a;
  undefined4 local_16;
  undefined2 local_10;
  undefined4 local_e;
  undefined4 local_a;
  undefined4 local_6;
  
  local_20 = 0;
  local_1e = 0xffffffff;
  local_1a = 0xffffffff;
  local_16 = 0xffffffff;
  local_10 = 0;
  local_e = 0xffffffff;
  local_a = 0xffffffff;
  local_6 = 0xffffffff;
  fioFILE::WriteChunk(*(fioFILE **)(this + 0x118),0x186,(fioCHUNK *)&local_10);
  pmVar1 = msgSYSTEM::GetNextTimeMsg(&msgSystem,(msgMSG_TIME *)0x0);
  do {
    if (pmVar1 == (msgMSG_TIME *)0x0) {
      fioFILE::UpdateChunk(*(fioFILE **)(this + 0x118),(fioCHUNK *)&local_10);
      fioFILE::WriteLastChunk(*(fioFILE **)(this + 0x118));
      return 1;
    }
    iVar2 = *(int *)pmVar1;
    if (((*(byte *)(iVar2 + 0xc) & 0xc) == 0) &&
       ((*(int *)(iVar2 + 0x20) == 0x454e5424 || (*(int *)(iVar2 + 0x20) == 0x454e5449)))) {
      if ((*(int *)(iVar2 + 0x8c) == -1) || (*(int *)(iVar2 + 0x8c) == -3)) {
        iVar2 = iVar2 + 0x44;
        pcVar4 = s_Warning__Cannot_save_PostTimeMsg;
      }
      else {
        iVar2 = *(int *)(pmVar1 + 4);
        if (iVar2 != 0) {
          if ((*(int *)(iVar2 + 0x20) != 0x454e5424) && (*(int *)(iVar2 + 0x20) != 0x454e5449))
          goto LAB_0051bf3c;
          if ((*(int *)(iVar2 + 0x8c) == -1) || (*(int *)(iVar2 + 0x8c) == -3)) {
            iVar2 = iVar2 + 0x44;
            pcVar4 = s_Warning__Cannot_save_PostTimeMsg;
            goto LAB_0051bf34;
          }
        }
        if ((*(void **)(pmVar1 + 0xc) == (void *)0x0) ||
           (iVar2 = msgSYSTEM::IsValidMsgData(&msgSystem,*(void **)(pmVar1 + 0xc)), iVar2 != 0)) {
          fioFILE::WriteChunk(*(fioFILE **)(this + 0x118),0x187,(fioCHUNK *)&local_20);
          fioFILE::UpdateChunk(*(fioFILE **)(this + 0x118),(fioCHUNK *)&local_20);
          if (*(int *)(pmVar1 + 4) != 0) {
            fioFILE::WriteChunk(*(fioFILE **)(this + 0x118),0x188,(fioCHUNK *)&local_20);
            gsMP_SYSTEM::WriteEIO
                      (gsSysMP,*(fioFILE **)(this + 0x118),*(entIACTIVE_OBJ **)(pmVar1 + 4));
            fioFILE::UpdateChunk(*(fioFILE **)(this + 0x118),(fioCHUNK *)&local_20);
          }
          if (*(int *)pmVar1 != 0) {
            fioFILE::WriteChunk(*(fioFILE **)(this + 0x118),0x189,(fioCHUNK *)&local_20);
            gsMP_SYSTEM::WriteEIO(gsSysMP,*(fioFILE **)(this + 0x118),*(entIACTIVE_OBJ **)pmVar1);
            fioFILE::UpdateChunk(*(fioFILE **)(this + 0x118),(fioCHUNK *)&local_20);
          }
          fioFILE::WriteChunk(*(fioFILE **)(this + 0x118),0x18a,(fioCHUNK *)&local_20);
          local_28[0] = *(undefined4 *)(pmVar1 + 8);
          (**(code **)(**(int **)(this + 0x118) + 0x18))(local_28,4,4);
          fioFILE::UpdateChunk(*(fioFILE **)(this + 0x118),(fioCHUNK *)&stack0xffffffd4);
          fioFILE::WriteChunk(*(fioFILE **)(this + 0x118),0x18b,(fioCHUNK *)&stack0xffffffd4);
          (**(code **)(**(int **)(this + 0x118) + 0x18))(&stack0xffffffd0,4,4);
          fioFILE::UpdateChunk(*(fioFILE **)(this + 0x118),(fioCHUNK *)&local_20);
          if (*(int *)(pmVar1 + 0xc) != 0) {
            fioFILE::WriteChunk(*(fioFILE **)(this + 0x118),0x18c,(fioCHUNK *)&local_20);
            (**(code **)(**(int **)(this + 0x51c) + 0x1c))(this + 0x11c,0x400,0x16);
            msgSYSTEM::Pack(&msgSystem,*(fioFILE_MEM **)(this + 0x51c),*(msgDATA **)(pmVar1 + 0xc));
            (**(code **)(**(int **)(this + 0x118) + 0x18))(&stack0xffffffcc,2,2);
            iVar2 = (*(int **)(this + 0x51c))[0x44];
            uVar3 = (**(code **)(**(int **)(this + 0x51c) + 0x20))();
            (**(code **)(**(int **)(this + 0x118) + 0x18))(uVar3,iVar2,1);
            (**(code **)(**(int **)(this + 0x51c) + 8))();
            fioFILE::UpdateChunk(*(fioFILE **)(this + 0x118),(fioCHUNK *)&local_20);
          }
          fioFILE::WriteLastChunk(*(fioFILE **)(this + 0x118));
          goto LAB_0051bf3c;
        }
        iVar2 = *(int *)pmVar1 + 0x44;
        pcVar4 = s_Error__Cannot_save_PostTimeMsg_w;
      }
LAB_0051bf34:
      apLogErr(pcVar4,iVar2);
    }
LAB_0051bf3c:
    pmVar1 = msgSYSTEM::GetNextTimeMsg(&msgSystem,pmVar1);
  } while( true );
}




/* from: gs:gs_saveload.cpp
   addr: 0051BF80 */

int __thiscall gslSL::ReadTimeMsgQueue(gslSL *this)

{
  gslSL *pgVar1;
  int iVar2;
  msgADDR **ppmVar3;
  uint uVar4;
  uint uVar5;
  undefined1 local_30 [4];
  short local_2c;
  undefined2 uStack_2a;
  undefined2 uStack_28;
  undefined4 local_26;
  undefined4 local_22;
  msgADDR *local_1c [2];
  int local_14;
  msgDATA *local_10;
  float local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_14 = -1;
  uStack_2a = 0xffff;
  uStack_28 = 0xffff;
  local_26 = 0xffffffff;
  local_22 = 0xffffffff;
  local_1c[0] = (msgADDR *)0x0;
  local_1c[1] = (msgADDR *)0x0;
  local_10 = (msgDATA *)0x0;
  local_c = 0.0;
  local_8 = 0;
  local_4 = 0;
  local_2c = 0;
  fioFILE::ReadChunk(*(fioFILE **)(this + 0x118),(fioCHUNK *)&local_2c);
  if (local_2c != 0x186) {
    fioFILE::RevertChunk(*(fioFILE **)(this + 0x118),(fioCHUNK *)&local_2c);
    return 0;
  }
  iVar2 = fioFILE::ReadChunk(*(fioFILE **)(this + 0x118),(fioCHUNK *)&local_2c);
  while ((iVar2 != 0 && (local_2c == 0x187))) {
    ppmVar3 = local_1c;
    for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
      *ppmVar3 = (msgADDR *)0x0;
      ppmVar3 = ppmVar3 + 1;
    }
    iVar2 = fioFILE::ReadChunk(*(fioFILE **)(this + 0x118),(fioCHUNK *)&local_2c);
    while ((iVar2 != 0 && (local_2c != 1))) {
      switch(local_2c) {
      case 0x188:
        local_1c[1] = (msgADDR *)gsMP_SYSTEM::ReadEIO(gsSysMP,*(fioFILE **)(this + 0x118));
        break;
      case 0x189:
        local_1c[0] = (msgADDR *)gsMP_SYSTEM::ReadEIO(gsSysMP,*(fioFILE **)(this + 0x118));
        break;
      case 0x18a:
        (**(code **)(**(int **)(this + 0x118) + 0x14))(&local_14,4,4);
        break;
      case 0x18b:
        (**(code **)(**(int **)(this + 0x118) + 0x14))(&local_c,4,4);
        break;
      case 0x18c:
        uVar5 = 2;
        (**(code **)(**(int **)(this + 0x118) + 0x14))(local_30,2,2);
        pgVar1 = this + 0x11c;
        uVar4 = 0x400;
        (**(code **)(**(int **)(this + 0x51c) + 0x1c))(pgVar1,0x400,0x17);
        (**(code **)(**(int **)(this + 0x118) + 0x14))(pgVar1,uVar5 & 0xffff,1);
        (**(code **)(**(int **)(this + 0x51c) + 0x18))(pgVar1,uVar4 & 0xffff,1);
        (**(code **)(**(int **)(this + 0x51c) + 0xc))(0,1);
        local_10 = msgSYSTEM::UnPack(&msgSystem,*(fioFILE_MEM **)(this + 0x51c));
      }
      iVar2 = fioFILE::ReadChunk(*(fioFILE **)(this + 0x118),(fioCHUNK *)&local_2c);
    }
    if (local_1c[0] != (msgADDR *)0x0) {
      if (local_10 == (msgDATA *)0x0) {
        msgSYSTEM::PostTimeMsg(&msgSystem,local_1c[0],local_14,local_1c[1],local_c);
      }
      else {
        msgSYSTEM::PostTimeMsgData(&msgSystem,local_1c[0],local_14,local_10,local_1c[1],local_c);
      }
    }
    iVar2 = fioFILE::ReadChunk(*(fioFILE **)(this + 0x118),(fioCHUNK *)&local_2c);
  }
  return 1;
}

