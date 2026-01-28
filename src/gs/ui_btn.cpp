
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:ui_btn.cpp
   addr: 00515500 */

void __thiscall uiBUTTON::Init(uiBUTTON *this,objOBJ *param_1)

{
  char cVar1;
  psSHEET *ppVar2;
  int iVar3;
  txmTEXTURE *ptVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uiBUTTON *puVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  uiBUTTON *puVar14;
  char local_50 [4];
  undefined4 local_4c;
  char local_48 [68];
  uint uStack_4;
  
  local_50[0] = '\0';
  local_50[1] = '\0';
  local_50[2] = '\0';
  local_50[3] = '\0';
  local_4c = 0;
  local_48[0] = '\0';
  local_48[1] = '\0';
  local_48[2] = '\0';
  local_48[3] = '\0';
  local_48[4] = '\0';
  local_48[5] = '\0';
  local_48[6] = '\0';
  local_48[7] = '\0';
  uiAREA::Init((uiAREA *)this,param_1);
  puVar14 = this + 0x130;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x406;
  puVar10 = puVar14;
  for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
    *(int *)puVar10 = 0;
    puVar10 = puVar10 + 4;
  }
  ppVar2 = *(psSHEET **)(param_1 + 0xf0);
  if ((ppVar2 == (psSHEET *)0x0) ||
     (iVar9 = psSHEET::GetStr(ppVar2,s_UI_PROP,s_hotKeyID,local_48 + 8,0x40), iVar9 == 0)) {
    uVar5 = (**(code **)(*(int *)this + 0x6c))();
    *(undefined4 *)(this + 0x170) = uVar5;
  }
  else {
    *(undefined4 *)(this + 0x170) = 0xffffffff;
  }
  *(undefined4 *)(this + 300) = 0;
  if ((ppVar2 != (psSHEET *)0x0) &&
     (iVar9 = psSHEET::GetStr(ppVar2,s_UI_PROP,s_code,local_48 + 8,0x40), iVar9 != 0)) {
    iVar9 = 0;
    do {
      iVar3 = iVar9 + 8;
      if (local_48[iVar3] == '\0') break;
      iVar9 = iVar9 + 1;
      *(int *)(this + 300) = *(int *)(this + 300) * 0x100 + (int)local_48[iVar3];
    } while (iVar9 < 4);
  }
  iVar9 = *(int *)(this + 0xb4);
  if (iVar9 == 0) {
    *(int *)puVar14 = 0;
    *(undefined4 *)(this + 0x140) = 0;
    *(undefined4 *)(this + 0x150) = 0;
    *(undefined4 *)(this + 0x160) = 0;
  }
  else {
    *(int *)puVar14 = iVar9;
    pcVar12 = (char *)(iVar9 + 8);
    strncpy(local_48 + 8,pcVar12,0x40);
    iVar9 = -1;
    uStack_4 = uStack_4 & 0xffffff;
    pcVar13 = local_48 + 8;
    do {
      pcVar11 = pcVar13;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pcVar11 = pcVar13 + 1;
      cVar1 = *pcVar13;
      pcVar13 = pcVar11;
    } while (cVar1 != '\0');
    *(undefined2 *)(pcVar11 + -1) = _s__p;
    pcVar11[1] = DAT_005f794e;
    ptVar4 = txmMANAGER::Add(txmManager,local_48 + 8,3,1);
    *(txmTEXTURE **)(this + 0x140) = ptVar4;
    strncpy(local_48 + 8,pcVar12,0x40);
    iVar9 = -1;
    uStack_4 = uStack_4 & 0xffffff;
    pcVar13 = local_48 + 8;
    do {
      pcVar11 = pcVar13;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pcVar11 = pcVar13 + 1;
      cVar1 = *pcVar13;
      pcVar13 = pcVar11;
    } while (cVar1 != '\0');
    *(undefined2 *)(pcVar11 + -1) = _s__r;
    pcVar11[1] = DAT_005f794a;
    ptVar4 = txmMANAGER::Add(txmManager,local_48 + 8,3,1);
    *(txmTEXTURE **)(this + 0x150) = ptVar4;
    strncpy(local_48 + 8,pcVar12,0x40);
    iVar9 = -1;
    uStack_4 = uStack_4 & 0xffffff;
    pcVar12 = local_48 + 8;
    do {
      pcVar13 = pcVar12;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pcVar13 = pcVar12 + 1;
      cVar1 = *pcVar12;
      pcVar12 = pcVar13;
    } while (cVar1 != '\0');
    *(undefined2 *)(pcVar13 + -1) = _s__d;
    pcVar13[1] = DAT_005f7946;
    ptVar4 = txmMANAGER::Add(txmManager,local_48 + 8,3,1);
    *(txmTEXTURE **)(this + 0x160) = ptVar4;
  }
  uVar5 = (**(code **)(*(int *)this + 0x70))(0);
  *(undefined4 *)(this + 0x134) = uVar5;
  if ((ppVar2 == (psSHEET *)0x0) ||
     (iVar9 = psSHEET::GetColor(ppVar2,s_UI_PROP,s_pColor,(m3dCOLOR *)&stack0xffffffac), iVar9 == 0)
     ) {
    uVar5 = (**(code **)(*(int *)this + 0x70))(1);
    *(undefined4 *)(this + 0x144) = uVar5;
  }
  else {
    uVar6 = ftol();
    iVar9 = ftol();
    uVar7 = ftol();
    uVar8 = ftol();
    *(uint *)(this + 0x144) = ((uVar6 & 0xff | iVar9 << 8) << 8 | uVar7 & 0xff) << 8 | uVar8 & 0xff;
  }
  if ((ppVar2 == (psSHEET *)0x0) ||
     (iVar9 = psSHEET::GetColor(ppVar2,s_UI_PROP,s_rColor,(m3dCOLOR *)&stack0xffffffac), iVar9 == 0)
     ) {
    uVar5 = (**(code **)(*(int *)this + 0x70))(2);
    *(undefined4 *)(this + 0x154) = uVar5;
  }
  else {
    uVar6 = ftol();
    iVar9 = ftol();
    uVar7 = ftol();
    uVar8 = ftol();
    *(uint *)(this + 0x154) = ((uVar6 & 0xff | iVar9 << 8) << 8 | uVar7 & 0xff) << 8 | uVar8 & 0xff;
  }
  if ((ppVar2 == (psSHEET *)0x0) ||
     (iVar9 = psSHEET::GetColor(ppVar2,s_UI_PROP,s_dColor,(m3dCOLOR *)&stack0xffffffac), iVar9 == 0)
     ) {
    uVar5 = (**(code **)(*(int *)this + 0x70))(3);
    *(undefined4 *)(this + 0x164) = uVar5;
  }
  else {
    uVar6 = ftol();
    iVar9 = ftol();
    uVar7 = ftol();
    uVar8 = ftol();
    *(uint *)(this + 0x164) = ((uVar6 & 0xff | iVar9 << 8) << 8 | uVar7 & 0xff) << 8 | uVar8 & 0xff;
  }
  if (((byte)this[0xac] & 2) != 0) {
    uVar5 = (**(code **)(*(int *)this + 0x78))(0);
    *(undefined4 *)(this + 0x138) = uVar5;
    ppVar2 = *(psSHEET **)(uStack_4 + 0xf0);
    if ((ppVar2 == (psSHEET *)0x0) ||
       (iVar9 = psSHEET::GetStr(ppVar2,s_UI_PROP,s_pFontID,local_48,0x40), iVar9 == 0)) {
      uVar5 = (**(code **)(*(int *)this + 0x78))(1);
    }
    else {
      uVar5 = (**(code **)(*(int *)uiSystem + 0x54))(local_48);
    }
    *(undefined4 *)(this + 0x148) = uVar5;
    if ((ppVar2 == (psSHEET *)0x0) ||
       (iVar9 = psSHEET::GetStr(ppVar2,s_UI_PROP,s_rFontID,(char *)&local_4c,0x40), iVar9 == 0)) {
      uVar5 = (**(code **)(*(int *)this + 0x78))(2);
    }
    else {
      uVar5 = (**(code **)(*(int *)uiSystem + 0x54))(&local_4c);
    }
    *(undefined4 *)(this + 0x158) = uVar5;
    if ((ppVar2 == (psSHEET *)0x0) ||
       (iVar9 = psSHEET::GetStr(ppVar2,s_UI_PROP,s_dFontID,local_50,0x40), iVar9 == 0)) {
      uVar5 = (**(code **)(*(int *)this + 0x78))(3);
    }
    else {
      uVar5 = (**(code **)(*(int *)uiSystem + 0x54))(local_50);
    }
    *(undefined4 *)(this + 0x168) = uVar5;
    uVar5 = (**(code **)(*(int *)this + 0x74))(0);
    *(undefined4 *)(this + 0x13c) = uVar5;
    if ((ppVar2 == (psSHEET *)0x0) ||
       (iVar9 = psSHEET::GetColor(ppVar2,s_UI_PROP,s_pColorText,(m3dCOLOR *)&stack0xffffffac),
       iVar9 == 0)) {
      uVar5 = (**(code **)(*(int *)this + 0x74))(1);
      *(undefined4 *)(this + 0x14c) = uVar5;
    }
    else {
      uVar6 = ftol();
      iVar9 = ftol();
      uVar7 = ftol();
      uVar8 = ftol();
      *(uint *)(this + 0x14c) =
           ((uVar6 & 0xff | iVar9 << 8) << 8 | uVar7 & 0xff) << 8 | uVar8 & 0xff;
    }
    if ((ppVar2 == (psSHEET *)0x0) ||
       (iVar9 = psSHEET::GetColor(ppVar2,s_UI_PROP,s_rColorText,(m3dCOLOR *)&stack0xffffffac),
       iVar9 == 0)) {
      uVar5 = (**(code **)(*(int *)this + 0x74))(2);
      *(undefined4 *)(this + 0x15c) = uVar5;
    }
    else {
      uVar6 = ftol();
      iVar9 = ftol();
      uVar7 = ftol();
      uVar8 = ftol();
      *(uint *)(this + 0x15c) =
           ((uVar6 & 0xff | iVar9 << 8) << 8 | uVar7 & 0xff) << 8 | uVar8 & 0xff;
    }
    if ((ppVar2 == (psSHEET *)0x0) ||
       (iVar9 = psSHEET::GetColor(ppVar2,s_UI_PROP,s_dColorText,(m3dCOLOR *)&stack0xffffffac),
       iVar9 == 0)) {
      uVar5 = (**(code **)(*(int *)this + 0x74))(3);
      *(undefined4 *)(this + 0x16c) = uVar5;
    }
    else {
      uVar6 = ftol();
      iVar9 = ftol();
      uVar7 = ftol();
      uVar8 = ftol();
      *(uint *)(this + 0x16c) =
           ((uVar6 & 0xff | iVar9 << 8) << 8 | uVar7 & 0xff) << 8 | uVar8 & 0xff;
    }
  }
  *(undefined4 *)(this + 0x128) = 0;
  iVar9 = (**(code **)(*(int *)this + 0x68))();
  puVar14 = this + (iVar9 + 0x13) * 0x10;
  if (*(txmTEXTURE **)puVar14 != (txmTEXTURE *)0x0) {
    uiRENDER_INFO::SetTex((uiRENDER_INFO *)(this + 0x6c),*(txmTEXTURE **)puVar14);
  }
  uiRENDER_INFO::SetColor((uiRENDER_INFO *)(this + 0x6c),*(ulong *)(puVar14 + 4));
  if (((byte)this[0xac] & 2) != 0) {
    if (*(uiFONT **)(puVar14 + 8) != (uiFONT *)0x0) {
      uiAREA::SetFont((uiAREA *)this,*(uiFONT **)(puVar14 + 8));
    }
    uiRENDER_INFO::SetColorText((uiRENDER_INFO *)(this + 0x6c),*(ulong *)(puVar14 + 0xc));
  }
  return;
}




/* from: gs:ui_btn.cpp
   addr: 00515B40 */

void __thiscall uiBUTTON::ProcessCommand(uiBUTTON *this)

{
  uiBUTTON *local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (*(int **)(this + 8) != (int *)0x0) {
    local_4 = *(undefined4 *)(this + 300);
    local_8 = 0x42544e43;
    local_c = this;
    (**(code **)(**(int **)(this + 8) + 0x5c))(&local_c);
  }
  return;
}




/* from: gs:ui_btn.cpp
   addr: 00515B80 */

int __thiscall uiBUTTON::GetRole(uiBUTTON *this)

{
  if ((*(uint *)(this + 4) & 0x800) != 0) {
    return 3;
  }
  if (((byte)this[0x128] & 7) != 0) {
    return 1;
  }
  return ((int)(char)*(uint *)(this + 4) & 0x20U) >> 4;
}




/* from: gs:ui_btn.cpp
   addr: 00515BC0 */

int __thiscall uiBUTTON::OnMouseButton(uiBUTTON *this,uiINPUT_INFO *param_1)

{
  uint uVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  uiBUTTON *puVar5;
  
  if ((*(uint *)(this + 4) & 0x800) != 0) {
    return 1;
  }
  bVar2 = false;
  if (*(int *)param_1 == 2) {
    if (((byte)this[0x128] & 7) == 0) {
      iVar4 = *(int *)uiSystem;
      uVar3 = (**(code **)(*(int *)this + 0x60))();
      (**(code **)(iVar4 + 0x84))(uVar3);
    }
    *(uint *)(this + 0x128) = *(uint *)(this + 0x128) | 1;
  }
  else if (((*(int *)param_1 == 3) && (uVar1 = *(uint *)(this + 0x128), (uVar1 & 1) != 0)) &&
          (*(uint *)(this + 0x128) = uVar1 & 0xfffffffe, (uVar1 & 6) == 0)) {
    bVar2 = true;
  }
  iVar4 = (**(code **)(*(int *)this + 0x68))();
  puVar5 = this + (iVar4 + 0x13) * 0x10;
  if (*(txmTEXTURE **)puVar5 != (txmTEXTURE *)0x0) {
    uiRENDER_INFO::SetTex((uiRENDER_INFO *)(this + 0x6c),*(txmTEXTURE **)puVar5);
  }
  uiRENDER_INFO::SetColor((uiRENDER_INFO *)(this + 0x6c),*(ulong *)(puVar5 + 4));
  if (((byte)this[0xac] & 2) != 0) {
    if (*(uiFONT **)(puVar5 + 8) != (uiFONT *)0x0) {
      uiAREA::SetFont((uiAREA *)this,*(uiFONT **)(puVar5 + 8));
    }
    uiRENDER_INFO::SetColorText((uiRENDER_INFO *)(this + 0x6c),*(ulong *)(puVar5 + 0xc));
  }
  if (bVar2) {
    (**(code **)(*(int *)this + 100))();
  }
  return 0;
}




/* from: gs:ui_btn.cpp
   addr: 00515CA0 */

int __thiscall uiBUTTON::OnKeyboard(uiBUTTON *this,uiINPUT_INFO *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uiBUTTON *puVar5;
  bool bVar6;
  
  if ((*(uint *)(this + 4) & 0x800) != 0) {
    return 1;
  }
  uVar1 = *(uint *)(this + 0x128);
  bVar6 = (uVar1 & 7) != 0;
  iVar4 = 1;
  if (*(int *)param_1 == 6) {
    if ((*(int *)(param_1 + 0xc) != 9) || ((*(uint *)(this + 4) & 0x20) == 0)) goto LAB_00515d03;
    uVar1 = uVar1 | 4;
  }
  else {
    if ((*(int *)(param_1 + 0xc) != 9) || ((uVar1 & 4) == 0)) goto LAB_00515d03;
    uVar1 = uVar1 & 0xfffffffb;
  }
  *(uint *)(this + 0x128) = uVar1;
  iVar4 = 0;
LAB_00515d03:
  if (bVar6 != (((byte)this[0x128] & 7) != 0)) {
    iVar2 = (**(code **)(*(int *)this + 0x68))();
    puVar5 = this + (iVar2 + 0x13) * 0x10;
    if (*(txmTEXTURE **)puVar5 != (txmTEXTURE *)0x0) {
      uiRENDER_INFO::SetTex((uiRENDER_INFO *)(this + 0x6c),*(txmTEXTURE **)puVar5);
    }
    uiRENDER_INFO::SetColor((uiRENDER_INFO *)(this + 0x6c),*(ulong *)(puVar5 + 4));
    if (((byte)this[0xac] & 2) != 0) {
      if (*(uiFONT **)(puVar5 + 8) != (uiFONT *)0x0) {
        uiAREA::SetFont((uiAREA *)this,*(uiFONT **)(puVar5 + 8));
      }
      uiRENDER_INFO::SetColorText((uiRENDER_INFO *)(this + 0x6c),*(ulong *)(puVar5 + 0xc));
    }
    if (bVar6) {
      (**(code **)(*(int *)this + 100))();
      return iVar4;
    }
    iVar2 = *(int *)uiSystem;
    uVar3 = (**(code **)(*(int *)this + 0x60))();
    (**(code **)(iVar2 + 0x84))(uVar3);
  }
  return iVar4;
}




/* from: gs:ui_btn.cpp
   addr: 00515DD0 */

int __thiscall uiBUTTON::OnChar(uiBUTTON *this,uiINPUT_INFO *param_1)

{
  if (*(int *)(param_1 + 0xc) == *(int *)(this + 0x170)) {
    if (((byte)this[0x128] & 7) == 0) {
      (**(code **)(*(int *)this + 100))();
    }
    return 0;
  }
  return 1;
}




/* from: gs:ui_btn.cpp
   addr: 00515E00 */

int __thiscall uiBUTTON::OnKbdFocus(uiBUTTON *this,uiELEMENT *param_1)

{
  int iVar1;
  uiBUTTON *puVar2;
  
  if ((param_1 != (uiELEMENT *)this) && ((*(uint *)(this + 0x128) & 7) != 0)) {
    *(uint *)(this + 0x128) = *(uint *)(this + 0x128) & 0xfffffffb;
  }
  iVar1 = (**(code **)(*(int *)this + 0x68))();
  puVar2 = this + (iVar1 + 0x13) * 0x10;
  if (*(txmTEXTURE **)puVar2 != (txmTEXTURE *)0x0) {
    uiRENDER_INFO::SetTex((uiRENDER_INFO *)(this + 0x6c),*(txmTEXTURE **)puVar2);
  }
  uiRENDER_INFO::SetColor((uiRENDER_INFO *)(this + 0x6c),*(ulong *)(puVar2 + 4));
  if (((byte)this[0xac] & 2) != 0) {
    if (*(uiFONT **)(puVar2 + 8) != (uiFONT *)0x0) {
      uiAREA::SetFont((uiAREA *)this,*(uiFONT **)(puVar2 + 8));
    }
    uiRENDER_INFO::SetColorText((uiRENDER_INFO *)(this + 0x6c),*(ulong *)(puVar2 + 0xc));
  }
  return 1;
}




/* from: gs:ui_btn.cpp
   addr: 00515E80 */

int __thiscall uiBUTTON::OnMouseFocus(uiBUTTON *this,uiELEMENT *param_1)

{
  int iVar1;
  uiBUTTON *puVar2;
  
  if ((param_1 != (uiELEMENT *)this) && ((*(uint *)(this + 0x128) & 7) != 0)) {
    *(uint *)(this + 0x128) = *(uint *)(this + 0x128) & 0xfffffffe;
  }
  iVar1 = (**(code **)(*(int *)this + 0x68))();
  puVar2 = this + (iVar1 + 0x13) * 0x10;
  if (*(txmTEXTURE **)puVar2 != (txmTEXTURE *)0x0) {
    uiRENDER_INFO::SetTex((uiRENDER_INFO *)(this + 0x6c),*(txmTEXTURE **)puVar2);
  }
  uiRENDER_INFO::SetColor((uiRENDER_INFO *)(this + 0x6c),*(ulong *)(puVar2 + 4));
  if (((byte)this[0xac] & 2) != 0) {
    if (*(uiFONT **)(puVar2 + 8) != (uiFONT *)0x0) {
      uiAREA::SetFont((uiAREA *)this,*(uiFONT **)(puVar2 + 8));
    }
    uiRENDER_INFO::SetColorText((uiRENDER_INFO *)(this + 0x6c),*(ulong *)(puVar2 + 0xc));
  }
  return 1;
}




/* from: gs:ui_btn.cpp
   addr: 00515F00 */

void __thiscall uiBUTTON::Enable(uiBUTTON *this,int param_1)

{
  int iVar1;
  uiBUTTON *puVar2;
  
  uiELEMENT::Enable((uiELEMENT *)this,param_1);
  iVar1 = (**(code **)(*(int *)this + 0x68))();
  puVar2 = this + (iVar1 + 0x13) * 0x10;
  if (*(txmTEXTURE **)puVar2 != (txmTEXTURE *)0x0) {
    uiRENDER_INFO::SetTex((uiRENDER_INFO *)(this + 0x6c),*(txmTEXTURE **)puVar2);
  }
  uiRENDER_INFO::SetColor((uiRENDER_INFO *)(this + 0x6c),*(ulong *)(puVar2 + 4));
  if (((byte)this[0xac] & 2) != 0) {
    if (*(uiFONT **)(puVar2 + 8) != (uiFONT *)0x0) {
      uiAREA::SetFont((uiAREA *)this,*(uiFONT **)(puVar2 + 8));
    }
    uiRENDER_INFO::SetColorText((uiRENDER_INFO *)(this + 0x6c),*(ulong *)(puVar2 + 0xc));
  }
  return;
}

