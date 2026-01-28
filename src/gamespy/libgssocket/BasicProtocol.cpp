
/* from: libgssocket:BasicProtocol.cpp
   addr: 005C28F0 */

clBasicProtocol * __thiscall clBasicProtocol::clBasicProtocol(clBasicProtocol *this)

{
  int iVar1;
  int in_stack_00000004;
  
  if (in_stack_00000004 != 0) {
    *(undefined8 **)(this + 4) = &_vbtable_;
  }
  *(undefined4 *)(this + 8) = 0;
  *(undefined2 *)(this + 0x8e) = 0;
  *(undefined2 *)(this + 0x90) = 0;
  *(undefined4 *)(this + 0x94) = 0;
  *(undefined2 *)(this + 0x11a) = 0;
  *(undefined4 *)(this + 0x120) = 0;
  *(undefined8 **)(this + 0x128) = &ExtAlloc::list<class_clSegment*>::_vbtable_;
  *(undefined4 *)(this + 0x124) = 0;
  iVar1 = ExtAlloc_Malloc_4(0xc);
  *(int *)iVar1 = iVar1;
  *(int *)(iVar1 + 4) = iVar1;
  *(int *)(this + 0x124) = iVar1;
  *(undefined8 **)(this + 0x130) = &ExtAlloc::list<class_clSegment*>::_vbtable_;
  *(undefined4 *)(this + 300) = 0;
  iVar1 = ExtAlloc_Malloc_4(0xc);
  *(int *)iVar1 = iVar1;
  *(int *)(iVar1 + 4) = iVar1;
  *(int *)(this + 300) = iVar1;
  *(undefined ***)this = &_vftable_;
  this[0xc] = (clBasicProtocol)0x0;
  this[0x98] = (clBasicProtocol)0x0;
  return this;
}




/* from: libgssocket:BasicProtocol.cpp
   addr: 005C2990
   addr: 005C2990 */

void * __thiscall clBasicProtocol::_vector_deleting_destructor_(clBasicProtocol *this,uint param_1)

{
  ~clBasicProtocol(this);
  if ((param_1 & 1) != 0) {
    ExtAlloc_Free_4(this);
  }
  return this;
}




/* from: libgssocket:BasicProtocol.cpp
   addr: 005C29B0 */

void __thiscall clBasicProtocol::~clBasicProtocol(clBasicProtocol *this)

{
  _STLP_alloc_proxy<struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>*,struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
  *this_00;
  _Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
  *p_Var1;
  int *piVar2;
  int *piVar3;
  _Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
  *p_Var4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005cc984;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = &_vftable_;
  local_4 = 1;
  LeaveService(this);
  this_00 = (_STLP_alloc_proxy<struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>*,struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
             *)(this + 300);
  local_4 = CONCAT31(local_4._1_3_,2);
  p_Var4 = *(_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
             **)*(_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
                  **)this_00;
  if (p_Var4 != *(_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
                  **)this_00) {
    do {
      p_Var1 = *(_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
                 **)p_Var4;
      _STL::
      _STLP_alloc_proxy<struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>*,struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
      ::deallocate(this_00,p_Var4,1);
      p_Var4 = p_Var1;
    } while (p_Var1 != *(_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
                         **)this_00);
  }
  *(undefined4 *)*(undefined4 *)this_00 = *(undefined4 *)this_00;
  *(int *)(*(int *)this_00 + 4) = *(int *)this_00;
  _STL::
  _STLP_alloc_proxy<struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>*,struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
  ::deallocate(this_00,*(_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
                         **)this_00,1);
  piVar3 = (int *)**(int **)(this + 0x124);
  if (piVar3 != *(int **)(this + 0x124)) {
    do {
      piVar2 = (int *)*piVar3;
      ExtAlloc_Free_4(piVar3);
      piVar3 = piVar2;
    } while (piVar2 != (int *)*(int *)(this + 0x124));
  }
  *(undefined4 *)*(undefined4 *)(this + 0x124) = *(undefined4 *)(this + 0x124);
  *(int *)(*(int *)(this + 0x124) + 4) = *(int *)(this + 0x124);
  ExtAlloc_Free_4(*(undefined4 *)(this + 0x124));
  ExceptionList = local_c;
  return;
}




/* from: libgssocket:BasicProtocol.cpp
   addr: 005C2A80 */

void __thiscall clBasicProtocol::RecvNewSegment(clBasicProtocol *this,clSegment *param_1)

{
  undefined4 *puVar1;
  _List_node<class_clData*> *p_Var2;
  
  _STL::list<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_>::end
            ((list<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_> *)
             (this + 0x124));
  p_Var2 = _STL::list<class_clData*,class_ExtAlloc::Allocator<class_clData*>_>::M_create_node
                     ((list<class_clData*,class_ExtAlloc::Allocator<class_clData*>_> *)
                      (this + 0x124),(clData **)&param_1);
  puVar1 = *(undefined4 **)(this + 4);
  *(clBasicProtocol **)p_Var2 = this;
  *(undefined4 **)(p_Var2 + 4) = puVar1;
  *puVar1 = p_Var2;
  *(_List_node<class_clData*> **)(this + 4) = p_Var2;
  return;
}




/* from: libgssocket:BasicProtocol.cpp
   addr: 005C2AC0 */

uchar __thiscall clBasicProtocol::LeaveService(clBasicProtocol *this)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = (int *)**(int **)(this + 0x124);
  if (piVar2 != *(int **)(this + 0x124)) {
    do {
      if ((undefined4 *)piVar2[2] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)piVar2[2])(1);
      }
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)*(int *)(this + 0x124));
  }
  piVar2 = (int *)**(int **)(this + 300);
  if (piVar2 != *(int **)(this + 300)) {
    do {
      if ((undefined4 *)piVar2[2] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)piVar2[2])(1);
      }
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)*(int *)(this + 300));
  }
  piVar2 = (int *)**(int **)(this + 300);
  if (piVar2 != *(int **)(this + 300)) {
    do {
      piVar1 = (int *)*piVar2;
      ExtAlloc_Free_4(piVar2);
      piVar2 = piVar1;
    } while (piVar1 != (int *)*(int *)(this + 300));
  }
  *(undefined4 *)*(undefined4 *)(this + 300) = *(undefined4 *)(this + 300);
  *(int *)(*(int *)(this + 300) + 4) = *(int *)(this + 300);
  piVar2 = (int *)**(int **)(this + 0x124);
  if (piVar2 != *(int **)(this + 0x124)) {
    do {
      piVar1 = (int *)*piVar2;
      ExtAlloc_Free_4(piVar2);
      piVar2 = piVar1;
    } while (piVar1 != (int *)*(int *)(this + 0x124));
  }
  *(undefined4 *)*(undefined4 *)(this + 0x124) = *(undefined4 *)(this + 0x124);
  *(int *)(*(int *)(this + 0x124) + 4) = *(int *)(this + 0x124);
  if (*(clUDPEngine **)(this + 0x120) != (clUDPEngine *)0x0) {
    clUDPEngine::LeaveService(*(clUDPEngine **)(this + 0x120),*(ushort *)(this + 0x11c));
    *(undefined4 *)(this + 0x120) = 0;
  }
  return '\x01';
}

