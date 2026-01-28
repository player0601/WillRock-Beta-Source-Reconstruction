
/* from: libgscrypto:gsxor.cpp
   addr: 005BD9E0 */

void __thiscall CGSXor::GSXor_Encrypt(CGSXor *this,uchar *param_1,int param_2)

{
  byte *pbVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  short *psVar10;
  int iVar11;
  int local_4;
  
  XorBuffer(this,param_1,param_2);
  iVar2 = ftol();
  if (iVar2 * iVar2 < param_2) {
    iVar2 = iVar2 + 1;
  }
  uVar7 = iVar2 * iVar2 * 2;
  psVar3 = (short *)ExtAlloc_Malloc_4(uVar7);
  psVar10 = psVar3;
  for (uVar6 = uVar7 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    psVar10[0] = -1;
    psVar10[1] = -1;
    psVar10 = psVar10 + 2;
  }
  iVar11 = 0;
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined1 *)psVar10 = 0xff;
    psVar10 = (short *)((int)psVar10 + 1);
  }
  iVar4 = 0;
  iVar8 = 0;
  if (0 < param_2) {
    do {
      if (iVar8 < iVar2) {
        iVar5 = iVar4;
        iVar9 = iVar8;
        if (iVar4 < 0) {
          iVar9 = 0;
          iVar5 = iVar8;
        }
      }
      else {
        iVar5 = iVar2 + -1;
        iVar9 = iVar4 + 2;
      }
      pbVar1 = param_1 + iVar11;
      iVar4 = iVar5 + -1;
      iVar8 = iVar9 + 1;
      iVar11 = iVar11 + 1;
      psVar3[iVar5 * iVar2 + iVar9] = (ushort)*pbVar1;
    } while (iVar11 < param_2);
  }
  iVar4 = 0;
  psVar10 = psVar3;
  iVar11 = iVar2;
  local_4 = iVar2;
  param_2 = (int)psVar3;
  if (0 < iVar2) {
    do {
      do {
        if (*psVar10 != -1) {
          param_1[iVar4] = (uchar)*psVar10;
          iVar4 = iVar4 + 1;
        }
        iVar11 = iVar11 + -1;
        psVar10 = psVar10 + 1;
      } while (iVar11 != 0);
      psVar10 = (short *)(param_2 + iVar2 * 2);
      local_4 = local_4 + -1;
      iVar11 = iVar2;
      param_2 = (int)psVar10;
    } while (local_4 != 0);
  }
  ExtAlloc_Free_4(psVar3);
  return;
}




/* from: libgscrypto:gsxor.cpp
   addr: 005BDAC0 */

void __thiscall CGSXor::GSXor_Decrypt(CGSXor *this,uchar *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uchar *puVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  float10 extraout_ST0;
  int local_c;
  int local_8;
  
  iVar1 = ftol();
  if ((float10)iVar1 < extraout_ST0) {
    iVar1 = iVar1 + 1;
  }
  uVar9 = iVar1 * iVar1;
  puVar2 = (undefined4 *)ExtAlloc_Malloc_4(uVar9);
  puVar10 = puVar2;
  for (uVar5 = uVar9 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined1 *)puVar10 = 0;
    puVar10 = (undefined4 *)((int)puVar10 + 1);
  }
  iVar3 = 0;
  iVar6 = 0;
  iVar11 = param_2;
  if (0 < param_2) {
    do {
      if (iVar6 < iVar1) {
        iVar4 = iVar3;
        iVar8 = iVar6;
        if (iVar3 < 0) {
          iVar8 = 0;
          iVar4 = iVar6;
        }
      }
      else {
        iVar4 = iVar1 + -1;
        iVar8 = iVar3 + 2;
      }
      iVar3 = iVar4 + -1;
      iVar6 = iVar8 + 1;
      iVar11 = iVar11 + -1;
      *(undefined1 *)(iVar4 * iVar1 + iVar8 + (int)puVar2) = 1;
    } while (iVar11 != 0);
  }
  iVar11 = 0;
  local_c = 0;
  if (0 < param_2) {
    local_8 = 0;
    do {
      if (iVar1 <= iVar11) {
        local_8 = local_8 + iVar1;
        iVar11 = 0;
      }
      puVar7 = (uchar *)(local_8 + iVar11 + (int)puVar2);
      if (*puVar7 != '\0') {
        *puVar7 = param_1[local_c];
        local_c = local_c + 1;
      }
      iVar11 = iVar11 + 1;
    } while (local_c < param_2);
  }
  iVar3 = 0;
  iVar6 = 0;
  iVar11 = 0;
  if (0 < param_2) {
    do {
      if (iVar6 < iVar1) {
        iVar4 = iVar3;
        iVar8 = iVar6;
        if (iVar3 < 0) {
          iVar8 = 0;
          iVar4 = iVar6;
        }
      }
      else {
        iVar4 = iVar1 + -1;
        iVar8 = iVar3 + 2;
      }
      iVar3 = iVar4 + -1;
      iVar6 = iVar8 + 1;
      iVar12 = iVar11 + 1;
      param_1[iVar11] = *(uchar *)(iVar4 * iVar1 + iVar8 + (int)puVar2);
      iVar11 = iVar12;
    } while (iVar12 < param_2);
  }
  XorBuffer(this,param_1,param_2);
  ExtAlloc_Free_4(puVar2);
  return;
}




/* from: libgscrypto:gsxor.cpp
   addr: 005BDBF0 */

void __thiscall CGSXor::XorBuffer(CGSXor *this,uchar *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      param_1[iVar1] = param_1[iVar1] ^ (char)iVar1 + 0x89U;
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return;
}

