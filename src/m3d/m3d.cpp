
/* from: m3d:m3d.cpp
   addr: 00551530 */

int __fastcall m3dInit(void)

{
  int iVar1;
  
  _m3dDetectSIMD();
  iVar1 = m3dInit2DMatr();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = m3dInit3DMatr();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = m3dInitNoise();
  return (uint)(iVar1 != 0);
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d.cpp
   addr: 00551580 */

int __fastcall _m3dCheckValid(float param_1)

{
  int iVar1;
  float in_stack_00000004;
  
  iVar1 = isnan((double)in_stack_00000004);
  if (((iVar1 == 0) && (-_DAT_005de584 - ___real_42c80000 <= in_stack_00000004)) &&
     (in_stack_00000004 <= _DAT_005de584 + ___real_42c80000)) {
    return 1;
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d.cpp
   addr: 005515E0 */

int __fastcall _m3dCheckValid(m3dVTX *param_1)

{
  float fVar1;
  int iVar2;
  
  fVar1 = *(float *)param_1;
  iVar2 = isnan((double)fVar1);
  if (((iVar2 == 0) && (-_DAT_005de584 - ___real_42c80000 <= fVar1)) &&
     (fVar1 <= _DAT_005de584 + ___real_42c80000)) {
    return 0;
  }
  fVar1 = *(float *)(param_1 + 4);
  iVar2 = isnan((double)fVar1);
  if (((iVar2 == 0) && (-_DAT_005de584 - ___real_42c80000 <= fVar1)) &&
     (fVar1 <= _DAT_005de584 + ___real_42c80000)) {
    return 0;
  }
  return 1;
}




/* WARNING: Removing unreachable block (ram,0x00551719) */
/* WARNING: Removing unreachable block (ram,0x0055170b) */
/* WARNING: Removing unreachable block (ram,0x005516ea) */
/* WARNING: Removing unreachable block (ram,0x005516dc) */
/* from: m3d:m3d.cpp
   addr: 005516A0 */

void __fastcall _m3dDetectSIMD(void)

{
  int iVar1;
  uint *puVar2;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005de588;
  puStack_10 = &__except_handler3;
  local_14 = ExceptionList;
  m3dSimdType = 2;
  cpuid_Version_info(1);
  local_8 = 0xffffffff;
  iVar1 = cpuid_Version_info(1);
  if ((*(uint *)(iVar1 + 8) & 0x2000000) == 0) {
    puVar2 = (uint *)cpuid(0x80000000);
    if ((0x80000000 < *puVar2) &&
       (iVar1 = cpuid(0x80000001), (*(uint *)(iVar1 + 8) & 0x80000000) != 0)) {
      m3dSimdType = 1;
    }
  }
  else {
    m3dSimdType = 0;
  }
  if (m3dSimdType == 0) {
    ExceptionList = &local_14;
    apLog(s_SSE_detected_);
    ExceptionList = local_14;
    return;
  }
  if (m3dSimdType == 1) {
    ExceptionList = &local_14;
    apLog(s_3DNOW_detected_);
    ExceptionList = local_14;
    return;
  }
  ExceptionList = &local_14;
  apLog(s_No_SIMD_extensions_detected_);
  ExceptionList = local_14;
  return;
}

