
/* from: libgscrypto:HashAlgorithms.cpp
   addr: 005B97F0 */

HashModule_SHA1 * __thiscall HashModule_SHA1::HashModule_SHA1(HashModule_SHA1 *this)

{
  SecureHashAlgorithm1 *this_00;
  undefined4 uVar1;
  int in_stack_00000004;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005cc43c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (in_stack_00000004 != 0) {
    ExceptionList = &local_c;
    *(undefined1 **)(this + 4) = &_vbtable_;
  }
  *(undefined4 *)(this + 0xc) = 1;
  local_4 = 1;
  *(undefined ***)this = &_vftable_;
  this[8] = (HashModule_SHA1)0x0;
  this_00 = (SecureHashAlgorithm1 *)ExtAlloc_Malloc_4(100);
  local_4 = CONCAT31(local_4._1_3_,2);
  if (this_00 == (SecureHashAlgorithm1 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = SecureHashAlgorithm1::SecureHashAlgorithm1(this_00);
  }
  *(undefined4 *)(this + 0x24) = uVar1;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  ExceptionList = local_c;
  return this;
}




/* from: libgscrypto:HashAlgorithms.cpp
   addr: 005B98A0
   addr: 005B98A0 */

void * __thiscall HashModule_SHA1::_vector_deleting_destructor_(HashModule_SHA1 *this,uint param_1)

{
  ~HashModule_SHA1(this);
  if ((param_1 & 1) != 0) {
    ExtAlloc_Free_4(this);
  }
  return this;
}




/* from: libgscrypto:HashAlgorithms.cpp
   addr: 005B98C0 */

void __thiscall HashModule_SHA1::~HashModule_SHA1(HashModule_SHA1 *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005cc458;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = &_vftable_;
  local_4 = 0;
  if (*(undefined4 **)(this + 0x24) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x24))(1);
  }
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined ***)this = &clExtalloc_Override_Baseclass::_vftable_;
  ExceptionList = local_c;
  return;
}




/* from: libgscrypto:HashAlgorithms.cpp
   addr: 005B9930 */

void __thiscall HashModule_SHA1::Reset(HashModule_SHA1 *this)

{
  SecureHashAlgorithm1::SHAReset(*(SecureHashAlgorithm1 **)(this + 0x24));
  this[8] = (HashModule_SHA1)0x0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  return;
}




/* from: libgscrypto:HashAlgorithms.cpp
   addr: 005B9960 */

uchar __thiscall HashModule_SHA1::ComputeHash(HashModule_SHA1 *this,uchar *param_1,uint param_2)

{
  if (this[8] != (HashModule_SHA1)0x0) {
    return '\0';
  }
  SecureHashAlgorithm1::SHAUpdate(*(SecureHashAlgorithm1 **)(this + 0x24),param_1,param_2);
  return '\x01';
}




/* from: libgscrypto:HashAlgorithms.cpp
   addr: 005B9990 */

uchar __thiscall HashModule_SHA1::ComputeHash(HashModule_SHA1 *this,_iobuf *param_1)

{
  uint uVar1;
  uchar local_400 [1024];
  
  uVar1 = fread(local_400,1,0x400,param_1);
  while (uVar1 != 0) {
    SecureHashAlgorithm1::SHAUpdate(*(SecureHashAlgorithm1 **)(this + 0x24),local_400,uVar1);
    uVar1 = fread(local_400,1,0x400,param_1);
  }
  return '\x01';
}




/* from: libgscrypto:HashAlgorithms.cpp
   addr: 005B99F0 */

uchar __thiscall HashModule_SHA1::Finalize(HashModule_SHA1 *this)

{
  if (this[8] != (HashModule_SHA1)0x0) {
    return '\0';
  }
  SecureHashAlgorithm1::SHAFinal(*(SecureHashAlgorithm1 **)(this + 0x24),(uchar *)(this + 0x10));
  this[8] = (HashModule_SHA1)0x1;
  return '\x01';
}




/* from: libgscrypto:HashAlgorithms.cpp
   addr: 005B9A20 */

uchar __thiscall HashModule_SHA1::GetRawDigest(HashModule_SHA1 *this,uchar *param_1)

{
  int iVar1;
  HashModule_SHA1 *pHVar2;
  
  if (this[8] == (HashModule_SHA1)0x0) {
    return '\0';
  }
  pHVar2 = this + 0x10;
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)param_1 = *(undefined4 *)pHVar2;
    pHVar2 = pHVar2 + 4;
    param_1 = param_1 + 4;
  }
  return '\x01';
}




/* from: libgscrypto:HashAlgorithms.cpp
   addr: 005B9A50 */

uchar __thiscall HashModule_SHA1::GetHexDigest(HashModule_SHA1 *this,char *param_1)

{
  int iVar1;
  
  if (this[8] == (HashModule_SHA1)0x0) {
    return '\0';
  }
  iVar1 = 0;
  do {
    sprintf(param_1,s__02x,(uint)(byte)this[iVar1 + 0x10]);
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 2;
  } while (iVar1 < 0x14);
  return '\x01';
}




/* from: libgscrypto:HashAlgorithms.cpp
   addr: 005B9AB0 */

HashModule_MD5 * __thiscall HashModule_MD5::HashModule_MD5(HashModule_MD5 *this)

{
  MD5 *this_00;
  undefined4 uVar1;
  int in_stack_00000004;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005cc482;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (in_stack_00000004 != 0) {
    ExceptionList = &local_c;
    *(undefined1 **)(this + 4) = &_vbtable_;
  }
  *(undefined4 *)(this + 0xc) = 0;
  local_4 = 0;
  *(undefined ***)this = &_vftable_;
  this[8] = (HashModule_MD5)0x0;
  this_00 = (MD5 *)ExtAlloc_Malloc_4(0x74);
  local_4 = CONCAT31(local_4._1_3_,1);
  if (this_00 == (MD5 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = MD5::MD5(this_00);
  }
  *(undefined4 *)(this + 0x20) = uVar1;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  ExceptionList = local_c;
  return this;
}




/* from: libgscrypto:HashAlgorithms.cpp
   addr: 005B9B60
   addr: 005B9B60 */

void * __thiscall HashModule_MD5::_vector_deleting_destructor_(HashModule_MD5 *this,uint param_1)

{
  ~HashModule_MD5(this);
  if ((param_1 & 1) != 0) {
    ExtAlloc_Free_4(this);
  }
  return this;
}




/* from: libgscrypto:HashAlgorithms.cpp
   addr: 005B9B80 */

void __thiscall HashModule_MD5::~HashModule_MD5(HashModule_MD5 *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005cc498;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = &_vftable_;
  local_4 = 0;
  if (*(undefined4 **)(this + 0x20) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x20))(1);
  }
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined ***)this = &clExtalloc_Override_Baseclass::_vftable_;
  ExceptionList = local_c;
  return;
}




/* from: libgscrypto:HashAlgorithms.cpp
   addr: 005B9BE0 */

void __thiscall HashModule_MD5::Reset(HashModule_MD5 *this)

{
  MD5::MD5Reset(*(MD5 **)(this + 0x20));
  this[8] = (HashModule_MD5)0x0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  return;
}




/* from: libgscrypto:HashAlgorithms.cpp
   addr: 005B9C10 */

uchar __thiscall HashModule_MD5::ComputeHash(HashModule_MD5 *this,uchar *param_1,uint param_2)

{
  if (this[8] != (HashModule_MD5)0x0) {
    return '\0';
  }
  MD5::MD5Update(*(MD5 **)(this + 0x20),param_1,param_2);
  return '\x01';
}




/* from: libgscrypto:HashAlgorithms.cpp
   addr: 005B9C40 */

uchar __thiscall HashModule_MD5::ComputeHash(HashModule_MD5 *this,_iobuf *param_1)

{
  uint uVar1;
  uchar local_400 [1024];
  
  uVar1 = fread(local_400,1,0x400,param_1);
  while (uVar1 != 0) {
    MD5::MD5Update(*(MD5 **)(this + 0x20),local_400,uVar1);
    uVar1 = fread(local_400,1,0x400,param_1);
  }
  return '\x01';
}




/* from: libgscrypto:HashAlgorithms.cpp
   addr: 005B9CA0 */

uchar __thiscall HashModule_MD5::Finalize(HashModule_MD5 *this)

{
  if (this[8] != (HashModule_MD5)0x0) {
    return '\0';
  }
  MD5::MD5Final(*(MD5 **)(this + 0x20),(uchar *)(this + 0x10));
  this[8] = (HashModule_MD5)0x1;
  return '\x01';
}




/* from: libgscrypto:HashAlgorithms.cpp
   addr: 005B9CD0 */

uchar __thiscall HashModule_MD5::GetRawDigest(HashModule_MD5 *this,uchar *param_1)

{
  if (this[8] == (HashModule_MD5)0x0) {
    return '\0';
  }
  *(undefined4 *)param_1 = *(undefined4 *)(this + 0x10);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(this + 0x14);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(this + 0x18);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(this + 0x1c);
  return '\x01';
}




/* from: libgscrypto:HashAlgorithms.cpp
   addr: 005B9D00 */

uchar __thiscall HashModule_MD5::GetHexDigest(HashModule_MD5 *this,char *param_1)

{
  int iVar1;
  
  if (this[8] == (HashModule_MD5)0x0) {
    return '\0';
  }
  iVar1 = 0;
  do {
    sprintf(param_1,s__02x,(uint)(byte)this[iVar1 + 0x10]);
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 2;
  } while (iVar1 < 0x10);
  return '\x01';
}

