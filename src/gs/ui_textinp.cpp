
/* from: gs:ui_textinp.cpp
   addr: 00518C00 */

uiTEXT_INPUT * __thiscall uiTEXT_INPUT::uiTEXT_INPUT(uiTEXT_INPUT *this)

{
  int iVar1;
  arrVector<unsigned_short> *this_00;
  undefined2 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uiELEMENT::uiELEMENT((uiELEMENT *)this);
  uiRENDER_ELEM::uiRENDER_ELEM((uiRENDER_ELEM *)(this + 0x6c));
  *(undefined4 *)(this + 0x118) = 0;
  *(undefined4 *)(this + 0x120) = 0;
  *(undefined4 *)(this + 0x11c) = 0;
  arrVector<class_uiRENDER_ELEM>::Resize((arrVector<class_uiRENDER_ELEM> *)(this + 0x118),0);
  *(undefined4 *)(this + 0x124) = 0;
  this_00 = (arrVector<unsigned_short> *)(this + 0x128);
  *(undefined4 *)this_00 = 0;
  *(undefined4 *)(this + 0x130) = 0;
  *(undefined4 *)(this + 300) = 0;
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 0x13c) = 0;
  *(undefined4 *)(this + 0x134) = 0x3e99999a;
  iVar5 = *(int *)(this + 300);
  iVar3 = *(int *)(this + 0x130);
  iVar1 = iVar5 + 1;
  if (iVar3 < iVar1) {
    iVar4 = iVar3 * 2;
    if (iVar3 * 2 <= iVar1) {
      iVar4 = iVar1;
    }
    if (iVar3 < iVar4) {
      arrVector<unsigned_short>::Realloc(this_00,iVar4);
    }
  }
  memmove((void *)(*(int *)this_00 + iVar1 * 2),(void *)(*(int *)this_00 + iVar5 * 2),
          (*(int *)(this + 300) - iVar5) * 2);
  for (; iVar5 < iVar1; iVar5 = iVar5 + 1) {
    puVar2 = (undefined2 *)(*(int *)this_00 + iVar5 * 2);
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  *(int *)(this + 300) = *(int *)(this + 300) + 1;
  *(undefined4 *)(this + 0x138) = 0x3f;
  return this;
}




/* from: gs:ui_textinp.cpp
   addr: 00518CD0 */

void __thiscall uiTEXT_INPUT::Init(uiTEXT_INPUT *this,objOBJ *param_1)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  arrVector<unsigned_short> *this_00;
  
  uiAREA::Init((uiAREA *)this,param_1);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x406;
  *(uint *)(this + 0xac) = *(uint *)(this + 0xac) | 2;
  uiAREA::SetTextId((uiAREA *)this,1);
  *(uint *)(this + 0xac) = *(uint *)(this + 0xac) | 0x10;
  *(uint *)(this + 0x13c) = *(uint *)(this + 0x13c) | 1;
  iVar3 = (**(code **)(*(int *)this + 0x60))();
  this_00 = (arrVector<unsigned_short> *)(this + 0x128);
  iVar3 = iVar3 + 2;
  if (*(int *)(this + 0x130) < iVar3) {
    if (iVar3 < *(int *)(this + 300)) {
      arrVector<unsigned_short>::Resize(this_00,iVar3);
    }
    pvVar4 = apRealloc(*(void **)this_00,iVar3 * 2);
    *(void **)this_00 = pvVar4;
    *(int *)(this + 0x130) = iVar3;
  }
  if ((*(int *)(this + 300) < 0) && (*(int *)(this + 0x130) < 0)) {
    arrVector<unsigned_short>::Realloc(this_00,0);
  }
  *(undefined4 *)(this + 300) = 0;
  iVar6 = *(int *)(this + 300);
  iVar2 = *(int *)(this + 0x130);
  iVar3 = iVar6 + 1;
  if (iVar2 < iVar3) {
    iVar5 = iVar2 * 2;
    if (iVar2 * 2 <= iVar3) {
      iVar5 = iVar3;
    }
    if (iVar2 < iVar5) {
      arrVector<unsigned_short>::Realloc(this_00,iVar5);
    }
  }
  memmove((void *)(*(int *)this_00 + iVar3 * 2),(void *)(*(int *)this_00 + iVar6 * 2),
          (*(int *)(this + 300) - iVar6) * 2);
  for (; iVar6 < iVar3; iVar6 = iVar6 + 1) {
    puVar1 = (undefined2 *)(*(int *)this_00 + iVar6 * 2);
    if (puVar1 != (undefined2 *)0x0) {
      *puVar1 = 0;
    }
  }
  iVar3 = *(int *)(this + 300);
  iVar6 = iVar3 + 1;
  *(int *)(this + 300) = iVar6;
  if (((iVar6 <= iVar3) && (iVar6 < iVar3)) && (*(int *)(this + 0x130) < iVar3)) {
    arrVector<unsigned_short>::Realloc(this_00,iVar3);
  }
  *(int *)(this + 300) = iVar3;
  return;
}




/* from: gs:ui_textinp.cpp
   addr: 00518E00 */

int __thiscall uiTEXT_INPUT::OnKeyboard(uiTEXT_INPUT *this,uiINPUT_INFO *param_1)

{
  void *pvVar1;
  int iVar2;
  uiTEXT_INPUT *local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_c = (uiTEXT_INPUT *)0x0;
  local_8 = 0;
  local_4 = 0;
  if (*(int *)param_1 == 6) {
    if (*(int *)(param_1 + 0xc) == 0) {
      if (*(int *)(this + 300) != 0) {
        *(undefined2 *)(*(int *)(this + 0x128) + -2 + *(int *)(this + 300) * 2) = 0;
        iVar2 = *(int *)(this + 300) + -1;
        if ((*(int *)(this + 300) < iVar2) && (*(int *)(this + 0x130) < iVar2)) {
          pvVar1 = apRealloc(*(void **)(this + 0x128),iVar2 * 2);
          *(void **)(this + 0x128) = pvVar1;
          *(int *)(this + 0x130) = iVar2;
        }
        *(int *)(this + 300) = iVar2;
      }
      return 0;
    }
    if (*(int *)(param_1 + 0xc) == 9) {
      if (*(int **)(this + 8) != (int *)0x0) {
        local_8 = 0x494e50;
        local_4 = 0x454e5452;
        local_c = this;
        (**(code **)(**(int **)(this + 8) + 0x5c))(&local_c);
      }
      return 0;
    }
  }
  iVar2 = uiELEMENT::OnChar((uiELEMENT *)this,param_1);
  return iVar2;
}




/* from: gs:ui_textinp.cpp
   addr: 00518ED0 */

int __thiscall uiTEXT_INPUT::OnChar(uiTEXT_INPUT *this,uiINPUT_INFO *param_1)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  int iVar7;
  arrVector<unsigned_short> *this_00;
  
  iVar3 = (**(code **)(*(int *)this + 0x70))(*(undefined2 *)(param_1 + 0xc));
  if ((iVar3 != 0) &&
     (iVar3 = *(int *)(this + 300), iVar4 = (**(code **)(*(int *)this + 0x60))(), iVar3 < iVar4)) {
    iVar4 = *(int *)(this + 0x130);
    this_00 = (arrVector<unsigned_short> *)(this + 0x128);
    uVar2 = *(undefined2 *)(param_1 + 0xc);
    iVar5 = *(int *)(this + 300);
    iVar3 = iVar5 + 1;
    if (iVar4 < iVar3) {
      iVar7 = iVar4 * 2;
      if (iVar4 * 2 <= iVar3) {
        iVar7 = iVar3;
      }
      if (iVar4 < iVar7) {
        arrVector<unsigned_short>::Realloc(this_00,iVar7);
      }
    }
    memmove((void *)(*(int *)this_00 + iVar3 * 2),(void *)(*(int *)this_00 + iVar5 * 2),
            (*(int *)(this + 300) - iVar5) * 2);
    for (; iVar5 < iVar3; iVar5 = iVar5 + 1) {
      puVar1 = (undefined2 *)(*(int *)this_00 + iVar5 * 2);
      if (puVar1 != (undefined2 *)0x0) {
        *puVar1 = uVar2;
      }
    }
    iVar3 = *(int *)(this + 300);
    iVar5 = iVar3 + 1;
    *(int *)(this + 300) = iVar5;
    iVar4 = *(int *)(this + 0x130);
    iVar3 = iVar3 + 2;
    if (iVar4 < iVar3) {
      iVar7 = iVar4 * 2;
      if (iVar4 * 2 <= iVar3) {
        iVar7 = iVar3;
      }
      if (iVar4 < iVar7) {
        arrVector<unsigned_short>::Realloc(this_00,iVar7);
      }
    }
    memmove((void *)(*(int *)this_00 + iVar3 * 2),(void *)(*(int *)this_00 + iVar5 * 2),
            (*(int *)(this + 300) - iVar5) * 2);
    for (; iVar5 < iVar3; iVar5 = iVar5 + 1) {
      puVar1 = (undefined2 *)(*(int *)this_00 + iVar5 * 2);
      if (puVar1 != (undefined2 *)0x0) {
        *puVar1 = 0;
      }
    }
    iVar3 = *(int *)(this + 300);
    *(int *)(this + 300) = iVar3 + 1;
    if ((iVar3 + 1 < iVar3) && (*(int *)(this + 0x130) < iVar3)) {
      pvVar6 = apRealloc(*(void **)this_00,iVar3 * 2);
      *(void **)this_00 = pvVar6;
      *(int *)(this + 0x130) = iVar3;
    }
    *(int *)(this + 300) = iVar3;
  }
  return 0;
}




/* from: gs:ui_textinp.cpp
   addr: 00519000 */

int __thiscall uiTEXT_INPUT::ProcessUpdate(uiTEXT_INPUT *this,void *param_1)

{
  uiTEXT_INPUT *puVar1;
  float fVar2;
  float fVar3;
  short sVar4;
  uiFONT *this_00;
  float fVar5;
  int iVar6;
  m2dV *pmVar7;
  float *pfVar8;
  size_t sVar9;
  uint uVar10;
  ushort *puVar11;
  float extraout_EDX;
  char **ppcVar12;
  wchar_t *pwVar13;
  float10 fVar14;
  uiTEXT_INPUT *puVar15;
  ushort auStack_8 [4];
  
  uiELEMENT::OnChar((uiELEMENT *)this,(uiINPUT_INFO *)param_1);
  iVar6 = m3dUpdateTimeField((float *)(this + 0x134),extraout_EDX);
  if (iVar6 != 0) {
    *(uint *)(this + 0x13c) = *(uint *)(this + 0x13c) ^ 2;
    fVar14 = (float10)(**(code **)(*(int *)this + 0x6c))();
    *(float *)(this + 0x134) = (float)fVar14;
  }
  fVar2 = *(float *)(this + 0x60);
  fVar3 = *(float *)(this + 0x58);
  this_00 = *(uiFONT **)(this + 0xfc);
  puVar1 = this + 0x108;
  puVar15 = puVar1;
  pmVar7 = (m2dV *)(**(code **)(*(int *)this + 0x68))(puVar1,*(undefined4 *)(this + 0x110));
  pfVar8 = (float *)uiFONT::GetStringSizeW(this_00,auStack_8,pmVar7,(int)puVar15);
  fVar5 = *pfVar8;
  if (*(int *)(this + 300) == 0) {
    pwVar13 = u_;
  }
  else {
    if (((byte)this[0x13c] & 4) != 0) {
      sVar9 = wcslen(*(wchar_t **)(this + 0x128));
      ppcVar12 = &apBuffer;
      uiFONT::GetStringSizeW(*(uiFONT **)(this + 0xfc),auStack_8,(m2dV *)u__,(int)puVar1);
      uVar10 = ftol();
      if ((int)uVar10 <= (int)sVar9) {
        sVar9 = uVar10;
      }
      if (0 < (int)sVar9) {
        ppcVar12 = &apBuffer;
        for (uVar10 = sVar9 >> 1; uVar10 != 0; uVar10 = uVar10 - 1) {
          *ppcVar12 = (char *)0x2a002a;
          ppcVar12 = ppcVar12 + 1;
        }
        for (uVar10 = (uint)((sVar9 & 1) != 0); uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined2 *)ppcVar12 = 0x2a;
          ppcVar12 = (char **)((int)ppcVar12 + 2);
        }
        ppcVar12 = (char **)((int)&apBuffer + sVar9 * 2);
      }
      *(undefined2 *)ppcVar12 = 0;
      uiAREA::SetTextW((uiAREA *)this,(ushort *)&apBuffer,0x7fffffff);
      goto LAB_0051916f;
    }
    pwVar13 = *(wchar_t **)(this + 0x128);
    sVar4 = *pwVar13;
    while ((sVar4 != 0 &&
           (pfVar8 = (float *)uiFONT::GetStringSizeW
                                        (*(uiFONT **)(this + 0xfc),auStack_8,(m2dV *)pwVar13,
                                         (int)puVar1),
           *pfVar8 + fVar5 < fVar2 - fVar3 == (*pfVar8 + fVar5 == fVar2 - fVar3)))) {
      pwVar13 = (wchar_t *)((int)pwVar13 + 2);
      sVar4 = *pwVar13;
    }
  }
  uiAREA::SetTextW((uiAREA *)this,(ushort *)pwVar13,0x7fffffff);
LAB_0051916f:
  if (((((byte)this[4] & 0x20) != 0) && ((*(uint *)(this + 0x13c) & 2) != 0)) &&
     ((*(uint *)(this + 0x13c) & 1) != 0)) {
    iVar6 = 0x7fffffff;
    puVar11 = (ushort *)(**(code **)(*(int *)this + 0x68))();
    uiAREA::AppendTextW((uiAREA *)this,puVar11,iVar6);
  }
  return 1;
}




/* from: gs:ui_textinp.cpp
   addr: 005191B0 */

ushort * __thiscall uiTEXT_INPUT::GetEditText(uiTEXT_INPUT *this)

{
  if (*(int *)(this + 300) != 0) {
    return *(ushort **)(this + 0x128);
  }
  return (ushort *)u_;
}




/* from: gs:ui_textinp.cpp
   addr: 005191D0 */

void __thiscall uiTEXT_INPUT::SetEditText(uiTEXT_INPUT *this,ushort *param_1)

{
  arrVector<unsigned_short> *this_00;
  ushort *puVar1;
  ushort uVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = 0;
  uVar2 = *param_1;
  while (uVar2 != 0) {
    iVar7 = iVar7 + 1;
    uVar2 = param_1[iVar7];
  }
  this_00 = (arrVector<unsigned_short> *)(this + 0x128);
  if ((*(int *)(this + 300) < 0) && (*(int *)(this + 0x130) < 0)) {
    arrVector<unsigned_short>::Realloc(this_00,0);
  }
  *(undefined4 *)(this + 300) = 0;
  iVar7 = iVar7 * 2 + 2 >> 1;
  if (iVar7 != 0) {
    iVar3 = *(int *)(this + 0x130);
    iVar5 = *(int *)(this + 300) + iVar7;
    if (iVar3 < iVar5) {
      iVar6 = iVar3 * 2;
      if (iVar3 * 2 <= iVar5) {
        iVar6 = iVar5;
      }
      if (iVar3 < iVar6) {
        if (iVar6 < *(int *)(this + 300)) {
          arrVector<unsigned_short>::Resize(this_00,iVar6);
        }
        pvVar4 = apRealloc(*(void **)this_00,iVar6 * 2);
        *(void **)this_00 = pvVar4;
        *(int *)(this + 0x130) = iVar6;
      }
    }
    memmove((void *)((int)*(void **)this_00 + iVar7 * 2),*(void **)this_00,*(int *)(this + 300) * 2)
    ;
    iVar5 = 0;
    if (0 < iVar7) {
      do {
        puVar1 = (ushort *)(*(int *)this_00 + iVar5 * 2);
        if (puVar1 != (ushort *)0x0) {
          *puVar1 = *param_1;
        }
        param_1 = param_1 + 1;
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar7);
    }
    *(int *)(this + 300) = *(int *)(this + 300) + iVar7;
  }
  iVar5 = *(int *)(this + 300);
  iVar7 = iVar5 + -1;
  if (((iVar5 <= iVar7) && (iVar5 < iVar7)) && (*(int *)(this + 0x130) < iVar7)) {
    pvVar4 = apRealloc(*(void **)this_00,iVar7 * 2);
    *(void **)this_00 = pvVar4;
    *(int *)(this + 0x130) = iVar7;
  }
  *(int *)(this + 300) = iVar7;
  return;
}

