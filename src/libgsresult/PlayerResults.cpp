
/* from: libgsresult:PlayerResults.cpp
   addr: 005C6970 */

clPlayerResults * __thiscall clPlayerResults::clPlayerResults(clPlayerResults *this)

{
  clPlayerResults cVar1;
  undefined1 *puVar2;
  char *pcVar3;
  clPlayerResults cStack00000004;
  
  if (_cStack00000004 != 0) {
    *(undefined8 **)(this + 4) = &_vbtable_;
  }
  *(undefined8 **)(this + 0x14) =
       &ExtAlloc::map<unsigned_int,int,struct__STL::less<unsigned_int>_>::_vbtable_;
  *(undefined4 *)(this + 8) = 0;
  puVar2 = (undefined1 *)ExtAlloc_Malloc_4(0x18);
  *(undefined1 **)(this + 8) = puVar2;
  *(undefined4 *)(this + 0xc) = 0;
  this[0x10] = cStack00000004;
  *puVar2 = 0;
  *(undefined4 *)(*(int *)(this + 8) + 4) = 0;
  *(int *)(*(int *)(this + 8) + 8) = *(int *)(this + 8);
  *(int *)(*(int *)(this + 8) + 0xc) = *(int *)(this + 8);
  pcVar3 = s_;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined ***)this = &_vftable_;
  do {
    cVar1 = (clPlayerResults)*pcVar3;
    (this + -0x601fd0)[(int)pcVar3] = cVar1;
    pcVar3 = (char *)((clPlayerResults *)pcVar3 + 1);
  } while (cVar1 != (clPlayerResults)0x0);
  *(undefined4 *)(this + 0x30) = 0;
  return this;
}




/* from: libgsresult:PlayerResults.cpp
   addr: 005C69F0 */

void __thiscall clPlayerResults::SetNum(clPlayerResults *this,uint param_1,int param_2)

{
  _Rb_tree<void*,struct__STL::pair<void*_const,class_CHttpDownload*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CHttpDownload*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CHttpDownload*>_>_>
  *this_00;
  _Rb_tree_node_base *p_Var1;
  _Rb_tree_node_base *p_Var2;
  _Rb_tree_node_base *p_Var3;
  _Rb_tree_iterator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Nonconst_traits<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>
  *p_Var4;
  uint uVar5;
  bool bVar6;
  bool *pbVar7;
  bool local_1e;
  bool local_1d;
  _Rb_tree_node_base *local_1c;
  _Rb_tree_node_base local_18 [4];
  _Rb_tree_node_base *local_14;
  uint local_10;
  int local_c;
  uint local_8;
  undefined4 local_4;
  
  if (*(uint *)(this + 0x28) < param_1) {
    *(uint *)(this + 0x28) = param_1;
  }
  uVar5 = 1 << ((byte)param_1 & 0x1f);
  if ((uVar5 & *(uint *)(this + 0x30)) == 0) {
    *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
  }
  this_00 = (_Rb_tree<void*,struct__STL::pair<void*_const,class_CHttpDownload*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CHttpDownload*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CHttpDownload*>_>_>
             *)(this + 8);
  *(uint *)(this + 0x30) = *(uint *)(this + 0x30) | uVar5;
  p_Var1 = *(_Rb_tree_node_base **)this_00;
  local_10 = param_1;
  local_c = param_2;
  bVar6 = true;
  p_Var2 = p_Var1;
  p_Var3 = *(_Rb_tree_node_base **)(p_Var1 + 4);
  while (p_Var3 != (_Rb_tree_node_base *)0x0) {
    bVar6 = param_1 < *(uint *)(p_Var3 + 0x10);
    p_Var2 = p_Var3;
    if (bVar6) {
      p_Var3 = *(_Rb_tree_node_base **)(p_Var3 + 8);
    }
    else {
      p_Var3 = *(_Rb_tree_node_base **)(p_Var3 + 0xc);
    }
  }
  local_1c = p_Var2;
  if (bVar6) {
    if (p_Var2 == *(_Rb_tree_node_base **)(p_Var1 + 8)) {
      _STL::
      _Rb_tree<void*,struct__STL::pair<void*_const,class_CHttpDownload*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CHttpDownload*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CHttpDownload*>_>_>
      ::M_insert(this_00,(_Rb_tree_node_base *)&local_14,(_Rb_tree_node_base *)0x0,
                 (pair<void*_const,class_CHttpDownload*> *)p_Var2,(_Rb_tree_node_base *)&local_10);
      return;
    }
    local_1c = _STL::_Rb_global<bool>::M_decrement(p_Var2);
  }
  if (*(uint *)(local_1c + 0x10) < local_10) {
    pbVar7 = &local_1e;
    local_1e = true;
    p_Var4 = (_Rb_tree_iterator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Nonconst_traits<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>
              *)_STL::
                _Rb_tree<void*,struct__STL::pair<void*_const,class_CHttpDownload*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CHttpDownload*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CHttpDownload*>_>_>
                ::M_insert(this_00,local_18,(_Rb_tree_node_base *)0x0,
                           (pair<void*_const,class_CHttpDownload*> *)p_Var2,
                           (_Rb_tree_node_base *)&local_10);
  }
  else {
    pbVar7 = &local_1d;
    local_1d = false;
    p_Var4 = (_Rb_tree_iterator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Nonconst_traits<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>
              *)&local_1c;
  }
  _STL::
  pair<struct__STL::_Rb_tree_iterator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Nonconst_traits<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>,bool>
  ::
  pair<struct__STL::_Rb_tree_iterator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Nonconst_traits<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>,bool>
            ((pair<struct__STL::_Rb_tree_iterator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Nonconst_traits<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>,bool>
              *)&local_8,p_Var4,pbVar7);
  if ((char)local_4 == '\0') {
    _STL::
    _Rb_tree<unsigned_int,struct__STL::pair<unsigned_int_const_,int>,struct__STL::_Select1st<struct__STL::pair<unsigned_int_const_,int>_>,struct__STL::less<unsigned_int>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_int_const_,int>_>_>
    ::lower_bound((_Rb_tree<unsigned_int,struct__STL::pair<unsigned_int_const_,int>,struct__STL::_Select1st<struct__STL::pair<unsigned_int_const_,int>_>,struct__STL::less<unsigned_int>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_int_const_,int>_>_>
                   *)this_00,(uint *)&local_1c);
    if ((local_1c == *(_Rb_tree_node_base **)this_00) || (param_1 < *(uint *)(local_1c + 0x10))) {
      local_8 = param_1;
      local_4 = 0;
      _STL::
      _List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>::
      List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
                ((_List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
                  *)local_18,
                 (_List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
                  *)&local_1c);
      _STL::
      _List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>::
      List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
                ((_List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
                  *)&stack0xffffffc8,
                 (_List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
                  *)local_18);
      _STL::
      _Rb_tree<unsigned_int,struct__STL::pair<unsigned_int_const_,class_CHttpRequest*>,struct__STL::_Select1st<struct__STL::pair<unsigned_int_const_,class_CHttpRequest*>_>,struct__STL::less<unsigned_int>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_int_const_,class_CHttpRequest*>_>_>
      ::insert_unique((_Rb_tree<unsigned_int,struct__STL::pair<unsigned_int_const_,class_CHttpRequest*>,struct__STL::_Select1st<struct__STL::pair<unsigned_int_const_,class_CHttpRequest*>_>,struct__STL::less<unsigned_int>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_int_const_,class_CHttpRequest*>_>_>
                       *)this_00,&local_14);
      local_1c = local_14;
    }
    *(int *)(local_1c + 0x14) = param_2;
  }
  return;
}




/* from: libgsresult:PlayerResults.cpp
   addr: 005C6B50 */

clDataList * __thiscall clPlayerResults::ToDataList(clPlayerResults *this,clDataList *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_28;
  undefined **ppuStack_24;
  undefined4 *puStack_20;
  undefined4 uStack_1c;
  undefined **ppuStack_18;
  list<class_clRcvElement*,class_ExtAlloc::Allocator<class_clRcvElement*>_> alStack_14 [4];
  undefined8 *puStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_005ccfef;
  local_c = ExceptionList;
  local_28 = 0;
  if (param_1 == (clDataList *)0x0) {
    return (clDataList *)0x0;
  }
  ExceptionList = &local_c;
  (**(code **)(*(int *)(param_1 + 0xc) + 4))();
  clDataList::Add(param_1,(char *)(this + 0x18));
  clDataList::Add(param_1,(int *)(this + 0x28));
  clDataList::Add(param_1,(int *)(this + 0x2c));
  clDataList::Add(param_1,(int *)(this + 0x30));
  puStack_20 = &clDataList::_vbtable__for__clData__;
  puStack_10 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
  uStack_1c = 3;
  ppuStack_24 = &clData::_vftable_;
  uStack_4 = 0;
  clPointerList<class_clData*>::clPointerList<class_clData*>
            ((clPointerList<class_clData*> *)&ppuStack_18);
  ppuStack_24 = &clDataList::_vftable__for__clData__;
  ppuStack_18 = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  uStack_4 = 1;
  iVar2 = *(int *)(*(int *)(this + 8) + 8);
  if (iVar2 != *(int *)(this + 8)) {
    do {
      clDataList::Add((clDataList *)&ppuStack_24,(int *)(iVar2 + 0x14));
      iVar3 = *(int *)(iVar2 + 0xc);
      if (iVar3 == 0) {
        iVar3 = *(int *)(iVar2 + 4);
        if (iVar2 == *(int *)(iVar3 + 0xc)) {
          do {
            iVar2 = iVar3;
            iVar3 = *(int *)(iVar2 + 4);
          } while (iVar2 == *(int *)(iVar3 + 0xc));
        }
        if (*(int *)(iVar2 + 0xc) != iVar3) {
          iVar2 = iVar3;
        }
      }
      else {
        for (iVar1 = *(int *)(iVar3 + 8); iVar2 = iVar3, iVar1 != 0; iVar1 = *(int *)(iVar1 + 8)) {
          iVar3 = iVar1;
        }
      }
    } while (iVar2 != *(int *)(this + 8));
  }
  clDataList::Add(param_1,(clDataList *)&ppuStack_24);
  ppuStack_24 = &clDataList::_vftable__for__clData__;
  ppuStack_18 = &clPointerList<class_clData*>::_vftable_;
  uStack_4 = 3;
  _STL::list<class_clRcvElement*,class_ExtAlloc::Allocator<class_clRcvElement*>_>::begin(alStack_14)
  ;
  (*(code *)ppuStack_18[4])(&local_28);
  puStack_10 = (undefined8 *)CONCAT31(puStack_10._1_3_,2);
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            ((list<class_clRcvElement*> *)&puStack_20);
  ExceptionList = ppuStack_18;
  return param_1;
}




/* from: libgsresult:PlayerResults.cpp
   addr: 005C6D00 */

void __thiscall
_STL::
_Rb_tree<unsigned_int,struct__STL::pair<unsigned_int_const_,int>,struct__STL::_Select1st<struct__STL::pair<unsigned_int_const_,int>_>,struct__STL::less<unsigned_int>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_int_const_,int>_>_>
::lower_bound(_Rb_tree<unsigned_int,struct__STL::pair<unsigned_int_const_,int>,struct__STL::_Select1st<struct__STL::pair<unsigned_int_const_,int>_>,struct__STL::less<unsigned_int>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_int_const_,int>_>_>
              *this,uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *in_stack_00000008;
  
  uVar3 = *(uint *)this;
  if (*(uint *)(uVar3 + 4) != 0) {
    uVar1 = *(uint *)(uVar3 + 4);
    do {
      if (*(uint *)(uVar1 + 0x10) < *in_stack_00000008) {
        uVar2 = *(uint *)(uVar1 + 0xc);
      }
      else {
        uVar2 = *(uint *)(uVar1 + 8);
        uVar3 = uVar1;
      }
      uVar1 = uVar2;
    } while (uVar2 != 0);
  }
  *param_1 = uVar3;
  return;
}




/* from: libgsresult:PlayerResults.cpp
   addr: 005C6D40
   addr: 005C6D40 */

pair<unsigned_int_const_,int> * __thiscall
_STL::
_Rb_tree<unsigned_int,struct__STL::pair<unsigned_int_const_,int>,struct__STL::_Select1st<struct__STL::pair<unsigned_int_const_,int>_>,struct__STL::less<unsigned_int>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_int_const_,int>_>_>
::insert_unique(_Rb_tree<unsigned_int,struct__STL::pair<unsigned_int_const_,int>,struct__STL::_Select1st<struct__STL::pair<unsigned_int_const_,int>_>,struct__STL::less<unsigned_int>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_int_const_,int>_>_>
                *this,pair<unsigned_int_const_,int> *param_1)

{
  _Rb_tree_node_base *p_Var1;
  _Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> *p_Var2;
  _Rb_tree_node_base *p_Var3;
  _Rb_tree_node_base *p_Var4;
  _Rb_tree_node_base *p_Var5;
  bool bVar6;
  pair<void*_const,class_CHttpDownload*> *in_stack_00000008;
  
  bVar6 = true;
  p_Var1 = *(_Rb_tree_node_base **)this;
  p_Var4 = *(_Rb_tree_node_base **)(p_Var1 + 4);
  p_Var5 = p_Var1;
  if (p_Var4 != (_Rb_tree_node_base *)0x0) {
    do {
      p_Var5 = p_Var4;
      bVar6 = *(uint *)in_stack_00000008 < *(uint *)(p_Var5 + 0x10);
      if (bVar6) {
        p_Var4 = *(_Rb_tree_node_base **)(p_Var5 + 8);
      }
      else {
        p_Var4 = *(_Rb_tree_node_base **)(p_Var5 + 0xc);
      }
    } while (p_Var4 != (_Rb_tree_node_base *)0x0);
  }
  p_Var3 = p_Var5;
  if (bVar6) {
    if (p_Var5 == *(_Rb_tree_node_base **)(p_Var1 + 8)) {
      if (((p_Var5 == p_Var1) || (p_Var4 != (_Rb_tree_node_base *)0x0)) ||
         (*(uint *)in_stack_00000008 < *(uint *)(p_Var5 + 0x10))) {
        p_Var2 = _Rb_tree<void*,struct__STL::pair<void*_const,class_CHttpDownload*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CHttpDownload*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CHttpDownload*>_>_>
                 ::M_create_node((_Rb_tree<void*,struct__STL::pair<void*_const,class_CHttpDownload*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CHttpDownload*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CHttpDownload*>_>_>
                                  *)this,in_stack_00000008);
        *(_Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> **)(p_Var5 + 8) =
             p_Var2;
        p_Var1 = *(_Rb_tree_node_base **)this;
        if (p_Var5 == p_Var1) {
          *(_Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> **)(p_Var1 + 4) =
               p_Var2;
          *(_Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> **)
           (*(int *)this + 0xc) = p_Var2;
        }
        else if (p_Var5 == *(_Rb_tree_node_base **)(p_Var1 + 8)) {
          *(_Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> **)(p_Var1 + 8) =
               p_Var2;
        }
      }
      else {
        p_Var2 = _Rb_tree<void*,struct__STL::pair<void*_const,class_CHttpDownload*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CHttpDownload*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CHttpDownload*>_>_>
                 ::M_create_node((_Rb_tree<void*,struct__STL::pair<void*_const,class_CHttpDownload*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CHttpDownload*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CHttpDownload*>_>_>
                                  *)this,in_stack_00000008);
        *(_Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> **)(p_Var5 + 0xc) =
             p_Var2;
        if (p_Var5 == *(_Rb_tree_node_base **)(*(int *)this + 0xc)) {
          *(_Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> **)
           (*(int *)this + 0xc) = p_Var2;
        }
      }
      *(_Rb_tree_node_base **)((_Rb_tree_node_base *)p_Var2 + 4) = p_Var5;
      *(undefined4 *)((_Rb_tree_node_base *)p_Var2 + 8) = 0;
      *(undefined4 *)((_Rb_tree_node_base *)p_Var2 + 0xc) = 0;
      _Rb_global<bool>::Rebalance
                ((_Rb_tree_node_base *)p_Var2,(_Rb_tree_node_base **)(*(int *)this + 4));
      *(int *)(this + 4) = *(int *)(this + 4) + 1;
      *(_Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> **)param_1 = p_Var2;
      param_1[4] = (pair<unsigned_int_const_,int>)0x1;
      return param_1;
    }
    p_Var3 = _Rb_global<bool>::M_decrement(p_Var5);
  }
  if (*(uint *)(p_Var3 + 0x10) < *(uint *)in_stack_00000008) {
    if (((p_Var5 == *(_Rb_tree_node_base **)this) || (p_Var4 != (_Rb_tree_node_base *)0x0)) ||
       (*(uint *)in_stack_00000008 < *(uint *)(p_Var5 + 0x10))) {
      p_Var2 = _Rb_tree<void*,struct__STL::pair<void*_const,class_CHttpDownload*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CHttpDownload*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CHttpDownload*>_>_>
               ::M_create_node((_Rb_tree<void*,struct__STL::pair<void*_const,class_CHttpDownload*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CHttpDownload*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CHttpDownload*>_>_>
                                *)this,in_stack_00000008);
      *(_Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> **)(p_Var5 + 8) = p_Var2
      ;
      p_Var1 = *(_Rb_tree_node_base **)this;
      if (p_Var5 == p_Var1) {
        *(_Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> **)(p_Var1 + 4) =
             p_Var2;
        *(_Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> **)
         (*(int *)this + 0xc) = p_Var2;
      }
      else if (p_Var5 == *(_Rb_tree_node_base **)(p_Var1 + 8)) {
        *(_Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> **)(p_Var1 + 8) =
             p_Var2;
      }
    }
    else {
      p_Var2 = _Rb_tree<void*,struct__STL::pair<void*_const,class_CHttpDownload*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CHttpDownload*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CHttpDownload*>_>_>
               ::M_create_node((_Rb_tree<void*,struct__STL::pair<void*_const,class_CHttpDownload*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CHttpDownload*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CHttpDownload*>_>_>
                                *)this,in_stack_00000008);
      *(_Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> **)(p_Var5 + 0xc) =
           p_Var2;
      if (p_Var5 == *(_Rb_tree_node_base **)(*(int *)this + 0xc)) {
        *(_Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> **)
         (*(int *)this + 0xc) = p_Var2;
      }
    }
    *(_Rb_tree_node_base **)((_Rb_tree_node_base *)p_Var2 + 4) = p_Var5;
    *(undefined4 *)((_Rb_tree_node_base *)p_Var2 + 8) = 0;
    *(undefined4 *)((_Rb_tree_node_base *)p_Var2 + 0xc) = 0;
    _Rb_global<bool>::Rebalance
              ((_Rb_tree_node_base *)p_Var2,(_Rb_tree_node_base **)(*(int *)this + 4));
    *(int *)(this + 4) = *(int *)(this + 4) + 1;
    *(_Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> **)param_1 = p_Var2;
    param_1[4] = (pair<unsigned_int_const_,int>)0x1;
    return param_1;
  }
  *(_Rb_tree_node_base **)param_1 = p_Var3;
  param_1[4] = (pair<unsigned_int_const_,int>)0x0;
  return param_1;
}




/* from: libgsresult:PlayerResults.cpp
   addr: 005C6EB0
   addr: 005C6EB0
   addr: 005C6EB0
   addr: 005C6EB0
   addr: 005C6EB0
   addr: 005C6EB0
   addr: 005C6EB0 */

void __thiscall
_STL::
pair<struct__STL::_Rb_tree_iterator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Nonconst_traits<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>,bool>
::
pair<struct__STL::_Rb_tree_iterator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Nonconst_traits<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>,bool>
          (pair<struct__STL::_Rb_tree_iterator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Nonconst_traits<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>,bool>
           *this,_Rb_tree_iterator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Nonconst_traits<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>
                 *param_1,bool *param_2)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  this[4] = (pair<struct__STL::_Rb_tree_iterator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Nonconst_traits<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>,bool>
             )*param_2;
  return;
}

