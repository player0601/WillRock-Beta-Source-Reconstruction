
/* from: libgsconnect:AlgoEncrypt.cpp
   addr: 0059D1B0 */

clAlgoEncrypt * __thiscall
clAlgoEncrypt::clAlgoEncrypt(clAlgoEncrypt *this,E_ENCRYPTION_PROTOCOL param_1)

{
  uchar uVar1;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  uchar *puVar5;
  time_t tVar6;
  int in_stack_00000008;
  undefined4 uVar7;
  char *pcVar8;
  uchar local_2c [32];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c8e3a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (in_stack_00000008 != 0) {
    ExceptionList = &local_c;
    *(undefined8 **)this = &_vbtable_;
    local_4 = 0;
  }
  m_eProtocol = param_1;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  if (m_uiReference == 0) {
    pcVar8 = s_Global_initialization__;
    _STL::
    _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
    ::
    ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
              ((_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
                *)this);
    uVar7 = 0;
    puVar5 = local_2c;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      puVar5[0] = '\0';
      puVar5[1] = '\0';
      puVar5[2] = '\0';
      puVar5[3] = '\0';
      puVar5 = puVar5 + 4;
    }
    tVar6 = time((time_t *)0x0);
    uVar4 = (uint)tVar6;
    snprintf((char *)local_2c,0x1f,s__lld,uVar4 + 1,
             ((int)uVar4 >> 0x1f) + (uint)(0xfffffffe < uVar4),uVar7,pcVar8);
    uVar4 = 0xffffffff;
    puVar5 = local_2c;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      uVar1 = *puVar5;
      puVar5 = puVar5 + 1;
    } while (uVar1 != '\0');
    m_hPRNG = PRNGAlgorithmInterface::StartNumberGenerator_16(0,1,local_2c,~uVar4 - 1);
    m_hPKC = PKCAlgorithmInterface::InitializePKC_4(0);
    m_hXORCipher = CipherAlgorithmInterface::InitializeCipher_12(1,(uchar *)s_,0);
    AllocatePKCStructures(this);
  }
  if (m_eProtocol == 1) {
    GenerateSessionKey(this,0x10);
    pvVar2 = CipherAlgorithmInterface::InitializeCipher_12
                       (0,*(uchar **)(this + 8),*(uint *)(this + 0xc));
    *(void **)(this + 4) = pvVar2;
    if (m_uiReference == 0) {
      GenerateRandomData(this);
      *(undefined4 *)m_protoKey = 0x200;
      *(undefined4 *)(m_protoKey + 4) = 0;
      GenerateGlobalKeyPair(this);
    }
  }
  ExceptionList = local_c;
  m_uiReference = m_uiReference + 1;
  return this;
}




/* from: libgsconnect:AlgoEncrypt.cpp
   addr: 0059D300 */

void __thiscall clAlgoEncrypt::~clAlgoEncrypt(clAlgoEncrypt *this)

{
  undefined4 uVar1;
  
  m_uiReference = m_uiReference - 1;
  if (m_uiReference == 0) {
    _STL::
    _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
    ::
    ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
              ((_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
                *)this);
    FreePKCStructures(this);
    StopNumberGenerator_4(0);
    UninitializePKC_4(0);
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(this + 4);
  }
  UninitializeCipher_4(uVar1);
  if (*(int *)(this + 8) != 0) {
    ExtAlloc_Free_4(*(int *)(this + 8));
  }
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  return;
}




/* from: libgsconnect:AlgoEncrypt.cpp
   addr: 0059D360 */

uchar __thiscall
clAlgoEncrypt::PublicKeyEncrypt
          (clAlgoEncrypt *this,RSA_PUBLIC_KEY *param_1,uchar *param_2,uint param_3,uchar *param_4,
          uint *param_5)

{
  uchar uVar1;
  
  GenerateRandomData(this);
  uVar1 = PKCAlgorithmInterface::PublicEncrypt_28
                    (m_hPKC,param_2,param_3,param_4,param_5,param_1,m_randomData);
  return uVar1;
}




/* from: libgsconnect:AlgoEncrypt.cpp
   addr: 0059D3A0 */

uchar __thiscall
clAlgoEncrypt::PrivateKeyDecrypt
          (clAlgoEncrypt *this,uchar *param_1,uint param_2,uchar *param_3,uint *param_4)

{
  uchar uVar1;
  
  uVar1 = PKCAlgorithmInterface::PrivateDecrypt_24
                    (m_hPKC,param_1,param_2,param_3,param_4,m_privateKey);
  return uVar1;
}




/* from: libgsconnect:AlgoEncrypt.cpp
   addr: 0059D3D0 */

uchar __thiscall
clAlgoEncrypt::SessionEncrypt
          (clAlgoEncrypt *this,uchar *param_1,uint param_2,uchar *param_3,uint *param_4,
          E_CIPHER_ALGORITHM param_5)

{
  uchar uVar1;
  void *pvVar2;
  
  pvVar2 = m_hXORCipher;
  if (param_5 != 0) {
    if ((param_5 != 1) && (param_5 == 2)) {
      pvVar2 = *(void **)(this + 4);
    }
    if (pvVar2 != (void *)0x0) goto LAB_0059d404;
  }
  pvVar2 = m_hXORCipher;
  if ((m_eProtocol != 0) && (m_eProtocol == 1)) {
    pvVar2 = *(void **)(this + 4);
  }
LAB_0059d404:
  uVar1 = CipherAlgorithmInterface::Encrypt_20(pvVar2,param_1,param_2,param_3,param_4);
  return uVar1;
}




/* from: libgsconnect:AlgoEncrypt.cpp
   addr: 0059D430 */

uchar __thiscall
clAlgoEncrypt::SessionDecrypt
          (clAlgoEncrypt *this,uchar *param_1,uint param_2,uchar *param_3,uint *param_4,
          E_CIPHER_ALGORITHM param_5)

{
  uchar uVar1;
  void *pvVar2;
  
  pvVar2 = m_hXORCipher;
  if (param_5 != 0) {
    if ((param_5 != 1) && (param_5 == 2)) {
      pvVar2 = *(void **)(this + 4);
    }
    if (pvVar2 != (void *)0x0) goto LAB_0059d464;
  }
  pvVar2 = m_hXORCipher;
  if ((m_eProtocol != 0) && (m_eProtocol == 1)) {
    pvVar2 = *(void **)(this + 4);
  }
LAB_0059d464:
  uVar1 = CipherAlgorithmInterface::Decrypt_20(pvVar2,param_1,param_2,param_3,param_4);
  return uVar1;
}




/* from: libgsconnect:AlgoEncrypt.cpp
   addr: 0059D490 */

void __thiscall clAlgoEncrypt::GetPublicKey(clAlgoEncrypt *this,RSA_PUBLIC_KEY *param_1)

{
  int iVar1;
  RSA_PUBLIC_KEY *pRVar2;
  
  pRVar2 = m_publicKey;
  for (iVar1 = 0x41; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)param_1 = *(undefined4 *)pRVar2;
    pRVar2 = pRVar2 + 4;
    param_1 = param_1 + 4;
  }
  return;
}




/* from: libgsconnect:AlgoEncrypt.cpp
   addr: 0059D4B0 */

void __thiscall clAlgoEncrypt::SetSessionKey(clAlgoEncrypt *this,_SESSION_KEY_ *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  if (*(int *)(this + 8) != 0) {
    ExtAlloc_Free_4(*(int *)(this + 8));
  }
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 0xc) = uVar1;
  puVar2 = (undefined4 *)ExtAlloc_Malloc_4(uVar1);
  uVar5 = *(uint *)(this + 0xc);
  *(undefined4 **)(this + 8) = puVar2;
  puVar6 = *(undefined4 **)param_1;
  for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar2 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar2 = puVar2 + 1;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined1 *)puVar2 = *(undefined1 *)puVar6;
    puVar6 = (undefined4 *)((int)puVar6 + 1);
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  }
  if (m_eProtocol == 1) {
    UninitializeCipher_4(*(undefined4 *)(this + 4));
    pvVar3 = CipherAlgorithmInterface::InitializeCipher_12
                       (0,*(uchar **)(this + 8),*(uint *)(this + 0xc));
    *(void **)(this + 4) = pvVar3;
  }
  return;
}




/* from: libgsconnect:AlgoEncrypt.cpp
   addr: 0059D520 */

uchar __thiscall clAlgoEncrypt::AllocatePKCStructures(clAlgoEncrypt *this)

{
  FreePKCStructures(this);
  m_randomData = (RANDOM_STRUCT *)ExtAlloc_Malloc_4(0x28);
  m_publicKey = (RSA_PUBLIC_KEY *)ExtAlloc_Malloc_4(0x104);
  m_privateKey = (RSA_PRIVATE_KEY *)ExtAlloc_Malloc_4(0x2c4);
  m_protoKey = (RSA_PROTO_KEY *)ExtAlloc_Malloc_4(8);
  if ((((m_randomData != (RANDOM_STRUCT *)0x0) && (m_publicKey != (RSA_PUBLIC_KEY *)0x0)) &&
      (m_privateKey != (RSA_PRIVATE_KEY *)0x0)) && (m_protoKey != (RSA_PROTO_KEY *)0x0)) {
    return '\x01';
  }
  return '\0';
}




/* from: libgsconnect:AlgoEncrypt.cpp
   addr: 0059D590 */

void __thiscall clAlgoEncrypt::FreePKCStructures(clAlgoEncrypt *this)

{
  if (m_randomData != (RANDOM_STRUCT *)0x0) {
    ExtAlloc_Free_4(m_randomData);
  }
  if (m_publicKey != (RSA_PUBLIC_KEY *)0x0) {
    ExtAlloc_Free_4(m_publicKey);
  }
  if (m_privateKey != (RSA_PRIVATE_KEY *)0x0) {
    ExtAlloc_Free_4(m_privateKey);
  }
  if (m_protoKey != (RSA_PROTO_KEY *)0x0) {
    ExtAlloc_Free_4(m_protoKey);
  }
  m_randomData = (RANDOM_STRUCT *)0x0;
  m_publicKey = (RSA_PUBLIC_KEY *)0x0;
  m_privateKey = (RSA_PRIVATE_KEY *)0x0;
  m_protoKey = (RSA_PROTO_KEY *)0x0;
  return;
}




/* from: libgsconnect:AlgoEncrypt.cpp
   addr: 0059D5F0 */

uchar __thiscall clAlgoEncrypt::GenerateSessionKey(clAlgoEncrypt *this,uint param_1)

{
  uchar *puVar1;
  
  PTIMER_fn_ulElapsedMiliSeconds();
  if (param_1 < 0x10) {
    return '\0';
  }
  if (*(int *)(this + 8) != 0) {
    ExtAlloc_Free_4(*(int *)(this + 8));
  }
  puVar1 = (uchar *)ExtAlloc_Malloc_4(param_1);
  *(uchar **)(this + 8) = puVar1;
  *(uint *)(this + 0xc) = param_1;
  PRNGAlgorithmInterface::GenerateBlock_12(m_hPRNG,puVar1,param_1);
  PTIMER_fn_ulElapsedMiliSeconds();
  return '\x01';
}




/* from: libgsconnect:AlgoEncrypt.cpp
   addr: 0059D640 */

uchar __thiscall clAlgoEncrypt::GenerateGlobalKeyPair(clAlgoEncrypt *this)

{
  uchar uVar1;
  
  PTIMER_fn_ulElapsedMiliSeconds();
  uVar1 = PKCAlgorithmInterface::GenerateKeyPair_20
                    (m_hPKC,m_publicKey,m_privateKey,m_protoKey,m_randomData);
  PKCAlgorithmInterface::RandomFinal_8(m_hPKC,m_randomData);
  PTIMER_fn_ulElapsedMiliSeconds();
  return uVar1;
}




/* from: libgsconnect:AlgoEncrypt.cpp
   addr: 0059D690 */

void __thiscall clAlgoEncrypt::GenerateRandomData(clAlgoEncrypt *this)

{
  uchar *puVar1;
  clAlgoEncrypt *local_4;
  
  local_4 = this;
  PTIMER_fn_ulElapsedMiliSeconds();
  PKCAlgorithmInterface::RandomInit_8(m_hPKC,m_randomData);
  local_4 = (clAlgoEncrypt *)0x0;
  GetRandomBytesNeeded_12(m_hPKC,&local_4,m_randomData);
  while (local_4 != (clAlgoEncrypt *)0x0) {
    puVar1 = (uchar *)ExtAlloc_Malloc_4(local_4);
    PRNGAlgorithmInterface::GenerateBlock_12(m_hPRNG,puVar1,(uint)local_4);
    PKCAlgorithmInterface::RandomUpdate_16(m_hPKC,m_randomData,puVar1,(uint)local_4);
    GetRandomBytesNeeded_12(m_hPKC,&local_4,m_randomData);
    ExtAlloc_Free_4(puVar1);
  }
  PTIMER_fn_ulElapsedMiliSeconds();
  return;
}

