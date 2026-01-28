
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:gs_curs.cpp
   addr: 00500C40 */

int __fastcall gscInit(void)

{
  undefined4 uVar1;
  
  DAT_009483ac = (undefined4 *)operator_new(0x20);
  if (DAT_009483ac != (undefined4 *)0x0) {
    *DAT_009483ac = 0;
    DAT_009483ac[1] = 0;
    DAT_009483ac[2] = 0;
    DAT_009483ac[3] = 0;
    DAT_009483ac[4] = _m3dVZero;
    DAT_009483ac[5] = DAT_00963740;
    uVar1 = DAT_00963744;
    DAT_009483ac[7] = 0;
    DAT_009483ac[6] = uVar1;
    _DAT_009483a4 = 0x3f800000;
    return 1;
  }
  DAT_009483ac = (undefined4 *)0x0;
  _DAT_009483a4 = 0x3f800000;
  return 1;
}




/* from: gs:gs_curs.cpp
   addr: 00500CB0 */

void __fastcall gscTerm(void)

{
  txmTEXTURE *ptVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < DAT_00948374) {
    iVar2 = 0;
    do {
      ptVar1 = *(txmTEXTURE **)(iVar2 + 0xc + (int)DAT_009483b0);
      if (ptVar1 != (txmTEXTURE *)0x0) {
        txmMANAGER::Del(txmManager,ptVar1);
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x10;
    } while (iVar3 < DAT_00948374);
  }
  operator_delete(DAT_009483ac);
  operator_delete(DAT_009483b0);
  return;
}




/* from: gs:gs_curs.cpp
   addr: 00500D10 */

void __fastcall gscAllocCursors(int param_1)

{
  undefined4 *puVar1;
  
  DAT_00948374 = param_1;
  DAT_009483b0 = operator_new(param_1 << 4);
  if (DAT_009483b0 != (void *)0x0) {
    if (-1 < param_1 + -1) {
      puVar1 = (undefined4 *)((int)DAT_009483b0 + 8);
      do {
        puVar1[-2] = 0x3f000000;
        puVar1[-1] = 0x3f000000;
        *puVar1 = 0x3f800000;
        puVar1[1] = 0;
        puVar1 = puVar1 + 4;
        param_1 = param_1 + -1;
      } while (param_1 != 0);
    }
    return;
  }
  DAT_009483b0 = (void *)0x0;
  return;
}




/* from: gs:gs_curs.cpp
   addr: 00500D70 */

void __fastcall gscFreeCursors(void)

{
  DAT_00948374 = 0;
  operator_delete(DAT_009483b0);
  DAT_009483b0 = (void *)0x0;
  return;
}




/* from: gs:gs_curs.cpp
   addr: 00500DB0 */

int __fastcall
gscRegisterCursor(int param_1,float param_2,float param_3,float param_4,char *param_5)

{
  txmTEXTURE *ptVar1;
  int iVar2;
  
  if ((param_1 < 0) && (DAT_00948374 <= param_1)) {
    return 0;
  }
  iVar2 = param_1 * 0x10;
  if (param_2 == 0.0) {
    *(undefined4 *)(iVar2 + 0xc + DAT_009483b0) = 0;
  }
  else {
    ptVar1 = txmMANAGER::Add(txmManager,(char *)param_2,0,1);
    *(txmTEXTURE **)(iVar2 + 0xc + DAT_009483b0) = ptVar1;
    if (*(int *)(iVar2 + 0xc + DAT_009483b0) == 0) {
      return 0;
    }
  }
  *(float *)(iVar2 + DAT_009483b0) = param_3;
  *(float *)(iVar2 + 4 + DAT_009483b0) = param_4;
  *(char **)(iVar2 + 8 + DAT_009483b0) = param_5;
  return 1;
}




/* WARNING: Removing unreachable block (ram,0x00500e6f) */
/* from: gs:gs_curs.cpp
   addr: 00500E40 */

void __thiscall gscCURSOR::Lock(gscCURSOR *this,float param_1,float param_2)

{
  float local_10;
  float local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  *(float *)(this + 0x1c) = param_1;
  *(uint *)this = *(uint *)this | 2;
  *(float *)(this + 0x20) = param_2;
  local_10 = param_1;
  local_c = param_2;
  gssUCoord2SCoord((m2dV *)&local_10,(m2dV *)&local_8);
  *(undefined4 *)(this + 8) = local_8;
  *(undefined4 *)(this + 0xc) = local_4;
  return;
}




/* from: gs:gs_curs.cpp
   addr: 00500EB0 */

void __thiscall gscCURSOR::UpdatePosMouse(gscCURSOR *this)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (((byte)*this & 2) == 0) {
    local_10 = *(undefined4 *)(gsSysInput + 0x2c);
    local_c = *(undefined4 *)(gsSysInput + 0x30);
  }
  else {
    local_10 = *(undefined4 *)(this + 0x1c);
    local_c = *(undefined4 *)(this + 0x20);
  }
  gssUCoord2SCoord((m2dV *)&local_10,(m2dV *)&local_8);
  *(undefined4 *)(this + 8) = local_8;
  *(undefined4 *)(this + 0xc) = local_4;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:gs_curs.cpp
   addr: 00500F00 */

void __thiscall gscCURSOR::Draw(gscCURSOR *this,camCAMERA *param_1)

{
  float fVar1;
  float fVar2;
  txmTEXTURE *ptVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  float local_184;
  float local_180;
  undefined4 local_17c;
  undefined4 local_16c;
  undefined4 local_168;
  float local_154;
  float local_150;
  undefined4 local_14c;
  undefined4 local_13c;
  undefined4 local_138;
  float local_124;
  float local_120;
  undefined4 local_11c;
  undefined4 local_10c;
  undefined4 local_108;
  float local_f4;
  float local_f0;
  undefined4 local_ec;
  undefined4 local_dc;
  undefined4 local_d8;
  rendCFG local_c4 [184];
  undefined4 local_c;
  undefined4 local_8;
  
  if (((byte)*this & 4) == 0) {
    local_c = 0x2180af;
    if ((*(int *)(this + 4) != -1) &&
       (ptVar3 = *(txmTEXTURE **)(*(int *)(this + 4) * 0x10 + 0xc + DAT_009483b0),
       ptVar3 != (txmTEXTURE *)0x0)) {
      rendCFG::InitMtl1(local_c4,ptVar3);
      iVar4 = *(int *)(this + 4);
      local_16c = 0;
      local_168 = 0;
      local_13c = 0;
      local_138 = 0x3f800000;
      local_10c = 0x3f800000;
      local_108 = 0x3f800000;
      local_dc = 0x3f800000;
      local_d8 = 0;
      fVar5 = ___real_3f800000;
      if (iVar4 != -1) {
        fVar5 = *(float *)(iVar4 * 0x10 + 8 + DAT_009483b0) * *(float *)(this + 0x28);
      }
      fVar6 = ___real_3f800000;
      if (iVar4 != -1) {
        fVar6 = *(float *)(iVar4 * 0x10 + 8 + DAT_009483b0) * *(float *)(this + 0x28);
      }
      if (iVar4 == -1) {
        fVar1 = 0.0;
        fVar2 = ___real_00000000;
      }
      else {
        pfVar7 = (float *)(iVar4 * 0x10 + DAT_009483b0);
        fVar2 = *pfVar7;
        fVar1 = pfVar7[1];
      }
      local_184 = *(float *)(this + 8) - fVar2 * fVar5 * ___real_41e00000;
      local_180 = *(float *)(this + 0xc) - fVar1 * fVar6 * ___real_41e00000;
      local_17c = *(undefined4 *)(param_1 + 0x80);
      local_150 = (___real_3f800000 - fVar1) * fVar6 * ___real_41e00000 + *(float *)(this + 0xc);
      local_14c = *(undefined4 *)(param_1 + 0x80);
      local_124 = (___real_3f800000 - fVar2) * fVar5 * ___real_41e00000 + *(float *)(this + 8);
      local_8 = *(undefined4 *)(this + 0x24);
      local_11c = *(undefined4 *)(param_1 + 0x80);
      local_ec = *(undefined4 *)(param_1 + 0x80);
      local_154 = local_184;
      local_120 = local_150;
      local_f4 = local_124;
      local_f0 = local_180;
      rendDRIVER::RenderPolyCompat
                (rendDrv,param_1,0,0,gssScreenDX,gssScreenDY,4,(rendVERTEX *)&local_184,local_c4);
    }
  }
  return;
}

