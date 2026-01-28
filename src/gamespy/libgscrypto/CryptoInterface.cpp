
/* from: libgscrypto:CryptoInterface.cpp
   addr: 005B87E0 */

void * PRNGAlgorithmInterface::CreatePRNG
                 (GSCRYPTO_PRNG_ALGO param_1,GSCRYPTO_HASH_ALGO param_2,uchar *param_3,uint param_4)

{
  _Rb_tree<void*,struct__STL::pair<void*_const,class_CHttpDownload*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CHttpDownload*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CHttpDownload*>_>_>
  *this;
  _Rb_tree_node_base *p_Var1;
  void *pvVar2;
  clPointerMap<void*,class_PRNGAlgorithm*> *pcVar3;
  _Rb_tree_node_base *p_Var4;
  bool bVar5;
  _Rb_tree_node_base *p_Var6;
  void *local_14;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005cc27c;
  local_c = ExceptionList;
  local_14 = (void *)0x0;
  if (param_1 != 0) {
    return (void *)0x0;
  }
  ExceptionList = &local_c;
  param_1 = ExtAlloc_Malloc_4(0x2c);
  local_4 = 0;
  if ((PRNGModule_MGF1 *)param_1 == (PRNGModule_MGF1 *)0x0) {
    pvVar2 = (void *)0x0;
  }
  else {
    pvVar2 = (void *)PRNGModule_MGF1::PRNGModule_MGF1
                               ((PRNGModule_MGF1 *)param_1,param_2,param_3,param_4);
  }
  local_4 = 0xffffffff;
  if (pvVar2 == (void *)0x0) {
    ExceptionList = local_c;
    return (void *)0x0;
  }
  if (StaticInterface<class_PRNGAlgorithm>::m_Instances ==
      (clPointerMap<void*,class_PRNGAlgorithm*> *)0x0) {
    pcVar3 = (clPointerMap<void*,class_PRNGAlgorithm*> *)ExtAlloc_Malloc_4(0x14);
    param_3 = (uchar *)pcVar3;
    if (pcVar3 == (clPointerMap<void*,class_PRNGAlgorithm*> *)0x0) {
      StaticInterface<class_PRNGAlgorithm>::m_Instances =
           (clPointerMap<void*,class_PRNGAlgorithm*> *)0x0;
    }
    else {
      *(undefined1 **)(pcVar3 + 0x10) = &clPointerMap<void*,class_PRNGAlgorithm*>::_vbtable_;
      local_4 = 2;
      _STL::
      _Rb_tree<void*,struct__STL::pair<void*_const,class_CryptoAlgorithm*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CryptoAlgorithm*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CryptoAlgorithm*>_>_>
      ::
      Rb_tree<void*,struct__STL::pair<void*_const,class_CryptoAlgorithm*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CryptoAlgorithm*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CryptoAlgorithm*>_>_>
                ((_Rb_tree<void*,struct__STL::pair<void*_const,class_CryptoAlgorithm*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CryptoAlgorithm*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CryptoAlgorithm*>_>_>
                  *)(pcVar3 + 4),(less<void*> *)&param_4,
                 (Allocator<struct__STL::pair<void*_const,class_CryptoAlgorithm*>_> *)&param_1);
      *(undefined ***)pcVar3 = &clPointerMap<void*,class_PRNGAlgorithm*>::_vftable_;
      StaticInterface<class_PRNGAlgorithm>::m_Instances = pcVar3;
    }
  }
  local_4 = 0xffffffff;
  this = (_Rb_tree<void*,struct__STL::pair<void*_const,class_CHttpDownload*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CHttpDownload*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CHttpDownload*>_>_>
          *)(StaticInterface<class_PRNGAlgorithm>::m_Instances + 4);
  bVar5 = true;
  p_Var6 = *(_Rb_tree_node_base **)this;
  p_Var1 = p_Var6;
  p_Var4 = *(_Rb_tree_node_base **)(p_Var6 + 4);
  while (p_Var4 != (_Rb_tree_node_base *)0x0) {
    bVar5 = pvVar2 < *(void **)(p_Var4 + 0x10);
    p_Var1 = p_Var4;
    if (bVar5) {
      p_Var4 = *(_Rb_tree_node_base **)(p_Var4 + 8);
    }
    else {
      p_Var4 = *(_Rb_tree_node_base **)(p_Var4 + 0xc);
    }
  }
  p_Var4 = p_Var1;
  local_14 = pvVar2;
  local_10 = pvVar2;
  if (bVar5) {
    if (p_Var1 == *(_Rb_tree_node_base **)(p_Var6 + 8)) {
      p_Var6 = (_Rb_tree_node_base *)&param_3;
      goto LAB_005b8920;
    }
    p_Var4 = _STL::_Rb_global<bool>::M_decrement(p_Var1);
  }
  if (local_14 <= *(void **)(p_Var4 + 0x10)) {
    ExceptionList = local_c;
    return pvVar2;
  }
  p_Var6 = (_Rb_tree_node_base *)&param_2;
LAB_005b8920:
  _STL::
  _Rb_tree<void*,struct__STL::pair<void*_const,class_CHttpDownload*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CHttpDownload*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CHttpDownload*>_>_>
  ::M_insert(this,p_Var6,(_Rb_tree_node_base *)0x0,(pair<void*_const,class_CHttpDownload*> *)p_Var1,
             (_Rb_tree_node_base *)&local_14);
  ExceptionList = local_c;
  return pvVar2;
}




/* from: libgscrypto:CryptoInterface.cpp
   addr: 005B8940 */

void PRNGAlgorithmInterface::DestroyPRNG(void *param_1)

{
  if (StaticInterface<class_PRNGAlgorithm>::m_Instances !=
      (clPointerMap<void*,class_PRNGAlgorithm*> *)0x0) {
    (**(code **)(*(int *)StaticInterface<class_PRNGAlgorithm>::m_Instances + 8))(param_1);
    if (*(int *)(StaticInterface<class_PRNGAlgorithm>::m_Instances + 8) == 0) {
      if (StaticInterface<class_PRNGAlgorithm>::m_Instances !=
          (clPointerMap<void*,class_PRNGAlgorithm*> *)0x0) {
        (*(code *)**(undefined4 **)StaticInterface<class_PRNGAlgorithm>::m_Instances)(1);
      }
      StaticInterface<class_PRNGAlgorithm>::m_Instances =
           (clPointerMap<void*,class_PRNGAlgorithm*> *)0x0;
    }
  }
  return;
}




/* from: libgscrypto:CryptoInterface.cpp
   addr: 005B8980 */

void PRNGAlgorithmInterface::DestroyAllPRNG(void)

{
  if (StaticInterface<class_PRNGAlgorithm>::m_Instances !=
      (clPointerMap<void*,class_PRNGAlgorithm*> *)0x0) {
    (*(code *)**(undefined4 **)StaticInterface<class_PRNGAlgorithm>::m_Instances)(1);
    StaticInterface<class_PRNGAlgorithm>::m_Instances =
         (clPointerMap<void*,class_PRNGAlgorithm*> *)0x0;
  }
  return;
}




/* from: libgscrypto:CryptoInterface.cpp
   addr: 005B89A0 */

void PRNGAlgorithmInterface::GenerateBlock(void *param_1,uchar *param_2,uint param_3)

{
  uint uVar1;
  uchar *puVar2;
  
  puVar2 = param_2;
  for (uVar1 = param_3 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    puVar2[0] = '\0';
    puVar2[1] = '\0';
    puVar2[2] = '\0';
    puVar2[3] = '\0';
    puVar2 = puVar2 + 4;
  }
  for (uVar1 = param_3 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar2 = '\0';
    puVar2 = puVar2 + 1;
  }
  if (param_1 != (void *)0x0) {
                    /* WARNING: Load size is inaccurate */
    (**(code **)(*param_1 + 0xc))(param_2,param_3);
  }
  return;
}




/* from: libgscrypto:CryptoInterface.cpp
   addr: 005B89E0 */

void * CipherAlgorithmInterface::CreateCipher
                 (GSCRYPTO_CIPHER_ALGO param_1,uchar *param_2,uint param_3)

{
  _Rb_tree<void*,struct__STL::pair<void*_const,class_CHttpDownload*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CHttpDownload*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CHttpDownload*>_>_>
  *this;
  _Rb_tree_node_base *p_Var1;
  void *pvVar2;
  clPointerMap<void*,class_CryptoAlgorithm*> *pcVar3;
  _Rb_tree_node_base *p_Var4;
  _Rb_tree_node_base *p_Var5;
  bool bVar6;
  undefined4 local_18;
  void *local_14;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005cc2b6;
  local_c = ExceptionList;
  local_18 = 0;
  if (param_1 == 0) {
    ExceptionList = &local_c;
    param_1 = ExtAlloc_Malloc_4(0x10);
    local_4 = 0;
    if ((CipherModule_Blowfish *)param_1 == (CipherModule_Blowfish *)0x0) goto LAB_005b8a60;
    pvVar2 = (void *)CipherModule_Blowfish::CipherModule_Blowfish
                               ((CipherModule_Blowfish *)param_1,param_2,param_3);
  }
  else {
    if (param_1 != 1) {
      return (void *)0x0;
    }
    ExceptionList = &local_c;
    param_1 = ExtAlloc_Malloc_4(0x10);
    local_4 = 1;
    if ((CipherModule_GSXor *)param_1 == (CipherModule_GSXor *)0x0) {
LAB_005b8a60:
      pvVar2 = (void *)0x0;
    }
    else {
      pvVar2 = (void *)CipherModule_GSXor::CipherModule_GSXor
                                 ((CipherModule_GSXor *)param_1,param_2,param_3);
    }
  }
  local_4 = 0xffffffff;
  if (pvVar2 == (void *)0x0) {
    ExceptionList = local_c;
    return (void *)0x0;
  }
  if (StaticInterface<class_CryptoAlgorithm>::m_Instances ==
      (clPointerMap<void*,class_CryptoAlgorithm*> *)0x0) {
    pcVar3 = (clPointerMap<void*,class_CryptoAlgorithm*> *)ExtAlloc_Malloc_4(0x14);
    param_1 = (GSCRYPTO_CIPHER_ALGO)pcVar3;
    if (pcVar3 == (clPointerMap<void*,class_CryptoAlgorithm*> *)0x0) {
      StaticInterface<class_CryptoAlgorithm>::m_Instances =
           (clPointerMap<void*,class_CryptoAlgorithm*> *)0x0;
    }
    else {
      *(undefined1 **)(pcVar3 + 0x10) = &clPointerMap<void*,class_CryptoAlgorithm*>::_vbtable_;
      local_4 = 3;
      _STL::
      _Rb_tree<void*,struct__STL::pair<void*_const,class_CryptoAlgorithm*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CryptoAlgorithm*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CryptoAlgorithm*>_>_>
      ::
      Rb_tree<void*,struct__STL::pair<void*_const,class_CryptoAlgorithm*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CryptoAlgorithm*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CryptoAlgorithm*>_>_>
                ((_Rb_tree<void*,struct__STL::pair<void*_const,class_CryptoAlgorithm*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CryptoAlgorithm*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CryptoAlgorithm*>_>_>
                  *)(pcVar3 + 4),(less<void*> *)&param_2,
                 (Allocator<struct__STL::pair<void*_const,class_CryptoAlgorithm*>_> *)&param_3);
      *(undefined ***)pcVar3 = &clPointerMap<void*,class_CryptoAlgorithm*>::_vftable_;
      StaticInterface<class_CryptoAlgorithm>::m_Instances = pcVar3;
    }
  }
  local_4 = 0xffffffff;
  this = (_Rb_tree<void*,struct__STL::pair<void*_const,class_CHttpDownload*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CHttpDownload*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CHttpDownload*>_>_>
          *)(StaticInterface<class_CryptoAlgorithm>::m_Instances + 4);
  bVar6 = true;
  p_Var5 = *(_Rb_tree_node_base **)this;
  p_Var1 = p_Var5;
  p_Var4 = *(_Rb_tree_node_base **)(p_Var5 + 4);
  while (p_Var4 != (_Rb_tree_node_base *)0x0) {
    bVar6 = pvVar2 < *(void **)(p_Var4 + 0x10);
    p_Var1 = p_Var4;
    if (bVar6) {
      p_Var4 = *(_Rb_tree_node_base **)(p_Var4 + 8);
    }
    else {
      p_Var4 = *(_Rb_tree_node_base **)(p_Var4 + 0xc);
    }
  }
  p_Var4 = p_Var1;
  local_14 = pvVar2;
  local_10 = pvVar2;
  if (bVar6) {
    if (p_Var1 == *(_Rb_tree_node_base **)(p_Var5 + 8)) {
      p_Var5 = (_Rb_tree_node_base *)&param_1;
      goto LAB_005b8b36;
    }
    p_Var4 = _STL::_Rb_global<bool>::M_decrement(p_Var1);
  }
  if (local_14 <= *(void **)(p_Var4 + 0x10)) {
    ExceptionList = local_c;
    return pvVar2;
  }
  p_Var5 = (_Rb_tree_node_base *)&local_18;
LAB_005b8b36:
  _STL::
  _Rb_tree<void*,struct__STL::pair<void*_const,class_CHttpDownload*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CHttpDownload*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CHttpDownload*>_>_>
  ::M_insert(this,p_Var5,(_Rb_tree_node_base *)0x0,(pair<void*_const,class_CHttpDownload*> *)p_Var1,
             (_Rb_tree_node_base *)&local_14);
  ExceptionList = local_c;
  return pvVar2;
}




/* from: libgscrypto:CryptoInterface.cpp
   addr: 005B8B60 */

void CipherAlgorithmInterface::DestroyCipher(void *param_1)

{
  if (StaticInterface<class_CryptoAlgorithm>::m_Instances !=
      (clPointerMap<void*,class_CryptoAlgorithm*> *)0x0) {
    (**(code **)(*(int *)StaticInterface<class_CryptoAlgorithm>::m_Instances + 8))(param_1);
    if (*(int *)(StaticInterface<class_CryptoAlgorithm>::m_Instances + 8) == 0) {
      if (StaticInterface<class_CryptoAlgorithm>::m_Instances !=
          (clPointerMap<void*,class_CryptoAlgorithm*> *)0x0) {
        (*(code *)**(undefined4 **)StaticInterface<class_CryptoAlgorithm>::m_Instances)(1);
      }
      StaticInterface<class_CryptoAlgorithm>::m_Instances =
           (clPointerMap<void*,class_CryptoAlgorithm*> *)0x0;
    }
  }
  return;
}




/* from: libgscrypto:CryptoInterface.cpp
   addr: 005B8BA0 */

void CipherAlgorithmInterface::DestroyAllCipher(void)

{
  if (StaticInterface<class_CryptoAlgorithm>::m_Instances !=
      (clPointerMap<void*,class_CryptoAlgorithm*> *)0x0) {
    (*(code *)**(undefined4 **)StaticInterface<class_CryptoAlgorithm>::m_Instances)(1);
    StaticInterface<class_CryptoAlgorithm>::m_Instances =
         (clPointerMap<void*,class_CryptoAlgorithm*> *)0x0;
  }
  return;
}




/* from: libgscrypto:CryptoInterface.cpp
   addr: 005B8BC0 */

uchar CipherAlgorithmInterface::Encrypt
                (void *param_1,void *param_2,uint param_3,void *param_4,uint *param_5)

{
  uchar uVar1;
  
  if (param_1 == (void *)0x0) {
    return '\0';
  }
                    /* WARNING: Load size is inaccurate */
  uVar1 = (**(code **)(*param_1 + 0xc))(param_2,param_3,param_4,param_5);
  return uVar1;
}




/* from: libgscrypto:CryptoInterface.cpp
   addr: 005B8BF0 */

uchar CipherAlgorithmInterface::Decrypt
                (void *param_1,void *param_2,uint param_3,void *param_4,uint *param_5)

{
  uchar uVar1;
  
  if (param_1 == (void *)0x0) {
    return '\0';
  }
                    /* WARNING: Load size is inaccurate */
  uVar1 = (**(code **)(*param_1 + 0x10))(param_2,param_3,param_4,param_5);
  return uVar1;
}




/* from: libgscrypto:CryptoInterface.cpp
   addr: 005B8C20 */

void * PKCAlgorithmInterface::CreatePKC(GSCRYPTO_PKC_ALGO param_1)

{
  _Rb_tree<void*,struct__STL::pair<void*_const,class_CHttpDownload*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CHttpDownload*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CHttpDownload*>_>_>
  *this;
  _Rb_tree_node_base *p_Var1;
  void *pvVar2;
  clPointerMap<void*,class_PKCAlgorithm*> *pcVar3;
  _Rb_tree_node_base *p_Var4;
  _Rb_tree_node_base *p_Var5;
  bool bVar6;
  less<void*> local_1d;
  clPointerMap<void*,class_PKCAlgorithm*> *local_1c;
  _Rb_tree_node_base local_18 [4];
  void *local_14;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005cc2dc;
  local_c = ExceptionList;
  local_1c = (clPointerMap<void*,class_PKCAlgorithm*> *)0x0;
  if (param_1 != 0) {
    return (void *)0x0;
  }
  ExceptionList = &local_c;
  param_1 = ExtAlloc_Malloc_4(0x10);
  local_4 = 0;
  if ((PKCModule_RSA *)param_1 == (PKCModule_RSA *)0x0) {
    pvVar2 = (void *)0x0;
  }
  else {
    pvVar2 = (void *)PKCModule_RSA::PKCModule_RSA((PKCModule_RSA *)param_1);
  }
  local_4 = 0xffffffff;
  if (pvVar2 == (void *)0x0) {
    ExceptionList = local_c;
    return (void *)0x0;
  }
  if (StaticInterface<class_PKCAlgorithm>::m_Instances ==
      (clPointerMap<void*,class_PKCAlgorithm*> *)0x0) {
    pcVar3 = (clPointerMap<void*,class_PKCAlgorithm*> *)ExtAlloc_Malloc_4(0x14);
    local_1c = pcVar3;
    if (pcVar3 == (clPointerMap<void*,class_PKCAlgorithm*> *)0x0) {
      StaticInterface<class_PKCAlgorithm>::m_Instances =
           (clPointerMap<void*,class_PKCAlgorithm*> *)0x0;
    }
    else {
      *(undefined1 **)(pcVar3 + 0x10) = &clPointerMap<void*,class_PKCAlgorithm*>::_vbtable_;
      local_4 = 2;
      _STL::
      _Rb_tree<void*,struct__STL::pair<void*_const,class_CryptoAlgorithm*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CryptoAlgorithm*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CryptoAlgorithm*>_>_>
      ::
      Rb_tree<void*,struct__STL::pair<void*_const,class_CryptoAlgorithm*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CryptoAlgorithm*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CryptoAlgorithm*>_>_>
                ((_Rb_tree<void*,struct__STL::pair<void*_const,class_CryptoAlgorithm*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CryptoAlgorithm*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CryptoAlgorithm*>_>_>
                  *)(pcVar3 + 4),&local_1d,
                 (Allocator<struct__STL::pair<void*_const,class_CryptoAlgorithm*>_> *)&param_1);
      *(undefined ***)pcVar3 = &clPointerMap<void*,class_PKCAlgorithm*>::_vftable_;
      StaticInterface<class_PKCAlgorithm>::m_Instances = pcVar3;
    }
  }
  local_4 = 0xffffffff;
  this = (_Rb_tree<void*,struct__STL::pair<void*_const,class_CHttpDownload*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CHttpDownload*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CHttpDownload*>_>_>
          *)(StaticInterface<class_PKCAlgorithm>::m_Instances + 4);
  bVar6 = true;
  p_Var5 = *(_Rb_tree_node_base **)this;
  p_Var1 = p_Var5;
  p_Var4 = *(_Rb_tree_node_base **)(p_Var5 + 4);
  while (p_Var4 != (_Rb_tree_node_base *)0x0) {
    bVar6 = pvVar2 < *(void **)(p_Var4 + 0x10);
    p_Var1 = p_Var4;
    if (bVar6) {
      p_Var4 = *(_Rb_tree_node_base **)(p_Var4 + 8);
    }
    else {
      p_Var4 = *(_Rb_tree_node_base **)(p_Var4 + 0xc);
    }
  }
  p_Var4 = p_Var1;
  local_14 = pvVar2;
  local_10 = pvVar2;
  if (bVar6) {
    if (p_Var1 == *(_Rb_tree_node_base **)(p_Var5 + 8)) {
      p_Var5 = (_Rb_tree_node_base *)&local_1c;
      goto LAB_005b8d3d;
    }
    p_Var4 = _STL::_Rb_global<bool>::M_decrement(p_Var1);
  }
  if (local_14 <= *(void **)(p_Var4 + 0x10)) {
    ExceptionList = local_c;
    return pvVar2;
  }
  p_Var5 = local_18;
LAB_005b8d3d:
  _STL::
  _Rb_tree<void*,struct__STL::pair<void*_const,class_CHttpDownload*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CHttpDownload*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CHttpDownload*>_>_>
  ::M_insert(this,p_Var5,(_Rb_tree_node_base *)0x0,(pair<void*_const,class_CHttpDownload*> *)p_Var1,
             (_Rb_tree_node_base *)&local_14);
  ExceptionList = local_c;
  return pvVar2;
}




/* from: libgscrypto:CryptoInterface.cpp
   addr: 005B8D70 */

void PKCAlgorithmInterface::DestroyPKC(void *param_1)

{
  if (StaticInterface<class_PKCAlgorithm>::m_Instances !=
      (clPointerMap<void*,class_PKCAlgorithm*> *)0x0) {
    (**(code **)(*(int *)StaticInterface<class_PKCAlgorithm>::m_Instances + 8))(param_1);
    if (*(int *)(StaticInterface<class_PKCAlgorithm>::m_Instances + 8) == 0) {
      if (StaticInterface<class_PKCAlgorithm>::m_Instances !=
          (clPointerMap<void*,class_PKCAlgorithm*> *)0x0) {
        (*(code *)**(undefined4 **)StaticInterface<class_PKCAlgorithm>::m_Instances)(1);
      }
      StaticInterface<class_PKCAlgorithm>::m_Instances =
           (clPointerMap<void*,class_PKCAlgorithm*> *)0x0;
    }
  }
  return;
}




/* from: libgscrypto:CryptoInterface.cpp
   addr: 005B8DB0 */

void PKCAlgorithmInterface::DestroyAllPKC(void)

{
  if (StaticInterface<class_PKCAlgorithm>::m_Instances !=
      (clPointerMap<void*,class_PKCAlgorithm*> *)0x0) {
    (*(code *)**(undefined4 **)StaticInterface<class_PKCAlgorithm>::m_Instances)(1);
    StaticInterface<class_PKCAlgorithm>::m_Instances =
         (clPointerMap<void*,class_PKCAlgorithm*> *)0x0;
  }
  return;
}




/* from: libgscrypto:CryptoInterface.cpp
   addr: 005B8DD0 */

uchar PKCAlgorithmInterface::GenerateKeyPair
                (void *param_1,RSA_PUBLIC_KEY *param_2,RSA_PRIVATE_KEY *param_3,
                RSA_PROTO_KEY *param_4,RANDOM_STRUCT *param_5)

{
  uchar uVar1;
  
  if (param_1 == (void *)0x0) {
    return '\0';
  }
                    /* WARNING: Load size is inaccurate */
  uVar1 = (**(code **)(*param_1 + 4))(param_2,param_3,param_4,param_5);
  return uVar1;
}




/* from: libgscrypto:CryptoInterface.cpp
   addr: 005B8E00 */

uchar PKCAlgorithmInterface::PublicEncrypt
                (void *param_1,uchar *param_2,uint param_3,uchar *param_4,uint *param_5,
                RSA_PUBLIC_KEY *param_6,RANDOM_STRUCT *param_7)

{
  uchar uVar1;
  
  if (param_1 == (void *)0x0) {
    return '\0';
  }
                    /* WARNING: Load size is inaccurate */
  uVar1 = (**(code **)(*param_1 + 8))(param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}




/* from: libgscrypto:CryptoInterface.cpp
   addr: 005B8E40 */

uchar PKCAlgorithmInterface::PrivateDecrypt
                (void *param_1,uchar *param_2,uint param_3,uchar *param_4,uint *param_5,
                RSA_PRIVATE_KEY *param_6)

{
  uchar uVar1;
  
  if (param_1 == (void *)0x0) {
    return '\0';
  }
                    /* WARNING: Load size is inaccurate */
  uVar1 = (**(code **)(*param_1 + 0x14))(param_2,param_3,param_4,param_5,param_6);
  return uVar1;
}




/* from: libgscrypto:CryptoInterface.cpp
   addr: 005B8E70 */

uchar PKCAlgorithmInterface::RandomInit(void *param_1,RANDOM_STRUCT *param_2)

{
  uchar uVar1;
  
  if (param_1 == (void *)0x0) {
    return '\0';
  }
                    /* WARNING: Load size is inaccurate */
  uVar1 = (**(code **)(*param_1 + 0x18))(param_2);
  return uVar1;
}




/* from: libgscrypto:CryptoInterface.cpp
   addr: 005B8E90 */

uchar PKCAlgorithmInterface::RandomUpdate
                (void *param_1,RANDOM_STRUCT *param_2,uchar *param_3,uint param_4)

{
  uchar uVar1;
  
  if (param_1 == (void *)0x0) {
    return '\0';
  }
                    /* WARNING: Load size is inaccurate */
  uVar1 = (**(code **)(*param_1 + 0x1c))(param_2,param_3,param_4);
  return uVar1;
}




/* from: libgscrypto:CryptoInterface.cpp
   addr: 005B8EC0 */

uchar PKCAlgorithmInterface::RandomFinal(void *param_1,RANDOM_STRUCT *param_2)

{
  if (param_1 == (void *)0x0) {
    return '\0';
  }
                    /* WARNING: Load size is inaccurate */
  (**(code **)(*param_1 + 0x20))(param_2);
  return '\x01';
}




/* from: libgscrypto:CryptoInterface.cpp
   addr: 005B8EE0 */

uchar PKCAlgorithmInterface::GetRandomBytesNeeded
                (void *param_1,uint *param_2,RANDOM_STRUCT *param_3)

{
  uchar uVar1;
  
  if (param_1 == (void *)0x0) {
    return '\0';
  }
                    /* WARNING: Load size is inaccurate */
  uVar1 = (**(code **)(*param_1 + 0x24))(param_2,param_3);
  return uVar1;
}




/* from: libgscrypto:CryptoInterface.cpp
   addr: 005B8F00
   addr: 005B8F00 */

void * __thiscall
clPointerMap<void*,class_PRNGAlgorithm*>::_vector_deleting_destructor_
          (clPointerMap<void*,class_PRNGAlgorithm*> *this,uint param_1)

{
  ~clPointerMap<void*,class_PRNGAlgorithm*>(this);
  if ((param_1 & 1) != 0) {
    ExtAlloc_Free_4(this);
  }
  return this;
}




/* from: libgscrypto:CryptoInterface.cpp
   addr: 005B8F20
   addr: 005B8F20 */

void * __thiscall
clPointerMap<void*,class_CryptoAlgorithm*>::_vector_deleting_destructor_
          (clPointerMap<void*,class_CryptoAlgorithm*> *this,uint param_1)

{
  ~clPointerMap<void*,class_CryptoAlgorithm*>(this);
  if ((param_1 & 1) != 0) {
    ExtAlloc_Free_4(this);
  }
  return this;
}




/* from: libgscrypto:CryptoInterface.cpp
   addr: 005B8F40
   addr: 005B8F40 */

void * __thiscall
clPointerMap<void*,class_PKCAlgorithm*>::_scalar_deleting_destructor_
          (clPointerMap<void*,class_PKCAlgorithm*> *this,uint param_1)

{
  ~clPointerMap<void*,class_PKCAlgorithm*>(this);
  if ((param_1 & 1) != 0) {
    ExtAlloc_Free_4(this);
  }
  return this;
}




/* from: libgscrypto:CryptoInterface.cpp
   addr: 005B8F60 */

void __thiscall
clPointerMap<void*,class_PRNGAlgorithm*>::~clPointerMap<void*,class_PRNGAlgorithm*>
          (clPointerMap<void*,class_PRNGAlgorithm*> *this)

{
  map<void*,class_PKCAlgorithm*,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_PKCAlgorithm*>_>_>
  *this_00;
  int iVar1;
  int iVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005cc31f;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = &_vftable_;
  this_00 = (map<void*,class_PKCAlgorithm*,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_PKCAlgorithm*>_>_>
             *)(this + 4);
  iVar1 = *(int *)this;
  local_4 = 0;
  _STL::
  map<void*,class_PKCAlgorithm*,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_PKCAlgorithm*>_>_>
  ::begin(this_00);
  (**(code **)(iVar1 + 0xc))();
  pvStack_c = (void *)0x1;
  if (*(int *)(this + 8) != 0) {
    iVar1 = *(int *)(*(int *)this_00 + 4);
    while (iVar1 != 0) {
      _STL::
      _Rb_tree<void*,struct__STL::pair<void*_const,class_PRNGAlgorithm*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_PRNGAlgorithm*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_PRNGAlgorithm*>_>_>
      ::M_erase((_Rb_tree<void*,struct__STL::pair<void*_const,class_PRNGAlgorithm*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_PRNGAlgorithm*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_PRNGAlgorithm*>_>_>
                 *)this_00,
                *(_Rb_tree_node<struct__STL::pair<void*_const,class_PRNGAlgorithm*>_> **)
                 (iVar1 + 0xc));
      iVar2 = *(int *)(iVar1 + 8);
      ExtAlloc_Free_4(iVar1);
      iVar1 = iVar2;
    }
    *(int *)(*(int *)this_00 + 8) = *(int *)this_00;
    *(undefined4 *)(*(int *)this_00 + 4) = 0;
    *(int *)(*(int *)this_00 + 0xc) = *(int *)this_00;
    *(undefined4 *)(this + 8) = 0;
  }
  ExtAlloc_Free_4(*(undefined4 *)this_00);
  ExceptionList = this;
  return;
}




/* from: libgscrypto:CryptoInterface.cpp
   addr: 005B9020 */

void __thiscall
ExtAlloc::map<void*,class_PRNGAlgorithm*,struct__STL::less<void*>_>::
~map<void*,class_PRNGAlgorithm*,struct__STL::less<void*>_>
          (map<void*,class_PRNGAlgorithm*,struct__STL::less<void*>_> *this)

{
  int iVar1;
  int iVar2;
  void **ppvVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005cc338;
  local_c = ExceptionList;
  local_4 = 0;
  ppvVar3 = &local_c;
  if (*(int *)(this + 4) != 0) {
    iVar2 = *(int *)(*(int *)this + 4);
    ExceptionList = &local_c;
    while (iVar2 != 0) {
      _STL::
      _Rb_tree<void*,struct__STL::pair<void*_const,class_PRNGAlgorithm*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_PRNGAlgorithm*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_PRNGAlgorithm*>_>_>
      ::M_erase((_Rb_tree<void*,struct__STL::pair<void*_const,class_PRNGAlgorithm*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_PRNGAlgorithm*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_PRNGAlgorithm*>_>_>
                 *)this,*(_Rb_tree_node<struct__STL::pair<void*_const,class_PRNGAlgorithm*>_> **)
                         (iVar2 + 0xc));
      iVar1 = *(int *)(iVar2 + 8);
      ExtAlloc_Free_4(iVar2);
      iVar2 = iVar1;
    }
    *(int *)(*(int *)this + 8) = *(int *)this;
    *(undefined4 *)(*(int *)this + 4) = 0;
    *(int *)(*(int *)this + 0xc) = *(int *)this;
    *(undefined4 *)(this + 4) = 0;
    ppvVar3 = (void **)ExceptionList;
  }
  ExceptionList = ppvVar3;
  ExtAlloc_Free_4(*(undefined4 *)this);
  ExceptionList = local_c;
  return;
}




/* from: libgscrypto:CryptoInterface.cpp
   addr: 005B90B0 */

int __thiscall
clPointerMap<void*,class_PRNGAlgorithm*>::erase
          (clPointerMap<void*,class_PRNGAlgorithm*> *this,_Rb_tree_node_base *param_2,
          _Rb_tree_node_base *param_3)

{
  _Rb_tree<void*,struct__STL::pair<void*_const,class_PRNGAlgorithm*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_PRNGAlgorithm*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_PRNGAlgorithm*>_>_>
  *this_00;
  _Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
  *p_Var1;
  int iVar2;
  _Rb_tree_node_base *p_Var3;
  _Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
  *p_Var4;
  _Rb_tree_node_base *p_Var5;
  _Rb_tree_node_base *p_Var6;
  int local_8;
  _List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
  local_4 [4];
  
  p_Var5 = param_3;
  local_8 = 0;
  p_Var6 = param_2;
  if (param_2 != param_3) {
    do {
      if (p_Var6 == *(_Rb_tree_node_base **)(this + 4)) break;
      if (*(undefined4 **)(p_Var6 + 0x14) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(p_Var6 + 0x14))(1);
      }
      local_8 = local_8 + 1;
      *(undefined4 *)(p_Var6 + 0x14) = 0;
      p_Var6 = _STL::_Rb_global<bool>::M_increment(p_Var6);
    } while (p_Var6 != p_Var5);
  }
  _STL::_List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
  ::List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
            (local_4,(_List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
                      *)&param_2);
  this_00 = (_Rb_tree<void*,struct__STL::pair<void*_const,class_PRNGAlgorithm*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_PRNGAlgorithm*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_PRNGAlgorithm*>_>_>
             *)(this + 4);
  _STL::_List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
  ::List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
            ((_List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
              *)&param_3,local_4);
  p_Var6 = *(_Rb_tree_node_base **)this_00;
  p_Var3 = param_3;
  if ((param_3 == *(_Rb_tree_node_base **)(p_Var6 + 8)) && (p_Var5 == p_Var6)) {
    if (*(int *)(this + 8) != 0) {
      p_Var4 = *(_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
                 **)(p_Var6 + 4);
      while (p_Var4 != (_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
                        *)0x0) {
        _STL::
        _Rb_tree<void*,struct__STL::pair<void*_const,class_PRNGAlgorithm*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_PRNGAlgorithm*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_PRNGAlgorithm*>_>_>
        ::M_erase(this_00,*(_Rb_tree_node<struct__STL::pair<void*_const,class_PRNGAlgorithm*>_> **)
                           (p_Var4 + 0xc));
        p_Var1 = *(_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
                   **)(p_Var4 + 8);
        _STL::
        _STLP_alloc_proxy<struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>*,struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
        ::deallocate((_STLP_alloc_proxy<struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>*,struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
                      *)this_00,p_Var4,1);
        p_Var4 = p_Var1;
      }
      *(int *)(*(int *)this_00 + 8) = *(int *)this_00;
      *(undefined4 *)(*(int *)this_00 + 4) = 0;
      *(int *)(*(int *)this_00 + 0xc) = *(int *)this_00;
      *(undefined4 *)(this + 8) = 0;
      return local_8;
    }
  }
  else {
    while (p_Var3 != p_Var5) {
      param_3 = *(_Rb_tree_node_base **)(p_Var3 + 0xc);
      if (param_3 == (_Rb_tree_node_base *)0x0) {
        p_Var6 = *(_Rb_tree_node_base **)(p_Var3 + 4);
        param_3 = p_Var3;
        if (p_Var3 == *(_Rb_tree_node_base **)(p_Var6 + 0xc)) {
          do {
            param_3 = p_Var6;
            p_Var6 = *(_Rb_tree_node_base **)(param_3 + 4);
          } while (param_3 == *(_Rb_tree_node_base **)(p_Var6 + 0xc));
        }
        if (*(_Rb_tree_node_base **)(param_3 + 0xc) != p_Var6) {
          param_3 = p_Var6;
        }
      }
      else {
        for (p_Var6 = *(_Rb_tree_node_base **)(param_3 + 8); p_Var6 != (_Rb_tree_node_base *)0x0;
            p_Var6 = *(_Rb_tree_node_base **)(p_Var6 + 8)) {
          param_3 = p_Var6;
        }
      }
      iVar2 = *(int *)this_00;
      p_Var6 = _STL::_Rb_global<bool>::Rebalance_for_erase
                         (p_Var3,(_Rb_tree_node_base **)(iVar2 + 4),
                          (_Rb_tree_node_base **)(iVar2 + 8),(_Rb_tree_node_base **)(iVar2 + 0xc));
      ExtAlloc_Free_4(p_Var6);
      *(int *)(this + 8) = *(int *)(this + 8) + -1;
      p_Var3 = param_3;
    }
  }
  return local_8;
}




/* from: libgscrypto:CryptoInterface.cpp
   addr: 005B91F0 */

void __thiscall
clPointerMap<void*,class_CryptoAlgorithm*>::~clPointerMap<void*,class_CryptoAlgorithm*>
          (clPointerMap<void*,class_CryptoAlgorithm*> *this)

{
  map<void*,class_PKCAlgorithm*,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_PKCAlgorithm*>_>_>
  *this_00;
  int iVar1;
  int iVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005cc37f;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = &_vftable_;
  this_00 = (map<void*,class_PKCAlgorithm*,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_PKCAlgorithm*>_>_>
             *)(this + 4);
  iVar1 = *(int *)this;
  local_4 = 0;
  _STL::
  map<void*,class_PKCAlgorithm*,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_PKCAlgorithm*>_>_>
  ::begin(this_00);
  (**(code **)(iVar1 + 0xc))();
  pvStack_c = (void *)0x1;
  if (*(int *)(this + 8) != 0) {
    iVar1 = *(int *)(*(int *)this_00 + 4);
    while (iVar1 != 0) {
      _STL::
      _Rb_tree<void*,struct__STL::pair<void*_const,class_CryptoAlgorithm*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CryptoAlgorithm*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CryptoAlgorithm*>_>_>
      ::M_erase((_Rb_tree<void*,struct__STL::pair<void*_const,class_CryptoAlgorithm*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CryptoAlgorithm*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CryptoAlgorithm*>_>_>
                 *)this_00,
                *(_Rb_tree_node<struct__STL::pair<void*_const,class_CryptoAlgorithm*>_> **)
                 (iVar1 + 0xc));
      iVar2 = *(int *)(iVar1 + 8);
      ExtAlloc_Free_4(iVar1);
      iVar1 = iVar2;
    }
    *(int *)(*(int *)this_00 + 8) = *(int *)this_00;
    *(undefined4 *)(*(int *)this_00 + 4) = 0;
    *(int *)(*(int *)this_00 + 0xc) = *(int *)this_00;
    *(undefined4 *)(this + 8) = 0;
  }
  ExtAlloc_Free_4(*(undefined4 *)this_00);
  ExceptionList = this;
  return;
}




/* from: libgscrypto:CryptoInterface.cpp
   addr: 005B92B0 */

void __thiscall
ExtAlloc::map<void*,class_CryptoAlgorithm*,struct__STL::less<void*>_>::
~map<void*,class_CryptoAlgorithm*,struct__STL::less<void*>_>
          (map<void*,class_CryptoAlgorithm*,struct__STL::less<void*>_> *this)

{
  int iVar1;
  int iVar2;
  void **ppvVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005cc398;
  local_c = ExceptionList;
  local_4 = 0;
  ppvVar3 = &local_c;
  if (*(int *)(this + 4) != 0) {
    iVar2 = *(int *)(*(int *)this + 4);
    ExceptionList = &local_c;
    while (iVar2 != 0) {
      _STL::
      _Rb_tree<void*,struct__STL::pair<void*_const,class_CryptoAlgorithm*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CryptoAlgorithm*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CryptoAlgorithm*>_>_>
      ::M_erase((_Rb_tree<void*,struct__STL::pair<void*_const,class_CryptoAlgorithm*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CryptoAlgorithm*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CryptoAlgorithm*>_>_>
                 *)this,*(_Rb_tree_node<struct__STL::pair<void*_const,class_CryptoAlgorithm*>_> **)
                         (iVar2 + 0xc));
      iVar1 = *(int *)(iVar2 + 8);
      ExtAlloc_Free_4(iVar2);
      iVar2 = iVar1;
    }
    *(int *)(*(int *)this + 8) = *(int *)this;
    *(undefined4 *)(*(int *)this + 4) = 0;
    *(int *)(*(int *)this + 0xc) = *(int *)this;
    *(undefined4 *)(this + 4) = 0;
    ppvVar3 = (void **)ExceptionList;
  }
  ExceptionList = ppvVar3;
  ExtAlloc_Free_4(*(undefined4 *)this);
  ExceptionList = local_c;
  return;
}




/* from: libgscrypto:CryptoInterface.cpp
   addr: 005B9340 */

int __thiscall
clPointerMap<void*,class_CryptoAlgorithm*>::erase
          (clPointerMap<void*,class_CryptoAlgorithm*> *this,_Rb_tree_node_base *param_2,
          _Rb_tree_node_base *param_3)

{
  _Rb_tree<void*,struct__STL::pair<void*_const,class_CryptoAlgorithm*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CryptoAlgorithm*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CryptoAlgorithm*>_>_>
  *this_00;
  _Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
  *p_Var1;
  int iVar2;
  _Rb_tree_node_base *p_Var3;
  _Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
  *p_Var4;
  _Rb_tree_node_base *p_Var5;
  _Rb_tree_node_base *p_Var6;
  int local_8;
  _List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
  local_4 [4];
  
  p_Var5 = param_3;
  local_8 = 0;
  p_Var6 = param_2;
  if (param_2 != param_3) {
    do {
      if (p_Var6 == *(_Rb_tree_node_base **)(this + 4)) break;
      if (*(undefined4 **)(p_Var6 + 0x14) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(p_Var6 + 0x14))(1);
      }
      local_8 = local_8 + 1;
      *(undefined4 *)(p_Var6 + 0x14) = 0;
      p_Var6 = _STL::_Rb_global<bool>::M_increment(p_Var6);
    } while (p_Var6 != p_Var5);
  }
  _STL::_List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
  ::List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
            (local_4,(_List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
                      *)&param_2);
  this_00 = (_Rb_tree<void*,struct__STL::pair<void*_const,class_CryptoAlgorithm*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CryptoAlgorithm*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CryptoAlgorithm*>_>_>
             *)(this + 4);
  _STL::_List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
  ::List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
            ((_List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
              *)&param_3,local_4);
  p_Var6 = *(_Rb_tree_node_base **)this_00;
  p_Var3 = param_3;
  if ((param_3 == *(_Rb_tree_node_base **)(p_Var6 + 8)) && (p_Var5 == p_Var6)) {
    if (*(int *)(this + 8) != 0) {
      p_Var4 = *(_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
                 **)(p_Var6 + 4);
      while (p_Var4 != (_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
                        *)0x0) {
        _STL::
        _Rb_tree<void*,struct__STL::pair<void*_const,class_CryptoAlgorithm*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CryptoAlgorithm*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CryptoAlgorithm*>_>_>
        ::M_erase(this_00,*(_Rb_tree_node<struct__STL::pair<void*_const,class_CryptoAlgorithm*>_> **
                           )(p_Var4 + 0xc));
        p_Var1 = *(_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
                   **)(p_Var4 + 8);
        _STL::
        _STLP_alloc_proxy<struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>*,struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
        ::deallocate((_STLP_alloc_proxy<struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>*,struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
                      *)this_00,p_Var4,1);
        p_Var4 = p_Var1;
      }
      *(int *)(*(int *)this_00 + 8) = *(int *)this_00;
      *(undefined4 *)(*(int *)this_00 + 4) = 0;
      *(int *)(*(int *)this_00 + 0xc) = *(int *)this_00;
      *(undefined4 *)(this + 8) = 0;
      return local_8;
    }
  }
  else {
    while (p_Var3 != p_Var5) {
      param_3 = *(_Rb_tree_node_base **)(p_Var3 + 0xc);
      if (param_3 == (_Rb_tree_node_base *)0x0) {
        p_Var6 = *(_Rb_tree_node_base **)(p_Var3 + 4);
        param_3 = p_Var3;
        if (p_Var3 == *(_Rb_tree_node_base **)(p_Var6 + 0xc)) {
          do {
            param_3 = p_Var6;
            p_Var6 = *(_Rb_tree_node_base **)(param_3 + 4);
          } while (param_3 == *(_Rb_tree_node_base **)(p_Var6 + 0xc));
        }
        if (*(_Rb_tree_node_base **)(param_3 + 0xc) != p_Var6) {
          param_3 = p_Var6;
        }
      }
      else {
        for (p_Var6 = *(_Rb_tree_node_base **)(param_3 + 8); p_Var6 != (_Rb_tree_node_base *)0x0;
            p_Var6 = *(_Rb_tree_node_base **)(p_Var6 + 8)) {
          param_3 = p_Var6;
        }
      }
      iVar2 = *(int *)this_00;
      p_Var6 = _STL::_Rb_global<bool>::Rebalance_for_erase
                         (p_Var3,(_Rb_tree_node_base **)(iVar2 + 4),
                          (_Rb_tree_node_base **)(iVar2 + 8),(_Rb_tree_node_base **)(iVar2 + 0xc));
      ExtAlloc_Free_4(p_Var6);
      *(int *)(this + 8) = *(int *)(this + 8) + -1;
      p_Var3 = param_3;
    }
  }
  return local_8;
}




/* from: libgscrypto:CryptoInterface.cpp
   addr: 005B9480 */

void __thiscall
clPointerMap<void*,class_PKCAlgorithm*>::~clPointerMap<void*,class_PKCAlgorithm*>
          (clPointerMap<void*,class_PKCAlgorithm*> *this)

{
  map<void*,class_PKCAlgorithm*,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_PKCAlgorithm*>_>_>
  *this_00;
  int iVar1;
  int iVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005cc3df;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = &_vftable_;
  this_00 = (map<void*,class_PKCAlgorithm*,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_PKCAlgorithm*>_>_>
             *)(this + 4);
  iVar1 = *(int *)this;
  local_4 = 0;
  _STL::
  map<void*,class_PKCAlgorithm*,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_PKCAlgorithm*>_>_>
  ::begin(this_00);
  (**(code **)(iVar1 + 0xc))();
  pvStack_c = (void *)0x1;
  if (*(int *)(this + 8) != 0) {
    iVar1 = *(int *)(*(int *)this_00 + 4);
    while (iVar1 != 0) {
      _STL::
      _Rb_tree<void*,struct__STL::pair<void*_const,class_PKCAlgorithm*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_PKCAlgorithm*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_PKCAlgorithm*>_>_>
      ::M_erase((_Rb_tree<void*,struct__STL::pair<void*_const,class_PKCAlgorithm*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_PKCAlgorithm*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_PKCAlgorithm*>_>_>
                 *)this_00,
                *(_Rb_tree_node<struct__STL::pair<void*_const,class_PKCAlgorithm*>_> **)
                 (iVar1 + 0xc));
      iVar2 = *(int *)(iVar1 + 8);
      ExtAlloc_Free_4(iVar1);
      iVar1 = iVar2;
    }
    *(int *)(*(int *)this_00 + 8) = *(int *)this_00;
    *(undefined4 *)(*(int *)this_00 + 4) = 0;
    *(int *)(*(int *)this_00 + 0xc) = *(int *)this_00;
    *(undefined4 *)(this + 8) = 0;
  }
  ExtAlloc_Free_4(*(undefined4 *)this_00);
  ExceptionList = this;
  return;
}




/* from: libgscrypto:CryptoInterface.cpp
   addr: 005B9540 */

void __thiscall
ExtAlloc::map<void*,class_PKCAlgorithm*,struct__STL::less<void*>_>::
~map<void*,class_PKCAlgorithm*,struct__STL::less<void*>_>
          (map<void*,class_PKCAlgorithm*,struct__STL::less<void*>_> *this)

{
  int iVar1;
  int iVar2;
  void **ppvVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005cc3f8;
  local_c = ExceptionList;
  local_4 = 0;
  ppvVar3 = &local_c;
  if (*(int *)(this + 4) != 0) {
    iVar2 = *(int *)(*(int *)this + 4);
    ExceptionList = &local_c;
    while (iVar2 != 0) {
      _STL::
      _Rb_tree<void*,struct__STL::pair<void*_const,class_PKCAlgorithm*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_PKCAlgorithm*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_PKCAlgorithm*>_>_>
      ::M_erase((_Rb_tree<void*,struct__STL::pair<void*_const,class_PKCAlgorithm*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_PKCAlgorithm*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_PKCAlgorithm*>_>_>
                 *)this,*(_Rb_tree_node<struct__STL::pair<void*_const,class_PKCAlgorithm*>_> **)
                         (iVar2 + 0xc));
      iVar1 = *(int *)(iVar2 + 8);
      ExtAlloc_Free_4(iVar2);
      iVar2 = iVar1;
    }
    *(int *)(*(int *)this + 8) = *(int *)this;
    *(undefined4 *)(*(int *)this + 4) = 0;
    *(int *)(*(int *)this + 0xc) = *(int *)this;
    *(undefined4 *)(this + 4) = 0;
    ppvVar3 = (void **)ExceptionList;
  }
  ExceptionList = ppvVar3;
  ExtAlloc_Free_4(*(undefined4 *)this);
  ExceptionList = local_c;
  return;
}




/* from: libgscrypto:CryptoInterface.cpp
   addr: 005B95D0 */

int __thiscall
clPointerMap<void*,class_PKCAlgorithm*>::erase
          (clPointerMap<void*,class_PKCAlgorithm*> *this,_Rb_tree_node_base *param_2,
          _Rb_tree_node_base *param_3)

{
  _Rb_tree<void*,struct__STL::pair<void*_const,class_PKCAlgorithm*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_PKCAlgorithm*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_PKCAlgorithm*>_>_>
  *this_00;
  _Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
  *p_Var1;
  int iVar2;
  _Rb_tree_node_base *p_Var3;
  _Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
  *p_Var4;
  _Rb_tree_node_base *p_Var5;
  _Rb_tree_node_base *p_Var6;
  int local_8;
  _List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
  local_4 [4];
  
  p_Var5 = param_3;
  local_8 = 0;
  p_Var6 = param_2;
  if (param_2 != param_3) {
    do {
      if (p_Var6 == *(_Rb_tree_node_base **)(this + 4)) break;
      if (*(undefined4 **)(p_Var6 + 0x14) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(p_Var6 + 0x14))(1);
      }
      local_8 = local_8 + 1;
      *(undefined4 *)(p_Var6 + 0x14) = 0;
      p_Var6 = _STL::_Rb_global<bool>::M_increment(p_Var6);
    } while (p_Var6 != p_Var5);
  }
  _STL::_List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
  ::List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
            (local_4,(_List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
                      *)&param_2);
  this_00 = (_Rb_tree<void*,struct__STL::pair<void*_const,class_PKCAlgorithm*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_PKCAlgorithm*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_PKCAlgorithm*>_>_>
             *)(this + 4);
  _STL::_List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
  ::List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
            ((_List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
              *)&param_3,local_4);
  p_Var6 = *(_Rb_tree_node_base **)this_00;
  p_Var3 = param_3;
  if ((param_3 == *(_Rb_tree_node_base **)(p_Var6 + 8)) && (p_Var5 == p_Var6)) {
    if (*(int *)(this + 8) != 0) {
      p_Var4 = *(_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
                 **)(p_Var6 + 4);
      while (p_Var4 != (_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
                        *)0x0) {
        _STL::
        _Rb_tree<void*,struct__STL::pair<void*_const,class_PKCAlgorithm*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_PKCAlgorithm*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_PKCAlgorithm*>_>_>
        ::M_erase(this_00,*(_Rb_tree_node<struct__STL::pair<void*_const,class_PKCAlgorithm*>_> **)
                           (p_Var4 + 0xc));
        p_Var1 = *(_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
                   **)(p_Var4 + 8);
        _STL::
        _STLP_alloc_proxy<struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>*,struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
        ::deallocate((_STLP_alloc_proxy<struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>*,struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
                      *)this_00,p_Var4,1);
        p_Var4 = p_Var1;
      }
      *(int *)(*(int *)this_00 + 8) = *(int *)this_00;
      *(undefined4 *)(*(int *)this_00 + 4) = 0;
      *(int *)(*(int *)this_00 + 0xc) = *(int *)this_00;
      *(undefined4 *)(this + 8) = 0;
      return local_8;
    }
  }
  else {
    while (p_Var3 != p_Var5) {
      param_3 = *(_Rb_tree_node_base **)(p_Var3 + 0xc);
      if (param_3 == (_Rb_tree_node_base *)0x0) {
        p_Var6 = *(_Rb_tree_node_base **)(p_Var3 + 4);
        param_3 = p_Var3;
        if (p_Var3 == *(_Rb_tree_node_base **)(p_Var6 + 0xc)) {
          do {
            param_3 = p_Var6;
            p_Var6 = *(_Rb_tree_node_base **)(param_3 + 4);
          } while (param_3 == *(_Rb_tree_node_base **)(p_Var6 + 0xc));
        }
        if (*(_Rb_tree_node_base **)(param_3 + 0xc) != p_Var6) {
          param_3 = p_Var6;
        }
      }
      else {
        for (p_Var6 = *(_Rb_tree_node_base **)(param_3 + 8); p_Var6 != (_Rb_tree_node_base *)0x0;
            p_Var6 = *(_Rb_tree_node_base **)(p_Var6 + 8)) {
          param_3 = p_Var6;
        }
      }
      iVar2 = *(int *)this_00;
      p_Var6 = _STL::_Rb_global<bool>::Rebalance_for_erase
                         (p_Var3,(_Rb_tree_node_base **)(iVar2 + 4),
                          (_Rb_tree_node_base **)(iVar2 + 8),(_Rb_tree_node_base **)(iVar2 + 0xc));
      ExtAlloc_Free_4(p_Var6);
      *(int *)(this + 8) = *(int *)(this + 8) + -1;
      p_Var3 = param_3;
    }
  }
  return local_8;
}




/* from: libgscrypto:CryptoInterface.cpp
   addr: 005B9710
   addr: 005B9710
   addr: 005B9710
   addr: 005B9710 */

void __thiscall
clPointerMap<void*,class_CryptoAlgorithm*>::erase
          (clPointerMap<void*,class_CryptoAlgorithm*> *this,void *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(this + 4);
  iVar3 = iVar1;
  iVar2 = *(int *)(iVar1 + 4);
  while (iVar2 != 0) {
    if (*(void **)(iVar2 + 0x10) < param_1) {
      iVar2 = *(int *)(iVar2 + 0xc);
    }
    else {
      iVar3 = iVar2;
      iVar2 = *(int *)(iVar2 + 8);
    }
  }
  if ((iVar3 == iVar1) || (param_1 < *(void **)(iVar3 + 0x10))) {
    iVar3 = iVar1;
  }
  (**(code **)(*(int *)this + 0x10))(&param_1,iVar3);
  return;
}




/* from: libgscrypto:CryptoInterface.cpp
   addr: 005B9760 */

void __thiscall
_STL::
_Rb_tree<void*,struct__STL::pair<void*_const,class_PRNGAlgorithm*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_PRNGAlgorithm*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_PRNGAlgorithm*>_>_>
::M_erase(_Rb_tree<void*,struct__STL::pair<void*_const,class_PRNGAlgorithm*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_PRNGAlgorithm*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_PRNGAlgorithm*>_>_>
          *this,_Rb_tree_node<struct__STL::pair<void*_const,class_PRNGAlgorithm*>_> *param_1)

{
  _Rb_tree_node<struct__STL::pair<void*_const,class_PRNGAlgorithm*>_> *p_Var1;
  
  if (param_1 != (_Rb_tree_node<struct__STL::pair<void*_const,class_PRNGAlgorithm*>_> *)0x0) {
    do {
      M_erase(this,*(_Rb_tree_node<struct__STL::pair<void*_const,class_PRNGAlgorithm*>_> **)
                    (param_1 + 0xc));
      p_Var1 = *(_Rb_tree_node<struct__STL::pair<void*_const,class_PRNGAlgorithm*>_> **)
                (param_1 + 8);
      ExtAlloc_Free_4(param_1);
      param_1 = p_Var1;
    } while (p_Var1 != (_Rb_tree_node<struct__STL::pair<void*_const,class_PRNGAlgorithm*>_> *)0x0);
  }
  return;
}




/* from: libgscrypto:CryptoInterface.cpp
   addr: 005B9790 */

void __thiscall
_STL::
_Rb_tree<void*,struct__STL::pair<void*_const,class_CryptoAlgorithm*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CryptoAlgorithm*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CryptoAlgorithm*>_>_>
::M_erase(_Rb_tree<void*,struct__STL::pair<void*_const,class_CryptoAlgorithm*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CryptoAlgorithm*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CryptoAlgorithm*>_>_>
          *this,_Rb_tree_node<struct__STL::pair<void*_const,class_CryptoAlgorithm*>_> *param_1)

{
  _Rb_tree_node<struct__STL::pair<void*_const,class_CryptoAlgorithm*>_> *p_Var1;
  
  if (param_1 != (_Rb_tree_node<struct__STL::pair<void*_const,class_CryptoAlgorithm*>_> *)0x0) {
    do {
      M_erase(this,*(_Rb_tree_node<struct__STL::pair<void*_const,class_CryptoAlgorithm*>_> **)
                    (param_1 + 0xc));
      p_Var1 = *(_Rb_tree_node<struct__STL::pair<void*_const,class_CryptoAlgorithm*>_> **)
                (param_1 + 8);
      ExtAlloc_Free_4(param_1);
      param_1 = p_Var1;
    } while (p_Var1 != (_Rb_tree_node<struct__STL::pair<void*_const,class_CryptoAlgorithm*>_> *)0x0)
    ;
  }
  return;
}




/* from: libgscrypto:CryptoInterface.cpp
   addr: 005B97C0 */

void __thiscall
_STL::
_Rb_tree<void*,struct__STL::pair<void*_const,class_PKCAlgorithm*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_PKCAlgorithm*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_PKCAlgorithm*>_>_>
::M_erase(_Rb_tree<void*,struct__STL::pair<void*_const,class_PKCAlgorithm*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_PKCAlgorithm*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_PKCAlgorithm*>_>_>
          *this,_Rb_tree_node<struct__STL::pair<void*_const,class_PKCAlgorithm*>_> *param_1)

{
  _Rb_tree_node<struct__STL::pair<void*_const,class_PKCAlgorithm*>_> *p_Var1;
  
  if (param_1 != (_Rb_tree_node<struct__STL::pair<void*_const,class_PKCAlgorithm*>_> *)0x0) {
    do {
      M_erase(this,*(_Rb_tree_node<struct__STL::pair<void*_const,class_PKCAlgorithm*>_> **)
                    (param_1 + 0xc));
      p_Var1 = *(_Rb_tree_node<struct__STL::pair<void*_const,class_PKCAlgorithm*>_> **)(param_1 + 8)
      ;
      ExtAlloc_Free_4(param_1);
      param_1 = p_Var1;
    } while (p_Var1 != (_Rb_tree_node<struct__STL::pair<void*_const,class_PKCAlgorithm*>_> *)0x0);
  }
  return;
}

