
/* from: engine:pssheet.cpp
   addr: 004E01F0 */

int __thiscall psSHEET::GetStr(psSHEET *this,char *param_1,char *param_2,char *param_3,int param_4)

{
  int iVar1;
  
  iVar1 = GetStr(this,param_1,param_2,param_3,param_4);
  if (iVar1 != 0) {
    return 1;
  }
  if (*(psSHEET **)(this + 0xc) == (psSHEET *)0x0) {
    return 0;
  }
  iVar1 = GetStr(*(psSHEET **)(this + 0xc),param_1,param_2,param_3,param_4);
  return iVar1;
}




/* from: engine:pssheet.cpp
   addr: 004E0250 */

int __thiscall psSHEET::GetInt(psSHEET *this,char *param_1,char *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  psSECT *ppVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  
  iVar6 = 0;
  if (0 < *(int *)this) {
    iVar4 = 0;
    do {
      puVar5 = (undefined4 *)(*(int *)(this + 4) + iVar4);
      iVar2 = stricmp((char *)*puVar5,param_1);
      if (iVar2 == 0) {
        iVar6 = 0;
        if (0 < (int)puVar5[1]) goto LAB_004e028f;
        break;
      }
      iVar6 = iVar6 + 1;
      iVar4 = iVar4 + 0xc;
    } while (iVar6 < *(int *)this);
  }
  goto LAB_004e02b2;
  while (iVar6 = iVar6 + 1, iVar6 < (int)puVar5[1]) {
LAB_004e0365:
    iVar4 = puVar5[2] + iVar6 * 8;
    iVar2 = stricmp(*(char **)(puVar5[2] + iVar6 * 8),param_2);
    if (iVar2 == 0) goto LAB_004e03d1;
  }
  goto LAB_004e0388;
  while (iVar6 = iVar6 + 1, iVar6 < (int)puVar5[1]) {
LAB_004e028f:
    iVar4 = puVar5[2] + iVar6 * 8;
    iVar2 = stricmp(*(char **)(puVar5[2] + iVar6 * 8),param_2);
    if (iVar2 == 0) goto LAB_004e02f7;
  }
LAB_004e02b2:
  if (*(psSHEET **)(this + 0xc) != (psSHEET *)0x0) {
    ppVar3 = FindSect(*(psSHEET **)(this + 0xc),param_1);
    if ((ppVar3 != (psSECT *)0x0) && (iVar6 = 0, 0 < *(int *)(ppVar3 + 4))) {
      do {
        iVar4 = *(int *)(ppVar3 + 8) + iVar6 * 8;
        iVar2 = stricmp(*(char **)(*(int *)(ppVar3 + 8) + iVar6 * 8),param_2);
        if (iVar2 == 0) goto LAB_004e02f7;
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(ppVar3 + 4));
    }
    iVar4 = 0;
LAB_004e02f7:
    if ((iVar4 != 0) && (iVar6 = sscanf(*(char **)(iVar4 + 4),s__d,param_3), iVar6 == 1)) {
      return 1;
    }
  }
  piVar1 = *(int **)(this + 0xc);
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  iVar6 = 0;
  if (0 < *piVar1) {
    iVar4 = 0;
    do {
      puVar5 = (undefined4 *)(piVar1[1] + iVar4);
      iVar2 = stricmp((char *)*puVar5,param_1);
      if (iVar2 == 0) {
        iVar6 = 0;
        if (0 < (int)puVar5[1]) goto LAB_004e0365;
        break;
      }
      iVar6 = iVar6 + 1;
      iVar4 = iVar4 + 0xc;
    } while (iVar6 < *piVar1);
  }
LAB_004e0388:
  if ((psSHEET *)piVar1[3] != (psSHEET *)0x0) {
    ppVar3 = FindSect((psSHEET *)piVar1[3],param_1);
    if ((ppVar3 != (psSECT *)0x0) && (iVar6 = 0, 0 < *(int *)(ppVar3 + 4))) {
      do {
        iVar4 = *(int *)(ppVar3 + 8) + iVar6 * 8;
        iVar2 = stricmp(*(char **)(*(int *)(ppVar3 + 8) + iVar6 * 8),param_2);
        if (iVar2 == 0) goto LAB_004e03d1;
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(ppVar3 + 4));
    }
    iVar4 = 0;
LAB_004e03d1:
    if (iVar4 != 0) {
      iVar6 = sscanf(*(char **)(iVar4 + 4),s__d,param_3);
      return (uint)(iVar6 == 1);
    }
  }
  return 0;
}




/* from: engine:pssheet.cpp
   addr: 004E0410 */

int __thiscall psSHEET::GetBool(psSHEET *this,char *param_1,char *param_2,int *param_3)

{
  psSHEET *this_00;
  int iVar1;
  psSECT *ppVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  char *_Str1;
  
  iVar3 = 0;
  if (0 < *(int *)this) {
    iVar5 = 0;
    do {
      puVar4 = (undefined4 *)(*(int *)(this + 4) + iVar5);
      iVar1 = stricmp((char *)*puVar4,param_1);
      if (iVar1 == 0) {
        iVar3 = 0;
        if (0 < (int)puVar4[1]) goto LAB_004e044f;
        break;
      }
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + 0xc;
    } while (iVar3 < *(int *)this);
  }
  goto LAB_004e0472;
  while (iVar3 = iVar3 + 1, iVar3 < (int)puVar4[1]) {
LAB_004e044f:
    iVar5 = puVar4[2] + iVar3 * 8;
    iVar1 = stricmp(*(char **)(puVar4[2] + iVar3 * 8),param_2);
    if (iVar1 == 0) goto LAB_004e04b7;
  }
LAB_004e0472:
  if (*(psSHEET **)(this + 0xc) != (psSHEET *)0x0) {
    ppVar2 = FindSect(*(psSHEET **)(this + 0xc),param_1);
    if ((ppVar2 != (psSECT *)0x0) && (iVar3 = 0, 0 < *(int *)(ppVar2 + 4))) {
      do {
        iVar5 = *(int *)(ppVar2 + 8) + iVar3 * 8;
        iVar1 = stricmp(*(char **)(*(int *)(ppVar2 + 8) + iVar3 * 8),param_2);
        if (iVar1 == 0) goto LAB_004e04b7;
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(ppVar2 + 4));
    }
    iVar5 = 0;
LAB_004e04b7:
    if (iVar5 != 0) {
      iVar3 = sscanf(*(char **)(iVar5 + 4),s__d,param_3);
      if (iVar3 == 1) {
        return 1;
      }
      *param_3 = 0;
      _Str1 = *(char **)(iVar5 + 4);
      goto LAB_004e05bc;
    }
  }
  this_00 = *(psSHEET **)(this + 0xc);
  if (this_00 == (psSHEET *)0x0) {
    return 0;
  }
  ppVar2 = FindSect(this_00,param_1);
  if ((ppVar2 != (psSECT *)0x0) && (iVar3 = 0, 0 < *(int *)(ppVar2 + 4))) {
    do {
      iVar5 = *(int *)(ppVar2 + 8) + iVar3 * 8;
      iVar1 = stricmp(*(char **)(*(int *)(ppVar2 + 8) + iVar3 * 8),param_2);
      if (iVar1 == 0) goto LAB_004e0583;
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(ppVar2 + 4));
  }
  if (*(psSHEET **)(this_00 + 0xc) == (psSHEET *)0x0) {
    return 0;
  }
  ppVar2 = FindSect(*(psSHEET **)(this_00 + 0xc),param_1);
  if ((ppVar2 != (psSECT *)0x0) && (iVar3 = 0, 0 < *(int *)(ppVar2 + 4))) {
    do {
      iVar5 = *(int *)(ppVar2 + 8) + iVar3 * 8;
      iVar1 = stricmp(*(char **)(*(int *)(ppVar2 + 8) + iVar3 * 8),param_2);
      if (iVar1 == 0) goto LAB_004e0583;
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(ppVar2 + 4));
  }
  iVar5 = 0;
LAB_004e0583:
  if (iVar5 == 0) {
    return 0;
  }
  iVar3 = sscanf(*(char **)(iVar5 + 4),s__d,param_3);
  if (iVar3 == 1) {
    return 1;
  }
  *param_3 = 0;
  _Str1 = *(char **)(iVar5 + 4);
LAB_004e05bc:
  iVar3 = strnicmp(_Str1,s_yes,3);
  if (iVar3 == 0) {
    *param_3 = 1;
  }
  return 1;
}




/* from: engine:pssheet.cpp
   addr: 004E05E0 */

int __thiscall psSHEET::GetFloat(psSHEET *this,char *param_1,char *param_2,float *param_3)

{
  int *piVar1;
  int iVar2;
  psSECT *ppVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  
  iVar6 = 0;
  if (0 < *(int *)this) {
    iVar4 = 0;
    do {
      puVar5 = (undefined4 *)(*(int *)(this + 4) + iVar4);
      iVar2 = stricmp((char *)*puVar5,param_1);
      if (iVar2 == 0) {
        iVar6 = 0;
        if (0 < (int)puVar5[1]) goto LAB_004e061f;
        break;
      }
      iVar6 = iVar6 + 1;
      iVar4 = iVar4 + 0xc;
    } while (iVar6 < *(int *)this);
  }
  goto LAB_004e0642;
  while (iVar6 = iVar6 + 1, iVar6 < (int)puVar5[1]) {
LAB_004e06f5:
    iVar4 = puVar5[2] + iVar6 * 8;
    iVar2 = stricmp(*(char **)(puVar5[2] + iVar6 * 8),param_2);
    if (iVar2 == 0) goto LAB_004e0761;
  }
  goto LAB_004e0718;
  while (iVar6 = iVar6 + 1, iVar6 < (int)puVar5[1]) {
LAB_004e061f:
    iVar4 = puVar5[2] + iVar6 * 8;
    iVar2 = stricmp(*(char **)(puVar5[2] + iVar6 * 8),param_2);
    if (iVar2 == 0) goto LAB_004e0687;
  }
LAB_004e0642:
  if (*(psSHEET **)(this + 0xc) != (psSHEET *)0x0) {
    ppVar3 = FindSect(*(psSHEET **)(this + 0xc),param_1);
    if ((ppVar3 != (psSECT *)0x0) && (iVar6 = 0, 0 < *(int *)(ppVar3 + 4))) {
      do {
        iVar4 = *(int *)(ppVar3 + 8) + iVar6 * 8;
        iVar2 = stricmp(*(char **)(*(int *)(ppVar3 + 8) + iVar6 * 8),param_2);
        if (iVar2 == 0) goto LAB_004e0687;
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(ppVar3 + 4));
    }
    iVar4 = 0;
LAB_004e0687:
    if ((iVar4 != 0) && (iVar6 = sscanf(*(char **)(iVar4 + 4),s__f,param_3), iVar6 == 1)) {
      return 1;
    }
  }
  piVar1 = *(int **)(this + 0xc);
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  iVar6 = 0;
  if (0 < *piVar1) {
    iVar4 = 0;
    do {
      puVar5 = (undefined4 *)(piVar1[1] + iVar4);
      iVar2 = stricmp((char *)*puVar5,param_1);
      if (iVar2 == 0) {
        iVar6 = 0;
        if (0 < (int)puVar5[1]) goto LAB_004e06f5;
        break;
      }
      iVar6 = iVar6 + 1;
      iVar4 = iVar4 + 0xc;
    } while (iVar6 < *piVar1);
  }
LAB_004e0718:
  if ((psSHEET *)piVar1[3] != (psSHEET *)0x0) {
    ppVar3 = FindSect((psSHEET *)piVar1[3],param_1);
    if ((ppVar3 != (psSECT *)0x0) && (iVar6 = 0, 0 < *(int *)(ppVar3 + 4))) {
      do {
        iVar4 = *(int *)(ppVar3 + 8) + iVar6 * 8;
        iVar2 = stricmp(*(char **)(*(int *)(ppVar3 + 8) + iVar6 * 8),param_2);
        if (iVar2 == 0) goto LAB_004e0761;
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(ppVar3 + 4));
    }
    iVar4 = 0;
LAB_004e0761:
    if (iVar4 != 0) {
      iVar6 = sscanf(*(char **)(iVar4 + 4),s__f,param_3);
      return (uint)(iVar6 == 1);
    }
  }
  return 0;
}




/* from: engine:pssheet.cpp
   addr: 004E07A0 */

int __thiscall psSHEET::GetHEX(psSHEET *this,char *param_1,char *param_2,ulong *param_3)

{
  int *piVar1;
  int iVar2;
  psSECT *ppVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  
  iVar6 = 0;
  if (0 < *(int *)this) {
    iVar4 = 0;
    do {
      puVar5 = (undefined4 *)(*(int *)(this + 4) + iVar4);
      iVar2 = stricmp((char *)*puVar5,param_1);
      if (iVar2 == 0) {
        iVar6 = 0;
        if (0 < (int)puVar5[1]) goto LAB_004e07df;
        break;
      }
      iVar6 = iVar6 + 1;
      iVar4 = iVar4 + 0xc;
    } while (iVar6 < *(int *)this);
  }
  goto LAB_004e0802;
  while (iVar6 = iVar6 + 1, iVar6 < (int)puVar5[1]) {
LAB_004e08b5:
    iVar4 = puVar5[2] + iVar6 * 8;
    iVar2 = stricmp(*(char **)(puVar5[2] + iVar6 * 8),param_2);
    if (iVar2 == 0) goto LAB_004e0921;
  }
  goto LAB_004e08d8;
  while (iVar6 = iVar6 + 1, iVar6 < (int)puVar5[1]) {
LAB_004e07df:
    iVar4 = puVar5[2] + iVar6 * 8;
    iVar2 = stricmp(*(char **)(puVar5[2] + iVar6 * 8),param_2);
    if (iVar2 == 0) goto LAB_004e0847;
  }
LAB_004e0802:
  if (*(psSHEET **)(this + 0xc) != (psSHEET *)0x0) {
    ppVar3 = FindSect(*(psSHEET **)(this + 0xc),param_1);
    if ((ppVar3 != (psSECT *)0x0) && (iVar6 = 0, 0 < *(int *)(ppVar3 + 4))) {
      do {
        iVar4 = *(int *)(ppVar3 + 8) + iVar6 * 8;
        iVar2 = stricmp(*(char **)(*(int *)(ppVar3 + 8) + iVar6 * 8),param_2);
        if (iVar2 == 0) goto LAB_004e0847;
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(ppVar3 + 4));
    }
    iVar4 = 0;
LAB_004e0847:
    if ((iVar4 != 0) && (iVar6 = sscanf(*(char **)(iVar4 + 4),s__x,param_3), iVar6 == 1)) {
      return 1;
    }
  }
  piVar1 = *(int **)(this + 0xc);
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  iVar6 = 0;
  if (0 < *piVar1) {
    iVar4 = 0;
    do {
      puVar5 = (undefined4 *)(piVar1[1] + iVar4);
      iVar2 = stricmp((char *)*puVar5,param_1);
      if (iVar2 == 0) {
        iVar6 = 0;
        if (0 < (int)puVar5[1]) goto LAB_004e08b5;
        break;
      }
      iVar6 = iVar6 + 1;
      iVar4 = iVar4 + 0xc;
    } while (iVar6 < *piVar1);
  }
LAB_004e08d8:
  if ((psSHEET *)piVar1[3] != (psSHEET *)0x0) {
    ppVar3 = FindSect((psSHEET *)piVar1[3],param_1);
    if ((ppVar3 != (psSECT *)0x0) && (iVar6 = 0, 0 < *(int *)(ppVar3 + 4))) {
      do {
        iVar4 = *(int *)(ppVar3 + 8) + iVar6 * 8;
        iVar2 = stricmp(*(char **)(*(int *)(ppVar3 + 8) + iVar6 * 8),param_2);
        if (iVar2 == 0) goto LAB_004e0921;
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(ppVar3 + 4));
    }
    iVar4 = 0;
LAB_004e0921:
    if (iVar4 != 0) {
      iVar6 = sscanf(*(char **)(iVar4 + 4),s__x,param_3);
      return (uint)(iVar6 == 1);
    }
  }
  return 0;
}




/* from: engine:pssheet.cpp
   addr: 004E0960 */

int __thiscall psSHEET::GetColor(psSHEET *this,char *param_1,char *param_2,m3dCOLOR *param_3)

{
  int iVar1;
  
  iVar1 = GetColor(this,param_1,param_2,param_3);
  if (iVar1 != 0) {
    return 1;
  }
  if (*(psSHEET **)(this + 0xc) == (psSHEET *)0x0) {
    return 0;
  }
  iVar1 = GetColor(*(psSHEET **)(this + 0xc),param_1,param_2,param_3);
  return iVar1;
}




/* from: engine:pssheet.cpp
   addr: 004E09B0 */

void __thiscall psSHEET::Empty(psSHEET *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  if (0 < *(int *)this) {
    iVar2 = 0;
    do {
      iVar4 = 0;
      iVar1 = *(int *)(this + 4) + iVar2;
      if (0 < *(int *)(iVar1 + 4)) {
        do {
          apFree(*(void **)(*(int *)(iVar1 + 8) + iVar4 * 8));
          apFree(*(void **)(*(int *)(iVar2 + 8 + *(int *)(this + 4)) + 4 + iVar4 * 8));
          iVar1 = *(int *)(this + 4) + iVar2;
          iVar4 = iVar4 + 1;
        } while (iVar4 < *(int *)(iVar1 + 4));
      }
      apFree(*(void **)(iVar2 + 8 + *(int *)(this + 4)));
      apFree(*(void **)(iVar2 + *(int *)(this + 4)));
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0xc;
    } while (iVar3 < *(int *)this);
  }
  apFree(*(void **)(this + 4));
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)this = 0;
  apFree(*(void **)(this + 8));
  *(undefined4 *)(this + 8) = 0;
  return;
}




/* from: engine:pssheet.cpp
   addr: 004E0A50 */

int __thiscall psSHEET::SetString(psSHEET *this,char *param_1)

{
  char *pcVar1;
  
  Empty(this);
  pcVar1 = apStrdup(param_1);
  *(char **)(this + 8) = pcVar1;
  return (uint)(pcVar1 != (char *)0x0);
}




/* WARNING: Function: chkstk replaced with injection: alloca_probe */
/* from: engine:pssheet.cpp
   addr: 004E0A80 */

int __thiscall psSHEET::ParseString(psSHEET *this)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  psVAR *ppVar6;
  char *pcVar7;
  int iVar8;
  uint uVar9;
  char *pcVar10;
  uint uVar11;
  uint uVar12;
  int local_1108;
  undefined4 local_1104;
  char local_1100 [256];
  char local_1000 [4092];
  undefined4 uStack_4;
  
  uStack_4 = 0x4e0a8a;
  pcVar7 = *(char **)(this + 8);
  local_1104 = this;
  if (pcVar7 == (char *)0x0) {
    return (int)pcVar7;
  }
  do {
    if (pcVar7 == (char *)0x0) {
      return 0;
    }
    pcVar3 = strchr(pcVar7,0xd);
    if (pcVar3 == (char *)0x0) {
      iVar8 = -(int)pcVar7;
      do {
        cVar2 = *pcVar7;
        pcVar7[(int)(local_1000 + iVar8)] = cVar2;
        pcVar7 = pcVar7 + 1;
      } while (cVar2 != '\0');
      return 0;
    }
    strncpy(local_1000,pcVar7,(size_t)(pcVar3 + (1 - (int)pcVar7)));
    pcVar3[(int)(local_1000 + -(int)pcVar7)] = '\0';
    _psStripSpaces(local_1000);
    pcVar7 = pcVar3 + 2;
    if (pcVar7 == (char *)0x0) {
      return 0;
    }
    iVar8 = -1;
    pcVar3 = pcVar7;
    do {
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      cVar2 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar2 != '\0');
  } while (iVar8 == -2);
  local_1108 = 0;
LAB_004e0b0f:
  do {
    if (pcVar7 == (char *)0x0) {
      if (((byte)mode & 1) != 0) {
        apFree(*(void **)(this + 8));
        *(undefined4 *)(this + 8) = 0;
      }
      return local_1108;
    }
    if (local_1000[0] != '[') {
      return -1;
    }
    pcVar3 = strtok(local_1000 + 1,s__);
    if (pcVar3 == (char *)0x0) {
      return -2;
    }
    iVar8 = -(int)pcVar3;
    do {
      cVar2 = *pcVar3;
      pcVar3[(int)(local_1100 + iVar8)] = cVar2;
      pcVar3 = pcVar3 + 1;
    } while (cVar2 != '\0');
    iVar8 = 0;
    pcVar3 = local_1100;
    cVar2 = local_1100[0];
    while ((cVar2 != '\0' && ((cVar2 == ' ' || (cVar2 == '\t'))))) {
      pcVar10 = pcVar3 + 1;
      pcVar3 = pcVar3 + 1;
      iVar8 = iVar8 + 1;
      cVar2 = *pcVar10;
    }
    uVar9 = 0xffffffff;
    pcVar3 = local_1100;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar2 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar2 != '\0');
    uVar9 = ~uVar9;
    pcVar3 = local_1100 + (uVar9 - 2);
    while( true ) {
      uVar9 = uVar9 - 1;
      if ((*pcVar3 != ' ') && ((*pcVar3 != '\t' || (pcVar3 < local_1100)))) break;
      pcVar3 = pcVar3 + -1;
    }
    iVar4 = 0;
    iVar5 = iVar4;
    if (0 < (int)uVar9) {
      do {
        iVar4 = iVar5 + 1;
        local_1100[iVar5] = local_1100[iVar5 + iVar8];
        iVar5 = iVar4;
        this = local_1104;
      } while (iVar4 < (int)uVar9);
    }
    local_1100[iVar4] = '\0';
LAB_004e0bda:
    if (pcVar7 != (char *)0x0) {
      pcVar3 = strchr(pcVar7,0xd);
      if (pcVar3 == (char *)0x0) {
        pcVar3 = pcVar7;
        do {
          cVar2 = *pcVar3;
          pcVar3[(int)(local_1000 + -(int)pcVar7)] = cVar2;
          pcVar3 = pcVar3 + 1;
        } while (cVar2 != '\0');
        pcVar3 = (char *)0x0;
      }
      else {
        strncpy(local_1000,pcVar7,(size_t)(pcVar3 + (1 - (int)pcVar7)));
        pcVar3[(int)(local_1000 + -(int)pcVar7)] = '\0';
        _psStripSpaces(local_1000);
        pcVar3 = pcVar3 + 2;
      }
      if (local_1000[0] != '[') {
        iVar8 = -1;
        pcVar7 = local_1000;
        do {
          if (iVar8 == 0) break;
          iVar8 = iVar8 + -1;
          cVar2 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar2 != '\0');
        pcVar7 = pcVar3;
        if (iVar8 != -2) {
          pcVar3 = strchr(local_1000,0x3d);
          if (pcVar3 != (char *)0x0) {
            *pcVar3 = '\0';
            ppVar6 = AddVar(this,local_1100,local_1000);
            if (ppVar6 != (psVAR *)0x0) {
              if (*(int *)(ppVar6 + 4) != 0) goto LAB_004e0bda;
              pcVar3 = apStrdup(pcVar3 + 1);
              *(char **)(ppVar6 + 4) = pcVar3;
              if (pcVar3 != (char *)0x0) {
                iVar8 = 0;
                cVar2 = *pcVar3;
                pcVar10 = pcVar3;
                while ((cVar2 != '\0' && ((cVar2 == ' ' || (cVar2 == '\t'))))) {
                  pcVar1 = pcVar10 + 1;
                  pcVar10 = pcVar10 + 1;
                  iVar8 = iVar8 + 1;
                  cVar2 = *pcVar1;
                }
                uVar9 = 0xffffffff;
                pcVar10 = pcVar3;
                do {
                  if (uVar9 == 0) break;
                  uVar9 = uVar9 - 1;
                  cVar2 = *pcVar10;
                  pcVar10 = pcVar10 + 1;
                } while (cVar2 != '\0');
                uVar9 = ~uVar9;
                pcVar10 = pcVar3 + (uVar9 - 2);
                while( true ) {
                  uVar9 = uVar9 - 1;
                  if ((*pcVar10 != ' ') && ((*pcVar10 != '\t' || (pcVar10 < pcVar3)))) break;
                  pcVar10 = pcVar10 + -1;
                }
                pcVar10 = pcVar3;
                uVar11 = uVar9;
                uVar12 = 0;
                if (0 < (int)uVar9) {
                  do {
                    *pcVar10 = pcVar10[iVar8];
                    uVar11 = uVar11 - 1;
                    pcVar10 = pcVar10 + 1;
                    uVar12 = uVar9;
                  } while (uVar11 != 0);
                }
                pcVar3[uVar12] = '\0';
                this = local_1104;
                goto LAB_004e0bda;
              }
            }
            return -3;
          }
          local_1108 = -5;
        }
        goto LAB_004e0bda;
      }
      pcVar3 = strchr(pcVar7,0xd);
      if (pcVar3 != (char *)0x0) {
        strncpy(local_1000,pcVar7,(size_t)(pcVar3 + (1 - (int)pcVar7)));
        pcVar3[(int)(local_1000 + -(int)pcVar7)] = '\0';
        _psStripSpaces(local_1000);
        pcVar7 = pcVar3 + 2;
        goto LAB_004e0b0f;
      }
      iVar8 = -(int)pcVar7;
      do {
        cVar2 = *pcVar7;
        pcVar7[(int)(local_1000 + iVar8)] = cVar2;
        pcVar7 = pcVar7 + 1;
      } while (cVar2 != '\0');
    }
    pcVar7 = (char *)0x0;
  } while( true );
}




/* from: engine:pssheet.cpp
   addr: 004E0DF0 */

int __thiscall psSHEET::CompileString(psSHEET *this)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  char *local_10;
  int local_8;
  int local_4;
  
  uVar7 = 0;
  local_8 = *(int *)this;
  if (0 < local_8) {
    puVar4 = *(undefined4 **)(this + 4);
    do {
      uVar2 = 0xffffffff;
      iVar8 = puVar4[1];
      pcVar10 = (char *)*puVar4;
      do {
        if (uVar2 == 0) break;
        uVar2 = uVar2 - 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar1 != '\0');
      uVar7 = uVar7 + ~uVar2 + 4;
      if (0 < iVar8) {
        puVar5 = (undefined4 *)puVar4[2];
        do {
          uVar2 = 0xffffffff;
          pcVar10 = (char *)puVar5[1];
          do {
            if (uVar2 == 0) break;
            uVar2 = uVar2 - 1;
            cVar1 = *pcVar10;
            pcVar10 = pcVar10 + 1;
          } while (cVar1 != '\0');
          uVar3 = 0xffffffff;
          pcVar10 = (char *)*puVar5;
          do {
            if (uVar3 == 0) break;
            uVar3 = uVar3 - 1;
            cVar1 = *pcVar10;
            pcVar10 = pcVar10 + 1;
          } while (cVar1 != '\0');
          iVar8 = iVar8 + -1;
          uVar7 = ~uVar3 + uVar7 + ~uVar2 + 3;
          puVar5 = puVar5 + 2;
        } while (iVar8 != 0);
      }
      puVar4 = puVar4 + 3;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  local_10 = (char *)apRealloc(*(void **)(this + 8),uVar7);
  *(char **)(this + 8) = local_10;
  if (local_10 == (char *)0x0) {
    return 0;
  }
  local_8 = 0;
  if (0 < *(int *)this) {
    iVar8 = *(int *)(this + 4);
    local_4 = 0;
    do {
      sprintf(local_10,s___s___,*(undefined4 *)(iVar8 + local_4));
      uVar7 = 0xffffffff;
      iVar8 = *(int *)(this + 4);
      pcVar10 = *(char **)(iVar8 + local_4);
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar1 != '\0');
      local_10 = local_10 + ~uVar7 + 3;
      iVar9 = 0;
      if (0 < *(int *)(iVar8 + 4 + local_4)) {
        iVar6 = *(int *)(iVar8 + 8 + local_4);
        do {
          sprintf(local_10,s__s____s__,*(undefined4 *)(iVar6 + iVar9 * 8),
                  *(undefined4 *)(iVar6 + 4 + iVar9 * 8));
          iVar8 = *(int *)(this + 4);
          uVar7 = 0xffffffff;
          iVar6 = *(int *)(iVar8 + 8 + local_4);
          pcVar10 = *(char **)(iVar6 + 4 + iVar9 * 8);
          do {
            if (uVar7 == 0) break;
            uVar7 = uVar7 - 1;
            cVar1 = *pcVar10;
            pcVar10 = pcVar10 + 1;
          } while (cVar1 != '\0');
          uVar2 = 0xffffffff;
          pcVar10 = *(char **)(iVar6 + iVar9 * 8);
          do {
            if (uVar2 == 0) break;
            uVar2 = uVar2 - 1;
            cVar1 = *pcVar10;
            pcVar10 = pcVar10 + 1;
          } while (cVar1 != '\0');
          iVar9 = iVar9 + 1;
          local_10 = local_10 + ~uVar7 + 3 + ~uVar2;
        } while (iVar9 < *(int *)(iVar8 + 4 + local_4));
      }
      local_8 = local_8 + 1;
      local_4 = local_4 + 0xc;
    } while (local_8 < *(int *)this);
  }
  *local_10 = '\0';
  return 1;
}




/* from: engine:pssheet.cpp
   addr: 004E0F90 */

psSECT * __thiscall psSHEET::FindSect(psSHEET *this,char *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  if (0 < *(int *)this) {
    iVar4 = 0;
    do {
      iVar1 = *(int *)(this + 4);
      iVar3 = stricmp(*(char **)(iVar1 + iVar4),param_1);
      if (iVar3 == 0) {
        return (psSECT *)(iVar1 + iVar4);
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 0xc;
    } while (iVar5 < *(int *)this);
  }
  piVar2 = *(int **)(this + 0xc);
  if ((piVar2 != (int *)0x0) && (iVar5 = 0, 0 < *piVar2)) {
    iVar4 = 0;
    do {
      iVar1 = piVar2[1];
      iVar3 = stricmp(*(char **)(iVar1 + iVar4),param_1);
      if (iVar3 == 0) {
        return (psSECT *)(iVar1 + iVar4);
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 0xc;
    } while (iVar5 < *piVar2);
  }
  return (psSECT *)0x0;
}




/* from: engine:pssheet.cpp
   addr: 004E1010 */

psVAR * __thiscall psSHEET::FindVarStr(psSHEET *this,char *param_1,char *param_2)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  
  iVar5 = 0;
  if (0 < *(int *)this) {
    iVar4 = 0;
    do {
      puVar6 = (undefined4 *)(*(int *)(this + 4) + iVar4);
      iVar2 = stricmp((char *)*puVar6,param_1);
      if (iVar2 == 0) {
        iVar5 = 0;
        if (0 < (int)puVar6[1]) {
          do {
            iVar4 = puVar6[2];
            pcVar3 = strstr(*(char **)(iVar4 + iVar5 * 8),param_2);
            if (pcVar3 != (char *)0x0) {
              return (psVAR *)(iVar4 + iVar5 * 8);
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < (int)puVar6[1]);
        }
        break;
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 0xc;
    } while (iVar5 < *(int *)this);
  }
  piVar1 = *(int **)(this + 0xc);
  if ((piVar1 != (int *)0x0) && (iVar5 = 0, 0 < *piVar1)) {
    iVar4 = 0;
    while( true ) {
      puVar6 = (undefined4 *)(piVar1[1] + iVar4);
      iVar2 = stricmp((char *)*puVar6,param_1);
      if (iVar2 == 0) break;
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 0xc;
      if (*piVar1 <= iVar5) {
        return (psVAR *)0x0;
      }
    }
    iVar5 = 0;
    if (0 < (int)puVar6[1]) {
      do {
        iVar4 = puVar6[2];
        pcVar3 = strstr(*(char **)(iVar4 + iVar5 * 8),param_2);
        if (pcVar3 != (char *)0x0) {
          return (psVAR *)(iVar4 + iVar5 * 8);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)puVar6[1]);
    }
  }
  return (psVAR *)0x0;
}




/* from: engine:pssheet.cpp
   addr: 004E1100 */

psVAR * __thiscall psSHEET::AddVar(psSHEET *this,char *param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  char *pcVar5;
  psSECT *ppVar6;
  uint uVar7;
  psVAR *ppVar8;
  int iVar9;
  char *pcVar10;
  undefined4 *puVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  undefined4 *local_4;
  
  iVar13 = 0;
  if (0 < *(int *)this) {
    iVar9 = 0;
    do {
      local_4 = (undefined4 *)(*(int *)(this + 4) + iVar9);
      iVar3 = stricmp((char *)*local_4,param_1);
      if (iVar3 == 0) goto LAB_004e1204;
      iVar13 = iVar13 + 1;
      iVar9 = iVar9 + 0xc;
    } while (iVar13 < *(int *)this);
  }
  pvVar4 = apRealloc(*(void **)(this + 4),(*(int *)this + 1) * 0xc);
  *(void **)(this + 4) = pvVar4;
  if (pvVar4 == (void *)0x0) {
    return (psVAR *)0x0;
  }
  iVar13 = *(int *)this;
  *(int *)this = iVar13 + 1;
  local_4 = (undefined4 *)((int)pvVar4 + iVar13 * 0xc);
  *local_4 = 0;
  local_4[1] = 0;
  local_4[2] = 0;
  pcVar5 = apStrdup(param_1);
  *local_4 = pcVar5;
  if (pcVar5 == (char *)0x0) {
    return (psVAR *)0x0;
  }
  iVar13 = 0;
  cVar2 = *pcVar5;
  pcVar10 = pcVar5;
  while ((cVar2 != '\0' && ((cVar2 == ' ' || (cVar2 == '\t'))))) {
    pcVar1 = pcVar10 + 1;
    pcVar10 = pcVar10 + 1;
    iVar13 = iVar13 + 1;
    cVar2 = *pcVar1;
  }
  uVar7 = 0xffffffff;
  pcVar10 = pcVar5;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar2 != '\0');
  uVar7 = ~uVar7;
  pcVar10 = pcVar5 + (uVar7 - 2);
  while( true ) {
    uVar7 = uVar7 - 1;
    if ((*pcVar10 != ' ') && ((*pcVar10 != '\t' || (pcVar10 < pcVar5)))) break;
    pcVar10 = pcVar10 + -1;
  }
  uVar12 = 0;
  pcVar10 = pcVar5;
  uVar14 = uVar7;
  if (0 < (int)uVar7) {
    do {
      uVar14 = uVar14 - 1;
      *pcVar10 = pcVar10[iVar13];
      uVar12 = uVar7;
      pcVar10 = pcVar10 + 1;
    } while (uVar14 != 0);
  }
  pcVar5[uVar12] = '\0';
LAB_004e1204:
  iVar13 = 0;
  if (0 < *(int *)this) {
    iVar9 = 0;
    do {
      puVar11 = (undefined4 *)(*(int *)(this + 4) + iVar9);
      iVar3 = stricmp((char *)*puVar11,param_1);
      if (iVar3 == 0) {
        iVar13 = 0;
        if (0 < (int)puVar11[1]) goto LAB_004e12bd;
        break;
      }
      iVar13 = iVar13 + 1;
      iVar9 = iVar9 + 0xc;
    } while (iVar13 < *(int *)this);
  }
  goto LAB_004e1235;
  while (iVar13 = iVar13 + 1, iVar13 < (int)puVar11[1]) {
LAB_004e12bd:
    ppVar8 = (psVAR *)(puVar11[2] + iVar13 * 8);
    iVar9 = stricmp(*(char **)(puVar11[2] + iVar13 * 8),param_2);
    if (iVar9 == 0) goto LAB_004e127c;
  }
LAB_004e1235:
  if (*(psSHEET **)(this + 0xc) != (psSHEET *)0x0) {
    ppVar6 = FindSect(*(psSHEET **)(this + 0xc),param_1);
    if ((ppVar6 != (psSECT *)0x0) && (iVar13 = 0, 0 < *(int *)(ppVar6 + 4))) {
      do {
        ppVar8 = (psVAR *)(*(int *)(ppVar6 + 8) + iVar13 * 8);
        iVar9 = stricmp(*(char **)(*(int *)(ppVar6 + 8) + iVar13 * 8),param_2);
        if (iVar9 == 0) goto LAB_004e127c;
        iVar13 = iVar13 + 1;
      } while (iVar13 < *(int *)(ppVar6 + 4));
    }
    ppVar8 = (psVAR *)0x0;
LAB_004e127c:
    if (ppVar8 != (psVAR *)0x0) {
      return ppVar8;
    }
  }
  pvVar4 = apRealloc((void *)local_4[2],local_4[1] * 8 + 8);
  local_4[2] = pvVar4;
  if (pvVar4 == (void *)0x0) {
    return (psVAR *)0x0;
  }
  ppVar8 = (psVAR *)((int)pvVar4 + local_4[1] * 8);
  local_4[1] = local_4[1] + 1;
  *(undefined4 *)ppVar8 = 0;
  *(undefined4 *)(ppVar8 + 4) = 0;
  pcVar5 = apStrdup(param_2);
  *(char **)ppVar8 = pcVar5;
  if (pcVar5 == (char *)0x0) {
    return (psVAR *)0x0;
  }
  iVar13 = 0;
  cVar2 = *pcVar5;
  while ((cVar2 != '\0' && ((cVar2 == ' ' || (cVar2 == '\t'))))) {
    iVar9 = iVar13 + 1;
    iVar13 = iVar13 + 1;
    cVar2 = pcVar5[iVar9];
  }
  uVar7 = 0xffffffff;
  pcVar10 = pcVar5;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar2 != '\0');
  uVar7 = ~uVar7;
  pcVar10 = pcVar5 + (uVar7 - 2);
  while( true ) {
    uVar7 = uVar7 - 1;
    if ((*pcVar10 != ' ') && ((*pcVar10 != '\t' || (pcVar10 < pcVar5)))) break;
    pcVar10 = pcVar10 + -1;
  }
  pcVar10 = pcVar5;
  uVar12 = uVar7;
  uVar14 = 0;
  if (0 < (int)uVar7) {
    do {
      *pcVar10 = pcVar10[iVar13];
      uVar12 = uVar12 - 1;
      pcVar10 = pcVar10 + 1;
      uVar14 = uVar7;
    } while (uVar12 != 0);
  }
  pcVar5[uVar14] = '\0';
  return ppVar8;
}




/* from: engine:pssheet.cpp
   addr: 004E1380 */

psSECT * __thiscall psSHEET::FindSect(psSHEET *this,char *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < *(int *)this) {
    iVar3 = 0;
    do {
      iVar1 = *(int *)(this + 4);
      iVar2 = stricmp(*(char **)(iVar1 + iVar3),param_1);
      if (iVar2 == 0) {
        return (psSECT *)(iVar1 + iVar3);
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0xc;
    } while (iVar4 < *(int *)this);
  }
  return (psSECT *)0x0;
}




/* from: engine:pssheet.cpp
   addr: 004E13D0 */

psVAR * __thiscall psSHEET::FindVar(psSHEET *this,char *param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar3 = 0;
  if (0 < *(int *)this) {
    iVar2 = 0;
    do {
      puVar4 = (undefined4 *)(*(int *)(this + 4) + iVar2);
      iVar1 = stricmp((char *)*puVar4,param_1);
      if (iVar1 == 0) {
        iVar3 = 0;
        if ((int)puVar4[1] < 1) {
          return (psVAR *)0x0;
        }
        do {
          iVar2 = puVar4[2];
          iVar1 = stricmp(*(char **)(iVar2 + iVar3 * 8),param_2);
          if (iVar1 == 0) {
            return (psVAR *)(iVar2 + iVar3 * 8);
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < (int)puVar4[1]);
        return (psVAR *)0x0;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0xc;
    } while (iVar3 < *(int *)this);
  }
  return (psVAR *)0x0;
}




/* from: engine:pssheet.cpp
   addr: 004E1450 */

int __thiscall psSHEET::GetStr(psSHEET *this,char *param_1,char *param_2,char *param_3,int param_4)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  psVAR *ppVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  char *pcVar9;
  
  iVar7 = 0;
  if (0 < *(int *)this) {
    iVar6 = 0;
    do {
      puVar8 = (undefined4 *)(*(int *)(this + 4) + iVar6);
      iVar3 = stricmp((char *)*puVar8,param_1);
      if (iVar3 == 0) {
        iVar7 = 0;
        if (0 < (int)puVar8[1]) goto LAB_004e14b0;
        break;
      }
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + 0xc;
    } while (iVar7 < *(int *)this);
  }
  goto LAB_004e1482;
  while (iVar7 = iVar7 + 1, iVar7 < (int)puVar8[1]) {
LAB_004e14b0:
    ppVar4 = (psVAR *)(puVar8[2] + iVar7 * 8);
    iVar6 = stricmp(*(char **)(puVar8[2] + iVar7 * 8),param_2);
    if (iVar6 == 0) goto LAB_004e149a;
  }
LAB_004e1482:
  if (*(psSHEET **)(this + 0xc) != (psSHEET *)0x0) {
    ppVar4 = FindVar(*(psSHEET **)(this + 0xc),param_1,param_2);
LAB_004e149a:
    if (ppVar4 != (psVAR *)0x0) {
      pcVar2 = *(char **)(ppVar4 + 4);
      uVar5 = 0xffffffff;
      pcVar9 = pcVar2;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      iVar7 = uVar5 - 1;
      if (pcVar2[uVar5 - 2] == '\"') {
        iVar7 = uVar5 - 2;
      }
      iVar7 = iVar7 - (uint)(*pcVar2 == '\"');
      iVar6 = param_4;
      if (iVar7 <= param_4) {
        iVar6 = iVar7;
      }
      strncpy(param_3,pcVar2 + (*pcVar2 == '\"'),iVar6 + 1);
      if (param_4 < iVar7) {
        iVar7 = param_4;
      }
      param_3[iVar7] = '\0';
      return 1;
    }
  }
  return 0;
}




/* from: engine:pssheet.cpp
   addr: 004E1540 */

int __thiscall psSHEET::GetColor(psSHEET *this,char *param_1,char *param_2,m3dCOLOR *param_3)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar5 = 0;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  if (0 < *(int *)this) {
    iVar4 = 0;
    do {
      puVar6 = (undefined4 *)(*(int *)(this + 4) + iVar4);
      iVar2 = stricmp((char *)*puVar6,param_1);
      if (iVar2 == 0) {
        iVar5 = 0;
        if (0 < (int)puVar6[1]) goto LAB_004e15a1;
        break;
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 0xc;
    } while (iVar5 < *(int *)this);
  }
  goto LAB_004e15c4;
  while (iVar5 = iVar5 + 1, iVar5 < (int)puVar6[1]) {
LAB_004e1603:
    iVar4 = puVar6[2] + iVar5 * 8;
    iVar2 = stricmp(*(char **)(puVar6[2] + iVar5 * 8),param_2);
    if (iVar2 == 0) goto LAB_004e162a;
  }
  goto LAB_004e1626;
  while (iVar5 = iVar5 + 1, iVar5 < (int)puVar6[1]) {
LAB_004e15a1:
    iVar4 = puVar6[2] + iVar5 * 8;
    iVar2 = stricmp(*(char **)(puVar6[2] + iVar5 * 8),param_2);
    if (iVar2 == 0) goto LAB_004e162a;
  }
LAB_004e15c4:
  piVar1 = *(int **)(this + 0xc);
  if (piVar1 != (int *)0x0) {
    iVar5 = 0;
    if (0 < *piVar1) {
      iVar4 = 0;
      do {
        puVar6 = (undefined4 *)(piVar1[1] + iVar4);
        iVar2 = stricmp((char *)*puVar6,param_1);
        if (iVar2 == 0) {
          iVar5 = 0;
          if (0 < (int)puVar6[1]) goto LAB_004e1603;
          break;
        }
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + 0xc;
      } while (iVar5 < *piVar1);
    }
LAB_004e1626:
    iVar4 = 0;
LAB_004e162a:
    if (iVar4 != 0) {
      iVar5 = sscanf(*(char **)(iVar4 + 4),s__f,&local_4);
      if (iVar5 != 1) {
        return 0;
      }
      pcVar3 = strchr(*(char **)(iVar4 + 4),0x2c);
      if (pcVar3 == (char *)0x0) {
        return 0;
      }
      iVar5 = sscanf(pcVar3 + 1,s__f,&local_10);
      if (iVar5 != 1) {
        return 0;
      }
      pcVar3 = strchr(pcVar3 + 1,0x2c);
      if (pcVar3 != (char *)0x0) {
        iVar5 = sscanf(pcVar3 + 1,s__f,&local_c);
        if (iVar5 != 1) {
          return 0;
        }
        pcVar3 = strchr(pcVar3 + 1,0x2c);
        if (pcVar3 != (char *)0x0) {
          iVar5 = sscanf(pcVar3 + 1,s__f,&local_8);
          if (iVar5 == 1) {
            *(undefined4 *)param_3 = local_10;
            *(undefined4 *)(param_3 + 4) = local_c;
            *(undefined4 *)(param_3 + 8) = local_8;
            *(undefined4 *)(param_3 + 0xc) = local_4;
            return 1;
          }
          return 0;
        }
        *(undefined4 *)param_3 = local_4;
        *(undefined4 *)(param_3 + 0xc) = 0x437f0000;
        *(undefined4 *)(param_3 + 4) = local_10;
        *(undefined4 *)(param_3 + 8) = local_c;
        return 1;
      }
      return 0;
    }
  }
  return 0;
}




/* from: engine:pssheet.cpp
   addr: 004E1780 */

int __thiscall psSHEET::SetStr(psSHEET *this,char *param_1,char *param_2,char *param_3)

{
  char cVar1;
  psVAR *ppVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  
  ppVar2 = AddVar(this,param_1,param_2);
  iVar3 = 0;
  if (ppVar2 != (psVAR *)0x0) {
    uVar5 = 0xffffffff;
    pcVar4 = param_3;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    pcVar4 = (char *)apRealloc(*(void **)(ppVar2 + 4),~uVar5 + 2);
    *(char **)(ppVar2 + 4) = pcVar4;
    if (pcVar4 == (char *)0x0) {
      return 0;
    }
    sprintf(pcVar4,s___s_,param_3);
    iVar3 = 1;
  }
  return iVar3;
}




/* from: engine:pssheet.cpp
   addr: 004E17E0 */

int __thiscall psSHEET::Save(psSHEET *this,char *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  undefined **local_124;
  undefined4 local_120;
  undefined1 local_11c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_120 = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  local_11c = 0;
  local_4 = 0;
  local_124 = &fioFILE_DISK::_vftable_;
  iVar2 = CompileString(this);
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = fioFILE_DISK::Init((fioFILE_DISK *)&local_124,param_1,2);
  if (iVar2 == 0) {
    return 0;
  }
  uVar3 = 0xffffffff;
  pcVar4 = *(char **)(this + 8);
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  (*(code *)local_124[6])(*(char **)(this + 8),~uVar3 - 1);
  iVar2 = fioFILE_DISK::Term((fioFILE_DISK *)&stack0xfffffed0);
  return iVar2;
}




/* from: engine:pssheet.cpp
   addr: 004E1890 */

int __thiscall psSHEET::Load(psSHEET *this,char *param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  undefined **local_124;
  undefined4 local_120;
  undefined1 local_11c;
  int iStack_20;
  undefined4 local_18;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_120 = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  local_11c = 0;
  local_4 = 0;
  local_124 = &fioFILE_DISK::_vftable_;
  iVar1 = fioFILE_DISK::Init((fioFILE_DISK *)&local_124,param_1,1);
  if (iVar1 == 0) {
    return 0;
  }
  pcVar2 = (char *)apMalloc(local_14 + 1);
  if (pcVar2 == (char *)0x0) {
    return 0;
  }
  (*(code *)local_124[5])(pcVar2,local_14,1);
  pcVar2[iStack_20] = '\0';
  Empty(this);
  pcVar3 = apStrdup(pcVar2);
  *(char **)(this + 8) = pcVar3;
  if (pcVar3 == (char *)0x0) {
    return 0;
  }
  apFree(pcVar2);
  iVar1 = ParseString(this);
  if (iVar1 != 0) {
    return 0;
  }
  iVar1 = fioFILE_DISK::Term((fioFILE_DISK *)&stack0xfffffed0);
  return iVar1;
}




/* from: engine:pssheet.cpp
   addr: 004E19A0 */

void __fastcall _psStripSpaces(char *param_1)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  iVar5 = 0;
  cVar2 = *param_1;
  pcVar3 = param_1;
  while ((cVar2 != '\0' && ((cVar2 == ' ' || (cVar2 == '\t'))))) {
    pcVar1 = pcVar3 + 1;
    pcVar3 = pcVar3 + 1;
    iVar5 = iVar5 + 1;
    cVar2 = *pcVar1;
  }
  uVar4 = 0xffffffff;
  pcVar3 = param_1;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar2 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar2 != '\0');
  uVar4 = ~uVar4;
  pcVar3 = param_1 + (uVar4 - 2);
  while( true ) {
    uVar4 = uVar4 - 1;
    if ((*pcVar3 != ' ') && ((*pcVar3 != '\t' || (pcVar3 < param_1)))) break;
    pcVar3 = pcVar3 + -1;
  }
  pcVar3 = param_1;
  uVar6 = uVar4;
  if (0 < (int)uVar4) {
    do {
      *pcVar3 = pcVar3[iVar5];
      uVar6 = uVar6 - 1;
      pcVar3 = pcVar3 + 1;
    } while (uVar6 != 0);
    param_1[uVar4] = '\0';
    return;
  }
  *param_1 = '\0';
  return;
}

