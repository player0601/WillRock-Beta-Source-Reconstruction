
/* from: drv:inp_joy.cpp
   addr: 00579EA0 */

void __thiscall _inpINPUT::TermJoystick(_inpINPUT *this)

{
  int *piVar1;
  
  piVar1 = *(int **)(this + 0x19dc);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined4 *)(this + 0x19dc) = 0;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: drv:inp_joy.cpp
   addr: 00579EC0 */

void __thiscall _inpINPUT::SetJoystickDeadZone(_inpINPUT *this,float param_1)

{
  int *piVar1;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (___real_00000000 <= param_1) {
    if (___real_3f800000 < param_1) {
      param_1 = 1.0;
    }
  }
  else {
    param_1 = 0.0;
  }
  piVar1 = *(int **)(this + 0x19dc);
  *(float *)(this + 0x2540) = param_1;
  if (piVar1 != (int *)0x0) {
    local_14 = 0x14;
    local_10 = 0x10;
    local_c = 0;
    local_8 = 0;
    local_4 = ftol();
    (**(code **)(*piVar1 + 0x18))(piVar1,5,&local_14);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: drv:inp_joy.cpp
   addr: 00579F50 */

void __thiscall _inpINPUT::GetJoystickInput(_inpINPUT *this)

{
  int iVar1;
  int *piVar2;
  _inpINPUT *p_Var3;
  float10 fVar4;
  float10 fVar5;
  
  piVar2 = *(int **)(this + 0x19dc);
  if (piVar2 == (int *)0x0) {
    return;
  }
  (**(code **)(*piVar2 + 100))(piVar2);
  do {
    iVar1 = (**(code **)(**(int **)(this + 0x19dc) + 0x24))
                      (*(int **)(this + 0x19dc),0x50,&DAT_00963e28);
    if (iVar1 == 0) {
LAB_00579fa1:
      piVar2 = &DAT_00963e48;
      p_Var3 = this + 0x51c;
      *(float *)(this + 0x4d4) =
           *(float *)(this + 0x19e0) * ___real_3e800000 * (float)_DAT_00963e28 * ___real_38d1b717;
      *(float *)(this + 0x4dc) =
           *(float *)(this + 0x19e0) * ___real_3e800000 * (float)_DAT_00963e2c * ___real_38d1b717;
      *(float *)(this + 0x4e4) =
           *(float *)(this + 0x19e0) * ___real_3e800000 * (float)_DAT_00963e30 * ___real_38d1b717;
      *(float *)(this + 0x4ec) =
           *(float *)(this + 0x19e0) * ___real_3e800000 * (float)_DAT_00963e34 * ___real_38d1b717;
      *(float *)(this + 0x4f4) =
           *(float *)(this + 0x19e0) * ___real_3e800000 * (float)_DAT_00963e38 * ___real_38d1b717;
      *(float *)(this + 0x4fc) =
           *(float *)(this + 0x19e0) * ___real_3e800000 * (float)_DAT_00963e3c * ___real_38d1b717;
      *(float *)(this + 0x504) =
           *(float *)(this + 0x19e0) * ___real_3e800000 * (float)_DAT_00963e40 * ___real_38d1b717;
      *(float *)(this + 0x50c) =
           *(float *)(this + 0x19e0) * ___real_3e800000 * (float)_DAT_00963e44 * ___real_38d1b717;
      do {
        iVar1 = *piVar2;
        if ((iVar1 != -1) && (iVar1 != 0xffff)) {
          fVar4 = (float10)iVar1 * (float10)___real_3c23d70a * (float10)___real_3c8efa2e;
          fVar5 = (float10)fcos(fVar4);
          *(float *)(p_Var3 + -8) =
               (float)((float10)*(float *)(this + 0x19e0) * (float10)___real_3e800000 * fVar5);
          fVar4 = (float10)fsin(fVar4);
          *(float *)p_Var3 =
               (float)((float10)*(float *)(this + 0x19e0) * (float10)___real_3e800000 * fVar4);
        }
        piVar2 = piVar2 + 1;
        p_Var3 = p_Var3 + 0x10;
      } while ((int)piVar2 < 0x963e58);
      iVar1 = 0;
      p_Var3 = this + 0x41c;
      do {
        if (((&DAT_00963e58)[iVar1] & 0x80) == 0) {
          *(undefined4 *)p_Var3 = 0;
        }
        else {
          *(undefined4 *)p_Var3 = 0x3f800000;
        }
        iVar1 = iVar1 + 1;
        p_Var3 = p_Var3 + 4;
      } while (iVar1 < 0x20);
      return;
    }
    if (iVar1 != -0x7ff8ffe2) {
      if (iVar1 < 0) {
        return;
      }
      goto LAB_00579fa1;
    }
    iVar1 = (**(code **)(**(int **)(this + 0x19dc) + 0x1c))(*(int **)(this + 0x19dc));
    if (iVar1 < 0) {
      return;
    }
  } while( true );
}

