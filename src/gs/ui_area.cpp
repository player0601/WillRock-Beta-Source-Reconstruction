
/* from: gs:ui_area.cpp
   addr: 00513670 */

void __thiscall uiAREA::Init(uiAREA *this,objOBJ *param_1)

{
  uiELEMENT::Init((uiELEMENT *)this,param_1);
  uiRENDER_INFO::Init((uiRENDER_INFO *)(this + 0x6c),param_1);
  uiRENDER_INFO::CalcBBox((uiRENDER_INFO *)(this + 0x6c),(uiBOX *)(this + 0x58));
  return;
}




/* from: gs:ui_area.cpp
   addr: 005136A0 */

int __thiscall uiAREA::ProcessRender(uiAREA *this,void *param_1)

{
  if ((*(uint *)(this + 4) & 0x2001) != 0) {
    return 0;
  }
  uiRENDER_INFO::Render((uiRENDER_INFO *)(this + 0x6c),(camCAMERA *)param_1);
  return 1;
}




/* from: gs:ui_area.cpp
   addr: 005136D0 */

int __thiscall uiAREA::StartAppearing(uiAREA *this,int param_1)

{
  uint uVar1;
  
  if (param_1 == 0) {
    uVar1 = *(uint *)(this + 4) | 0x100;
  }
  else {
    uVar1 = *(uint *)(this + 4) & 0xfffffffe | 0x40;
  }
  *(uint *)(this + 4) = uVar1;
  *(uint *)(this + 4) = uVar1 | 0x200;
  (**(code **)(*(int *)uiSystem + 100))(this + 0x6c,(-(uint)(param_1 != 0) & 0xffffff40) + 0x100);
  uiELEMENT::StartAppearing((uiELEMENT *)this,param_1);
  return 1;
}




/* from: gs:ui_area.cpp
   addr: 00513720 */

int __thiscall uiAREA::ProcessAppearing(uiAREA *this)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = *(uint *)(this + 4);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x100) == 0) {
      return 0;
    }
    uVar3 = 0x100;
  }
  else {
    uVar3 = 0x40;
  }
  if (((uVar1 & 0x200) != 0) &&
     (iVar2 = (**(code **)(*(int *)uiSystem + 0x68))(this + 0x6c,uVar3), iVar2 == 0)) {
    *(uint *)(this + 4) = *(uint *)(this + 4) & 0xfffffdff;
  }
  iVar2 = uiELEMENT::ProcessAppearing((uiELEMENT *)this);
  if ((iVar2 == 0) && ((*(uint *)(this + 4) & 0x200) == 0)) {
    return 0;
  }
  return 1;
}




/* from: gs:ui_area.cpp
   addr: 00513780 */

void __thiscall uiAREA::FinishAppearing(uiAREA *this)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = *(uint *)(this + 4);
  if ((uVar1 & 0x200) != 0) {
    if ((uVar1 & 0x40) == 0) {
      if ((uVar1 & 0x100) == 0) {
        return;
      }
      uVar2 = 0x100;
    }
    else {
      uVar2 = 0x40;
    }
    (**(code **)(*(int *)uiSystem + 0x6c))(this + 0x6c,uVar2);
    *(uint *)(this + 4) = *(uint *)(this + 4) & 0xfffffdff;
  }
  uiELEMENT::FinishAppearing((uiELEMENT *)this);
  return;
}




/* from: gs:ui_area.cpp
   addr: 005137D0 */

void __thiscall uiAREA::SetFont(uiAREA *this,uiFONT *param_1)

{
  if (param_1 != *(uiFONT **)(this + 0xfc)) {
    uiRENDER_INFO::SetFont((uiRENDER_INFO *)(this + 0x6c),param_1);
    uiRENDER_INFO::CalcBBox((uiRENDER_INFO *)(this + 0x6c),(uiBOX *)(this + 0x58));
  }
  return;
}




/* from: gs:ui_area.cpp
   addr: 00513800 */

void __thiscall uiAREA::SetTextId(uiAREA *this,int param_1)

{
  uiRENDER_ELEM::SetTextId((uiRENDER_ELEM *)(this + 0x6c),param_1);
  uiRENDER_INFO::CalcBBox((uiRENDER_INFO *)(this + 0x6c),(uiBOX *)(this + 0x58));
  return;
}




/* from: gs:ui_area.cpp
   addr: 00513830 */

void __thiscall uiAREA::SetTextW(uiAREA *this,ushort *param_1,int param_2)

{
  uiRENDER_ELEM::SetTextW((uiRENDER_ELEM *)(this + 0x6c),param_1,param_2);
  uiRENDER_INFO::CalcBBox((uiRENDER_INFO *)(this + 0x6c),(uiBOX *)(this + 0x58));
  return;
}




/* from: gs:ui_area.cpp
   addr: 00513860 */

void __thiscall uiAREA::AppendTextW(uiAREA *this,ushort *param_1,int param_2)

{
  uiRENDER_ELEM::AppendTextW((uiRENDER_ELEM *)(this + 0x6c),param_1,param_2);
  uiRENDER_INFO::CalcBBox((uiRENDER_INFO *)(this + 0x6c),(uiBOX *)(this + 0x58));
  return;
}

