
/* from: libgsresult:MatchResults.cpp
   addr: 005C5CD0 */

void __thiscall clMatchResults::SetNum(clMatchResults *this,char *param_1,uint param_2,int param_3)

{
  _Rb_tree<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>,struct__STL::_Select1st<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>_>,struct__STL::less<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>_>_>
  *this_00;
  char cVar1;
  _Rb_tree_node<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>_>
  *p_Var2;
  char *pcVar3;
  _Rb_tree_node<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>_>
  *p_Var4;
  undefined4 *puVar5;
  uint uVar6;
  char *pcVar7;
  Allocator<char> local_c6;
  Allocator<char> local_c5;
  _Rb_tree_node<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>_>
  *local_c4 [3];
  basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> local_b8 [12];
  clPlayerResults local_ac [52];
  undefined **local_78 [2];
  map<unsigned_int,int,struct__STL::less<unsigned_int>_> local_70 [44];
  char *local_44;
  clPlayerResults local_40 [52];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  pcVar3 = param_1;
  puStack_8 = &LAB_005cce48;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  _STL::_Vector_base<char,class_ExtAlloc::Allocator<char>_>::
  Vector_base<char,class_ExtAlloc::Allocator<char>_>
            ((_Vector_base<char,class_ExtAlloc::Allocator<char>_> *)local_c4,&local_c6);
  uVar6 = 0xffffffff;
  pcVar7 = pcVar3;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  local_4._0_1_ = 1;
  local_c5 = local_c6;
  _STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::
  M_range_initialize((basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>
                      *)local_c4,pcVar3,pcVar3 + (~uVar6 - 1),(forward_iterator_tag *)&local_c5);
  this_00 = (_Rb_tree<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>,struct__STL::_Select1st<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>_>,struct__STL::less<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>_>_>
             *)(this + 8);
  local_4._0_1_ = 2;
  p_Var4 = _STL::
           _Rb_tree<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>,struct__STL::_Select1st<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>_>,struct__STL::less<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>_>_>
           ::M_find(this_00,(basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>
                             *)local_c4);
  p_Var2 = *(_Rb_tree_node<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>_>
             **)this_00;
  local_4 = CONCAT31(local_4._1_3_,3);
  _STL::_String_base<char,class_ExtAlloc::Allocator<char>_>::
  ~_String_base<char,class_ExtAlloc::Allocator<char>_>
            ((_String_base<char,class_ExtAlloc::Allocator<char>_> *)local_c4);
  local_4 = 0xffffffff;
  if (p_Var4 == p_Var2) {
    clPlayerResults::clPlayerResults((clPlayerResults *)local_78);
    local_4 = 4;
    puVar5 = (undefined4 *)_STL::make_pair(&local_44,(clPlayerResults *)&param_1);
    local_4._0_1_ = 6;
    _STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::
    basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>
              (local_b8,(char *)*puVar5,&local_c6);
    local_4._0_1_ = 8;
    clPlayerResults::clPlayerResults(local_ac,(clPlayerResults *)(puVar5 + 1));
    local_4._0_1_ = 9;
    _STL::
    _Rb_tree<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>,struct__STL::_Select1st<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>_>,struct__STL::less<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>_>_>
    ::insert_unique(this_00,(pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>
                             *)local_c4);
    local_4._0_1_ = 10;
    clPlayerResults::~clPlayerResults(local_ac);
    local_4._0_1_ = 5;
    _STL::_String_base<char,class_ExtAlloc::Allocator<char>_>::
    ~_String_base<char,class_ExtAlloc::Allocator<char>_>
              ((_String_base<char,class_ExtAlloc::Allocator<char>_> *)local_b8);
    local_4 = CONCAT31(local_4._1_3_,4);
    clPlayerResults::~clPlayerResults(local_40);
    local_4 = 0xffffffff;
    local_78[0] = &clPlayerResults::_vftable_;
    ExtAlloc::map<unsigned_int,int,struct__STL::less<unsigned_int>_>::_vbase_destructor_(local_70);
    strncpy((char *)(local_c4[0] + 0x34),param_1,0x10);
    p_Var4 = local_c4[0];
  }
  clPlayerResults::SetNum((clPlayerResults *)(p_Var4 + 0x1c),param_2,param_3);
  ExceptionList = local_c;
  return;
}




/* from: libgsresult:MatchResults.cpp
   addr: 005C5EC0 */

void __thiscall
_STL::pair<char_const*,class_clPlayerResults>::~pair<char_const*,class_clPlayerResults>
          (pair<char_const*,class_clPlayerResults> *this)

{
  _Rb_tree<unsigned_int,struct__STL::pair<unsigned_int_const_,int>,struct__STL::_Select1st<struct__STL::pair<unsigned_int_const_,int>_>,struct__STL::less<unsigned_int>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_int_const_,int>_>_>
  *this_00;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005cce70;
  local_c = ExceptionList;
  this_00 = (_Rb_tree<unsigned_int,struct__STL::pair<unsigned_int_const_,int>,struct__STL::_Select1st<struct__STL::pair<unsigned_int_const_,int>_>,struct__STL::less<unsigned_int>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_int_const_,int>_>_>
             *)(this + 0xc);
  ExceptionList = &local_c;
  *(undefined ***)(this + 4) = &clPlayerResults::_vftable_;
  local_4 = 0;
  if (*(int *)(this + 0x10) != 0) {
    _Rb_tree<unsigned_int,struct__STL::pair<unsigned_int_const_,int>,struct__STL::_Select1st<struct__STL::pair<unsigned_int_const_,int>_>,struct__STL::less<unsigned_int>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_int_const_,int>_>_>
    ::M_erase(this_00,*(_Rb_tree_node<struct__STL::pair<unsigned_int_const_,int>_> **)
                       (*(int *)this_00 + 4));
    *(int *)(*(int *)this_00 + 8) = *(int *)this_00;
    *(undefined4 *)(*(int *)this_00 + 4) = 0;
    *(int *)(*(int *)this_00 + 0xc) = *(int *)this_00;
    *(undefined4 *)(this + 0x10) = 0;
  }
  local_4 = 1;
  _STLP_alloc_proxy<struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>*,struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
  ::deallocate((_STLP_alloc_proxy<struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>*,struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
                *)this_00,
               *(_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
                 **)this_00,1);
  local_4 = 0xffffffff;
  _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
  ::
  ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
            ((_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
              *)this_00);
  ExceptionList = local_c;
  return;
}




/* from: libgsresult:MatchResults.cpp
   addr: 005C5F50 */

clDataList * __thiscall clMatchResults::ToDataList(clMatchResults *this,clDataList *param_1)

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
  puStack_8 = &LAB_005ccebf;
  local_c = ExceptionList;
  local_28 = 0;
  if (param_1 == (clDataList *)0x0) {
    return (clDataList *)0x0;
  }
  ExceptionList = &local_c;
  (**(code **)(*(int *)(param_1 + 0xc) + 4))();
  clDataList::Add(param_1,(int *)(this + 0x18));
  clDataList::Add(param_1,(int *)(this + 0x1c));
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
      clPlayerResults::ToDataList((clPlayerResults *)(iVar2 + 0x1c),(clDataList *)&ppuStack_24);
      clDataList::Add(param_1,(clDataList *)&ppuStack_24);
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




/* from: libgsresult:MatchResults.cpp
   addr: 005C60D0 */

basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> * __thiscall
_STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::
basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>
          (basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *this,
          char *param_1,Allocator<char> *param_2)

{
  char cVar1;
  size_t sVar2;
  undefined1 *_Dst;
  void *pvVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  Allocator<char> local_12d;
  size_t local_12c;
  basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *local_128;
  _Vector_base<char,class_ExtAlloc::Allocator<char>_> local_124 [12];
  undefined **local_118 [67];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005ccefc;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  uVar4 = 0xffffffff;
  pcVar6 = param_1;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  local_4 = 0;
  local_12c = (int)(param_1 + (~uVar4 - 1)) - (int)param_1;
  iVar5 = local_12c + 1;
  local_128 = this;
  if (iVar5 != 0) {
    _Dst = (undefined1 *)ExtAlloc_Malloc_4(iVar5);
    sVar2 = local_12c;
    *(undefined1 **)this = _Dst;
    *(undefined1 **)(this + 4) = _Dst;
    *(undefined1 **)(this + 8) = _Dst + iVar5;
    if (param_1 + (~uVar4 - 1) != param_1) {
      pvVar3 = memmove(_Dst,param_1,local_12c);
      _Dst = (undefined1 *)((int)pvVar3 + sVar2);
    }
    *(undefined1 **)(this + 4) = _Dst;
    *_Dst = 0;
    ExceptionList = local_c;
    return this;
  }
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  _Vector_base<char,class_ExtAlloc::Allocator<char>_>::
  Vector_base<char,class_ExtAlloc::Allocator<char>_>(local_124,&local_12d);
  uVar4 = 0xffffffff;
  local_4._0_1_ = 2;
  pcVar6 = s_basic_string;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  basic_string<char,class__STL::char_traits<char>,class__STL::allocator<char>_>::M_range_initialize
            ((basic_string<char,class__STL::char_traits<char>,class__STL::allocator<char>_> *)
             local_124,s_basic_string,s___AVlength_error__STL___005fe384 + ~uVar4 + 0x17);
  local_4 = CONCAT31(local_4._1_3_,3);
  logic_error::logic_error
            ((logic_error *)local_118,
             (basic_string<char,class__STL::char_traits<char>,class__STL::allocator<char>_> *)
             local_124);
  local_118[0] = &length_error::_vftable_;
                    /* WARNING: Subroutine does not return */
  CxxThrowException_8(local_118,&__TI4_AVlength_error__STL__);
}




/* from: libgsresult:MatchResults.cpp
   addr: 005C61F0 */

void __thiscall
_STL::
_Rb_tree<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>,struct__STL::_Select1st<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>_>,struct__STL::less<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>_>_>
::insert_unique(_Rb_tree<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>,struct__STL::_Select1st<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>_>,struct__STL::less<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>_>_>
                *this,pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>
                      *param_1)

{
  _Rb_tree_node_base *p_Var1;
  int iVar2;
  _Rb_tree_node<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>_>
  *p_Var3;
  _Rb_tree_node_base *p_Var4;
  bool bVar5;
  basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>
  *in_stack_00000008;
  
  bVar5 = true;
  p_Var1 = *(_Rb_tree_node_base **)this;
  p_Var4 = *(_Rb_tree_node_base **)(*(_Rb_tree_node_base **)this + 4);
  while (p_Var4 != (_Rb_tree_node_base *)0x0) {
    iVar2 = basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::
            M_compare(*(char **)in_stack_00000008,*(char **)(in_stack_00000008 + 4),
                      *(char **)(p_Var4 + 0x10),*(char **)(p_Var4 + 0x14));
    bVar5 = iVar2 < 0;
    p_Var1 = p_Var4;
    if (bVar5) {
      p_Var4 = *(_Rb_tree_node_base **)(p_Var4 + 8);
    }
    else {
      p_Var4 = *(_Rb_tree_node_base **)(p_Var4 + 0xc);
    }
  }
  p_Var4 = p_Var1;
  if (bVar5) {
    if (p_Var1 == *(_Rb_tree_node_base **)(*(_Rb_tree_node_base **)this + 8)) {
      if ((p_Var1 == *(_Rb_tree_node_base **)this) ||
         (bVar5 = operator<(in_stack_00000008,
                            (basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>
                             *)(p_Var1 + 0x10)), bVar5)) {
        p_Var3 = M_create_node(this,(pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>
                                     *)in_stack_00000008);
        *(_Rb_tree_node<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>_>
          **)(p_Var1 + 8) = p_Var3;
        p_Var4 = *(_Rb_tree_node_base **)this;
        if (p_Var1 == p_Var4) {
          *(_Rb_tree_node<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>_>
            **)(p_Var4 + 4) = p_Var3;
          *(_Rb_tree_node<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>_>
            **)(*(int *)this + 0xc) = p_Var3;
        }
        else if (p_Var1 == *(_Rb_tree_node_base **)(p_Var4 + 8)) {
          *(_Rb_tree_node<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>_>
            **)(p_Var4 + 8) = p_Var3;
        }
      }
      else {
        p_Var3 = M_create_node(this,(pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>
                                     *)in_stack_00000008);
        *(_Rb_tree_node<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>_>
          **)(p_Var1 + 0xc) = p_Var3;
        if (p_Var1 == *(_Rb_tree_node_base **)(*(int *)this + 0xc)) {
          *(_Rb_tree_node<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>_>
            **)(*(int *)this + 0xc) = p_Var3;
        }
      }
      *(_Rb_tree_node_base **)((_Rb_tree_node_base *)p_Var3 + 4) = p_Var1;
      *(undefined4 *)((_Rb_tree_node_base *)p_Var3 + 8) = 0;
      *(undefined4 *)((_Rb_tree_node_base *)p_Var3 + 0xc) = 0;
      _Rb_global<bool>::Rebalance
                ((_Rb_tree_node_base *)p_Var3,(_Rb_tree_node_base **)(*(int *)this + 4));
      *(int *)(this + 4) = *(int *)(this + 4) + 1;
      *(_Rb_tree_node<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>_>
        **)param_1 = p_Var3;
      param_1[4] = (pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>
                    )0x1;
      return;
    }
    p_Var4 = _Rb_global<bool>::M_decrement(p_Var1);
  }
  iVar2 = basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::
          M_compare(*(char **)(p_Var4 + 0x10),*(char **)(p_Var4 + 0x14),*(char **)in_stack_00000008,
                    *(char **)(in_stack_00000008 + 4));
  if (iVar2 < 0) {
    if ((p_Var1 == *(_Rb_tree_node_base **)this) ||
       (bVar5 = operator<(in_stack_00000008,
                          (basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>
                           *)(p_Var1 + 0x10)), bVar5)) {
      p_Var3 = M_create_node(this,(pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>
                                   *)in_stack_00000008);
      *(_Rb_tree_node<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>_>
        **)(p_Var1 + 8) = p_Var3;
      p_Var4 = *(_Rb_tree_node_base **)this;
      if (p_Var1 == p_Var4) {
        *(_Rb_tree_node<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>_>
          **)(p_Var4 + 4) = p_Var3;
        *(_Rb_tree_node<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>_>
          **)(*(int *)this + 0xc) = p_Var3;
      }
      else if (p_Var1 == *(_Rb_tree_node_base **)(p_Var4 + 8)) {
        *(_Rb_tree_node<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>_>
          **)(p_Var4 + 8) = p_Var3;
      }
    }
    else {
      p_Var3 = M_create_node(this,(pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>
                                   *)in_stack_00000008);
      *(_Rb_tree_node<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>_>
        **)(p_Var1 + 0xc) = p_Var3;
      if (p_Var1 == *(_Rb_tree_node_base **)(*(int *)this + 0xc)) {
        *(_Rb_tree_node<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>_>
          **)(*(int *)this + 0xc) = p_Var3;
      }
    }
    *(_Rb_tree_node_base **)((_Rb_tree_node_base *)p_Var3 + 4) = p_Var1;
    *(undefined4 *)((_Rb_tree_node_base *)p_Var3 + 8) = 0;
    *(undefined4 *)((_Rb_tree_node_base *)p_Var3 + 0xc) = 0;
    _Rb_global<bool>::Rebalance
              ((_Rb_tree_node_base *)p_Var3,(_Rb_tree_node_base **)(*(int *)this + 4));
    *(int *)(this + 4) = *(int *)(this + 4) + 1;
    *(_Rb_tree_node<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>_>
      **)param_1 = p_Var3;
    param_1[4] = (pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>
                  )0x1;
    return;
  }
  *(_Rb_tree_node_base **)param_1 = p_Var4;
  param_1[4] = (pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>
                )0x0;
  return;
}




/* from: libgsresult:MatchResults.cpp
   addr: 005C63B0 */

char ** __cdecl _STL::make_pair(char **param_1,clPlayerResults *param_2)

{
  animSYSTEM *this;
  _STLP_alloc_proxy<struct__STL::_List_node<class_CConnection*>*,struct__STL::_List_node<class_CConnection*>,class_ExtAlloc::Allocator<class_CConnection*>_>
  *this_00;
  int iVar1;
  _Rb_tree_node<struct__STL::pair<unsigned_int_const_,int>_> *p_Var2;
  int iVar3;
  Allocator<class_CConnection*> *pAVar4;
  undefined1 *puVar5;
  _Rb_tree_node<struct__STL::pair<unsigned_int_const_,int>_> *p_Var6;
  int in_stack_0000000c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005ccf18;
  local_c = ExceptionList;
  this = (animSYSTEM *)(in_stack_0000000c + 8);
  this_00 = (_STLP_alloc_proxy<struct__STL::_List_node<class_CConnection*>*,struct__STL::_List_node<class_CConnection*>,class_ExtAlloc::Allocator<class_CConnection*>_>
             *)(param_1 + 3);
  ExceptionList = &local_c;
  *param_1 = *(char **)param_2;
  param_1[2] = (char *)&clPlayerResults::_vbtable_;
  param_1[6] = (char *)&ExtAlloc::map<unsigned_int,int,struct__STL::less<unsigned_int>_>::_vbtable_;
  pAVar4 = (Allocator<class_CConnection*> *)animSYSTEM::GetBaseSeqNmb(this);
  _STLP_alloc_proxy<struct__STL::_List_node<class_CConnection*>*,struct__STL::_List_node<class_CConnection*>,class_ExtAlloc::Allocator<class_CConnection*>_>
  ::
  STLP_alloc_proxy<struct__STL::_List_node<class_CConnection*>*,struct__STL::_List_node<class_CConnection*>,class_ExtAlloc::Allocator<class_CConnection*>_>
            (this_00,pAVar4,(_List_node<class_CConnection*> *)0x0);
  puVar5 = (undefined1 *)ExtAlloc_Malloc_4(0x18);
  *(undefined1 **)this_00 = puVar5;
  param_1[4] = (char *)0x0;
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(in_stack_0000000c + 0x10);
  local_4 = 0;
  iVar1 = *(int *)(*(int *)this + 4);
  *puVar5 = 0;
  if (iVar1 == 0) {
    *(undefined4 *)(*(int *)this_00 + 4) = 0;
    *(int *)(*(int *)this_00 + 8) = *(int *)this_00;
    *(int *)(*(int *)this_00 + 0xc) = *(int *)this_00;
  }
  else {
    p_Var2 = *(_Rb_tree_node<struct__STL::pair<unsigned_int_const_,int>_> **)this_00;
    p_Var6 = _Rb_tree<unsigned_int,struct__STL::pair<unsigned_int_const_,int>,struct__STL::_Select1st<struct__STL::pair<unsigned_int_const_,int>_>,struct__STL::less<unsigned_int>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_int_const_,int>_>_>
             ::M_copy((_Rb_tree<unsigned_int,struct__STL::pair<unsigned_int_const_,int>,struct__STL::_Select1st<struct__STL::pair<unsigned_int_const_,int>_>,struct__STL::less<unsigned_int>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_int_const_,int>_>_>
                       *)this_00,
                      *(_Rb_tree_node<struct__STL::pair<unsigned_int_const_,int>_> **)
                       (*(int *)this + 4),p_Var2);
    *(_Rb_tree_node<struct__STL::pair<unsigned_int_const_,int>_> **)(p_Var2 + 4) = p_Var6;
    iVar1 = *(int *)(*(int *)this_00 + 4);
    for (iVar3 = *(int *)(iVar1 + 8); iVar3 != 0; iVar3 = *(int *)(iVar3 + 8)) {
      iVar1 = iVar3;
    }
    *(int *)(*(int *)this_00 + 8) = iVar1;
    iVar1 = *(int *)(*(int *)this_00 + 4);
    for (iVar3 = *(int *)(iVar1 + 0xc); iVar3 != 0; iVar3 = *(int *)(iVar3 + 0xc)) {
      iVar1 = iVar3;
    }
    *(int *)(*(int *)this_00 + 0xc) = iVar1;
  }
  param_1[4] = *(char **)(in_stack_0000000c + 0xc);
  param_1[7] = *(char **)(in_stack_0000000c + 0x18);
  param_1[8] = *(char **)(in_stack_0000000c + 0x1c);
  param_1[9] = *(char **)(in_stack_0000000c + 0x20);
  param_1[10] = *(char **)(in_stack_0000000c + 0x24);
  param_1[0xb] = *(char **)(in_stack_0000000c + 0x28);
  param_1[0xc] = *(char **)(in_stack_0000000c + 0x2c);
  param_1[0xd] = *(char **)(in_stack_0000000c + 0x30);
  param_1[1] = (char *)&clPlayerResults::_vftable_;
  ExceptionList = local_c;
  return param_1;
}




/* from: libgsresult:MatchResults.cpp
   addr: 005C64E0 */

clPlayerResults * __thiscall
clPlayerResults::clPlayerResults(clPlayerResults *this,clPlayerResults *param_1)

{
  _STLP_alloc_proxy<struct__STL::_List_node<class_CConnection*>*,struct__STL::_List_node<class_CConnection*>,class_ExtAlloc::Allocator<class_CConnection*>_>
  *this_00;
  animSYSTEM *this_01;
  int iVar1;
  _Rb_tree_node<struct__STL::pair<unsigned_int_const_,int>_> *p_Var2;
  int iVar3;
  Allocator<class_CConnection*> *pAVar4;
  undefined1 *puVar5;
  _Rb_tree_node<struct__STL::pair<unsigned_int_const_,int>_> *p_Var6;
  int in_stack_00000008;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005ccf38;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (in_stack_00000008 != 0) {
    ExceptionList = &local_c;
    *(undefined8 **)(this + 4) = &_vbtable_;
  }
  this_00 = (_STLP_alloc_proxy<struct__STL::_List_node<class_CConnection*>*,struct__STL::_List_node<class_CConnection*>,class_ExtAlloc::Allocator<class_CConnection*>_>
             *)(this + 8);
  this_01 = (animSYSTEM *)(param_1 + 8);
  *(undefined8 **)(this + 0x14) =
       &ExtAlloc::map<unsigned_int,int,struct__STL::less<unsigned_int>_>::_vbtable_;
  pAVar4 = (Allocator<class_CConnection*> *)animSYSTEM::GetBaseSeqNmb(this_01);
  _STL::
  _STLP_alloc_proxy<struct__STL::_List_node<class_CConnection*>*,struct__STL::_List_node<class_CConnection*>,class_ExtAlloc::Allocator<class_CConnection*>_>
  ::
  STLP_alloc_proxy<struct__STL::_List_node<class_CConnection*>*,struct__STL::_List_node<class_CConnection*>,class_ExtAlloc::Allocator<class_CConnection*>_>
            (this_00,pAVar4,(_List_node<class_CConnection*> *)0x0);
  puVar5 = (undefined1 *)ExtAlloc_Malloc_4(0x18);
  *(undefined1 **)this_00 = puVar5;
  *(undefined4 *)(this + 0xc) = 0;
  this[0x10] = param_1[0x10];
  local_4 = 0;
  iVar1 = *(int *)(*(int *)this_01 + 4);
  *puVar5 = 0;
  if (iVar1 == 0) {
    *(undefined4 *)(*(int *)this_00 + 4) = 0;
    *(int *)(*(int *)this_00 + 8) = *(int *)this_00;
    *(int *)(*(int *)this_00 + 0xc) = *(int *)this_00;
  }
  else {
    p_Var2 = *(_Rb_tree_node<struct__STL::pair<unsigned_int_const_,int>_> **)this_00;
    p_Var6 = _STL::
             _Rb_tree<unsigned_int,struct__STL::pair<unsigned_int_const_,int>,struct__STL::_Select1st<struct__STL::pair<unsigned_int_const_,int>_>,struct__STL::less<unsigned_int>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_int_const_,int>_>_>
             ::M_copy((_Rb_tree<unsigned_int,struct__STL::pair<unsigned_int_const_,int>,struct__STL::_Select1st<struct__STL::pair<unsigned_int_const_,int>_>,struct__STL::less<unsigned_int>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_int_const_,int>_>_>
                       *)this_00,
                      *(_Rb_tree_node<struct__STL::pair<unsigned_int_const_,int>_> **)
                       (*(int *)this_01 + 4),p_Var2);
    *(_Rb_tree_node<struct__STL::pair<unsigned_int_const_,int>_> **)(p_Var2 + 4) = p_Var6;
    iVar1 = *(int *)(*(int *)this_00 + 4);
    for (iVar3 = *(int *)(iVar1 + 8); iVar3 != 0; iVar3 = *(int *)(iVar3 + 8)) {
      iVar1 = iVar3;
    }
    *(int *)(*(int *)this_00 + 8) = iVar1;
    iVar1 = *(int *)(*(int *)this_00 + 4);
    for (iVar3 = *(int *)(iVar1 + 0xc); iVar3 != 0; iVar3 = *(int *)(iVar3 + 0xc)) {
      iVar1 = iVar3;
    }
    *(int *)(*(int *)this_00 + 0xc) = iVar1;
  }
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined ***)this = &_vftable_;
  ExceptionList = local_c;
  return this;
}




/* from: libgsresult:MatchResults.cpp
   addr: 005C6630 */

_Rb_tree_node<struct__STL::pair<unsigned_int_const_,int>_> * __thiscall
_STL::
_Rb_tree<unsigned_int,struct__STL::pair<unsigned_int_const_,int>,struct__STL::_Select1st<struct__STL::pair<unsigned_int_const_,int>_>,struct__STL::less<unsigned_int>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_int_const_,int>_>_>
::M_copy(_Rb_tree<unsigned_int,struct__STL::pair<unsigned_int_const_,int>,struct__STL::_Select1st<struct__STL::pair<unsigned_int_const_,int>_>,struct__STL::less<unsigned_int>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_int_const_,int>_>_>
         *this,_Rb_tree_node<struct__STL::pair<unsigned_int_const_,int>_> *param_1,
        _Rb_tree_node<struct__STL::pair<unsigned_int_const_,int>_> *param_2)

{
  _Rb_tree_node<struct__STL::pair<unsigned_int_const_,int>_> *p_Var1;
  _Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> *p_Var2;
  _Rb_tree_node<struct__STL::pair<unsigned_int_const_,int>_> *p_Var3;
  _Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> *p_Var4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005ccf50;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  p_Var2 = _Rb_tree<void*,struct__STL::pair<void*_const,class_CHttpDownload*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CHttpDownload*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CHttpDownload*>_>_>
           ::M_create_node((_Rb_tree<void*,struct__STL::pair<void*_const,class_CHttpDownload*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CHttpDownload*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CHttpDownload*>_>_>
                            *)this,(pair<void*_const,class_CHttpDownload*> *)(param_1 + 0x10));
  *p_Var2 = *(_Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> *)param_1;
  *(undefined4 *)(p_Var2 + 8) = 0;
  *(undefined4 *)(p_Var2 + 0xc) = 0;
  *(_Rb_tree_node<struct__STL::pair<unsigned_int_const_,int>_> **)(p_Var2 + 4) = param_2;
  p_Var3 = *(_Rb_tree_node<struct__STL::pair<unsigned_int_const_,int>_> **)(param_1 + 0xc);
  local_8 = 0;
  p_Var1 = (_Rb_tree_node<struct__STL::pair<unsigned_int_const_,int>_> *)p_Var2;
  while( true ) {
    if (p_Var3 != (_Rb_tree_node<struct__STL::pair<unsigned_int_const_,int>_> *)0x0) {
      p_Var3 = M_copy(this,p_Var3,p_Var1);
      *(_Rb_tree_node<struct__STL::pair<unsigned_int_const_,int>_> **)(p_Var1 + 0xc) = p_Var3;
    }
    param_1 = *(_Rb_tree_node<struct__STL::pair<unsigned_int_const_,int>_> **)
               ((_Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> *)param_1 + 8);
    if (param_1 == (_Rb_tree_node<struct__STL::pair<unsigned_int_const_,int>_> *)0x0) break;
    p_Var4 = _Rb_tree<void*,struct__STL::pair<void*_const,class_CHttpDownload*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CHttpDownload*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CHttpDownload*>_>_>
             ::M_create_node((_Rb_tree<void*,struct__STL::pair<void*_const,class_CHttpDownload*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CHttpDownload*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CHttpDownload*>_>_>
                              *)this,(pair<void*_const,class_CHttpDownload*> *)
                                     ((_Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_>
                                       *)param_1 + 0x10));
    *p_Var4 = *(_Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> *)param_1;
    *(undefined4 *)(p_Var4 + 8) = 0;
    *(undefined4 *)(p_Var4 + 0xc) = 0;
    *(_Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> **)(p_Var1 + 8) = p_Var4;
    *(_Rb_tree_node<struct__STL::pair<unsigned_int_const_,int>_> **)(p_Var4 + 4) = p_Var1;
    p_Var3 = *(_Rb_tree_node<struct__STL::pair<unsigned_int_const_,int>_> **)
              ((_Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> *)param_1 + 0xc)
    ;
    p_Var1 = (_Rb_tree_node<struct__STL::pair<unsigned_int_const_,int>_> *)p_Var4;
  }
  ExceptionList = local_10;
  return (_Rb_tree_node<struct__STL::pair<unsigned_int_const_,int>_> *)p_Var2;
}




/* from: libgsresult:MatchResults.cpp
   addr: 005C6710
   addr: 005C6710 */

_Rb_tree_node<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>_>
* __thiscall
_STL::
_Rb_tree<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>,struct__STL::_Select1st<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>_>,struct__STL::less<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>_>_>
::M_find(_Rb_tree<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>,struct__STL::_Select1st<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>_>,struct__STL::less<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>_>_>
         *this,basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>
               *param_1)

{
  _Rb_tree_node<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>_>
  *p_Var1;
  basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> **ppbVar2;
  _Rb_tree_node<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>_>
  *p_Var3;
  basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *pbVar4;
  _Rb_tree_node<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>_>
  *p_Var5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  byte *pbVar9;
  bool bVar10;
  bool bVar11;
  _Rb_tree_node<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>_>
  *local_14;
  basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *local_8;
  basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *local_4;
  
  p_Var1 = *(_Rb_tree_node<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>_>
             **)this;
  local_14 = p_Var1;
  if (*(_Rb_tree_node<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>_>
        **)(p_Var1 + 4) !=
      (_Rb_tree_node<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>_>
       *)0x0) {
    local_8 = (basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *)
              (*(int *)(param_1 + 4) - (int)*(byte **)param_1);
    p_Var3 = *(_Rb_tree_node<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>_>
               **)(p_Var1 + 4);
    do {
      local_4 = (basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *
                )(*(int *)(p_Var3 + 0x14) - (int)*(byte **)(p_Var3 + 0x10));
      ppbVar2 = &local_8;
      if ((int)local_4 <= (int)local_8) {
        ppbVar2 = &local_4;
      }
      pbVar4 = *ppbVar2;
      bVar10 = false;
      uVar7 = 0;
      bVar11 = true;
      pbVar8 = *(byte **)(p_Var3 + 0x10);
      pbVar9 = *(byte **)param_1;
      do {
        if (pbVar4 == (basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>
                       *)0x0) break;
        pbVar4 = pbVar4 + -1;
        bVar10 = *pbVar8 < *pbVar9;
        bVar11 = *pbVar8 == *pbVar9;
        pbVar8 = pbVar8 + 1;
        pbVar9 = pbVar9 + 1;
      } while (bVar11);
      if (!bVar11) {
        uVar7 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
      }
      if (uVar7 == 0) {
        if ((int)local_8 <= (int)local_4) {
          uVar7 = (uint)((int)local_8 < (int)local_4);
          goto LAB_005c677b;
        }
LAB_005c6786:
        p_Var5 = *(_Rb_tree_node<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>_>
                   **)(p_Var3 + 0xc);
      }
      else {
LAB_005c677b:
        if ((int)uVar7 < 0) goto LAB_005c6786;
        p_Var5 = *(_Rb_tree_node<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>_>
                   **)(p_Var3 + 8);
        local_14 = p_Var3;
      }
      p_Var3 = p_Var5;
    } while (p_Var5 != (_Rb_tree_node<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>_>
                        *)0x0);
  }
  p_Var3 = p_Var1;
  if (local_14 != p_Var1) {
    local_4 = (basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *)
              (*(int *)(param_1 + 4) - (int)*(byte **)param_1);
    iVar6 = *(int *)(local_14 + 0x14) - (int)*(byte **)(local_14 + 0x10);
    ppbVar2 = &param_1;
    if ((int)local_4 <= iVar6) {
      ppbVar2 = &local_4;
    }
    pbVar4 = *ppbVar2;
    bVar10 = false;
    uVar7 = 0;
    bVar11 = true;
    pbVar8 = *(byte **)param_1;
    pbVar9 = *(byte **)(local_14 + 0x10);
    do {
      if (pbVar4 == (basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>
                     *)0x0) break;
      pbVar4 = pbVar4 + -1;
      bVar10 = *pbVar8 < *pbVar9;
      bVar11 = *pbVar8 == *pbVar9;
      pbVar8 = pbVar8 + 1;
      pbVar9 = pbVar9 + 1;
    } while (bVar11);
    if (!bVar11) {
      uVar7 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
    }
    if (uVar7 == 0) {
      if ((int)local_4 < iVar6) {
        return p_Var1;
      }
      uVar7 = (uint)(iVar6 < (int)local_4);
    }
    p_Var3 = local_14;
    if ((int)uVar7 < 0) {
      return p_Var1;
    }
  }
  return p_Var3;
}




/* from: libgsresult:MatchResults.cpp
   addr: 005C6800 */

_Rb_tree_node<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>_>
* __thiscall
_STL::
_Rb_tree<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>,struct__STL::_Select1st<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>_>,struct__STL::less<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>_>_>
::M_create_node(_Rb_tree<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>,struct__STL::_Select1st<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>_>,struct__STL::less<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>_>_>
                *this,pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>
                      *param_1)

{
  basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *this_00;
  _Rb_tree_node<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>_>
  *p_Var1;
  Allocator<class_CConnection*> *pAVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005ccf81;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  p_Var1 = (_Rb_tree_node<struct__STL::pair<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_const_,class_clPlayerResults>_>
            *)ExtAlloc_Malloc_4(0x50);
  this_00 = (basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *)
            (p_Var1 + 0x10);
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  if (this_00 !=
      (basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *)0x0) {
    pAVar2 = (Allocator<class_CConnection*> *)animSYSTEM::GetBaseSeqNmb((animSYSTEM *)param_1);
    *(undefined4 *)this_00 = 0;
    *(undefined4 *)(p_Var1 + 0x14) = 0;
    _STLP_alloc_proxy<struct__STL::_List_node<class_CConnection*>*,struct__STL::_List_node<class_CConnection*>,class_ExtAlloc::Allocator<class_CConnection*>_>
    ::
    STLP_alloc_proxy<struct__STL::_List_node<class_CConnection*>*,struct__STL::_List_node<class_CConnection*>,class_ExtAlloc::Allocator<class_CConnection*>_>
              ((_STLP_alloc_proxy<struct__STL::_List_node<class_CConnection*>*,struct__STL::_List_node<class_CConnection*>,class_ExtAlloc::Allocator<class_CConnection*>_>
                *)(p_Var1 + 0x18),pAVar2,(_List_node<class_CConnection*> *)0x0);
    local_8._0_1_ = 2;
    basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::
    M_range_initialize(this_00,*(char **)param_1,*(char **)(param_1 + 4));
    local_8 = CONCAT31(local_8._1_3_,3);
    clPlayerResults::clPlayerResults
              ((clPlayerResults *)(p_Var1 + 0x1c),(clPlayerResults *)(param_1 + 0xc));
  }
  ExceptionList = local_10;
  return p_Var1;
}




/* from: libgsresult:MatchResults.cpp
   addr: 005C68E0 */

void __thiscall
ExtAlloc::map<unsigned_int,int,struct__STL::less<unsigned_int>_>::
~map<unsigned_int,int,struct__STL::less<unsigned_int>_>
          (map<unsigned_int,int,struct__STL::less<unsigned_int>_> *this)

{
  int iVar1;
  int iVar2;
  void **ppvVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005ccf98;
  local_c = ExceptionList;
  local_4 = 0;
  ppvVar3 = &local_c;
  if (*(int *)(this + 4) != 0) {
    iVar2 = *(int *)(*(int *)this + 4);
    ExceptionList = &local_c;
    while (iVar2 != 0) {
      _STL::
      _Rb_tree<unsigned_int,struct__STL::pair<unsigned_int_const_,int>,struct__STL::_Select1st<struct__STL::pair<unsigned_int_const_,int>_>,struct__STL::less<unsigned_int>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_int_const_,int>_>_>
      ::M_erase((_Rb_tree<unsigned_int,struct__STL::pair<unsigned_int_const_,int>,struct__STL::_Select1st<struct__STL::pair<unsigned_int_const_,int>_>,struct__STL::less<unsigned_int>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_int_const_,int>_>_>
                 *)this,*(_Rb_tree_node<struct__STL::pair<unsigned_int_const_,int>_> **)
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

