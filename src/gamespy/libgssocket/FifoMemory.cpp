
/* from: libgssocket:FifoMemory.cpp
   addr: 005938E0 */

clFifo * __thiscall clFifo::clFifo(clFifo *this)

{
  int iVar1;
  int in_stack_00000004;
  
  if (in_stack_00000004 != 0) {
    *(undefined1 **)(this + 8) = &_vbtable_;
  }
  *(undefined4 *)(this + 4) = 0;
  iVar1 = ExtAlloc_Malloc_4(0xc);
  *(int *)iVar1 = iVar1;
  *(int *)(iVar1 + 4) = iVar1;
  *(int *)(this + 4) = iVar1;
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0x7fffffff;
  return this;
}




/* from: libgssocket:FifoMemory.cpp
   addr: 00593930
   addr: 00593930 */

void * __thiscall clFifo::_vector_deleting_destructor_(clFifo *this,uint param_1)

{
  ~clFifo(this);
  if ((param_1 & 1) != 0) {
    ExtAlloc_Free_4(this);
  }
  return this;
}




/* from: libgssocket:FifoMemory.cpp
   addr: 00593950 */

void __thiscall clFifo::~clFifo(clFifo *this)

{
  list<class_clRcvElement*,class_ExtAlloc::Allocator<class_clRcvElement*>_> *this_00;
  int iVar1;
  int *piVar2;
  void *unaff_EBX;
  int *piVar3;
  undefined1 local_10 [4];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c7ec7;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = &clPointerList<class_clMemoryElement*>::_vftable_;
  this_00 = (list<class_clRcvElement*,class_ExtAlloc::Allocator<class_clRcvElement*>_> *)(this + 4);
  iVar1 = *(int *)this;
  local_4 = 0;
  _STL::list<class_clRcvElement*,class_ExtAlloc::Allocator<class_clRcvElement*>_>::begin(this_00);
  (**(code **)(iVar1 + 0x10))(local_10);
  piVar3 = (int *)**(int **)this_00;
  if (piVar3 != *(int **)this_00) {
    do {
      piVar2 = (int *)*piVar3;
      ExtAlloc_Free_4(piVar3);
      piVar3 = piVar2;
    } while (piVar2 != (int *)*(int *)this_00);
  }
  *(undefined4 *)*(undefined4 *)this_00 = *(undefined4 *)this_00;
  *(int *)(*(int *)this_00 + 4) = *(int *)this_00;
  ExtAlloc_Free_4(*(undefined4 *)this_00);
  ExceptionList = unaff_EBX;
  return;
}




/* from: libgssocket:FifoMemory.cpp
   addr: 005939E0
   addr: 005939E0 */

void * __thiscall
clPointerList<class_clMemoryElement*>::_scalar_deleting_destructor_
          (clPointerList<class_clMemoryElement*> *this,uint param_1)

{
  ~clPointerList<class_clMemoryElement*>(this);
  if ((param_1 & 1) != 0) {
    ExtAlloc_Free_4(this);
  }
  return this;
}




/* from: libgssocket:FifoMemory.cpp
   addr: 00593A00 */

uchar __thiscall clFifo::push_back(clFifo *this,uchar *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  _List_node<class_clData*> *p_Var5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uchar *puVar9;
  uchar *puVar10;
  clData *local_8;
  int local_4;
  
  local_4 = 0;
  if (*(int *)(this + 0xc) <= *(int *)(this + 0x10)) {
    uVar7 = param_2;
    if (param_2 != 0) {
      while( true ) {
        piVar1 = *(int **)(this + 4);
        iVar8 = param_2 - uVar7;
        if ((int *)*piVar1 != piVar1) {
          iVar2 = *(int *)(piVar1[1] + 8);
          uVar4 = 0x800 - *(int *)(iVar2 + 0x808);
          if ((int)uVar7 < (int)uVar4) {
            uVar4 = uVar7;
          }
          uVar7 = uVar7 - uVar4;
          puVar9 = param_1 + iVar8;
          puVar10 = (uchar *)(*(int *)(iVar2 + 0x808) + 4 + iVar2);
          for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(undefined4 *)puVar10 = *(undefined4 *)puVar9;
            puVar9 = puVar9 + 4;
            puVar10 = puVar10 + 4;
          }
          for (uVar6 = uVar4 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *puVar10 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar10 = puVar10 + 1;
          }
          *(int *)(iVar2 + 0x808) = *(int *)(iVar2 + 0x808) + uVar4;
        }
        if (uVar7 == 0) break;
        local_8 = (clData *)ExtAlloc_Malloc_4(0x80c);
        if (local_8 == (clData *)0x0) {
          local_8 = (clData *)0x0;
        }
        else {
          *(undefined1 **)local_8 = &clMemoryElement::_vbtable_;
          *(undefined4 *)(local_8 + 0x804) = 0;
          *(undefined4 *)(local_8 + 0x808) = 0;
        }
        _STL::list<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_>::end
                  ((list<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_> *)
                   (this + 4));
        p_Var5 = _STL::list<class_clData*,class_ExtAlloc::Allocator<class_clData*>_>::M_create_node
                           ((list<class_clData*,class_ExtAlloc::Allocator<class_clData*>_> *)
                            (this + 4),&local_8);
        puVar3 = *(undefined4 **)(local_4 + 4);
        *(int *)p_Var5 = local_4;
        *(undefined4 **)(p_Var5 + 4) = puVar3;
        *puVar3 = p_Var5;
        *(_List_node<class_clData*> **)(local_4 + 4) = p_Var5;
      }
    }
    *(int *)(this + 0xc) = *(int *)(this + 0xc) + param_2;
    return '\x01';
  }
  return '\0';
}




/* from: libgssocket:FifoMemory.cpp
   addr: 00593B00 */

uchar __thiscall clFifo::pop_front(clFifo *this,int param_1,uchar *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uchar *puVar6;
  int iVar7;
  uchar *puVar8;
  undefined1 local_4 [4];
  
  if (*(int *)(this + 0xc) < param_1) {
    return '\0';
  }
  uVar5 = param_1;
  if (param_1 != 0) {
    do {
      piVar1 = *(int **)(this + 4);
      if ((int *)*piVar1 == piVar1) break;
      iVar7 = param_1 - uVar5;
      iVar2 = *(int *)(*piVar1 + 8);
      uVar3 = *(int *)(iVar2 + 0x808) - *(int *)(iVar2 + 0x804);
      if ((int)uVar5 < (int)uVar3) {
        uVar3 = uVar5;
      }
      uVar5 = uVar5 - uVar3;
      puVar6 = (uchar *)(*(int *)(iVar2 + 0x804) + 4 + iVar2);
      puVar8 = param_2 + iVar7;
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)puVar8 = *(undefined4 *)puVar6;
        puVar6 = puVar6 + 4;
        puVar8 = puVar8 + 4;
      }
      for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar8 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar8 = puVar8 + 1;
      }
      *(uint *)(iVar2 + 0x804) = *(int *)(iVar2 + 0x804) + uVar3;
      iVar2 = *(int *)(**(int **)(this + 4) + 8);
      if (*(int *)(iVar2 + 0x804) == *(int *)(iVar2 + 0x808)) {
        (**(code **)(*(int *)this + 0x14))(local_4,**(int **)(this + 4));
      }
    } while (uVar5 != 0);
  }
  *(uint *)(this + 0xc) = *(int *)(this + 0xc) + (uVar5 - param_1);
  return '\x01';
}




/* from: libgssocket:FifoMemory.cpp
   addr: 00593BE0 */

uchar __thiscall clFifo::peek_front(clFifo *this,int param_1,uchar *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  uchar *puVar6;
  int iVar7;
  uchar *puVar8;
  
  piVar4 = (int *)**(int **)(this + 4);
  uVar5 = param_1;
  if (piVar4 != *(int **)(this + 4)) {
    do {
      if (uVar5 == 0) break;
      iVar1 = piVar4[2];
      iVar7 = param_1 - uVar5;
      uVar2 = *(int *)(iVar1 + 0x808) - *(int *)(iVar1 + 0x804);
      if ((int)uVar5 < (int)uVar2) {
        uVar2 = uVar5;
      }
      uVar5 = uVar5 - uVar2;
      puVar6 = (uchar *)(iVar1 + 4 + *(int *)(iVar1 + 0x804));
      puVar8 = param_2 + iVar7;
      for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined4 *)puVar8 = *(undefined4 *)puVar6;
        puVar6 = puVar6 + 4;
        puVar8 = puVar8 + 4;
      }
      for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar8 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar8 = puVar8 + 1;
      }
      piVar4 = (int *)*piVar4;
    } while (piVar4 != (int *)*(int *)(this + 4));
  }
  return uVar5 == 0;
}




/* from: libgssocket:FifoMemory.cpp
   addr: 00593C50 */

uchar __thiscall clFifo::EmptyAll(clFifo *this)

{
  (**(code **)(*(int *)this + 4))();
  *(undefined4 *)(this + 0xc) = 0;
  return '\x01';
}




/* from: libgssocket:FifoMemory.cpp
   addr: 00593C70 */

void __thiscall
clPointerList<class_clMemoryElement*>::~clPointerList<class_clMemoryElement*>
          (clPointerList<class_clMemoryElement*> *this)

{
  list<class_clRcvElement*,class_ExtAlloc::Allocator<class_clRcvElement*>_> *this_00;
  int iVar1;
  int *piVar2;
  void *unaff_EBX;
  int *piVar3;
  undefined1 local_10 [4];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c7f07;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = &_vftable_;
  this_00 = (list<class_clRcvElement*,class_ExtAlloc::Allocator<class_clRcvElement*>_> *)(this + 4);
  iVar1 = *(int *)this;
  local_4 = 0;
  _STL::list<class_clRcvElement*,class_ExtAlloc::Allocator<class_clRcvElement*>_>::begin(this_00);
  (**(code **)(iVar1 + 0x10))(local_10);
  piVar3 = (int *)**(int **)this_00;
  if (piVar3 != *(int **)this_00) {
    do {
      piVar2 = (int *)*piVar3;
      ExtAlloc_Free_4(piVar3);
      piVar3 = piVar2;
    } while (piVar2 != (int *)*(int *)this_00);
  }
  *(undefined4 *)*(undefined4 *)this_00 = *(undefined4 *)this_00;
  *(int *)(*(int *)this_00 + 4) = *(int *)this_00;
  ExtAlloc_Free_4(*(undefined4 *)this_00);
  ExceptionList = unaff_EBX;
  return;
}




/* from: libgssocket:FifoMemory.cpp
   addr: 00593D00
   addr: 00593D00
   addr: 00593D00
   addr: 00593D00
   addr: 00593D00
   addr: 00593D00
   addr: 00593D00
   addr: 00593D00
   addr: 00593D00 */

void __thiscall clPointerList<class_clRcvElement*>::clear(clPointerList<class_clRcvElement*> *this)

{
  int iVar1;
  clPointerList<class_clRcvElement*> *local_4;
  
  iVar1 = *(int *)this;
  local_4 = this;
  _STL::list<class_clRcvElement*,class_ExtAlloc::Allocator<class_clRcvElement*>_>::begin
            ((list<class_clRcvElement*,class_ExtAlloc::Allocator<class_clRcvElement*>_> *)(this + 4)
            );
  (**(code **)(iVar1 + 0x10))(&local_4);
  return;
}




/* from: libgssocket:FifoMemory.cpp
   addr: 00593D30
   addr: 00593D30 */

void __thiscall
clPointerList<class_clParentGroup*>::pop_front(clPointerList<class_clParentGroup*> *this)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = *(int **)(this + 4);
  if ((int *)*piVar1 != piVar1) {
    if (*(int *)(*piVar1 + 8) != 0) {
      ExtAlloc_Free_4(*(int *)(*piVar1 + 8));
    }
    piVar1 = (int *)**(int **)(this + 4);
    piVar2 = (int *)piVar1[1];
    iVar3 = *piVar1;
    *piVar2 = iVar3;
    *(int **)(iVar3 + 4) = piVar2;
    ExtAlloc_Free_4(piVar1);
  }
  return;
}




/* from: libgssocket:FifoMemory.cpp
   addr: 00593D60
   addr: 00593D60 */

void __thiscall
clPointerList<class_clParentGroup*>::erase
          (clPointerList<class_clParentGroup*> *this,undefined4 *param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  piVar3 = param_4;
  piVar4 = param_3;
  if (param_3 != param_4) {
    do {
      if (piVar4 == *(int **)(this + 4)) break;
      if (piVar4[2] != 0) {
        ExtAlloc_Free_4(piVar4[2]);
      }
      piVar4 = (int *)*piVar4;
    } while (piVar4 != piVar3);
  }
  _STL::_List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
  ::List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
            ((_List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
              *)&param_4,
             (_List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
              *)&param_3);
  piVar4 = param_4;
  while (piVar4 != piVar3) {
    param_4 = (int *)*piVar4;
    piVar1 = (int *)piVar4[1];
    iVar2 = *piVar4;
    *piVar1 = iVar2;
    *(int **)(iVar2 + 4) = piVar1;
    ExtAlloc_Free_4(piVar4);
    piVar4 = param_4;
  }
  *param_2 = piVar3;
  return;
}

