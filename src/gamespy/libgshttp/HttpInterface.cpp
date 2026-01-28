
/* from: libgshttp:HttpInterface.cpp
   addr: 005894B0 */

void * HttpAlgorithmInterface::CreateHttpHandle(void)

{
  _Rb_tree<void*,struct__STL::pair<void*_const,class_CHttpDownload*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CHttpDownload*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CHttpDownload*>_>_>
  *this;
  _Rb_tree_node_base *p_Var1;
  void *pvVar2;
  clPointerMap<void*,class_CHttpDownload*> *pcVar3;
  _Rb_tree_node_base *p_Var4;
  _Rb_tree_node_base *p_Var5;
  bool bVar6;
  Allocator<struct__STL::pair<void*_const,class_CryptoAlgorithm*>_> local_1e;
  less<void*> local_1d;
  CHttpDownload *local_1c;
  void *local_18;
  clPointerMap<void*,class_CHttpDownload*> *local_14;
  _Rb_tree<void*,struct__STL::pair<void*_const,class_CryptoAlgorithm*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CryptoAlgorithm*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CryptoAlgorithm*>_>_>
  *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c7916;
  local_c = ExceptionList;
  local_1c = (CHttpDownload *)0x0;
  ExceptionList = &local_c;
  local_1c = (CHttpDownload *)ExtAlloc_Malloc_4(0x1c);
  local_4 = 0;
  if (local_1c == (CHttpDownload *)0x0) {
    pvVar2 = (void *)0x0;
  }
  else {
    pvVar2 = (void *)CHttpDownload::CHttpDownload(local_1c);
  }
  local_4 = 0xffffffff;
  if (pvVar2 == (void *)0x0) {
    ExceptionList = local_c;
    return (void *)0x0;
  }
  if (StaticInterface<class_CHttpDownload>::m_Instances ==
      (clPointerMap<void*,class_CHttpDownload*> *)0x0) {
    pcVar3 = (clPointerMap<void*,class_CHttpDownload*> *)ExtAlloc_Malloc_4(0x14);
    local_14 = pcVar3;
    if (pcVar3 == (clPointerMap<void*,class_CHttpDownload*> *)0x0) {
      StaticInterface<class_CHttpDownload>::m_Instances =
           (clPointerMap<void*,class_CHttpDownload*> *)0x0;
    }
    else {
      *(undefined1 **)(pcVar3 + 0x10) = &clPointerMap<void*,class_CHttpDownload*>::_vbtable_;
      local_1c = (CHttpDownload *)0x1;
      local_10 = (_Rb_tree<void*,struct__STL::pair<void*_const,class_CryptoAlgorithm*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CryptoAlgorithm*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CryptoAlgorithm*>_>_>
                  *)(pcVar3 + 4);
      local_4 = 4;
      _STL::
      _Rb_tree<void*,struct__STL::pair<void*_const,class_CryptoAlgorithm*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CryptoAlgorithm*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CryptoAlgorithm*>_>_>
      ::
      Rb_tree<void*,struct__STL::pair<void*_const,class_CryptoAlgorithm*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CryptoAlgorithm*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CryptoAlgorithm*>_>_>
                (local_10,&local_1d,&local_1e);
      *(undefined ***)pcVar3 = &clPointerMap<void*,class_CHttpDownload*>::_vftable_;
      StaticInterface<class_CHttpDownload>::m_Instances = pcVar3;
    }
  }
  local_4 = 0xffffffff;
  this = (_Rb_tree<void*,struct__STL::pair<void*_const,class_CHttpDownload*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CHttpDownload*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CHttpDownload*>_>_>
          *)(StaticInterface<class_CHttpDownload>::m_Instances + 4);
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
  local_1c = (CHttpDownload *)pvVar2;
  local_18 = pvVar2;
  if (bVar6) {
    if (p_Var1 == *(_Rb_tree_node_base **)(p_Var5 + 8)) {
      p_Var5 = (_Rb_tree_node_base *)&local_10;
      goto LAB_005895ca;
    }
    p_Var4 = _STL::_Rb_global<bool>::M_decrement(p_Var1);
  }
  if (local_1c <= *(void **)(p_Var4 + 0x10)) {
    ExceptionList = local_c;
    return pvVar2;
  }
  p_Var5 = (_Rb_tree_node_base *)&local_14;
LAB_005895ca:
  _STL::
  _Rb_tree<void*,struct__STL::pair<void*_const,class_CHttpDownload*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CHttpDownload*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CHttpDownload*>_>_>
  ::M_insert(this,p_Var5,(_Rb_tree_node_base *)0x0,(pair<void*_const,class_CHttpDownload*> *)p_Var1,
             (_Rb_tree_node_base *)&local_1c);
  ExceptionList = local_c;
  return pvVar2;
}




/* from: libgshttp:HttpInterface.cpp
   addr: 005895F0 */

void HttpAlgorithmInterface::DestroyHttpHandle(void *param_1)

{
  if (StaticInterface<class_CHttpDownload>::m_Instances !=
      (clPointerMap<void*,class_CHttpDownload*> *)0x0) {
    (**(code **)(*(int *)StaticInterface<class_CHttpDownload>::m_Instances + 8))(param_1);
    if (*(int *)(StaticInterface<class_CHttpDownload>::m_Instances + 8) == 0) {
      if (StaticInterface<class_CHttpDownload>::m_Instances !=
          (clPointerMap<void*,class_CHttpDownload*> *)0x0) {
        (*(code *)**(undefined4 **)StaticInterface<class_CHttpDownload>::m_Instances)(1);
      }
      StaticInterface<class_CHttpDownload>::m_Instances =
           (clPointerMap<void*,class_CHttpDownload*> *)0x0;
    }
  }
  return;
}




/* from: libgshttp:HttpInterface.cpp
   addr: 00589630 */

void HttpAlgorithmInterface::DestroyAllHttpHandle(void)

{
  if (StaticInterface<class_CHttpDownload>::m_Instances !=
      (clPointerMap<void*,class_CHttpDownload*> *)0x0) {
    (*(code *)**(undefined4 **)StaticInterface<class_CHttpDownload>::m_Instances)(1);
    StaticInterface<class_CHttpDownload>::m_Instances =
         (clPointerMap<void*,class_CHttpDownload*> *)0x0;
  }
  return;
}




/* from: libgshttp:HttpInterface.cpp
   addr: 00589650 */

uchar HttpAlgorithmInterface::GSHttpEngine(void *param_1,uint param_2)

{
  uchar uVar1;
  
  if (param_1 == (void *)0x0) {
    return '\0';
  }
  uVar1 = CHttpDownload::Engine((CHttpDownload *)param_1,param_2);
  return uVar1;
}




/* from: libgshttp:HttpInterface.cpp
   addr: 00589670 */

uint HttpAlgorithmInterface::GSHttpSave
               (void *param_1,char *param_2,char *param_3,uchar param_4,
               _func_void_uint_GSHTTPResult_char_ptr_uint_uchar_void_ptr *param_5,void *param_6)

{
  uint uVar1;
  
  if (param_1 == (void *)0x0) {
    return 0;
  }
  uVar1 = CHttpDownload::Save((CHttpDownload *)param_1,param_2,param_3,param_4,param_5,param_6);
  return uVar1;
}




/* from: libgshttp:HttpInterface.cpp
   addr: 005896A0 */

uchar HttpAlgorithmInterface::GSHttpCancelRequest(void *param_1,uint param_2)

{
  uchar uVar1;
  
  if (param_1 == (void *)0x0) {
    return '\0';
  }
  uVar1 = CHttpDownload::CancelRequest((CHttpDownload *)param_1,param_2);
  return uVar1;
}




/* from: libgshttp:HttpInterface.cpp
   addr: 005896C0
   addr: 005896C0 */

void * __thiscall
clPointerMap<void*,class_CHttpDownload*>::_vector_deleting_destructor_
          (clPointerMap<void*,class_CHttpDownload*> *this,uint param_1)

{
  ~clPointerMap<void*,class_CHttpDownload*>(this);
  if ((param_1 & 1) != 0) {
    ExtAlloc_Free_4(this);
  }
  return this;
}




/* from: libgshttp:HttpInterface.cpp
   addr: 005896E0 */

void __thiscall
clPointerMap<void*,class_CHttpDownload*>::~clPointerMap<void*,class_CHttpDownload*>
          (clPointerMap<void*,class_CHttpDownload*> *this)

{
  map<void*,class_PKCAlgorithm*,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_PKCAlgorithm*>_>_>
  *this_00;
  int iVar1;
  int iVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c794f;
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
      _Rb_tree<void*,struct__STL::pair<void*_const,class_CHttpDownload*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CHttpDownload*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CHttpDownload*>_>_>
      ::M_erase((_Rb_tree<void*,struct__STL::pair<void*_const,class_CHttpDownload*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CHttpDownload*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CHttpDownload*>_>_>
                 *)this_00,
                *(_Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> **)
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




/* from: libgshttp:HttpInterface.cpp
   addr: 005897A0 */

void __thiscall
ExtAlloc::map<void*,class_CHttpDownload*,struct__STL::less<void*>_>::
~map<void*,class_CHttpDownload*,struct__STL::less<void*>_>
          (map<void*,class_CHttpDownload*,struct__STL::less<void*>_> *this)

{
  int iVar1;
  int iVar2;
  void **ppvVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c7968;
  local_c = ExceptionList;
  local_4 = 0;
  ppvVar3 = &local_c;
  if (*(int *)(this + 4) != 0) {
    iVar2 = *(int *)(*(int *)this + 4);
    ExceptionList = &local_c;
    while (iVar2 != 0) {
      _STL::
      _Rb_tree<void*,struct__STL::pair<void*_const,class_CHttpDownload*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CHttpDownload*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CHttpDownload*>_>_>
      ::M_erase((_Rb_tree<void*,struct__STL::pair<void*_const,class_CHttpDownload*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CHttpDownload*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CHttpDownload*>_>_>
                 *)this,*(_Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> **)
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




/* from: libgshttp:HttpInterface.cpp
   addr: 00589830
   addr: 00589830
   addr: 00589830
   addr: 00589830 */

void __thiscall
clPointerMap<void*,class_CryptoAlgorithm*>::erase
          (clPointerMap<void*,class_CryptoAlgorithm*> *this,int *param_2,_Rb_tree_node_base *param_3
          )

{
  int iVar1;
  _Rb_tree_node_base *p_Var2;
  _Rb_tree_node_base *p_Var3;
  
  if (param_3 != *(_Rb_tree_node_base **)(this + 4)) {
    if (*(undefined4 **)(param_3 + 0x14) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_3 + 0x14))(1);
    }
    p_Var3 = *(_Rb_tree_node_base **)(param_3 + 0xc);
    *(undefined4 *)(param_3 + 0x14) = 0;
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
    ExtAlloc_Free_4(p_Var2);
    *(int *)(this + 8) = *(int *)(this + 8) + -1;
    *param_2 = (int)p_Var3;
    return;
  }
  *param_2 = (int)param_3;
  return;
}




/* from: libgshttp:HttpInterface.cpp
   addr: 005898D0 */

int __thiscall
clPointerMap<void*,class_CHttpDownload*>::erase
          (clPointerMap<void*,class_CHttpDownload*> *this,_Rb_tree_node_base *param_2,
          _Rb_tree_node_base *param_3)

{
  _Rb_tree<void*,struct__STL::pair<void*_const,class_CHttpDownload*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CHttpDownload*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CHttpDownload*>_>_>
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
  this_00 = (_Rb_tree<void*,struct__STL::pair<void*_const,class_CHttpDownload*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CHttpDownload*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CHttpDownload*>_>_>
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
        _Rb_tree<void*,struct__STL::pair<void*_const,class_CHttpDownload*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CHttpDownload*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CHttpDownload*>_>_>
        ::M_erase(this_00,*(_Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> **)
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




/* from: libgshttp:HttpInterface.cpp
   addr: 00589A20
   addr: 00589A20
   addr: 00589A20
   addr: 00589A20 */

_Rb_tree<void*,struct__STL::pair<void*_const,class_CryptoAlgorithm*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CryptoAlgorithm*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CryptoAlgorithm*>_>_>
* __thiscall
_STL::
_Rb_tree<void*,struct__STL::pair<void*_const,class_CryptoAlgorithm*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CryptoAlgorithm*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CryptoAlgorithm*>_>_>
::
Rb_tree<void*,struct__STL::pair<void*_const,class_CryptoAlgorithm*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CryptoAlgorithm*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CryptoAlgorithm*>_>_>
          (_Rb_tree<void*,struct__STL::pair<void*_const,class_CryptoAlgorithm*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CryptoAlgorithm*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CryptoAlgorithm*>_>_>
           *this,less<void*> *param_1,
          Allocator<struct__STL::pair<void*_const,class_CryptoAlgorithm*>_> *param_2)

{
  undefined1 *puVar1;
  
  *(undefined4 *)this = 0;
  puVar1 = (undefined1 *)ExtAlloc_Malloc_4(0x18);
  *(undefined1 **)this = puVar1;
  *(undefined4 *)(this + 4) = 0;
  this[8] = *(_Rb_tree<void*,struct__STL::pair<void*_const,class_CryptoAlgorithm*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CryptoAlgorithm*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CryptoAlgorithm*>_>_>
              *)param_1;
  *puVar1 = 0;
  *(undefined4 *)(*(int *)this + 4) = 0;
  *(int *)(*(int *)this + 8) = *(int *)this;
  *(int *)(*(int *)this + 0xc) = *(int *)this;
  return this;
}




/* from: libgshttp:HttpInterface.cpp
   addr: 00589A70 */

void __thiscall
_STL::
_Rb_tree<void*,struct__STL::pair<void*_const,class_CHttpDownload*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CHttpDownload*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CHttpDownload*>_>_>
::M_erase(_Rb_tree<void*,struct__STL::pair<void*_const,class_CHttpDownload*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CHttpDownload*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CHttpDownload*>_>_>
          *this,_Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> *param_1)

{
  _Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> *p_Var1;
  
  if (param_1 != (_Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> *)0x0) {
    do {
      M_erase(this,*(_Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> **)
                    (param_1 + 0xc));
      p_Var1 = *(_Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> **)
                (param_1 + 8);
      ExtAlloc_Free_4(param_1);
      param_1 = p_Var1;
    } while (p_Var1 != (_Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> *)0x0);
  }
  return;
}




/* from: libgshttp:HttpInterface.cpp
   addr: 00589AA0 */

_Rb_tree_node_base * __cdecl
_STL::_Rb_global<bool>::Rebalance_for_erase
          (_Rb_tree_node_base *param_1,_Rb_tree_node_base **param_2,_Rb_tree_node_base **param_3,
          _Rb_tree_node_base **param_4)

{
  _Rb_tree_node_base _Var1;
  _Rb_tree_node_base *p_Var2;
  int iVar3;
  _Rb_tree_node_base *p_Var4;
  _Rb_tree_node_base *p_Var5;
  _Rb_tree_node_base *p_Var6;
  _Rb_tree_node_base *p_Var7;
  _Rb_tree_node_base *p_Var8;
  
  p_Var5 = *(_Rb_tree_node_base **)(param_1 + 8);
  p_Var7 = param_1;
  if (p_Var5 == (_Rb_tree_node_base *)0x0) {
    p_Var8 = *(_Rb_tree_node_base **)(param_1 + 0xc);
  }
  else {
    p_Var6 = *(_Rb_tree_node_base **)(param_1 + 0xc);
    p_Var8 = p_Var5;
    if (p_Var6 != (_Rb_tree_node_base *)0x0) {
      for (p_Var7 = *(_Rb_tree_node_base **)(p_Var6 + 8); p_Var7 != (_Rb_tree_node_base *)0x0;
          p_Var7 = *(_Rb_tree_node_base **)(p_Var7 + 8)) {
        p_Var6 = p_Var7;
      }
      p_Var8 = *(_Rb_tree_node_base **)(p_Var6 + 0xc);
      p_Var7 = p_Var6;
      if (p_Var6 != param_1) {
        *(_Rb_tree_node_base **)(p_Var5 + 4) = p_Var6;
        *(undefined4 *)(p_Var6 + 8) = *(undefined4 *)(param_1 + 8);
        p_Var5 = p_Var6;
        if (p_Var6 != *(_Rb_tree_node_base **)(param_1 + 0xc)) {
          p_Var5 = *(_Rb_tree_node_base **)(p_Var6 + 4);
          if (p_Var8 != (_Rb_tree_node_base *)0x0) {
            *(_Rb_tree_node_base **)(p_Var8 + 4) = p_Var5;
          }
          *(_Rb_tree_node_base **)(*(int *)(p_Var6 + 4) + 8) = p_Var8;
          *(undefined4 *)(p_Var6 + 0xc) = *(undefined4 *)(param_1 + 0xc);
          *(_Rb_tree_node_base **)(*(int *)(param_1 + 0xc) + 4) = p_Var6;
        }
        if (*param_2 == param_1) {
          *param_2 = p_Var6;
        }
        else {
          iVar3 = *(int *)(param_1 + 4);
          if (*(_Rb_tree_node_base **)(iVar3 + 8) == param_1) {
            *(_Rb_tree_node_base **)(iVar3 + 8) = p_Var6;
          }
          else {
            *(_Rb_tree_node_base **)(iVar3 + 0xc) = p_Var6;
          }
        }
        *(undefined4 *)(p_Var6 + 4) = *(undefined4 *)(param_1 + 4);
        _Var1 = *p_Var6;
        *p_Var6 = *param_1;
        *param_1 = _Var1;
        p_Var7 = param_1;
        goto LAB_00589bce;
      }
    }
  }
  p_Var5 = *(_Rb_tree_node_base **)(p_Var7 + 4);
  if (p_Var8 != (_Rb_tree_node_base *)0x0) {
    *(_Rb_tree_node_base **)(p_Var8 + 4) = p_Var5;
  }
  if (*param_2 == param_1) {
    *param_2 = p_Var8;
  }
  else {
    iVar3 = *(int *)(param_1 + 4);
    if (*(_Rb_tree_node_base **)(iVar3 + 8) == param_1) {
      *(_Rb_tree_node_base **)(iVar3 + 8) = p_Var8;
    }
    else {
      *(_Rb_tree_node_base **)(iVar3 + 0xc) = p_Var8;
    }
  }
  if (*param_3 == param_1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      *param_3 = *(_Rb_tree_node_base **)(param_1 + 4);
    }
    else {
      p_Var2 = *(_Rb_tree_node_base **)(p_Var8 + 8);
      p_Var6 = p_Var8;
      while (p_Var4 = p_Var2, p_Var4 != (_Rb_tree_node_base *)0x0) {
        p_Var6 = p_Var4;
        p_Var2 = *(_Rb_tree_node_base **)(p_Var4 + 8);
      }
      *param_3 = p_Var6;
    }
  }
  if (*param_4 == param_1) {
    if (*(int *)(param_1 + 8) == 0) {
      *param_4 = *(_Rb_tree_node_base **)(param_1 + 4);
    }
    else {
      p_Var2 = *(_Rb_tree_node_base **)(p_Var8 + 0xc);
      p_Var6 = p_Var8;
      while (p_Var4 = p_Var2, p_Var4 != (_Rb_tree_node_base *)0x0) {
        p_Var6 = p_Var4;
        p_Var2 = *(_Rb_tree_node_base **)(p_Var4 + 0xc);
      }
      *param_4 = p_Var6;
    }
  }
LAB_00589bce:
  if (*p_Var7 != (_Rb_tree_node_base)0x0) {
    if (p_Var8 != *param_2) {
      do {
        p_Var6 = p_Var5;
        if ((p_Var8 != (_Rb_tree_node_base *)0x0) && (*p_Var8 != (_Rb_tree_node_base)0x1)) break;
        p_Var5 = *(_Rb_tree_node_base **)(p_Var6 + 8);
        if (p_Var8 == p_Var5) {
          p_Var5 = *(_Rb_tree_node_base **)(p_Var6 + 0xc);
          if (*p_Var5 == (_Rb_tree_node_base)0x0) {
            *p_Var5 = (_Rb_tree_node_base)0x1;
            p_Var5 = *(_Rb_tree_node_base **)(p_Var6 + 0xc);
            *p_Var6 = (_Rb_tree_node_base)0x0;
            *(undefined4 *)(p_Var6 + 0xc) = *(undefined4 *)(p_Var5 + 8);
            if (*(int *)(p_Var5 + 8) != 0) {
              *(_Rb_tree_node_base **)(*(int *)(p_Var5 + 8) + 4) = p_Var6;
            }
            *(undefined4 *)(p_Var5 + 4) = *(undefined4 *)(p_Var6 + 4);
            if (p_Var6 == *param_2) {
              *param_2 = p_Var5;
            }
            else {
              iVar3 = *(int *)(p_Var6 + 4);
              if (p_Var6 == *(_Rb_tree_node_base **)(iVar3 + 8)) {
                *(_Rb_tree_node_base **)(iVar3 + 8) = p_Var5;
              }
              else {
                *(_Rb_tree_node_base **)(iVar3 + 0xc) = p_Var5;
              }
            }
            *(_Rb_tree_node_base **)(p_Var5 + 8) = p_Var6;
            *(_Rb_tree_node_base **)(p_Var6 + 4) = p_Var5;
            p_Var5 = *(_Rb_tree_node_base **)(p_Var6 + 0xc);
          }
          if (((*(char **)(p_Var5 + 8) != (char *)0x0) && (**(char **)(p_Var5 + 8) != '\x01')) ||
             ((*(char **)(p_Var5 + 0xc) != (char *)0x0 && (**(char **)(p_Var5 + 0xc) != '\x01')))) {
            if ((*(char **)(p_Var5 + 0xc) == (char *)0x0) || (**(char **)(p_Var5 + 0xc) == '\x01'))
            {
              if (*(undefined1 **)(p_Var5 + 8) != (undefined1 *)0x0) {
                **(undefined1 **)(p_Var5 + 8) = 1;
              }
              p_Var2 = *(_Rb_tree_node_base **)(p_Var5 + 8);
              *p_Var5 = (_Rb_tree_node_base)0x0;
              *(undefined4 *)(p_Var5 + 8) = *(undefined4 *)(p_Var2 + 0xc);
              if (*(int *)(p_Var2 + 0xc) != 0) {
                *(_Rb_tree_node_base **)(*(int *)(p_Var2 + 0xc) + 4) = p_Var5;
              }
              *(undefined4 *)(p_Var2 + 4) = *(undefined4 *)(p_Var5 + 4);
              if (p_Var5 == *param_2) {
                *param_2 = p_Var2;
              }
              else {
                iVar3 = *(int *)(p_Var5 + 4);
                if (p_Var5 == *(_Rb_tree_node_base **)(iVar3 + 0xc)) {
                  *(_Rb_tree_node_base **)(iVar3 + 0xc) = p_Var2;
                }
                else {
                  *(_Rb_tree_node_base **)(iVar3 + 8) = p_Var2;
                }
              }
              *(_Rb_tree_node_base **)(p_Var2 + 0xc) = p_Var5;
              *(_Rb_tree_node_base **)(p_Var5 + 4) = p_Var2;
              p_Var5 = *(_Rb_tree_node_base **)(p_Var6 + 0xc);
            }
            *p_Var5 = *p_Var6;
            *p_Var6 = (_Rb_tree_node_base)0x1;
            if (*(undefined1 **)(p_Var5 + 0xc) != (undefined1 *)0x0) {
              **(undefined1 **)(p_Var5 + 0xc) = 1;
            }
            p_Var5 = *(_Rb_tree_node_base **)(p_Var6 + 0xc);
            *(undefined4 *)(p_Var6 + 0xc) = *(undefined4 *)(p_Var5 + 8);
            if (*(int *)(p_Var5 + 8) != 0) {
              *(_Rb_tree_node_base **)(*(int *)(p_Var5 + 8) + 4) = p_Var6;
            }
            *(undefined4 *)(p_Var5 + 4) = *(undefined4 *)(p_Var6 + 4);
            if (p_Var6 == *param_2) {
              *param_2 = p_Var5;
              *(_Rb_tree_node_base **)(p_Var5 + 8) = p_Var6;
            }
            else {
              iVar3 = *(int *)(p_Var6 + 4);
              if (p_Var6 == *(_Rb_tree_node_base **)(iVar3 + 8)) {
                *(_Rb_tree_node_base **)(iVar3 + 8) = p_Var5;
                *(_Rb_tree_node_base **)(p_Var5 + 8) = p_Var6;
              }
              else {
                *(_Rb_tree_node_base **)(iVar3 + 0xc) = p_Var5;
                *(_Rb_tree_node_base **)(p_Var5 + 8) = p_Var6;
              }
            }
LAB_00589e46:
            *(_Rb_tree_node_base **)(p_Var6 + 4) = p_Var5;
            break;
          }
        }
        else {
          if (*p_Var5 == (_Rb_tree_node_base)0x0) {
            *p_Var5 = (_Rb_tree_node_base)0x1;
            p_Var5 = *(_Rb_tree_node_base **)(p_Var6 + 8);
            *p_Var6 = (_Rb_tree_node_base)0x0;
            *(undefined4 *)(p_Var6 + 8) = *(undefined4 *)(p_Var5 + 0xc);
            if (*(int *)(p_Var5 + 0xc) != 0) {
              *(_Rb_tree_node_base **)(*(int *)(p_Var5 + 0xc) + 4) = p_Var6;
            }
            *(undefined4 *)(p_Var5 + 4) = *(undefined4 *)(p_Var6 + 4);
            if (p_Var6 == *param_2) {
              *param_2 = p_Var5;
            }
            else {
              iVar3 = *(int *)(p_Var6 + 4);
              if (p_Var6 == *(_Rb_tree_node_base **)(iVar3 + 0xc)) {
                *(_Rb_tree_node_base **)(iVar3 + 0xc) = p_Var5;
              }
              else {
                *(_Rb_tree_node_base **)(iVar3 + 8) = p_Var5;
              }
            }
            *(_Rb_tree_node_base **)(p_Var5 + 0xc) = p_Var6;
            *(_Rb_tree_node_base **)(p_Var6 + 4) = p_Var5;
            p_Var5 = *(_Rb_tree_node_base **)(p_Var6 + 8);
          }
          if (((*(char **)(p_Var5 + 0xc) != (char *)0x0) && (**(char **)(p_Var5 + 0xc) != '\x01'))
             || ((*(char **)(p_Var5 + 8) != (char *)0x0 && (**(char **)(p_Var5 + 8) != '\x01')))) {
            if ((*(char **)(p_Var5 + 8) == (char *)0x0) || (**(char **)(p_Var5 + 8) == '\x01')) {
              if (*(undefined1 **)(p_Var5 + 0xc) != (undefined1 *)0x0) {
                **(undefined1 **)(p_Var5 + 0xc) = 1;
              }
              p_Var2 = *(_Rb_tree_node_base **)(p_Var5 + 0xc);
              *p_Var5 = (_Rb_tree_node_base)0x0;
              *(undefined4 *)(p_Var5 + 0xc) = *(undefined4 *)(p_Var2 + 8);
              if (*(int *)(p_Var2 + 8) != 0) {
                *(_Rb_tree_node_base **)(*(int *)(p_Var2 + 8) + 4) = p_Var5;
              }
              *(undefined4 *)(p_Var2 + 4) = *(undefined4 *)(p_Var5 + 4);
              if (p_Var5 == *param_2) {
                *param_2 = p_Var2;
              }
              else {
                iVar3 = *(int *)(p_Var5 + 4);
                if (p_Var5 == *(_Rb_tree_node_base **)(iVar3 + 8)) {
                  *(_Rb_tree_node_base **)(iVar3 + 8) = p_Var2;
                }
                else {
                  *(_Rb_tree_node_base **)(iVar3 + 0xc) = p_Var2;
                }
              }
              *(_Rb_tree_node_base **)(p_Var2 + 8) = p_Var5;
              *(_Rb_tree_node_base **)(p_Var5 + 4) = p_Var2;
              p_Var5 = *(_Rb_tree_node_base **)(p_Var6 + 8);
            }
            *p_Var5 = *p_Var6;
            *p_Var6 = (_Rb_tree_node_base)0x1;
            if (*(undefined1 **)(p_Var5 + 8) != (undefined1 *)0x0) {
              **(undefined1 **)(p_Var5 + 8) = 1;
            }
            p_Var5 = *(_Rb_tree_node_base **)(p_Var6 + 8);
            *(undefined4 *)(p_Var6 + 8) = *(undefined4 *)(p_Var5 + 0xc);
            if (*(int *)(p_Var5 + 0xc) != 0) {
              *(_Rb_tree_node_base **)(*(int *)(p_Var5 + 0xc) + 4) = p_Var6;
            }
            *(undefined4 *)(p_Var5 + 4) = *(undefined4 *)(p_Var6 + 4);
            if (p_Var6 == *param_2) {
              *param_2 = p_Var5;
            }
            else {
              iVar3 = *(int *)(p_Var6 + 4);
              if (p_Var6 == *(_Rb_tree_node_base **)(iVar3 + 0xc)) {
                *(_Rb_tree_node_base **)(iVar3 + 0xc) = p_Var5;
              }
              else {
                *(_Rb_tree_node_base **)(iVar3 + 8) = p_Var5;
              }
            }
            *(_Rb_tree_node_base **)(p_Var5 + 0xc) = p_Var6;
            goto LAB_00589e46;
          }
        }
        *p_Var5 = (_Rb_tree_node_base)0x0;
        p_Var5 = *(_Rb_tree_node_base **)(p_Var6 + 4);
        p_Var8 = p_Var6;
      } while (p_Var6 != *param_2);
    }
    if (p_Var8 != (_Rb_tree_node_base *)0x0) {
      *p_Var8 = (_Rb_tree_node_base)0x1;
      return p_Var7;
    }
  }
  return p_Var7;
}




/* from: libgshttp:HttpInterface.cpp
   addr: 00589E60 */

_Rb_tree_node_base * __cdecl _STL::_Rb_global<bool>::M_increment(_Rb_tree_node_base *param_1)

{
  _Rb_tree_node_base *p_Var1;
  _Rb_tree_node_base *p_Var2;
  
  p_Var1 = *(_Rb_tree_node_base **)(param_1 + 0xc);
  if (p_Var1 == (_Rb_tree_node_base *)0x0) {
    p_Var1 = *(_Rb_tree_node_base **)(param_1 + 4);
    if (param_1 == *(_Rb_tree_node_base **)(p_Var1 + 0xc)) {
      do {
        param_1 = p_Var1;
        p_Var1 = *(_Rb_tree_node_base **)(param_1 + 4);
      } while (param_1 == *(_Rb_tree_node_base **)(p_Var1 + 0xc));
    }
    if (*(_Rb_tree_node_base **)(param_1 + 0xc) == p_Var1) {
      p_Var1 = param_1;
    }
  }
  else {
    p_Var2 = *(_Rb_tree_node_base **)(p_Var1 + 8);
    if (p_Var2 != (_Rb_tree_node_base *)0x0) {
      do {
        p_Var1 = p_Var2;
        p_Var2 = *(_Rb_tree_node_base **)(p_Var2 + 8);
      } while (p_Var2 != (_Rb_tree_node_base *)0x0);
      return p_Var1;
    }
  }
  return p_Var1;
}




/* from: libgshttp:HttpInterface.cpp
   addr: 00589EA0 */

_Rb_tree_node_base * __cdecl _STL::_Rb_global<bool>::M_decrement(_Rb_tree_node_base *param_1)

{
  _Rb_tree_node_base *p_Var1;
  _Rb_tree_node_base *p_Var2;
  bool bVar3;
  
  if ((*param_1 == (_Rb_tree_node_base)0x0) &&
     (*(_Rb_tree_node_base **)(*(int *)(param_1 + 4) + 4) == param_1)) {
    return *(_Rb_tree_node_base **)(param_1 + 0xc);
  }
  p_Var1 = *(_Rb_tree_node_base **)(param_1 + 8);
  if (p_Var1 == (_Rb_tree_node_base *)0x0) {
    p_Var1 = *(_Rb_tree_node_base **)(param_1 + 4);
    p_Var2 = p_Var1;
    if (param_1 == *(_Rb_tree_node_base **)(p_Var1 + 8)) {
      do {
        p_Var1 = *(_Rb_tree_node_base **)(p_Var2 + 4);
        bVar3 = p_Var2 == *(_Rb_tree_node_base **)(p_Var1 + 8);
        p_Var2 = p_Var1;
      } while (bVar3);
    }
  }
  else {
    p_Var2 = *(_Rb_tree_node_base **)(p_Var1 + 0xc);
    if (p_Var2 != (_Rb_tree_node_base *)0x0) {
      do {
        p_Var1 = p_Var2;
        p_Var2 = *(_Rb_tree_node_base **)(p_Var2 + 0xc);
      } while (p_Var2 != (_Rb_tree_node_base *)0x0);
      return p_Var1;
    }
  }
  return p_Var1;
}




/* from: libgshttp:HttpInterface.cpp
   addr: 00589EE0 */

void __cdecl
_STL::_Rb_global<bool>::Rotate_left(_Rb_tree_node_base *param_1,_Rb_tree_node_base **param_2)

{
  _Rb_tree_node_base *p_Var1;
  int iVar2;
  
  p_Var1 = *(_Rb_tree_node_base **)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(p_Var1 + 8);
  if (*(int *)(p_Var1 + 8) != 0) {
    *(_Rb_tree_node_base **)(*(int *)(p_Var1 + 8) + 4) = param_1;
  }
  *(undefined4 *)(p_Var1 + 4) = *(undefined4 *)(param_1 + 4);
  if (param_1 == *param_2) {
    *param_2 = p_Var1;
    *(_Rb_tree_node_base **)(p_Var1 + 8) = param_1;
    *(_Rb_tree_node_base **)(param_1 + 4) = p_Var1;
    return;
  }
  iVar2 = *(int *)(param_1 + 4);
  if (param_1 == *(_Rb_tree_node_base **)(iVar2 + 8)) {
    *(_Rb_tree_node_base **)(iVar2 + 8) = p_Var1;
    *(_Rb_tree_node_base **)(p_Var1 + 8) = param_1;
    *(_Rb_tree_node_base **)(param_1 + 4) = p_Var1;
    return;
  }
  *(_Rb_tree_node_base **)(iVar2 + 0xc) = p_Var1;
  *(_Rb_tree_node_base **)(p_Var1 + 8) = param_1;
  *(_Rb_tree_node_base **)(param_1 + 4) = p_Var1;
  return;
}




/* from: libgshttp:HttpInterface.cpp
   addr: 00589F30 */

void __cdecl
_STL::_Rb_global<bool>::Rotate_right(_Rb_tree_node_base *param_1,_Rb_tree_node_base **param_2)

{
  _Rb_tree_node_base *p_Var1;
  int iVar2;
  
  p_Var1 = *(_Rb_tree_node_base **)(param_1 + 8);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(p_Var1 + 0xc);
  if (*(int *)(p_Var1 + 0xc) != 0) {
    *(_Rb_tree_node_base **)(*(int *)(p_Var1 + 0xc) + 4) = param_1;
  }
  *(undefined4 *)(p_Var1 + 4) = *(undefined4 *)(param_1 + 4);
  if (param_1 == *param_2) {
    *param_2 = p_Var1;
    *(_Rb_tree_node_base **)(p_Var1 + 0xc) = param_1;
    *(_Rb_tree_node_base **)(param_1 + 4) = p_Var1;
    return;
  }
  iVar2 = *(int *)(param_1 + 4);
  if (param_1 == *(_Rb_tree_node_base **)(iVar2 + 0xc)) {
    *(_Rb_tree_node_base **)(iVar2 + 0xc) = p_Var1;
    *(_Rb_tree_node_base **)(p_Var1 + 0xc) = param_1;
    *(_Rb_tree_node_base **)(param_1 + 4) = p_Var1;
    return;
  }
  *(_Rb_tree_node_base **)(iVar2 + 8) = p_Var1;
  *(_Rb_tree_node_base **)(p_Var1 + 0xc) = param_1;
  *(_Rb_tree_node_base **)(param_1 + 4) = p_Var1;
  return;
}

