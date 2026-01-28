
/* from: libgscrypto:rsa.cpp
   addr: 005BDC20 */

void __thiscall RSA::RSA(RSA *this)

{
  int in_stack_00000004;
  
  *(undefined ***)this = &_vftable_;
  if (in_stack_00000004 != 0) {
    *(undefined1 **)(this + 4) = &_vbtable_;
  }
  return;
}




/* from: libgscrypto:rsa.cpp
   addr: 005BDC50
   addr: 005BDC50 */

void * __thiscall RSA::_scalar_deleting_destructor_(RSA *this,uint param_1)

{
  ~RSA(this);
  if ((param_1 & 1) != 0) {
    ExtAlloc_Free_4(this);
  }
  return this;
}




/* from: libgscrypto:rsa.cpp
   addr: 005BDC80 */

uchar __thiscall
RSA::GenerateKeyPair
          (RSA *this,RSA_PUBLIC_KEY *param_1,RSA_PRIVATE_KEY *param_2,RSA_PROTO_KEY *param_3,
          RANDOM_STRUCT *param_4)

{
  CNaturalNumbers *this_00;
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  RSA_PUBLIC_KEY *pRVar4;
  uint uVar5;
  RSA_PRIVATE_KEY *pRVar6;
  uint local_630 [33];
  uint local_5ac [33];
  uint local_528 [33];
  uint local_4a4 [33];
  uint local_420 [33];
  uint local_39c [33];
  uint local_318 [33];
  uint local_294 [33];
  uint local_210 [33];
  uint local_18c [33];
  uint local_108 [33];
  uint local_84 [33];
  
  uVar3 = *(uint *)param_3;
  if ((uVar3 < 0x1fc) || (0x400 < uVar3)) {
    iVar2 = 0;
  }
  else {
    uVar5 = uVar3 + 0x1f >> 5;
    uVar3 = uVar5 + 1 >> 1;
    iVar2 = GenerateDigits(this,local_630,uVar3,param_4);
    if (iVar2 == 0) {
      iVar2 = GenerateDigits(this,local_5ac,uVar3,param_4);
      if (iVar2 == 0) {
        this_00 = (CNaturalNumbers *)(this + 8);
        CNaturalNumbers::NN_AssignZero(this_00,local_4a4,uVar5);
        local_4a4[0] = (-(uint)(*(int *)(param_3 + 4) != 0) & 0xfffe) + 3;
        FindRSAPrime(this,local_630,*(int *)param_3 + 1U >> 1,local_630,uVar3,local_4a4,1);
        FindRSAPrime(this,local_5ac,*(uint *)param_3 >> 1,local_5ac,uVar3,local_4a4,1);
        iVar2 = CNaturalNumbers::NN_Cmp(this_00,local_630,local_5ac,uVar3);
        if (iVar2 < 0) {
          CNaturalNumbers::NN_Assign(this_00,local_528,local_630,uVar3);
          CNaturalNumbers::NN_Assign(this_00,local_630,local_5ac,uVar3);
          CNaturalNumbers::NN_Assign(this_00,local_5ac,local_528,uVar3);
        }
        CNaturalNumbers::NN_Mult(this_00,local_294,local_630,local_5ac,uVar3);
        CNaturalNumbers::NN_ModInv(this_00,local_84,local_5ac,local_630,uVar3);
        CNaturalNumbers::NN_AssignZero(this_00,local_528,uVar5);
        local_528[0] = 1;
        CNaturalNumbers::NN_Sub(this_00,local_39c,local_630,local_528,uVar3);
        CNaturalNumbers::NN_Sub(this_00,local_318,local_5ac,local_528,uVar3);
        CNaturalNumbers::NN_Mult(this_00,local_108,local_39c,local_318,uVar3);
        CNaturalNumbers::NN_ModInv(this_00,local_420,local_4a4,local_108,uVar5);
        CNaturalNumbers::NN_Mod(this_00,local_210,local_420,uVar5,local_39c,uVar3);
        CNaturalNumbers::NN_Mod(this_00,local_18c,local_420,uVar5,local_318,uVar3);
        uVar1 = *(undefined4 *)param_3;
        *(undefined4 *)param_2 = uVar1;
        *(undefined4 *)param_1 = uVar1;
        CNaturalNumbers::NN_Encode(this_00,(uchar *)(param_1 + 4),0x80,local_294,uVar5);
        CNaturalNumbers::NN_Encode(this_00,(uchar *)(param_1 + 0x84),0x80,local_4a4,1);
        pRVar4 = param_1 + 4;
        pRVar6 = param_2;
        for (iVar2 = 0x20; pRVar6 = pRVar6 + 4, iVar2 != 0; iVar2 = iVar2 + -1) {
          *(undefined4 *)pRVar6 = *(undefined4 *)pRVar4;
          pRVar4 = pRVar4 + 4;
        }
        pRVar4 = param_1 + 0x84;
        pRVar6 = param_2 + 0x84;
        for (iVar2 = 0x20; iVar2 != 0; iVar2 = iVar2 + -1) {
          *(undefined4 *)pRVar6 = *(undefined4 *)pRVar4;
          pRVar4 = pRVar4 + 4;
          pRVar6 = pRVar6 + 4;
        }
        CNaturalNumbers::NN_Encode(this_00,(uchar *)(param_2 + 0x104),0x80,local_420,uVar5);
        CNaturalNumbers::NN_Encode(this_00,(uchar *)(param_2 + 0x184),0x40,local_630,uVar3);
        CNaturalNumbers::NN_Encode(this_00,(uchar *)(param_2 + 0x1c4),0x40,local_5ac,uVar3);
        CNaturalNumbers::NN_Encode(this_00,(uchar *)(param_2 + 0x204),0x40,local_210,uVar3);
        CNaturalNumbers::NN_Encode(this_00,(uchar *)(param_2 + 0x244),0x40,local_18c,uVar3);
        CNaturalNumbers::NN_Encode(this_00,(uchar *)(param_2 + 0x284),0x40,local_84,uVar3);
        return '\x01';
      }
    }
  }
  return (uchar)iVar2;
}




/* from: libgscrypto:rsa.cpp
   addr: 005BE030 */

uchar __thiscall
RSA::PublicEncrypt(RSA *this,uchar *param_1,uint param_2,uchar *param_3,uint *param_4,
                  RSA_PUBLIC_KEY *param_5,RANDOM_STRUCT *param_6)

{
  uchar uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uchar *puVar5;
  uchar local_81 [129];
  
  uVar3 = *(int *)param_5 + 7U >> 3;
  if ((param_3 == (uchar *)0x0) || (uVar3 != *param_4)) {
    *param_4 = uVar3;
  }
  else if (param_2 + 0xb <= uVar3) {
    uVar4 = 2;
    local_81[1] = 0;
    uVar2 = (uVar3 - param_2) - 1;
    local_81[2] = 2;
    if (2 < uVar2) {
      do {
        do {
          GenerateBytes(this,local_81,1,param_6);
        } while (local_81[0] == '\0');
        local_81[uVar4 + 1] = local_81[0];
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar2);
    }
    local_81[uVar4 + 1] = '\0';
    puVar5 = local_81 + uVar4 + 2;
    for (uVar2 = param_2 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined4 *)puVar5 = *(undefined4 *)param_1;
      param_1 = param_1 + 4;
      puVar5 = puVar5 + 4;
    }
    for (uVar2 = param_2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar5 = *param_1;
      param_1 = param_1 + 1;
      puVar5 = puVar5 + 1;
    }
    uVar1 = RSAPublicBlock(this,param_3,param_4,local_81 + 1,uVar3,param_5);
    return uVar1;
  }
  return '\0';
}




/* from: libgscrypto:rsa.cpp
   addr: 005BE130 */

uchar __thiscall
RSA::PrivateEncrypt(RSA *this,uchar *param_1,uint param_2,uchar *param_3,uint *param_4,
                   RSA_PRIVATE_KEY *param_5)

{
  uchar uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  uchar *puVar7;
  uchar local_80 [2];
  undefined4 local_7e [31];
  
  uVar5 = *(int *)param_5 + 7U >> 3;
  if ((param_3 == (uchar *)0x0) || (uVar5 != *param_4)) {
    *param_4 = uVar5;
  }
  else if (param_2 + 0xb <= uVar5) {
    iVar2 = 2;
    iVar3 = uVar5 - param_2;
    local_80[0] = '\0';
    local_80[1] = 1;
    if (2 < iVar3 - 1U) {
      puVar6 = local_7e;
      for (uVar4 = iVar3 - 3U >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar6 = 0xffffffff;
        puVar6 = puVar6 + 1;
      }
      for (uVar4 = iVar3 - 3U & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar6 = 0xff;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
      iVar2 = iVar3 + -1;
    }
    local_80[iVar2] = '\0';
    puVar7 = local_80 + iVar2 + 1;
    for (uVar4 = param_2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)puVar7 = *(undefined4 *)param_1;
      param_1 = param_1 + 4;
      puVar7 = puVar7 + 4;
    }
    for (uVar4 = param_2 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar7 = *param_1;
      param_1 = param_1 + 1;
      puVar7 = puVar7 + 1;
    }
    uVar1 = RSAPrivateBlock(this,param_3,param_4,local_80,uVar5,param_5);
    return uVar1;
  }
  return '\0';
}




/* from: libgscrypto:rsa.cpp
   addr: 005BE220 */

uchar __thiscall
RSA::PublicDecrypt(RSA *this,uchar *param_1,uint param_2,uchar *param_3,uint *param_4,
                  RSA_PUBLIC_KEY *param_5)

{
  uchar uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uchar *puVar5;
  uint local_84;
  uchar local_80 [128];
  
  uVar4 = *(int *)param_5 + 7U >> 3;
  if ((param_3 == (uchar *)0x0) || (uVar4 != *param_4)) {
    *param_4 = uVar4;
  }
  else if ((((param_2 <= uVar4) &&
            (uVar1 = RSAPublicBlock(this,local_80,&local_84,param_1,param_2,param_5), uVar1 != '\0')
            ) && (local_84 == uVar4)) && ((local_80[0] == '\0' && (local_80[1] == '\x01')))) {
    uVar2 = 2;
    if (2 < uVar4 - 1) {
      do {
        if (local_80[uVar2] != 0xff) break;
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar4 - 1);
    }
    if (local_80[uVar2] == '\0') {
      uVar3 = uVar4 - (uVar2 + 1);
      *param_4 = uVar3;
      if (uVar3 + 0xb <= uVar4) {
        puVar5 = local_80 + uVar2 + 1;
        for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined4 *)param_3 = *(undefined4 *)puVar5;
          puVar5 = puVar5 + 4;
          param_3 = param_3 + 4;
        }
        for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
          *param_3 = *puVar5;
          puVar5 = puVar5 + 1;
          param_3 = param_3 + 1;
        }
        return '\x01';
      }
    }
  }
  return '\0';
}




/* from: libgscrypto:rsa.cpp
   addr: 005BE300 */

uchar __thiscall
RSA::PrivateDecrypt(RSA *this,uchar *param_1,uint param_2,uchar *param_3,uint *param_4,
                   RSA_PRIVATE_KEY *param_5)

{
  uchar uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uchar *puVar5;
  uint local_84;
  uchar local_80 [128];
  
  uVar4 = *(int *)param_5 + 7U >> 3;
  if ((param_3 == (uchar *)0x0) || (uVar4 != *param_4)) {
    *param_4 = uVar4;
  }
  else if (param_2 <= uVar4) {
    uVar1 = RSAPrivateBlock(this,local_80,&local_84,param_1,param_2,param_5);
    if ((((uVar1 != '\0') && (local_84 == uVar4)) && (local_80[0] == '\0')) &&
       (uVar2 = 2, local_80[1] == '\x02')) {
      if (2 < uVar4 - 1) {
        do {
          if (local_80[uVar2] == '\0') break;
          uVar2 = uVar2 + 1;
        } while (uVar2 < uVar4 - 1);
      }
      if (uVar2 + 1 < uVar4) {
        uVar3 = uVar4 - (uVar2 + 1);
        *param_4 = uVar3;
        if (uVar3 + 0xb <= uVar4) {
          puVar5 = local_80 + uVar2 + 1;
          for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
            *(undefined4 *)param_3 = *(undefined4 *)puVar5;
            puVar5 = puVar5 + 4;
            param_3 = param_3 + 4;
          }
          for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
            *param_3 = *puVar5;
            puVar5 = puVar5 + 1;
            param_3 = param_3 + 1;
          }
          return '\x01';
        }
      }
    }
  }
  return '\0';
}




/* from: libgscrypto:rsa.cpp
   addr: 005BE3D0 */

int __thiscall RSA::GenerateDigits(RSA *this,uint *param_1,uint param_2,RANDOM_STRUCT *param_3)

{
  int iVar1;
  uchar local_80 [128];
  
  iVar1 = GenerateBytes(this,local_80,param_2 * 4,param_3);
  if (iVar1 == 0) {
    CNaturalNumbers::NN_Decode((CNaturalNumbers *)(this + 8),param_1,param_2,local_80,param_2 * 4);
    iVar1 = 0;
  }
  return iVar1;
}




/* from: libgscrypto:rsa.cpp
   addr: 005BE430 */

void __thiscall
RSA::FindRSAPrime(RSA *this,uint *param_1,uint param_2,uint *param_3,uint param_4,uint *param_5,
                 uint param_6)

{
  CNaturalNumbers *this_00;
  int iVar1;
  byte local_210 [132];
  uint local_18c [33];
  uint local_108 [33];
  uint local_84 [33];
  
  this_00 = (CNaturalNumbers *)(this + 8);
  CNaturalNumbers::NN_Assign2Exp(this_00,local_84,param_2 - 2,param_4);
  CNaturalNumbers::NN_Assign2Exp(this_00,local_18c,param_2 - 1,param_4);
  CNaturalNumbers::NN_Add(this_00,local_18c,local_18c,local_84,param_4);
  CNaturalNumbers::NN_Mod(this_00,(uint *)local_210,param_3,param_4,local_84,param_4);
  CNaturalNumbers::NN_Add(this_00,(uint *)local_210,(uint *)local_210,local_18c,param_4);
  if ((param_4 == 0) || ((local_210[0] & 1) == 0)) {
    CNaturalNumbers::NN_AssignZero(this_00,local_108,param_4);
    local_108[0] = 1;
    CNaturalNumbers::NN_Add(this_00,(uint *)local_210,(uint *)local_210,local_108,param_4);
  }
  CNaturalNumbers::NN_AssignZero(this_00,local_108,param_4);
  local_108[0] = 2;
  CNaturalNumbers::NN_Sub(this_00,local_18c,local_18c,local_108,param_4);
  CNaturalNumbers::NN_Add(this_00,local_18c,local_18c,local_84,param_4);
  iVar1 = RSAPrime(this,(uint *)local_210,param_4,param_5,param_6);
  while (iVar1 == 0) {
    iVar1 = CNaturalNumbers::NN_Cmp(this_00,(uint *)local_210,local_18c,param_4);
    if (0 < iVar1) {
      CNaturalNumbers::NN_Sub(this_00,(uint *)local_210,(uint *)local_210,local_84,param_4);
    }
    CNaturalNumbers::NN_Add(this_00,(uint *)local_210,(uint *)local_210,local_108,param_4);
    iVar1 = RSAPrime(this,(uint *)local_210,param_4,param_5,param_6);
  }
  CNaturalNumbers::NN_Assign(this_00,param_1,(uint *)local_210,param_4);
  return;
}




/* from: libgscrypto:rsa.cpp
   addr: 005BE610 */

int __thiscall RSA::RSAPrime(RSA *this,uint *param_1,uint param_2,uint *param_3,uint param_4)

{
  int iVar1;
  uint local_108 [33];
  uint local_84 [33];
  
  CNaturalNumbers::NN_AssignZero((CNaturalNumbers *)(this + 8),local_108,param_2);
  local_108[0] = 1;
  CNaturalNumbers::NN_Sub((CNaturalNumbers *)(this + 8),local_84,param_1,local_108,param_2);
  iVar1 = ProbablePrime(this,param_1,param_2);
  if (iVar1 != 0) {
    iVar1 = RelativelyPrime(this,local_84,param_2,param_3,param_4);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}




/* from: libgscrypto:rsa.cpp
   addr: 005BE6B0 */

int __thiscall RSA::ProbablePrime(RSA *this,uint *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = SmallFactor(this,param_1,param_2);
  if (iVar1 == 0) {
    iVar1 = FermatTest(this,param_1,param_2);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}




/* from: libgscrypto:rsa.cpp
   addr: 005BE6F0 */

int __thiscall RSA::SmallFactor(RSA *this,uint *param_1,uint param_2)

{
  CNaturalNumbers *this_00;
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = param_2;
  this_00 = (CNaturalNumbers *)(this + 8);
  uVar3 = 0;
  do {
    CNaturalNumbers::NN_AssignZero(this_00,&param_2,1);
    param_2 = *(uint *)((int)&DAT_006016b0 + uVar3);
    CNaturalNumbers::NN_Mod(this_00,&param_2,param_1,uVar1,&param_2,1);
    iVar2 = CNaturalNumbers::NN_Zero(this_00,&param_2,1);
    if (iVar2 != 0) {
      return 1;
    }
    uVar3 = uVar3 + 4;
  } while (uVar3 < 0x10);
  return 0;
}




/* from: libgscrypto:rsa.cpp
   addr: 005BE760 */

int __thiscall RSA::FermatTest(RSA *this,uint *param_1,uint param_2)

{
  CNaturalNumbers *this_00;
  int iVar1;
  uint local_108 [33];
  uint local_84 [33];
  
  this_00 = (CNaturalNumbers *)(this + 8);
  CNaturalNumbers::NN_AssignZero(this_00,local_108,param_2);
  local_108[0] = 2;
  CNaturalNumbers::NN_ModExp(this_00,local_84,local_108,param_1,param_2,param_1,param_2);
  iVar1 = CNaturalNumbers::NN_Cmp(this_00,local_108,local_84,param_2);
  return (uint)(iVar1 == 0);
}




/* from: libgscrypto:rsa.cpp
   addr: 005BE7D0 */

int __thiscall RSA::RelativelyPrime(RSA *this,uint *param_1,uint param_2,uint *param_3,uint param_4)

{
  CNaturalNumbers *this_00;
  int iVar1;
  uint local_108 [33];
  uint local_84 [33];
  
  this_00 = (CNaturalNumbers *)(this + 8);
  CNaturalNumbers::NN_AssignZero(this_00,local_108,param_2);
  CNaturalNumbers::NN_Assign(this_00,local_108,param_3,param_4);
  CNaturalNumbers::NN_Gcd(this_00,local_108,param_1,local_108,param_2);
  CNaturalNumbers::NN_AssignZero(this_00,local_84,param_2);
  local_84[0] = 1;
  iVar1 = CNaturalNumbers::NN_Cmp(this_00,local_108,local_84,param_2);
  return (uint)(iVar1 == 0);
}




/* from: libgscrypto:rsa.cpp
   addr: 005BE870 */

int __thiscall RSA::RandomInit(RSA *this,RANDOM_STRUCT *param_1)

{
  *(undefined4 *)param_1 = 0x100;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return 0;
}




/* from: libgscrypto:rsa.cpp
   addr: 005BE8A0 */

void __thiscall RSA::RandomFinal(RSA *this,RANDOM_STRUCT *param_1)

{
  int iVar1;
  
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)param_1 = 0;
    param_1 = param_1 + 4;
  }
  return;
}




/* from: libgscrypto:rsa.cpp
   addr: 005BE8C0 */

int __thiscall RSA::GenerateBytes(RSA *this,uchar *param_1,uint param_2,RANDOM_STRUCT *param_3)

{
  RANDOM_STRUCT RVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  RANDOM_STRUCT *pRVar5;
  RANDOM_STRUCT *pRVar6;
  MD5 local_80 [116];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005cc678;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  MD5::MD5(local_80);
  local_4 = 0;
  if (*(int *)param_3 == 0) {
    uVar3 = *(uint *)(param_3 + 0x14);
    if (uVar3 < param_2) {
      do {
        pRVar5 = param_3 + (0x28 - uVar3);
        pRVar6 = (RANDOM_STRUCT *)param_1;
        for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined4 *)pRVar6 = *(undefined4 *)pRVar5;
          pRVar5 = pRVar5 + 4;
          pRVar6 = pRVar6 + 4;
        }
        param_1 = (uchar *)((RANDOM_STRUCT *)param_1 + uVar3);
        for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *pRVar6 = *pRVar5;
          pRVar5 = pRVar5 + 1;
          pRVar6 = pRVar6 + 1;
        }
        param_2 = param_2 - uVar3;
        MD5::MD5Update(local_80,(uchar *)(param_3 + 4),0x10);
        MD5::MD5Final(local_80,(uchar *)(param_3 + 0x18));
        uVar3 = 0x10;
        uVar4 = 0;
        pRVar5 = param_3 + 0x13;
        do {
          RVar1 = *pRVar5;
          *pRVar5 = (RANDOM_STRUCT)((char)RVar1 + '\x01');
          if (RVar1 != (RANDOM_STRUCT)0x0) break;
          uVar4 = uVar4 + 1;
          pRVar5 = pRVar5 + -1;
        } while (uVar4 < 0x10);
      } while (0x10 < param_2);
    }
    pRVar5 = param_3 + (0x28 - uVar3);
    for (uVar4 = param_2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)param_1 = *(undefined4 *)pRVar5;
      pRVar5 = pRVar5 + 4;
      param_1 = (uchar *)((RANDOM_STRUCT *)param_1 + 4);
    }
    local_4 = 0xffffffff;
    for (uVar4 = param_2 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *param_1 = (uchar)*pRVar5;
      pRVar5 = pRVar5 + 1;
      param_1 = (uchar *)((RANDOM_STRUCT *)param_1 + 1);
    }
    *(uint *)(param_3 + 0x14) = uVar3 - param_2;
    MD5::~MD5(local_80);
    iVar2 = 0;
  }
  else {
    local_4 = 0xffffffff;
    MD5::~MD5(local_80);
    iVar2 = 1;
  }
  ExceptionList = local_c;
  return iVar2;
}




/* from: libgscrypto:rsa.cpp
   addr: 005BEA10 */

int __thiscall RSA::GetRandomBytesNeeded(RSA *this,uint *param_1,RANDOM_STRUCT *param_2)

{
  *param_1 = *(uint *)param_2;
  return 0;
}




/* from: libgscrypto:rsa.cpp
   addr: 005BEA30 */

int __thiscall RSA::RandomUpdate(RSA *this,RANDOM_STRUCT *param_1,uchar *param_2,uint param_3)

{
  uint uVar1;
  RANDOM_STRUCT *pRVar2;
  byte *pbVar3;
  int iVar4;
  uchar local_90 [15];
  byte bStack_81;
  MD5 local_80 [116];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005cc698;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  MD5::MD5(local_80);
  local_4 = 0;
  MD5::MD5Update(local_80,param_2,param_3);
  MD5::MD5Final(local_80,local_90);
  uVar1 = 0;
  pbVar3 = &bStack_81;
  iVar4 = 0x10;
  pRVar2 = param_1 + 0x13;
  do {
    uVar1 = *pbVar3 + uVar1 + (uint)(byte)*pRVar2;
    *pRVar2 = SUB41(uVar1,0);
    uVar1 = uVar1 >> 8;
    pbVar3 = pbVar3 + -1;
    pRVar2 = pRVar2 + -1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  if (*(uint *)param_1 < param_3) {
    *(undefined4 *)param_1 = 0;
  }
  else {
    *(uint *)param_1 = *(uint *)param_1 - param_3;
  }
  local_90[0] = '\0';
  local_90[1] = '\0';
  local_90[2] = '\0';
  local_90[3] = '\0';
  local_4 = 0xffffffff;
  local_90[4] = '\0';
  local_90[5] = '\0';
  local_90[6] = '\0';
  local_90[7] = '\0';
  local_90[8] = '\0';
  local_90[9] = '\0';
  local_90[10] = '\0';
  local_90[0xb] = '\0';
  stack0xffffff7c = 0;
  MD5::~MD5(local_80);
  ExceptionList = local_c;
  return 0;
}




/* from: libgscrypto:rsa.cpp
   addr: 005BEB20 */

uchar __thiscall
RSA::RSAPublicBlock(RSA *this,uchar *param_1,uint *param_2,uchar *param_3,uint param_4,
                   RSA_PUBLIC_KEY *param_5)

{
  CNaturalNumbers *this_00;
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint local_210 [33];
  uint local_18c [33];
  uint local_108 [33];
  uint local_84 [33];
  
  this_00 = (CNaturalNumbers *)(this + 8);
  CNaturalNumbers::NN_Decode(this_00,local_108,0x21,param_3,param_4);
  CNaturalNumbers::NN_Decode(this_00,local_210,0x21,(uchar *)(param_5 + 4),0x80);
  CNaturalNumbers::NN_Decode(this_00,local_18c,0x21,(uchar *)(param_5 + 0x84),0x80);
  uVar1 = CNaturalNumbers::NN_Digits(this_00,local_210,0x21);
  uVar2 = CNaturalNumbers::NN_Digits(this_00,local_18c,0x21);
  iVar3 = CNaturalNumbers::NN_Cmp(this_00,local_108,local_210,uVar1);
  if (-1 < iVar3) {
    return '\0';
  }
  CNaturalNumbers::NN_ModExp(this_00,local_84,local_108,local_18c,uVar2,local_210,uVar1);
  uVar2 = *(int *)param_5 + 7U >> 3;
  *param_2 = uVar2;
  CNaturalNumbers::NN_Encode(this_00,param_1,uVar2,local_84,uVar1);
  return '\x01';
}




/* from: libgscrypto:rsa.cpp
   addr: 005BEC30 */

uchar __thiscall
RSA::RSAPrivateBlock
          (RSA *this,uchar *param_1,uint *param_2,uchar *param_3,uint param_4,
          RSA_PRIVATE_KEY *param_5)

{
  CNaturalNumbers *this_00;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  uint local_630 [33];
  uint local_5ac [33];
  uint local_528 [33];
  uint local_4a4 [33];
  uint local_420 [33];
  uint local_39c [33];
  uint local_318 [33];
  uint local_294 [33];
  uint local_210 [33];
  uint local_18c [33];
  uint local_108 [33];
  uint local_84 [33];
  
  this_00 = (CNaturalNumbers *)(this + 8);
  CNaturalNumbers::NN_Decode(this_00,local_4a4,0x21,param_3,param_4);
  CNaturalNumbers::NN_Decode(this_00,local_318,0x21,(uchar *)(param_5 + 4),0x80);
  CNaturalNumbers::NN_Decode(this_00,local_5ac,0x21,(uchar *)(param_5 + 0x184),0x40);
  CNaturalNumbers::NN_Decode(this_00,local_420,0x21,(uchar *)(param_5 + 0x1c4),0x40);
  CNaturalNumbers::NN_Decode(this_00,local_108,0x21,(uchar *)(param_5 + 0x204),0x40);
  CNaturalNumbers::NN_Decode(this_00,local_210,0x21,(uchar *)(param_5 + 0x244),0x40);
  CNaturalNumbers::NN_Decode(this_00,local_84,0x21,(uchar *)(param_5 + 0x284),0x40);
  uVar1 = CNaturalNumbers::NN_Digits(this_00,local_4a4,0x21);
  uVar2 = CNaturalNumbers::NN_Digits(this_00,local_318,0x21);
  uVar3 = CNaturalNumbers::NN_Digits(this_00,local_5ac,0x21);
  iVar4 = CNaturalNumbers::NN_Cmp(this_00,local_4a4,local_318,uVar2);
  if (-1 < iVar4) {
    return '\0';
  }
  CNaturalNumbers::NN_Mod(this_00,local_294,local_4a4,uVar1,local_5ac,uVar3);
  CNaturalNumbers::NN_Mod(this_00,local_18c,local_4a4,uVar1,local_420,uVar3);
  CNaturalNumbers::NN_ModExp(this_00,local_39c,local_294,local_108,uVar3,local_5ac,uVar3);
  CNaturalNumbers::NN_AssignZero(this_00,local_528,uVar2);
  CNaturalNumbers::NN_ModExp(this_00,local_528,local_18c,local_210,uVar3,local_420,uVar3);
  iVar4 = CNaturalNumbers::NN_Cmp(this_00,local_39c,local_528,uVar3);
  if (iVar4 < 0) {
    CNaturalNumbers::NN_Sub(this_00,local_630,local_528,local_39c,uVar3);
    puVar5 = local_630;
    puVar6 = local_5ac;
  }
  else {
    puVar5 = local_528;
    puVar6 = local_39c;
  }
  CNaturalNumbers::NN_Sub(this_00,local_630,puVar6,puVar5,uVar3);
  CNaturalNumbers::NN_ModMult(this_00,local_630,local_630,local_84,local_5ac,uVar3);
  CNaturalNumbers::NN_Mult(this_00,local_630,local_630,local_420,uVar3);
  CNaturalNumbers::NN_Add(this_00,local_630,local_630,local_528,uVar2);
  uVar1 = *(int *)param_5 + 7U >> 3;
  *param_2 = uVar1;
  CNaturalNumbers::NN_Encode(this_00,param_1,uVar1,local_630,uVar2);
  return '\x01';
}

