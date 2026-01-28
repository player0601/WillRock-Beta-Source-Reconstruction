
/* from: libgscrypto:PKCAlgorithms.cpp
   addr: 005BA6B0 */

PKCModule_RSA * __thiscall PKCModule_RSA::PKCModule_RSA(PKCModule_RSA *this)

{
  RSA *this_00;
  undefined4 uVar1;
  int in_stack_00000004;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005cc5bc;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (in_stack_00000004 != 0) {
    ExceptionList = &local_c;
    *(undefined1 **)(this + 4) = &_vbtable_;
  }
  *(undefined4 *)(this + 8) = 0;
  local_4 = 1;
  *(undefined ***)this = &_vftable_;
  this_00 = (RSA *)ExtAlloc_Malloc_4(0xc);
  local_4 = CONCAT31(local_4._1_3_,2);
  if (this_00 == (RSA *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = RSA::RSA(this_00);
  }
  *(undefined4 *)(this + 0xc) = uVar1;
  ExceptionList = local_c;
  return this;
}




/* from: libgscrypto:PKCAlgorithms.cpp
   addr: 005BA740
   addr: 005BA740 */

void * __thiscall PKCModule_RSA::_vector_deleting_destructor_(PKCModule_RSA *this,uint param_1)

{
  ~PKCModule_RSA(this);
  if ((param_1 & 1) != 0) {
    ExtAlloc_Free_4(this);
  }
  return this;
}




/* from: libgscrypto:PKCAlgorithms.cpp
   addr: 005BA760 */

void __thiscall PKCModule_RSA::~PKCModule_RSA(PKCModule_RSA *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005cc5d8;
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

