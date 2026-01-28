
/* from: m3d:m3d_ctrl.cpp
   addr: 00551130 */

void __thiscall m3dCTRL_TIME::Update(m3dCTRL_TIME *this,float param_1)

{
  uint uVar1;
  float fVar2;
  
  uVar1 = *(uint *)(this + 4);
  if ((uVar1 & 1) != 0) {
    fVar2 = param_1 * *(float *)(this + 0x10) + *(float *)(this + 8);
    *(float *)(this + 8) = fVar2;
    if (*(float *)(this + 0xc) < fVar2) {
      if ((uVar1 & 4) == 0) {
        *(float *)(this + 8) = fVar2 - *(float *)(this + 0xc);
      }
      if ((uVar1 & 2) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0055117b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(int *)this + 8))();
        return;
      }
    }
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_ctrl.cpp
   addr: 00551190 */

void __thiscall m3dCTRL_1D_SPL::GetValue(m3dCTRL_1D_SPL *this,float *param_1)

{
  float fVar1;
  float fVar2;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  fVar1 = *(float *)(this + 0xc);
  fVar2 = *(float *)(this + 8);
  local_18 = 0.0;
  local_14 = 1.0;
  local_10 = 0.0;
  local_1c = fVar1;
  if (fVar1 < ___real_00000000) {
    local_1c = 0.0;
    local_10 = 1.0;
    local_14 = 0.0;
    local_18 = fVar1;
  }
  if (local_18 <= fVar2) {
    if (fVar2 <= local_1c) {
      local_8 = local_14;
      local_4 = local_1c;
      if (local_1c < local_18) {
        local_4 = local_18;
        local_8 = local_10;
        local_18 = local_1c;
        local_10 = local_14;
      }
      local_c = ((fVar2 - local_18) * (local_8 - local_10)) / (local_4 - local_18) + local_10;
    }
    else {
      local_c = local_14;
    }
  }
  else {
    local_c = local_10;
  }
  (**(code **)(**(int **)(this + 0x1c) + 0x10))(local_c,param_1,0);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_ctrl.cpp
   addr: 005512A0 */

float __thiscall m3dCTRL_1D_SPL::GetMaxValue(m3dCTRL_1D_SPL *this)

{
  int iVar1;
  int iVar2;
  float local_c;
  float local_8;
  int local_4;
  
  local_c = -_DAT_005de578;
  iVar1 = *(int *)(*(int *)(this + 0x1c) + 0xc);
  local_4 = 0;
  if (0 < iVar1) {
    do {
      iVar2 = local_4;
      (**(code **)(**(int **)(this + 0x1c) + 0x10))((float)local_4,&local_8,0);
      if (local_c < local_8) {
        local_c = local_8;
      }
      local_4 = iVar2 + 1;
    } while (local_4 < iVar1);
  }
  return local_c;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_ctrl.cpp
   addr: 00551310 */

void __thiscall m3dCTRL_COLOR_SPL::GetValue(m3dCTRL_COLOR_SPL *this,m3dCOLOR *param_1)

{
  float fVar1;
  float fVar2;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  fVar1 = *(float *)(this + 0xc);
  fVar2 = *(float *)(this + 8);
  local_18 = 0.0;
  local_14 = 1.0;
  local_10 = 0.0;
  local_1c = fVar1;
  if (fVar1 < ___real_00000000) {
    local_1c = 0.0;
    local_10 = 1.0;
    local_14 = 0.0;
    local_18 = fVar1;
  }
  if (local_18 <= fVar2) {
    if (fVar2 <= local_1c) {
      local_8 = local_14;
      local_4 = local_1c;
      if (local_1c < local_18) {
        local_4 = local_18;
        local_8 = local_10;
        local_18 = local_1c;
        local_10 = local_14;
      }
      local_c = ((fVar2 - local_18) * (local_8 - local_10)) / (local_4 - local_18) + local_10;
    }
    else {
      local_c = local_14;
    }
  }
  else {
    local_c = local_10;
  }
  (**(code **)(**(int **)(this + 0x28) + 0x10))(local_c,param_1,0);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_ctrl.cpp
   addr: 00551420 */

void __thiscall m3dCTRL_1D_NOISE::GetValue(m3dCTRL_1D_NOISE *this,float *param_1)

{
  float10 fVar1;
  float *unaff_retaddr;
  float local_c;
  float local_8;
  float local_4;
  
  local_c = *(float *)(this + 8) * *(float *)(this + 0x28) + _DAT_005de57c;
  local_8 = _DAT_005de57c * ___real_3f000000;
  local_4 = local_8;
  fVar1 = (float10)(**(code **)(**(int **)(this + 0x1c) + 8))(&local_c);
  *unaff_retaddr =
       (float)(((float10)*(float *)(this + 0x24) - (float10)*(float *)(this + 0x20)) *
               (fVar1 + (float10)___real_3f800000) * (float10)___real_3f000000 +
              (float10)*(float *)(this + 0x20));
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_ctrl.cpp
   addr: 00551490 */

void __thiscall m3dCTRL_COLOR_NOISE::GetValue(m3dCTRL_COLOR_NOISE *this,m3dCOLOR *param_1)

{
  float10 fVar1;
  float *unaff_retaddr;
  float local_c;
  float local_8;
  float local_4;
  
  local_c = *(float *)(this + 8) * *(float *)(this + 0x34) + _DAT_005de57c;
  local_8 = _DAT_005de57c * ___real_3f000000;
  local_4 = local_8;
  fVar1 = (float10)(**(code **)(**(int **)(this + 0x28) + 8))(&local_c);
  fVar1 = ((float10)*(float *)(this + 0x30) - (float10)*(float *)(this + 0x2c)) *
          (fVar1 + (float10)___real_3f800000) * (float10)___real_3f000000 +
          (float10)*(float *)(this + 0x2c);
  unaff_retaddr[3] = *(float *)(this + 0x44);
  *unaff_retaddr = (float)(fVar1 * (float10)*(float *)(this + 0x38));
  unaff_retaddr[1] = (float)(fVar1 * (float10)*(float *)(this + 0x3c));
  unaff_retaddr[2] = (float)(fVar1 * (float10)*(float *)(this + 0x40));
  return;
}

