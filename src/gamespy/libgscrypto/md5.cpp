
/* from: libgscrypto:md5.cpp
   addr: 005BC8A0 */

MD5 * __thiscall MD5::MD5(MD5 *this)

{
  int in_stack_00000004;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005cc642;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (in_stack_00000004 != 0) {
    ExceptionList = &local_c;
    *(undefined1 **)(this + 4) = &_vbtable_;
  }
  local_4 = 1;
  *(undefined ***)this = &_vftable_;
  MD5Reset(this);
  ExceptionList = local_c;
  return this;
}




/* from: libgscrypto:md5.cpp
   addr: 005BC910
   addr: 005BC910 */

void * __thiscall MD5::_vector_deleting_destructor_(MD5 *this,uint param_1)

{
  ~MD5(this);
  if ((param_1 & 1) != 0) {
    ExtAlloc_Free_4(this);
  }
  return this;
}




/* from: libgscrypto:md5.cpp
   addr: 005BC930 */

void __thiscall MD5::~MD5(MD5 *this)

{
  int iVar1;
  MD5 *pMVar2;
  
  pMVar2 = this + 0x20;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pMVar2 = 0;
    pMVar2 = pMVar2 + 4;
  }
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 100) = 0;
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined ***)this = &clExtalloc_Override_Baseclass::_vftable_;
  return;
}




/* from: libgscrypto:md5.cpp
   addr: 005BC960 */

void __thiscall MD5::MD5Reset(MD5 *this)

{
  int iVar1;
  MD5 *pMVar2;
  
  this[0x70] = (MD5)0x0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  pMVar2 = this + 0x20;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pMVar2 = 0;
    pMVar2 = pMVar2 + 4;
  }
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 100) = 0;
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined4 *)(this + 8) = 0x67452301;
  *(undefined4 *)(this + 0xc) = 0xefcdab89;
  *(undefined4 *)(this + 0x10) = 0x98badcfe;
  *(undefined4 *)(this + 0x14) = 0x10325476;
  return;
}




/* from: libgscrypto:md5.cpp
   addr: 005BC9B0 */

void __thiscall MD5::MD5Update(MD5 *this,uchar *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  MD5 *pMVar4;
  MD5 *pMVar5;
  
  if (this[0x70] == (MD5)0x0) {
    uVar3 = *(uint *)(this + 0x18) + param_2 * 8;
    uVar1 = *(uint *)(this + 0x18) >> 3 & 0x3f;
    *(uint *)(this + 0x18) = uVar3;
    if (uVar3 < param_2 * 8) {
      *(int *)(this + 0x1c) = *(int *)(this + 0x1c) + 1;
    }
    uVar3 = -uVar1 + 0x40;
    *(uint *)(this + 0x1c) = *(int *)(this + 0x1c) + (param_2 >> 0x1d);
    if (param_2 < uVar3) {
      uVar3 = 0;
    }
    else {
      pMVar4 = (MD5 *)param_1;
      pMVar5 = this + uVar1 + 0x20;
      for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined4 *)pMVar5 = *(undefined4 *)pMVar4;
        pMVar4 = pMVar4 + 4;
        pMVar5 = pMVar5 + 4;
      }
      for (uVar2 = uVar3 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *pMVar5 = *pMVar4;
        pMVar4 = pMVar4 + 1;
        pMVar5 = pMVar5 + 1;
      }
      transform(this,(uchar *)(this + 0x20));
      for (uVar1 = -uVar1 + 0x7f; uVar1 < param_2; uVar1 = uVar1 + 0x40) {
        transform(this,param_1 + (uVar1 - 0x3f));
        uVar3 = uVar3 + 0x40;
      }
      uVar1 = 0;
    }
    pMVar4 = (MD5 *)(param_1 + uVar3);
    pMVar5 = this + uVar1 + 0x20;
    for (uVar2 = param_2 - uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined4 *)pMVar5 = *(undefined4 *)pMVar4;
      pMVar4 = pMVar4 + 4;
      pMVar5 = pMVar5 + 4;
    }
    for (uVar3 = param_2 - uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pMVar5 = *pMVar4;
      pMVar4 = pMVar4 + 1;
      pMVar5 = pMVar5 + 1;
    }
  }
  return;
}




/* from: libgscrypto:md5.cpp
   addr: 005BCA80 */

void __thiscall MD5::MD5Final(MD5 *this,uchar *param_1)

{
  MD5 *pMVar1;
  uint uVar2;
  int iVar3;
  uchar local_8 [8];
  
  if (this[0x70] == (MD5)0x0) {
    encode(local_8,(uint *)(this + 0x18),8);
    iVar3 = 0x38;
    uVar2 = *(uint *)(this + 0x18) >> 3 & 0x3f;
    if (0x37 < uVar2) {
      iVar3 = 0x78;
    }
    MD5Update(this,&DAT_006005f8,iVar3 - uVar2);
    MD5Update(this,local_8,8);
    pMVar1 = this + 0x60;
    encode((uchar *)pMVar1,(uint *)(this + 8),0x10);
    this[0x70] = (MD5)0x1;
    *(undefined4 *)param_1 = *(undefined4 *)pMVar1;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(this + 100);
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(this + 0x68);
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(this + 0x6c);
    this[0x20] = (MD5)0x0;
    *pMVar1 = (MD5)0x0;
  }
  return;
}




/* from: libgscrypto:md5.cpp
   addr: 005BCB20 */

void __thiscall MD5::transform(MD5 *this,uchar *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  int local_3c;
  uint local_38;
  int local_34;
  uint local_30;
  int local_2c;
  uint local_28;
  int local_24;
  int local_20;
  uint local_1c;
  int local_18;
  uint local_14;
  int local_10;
  uint local_c;
  int local_8;
  uint local_4;
  
  local_4c = *(uint *)(this + 0xc);
  local_44 = *(uint *)(this + 0x10);
  local_50 = *(uint *)(this + 8);
  local_48 = *(uint *)(this + 0x14);
  decode(&local_40,param_1,0x40);
  uVar1 = local_50 + 0xd76aa478 + (~local_4c & local_48 | local_44 & local_4c) + local_40;
  uVar2 = (uVar1 >> 0x19 | uVar1 * 0x80) + local_4c;
  uVar1 = local_48 + 0xe8c7b756 + (~uVar2 & local_44 | local_4c & uVar2) + local_3c;
  uVar3 = (uVar1 >> 0x14 | uVar1 * 0x1000) + uVar2;
  uVar1 = local_44 + 0x242070db + (~uVar3 & local_4c | uVar3 & uVar2) + local_38;
  uVar4 = (uVar1 >> 0xf | uVar1 * 0x20000) + uVar3;
  uVar1 = local_4c + 0xc1bdceee + (~uVar4 & uVar2 | uVar3 & uVar4) + local_34;
  uVar5 = (uVar1 * 0x400000 | uVar1 >> 10) + uVar4;
  uVar1 = uVar2 + 0xf57c0faf + (~uVar5 & uVar3 | uVar4 & uVar5) + local_30;
  uVar6 = (uVar1 >> 0x19 | uVar1 * 0x80) + uVar5;
  uVar1 = uVar3 + 0x4787c62a + (~uVar6 & uVar4 | uVar5 & uVar6) + local_2c;
  uVar2 = (uVar1 >> 0x14 | uVar1 * 0x1000) + uVar6;
  uVar1 = uVar4 + 0xa8304613 + (~uVar2 & uVar5 | uVar2 & uVar6) + local_28;
  uVar3 = (uVar1 >> 0xf | uVar1 * 0x20000) + uVar2;
  uVar1 = uVar5 + 0xfd469501 + (~uVar3 & uVar6 | uVar2 & uVar3) + local_24;
  uVar4 = (uVar1 * 0x400000 | uVar1 >> 10) + uVar3;
  uVar1 = uVar6 + 0x698098d8 + (~uVar4 & uVar2 | uVar3 & uVar4) + local_20;
  uVar5 = (uVar1 >> 0x19 | uVar1 * 0x80) + uVar4;
  uVar1 = uVar2 + 0x8b44f7af + (~uVar5 & uVar3 | uVar4 & uVar5) + local_1c;
  uVar6 = (uVar1 >> 0x14 | uVar1 * 0x1000) + uVar5;
  uVar1 = (uVar3 - 0xa44f) + (~uVar6 & uVar4 | uVar6 & uVar5) + local_18;
  uVar3 = (uVar1 >> 0xf | uVar1 * 0x20000) + uVar6;
  uVar1 = uVar4 + 0x895cd7be + (~uVar3 & uVar5 | uVar6 & uVar3) + local_14;
  uVar2 = (uVar1 * 0x400000 | uVar1 >> 10) + uVar3;
  uVar1 = uVar5 + 0x6b901122 + (~uVar2 & uVar6 | uVar3 & uVar2) + local_10;
  uVar4 = (uVar1 >> 0x19 | uVar1 * 0x80) + uVar2;
  uVar1 = uVar6 + 0xfd987193 + (~uVar4 & uVar3 | uVar2 & uVar4) + local_c;
  uVar5 = (uVar1 >> 0x14 | uVar1 * 0x1000) + uVar4;
  uVar1 = uVar3 + 0xa679438e + (~uVar5 & uVar2 | uVar5 & uVar4) + local_8;
  uVar7 = (uVar1 >> 0xf | uVar1 * 0x20000) + uVar5;
  uVar2 = (~uVar7 & uVar4 | uVar5 & uVar7) + local_4 + 0x49b40821 + uVar2;
  uVar2 = (uVar2 * 0x400000 | uVar2 >> 10) + uVar7;
  uVar1 = uVar4 + 0xf61e2562 + (~uVar5 & uVar7 | uVar5 & uVar2) + local_3c;
  uVar6 = (uVar1 >> 0x1b | uVar1 * 0x20) + uVar2;
  uVar1 = uVar5 + 0xc040b340 + (~uVar7 & uVar2 | uVar7 & uVar6) + local_28;
  uVar3 = (uVar1 >> 0x17 | uVar1 * 0x200) + uVar6;
  uVar1 = uVar7 + 0x265e5a51 + (~uVar2 & uVar6 | uVar3 & uVar2) + local_14;
  uVar4 = (uVar1 >> 0x12 | uVar1 * 0x4000) + uVar3;
  uVar1 = uVar2 + 0xe9b6c7aa + (~uVar6 & uVar3 | uVar4 & uVar6) + local_40;
  uVar5 = (uVar1 * 0x100000 | uVar1 >> 0xc) + uVar4;
  uVar1 = uVar6 + 0xd62f105d + (~uVar3 & uVar4 | uVar3 & uVar5) + local_2c;
  uVar2 = (uVar1 >> 0x1b | uVar1 * 0x20) + uVar5;
  uVar1 = uVar3 + 0x2441453 + (~uVar4 & uVar5 | uVar4 & uVar2) + local_18;
  uVar3 = (uVar1 >> 0x17 | uVar1 * 0x200) + uVar2;
  uVar1 = uVar4 + 0xd8a1e681 + (~uVar5 & uVar2 | uVar3 & uVar5) + local_4;
  uVar4 = (uVar1 >> 0x12 | uVar1 * 0x4000) + uVar3;
  uVar1 = uVar5 + 0xe7d3fbc8 + (~uVar2 & uVar3 | uVar4 & uVar2) + local_30;
  uVar5 = (uVar1 * 0x100000 | uVar1 >> 0xc) + uVar4;
  uVar1 = uVar2 + 0x21e1cde6 + (~uVar3 & uVar4 | uVar3 & uVar5) + local_1c;
  uVar6 = (uVar1 >> 0x1b | uVar1 * 0x20) + uVar5;
  uVar1 = uVar3 + 0xc33707d6 + (~uVar4 & uVar5 | uVar4 & uVar6) + local_8;
  uVar7 = (uVar1 >> 0x17 | uVar1 * 0x200) + uVar6;
  uVar1 = uVar4 + 0xf4d50d87 + (~uVar5 & uVar6 | uVar7 & uVar5) + local_34;
  uVar2 = (uVar1 >> 0x12 | uVar1 * 0x4000) + uVar7;
  uVar1 = uVar5 + 0x455a14ed + (~uVar6 & uVar7 | uVar2 & uVar6) + local_20;
  uVar3 = (uVar1 * 0x100000 | uVar1 >> 0xc) + uVar2;
  uVar1 = uVar6 + 0xa9e3e905 + (~uVar7 & uVar2 | uVar7 & uVar3) + local_c;
  uVar4 = (uVar1 >> 0x1b | uVar1 * 0x20) + uVar3;
  uVar1 = uVar7 + 0xfcefa3f8 + (~uVar2 & uVar3 | uVar2 & uVar4) + local_38;
  uVar5 = (uVar1 >> 0x17 | uVar1 * 0x200) + uVar4;
  uVar1 = uVar2 + 0x676f02d9 + (~uVar3 & uVar4 | uVar5 & uVar3) + local_24;
  uVar6 = (uVar1 >> 0x12 | uVar1 * 0x4000) + uVar5;
  uVar1 = uVar3 + 0x8d2a4c8a + (~uVar4 & uVar5 | uVar6 & uVar4) + local_10;
  uVar2 = (uVar1 * 0x100000 | uVar1 >> 0xc) + uVar6;
  uVar1 = (uVar4 - 0x5c6be) + (uVar5 ^ uVar6 ^ uVar2) + local_2c;
  uVar3 = (uVar1 >> 0x1c | uVar1 * 0x10) + uVar2;
  uVar1 = uVar5 + 0x8771f681 + (uVar6 ^ uVar2 ^ uVar3) + local_20;
  uVar5 = (uVar1 >> 0x15 | uVar1 * 0x800) + uVar3;
  uVar1 = uVar6 + 0x6d9d6122 + (uVar5 ^ uVar2 ^ uVar3) + local_14;
  uVar6 = (uVar1 >> 0x10 | uVar1 * 0x10000) + uVar5;
  uVar1 = uVar2 + 0xfde5380c + (uVar5 ^ uVar6 ^ uVar3) + local_8;
  uVar4 = (uVar1 * 0x800000 | uVar1 >> 9) + uVar6;
  uVar1 = uVar3 + 0xa4beea44 + (uVar5 ^ uVar6 ^ uVar4) + local_3c;
  uVar3 = (uVar1 >> 0x1c | uVar1 * 0x10) + uVar4;
  uVar1 = uVar5 + 0x4bdecfa9 + (uVar6 ^ uVar4 ^ uVar3) + local_30;
  uVar2 = (uVar1 >> 0x15 | uVar1 * 0x800) + uVar3;
  uVar1 = uVar6 + 0xf6bb4b60 + (uVar2 ^ uVar4 ^ uVar3) + local_24;
  uVar6 = (uVar1 >> 0x10 | uVar1 * 0x10000) + uVar2;
  uVar1 = uVar4 + 0xbebfbc70 + (uVar2 ^ uVar6 ^ uVar3) + local_18;
  uVar4 = (uVar1 * 0x800000 | uVar1 >> 9) + uVar6;
  uVar1 = uVar3 + 0x289b7ec6 + (uVar2 ^ uVar6 ^ uVar4) + local_c;
  uVar3 = (uVar1 >> 0x1c | uVar1 * 0x10) + uVar4;
  uVar2 = (uVar6 ^ uVar4 ^ uVar3) + local_40 + -0x155ed806 + uVar2;
  uVar5 = (uVar2 >> 0x15 | uVar2 * 0x800) + uVar3;
  uVar1 = uVar6 + 0xd4ef3085 + (uVar5 ^ uVar4 ^ uVar3) + local_34;
  uVar6 = (uVar1 >> 0x10 | uVar1 * 0x10000) + uVar5;
  uVar1 = uVar4 + 0x4881d05 + (uVar5 ^ uVar6 ^ uVar3) + local_28;
  uVar4 = (uVar1 * 0x800000 | uVar1 >> 9) + uVar6;
  uVar1 = uVar3 + 0xd9d4d039 + (uVar5 ^ uVar6 ^ uVar4) + local_1c;
  uVar2 = (uVar1 >> 0x1c | uVar1 * 0x10) + uVar4;
  uVar1 = uVar5 + 0xe6db99e5 + (uVar6 ^ uVar4 ^ uVar2) + local_10;
  uVar5 = (uVar1 >> 0x15 | uVar1 * 0x800) + uVar2;
  uVar1 = uVar6 + 0x1fa27cf8 + (uVar5 ^ uVar4 ^ uVar2) + local_4;
  uVar7 = (uVar1 >> 0x10 | uVar1 * 0x10000) + uVar5;
  uVar1 = uVar4 + 0xc4ac5665 + (uVar5 ^ uVar7 ^ uVar2) + local_38;
  uVar6 = (uVar1 * 0x800000 | uVar1 >> 9) + uVar7;
  uVar1 = uVar2 + 0xf4292244 + ((~uVar5 | uVar6) ^ uVar7) + local_40;
  uVar3 = (uVar1 >> 0x1a | uVar1 * 0x40) + uVar6;
  uVar1 = uVar5 + 0x432aff97 + ((~uVar7 | uVar3) ^ uVar6) + local_24;
  uVar2 = (uVar1 >> 0x16 | uVar1 * 0x400) + uVar3;
  uVar1 = uVar7 + 0xab9423a7 + ((~uVar6 | uVar2) ^ uVar3) + local_8;
  uVar4 = (uVar1 >> 0x11 | uVar1 * 0x8000) + uVar2;
  uVar1 = uVar6 + 0xfc93a039 + ((~uVar3 | uVar4) ^ uVar2) + local_2c;
  uVar5 = (uVar1 * 0x200000 | uVar1 >> 0xb) + uVar4;
  uVar1 = uVar3 + 0x655b59c3 + ((~uVar2 | uVar5) ^ uVar4) + local_10;
  uVar3 = (uVar1 >> 0x1a | uVar1 * 0x40) + uVar5;
  uVar1 = uVar2 + 0x8f0ccc92 + ((~uVar4 | uVar3) ^ uVar5) + local_34;
  local_48 = (uVar1 >> 0x16 | uVar1 * 0x400) + uVar3;
  uVar1 = (uVar4 - 0x100b83) + ((~uVar5 | local_48) ^ uVar3) + local_18;
  local_44 = (uVar1 >> 0x11 | uVar1 * 0x8000) + local_48;
  uVar1 = uVar5 + 0x85845dd1 + ((~uVar3 | local_44) ^ local_48) + local_3c;
  local_4c = (uVar1 * 0x200000 | uVar1 >> 0xb) + local_44;
  uVar1 = uVar3 + 0x6fa87e4f + ((~local_48 | local_4c) ^ local_44) + local_20;
  local_50 = (uVar1 >> 0x1a | uVar1 * 0x40) + local_4c;
  II(&local_48,local_50,local_4c,local_44,local_4,10,0xfe2ce6e0);
  II(&local_44,local_48,local_50,local_4c,local_28,0xf,0xa3014314);
  II(&local_4c,local_44,local_48,local_50,local_c,0x15,0x4e0811a1);
  II(&local_50,local_4c,local_44,local_48,local_30,6,0xf7537e82);
  II(&local_48,local_50,local_4c,local_44,local_14,10,0xbd3af235);
  II(&local_44,local_48,local_50,local_4c,local_38,0xf,0x2ad7d2bb);
  II(&local_4c,local_44,local_48,local_50,local_1c,0x15,0xeb86d391);
  *(uint *)(this + 0x10) = *(int *)(this + 0x10) + local_44;
  *(uint *)(this + 0xc) = *(int *)(this + 0xc) + local_4c;
  *(uint *)(this + 8) = *(int *)(this + 8) + local_50;
  *(uint *)(this + 0x14) = *(int *)(this + 0x14) + local_48;
  return;
}




/* from: libgscrypto:md5.cpp
   addr: 005BD4C0 */

void MD5::encode(uchar *param_1,uint *param_2,uint param_3)

{
  uchar *puVar1;
  uchar *puVar2;
  
  if (param_3 != 0) {
    puVar1 = param_1 + 1;
    puVar2 = (uchar *)((int)param_2 + 2);
    do {
      puVar1[-1] = puVar2[-2];
      *puVar1 = puVar2[-1];
      puVar1[1] = *puVar2;
      puVar1[2] = puVar2[1];
      puVar1 = puVar1 + 4;
      puVar2 = puVar2 + 4;
    } while (puVar1 + (-1 - (int)param_1) < param_3);
  }
  return;
}




/* from: libgscrypto:md5.cpp
   addr: 005BD510 */

void MD5::decode(uint *param_1,uchar *param_2,uint param_3)

{
  uchar *puVar1;
  uchar *puVar2;
  
  if (param_3 != 0) {
    puVar1 = param_2 + 2;
    do {
      puVar2 = puVar1 + 4;
      *param_1 = CONCAT31(CONCAT21(*(undefined2 *)puVar1,puVar1[-1]),puVar1[-2]);
      puVar1 = puVar2;
      param_1 = param_1 + 1;
    } while (puVar2 + (-2 - (int)param_2) < param_3);
  }
  return;
}




/* from: libgscrypto:md5.cpp
   addr: 005BD560 */

void MD5::II(uint *param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
            uint param_7)

{
  uint uVar1;
  
  uVar1 = ((~param_4 | param_2) ^ param_3) + *param_1 + param_5 + param_7;
  *param_1 = (uVar1 >> (0x20 - (byte)param_6 & 0x1f) | uVar1 << ((byte)param_6 & 0x1f)) + param_2;
  return;
}

