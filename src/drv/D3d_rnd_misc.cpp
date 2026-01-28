
/* from: drv:D3d_rnd_misc.cpp
   addr: 004AC650 */

void __thiscall d3dDRIVER::CreateRendDriver(d3dDRIVER *this)

{
  d3dREND_DRIVER *this_00;
  undefined4 uVar1;
  
  this_00 = (d3dREND_DRIVER *)operator_new(0x1e18);
  if (this_00 != (d3dREND_DRIVER *)0x0) {
    uVar1 = d3dREND_DRIVER::d3dREND_DRIVER(this_00);
    *(undefined4 *)(this + 0x24c) = uVar1;
    return;
  }
  *(undefined4 *)(this + 0x24c) = 0;
  return;
}




/* from: drv:D3d_rnd_misc.cpp
   addr: 004AC680 */

void __thiscall d3dDRIVER::DestroyRendDriver(d3dDRIVER *this)

{
  if (*(undefined4 **)(this + 0x24c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x24c))(1);
  }
  return;
}




/* from: drv:D3d_rnd_misc.cpp
   addr: 004AC6A0 */

void __thiscall d3dREND_DRIVER::FlushHWQueue(d3dREND_DRIVER *this)

{
  if ((*(uint *)(d3dDriver + 4) & 0x1000000) != 0) {
    (**(code **)(*(int *)d3dDriver + 0x1c))();
    (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x50))(*(int **)(d3dDriver + 0x77c),0x32,1);
                    /* WARNING: Could not recover jumptable at 0x004ac6d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)d3dDriver + 0x18))();
    return;
  }
  return;
}




/* from: drv:D3d_rnd_misc.cpp
   addr: 004AC6E0 */

int __thiscall d3dREND_DRIVER::FilterInst(d3dREND_DRIVER *this,animINST *param_1)

{
  if ((((*(uint *)(d3dDriver + 4) & 0x2000) != 0) &&
      ((*(uint *)(*(int *)(d3dDriver + 0x210) + 0x14) & 0x400000) != 0)) &&
     ((((byte)this[4] & 0x10) == 0 || ((*(uint *)(d3dDriver + 4) & 0x4000) != 0)))) {
    *(uint *)(this + 4) = *(uint *)(this + 4) & 0xffffffbf;
    return 0;
  }
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x40;
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: drv:D3d_rnd_misc.cpp
   addr: 004AC730 */

int __thiscall
d3dREND_DRIVER::DrawPoly(d3dREND_DRIVER *this,int param_1,rendVERTEX *param_2,rendCFG *param_3)

{
  float fVar1;
  float fVar2;
  rendVERTEX *prVar3;
  float *pfVar4;
  int iVar5;
  undefined2 local_23c;
  undefined2 local_23a;
  undefined2 local_238;
  undefined2 local_236;
  undefined2 local_234;
  undefined2 local_232;
  undefined1 local_230 [4];
  float local_22c [139];
  
  local_23c = 0;
  local_23a = 1;
  local_238 = 2;
  local_236 = 0;
  local_234 = 2;
  local_232 = 3;
  if ((*(uint *)(d3dDriver + 4) & 0x1000000) != 0) {
    iVar5 = 0;
    if (0 < param_1) {
      pfVar4 = local_22c;
      prVar3 = param_2 + 0xc;
      do {
        fVar1 = *(float *)prVar3;
        fVar2 = ___real_00000000;
        if ((fVar1 <= *(float *)(d3dDriver + 0x1da0)) &&
           (fVar2 = ___real_3f7fff58, *(float *)(d3dDriver + 0x1da4) <= fVar1)) {
          fVar2 = fVar1 * *(float *)(d3dDriver + 0x1da8) + *(float *)(d3dDriver + 0x1dac);
        }
        *(float *)(prVar3 + -4) = fVar2;
        if ((char)((uint)*(undefined4 *)(param_3 + 0xb8) >> 8) < '\0') {
          *(float *)prVar3 = 0.99999;
          *(float *)(prVar3 + -4) = 0.0;
        }
        pfVar4[-1] = *(float *)(prVar3 + -0xc);
        *pfVar4 = *(float *)(prVar3 + -8);
        fVar1 = *(float *)(prVar3 + -0xc);
        pfVar4[1] = *(float *)(prVar3 + -4);
        pfVar4[2] = *(float *)prVar3;
        pfVar4[4] = *(float *)(prVar3 + 0xc);
        pfVar4[5] = *(float *)(prVar3 + 0x10);
        pfVar4[3] = *(float *)(prVar3 + 4);
        if ((((fVar1 < ___real_bdcccccd) ||
             ((float)*(int *)(*(int *)(d3dDriver + 0x210) + 8) + ___real_3dcccccd <
              *(float *)(prVar3 + -0xc))) || (*(float *)(prVar3 + -8) < ___real_bdcccccd)) ||
           ((float)*(int *)(*(int *)(d3dDriver + 0x210) + 0xc) + ___real_3dcccccd <
            *(float *)(prVar3 + -8))) {
          return 0;
        }
        iVar5 = iVar5 + 1;
        pfVar4 = pfVar4 + 7;
        prVar3 = prVar3 + 0x30;
      } while (iVar5 < param_1);
    }
    (**(code **)(*(int *)rendDrv + 0x4c))(local_230,4,&local_23c,2,param_3);
  }
  return 1;
}




/* from: drv:D3d_rnd_misc.cpp
   addr: 004AC8E0 */

void __thiscall
d3dREND_DRIVER::DrawLine
          (d3dREND_DRIVER *this,rendVERTEX *param_1,rendVERTEX *param_2,rendCFG *param_3)

{
  undefined4 local_40;
  undefined4 local_3c;
  float local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  float local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_8;
  undefined4 local_4;
  
  if ((*(uint *)(d3dDriver + 4) & 0x1000000) != 0) {
    StopUseHTL(this);
    local_40 = *(undefined4 *)param_1;
    local_3c = *(undefined4 *)(param_1 + 4);
    local_34 = *(undefined4 *)(param_1 + 0xc);
    if (*(float *)(param_1 + 0xc) <= *(float *)(d3dDriver + 0x1da0)) {
      if (*(float *)(d3dDriver + 0x1da4) <= *(float *)(param_1 + 0xc)) {
        local_38 = *(float *)(d3dDriver + 0x1da8) * *(float *)(param_1 + 0xc) +
                   *(float *)(d3dDriver + 0x1dac);
      }
      else {
        local_38 = 0.99999;
      }
    }
    else {
      local_38 = 0.0;
    }
    local_30 = *(undefined4 *)(param_1 + 0x10);
    local_28 = *(undefined4 *)(param_1 + 0x18);
    local_24 = *(undefined4 *)(param_1 + 0x1c);
    local_20 = *(undefined4 *)param_2;
    local_1c = *(undefined4 *)(param_2 + 4);
    local_14 = *(undefined4 *)(param_2 + 0xc);
    if (*(float *)(param_2 + 0xc) <= *(float *)(d3dDriver + 0x1da0)) {
      if (*(float *)(d3dDriver + 0x1da4) <= *(float *)(param_2 + 0xc)) {
        local_18 = *(float *)(d3dDriver + 0x1da8) * *(float *)(param_2 + 0xc) +
                   *(float *)(d3dDriver + 0x1dac);
      }
      else {
        local_18 = 0.99999;
      }
    }
    else {
      local_18 = 0.0;
    }
    local_10 = *(undefined4 *)(param_2 + 0x10);
    local_8 = *(undefined4 *)(param_2 + 0x18);
    local_4 = *(undefined4 *)(param_2 + 0x1c);
    if ((char)((uint)*(undefined4 *)(param_3 + 0xb8) >> 8) < '\0') {
      local_34 = 0x3f7fff58;
      local_38 = 0.0;
      local_14 = 0x3f7fff58;
      local_18 = 0.0;
    }
    (**(code **)(**(int **)(d3dDriver + 0x77c) + 100))
              (*(int **)(d3dDriver + 0x77c),2,0x1c4,&local_40,2,0);
  }
  return;
}

