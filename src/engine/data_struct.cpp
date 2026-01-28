
/* from: engine:data_struct.cpp
   addr: 004DBFE0 */

void __thiscall dsDYN_ARRAY::dsDYN_ARRAY(dsDYN_ARRAY *this,int param_1,int param_2,void **param_3)

{
  *(int *)(this + 8) = param_1;
  *(int *)(this + 0x10) = param_2;
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)this = 1;
  if (param_3 == (void **)0x0) {
    *(dsDYN_ARRAY **)(this + 0x18) = this + 0x14;
    return;
  }
  *(void ***)(this + 0x18) = param_3;
  return;
}




/* from: engine:data_struct.cpp
   addr: 004DC030 */

void __thiscall dsDYN_ARRAY::~dsDYN_ARRAY(dsDYN_ARRAY *this)

{
  if (((byte)*this & 1) != 0) {
    apFree((void *)**(undefined4 **)(this + 0x18));
    *(undefined4 *)(this + 0x18) = 0;
    *(undefined4 *)(this + 4) = 0;
    *(undefined4 *)(this + 8) = 0xffffffff;
    *(undefined4 *)(this + 0xc) = 0;
    *(undefined4 *)(this + 0x10) = 0xffffffff;
    *(undefined4 *)(this + 0x14) = 0;
  }
  return;
}




/* from: engine:data_struct.cpp
   addr: 004DC060 */

int __thiscall
dsDYN_ARRAY::Init(dsDYN_ARRAY *this,int param_1,int param_2,void **param_3,int param_4,int param_5)

{
  *(int *)(this + 8) = param_1;
  *(int *)(this + 4) = param_4;
  *(int *)(this + 0xc) = param_5;
  *(int *)(this + 0x10) = param_2;
  *(undefined4 *)(this + 0x14) = 0;
  if (param_3 == (void **)0x0) {
    *(dsDYN_ARRAY **)(this + 0x18) = this + 0x14;
    return 1;
  }
  *(void ***)(this + 0x18) = param_3;
  return 1;
}




/* from: engine:data_struct.cpp
   addr: 004DC0B0
   addr: 004DC0B0 */

void __thiscall dsDYN_ARRAY::ReleaseMem(dsDYN_ARRAY *this)

{
  apFree((void *)**(undefined4 **)(this + 0x18));
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0xffffffff;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0xffffffff;
  *(undefined4 *)(this + 0x14) = 0;
  return;
}




/* from: engine:data_struct.cpp
   addr: 004DC0E0 */

int __thiscall dsDYN_ARRAY::AddEntry(dsDYN_ARRAY *this,int param_1)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  
  iVar1 = *(int *)(this + 0xc);
  if (iVar1 < *(int *)(this + 4) + param_1) {
    iVar2 = (*(int *)(this + 4) - iVar1) + param_1;
    iVar4 = *(int *)(this + 0x10);
    if (*(int *)(this + 0x10) <= iVar2) {
      iVar4 = iVar2;
    }
    pvVar3 = apRealloc((void *)**(undefined4 **)(this + 0x18),(iVar1 + iVar4) * *(int *)(this + 8));
    if (pvVar3 == (void *)0x0) {
      return 0;
    }
    **(undefined4 **)(this + 0x18) = pvVar3;
    *(int *)(this + 0xc) = *(int *)(this + 0xc) + iVar4;
  }
  *(int *)(this + 4) = *(int *)(this + 4) + param_1;
  return 1;
}




/* from: engine:data_struct.cpp
   addr: 004DC150 */

int __thiscall dsDYN_ARRAY::Expand(dsDYN_ARRAY *this,int param_1)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  
  iVar1 = *(int *)(this + 0xc);
  if (iVar1 < *(int *)(this + 4) + param_1) {
    iVar2 = (*(int *)(this + 4) - iVar1) + param_1;
    iVar4 = *(int *)(this + 0x10);
    if (*(int *)(this + 0x10) <= iVar2) {
      iVar4 = iVar2;
    }
    pvVar3 = apRealloc((void *)**(undefined4 **)(this + 0x18),(iVar1 + iVar4) * *(int *)(this + 8));
    if (pvVar3 == (void *)0x0) {
      return 0;
    }
    **(undefined4 **)(this + 0x18) = pvVar3;
    *(int *)(this + 0xc) = *(int *)(this + 0xc) + iVar4;
  }
  return 1;
}

