
/* from: ap:ap_cfg.cpp
   addr: 004A0AE0 */

int __fastcall apCfgInit(char *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  CHAR local_104 [260];
  
  if (param_2 != 0) {
    GetCurrentDirectoryA(0x104,local_104);
    iVar2 = -1;
    pcVar5 = local_104;
    do {
      pcVar7 = pcVar5;
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      pcVar7 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar7;
    } while (cVar1 != '\0');
    *(char (*) [2])(pcVar7 + -1) = s__;
    uVar3 = 0xffffffff;
    do {
      pcVar5 = param_1;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar5 = param_1 + 1;
      cVar1 = *param_1;
      param_1 = pcVar5;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    iVar2 = -1;
    pcVar7 = local_104;
    do {
      pcVar6 = pcVar7;
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    pcVar5 = pcVar5 + -uVar3;
    pcVar7 = pcVar6 + -1;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar7 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar7 = pcVar7 + 1;
    }
    param_1 = local_104;
  }
  iVar2 = access(param_1,0);
  if (iVar2 != 0) {
    apMsg(s_Cannot_open_file__s,param_1);
    return 0;
  }
  strncpy(&DAT_00610f98,param_1,0x104);
  DAT_00610f90 = 0;
  DAT_00610f94 = 0;
  return 1;
}




/* from: ap:ap_cfg.cpp
   addr: 004A0BA0 */

void __fastcall apCfgTerm(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  
  iVar2 = 0;
  if (0 < DAT_00610f90) {
    iVar3 = 0;
    do {
      iVar4 = 0;
      if (0 < *(int *)(iVar3 + 0x40 + (int)DAT_00610f94)) {
        do {
          iVar1 = *(int *)(*(int *)(iVar3 + 0x44 + (int)DAT_00610f94) + iVar4 * 4);
          if (*(int *)(iVar1 + 0x40) == 5) {
            pvVar5 = *(void **)(iVar1 + 0x48);
LAB_004a0bdb:
            apFree(pvVar5);
          }
          else if (*(int *)(iVar1 + 0x40) == 6) {
            pvVar5 = *(void **)(iVar1 + 0x48);
            goto LAB_004a0bdb;
          }
          apFree(*(void **)(*(int *)(iVar3 + 0x44 + (int)DAT_00610f94) + iVar4 * 4));
          iVar4 = iVar4 + 1;
        } while (iVar4 < *(int *)(iVar3 + 0x40 + (int)DAT_00610f94));
      }
      apFree(*(void **)(iVar3 + 0x44 + (int)DAT_00610f94));
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x48;
    } while (iVar2 < DAT_00610f90);
  }
  apFree(DAT_00610f94);
  WritePrivateProfileStringA((LPCSTR)0x0,(LPCSTR)0x0,(LPCSTR)0x0,&DAT_00610f98);
  DAT_00610f98 = 0;
  return;
}




/* from: ap:ap_cfg.cpp
   addr: 004A0C50 */

int __fastcall _apCfgReadInt(void **param_1,char *param_2,char *param_3,int *param_4)

{
  int iVar1;
  DWORD DVar2;
  long lVar3;
  char local_34;
  char cStack_33;
  
  iVar1 = _apCfgSectGetKey(param_1,param_2,param_3,param_4,2,4);
  if (iVar1 != 0) {
    return 1;
  }
  DVar2 = GetPrivateProfileStringA(param_2,param_3,s_,&local_34,0x20,&DAT_00610f98);
  if (DVar2 != 0) {
    if ((local_34 == '0') && ((cStack_33 == 'x' || (cStack_33 == 'X')))) {
      iVar1 = 0x10;
    }
    else {
      iVar1 = 10;
    }
    lVar3 = strtol(&local_34,(char **)0x0,iVar1);
    *param_4 = lVar3;
    _apCfgSectSetKey(param_2,param_3,param_4,2,4);
    return 1;
  }
  return 0;
}




/* from: ap:ap_cfg.cpp
   addr: 004A0D00 */

int __fastcall _apCfgReadDword(void **param_1,char *param_2,char *param_3,ulong *param_4)

{
  int iVar1;
  DWORD DVar2;
  ulong uVar3;
  char local_34;
  char cStack_33;
  
  iVar1 = _apCfgSectGetKey(param_1,param_2,param_3,param_4,3,4);
  if (iVar1 != 0) {
    return 1;
  }
  DVar2 = GetPrivateProfileStringA(param_2,param_3,s_,&local_34,0x20,&DAT_00610f98);
  if (DVar2 != 0) {
    if ((local_34 == '0') && ((cStack_33 == 'x' || (cStack_33 == 'X')))) {
      iVar1 = 0x10;
    }
    else {
      iVar1 = 10;
    }
    uVar3 = strtoul(&local_34,(char **)0x0,iVar1);
    *param_4 = uVar3;
    _apCfgSectSetKey(param_2,param_3,param_4,3,4);
    return 1;
  }
  return 0;
}




/* from: ap:ap_cfg.cpp
   addr: 004A0DB0 */

int __fastcall _apCfgReadBool(void **param_1,char *param_2,char *param_3,int *param_4)

{
  int iVar1;
  DWORD DVar2;
  CHAR local_34 [52];
  
  iVar1 = _apCfgSectGetKey(param_1,param_2,param_3,param_4,1,4);
  if (iVar1 != 0) {
    return 1;
  }
  DVar2 = GetPrivateProfileStringA(param_2,param_3,s_,local_34,0x20,&DAT_00610f98);
  if (DVar2 != 0) {
    iVar1 = strnicmp(local_34,&s_Yes,3);
    *param_4 = (uint)(iVar1 == 0);
    _apCfgSectSetKey(param_2,param_3,param_4,1,4);
    return 1;
  }
  return 0;
}




/* from: ap:ap_cfg.cpp
   addr: 004A0E40 */

int __fastcall _apCfgReadFloat(void **param_1,char *param_2,char *param_3,float *param_4)

{
  int iVar1;
  DWORD DVar2;
  double dVar3;
  CHAR local_34 [52];
  
  iVar1 = _apCfgSectGetKey(param_1,param_2,param_3,param_4,4,4);
  if (iVar1 != 0) {
    return 1;
  }
  DVar2 = GetPrivateProfileStringA(param_2,param_3,s_,local_34,0x20,&DAT_00610f98);
  if (DVar2 != 0) {
    dVar3 = atof(local_34);
    *param_4 = (float)dVar3;
    _apCfgSectSetKey(param_2,param_3,param_4,4,4);
    return 1;
  }
  return 0;
}




/* from: ap:ap_cfg.cpp
   addr: 004A0EC0 */

int __fastcall
_apCfgReadString(void **param_1,char *param_2,char *param_3,char *param_4,int param_5)

{
  char cVar1;
  int iVar2;
  DWORD DVar3;
  uint uVar4;
  char *pcVar5;
  
  iVar2 = _apCfgSectGetKey(param_1,param_2,param_3,param_4,5,param_5);
  if (iVar2 != 0) {
    return 1;
  }
  DVar3 = GetPrivateProfileStringA(param_2,param_3,s_,param_4,param_5,&DAT_00610f98);
  if (DVar3 == 0) {
    return 0;
  }
  uVar4 = 0xffffffff;
  pcVar5 = param_4;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  _apCfgSectSetKey(param_2,param_3,param_4,5,~uVar4 - 1);
  return 1;
}




/* from: ap:ap_cfg.cpp
   addr: 004A0F40 */

int __fastcall apCfgWriteInt(char *param_1,char *param_2,int param_3)

{
  BOOL BVar1;
  char local_34 [52];
  
  _apCfgSectSetKey(param_1,param_2,&param_3,2,4);
  itoa(param_3,local_34,10);
  BVar1 = WritePrivateProfileStringA(param_1,param_2,local_34,&DAT_00610f98);
  return BVar1;
}




/* from: ap:ap_cfg.cpp
   addr: 004A0F90 */

int __fastcall apCfgWriteDword(char *param_1,char *param_2,ulong param_3)

{
  BOOL BVar1;
  CHAR local_34 [2];
  char local_32 [50];
  
  _apCfgSectSetKey(param_1,param_2,&param_3,3,4);
  local_34[0] = '0';
  local_34[1] = 0x78;
  itoa(param_3,local_32,0x10);
  BVar1 = WritePrivateProfileStringA(param_1,param_2,local_34,&DAT_00610f98);
  return BVar1;
}




/* from: ap:ap_cfg.cpp
   addr: 004A0FE0 */

int __fastcall apCfgWriteBool(char *param_1,char *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  BOOL BVar3;
  CHAR local_34 [52];
  
  _apCfgSectSetKey(param_1,param_2,&param_3,1,4);
  if (param_3 == 0) {
    iVar2 = 0;
    do {
      cVar1 = (&s_No)[iVar2];
      local_34[iVar2] = cVar1;
      iVar2 = iVar2 + 1;
    } while (cVar1 != '\0');
  }
  else {
    iVar2 = 0;
    do {
      cVar1 = (&s_Yes)[iVar2];
      local_34[iVar2] = cVar1;
      iVar2 = iVar2 + 1;
    } while (cVar1 != '\0');
  }
  BVar3 = WritePrivateProfileStringA(param_1,param_2,local_34,&DAT_00610f98);
  return BVar3;
}




/* from: ap:ap_cfg.cpp
   addr: 004A1040 */

int __fastcall apCfgWriteFloat(char *param_1,char *param_2,float param_3)

{
  BOOL BVar1;
  char local_34 [52];
  
  _apCfgSectSetKey(param_1,param_2,&param_3,4,4);
  sprintf(local_34,s__f,(double)param_3);
  BVar1 = WritePrivateProfileStringA(param_1,param_2,local_34,&DAT_00610f98);
  return BVar1;
}




/* from: ap:ap_cfg.cpp
   addr: 004A1090 */

int __fastcall apCfgWriteString(char *param_1,char *param_2,char *param_3)

{
  char cVar1;
  BOOL BVar2;
  uint uVar3;
  char *pcVar4;
  
  uVar3 = 0xffffffff;
  pcVar4 = param_3;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  _apCfgSectSetKey(param_1,param_2,param_3,5,~uVar3 - 1);
  BVar2 = WritePrivateProfileStringA(param_1,param_2,param_3,&DAT_00610f98);
  return BVar2;
}




/* from: ap:ap_cfg.cpp
   addr: 004A10D0 */

int __fastcall
_apCfgSectGetKey(void **param_1,char *param_2,char *param_3,void *param_4,int param_5,int param_6)

{
  int iVar1;
  void *pvVar2;
  size_t _Count;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  
  if ((param_1 != (void **)0x0) && (pvVar2 = *param_1, pvVar2 != (void *)0x0)) {
LAB_004a117d:
    switch(param_5) {
    case 1:
    case 4:
      *(undefined4 *)param_4 = *(undefined4 *)((int)pvVar2 + 0x48);
      return 1;
    case 2:
      *(undefined4 *)param_4 = *(undefined4 *)((int)pvVar2 + 0x48);
      return 1;
    case 3:
      *(undefined4 *)param_4 = *(undefined4 *)((int)pvVar2 + 0x48);
      return 1;
    case 5:
      _Count = *(int *)((int)pvVar2 + 0x44) + 1;
      if (param_6 <= (int)_Count) {
        _Count = param_6;
      }
      strncpy((char *)param_4,*(char **)((int)pvVar2 + 0x48),_Count);
      return 1;
    case 6:
      uVar4 = *(uint *)((int)pvVar2 + 0x44);
      if (param_6 <= (int)*(uint *)((int)pvVar2 + 0x44)) {
        uVar4 = param_6;
      }
      puVar6 = *(undefined4 **)((int)pvVar2 + 0x48);
      for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined4 *)param_4 = *puVar6;
        puVar6 = puVar6 + 1;
        param_4 = (undefined4 *)((int)param_4 + 4);
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)param_4 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        param_4 = (undefined4 *)((int)param_4 + 1);
      }
    }
    return 1;
  }
  iVar5 = 0;
  if (0 < DAT_00610f90) {
    iVar7 = 0;
    while (iVar1 = apNAME::IsName((apNAME *)(iVar7 + DAT_00610f94),param_2), iVar1 == 0) {
      iVar5 = iVar5 + 1;
      iVar7 = iVar7 + 0x48;
      if (DAT_00610f90 <= iVar5) {
        return 0;
      }
    }
    iVar5 = DAT_00610f94 + iVar5 * 0x48;
    if (iVar5 != 0) {
      iVar7 = 0;
      if (0 < *(int *)(iVar5 + 0x40)) {
        while (iVar1 = apNAME::IsName(*(apNAME **)(*(int *)(iVar5 + 0x44) + iVar7 * 4),param_3),
              iVar1 == 0) {
          iVar7 = iVar7 + 1;
          if (*(int *)(iVar5 + 0x40) <= iVar7) {
            return 0;
          }
        }
        pvVar2 = *(void **)(*(int *)(iVar5 + 0x44) + iVar7 * 4);
        if (pvVar2 != (void *)0x0) {
          if (param_1 != (void **)0x0) {
            *param_1 = pvVar2;
          }
          goto LAB_004a117d;
        }
      }
      return 0;
    }
  }
  return 0;
}




/* from: ap:ap_cfg.cpp
   addr: 004A1250 */

int __fastcall _apCfgSectSetKey(char *param_1,char *param_2,void *param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  int iVar2;
  void *pvVar3;
  apNAME *this;
  char *pcVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  void *pvVar8;
  int iVar9;
  
  iVar7 = 0;
  if (0 < DAT_00610f90) {
    iVar9 = 0;
    do {
      iVar2 = apNAME::IsName((apNAME *)(iVar9 + (int)DAT_00610f94),param_1);
      if (iVar2 != 0) {
        pvVar8 = (void *)((int)DAT_00610f94 + iVar7 * 0x48);
        if (pvVar8 != (void *)0x0) goto LAB_004a1305;
        break;
      }
      iVar7 = iVar7 + 1;
      iVar9 = iVar9 + 0x48;
    } while (iVar7 < DAT_00610f90);
  }
  DAT_00610f94 = apRealloc(DAT_00610f94,(DAT_00610f90 * 9 + 9) * 8);
  iVar7 = 0;
  if (DAT_00610f94 != (void *)0x0) {
    puVar5 = (undefined4 *)((int)DAT_00610f94 + DAT_00610f90 * 0x48);
    for (iVar7 = 0x12; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    apNAME::SetName((apNAME *)((int)DAT_00610f94 + DAT_00610f90 * 0x48),param_1);
    pvVar8 = (void *)((int)DAT_00610f94 + DAT_00610f90 * 0x48);
    DAT_00610f90 = DAT_00610f90 + 1;
LAB_004a1305:
    iVar7 = 0;
    if (0 < *(int *)((int)pvVar8 + 0x40)) {
      do {
        iVar9 = apNAME::IsName(*(apNAME **)(*(int *)((int)pvVar8 + 0x44) + iVar7 * 4),param_2);
        if (iVar9 != 0) {
          this = *(apNAME **)(*(int *)((int)pvVar8 + 0x44) + iVar7 * 4);
          if (this != (apNAME *)0x0) goto LAB_004a1388;
          break;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)((int)pvVar8 + 0x40));
    }
    pvVar3 = apRealloc(*(void **)((int)pvVar8 + 0x44),*(int *)((int)pvVar8 + 0x40) * 4 + 4);
    *(void **)((int)pvVar8 + 0x44) = pvVar3;
    if (pvVar3 == (void *)0x0) {
      return 0;
    }
    this = (apNAME *)apCalloc(1,0x4c);
    if (this == (apNAME *)0x0) {
      return 0;
    }
    *(apNAME **)(*(int *)((int)pvVar8 + 0x44) + *(int *)((int)pvVar8 + 0x40) * 4) = this;
    *(int *)((int)pvVar8 + 0x40) = *(int *)((int)pvVar8 + 0x40) + 1;
    apNAME::SetName(this,param_2);
LAB_004a1388:
    switch(param_4) {
    case 1:
    case 4:
      *(undefined4 *)(this + 0x44) = 4;
                    /* WARNING: Load size is inaccurate */
      uVar1 = *param_3;
      *(int *)(this + 0x40) = param_4;
      *(undefined4 *)(this + 0x48) = uVar1;
      return 1;
    case 2:
      *(undefined4 *)(this + 0x44) = 4;
                    /* WARNING: Load size is inaccurate */
      uVar1 = *param_3;
      *(int *)(this + 0x40) = param_4;
      *(undefined4 *)(this + 0x48) = uVar1;
      return 1;
    case 3:
      *(undefined4 *)(this + 0x44) = 4;
                    /* WARNING: Load size is inaccurate */
      uVar1 = *param_3;
      *(int *)(this + 0x40) = param_4;
      *(undefined4 *)(this + 0x48) = uVar1;
      return 1;
    case 5:
      *(int *)(this + 0x44) = param_5;
      apFree(*(void **)(this + 0x48));
      pcVar4 = apStrdup((char *)param_3);
      *(char **)(this + 0x48) = pcVar4;
      if (pcVar4 == (char *)0x0) {
        return 0;
      }
      break;
    case 6:
      *(int *)(this + 0x44) = param_5;
      puVar5 = (undefined4 *)apMalloc(param_5);
      *(undefined4 **)(this + 0x48) = puVar5;
      if (puVar5 == (undefined4 *)0x0) {
        return 0;
      }
                    /* WARNING: Load size is inaccurate */
      for (uVar6 = (uint)param_5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar5 = *param_3;
        param_3 = (undefined4 *)((int)param_3 + 4);
        puVar5 = puVar5 + 1;
      }
                    /* WARNING: Load size is inaccurate */
      for (uVar6 = param_5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puVar5 = *param_3;
        param_3 = (undefined4 *)((int)param_3 + 1);
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
    }
    *(int *)(this + 0x40) = param_4;
    iVar7 = 1;
  }
  return iVar7;
}

