
/* from: libgscrypto:nn.cpp
   addr: 005BEF10 */

void __thiscall
CNaturalNumbers::NN_Decode
          (CNaturalNumbers *this,uint *param_1,uint param_2,uchar *param_3,uint param_4)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  
  uVar4 = 0;
  iVar1 = param_4 - 1;
  if (param_2 != 0) {
    while (-1 < iVar1) {
      uVar5 = 0;
      uVar3 = 0;
      do {
        if (0x1f < uVar3) break;
        bVar2 = (byte)uVar3;
        uVar3 = uVar3 + 8;
        uVar5 = uVar5 | (uint)param_3[iVar1] << (bVar2 & 0x1f);
        iVar1 = iVar1 + -1;
      } while (-1 < iVar1);
      uVar3 = uVar4 + 1;
      param_1[uVar4] = uVar5;
      uVar4 = uVar3;
      if (param_2 <= uVar3) {
        return;
      }
    }
    if (uVar4 < param_2) {
      puVar6 = param_1 + uVar4;
      for (iVar1 = param_2 - uVar4; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
    }
  }
  return;
}




/* from: libgscrypto:nn.cpp
   addr: 005BEF80 */

void __thiscall
CNaturalNumbers::NN_Encode
          (CNaturalNumbers *this,uchar *param_1,uint param_2,uint *param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  
  uVar5 = 0;
  iVar2 = param_2 - 1;
  if (param_4 != 0) {
    do {
      if (iVar2 < 0) {
        return;
      }
      uVar6 = 0;
      uVar1 = param_3[uVar5];
      iVar3 = iVar2;
      do {
        iVar2 = iVar3;
        if (0x1f < uVar6) break;
        bVar4 = (byte)uVar6;
        iVar2 = iVar3 + -1;
        uVar6 = uVar6 + 8;
        param_1[iVar3] = (uchar)(uVar1 >> (bVar4 & 0x1f));
        iVar3 = iVar2;
      } while (-1 < iVar2);
      uVar5 = uVar5 + 1;
    } while (uVar5 < param_4);
  }
  for (; -1 < iVar2; iVar2 = iVar2 + -1) {
    param_1[iVar2] = '\0';
  }
  return;
}




/* from: libgscrypto:nn.cpp
   addr: 005BEFE0 */

void __thiscall
CNaturalNumbers::NN_Assign(CNaturalNumbers *this,uint *param_1,uint *param_2,uint param_3)

{
  int iVar1;
  
  if (param_3 != 0) {
    iVar1 = (int)param_2 - (int)param_1;
    do {
      *param_1 = *(uint *)(iVar1 + (int)param_1);
      param_1 = param_1 + 1;
      param_3 = param_3 - 1;
    } while (param_3 != 0);
  }
  return;
}




/* from: libgscrypto:nn.cpp
   addr: 005BF010 */

void __thiscall CNaturalNumbers::NN_AssignZero(CNaturalNumbers *this,uint *param_1,uint param_2)

{
  if (param_2 != 0) {
    for (; param_2 != 0; param_2 = param_2 - 1) {
      *param_1 = 0;
      param_1 = param_1 + 1;
    }
  }
  return;
}




/* from: libgscrypto:nn.cpp
   addr: 005BF030 */

void __thiscall
CNaturalNumbers::NN_Assign2Exp(CNaturalNumbers *this,uint *param_1,uint param_2,uint param_3)

{
  int extraout_EDX;
  
  NN_AssignZero(this,param_1,param_3);
  if (param_2 < (uint)(extraout_EDX << 5)) {
    param_1[param_2 >> 5] = 1 << ((byte)param_2 & 0x1f);
  }
  return;
}




/* from: libgscrypto:nn.cpp
   addr: 005BF070 */

uint __thiscall
CNaturalNumbers::NN_Add
          (CNaturalNumbers *this,uint *param_1,uint *param_2,uint *param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = 0;
  if (param_4 != 0) {
    iVar4 = (int)param_2 - (int)param_3;
    iVar3 = (int)param_1 - (int)param_3;
    do {
      uVar2 = *(int *)(iVar4 + (int)param_3) + uVar1;
      if (uVar2 < uVar1) {
        uVar2 = *param_3;
      }
      else {
        uVar2 = uVar2 + *param_3;
        uVar1 = (uint)(uVar2 < *param_3);
      }
      *(uint *)(iVar3 + (int)param_3) = uVar2;
      param_3 = param_3 + 1;
      param_4 = param_4 - 1;
    } while (param_4 != 0);
  }
  return uVar1;
}




/* from: libgscrypto:nn.cpp
   addr: 005BF0C0 */

uint __thiscall
CNaturalNumbers::NN_Sub
          (CNaturalNumbers *this,uint *param_1,uint *param_2,uint *param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = 0;
  if (param_4 != 0) {
    iVar3 = (int)param_2 - (int)param_3;
    iVar4 = (int)param_1 - (int)param_3;
    do {
      uVar2 = *(int *)(iVar3 + (int)param_3) - uVar1;
      if (-uVar1 - 1 < uVar2) {
        uVar2 = -*param_3 - 1;
      }
      else {
        uVar2 = uVar2 - *param_3;
        uVar1 = (uint)(-*param_3 - 1 < uVar2);
      }
      *(uint *)(iVar4 + (int)param_3) = uVar2;
      param_3 = param_3 + 1;
      param_4 = param_4 - 1;
    } while (param_4 != 0);
  }
  return uVar1;
}




/* from: libgscrypto:nn.cpp
   addr: 005BF120 */

void __thiscall
CNaturalNumbers::NN_Mult
          (CNaturalNumbers *this,uint *param_1,uint *param_2,uint *param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint local_114;
  uint local_108 [66];
  
  NN_AssignZero(this,local_108,param_4 * 2);
  local_114 = NN_Digits(this,param_2,param_4);
  uVar1 = NN_Digits(this,param_3,param_4);
  if (local_114 != 0) {
    puVar3 = local_108;
    puVar4 = local_108 + uVar1;
    do {
      uVar2 = NN_AddDigitMult(this,puVar3,puVar3,
                              *(uint *)((int)puVar3 + ((int)param_2 - (int)local_108)),param_3,uVar1
                             );
      puVar3 = puVar3 + 1;
      *puVar4 = *puVar4 + uVar2;
      puVar4 = puVar4 + 1;
      local_114 = local_114 - 1;
    } while (local_114 != 0);
  }
  NN_Assign(this,param_1,local_108,param_4 * 2);
  return;
}




/* from: libgscrypto:nn.cpp
   addr: 005BF1E0 */

uint __thiscall
CNaturalNumbers::NN_LShift
          (CNaturalNumbers *this,uint *param_1,uint *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar3 = param_3;
  if (param_3 < 0x20) {
    bVar2 = (byte)param_3;
    uVar4 = 0;
    if (param_4 != 0) {
      param_3 = param_4;
      iVar5 = (int)param_2 - (int)param_1;
      do {
        uVar1 = *(uint *)(iVar5 + (int)param_1);
        *param_1 = uVar1 << (bVar2 & 0x1f) | uVar4;
        if (uVar3 == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = uVar1 >> (0x20 - bVar2 & 0x1f);
        }
        param_1 = param_1 + 1;
        param_3 = param_3 - 1;
      } while (param_3 != 0);
    }
    return uVar4;
  }
  return 0;
}




/* from: libgscrypto:nn.cpp
   addr: 005BF250 */

uint __thiscall
CNaturalNumbers::NN_RShift
          (CNaturalNumbers *this,uint *param_1,uint *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  
  uVar3 = param_3;
  if (param_3 < 0x20) {
    bVar2 = (byte)param_3;
    uVar4 = 0;
    if (-1 < (int)(param_4 - 1)) {
      puVar5 = param_1 + (param_4 - 1);
      param_3 = param_4;
      do {
        uVar1 = *(uint *)(((int)param_2 - (int)param_1) + (int)puVar5);
        *puVar5 = uVar1 >> (bVar2 & 0x1f) | uVar4;
        if (uVar3 == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = uVar1 << (0x20 - bVar2 & 0x1f);
        }
        puVar5 = puVar5 + -1;
        param_3 = param_3 - 1;
      } while (param_3 != 0);
    }
    return uVar4;
  }
  return 0;
}




/* from: libgscrypto:nn.cpp
   addr: 005BF2C0 */

void __thiscall
CNaturalNumbers::NN_Div
          (CNaturalNumbers *this,uint *param_1,uint *param_2,uint *param_3,uint param_4,
          uint *param_5,uint param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int extraout_EDX;
  uint *extraout_EDX_00;
  uint *puVar4;
  int iVar5;
  uint *puVar6;
  uint local_1a4;
  uint local_1a0;
  int local_19c;
  int local_198;
  uint local_194 [34];
  uint local_10c [67];
  
  uVar1 = NN_Digits(this,param_5,param_6);
  if (uVar1 != 0) {
    uVar2 = NN_DigitBits(this,param_5[uVar1 - 1]);
    uVar2 = 0x20 - uVar2;
    local_194[0] = uVar2;
    NN_AssignZero(this,local_10c,uVar1);
    uVar3 = NN_LShift(this,local_10c,param_3,uVar2,param_4);
    local_10c[param_4] = uVar3;
    NN_LShift(this,local_194 + 1,param_5,uVar2,uVar1);
    local_1a0 = local_194[uVar1];
    NN_AssignZero(this,param_1,param_4);
    iVar5 = param_4 - uVar1;
    if (-1 < iVar5) {
      puVar4 = local_10c + iVar5;
      puVar6 = local_10c + iVar5 + uVar1;
      local_198 = extraout_EDX - (int)local_10c;
      local_19c = iVar5 + 1;
      do {
        if (local_1a0 == 0xffffffff) {
          local_1a4 = *puVar6;
        }
        else {
          NN_DigitDiv(this,&local_1a4,puVar6 + -1,local_1a0 + 1);
        }
        uVar2 = NN_SubDigitMult(this,puVar4,puVar4,local_1a4,local_194 + 1,uVar1);
        while ((uVar3 = *puVar6, *puVar6 = uVar3 - uVar2, uVar3 - uVar2 != 0 ||
               (iVar5 = NN_Cmp(this,puVar4,local_194 + 1,uVar1), -1 < iVar5))) {
          local_1a4 = local_1a4 + 1;
          uVar2 = NN_Sub(this,puVar4,puVar4,local_194 + 1,uVar1);
        }
        puVar6 = puVar6 + -1;
        *(uint *)(local_198 + (int)puVar4) = local_1a4;
        puVar4 = puVar4 + -1;
        local_19c = local_19c + -1;
      } while (local_19c != 0);
      local_19c = 0;
      uVar2 = local_194[0];
    }
    NN_AssignZero(this,param_2,param_6);
    NN_RShift(this,extraout_EDX_00,local_10c,uVar2,uVar1);
    return;
  }
  return;
}




/* from: libgscrypto:nn.cpp
   addr: 005BF460 */

void __thiscall
CNaturalNumbers::NN_Mod
          (CNaturalNumbers *this,uint *param_1,uint *param_2,uint param_3,uint *param_4,uint param_5
          )

{
  uint local_108 [66];
  
  NN_Div(this,local_108,param_1,param_2,param_3,param_4,param_5);
  return;
}




/* from: libgscrypto:nn.cpp
   addr: 005BF4A0 */

void __thiscall
CNaturalNumbers::NN_ModMult
          (CNaturalNumbers *this,uint *param_1,uint *param_2,uint *param_3,uint *param_4,
          uint param_5)

{
  uint local_108 [66];
  
  NN_Mult(this,local_108,param_2,param_3,param_5);
  NN_Mod(this,param_1,local_108,param_5 * 2,param_4,param_5);
  return;
}




/* from: libgscrypto:nn.cpp
   addr: 005BF500 */

void __thiscall
CNaturalNumbers::NN_ModExp
          (CNaturalNumbers *this,uint *param_1,uint *param_2,uint *param_3,uint param_4,
          uint *param_5,uint param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int local_21c;
  uint local_210 [33];
  uint local_18c [33];
  uint local_108 [33];
  uint local_84 [33];
  
  NN_Assign(this,local_18c,param_2,param_6);
  NN_ModMult(this,local_108,local_18c,param_2,param_5,param_6);
  NN_ModMult(this,local_84,local_108,param_2,param_5,param_6);
  NN_AssignZero(this,local_210,param_6);
  local_210[0] = 1;
  uVar1 = NN_Digits(this,param_3,param_4);
  iVar3 = uVar1 - 1;
  do {
    if (iVar3 < 0) {
      NN_Assign(this,param_1,local_210,param_6);
      return;
    }
    uVar4 = param_3[iVar3];
    iVar2 = 0x20;
    if ((iVar3 == uVar1 - 1) && ((uVar4 & 0xc0000000) == 0)) {
      do {
        uVar4 = uVar4 << 2;
        iVar2 = iVar2 + -2;
      } while ((uVar4 & 0xc0000000) == 0);
      if (iVar2 != 0) goto LAB_005bf5d2;
    }
    else {
LAB_005bf5d2:
      local_21c = (iVar2 - 1U >> 1) + 1;
      do {
        NN_ModMult(this,local_210,local_210,local_210,param_5,param_6);
        NN_ModMult(this,local_210,local_210,local_210,param_5,param_6);
        if (uVar4 >> 0x1e != 0) {
          NN_ModMult(this,local_210,local_210,local_210 + (uVar4 >> 0x1e) * 0x21,param_5,param_6);
        }
        uVar4 = uVar4 << 2;
        local_21c = local_21c + -1;
      } while (local_21c != 0);
    }
    iVar3 = iVar3 + -1;
  } while( true );
}




/* from: libgscrypto:nn.cpp
   addr: 005BF680 */

void __thiscall
CNaturalNumbers::NN_ModInv
          (CNaturalNumbers *this,uint *param_1,uint *param_2,uint *param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint local_4a4 [33];
  uint local_420 [33];
  uint local_39c [33];
  uint local_318 [33];
  uint local_294 [33];
  uint local_210 [33];
  uint local_18c [33];
  uint local_108 [66];
  
  NN_AssignZero(this,local_4a4,param_4);
  local_4a4[0] = 1;
  NN_AssignZero(this,local_39c,param_4);
  NN_Assign(this,local_318,param_2,param_4);
  NN_Assign(this,local_420,param_3,param_4);
  iVar2 = NN_Zero(this,local_420,param_4);
  iVar1 = 1;
  if (iVar2 == 0) {
    do {
      iVar3 = iVar1;
      NN_Div(this,local_18c,local_210,local_318,param_4,local_420,param_4);
      NN_Mult(this,local_108,local_18c,local_39c,param_4);
      NN_Add(this,local_294,local_4a4,local_108,param_4);
      NN_Assign(this,local_4a4,local_39c,param_4);
      NN_Assign(this,local_39c,local_294,param_4);
      NN_Assign(this,local_318,local_420,param_4);
      NN_Assign(this,local_420,local_210,param_4);
      iVar2 = NN_Zero(this,local_420,param_4);
      iVar1 = -iVar3;
    } while (iVar2 == 0);
    if (0 < iVar3) {
      NN_Sub(this,param_1,param_3,local_4a4,param_4);
      return;
    }
  }
  NN_Assign(this,param_1,local_4a4,param_4);
  return;
}




/* from: libgscrypto:nn.cpp
   addr: 005BF830 */

void __thiscall
CNaturalNumbers::NN_Gcd
          (CNaturalNumbers *this,uint *param_1,uint *param_2,uint *param_3,uint param_4)

{
  int iVar1;
  uint local_18c [33];
  uint local_108 [33];
  uint local_84 [33];
  
  NN_Assign(this,local_108,param_2,param_4);
  NN_Assign(this,local_18c,param_3,param_4);
  iVar1 = NN_Zero(this,local_18c,param_4);
  while (iVar1 == 0) {
    NN_Mod(this,local_84,local_108,param_4,local_18c,param_4);
    NN_Assign(this,local_108,local_18c,param_4);
    NN_Assign(this,local_18c,local_84,param_4);
    iVar1 = NN_Zero(this,local_18c,param_4);
  }
  NN_Assign(this,param_1,local_108,param_4);
  return;
}




/* from: libgscrypto:nn.cpp
   addr: 005BF900 */

int __thiscall
CNaturalNumbers::NN_Cmp(CNaturalNumbers *this,uint *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  
  iVar4 = param_3 - 1;
  if (-1 < iVar4) {
    puVar3 = param_2 + iVar4;
    do {
      uVar1 = *(uint *)(((int)param_1 - (int)param_2) + (int)puVar3);
      uVar2 = *puVar3;
      if (uVar1 >= uVar2 && uVar1 != uVar2) {
        return 1;
      }
      if (uVar1 < uVar2) {
        return -1;
      }
      iVar4 = iVar4 + -1;
      puVar3 = puVar3 + -1;
    } while (-1 < iVar4);
  }
  return 0;
}




/* from: libgscrypto:nn.cpp
   addr: 005BF950 */

int __thiscall CNaturalNumbers::NN_Zero(CNaturalNumbers *this,uint *param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 != 0) {
    do {
      if (param_1[uVar1] != 0) {
        return 0;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < param_2);
  }
  return 1;
}




/* from: libgscrypto:nn.cpp
   addr: 005BF980 */

uint __thiscall CNaturalNumbers::NN_Digits(CNaturalNumbers *this,uint *param_1,uint param_2)

{
  int iVar1;
  
  for (iVar1 = param_2 - 1; (-1 < iVar1 && (param_1[iVar1] == 0)); iVar1 = iVar1 + -1) {
  }
  return iVar1 + 1;
}




/* from: libgscrypto:nn.cpp
   addr: 005BF9A0 */

uint __thiscall
CNaturalNumbers::NN_AddDigitMult
          (CNaturalNumbers *this,uint *param_1,uint *param_2,uint param_3,uint *param_4,uint param_5
          )

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  uint local_8;
  int local_4;
  
  if (param_3 != 0) {
    uVar5 = 0;
    if (param_5 != 0) {
      iVar3 = (int)param_2 - (int)param_1;
      do {
        piVar4 = (int *)(iVar3 + (int)param_1);
        NN_DigitMult(this,&local_8,param_3,*(uint *)((int)piVar4 + ((int)param_4 - (int)param_2)));
        uVar2 = *piVar4 + uVar5;
        *param_1 = uVar2;
        uVar1 = *param_1;
        uVar5 = (uint)(uVar2 < uVar5);
        *param_1 = uVar1 + local_8;
        if (uVar1 + local_8 < local_8) {
          uVar5 = uVar5 + 1;
        }
        uVar5 = uVar5 + local_4;
        param_1 = param_1 + 1;
        param_5 = param_5 - 1;
      } while (param_5 != 0);
    }
    return uVar5;
  }
  return 0;
}




/* from: libgscrypto:nn.cpp
   addr: 005BFA40 */

uint __thiscall
CNaturalNumbers::NN_SubDigitMult
          (CNaturalNumbers *this,uint *param_1,uint *param_2,uint param_3,uint *param_4,uint param_5
          )

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  uint local_8;
  int local_4;
  
  if (param_3 != 0) {
    uVar5 = 0;
    if (param_5 != 0) {
      iVar3 = (int)param_2 - (int)param_1;
      do {
        piVar4 = (int *)(iVar3 + (int)param_1);
        NN_DigitMult(this,&local_8,param_3,*(uint *)((int)piVar4 + ((int)param_4 - (int)param_2)));
        uVar2 = *piVar4 - uVar5;
        *param_1 = uVar2;
        uVar1 = *param_1;
        uVar5 = (uint)(-uVar5 - 1 < uVar2);
        *param_1 = uVar1 - local_8;
        if (-local_8 - 1 < uVar1 - local_8) {
          uVar5 = uVar5 + 1;
        }
        uVar5 = uVar5 + local_4;
        param_1 = param_1 + 1;
        param_5 = param_5 - 1;
      } while (param_5 != 0);
    }
    return uVar5;
  }
  return 0;
}




/* from: libgscrypto:nn.cpp
   addr: 005BFAF0 */

uint __thiscall CNaturalNumbers::NN_DigitBits(CNaturalNumbers *this,uint param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (param_1 == 0) {
      return uVar1;
    }
    uVar1 = uVar1 + 1;
    param_1 = param_1 >> 1;
  } while (uVar1 < 0x20);
  return uVar1;
}




/* from: libgscrypto:nn.cpp
   addr: 005BFB10 */

void __thiscall
CNaturalNumbers::NN_DigitMult(CNaturalNumbers *this,uint *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = (param_2 & 0xffff) * (param_3 & 0xffff);
  uVar2 = (param_3 & 0xffff) * (param_2 >> 0x10);
  uVar4 = (param_3 >> 0x10) * (param_2 >> 0x10);
  uVar1 = (param_2 & 0xffff) * (param_3 >> 0x10) + uVar2;
  *param_1 = uVar3;
  param_1[1] = uVar4;
  if (uVar1 < uVar2) {
    param_1[1] = uVar4 + 0x10000;
  }
  uVar3 = uVar3 + uVar1 * 0x10000;
  *param_1 = uVar3;
  if (uVar3 < uVar1 * 0x10000) {
    param_1[1] = param_1[1] + 1;
  }
  param_1[1] = param_1[1] + (uVar1 >> 0x10);
  return;
}




/* from: libgscrypto:nn.cpp
   addr: 005BFB90 */

void __thiscall
CNaturalNumbers::NN_DigitDiv(CNaturalNumbers *this,uint *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  short sVar6;
  uint uVar7;
  
  uVar3 = param_2[1];
  uVar1 = *param_2;
  uVar7 = param_3 >> 0x10;
  sVar6 = (short)(param_3 >> 0x10);
  if (sVar6 == -1) {
    param_2 = (uint *)(uVar3 >> 0x10);
  }
  else {
    param_2 = (uint *)(uVar3 / (uVar7 + 1));
  }
  uVar4 = param_3 & 0xffff;
  uVar2 = uVar4 * ((uint)param_2 & 0xffff);
  uVar1 = uVar1 + uVar2 * -0x10000;
  if (uVar2 * -0x10000 - 1 < uVar1) {
    uVar3 = uVar3 - 1;
  }
  uVar3 = uVar3 - ((uVar2 >> 0x10) + ((uint)param_2 & 0xffff) * uVar7);
  while ((uVar7 < uVar3 || ((uVar3 == uVar7 && (uVar4 << 0x10 <= uVar1))))) {
    uVar1 = uVar1 + uVar4 * -0x10000;
    if (uVar4 * -0x10000 - 1 < uVar1) {
      uVar3 = uVar3 - 1;
    }
    uVar3 = uVar3 - uVar7;
    param_2 = (uint *)((int)param_2 + 1);
  }
  uVar2 = uVar3;
  if (sVar6 != -1) {
    uVar2 = ((uVar1 >> 0x10) + uVar3 * 0x10000) / (uVar7 + 1);
  }
  iVar5 = uVar4 * (uVar2 & 0xffff);
  uVar7 = (uVar2 & 0xffff) * uVar7;
  uVar1 = uVar1 - iVar5;
  if (-iVar5 - 1U < uVar1) {
    uVar3 = uVar3 - 1;
  }
  uVar1 = uVar1 + uVar7 * -0x10000;
  if (uVar7 * -0x10000 - 1 < uVar1) {
    uVar3 = uVar3 - 1;
  }
  iVar5 = uVar3 - (uVar7 >> 0x10);
  while ((iVar5 != 0 || ((iVar5 == 0 && (param_3 <= uVar1))))) {
    uVar1 = uVar1 - param_3;
    if (-param_3 - 1 < uVar1) {
      iVar5 = iVar5 + -1;
    }
    uVar2 = uVar2 + 1;
  }
  *param_1 = (int)param_2 * 0x10000 + (uVar2 & 0xffff);
  return;
}

