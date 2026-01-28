
/* from: libgscrypto:GSCryptoInterface.cpp
   addr: 005B86B0 */

void StopNumberGenerator_4(void *param_1)

{
  if (param_1 == (void *)0x0) {
    PRNGAlgorithmInterface::DestroyAllPRNG();
    return;
  }
  PRNGAlgorithmInterface::DestroyPRNG(param_1);
  return;
}




/* from: libgscrypto:GSCryptoInterface.cpp
   addr: 005B86F0 */

void UninitializeCipher_4(void *param_1)

{
  if (param_1 == (void *)0x0) {
    CipherAlgorithmInterface::DestroyAllCipher();
    return;
  }
  CipherAlgorithmInterface::DestroyCipher(param_1);
  return;
}




/* from: libgscrypto:GSCryptoInterface.cpp
   addr: 005B8740 */

void UninitializePKC_4(void *param_1)

{
  if (param_1 == (void *)0x0) {
    PKCAlgorithmInterface::DestroyAllPKC();
    return;
  }
  PKCAlgorithmInterface::DestroyPKC(param_1);
  return;
}




/* from: libgscrypto:GSCryptoInterface.cpp
   addr: 005B87C0 */

uchar GetRandomBytesNeeded_12(void *param_1,uint *param_2,RANDOM_STRUCT *param_3)

{
  uchar uVar1;
  
  uVar1 = PKCAlgorithmInterface::GetRandomBytesNeeded(param_1,param_2,param_3);
  return uVar1;
}

