
/* from: gs:gs_strings.cpp
   addr: 00507030 */

gsSTRINGS * __thiscall gsSTRINGS::gsSTRINGS(gsSTRINGS *this)

{
  arrVector<unsigned_short> *this_00;
  arrVector<void*> *this_01;
  size_t sVar1;
  gsSTRINGS *local_4;
  
  this_00 = (arrVector<unsigned_short> *)(this + 0xc);
  this_01 = (arrVector<void*> *)(this + 0x18);
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)this_00 = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)this_01 = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x30) = 1;
  local_4 = this;
  arrVector<char>::Resize((arrVector<char> *)this,0);
  arrVector<unsigned_short>::Resize(this_00,0);
  arrVector<void*>::Resize(this_01,0);
  arrVector<struct_uiFONT_TMP_LINE>::Resize((arrVector<struct_uiFONT_TMP_LINE> *)(this + 0x24),0);
  *(undefined4 *)(this + 0x30) = 1;
  sVar1 = wcslen(L"<null>");
  arrVector<unsigned_short>::Insert(this_00,0,(ushort *)L"<null>",(ushort *)(L"<null>" + sVar1));
  local_4 = (gsSTRINGS *)0x0;
  arrVector<void*>::Insert(this_01,*(int *)(this + 0x1c),&local_4,1);
  AddString(this,s_,(ushort *)u_);
  return this;
}




/* from: gs:gs_strings.cpp
   addr: 005070F0 */

int __thiscall gsSTRINGS::AddString(gsSTRINGS *this,char *param_1,ushort *param_2)

{
  arrVector<struct_gsSTRINGS::Record> *this_00;
  arrVector<unsigned_short> *this_01;
  ushort *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  size_t sVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  arrStdSwap<struct_gsSTRINGS::Record> local_11;
  gsSTRINGS *local_10;
  gsSTRINGS *local_c;
  char *local_8 [2];
  
  local_8[0] = param_1;
  if (*(int *)(this + 0x30) == 0) {
    *(undefined4 *)(this + 0x30) = 1;
    local_10 = this;
    arrVector<struct_gsSTRINGS::Record>::Sort
              ((arrVector<struct_gsSTRINGS::Record> *)(this + 0x24),(RecordCmp *)&local_10,&local_11
              );
  }
  this_00 = (arrVector<struct_gsSTRINGS::Record> *)(this + 0x24);
  local_c = this;
  iVar3 = arrVector<struct_gsSTRINGS::Record>::FindSorted(this_00,local_8,(RecordCmp *)&local_c);
  if (iVar3 != -1) {
    return 0;
  }
  local_8[0] = *(char **)(this + 0x10);
  arrVector<void*>::Insert((arrVector<void*> *)(this + 0x18),*(int *)(this + 0x1c),local_8,1);
  arrVector<struct_wrUI_STRINGS::Record>::Insert
            ((arrVector<struct_wrUI_STRINGS::Record> *)this_00,*(int *)(this + 0x28),
             (Record *)local_8,1);
  *(undefined4 *)(*(int *)this_00 + -8 + *(int *)(this + 0x28) * 8) = *(undefined4 *)(this + 4);
  *(int *)(*(int *)this_00 + -4 + *(int *)(this + 0x28) * 8) = *(int *)(this + 0x1c) + -1;
  uVar7 = 0xffffffff;
  iVar3 = *(int *)(this + 4);
  pcVar9 = param_1;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  uVar7 = ~uVar7;
  if (uVar7 != 0) {
    iVar4 = *(int *)(this + 8);
    iVar8 = iVar3 + uVar7;
    if (iVar4 < iVar8) {
      iVar6 = iVar4 * 2;
      if (iVar4 * 2 <= iVar8) {
        iVar6 = iVar8;
      }
      if (iVar4 < iVar6) {
        arrVector<unsigned_char>::Realloc((arrVector<unsigned_char> *)this,iVar6);
      }
    }
    memmove((void *)(*(int *)this + uVar7 + iVar3),(void *)(*(int *)this + iVar3),
            *(int *)(this + 4) - iVar3);
    if (iVar3 < iVar8) {
      iVar4 = iVar3;
      do {
        if ((char *)(*(int *)this + iVar4) != (char *)0x0) {
          *(char *)(*(int *)this + iVar4) = param_1[iVar4 - iVar3];
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar8);
    }
    *(uint *)(this + 4) = *(int *)(this + 4) + uVar7;
  }
  iVar3 = *(int *)(this + 0x10);
  this_01 = (arrVector<unsigned_short> *)(this + 0xc);
  sVar5 = wcslen((wchar_t *)param_2);
  iVar8 = (int)(sVar5 * 2 + 2) >> 1;
  if (iVar8 != 0) {
    iVar4 = *(int *)(this + 0x14);
    iVar6 = *(int *)(this + 0x10) + iVar8;
    if (iVar4 < iVar6) {
      if (iVar6 < iVar4 * 2) {
        iVar6 = iVar4 * 2;
      }
      if (iVar4 < iVar6) {
        arrVector<unsigned_short>::Realloc(this_01,iVar6);
      }
    }
    iVar4 = iVar8 + iVar3;
    memmove((void *)(*(int *)this_01 + iVar4 * 2),(void *)(*(int *)this_01 + iVar3 * 2),
            (*(int *)(this + 0x10) - iVar3) * 2);
    for (; iVar3 < iVar4; iVar3 = iVar3 + 1) {
      puVar1 = (ushort *)(*(int *)this_01 + iVar3 * 2);
      if (puVar1 != (ushort *)0x0) {
        *puVar1 = *param_2;
      }
      param_2 = param_2 + 1;
    }
    *(int *)(this + 0x10) = *(int *)(this + 0x10) + iVar8;
  }
  *(undefined4 *)(this + 0x30) = 0;
  return *(int *)(this + 0x1c) + -1;
}




/* from: gs:gs_strings.cpp
   addr: 005072B0 */

ushort * __thiscall gsSTRINGS::Printf(gsSTRINGS *this,int param_1,...)

{
  ushort *puVar1;
  int in_stack_00000008;
  
  puVar1 = PrintfV((gsSTRINGS *)param_1,
                   (ushort *)
                   (*(int *)(param_1 + 0xc) +
                   *(int *)(*(int *)(param_1 + 0x18) + in_stack_00000008 * 4) * 2),&stack0x0000000c)
  ;
  return puVar1;
}




/* from: gs:gs_strings.cpp
   addr: 005072D0 */

ushort * __thiscall gsSTRINGS::Printf(gsSTRINGS *this,char *param_1,...)

{
  undefined4 uVar1;
  undefined4 uVar2;
  bool bVar3;
  int iVar4;
  char *this_00;
  int iVar5;
  int iVar6;
  ushort *puVar7;
  int iVar8;
  char *in_stack_00000008;
  char *local_c;
  char *local_8;
  char *local_4;
  
  this_00 = param_1;
  local_4 = in_stack_00000008;
  local_8 = in_stack_00000008;
  if (*(int *)(param_1 + 0x30) == 0) {
    param_1[0x30] = '\x01';
    param_1[0x31] = '\0';
    param_1[0x32] = '\0';
    param_1[0x33] = '\0';
    do {
      iVar8 = 1;
      bVar3 = false;
      iVar6 = iVar8;
      if (*(int *)(this_00 + 0x28) < 2) break;
joined_r0x0050730c:
      do {
        iVar4 = iVar6;
        iVar6 = iVar4 + -1;
        if (-1 < iVar6) {
          iVar5 = RecordCmp::cmp((RecordCmp *)&param_1,
                                 (Record *)(*(int *)(this_00 + 0x24) + iVar6 * 8),
                                 (Record *)(*(int *)(this_00 + 0x24) + iVar8 * 8));
          if (iVar5 == -1) goto joined_r0x0050730c;
        }
        if (iVar4 != iVar8) {
          iVar6 = *(int *)(this_00 + 0x24);
          uVar1 = *(undefined4 *)(iVar6 + iVar8 * 8);
          uVar2 = *(undefined4 *)(iVar6 + 4 + iVar8 * 8);
          *(undefined4 *)(iVar6 + iVar8 * 8) = *(undefined4 *)(iVar6 + iVar4 * 8);
          *(undefined4 *)(iVar6 + 4 + iVar8 * 8) = *(undefined4 *)(iVar6 + 4 + iVar4 * 8);
          *(undefined4 *)(iVar6 + iVar4 * 8) = uVar1;
          *(undefined4 *)(iVar6 + 4 + iVar4 * 8) = uVar2;
          bVar3 = true;
        }
        iVar8 = iVar8 + 1;
        iVar6 = iVar8;
      } while (iVar8 < *(int *)(this_00 + 0x28));
    } while (bVar3);
  }
  local_c = this_00;
  iVar6 = arrVector<struct_gsSTRINGS::Record>::FindSorted
                    ((arrVector<struct_gsSTRINGS::Record> *)(this_00 + 0x24),&local_8,
                     (RecordCmp *)&local_c);
  if (iVar6 == -1) {
    apLog(s_GS_STRINGS__Can_t_find_string___,local_4);
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(*(int *)(this_00 + 0x24) + 4 + iVar6 * 8);
  }
  puVar7 = PrintfV((gsSTRINGS *)this_00,
                   (ushort *)
                   (*(int *)(this_00 + 0xc) + *(int *)(*(int *)(this_00 + 0x18) + iVar6 * 4) * 2),
                   &stack0x0000000c);
  return puVar7;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:gs_strings.cpp
   addr: 005073C0 */

ushort * __thiscall gsSTRINGS::PrintfV(gsSTRINGS *this,ushort *param_1,char *param_2)

{
  char cVar1;
  wchar_t wVar2;
  short sVar3;
  char **ppcVar4;
  wchar_t *pwVar5;
  uint uVar6;
  char *pcVar7;
  uint uVar8;
  wchar_t *extraout_ECX;
  wchar_t *extraout_ECX_00;
  short *psVar9;
  int iVar10;
  int iVar11;
  wchar_t *_Value;
  int iVar12;
  wchar_t *pwVar13;
  int iVar14;
  char **local_30;
  int local_2c;
  undefined4 local_28;
  gsSTRINGS *local_24;
  uint local_20;
  void *local_1c;
  int local_18;
  int local_14;
  char local_10 [16];
  
  local_1c = (void *)0x0;
  local_14 = 0;
  local_18 = 0;
  local_24 = this;
  arrVector<void*>::Resize((arrVector<void*> *)&local_1c,0);
  ppcVar4 = &apBuffer;
  local_30 = &apBuffer;
  local_2c = 0;
  wVar2 = *param_1;
  pwVar5 = (wchar_t *)param_1;
  pcVar7 = param_2;
  uVar8 = local_20;
joined_r0x005073fa:
  if (wVar2 == L'\0') goto LAB_00507845;
  param_2 = pcVar7;
  if (wVar2 == L'%') {
    pwVar13 = (wchar_t *)(param_1 + 1);
    _Value = (wchar_t *)0x0;
    iVar11 = 0;
    if (*pwVar13 == L'0') {
      local_28 = 0x30;
      pwVar13 = (wchar_t *)(param_1 + 2);
    }
    else {
      local_28 = 0x20;
    }
    wVar2 = *pwVar13;
    uVar6 = CONCAT22((short)((uint)pwVar5 >> 0x10),wVar2);
    while ((0x2f < (ushort)wVar2 && ((ushort)uVar6 < 0x3a))) {
      pwVar13 = pwVar13 + 1;
      iVar11 = ((uVar6 & 0xffff) - 0x30) + iVar11 * 10;
      wVar2 = *pwVar13;
      uVar6 = (uint)(ushort)wVar2;
    }
    iVar10 = -1;
    if (*pwVar13 == L'.') {
      wVar2 = pwVar13[1];
      pwVar13 = pwVar13 + 1;
      iVar10 = 0;
      uVar6 = CONCAT22((short)(uVar6 >> 0x10),wVar2);
      while ((0x2f < (ushort)wVar2 && ((ushort)uVar6 < 0x3a))) {
        pwVar13 = pwVar13 + 1;
        iVar10 = ((uVar6 & 0xffff) - 0x30) + iVar10 * 10;
        wVar2 = *pwVar13;
        uVar6 = (uint)(ushort)wVar2;
      }
    }
    wVar2 = *pwVar13;
    local_20 = CONCAT22((short)(uVar6 >> 0x10),wVar2);
    if (wVar2 == L'\0') {
      pwVar5 = u_<UNEXPECTED_EOL>;
      wVar2 = u_<UNEXPECTED_EOL>[0];
      while ((wVar2 != L'\0' && (ppcVar4 < &DAT_00610f7e))) {
        wVar2 = *pwVar5;
        pwVar5 = pwVar5 + 1;
        *(wchar_t *)ppcVar4 = wVar2;
        wVar2 = *pwVar5;
        ppcVar4 = (char **)((int)local_30 + 2);
        local_30 = ppcVar4;
      }
LAB_00507845:
      iVar11 = 1;
      do {
        if ((char **)0x610f7f < ppcVar4) break;
        *(wchar_t *)ppcVar4 = L'\0';
        ppcVar4 = (char **)((int)local_30 + 2);
        iVar11 = iVar11 + -1;
        local_30 = ppcVar4;
      } while (0 < iVar11);
      _DAT_00610f7e = 0;
      local_20 = uVar8;
      apFree(local_1c);
      return (ushort *)&apBuffer;
    }
    param_1 = (ushort *)(pwVar13 + 1);
    pwVar5 = wcschr((wchar_t *)PTR_u_sSdifI_005dca98,wVar2);
    if (pwVar5 != (wchar_t *)0x0) {
      if (local_2c != 2) {
        if ((0x30 < *param_1) && (*param_1 < 0x3a)) {
          local_2c = 1;
          if (local_14 < 0x10) {
            arrVector<class_uiAREA*>::Realloc((arrVector<class_uiAREA*> *)&local_1c,0x10);
          }
          iVar12 = 0;
          wVar2 = *param_1;
          while ((0x2f < (ushort)wVar2 && ((ushort)wVar2 < 0x3a))) {
            param_1 = (ushort *)((wchar_t *)param_1 + 1);
            iVar12 = ((ushort)wVar2 - 0x30) + iVar12 * 10;
            wVar2 = *param_1;
          }
          if (local_18 <= iVar12) {
            iVar14 = (iVar12 - local_18) + 1;
            do {
              pcVar7 = param_2 + 4;
              arrVector<void*>::Insert((arrVector<void*> *)&local_1c,local_18,(void **)param_2,1);
              iVar14 = iVar14 + -1;
              param_2 = pcVar7;
            } while (iVar14 != 0);
          }
          _Value = *(wchar_t **)((int)local_1c + iVar12 * 4 + -4);
          if (*param_1 == L'|') {
            param_1 = (ushort *)((wchar_t *)param_1 + 1);
          }
          goto LAB_005075d1;
        }
        if (local_2c == 1) {
          pwVar5 = u_<UNNUMBERED_ARG>;
          wVar2 = u_<UNNUMBERED_ARG>[0];
          for (; (ppcVar4 = local_30, wVar2 != L'\0' && (local_30 < &DAT_00610f7e));
              local_30 = (char **)((int)local_30 + 2)) {
            wVar2 = *pwVar5;
            pwVar5 = pwVar5 + 1;
            *(wchar_t *)local_30 = wVar2;
            wVar2 = *pwVar5;
          }
          goto LAB_0050773a;
        }
        local_2c = 2;
      }
      param_2 = pcVar7 + 4;
      _Value = *(wchar_t **)pcVar7;
    }
LAB_005075d1:
    pwVar5 = _Value;
    switch(local_20 & 0xffff) {
    case 0x25:
      pwVar5 = (wchar_t *)0x1;
      do {
        ppcVar4 = local_30;
        if ((char **)0x610f7d < local_30) break;
        *(wchar_t *)local_30 = L'%';
        ppcVar4 = (char **)((int)local_30 + 2);
        pwVar5 = (wchar_t *)((int)pwVar5 + -1);
        local_30 = ppcVar4;
      } while (0 < (int)pwVar5);
      break;
    default:
      pwVar5 = u_<INVALID_FIELD>;
      wVar2 = u_<INVALID_FIELD>[0];
      for (; (ppcVar4 = local_30, wVar2 != L'\0' && (local_30 < &DAT_00610f7e));
          local_30 = (char **)((int)local_30 + 2)) {
        wVar2 = *pwVar5;
        pwVar5 = pwVar5 + 1;
        *(wchar_t *)local_30 = wVar2;
        wVar2 = *pwVar5;
      }
      break;
    case 0x49:
      iVar11 = *(int *)(*(int *)(local_24 + 0x18) + (int)_Value * 4);
      sVar3 = *(short *)(*(int *)(local_24 + 0xc) + iVar11 * 2);
      pwVar5 = (wchar_t *)CONCAT22((short)((uint)*(int *)(local_24 + 0x18) >> 0x10),sVar3);
      psVar9 = (short *)(*(int *)(local_24 + 0xc) + iVar11 * 2);
      for (; (ppcVar4 = local_30, sVar3 != 0 && (local_30 < &DAT_00610f7e));
          local_30 = (char **)((int)local_30 + 2)) {
        *(wchar_t *)local_30 = (wchar_t)pwVar5;
        psVar9 = psVar9 + 1;
        sVar3 = *psVar9;
        pwVar5 = (wchar_t *)CONCAT22((short)((uint)pwVar5 >> 0x10),sVar3);
      }
      break;
    case 0x53:
      cVar1 = (char)*_Value;
      for (; (ppcVar4 = local_30, cVar1 != '\0' && (local_30 < &DAT_00610f7e));
          local_30 = (char **)((int)local_30 + 2)) {
        *(short *)local_30 = (short)(char)*pwVar5;
        pwVar5 = (wchar_t *)((int)pwVar5 + 1);
        cVar1 = *(char *)pwVar5;
      }
      break;
    case 100:
    case 0x69:
      itoa((int)_Value,local_10,10);
      if (iVar11 != 0) {
        uVar8 = 0xffffffff;
        pcVar7 = local_10;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        iVar11 = iVar11 - (~uVar8 - 1);
        for (; (0 < iVar11 && (local_30 < &DAT_00610f7e)); local_30 = (char **)((int)local_30 + 2))
        {
          *(wchar_t *)local_30 = (wchar_t)local_28;
          iVar11 = iVar11 + -1;
        }
      }
      PrintfInsertStringA(local_24,(ushort **)&local_30,(ushort *)&DAT_00610f7e,local_10);
      ppcVar4 = local_30;
      pwVar5 = extraout_ECX;
      break;
    case 0x66:
      PrintfInsertFloat(local_24,(ushort **)&local_30,(ushort *)&DAT_00610f7e,(float)_Value,iVar11,
                        (ushort)local_28,iVar10);
      ppcVar4 = local_30;
      pwVar5 = extraout_ECX_00;
      break;
    case 0x73:
      wVar2 = *_Value;
      for (; (ppcVar4 = local_30, wVar2 != L'\0' && (local_30 < &DAT_00610f7e));
          local_30 = (char **)((int)local_30 + 2)) {
        wVar2 = *pwVar5;
        pwVar5 = pwVar5 + 1;
        *(wchar_t *)local_30 = wVar2;
        wVar2 = *pwVar5;
      }
      break;
    case 0x74:
      pwVar5 = (wchar_t *)(iVar11 - ((int)(local_30 + -0x183fe0) >> 1));
      for (; (ppcVar4 = local_30, 0 < (int)pwVar5 && (local_30 < &DAT_00610f7e));
          local_30 = (char **)((int)local_30 + 2)) {
        *(wchar_t *)local_30 = L' ';
        pwVar5 = (wchar_t *)((int)pwVar5 + -1);
      }
    }
  }
  else {
    pwVar5 = (wchar_t *)0x1;
    do {
      if ((char **)0x610f7d < ppcVar4) break;
      *(wchar_t *)ppcVar4 = wVar2;
      ppcVar4 = (char **)((int)local_30 + 2);
      pwVar5 = (wchar_t *)((int)pwVar5 + -1);
      local_30 = ppcVar4;
    } while (0 < (int)pwVar5);
    param_1 = param_1 + 1;
    local_20 = uVar8;
  }
LAB_0050773a:
  wVar2 = *param_1;
  pcVar7 = param_2;
  uVar8 = local_20;
  goto joined_r0x005073fa;
}




/* from: gs:gs_strings.cpp
   addr: 00507900 */

void __thiscall
gsSTRINGS::PrintfInsertStringA(gsSTRINGS *this,ushort **param_1,ushort *param_2,char *param_3)

{
  char cVar1;
  
  cVar1 = *param_3;
  while ((cVar1 != '\0' && (*param_1 < param_2))) {
    **param_1 = (short)cVar1;
    param_3 = param_3 + 1;
    *param_1 = *param_1 + 1;
    cVar1 = *param_3;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:gs_strings.cpp
   addr: 00507940 */

void __thiscall
gsSTRINGS::PrintfInsertFloat
          (gsSTRINGS *this,ushort **param_1,ushort *param_2,float param_3,int param_4,ushort param_5
          ,int param_6)

{
  char cVar1;
  short sVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  float10 extraout_ST0;
  int _Radix;
  char local_10 [16];
  
  pcVar4 = local_10;
  _Radix = 10;
  iVar3 = ftol();
  itoa(iVar3,pcVar4,_Radix);
  if (param_4 != 0) {
    uVar5 = 0xffffffff;
    pcVar4 = local_10;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    iVar3 = param_4 - (~uVar5 - 1);
    while ((0 < iVar3 && (*param_1 < param_2))) {
      **param_1 = param_5;
      iVar3 = iVar3 + -1;
      *param_1 = *param_1 + 1;
    }
  }
  pcVar4 = local_10;
  while ((local_10[0] != '\0' && (*param_1 < param_2))) {
    **param_1 = (short)*pcVar4;
    local_10[0] = pcVar4[1];
    pcVar4 = pcVar4 + 1;
    *param_1 = *param_1 + 1;
  }
  if (param_3 < ___real_00000000) {
    param_3 = -param_3;
  }
  if (param_6 == -1) {
    if (___real_29e12e13 < param_3) {
      ftol();
      do {
        sVar2 = ftol();
        iVar3 = 1;
        do {
          if (param_2 <= *param_1) break;
          **param_1 = sVar2 + 0x30;
          iVar3 = iVar3 + -1;
          *param_1 = *param_1 + 1;
        } while (0 < iVar3);
      } while ((float10)___real_29e12e13 < extraout_ST0);
    }
  }
  else if (0 < param_6) {
    ftol();
    do {
      sVar2 = ftol();
      iVar3 = 1;
      do {
        if (param_2 <= *param_1) break;
        **param_1 = sVar2 + 0x30;
        iVar3 = iVar3 + -1;
        *param_1 = *param_1 + 1;
      } while (0 < iVar3);
      param_6 = param_6 + -1;
      if (param_6 == 0) {
        return;
      }
    } while( true );
  }
  return;
}




/* from: gs:gs_strings.cpp
   addr: 00507AA0 */

int __thiscall gsSTRINGS::GetStringId(gsSTRINGS *this,char *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  bool bVar13;
  
  if (*(int *)(this + 0x30) == 0) {
    *(undefined4 *)(this + 0x30) = 1;
    do {
      iVar8 = 1;
      bVar13 = false;
      if (*(int *)(this + 0x28) < 2) break;
      do {
        iVar10 = iVar8 + -1;
        if (-1 < iVar10) {
          piVar4 = (int *)(*(int *)(this + 0x24) + -8 + iVar8 * 8);
          do {
            pbVar5 = (byte *)(*piVar4 + *(int *)this);
            pbVar9 = (byte *)(*(int *)(*(int *)(this + 0x24) + iVar8 * 8) + *(int *)this);
            do {
              bVar1 = *pbVar5;
              bVar12 = bVar1 < *pbVar9;
              if (bVar1 != *pbVar9) {
LAB_00507b20:
                iVar6 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
                goto LAB_00507b25;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar5[1];
              bVar12 = bVar1 < pbVar9[1];
              if (bVar1 != pbVar9[1]) goto LAB_00507b20;
              pbVar5 = pbVar5 + 2;
              pbVar9 = pbVar9 + 2;
            } while (bVar1 != 0);
            iVar6 = 0;
LAB_00507b25:
            if (iVar6 != -1) break;
            iVar10 = iVar10 + -1;
            piVar4 = piVar4 + -2;
          } while (-1 < iVar10);
        }
        iVar10 = iVar10 + 1;
        if (iVar10 != iVar8) {
          iVar6 = *(int *)(this + 0x24);
          bVar13 = true;
          uVar2 = *(undefined4 *)(iVar6 + iVar8 * 8);
          uVar3 = *(undefined4 *)(iVar6 + 4 + iVar8 * 8);
          *(undefined4 *)(iVar6 + iVar8 * 8) = *(undefined4 *)(iVar6 + iVar10 * 8);
          *(undefined4 *)(iVar6 + 4 + iVar8 * 8) = *(undefined4 *)(iVar6 + 4 + iVar10 * 8);
          *(undefined4 *)(iVar6 + iVar10 * 8) = uVar2;
          *(undefined4 *)(iVar6 + 4 + iVar10 * 8) = uVar3;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < *(int *)(this + 0x28));
    } while (bVar13);
  }
  iVar8 = 0;
  iVar10 = *(int *)(this + 0x28);
  do {
    do {
      iVar6 = iVar10;
      if (iVar8 == iVar6) {
LAB_00507bec:
        apLog(s_GS_STRINGS__Can_t_find_string___,param_1);
        return 0;
      }
      iVar11 = (iVar8 + iVar6) / 2;
      pbVar5 = (byte *)(*(int *)(*(int *)(this + 0x24) + iVar11 * 8) + *(int *)this);
      pbVar9 = (byte *)param_1;
      do {
        bVar1 = *pbVar5;
        bVar13 = bVar1 < *pbVar9;
        if (bVar1 != *pbVar9) {
LAB_00507bc3:
          iVar7 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
          goto LAB_00507bc8;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar5[1];
        bVar13 = bVar1 < pbVar9[1];
        if (bVar1 != pbVar9[1]) goto LAB_00507bc3;
        pbVar5 = pbVar5 + 2;
        pbVar9 = pbVar9 + 2;
      } while (bVar1 != 0);
      iVar7 = 0;
LAB_00507bc8:
      iVar10 = iVar11;
    } while (iVar7 == -1);
    if (iVar7 == 0) {
      if (iVar11 != -1) {
        return *(int *)(*(int *)(this + 0x24) + 4 + iVar11 * 8);
      }
      goto LAB_00507bec;
    }
    iVar10 = iVar6;
    if (iVar7 == 1) {
      iVar8 = iVar11 + 1;
    }
  } while( true );
}




/* from: gs:gs_strings.cpp
   addr: 00507C20 */

int __thiscall gsSTRINGS::GetStringIdFmt(gsSTRINGS *this,char *param_1,...)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  byte *pbVar9;
  char **ppcVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  bool bVar14;
  char *in_stack_00000008;
  
  vsprintf((char *)&apBuffer,in_stack_00000008,&stack0x0000000c);
  if (*(int *)(param_1 + 0x30) == 0) {
    param_1[0x30] = '\x01';
    param_1[0x31] = '\0';
    param_1[0x32] = '\0';
    param_1[0x33] = '\0';
    do {
      bVar14 = false;
      iVar8 = 1;
      if (*(int *)(param_1 + 0x28) < 2) break;
      do {
        iVar11 = iVar8 + -1;
        if (-1 < iVar11) {
          piVar7 = (int *)(*(int *)(param_1 + 0x24) + -8 + iVar8 * 8);
          do {
            pbVar4 = (byte *)(*piVar7 + *(int *)param_1);
            pbVar9 = (byte *)(*(int *)(*(int *)(param_1 + 0x24) + iVar8 * 8) + *(int *)param_1);
            do {
              bVar1 = *pbVar4;
              bVar13 = bVar1 < *pbVar9;
              if (bVar1 != *pbVar9) {
LAB_00507cb9:
                iVar5 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
                goto LAB_00507cbe;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar4[1];
              bVar13 = bVar1 < pbVar9[1];
              if (bVar1 != pbVar9[1]) goto LAB_00507cb9;
              pbVar4 = pbVar4 + 2;
              pbVar9 = pbVar9 + 2;
            } while (bVar1 != 0);
            iVar5 = 0;
LAB_00507cbe:
            if (iVar5 != -1) break;
            iVar11 = iVar11 + -1;
            piVar7 = piVar7 + -2;
          } while (-1 < iVar11);
        }
        iVar11 = iVar11 + 1;
        if (iVar11 != iVar8) {
          iVar5 = *(int *)(param_1 + 0x24);
          bVar14 = true;
          uVar2 = *(undefined4 *)(iVar5 + iVar8 * 8);
          uVar3 = *(undefined4 *)(iVar5 + 4 + iVar8 * 8);
          *(undefined4 *)(iVar5 + iVar8 * 8) = *(undefined4 *)(iVar5 + iVar11 * 8);
          *(undefined4 *)(iVar5 + 4 + iVar8 * 8) = *(undefined4 *)(iVar5 + 4 + iVar11 * 8);
          *(undefined4 *)(iVar5 + iVar11 * 8) = uVar2;
          *(undefined4 *)(iVar5 + 4 + iVar11 * 8) = uVar3;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < *(int *)(param_1 + 0x28));
    } while (bVar14);
  }
  iVar8 = 0;
  iVar11 = *(int *)(param_1 + 0x28);
  while (iVar5 = iVar11, iVar8 != iVar5) {
    ppcVar10 = &apBuffer;
    iVar12 = (iVar8 + iVar5) / 2;
    pbVar9 = (byte *)(*(int *)(*(int *)(param_1 + 0x24) + iVar12 * 8) + *(int *)param_1);
    do {
      bVar1 = *pbVar9;
      bVar14 = bVar1 < *(byte *)ppcVar10;
      if (bVar1 != *(byte *)ppcVar10) {
LAB_00507d62:
        iVar6 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
        goto LAB_00507d67;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar9[1];
      bVar14 = bVar1 < *(byte *)((int)ppcVar10 + 1);
      if (bVar1 != *(byte *)((int)ppcVar10 + 1)) goto LAB_00507d62;
      pbVar9 = pbVar9 + 2;
      ppcVar10 = (char **)((int)ppcVar10 + 2);
    } while (bVar1 != 0);
    iVar6 = 0;
LAB_00507d67:
    iVar11 = iVar12;
    if (iVar6 != -1) {
      if (iVar6 == 0) goto LAB_00507d85;
      iVar11 = iVar5;
      if (iVar6 == 1) {
        iVar8 = iVar12 + 1;
      }
    }
  }
  iVar12 = -1;
LAB_00507d85:
  iVar8 = 0;
  if (iVar12 != -1) {
    iVar8 = *(int *)(*(int *)(param_1 + 0x24) + 4 + iVar12 * 8);
  }
  return iVar8;
}




/* from: gs:gs_strings.cpp
   addr: 00507DA0 */

ushort * __thiscall gsSTRINGS::GetStringById(gsSTRINGS *this,int param_1)

{
  return (ushort *)(*(int *)(this + 0xc) + *(int *)(*(int *)(this + 0x18) + param_1 * 4) * 2);
}




/* from: gs:gs_strings.cpp
   addr: 00507DC0 */

void __thiscall gsSTRINGS::GetStringById(gsSTRINGS *this,int param_1,ushort *param_2,int param_3)

{
  wcsncpy((wchar_t *)param_2,
          (wchar_t *)(*(int *)(this + 0xc) + *(int *)(*(int *)(this + 0x18) + param_1 * 4) * 2),
          param_3);
  param_2[param_3 + -1] = 0;
  return;
}




/* from: gs:gs_strings.cpp
   addr: 00507E00 */

void __thiscall gsSTRINGS::AsciiToUnicode(gsSTRINGS *this,char *param_1,ushort *param_2,int param_3)

{
  ushort *puVar1;
  char cVar2;
  
  puVar1 = param_2 + param_3 + -1;
  cVar2 = *param_1;
  for (; (cVar2 != '\0' && (param_2 < puVar1)); param_2 = param_2 + 1) {
    *param_2 = (short)cVar2;
    cVar2 = param_1[1];
    param_1 = param_1 + 1;
  }
  *param_2 = 0;
  return;
}




/* from: gs:gs_strings.cpp
   addr: 00507E40 */

ushort * __thiscall gsSTRINGS::AsciiToUnicode(gsSTRINGS *this,char *param_1)

{
  char cVar1;
  char **ppcVar2;
  
  cVar1 = *param_1;
  for (ppcVar2 = &apBuffer; (cVar1 != '\0' && (ppcVar2 < &DAT_00610f7e));
      ppcVar2 = (char **)((int)ppcVar2 + 2)) {
    *(short *)ppcVar2 = (short)*param_1;
    cVar1 = param_1[1];
    param_1 = param_1 + 1;
  }
  *(undefined2 *)ppcVar2 = 0;
  return (ushort *)&apBuffer;
}




/* from: gs:gs_strings.cpp
   addr: 00507E80 */

int __thiscall gsSTRINGS::UnicodeToAscii(gsSTRINGS *this,ushort *param_1,char *param_2,int param_3)

{
  char *pcVar1;
  ushort uVar2;
  int iVar3;
  
  pcVar1 = param_2 + param_3 + -1;
  uVar2 = *param_1;
  iVar3 = 1;
  for (; (uVar2 != 0 && (param_2 < pcVar1)); param_2 = param_2 + 1) {
    if (uVar2 < 0x80) {
      *param_2 = (char)*param_1;
    }
    else {
      *param_2 = '?';
      iVar3 = 0;
    }
    uVar2 = param_1[1];
    param_1 = param_1 + 1;
  }
  *param_2 = '\0';
  return iVar3;
}




/* from: gs:gs_strings.cpp
   addr: 00507ED0 */

int __thiscall gsSTRINGS::ParseTableLine(gsSTRINGS *this,ushort *param_1)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  ushort *puVar4;
  ushort *local_11c;
  undefined4 local_118;
  int local_114;
  arrStdSwap<struct_gsSTRINGS::Record> local_10d;
  gsSTRINGS *local_10c;
  gsSTRINGS *local_108;
  char *local_104;
  char local_100 [256];
  
  local_11c = (ushort *)0x0;
  local_114 = 0;
  local_118 = 0;
  arrVector<unsigned_short>::Resize((arrVector<unsigned_short> *)&local_11c,0);
  if (local_114 < 0x100) {
    arrVector<unsigned_short>::Realloc((arrVector<unsigned_short> *)&local_11c,0x100);
  }
  if (*param_1 != 0x3b) {
    iVar2 = ReadWord(this,&param_1,(arrVector<unsigned_short> *)&local_11c);
    if (iVar2 != 0) {
      apFree(local_11c);
      return iVar2;
    }
    if (*local_11c != 0) {
      pcVar3 = local_100;
      bVar1 = true;
      puVar4 = local_11c;
      do {
        if (local_100 + 0xff <= pcVar3) break;
        if (*puVar4 < 0x80) {
          *pcVar3 = (char)*puVar4;
        }
        else {
          *pcVar3 = '?';
          bVar1 = false;
        }
        puVar4 = puVar4 + 1;
        pcVar3 = pcVar3 + 1;
      } while (*puVar4 != 0);
      *pcVar3 = '\0';
      if (!bVar1) {
        apFree(local_11c);
        return 2;
      }
      local_104 = local_100;
      if (*(int *)(this + 0x30) == 0) {
        *(undefined4 *)(this + 0x30) = 1;
        local_108 = this;
        arrVector<struct_gsSTRINGS::Record>::Sort
                  ((arrVector<struct_gsSTRINGS::Record> *)(this + 0x24),(RecordCmp *)&local_108,
                   &local_10d);
      }
      local_10c = this;
      iVar2 = arrVector<struct_gsSTRINGS::Record>::FindSorted
                        ((arrVector<struct_gsSTRINGS::Record> *)(this + 0x24),&local_104,
                         (RecordCmp *)&local_10c);
      if (iVar2 == -1) {
        apLog(s_GS_STRINGS__Can_t_find_string___,local_100);
      }
      else if (*(int *)(*(int *)(this + 0x24) + 4 + iVar2 * 8) != 0) {
        apFree(local_11c);
        return 3;
      }
      iVar2 = ReadWord(this,&param_1,(arrVector<unsigned_short> *)&local_11c);
      if (iVar2 != 0) {
        apFree(local_11c);
        return iVar2;
      }
      AddString(this,local_100,local_11c);
    }
  }
  apFree(local_11c);
  return 0;
}




/* from: gs:gs_strings.cpp
   addr: 005080B0 */

int __thiscall gsSTRINGS::RecordCmp::cmp(RecordCmp *this,Record *param_1,Record *param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  bool bVar4;
  
  pbVar3 = (byte *)(*(int *)param_2 + **(int **)this);
  pbVar2 = (byte *)(*(int *)param_1 + **(int **)this);
  while( true ) {
    bVar1 = *pbVar2;
    bVar4 = bVar1 < *pbVar3;
    if (bVar1 != *pbVar3) break;
    if (bVar1 == 0) {
      return 0;
    }
    bVar1 = pbVar2[1];
    bVar4 = bVar1 < pbVar3[1];
    if (bVar1 != pbVar3[1]) break;
    pbVar2 = pbVar2 + 2;
    pbVar3 = pbVar3 + 2;
    if (bVar1 == 0) {
      return 0;
    }
  }
  return (1 - (uint)bVar4) - (uint)(bVar4 != 0);
}




/* from: gs:gs_strings.cpp
   addr: 00508100 */

int __thiscall
gsSTRINGS::ReadWord(gsSTRINGS *this,ushort **param_1,arrVector<unsigned_short> *param_2)

{
  undefined2 *puVar1;
  ushort *puVar2;
  ushort uVar3;
  uint uVar4;
  ushort *puVar5;
  arrVector<unsigned_short> *this_00;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  arrVector<unsigned_short> **ppaVar10;
  ushort *local_14;
  int local_10;
  uint local_c;
  gsSTRINGS *local_8;
  arrVector<unsigned_short> *local_4;
  
  this_00 = param_2;
  local_14 = *param_1;
  local_c = 0;
  local_10 = 0;
  local_8 = this;
  arrVector<unsigned_short>::Resize(param_2,0);
  uVar3 = *local_14;
  while (uVar3 != 0) {
    if ((uVar3 != 0x20) && (uVar3 != 9)) {
      uVar3 = *local_14;
      uVar4 = 0;
      puVar5 = local_14;
      goto joined_r0x005081ce;
    }
    local_14 = local_14 + 1;
    uVar3 = *local_14;
  }
LAB_00508156:
  iVar8 = *(int *)(this_00 + 4);
  iVar6 = *(int *)(this_00 + 8);
  iVar7 = iVar8 + 1;
  if (iVar6 < iVar7) {
    iVar9 = iVar6 * 2;
    if (iVar6 * 2 <= iVar7) {
      iVar9 = iVar7;
    }
    if (iVar6 < iVar9) {
      arrVector<unsigned_short>::Realloc(this_00,iVar9);
    }
  }
  memmove((void *)(*(int *)this_00 + iVar7 * 2),(void *)(*(int *)this_00 + iVar8 * 2),
          (*(int *)(this_00 + 4) - iVar8) * 2);
  for (; iVar8 < iVar7; iVar8 = iVar8 + 1) {
    puVar1 = (undefined2 *)(*(int *)this_00 + iVar8 * 2);
    if (puVar1 != (undefined2 *)0x0) {
      *puVar1 = 0;
    }
  }
  *(int *)(this_00 + 4) = *(int *)(this_00 + 4) + 1;
  *param_1 = local_14;
  return 0;
joined_r0x005081ce:
  local_14 = puVar5;
  if (uVar3 == 0) goto LAB_00508156;
  if (local_10 == 0) {
    if (uVar3 == 0x22) {
      local_c = (uint)(uVar4 == 0);
    }
    else {
      if ((uVar4 == 0) && ((uVar3 == 0x20 || (uVar3 == 9)))) goto LAB_00508156;
      if (uVar3 == 0x5c) {
        local_10 = 1;
      }
      else {
        iVar8 = *(int *)(this_00 + 4);
        iVar6 = *(int *)(this_00 + 8);
        iVar7 = iVar8 + 1;
        if (iVar6 < iVar7) {
          iVar9 = iVar6 * 2;
          if (iVar6 * 2 <= iVar7) {
            iVar9 = iVar7;
          }
          if (iVar6 < iVar9) {
            arrVector<unsigned_short>::Realloc(this_00,iVar9);
          }
        }
        memmove((void *)(*(int *)this_00 + iVar7 * 2),(void *)(*(int *)this_00 + iVar8 * 2),
                (*(int *)(this_00 + 4) - iVar8) * 2);
        for (; iVar8 < iVar7; iVar8 = iVar8 + 1) {
          puVar2 = (ushort *)(*(int *)this_00 + iVar8 * 2);
          if (puVar2 != (ushort *)0x0) {
            *puVar2 = *puVar5;
          }
        }
        *(int *)(this_00 + 4) = *(int *)(this_00 + 4) + 1;
      }
    }
    local_14 = local_14 + 1;
  }
  else {
    uVar3 = *puVar5;
    if (uVar3 == 0x22) {
      iVar7 = *(int *)(this_00 + 4);
      ppaVar10 = &local_4;
      local_4 = (arrVector<unsigned_short> *)0x22;
    }
    else {
      if (uVar3 == 0x30) {
        iVar8 = *(int *)(this_00 + 4);
        iVar7 = iVar8 + 1;
        if (*(int *)(this_00 + 8) < iVar7) {
          iVar6 = *(int *)(this_00 + 8) * 2;
          if (iVar6 <= iVar7) {
            iVar6 = iVar7;
          }
          arrVector<unsigned_short>::Reserve(this_00,iVar6);
        }
        memmove((void *)(*(int *)this_00 + iVar7 * 2),(void *)(*(int *)this_00 + iVar8 * 2),
                (*(int *)(this_00 + 4) - iVar8) * 2);
        for (; iVar8 < iVar7; iVar8 = iVar8 + 1) {
          puVar1 = (undefined2 *)(*(int *)this_00 + iVar8 * 2);
          if (puVar1 != (undefined2 *)0x0) {
            *puVar1 = 0;
          }
        }
        iVar7 = *(int *)(this_00 + 4);
        *(int *)(this_00 + 4) = iVar7 + 1;
        iVar7 = ReadEscChar(local_8,&local_14,(ushort *)(*(int *)this_00 + -2 + (iVar7 + 1) * 2));
        if (iVar7 == 0) {
          return 1;
        }
        local_10 = 0;
        goto LAB_00508378;
      }
      if (uVar3 != 0x6e) {
        return 1;
      }
      iVar7 = *(int *)(this_00 + 4);
      ppaVar10 = &param_2;
      param_2 = (arrVector<unsigned_short> *)0xa;
    }
    arrVector<unsigned_short>::Insert(this_00,iVar7,(ushort *)ppaVar10,1);
    local_10 = 0;
    local_14 = local_14 + 1;
  }
LAB_00508378:
  uVar3 = *local_14;
  uVar4 = local_c;
  puVar5 = local_14;
  goto joined_r0x005081ce;
}




/* from: gs:gs_strings.cpp
   addr: 005083A0 */

int __thiscall gsSTRINGS::ReadEscChar(gsSTRINGS *this,ushort **param_1,ushort *param_2)

{
  ushort uVar1;
  ushort *puVar2;
  
  puVar2 = *param_1;
  *param_2 = 0;
  do {
    uVar1 = *puVar2;
    if ((uVar1 < 0x30) || (0x39 < uVar1)) {
      if ((uVar1 < 0x61) || (0x66 < uVar1)) {
        if ((uVar1 < 0x41) || (0x46 < uVar1)) {
          return 1;
        }
        uVar1 = *param_2 * 0x100 + -0x26 + uVar1;
      }
      else {
        uVar1 = *param_2 * 0x100 + -0x57 + uVar1;
      }
    }
    else {
      uVar1 = *param_2 * 0x100 + -0x30 + uVar1;
    }
    puVar2 = puVar2 + 1;
    *param_2 = uVar1;
    if (*puVar2 == 0) {
      *param_1 = puVar2;
      return 0;
    }
  } while( true );
}




/* from: gs:gs_strings.cpp
   addr: 00508420 */

int __thiscall gsSTRINGS::LoadStringsTable(gsSTRINGS *this,char *param_1)

{
  short sVar1;
  gsSTRINGS *pgVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  int unaff_EBX;
  int iVar6;
  int unaff_ESI;
  int iVar7;
  short *unaff_EDI;
  void *local_14c;
  int local_148;
  int local_144;
  gsSTRINGS *pgStack_140;
  arrVector<unsigned_short> *paStack_13c;
  arrVector<class_uiAREA*> *paStack_138;
  gsSTRINGS *local_134;
  arrVector<unsigned_short> *local_130;
  arrVector<class_uiAREA*> *local_12c;
  arrVector<struct_gsSTRINGS::Record> *local_128;
  undefined **local_124 [68];
  int local_14;
  undefined4 local_4;
  
  local_134 = this;
  fioFILE::fioFILE((fioFILE *)local_124);
  iVar6 = 0;
  local_4 = 0;
  local_124[0] = &fioFILE_DISK::_vftable_;
  local_14c = (void *)0x0;
  local_144 = 0;
  local_148 = 0;
  arrVector<unsigned_short>::Resize((arrVector<unsigned_short> *)&local_14c,0);
  iVar3 = fioFILE_DISK::Init((fioFILE_DISK *)local_124,param_1,1);
  if (iVar3 == 0) {
    apFree(local_14c);
    return 5;
  }
  if (*(int *)(this + 8) < *(int *)(this + 4) + local_14) {
    arrVector<unsigned_char>::Realloc
              ((arrVector<unsigned_char> *)this,*(int *)(this + 4) + local_14);
  }
  local_130 = (arrVector<unsigned_short> *)(this + 0xc);
  if (*(int *)(this + 0x14) < *(int *)(this + 0x10) + local_14) {
    arrVector<unsigned_short>::Realloc(local_130,*(int *)(this + 0x10) + local_14);
  }
  local_128 = (arrVector<struct_gsSTRINGS::Record> *)(this + 0x24);
  if (*(int *)(this + 0x2c) < *(int *)(this + 0x28) + 0x100) {
    arrVector<struct_gsSTRINGS::Record>::Realloc(local_128,*(int *)(this + 0x28) + 0x100);
  }
  local_12c = (arrVector<class_uiAREA*> *)(this + 0x18);
  if (*(int *)(this + 0x20) < *(int *)(this + 0x1c) + 0x100) {
    arrVector<class_uiAREA*>::Realloc(local_12c,*(int *)(this + 0x1c) + 0x100);
  }
  if (local_148 < 0x100) {
    arrVector<unsigned_short>::Reserve((arrVector<unsigned_short> *)&local_14c,0x100);
  }
  local_148 = 0x100;
  (*(code *)local_124[0][5])(local_14c,2,2);
  local_14c = (void *)(local_14 + -2);
  if (*unaff_EDI != -0x101) {
    apFree(unaff_EDI);
    return 1;
  }
  iVar3 = 0;
  local_148 = 0;
  do {
    local_144 = 1;
    iVar7 = iVar3;
LAB_00508572:
    if (iVar3 != iVar6) {
LAB_00508654:
      sVar1 = unaff_EDI[iVar3];
      if (local_144 == 0) {
        if ((sVar1 == 10) || (sVar1 == 0xd)) goto LAB_0050869d;
LAB_00508687:
        iVar3 = iVar3 + 1;
      }
      else {
        if ((sVar1 == 10) || (sVar1 == 0xd)) goto LAB_00508687;
        local_144 = 0;
        iVar7 = iVar3;
      }
      goto LAB_00508572;
    }
    if (local_14c != (void *)0x0) {
      iVar4 = unaff_ESI;
      if (0 < iVar7) {
        memmove(unaff_EDI,unaff_EDI + iVar7,(unaff_ESI - iVar7) * 2);
        if (unaff_ESI - iVar7 < unaff_EBX) {
          arrVector<unsigned_short>::Reserve
                    ((arrVector<unsigned_short> *)&stack0xfffffea8,unaff_EBX);
        }
        iVar6 = iVar6 - iVar7;
        iVar3 = iVar3 - iVar7;
        iVar7 = 0;
        iVar4 = unaff_EBX;
        local_148 = iVar6;
      }
      unaff_ESI = iVar4;
      if (((iVar4 - iVar6) + -1 < 0x100) && (unaff_ESI = iVar4 + 0x101, iVar4 < unaff_ESI)) {
        arrVector<unsigned_short>::Reserve((arrVector<unsigned_short> *)&stack0xfffffea8,unaff_ESI);
      }
      iVar4 = (unaff_ESI - iVar6) + -1;
      if ((int)local_14c / 2 < iVar4) {
        iVar4 = (int)local_14c / 2;
      }
      (**(code **)(local_130 + 0x14))(unaff_EDI + local_148,iVar4 * 2,2);
      iVar6 = local_148 + iVar4;
      local_14c = (void *)((int)local_14c + iVar4 * -2);
      this = pgStack_140;
      local_148 = iVar6;
    }
    if (iVar3 != iVar6) goto LAB_00508654;
    if (local_144 != 0) {
      unaff_EDI[iVar7] = 0;
      goto LAB_005086a4;
    }
LAB_0050869d:
    unaff_EDI[iVar3] = 0;
    iVar3 = iVar3 + 1;
LAB_005086a4:
    iVar7 = ParseTableLine(this,(ushort *)(unaff_EDI + iVar7));
    if ((iVar7 != 0) || ((this = pgStack_140, iVar3 == iVar6 && (local_14c == (void *)0x0)))) {
      fioFILE_DISK::Term((fioFILE_DISK *)&local_130);
      arrVector<unsigned_char>::Realloc
                ((arrVector<unsigned_char> *)pgStack_140,*(int *)(pgStack_140 + 4));
      arrVector<unsigned_short>::Realloc(paStack_13c,*(int *)(paStack_13c + 4));
      arrVector<class_uiAREA*>::Realloc(paStack_138,*(int *)(paStack_138 + 4));
      pgVar2 = local_134;
      iVar3 = *(int *)(local_134 + 4);
      if (iVar3 != *(int *)(local_134 + 8)) {
        pvVar5 = apRealloc(*(void **)local_134,iVar3 * 8);
        *(void **)pgVar2 = pvVar5;
        *(int *)(pgVar2 + 8) = iVar3;
      }
      apFree(unaff_EDI);
      return iVar7;
    }
  } while( true );
}




/* from: gs:gs_strings.cpp
   addr: 00508750 */

void __thiscall arrVector<unsigned_short>::Reserve(arrVector<unsigned_short> *this,int param_1)

{
  void *pvVar1;
  
  if (*(int *)(this + 8) < param_1) {
    if (param_1 < *(int *)(this + 4)) {
      *(int *)(this + 4) = param_1;
    }
    pvVar1 = apRealloc(*(void **)this,param_1 * 2);
    *(void **)this = pvVar1;
    *(int *)(this + 8) = param_1;
  }
  return;
}




/* from: gs:gs_strings.cpp
   addr: 00508780 */

void __thiscall
arrVector<unsigned_short>::Insert
          (arrVector<unsigned_short> *this,int param_1,ushort *param_2,ushort *param_3)

{
  int iVar1;
  ushort *puVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = (int)param_3 - (int)param_2 >> 1;
  if (iVar5 != 0) {
    iVar3 = *(int *)(this + 8);
    iVar1 = *(int *)(this + 4) + iVar5;
    if (iVar3 < iVar1) {
      iVar6 = iVar3 * 2;
      if (iVar3 * 2 <= iVar1) {
        iVar6 = iVar1;
      }
      if (iVar3 < iVar6) {
        if (iVar6 < *(int *)(this + 4)) {
          *(int *)(this + 4) = iVar6;
        }
        pvVar4 = apRealloc(*(void **)this,iVar6 * 2);
        *(void **)this = pvVar4;
        *(int *)(this + 8) = iVar6;
      }
    }
    iVar1 = param_1 + iVar5;
    memmove((void *)(*(int *)this + iVar1 * 2),(void *)(*(int *)this + param_1 * 2),
            (*(int *)(this + 4) - param_1) * 2);
    if (param_1 < iVar1) {
      do {
        puVar2 = (ushort *)(*(int *)this + param_1 * 2);
        if (puVar2 != (ushort *)0x0) {
          *puVar2 = *param_2;
        }
        param_2 = param_2 + 1;
        param_1 = param_1 + 1;
      } while (param_1 < iVar1);
    }
    *(int *)(this + 4) = *(int *)(this + 4) + iVar5;
  }
  return;
}




/* from: gs:gs_strings.cpp
   addr: 00508830 */

void __thiscall
arrVector<struct_gsSTRINGS::Record>::Sort
          (arrVector<struct_gsSTRINGS::Record> *this,RecordCmp *param_1,
          arrStdSwap<struct_gsSTRINGS::Record> *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  byte *pbVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  byte *pbVar9;
  int iVar10;
  bool bVar11;
  
  do {
    iVar8 = 1;
    bVar4 = false;
    if (*(int *)(this + 4) < 2) {
      return;
    }
    do {
      iVar10 = iVar8 + -1;
      if (-1 < iVar10) {
        piVar7 = (int *)(*(int *)this + -8 + iVar8 * 8);
        do {
          pbVar5 = (byte *)(*piVar7 + **(int **)param_1);
          pbVar9 = (byte *)(*(int *)(*(int *)this + iVar8 * 8) + **(int **)param_1);
          do {
            bVar1 = *pbVar5;
            bVar11 = bVar1 < *pbVar9;
            if (bVar1 != *pbVar9) {
LAB_005088a7:
              iVar6 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
              goto LAB_005088ac;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar5[1];
            bVar11 = bVar1 < pbVar9[1];
            if (bVar1 != pbVar9[1]) goto LAB_005088a7;
            pbVar5 = pbVar5 + 2;
            pbVar9 = pbVar9 + 2;
          } while (bVar1 != 0);
          iVar6 = 0;
LAB_005088ac:
          if (iVar6 != -1) break;
          iVar10 = iVar10 + -1;
          piVar7 = piVar7 + -2;
        } while (-1 < iVar10);
      }
      iVar10 = iVar10 + 1;
      if (iVar10 != iVar8) {
        iVar6 = *(int *)this;
        bVar4 = true;
        uVar2 = *(undefined4 *)(iVar6 + iVar8 * 8);
        uVar3 = *(undefined4 *)(iVar6 + 4 + iVar8 * 8);
        *(undefined4 *)(iVar6 + iVar8 * 8) = *(undefined4 *)(iVar6 + iVar10 * 8);
        *(undefined4 *)(iVar6 + 4 + iVar8 * 8) = *(undefined4 *)(iVar6 + 4 + iVar10 * 8);
        *(undefined4 *)(iVar6 + iVar10 * 8) = uVar2;
        *(undefined4 *)(iVar6 + 4 + iVar10 * 8) = uVar3;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(int *)(this + 4));
    if (!bVar4) {
      return;
    }
  } while( true );
}




/* from: gs:gs_strings.cpp
   addr: 00508910 */

int __thiscall
arrVector<struct_gsSTRINGS::Record>::FindSorted
          (arrVector<struct_gsSTRINGS::Record> *this,char **param_1,RecordCmp *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  bool bVar9;
  
  iVar5 = 0;
  iVar2 = *(int *)(this + 4);
  do {
    iVar6 = iVar2;
    if (iVar5 == iVar6) {
      return -1;
    }
    iVar8 = (iVar5 + iVar6) / 2;
    pbVar7 = (byte *)*param_1;
    pbVar4 = (byte *)(*(int *)(*(int *)this + iVar8 * 8) + **(int **)param_2);
    do {
      bVar1 = *pbVar4;
      bVar9 = bVar1 < *pbVar7;
      if (bVar1 != *pbVar7) {
LAB_00508967:
        iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
        goto LAB_0050896c;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar9 = bVar1 < pbVar7[1];
      if (bVar1 != pbVar7[1]) goto LAB_00508967;
      pbVar4 = pbVar4 + 2;
      pbVar7 = pbVar7 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_0050896c:
    iVar2 = iVar8;
    if (iVar3 != -1) {
      if (iVar3 == 0) {
        return iVar8;
      }
      iVar2 = iVar6;
      if (iVar3 == 1) {
        iVar5 = iVar8 + 1;
      }
    }
  } while( true );
}




/* from: gs:gs_strings.cpp
   addr: 005089A0
   addr: 005089A0 */

void __thiscall arrVector<void*>::Resize(arrVector<void*> *this,int param_1)

{
  void *pvVar1;
  
  if (((*(int *)(this + 4) <= param_1) && (*(int *)(this + 4) < param_1)) &&
     (*(int *)(this + 8) < param_1)) {
    pvVar1 = apRealloc(*(void **)this,param_1 * 4);
    *(void **)this = pvVar1;
    *(int *)(this + 8) = param_1;
  }
  *(int *)(this + 4) = param_1;
  return;
}




/* from: gs:gs_strings.cpp
   addr: 005089E0
   addr: 005089E0 */

void __thiscall
arrVector<struct_uiFONT_TMP_LINE>::Resize(arrVector<struct_uiFONT_TMP_LINE> *this,int param_1)

{
  void *pvVar1;
  
  if (((*(int *)(this + 4) <= param_1) && (*(int *)(this + 4) < param_1)) &&
     (*(int *)(this + 8) < param_1)) {
    pvVar1 = apRealloc(*(void **)this,param_1 * 8);
    *(void **)this = pvVar1;
    *(int *)(this + 8) = param_1;
  }
  *(int *)(this + 4) = param_1;
  return;
}




/* from: gs:gs_strings.cpp
   addr: 00508A20
   addr: 00508A20
   addr: 00508A20 */

void __thiscall
arrVector<struct_wrUI_STRINGS::Record>::Insert
          (arrVector<struct_wrUI_STRINGS::Record> *this,int param_1,Record *param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  
  if (param_3 != 0) {
    iVar3 = *(int *)(this + 8);
    iVar1 = *(int *)(this + 4) + param_3;
    if (iVar3 < iVar1) {
      iVar5 = iVar3 * 2;
      if (iVar3 * 2 <= iVar1) {
        iVar5 = iVar1;
      }
      if (iVar3 < iVar5) {
        if (iVar5 < *(int *)(this + 4)) {
          *(int *)(this + 4) = iVar5;
        }
        pvVar4 = apRealloc(*(void **)this,iVar5 * 8);
        *(void **)this = pvVar4;
        *(int *)(this + 8) = iVar5;
      }
    }
    iVar1 = param_1 + param_3;
    memmove((void *)(*(int *)this + iVar1 * 8),(void *)(*(int *)this + param_1 * 8),
            (*(int *)(this + 4) - param_1) * 8);
    if (param_1 < iVar1) {
      do {
        puVar2 = (undefined4 *)(*(int *)this + param_1 * 8);
        if (puVar2 != (undefined4 *)0x0) {
          *puVar2 = *(undefined4 *)param_2;
          puVar2[1] = *(undefined4 *)(param_2 + 4);
        }
        param_1 = param_1 + 1;
      } while (param_1 < iVar1);
    }
    *(int *)(this + 4) = *(int *)(this + 4) + param_3;
  }
  return;
}




/* from: gs:gs_strings.cpp
   addr: 00508AC0
   addr: 00508AC0 */

void __thiscall
arrVector<void*>::Insert(arrVector<void*> *this,int param_1,void **param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  
  if (param_3 != 0) {
    iVar3 = *(int *)(this + 8);
    iVar1 = *(int *)(this + 4) + param_3;
    if (iVar3 < iVar1) {
      iVar5 = iVar3 * 2;
      if (iVar3 * 2 <= iVar1) {
        iVar5 = iVar1;
      }
      if (iVar3 < iVar5) {
        if (iVar5 < *(int *)(this + 4)) {
          *(int *)(this + 4) = iVar5;
        }
        pvVar4 = apRealloc(*(void **)this,iVar5 * 4);
        *(void **)this = pvVar4;
        *(int *)(this + 8) = iVar5;
      }
    }
    iVar1 = param_1 + param_3;
    memmove((void *)(*(int *)this + iVar1 * 4),(void *)(*(int *)this + param_1 * 4),
            (*(int *)(this + 4) - param_1) * 4);
    if (param_1 < iVar1) {
      do {
        puVar2 = (undefined4 *)(*(int *)this + param_1 * 4);
        if (puVar2 != (undefined4 *)0x0) {
          *puVar2 = *param_2;
        }
        param_1 = param_1 + 1;
      } while (param_1 < iVar1);
    }
    *(int *)(this + 4) = *(int *)(this + 4) + param_3;
  }
  return;
}

