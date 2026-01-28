
/* from: drv:inp_intr.cpp
   addr: 00575D80 */

inpINPUT * __fastcall inpINPUT::Make(void)

{
  void *pvVar1;
  inpINPUT *piVar2;
  
  pvVar1 = operator_new(0x2fec);
  if (pvVar1 != (void *)0x0) {
    piVar2 = (inpINPUT *)::inpINPUT();
    return piVar2;
  }
  return (inpINPUT *)0x0;
}




/* from: drv:inp_intr.cpp
   addr: 00575DA0 */

void __cdecl inpINPUT(void)

{
  inpINPUT *in_ECX;
  int iVar1;
  inpINPUT *piVar2;
  
  inpINPUT::inpINPUT(in_ECX);
  *(undefined4 *)(in_ECX + 0x1994) = 0;
  *(undefined ***)in_ECX = &_inpINPUT::_vftable_;
  *(undefined4 *)(in_ECX + 0x16a0) = 0;
  *(undefined4 *)(in_ECX + 0x16a4) = 0;
  *(undefined4 *)(in_ECX + 0x16a8) = 0;
  piVar2 = in_ECX + 0x16ac;
  for (iVar1 = 0x78; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)piVar2 = 0;
    piVar2 = piVar2 + 4;
  }
  piVar2 = in_ECX + 0x188c;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)piVar2 = 0;
    piVar2 = piVar2 + 4;
  }
  *(undefined4 *)(in_ECX + 0x198c) = 0;
  *(undefined4 *)(in_ECX + 0x1990) = 0x40033333;
  piVar2 = in_ECX + 0x1994;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)piVar2 = 0;
    piVar2 = piVar2 + 4;
  }
  *(undefined4 *)(in_ECX + 0x19b0) = 0;
  *(undefined4 *)(in_ECX + 0x19b4) = 0;
  *(undefined4 *)(in_ECX + 0x19b8) = 0;
  *(undefined4 *)(in_ECX + 0x19bc) = 0;
  *(undefined4 *)(in_ECX + 0x19c0) = 0;
  *(undefined4 *)(in_ECX + 0x19cc) = 0;
  *(undefined4 *)(in_ECX + 0x19c8) = 0;
  *(undefined4 *)(in_ECX + 0x19c4) = 0;
  *(undefined4 *)(in_ECX + 0x19d8) = 0;
  *(undefined4 *)(in_ECX + 0x19d4) = 0;
  *(undefined4 *)(in_ECX + 0x19d0) = 0;
  *(undefined4 *)(in_ECX + 0x19dc) = 0;
  *(undefined4 *)(in_ECX + 0x19e0) = 0x40033333;
  piVar2 = in_ECX + 0x19e4;
  for (iVar1 = 0x55f; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)piVar2 = 0;
    piVar2 = piVar2 + 4;
  }
  *(undefined4 *)(in_ECX + 0x2f60) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x2f64) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x2f68) = 0;
  *(undefined4 *)(in_ECX + 0x2f6c) = 0;
  *(undefined4 *)(in_ECX + 0x2fe8) = 0;
  piVar2 = in_ECX + 0x2f70;
  for (iVar1 = 0x1e; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)piVar2 = 0;
    piVar2 = piVar2 + 4;
  }
  return;
}




/* from: drv:inp_intr.cpp
   addr: 00575E90 */

int __thiscall _inpINPUT::Init(_inpINPUT *this,int *param_1)

{
  _inpINPUT *p_Var1;
  int iVar2;
  
  p_Var1 = this + 0x16a0;
  DirectInputCreateW_16(apHInstance,0x700,p_Var1,0);
  if (*(int *)p_Var1 == 0) {
    DirectInputCreateW_16(apHInstance,0x300,p_Var1,0);
    if (*(int *)p_Var1 == 0) {
      return 0;
    }
  }
  iVar2 = inpINPUT::Init((inpINPUT *)this,param_1);
  return iVar2;
}




/* from: drv:inp_intr.cpp
   addr: 00575EF0 */

int __thiscall _inpINPUT::SetInputWnd(_inpINPUT *this,void *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 unaff_retaddr;
  undefined4 uVar3;
  
  (**(code **)(*(int *)this + 0xc))(0);
  piVar2 = *(int **)(this + 0x16a8);
  if ((piVar2 != (int *)0x0) &&
     (iVar1 = (**(code **)(*piVar2 + 0x34))(piVar2,unaff_retaddr,6), iVar1 != 0)) {
    return 0;
  }
  piVar2 = *(int **)(this + 0x198c);
  if (param_1 == (void *)0x0) {
    if ((piVar2 != (int *)0x0) &&
       (iVar1 = (**(code **)(*piVar2 + 0x34))(piVar2,unaff_retaddr,6), iVar1 != 0)) {
      return 0;
    }
    piVar2 = *(int **)(this + 0x19dc);
    if (piVar2 == (int *)0x0) goto LAB_00575f6b;
    uVar3 = 6;
  }
  else {
    if ((piVar2 != (int *)0x0) &&
       (iVar1 = (**(code **)(*piVar2 + 0x34))(piVar2,unaff_retaddr,0x15), iVar1 != 0)) {
      return 0;
    }
    piVar2 = *(int **)(this + 0x19dc);
    if (piVar2 == (int *)0x0) goto LAB_00575f6b;
    uVar3 = 5;
  }
  iVar1 = (**(code **)(*piVar2 + 0x34))(piVar2,unaff_retaddr,uVar3);
  if (iVar1 != 0) {
    return 0;
  }
LAB_00575f6b:
  piVar2 = *(int **)(this + 0x19dc);
  if ((piVar2 != (int *)0x0) &&
     (iVar1 = (**(code **)(*piVar2 + 0x34))(piVar2,unaff_retaddr,9), iVar1 != 0)) {
    return 0;
  }
  (**(code **)(*(int *)this + 0xc))(1);
  *(undefined4 *)(this + 0x16a4) = unaff_retaddr;
  return 1;
}




/* from: drv:inp_intr.cpp
   addr: 00575FB0 */

void __thiscall _inpINPUT::SyncAcquire(_inpINPUT *this,int param_1)

{
  int *piVar1;
  int iVar2;
  _inpINPUT *p_Var3;
  
  piVar1 = *(int **)(this + 0x16a8);
  if (param_1 != 0) {
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x1c))(piVar1);
    }
    piVar1 = *(int **)(this + 0x198c);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x1c))(piVar1);
    }
    piVar1 = *(int **)(this + 0x19dc);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x1c))(piVar1);
    }
    inpINPUT::FlushBuffers((inpINPUT *)this);
    p_Var3 = this + 0xaac;
    for (iVar2 = 0x154; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined4 *)p_Var3 = 0;
      p_Var3 = p_Var3 + 4;
    }
    return;
  }
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x20))(piVar1);
  }
  piVar1 = *(int **)(this + 0x198c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x20))(piVar1);
  }
  piVar1 = *(int **)(this + 0x19dc);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x20))(piVar1);
  }
  p_Var3 = this + 0xaac;
  for (iVar2 = 0x154; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)p_Var3 = 0;
    p_Var3 = p_Var3 + 4;
  }
  return;
}




/* from: drv:inp_intr.cpp
   addr: 00576050 */

int __thiscall _inpINPUT::GetKeyName(_inpINPUT *this,int param_1,ushort *param_2)

{
  wchar_t *pwVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  wchar_t awStack_278 [8];
  wchar_t local_268 [20];
  undefined4 local_240 [4];
  wchar_t awStack_230 [276];
  wchar_t *pwStack_8;
  
  puVar4 = local_240;
  for (iVar2 = 0x90; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  local_240[0] = 0x240;
  if (((-1 < param_1) && (param_1 < 0x100)) && (*(int *)(this + 0x16a8) != 0)) {
    wcscpy(local_268,u_);
    iVar2 = (**(code **)(**(int **)(this + 0x16a8) + 0x38))
                      (*(int **)(this + 0x16a8),local_240,param_1);
    pwVar1 = wcsstr(awStack_230,u_Ctrl);
    if (((pwVar1 != (wchar_t *)0x0) ||
        (pwVar1 = wcsstr(awStack_230,u_Shift), pwVar1 != (wchar_t *)0x0)) ||
       (pwVar1 = wcsstr(awStack_230,u_Alt), pwVar1 != (wchar_t *)0x0)) {
      iVar3 = (int)pwVar1 - (int)awStack_230 >> 1;
      if (iVar3 < 6) {
        if ((4 < iVar3) && (pwVar1[-5] == L'L')) {
          wcscpy(pwStack_8,pwVar1);
          return 1;
        }
      }
      else if (pwVar1[-6] == L'R') {
        wcscpy(pwStack_8,pwVar1);
        return 1;
      }
    }
    goto LAB_00576885;
  }
  if (((0xff < param_1) && (param_1 < 0x104)) && (*(int *)(this + 0x198c) != 0)) {
    wcscpy((wchar_t *)param_2,u_MS_);
    switch(param_1 + -0x100) {
    case 0:
      uVar5 = 0xc;
      break;
    case 1:
      iVar2 = (**(code **)(**(int **)(this + 0x198c) + 0x38))
                        (*(int **)(this + 0x198c),local_240,0xd);
      goto LAB_0057621a;
    case 2:
      iVar2 = (**(code **)(**(int **)(this + 0x198c) + 0x38))
                        (*(int **)(this + 0x198c),local_240,0xe);
      goto LAB_0057621a;
    case 3:
      uVar5 = 0xf;
      break;
    default:
      return 0;
    }
    iVar2 = (**(code **)(**(int **)(this + 0x198c) + 0x38))
                      (*(int **)(this + 0x198c),local_240,uVar5);
LAB_0057621a:
    if (iVar2 != 0) {
      return 0;
    }
    switch(param_1 + -0x100) {
    case 0:
      wcscat((wchar_t *)param_2,u_1);
      return 1;
    case 1:
      wcscat((wchar_t *)param_2,u_2);
      return 1;
    default:
      return 1;
    case 3:
      wcscat((wchar_t *)param_2,u_3);
      return 1;
    case 4:
      wcscat((wchar_t *)param_2,u_4);
      return 1;
    }
  }
  if (((0x103 < param_1) && (param_1 < 0x124)) && (*(int *)(this + 0x19dc) != 0)) {
    wcscpy(local_268,u_JOY_);
    iVar2 = (**(code **)(**(int **)(this + 0x19dc) + 0x38))
                      (*(int **)(this + 0x19dc),local_240,param_1 + -0xd4);
    goto LAB_00576885;
  }
  if (((299 < param_1) && (param_1 < 0x132)) && (*(int *)(this + 0x198c) != 0)) {
    wcscpy((wchar_t *)param_2,u_MS_);
    switch(param_1 + -300) {
    case 0:
      iVar2 = (**(code **)(**(int **)(this + 0x198c) + 0x38))(*(int **)(this + 0x198c),local_240,0);
      pwVar1 = u__Forw_;
      goto LAB_005763c6;
    case 1:
      uVar5 = 0;
      break;
    case 2:
      iVar2 = (**(code **)(**(int **)(this + 0x198c) + 0x38))(*(int **)(this + 0x198c),local_240,4);
      pwVar1 = u__Forw_;
      goto LAB_005763c6;
    case 3:
      uVar5 = 4;
      break;
    case 4:
      iVar2 = (**(code **)(**(int **)(this + 0x198c) + 0x38))(*(int **)(this + 0x198c),local_240,8);
      pwVar1 = u__Forw_;
      goto LAB_005763c6;
    case 5:
      uVar5 = 8;
      break;
    default:
      return 0;
    }
    iVar2 = (**(code **)(**(int **)(this + 0x198c) + 0x38))
                      (*(int **)(this + 0x198c),local_240,uVar5);
    pwVar1 = u__Back_;
LAB_005763c6:
    wcscpy((wchar_t *)&stack0xfffffd60,pwVar1);
    if (iVar2 != 0) {
      return 0;
    }
                    /* WARNING: Could not recover jumptable at 0x005763dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar2 = (*(code *)(&PTR_LAB_00576914)[param_1 + -300])();
    return iVar2;
  }
  if (param_1 < 0x132) {
    return 0;
  }
  if (0x153 < param_1) {
    return 0;
  }
  if (*(int *)(this + 0x19dc) == 0) {
    return 0;
  }
  wcscpy(local_268,u_JOY_);
  switch(param_1) {
  case 0x132:
    iVar2 = (**(code **)(**(int **)(this + 0x19dc) + 0x38))(*(int **)(this + 0x19dc),local_240,0);
    pwVar1 = u__Forw_;
    break;
  case 0x133:
    iVar2 = (**(code **)(**(int **)(this + 0x19dc) + 0x38))(*(int **)(this + 0x19dc),local_240,0);
    pwVar1 = u__Back_;
    break;
  case 0x134:
    iVar2 = (**(code **)(**(int **)(this + 0x19dc) + 0x38))(*(int **)(this + 0x19dc),local_240,4);
    pwVar1 = u__Back_;
    break;
  case 0x135:
    iVar2 = (**(code **)(**(int **)(this + 0x19dc) + 0x38))(*(int **)(this + 0x19dc),local_240,4);
    pwVar1 = u__Forw_;
    break;
  case 0x136:
    iVar2 = (**(code **)(**(int **)(this + 0x19dc) + 0x38))(*(int **)(this + 0x19dc),local_240,8);
    pwVar1 = u__Forw_;
    break;
  case 0x137:
    iVar2 = (**(code **)(**(int **)(this + 0x19dc) + 0x38))(*(int **)(this + 0x19dc),local_240,8);
    pwVar1 = u__Back_;
    break;
  case 0x138:
    iVar2 = (**(code **)(**(int **)(this + 0x19dc) + 0x38))(*(int **)(this + 0x19dc),local_240,0xc);
    pwVar1 = u__Forw_;
    break;
  case 0x139:
    iVar2 = (**(code **)(**(int **)(this + 0x19dc) + 0x38))(*(int **)(this + 0x19dc),local_240,0xc);
    pwVar1 = u__Back_;
    break;
  case 0x13a:
    iVar2 = (**(code **)(**(int **)(this + 0x19dc) + 0x38))(*(int **)(this + 0x19dc),local_240,0x10)
    ;
    pwVar1 = u__Forw_;
    break;
  case 0x13b:
    iVar2 = (**(code **)(**(int **)(this + 0x19dc) + 0x38))(*(int **)(this + 0x19dc),local_240,0x10)
    ;
    pwVar1 = u__Backw_;
    break;
  case 0x13c:
    iVar2 = (**(code **)(**(int **)(this + 0x19dc) + 0x38))(*(int **)(this + 0x19dc),local_240,0x14)
    ;
    pwVar1 = u__Forw_;
    break;
  case 0x13d:
    iVar2 = (**(code **)(**(int **)(this + 0x19dc) + 0x38))(*(int **)(this + 0x19dc),local_240,0x14)
    ;
    pwVar1 = u__Backw_;
    break;
  case 0x13e:
    iVar2 = (**(code **)(**(int **)(this + 0x19dc) + 0x38))(*(int **)(this + 0x19dc),local_240,0x18)
    ;
    pwVar1 = u__Back_;
    break;
  case 0x13f:
    iVar2 = (**(code **)(**(int **)(this + 0x19dc) + 0x38))(*(int **)(this + 0x19dc),local_240,0x18)
    ;
    pwVar1 = u__Forw_;
    break;
  case 0x140:
    iVar2 = (**(code **)(**(int **)(this + 0x19dc) + 0x38))(*(int **)(this + 0x19dc),local_240,0x1c)
    ;
    pwVar1 = u__Back_;
    break;
  case 0x141:
    iVar2 = (**(code **)(**(int **)(this + 0x19dc) + 0x38))(*(int **)(this + 0x19dc),local_240,0x1c)
    ;
    pwVar1 = u__Forw_;
    break;
  case 0x142:
    iVar2 = (**(code **)(**(int **)(this + 0x19dc) + 0x38))(*(int **)(this + 0x19dc),local_240,0x20)
    ;
    pwVar1 = u__Forw_;
    break;
  case 0x143:
    iVar2 = (**(code **)(**(int **)(this + 0x19dc) + 0x38))(*(int **)(this + 0x19dc),local_240,0x20)
    ;
    pwVar1 = u__Back_;
    break;
  case 0x144:
    iVar2 = (**(code **)(**(int **)(this + 0x19dc) + 0x38))(*(int **)(this + 0x19dc),local_240,0x20)
    ;
    pwVar1 = u__Right_;
    break;
  case 0x145:
    uVar5 = 0x20;
    goto LAB_00576860;
  case 0x146:
    iVar2 = (**(code **)(**(int **)(this + 0x19dc) + 0x38))(*(int **)(this + 0x19dc),local_240,0x24)
    ;
    pwVar1 = u__Forw_;
    break;
  case 0x147:
    iVar2 = (**(code **)(**(int **)(this + 0x19dc) + 0x38))(*(int **)(this + 0x19dc),local_240,0x24)
    ;
    pwVar1 = u__Back_;
    break;
  case 0x148:
    iVar2 = (**(code **)(**(int **)(this + 0x19dc) + 0x38))(*(int **)(this + 0x19dc),local_240,0x24)
    ;
    pwVar1 = u__Right_;
    break;
  case 0x149:
    uVar5 = 0x24;
    goto LAB_00576860;
  case 0x14a:
    iVar2 = (**(code **)(**(int **)(this + 0x19dc) + 0x38))(*(int **)(this + 0x19dc),local_240,0x28)
    ;
    pwVar1 = u__Forw_;
    break;
  case 0x14b:
    iVar2 = (**(code **)(**(int **)(this + 0x19dc) + 0x38))(*(int **)(this + 0x19dc),local_240,0x28)
    ;
    pwVar1 = u__Back_;
    break;
  case 0x14c:
    iVar2 = (**(code **)(**(int **)(this + 0x19dc) + 0x38))(*(int **)(this + 0x19dc),local_240,0x28)
    ;
    pwVar1 = u__Right_;
    break;
  case 0x14d:
    uVar5 = 0x28;
    goto LAB_00576860;
  case 0x14e:
    iVar2 = (**(code **)(**(int **)(this + 0x19dc) + 0x38))(*(int **)(this + 0x19dc),local_240,0x2c)
    ;
    pwVar1 = u__Forw_;
    break;
  case 0x14f:
    iVar2 = (**(code **)(**(int **)(this + 0x19dc) + 0x38))(*(int **)(this + 0x19dc),local_240,0x2c)
    ;
    pwVar1 = u__Back_;
    break;
  case 0x150:
    iVar2 = (**(code **)(**(int **)(this + 0x19dc) + 0x38))(*(int **)(this + 0x19dc),local_240,0x2c)
    ;
    pwVar1 = u__Right_;
    break;
  case 0x151:
    uVar5 = 0x2c;
LAB_00576860:
    iVar2 = (**(code **)(**(int **)(this + 0x19dc) + 0x38))
                      (*(int **)(this + 0x19dc),local_240,uVar5);
    pwVar1 = u__Left_;
    break;
  default:
    goto switchD_005761ca_default;
  }
  wcscpy((wchar_t *)&stack0xfffffd60,pwVar1);
LAB_00576885:
  if (iVar2 == 0) {
    wcscpy(pwStack_8,awStack_278);
    wcscat(pwStack_8,awStack_230);
    wcscat(pwStack_8,(wchar_t *)&stack0xfffffd60);
    return 1;
  }
switchD_005761ca_default:
  return 0;
}




/* from: drv:inp_intr.cpp
   addr: 005769B0
   addr: 005769B0
   addr: 005769B0
   addr: 005769B0 */

void * __thiscall inpINPUT::_scalar_deleting_destructor_(inpINPUT *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

