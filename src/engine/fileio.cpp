
/* from: engine:fileio.cpp
   addr: 004D7A00 */

int __fastcall fioIsExist(char *param_1)

{
  int iVar1;
  
  iVar1 = access(param_1,0);
  return (uint)(iVar1 == 0);
}




/* from: engine:fileio.cpp
   addr: 004D7A20 */

int __fastcall fioIsReadOnly(char *param_1)

{
  int iVar1;
  
  iVar1 = access(param_1,2);
  return (uint)(iVar1 != 0);
}




/* from: engine:fileio.cpp
   addr: 004D7A40 */

int __thiscall fioFILE::Init(fioFILE *this,char *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined1 local_24 [20];
  undefined4 local_10;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2[(int)(this + (8 - (int)param_1))] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  *(undefined4 *)(this + 0x10c) = 0;
  *(int *)(this + 4) = param_2;
  *(undefined4 *)(this + 0x114) = 0;
  *(undefined4 *)(this + 0x118) = 0;
  *(undefined4 *)(this + 0x11c) = 0;
  if ((param_2 & 1U) != 0) {
    iVar3 = stat(param_1,local_24);
    if (iVar3 == 0) {
      *(undefined4 *)(this + 0x110) = local_10;
      return 1;
    }
    return 0;
  }
  *(undefined4 *)(this + 0x110) = 0;
  return 1;
}




/* from: engine:fileio.cpp
   addr: 004D7AD0 */

int __thiscall fioFILE::Term(fioFILE *this)

{
  int iVar1;
  
  if ((((*(uint *)(this + 4) & 2) != 0) && ((*(uint *)(this + 4) & 4) != 0)) &&
     (iVar1 = 0, 0 < *(int *)(this + 0x114))) {
    do {
      (**(code **)(*(int *)this + 0xc))(*(int *)(*(int *)(this + 0x11c) + iVar1 * 8) + 2,1);
      (**(code **)(*(int *)this + 0x18))(&stack0xfffffff4,4,4);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(this + 0x114));
  }
  apFree(*(void **)(this + 0x11c));
  *(undefined4 *)(this + 0x11c) = 0;
  return ~*(uint *)(this + 4) >> 5 & 1;
}




/* from: engine:fileio.cpp
   addr: 004D7B60 */

void __thiscall fioFILE::Seek(fioFILE *this,int param_1,fioSEEK param_2)

{
  if (param_2 == 0) {
    *(int *)(this + 0x10c) = *(int *)(this + 0x10c) + param_1;
  }
  else if (param_2 == 1) {
    *(int *)(this + 0x10c) = param_1;
    return;
  }
  return;
}




/* from: engine:fileio.cpp
   addr: 004D7B90 */

int __thiscall fioFILE::IsEOF(fioFILE *this)

{
  return (uint)(*(uint *)(this + 0x110) <= *(uint *)(this + 0x10c));
}




/* from: engine:fileio.cpp
   addr: 004D7BB0 */

void __thiscall fioFILE::WriteChunk(fioFILE *this,ushort param_1,fioCHUNK *param_2)

{
  void *pvVar1;
  
  *(ushort *)param_2 = param_1;
  *(undefined4 *)(param_2 + 6) = *(undefined4 *)(this + 0x10c);
  if (*(int *)(this + 0x118) <= *(int *)(this + 0x114)) {
    pvVar1 = apRealloc(*(void **)(this + 0x11c),*(int *)(this + 0x118) * 8 + 800);
    *(void **)(this + 0x11c) = pvVar1;
    if (pvVar1 == (void *)0x0) {
      *(uint *)(this + 4) = *(uint *)(this + 4) | 0x20;
      return;
    }
    *(int *)(this + 0x118) = *(int *)(this + 0x118) + 100;
  }
  *(undefined4 *)(*(int *)(this + 0x11c) + *(int *)(this + 0x114) * 8) =
       *(undefined4 *)(param_2 + 6);
  *(undefined4 *)(param_2 + 10) = *(undefined4 *)(this + 0x114);
  *(int *)(this + 0x114) = *(int *)(this + 0x114) + 1;
  (**(code **)(*(int *)this + 0x18))(param_2,6,1);
  return;
}




/* from: engine:fileio.cpp
   addr: 004D7C50 */

void __thiscall fioFILE::UpdateChunk(fioFILE *this,fioCHUNK *param_1)

{
  *(undefined4 *)(*(int *)(this + 0x11c) + 4 + *(int *)(param_1 + 10) * 8) =
       *(undefined4 *)(this + 0x10c);
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  return;
}




/* from: engine:fileio.cpp
   addr: 004D7C80 */

int __thiscall fioFILE::ReadChunk(fioFILE *this,fioCHUNK *param_1)

{
  undefined2 local_10;
  undefined4 local_e;
  undefined4 local_a;
  undefined4 local_6;
  
  local_10 = 0;
  local_e = 0xffffffff;
  local_a = 0xffffffff;
  local_6 = 0xffffffff;
  if (param_1 == (fioCHUNK *)0x0) {
    param_1 = (fioCHUNK *)&local_10;
  }
  *(ushort *)param_1 = 0xffff;
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(this + 0x10c);
  (**(code **)(*(int *)this + 0x14))(param_1,6,1);
  return (uint)*(ushort *)param_1;
}




/* from: engine:fileio.cpp
   addr: 004D7CD0 */

void __thiscall fioFILE::SkipChunk(fioFILE *this,fioCHUNK *param_1)

{
  (**(code **)(*(int *)this + 0xc))(*(undefined4 *)(param_1 + 2),1);
  return;
}




/* from: engine:fileio.cpp
   addr: 004D7CF0 */

void __thiscall fioFILE::RevertChunk(fioFILE *this,fioCHUNK *param_1)

{
  if (param_1 == (fioCHUNK *)0x0) {
    (**(code **)(*(int *)this + 0xc))(0xfffffffa,0);
    return;
  }
  (**(code **)(*(int *)this + 0xc))(*(undefined4 *)(param_1 + 6),1);
  return;
}




/* from: engine:fileio.cpp
   addr: 004D7D20 */

void __thiscall fioFILE::WriteLastChunk(fioFILE *this)

{
  undefined2 local_10;
  undefined4 local_e;
  undefined4 local_a;
  int local_6;
  
  local_e = 0xffffffff;
  local_a = 0xffffffff;
  local_6 = -1;
  local_10 = 0;
  WriteChunk(this,1,(fioCHUNK *)&local_10);
  *(undefined4 *)(*(int *)(this + 0x11c) + 4 + local_6 * 8) = *(undefined4 *)(this + 0x10c);
  return;
}




/* from: engine:fileio.cpp
   addr: 004D7D70 */

int __thiscall fioFILE::ReadLastChunk(fioFILE *this)

{
  short sVar1;
  undefined2 local_10;
  undefined4 local_e;
  undefined4 local_a;
  undefined4 local_6;
  
  local_e = 0xffffffff;
  local_6 = 0xffffffff;
  local_a = *(undefined4 *)(this + 0x10c);
  sVar1 = 6;
  local_10 = 0xffff;
  (**(code **)(*(int *)this + 0x14))(&local_10,6,1);
  if (sVar1 != 1) {
    (**(code **)(*(int *)this + 0xc))(0xfffffffa,0);
    return 0;
  }
  return 1;
}




/* from: engine:fileio.cpp
   addr: 004D7DD0 */

void __thiscall fioFILE::ReadData(fioFILE *this,void *param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  void *pvVar4;
  
  if (((byte)this[4] & 8) == 0) {
    *(int *)(this + 0x10c) = *(int *)(this + 0x10c) + param_2;
    return;
  }
  if (param_3 < 2) {
    *(int *)(this + 0x10c) = *(int *)(this + 0x10c) + param_2;
    return;
  }
  if (param_2 / param_3 < 1) {
    *(int *)(this + 0x10c) = *(int *)(this + 0x10c) + param_2;
    return;
  }
  pvVar4 = param_1;
  param_1 = (void *)(param_2 / param_3);
  do {
    iVar2 = 0;
    if (0 < param_3 / 2) {
      puVar3 = (undefined1 *)(param_3 + -1 + (int)pvVar4);
      do {
        uVar1 = *(undefined1 *)(iVar2 + (int)pvVar4);
        *(undefined1 *)(iVar2 + (int)pvVar4) = *puVar3;
        *puVar3 = uVar1;
        iVar2 = iVar2 + 1;
        puVar3 = puVar3 + -1;
      } while (iVar2 < param_3 / 2);
    }
    pvVar4 = (void *)((int)pvVar4 + param_3);
    param_1 = (void *)((int)param_1 + -1);
  } while (param_1 != (void *)0x0);
  *(int *)(this + 0x10c) = *(int *)(this + 0x10c) + param_2;
  return;
}




/* from: engine:fileio.cpp
   addr: 004D7EA0 */

void __thiscall fioFILE::Read(fioFILE *this,char *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  
  pcVar2 = param_1;
  iVar3 = param_2 + -1;
  iVar4 = 0;
  if (iVar3 < 1) {
  }
  else {
    do {
      (**(code **)(*(int *)this + 0x14))(&param_1,1,1);
      pcVar2[iVar4] = (char)param_1;
      if ((char)param_1 == '\0') {
        return;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar3);
  }
  pcVar2[param_2 + -1] = '\0';
  cVar1 = (char)param_1;
  while ((cVar1 != '\0' && (iVar3 = (**(code **)(*(int *)this + 0x10))(), iVar3 == 0))) {
    (**(code **)(*(int *)this + 0x14))(&param_1,1,1);
    cVar1 = (char)param_1;
  }
  return;
}




/* from: engine:fileio.cpp
   addr: 004D7F20 */

void __thiscall fioFILE::WriteData(fioFILE *this,void *param_1,int param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = *(int *)(this + 0x10c) + param_2;
  *(uint *)(this + 0x10c) = uVar1;
  if (*(uint *)(this + 0x110) < uVar1) {
    *(uint *)(this + 0x110) = uVar1;
  }
  return;
}




/* from: engine:fileio.cpp
   addr: 004D7F50 */

void __thiscall fioFILE::Write(fioFILE *this,char *param_1)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  
  uVar2 = 0xffffffff;
  pcVar3 = param_1;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  (**(code **)(*(int *)this + 0x18))(param_1,~uVar2,1);
  return;
}




/* from: engine:fileio.cpp
   addr: 004D7F80 */

m3dSPL * __thiscall fioFILE::ReadSpline(fioFILE *this)

{
  m3dSPL *pmVar1;
  undefined1 *puVar2;
  undefined4 uStack_14;
  undefined1 local_4 [4];
  
  uStack_14 = 4;
  puVar2 = local_4;
  (**(code **)(*(int *)this + 0x14))(puVar2,4);
  (**(code **)(*(int *)this + 0x14))(&uStack_14,4);
  pmVar1 = m3dSPL::Make((int)puVar2,4);
  if (pmVar1 == (m3dSPL *)0x0) {
    *(uint *)(this + 4) = *(uint *)(this + 4) | 0x20;
    return (m3dSPL *)0x0;
  }
  (**(code **)(*(int *)this + 0x14))
            (*(undefined4 *)(pmVar1 + 0x24),*(int *)(pmVar1 + 0x14) * *(int *)(pmVar1 + 0xc),1);
  return pmVar1;
}




/* from: engine:fileio.cpp
   addr: 004D7FF0 */

int __thiscall fioFILE::ReadVol(fioFILE *this,m3dVOL *param_1)

{
  int unaff_ESI;
  int iVar1;
  fioFILE *local_4;
  
  local_4 = this;
  (**(code **)(*(int *)this + 0x14))(&local_4,4);
  if (*(int *)(unaff_ESI + 4) == 4) {
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(PTR_caseD_3_004d8114) {
    case (undefined *)0x0:
                    /* WARNING: This code block may not be properly labeled as switch case */
      (**(code **)(*(int *)this + 0x14))(unaff_ESI + 8,0xc,4);
      iVar1 = unaff_ESI + 0x14;
      break;
    case (undefined *)0x1:
                    /* WARNING: This code block may not be properly labeled as switch case */
      (**(code **)(*(int *)this + 0x14))((int *)(unaff_ESI + 8),4,4);
      (**(code **)(*(int *)this + 0x14))(unaff_ESI + 0xc,*(int *)(unaff_ESI + 8) << 3,4);
      (**(code **)(*(int *)this + 0x14))(unaff_ESI + 0xac,4,4);
      (**(code **)(*(int *)this + 0x14))(unaff_ESI + 0xb0,4,4);
      return 1;
    case (undefined *)0x2:
                    /* WARNING: This code block may not be properly labeled as switch case */
      (**(code **)(*(int *)this + 0x14))(unaff_ESI + 8,0xc,4);
      (**(code **)(*(int *)this + 0x14))(unaff_ESI + 0x14,4,4);
      return 1;
    case (undefined *)0x3:
                    /* WARNING: This code block may not be properly labeled as switch case */
      (**(code **)(*(int *)this + 0x14))(unaff_ESI + 8,0xc,4);
      (**(code **)(*(int *)this + 0x14))(unaff_ESI + 0x14,0xc,4);
      (**(code **)(*(int *)this + 0x14))(unaff_ESI + 0x20,0xc,4);
      iVar1 = unaff_ESI + 0x2c;
    }
    (**(code **)(*(int *)this + 0x14))(iVar1,0xc,4);
    return 1;
  }
  return 0;
}




/* from: engine:fileio.cpp
   addr: 004D8140 */

m3dVOL * __thiscall fioFILE::ReadVol(fioFILE *this)

{
  m3dVOL *pmVar1;
  fioFILE *local_4;
  
  local_4 = this;
  (**(code **)(*(int *)this + 0x14))(&local_4,4);
  pmVar1 = m3dVOL::Make(4);
  if (pmVar1 == (m3dVOL *)0x0) {
    return (m3dVOL *)0x0;
  }
  (**(code **)(*(int *)this + 0xc))(0xfffffffc,0);
  ReadVol(this,pmVar1);
  return pmVar1;
}




/* from: engine:fileio.cpp
   addr: 004D8190 */

int __thiscall fioFILE_DISK::Init(fioFILE_DISK *this,char *param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  FILE *pFVar5;
  char local_34 [16];
  undefined1 local_24 [20];
  undefined4 local_10;
  
  pcVar3 = param_1;
  do {
    cVar1 = *pcVar3;
    pcVar3[(int)(this + (8 - (int)param_1))] = cVar1;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  *(undefined4 *)(this + 0x10c) = 0;
  *(int *)(this + 4) = param_2;
  *(undefined4 *)(this + 0x114) = 0;
  *(undefined4 *)(this + 0x118) = 0;
  *(undefined4 *)(this + 0x11c) = 0;
  if ((param_2 & 1U) == 0) {
    *(undefined4 *)(this + 0x110) = 0;
  }
  else {
    iVar4 = stat(param_1,local_24);
    if (iVar4 != 0) {
      return 0;
    }
    *(undefined4 *)(this + 0x110) = local_10;
  }
  uVar2 = *(uint *)(this + 4);
  if (((uVar2 & 1) == 0) || ((uVar2 & 2) == 0)) {
    if ((uVar2 & 1) == 0) {
      if ((uVar2 & 2) != 0) {
        iVar4 = 0;
        do {
          cVar1 = (&s_wb)[iVar4];
          local_34[iVar4] = cVar1;
          iVar4 = iVar4 + 1;
        } while (cVar1 != '\0');
      }
    }
    else {
      iVar4 = 0;
      do {
        cVar1 = (&s_rb)[iVar4];
        local_34[iVar4] = cVar1;
        iVar4 = iVar4 + 1;
      } while (cVar1 != '\0');
    }
  }
  else {
    iVar4 = 0;
    do {
      cVar1 = (&s_rb_)[iVar4];
      local_34[iVar4] = cVar1;
      iVar4 = iVar4 + 1;
    } while (cVar1 != '\0');
  }
  iVar4 = -1;
  pcVar3 = param_1;
  do {
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  if (iVar4 == -2) {
    return 0;
  }
  pFVar5 = fopen(param_1,local_34);
  *(FILE **)(this + 0x120) = pFVar5;
  return (uint)(pFVar5 != (FILE *)0x0);
}




/* from: engine:fileio.cpp
   addr: 004D8290 */

int __thiscall fioFILE_DISK::Term(fioFILE_DISK *this)

{
  uint uVar1;
  int iVar2;
  
  if ((((*(uint *)(this + 4) & 2) != 0) && ((*(uint *)(this + 4) & 4) != 0)) &&
     (iVar2 = 0, 0 < *(int *)(this + 0x114))) {
    do {
      (**(code **)(*(int *)this + 0xc))(*(int *)(*(int *)(this + 0x11c) + iVar2 * 8) + 2,1);
      (**(code **)(*(int *)this + 0x18))(&stack0xfffffff4,4,4);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(this + 0x114));
  }
  apFree(*(void **)(this + 0x11c));
  uVar1 = *(uint *)(this + 4);
  *(undefined4 *)(this + 0x11c) = 0;
  fclose(*(FILE **)(this + 0x120));
  *(undefined4 *)(this + 0x120) = 0;
  return ~uVar1 >> 5 & 1;
}




/* from: engine:fileio.cpp
   addr: 004D8330 */

void __thiscall fioFILE_DISK::Seek(fioFILE_DISK *this,int param_1,fioSEEK param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    *(int *)(this + 0x10c) = *(int *)(this + 0x10c) + param_1;
  }
  else if (param_2 == 1) {
    *(int *)(this + 0x10c) = param_1;
  }
  if (param_2 == 0) {
    iVar1 = 1;
  }
  else if (param_2 == 1) {
    iVar1 = 0;
  }
  else {
    if (param_2 != 2) {
      return;
    }
    iVar1 = 2;
  }
  iVar1 = fseek(*(FILE **)(this + 0x120),param_1,iVar1);
  if (iVar1 != 0) {
    *(uint *)(this + 4) = *(uint *)(this + 4) | 0x20;
  }
  return;
}




/* from: engine:fileio.cpp
   addr: 004D83A0 */

void __thiscall fioFILE_DISK::ReadData(fioFILE_DISK *this,void *param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  size_t sVar2;
  int iVar3;
  undefined1 *puVar4;
  void *pvVar5;
  
  if (param_2 != 0) {
    sVar2 = fread(param_1,param_2,1,*(FILE **)(this + 0x120));
    if (sVar2 != 1) {
      *(uint *)(this + 4) = *(uint *)(this + 4) | 0x20;
      return;
    }
    if (((((byte)this[4] & 8) != 0) && (1 < param_3)) && (0 < param_2 / param_3)) {
      pvVar5 = param_1;
      param_1 = (void *)(param_2 / param_3);
      do {
        iVar3 = 0;
        if (0 < param_3 / 2) {
          puVar4 = (undefined1 *)((int)pvVar5 + param_3 + -1);
          do {
            uVar1 = *(undefined1 *)(iVar3 + (int)pvVar5);
            *(undefined1 *)(iVar3 + (int)pvVar5) = *puVar4;
            *puVar4 = uVar1;
            iVar3 = iVar3 + 1;
            puVar4 = puVar4 + -1;
          } while (iVar3 < param_3 / 2);
        }
        pvVar5 = (void *)((int)pvVar5 + param_3);
        param_1 = (void *)((int)param_1 + -1);
      } while (param_1 != (void *)0x0);
    }
    *(int *)(this + 0x10c) = *(int *)(this + 0x10c) + param_2;
  }
  return;
}




/* from: engine:fileio.cpp
   addr: 004D8450 */

void __thiscall fioFILE_DISK::WriteData(fioFILE_DISK *this,void *param_1,int param_2,int param_3)

{
  size_t sVar1;
  uint uVar2;
  
  if (param_2 != 0) {
    sVar1 = fwrite(param_1,param_2,1,*(FILE **)(this + 0x120));
    if (sVar1 != 1) {
      *(uint *)(this + 4) = *(uint *)(this + 4) | 0x20;
      return;
    }
    uVar2 = *(int *)(this + 0x10c) + param_2;
    *(uint *)(this + 0x10c) = uVar2;
    if (*(uint *)(this + 0x110) < uVar2) {
      *(uint *)(this + 0x110) = uVar2;
    }
  }
  return;
}




/* from: engine:fileio.cpp
   addr: 004D84C0 */

int __thiscall fioFILE_MEM::Init(fioFILE_MEM *this,char *param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  FILE *_File;
  void *pvVar4;
  size_t sVar5;
  int iVar6;
  undefined1 local_24 [20];
  undefined4 local_10;
  
  if (((*(uint *)(this + 4) & 1) != 0) && ((*(uint *)(this + 4) & 2) != 0)) {
    return 0;
  }
  iVar6 = -1;
  pcVar3 = param_1;
  do {
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  if (iVar6 == -2) {
    return 0;
  }
  *(undefined4 *)(this + 0x120) = 0;
  *(undefined4 *)(this + 0x124) = 0;
  *(undefined4 *)(this + 0x128) = 0;
  pcVar3 = param_1;
  do {
    cVar1 = *pcVar3;
    pcVar3[(int)(this + (8 - (int)param_1))] = cVar1;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  *(undefined4 *)(this + 0x10c) = 0;
  *(int *)(this + 4) = param_2;
  *(undefined4 *)(this + 0x114) = 0;
  *(undefined4 *)(this + 0x118) = 0;
  *(undefined4 *)(this + 0x11c) = 0;
  if ((param_2 & 1U) == 0) {
    *(undefined4 *)(this + 0x110) = 0;
  }
  else {
    iVar6 = stat(param_1,local_24);
    if (iVar6 != 0) {
      return 0;
    }
    *(undefined4 *)(this + 0x110) = local_10;
  }
  uVar2 = *(uint *)(this + 4);
  if ((uVar2 & 1) == 0) {
    if (((uVar2 & 2) != 0) && (*(int *)(this + 0x128) == 0)) {
      if ((uVar2 & 0x10) != 0) {
        return 0;
      }
      pvVar4 = apRealloc(*(void **)(this + 0x120),0x186a1);
      if (pvVar4 == (void *)0x0) {
        *(uint *)(this + 4) = *(uint *)(this + 4) | 0x20;
        return 0;
      }
      *(void **)(this + 0x120) = pvVar4;
      *(undefined4 *)(this + 0x128) = 0x186a1;
      *(int *)(this + 0x124) = *(int *)(this + 0x10c) + (int)pvVar4;
    }
  }
  else {
    _File = fopen(param_1,&s_rb);
    if (_File == (FILE *)0x0) {
      return 0;
    }
    pvVar4 = apMalloc(*(uint *)(this + 0x110));
    *(void **)(this + 0x120) = pvVar4;
    if (pvVar4 == (void *)0x0) {
      return 0;
    }
    sVar5 = fread(pvVar4,*(size_t *)(this + 0x110),1,_File);
    if (sVar5 != 1) {
      return 0;
    }
    fclose(_File);
  }
  *(undefined4 *)(this + 0x124) = *(undefined4 *)(this + 0x120);
  return 1;
}




/* from: engine:fileio.cpp
   addr: 004D8660 */

int __thiscall fioFILE_MEM::Init(fioFILE_MEM *this,void *param_1,int param_2,int param_3)

{
  *(int *)(this + 4) = param_3;
  *(uint *)(this + 4) = param_3 | 0x10;
  *(undefined4 *)(this + 0x10c) = 0;
  *(undefined4 *)(this + 0x114) = 0;
  *(undefined4 *)(this + 0x118) = 0;
  *(undefined4 *)(this + 0x11c) = 0;
  *(void **)(this + 0x120) = param_1;
  *(int *)(this + 0x128) = param_2;
  if ((*(uint *)(this + 4) & 2) == 0) {
    if ((*(uint *)(this + 4) & 1) == 0) {
      return 0;
    }
    *(int *)(this + 0x110) = param_2;
  }
  else {
    *(undefined4 *)(this + 0x110) = 0;
  }
  *(void **)(this + 0x124) = param_1;
  *(undefined4 *)(this + 0x10c) = 0;
  return 1;
}




/* from: engine:fileio.cpp
   addr: 004D86E0 */

int __thiscall fioFILE_MEM::Term(fioFILE_MEM *this)

{
  uint uVar1;
  FILE *_File;
  size_t sVar2;
  int iVar3;
  
  if ((((*(uint *)(this + 4) & 2) != 0) && ((*(uint *)(this + 4) & 4) != 0)) &&
     (iVar3 = 0, 0 < *(int *)(this + 0x114))) {
    do {
      (**(code **)(*(int *)this + 0xc))(*(int *)(*(int *)(this + 0x11c) + iVar3 * 8) + 2,1);
      (**(code **)(*(int *)this + 0x18))(&stack0xfffffff4,4,4);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(this + 0x114));
  }
  apFree(*(void **)(this + 0x11c));
  uVar1 = *(uint *)(this + 4);
  *(undefined4 *)(this + 0x11c) = 0;
  if ((uVar1 & 0x10) == 0) {
    if ((uVar1 & 1) == 0) {
      if ((uVar1 & 2) != 0) {
        _File = fopen((char *)(this + 8),&s_wb);
        if (_File == (FILE *)0x0) {
          return 0;
        }
        sVar2 = fwrite(*(void **)(this + 0x120),*(size_t *)(this + 0x110),1,_File);
        if (sVar2 != 1) {
          return 0;
        }
        fclose(_File);
      }
    }
    else {
      apFree(*(void **)(this + 0x120));
    }
  }
  *(undefined4 *)(this + 0x120) = 0;
  *(undefined4 *)(this + 0x124) = 0;
  *(undefined4 *)(this + 0x128) = 0;
  return ~uVar1 >> 5 & 1;
}




/* from: engine:fileio.cpp
   addr: 004D87F0 */

void __thiscall fioFILE_MEM::Seek(fioFILE_MEM *this,int param_1,fioSEEK param_2)

{
  if (param_2 == 0) {
    param_1 = *(int *)(this + 0x10c) + param_1;
  }
  else if (param_2 != 1) goto LAB_004d8814;
  *(int *)(this + 0x10c) = param_1;
LAB_004d8814:
  *(int *)(this + 0x124) = *(int *)(this + 0x120) + *(int *)(this + 0x10c);
  return;
}




/* from: engine:fileio.cpp
   addr: 004D8830 */

void __thiscall fioFILE_MEM::ReadData(fioFILE_MEM *this,void *param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  void *pvVar6;
  undefined4 *puVar7;
  
  if (param_2 != 0) {
    puVar5 = *(undefined4 **)(this + 0x124);
    puVar7 = (undefined4 *)param_1;
    for (uVar2 = (uint)param_2 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar7 = puVar7 + 1;
    }
    for (uVar2 = param_2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined1 *)puVar7 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    *(int *)(this + 0x124) = *(int *)(this + 0x124) + param_2;
    if (((((byte)this[4] & 8) != 0) && (1 < param_3)) && (0 < param_2 / param_3)) {
      pvVar6 = param_1;
      param_1 = (void *)(param_2 / param_3);
      do {
        iVar3 = 0;
        if (0 < param_3 / 2) {
          puVar4 = (undefined1 *)((int)pvVar6 + param_3 + -1);
          do {
            uVar1 = *(undefined1 *)(iVar3 + (int)pvVar6);
            *(undefined1 *)(iVar3 + (int)pvVar6) = *puVar4;
            *puVar4 = uVar1;
            iVar3 = iVar3 + 1;
            puVar4 = puVar4 + -1;
          } while (iVar3 < param_3 / 2);
        }
        pvVar6 = (void *)((int)pvVar6 + param_3);
        param_1 = (void *)((int)param_1 + -1);
      } while (param_1 != (void *)0x0);
    }
    *(int *)(this + 0x10c) = *(int *)(this + 0x10c) + param_2;
  }
  return;
}




/* from: engine:fileio.cpp
   addr: 004D88E0 */

void __thiscall fioFILE_MEM::WriteData(fioFILE_MEM *this,void *param_1,int param_2,int param_3)

{
  void *pvVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  if (param_2 != 0) {
    if (((*(uint *)(this + 4) & 2) != 0) &&
       (*(uint *)(this + 0x128) < (uint)(*(int *)(this + 0x10c) + param_2))) {
      if ((*(uint *)(this + 4) & 0x10) != 0) {
        return;
      }
      uVar2 = *(int *)(this + 0x10c) + param_2 + 100000;
      pvVar1 = apRealloc(*(void **)(this + 0x120),uVar2);
      if (pvVar1 == (void *)0x0) {
        *(uint *)(this + 4) = *(uint *)(this + 4) | 0x20;
        return;
      }
      *(void **)(this + 0x120) = pvVar1;
      *(uint *)(this + 0x128) = uVar2;
      *(int *)(this + 0x124) = *(int *)(this + 0x10c) + (int)pvVar1;
    }
    puVar3 = *(undefined4 **)(this + 0x124);
                    /* WARNING: Load size is inaccurate */
    for (uVar2 = (uint)param_2 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar3 = *param_1;
      param_1 = (undefined4 *)((int)param_1 + 4);
      puVar3 = puVar3 + 1;
    }
                    /* WARNING: Load size is inaccurate */
    for (uVar2 = param_2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined1 *)puVar3 = *param_1;
      param_1 = (undefined4 *)((int)param_1 + 1);
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
    uVar2 = *(int *)(this + 0x10c) + param_2;
    *(int *)(this + 0x124) = *(int *)(this + 0x124) + param_2;
    *(uint *)(this + 0x10c) = uVar2;
    if (*(uint *)(this + 0x110) < uVar2) {
      *(uint *)(this + 0x110) = uVar2;
    }
    if (uVar2 < *(uint *)(this + 0x110)) {
      uVar2 = *(uint *)(this + 0x110);
    }
    *(uint *)(this + 0x110) = uVar2;
  }
  return;
}

