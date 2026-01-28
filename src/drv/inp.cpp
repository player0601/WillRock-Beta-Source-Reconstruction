
/* from: drv:inp.cpp
   addr: 004A64B0 */

inpINPUT * __thiscall inpINPUT::inpINPUT(inpINPUT *this)

{
  int iVar1;
  inpINPUT *piVar2;
  
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  piVar2 = this + 0xc;
  for (iVar1 = 0x154; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)piVar2 = 0;
    piVar2 = piVar2 + 4;
  }
  piVar2 = this + 0x55c;
  for (iVar1 = 0x154; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)piVar2 = 0;
    piVar2 = piVar2 + 4;
  }
  piVar2 = this + 0xaac;
  for (iVar1 = 0x154; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)piVar2 = 0;
    piVar2 = piVar2 + 4;
  }
  piVar2 = this + 0xffc;
  for (iVar1 = 0x55; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)piVar2 = 0;
    piVar2 = piVar2 + 4;
  }
  piVar2 = this + 0x1150;
  for (iVar1 = 0x154; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)piVar2 = 0xffffffff;
    piVar2 = piVar2 + 4;
  }
  return this;
}




/* from: drv:inp.cpp
   addr: 004A6510 */

int __thiscall inpINPUT::Init(inpINPUT *this,int *param_1)

{
  int iVar1;
  inpINPUT *piVar2;
  
  *param_1 = 0;
  iVar1 = (**(code **)(*(int *)this + 0x40))();
  if (iVar1 != 0) {
    *param_1 = *param_1 | 1;
  }
  iVar1 = (**(code **)(*(int *)this + 0x54))();
  if (iVar1 != 0) {
    *param_1 = *param_1 | 2;
  }
  iVar1 = (**(code **)(*(int *)this + 0x60))();
  if (iVar1 != 0) {
    *param_1 = *param_1 | 4;
    iVar1 = (**(code **)(*(int *)this + 0x6c))();
    if (iVar1 != 0) {
      *param_1 = *param_1 | 8;
    }
  }
  piVar2 = this + 0x1150;
  for (iVar1 = 0x154; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)piVar2 = 0xffffffff;
    piVar2 = piVar2 + 4;
  }
  (**(code **)(*(int *)this + 0x4c))(0);
  *(int *)(this + 4) = *param_1;
  return 1;
}




/* from: drv:inp.cpp
   addr: 004A6590 */

void __thiscall inpINPUT::Term(inpINPUT *this)

{
  (**(code **)(*(int *)this + 0xc))(0);
  (**(code **)(*(int *)this + 0x44))();
  (**(code **)(*(int *)this + 0x58))();
  (**(code **)(*(int *)this + 0x70))();
                    /* WARNING: Could not recover jumptable at 0x004a65b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)this + 100))();
  return;
}




/* from: drv:inp.cpp
   addr: 004A65D0 */

int __thiscall inpINPUT::StartGetShortcut(inpINPUT *this)

{
  int iVar1;
  inpINPUT *piVar2;
  inpINPUT *piVar3;
  inpINPUT *piVar4;
  
  piVar4 = this + 0xc;
  *(uint *)(this + 8) = *(uint *)(this + 4);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x60;
  piVar2 = piVar4;
  for (iVar1 = 0x154; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)piVar2 = 0;
    piVar2 = piVar2 + 4;
  }
  if (((byte)this[4] & 1) != 0) {
    (**(code **)(*(int *)this + 0x48))();
  }
  if (((byte)this[4] & 2) != 0) {
    (**(code **)(*(int *)this + 0x5c))();
  }
  if (((byte)this[4] & 4) != 0) {
    (**(code **)(*(int *)this + 0x68))();
  }
  (**(code **)(*(int *)this + 0x1c))(0x3f000000,0x3f000000);
  piVar2 = piVar4;
  piVar3 = this + 0xaac;
  for (iVar1 = 0x154; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)piVar3 = *(undefined4 *)piVar2;
    piVar2 = piVar2 + 4;
    piVar3 = piVar3 + 4;
  }
  for (iVar1 = 0x154; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)piVar4 = 0;
    piVar4 = piVar4 + 4;
  }
  piVar4 = this + 0x55c;
  for (iVar1 = 0x154; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)piVar4 = 0;
    piVar4 = piVar4 + 4;
  }
  (**(code **)(*(int *)this + 0x50))();
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: drv:inp.cpp
   addr: 004A6660 */

int __thiscall inpINPUT::ContinueGetShortcut(inpINPUT *this,int param_1,int *param_2,int *param_3)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  inpINPUT *piVar4;
  inpINPUT *piVar5;
  int iVar6;
  int iVar7;
  
  bVar3 = false;
  iVar7 = 0;
  piVar4 = this + 0xc;
  while ((ABS(*(float *)(piVar4 + 0x550)) <= _DAT_005db30c * ___real_461c4000 ||
         (_DAT_005db30c * ___real_461c4000 <= ABS(*(float *)piVar4)))) {
    iVar7 = iVar7 + 1;
    piVar4 = piVar4 + 4;
    if (0x123 < iVar7) {
LAB_004a66be:
      piVar4 = this + 0x4bc;
      iVar7 = 6;
      piVar5 = piVar4;
      fVar2 = ___real_00000000;
      do {
        if (fVar2 < ABS(*(float *)piVar5)) {
          fVar2 = ABS(*(float *)piVar5);
        }
        piVar5 = piVar5 + 4;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      if (___real_3eaaaaab < fVar2) {
        bVar3 = true;
      }
      piVar5 = this + 0x4d4;
      iVar7 = 0x22;
      fVar2 = ___real_00000000;
      do {
        if (fVar2 < ABS(*(float *)piVar5)) {
          fVar2 = ABS(*(float *)piVar5);
        }
        piVar5 = piVar5 + 4;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      if ((fVar2 <= ___real_3eaaaaab) && (!bVar3)) {
        return 0;
      }
      iVar7 = 0;
      *param_2 = 0;
      piVar5 = this + 0x55c;
      do {
        if ((_DAT_005db30c < ABS(*(float *)piVar5)) && (iVar7 != param_1)) {
          param_3[*param_2] = iVar7;
          *param_2 = *param_2 + 1;
        }
        iVar7 = iVar7 + 1;
        piVar5 = piVar5 + 4;
      } while (iVar7 < 0x124);
      iVar7 = *param_2;
      iVar6 = 300;
      fVar2 = ___real_00000000;
      do {
        fVar1 = *(float *)piVar4;
        if (fVar2 < ABS(fVar1)) {
          param_3[iVar7] = iVar6;
          fVar2 = ABS(fVar1);
        }
        iVar6 = iVar6 + 1;
        piVar4 = piVar4 + 4;
      } while (iVar6 < 0x132);
      if (___real_3eaaaaab < fVar2) {
        *param_2 = *param_2 + 1;
      }
      iVar7 = *param_2;
      iVar6 = 0x132;
      piVar4 = this + 0x4d4;
      fVar2 = ___real_00000000;
      do {
        fVar1 = *(float *)piVar4;
        if (fVar2 < ABS(fVar1)) {
          param_3[iVar7] = iVar6;
          fVar2 = ABS(fVar1);
        }
        iVar6 = iVar6 + 1;
        piVar4 = piVar4 + 4;
      } while (iVar6 < 0x154);
      if (___real_3eaaaaab < fVar2) {
        *param_2 = *param_2 + 1;
      }
      piVar4 = this + 0xaac;
      for (iVar7 = 0x154; iVar7 != 0; iVar7 = iVar7 + -1) {
        *(undefined4 *)piVar4 = 0;
        piVar4 = piVar4 + 4;
      }
      *(undefined4 *)(this + 4) = *(undefined4 *)(this + 8);
      return 1;
    }
  }
  bVar3 = true;
  goto LAB_004a66be;
}




/* from: drv:inp.cpp
   addr: 004A6860 */

int __thiscall
inpINPUT::GetShortcutName
          (inpINPUT *this,int *param_1,int param_2,ushort *param_3,int param_4,int param_5)

{
  int iVar1;
  size_t sVar2;
  size_t sVar3;
  int iVar4;
  wchar_t local_7d0 [1000];
  
  iVar4 = 0;
  *param_3 = 0;
  if (0 < param_2) {
    do {
      if (param_1[iVar4] == 0) {
        return 1;
      }
      iVar1 = (**(code **)(*(int *)this + 0x3c))(param_1[iVar4],local_7d0);
      if (iVar1 == 0) {
        return 0;
      }
      sVar2 = wcslen((wchar_t *)param_3);
      sVar3 = wcslen(local_7d0);
      if (param_4 <= (int)(sVar2 + sVar3)) {
        return 0;
      }
      if ((iVar4 < param_2 + -1) && (param_1[iVar4 + 1] != 0)) {
        wcscat(local_7d0,u____);
      }
      sVar2 = wcslen((wchar_t *)param_3);
      sVar3 = wcslen(local_7d0);
      if (param_5 < (int)(sVar2 + sVar3)) {
        wcscat((wchar_t *)param_3,u__);
      }
      wcscat((wchar_t *)param_3,local_7d0);
      iVar4 = iVar4 + 1;
    } while (iVar4 < param_2);
  }
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: drv:inp.cpp
   addr: 004A6980 */

void __thiscall
inpINPUT::GetMultipleKeyValue
          (inpINPUT *this,int param_1,int *param_2,float *param_3,int *param_4,int *param_5)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  piVar2 = param_2;
  if (0 < param_1) {
    iVar5 = (int)param_3 - (int)param_2;
    iVar4 = (int)param_4 - (int)param_2;
    iVar3 = (int)param_5 - (int)param_2;
    param_2 = (int *)param_1;
    do {
      iVar1 = *piVar2;
      if ((-1 < iVar1) && (iVar1 < 0x154)) {
        if (((byte)this[iVar1 + 0xffc] & 8) == 0) {
          *(undefined4 *)(iVar5 + (int)piVar2) = *(undefined4 *)(this + iVar1 * 4 + 0xc);
          if (param_4 != (int *)0x0) {
            *(uint *)((int)piVar2 + iVar4) =
                 (uint)(_DAT_005db30c <
                       ABS(*(float *)(this + *piVar2 * 4 + 0x55c) -
                           *(float *)(this + *piVar2 * 4 + 0xc)));
          }
          if (param_5 != (int *)0x0) {
            iVar1 = *piVar2;
            if (iVar1 < 0x124) {
              *(undefined4 *)(iVar3 + (int)piVar2) = 0;
            }
            else if ((iVar1 < 300) || (0x131 < iVar1)) {
              if ((iVar1 < 0x132) || (0x153 < iVar1)) {
                *(undefined4 *)(iVar3 + (int)piVar2) = 0xffffffff;
              }
              else {
                *(uint *)(iVar3 + (int)piVar2) = ((int)(char)~(byte)this[4] & 0x10U) >> 4;
              }
            }
            else {
              *(uint *)(iVar3 + (int)piVar2) = 2 - (uint)(((byte)this[4] & 0x40) != 0);
            }
          }
        }
        else {
          *(undefined4 *)(iVar5 + (int)piVar2) = 0;
          if (param_4 != (int *)0x0) {
            *(undefined4 *)((int)piVar2 + iVar4) = 0;
          }
          if (param_5 != (int *)0x0) {
            *(undefined4 *)(iVar3 + (int)piVar2) = 0xffffffff;
          }
        }
      }
      piVar2 = piVar2 + 1;
      param_2 = (int *)((int)param_2 + -1);
    } while (param_2 != (int *)0x0);
  }
  return;
}




/* from: drv:inp.cpp
   addr: 004A6AD0 */

void __thiscall inpINPUT::ReleaseKey(inpINPUT *this,int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < param_1) {
    do {
      piVar1 = param_2 + iVar2;
      iVar2 = iVar2 + 1;
      this[*piVar1 + 0xffc] = (inpINPUT)((byte)this[*piVar1 + 0xffc] | 8);
    } while (iVar2 < param_1);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: drv:inp.cpp
   addr: 004A6B10 */

void __thiscall inpINPUT::GetInput(inpINPUT *this)

{
  inpINPUT *piVar1;
  int iVar2;
  inpINPUT *piVar3;
  inpINPUT *piVar4;
  inpINPUT *piVar5;
  
  piVar5 = this + 0xc;
  piVar4 = piVar5;
  piVar3 = this + 0x55c;
  for (iVar2 = 0x154; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(float *)piVar3 = *(float *)piVar4;
    piVar4 = piVar4 + 4;
    piVar3 = piVar3 + 4;
  }
  piVar4 = this + 0x4bc;
  piVar3 = piVar4;
  for (iVar2 = 0x28; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(float *)piVar3 = 0.0;
    piVar3 = piVar3 + 4;
  }
  if (((byte)this[4] & 1) != 0) {
    (**(code **)(*(int *)this + 0x48))();
  }
  if (((byte)this[4] & 2) != 0) {
    (**(code **)(*(int *)this + 0x5c))();
  }
  if (((byte)this[4] & 4) != 0) {
    (**(code **)(*(int *)this + 0x68))();
  }
  piVar3 = this + 0xffc;
  piVar1 = piVar5;
  do {
    *(float *)piVar1 = *(float *)piVar1 - *(float *)(piVar1 + 0xaa0);
    *piVar3 = (inpINPUT)((byte)*piVar3 & 0xf7);
    piVar3 = piVar3 + 1;
    piVar1 = piVar1 + 4;
  } while ((int)(piVar3 + (-0xffc - (int)this)) < 0x154);
  iVar2 = 0x14;
  do {
    if (*(float *)piVar4 < ___real_00000000) {
      *(float *)(piVar4 + 4) = -*(float *)piVar4;
      *(float *)piVar4 = 0.0;
    }
    piVar4 = piVar4 + 8;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  iVar2 = 0xff;
  do {
    if ((_DAT_005db30c < *(float *)piVar5) && (*(float *)(piVar5 + 0x1144) != -NAN)) {
      *(float *)(this + (int)*(float *)(piVar5 + 0x1144) * 4 + 0xc) = *(float *)piVar5;
      *(float *)piVar5 = 0.0;
    }
    piVar5 = piVar5 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

