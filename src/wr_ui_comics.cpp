
/* from: wr_ui_comics.cpp
   addr: 00486130 */

wrUI_COMICS * __thiscall wrUI_COMICS::wrUI_COMICS(wrUI_COMICS *this)

{
  uiELEMENT::uiELEMENT((uiELEMENT *)this);
  uiRENDER_ELEM::uiRENDER_ELEM((uiRENDER_ELEM *)(this + 0x6c));
  *(undefined4 *)(this + 0x118) = 0;
  *(undefined4 *)(this + 0x120) = 0;
  *(undefined4 *)(this + 0x11c) = 0;
  *(undefined4 *)(this + 0x124) = 0;
  *(undefined4 *)(this + 0x128) = 0;
  *(undefined4 *)(this + 0x130) = 0;
  *(undefined4 *)(this + 300) = 0;
  *(undefined4 *)(this + 0x144) = 0;
  *(undefined4 *)(this + 0x14c) = 0;
  *(undefined4 *)(this + 0x148) = 0;
  *(undefined4 *)(this + 0x150) = 0;
  *(undefined4 *)(this + 0x19c) = 0;
  *(undefined4 *)(this + 0x1a0) = 0;
  *(undefined4 *)(this + 0x1a4) = 0;
  *(undefined4 *)(this + 0x154) = 0;
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 0x134) = 0xffffffff;
  *(undefined4 *)(this + 0x138) = 0xffffffff;
  *(undefined4 *)(this + 0x13c) = 0xffffffff;
  *(undefined4 *)(this + 0x140) = 0xffffffff;
  return this;
}




/* from: wr_ui_comics.cpp
   addr: 004861D0
   addr: 004861D0 */

void * __thiscall wrUI_COMICS::_vector_deleting_destructor_(wrUI_COMICS *this,uint param_1)

{
  int iVar1;
  int iVar2;
  
  *(undefined ***)this = &_vftable_;
  Stop(this,1);
  iVar1 = 0;
  iVar2 = 0;
  if (0 < *(int *)(this + 300)) {
    do {
      operator_delete(*(void **)(*(int *)(this + 0x128) + iVar2 * 4));
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(this + 300));
  }
  if ((*(int *)(this + 300) < 0) && (*(int *)(this + 0x130) < 0)) {
    arrVector<class_uiAREA*>::Realloc((arrVector<class_uiAREA*> *)(this + 0x128),0);
  }
  *(undefined4 *)(this + 300) = 0;
  apFree(*(void **)(this + 0x144));
  apFree(*(void **)(this + 0x128));
  *(undefined ***)this = &uiAREA::_vftable_;
  iVar2 = 0;
  if (0 < *(int *)(this + 0x11c)) {
    do {
      uiRENDER_ELEM::~uiRENDER_ELEM((uiRENDER_ELEM *)(*(int *)(this + 0x118) + iVar1));
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0xac;
    } while (iVar2 < *(int *)(this + 0x11c));
  }
  apFree(*(void **)(this + 0x118));
  uiRENDER_ELEM::~uiRENDER_ELEM((uiRENDER_ELEM *)(this + 0x6c));
  *(undefined ***)this = &uiELEMENT::_vftable_;
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: wr_ui_comics.cpp
   addr: 004862B0 */

int __thiscall wrUI_COMICS::ProcessInit(wrUI_COMICS *this,void *param_1)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = uiELEMENT::OnChar((uiELEMENT *)this,(uiINPUT_INFO *)param_1);
  if (iVar1 == 0) {
    return 0;
  }
  qsort(*(void **)(this + 0x118),*(size_t *)(this + 0x11c),0xac,_compareRectY);
  iVar1 = *(int *)(this + 0x11c);
  if ((*(int *)(this + 0x148) < iVar1) && (*(int *)(this + 0x14c) < iVar1)) {
    arrVector<struct_wrUI_COMICS_ELEM>::Realloc
              ((arrVector<struct_wrUI_COMICS_ELEM> *)(this + 0x144),iVar1);
  }
  *(int *)(this + 0x148) = iVar1;
  iVar1 = 0;
  if (0 < *(int *)(this + 0x148)) {
    iVar4 = 0;
    iVar3 = 0;
    do {
      *(undefined4 *)(iVar3 + *(int *)(this + 0x144)) = 3;
      iVar1 = iVar1 + 1;
      *(uint *)(iVar4 + 0x40 + *(int *)(this + 0x118)) =
           *(uint *)(iVar4 + 0x40 + *(int *)(this + 0x118)) | 8;
      iVar4 = iVar4 + 0xac;
      iVar3 = iVar3 + 0xe;
    } while (iVar1 < *(int *)(this + 0x148));
  }
  iVar1 = *(int *)(this + 0x148) + -1;
  if (-1 < iVar1) {
    pbVar2 = (byte *)(*(int *)(this + 0x118) + 0x40 + iVar1 * 0xac);
    do {
      if ((*pbVar2 & 2) == 0) break;
      iVar1 = iVar1 + -1;
      pbVar2 = pbVar2 + -0xac;
    } while (-1 < iVar1);
  }
  *(undefined4 *)(this + 0x198) = 0;
  *(int *)(this + 0x150) = iVar1 + 1;
  return 1;
}




/* from: wr_ui_comics.cpp
   addr: 004863A0 */

int __cdecl _compareRectY(void *param_1,void *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)(-(uint)((*(uint *)((int)param_1 + 0x40) & 2) != 0) & 10000) +
          *(float *)((int)param_1 + 0x50);
  fVar2 = (float)(-(uint)((*(uint *)((int)param_2 + 0x40) & 2) != 0) & 10000) +
          *(float *)((int)param_2 + 0x50);
  if (fVar1 < fVar2) {
    return -1;
  }
  if (fVar1 == fVar2) {
    return 0;
  }
  return 1;
}




/* from: wr_ui_comics.cpp
   addr: 00486410 */

int __thiscall wrUI_COMICS::StartAppearing(wrUI_COMICS *this,int param_1)

{
  int iVar1;
  
  Stop(this,0);
  if (param_1 == 0) {
    (**(code **)(*(int *)uiSystem + 0x70))(0xffffffff);
  }
  iVar1 = uiAREA::StartAppearing((uiAREA *)this,param_1);
  return iVar1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: wr_ui_comics.cpp
   addr: 00486440 */

int __thiscall wrUI_COMICS::ProcessUpdate(wrUI_COMICS *this,void *param_1)

{
  byte bVar1;
  float fVar2;
  bool bVar3;
  bool bVar4;
  uiRENDER_ELEM *this_00;
  wrUI_COMICS *pwVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  float local_1c;
  float local_18;
  int local_14;
  int local_10;
  uint local_4;
  
  if ((*(int *)(this + 0x1a0) == 0) || (((byte)this[4] & 0x40) != 0)) {
    iVar6 = uiELEMENT::OnChar((uiELEMENT *)this,(uiINPUT_INFO *)param_1);
    return iVar6;
  }
  bVar3 = false;
  local_18 = gsElapsedTime;
  bVar4 = false;
  if (*(int *)(this + 0x154) != 0) {
    local_18 = gsElapsedTime * ___real_40a00000;
    *(undefined4 *)(this + 0x19c) = 0;
  }
  iVar6 = 0;
  if (0 < *(int *)(this + 0x148)) {
    local_10 = 0;
    local_14 = 0;
    do {
      piVar7 = (int *)(*(int *)(this + 0x144) + local_14);
      this_00 = (uiRENDER_ELEM *)(*(int *)(this + 0x118) + local_10);
      if (*piVar7 == 1) {
        local_1c = local_18 + (float)piVar7[1];
        piVar7[1] = (int)local_1c;
        if (local_1c < (float)piVar7[2]) {
          local_1c = local_1c / (float)piVar7[2];
          bVar3 = true;
        }
        else {
          *piVar7 = 0;
          piVar7[1] = piVar7[2];
          local_1c = 1.0;
        }
        uiRENDER_ELEM::SetAlpha(this_00,(float)*(byte *)(piVar7 + 3) * local_1c);
        bVar1 = *(byte *)((int)piVar7 + 0xd);
LAB_0048659b:
        local_4 = (uint)bVar1;
        uiRENDER_ELEM::SetAlphaText(this_00,(float)local_4 * local_1c);
      }
      else if (*piVar7 == 2) {
        fVar2 = local_18 + (float)piVar7[1];
        piVar7[1] = (int)fVar2;
        if (fVar2 < (float)piVar7[2]) {
          bVar4 = true;
          local_1c = ___real_3f800000 - fVar2 / (float)piVar7[2];
        }
        else {
          piVar7[1] = piVar7[2];
          local_1c = 0.0;
          RemoveElement(this,iVar6,0.0);
        }
        uiRENDER_ELEM::SetAlpha(this_00,(float)*(byte *)(piVar7 + 3) * local_1c);
        bVar1 = *(byte *)((int)piVar7 + 0xd);
        goto LAB_0048659b;
      }
      local_14 = local_14 + 0xe;
      iVar6 = iVar6 + 1;
      local_10 = local_10 + 0xac;
    } while (iVar6 < *(int *)(this + 0x148));
  }
  uVar8 = 0;
  pwVar5 = this + 0x134;
  do {
    if (*(int *)pwVar5 == -1) {
LAB_004865f9:
      *(uint *)(this + 0x198) = *(uint *)(this + 0x198) & -(1 << ((byte)uVar8 & 0x1f)) - 1U;
    }
    else {
      iVar6 = (**(code **)(*(int *)uiSystem + 0x74))(*(int *)pwVar5);
      if (iVar6 == 0) {
        *(int *)pwVar5 = -1;
        goto LAB_004865f9;
      }
      if (*(int *)pwVar5 == -1) goto LAB_004865f9;
      if ((*(uint *)(this + 0x198) & 1 << ((byte)uVar8 & 0x1f)) != 0) {
        bVar3 = true;
      }
    }
    uVar8 = uVar8 + 1;
    pwVar5 = pwVar5 + 4;
    if (3 < uVar8) {
      if (!bVar3) {
        if (___real_00000000 < *(float *)(this + 0x19c)) {
          *(float *)(this + 0x19c) = *(float *)(this + 0x19c) - local_18;
          iVar6 = uiELEMENT::OnChar((uiELEMENT *)this,(uiINPUT_INFO *)param_1);
          return iVar6;
        }
        if (!bVar4) {
          ProcessNextEvent(this);
        }
      }
      iVar6 = uiELEMENT::OnChar((uiELEMENT *)this,(uiINPUT_INFO *)param_1);
      return iVar6;
    }
  } while( true );
}




/* from: wr_ui_comics.cpp
   addr: 004866C0 */

void __thiscall wrUI_COMICS::Stop(wrUI_COMICS *this,int param_1)

{
  psSHEET *this_00;
  int iVar1;
  wrUI_COMICS *pwVar2;
  
  iVar1 = 4;
  pwVar2 = this + 0x134;
  do {
    if (*(int *)pwVar2 != -1) {
      (**(code **)(*(int *)uiSystem + 0x7c))(*(int *)pwVar2);
      *(int *)pwVar2 = -1;
    }
    pwVar2 = pwVar2 + 4;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  iVar1 = 0;
  *(undefined4 *)(this + 0x198) = 0;
  if (0 < *(int *)(this + 0x148)) {
    do {
      RemoveElement(this,iVar1,0.0);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(this + 0x148));
  }
  if (param_1 != 0) {
    if ((*(int *)(this + 0x1a4) != 0) &&
       (this_00 = *(psSHEET **)(this + 0x1a0), this_00 != (psSHEET *)0x0)) {
      psSHEET::Empty(this_00);
      operator_delete(this_00);
    }
    *(undefined4 *)(this + 0x1a0) = 0;
  }
  *(undefined4 *)(this + 0x19c) = 0;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: wr_ui_comics.cpp
   addr: 00486760 */

void __thiscall wrUI_COMICS::RemoveElement(wrUI_COMICS *this,int param_1,float param_2)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  
  piVar1 = (int *)(*(int *)(this + 0x144) + param_1 * 0xe);
  iVar2 = *(int *)(this + 0x118) + param_1 * 0xac;
  if (param_2 == ___real_00000000) {
    *piVar1 = 3;
    *(uint *)(iVar2 + 0x40) = *(uint *)(iVar2 + 0x40) | 8;
    return;
  }
  if (*piVar1 == 2) {
    if (param_2 < (float)piVar1[2] - (float)piVar1[1]) {
      fVar3 = (float)piVar1[2];
      piVar1[2] = (int)param_2;
      piVar1[1] = (int)(((float)piVar1[1] / fVar3) * param_2);
      return;
    }
  }
  else if (*piVar1 != 3) {
    *piVar1 = 2;
    piVar1[1] = 0;
    piVar1[2] = (int)param_2;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: wr_ui_comics.cpp
   addr: 00486830 */

void __thiscall
wrUI_COMICS::AddText
          (wrUI_COMICS *this,char *param_1,ushort *param_2,ulong param_3,m3dCOLOR *param_4,
          float param_5)

{
  ushort *puVar1;
  char cVar2;
  byte bVar3;
  ushort uVar4;
  undefined1 uVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ushort *puVar13;
  undefined4 *puVar14;
  byte *pbVar15;
  byte *pbVar16;
  uiRENDER_ELEM *puVar17;
  char *pcVar18;
  int iVar19;
  bool bVar20;
  int local_c;
  
  uVar12 = 0xffffffff;
  pcVar18 = param_1;
  do {
    if (uVar12 == 0) break;
    uVar12 = uVar12 - 1;
    cVar2 = *pcVar18;
    pcVar18 = pcVar18 + 1;
  } while (cVar2 != '\0');
  local_c = 0;
  if (*param_2 == 0) {
    return;
  }
  do {
    local_c = local_c + 1;
    sprintf(param_1 + (~uVar12 - 1),s___02i,local_c);
    iVar19 = *(int *)(this + 0x150);
    iVar8 = *(int *)(this + 0x148);
    if (iVar19 < iVar8) {
      pbVar6 = (byte *)(*(int *)(this + 0x118) + iVar19 * 0xac);
      pbVar16 = (byte *)param_1;
      pbVar15 = pbVar6;
LAB_004868b7:
      do {
        bVar3 = *pbVar6;
        bVar20 = bVar3 < *pbVar16;
        if (bVar3 == *pbVar16) {
          if (bVar3 != 0) {
            bVar3 = pbVar6[1];
            bVar20 = bVar3 < pbVar16[1];
            if (bVar3 != pbVar16[1]) goto LAB_004868db;
            pbVar6 = pbVar6 + 2;
            pbVar16 = pbVar16 + 2;
            if (bVar3 != 0) goto LAB_004868b7;
          }
          iVar7 = 0;
        }
        else {
LAB_004868db:
          iVar7 = (1 - (uint)bVar20) - (uint)(bVar20 != 0);
        }
        if (iVar7 == 0) break;
        iVar19 = iVar19 + 1;
        pbVar6 = pbVar15 + 0xac;
        pbVar16 = (byte *)param_1;
        pbVar15 = pbVar6;
      } while (iVar19 < iVar8);
    }
    if ((iVar19 == iVar8) || (*(int *)(*(int *)(this + 0x144) + iVar19 * 0xe) == 3)) {
      if (iVar19 == *(int *)(this + 0x148)) {
        return;
      }
      uVar4 = *param_2;
      puVar13 = param_2;
      while ((uVar4 != 10 && (uVar4 != 0))) {
        puVar1 = puVar13 + 1;
        puVar13 = puVar13 + 1;
        uVar4 = *puVar1;
      }
      puVar17 = (uiRENDER_ELEM *)(*(int *)(this + 0x118) + iVar19 * 0xac);
      iVar8 = *(int *)(this + 0x144) + iVar19 * 0xe;
      uiRENDER_ELEM::SetTextW(puVar17,param_2,(int)puVar13 - (int)param_2 >> 1);
      *(ulong *)(puVar17 + 0xa4) = param_3;
      iVar7 = ftol();
      uVar9 = ftol();
      uVar10 = ftol();
      uVar11 = ftol();
      *(uint *)(puVar17 + 0xa8) =
           ((iVar7 << 8 | uVar9 & 0xff) << 8 | uVar10 & 0xff) << 8 | uVar11 & 0xff;
      *(undefined1 *)(iVar8 + 0xc) = 0xff;
      uVar5 = ftol();
      bVar20 = param_5 == ___real_00000000;
      *(undefined1 *)(iVar8 + 0xd) = uVar5;
      puVar14 = (undefined4 *)(*(int *)(this + 0x144) + iVar19 * 0xe);
      puVar17 = (uiRENDER_ELEM *)(*(int *)(this + 0x118) + iVar19 * 0xac);
      if (bVar20) {
        *puVar14 = 0;
      }
      else {
        *puVar14 = 1;
        puVar14[2] = param_5;
        puVar14[1] = 0;
        uiRENDER_ELEM::SetAlpha(puVar17,0.0);
        uiRENDER_ELEM::SetAlphaText(puVar17,0.0);
      }
      *(uint *)(puVar17 + 0x40) = *(uint *)(puVar17 + 0x40) & 0xfffffff7;
      if (*puVar13 == 0) {
        return;
      }
      param_2 = puVar13 + 1;
      if (*param_2 == 0) {
        return;
      }
    }
  } while( true );
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: wr_ui_comics.cpp
   addr: 00486A90 */

void __thiscall wrUI_COMICS::ProcessNextEvent(wrUI_COMICS *this)

{
  wrUI_COMICS *pwVar1;
  arrVector<int> *this_00;
  float *pfVar2;
  psSECT *ppVar3;
  int iVar4;
  uiRENDER_ELEM *puVar5;
  ushort *puVar6;
  undefined4 uVar7;
  void *pvVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  char *pcVar12;
  char *pcVar13;
  bool bVar14;
  ulong uVar15;
  m3dCOLOR *pmVar16;
  float fVar17;
  float local_74;
  float local_70;
  int iStack_6c;
  float fStack_68;
  txmTEXTURE *local_64;
  float fStack_60;
  ulong uStack_5c;
  undefined4 *local_58;
  float fStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  char local_40 [64];
  
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  ppVar3 = GetNextSection(this);
  if (ppVar3 == (psSECT *)0x0) {
    Stop(this,1);
    return;
  }
  pwVar1 = this + 0x158;
  iVar4 = psSHEET::GetFloat(*(psSHEET **)(this + 0x1a0),(char *)pwVar1,s_FadeInTime,&local_70);
  if (iVar4 == 0) {
    local_70 = 0.0;
  }
  else {
    local_70 = _DAT_005d9ff0 * local_70;
  }
  iVar4 = psSHEET::GetFloat(*(psSHEET **)(this + 0x1a0),(char *)pwVar1,s_FadeOutTime,&local_74);
  if (iVar4 == 0) {
    local_74 = 0.0;
  }
  else {
    local_74 = _DAT_005d9ff0 * local_74;
  }
  iVar4 = psSHEET::GetStr(*(psSHEET **)(this + 0x1a0),(char *)pwVar1,s_PicTexture,local_40,0x40);
  if (iVar4 == 0) {
    local_64 = (txmTEXTURE *)0x0;
  }
  else {
    local_64 = txmMANAGER::Add(txmManager,local_40,0,0xffffffff);
  }
  iVar4 = psSHEET::GetStr(*(psSHEET **)(this + 0x1a0),(char *)pwVar1,s_TextId,local_40,0x40);
  if (iVar4 == 0) {
    local_58 = (undefined4 *)0x1;
  }
  else {
    local_58 = (undefined4 *)gsSTRINGS::GetStringId(gsStrings,local_40);
  }
  iVar4 = psSHEET::GetColor(*(psSHEET **)(this + 0x1a0),(char *)pwVar1,s_TextColor,
                            (m3dCOLOR *)&local_50);
  if (iVar4 == 0) {
    local_50 = 0x43340000;
    local_48 = 0x43340000;
    local_4c = 0x43340000;
    local_44 = 0x437f0000;
  }
  iVar4 = psSHEET::GetStr(*(psSHEET **)(this + 0x1a0),(char *)pwVar1,s_TextFlags,local_40,0x40);
  if (iVar4 == 0) {
    uStack_5c = (**(code **)(*(int *)uiSystem + 0x5c))();
  }
  else {
    uStack_5c = (**(code **)(*(int *)uiSystem + 0x60))(local_40);
  }
  iVar4 = psSHEET::GetInt(*(psSHEET **)(this + 0x1a0),(char *)pwVar1,s_SoundId,&iStack_6c);
  if (iVar4 == 0) {
    iStack_6c = 0;
  }
  iVar4 = psSHEET::GetFloat(*(psSHEET **)(this + 0x1a0),(char *)pwVar1,s_FadeOut,&fStack_68);
  if (iVar4 == 0) {
    iVar4 = psSHEET::GetStr(*(psSHEET **)(this + 0x1a0),(char *)pwVar1,s_ClearPic,local_40,0x40);
    fVar17 = local_74;
    if (iVar4 != 0) {
      iVar4 = 4;
      bVar14 = true;
      pcVar12 = local_40;
      pcVar13 = &s_all;
      do {
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        bVar14 = *pcVar12 == *pcVar13;
        pcVar12 = pcVar12 + 1;
        pcVar13 = pcVar13 + 1;
      } while (bVar14);
      if (bVar14) {
        iVar4 = 0;
        fStack_60 = local_74;
        if (0 < *(int *)(this + 0x150)) {
          do {
            RemoveElement(this,iVar4,fVar17);
            iVar4 = iVar4 + 1;
          } while (iVar4 < *(int *)(this + 0x150));
        }
      }
      else {
        puVar5 = uiRENDER_INFO::FindElement((uiRENDER_INFO *)(this + 0x6c),local_40);
        if (puVar5 != (uiRENDER_ELEM *)0x0) {
          RemoveElement(this,((int)puVar5 - *(int *)(this + 0x118)) / 0xac,local_74);
        }
      }
    }
    iVar4 = psSHEET::GetStr(*(psSHEET **)(this + 0x1a0),(char *)(this + 0x158),s_ClearText,local_40,
                            0x40);
    fVar17 = local_74;
    if (iVar4 != 0) {
      iVar4 = *(int *)(this + 0x150);
      fStack_60 = local_74;
      if (iVar4 < *(int *)(this + 0x148)) {
        do {
          RemoveElement(this,iVar4,fVar17);
          iVar4 = iVar4 + 1;
        } while (iVar4 < *(int *)(this + 0x148));
      }
    }
  }
  else {
    fVar17 = _DAT_005d9ff0 * fStack_68;
    iVar4 = 0;
    fStack_60 = fVar17;
    if (0 < *(int *)(this + 0x150)) {
      do {
        RemoveElement(this,iVar4,fVar17);
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(this + 0x150));
    }
    fVar17 = _DAT_005d9ff0 * fStack_68;
    iVar4 = *(int *)(this + 0x150);
    fStack_60 = fVar17;
    if (iVar4 < *(int *)(this + 0x148)) {
      do {
        RemoveElement(this,iVar4,fVar17);
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(this + 0x148));
    }
  }
  iVar4 = psSHEET::GetStr(*(psSHEET **)(this + 0x1a0),(char *)(this + 0x158),s_ShowPic,local_40,0x40
                         );
  if (iVar4 != 0) {
    fStack_60 = local_70;
    puVar5 = uiRENDER_INFO::FindElement((uiRENDER_INFO *)(this + 0x6c),local_40);
    if (puVar5 != (uiRENDER_ELEM *)0x0) {
      iVar10 = ((int)puVar5 - *(int *)(this + 0x118)) / 0xac;
      iVar4 = iVar10 * 0xe;
      iVar11 = *(int *)(this + 0x144) + iVar4;
      if (local_64 != (txmTEXTURE *)0x0) {
        uiRENDER_ELEM::SetTex(puVar5,local_64);
        *(undefined1 *)(iVar11 + 0xc) = 0xff;
        *(undefined1 *)(iVar11 + 0xd) = 0xff;
      }
      puVar9 = (undefined4 *)(*(int *)(this + 0x144) + iVar4);
      puVar5 = (uiRENDER_ELEM *)(*(int *)(this + 0x118) + iVar10 * 0xac);
      if (fStack_60 == ___real_00000000) {
        *puVar9 = 0;
      }
      else {
        *puVar9 = 1;
        puVar9[2] = fStack_60;
        puVar9[1] = 0;
        uiRENDER_ELEM::SetAlpha(puVar5,0.0);
        uiRENDER_ELEM::SetAlphaText(puVar5,0.0);
      }
      *(uint *)(puVar5 + 0x40) = *(uint *)(puVar5 + 0x40) & 0xfffffff7;
    }
  }
  iVar4 = psSHEET::GetStr(*(psSHEET **)(this + 0x1a0),(char *)(this + 0x158),s_ShowText,local_40,
                          0x40);
  if (iVar4 != 0) {
    pmVar16 = (m3dCOLOR *)&local_50;
    uVar15 = uStack_5c;
    fVar17 = local_70;
    puVar6 = gsSTRINGS::GetStringById(gsStrings,(int)local_58);
    AddText(this,local_40,puVar6,uVar15,pmVar16,fVar17);
  }
  iVar4 = psSHEET::GetStr(*(psSHEET **)(this + 0x1a0),(char *)(this + 0x158),s_Sound,local_40,0x40);
  if (iVar4 != 0) {
    puVar9 = (undefined4 *)operator_new(0x60);
    if (puVar9 == (undefined4 *)0x0) {
      local_58 = (undefined4 *)0x0;
    }
    else {
      apNAME::SetName((apNAME *)(puVar9 + 1),local_40);
      puVar9[0x11] = 0;
      puVar9[0x12] = 0;
      puVar9[0x13] = 0;
      puVar9[0x14] = 0;
      puVar9[0x15] = 0;
      puVar9[0x16] = 0;
      puVar9[0x17] = 0;
      *puVar9 = &sncSOUND_DESCR::_vftable_;
      local_58 = puVar9;
    }
    iVar10 = *(int *)(this + 300);
    this_00 = (arrVector<int> *)(this + 0x128);
    iVar4 = iVar10 + 1;
    if (*(int *)(this + 0x130) < iVar4) {
      iVar11 = *(int *)(this + 0x130) * 2;
      if (iVar11 <= iVar4) {
        iVar11 = iVar4;
      }
      arrVector<int>::Reserve(this_00,iVar11);
    }
    memmove((void *)(*(int *)this_00 + iVar4 * 4),(void *)(*(int *)this_00 + iVar10 * 4),
            (*(int *)(this + 300) - iVar10) * 4);
    for (; iVar10 < iVar4; iVar10 = iVar10 + 1) {
      pfVar2 = (float *)(*(int *)this_00 + iVar10 * 4);
      if (pfVar2 != (float *)0x0) {
        *pfVar2 = (float)local_58;
      }
    }
    iVar4 = *(int *)(this + 300);
    *(int *)(this + 300) = iVar4 + 1;
    iVar4 = sncLinkSndListData(1,*(sncSOUND_DESCR **)(*(int *)this_00 + -4 + (iVar4 + 1) * 4));
    if (iVar4 == 0) {
      operator_delete(*(void **)(*(int *)this_00 + -4 + *(int *)(this + 300) * 4));
      iVar4 = *(int *)(this + 300) + -1;
      if ((*(int *)(this + 300) < iVar4) && (*(int *)(this + 0x130) < iVar4)) {
        pvVar8 = apRealloc(*(void **)this_00,iVar4 * 4);
        *(void **)this_00 = pvVar8;
        *(int *)(this + 0x130) = iVar4;
      }
      *(int *)(this + 300) = iVar4;
    }
    else {
      if (*(int *)(this + iStack_6c * 4 + 0x134) != -1) {
        (**(code **)(*(int *)uiSystem + 0x7c))(*(int *)(this + iStack_6c * 4 + 0x134));
      }
      uVar7 = (**(code **)(*(int *)uiSystem + 0x80))
                        (*(undefined4 *)(*(int *)this_00 + -4 + *(int *)(this + 300) * 4));
      *(undefined4 *)(this + iStack_6c * 4 + 0x134) = uVar7;
    }
    *(undefined4 *)(this + 0x154) = 0;
  }
  pwVar1 = this + 0x158;
  iVar4 = psSHEET::GetFloat(*(psSHEET **)(this + 0x1a0),(char *)pwVar1,s_Delay,&fStack_54);
  if (iVar4 != 0) {
    local_58 = *(undefined4 **)(this + 0x19c);
    puVar9 = (undefined4 *)(_DAT_005d9ff0 * fStack_54);
    if (_DAT_005d9ff0 * fStack_54 < (float)local_58) {
      puVar9 = local_58;
    }
    *(undefined4 **)(this + 0x19c) = puVar9;
  }
  iVar4 = psSHEET::GetInt(*(psSHEET **)(this + 0x1a0),(char *)pwVar1,s_WaitSound,&iStack_6c);
  if (iVar4 != 0) {
    *(uint *)(this + 0x198) = *(uint *)(this + 0x198) | 1 << ((byte)iStack_6c & 0x1f);
  }
  iVar4 = psSHEET::GetStr(*(psSHEET **)(this + 0x1a0),(char *)pwVar1,s_Music,local_40,0x40);
  if (iVar4 != 0) {
    iVar4 = 6;
    bVar14 = true;
    pcVar12 = local_40;
    pcVar13 = s_intro;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      bVar14 = *pcVar12 == *pcVar13;
      pcVar12 = pcVar12 + 1;
      pcVar13 = pcVar13 + 1;
    } while (bVar14);
    if (bVar14) {
      (**(code **)(*(int *)uiSystem + 0x70))(1);
      return;
    }
    iVar4 = 6;
    bVar14 = true;
    pcVar12 = local_40;
    pcVar13 = &s_outro;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      bVar14 = *pcVar12 == *pcVar13;
      pcVar12 = pcVar12 + 1;
      pcVar13 = pcVar13 + 1;
    } while (bVar14);
    if (bVar14) {
      (**(code **)(*(int *)uiSystem + 0x70))(2);
    }
  }
  return;
}




/* from: wr_ui_comics.cpp
   addr: 00487140 */

psSECT * __thiscall wrUI_COMICS::GetNextSection(wrUI_COMICS *this)

{
  wrUI_COMICS *_Str;
  wrUI_COMICS wVar1;
  wrUI_COMICS *pwVar2;
  psSECT *ppVar3;
  wrUI_COMICS *pwVar4;
  int iVar5;
  uint uVar6;
  int _Radix;
  
  if (*(int *)(this + 0x1a0) != 0) {
    _Str = this + 0x158;
    uVar6 = 0xffffffff;
    pwVar4 = _Str;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      wVar1 = *pwVar4;
      pwVar4 = pwVar4 + 1;
    } while (wVar1 != (wrUI_COMICS)0x0);
    if (0x37 < ~uVar6 - 1) goto LAB_004871a2;
    uVar6 = 0xffffffff;
    pwVar4 = _Str;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      wVar1 = *pwVar4;
      pwVar4 = pwVar4 + 1;
    } while (wVar1 != (wrUI_COMICS)0x0);
    pwVar2 = (wrUI_COMICS *)&s__1;
    pwVar4 = this + ~uVar6 + 0x157;
    do {
      wVar1 = *pwVar2;
      (pwVar4 + -0x5f318c)[(int)pwVar2] = wVar1;
      pwVar2 = pwVar2 + 1;
    } while (wVar1 != (wrUI_COMICS)0x0);
    ppVar3 = psSHEET::FindSect(*(psSHEET **)(this + 0x1a0),(char *)_Str);
    if (ppVar3 != (psSECT *)0x0) {
      return ppVar3;
    }
    while( true ) {
      *pwVar4 = (wrUI_COMICS)0x0;
LAB_004871a2:
      pwVar4 = (wrUI_COMICS *)strrchr((char *)_Str,0x5f);
      if (pwVar4 == (wrUI_COMICS *)0x0) break;
      pwVar2 = pwVar4 + 1;
      _Radix = 10;
      iVar5 = atoi((char *)pwVar2);
      itoa(iVar5 + 1,(char *)pwVar2,_Radix);
      ppVar3 = psSHEET::FindSect(*(psSHEET **)(this + 0x1a0),(char *)_Str);
      if (ppVar3 != (psSECT *)0x0) {
        return ppVar3;
      }
    }
  }
  return (psSECT *)0x0;
}




/* from: wr_ui_comics.cpp
   addr: 004871F0 */

wrUI_COMICS_FRAME * __thiscall wrUI_COMICS_FRAME::wrUI_COMICS_FRAME(wrUI_COMICS_FRAME *this)

{
  uiELEMENT::uiELEMENT((uiELEMENT *)this);
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 0x78) = 0;
  return this;
}




/* from: wr_ui_comics.cpp
   addr: 00487210 */

int __thiscall wrUI_COMICS_FRAME::ProcessInit(wrUI_COMICS_FRAME *this,void *param_1)

{
  uiELEMENT *puVar1;
  int iVar2;
  
  puVar1 = uiELEMENT::FindChildElement((uiELEMENT *)this,s_comics);
  *(uiELEMENT **)(this + 0x78) = puVar1;
  iVar2 = wrUI_FRAME::ProcessInit((wrUI_FRAME *)this,param_1);
  return iVar2;
}




/* from: wr_ui_comics.cpp
   addr: 00487230 */

int __fastcall wrUI_COMICS_FRAME::Start(uiELEMENT *param_1,int param_2,char *param_3,int param_4)

{
  wrUI_COMICS wVar1;
  wrUI_COMICS *this;
  uiELEMENT *puVar2;
  int iVar3;
  psSHEET *this_00;
  char *pcVar4;
  int unaff_EBP;
  char *unaff_ESI;
  void *pvVar5;
  undefined **local_138;
  int local_134;
  undefined **local_130;
  int local_12c;
  uiELEMENT *local_128;
  undefined **local_124 [68];
  int local_14;
  undefined4 local_4;
  
  local_138 = (undefined **)0x0;
  local_130 = (undefined **)0x0;
  local_134 = 0;
  local_12c = param_2;
  local_128 = param_1;
  arrVector<char>::Resize((arrVector<char> *)&local_138,0);
  fioFILE::fioFILE((fioFILE *)local_124);
  local_4 = 0;
  local_124[0] = &fioFILE_DISK::_vftable_;
  puVar2 = uiELEMENT::FindChildElement(*(uiELEMENT **)(uiSystem + 300),s_comics_frame);
  iVar3 = fioFILE_DISK::Init((fioFILE_DISK *)local_124,param_3,1);
  if (iVar3 == 0) {
    local_124[0] = &fioFILE::_vftable_;
    apFree(local_138);
    return 0;
  }
  iVar3 = local_14 + 1;
  if ((local_134 < iVar3) && ((int)local_130 < iVar3)) {
    arrVector<unsigned_char>::Realloc((arrVector<unsigned_char> *)&local_138,iVar3);
  }
  pvVar5 = (void *)0x1;
  local_134 = iVar3;
  (*(code *)local_124[0][5])(local_138,local_14);
  fioFILE_DISK::Term((fioFILE_DISK *)&local_130);
  unaff_ESI[unaff_EBP + -1] = '\0';
  this_00 = (psSHEET *)operator_new(0x10);
  if (this_00 == (psSHEET *)0x0) {
    this_00 = (psSHEET *)0x0;
  }
  else {
    *(undefined4 *)this_00 = 0;
    *(undefined4 *)(this_00 + 4) = 0;
    *(undefined4 *)(this_00 + 8) = 0;
    *(undefined4 *)(this_00 + 0xc) = 0;
  }
  psSHEET::SetString(this_00,unaff_ESI);
  iVar3 = psSHEET::ParseString(this_00);
  if (iVar3 != 0) {
    local_130 = &fioFILE::_vftable_;
    apFree(unaff_ESI);
    return 0;
  }
  this = *(wrUI_COMICS **)(puVar2 + 0x78);
  *(int *)(puVar2 + 0x74) = local_134;
  *(undefined ***)(puVar2 + 0x7c) = local_138;
  wrUI_COMICS::Stop(this,1);
  *(psSHEET **)(this + 0x1a0) = this_00;
  *(undefined4 *)(this + 0x1a4) = 1;
  *(undefined4 *)(this + 0x19c) = 0;
  iVar3 = psSHEET::GetStr(this_00,s_Debug,s_ZeroEvent,(char *)(this + 0x158),0x40);
  if (iVar3 == 0) {
    pcVar4 = s_EVENT;
    do {
      wVar1 = (wrUI_COMICS)*pcVar4;
      (this + -0x5f2f80)[(int)pcVar4] = wVar1;
      pcVar4 = (char *)((wrUI_COMICS *)pcVar4 + 1);
    } while (wVar1 != (wrUI_COMICS)0x0);
  }
  (**(code **)(*(int *)uiSystem + 0x10))(puVar2 + 0x18,local_4);
  local_138 = &fioFILE::_vftable_;
  apFree(pvVar5);
  return 1;
}




/* from: wr_ui_comics.cpp
   addr: 00487410 */

int __thiscall wrUI_COMICS_FRAME::StartAppearing(wrUI_COMICS_FRAME *this,int param_1)

{
  int iVar1;
  
  (**(code **)(*(int *)uiSystem + 0x78))();
  if (param_1 != 0) {
    uiCURSOR::Show((uiCURSOR *)(uiSystem + 0x14),0);
    iVar1 = uiELEMENT::StartAppearing((uiELEMENT *)this,param_1);
    return iVar1;
  }
  uiCURSOR::Show((uiCURSOR *)(uiSystem + 0x14),1);
  iVar1 = uiELEMENT::StartAppearing((uiELEMENT *)this,0);
  return iVar1;
}




/* from: wr_ui_comics.cpp
   addr: 00487470 */

int __thiscall wrUI_COMICS_FRAME::ProcessUpdate(wrUI_COMICS_FRAME *this,void *param_1)

{
  int iVar1;
  wrUI_COMICS_FRAME *local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_c = (wrUI_COMICS_FRAME *)0x0;
  local_8 = 0;
  local_4 = 0;
  iVar1 = uiFRAME::ProcessUpdate((uiFRAME *)this,param_1);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(*(int *)(this + 0x78) + 0x1a0) == 0) {
    if (*(int **)(this + 0x74) != (int *)0x0) {
      local_4 = *(undefined4 *)(this + 0x7c);
      local_8 = 0x434f4d49;
      local_c = this;
      (**(code **)(**(int **)(this + 0x74) + 0x5c))(&local_c);
      *(undefined4 *)(this + 0x74) = 0;
      return 1;
    }
    (**(code **)(*(int *)uiSystem + 0x10))(&s_main,8);
  }
  return 1;
}




/* from: wr_ui_comics.cpp
   addr: 00487500 */

int __thiscall wrUI_COMICS_FRAME::OnKeyboard(wrUI_COMICS_FRAME *this,uiINPUT_INFO *param_1)

{
  uiELEMENT *this_00;
  int iVar1;
  
  if (*(int *)param_1 == 6) {
    this_00 = uiELEMENT::FindChildElement((uiELEMENT *)this,s_comics);
    if (*(int *)(param_1 + 0xc) == 7) {
      wrUI_COMICS::Stop((wrUI_COMICS *)this_00,1);
    }
  }
  iVar1 = wrUI_FRAME::OnKeyboard((wrUI_FRAME *)this,param_1);
  return iVar1;
}




/* from: wr_ui_comics.cpp
   addr: 00487540
   addr: 00487540 */

void __thiscall arrVector<int>::Reserve(arrVector<int> *this,int param_1)

{
  void *pvVar1;
  
  if (*(int *)(this + 8) < param_1) {
    if (param_1 < *(int *)(this + 4)) {
      *(int *)(this + 4) = param_1;
    }
    pvVar1 = apRealloc(*(void **)this,param_1 * 4);
    *(void **)this = pvVar1;
    *(int *)(this + 8) = param_1;
  }
  return;
}




/* from: wr_ui_comics.cpp
   addr: 00487580 */

void __thiscall
arrVector<struct_wrUI_COMICS_ELEM>::Realloc(arrVector<struct_wrUI_COMICS_ELEM> *this,int param_1)

{
  void *pvVar1;
  
  if (param_1 != *(int *)(this + 8)) {
    if (param_1 < *(int *)(this + 4)) {
      *(int *)(this + 4) = param_1;
    }
    pvVar1 = apRealloc(*(void **)this,param_1 * 0xe);
    *(void **)this = pvVar1;
    *(int *)(this + 8) = param_1;
  }
  return;
}




/* from: wr_ui_comics.cpp
   addr: 004875C0
   addr: 004875C0
   addr: 004875C0
   addr: 004875C0 */

void __thiscall arrVector<class_uiAREA*>::Realloc(arrVector<class_uiAREA*> *this,int param_1)

{
  void *pvVar1;
  
  if (param_1 != *(int *)(this + 8)) {
    if (param_1 < *(int *)(this + 4)) {
      *(int *)(this + 4) = param_1;
    }
    pvVar1 = apRealloc(*(void **)this,param_1 * 4);
    *(void **)this = pvVar1;
    *(int *)(this + 8) = param_1;
  }
  return;
}




/* from: wr_ui_comics.cpp
   addr: 00487600 */

void __thiscall fioFILE::fioFILE(fioFILE *this)

{
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 0x10c) = 0;
  *(undefined4 *)(this + 0x110) = 0;
  *(undefined4 *)(this + 0x114) = 0;
  *(undefined4 *)(this + 0x118) = 0;
  *(undefined4 *)(this + 0x11c) = 0;
  *(undefined ***)this = &_vftable_;
  this[8] = (fioFILE)0x0;
  return;
}




/* from: wr_ui_comics.cpp
   addr: 00487630 */

void * __thiscall fioFILE_MEM::_scalar_deleting_destructor_(fioFILE_MEM *this,uint param_1)

{
  *(undefined ***)this = &fioFILE::_vftable_;
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


