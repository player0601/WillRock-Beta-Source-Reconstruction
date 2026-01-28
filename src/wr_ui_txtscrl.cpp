
/* from: wr_ui_txtscrl.cpp
   addr: 00492780 */

void __thiscall wrUI_TEXT_SCROLL::Init(wrUI_TEXT_SCROLL *this,objOBJ *param_1)

{
  uiRENDER_INFO *this_00;
  uiRENDER_ELEM *puVar1;
  
  uiSCROLL::Init((uiSCROLL *)this,param_1);
  this_00 = (uiRENDER_INFO *)(this + 0x6c);
  puVar1 = uiRENDER_INFO::FindElement(this_00,s_arrow_l);
  *(uiRENDER_ELEM **)(this + 0x130) = puVar1;
  if (puVar1 != (uiRENDER_ELEM *)0x0) {
    *(uint *)(puVar1 + 0x40) = *(uint *)(puVar1 + 0x40) | 8;
    puVar1 = uiRENDER_INFO::FindElement(this_00,s_arrow_r);
    *(uiRENDER_ELEM **)(this + 0x134) = puVar1;
    *(uint *)(puVar1 + 0x40) = *(uint *)(puVar1 + 0x40) | 8;
  }
  uiRENDER_INFO::SetColorText(this_00,0x5c000000);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x406;
  return;
}




/* from: wr_ui_txtscrl.cpp
   addr: 004927F0 */

void __thiscall wrUI_TEXT_SCROLL::Enable(wrUI_TEXT_SCROLL *this,int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this + 4);
  if (param_1 == 0) {
    if ((uVar1 & 0x800) == 0) {
      *(uint *)(this + 4) = uVar1 | 0x800;
      uiRENDER_INFO::SetColorText((uiRENDER_INFO *)(this + 0x6c),0x2c000000);
      if (*(wrUI_TEXT_SCROLL **)(uiSystem + 0xc) == this) {
        uiUI_SYSTEM::SetMouseFocus(uiSystem,(uiELEMENT *)0x0);
      }
      if (*(wrUI_TEXT_SCROLL **)(uiSystem + 0x10) == this) {
        uiUI_SYSTEM::SetKbdFocus(uiSystem,(uiELEMENT *)0x0);
        return;
      }
    }
  }
  else if ((uVar1 & 0x800) != 0) {
    *(uint *)(this + 4) = uVar1 & 0xfffff7ff;
    uiRENDER_INFO::SetColorText((uiRENDER_INFO *)(this + 0x6c),0x5c000000);
    UpdateArrows(this);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: wr_ui_txtscrl.cpp
   addr: 00492870 */

void __thiscall wrUI_TEXT_SCROLL::UpdateArrows(wrUI_TEXT_SCROLL *this)

{
  int iVar1;
  ushort *puVar2;
  int iVar3;
  uiBOX auStack_34 [4];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_30 = _m2dVZero;
  local_28 = _m2dVZero;
  local_10 = _m2dVZero;
  local_8 = _m2dVZero;
  local_20 = _m2dVZero;
  local_18 = _m2dVZero;
  local_2c = DAT_00963758;
  local_24 = DAT_00963758;
  local_c = DAT_00963758;
  local_4 = DAT_00963758;
  local_1c = DAT_00963758;
  local_14 = DAT_00963758;
  if ((*(int *)(this + 0x130) != 0) && ((*(uint *)(this + 4) & 0x800) == 0)) {
    iVar1 = (**(code **)(*(int *)this + 100))();
    if (iVar1 == 0) {
      local_30 = *(undefined4 *)(this + 0x58);
      local_2c = *(undefined4 *)(this + 0x5c);
      local_28 = *(undefined4 *)(this + 0x60);
      local_24 = *(undefined4 *)(this + 100);
    }
    else {
      puVar2 = (ushort *)(**(code **)(*(int *)this + 0x68))(0);
      uiAREA::SetTextW((uiAREA *)this,puVar2,0x7fffffff);
      uiRENDER_ELEM::CalcBBox((uiRENDER_ELEM *)(this + 0x6c),auStack_34);
      iVar3 = 1;
      iVar1 = (**(code **)(*(int *)this + 100))();
      if (1 < iVar1) {
        do {
          puVar2 = (ushort *)(**(code **)(*(int *)this + 0x68))(iVar3);
          uiAREA::SetTextW((uiAREA *)this,puVar2,0x7fffffff);
          uiRENDER_ELEM::CalcBBox((uiRENDER_ELEM *)(this + 0x6c),(uiBOX *)&local_14);
          uiBOX::AddVertex(auStack_34,(m2dV *)&local_14);
          uiBOX::AddVertex(auStack_34,(m2dV *)&local_c);
          iVar3 = iVar3 + 1;
          iVar1 = (**(code **)(*(int *)this + 100))();
        } while (iVar3 < iVar1);
      }
    }
    puVar2 = (ushort *)(**(code **)(*(int *)this + 0x68))(*(undefined4 *)(this + 300));
    uiAREA::SetTextW((uiAREA *)this,puVar2,0x7fffffff);
    uiRENDER_ELEM::CalcBBox(*(uiRENDER_ELEM **)(this + 0x130),(uiBOX *)&local_24);
    uiRENDER_ELEM::MoveTo(*(uiRENDER_ELEM **)(this + 0x130),(m2dV *)&stack0xffffffc4);
    uiRENDER_ELEM::CalcBBox(*(uiRENDER_ELEM **)(this + 0x134),(uiBOX *)&local_24);
    uiRENDER_ELEM::MoveTo(*(uiRENDER_ELEM **)(this + 0x134),(m2dV *)&stack0xffffffc4);
  }
  return;
}




/* from: wr_ui_txtscrl.cpp
   addr: 00492A10 */

int __thiscall wrUI_TEXT_SCROLL::StartAppearing(wrUI_TEXT_SCROLL *this,int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    UpdateArrows(this);
  }
  iVar1 = uiAREA::StartAppearing((uiAREA *)this,param_1);
  return iVar1;
}




/* from: wr_ui_txtscrl.cpp
   addr: 00492A30 */

int __thiscall wrUI_TEXT_SCROLL::OnMouseFocus(wrUI_TEXT_SCROLL *this,uiELEMENT *param_1)

{
  if (((*(uint *)(this + 4) & 0x2801) == 0) && (param_1 == (uiELEMENT *)this)) {
    uiUI_SYSTEM::SetKbdFocus(uiSystem,(uiELEMENT *)this);
  }
  return 1;
}




/* from: wr_ui_txtscrl.cpp
   addr: 00492A60 */

int __thiscall wrUI_TEXT_SCROLL::OnKbdFocus(wrUI_TEXT_SCROLL *this,uiELEMENT *param_1)

{
  int iVar1;
  int iVar2;
  wrUI_TEXT_SCROLL *pwVar3;
  ulong uVar4;
  wrUI_TEXT_SCROLL *local_c;
  undefined4 local_8;
  uint local_4;
  
  local_c = (wrUI_TEXT_SCROLL *)0x0;
  local_8 = 0;
  local_4 = 0;
  if (param_1 == (uiELEMENT *)this) {
    if ((*(uint *)(this + 4) & 0x800) != 0) {
      return 0;
    }
    uiRENDER_INFO::SetColorText((uiRENDER_INFO *)(this + 0x6c),0xcf000000);
    iVar2 = (**(code **)(*(int *)this + 100))();
    if ((1 < iVar2) && (pwVar3 = this + 0x130, *(int *)(this + 0x130) != 0)) {
      iVar2 = 2;
      do {
        iVar1 = *(int *)pwVar3;
        pwVar3 = pwVar3 + 4;
        iVar2 = iVar2 + -1;
        *(uint *)(iVar1 + 0x40) = *(uint *)(iVar1 + 0x40) & 0xfffffff7;
      } while (iVar2 != 0);
    }
  }
  else {
    if ((*(uint *)(this + 4) & 0x800) == 0) {
      uVar4 = 0x5c000000;
    }
    else {
      uVar4 = 0x2c000000;
    }
    uiRENDER_INFO::SetColorText((uiRENDER_INFO *)(this + 0x6c),uVar4);
    pwVar3 = this + 0x130;
    if (*(int *)(this + 0x130) != 0) {
      iVar2 = 2;
      do {
        iVar1 = *(int *)pwVar3;
        pwVar3 = pwVar3 + 4;
        iVar2 = iVar2 + -1;
        *(uint *)(iVar1 + 0x40) = *(uint *)(iVar1 + 0x40) | 8;
      } while (iVar2 != 0);
    }
  }
  local_4 = (uint)(param_1 == (uiELEMENT *)this);
  local_8 = 0x464f4353;
  local_c = this;
  (**(code **)(**(int **)(this + 8) + 0x5c))(&local_c);
  return 1;
}




/* from: wr_ui_txtscrl.cpp
   addr: 00492B50 */

void __thiscall wrUI_TEXT_SCROLL::DoScroll(wrUI_TEXT_SCROLL *this,int param_1)

{
  int iVar1;
  int iVar2;
  ushort *puVar3;
  int iVar4;
  
  if ((param_1 == 1) || (param_1 == -1)) {
    (**(code **)(*(int *)uiSystem + 0x84))(2);
  }
  iVar2 = (**(code **)(*(int *)this + 100))();
  iVar1 = *(int *)(this + 300);
  iVar4 = iVar1 + param_1;
  *(int *)(this + 300) = iVar4;
  if (iVar4 < 0) {
    do {
      iVar4 = iVar4 + iVar2;
    } while (iVar4 < 0);
    *(int *)(this + 300) = iVar4;
  }
  iVar4 = *(int *)(this + 300);
  if (iVar2 <= iVar4) {
    do {
      iVar4 = iVar4 - iVar2;
    } while (iVar2 <= iVar4);
    *(int *)(this + 300) = iVar4;
  }
  puVar3 = (ushort *)(**(code **)(*(int *)this + 0x68))(*(undefined4 *)(this + 300));
  uiAREA::SetTextW((uiAREA *)this,puVar3,0x7fffffff);
  if (iVar1 != *(int *)(this + 300)) {
    (**(code **)(*(int *)this + 0x6c))();
    if (*(int **)(this + 8) != (int *)0x0) {
      (**(code **)(**(int **)(this + 8) + 0x5c))(&stack0xfffffff0);
    }
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: wr_ui_txtscrl.cpp
   addr: 00492C10 */

int __thiscall wrUI_TEXT_SCROLL::OnMouseMove(wrUI_TEXT_SCROLL *this,uiINPUT_INFO *param_1)

{
  uiINPUT_INFO *puVar1;
  int iVar2;
  int iVar3;
  wrUI_TEXT_SCROLL *pwVar4;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  puVar1 = param_1;
  local_1c = DAT_00963758;
  local_14 = DAT_00963758;
  local_c = DAT_00963758;
  local_4 = DAT_00963758;
  local_20 = _m2dVZero;
  local_18 = _m2dVZero;
  local_10 = _m2dVZero;
  local_8 = _m2dVZero;
  iVar2 = uiELEMENT::OnMouseMove((uiELEMENT *)this,param_1);
  if (((*(uint *)(this + 4) & 0x2801) == 0) && (pwVar4 = this + 0x130, *(int *)(this + 0x130) != 0))
  {
    uiUI_SYSTEM::GetCursorBBox(uiSystem,(uiBOX *)&local_20);
    param_1 = (uiINPUT_INFO *)&DAT_00000002;
    do {
      uiRENDER_ELEM::CalcBBox(*(uiRENDER_ELEM **)pwVar4,(uiBOX *)&local_10);
      iVar3 = uiBOX::IsBelongBox((uiBOX *)&local_10,(uiBOX *)&local_20);
      if (iVar3 == 0) {
        *(undefined4 *)(*(int *)pwVar4 + 0xa8) = 0xcf000000;
      }
      else {
        iVar2 = 1;
        *(undefined4 *)(*(int *)pwVar4 + 0xa8) = 0xffd8ff02;
        *(wrUI_TEXT_SCROLL **)(puVar1 + 0x10) = this;
      }
      pwVar4 = pwVar4 + 4;
      param_1 = param_1 + -1;
    } while (param_1 != (uiINPUT_INFO *)0x0);
  }
  return iVar2;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: wr_ui_txtscrl.cpp
   addr: 00492CE0 */

int __thiscall wrUI_TEXT_SCROLL::OnMouseButton(wrUI_TEXT_SCROLL *this,uiINPUT_INFO *param_1)

{
  int iVar1;
  int iVar2;
  wrUI_TEXT_SCROLL *pwVar3;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_10 = _m2dVZero;
  local_8 = _m2dVZero;
  local_30 = _m2dVZero;
  local_28 = _m2dVZero;
  local_20 = _m2dVZero;
  local_18 = _m2dVZero;
  local_c = DAT_00963758;
  local_4 = DAT_00963758;
  local_2c = DAT_00963758;
  local_24 = DAT_00963758;
  local_1c = DAT_00963758;
  local_14 = DAT_00963758;
  if ((((*(uint *)(this + 4) & 0x2801) != 0) || (pwVar3 = this + 0x130, *(int *)(this + 0x130) == 0)
      ) || (*(int *)param_1 != 2)) {
    iVar1 = uiELEMENT::OnChar((uiELEMENT *)this,param_1);
    return iVar1;
  }
  uiUI_SYSTEM::GetCursorBBox(uiSystem,(uiBOX *)&local_10);
  uiRENDER_ELEM::CalcBBox((uiRENDER_ELEM *)(this + 0x6c),(uiBOX *)&local_20);
  iVar1 = 0;
  do {
    uiRENDER_ELEM::CalcBBox(*(uiRENDER_ELEM **)pwVar3,(uiBOX *)&local_30);
    iVar2 = uiBOX::IsBelongBox((uiBOX *)&local_30,(uiBOX *)&local_10);
    if (iVar2 != 0) break;
    uiBOX::AddVertex((uiBOX *)&local_20,(m2dV *)&local_30);
    uiBOX::AddVertex((uiBOX *)&local_20,(m2dV *)&local_28);
    iVar1 = iVar1 + 1;
    pwVar3 = pwVar3 + 4;
  } while (iVar1 < 2);
  if (iVar1 == 2) {
    iVar1 = uiBOX::IsBelongBox((uiBOX *)&local_20,(uiBOX *)&local_10);
    if (iVar1 != 0) {
      (**(code **)(*(int *)this + 0x60))(1);
    }
    return 1;
  }
  if (iVar1 != 0) {
    (**(code **)(*(int *)this + 0x60))(1);
    return 0;
  }
  (**(code **)(*(int *)this + 0x60))(0xffffffff);
  return 0;
}




/* from: wr_ui_txtscrl.cpp
   addr: 00492E40 */

void __thiscall wrUI_SWITCH::Init(wrUI_SWITCH *this,objOBJ *param_1)

{
  uiRENDER_INFO *this_00;
  psSHEET *this_01;
  uiRENDER_ELEM *puVar1;
  int iVar2;
  char *pcVar3;
  char local_40 [64];
  
  uiSCROLL::Init((uiSCROLL *)this,param_1);
  this_00 = (uiRENDER_INFO *)(this + 0x6c);
  puVar1 = uiRENDER_INFO::FindElement(this_00,s_arrow_l);
  *(uiRENDER_ELEM **)(this + 0x130) = puVar1;
  if (puVar1 != (uiRENDER_ELEM *)0x0) {
    *(uint *)(puVar1 + 0x40) = *(uint *)(puVar1 + 0x40) | 8;
    puVar1 = uiRENDER_INFO::FindElement(this_00,s_arrow_r);
    *(uiRENDER_ELEM **)(this + 0x134) = puVar1;
    *(uint *)(puVar1 + 0x40) = *(uint *)(puVar1 + 0x40) | 8;
  }
  uiRENDER_INFO::SetColorText(this_00,0x5c000000);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x406;
  this_01 = *(psSHEET **)(param_1 + 0xf0);
  if (this_01 == (psSHEET *)0x0) {
LAB_00492ed4:
    pcVar3 = s_UI_OFF;
  }
  else {
    iVar2 = psSHEET::GetStr(this_01,s_UI_PROP,s_idOff,local_40,0x40);
    if (iVar2 == 0) goto LAB_00492ed4;
    pcVar3 = local_40;
  }
  iVar2 = gsSTRINGS::GetStringId(gsStrings,pcVar3);
  *(int *)(this + 0x138) = iVar2;
  if (this_01 != (psSHEET *)0x0) {
    iVar2 = psSHEET::GetStr(this_01,s_UI_PROP,s_idOn,local_40,0x40);
    if (iVar2 != 0) {
      pcVar3 = local_40;
      goto LAB_00492f16;
    }
  }
  pcVar3 = s_UI_ON;
LAB_00492f16:
  iVar2 = gsSTRINGS::GetStringId(gsStrings,pcVar3);
  *(int *)(this + 0x13c) = iVar2;
  return;
}




/* from: wr_ui_txtscrl.cpp
   addr: 00492F30 */

ushort * __thiscall wrUI_SWITCH::GetStr(wrUI_SWITCH *this,int param_1)

{
  ushort *puVar1;
  
  if ((-1 < param_1) && (param_1 < 2)) {
    puVar1 = gsSTRINGS::GetStringById(gsStrings,*(int *)(this + param_1 * 4 + 0x138));
    return puVar1;
  }
  return (ushort *)0x0;
}




/* from: wr_ui_txtscrl.cpp
   addr: 00492F60 */

void __thiscall wrUI_STRINGS::PreInit(wrUI_STRINGS *this,int param_1,int param_2)

{
  void *pvVar1;
  
  if (*(int *)(this + 8) < param_2) {
    if (param_2 < *(int *)(this + 4)) {
      *(int *)(this + 4) = param_2;
    }
    pvVar1 = apRealloc(*(void **)this,param_2 * 2);
    *(void **)this = pvVar1;
    *(int *)(this + 8) = param_2;
  }
  if (*(int *)(this + 0x14) < param_1) {
    if (param_1 < *(int *)(this + 0x10)) {
      *(int *)(this + 0x10) = param_1;
    }
    pvVar1 = apRealloc(*(void **)(this + 0xc),param_1 * 8);
    *(void **)(this + 0xc) = pvVar1;
    *(int *)(this + 0x14) = param_1;
  }
  return;
}




/* from: wr_ui_txtscrl.cpp
   addr: 00492FC0 */

void __thiscall wrUI_STRINGS::Clear(wrUI_STRINGS *this)

{
  void *pvVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if ((*(int *)(this + 4) < 0) && (*(int *)(this + 8) < 0)) {
    pvVar1 = apRealloc(*(void **)this,0);
    *(void **)this = pvVar1;
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined4 *)(this + 4) = 0;
  if ((*(int *)(this + 0x10) < 1) && (*(int *)(this + 0x10) < 0)) {
    if (*(int *)(this + 0x14) < 0) {
      pvVar1 = apRealloc(*(void **)(this + 0xc),0);
      *(void **)(this + 0xc) = pvVar1;
      *(undefined4 *)(this + 0x14) = 0;
    }
    if (*(int *)(this + 0x10) < 0) {
      iVar3 = *(int *)(this + 0x10) * 8;
      do {
        puVar2 = (undefined4 *)(*(int *)(this + 0xc) + iVar3);
        if (puVar2 != (undefined4 *)0x0) {
          *puVar2 = 0;
          puVar2[1] = 0;
        }
        iVar3 = iVar3 + 8;
      } while (iVar3 < 0);
    }
  }
  *(undefined4 *)(this + 0x10) = 0;
  return;
}




/* from: wr_ui_txtscrl.cpp
   addr: 00493030 */

void __thiscall wrUI_STRINGS::Compact(wrUI_STRINGS *this)

{
  int iVar1;
  void *pvVar2;
  
  iVar1 = *(int *)(this + 4);
  if (iVar1 != *(int *)(this + 8)) {
    pvVar2 = apRealloc(*(void **)this,iVar1 * 2);
    *(void **)this = pvVar2;
    *(int *)(this + 8) = iVar1;
  }
  iVar1 = *(int *)(this + 0x10);
  if (iVar1 != *(int *)(this + 0x14)) {
    pvVar2 = apRealloc(*(void **)(this + 0xc),iVar1 * 8);
    *(void **)(this + 0xc) = pvVar2;
    *(int *)(this + 0x14) = iVar1;
  }
  return;
}




/* from: wr_ui_txtscrl.cpp
   addr: 00493080 */

void __thiscall wrUI_STRINGS::AddString(wrUI_STRINGS *this,int param_1,ulong param_2)

{
  arrVector<struct_gsSTRINGS::Record> *this_00;
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = *(int *)(this + 0x14);
  this_00 = (arrVector<struct_gsSTRINGS::Record> *)(this + 0xc);
  iVar5 = *(int *)(this + 0x10);
  iVar1 = iVar5 + 1;
  if (iVar3 < iVar1) {
    iVar4 = iVar3 * 2;
    if (iVar3 * 2 <= iVar1) {
      iVar4 = iVar1;
    }
    if (iVar3 < iVar4) {
      arrVector<struct_gsSTRINGS::Record>::Realloc(this_00,iVar4);
    }
  }
  memmove((void *)(*(int *)this_00 + iVar1 * 8),(void *)(*(int *)this_00 + iVar5 * 8),
          (*(int *)(this + 0x10) - iVar5) * 8);
  for (; iVar5 < iVar1; iVar5 = iVar5 + 1) {
    puVar2 = (undefined4 *)(*(int *)this_00 + iVar5 * 8);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0;
      puVar2[1] = 0;
    }
  }
  iVar1 = *(int *)(this + 0x10);
  *(int *)(this + 0x10) = iVar1 + 1;
  *(int *)(*(int *)this_00 + -8 + (iVar1 + 1) * 8) = param_1;
  *(ulong *)(*(int *)this_00 + -4 + *(int *)(this + 0x10) * 8) = param_2;
  return;
}




/* from: wr_ui_txtscrl.cpp
   addr: 00493110 */

void __thiscall wrUI_STRINGS::AddString(wrUI_STRINGS *this,char *param_1,ulong param_2)

{
  arrVector<struct_gsSTRINGS::Record> *this_00;
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = *(int *)(this + 0x14);
  this_00 = (arrVector<struct_gsSTRINGS::Record> *)(this + 0xc);
  iVar5 = *(int *)(this + 0x10);
  iVar1 = iVar5 + 1;
  if (iVar3 < iVar1) {
    iVar4 = iVar3 * 2;
    if (iVar3 * 2 <= iVar1) {
      iVar4 = iVar1;
    }
    if (iVar3 < iVar4) {
      arrVector<struct_gsSTRINGS::Record>::Realloc(this_00,iVar4);
    }
  }
  memmove((void *)(*(int *)this_00 + iVar1 * 8),(void *)(*(int *)this_00 + iVar5 * 8),
          (*(int *)(this + 0x10) - iVar5) * 8);
  for (; iVar5 < iVar1; iVar5 = iVar5 + 1) {
    puVar2 = (undefined4 *)(*(int *)this_00 + iVar5 * 8);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0;
      puVar2[1] = 0;
    }
  }
  iVar1 = *(int *)(this + 0x10);
  *(int *)(this + 0x10) = iVar1 + 1;
  iVar3 = *(int *)this_00;
  iVar5 = gsSTRINGS::GetStringId(gsStrings,param_1);
  *(int *)(iVar3 + -8 + (iVar1 + 1) * 8) = iVar5;
  *(ulong *)(*(int *)this_00 + -4 + *(int *)(this + 0x10) * 8) = param_2;
  return;
}




/* from: wr_ui_txtscrl.cpp
   addr: 004931B0 */

void __thiscall wrUI_STRINGS::AddString(wrUI_STRINGS *this,ushort *param_1,ulong param_2)

{
  arrVector<struct_wrUI_STRINGS::Record> *this_00;
  int iVar1;
  ushort *puVar2;
  int iVar3;
  size_t sVar4;
  void *pvVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 local_8;
  undefined4 local_4;
  
  this_00 = (arrVector<struct_wrUI_STRINGS::Record> *)(this + 0xc);
  local_8 = 0;
  local_4 = 0;
  arrVector<struct_wrUI_STRINGS::Record>::Insert(this_00,*(int *)(this + 0x10),(Record *)&local_8,1)
  ;
  *(int *)(*(int *)this_00 + -8 + *(int *)(this + 0x10) * 8) = -1 - *(int *)(this + 4);
  *(ulong *)(*(int *)this_00 + -4 + *(int *)(this + 0x10) * 8) = param_2;
  iVar6 = *(int *)(this + 4);
  sVar4 = wcslen((wchar_t *)param_1);
  iVar8 = (int)(sVar4 * 2 + 2) >> 1;
  if (iVar8 != 0) {
    iVar3 = *(int *)(this + 8);
    iVar1 = *(int *)(this + 4) + iVar8;
    if (iVar3 < iVar1) {
      iVar7 = iVar3 * 2;
      if (iVar3 * 2 <= iVar1) {
        iVar7 = iVar1;
      }
      if (iVar3 < iVar7) {
        if (iVar7 < *(int *)(this + 4)) {
          *(int *)(this + 4) = iVar7;
        }
        pvVar5 = apRealloc(*(void **)this,iVar7 * 2);
        *(void **)this = pvVar5;
        *(int *)(this + 8) = iVar7;
      }
    }
    iVar1 = iVar6 + iVar8;
    memmove((void *)(*(int *)this + iVar1 * 2),(void *)(*(int *)this + iVar6 * 2),
            (*(int *)(this + 4) - iVar6) * 2);
    for (; iVar6 < iVar1; iVar6 = iVar6 + 1) {
      puVar2 = (ushort *)(*(int *)this + iVar6 * 2);
      if (puVar2 != (ushort *)0x0) {
        *puVar2 = *param_1;
      }
      param_1 = param_1 + 1;
    }
    *(int *)(this + 4) = *(int *)(this + 4) + iVar8;
  }
  return;
}




/* from: wr_ui_txtscrl.cpp
   addr: 004932A0 */

ushort * __thiscall wrUI_STRINGS::GetStr(wrUI_STRINGS *this,int param_1)

{
  int iVar1;
  ushort *puVar2;
  
  iVar1 = *(int *)(*(int *)(this + 0xc) + param_1 * 8);
  if (iVar1 < 0) {
    return (ushort *)(*(int *)this - (iVar1 * 2 + 2));
  }
  puVar2 = gsSTRINGS::GetStringById(gsStrings,iVar1);
  return puVar2;
}




/* from: wr_ui_txtscrl.cpp
   addr: 004932D0 */

ushort * __thiscall wrUI_NUM_SCROLL::GetStr(wrUI_NUM_SCROLL *this,int param_1)

{
  char *pcVar1;
  ushort *puVar2;
  
  pcVar1 = itoa(*(int *)(this + 0x138) + param_1,&DAT_0060ee7c,10);
  puVar2 = gsSTRINGS::AsciiToUnicode(gsStrings,pcVar1);
  return puVar2;
}




/* from: wr_ui_txtscrl.cpp
   addr: 00493300
   addr: 00493300 */

void __thiscall
arrVector<struct_gsSTRINGS::Record>::Realloc(arrVector<struct_gsSTRINGS::Record> *this,int param_1)

{
  void *pvVar1;
  
  if (param_1 != *(int *)(this + 8)) {
    if (param_1 < *(int *)(this + 4)) {
      *(int *)(this + 4) = param_1;
    }
    pvVar1 = apRealloc(*(void **)this,param_1 * 8);
    *(void **)this = pvVar1;
    *(int *)(this + 8) = param_1;
  }
  return;
}

