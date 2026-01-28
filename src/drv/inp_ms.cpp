
/* from: drv:inp_ms.cpp
   addr: 0057A130 */

int __thiscall _inpINPUT::InitMouse(_inpINPUT *this)

{
  _inpINPUT *p_Var1;
  int *piVar2;
  int iVar3;
  undefined *puStack_24;
  _inpINPUT *p_Stack_20;
  undefined4 uStack_1c;
  
  p_Var1 = this + 0x198c;
  uStack_1c = 0;
  puStack_24 = &_GUID_SysMouse;
  p_Stack_20 = p_Var1;
  iVar3 = (**(code **)(**(int **)(this + 0x16a0) + 0xc))(*(int **)(this + 0x16a0));
  if (iVar3 == 0) {
    iVar3 = (**(code **)(**(int **)p_Var1 + 0x2c))(*(int **)p_Var1,&_c_dfDIMouse);
    if (iVar3 == 0) {
      iVar3 = (**(code **)(**(int **)p_Var1 + 0x18))(*(int **)p_Var1,1,&puStack_24);
      if (iVar3 == 0) {
        return 1;
      }
    }
  }
  piVar2 = *(int **)p_Var1;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  *(int *)p_Var1 = 0;
  return 0;
}




/* from: drv:inp_ms.cpp
   addr: 0057A1D0 */

void __thiscall _inpINPUT::TermMouse(_inpINPUT *this)

{
  int *piVar1;
  
  piVar1 = *(int **)(this + 0x198c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(this + 0x198c) = 0;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: drv:inp_ms.cpp
   addr: 0057A1F0 */

void __thiscall _inpINPUT::SetMouseSensitivity(_inpINPUT *this,float param_1)

{
  if (param_1 < ___real_3dcccccd) {
    *(undefined4 *)(this + 0x1990) = 0x3dcccccd;
    return;
  }
  if (___real_40800000 < param_1) {
    *(undefined4 *)(this + 0x1990) = 0x40800000;
    return;
  }
  *(float *)(this + 0x1990) = param_1;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: drv:inp_ms.cpp
   addr: 0057A240 */

void __thiscall _inpINPUT::GetMouseInput(_inpINPUT *this)

{
  uint uVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  _inpINPUT *p_Var9;
  _inpINPUT *p_Var10;
  short sVar11;
  int iStack_4;
  
  if (*(int *)(this + 0x198c) == 0) {
    return;
  }
  do {
    iVar8 = (**(code **)(**(int **)(this + 0x198c) + 0x24))
                      (*(int **)(this + 0x198c),0x10,this + 0x19b4);
    if (iVar8 != -0x7ff8ffe2) {
      if (-1 < iVar8) {
        p_Var10 = this + 0x19c0;
        p_Var9 = this + 0x40c;
        iVar8 = 4;
        *(float *)(this + 0x19a4) =
             (float)*(int *)(this + 0x19b4) * *(float *)(this + 0x1990) * ___real_3cd20d21;
        *(float *)(this + 0x19a8) =
             (float)*(int *)(this + 0x19b8) * *(float *)(this + 0x1990) * ___real_3cd20d21;
        *(float *)(this + 0x19ac) =
             (float)*(int *)(this + 0x19bc) * *(float *)(this + 0x1990) * ___real_3cd20d21;
        do {
          if ((char)*p_Var10 < '\0') {
            *(undefined4 *)p_Var9 = 0x3f800000;
          }
          else {
            *(undefined4 *)p_Var9 = 0;
          }
          p_Var9 = p_Var9 + 4;
          p_Var10 = p_Var10 + 1;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
      break;
    }
    iVar8 = (**(code **)(**(int **)(this + 0x198c) + 0x1c))(*(int **)(this + 0x198c));
  } while (-1 < iVar8);
  if (((byte)this[4] & 0x20) != 0) {
    iStack_4 = 0x1e;
    iVar8 = (**(code **)(**(int **)(this + 0x198c) + 0x28))
                      (*(int **)(this + 0x198c),0x10,this + 0x16ac,&iStack_4,0);
    if ((-1 < iVar8) && (sVar11 = 0, 0 < iStack_4)) {
      iVar8 = 0;
      do {
        uVar1 = *(uint *)(this + iVar8 * 0x10 + 0x16ac);
        if (((0xb < uVar1) && (uVar1 < 0x10)) && ((char)this[(iVar8 + 0x16b) * 0x10] < '\0')) {
          *(undefined4 *)(this + uVar1 * 4 + 0x3dc) = 0x3f800000;
        }
        sVar11 = sVar11 + 1;
        iVar8 = (int)sVar11;
      } while (iVar8 < iStack_4);
    }
  }
  if ((char)*(uint *)(this + 4) < '\0') {
    *(float *)(this + 0x19a8) = *(float *)(this + 0x19a8) * ___real_bf800000;
  }
  fVar3 = *(float *)(this + 0x19a4) + *(float *)(this + 0x1998);
  bVar2 = ___real_bf800000 <= fVar3;
  *(float *)(this + 0x1998) = fVar3;
  fVar4 = ___real_bf800000;
  if ((bVar2) && (fVar4 = fVar3, ___real_3f800000 < fVar3)) {
    fVar4 = ___real_3f800000;
  }
  *(float *)(this + 0x1998) = fVar4;
  fVar3 = *(float *)(this + 0x19a8) + *(float *)(this + 0x199c);
  bVar2 = ___real_bf800000 <= fVar3;
  *(float *)(this + 0x199c) = fVar3;
  fVar5 = ___real_bf800000;
  if ((bVar2) && (fVar5 = fVar3, ___real_3f800000 < fVar3)) {
    fVar5 = ___real_3f800000;
  }
  *(float *)(this + 0x199c) = fVar5;
  fVar3 = *(float *)(this + 0x19ac) + *(float *)(this + 0x19a0);
  bVar2 = ___real_bf800000 <= fVar3;
  *(float *)(this + 0x19a0) = fVar3;
  fVar6 = ___real_bf800000;
  if ((bVar2) && (fVar6 = fVar3, ___real_3f800000 < fVar3)) {
    fVar6 = ___real_3f800000;
  }
  *(float *)(this + 0x19a0) = fVar6;
  if ((*(uint *)(this + 4) & 0x40) == 0) {
    *(undefined4 *)(this + 0x4bc) = *(undefined4 *)(this + 0x19a4);
    *(undefined4 *)(this + 0x4c4) = *(undefined4 *)(this + 0x19a8);
    *(undefined4 *)(this + 0x4cc) = *(undefined4 *)(this + 0x19ac);
    return;
  }
  fVar3 = *(float *)(this + 0x19b0) * ___real_3e99999a;
  if (fVar4 <= fVar3) {
    fVar7 = ___real_00000000;
    if (fVar4 < -fVar3) {
      fVar4 = fVar3 + fVar4;
      goto LAB_0057a4bc;
    }
  }
  else {
    fVar4 = fVar4 - fVar3;
LAB_0057a4bc:
    fVar7 = fVar4 / (___real_3f800000 - fVar3);
  }
  *(float *)(this + 0x4bc) = fVar7;
  if (fVar5 <= fVar3) {
    fVar4 = ___real_00000000;
    if (fVar5 < -fVar3) {
      fVar5 = fVar3 + fVar5;
      goto LAB_0057a512;
    }
  }
  else {
    fVar5 = fVar5 - fVar3;
LAB_0057a512:
    fVar4 = fVar5 / (___real_3f800000 - fVar3);
  }
  *(float *)(this + 0x4c4) = fVar4;
  if (fVar6 <= fVar3) {
    fVar4 = ___real_00000000;
    if (-fVar3 <= fVar6) goto LAB_0057a574;
    fVar6 = fVar3 + fVar6;
  }
  else {
    fVar6 = fVar6 - fVar3;
  }
  fVar4 = fVar6 / (___real_3f800000 - fVar3);
LAB_0057a574:
  *(float *)(this + 0x4cc) = fVar4;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: drv:inp_ms.cpp
   addr: 0057A5B0 */

void __thiscall _inpINPUT::SetMousePos(_inpINPUT *this,float param_1,float param_2)

{
  float fVar1;
  _inpINPUT *p_Var2;
  int iVar3;
  
  fVar1 = ___real_00000000;
  if ((___real_00000000 <= param_1) && (fVar1 = param_1, ___real_3f800000 < param_1)) {
    fVar1 = ___real_3f800000;
  }
  *(float *)(this + 0x1998) = (fVar1 + fVar1) - ___real_3f800000;
  fVar1 = ___real_00000000;
  if ((___real_00000000 <= param_1) && (fVar1 = param_1, ___real_3f800000 < param_1)) {
    fVar1 = ___real_3f800000;
  }
  p_Var2 = this + 0xa0c;
  *(undefined4 *)(this + 0x19a0) = 0;
  *(float *)(this + 0x199c) = (fVar1 + fVar1) - ___real_3f800000;
  iVar3 = 6;
  do {
    *(undefined4 *)(p_Var2 + -0x550) = 0;
    *(undefined4 *)p_Var2 = 0;
    p_Var2 = p_Var2 + 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: drv:inp_ms.cpp
   addr: 0057A660 */

void __thiscall _inpINPUT::GetMouseInfo(_inpINPUT *this,inpMOUSE_INFO *param_1)

{
  uint uVar1;
  DWORD DVar2;
  int iVar3;
  UINT UVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  int iStack_8;
  
  uVar6 = 0;
  uVar1 = *(uint *)(this + 0x1994);
  DVar2 = timeGetTime();
  iVar3 = GetSystemMetrics(0x17);
  if (iVar3 == 0) {
    iVar3 = 0x100;
    iStack_8 = 0x101;
  }
  else {
    iVar3 = 0x101;
    iStack_8 = 0x100;
  }
  UVar4 = GetDoubleClickTime();
  if (_DAT_005df200 < *(float *)(this + iVar3 * 4 + 0xc)) {
    uVar6 = 4;
  }
  if (((uVar1 & 4) != 0) && (uVar6 == 0)) {
    uVar6 = 2;
    uVar7 = *(uint *)(this + 0x19d0) & 0x80000001;
    bVar9 = uVar7 == 0;
    if ((int)uVar7 < 0) {
      bVar9 = (uVar7 - 1 | 0xfffffffe) == 0xffffffff;
    }
    if ((bVar9) && (DVar2 - *(int *)(this + 0x19c4) < UVar4)) {
      uVar6 = 10;
    }
  }
  if (((uVar1 & 4) == 0) && ((uVar6 & 4) != 0)) {
    *(DWORD *)(this + 0x19c4) = DVar2;
    uVar6 = uVar6 | 1;
    *(int *)(this + 0x19d0) = *(int *)(this + 0x19d0) + 1;
  }
  if (_DAT_005df200 < *(float *)(this + 0x414)) {
    uVar6 = uVar6 | 0x40;
  }
  uVar7 = uVar6;
  if (((uVar1 & 0x40) != 0) && ((uVar6 & 0x40) == 0)) {
    uVar7 = uVar6 | 0x20;
    uVar8 = *(uint *)(this + 0x19d4) & 0x80000001;
    bVar9 = uVar8 == 0;
    if ((int)uVar8 < 0) {
      bVar9 = (uVar8 - 1 | 0xfffffffe) == 0xffffffff;
    }
    if ((bVar9) && (DVar2 - *(int *)(this + 0x19c8) < UVar4)) {
      uVar7 = uVar6 | 0xa0;
    }
  }
  if (((uVar1 & 0x40) == 0) && ((uVar7 & 0x40) != 0)) {
    *(DWORD *)(this + 0x19c8) = DVar2;
    uVar7 = uVar7 | 0x10;
    *(int *)(this + 0x19d4) = *(int *)(this + 0x19d4) + 1;
  }
  if (_DAT_005df200 < *(float *)(this + iStack_8 * 4 + 0xc)) {
    uVar7 = uVar7 | 0x400;
  }
  if (((uVar1 & 0x400) != 0) && ((uVar7 & 0x400) == 0)) {
    uVar5 = (undefined1)uVar7;
    uVar7 = uVar7 | 0x200;
    uVar6 = *(uint *)(this + 0x19d8) & 0x80000001;
    bVar9 = uVar6 == 0;
    if ((int)uVar6 < 0) {
      bVar9 = (uVar6 - 1 | 0xfffffffe) == 0xffffffff;
    }
    if ((bVar9) && (DVar2 - *(int *)(this + 0x19cc) < UVar4)) {
      uVar7 = CONCAT11((char)(uVar7 >> 8),uVar5) | 0x800;
    }
  }
  if (((uVar1 & 0x400) == 0) && ((uVar7 & 0x400) != 0)) {
    *(DWORD *)(this + 0x19cc) = DVar2;
    uVar7 = uVar7 | 0x100;
    *(int *)(this + 0x19d8) = *(int *)(this + 0x19d8) + 1;
  }
  *(float *)(param_1 + 4) = (*(float *)(this + 0x1998) + ___real_3f800000) * ___real_3f000000;
  *(float *)(param_1 + 8) = (*(float *)(this + 0x199c) + ___real_3f800000) * ___real_3f000000;
  *(float *)(param_1 + 0xc) = (*(float *)(this + 0x19a0) + ___real_3f800000) * ___real_3f000000;
  *(float *)(param_1 + 0x10) = *(float *)(this + 0x19a4) * ___real_3f000000;
  *(float *)(param_1 + 0x14) = *(float *)(this + 0x19a8) * ___real_3f000000;
  *(float *)(param_1 + 0x18) = *(float *)(this + 0x19ac) * ___real_3f000000;
  if (ABS(*(float *)(param_1 + 0x10)) <= _DAT_005df200) {
    if (ABS(*(float *)(param_1 + 0x14)) <= _DAT_005df200) goto LAB_0057a8b1;
  }
  uVar7 = uVar7 | 0x1000;
LAB_0057a8b1:
  *(uint *)(this + 0x1994) = uVar7;
  *(uint *)param_1 = uVar7;
  return;
}

