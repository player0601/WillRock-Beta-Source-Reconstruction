
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:ui_rnd.cpp
   addr: 005138B0 */

void __thiscall uiRECT::Render(uiRECT *this,camCAMERA *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  uiRECT *puVar6;
  int iVar7;
  rendCFG local_184 [184];
  undefined4 local_cc;
  undefined4 local_c8;
  rendVERTEX local_c0 [4];
  float local_bc [47];
  
  fVar1 = *(float *)(uiSystem + 0xfc);
  fVar2 = *(float *)(uiSystem + 0x100);
  local_c8 = *(undefined4 *)(this + 0x44);
  local_cc = 0x80af;
  iVar7 = 4;
  pfVar5 = local_bc;
  puVar6 = this + 4;
  do {
    fVar3 = *(float *)puVar6;
    pfVar5[-1] = fVar3;
    fVar4 = *(float *)(puVar6 + 4);
    *pfVar5 = fVar4;
    if (___real_00000000 <= fVar3) {
      if (___real_44804000 < fVar3) {
        pfVar5[-1] = 1026.0;
      }
    }
    else {
      pfVar5[-1] = 0.0;
    }
    if (___real_00000000 <= fVar4) {
      if (___real_44404000 < fVar4) {
        *pfVar5 = 769.0;
      }
    }
    else {
      *pfVar5 = 0.0;
    }
    pfVar5[5] = *(float *)(puVar6 + 8);
    pfVar5[6] = *(float *)(puVar6 + 0xc);
    pfVar5[-1] = fVar1 * pfVar5[-1];
    iVar7 = iVar7 + -1;
    *pfVar5 = fVar2 * *pfVar5;
    pfVar5 = pfVar5 + 0xc;
    puVar6 = puVar6 + 0x10;
  } while (iVar7 != 0);
  rendCFG::InitMtl1(local_184,*(txmTEXTURE **)this);
  rendDRIVER::RenderPolyCompat(rendDrv,param_1,4,local_c0,local_184);
  return;
}




/* from: gs:ui_rnd.cpp
   addr: 005139D0 */

ushort * __thiscall uiRENDER_ELEM_TEXT::GetString(uiRENDER_ELEM_TEXT *this)

{
  ushort *puVar1;
  
  puVar1 = *(ushort **)this;
  if (*(int *)(this + 4) == 0) {
    puVar1 = gsSTRINGS::GetStringById(gsStrings,(int)puVar1);
  }
  return puVar1;
}




/* from: gs:ui_rnd.cpp
   addr: 005139F0 */

void __thiscall
uiRENDER_ELEM_TEXT::SetToLocalString
          (uiRENDER_ELEM_TEXT *this,ushort *param_1,int param_2,int param_3)

{
  int iVar1;
  size_t sVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  sVar2 = wcslen((wchar_t *)param_1);
  if (param_2 < (int)sVar2) {
    sVar2 = param_2;
  }
  iVar1 = sVar2 + 1;
  if (param_3 < iVar1) {
    param_3 = iVar1;
  }
  if (*(int *)(this + 4) == 0) {
    *(int *)(this + 4) = param_3;
    pvVar3 = apMalloc(param_3 * 2);
  }
  else {
    if (param_3 <= *(int *)(this + 4)) goto LAB_00513a49;
    *(int *)(this + 4) = param_3;
    pvVar3 = apRealloc(*(void **)this,param_3 * 2);
  }
  *(void **)this = pvVar3;
LAB_00513a49:
  uVar5 = (sVar2 - 1) + iVar1;
  puVar6 = *(undefined4 **)this;
  for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar6 = *(undefined4 *)param_1;
    param_1 = param_1 + 2;
    puVar6 = puVar6 + 1;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(char *)puVar6 = (char)*param_1;
    param_1 = (ushort *)((int)param_1 + 1);
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  *(undefined2 *)(*(int *)this + -2 + iVar1 * 2) = 0;
  return;
}




/* from: gs:ui_rnd.cpp
   addr: 00513A70 */

void __thiscall uiRENDER_ELEM_TEXT::FreeBuf(uiRENDER_ELEM_TEXT *this)

{
  if (*(int *)(this + 4) != 0) {
    apFree(*(void **)this);
    *(undefined4 *)(this + 4) = 0;
    *(undefined4 *)this = 0;
  }
  return;
}




/* from: gs:ui_rnd.cpp
   addr: 00513AA0 */

uiRENDER_ELEM * __thiscall uiRENDER_ELEM::uiRENDER_ELEM(uiRENDER_ELEM *this)

{
  *this = (uiRENDER_ELEM)0x0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x8c) = 0xffffffff;
  *(undefined4 *)(this + 0x98) = 0;
  *(undefined4 *)(this + 0x94) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x90) = 0;
  if (*(int *)(this + 0x98) != 0) {
    apFree(*(void **)(this + 0x94));
    *(undefined4 *)(this + 0x98) = 0;
    *(undefined4 *)(this + 0x94) = 0;
  }
  *(undefined4 *)(this + 0x94) = 1;
  *(undefined4 *)(this + 0xa0) = 0x3f800000;
  *(undefined4 *)(this + 0x9c) = 0x3f800000;
  *(undefined4 *)(this + 0xa4) = 0;
  *(undefined4 *)(this + 0xa8) = 0xffffffff;
  return this;
}




/* from: gs:ui_rnd.cpp
   addr: 00513B20 */

uiRENDER_ELEM * __thiscall uiRENDER_ELEM::uiRENDER_ELEM(uiRENDER_ELEM *this,uiRENDER_ELEM *param_1)

{
  int iVar1;
  size_t sVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;
  wchar_t *_Str;
  int iVar6;
  undefined4 *puVar7;
  
  *this = (uiRENDER_ELEM)0x0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x8c) = 0xffffffff;
  *(undefined4 *)(this + 0x98) = 0;
  *(undefined4 *)(this + 0x94) = 0;
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(this + 0x90) = *(undefined4 *)(param_1 + 0x90);
  _Str = *(wchar_t **)(param_1 + 0x94);
  if (*(int *)(param_1 + 0x98) == 0) {
    if (*(int *)(this + 0x98) != 0) {
      apFree(*(void **)(this + 0x94));
      *(undefined4 *)(this + 0x98) = 0;
      *(undefined4 *)(this + 0x94) = 0;
    }
    *(wchar_t **)(this + 0x94) = _Str;
    goto LAB_00513c30;
  }
  sVar2 = wcslen(_Str);
  if (0x7fffffff < (int)sVar2) {
    sVar2 = 0x7fffffff;
  }
  iVar1 = sVar2 + 1;
  iVar6 = 0;
  if (0 < iVar1) {
    iVar6 = iVar1;
  }
  if (*(int *)(this + 0x98) == 0) {
    *(int *)(this + 0x98) = iVar6;
    pvVar3 = apMalloc(iVar6 * 2);
LAB_00513bd2:
    *(void **)(this + 0x94) = pvVar3;
  }
  else if (*(int *)(this + 0x98) < iVar6) {
    *(int *)(this + 0x98) = iVar6;
    pvVar3 = apRealloc(*(void **)(this + 0x94),iVar6 * 2);
    goto LAB_00513bd2;
  }
  uVar5 = iVar1 * 2 - 2;
  puVar7 = *(undefined4 **)(this + 0x94);
  for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar7 = *(undefined4 *)_Str;
    _Str = _Str + 2;
    puVar7 = puVar7 + 1;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(char *)puVar7 = (char)*_Str;
    _Str = (wchar_t *)((int)_Str + 1);
    puVar7 = (undefined4 *)((int)puVar7 + 1);
  }
  *(undefined2 *)(*(int *)(this + 0x94) + -2 + iVar1 * 2) = 0;
LAB_00513c30:
  *(undefined4 *)(this + 0x9c) = *(undefined4 *)(param_1 + 0x9c);
  *(undefined4 *)(this + 0xa0) = *(undefined4 *)(param_1 + 0xa0);
  *(undefined4 *)(this + 0xa4) = *(undefined4 *)(param_1 + 0xa4);
  *(undefined4 *)(this + 0xa8) = *(undefined4 *)(param_1 + 0xa8);
  return this;
}




/* from: gs:ui_rnd.cpp
   addr: 00513C70 */

void __thiscall uiRENDER_ELEM::~uiRENDER_ELEM(uiRENDER_ELEM *this)

{
  if (*(int *)(this + 0x98) != 0) {
    apFree(*(void **)(this + 0x94));
    *(undefined4 *)(this + 0x98) = 0;
    *(undefined4 *)(this + 0x94) = 0;
  }
  return;
}




/* from: gs:ui_rnd.cpp
   addr: 00513CD0 */

void __thiscall uiRENDER_ELEM::Init(uiRENDER_ELEM *this,objOBJ *param_1)

{
  char cVar1;
  int iVar2;
  txmTEXTURE *ptVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  wchar_t *_Str;
  size_t sVar7;
  void *pvVar8;
  undefined4 uVar9;
  undefined4 unaff_EBP;
  char *pcVar10;
  int iVar11;
  undefined4 *puVar12;
  psSHEET *this_00;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  psSHEET *local_10c;
  int local_108;
  int local_104;
  char local_100 [256];
  
  apNAME::SetName((apNAME *)this,*(char **)(param_1 + 0x18));
  this_00 = *(psSHEET **)(param_1 + 0xf0);
  local_10c = this_00;
  if (this_00 != (psSHEET *)0x0) {
    iVar2 = psSHEET::GetBool(this_00,s_UI_PROP,s_objHIDDEN,&local_108);
    if ((iVar2 != 0) && (local_108 == 1)) {
      *(uint *)(this + 0x40) = *(uint *)(this + 0x40) | 1;
    }
  }
  if (*(psSHEET **)(param_1 + 0xf0) != (psSHEET *)0x0) {
    iVar2 = psSHEET::GetBool(*(psSHEET **)(param_1 + 0xf0),s_UI_PROP,s_obj3D,&local_104);
    if ((iVar2 != 0) && (local_104 == 1)) goto LAB_00513d77;
  }
  if (*(int *)(param_1 + 0x14) != 4) {
LAB_00513d77:
    *(objOBJ **)(this + 0x44) = param_1;
    *(uint *)(this + 0x40) = *(uint *)(this + 0x40) | 4;
    objOBJ::UpdRenderState(param_1);
    return;
  }
  local_11c = 0;
  local_118 = 0;
  local_114 = 0;
  local_110 = 0;
  ptVar3 = objOBJ::GetFaceTexRendMtl(param_1,0,0);
  *(txmTEXTURE **)(this + 0x48) = ptVar3;
  uiGetObjRenderRect(param_1,(uiVERTEX *)(this + 0x4c));
  if (*(psSHEET **)(param_1 + 0xf0) == (psSHEET *)0x0) {
LAB_00513e3e:
    *(undefined4 *)(this + 0x8c) = 0xffffffff;
  }
  else {
    iVar2 = psSHEET::GetColor(*(psSHEET **)(param_1 + 0xf0),s_UI_PROP,s_color,(m3dCOLOR *)&local_11c
                             );
    if (iVar2 == 0) goto LAB_00513e3e;
    iVar2 = ftol();
    uVar4 = ftol();
    uVar5 = ftol();
    uVar6 = ftol();
    *(uint *)(this + 0x8c) = ((iVar2 << 8 | uVar4 & 0xff) << 8 | uVar5 & 0xff) << 8 | uVar6 & 0xff;
  }
  if (this_00 == (psSHEET *)0x0) {
LAB_00514019:
    uVar9 = (**(code **)(*(int *)uiSystem + 0x58))(0);
  }
  else {
    iVar2 = psSHEET::GetStr(this_00,s_UI_PROP,s_textID,local_100,0x100);
    if (iVar2 != 0) {
      *(uint *)(this + 0x40) = *(uint *)(this + 0x40) | 2;
      iVar2 = gsSTRINGS::GetStringId(gsStrings,local_100);
      if (iVar2 == 0) {
        uVar4 = 0xffffffff;
        pcVar10 = local_100;
        do {
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar1 != '\0');
        memmove(local_100 + 1,local_100,~uVar4);
        local_100[0] = '!';
        _Str = (wchar_t *)gsSTRINGS::AsciiToUnicode(gsStrings,local_100);
        sVar7 = wcslen(_Str);
        if (0x7fffffff < (int)sVar7) {
          sVar7 = 0x7fffffff;
        }
        iVar2 = sVar7 + 1;
        iVar11 = 0;
        if (0 < iVar2) {
          iVar11 = iVar2;
        }
        if (*(int *)(this + 0x98) == 0) {
          *(int *)(this + 0x98) = iVar11;
          pvVar8 = apMalloc(iVar11 * 2);
LAB_00513f52:
          *(void **)(this + 0x94) = pvVar8;
        }
        else if (*(int *)(this + 0x98) < iVar11) {
          *(int *)(this + 0x98) = iVar11;
          pvVar8 = apRealloc(*(void **)(this + 0x94),iVar11 * 2);
          goto LAB_00513f52;
        }
        uVar4 = (sVar7 - 1) + iVar2;
        puVar12 = *(undefined4 **)(this + 0x94);
        for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar12 = *(undefined4 *)_Str;
          _Str = _Str + 2;
          puVar12 = puVar12 + 1;
        }
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(char *)puVar12 = (char)*_Str;
          _Str = (wchar_t *)((int)_Str + 1);
          puVar12 = (undefined4 *)((int)puVar12 + 1);
        }
        *(undefined2 *)(*(int *)(this + 0x94) + -2 + iVar2 * 2) = 0;
        this_00 = local_10c;
      }
      else {
        if (*(int *)(this + 0x98) != 0) {
          apFree(*(void **)(this + 0x94));
          *(undefined4 *)(this + 0x98) = 0;
          *(undefined4 *)(this + 0x94) = 0;
        }
        *(int *)(this + 0x94) = iVar2;
      }
    }
    iVar2 = psSHEET::GetStr(this_00,s_UI_PROP,s_textNEW,local_100,0x100);
    if (iVar2 != 0) {
      *(uint *)(this + 0x40) = *(uint *)(this + 0x40) | 2;
      iVar2 = gsSTRINGS::GetStringId(gsStrings,local_100);
      if (*(int *)(this + 0x98) != 0) {
        apFree(*(void **)(this + 0x94));
        *(undefined4 *)(this + 0x98) = 0;
        *(undefined4 *)(this + 0x94) = 0;
      }
      *(int *)(this + 0x94) = iVar2;
    }
    iVar2 = psSHEET::GetStr(this_00,s_UI_PROP,s_fontID,local_100,0x100);
    if (iVar2 == 0) goto LAB_00514019;
    uVar9 = (**(code **)(*(int *)uiSystem + 0x54))(local_100);
  }
  *(undefined4 *)(this + 0x90) = uVar9;
  if (this_00 != (psSHEET *)0x0) {
    iVar2 = psSHEET::GetStr(this_00,s_UI_PROP,s_align,(char *)&local_104,0x100);
    if (iVar2 != 0) {
      uVar9 = (**(code **)(*(int *)uiSystem + 0x60))(&local_104);
      goto LAB_0051406b;
    }
  }
  uVar9 = (**(code **)(*(int *)uiSystem + 0x5c))();
LAB_0051406b:
  *(undefined4 *)(this + 0xa4) = uVar9;
  if (this_00 != (psSHEET *)0x0) {
    iVar2 = psSHEET::GetColor(this_00,s_UI_PROP,s_colorText,(m3dCOLOR *)&stack0xfffffecc);
    if (iVar2 != 0) {
      iVar2 = ftol();
      uVar4 = ftol();
      uVar5 = ftol();
      uVar6 = ftol();
      *(uint *)(this + 0xa8) = ((iVar2 << 8 | uVar4 & 0xff) << 8 | uVar5 & 0xff) << 8 | uVar6 & 0xff
      ;
    }
    iVar2 = psSHEET::GetFloat(this_00,s_UI_PROP,s_scaleText,(float *)&stack0xfffffec8);
    if (iVar2 != 0) {
      *(undefined4 *)(this + 0xa0) = unaff_EBP;
      *(undefined4 *)(this + 0x9c) = unaff_EBP;
    }
  }
  return;
}




/* from: gs:ui_rnd.cpp
   addr: 00514120 */

void __thiscall uiRENDER_ELEM::Render(uiRENDER_ELEM *this,camCAMERA *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  float *pfVar6;
  ushort *puVar7;
  float local_18;
  float local_14;
  float local_10;
  float fStack_c;
  undefined1 local_8 [8];
  
  if ((*(uint *)(this + 0x40) & 1) == 0) {
    if ((*(uint *)(this + 0x40) & 4) != 0) {
      iVar1 = *(int *)(this + 0x44);
      if (*(int *)(iVar1 + 0x10) == 0) {
        return;
      }
      iVar2 = *(int *)(iVar1 + 0x28);
      uVar5 = *(uint *)(iVar2 + 0x5e);
      if (((*(byte *)(iVar1 + 0x24) & 0x40) != 0) && (uVar5 >> 0x18 != 0xff)) {
        fStack_c = 0.0;
        local_10 = (float)(uVar5 >> 0x10 & 0xff);
        uVar3 = ftol();
        fStack_c = 0.0;
        local_10 = (float)(uVar5 >> 8 & 0xff);
        uVar4 = ftol();
        local_10 = (float)(uVar5 & 0xff);
        fStack_c = 0.0;
        uVar5 = ftol();
        uVar5 = ((uVar3 | 0xffffff00) << 8 | uVar4 & 0xff) << 8 | uVar5 & 0xff;
      }
      *(uint *)(iVar2 + 0x62) = uVar5;
      rendDRIVER::RenderObj(rendDrv,*(objOBJ **)(this + 0x44),0);
      return;
    }
    uiRECT::Render((uiRECT *)(this + 0x48),param_1);
  }
  if (((byte)this[0x40] & 2) != 0) {
    local_18 = *(float *)(uiSystem + 0xfc);
    local_14 = *(float *)(uiSystem + 0x100);
    pfVar6 = (float *)GetTextStartPos(this);
    local_10 = *pfVar6 * local_18;
    puVar7 = *(ushort **)(this + 0x94);
    fStack_c = pfVar6[1] * local_14;
    local_18 = local_18 * *(float *)(this + 0x9c);
    local_14 = local_14 * *(float *)(this + 0xa0);
    if (*(int *)(this + 0x98) == 0) {
      puVar7 = gsSTRINGS::GetStringById(gsStrings,(int)puVar7);
    }
    uiFONT::PrintW(*(uiFONT **)(this + 0x90),local_8,param_1,puVar7,local_10,fStack_c,
                   *(undefined4 *)(this + 0xa8),&local_18,*(undefined4 *)(this + 0xa4));
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:ui_rnd.cpp
   addr: 00514300 */

void __thiscall uiRENDER_ELEM::GetTextStartPos(uiRENDER_ELEM *this)

{
  uint uVar1;
  float *in_stack_00000004;
  float local_8;
  float local_4;
  
  uVar1 = *(uint *)(this + 0xa4) & 3;
  if (uVar1 != 0) {
    if (uVar1 == 1) {
      local_8 = (*(float *)(this + 0x5c) + *(float *)(this + 0x4c)) * ___real_3f000000;
      goto LAB_00514337;
    }
    if (uVar1 == 2) {
      local_8 = *(float *)(this + 0x5c);
      goto LAB_00514337;
    }
  }
  local_8 = *(float *)(this + 0x4c);
LAB_00514337:
  switch(*(uint *)(this + 0xa4) & 0xc) {
  default:
    local_4 = *(float *)(this + 0x50);
    break;
  case 4:
    local_4 = *(float *)(this + 0x80);
    break;
  case 8:
    local_4 = *(float *)(this + 0x50);
    break;
  case 0xc:
    local_4 = (*(float *)(this + 0x80) + *(float *)(this + 0x60)) * ___real_3f000000;
  }
  *in_stack_00000004 = local_8;
  in_stack_00000004[1] = local_4;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:ui_rnd.cpp
   addr: 005143C0 */

void __thiscall uiRENDER_ELEM::MoveTo(uiRENDER_ELEM *this,m2dV *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uiRENDER_ELEM *puVar5;
  int iVar6;
  
  fVar3 = (*(float *)(this + 0x6c) + *(float *)(this + 0x4c)) * ___real_3f000000;
  fVar4 = (*(float *)(this + 0x70) + *(float *)(this + 0x50)) * ___real_3f000000;
  fVar1 = *(float *)param_1;
  fVar2 = *(float *)(param_1 + 4);
  iVar6 = 4;
  puVar5 = this + 0x50;
  do {
    iVar6 = iVar6 + -1;
    *(float *)(puVar5 + -4) = (fVar1 - fVar3) + *(float *)(puVar5 + -4);
    *(float *)puVar5 = (fVar2 - fVar4) + *(float *)puVar5;
    puVar5 = puVar5 + 0x10;
  } while (iVar6 != 0);
  return;
}




/* from: gs:ui_rnd.cpp
   addr: 00514420 */

void __thiscall uiRENDER_ELEM::CalcBBox(uiRENDER_ELEM *this,uiBOX *param_1)

{
  int iVar1;
  ushort *puVar2;
  undefined4 *puVar3;
  undefined4 local_20;
  undefined4 local_1c;
  m2dV local_18 [8];
  m2dV local_10 [16];
  
  iVar1 = *(int *)(this + 0x44);
  if (iVar1 == 0) {
    *(undefined4 *)param_1 = *(undefined4 *)(this + 0x4c);
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(this + 0x50);
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(this + 0x6c);
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(this + 0x70);
  }
  else {
    *(undefined4 *)param_1 = *(undefined4 *)(iVar1 + 200);
    *(float *)(param_1 + 4) = -*(float *)(iVar1 + 0xd8);
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(iVar1 + 0xd4);
    *(float *)(param_1 + 0xc) = -*(float *)(iVar1 + 0xcc);
  }
  if (((*(uint *)(this + 0x40) & 2) != 0) && ((*(uint *)(this + 0x40) & 0x10) == 0)) {
    local_20 = *(undefined4 *)(this + 0x9c);
    local_1c = *(undefined4 *)(this + 0xa0);
    if (*(int *)(this + 0x98) == 0) {
      puVar2 = gsSTRINGS::GetStringById(gsStrings,*(int *)(this + 0x94));
    }
    else {
      puVar2 = *(ushort **)(this + 0x94);
    }
    puVar3 = (undefined4 *)GetTextStartPos(this);
    uiFONT::GetStringRectW
              (*(uiFONT **)(this + 0x90),*puVar3,puVar3[1],puVar2,&local_20,
               *(undefined4 *)(this + 0xa4),local_18,local_10);
    uiBOX::AddVertex(param_1,local_18);
    uiBOX::AddVertex(param_1,local_10);
  }
  return;
}




/* from: gs:ui_rnd.cpp
   addr: 00514520 */

void __thiscall uiRENDER_ELEM::SetTextId(uiRENDER_ELEM *this,int param_1)

{
  if (*(int *)(this + 0x98) != 0) {
    apFree(*(void **)(this + 0x94));
    *(undefined4 *)(this + 0x94) = 0;
    *(undefined4 *)(this + 0x98) = 0;
    *(int *)(this + 0x94) = param_1;
    return;
  }
  *(int *)(this + 0x94) = param_1;
  return;
}




/* from: gs:ui_rnd.cpp
   addr: 00514570 */

void __thiscall uiRENDER_ELEM::SetTextW(uiRENDER_ELEM *this,ushort *param_1,int param_2)

{
  int iVar1;
  size_t sVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  
  sVar2 = wcslen((wchar_t *)param_1);
  if (param_2 < (int)sVar2) {
    sVar2 = param_2;
  }
  iVar1 = sVar2 + 1;
  iVar6 = 0;
  if (0 < iVar1) {
    iVar6 = iVar1;
  }
  if (*(int *)(this + 0x98) == 0) {
    *(int *)(this + 0x98) = iVar6;
    pvVar3 = apMalloc(iVar6 * 2);
  }
  else {
    if (iVar6 <= *(int *)(this + 0x98)) goto LAB_005145d9;
    *(int *)(this + 0x98) = iVar6;
    pvVar3 = apRealloc(*(void **)(this + 0x94),iVar6 * 2);
  }
  *(void **)(this + 0x94) = pvVar3;
LAB_005145d9:
  uVar5 = (sVar2 - 1) + iVar1;
  puVar7 = *(undefined4 **)(this + 0x94);
  for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar7 = *(undefined4 *)param_1;
    param_1 = param_1 + 2;
    puVar7 = puVar7 + 1;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(char *)puVar7 = (char)*param_1;
    param_1 = (ushort *)((int)param_1 + 1);
    puVar7 = (undefined4 *)((int)puVar7 + 1);
  }
  *(undefined2 *)(*(int *)(this + 0x94) + -2 + iVar1 * 2) = 0;
  return;
}




/* from: gs:ui_rnd.cpp
   addr: 00514610 */

void __thiscall uiRENDER_ELEM::AppendTextW(uiRENDER_ELEM *this,ushort *param_1,int param_2)

{
  wchar_t *_Str;
  size_t sVar1;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  size_t local_8;
  size_t local_4;
  
  local_8 = wcslen((wchar_t *)param_1);
  if (param_2 < (int)local_8) {
    local_8 = param_2;
  }
  if (*(int *)(this + 0x98) != 0) {
    local_4 = wcslen(*(wchar_t **)(this + 0x94));
    iVar6 = local_4 + 1 + local_8;
    if (*(int *)(this + 0x98) == 0) {
      *(int *)(this + 0x98) = iVar6;
      pvVar3 = apMalloc(iVar6 * 2);
    }
    else {
      if (iVar6 <= *(int *)(this + 0x98)) goto LAB_0051475a;
      *(int *)(this + 0x98) = iVar6;
      pvVar3 = apRealloc(*(void **)(this + 0x94),iVar6 * 2);
    }
    *(void **)(this + 0x94) = pvVar3;
    goto LAB_0051475a;
  }
  _Str = (wchar_t *)gsSTRINGS::GetStringById(gsStrings,*(int *)(this + 0x94));
  local_4 = wcslen(_Str);
  iVar6 = local_4 + 1 + local_8;
  sVar1 = wcslen(_Str);
  if (0x7fffffff < (int)sVar1) {
    sVar1 = 0x7fffffff;
  }
  iVar2 = sVar1 + 1;
  iVar7 = iVar6;
  if (iVar6 < iVar2) {
    iVar7 = iVar2;
  }
  if (*(int *)(this + 0x98) == 0) {
    *(int *)(this + 0x98) = iVar7;
    pvVar3 = apMalloc(iVar7 * 2);
LAB_005146c7:
    *(void **)(this + 0x94) = pvVar3;
  }
  else if (*(int *)(this + 0x98) < iVar7) {
    *(int *)(this + 0x98) = iVar7;
    pvVar3 = apRealloc(*(void **)(this + 0x94),iVar7 * 2);
    goto LAB_005146c7;
  }
  uVar5 = iVar2 * 2 - 2;
  puVar8 = *(undefined4 **)(this + 0x94);
  for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar8 = *(undefined4 *)_Str;
    _Str = _Str + 2;
    puVar8 = puVar8 + 1;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(char *)puVar8 = (char)*_Str;
    _Str = (wchar_t *)((int)_Str + 1);
    puVar8 = (undefined4 *)((int)puVar8 + 1);
  }
  *(undefined2 *)(*(int *)(this + 0x94) + -2 + iVar2 * 2) = 0;
LAB_0051475a:
  puVar8 = (undefined4 *)(*(int *)(this + 0x94) + local_4 * 2);
  for (uVar5 = local_8 * 2 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar8 = *(undefined4 *)param_1;
    param_1 = param_1 + 2;
    puVar8 = puVar8 + 1;
  }
  for (uVar5 = local_8 * 2 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(char *)puVar8 = (char)*param_1;
    param_1 = (ushort *)((int)param_1 + 1);
    puVar8 = (undefined4 *)((int)puVar8 + 1);
  }
  *(undefined2 *)(*(int *)(this + 0x94) + -2 + iVar6 * 2) = 0;
  return;
}




/* from: gs:ui_rnd.cpp
   addr: 005147A0 */

void __thiscall uiRENDER_ELEM::SetAlpha(uiRENDER_ELEM *this,float param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = ftol();
  iVar2 = ftol();
  uVar3 = ftol();
  uVar4 = ftol();
  *(uint *)(this + 0x8c) = ((uVar1 & 0xff | iVar2 << 8) << 8 | uVar3 & 0xff) << 8 | uVar4 & 0xff;
  return;
}




/* from: gs:ui_rnd.cpp
   addr: 00514850 */

void __thiscall uiRENDER_ELEM::SetAlphaText(uiRENDER_ELEM *this,float param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = ftol();
  iVar2 = ftol();
  uVar3 = ftol();
  uVar4 = ftol();
  *(uint *)(this + 0xa8) = ((uVar1 & 0xff | iVar2 << 8) << 8 | uVar3 & 0xff) << 8 | uVar4 & 0xff;
  return;
}




/* from: gs:ui_rnd.cpp
   addr: 00514910 */

void __thiscall uiRENDER_INFO::Init(uiRENDER_INFO *this,objOBJ *param_1)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  arrVector<class_uiRENDER_ELEM> *this_00;
  objOBJ *local_bc;
  objOBJ *local_b8;
  int local_b4;
  uiRENDER_ELEM local_ac [64];
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_20;
  undefined4 local_1c;
  void *local_18;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_bc = (objOBJ *)0x0;
  if (param_1 != (objOBJ *)0x0) {
    local_bc = *(objOBJ **)(param_1 + 0x38);
    local_b4 = 0;
    local_b8 = local_bc;
  }
  uiRENDER_ELEM::Init((uiRENDER_ELEM *)this,param_1);
  for (; (local_bc != (objOBJ *)0x0 && ((local_b4 == 0 || (local_b8 != local_bc))));
      local_b8 = *(objOBJ **)(local_b8 + 0x30)) {
    iVar1 = *(int *)(this + 0xb0);
    this_00 = (arrVector<class_uiRENDER_ELEM> *)(this + 0xac);
    local_64 = 0;
    local_20 = 0xffffffff;
    local_14 = 0;
    local_6c = 0;
    local_68 = 0;
    local_1c = 0;
    local_8 = 0;
    local_4 = 0xffffffff;
    iVar4 = iVar1 + 1;
    local_ac[0] = (uiRENDER_ELEM)0x0;
    local_18 = (void *)0x1;
    local_c = 0x3f800000;
    local_10 = 0x3f800000;
    if (*(int *)(this + 0xb4) < iVar4) {
      iVar3 = *(int *)(this + 0xb4) * 2;
      if (iVar3 <= iVar4) {
        iVar3 = iVar4;
      }
      arrVector<class_uiRENDER_ELEM>::Reserve(this_00,iVar3);
    }
    iVar3 = iVar1 * 0xac;
    memmove((void *)(*(int *)this_00 + iVar4 * 0xac),(void *)(*(int *)this_00 + iVar3),
            *(int *)(this + 0xb0) * 0xac + iVar1 * -0xac);
    if (iVar1 < iVar4) {
      iVar4 = iVar4 - iVar1;
      do {
        if ((uiRENDER_ELEM *)(*(int *)this_00 + iVar3) != (uiRENDER_ELEM *)0x0) {
          uiRENDER_ELEM::uiRENDER_ELEM((uiRENDER_ELEM *)(*(int *)this_00 + iVar3),local_ac);
        }
        iVar3 = iVar3 + 0xac;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    iVar4 = *(int *)(this + 0xb0);
    *(int *)(this + 0xb0) = iVar4 + 1;
    uiRENDER_ELEM::Init((uiRENDER_ELEM *)(*(int *)this_00 + -0xac + (iVar4 + 1) * 0xac),local_b8);
    if (local_14 != 0) {
      apFree(local_18);
      local_14 = 0;
      local_18 = (void *)0x0;
    }
    local_b4 = 1;
  }
  iVar4 = *(int *)(this + 0xb0);
  if (iVar4 != *(int *)(this + 0xb4)) {
    pvVar2 = apRealloc(*(void **)(this + 0xac),iVar4 * 0xac);
    *(void **)(this + 0xac) = pvVar2;
    *(int *)(this + 0xb4) = iVar4;
  }
  return;
}




/* from: gs:ui_rnd.cpp
   addr: 00514B10 */

void __thiscall uiRENDER_INFO::Render(uiRENDER_INFO *this,camCAMERA *param_1)

{
  int iVar1;
  int iVar2;
  
  uiRENDER_ELEM::Render((uiRENDER_ELEM *)this,param_1);
  iVar1 = 0;
  if (0 < *(int *)(this + 0xb0)) {
    iVar2 = 0;
    do {
      if ((*(byte *)(*(int *)(this + 0xac) + 0x40 + iVar2) & 8) == 0) {
        uiRENDER_ELEM::Render((uiRENDER_ELEM *)(*(int *)(this + 0xac) + iVar2),param_1);
      }
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0xac;
    } while (iVar1 < *(int *)(this + 0xb0));
  }
  return;
}




/* from: gs:ui_rnd.cpp
   addr: 00514B60 */

void __thiscall uiRENDER_INFO::SetFont(uiRENDER_INFO *this,uiFONT *param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(uiFONT **)(this + 0x90) != param_1) {
    iVar1 = 0;
    *(uiFONT **)(this + 0x90) = param_1;
    if (0 < *(int *)(this + 0xb0)) {
      iVar2 = 0;
      do {
        iVar1 = iVar1 + 1;
        *(uiFONT **)(*(int *)(this + 0xac) + 0x90 + iVar2) = param_1;
        iVar2 = iVar2 + 0xac;
      } while (iVar1 < *(int *)(this + 0xb0));
    }
  }
  return;
}




/* from: gs:ui_rnd.cpp
   addr: 00514BB0 */

void __thiscall uiRENDER_INFO::SetColor(uiRENDER_INFO *this,ulong param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  *(ulong *)(this + 0x8c) = param_1;
  if (0 < *(int *)(this + 0xb0)) {
    iVar2 = 0;
    do {
      iVar1 = iVar1 + 1;
      *(ulong *)(*(int *)(this + 0xac) + 0x8c + iVar2) = param_1;
      iVar2 = iVar2 + 0xac;
    } while (iVar1 < *(int *)(this + 0xb0));
  }
  return;
}




/* from: gs:ui_rnd.cpp
   addr: 00514BF0 */

void __thiscall uiRENDER_INFO::SetColorText(uiRENDER_INFO *this,ulong param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  *(ulong *)(this + 0xa8) = param_1;
  if (0 < *(int *)(this + 0xb0)) {
    iVar2 = 0;
    do {
      iVar1 = iVar1 + 1;
      *(ulong *)(*(int *)(this + 0xac) + 0xa8 + iVar2) = param_1;
      iVar2 = iVar2 + 0xac;
    } while (iVar1 < *(int *)(this + 0xb0));
  }
  return;
}




/* from: gs:ui_rnd.cpp
   addr: 00514C30 */

void __thiscall uiRENDER_INFO::SetTex(uiRENDER_INFO *this,txmTEXTURE *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  *(txmTEXTURE **)(this + 0x48) = param_1;
  if (0 < *(int *)(this + 0xb0)) {
    iVar2 = 0;
    do {
      iVar1 = iVar1 + 1;
      *(txmTEXTURE **)(*(int *)(this + 0xac) + 0x48 + iVar2) = param_1;
      iVar2 = iVar2 + 0xac;
    } while (iVar1 < *(int *)(this + 0xb0));
  }
  return;
}




/* from: gs:ui_rnd.cpp
   addr: 00514C70 */

void __thiscall uiRENDER_INFO::SetAlpha(uiRENDER_INFO *this,float param_1)

{
  int iVar1;
  uchar uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int local_30;
  
  if (((byte)this[0x40] & 4) == 0) {
    uVar3 = ftol();
    iVar7 = ftol();
    uVar5 = ftol();
    uVar6 = ftol();
    *(uint *)(this + 0x8c) = ((uVar3 & 0xff | iVar7 << 8) << 8 | uVar5 & 0xff) << 8 | uVar6 & 0xff;
  }
  else {
    uVar2 = ftol();
    objOBJ::SetTransparency(*(objOBJ **)(this + 0x44),0x80,uVar2);
  }
  local_30 = 0;
  if (0 < *(int *)(this + 0xb0)) {
    iVar7 = 0;
    do {
      if (((byte)this[0x40] & 4) == 0) {
        iVar1 = *(int *)(this + 0xac);
        uVar3 = ftol();
        iVar4 = ftol();
        uVar5 = ftol();
        uVar6 = ftol();
        *(uint *)(iVar1 + 0x8c + iVar7) =
             ((uVar3 & 0xff | iVar4 << 8) << 8 | uVar5 & 0xff) << 8 | uVar6 & 0xff;
      }
      else {
        uVar2 = ftol();
        objOBJ::SetTransparency(*(objOBJ **)(this + 0x44),0x80,uVar2);
      }
      local_30 = local_30 + 1;
      iVar7 = iVar7 + 0xac;
    } while (local_30 < *(int *)(this + 0xb0));
  }
  return;
}




/* from: gs:ui_rnd.cpp
   addr: 00514E30 */

void __thiscall uiRENDER_INFO::SetAlphaText(uiRENDER_INFO *this,float param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  iVar2 = ftol();
  uVar3 = ftol();
  uVar4 = ftol();
  uVar5 = ftol();
  *(uint *)(this + 0xa8) = ((uVar3 & 0xff | iVar2 << 8) << 8 | uVar4 & 0xff) << 8 | uVar5 & 0xff;
  iVar6 = 0;
  if (0 < *(int *)(this + 0xb0)) {
    param_1 = 0.0;
    do {
      iVar1 = *(int *)(this + 0xac);
      uVar3 = ftol();
      uVar4 = ftol();
      uVar5 = ftol();
      iVar6 = iVar6 + 1;
      *(uint *)((int)param_1 + 0xa8 + iVar1) =
           ((uVar3 & 0xff | iVar2 << 8) << 8 | uVar4 & 0xff) << 8 | uVar5 & 0xff;
      param_1 = (float)((int)param_1 + 0xac);
    } while (iVar6 < *(int *)(this + 0xb0));
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:ui_rnd.cpp
   addr: 00514FC0 */

void __thiscall uiRENDER_INFO::CalcBBox(uiRENDER_INFO *this,uiBOX *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_c = DAT_00963758;
  local_4 = DAT_00963758;
  local_10 = _m2dVZero;
  local_8 = _m2dVZero;
  uiRENDER_ELEM::CalcBBox((uiRENDER_ELEM *)this,param_1);
  iVar2 = 0;
  if (0 < *(int *)(this + 0xb0)) {
    iVar1 = 0;
    do {
      uiRENDER_ELEM::CalcBBox((uiRENDER_ELEM *)(*(int *)(this + 0xac) + iVar1),(uiBOX *)&local_10);
      uiBOX::AddVertex(param_1,(m2dV *)&local_10);
      uiBOX::AddVertex(param_1,(m2dV *)&local_8);
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0xac;
    } while (iVar2 < *(int *)(this + 0xb0));
  }
  return;
}




/* from: gs:ui_rnd.cpp
   addr: 00515050 */

uiRENDER_ELEM * __thiscall uiRENDER_INFO::FindElement(uiRENDER_INFO *this,char *param_1)

{
  uiRENDER_INFO uVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  uiRENDER_INFO *puVar5;
  int iVar6;
  uiRENDER_INFO *puVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  bool bVar11;
  
  puVar5 = this;
  puVar7 = (uiRENDER_INFO *)param_1;
  do {
    uVar1 = *puVar5;
    bVar11 = (byte)uVar1 < (byte)*puVar7;
    if (uVar1 != *puVar7) {
LAB_00515085:
      iVar6 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
      goto LAB_0051508a;
    }
    if (uVar1 == (uiRENDER_INFO)0x0) break;
    uVar1 = puVar5[1];
    bVar11 = (byte)uVar1 < (byte)puVar7[1];
    if (uVar1 != puVar7[1]) goto LAB_00515085;
    puVar5 = puVar5 + 2;
    puVar7 = puVar7 + 2;
  } while (uVar1 != (uiRENDER_INFO)0x0);
  iVar6 = 0;
LAB_0051508a:
  if (iVar6 == 0) {
    return (uiRENDER_ELEM *)this;
  }
  iVar6 = 0;
  if (0 < *(int *)(this + 0xb0)) {
    pbVar3 = *(byte **)(this + 0xac);
    pbVar10 = pbVar3;
    pbVar8 = (byte *)param_1;
    pbVar9 = pbVar3;
LAB_005150b4:
    do {
      bVar2 = *pbVar10;
      bVar11 = bVar2 < *pbVar8;
      if (bVar2 == *pbVar8) {
        if (bVar2 != 0) {
          bVar2 = pbVar10[1];
          bVar11 = bVar2 < pbVar8[1];
          if (bVar2 != pbVar8[1]) goto LAB_005150d8;
          pbVar10 = pbVar10 + 2;
          pbVar8 = pbVar8 + 2;
          if (bVar2 != 0) goto LAB_005150b4;
        }
        iVar4 = 0;
      }
      else {
LAB_005150d8:
        iVar4 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
      }
      if (iVar4 == 0) {
        return (uiRENDER_ELEM *)(pbVar3 + iVar6 * 0xac);
      }
      iVar6 = iVar6 + 1;
      pbVar10 = pbVar9 + 0xac;
      pbVar8 = (byte *)param_1;
      pbVar9 = pbVar10;
    } while (iVar6 < *(int *)(this + 0xb0));
  }
  return (uiRENDER_ELEM *)0x0;
}




/* from: gs:ui_rnd.cpp
   addr: 00515120 */

void __thiscall uiRENDER_INFO::SetElementIdx(uiRENDER_INFO *this,char *param_1,int param_2)

{
  uiRENDER_ELEM_TEXT *puVar1;
  byte bVar2;
  byte *pbVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ushort *puVar6;
  int iVar7;
  undefined4 *puVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined4 *puVar11;
  byte *pbVar12;
  undefined4 *puVar13;
  int iVar14;
  undefined4 *puVar15;
  bool bVar16;
  undefined4 local_ac [16];
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64 [17];
  undefined4 local_20;
  undefined4 local_1c;
  ushort *local_18;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_20 = 0xffffffff;
  local_4 = 0xffffffff;
  iVar14 = 0;
  local_ac[0]._0_1_ = 0;
  local_64[0] = 0;
  local_14 = 0;
  local_18 = (ushort *)0x1;
  local_c = 0x3f800000;
  local_10 = 0x3f800000;
  local_8 = 0;
  if (*(int *)(this + 0xb0) < 1) {
    return;
  }
  pbVar3 = *(byte **)(this + 0xac);
  pbVar10 = pbVar3;
  pbVar12 = (byte *)param_1;
  pbVar9 = pbVar3;
LAB_005151b1:
  do {
    bVar2 = *pbVar10;
    bVar16 = bVar2 < *pbVar12;
    if (bVar2 == *pbVar12) {
      if (bVar2 != 0) {
        bVar2 = pbVar10[1];
        bVar16 = bVar2 < pbVar12[1];
        if (bVar2 != pbVar12[1]) goto LAB_005151d5;
        pbVar10 = pbVar10 + 2;
        pbVar12 = pbVar12 + 2;
        if (bVar2 != 0) goto LAB_005151b1;
      }
      iVar7 = 0;
    }
    else {
LAB_005151d5:
      iVar7 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
    }
    if (iVar7 == 0) {
      if (iVar14 == param_2) {
        return;
      }
      iVar14 = iVar14 * 0xac;
      uVar4 = *(undefined4 *)(pbVar3 + iVar14 + 0x40);
      pbVar3 = pbVar3 + iVar14;
      pbVar10 = pbVar3;
      puVar13 = local_ac;
      for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar13 = *(undefined4 *)pbVar10;
        pbVar10 = pbVar10 + 4;
        puVar13 = puVar13 + 1;
      }
      local_68 = *(undefined4 *)(pbVar3 + 0x44);
      uVar5 = *(undefined4 *)(pbVar3 + 0x90);
      pbVar10 = pbVar3 + 0x48;
      puVar13 = local_64;
      for (iVar7 = 0x12; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar13 = *(undefined4 *)pbVar10;
        pbVar10 = pbVar10 + 4;
        puVar13 = puVar13 + 1;
      }
      local_6c = uVar4;
      local_1c = uVar5;
      if (*(int *)(pbVar3 + 0x98) == 0) {
        puVar6 = *(ushort **)(pbVar3 + 0x94);
        uiRENDER_ELEM_TEXT::FreeBuf((uiRENDER_ELEM_TEXT *)&local_18);
        local_18 = puVar6;
      }
      else {
        uiRENDER_ELEM_TEXT::SetToLocalString
                  ((uiRENDER_ELEM_TEXT *)&local_18,*(ushort **)(pbVar3 + 0x94),0x7fffffff,0);
      }
      local_10 = *(undefined4 *)(pbVar3 + 0x9c);
      local_c = *(undefined4 *)(pbVar3 + 0xa0);
      local_8 = *(undefined4 *)(pbVar3 + 0xa4);
      local_4 = *(undefined4 *)(pbVar3 + 0xa8);
      puVar11 = (undefined4 *)(param_2 * 0xac + *(int *)(this + 0xac));
      puVar8 = (undefined4 *)(iVar14 + *(int *)(this + 0xac));
      puVar13 = puVar11;
      puVar15 = puVar8;
      for (iVar14 = 0x10; iVar14 != 0; iVar14 = iVar14 + -1) {
        *puVar15 = *puVar13;
        puVar13 = puVar13 + 1;
        puVar15 = puVar15 + 1;
      }
      puVar8[0x10] = puVar11[0x10];
      puVar8[0x11] = puVar11[0x11];
      puVar13 = puVar11 + 0x12;
      puVar15 = puVar8 + 0x12;
      for (iVar14 = 0x12; iVar14 != 0; iVar14 = iVar14 + -1) {
        *puVar15 = *puVar13;
        puVar13 = puVar13 + 1;
        puVar15 = puVar15 + 1;
      }
      puVar1 = (uiRENDER_ELEM_TEXT *)(puVar8 + 0x25);
      puVar8[0x24] = puVar11[0x24];
      if (puVar11[0x26] == 0) {
        uVar4 = puVar11[0x25];
        uiRENDER_ELEM_TEXT::FreeBuf(puVar1);
        *(undefined4 *)puVar1 = uVar4;
      }
      else {
        uiRENDER_ELEM_TEXT::SetToLocalString(puVar1,(ushort *)puVar11[0x25],0x7fffffff,0);
      }
      iVar14 = local_14;
      puVar8[0x27] = puVar11[0x27];
      puVar8[0x28] = puVar11[0x28];
      puVar8[0x29] = puVar11[0x29];
      puVar8[0x2a] = puVar11[0x2a];
      puVar8 = (undefined4 *)(*(int *)(this + 0xac) + param_2 * 0xac);
      puVar13 = local_ac;
      puVar15 = puVar8;
      for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar15 = *puVar13;
        puVar13 = puVar13 + 1;
        puVar15 = puVar15 + 1;
      }
      puVar8[0x10] = local_6c;
      puVar13 = local_64;
      puVar15 = puVar8 + 0x12;
      for (iVar7 = 0x12; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar15 = *puVar13;
        puVar13 = puVar13 + 1;
        puVar15 = puVar15 + 1;
      }
      puVar1 = (uiRENDER_ELEM_TEXT *)(puVar8 + 0x25);
      puVar8[0x24] = local_1c;
      puVar8[0x11] = local_68;
      if (local_14 == 0) {
        uiRENDER_ELEM_TEXT::FreeBuf(puVar1);
        *(ushort **)puVar1 = local_18;
      }
      else {
        uiRENDER_ELEM_TEXT::SetToLocalString(puVar1,local_18,0x7fffffff,0);
      }
      puVar8[0x27] = local_10;
      puVar8[0x28] = local_c;
      puVar8[0x29] = local_8;
      puVar8[0x2a] = local_4;
      if (iVar14 == 0) {
        return;
      }
      apFree(local_18);
      return;
    }
    iVar14 = iVar14 + 1;
    pbVar10 = pbVar9 + 0xac;
    pbVar12 = (byte *)param_1;
    pbVar9 = pbVar10;
    if (*(int *)(this + 0xb0) <= iVar14) {
      return;
    }
  } while( true );
}




/* from: gs:ui_rnd.cpp
   addr: 00515460 */

void __thiscall
arrVector<class_uiRENDER_ELEM>::Reserve(arrVector<class_uiRENDER_ELEM> *this,int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  
  iVar2 = param_1;
  if (*(int *)(this + 8) < param_1) {
    if (param_1 < *(int *)(this + 4)) {
      iVar4 = param_1 * 0xac;
      do {
        puVar1 = (undefined4 *)(iVar4 + 0x94 + *(int *)this);
        if (*(int *)(iVar4 + 0x98 + *(int *)this) != 0) {
          apFree((void *)*puVar1);
          puVar1[1] = 0;
          *puVar1 = 0;
        }
        param_1 = param_1 + 1;
        iVar4 = iVar4 + 0xac;
      } while (param_1 < *(int *)(this + 4));
      *(int *)(this + 4) = iVar2;
    }
    pvVar3 = apRealloc(*(void **)this,iVar2 * 0xac);
    *(void **)this = pvVar3;
    *(int *)(this + 8) = iVar2;
  }
  return;
}

