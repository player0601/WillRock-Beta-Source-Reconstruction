
/* from: libgsregserver:ParentGroups.cpp
   addr: 00588DA0 */

clParentGroup * __thiscall
clParentGroup::clParentGroup
          (clParentGroup *this,uint param_1,int param_2,char *param_3,uint param_4,uint param_5)

{
  int in_stack_00000018;
  
  if (in_stack_00000018 != 0) {
    *(undefined1 **)this = &_vbtable_;
  }
  *(uint *)(this + 4) = param_1;
  *(int *)(this + 8) = param_2;
  strncpy((char *)(this + 0xc),param_3,0x21);
  if (this[0x2c] != (clParentGroup)0x0) {
    this[0x2c] = (clParentGroup)0x0;
  }
  *(uint *)(this + 0x34) = param_5;
  *(uint *)(this + 0x38) = param_5 - param_4;
  *(uint *)(this + 0x30) = param_4;
  return this;
}




/* from: libgsregserver:ParentGroups.cpp
   addr: 00588E10 */

clParentGroup * __thiscall clParentGroup::clParentGroup(clParentGroup *this)

{
  int in_stack_00000004;
  
  if (in_stack_00000004 != 0) {
    *(undefined1 **)this = &_vbtable_;
  }
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  strncpy((char *)(this + 0xc),s_,0x21);
  if (this[0x2c] != (clParentGroup)0x0) {
    this[0x2c] = (clParentGroup)0x0;
  }
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  return this;
}




/* from: libgsregserver:ParentGroups.cpp
   addr: 00588E60 */

clParentGroup * __thiscall clParentGroup::operator=(clParentGroup *this,clParentGroup *param_1)

{
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  strncpy((char *)(this + 0xc),(char *)(param_1 + 0xc),0x21);
  if (this[0x2c] != (clParentGroup)0x0) {
    this[0x2c] = (clParentGroup)0x0;
  }
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  return this;
}




/* from: libgsregserver:ParentGroups.cpp
   addr: 00588EB0 */

clParentGroups * __thiscall clParentGroups::clParentGroups(clParentGroups *this)

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
  return this;
}




/* from: libgsregserver:ParentGroups.cpp
   addr: 00588EF0
   addr: 00588EF0 */

void * __thiscall clParentGroups::_vector_deleting_destructor_(clParentGroups *this,uint param_1)

{
  ~clParentGroups(this);
  if ((param_1 & 1) != 0) {
    ExtAlloc_Free_4(this);
  }
  return this;
}




/* from: libgsregserver:ParentGroups.cpp
   addr: 00588F10 */

void __thiscall clParentGroups::~clParentGroups(clParentGroups *this)

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
  
  puStack_8 = &LAB_005c7817;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = &clPointerList<class_clParentGroup*>::_vftable_;
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




/* from: libgsregserver:ParentGroups.cpp
   addr: 00588FA0
   addr: 00588FA0 */

void * __thiscall
clPointerList<class_clParentGroup*>::_scalar_deleting_destructor_
          (clPointerList<class_clParentGroup*> *this,uint param_1)

{
  ~clPointerList<class_clParentGroup*>(this);
  if ((param_1 & 1) != 0) {
    ExtAlloc_Free_4(this);
  }
  return this;
}




/* from: libgsregserver:ParentGroups.cpp
   addr: 00588FC0 */

uchar __thiscall clParentGroups::GetParentGroup(clParentGroups *this,clParentGroup *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  clParentGroup *pcVar4;
  input_iterator_tag local_9;
  undefined4 *local_8;
  undefined4 local_4;
  
  local_8 = *(undefined4 **)(this + 4);
  local_9 = param_1._0_1_;
  local_4 = *local_8;
  iVar3 = _STL::distance((_List_iterator<class_clData*,struct__STL::_Const_traits<class_clData*>_> *
                         )&local_4,
                         (_List_iterator<class_clData*,struct__STL::_Const_traits<class_clData*>_> *
                         )&local_8,&local_9);
  if (iVar3 == 0) {
    return '\0';
  }
  puVar1 = (undefined4 *)**(int **)(this + 4);
  pcVar4 = (clParentGroup *)puVar1[2];
  for (piVar2 = (int *)*puVar1; piVar2 != *(int **)(this + 4); piVar2 = (int *)*piVar2) {
    if (*(uint *)(pcVar4 + 0x38) < *(uint *)((clParentGroup *)piVar2[2] + 0x38)) {
      pcVar4 = (clParentGroup *)piVar2[2];
    }
  }
  clParentGroup::operator=(param_1,pcVar4);
  return '\x01';
}




/* from: libgsregserver:ParentGroups.cpp
   addr: 00589040 */

void __thiscall
clPointerList<class_clParentGroup*>::~clPointerList<class_clParentGroup*>
          (clPointerList<class_clParentGroup*> *this)

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
  
  puStack_8 = &LAB_005c7857;
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




/* from: libgsregserver:ParentGroups.cpp
   addr: 005890D0
   addr: 005890D0 */

void __thiscall
clPointerList<class_clParentGroup*>::pop_back(clPointerList<class_clParentGroup*> *this)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  _List_iterator<class_clGameMessage*,struct__STL::_Nonconst_traits<class_clGameMessage*>_> *p_Var4;
  clPointerList<class_clParentGroup*> *local_4;
  
  piVar1 = *(int **)(this + 4);
  if ((int *)*piVar1 != piVar1) {
    if (*(int *)(piVar1[1] + 8) != 0) {
      local_4 = this;
      ExtAlloc_Free_4(*(int *)(piVar1[1] + 8));
    }
    local_4 = *(clPointerList<class_clParentGroup*> **)(this + 4);
    p_Var4 = _STL::
             _List_iterator<class_clGameMessage*,struct__STL::_Nonconst_traits<class_clGameMessage*>_>
             ::operator--((_List_iterator<class_clGameMessage*,struct__STL::_Nonconst_traits<class_clGameMessage*>_>
                           *)&local_4);
    piVar1 = *(int **)p_Var4;
    piVar2 = (int *)piVar1[1];
    iVar3 = *piVar1;
    *piVar2 = iVar3;
    *(int **)(iVar3 + 4) = piVar2;
    ExtAlloc_Free_4(piVar1);
  }
  return;
}




/* from: libgsregserver:ParentGroups.cpp
   addr: 00589110
   addr: 00589110 */

void __thiscall
clPointerList<class_clMemoryElement*>::erase
          (clPointerList<class_clMemoryElement*> *this,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  
  if ((param_3 != *(int **)(this + 4)) && (param_3[2] != 0)) {
    ExtAlloc_Free_4(param_3[2]);
  }
  piVar1 = (int *)param_3[1];
  iVar2 = *param_3;
  *piVar1 = iVar2;
  *(int **)(iVar2 + 4) = piVar1;
  ExtAlloc_Free_4(param_3);
  *param_2 = iVar2;
  return;
}

