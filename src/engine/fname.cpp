
/* from: engine:fname.cpp
   addr: 004EC5D0 */

void __thiscall fnmDIR::~fnmDIR(fnmDIR *this)

{
  fnmDIR *pfVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(this + 0x104)) {
    do {
      apFree(*(void **)(*(int *)(this + 0x108) + iVar2 * 4));
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(this + 0x104));
  }
  apFree(*(void **)(this + 0x108));
  pfVar1 = *(fnmDIR **)(this + 0x110);
  *(undefined4 *)(this + 0x104) = 0;
  *(undefined4 *)(this + 0x108) = 0;
  if (pfVar1 != (fnmDIR *)0x0) {
    ~fnmDIR(pfVar1);
    operator_delete(pfVar1);
  }
  pfVar1 = *(fnmDIR **)(this + 0x10c);
  *(undefined4 *)(this + 0x110) = 0;
  if (pfVar1 != (fnmDIR *)0x0) {
    ~fnmDIR(pfVar1);
    operator_delete(pfVar1);
  }
  *(undefined4 *)(this + 0x10c) = 0;
  return;
}




/* from: engine:fname.cpp
   addr: 004EC660 */

int __fastcall fnmInit(void)

{
  DWORD DVar1;
  char *pcVar2;
  char *pcVar3;
  
  DAT_005f6940 = '\\';
  if (DAT_00940bb8 == (char *)0x0) {
    DVar1 = GetModuleFileNameA(apHInstance,(LPSTR)&DAT_009409b8,0x200);
    if (DVar1 == 0) {
      pcVar2 = strrchr(__pgmptr,(int)DAT_005f6940);
      pcVar3 = __pgmptr;
      if (pcVar2 == (char *)0x0) {
        pcVar3 = s_;
      }
    }
    else {
      pcVar3 = (char *)&DAT_009409b8;
    }
    DAT_00940bb8 = apStrdup(pcVar3);
    pcVar3 = strrchr(DAT_00940bb8,(int)DAT_005f6940);
    if (pcVar3 != (char *)0x0) {
      pcVar3[1] = '\0';
    }
  }
  return 1;
}




/* from: engine:fname.cpp
   addr: 004EC6F0 */

void __fastcall fnmTerm(void)

{
  fnmDIR *pfVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < DAT_009409a4) {
    do {
      apFree(*(void **)((int)DAT_009409a8 + iVar2 * 4));
      iVar2 = iVar2 + 1;
    } while (iVar2 < DAT_009409a4);
  }
  apFree(DAT_009409a8);
  pfVar1 = DAT_009409b0;
  DAT_009409a4 = 0;
  DAT_009409a8 = (void *)0x0;
  if (DAT_009409b0 != (fnmDIR *)0x0) {
    fnmDIR::Term(DAT_009409b0);
    operator_delete(pfVar1);
  }
  pfVar1 = DAT_009409ac;
  DAT_009409b0 = (fnmDIR *)0x0;
  if (DAT_009409ac != (fnmDIR *)0x0) {
    fnmDIR::Term(DAT_009409ac);
    operator_delete(pfVar1);
  }
  DAT_009409ac = (fnmDIR *)0x0;
  apFree(DAT_00940bb8);
  return;
}




/* from: engine:fname.cpp
   addr: 004EC790 */

char * __fastcall fnmAddExt(char *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  
  iVar6 = (int)&DAT_009409b8 - (int)param_1;
  do {
    cVar1 = *param_1;
    param_1[iVar6] = cVar1;
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  pcVar2 = strrchr((char *)&DAT_009409b8,(int)DAT_005f6940);
  pcVar3 = strrchr((char *)&DAT_009409b8,0x2e);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = (char *)&DAT_009409b8;
  }
  if ((pcVar3 != (char *)0x0) && (pcVar2 <= pcVar3)) {
    if (param_2 == (char *)0x0) {
      *pcVar3 = '\0';
      return (char *)&DAT_009409b8;
    }
    if (*param_2 == '.') {
      param_2 = param_2 + 1;
    }
    iVar6 = 1 - (int)param_2;
    do {
      cVar1 = *param_2;
      param_2[(int)(pcVar3 + iVar6)] = cVar1;
      param_2 = param_2 + 1;
    } while (cVar1 != '\0');
    return (char *)&DAT_009409b8;
  }
  if (param_2 != (char *)0x0) {
    if (*param_2 != '.') {
      iVar6 = -1;
      pcVar2 = (char *)&DAT_009409b8;
      do {
        pcVar3 = pcVar2;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar3 = pcVar2 + 1;
        cVar1 = *pcVar2;
        pcVar2 = pcVar3;
      } while (cVar1 != '\0');
      *(char (*) [2])(pcVar3 + -1) = s__;
    }
    uVar4 = 0xffffffff;
    do {
      pcVar2 = param_2;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar2 = param_2 + 1;
      cVar1 = *param_2;
      param_2 = pcVar2;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    iVar6 = -1;
    pcVar3 = (char *)&DAT_009409b8;
    do {
      pcVar7 = pcVar3;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar7 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar7;
    } while (cVar1 != '\0');
    pcVar2 = pcVar2 + -uVar4;
    pcVar3 = pcVar7 + -1;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar3 = pcVar3 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar3 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar3 = pcVar3 + 1;
    }
  }
  return (char *)&DAT_009409b8;
}




/* from: engine:fname.cpp
   addr: 004EC860 */

char * __fastcall fnmMakeFullName(char *param_1,char *param_2,char *param_3,int param_4)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  
  if (param_1 == (char *)0x0) {
    pcVar2 = param_2;
    do {
      cVar1 = *pcVar2;
      pcVar2[(int)&DAT_009409b8 - (int)param_2] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
  }
  else {
    iVar5 = (int)&DAT_009409b8 - (int)param_1;
    do {
      cVar1 = *param_1;
      param_1[iVar5] = cVar1;
      param_1 = param_1 + 1;
    } while (cVar1 != '\0');
    uVar3 = 0xffffffff;
    pcVar2 = (char *)&DAT_009409b8;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    if ((0 < (int)(uVar3 - 1)) && ((&DAT_009409b6)[uVar3] != DAT_005f6940)) {
      (&DAT_009409b7)[uVar3] = DAT_005f6940;
      *(undefined1 *)((int)&DAT_009409b8 + uVar3) = 0;
    }
    uVar3 = 0xffffffff;
    pcVar2 = param_2;
    do {
      pcVar7 = pcVar2;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar7 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar7;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    iVar5 = -1;
    pcVar2 = (char *)&DAT_009409b8;
    do {
      pcVar6 = pcVar2;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar6 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar6;
    } while (cVar1 != '\0');
    pcVar2 = pcVar7 + -uVar3;
    pcVar7 = pcVar6 + -1;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar7 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar7 = pcVar7 + 1;
    }
  }
  if (*param_3 == '.') {
    param_3 = param_3 + 1;
  }
  if (param_4 != 0) {
    if (param_3 == (char *)0x0) {
      pcVar2 = fnmAddExt((char *)&DAT_009409b8,(char *)0x0);
      return pcVar2;
    }
    pcVar2 = strrchr(param_2,0x2e);
    if (pcVar2 != (char *)0x0) {
      pcVar2 = strrchr((char *)&DAT_009409b8,0x2e);
      *pcVar2 = '\0';
    }
  }
  iVar5 = -1;
  pcVar2 = (char *)&DAT_009409b8;
  do {
    pcVar7 = pcVar2;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar7 = pcVar2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar7;
  } while (cVar1 != '\0');
  uVar3 = 0xffffffff;
  *(char (*) [2])(pcVar7 + -1) = s__;
  do {
    pcVar2 = param_3;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar2 = param_3 + 1;
    cVar1 = *param_3;
    param_3 = pcVar2;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  iVar5 = -1;
  pcVar7 = (char *)&DAT_009409b8;
  do {
    pcVar6 = pcVar7;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar6 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar6;
  } while (cVar1 != '\0');
  pcVar2 = pcVar2 + -uVar3;
  pcVar7 = pcVar6 + -1;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar7 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    pcVar7 = pcVar7 + 1;
  }
  return (char *)&DAT_009409b8;
}




/* from: engine:fname.cpp
   addr: 004EC980 */

char * __fastcall fnmGetPath(char *param_1)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = (int)&DAT_009409b8 - (int)param_1;
  do {
    cVar1 = *param_1;
    param_1[iVar4] = cVar1;
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  uVar3 = 0xffffffff;
  pcVar2 = (char *)&DAT_009409b8;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  if ((&DAT_009409b7)[~uVar3] != DAT_005f6940) {
    pcVar2 = strrchr((char *)&DAT_009409b8,(int)DAT_005f6940);
    if (pcVar2 == (char *)0x0) {
      DAT_009409b8._0_1_ = 0;
      return (char *)&DAT_009409b8;
    }
    *pcVar2 = '\0';
    return (char *)&DAT_009409b8;
  }
  uVar3 = 0xffffffff;
  pcVar2 = (char *)&DAT_009409b8;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  (&DAT_009409b7)[~uVar3] = 0;
  return (char *)&DAT_009409b8;
}




/* from: engine:fname.cpp
   addr: 004ECA00 */

char * __fastcall fnmGetNameExt(char *param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  
  pcVar2 = strrchr(param_1,(int)DAT_005f6940);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = strrchr(param_1,0x3a);
    if (pcVar2 == (char *)0x0) {
      iVar3 = (int)&DAT_009409b8 - (int)param_1;
      do {
        cVar1 = *param_1;
        param_1[iVar3] = cVar1;
        param_1 = param_1 + 1;
      } while (cVar1 != '\0');
      return (char *)&DAT_009409b8;
    }
  }
  pcVar2 = pcVar2 + 1;
  iVar3 = (int)&DAT_009409b8 - (int)pcVar2;
  do {
    cVar1 = *pcVar2;
    pcVar2[iVar3] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  return (char *)&DAT_009409b8;
}




/* from: engine:fname.cpp
   addr: 004ECA60 */

char * __fastcall fnmGetName(char *param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  
  pcVar2 = strrchr(param_1,(int)DAT_005f6940);
  if ((pcVar2 == (char *)0x0) && (pcVar2 = strrchr(param_1,0x3a), pcVar2 == (char *)0x0)) {
    iVar3 = (int)&DAT_009409b8 - (int)param_1;
    do {
      cVar1 = *param_1;
      param_1[iVar3] = cVar1;
      param_1 = param_1 + 1;
    } while (cVar1 != '\0');
  }
  else {
    pcVar2 = pcVar2 + 1;
    iVar3 = (int)&DAT_009409b8 - (int)pcVar2;
    do {
      cVar1 = *pcVar2;
      pcVar2[iVar3] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
  }
  pcVar2 = strrchr((char *)&DAT_009409b8,0x2e);
  if (pcVar2 != (char *)0x0) {
    *pcVar2 = '\0';
  }
  return (char *)&DAT_009409b8;
}




/* from: engine:fname.cpp
   addr: 004ECAD0 */

char * __fastcall fnmFindDisc(char *param_1,char *param_2,char *param_3)

{
  int iVar1;
  fnmDIR *this;
  char *pcVar2;
  
  this = DAT_009409ac;
  if (DAT_009409ac != (fnmDIR *)0x0) {
    do {
      iVar1 = stricmp((char *)this,param_1);
      if (iVar1 == 0) {
        if (this != (fnmDIR *)0x0) goto LAB_004ecb5a;
        break;
      }
      this = *(fnmDIR **)(this + 0x10c);
    } while (this != (fnmDIR *)0x0);
  }
  this = (fnmDIR *)operator_new(0x114);
  if (this != (fnmDIR *)0x0) {
    *(undefined4 *)(this + 0x104) = 0;
    *(undefined4 *)(this + 0x108) = 0;
    *(undefined4 *)(this + 0x10c) = 0;
    *(undefined4 *)(this + 0x110) = 0;
    *this = (fnmDIR)0x0;
    *(fnmDIR **)(this + 0x10c) = DAT_009409ac;
    DAT_009409ac = this;
    iVar1 = fnmDIR::RebuildContent(this,param_1);
    if (iVar1 == 0) {
      return (char *)0x0;
    }
LAB_004ecb5a:
    pcVar2 = fnmDIR::FindName(this,param_2,param_3);
    if (((pcVar2 != (char *)0x0) ||
        (pcVar2 = _fnmFindDisc(param_1,param_2,param_3), pcVar2 == (char *)0x0)) ||
       (iVar1 = fnmDIR::RebuildContent(this,param_1), iVar1 != 0)) {
      return pcVar2;
    }
  }
  return (char *)0x0;
}




/* from: engine:fname.cpp
   addr: 004ECBB0 */

char * __fastcall _fnmFindDisc(char *param_1,char *param_2,char *param_3)

{
  char cVar1;
  char *pcVar2;
  intptr_t _FindHandle;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  char local_21c [260];
  byte local_118 [20];
  char local_104 [260];
  
  if (param_3 != (char *)0x0) {
    if (param_1 == (char *)0x0) {
      pcVar2 = param_2;
      do {
        cVar1 = *pcVar2;
        pcVar2[(int)&DAT_009409b8 - (int)param_2] = cVar1;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
    }
    else {
      pcVar2 = param_1;
      do {
        cVar1 = *pcVar2;
        pcVar2[(int)&DAT_009409b8 - (int)param_1] = cVar1;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      uVar3 = 0xffffffff;
      pcVar2 = (char *)&DAT_009409b8;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      uVar3 = ~uVar3;
      if ((0 < (int)(uVar3 - 1)) && ((&DAT_009409b6)[uVar3] != DAT_005f6940)) {
        (&DAT_009409b7)[uVar3] = DAT_005f6940;
        *(undefined1 *)((int)&DAT_009409b8 + uVar3) = 0;
      }
      uVar3 = 0xffffffff;
      pcVar2 = param_2;
      do {
        pcVar8 = pcVar2;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        pcVar8 = pcVar2 + 1;
        cVar1 = *pcVar2;
        pcVar2 = pcVar8;
      } while (cVar1 != '\0');
      uVar3 = ~uVar3;
      iVar4 = -1;
      pcVar2 = (char *)&DAT_009409b8;
      do {
        pcVar7 = pcVar2;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pcVar7 = pcVar2 + 1;
        cVar1 = *pcVar2;
        pcVar2 = pcVar7;
      } while (cVar1 != '\0');
      pcVar2 = pcVar8 + -uVar3;
      pcVar8 = pcVar7 + -1;
      for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar2;
        pcVar2 = pcVar2 + 4;
        pcVar8 = pcVar8 + 4;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pcVar8 = *pcVar2;
        pcVar2 = pcVar2 + 1;
        pcVar8 = pcVar8 + 1;
      }
    }
    pcVar2 = param_3;
    if (*param_3 == '.') {
      pcVar2 = param_3 + 1;
    }
    iVar4 = -1;
    pcVar8 = (char *)&DAT_009409b8;
    do {
      pcVar7 = pcVar8;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar7 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar7;
    } while (cVar1 != '\0');
    uVar3 = 0xffffffff;
    *(char (*) [2])(pcVar7 + -1) = s__;
    do {
      pcVar8 = pcVar2;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar8 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar8;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    iVar4 = -1;
    pcVar2 = (char *)&DAT_009409b8;
    do {
      pcVar7 = pcVar2;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar7 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar7;
    } while (cVar1 != '\0');
    pcVar2 = pcVar8 + -uVar3;
    pcVar8 = pcVar7 + -1;
    for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar8 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar8 = pcVar8 + 1;
    }
    iVar4 = access((char *)&DAT_009409b8,4);
    if (iVar4 == 0) {
LAB_004eccb5:
      return (char *)&DAT_009409b8;
    }
  }
  iVar4 = (int)&DAT_009409b8 - (int)param_1;
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2[iVar4] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar3 = 0xffffffff;
  pcVar2 = (char *)&DAT_009409b8;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  if ((0 < (int)(uVar3 - 1)) && ((&DAT_009409b6)[uVar3] != DAT_005f6940)) {
    (&DAT_009409b7)[uVar3] = DAT_005f6940;
    *(undefined1 *)((int)&DAT_009409b8 + uVar3) = 0;
  }
  iVar6 = -1;
  pcVar2 = (char *)&DAT_009409b8;
  do {
    pcVar8 = pcVar2;
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    pcVar8 = pcVar2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar8;
  } while (cVar1 != '\0');
  *(char (*) [4])(pcVar8 + -1) = s____;
  _FindHandle = findfirst(&DAT_009409b8,local_118);
  do {
    if (((local_118[0] & 0x10) == 0) || (local_104[0] == '.')) {
      if (param_3 == (char *)0x0) {
        iVar6 = 0;
        do {
          pcVar2 = local_104 + iVar6;
          local_21c[iVar6] = *pcVar2;
          iVar6 = iVar6 + 1;
        } while (*pcVar2 != '\0');
        pcVar2 = strrchr(local_21c,0x2e);
        if (pcVar2 != (char *)0x0) {
          *pcVar2 = '\0';
        }
        iVar6 = stricmp(param_2,local_21c);
        if (iVar6 == 0) break;
      }
    }
    else {
      pcVar2 = param_1;
      do {
        cVar1 = *pcVar2;
        pcVar2[(int)(local_21c + -(int)param_1)] = cVar1;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      iVar6 = -1;
      pcVar2 = local_21c;
      do {
        pcVar8 = pcVar2;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar8 = pcVar2 + 1;
        cVar1 = *pcVar2;
        pcVar2 = pcVar8;
      } while (cVar1 != '\0');
      uVar3 = 0xffffffff;
      *(char (*) [2])(pcVar8 + -1) = s__;
      pcVar2 = local_104;
      do {
        pcVar8 = pcVar2;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        pcVar8 = pcVar2 + 1;
        cVar1 = *pcVar2;
        pcVar2 = pcVar8;
      } while (cVar1 != '\0');
      uVar3 = ~uVar3;
      iVar6 = -1;
      pcVar2 = local_21c;
      do {
        pcVar7 = pcVar2;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar7 = pcVar2 + 1;
        cVar1 = *pcVar2;
        pcVar2 = pcVar7;
      } while (cVar1 != '\0');
      pcVar2 = pcVar8 + -uVar3;
      pcVar8 = pcVar7 + -1;
      for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar2;
        pcVar2 = pcVar2 + 4;
        pcVar8 = pcVar8 + 4;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pcVar8 = *pcVar2;
        pcVar2 = pcVar2 + 1;
        pcVar8 = pcVar8 + 1;
      }
      pcVar2 = fnmFindDisc(local_21c,param_2,param_3);
      if (pcVar2 != (char *)0x0) goto LAB_004eccb5;
    }
    iVar6 = findnext(_FindHandle,local_118);
    if (iVar6 != 0) {
      findclose(_FindHandle);
      return (char *)0x0;
    }
  } while( true );
  do {
    cVar1 = *param_1;
    param_1[iVar4] = cVar1;
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  uVar3 = 0xffffffff;
  pcVar2 = (char *)&DAT_009409b8;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  if ((0 < (int)(uVar3 - 1)) && ((&DAT_009409b6)[uVar3] != DAT_005f6940)) {
    (&DAT_009409b7)[uVar3] = DAT_005f6940;
    *(undefined1 *)((int)&DAT_009409b8 + uVar3) = 0;
  }
  uVar3 = 0xffffffff;
  pcVar2 = local_104;
  do {
    pcVar8 = pcVar2;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar8 = pcVar2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar8;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  iVar4 = -1;
  pcVar2 = (char *)&DAT_009409b8;
  do {
    pcVar7 = pcVar2;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar7 = pcVar2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar7;
  } while (cVar1 != '\0');
  pcVar2 = pcVar8 + -uVar3;
  pcVar8 = pcVar7 + -1;
  for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar8 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    pcVar8 = pcVar8 + 1;
  }
  return (char *)&DAT_009409b8;
}




/* from: engine:fname.cpp
   addr: 004ECED0 */

void __thiscall fnmDIR::Term(fnmDIR *this)

{
  fnmDIR *pfVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(this + 0x104)) {
    do {
      apFree(*(void **)(*(int *)(this + 0x108) + iVar2 * 4));
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(this + 0x104));
  }
  apFree(*(void **)(this + 0x108));
  pfVar1 = *(fnmDIR **)(this + 0x110);
  *(undefined4 *)(this + 0x104) = 0;
  *(undefined4 *)(this + 0x108) = 0;
  if (pfVar1 != (fnmDIR *)0x0) {
    Term(pfVar1);
    operator_delete(pfVar1);
  }
  pfVar1 = *(fnmDIR **)(this + 0x10c);
  *(undefined4 *)(this + 0x110) = 0;
  if (pfVar1 != (fnmDIR *)0x0) {
    Term(pfVar1);
    operator_delete(pfVar1);
  }
  *(undefined4 *)(this + 0x10c) = 0;
  return;
}




/* from: engine:fname.cpp
   addr: 004ECF60 */

char * __thiscall fnmDIR::FindName(fnmDIR *this,char *param_1,char *param_2)

{
  char cVar1;
  fnmDIR fVar2;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  
  iVar8 = 0;
  if (*(int *)(this + 0x104) < 1) {
LAB_004ed0b8:
    if (((*(fnmDIR **)(this + 0x110) == (fnmDIR *)0x0) ||
        (pcVar4 = FindName(*(fnmDIR **)(this + 0x110),param_1,param_2), pcVar4 == (char *)0x0)) &&
       ((*(fnmDIR **)(this + 0x10c) == (fnmDIR *)0x0 ||
        (pcVar4 = FindName(*(fnmDIR **)(this + 0x10c),param_1,param_2), pcVar4 == (char *)0x0)))) {
      pcVar4 = (char *)0x0;
    }
    return pcVar4;
  }
LAB_004ecf7a:
  if (param_2 == (char *)0x0) {
    pcVar4 = *(char **)(*(int *)(this + 0x108) + iVar8 * 4);
    pcVar3 = strrchr(pcVar4,(int)DAT_005f6940);
    if ((pcVar3 == (char *)0x0) && (pcVar3 = strrchr(pcVar4,0x3a), pcVar3 == (char *)0x0)) {
      iVar7 = (int)&DAT_009409b8 - (int)pcVar4;
      do {
        cVar1 = *pcVar4;
        pcVar4[iVar7] = cVar1;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
    }
    else {
      pcVar3 = pcVar3 + 1;
      iVar7 = (int)&DAT_009409b8 - (int)pcVar3;
      do {
        cVar1 = *pcVar3;
        pcVar3[iVar7] = cVar1;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
    }
    pcVar4 = strrchr((char *)&DAT_009409b8,0x2e);
    if (pcVar4 != (char *)0x0) {
      *pcVar4 = '\0';
    }
    iVar7 = stricmp((char *)&DAT_009409b8,param_1);
    if (iVar7 == 0) {
      pcVar4 = *(char **)(*(int *)(this + 0x108) + iVar8 * 4);
      iVar8 = (int)&DAT_009409b8 - (int)this;
      do {
        fVar2 = *this;
        this[iVar8] = fVar2;
        this = this + 1;
      } while (fVar2 != (fnmDIR)0x0);
      uVar5 = 0xffffffff;
      pcVar3 = (char *)&DAT_009409b8;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      if ((0 < (int)(uVar5 - 1)) && ((&DAT_009409b6)[uVar5] != DAT_005f6940)) {
        (&DAT_009409b7)[uVar5] = DAT_005f6940;
        *(undefined1 *)((int)&DAT_009409b8 + uVar5) = 0;
      }
      uVar5 = 0xffffffff;
      do {
        pcVar3 = pcVar4;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar3 = pcVar4 + 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar3;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      iVar8 = -1;
      pcVar4 = (char *)&DAT_009409b8;
      do {
        pcVar9 = pcVar4;
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        pcVar9 = pcVar4 + 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar9;
      } while (cVar1 != '\0');
      pcVar4 = pcVar3 + -uVar5;
      pcVar3 = pcVar9 + -1;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar3 = *(undefined4 *)pcVar4;
        pcVar4 = pcVar4 + 4;
        pcVar3 = pcVar3 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar3 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        pcVar3 = pcVar3 + 1;
      }
      return (char *)&DAT_009409b8;
    }
  }
  else {
    pcVar4 = fnmAddExt(param_1,param_2);
    iVar7 = stricmp(*(char **)(*(int *)(this + 0x108) + iVar8 * 4),pcVar4);
    if (iVar7 == 0) {
      iVar8 = (int)&DAT_009409b8 - (int)this;
      do {
        fVar2 = *this;
        this[iVar8] = fVar2;
        this = this + 1;
      } while (fVar2 != (fnmDIR)0x0);
      uVar5 = 0xffffffff;
      pcVar4 = (char *)&DAT_009409b8;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      if ((0 < (int)(uVar5 - 1)) && ((&DAT_009409b6)[uVar5] != DAT_005f6940)) {
        (&DAT_009409b7)[uVar5] = DAT_005f6940;
        *(undefined1 *)((int)&DAT_009409b8 + uVar5) = 0;
      }
      uVar5 = 0xffffffff;
      pcVar4 = param_1;
      do {
        pcVar3 = pcVar4;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar3 = pcVar4 + 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar3;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      iVar8 = -1;
      pcVar4 = (char *)&DAT_009409b8;
      do {
        pcVar9 = pcVar4;
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        pcVar9 = pcVar4 + 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar9;
      } while (cVar1 != '\0');
      pcVar4 = pcVar3 + -uVar5;
      pcVar3 = pcVar9 + -1;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar3 = *(undefined4 *)pcVar4;
        pcVar4 = pcVar4 + 4;
        pcVar3 = pcVar3 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar3 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        pcVar3 = pcVar3 + 1;
      }
      if (*param_2 == '.') {
        param_2 = param_2 + 1;
      }
      if (param_2 == (char *)0x0) {
        pcVar4 = fnmAddExt((char *)&DAT_009409b8,(char *)0x0);
        return pcVar4;
      }
      pcVar4 = strrchr(param_1,0x2e);
      if (pcVar4 != (char *)0x0) {
        pcVar4 = strrchr((char *)&DAT_009409b8,0x2e);
        *pcVar4 = '\0';
      }
      iVar8 = -1;
      pcVar4 = (char *)&DAT_009409b8;
      do {
        pcVar3 = pcVar4;
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        pcVar3 = pcVar4 + 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar3;
      } while (cVar1 != '\0');
      *(char (*) [2])(pcVar3 + -1) = s__;
      uVar5 = 0xffffffff;
      do {
        pcVar4 = param_2;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar4 = param_2 + 1;
        cVar1 = *param_2;
        param_2 = pcVar4;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      iVar8 = -1;
      pcVar3 = (char *)&DAT_009409b8;
      do {
        pcVar9 = pcVar3;
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        pcVar9 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar9;
      } while (cVar1 != '\0');
      pcVar4 = pcVar4 + -uVar5;
      pcVar3 = pcVar9 + -1;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar3 = *(undefined4 *)pcVar4;
        pcVar4 = pcVar4 + 4;
        pcVar3 = pcVar3 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar3 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        pcVar3 = pcVar3 + 1;
      }
      return (char *)&DAT_009409b8;
    }
  }
  iVar8 = iVar8 + 1;
  if (*(int *)(this + 0x104) <= iVar8) goto LAB_004ed0b8;
  goto LAB_004ecf7a;
}




/* from: engine:fname.cpp
   addr: 004ED200 */

int __thiscall fnmDIR::RebuildContent(fnmDIR *this,char *param_1)

{
  char cVar1;
  fnmDIR fVar2;
  fnmDIR *pfVar3;
  intptr_t _FindHandle;
  fnmDIR *pfVar4;
  void *pvVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  char *pcVar10;
  char *pcVar11;
  byte local_118 [20];
  char local_104 [260];
  
  iVar9 = (int)this - (int)param_1;
  do {
    cVar1 = *param_1;
    param_1[iVar9] = cVar1;
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  pvVar5 = *(void **)(this + 0x110);
  if (pvVar5 != (void *)0x0) {
    iVar9 = 0;
    if (0 < *(int *)((int)pvVar5 + 0x104)) {
      do {
        apFree(*(void **)(*(int *)((int)pvVar5 + 0x108) + iVar9 * 4));
        iVar9 = iVar9 + 1;
      } while (iVar9 < *(int *)((int)pvVar5 + 0x104));
    }
    apFree(*(void **)((int)pvVar5 + 0x108));
    *(undefined4 *)((int)pvVar5 + 0x104) = 0;
    *(undefined4 *)((int)pvVar5 + 0x108) = 0;
    if (*(fnmDIR **)((int)pvVar5 + 0x110) != (fnmDIR *)0x0) {
      _scalar_deleting_destructor_(*(fnmDIR **)((int)pvVar5 + 0x110),1);
    }
    *(undefined4 *)((int)pvVar5 + 0x110) = 0;
    if (*(fnmDIR **)((int)pvVar5 + 0x10c) != (fnmDIR *)0x0) {
      _scalar_deleting_destructor_(*(fnmDIR **)((int)pvVar5 + 0x10c),1);
    }
    *(undefined4 *)((int)pvVar5 + 0x10c) = 0;
    operator_delete(pvVar5);
  }
  *(undefined4 *)(this + 0x110) = 0;
  *(undefined4 *)(this + 0x104) = 0;
  pfVar3 = this;
  do {
    fVar2 = *pfVar3;
    pfVar3[(int)&DAT_009409b8 - (int)this] = fVar2;
    pfVar3 = pfVar3 + 1;
  } while (fVar2 != (fnmDIR)0x0);
  uVar7 = 0xffffffff;
  pcVar6 = (char *)&DAT_009409b8;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7;
  if ((0 < (int)(uVar7 - 1)) && ((&DAT_009409b6)[uVar7] != DAT_005f6940)) {
    (&DAT_009409b7)[uVar7] = DAT_005f6940;
    *(undefined1 *)((int)&DAT_009409b8 + uVar7) = 0;
  }
  iVar9 = -1;
  pcVar6 = (char *)&DAT_009409b8;
  do {
    pcVar11 = pcVar6;
    if (iVar9 == 0) break;
    iVar9 = iVar9 + -1;
    pcVar11 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar11;
  } while (cVar1 != '\0');
  *(char (*) [4])(pcVar11 + -1) = s____;
  _FindHandle = findfirst(&DAT_009409b8,local_118);
  do {
    if (local_104[0] != '.') {
      if ((local_118[0] & 0x10) == 0) {
        pvVar5 = apRealloc(*(void **)(this + 0x108),*(int *)(this + 0x104) * 4 + 4);
        *(void **)(this + 0x108) = pvVar5;
        if (pvVar5 == (void *)0x0) {
          return 0;
        }
        pcVar6 = apStrdup(local_104);
        *(char **)(*(int *)(this + 0x108) + *(int *)(this + 0x104) * 4) = pcVar6;
        if (*(int *)(*(int *)(this + 0x108) + *(int *)(this + 0x104) * 4) == 0) {
          return 0;
        }
        *(int *)(this + 0x104) = *(int *)(this + 0x104) + 1;
      }
      else {
        pfVar3 = (fnmDIR *)operator_new(0x114);
        if (pfVar3 == (fnmDIR *)0x0) {
          return 0;
        }
        *(undefined4 *)(pfVar3 + 0x104) = 0;
        *(undefined4 *)(pfVar3 + 0x108) = 0;
        *(undefined4 *)(pfVar3 + 0x10c) = 0;
        *(undefined4 *)(pfVar3 + 0x110) = 0;
        *pfVar3 = (fnmDIR)0x0;
        pfVar4 = this;
        if (*(int *)(this + 0x110) == 0) {
          *(fnmDIR **)(this + 0x110) = pfVar3;
        }
        else {
          *(undefined4 *)(pfVar3 + 0x10c) = *(undefined4 *)(*(int *)(this + 0x110) + 0x10c);
          *(fnmDIR **)(*(int *)(this + 0x110) + 0x10c) = pfVar3;
        }
        do {
          fVar2 = *pfVar4;
          pfVar4[(int)&DAT_009409b8 - (int)this] = fVar2;
          pfVar4 = pfVar4 + 1;
        } while (fVar2 != (fnmDIR)0x0);
        uVar7 = 0xffffffff;
        pcVar6 = (char *)&DAT_009409b8;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        uVar7 = ~uVar7;
        if ((0 < (int)(uVar7 - 1)) && ((&DAT_009409b6)[uVar7] != DAT_005f6940)) {
          (&DAT_009409b7)[uVar7] = DAT_005f6940;
          *(undefined1 *)((int)&DAT_009409b8 + uVar7) = 0;
        }
        uVar7 = 0xffffffff;
        pcVar6 = local_104;
        do {
          pcVar11 = pcVar6;
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          pcVar11 = pcVar6 + 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar11;
        } while (cVar1 != '\0');
        uVar7 = ~uVar7;
        iVar9 = -1;
        pcVar6 = (char *)&DAT_009409b8;
        do {
          pcVar10 = pcVar6;
          if (iVar9 == 0) break;
          iVar9 = iVar9 + -1;
          pcVar10 = pcVar6 + 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar10;
        } while (cVar1 != '\0');
        pcVar6 = pcVar11 + -uVar7;
        pcVar11 = pcVar10 + -1;
        for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pcVar11 = *(undefined4 *)pcVar6;
          pcVar6 = pcVar6 + 4;
          pcVar11 = pcVar11 + 4;
        }
        for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *pcVar11 = *pcVar6;
          pcVar6 = pcVar6 + 1;
          pcVar11 = pcVar11 + 1;
        }
        iVar9 = RebuildContent(pfVar3,(char *)&DAT_009409b8);
        if (iVar9 == 0) {
          return 0;
        }
      }
    }
    iVar9 = findnext(_FindHandle,local_118);
    if (iVar9 != 0) {
      findclose(_FindHandle);
      return 1;
    }
  } while( true );
}




/* from: engine:fname.cpp
   addr: 004ED4C0 */

void * __thiscall fnmDIR::_scalar_deleting_destructor_(fnmDIR *this,uint param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < *(int *)(this + 0x104)) {
    do {
      apFree(*(void **)(*(int *)(this + 0x108) + iVar1 * 4));
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(this + 0x104));
  }
  apFree(*(void **)(this + 0x108));
  *(undefined4 *)(this + 0x104) = 0;
  *(undefined4 *)(this + 0x108) = 0;
  if (*(fnmDIR **)(this + 0x110) != (fnmDIR *)0x0) {
    _scalar_deleting_destructor_(*(fnmDIR **)(this + 0x110),1);
  }
  *(undefined4 *)(this + 0x110) = 0;
  if (*(fnmDIR **)(this + 0x10c) != (fnmDIR *)0x0) {
    _scalar_deleting_destructor_(*(fnmDIR **)(this + 0x10c),1);
  }
  *(undefined4 *)(this + 0x10c) = 0;
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

