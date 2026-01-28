
/* from: libgsclient:GameResult.cpp
   addr: 005B1B60
   addr: 005B1B60 */

void * __thiscall
clPointerMap<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,class_clResult*>
::_scalar_deleting_destructor_
          (clPointerMap<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,class_clResult*>
           *this,uint param_1)

{
  ~clPointerMap<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,class_clResult*>
            (this);
  if ((param_1 & 1) != 0) {
    ExtAlloc_Free_4(this);
  }
  return this;
}




/* from: libgsclient:GameResult.cpp
   addr: 005B1B80 */

void __thiscall clPlayerResult::~clPlayerResult(clPlayerResult *this)

{
  map<void*,class_PKCAlgorithm*,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_PKCAlgorithm*>_>_>
  *this_00;
  int iVar1;
  map<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,enum_clResult::DataType,struct__STL::less<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
  *this_01;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005cb9ca;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  if (*(undefined4 **)(this + 0x1c) != (undefined4 *)0x0) {
    ExceptionList = &pvStack_c;
    (**(code **)**(undefined4 **)(this + 0x1c))();
  }
  this_01 = m_pmapLabel;
  m_iInstanceCount = m_iInstanceCount + -1;
  if ((m_iInstanceCount == 0) &&
     (m_pmapLabel !=
      (map<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,enum_clResult::DataType,struct__STL::less<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
       *)0x0)) {
    local_4._0_1_ = 1;
    _STL::
    _Rb_tree<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,enum_clResult::DataType>,struct__STL::_Select1st<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,enum_clResult::DataType>_>,struct__STL::less<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,enum_clResult::DataType>_>_>
    ::clear((_Rb_tree<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,enum_clResult::DataType>,struct__STL::_Select1st<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,enum_clResult::DataType>_>,struct__STL::less<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,enum_clResult::DataType>_>_>
             *)m_pmapLabel);
    local_4 = CONCAT31(local_4._1_3_,2);
    _STL::
    _STLP_alloc_proxy<struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>*,struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
    ::deallocate((_STLP_alloc_proxy<struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>*,struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
                  *)this_01,
                 *(_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
                   **)this_01,1);
    ExtAlloc_Free_4();
    m_pmapLabel = (map<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,enum_clResult::DataType,struct__STL::less<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
                   *)0x0;
  }
  *(undefined ***)(this + 8) =
       &clPointerMap<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,class_clResult*>
        ::_vftable_;
  this_00 = (map<void*,class_PKCAlgorithm*,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_PKCAlgorithm*>_>_>
             *)(this + 0xc);
  iVar1 = *(int *)(this + 8);
  local_4 = 3;
  _STL::
  map<void*,class_PKCAlgorithm*,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_PKCAlgorithm*>_>_>
  ::begin(this_00);
  (**(code **)(iVar1 + 0xc))();
  pvStack_c = (void *)0x4;
  if (*(int *)(this + 0x10) != 0) {
    _STL::
    _Rb_tree<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clResult*>,struct__STL::_Select1st<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clResult*>_>,struct__STL::less<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clResult*>_>_>
    ::M_erase((_Rb_tree<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clResult*>,struct__STL::_Select1st<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clResult*>_>,struct__STL::less<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clResult*>_>_>
               *)this_00,
              *(_Rb_tree_node<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clResult*>_>
                **)(*(int *)this_00 + 4));
    *(int *)(*(int *)this_00 + 8) = *(int *)this_00;
    *(undefined4 *)(*(int *)this_00 + 4) = 0;
    *(int *)(*(int *)this_00 + 0xc) = *(int *)this_00;
    *(undefined4 *)(this + 0x10) = 0;
  }
  ExtAlloc_Free_4(*(undefined4 *)this_00);
  ExceptionList = this;
  return;
}




/* from: libgsclient:GameResult.cpp
   addr: 005B1C80 */

void __thiscall
ExtAlloc::
map<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,class_clResult*,struct__STL::less<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
::
~map<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,class_clResult*,struct__STL::less<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
          (map<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,class_clResult*,struct__STL::less<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
           *this)

{
  int iVar1;
  int iVar2;
  void **ppvVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005cb9e8;
  local_c = ExceptionList;
  local_4 = 0;
  ppvVar3 = &local_c;
  if (*(int *)(this + 4) != 0) {
    iVar2 = *(int *)(*(int *)this + 4);
    ExceptionList = &local_c;
    while (iVar2 != 0) {
      _STL::
      _Rb_tree<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clResult*>,struct__STL::_Select1st<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clResult*>_>,struct__STL::less<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clResult*>_>_>
      ::M_erase((_Rb_tree<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clResult*>,struct__STL::_Select1st<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clResult*>_>,struct__STL::less<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clResult*>_>_>
                 *)this,*(_Rb_tree_node<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clResult*>_>
                          **)(iVar2 + 0xc));
      iVar1 = *(int *)(iVar2 + 8);
      _STL::
      pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResult*>
      ::_scalar_deleting_destructor_
                ((pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResult*>
                  *)(iVar2 + 0x10),0);
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




/* from: libgsclient:GameResult.cpp
   addr: 005B1D10 */

void __thiscall
clPointerMap<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,class_clResult*>
::
~clPointerMap<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,class_clResult*>
          (clPointerMap<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,class_clResult*>
           *this)

{
  map<void*,class_PKCAlgorithm*,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_PKCAlgorithm*>_>_>
  *this_00;
  int iVar1;
  int iVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005cba2f;
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
      _Rb_tree<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clResult*>,struct__STL::_Select1st<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clResult*>_>,struct__STL::less<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clResult*>_>_>
      ::M_erase((_Rb_tree<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clResult*>,struct__STL::_Select1st<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clResult*>_>,struct__STL::less<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clResult*>_>_>
                 *)this_00,
                *(_Rb_tree_node<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clResult*>_>
                  **)(iVar1 + 0xc));
      iVar2 = *(int *)(iVar1 + 8);
      _STL::
      pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResult*>
      ::_scalar_deleting_destructor_
                ((pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResult*>
                  *)(iVar1 + 0x10),0);
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




/* from: libgsclient:GameResult.cpp
   addr: 005B1DD0
   addr: 005B1DD0
   addr: 005B1DD0
   addr: 005B1DD0
   addr: 005B1DD0
   addr: 005B1DD0
   addr: 005B1DD0 */

void __thiscall
clPointerMap<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,class_clPlayerResult*>
::clear(clPointerMap<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,class_clPlayerResult*>
        *this)

{
  int iVar1;
  
  iVar1 = *(int *)this;
  _STL::
  map<void*,class_PKCAlgorithm*,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_PKCAlgorithm*>_>_>
  ::begin((map<void*,class_PKCAlgorithm*,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_PKCAlgorithm*>_>_>
           *)(this + 4));
  (**(code **)(iVar1 + 0xc))();
  return;
}




/* from: libgsclient:GameResult.cpp
   addr: 005B1DF0 */

void __thiscall
clPointerMap<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,class_clResult*>
::erase(clPointerMap<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,class_clResult*>
        *this,int *param_2,_Rb_tree_node_base *param_3)

{
  int iVar1;
  _Rb_tree_node_base *p_Var2;
  _Rb_tree_node_base *p_Var3;
  
  if (param_3 != *(_Rb_tree_node_base **)(this + 4)) {
    if (*(undefined4 **)(param_3 + 0x1c) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_3 + 0x1c))(1);
    }
    p_Var3 = *(_Rb_tree_node_base **)(param_3 + 0xc);
    *(undefined4 *)(param_3 + 0x1c) = 0;
    if (p_Var3 == (_Rb_tree_node_base *)0x0) {
      p_Var2 = *(_Rb_tree_node_base **)(param_3 + 4);
      p_Var3 = param_3;
      if (param_3 == *(_Rb_tree_node_base **)(p_Var2 + 0xc)) {
        do {
          p_Var3 = p_Var2;
          p_Var2 = *(_Rb_tree_node_base **)(p_Var3 + 4);
        } while (p_Var3 == *(_Rb_tree_node_base **)(p_Var2 + 0xc));
      }
      if (*(_Rb_tree_node_base **)(p_Var3 + 0xc) != p_Var2) {
        p_Var3 = p_Var2;
      }
    }
    else {
      for (p_Var2 = *(_Rb_tree_node_base **)(p_Var3 + 8); p_Var2 != (_Rb_tree_node_base *)0x0;
          p_Var2 = *(_Rb_tree_node_base **)(p_Var2 + 8)) {
        p_Var3 = p_Var2;
      }
    }
    iVar1 = *(int *)(this + 4);
    p_Var2 = _STL::_Rb_global<bool>::Rebalance_for_erase
                       (param_3,(_Rb_tree_node_base **)(iVar1 + 4),
                        (_Rb_tree_node_base **)(iVar1 + 8),(_Rb_tree_node_base **)(iVar1 + 0xc));
    _STL::_String_base<char,class_ExtAlloc::Allocator<char>_>::
    ~_String_base<char,class_ExtAlloc::Allocator<char>_>
              ((_String_base<char,class_ExtAlloc::Allocator<char>_> *)(p_Var2 + 0x10));
    ExtAlloc_Free_4(p_Var2);
    *(int *)(this + 8) = *(int *)(this + 8) + -1;
    *param_2 = (int)p_Var3;
    return;
  }
  *param_2 = (int)param_3;
  return;
}




/* from: libgsclient:GameResult.cpp
   addr: 005B1EA0 */

int __thiscall
clPointerMap<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,class_clResult*>
::erase(clPointerMap<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,class_clResult*>
        *this,_Rb_tree_node_base *param_2,_Rb_tree_node_base *param_3)

{
  _Rb_tree<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clResult*>,struct__STL::_Select1st<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clResult*>_>,struct__STL::less<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clResult*>_>_>
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
      if (*(undefined4 **)(p_Var6 + 0x1c) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(p_Var6 + 0x1c))(1);
      }
      local_8 = local_8 + 1;
      *(undefined4 *)(p_Var6 + 0x1c) = 0;
      p_Var6 = _STL::_Rb_global<bool>::M_increment(p_Var6);
    } while (p_Var6 != p_Var5);
  }
  _STL::_List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
  ::List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
            (local_4,(_List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
                      *)&param_2);
  this_00 = (_Rb_tree<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clResult*>,struct__STL::_Select1st<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clResult*>_>,struct__STL::less<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clResult*>_>_>
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
        _Rb_tree<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clResult*>,struct__STL::_Select1st<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clResult*>_>,struct__STL::less<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clResult*>_>_>
        ::M_erase(this_00,*(_Rb_tree_node<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clResult*>_>
                            **)(p_Var4 + 0xc));
        p_Var1 = *(_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
                   **)(p_Var4 + 8);
        _STL::
        pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResult*>
        ::_scalar_deleting_destructor_
                  ((pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResult*>
                    *)(p_Var4 + 0x10),0);
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
      _STL::_String_base<char,class_ExtAlloc::Allocator<char>_>::
      ~_String_base<char,class_ExtAlloc::Allocator<char>_>
                ((_String_base<char,class_ExtAlloc::Allocator<char>_> *)(p_Var6 + 0x10));
      ExtAlloc_Free_4(p_Var6);
      *(int *)(this + 8) = *(int *)(this + 8) + -1;
      p_Var3 = param_3;
    }
  }
  return local_8;
}




/* from: libgsclient:GameResult.cpp
   addr: 005B1FF0 */

void __thiscall
clPointerMap<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,class_clResult*>
::erase(clPointerMap<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,class_clResult*>
        *this,char *param_2,char *param_3)

{
  clPointerMap<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,class_clResult*>
  *pcVar1;
  void **ppvVar2;
  bool bVar3;
  int iVar4;
  clPointerMap<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,class_clResult*>
  *pcVar5;
  clPointerMap<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,class_clResult*>
  *local_24;
  undefined1 local_10 [4];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005cba48;
  local_4 = 0;
  ppvVar2 = &pvStack_c;
  pcVar5 = *(clPointerMap<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,class_clResult*>
             **)(this + 4);
  pcVar1 = *(clPointerMap<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,class_clResult*>
             **)(*(clPointerMap<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,class_clResult*>
                   **)(this + 4) + 4);
  local_24 = this;
  pvStack_c = ExceptionList;
  while (ExceptionList = ppvVar2,
        pcVar1 != (clPointerMap<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,class_clResult*>
                   *)0x0) {
    bVar3 = _STL::operator<((basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>
                             *)(pcVar1 + 0x10),
                            (basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>
                             *)&param_2);
    ppvVar2 = (void **)ExceptionList;
    if (bVar3) {
      pcVar1 = *(clPointerMap<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,class_clResult*>
                 **)(pcVar1 + 0xc);
    }
    else {
      pcVar5 = pcVar1;
      pcVar1 = *(clPointerMap<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,class_clResult*>
                 **)(pcVar1 + 8);
    }
  }
  if ((pcVar5 == *(clPointerMap<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,class_clResult*>
                   **)(this + 4)) ||
     (iVar4 = _STL::
              basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::
              M_compare(param_2,param_3,*(char **)(pcVar5 + 0x10),*(char **)(pcVar5 + 0x14)),
     iVar4 < 0)) {
    pcVar5 = *(clPointerMap<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,class_clResult*>
               **)(this + 4);
  }
  local_24 = pcVar5;
  (**(code **)(*(int *)this + 0x10))(local_10);
  ExtAlloc_Free_4(local_4);
  ExceptionList = &local_24;
  return;
}




/* from: libgsclient:GameResult.cpp
   addr: 005B20B0 */

void __thiscall
_STL::
_Rb_tree<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,enum_clResult::DataType>,struct__STL::_Select1st<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,enum_clResult::DataType>_>,struct__STL::less<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,enum_clResult::DataType>_>_>
::clear(_Rb_tree<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,enum_clResult::DataType>,struct__STL::_Select1st<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,enum_clResult::DataType>_>,struct__STL::less<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,enum_clResult::DataType>_>_>
        *this)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(this + 4) != 0) {
    iVar2 = *(int *)(*(int *)this + 4);
    while (iVar2 != 0) {
      M_erase(this,*(_Rb_tree_node<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,enum_clResult::DataType>_>
                     **)(iVar2 + 0xc));
      iVar1 = *(int *)(iVar2 + 8);
      _String_base<char,class_ExtAlloc::Allocator<char>_>::
      ~_String_base<char,class_ExtAlloc::Allocator<char>_>
                ((_String_base<char,class_ExtAlloc::Allocator<char>_> *)(iVar2 + 0x10));
      ExtAlloc_Free_4(iVar2);
      iVar2 = iVar1;
    }
    *(int *)(*(int *)this + 8) = *(int *)this;
    *(undefined4 *)(*(int *)this + 4) = 0;
    *(int *)(*(int *)this + 0xc) = *(int *)this;
    *(undefined4 *)(this + 4) = 0;
  }
  return;
}




/* from: libgsclient:GameResult.cpp
   addr: 005B2110 */

void __thiscall
_STL::
_Rb_tree<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clResult*>,struct__STL::_Select1st<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clResult*>_>,struct__STL::less<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clResult*>_>_>
::M_erase(_Rb_tree<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clResult*>,struct__STL::_Select1st<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clResult*>_>,struct__STL::less<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clResult*>_>_>
          *this,_Rb_tree_node<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clResult*>_>
                *param_1)

{
  _Rb_tree_node<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clResult*>_>
  *p_Var1;
  
  if (param_1 !=
      (_Rb_tree_node<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clResult*>_>
       *)0x0) {
    do {
      M_erase(this,*(_Rb_tree_node<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clResult*>_>
                     **)(param_1 + 0xc));
      p_Var1 = *(_Rb_tree_node<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clResult*>_>
                 **)(param_1 + 8);
      _String_base<char,class_ExtAlloc::Allocator<char>_>::
      ~_String_base<char,class_ExtAlloc::Allocator<char>_>
                ((_String_base<char,class_ExtAlloc::Allocator<char>_> *)(param_1 + 0x10));
      ExtAlloc_Free_4(param_1);
      param_1 = p_Var1;
    } while (p_Var1 != (_Rb_tree_node<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clResult*>_>
                        *)0x0);
  }
  return;
}




/* from: libgsclient:GameResult.cpp
   addr: 005B2150 */

void __thiscall
_STL::
_Rb_tree<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,enum_clResult::DataType>,struct__STL::_Select1st<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,enum_clResult::DataType>_>,struct__STL::less<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,enum_clResult::DataType>_>_>
::M_erase(_Rb_tree<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,enum_clResult::DataType>,struct__STL::_Select1st<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,enum_clResult::DataType>_>,struct__STL::less<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,enum_clResult::DataType>_>_>
          *this,_Rb_tree_node<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,enum_clResult::DataType>_>
                *param_1)

{
  _Rb_tree_node<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,enum_clResult::DataType>_>
  *p_Var1;
  
  if (param_1 !=
      (_Rb_tree_node<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,enum_clResult::DataType>_>
       *)0x0) {
    do {
      M_erase(this,*(_Rb_tree_node<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,enum_clResult::DataType>_>
                     **)(param_1 + 0xc));
      p_Var1 = *(_Rb_tree_node<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,enum_clResult::DataType>_>
                 **)(param_1 + 8);
      _String_base<char,class_ExtAlloc::Allocator<char>_>::
      ~_String_base<char,class_ExtAlloc::Allocator<char>_>
                ((_String_base<char,class_ExtAlloc::Allocator<char>_> *)(param_1 + 0x10));
      ExtAlloc_Free_4(param_1);
      param_1 = p_Var1;
    } while (p_Var1 != (_Rb_tree_node<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,enum_clResult::DataType>_>
                        *)0x0);
  }
  return;
}

