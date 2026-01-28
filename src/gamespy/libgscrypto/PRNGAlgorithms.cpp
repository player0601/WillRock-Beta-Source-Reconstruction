
/* from: libgscrypto:PRNGAlgorithms.cpp
   addr: 005B9D40
   addr: 005B9D40 */

void * __thiscall PRNGModule_MGF1::_scalar_deleting_destructor_(PRNGModule_MGF1 *this,uint param_1)

{
  ~PRNGModule_MGF1(this);
  if ((param_1 & 1) != 0) {
    ExtAlloc_Free_4(this);
  }
  return this;
}




/* from: libgscrypto:PRNGAlgorithms.cpp
   addr: 005B9D60 */

PRNGModule_MGF1 * __thiscall
PRNGModule_MGF1::PRNGModule_MGF1
          (PRNGModule_MGF1 *this,GSCRYPTO_HASH_ALGO param_1,uchar *param_2,uint param_3)

{
  HashModule_SHA1 *this_00;
  undefined4 uVar1;
  HashModule_MD5 *this_01;
  int iVar2;
  int in_stack_00000010;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005cc4e6;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (in_stack_00000010 != 0) {
    ExceptionList = &pvStack_c;
    *(undefined1 **)(this + 4) = &_vbtable_;
  }
  *(undefined4 *)(this + 8) = 0;
  local_4 = 1;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined ***)this = &_vftable_;
  if (param_1 == 0) {
    this_01 = (HashModule_MD5 *)ExtAlloc_Malloc_4(0x24);
    local_4 = CONCAT31(local_4._1_3_,2);
    if (this_01 == (HashModule_MD5 *)0x0) {
LAB_005b9e08:
      uVar1 = 0;
    }
    else {
      uVar1 = HashModule_MD5::HashModule_MD5(this_01);
    }
  }
  else {
    if (param_1 != 1) goto LAB_005b9e11;
    this_00 = (HashModule_SHA1 *)ExtAlloc_Malloc_4(0x28);
    local_4 = CONCAT31(local_4._1_3_,3);
    if (this_00 == (HashModule_SHA1 *)0x0) goto LAB_005b9e08;
    uVar1 = HashModule_SHA1::HashModule_SHA1(this_00);
  }
  local_4 = CONCAT31(local_4._1_3_,1);
  *(undefined4 *)(this + 0xc) = uVar1;
LAB_005b9e11:
  iVar2 = (**(code **)(**(int **)(this + 0xc) + 0x1c))();
  *(int *)(this + 0x20) = iVar2 * 500;
  uVar1 = ExtAlloc_Malloc_4(iVar2 * 500);
  *(undefined4 *)(this + 0x1c) = uVar1;
  Seed(this,param_2,param_3);
  ExceptionList = pvStack_c;
  return this;
}




/* from: libgscrypto:PRNGAlgorithms.cpp
   addr: 005B9E60 */

void __thiscall PRNGModule_MGF1::~PRNGModule_MGF1(PRNGModule_MGF1 *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005cc4f8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = &_vftable_;
  local_4 = 0;
  if (*(undefined4 **)(this + 0xc) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0xc))(1);
    *(undefined4 *)(this + 0xc) = 0;
  }
  if (*(int *)(this + 0x1c) != 0) {
    ExtAlloc_Free_4(*(int *)(this + 0x1c));
    *(undefined4 *)(this + 0x1c) = 0;
  }
  if (*(int *)(this + 0x14) != 0) {
    ExtAlloc_Free_4(*(int *)(this + 0x14));
    *(undefined4 *)(this + 0x14) = 0;
  }
  *(undefined ***)this = &clExtalloc_Override_Baseclass::_vftable_;
  ExceptionList = pvStack_c;
  return;
}




/* from: libgscrypto:PRNGAlgorithms.cpp
   addr: 005B9EE0 */

void __thiscall PRNGModule_MGF1::Seed(PRNGModule_MGF1 *this,uchar *param_1,uint param_2)

{
  uchar *puVar1;
  uint uVar2;
  
  if (*(int *)(this + 0x14) != 0) {
    ExtAlloc_Free_4(*(int *)(this + 0x14));
    *(undefined4 *)(this + 0x14) = 0;
  }
  puVar1 = (uchar *)ExtAlloc_Malloc_4(param_2);
  *(uchar **)(this + 0x14) = puVar1;
  for (uVar2 = param_2 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined4 *)puVar1 = *(undefined4 *)param_1;
    param_1 = param_1 + 4;
    puVar1 = puVar1 + 4;
  }
  for (uVar2 = param_2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar1 = *param_1;
    param_1 = param_1 + 1;
    puVar1 = puVar1 + 1;
  }
  *(uint *)(this + 0x18) = param_2;
  *(undefined4 *)(this + 0x28) = 0;
  return;
}




/* from: libgscrypto:PRNGAlgorithms.cpp
   addr: 005B9F30 */

uchar __thiscall PRNGModule_MGF1::GetBit(PRNGModule_MGF1 *this)

{
  uint uVar1;
  
  uVar1 = (**(code **)(*(int *)this + 8))();
  uVar1 = Parity((ulonglong)(uVar1 & 0xff));
  return (uchar)uVar1;
}




/* from: libgscrypto:PRNGAlgorithms.cpp
   addr: 005B9F50 */

uchar __thiscall PRNGModule_MGF1::GetByte(PRNGModule_MGF1 *this)

{
  uchar uVar1;
  
  if (*(int *)(this + 0x28) == 0) {
    GenerateByteString(this);
  }
  *(int *)(this + 0x28) = *(int *)(this + 0x28) + -1;
  uVar1 = **(uchar **)(this + 0x24);
  *(uchar **)(this + 0x24) = *(uchar **)(this + 0x24) + 1;
  return uVar1;
}




/* from: libgscrypto:PRNGAlgorithms.cpp
   addr: 005B9F80 */

void __thiscall PRNGModule_MGF1::GetBlock(PRNGModule_MGF1 *this,uchar *param_1,uint param_2)

{
  uchar uVar1;
  
  if (param_2 != 0) {
    do {
      uVar1 = (**(code **)(*(int *)this + 8))();
      *param_1 = uVar1;
      param_1 = param_1 + 1;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
  }
  return;
}




/* WARNING: Removing unreachable block (ram,0x005ba066) */
/* WARNING: Removing unreachable block (ram,0x005ba026) */
/* from: libgscrypto:PRNGAlgorithms.cpp
   addr: 005B9FB0 */

__uint64 __thiscall
PRNGModule_MGF1::GetNumber(PRNGModule_MGF1 *this,__uint64 param_1,__uint64 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 unaff_ESI;
  uint unaff_EDI;
  __uint64 _Stack_10;
  int iStack_c;
  undefined1 local_8 [8];
  
  if (param_1 != param_2) {
    uVar1 = BytePrecision(param_1 - param_2);
    uVar2 = BitPrecision(param_1 - param_2);
    (**(code **)(*(int *)this + 0xc))(local_8,uVar1);
    _Stack_10 = Crop(CONCAT44(uVar2,unaff_ESI),uVar2);
    if (param_1 - param_2 < _Stack_10) {
      do {
        uVar3 = (**(code **)(*(int *)this + 8))();
        _Stack_10 = Crop(CONCAT44(iStack_c << 8 | (uint)_Stack_10 >> 0x18,
                                  uVar3 & 0xff | (uint)_Stack_10 << 8),uVar2);
        uVar2 = unaff_EDI;
      } while (param_1 - param_2 < _Stack_10);
    }
    param_1 = _Stack_10 + CONCAT44(param_1._4_4_,uVar1);
  }
  return param_1;
}




/* from: libgscrypto:PRNGAlgorithms.cpp
   addr: 005BA080 */

void __thiscall PRNGModule_MGF1::GenerateByteString(PRNGModule_MGF1 *this)

{
  int iVar1;
  uint uVar2;
  uchar *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  uVar2 = (**(code **)(**(int **)(this + 0xc) + 0x1c))();
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(this + 0x1c);
  puVar3 = (uchar *)ExtAlloc_Malloc_4(4);
  puVar4 = (undefined4 *)ExtAlloc_Malloc_4(uVar2);
  puVar5 = (undefined4 *)ExtAlloc_Malloc_4(*(int *)(this + 0x18) + 4);
  uVar7 = *(uint *)(this + 0x18);
  if (uVar7 != 0) {
    puVar8 = *(undefined4 **)(this + 0x14);
    puVar9 = puVar5;
    for (uVar6 = uVar7 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
  }
  if (*(uint *)(this + 0x24) < (uint)(*(int *)(this + 0x20) + *(int *)(this + 0x1c))) {
    do {
      uVar7 = *(uint *)(this + 0x10);
      *(uint *)(this + 0x10) = uVar7 + 1;
      NumberToByteString((ulonglong)uVar7,puVar3,4);
      *(undefined4 *)((int)puVar5 + *(int *)(this + 0x18)) = *(undefined4 *)puVar3;
      (**(code **)(**(int **)(this + 0xc) + 0xc))(puVar5,*(int *)(this + 0x18) + 4);
      (**(code **)(**(int **)(this + 0xc) + 0x10))();
      (**(code **)(**(int **)(this + 0xc) + 0x14))(puVar4);
      (**(code **)(**(int **)(this + 0xc) + 4))();
      puVar8 = puVar4;
      puVar9 = *(undefined4 **)(this + 0x24);
      for (uVar7 = uVar2 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar9 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar9 = puVar9 + 1;
      }
      for (uVar7 = uVar2 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
      iVar1 = *(int *)(this + 0x24);
      *(uint *)(this + 0x24) = iVar1 + uVar2;
    } while (iVar1 + uVar2 < (uint)(*(int *)(this + 0x20) + *(int *)(this + 0x1c)));
  }
  ExtAlloc_Free_4(puVar3);
  ExtAlloc_Free_4(puVar4);
  ExtAlloc_Free_4(puVar5);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(this + 0x1c);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(this + 0x20);
  return;
}

