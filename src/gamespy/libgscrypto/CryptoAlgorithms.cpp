
/* from: libgscrypto:CryptoAlgorithms.cpp
   addr: 005BA1A0
   addr: 005BA1A0 */

void * __thiscall
CipherModule_Blowfish::_scalar_deleting_destructor_(CipherModule_Blowfish *this,uint param_1)

{
  ~CipherModule_Blowfish(this);
  if ((param_1 & 1) != 0) {
    ExtAlloc_Free_4(this);
  }
  return this;
}




/* from: libgscrypto:CryptoAlgorithms.cpp
   addr: 005BA1C0 */

CipherModule_Blowfish * __thiscall
CipherModule_Blowfish::CipherModule_Blowfish
          (CipherModule_Blowfish *this,uchar *param_1,uint param_2)

{
  CBlowFish *pCVar1;
  int in_stack_0000000c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005cc53c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (in_stack_0000000c != 0) {
    ExceptionList = &local_c;
    *(undefined1 **)(this + 4) = &_vbtable_;
  }
  *(undefined4 *)(this + 8) = 0;
  local_4 = 1;
  *(undefined ***)this = &_vftable_;
  pCVar1 = (CBlowFish *)ExtAlloc_Malloc_4(0x2098);
  local_4._0_1_ = 2;
  if (pCVar1 == (CBlowFish *)0x0) {
    pCVar1 = (CBlowFish *)0x0;
  }
  else {
    pCVar1 = (CBlowFish *)CBlowFish::CBlowFish(pCVar1);
  }
  local_4 = CONCAT31(local_4._1_3_,1);
  *(CBlowFish **)(this + 0xc) = pCVar1;
  CBlowFish::Blowfish_Init(pCVar1,param_1,param_2);
  ExceptionList = local_c;
  return this;
}




/* from: libgscrypto:CryptoAlgorithms.cpp
   addr: 005BA270 */

void __thiscall CipherModule_Blowfish::~CipherModule_Blowfish(CipherModule_Blowfish *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005cc558;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = &_vftable_;
  local_4 = 0;
  if (*(undefined4 **)(this + 0xc) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0xc))(1);
  }
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined ***)this = &clExtalloc_Override_Baseclass::_vftable_;
  ExceptionList = local_c;
  return;
}




/* from: libgscrypto:CryptoAlgorithms.cpp
   addr: 005BA2D0 */

uchar __thiscall
CipherModule_Blowfish::Init(CipherModule_Blowfish *this,uchar *param_1,uint param_2)

{
  CBlowFish::Blowfish_Init(*(CBlowFish **)(this + 0xc),param_1,param_2);
  return '\x01';
}




/* from: libgscrypto:CryptoAlgorithms.cpp
   addr: 005BA300 */

uchar __thiscall
CipherModule_Blowfish::Encrypt
          (CipherModule_Blowfish *this,void *param_1,uint param_2,void *param_3,uint *param_4)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  uint *puVar7;
  
  if (0xffff < param_2) {
    *param_4 = 0;
    return '\0';
  }
  uVar1 = param_2 & 7;
  if (uVar1 == 0) {
    uVar1 = 8;
  }
  iVar4 = param_2 - uVar1;
  uVar1 = iVar4 + 8;
  if ((param_3 != (void *)0x0) && (iVar4 + 10U <= *param_4)) {
    puVar2 = (uint *)ExtAlloc_Malloc_4(uVar1);
    puVar5 = puVar2;
    for (uVar3 = uVar1 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    for (uVar3 = uVar1 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar5 = 0;
      puVar5 = (uint *)((int)puVar5 + 1);
    }
    puVar5 = puVar2;
                    /* WARNING: Load size is inaccurate */
    for (uVar3 = param_2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar5 = *param_1;
      param_1 = (uint *)((int)param_1 + 4);
      puVar5 = puVar5 + 1;
    }
                    /* WARNING: Load size is inaccurate */
    for (uVar3 = param_2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(char *)puVar5 = (char)*param_1;
      param_1 = (uint *)((int)param_1 + 1);
      puVar5 = (uint *)((int)puVar5 + 1);
    }
    if (uVar1 != 0) {
      iVar6 = (iVar4 + 7U >> 3) + 1;
      puVar5 = puVar2;
      do {
        CBlowFish::Blowfish_Encrypt(*(CBlowFish **)(this + 0xc),puVar5,puVar5 + 1);
        puVar5 = puVar5 + 2;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    *param_4 = iVar4 + 10;
    puVar5 = puVar2;
    puVar7 = (uint *)param_3;
    for (uVar3 = uVar1 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar7 = puVar7 + 1;
    }
    for (uVar3 = uVar1 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(char *)puVar7 = (char)*puVar5;
      puVar5 = (uint *)((int)puVar5 + 1);
      puVar7 = (uint *)((int)puVar7 + 1);
    }
    *(undefined2 *)(uVar1 + (int)param_3) = (undefined2)param_2;
    ExtAlloc_Free_4(puVar2);
    return '\x01';
  }
  *param_4 = iVar4 + 10;
  return '\0';
}




/* from: libgscrypto:CryptoAlgorithms.cpp
   addr: 005BA410 */

uchar __thiscall
CipherModule_Blowfish::Decrypt
          (CipherModule_Blowfish *this,void *param_1,uint param_2,void *param_3,uint *param_4)

{
  ushort uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  
  uVar1 = *(ushort *)((int)param_1 + (param_2 - 2));
  uVar5 = (uint)uVar1;
  if ((param_3 != (void *)0x0) && (uVar5 <= *param_4)) {
    uVar2 = param_2 - 2 & 7;
    if (uVar2 == 0) {
      uVar2 = 8;
    }
    uVar7 = (param_2 - uVar2) + 6;
    puVar3 = (uint *)ExtAlloc_Malloc_4(uVar7);
    puVar6 = puVar3;
    for (uVar4 = uVar7 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    for (uVar4 = uVar7 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar6 = 0;
      puVar6 = (uint *)((int)puVar6 + 1);
    }
    puVar6 = puVar3;
                    /* WARNING: Load size is inaccurate */
    for (uVar4 = uVar7 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar6 = *param_1;
      param_1 = (uint *)((int)param_1 + 4);
      puVar6 = puVar6 + 1;
    }
                    /* WARNING: Load size is inaccurate */
    for (uVar4 = uVar7 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(char *)puVar6 = (char)*param_1;
      param_1 = (uint *)((int)param_1 + 1);
      puVar6 = (uint *)((int)puVar6 + 1);
    }
    if (uVar7 != 0) {
      iVar8 = ((param_2 - uVar2) + 5 >> 3) + 1;
      puVar6 = puVar3;
      do {
        CBlowFish::Blowfish_Decrypt(*(CBlowFish **)(this + 0xc),puVar6,puVar6 + 1);
        puVar6 = puVar6 + 2;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    *param_4 = uVar5;
    puVar6 = puVar3;
    for (uVar2 = (uint)(uVar1 >> 2); uVar2 != 0; uVar2 = uVar2 - 1) {
      *(uint *)param_3 = *puVar6;
      puVar6 = puVar6 + 1;
      param_3 = (uint *)((int)param_3 + 4);
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(char *)param_3 = (char)*puVar6;
      puVar6 = (uint *)((int)puVar6 + 1);
      param_3 = (uint *)((int)param_3 + 1);
    }
    ExtAlloc_Free_4(puVar3);
    return '\x01';
  }
  *param_4 = uVar5;
  return '\0';
}




/* from: libgscrypto:CryptoAlgorithms.cpp
   addr: 005BA500
   addr: 005BA500 */

void * __thiscall
CipherModule_GSXor::_vector_deleting_destructor_(CipherModule_GSXor *this,uint param_1)

{
  ~CipherModule_GSXor(this);
  if ((param_1 & 1) != 0) {
    ExtAlloc_Free_4(this);
  }
  return this;
}




/* from: libgscrypto:CryptoAlgorithms.cpp
   addr: 005BA520
   addr: 005BA520 */

void * __thiscall CGSXor::_scalar_deleting_destructor_(CGSXor *this,uint param_1)

{
  clExtalloc_Override_Baseclass::~clExtalloc_Override_Baseclass
            ((clExtalloc_Override_Baseclass *)this);
  if ((param_1 & 1) != 0) {
    ExtAlloc_Free_4(this);
  }
  return this;
}




/* from: libgscrypto:CryptoAlgorithms.cpp
   addr: 005BA540 */

CipherModule_GSXor * __thiscall
CipherModule_GSXor::CipherModule_GSXor(CipherModule_GSXor *this,uchar *param_1,uint param_2)

{
  undefined4 *puVar1;
  int in_stack_0000000c;
  
  if (in_stack_0000000c != 0) {
    *(undefined1 **)(this + 4) = &_vbtable_;
  }
  *(undefined4 *)(this + 8) = 1;
  *(undefined ***)this = &_vftable_;
  puVar1 = (undefined4 *)ExtAlloc_Malloc_4(8);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = &CGSXor::_vbtable_;
    *puVar1 = &CGSXor::_vftable_;
    *(undefined4 **)(this + 0xc) = puVar1;
    return this;
  }
  *(undefined4 *)(this + 0xc) = 0;
  return this;
}




/* from: libgscrypto:CryptoAlgorithms.cpp
   addr: 005BA5A0 */

void __thiscall CipherModule_GSXor::~CipherModule_GSXor(CipherModule_GSXor *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005cc578;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = &_vftable_;
  local_4 = 0;
  if (*(undefined4 **)(this + 0xc) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0xc))(1);
  }
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined ***)this = &clExtalloc_Override_Baseclass::_vftable_;
  ExceptionList = local_c;
  return;
}




/* from: libgscrypto:CryptoAlgorithms.cpp
   addr: 005BA610 */

uchar __thiscall
CipherModule_GSXor::Encrypt
          (CipherModule_GSXor *this,void *param_1,uint param_2,void *param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  if ((param_3 != (void *)0x0) && (uVar2 = *param_4, uVar2 == param_2)) {
    puVar3 = (undefined4 *)param_3;
                    /* WARNING: Load size is inaccurate */
    for (uVar1 = uVar2 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar3 = *param_1;
      param_1 = (undefined4 *)((int)param_1 + 4);
      puVar3 = puVar3 + 1;
    }
                    /* WARNING: Load size is inaccurate */
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined1 *)puVar3 = *param_1;
      param_1 = (undefined4 *)((int)param_1 + 1);
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
    CGSXor::GSXor_Encrypt(*(CGSXor **)(this + 0xc),(uchar *)param_3,*param_4);
    return '\x01';
  }
  *param_4 = param_2;
  return '\0';
}




/* from: libgscrypto:CryptoAlgorithms.cpp
   addr: 005BA660 */

uchar __thiscall
CipherModule_GSXor::Decrypt
          (CipherModule_GSXor *this,void *param_1,uint param_2,void *param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  if ((param_3 != (void *)0x0) && (uVar2 = *param_4, uVar2 == param_2)) {
    puVar3 = (undefined4 *)param_3;
                    /* WARNING: Load size is inaccurate */
    for (uVar1 = uVar2 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar3 = *param_1;
      param_1 = (undefined4 *)((int)param_1 + 4);
      puVar3 = puVar3 + 1;
    }
                    /* WARNING: Load size is inaccurate */
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined1 *)puVar3 = *param_1;
      param_1 = (undefined4 *)((int)param_1 + 1);
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
    CGSXor::GSXor_Decrypt(*(CGSXor **)(this + 0xc),(uchar *)param_3,*param_4);
    return '\x01';
  }
  *param_4 = param_2;
  return '\0';
}

