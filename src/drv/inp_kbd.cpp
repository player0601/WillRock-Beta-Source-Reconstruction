
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* from: drv:inp_kbd.cpp
   addr: 0057A8F0 */

int __thiscall _inpINPUT::InitKeyboard(_inpINPUT *this)

{
  int *piVar1;
  int iVar2;
  _inpINPUT *p_Var3;
  undefined4 *puVar4;
  undefined4 *puStack_2c;
  int *piStack_28;
  undefined4 uStack_24;
  int local_18 [6];
  
  piVar1 = *(int **)(this + 0x16a0);
  piStack_28 = local_18;
  uStack_24 = 0;
  local_18[1] = 0x14;
  local_18[2] = 0x10;
  local_18[3] = 0;
  local_18[4] = 0;
  local_18[5] = 0x1e;
  puStack_2c = (undefined4 *)&_GUID_SysKeyboard;
  iVar2 = (**(code **)(*piVar1 + 0xc))();
  if (iVar2 == 0) {
    iVar2 = (**(code **)(*piStack_28 + 0x2c))(piStack_28,&_c_dfDIKeyboard);
    if (iVar2 == 0) {
      iVar2 = (**(code **)(*piVar1 + 0x18))(piVar1,1);
      if (iVar2 == 0) {
        p_Var3 = this + 0x16a8;
        iVar2 = (*(code *)*puStack_2c)(&puStack_2c,&_IID_IDirectInputDevice7W);
        if (iVar2 == 0) {
          if (p_Var3 != (_inpINPUT *)0x0) {
            (**(code **)(*(int *)p_Var3 + 8))(p_Var3);
          }
          puVar4 = &DAT_00963e88;
          for (iVar2 = 0xff; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar4 = 0xffffffff;
            puVar4 = puVar4 + 1;
          }
          DAT_00963e8c = 0x1b;
          _DAT_00963e90 = 0x31;
          _DAT_00963e94 = 0x32;
          _DAT_00963e98 = 0x33;
          _DAT_00963e9c = 0x34;
          _DAT_00963ea0 = 0x35;
          _DAT_00963ea4 = 0x36;
          _DAT_00963ea8 = 0x37;
          _DAT_00963eac = 0x38;
          _DAT_00963eb0 = 0x39;
          _DAT_00963eb4 = 0x30;
          _DAT_00963eb8 = 0xbd;
          _DAT_00963ebc = 0xbb;
          _DAT_00963ec0 = 8;
          _DAT_00963ec4 = 9;
          _DAT_00963ec8 = 0x51;
          _DAT_00963ecc = 0x57;
          _DAT_00963ed0 = 0x45;
          _DAT_00963ed4 = 0x52;
          _DAT_00963ed8 = 0x54;
          _DAT_00963edc = 0x59;
          _DAT_00963ee0 = 0x55;
          _DAT_00963ee4 = 0x49;
          _DAT_00963ee8 = 0x4f;
          _DAT_00963eec = 0x50;
          _DAT_00963ef0 = 0xdb;
          _DAT_00963ef4 = 0xdd;
          _DAT_00963ef8 = 0xd;
          _DAT_00963efc = 0x11;
          _DAT_00963f00 = 0x41;
          _DAT_00963f04 = 0x53;
          _DAT_00963f08 = 0x44;
          _DAT_00963f0c = 0x46;
          _DAT_00963f10 = 0x47;
          _DAT_00963f14 = 0x48;
          _DAT_00963f18 = 0x4a;
          _DAT_00963f1c = 0x4b;
          _DAT_00963f20 = 0x4c;
          _DAT_00963f24 = 0xba;
          _DAT_00963f28 = 0xde;
          _DAT_00963f2c = 0xc0;
          _DAT_00963f30 = 0x10;
          _DAT_00963f34 = 0xdc;
          _DAT_00963f38 = 0x5a;
          _DAT_00963f3c = 0x58;
          _DAT_00963f40 = 0x43;
          _DAT_00963f44 = 0x56;
          _DAT_00963f48 = 0x42;
          _DAT_00963f4c = 0x4e;
          _DAT_00963f50 = 0x4d;
          _DAT_00963f54 = 0xbc;
          _DAT_00963f58 = 0xbe;
          _DAT_00963f5c = 0x2f;
          _DAT_00963f60 = 0x10;
          _DAT_00963f64 = 0x6a;
          _DAT_00963f68 = 0x12;
          _DAT_00963f6c = 0x20;
          _DAT_00963f70 = 0x14;
          _DAT_00963f74 = 0x70;
          _DAT_00963f78 = 0x71;
          _DAT_00963f7c = 0x72;
          _DAT_00963f80 = 0x73;
          _DAT_00963f84 = 0x74;
          _DAT_00963f88 = 0x75;
          _DAT_00963f8c = 0x76;
          _DAT_00963f90 = 0x77;
          _DAT_00963f94 = 0x78;
          _DAT_00963f98 = 0x79;
          _DAT_00963f9c = 0x90;
          _DAT_00963fa0 = 0x91;
          _DAT_00963fb0 = 0x6d;
          _DAT_00963fc0 = 0x6b;
          _DAT_00963fd4 = 0x6e;
          _DAT_00963fe4 = 0x7a;
          _DAT_00963fe8 = 0x7b;
          _DAT_00964168 = 0x12;
          _DAT_00964018 = 0x7c;
          _DAT_0096401c = 0x7d;
          _DAT_00964020 = 0x7e;
          _DAT_00964048 = 0x15;
          _DAT_009640fc = 0x11;
          _DAT_0096415c = 0x6f;
          _DAT_00964164 = 0x2c;
          _DAT_0096419c = 0x13;
          _DAT_009641a4 = 0x24;
          _DAT_009641a8 = 0x26;
          _DAT_009641ac = 0x21;
          _DAT_009641b4 = 0x25;
          _DAT_009641bc = 0x27;
          _DAT_009641c4 = 0x23;
          _DAT_009641c8 = 0x28;
          _DAT_009641cc = 0x22;
          _DAT_009641d0 = 0x2d;
          _DAT_009641d4 = 0x2e;
          _DAT_009641f4 = 0x5b;
          _DAT_009641f8 = 0x5c;
          _DAT_009641fc = 0x5d;
          return 1;
        }
      }
    }
  }
  return 0;
}




/* from: drv:inp_kbd.cpp
   addr: 0057AD70 */

void __thiscall _inpINPUT::TermKeyboard(_inpINPUT *this)

{
  int *piVar1;
  
  piVar1 = *(int **)(this + 0x16a8);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined4 *)(this + 0x16a8) = 0;
  return;
}




/* from: drv:inp_kbd.cpp
   addr: 0057AD90 */

void __thiscall _inpINPUT::SetKeyboardLayout(_inpINPUT *this,int param_1)

{
  if ((param_1 & 1U) == 0) {
    *(undefined4 *)(this + 0x13c4) = 0x1d;
    *(undefined4 *)(this + 0x1430) = 0x38;
    *(undefined4 *)(this + 0x1228) = 0x2a;
    *(undefined4 *)(this + 0x14c0) = 0xdb;
  }
  if (((param_1 & 2U) != 0) || ((param_1 & 4U) != 0)) {
    *(undefined4 *)(this + 0x1278) = 0xc;
    *(undefined4 *)(this + 0x13c0) = 0x1c;
    *(undefined4 *)(this + 0x122c) = 9;
    *(undefined4 *)(this + 0x1288) = 0xd;
    *(undefined4 *)(this + 0x1424) = 0x35;
    *(undefined4 *)(this + 0x129c) = 0x28;
  }
  if ((param_1 & 2U) != 0) {
    *(undefined4 *)(this + 0x1298) = 0xb;
    *(undefined4 *)(this + 0x128c) = 2;
    *(undefined4 *)(this + 0x1290) = 3;
    *(undefined4 *)(this + 0x1294) = 4;
    *(undefined4 *)(this + 0x127c) = 5;
    *(undefined4 *)(this + 0x1280) = 6;
    *(undefined4 *)(this + 0x1284) = 7;
    *(undefined4 *)(this + 0x126c) = 8;
    *(undefined4 *)(this + 0x1270) = 9;
    *(undefined4 *)(this + 0x1274) = 10;
  }
  if ((param_1 & 4U) != 0) {
    *(undefined4 *)(this + 0x1298) = 0xd2;
    *(undefined4 *)(this + 0x128c) = 0xcf;
    *(undefined4 *)(this + 0x1290) = 0xd0;
    *(undefined4 *)(this + 0x1294) = 0xd1;
    *(undefined4 *)(this + 0x127c) = 0xcb;
    *(undefined4 *)(this + 0x1280) = 6;
    *(undefined4 *)(this + 0x1284) = 0xcd;
    *(undefined4 *)(this + 0x126c) = 199;
    *(undefined4 *)(this + 0x1270) = 200;
    *(undefined4 *)(this + 0x1274) = 0xc9;
  }
  return;
}




/* from: drv:inp_kbd.cpp
   addr: 0057AEE0 */

void __thiscall _inpINPUT::FlushKeyboard(_inpINPUT *this)

{
  int *piVar1;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  piVar1 = *(int **)(this + 0x16a8);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x28))(piVar1,0x10,0,&local_4,0);
  }
  piVar1 = *(int **)(this + 0x198c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x28))(piVar1,0x10,0,&local_4,0);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: drv:inp_kbd.cpp
   addr: 0057AF30 */

void __thiscall _inpINPUT::GetKeyboardInput(_inpINPUT *this)

{
  int iVar1;
  _inpINPUT *p_Var2;
  _inpINPUT *p_Var3;
  _inpINPUT *p_Stack_4;
  
  if (*(int *)(this + 0x16a8) != 0) {
    p_Stack_4 = this;
    do {
      iVar1 = (**(code **)(**(int **)(this + 0x16a8) + 0x24))
                        (*(int **)(this + 0x16a8),0x100,this + 0x188c);
      if (iVar1 != -0x7ff8ffe2) {
        if (-1 < iVar1) {
          iVar1 = 0;
          p_Var2 = this + 0xc;
          do {
            if ((char)(this + 0x188c)[iVar1] < '\0') {
              *(undefined4 *)p_Var2 = 0x3f800000;
            }
            else {
              *(undefined4 *)p_Var2 = 0;
            }
            iVar1 = iVar1 + 1;
            p_Var2 = p_Var2 + 4;
          } while (iVar1 < 0x100);
          __dbgKbd1 = 1;
          if (*(float *)(this + 0x10) <= ___real_3727c5ac) {
            __dbgKbd1 = 0;
          }
        }
        break;
      }
      iVar1 = (**(code **)(**(int **)(this + 0x16a8) + 0x1c))(*(int **)(this + 0x16a8));
    } while (-1 < iVar1);
    if (((byte)this[4] & 0x20) != 0) {
      p_Var2 = this + 0x16ac;
      p_Stack_4 = (_inpINPUT *)0x1e;
      p_Var3 = p_Var2;
      iVar1 = (**(code **)(**(int **)(this + 0x16a8) + 0x28))
                        (*(int **)(this + 0x16a8),0x10,p_Var2,&p_Stack_4,0);
      if ((-1 < iVar1) && (iVar1 = 0, 0 < (int)p_Var3)) {
        do {
          if ((char)p_Var2[4] < '\0') {
            *(undefined4 *)(this + *(int *)p_Var2 * 4 + 0xc) = 0x3f800000;
          }
          iVar1 = iVar1 + 1;
          p_Var2 = p_Var2 + 0x10;
        } while (iVar1 < (int)p_Var3);
      }
    }
  }
  return;
}

