
/* from: libgsclient:GSArenaConnection.cpp
   addr: 005B5170 */

uchar __thiscall
CArenaConnectionList::AddArenaToList
          (CArenaConnectionList *this,int param_1,int param_2,char *param_3,char *param_4)

{
  _Rb_tree<int,struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Select1st<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>
  *this_00;
  char cVar1;
  _Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_> *p_Var2;
  uchar uVar3;
  _Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_> *p_Var4;
  _Rb_tree_node_base *p_Var5;
  char *pcVar6;
  _Rb_tree_node_base *local_1b0;
  set<int,struct__STL::less<int>,class_ExtAlloc::Allocator<int>_> *local_1ac;
  set<int,struct__STL::less<int>,class_ExtAlloc::Allocator<int>_> *local_1a8;
  stArenaInfo *local_1a4;
  stArenaInfo local_1a0 [33];
  char local_17f [129];
  undefined2 local_fe;
  int local_fc;
  undefined1 local_f8;
  _Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
  *local_f4 [2];
  set<int,struct__STL::less<int>,class_ExtAlloc::Allocator<int>_> local_ec [12];
  undefined8 *local_e0;
  undefined4 local_dc;
  int local_d8;
  stArenaInfo local_d4 [172];
  list<class_clRcvElement*> local_28 [8];
  _Rb_tree<int,int,struct__STL::_Identity<int>,struct__STL::less<int>,class_ExtAlloc::Allocator<int>_>
  local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005cbec3;
  local_c = ExceptionList;
  this_00 = (_Rb_tree<int,struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Select1st<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>
             *)(this + 0xc4);
  local_1a4 = (stArenaInfo *)0x0;
  p_Var2 = *(_Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_> **)this_00;
  ExceptionList = &local_c;
  p_Var4 = _STL::
           _Rb_tree<int,struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Select1st<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>
           ::M_find(this_00,&param_1);
  if (p_Var4 == p_Var2) {
    p_Var5 = *(_Rb_tree_node_base **)(*(_Rb_tree_node_base **)this_00 + 8);
    local_1b0 = p_Var5;
    if (p_Var5 != *(_Rb_tree_node_base **)this_00) {
      do {
        local_1b0 = p_Var5;
        if (param_1 < *(int *)(p_Var5 + 0x10)) break;
        p_Var5 = _STL::_Rb_global<bool>::M_increment(p_Var5);
        local_1b0 = p_Var5;
      } while (p_Var5 != *(_Rb_tree_node_base **)this_00);
    }
    ExtAlloc::list<int>::list<int>((list<int> *)local_f4);
    local_1ac = local_ec;
    local_e0 = &ExtAlloc::set<int,struct__STL::less<int>_>::_vbtable_;
    local_1a4 = (stArenaInfo *)0x1;
    local_4 = 1;
    _STL::set<int,struct__STL::less<int>,class_ExtAlloc::Allocator<int>_>::
    set<int,struct__STL::less<int>,class_ExtAlloc::Allocator<int>_>(local_ec);
    local_fc = param_2;
    local_4 = 2;
    local_f8 = 0;
    pcVar6 = param_3;
    do {
      cVar1 = *pcVar6;
      pcVar6[(int)(local_1a0 + -(int)param_3)] = cVar1;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    pcVar6 = param_4;
    do {
      cVar1 = *pcVar6;
      pcVar6[(int)(local_17f + -(int)param_4)] = cVar1;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    local_d8 = param_1;
    local_fe = 0;
    local_dc = 0;
    stArenaInfo::stArenaInfo(local_d4,local_1a0);
    local_4._0_1_ = 3;
    _STL::
    _List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>::
    List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
              ((_List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
                *)&local_1ac,
               (_List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
                *)&local_1b0);
    _STL::
    _List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>::
    List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
              ((_List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
                *)&stack0xfffffe3c,
               (_List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
                *)&local_1ac);
    _STL::
    _Rb_tree<int,struct__STL::pair<int_const_,struct_stArenaInfo>,struct__STL::_Select1st<struct__STL::pair<int_const_,struct_stArenaInfo>_>,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,struct_stArenaInfo>_>_>
    ::insert_unique((_Rb_tree<int,struct__STL::pair<int_const_,struct_stArenaInfo>,struct__STL::_Select1st<struct__STL::pair<int_const_,struct_stArenaInfo>_>,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,struct_stArenaInfo>_>_>
                     *)this_00,&local_1a8);
    local_1a4 = local_d4;
    local_4._0_1_ = 4;
    _STL::
    _Rb_tree<int,int,struct__STL::_Identity<int>,struct__STL::less<int>,class_ExtAlloc::Allocator<int>_>
    ::
    ~_Rb_tree<int,int,struct__STL::_Identity<int>,struct__STL::less<int>,class_ExtAlloc::Allocator<int>_>
              (local_20);
    local_4 = CONCAT31(local_4._1_3_,2);
    ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>(local_28);
    local_1a8 = local_ec;
    local_4._0_1_ = 6;
    local_4._1_3_ = 0;
    _STL::
    _Rb_tree<int,int,struct__STL::_Identity<int>,struct__STL::less<int>,class_ExtAlloc::Allocator<int>_>
    ::clear((_Rb_tree<int,int,struct__STL::_Identity<int>,struct__STL::less<int>,class_ExtAlloc::Allocator<int>_>
             *)local_ec);
    local_4 = CONCAT31(local_4._1_3_,5);
    _STL::_String_base<char,class_ExtAlloc::Allocator<char>_>::
    ~_String_base<char,class_ExtAlloc::Allocator<char>_>
              ((_String_base<char,class_ExtAlloc::Allocator<char>_> *)local_ec);
    local_1a8 = (set<int,struct__STL::less<int>,class_ExtAlloc::Allocator<int>_> *)local_f4;
    local_4 = 7;
    _STL::_List_base<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_>::clear
              ((_List_base<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_> *)
               local_f4);
    _STL::
    _STLP_alloc_proxy<struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>*,struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
    ::deallocate((_STLP_alloc_proxy<struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>*,struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
                  *)local_f4,local_f4[0],1);
    uVar3 = '\x01';
  }
  else {
    uVar3 = '\0';
  }
  ExceptionList = local_c;
  return uVar3;
}




/* from: libgsclient:GSArenaConnection.cpp
   addr: 005B53B0 */

void __thiscall stArenaInfo::~stArenaInfo(stArenaInfo *this)

{
  _Rb_tree<int,int,struct__STL::_Identity<int>,struct__STL::less<int>,class_ExtAlloc::Allocator<int>_>
  *this_00;
  int *piVar1;
  int *piVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined1 local_4;
  undefined3 uStack_3;
  
  puStack_8 = &LAB_005cbeee;
  local_c = ExceptionList;
  this_00 = (_Rb_tree<int,int,struct__STL::_Identity<int>,struct__STL::less<int>,class_ExtAlloc::Allocator<int>_>
             *)(this + 0xb4);
  local_4 = 1;
  uStack_3 = 0;
  ExceptionList = &local_c;
  if (*(int *)(this + 0xb8) != 0) {
    ExceptionList = &local_c;
    _STL::
    _Rb_tree<int,int,struct__STL::_Identity<int>,struct__STL::less<int>,class_ExtAlloc::Allocator<int>_>
    ::M_erase(this_00,*(_Rb_tree_node<int> **)(*(int *)this_00 + 4));
    *(int *)(*(int *)this_00 + 8) = *(int *)this_00;
    *(undefined4 *)(*(int *)this_00 + 4) = 0;
    *(int *)(*(int *)this_00 + 0xc) = *(int *)this_00;
    *(undefined4 *)(this + 0xb8) = 0;
  }
  _local_4 = CONCAT31(uStack_3,2);
  _STL::
  _STLP_alloc_proxy<struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>*,struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
  ::deallocate((_STLP_alloc_proxy<struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>*,struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
                *)this_00,
               *(_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
                 **)this_00,1);
  piVar2 = (int *)**(int **)(this + 0xac);
  if (piVar2 != *(int **)(this + 0xac)) {
    do {
      piVar1 = (int *)*piVar2;
      ExtAlloc_Free_4(piVar2);
      piVar2 = piVar1;
    } while (piVar1 != (int *)*(int *)(this + 0xac));
  }
  *(undefined4 *)*(undefined4 *)(this + 0xac) = *(undefined4 *)(this + 0xac);
  *(int *)(*(int *)(this + 0xac) + 4) = *(int *)(this + 0xac);
  ExtAlloc_Free_4(*(undefined4 *)(this + 0xac));
  ExceptionList = local_c;
  return;
}




/* from: libgsclient:GSArenaConnection.cpp
   addr: 005B5480 */

void __thiscall
_STL::pair<int_const_,struct_stArenaInfo>::~pair<int_const_,struct_stArenaInfo>
          (pair<int_const_,struct_stArenaInfo> *this)

{
  _Rb_tree<int,int,struct__STL::_Identity<int>,struct__STL::less<int>,class_ExtAlloc::Allocator<int>_>
  *this_00;
  int *piVar1;
  int *piVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined1 local_4;
  undefined3 uStack_3;
  
  puStack_8 = &LAB_005cbf1e;
  local_c = ExceptionList;
  this_00 = (_Rb_tree<int,int,struct__STL::_Identity<int>,struct__STL::less<int>,class_ExtAlloc::Allocator<int>_>
             *)(this + 0xb8);
  local_4 = 1;
  uStack_3 = 0;
  ExceptionList = &local_c;
  if (*(int *)(this + 0xbc) != 0) {
    ExceptionList = &local_c;
    _Rb_tree<int,int,struct__STL::_Identity<int>,struct__STL::less<int>,class_ExtAlloc::Allocator<int>_>
    ::M_erase(this_00,*(_Rb_tree_node<int> **)(*(int *)this_00 + 4));
    *(int *)(*(int *)this_00 + 8) = *(int *)this_00;
    *(undefined4 *)(*(int *)this_00 + 4) = 0;
    *(int *)(*(int *)this_00 + 0xc) = *(int *)this_00;
    *(undefined4 *)(this + 0xbc) = 0;
  }
  _local_4 = CONCAT31(uStack_3,2);
  _STLP_alloc_proxy<struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>*,struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
  ::deallocate((_STLP_alloc_proxy<struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>*,struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
                *)this_00,
               *(_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
                 **)this_00,1);
  piVar2 = (int *)**(int **)(this + 0xb0);
  if (piVar2 != *(int **)(this + 0xb0)) {
    do {
      piVar1 = (int *)*piVar2;
      ExtAlloc_Free_4(piVar2);
      piVar2 = piVar1;
    } while (piVar1 != (int *)*(int *)(this + 0xb0));
  }
  *(undefined4 *)*(undefined4 *)(this + 0xb0) = *(undefined4 *)(this + 0xb0);
  *(int *)(*(int *)(this + 0xb0) + 4) = *(int *)(this + 0xb0);
  ExtAlloc_Free_4(*(undefined4 *)(this + 0xb0));
  ExceptionList = local_c;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: libgsclient:GSArenaConnection.cpp
   addr: 005B5550 */

uchar __thiscall CArenaConnectionList::CheckConnection(CArenaConnectionList *this)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  _List_iterator<class_clData*,struct__STL::_Const_traits<class_clData*>_> *p_Var4;
  int iVar5;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  time_t tVar6;
  double dVar7;
  input_iterator_tag local_9;
  undefined4 *local_8;
  undefined4 local_4;
  
  iVar2 = CConnectionList::CheckConnection((CConnectionList *)this);
  while (iVar2 != 0) {
    RemoveArenaFromList(this,iVar2);
    iVar2 = CConnectionList::CheckConnection((CConnectionList *)this);
  }
  tVar6 = time((time_t *)0x0);
  uVar3 = (undefined4)tVar6;
  if (*(int *)(this + 200) == 0) {
    local_8 = *(undefined4 **)(this + 0xbc);
    p_Var4 = (_List_iterator<class_clData*,struct__STL::_Const_traits<class_clData*>_> *)
             _STL::list<class_clRcvElement*,class_ExtAlloc::Allocator<class_clRcvElement*>_>::begin
                       ((list<class_clRcvElement*,class_ExtAlloc::Allocator<class_clRcvElement*>_> *
                        )(this + 0xbc));
    iVar2 = _STL::distance(p_Var4,(_List_iterator<class_clData*,struct__STL::_Const_traits<class_clData*>_>
                                   *)&local_8,&local_9);
    if (iVar2 == 0) {
      if (*(int *)(this + 0xfc) == 0) {
        tVar6 = time((time_t *)0x0);
        *(int *)(this + 0xfc) = (int)tVar6;
      }
      dVar7 = difftime(CONCAT44(*(undefined4 *)(this + 0xfc),uVar3),CONCAT44(unaff_EBX,unaff_EDI));
      if (dVar7 <= ___real_402e000000000000) {
        return '\x01';
      }
      *(undefined4 *)(this + 0xfc) = 0;
      return '\0';
    }
  }
  *(undefined4 *)(this + 0xfc) = 0;
  iVar2 = *(int *)(*(int *)(this + 0xc4) + 8);
  if (iVar2 != *(int *)(this + 0xc4)) {
    do {
      if (*(char *)(iVar2 + 0xbc) == '\x02') {
        local_8 = *(undefined4 **)(iVar2 + 0xc0);
        local_4 = *local_8;
        iVar5 = _STL::distance((_List_iterator<class_clData*,struct__STL::_Const_traits<class_clData*>_>
                                *)&local_4,
                               (_List_iterator<class_clData*,struct__STL::_Const_traits<class_clData*>_>
                                *)&local_8,&local_9);
        if (iVar5 == 0) {
          if (*(int *)(iVar2 + 0xd8) == 0) {
            *(undefined4 *)(iVar2 + 0xd8) = uVar3;
          }
          else {
            dVar7 = difftime(CONCAT44(*(int *)(iVar2 + 0xd8),uVar3),CONCAT44(unaff_EDI,unaff_ESI));
            if (___real_403e000000000000 < dVar7) {
              Disconnect(this,*(int *)(iVar2 + 0x10));
            }
          }
        }
      }
      iVar5 = *(int *)(iVar2 + 0xc);
      if (iVar5 == 0) {
        iVar5 = *(int *)(iVar2 + 4);
        if (iVar2 == *(int *)(iVar5 + 0xc)) {
          do {
            iVar2 = iVar5;
            iVar5 = *(int *)(iVar2 + 4);
          } while (iVar2 == *(int *)(iVar5 + 0xc));
        }
        if (*(int *)(iVar2 + 0xc) != iVar5) {
          iVar2 = iVar5;
        }
      }
      else {
        for (iVar1 = *(int *)(iVar5 + 8); iVar2 = iVar5, iVar1 != 0; iVar1 = *(int *)(iVar1 + 8)) {
          iVar5 = iVar1;
        }
      }
    } while (iVar2 != *(int *)(this + 0xc4));
  }
  return '\x01';
}




/* from: libgsclient:GSArenaConnection.cpp
   addr: 005B5700 */

void __thiscall
CArenaConnectionList::ConnectFailed(CArenaConnectionList *this,int param_1,int param_2)

{
  _Rb_tree<int,struct__STL::pair<int_const_,class_CArenaConnectionList::GroupErrorInfo*>,struct__STL::_Select1st<struct__STL::pair<int_const_,class_CArenaConnectionList::GroupErrorInfo*>_>,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,class_CArenaConnectionList::GroupErrorInfo*>_>_>
  *this_00;
  _Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_> *p_Var1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int local_1c;
  uint local_18;
  undefined4 *local_14;
  undefined1 local_10 [4];
  undefined1 local_c [4];
  int local_8;
  undefined4 local_4;
  
  local_18 = 0;
  p_Var1 = _STL::
           _Rb_tree<int,struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Select1st<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>
           ::M_find((_Rb_tree<int,struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Select1st<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>
                     *)(this + 0xc4),&param_1);
  if (p_Var1 != *(_Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_> **)
                 (this + 0xc4)) {
    p_Var1[0xbc] = (_Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>)0x0;
    piVar4 = (int *)**(int **)(this + 0x9c);
    if (piVar4 != *(int **)(this + 0x9c)) {
      do {
        iVar2 = FindArena(this,*(int *)piVar4[2]);
        if (iVar2 == param_1) {
          RemoveErrorGroupFromLists(this,*(int *)piVar4[2]);
          local_14 = (undefined4 *)ExtAlloc_Malloc_4();
          if (local_14 == (undefined4 *)0x0) {
            local_14 = (undefined4 *)0x0;
          }
          else {
            *local_14 = &GroupErrorInfo::_vbtable_;
            local_18 = local_18 | 1;
            *(undefined1 *)(local_14 + 2) = 0;
            local_14[1] = param_2;
          }
          _STL::list<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_>::end
                    ((list<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_> *)
                     (this + 0xbc));
          _STL::list<int,class_ExtAlloc::Allocator<int>_>::insert
                    ((list<int,class_ExtAlloc::Allocator<int>_> *)(this + 0xbc),local_10);
          piVar3 = (int *)piVar4[2];
          this_00 = (_Rb_tree<int,struct__STL::pair<int_const_,class_CArenaConnectionList::GroupErrorInfo*>,struct__STL::_Select1st<struct__STL::pair<int_const_,class_CArenaConnectionList::GroupErrorInfo*>_>,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,class_CArenaConnectionList::GroupErrorInfo*>_>_>
                     *)(this + 0xac);
          _STL::
          _Rb_tree<int,struct__STL::pair<int_const_,class_CArenaConnectionList::GroupErrorInfo*>,struct__STL::_Select1st<struct__STL::pair<int_const_,class_CArenaConnectionList::GroupErrorInfo*>_>,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,class_CArenaConnectionList::GroupErrorInfo*>_>_>
          ::lower_bound(this_00,&local_1c);
          if ((local_1c == *(int *)this_00) || (*piVar3 < *(int *)(local_1c + 0x10))) {
            local_8 = *piVar3;
            local_4 = 0;
            _STL::
            _List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
            ::
            List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
                      ((_List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
                        *)&stack0xffffffcc,
                       (_List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
                        *)&local_1c);
            piVar3 = (int *)_STL::
                            map<int,class_CArenaConnectionList::GroupErrorInfo*,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,class_CArenaConnectionList::GroupErrorInfo*>_>_>
                            ::insert((map<int,class_CArenaConnectionList::GroupErrorInfo*,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,class_CArenaConnectionList::GroupErrorInfo*>_>_>
                                      *)this_00,local_c);
            local_1c = *piVar3;
          }
          *(undefined4 **)(local_1c + 0x14) = local_14;
          if (*(undefined4 **)(piVar4[2] + 8) != (undefined4 *)0x0) {
            (**(code **)**(undefined4 **)(piVar4[2] + 8))();
          }
          ExtAlloc_Free_4();
          piVar3 = (int *)piVar4[1];
          piVar4 = (int *)*piVar4;
          *piVar3 = (int)piVar4;
          piVar4[1] = (int)piVar3;
          ExtAlloc_Free_4();
        }
        else {
          piVar4 = (int *)*piVar4;
        }
      } while (piVar4 != *(int **)(this + 0x9c));
    }
  }
  return;
}




/* from: libgsclient:GSArenaConnection.cpp
   addr: 005B5870 */

uchar __thiscall CArenaConnectionList::ConnectFinishArena(CArenaConnectionList *this,int param_1)

{
  int *piVar1;
  _Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_> *p_Var2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  
  p_Var2 = _STL::
           _Rb_tree<int,struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Select1st<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>
           ::M_find((_Rb_tree<int,struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Select1st<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>
                     *)(this + 0xc4),&param_1);
  if (p_Var2 != *(_Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_> **)
                 (this + 0xc4)) {
    p_Var2[0xbc] = (_Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>)0x2;
    piVar4 = (int *)**(int **)(this + 0x9c);
    iVar6 = param_1;
    if (piVar4 != *(int **)(this + 0x9c)) {
      do {
        if ((((char)((int *)piVar4[2])[3] == '\0') &&
            (iVar3 = FindArena(this,*(int *)piVar4[2]), iVar6 = param_1, iVar3 == param_1)) ||
           (((char)((int *)piVar4[2])[3] != '\0' && (*(int *)piVar4[2] == iVar6)))) {
          iVar3 = piVar4[2];
          CConnectionList::SendMessageA
                    ((CConnectionList *)this,iVar6,*(uchar *)(iVar3 + 4),*(uchar *)(iVar3 + 5),
                     *(clDataList **)(iVar3 + 8));
          if (*(undefined4 **)(piVar4[2] + 8) != (undefined4 *)0x0) {
            (**(code **)**(undefined4 **)(piVar4[2] + 8))(1);
          }
          ExtAlloc_Free_4(piVar4[2]);
          piVar1 = (int *)piVar4[1];
          piVar5 = (int *)*piVar4;
          *piVar1 = (int)piVar5;
          piVar5[1] = (int)piVar1;
          ExtAlloc_Free_4(piVar4);
          iVar6 = param_1;
        }
        else {
          piVar5 = (int *)*piVar4;
        }
        piVar4 = piVar5;
      } while (piVar5 != *(int **)(this + 0x9c));
    }
    return '\x01';
  }
  return '\0';
}




/* from: libgsclient:GSArenaConnection.cpp
   addr: 005B5940 */

uchar __thiscall
CArenaConnectionList::ConnectFinishRouter
          (CArenaConnectionList *this,int param_1,ushort param_2,uchar param_3)

{
  uchar uVar1;
  _Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_> *p_Var2;
  CConnection *pCVar3;
  undefined3 in_stack_0000000d;
  uint local_28;
  undefined **local_24;
  undefined4 *local_20;
  undefined4 local_1c;
  undefined **local_18;
  list<class_clData*> local_14 [4];
  undefined8 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005cbf9e;
  local_c = ExceptionList;
  local_28 = 0;
  ExceptionList = &local_c;
  p_Var2 = _STL::
           _Rb_tree<int,struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Select1st<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>
           ::M_find((_Rb_tree<int,struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Select1st<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>
                     *)(this + 0xc4),&param_1);
  local_28 = (uint)(param_3 != '\0');
  if (p_Var2 != *(_Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_> **)
                 (this + 0xc4)) {
    *(ushort *)(p_Var2 + 0xb6) = param_2;
    pCVar3 = CConnectionList::GetConnection((CConnectionList *)this,param_1);
    if ((pCVar3 == (CConnection *)0x0) &&
       (p_Var2[0xbc] == (_Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>)0x1)) {
      uVar1 = CConnectionList::AddConnection
                        ((CConnectionList *)this,(char *)(p_Var2 + 0x35),*(ushort *)(p_Var2 + 0xb6),
                         '\x02',0x1e,param_1,*(int *)(p_Var2 + 0xb8));
      if (uVar1 == '\0') {
        p_Var2[0xbc] = (_Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>)0x0;
        ConnectFailed(this,param_1,0x28);
      }
      else {
        pCVar3 = CConnectionList::GetConnection((CConnectionList *)this,param_1);
        local_20 = &clDataList::_vbtable__for__clData__;
        local_10 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
        local_1c = 3;
        local_24 = &clData::_vftable_;
        local_4 = 0;
        ExtAlloc::list<class_clData*>::list<class_clData*>(local_14);
        local_24 = &clDataList::_vftable__for__clData__;
        local_18 = &clDataList::_vftable__for__clPointerList<class_clData*>__;
        local_4 = 1;
        clDataList::Add((clDataList *)&local_24,(char *)(this + 0xd4));
        clDataList::Add((clDataList *)&local_24,&local_28,1);
        uVar1 = CConnection::SendMessageA(pCVar3,'h','\x02',(clDataList *)&local_24);
        if (uVar1 != '\0') {
          local_24 = &clDataList::_vftable__for__clData__;
          _param_3 = &local_18;
          local_18 = &clPointerList<class_clData*>::_vftable_;
          local_4._0_1_ = 5;
          local_4._1_3_ = 0;
          clPointerList<class_clRcvElement*>::clear((clPointerList<class_clRcvElement*> *)&local_18)
          ;
          local_4 = CONCAT31(local_4._1_3_,4);
          ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
                    ((list<class_clRcvElement*> *)local_14);
          ExceptionList = local_c;
          return '\x01';
        }
        p_Var2[0xbc] = (_Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>)0x0;
        ConnectFailed(this,param_1,0x29);
        local_24 = &clDataList::_vftable__for__clData__;
        _param_3 = &local_18;
        local_18 = &clPointerList<class_clData*>::_vftable_;
        local_4._0_1_ = 3;
        local_4._1_3_ = 0;
        clPointerList<class_clRcvElement*>::clear((clPointerList<class_clRcvElement*> *)&local_18);
        local_4 = CONCAT31(local_4._1_3_,2);
        ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
                  ((list<class_clRcvElement*> *)local_14);
      }
    }
  }
  ExceptionList = local_c;
  return '\0';
}




/* from: libgsclient:GSArenaConnection.cpp
   addr: 005B5B30 */

uchar __thiscall CArenaConnectionList::ConnectStart(CArenaConnectionList *this,int param_1)

{
  uchar uVar1;
  _Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_> *p_Var2;
  undefined **local_24;
  undefined4 *local_20;
  undefined4 local_1c;
  undefined **local_18;
  list<class_clData*> local_14 [4];
  undefined8 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005cc01e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  p_Var2 = _STL::
           _Rb_tree<int,struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Select1st<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>
           ::M_find((_Rb_tree<int,struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Select1st<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>
                     *)(this + 0xc4),&param_1);
  if (p_Var2 == *(_Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_> **)
                 (this + 0xc4)) {
    uVar1 = '\0';
  }
  else {
    local_20 = &clDataList::_vbtable__for__clData__;
    local_10 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
    local_1c = 3;
    local_24 = &clData::_vftable_;
    local_4 = 0;
    ExtAlloc::list<class_clData*>::list<class_clData*>(local_14);
    local_18 = &clDataList::_vftable__for__clPointerList<class_clData*>__;
    local_24 = &clDataList::_vftable__for__clData__;
    local_4 = 1;
    clDataList::Add((clDataList *)&local_24,&param_1,4);
    uVar1 = CConnection::SendMessageA
                      (*(CConnection **)(this + 0xf8),'R','\x01',(clDataList *)&local_24);
    if (uVar1 == '\0') {
      local_24 = &clDataList::_vftable__for__clData__;
      local_18 = &clPointerList<class_clData*>::_vftable_;
      local_4._0_1_ = 3;
      local_4._1_3_ = 0;
      clPointerList<class_clRcvElement*>::clear((clPointerList<class_clRcvElement*> *)&local_18);
      local_4 = CONCAT31(local_4._1_3_,2);
      ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
                ((list<class_clRcvElement*> *)local_14);
      uVar1 = '\0';
    }
    else {
      uVar1 = '\x01';
      p_Var2[0xbc] = (_Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>)0x1;
      local_24 = &clDataList::_vftable__for__clData__;
      local_18 = &clPointerList<class_clData*>::_vftable_;
      local_4._0_1_ = 5;
      local_4._1_3_ = 0;
      clPointerList<class_clRcvElement*>::clear((clPointerList<class_clRcvElement*> *)&local_18);
      local_4 = CONCAT31(local_4._1_3_,4);
      ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
                ((list<class_clRcvElement*> *)local_14);
    }
  }
  ExceptionList = local_c;
  return uVar1;
}




/* from: libgsclient:GSArenaConnection.cpp
   addr: 005B5C80 */

uchar __thiscall CArenaConnectionList::Disconnect(CArenaConnectionList *this,int param_1)

{
  uchar uVar1;
  _Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_> *p_Var2;
  
  p_Var2 = _STL::
           _Rb_tree<int,struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Select1st<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>
           ::M_find((_Rb_tree<int,struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Select1st<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>
                     *)(this + 0xc4),&param_1);
  if (p_Var2 == *(_Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_> **)
                 (this + 0xc4)) {
    return '\0';
  }
  p_Var2[0xbc] = (_Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>)0x0;
  *(undefined4 *)(p_Var2 + 0xd8) = 0;
  uVar1 = CConnectionList::Disconnect((CConnectionList *)this,param_1);
  return uVar1;
}




/* from: libgsclient:GSArenaConnection.cpp
   addr: 005B5CC0 */

void __thiscall CArenaConnectionList::EmptyInbox(CArenaConnectionList *this)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = (int *)**(int **)(this + 0xa4);
  if (piVar3 != *(int **)(this + 0xa4)) {
    do {
      if (*(undefined4 **)(piVar3[2] + 8) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(piVar3[2] + 8))(1);
      }
      ExtAlloc_Free_4(piVar3[2]);
      piVar1 = (int *)piVar3[1];
      piVar2 = (int *)*piVar3;
      *piVar1 = (int)piVar2;
      piVar2[1] = (int)piVar1;
      ExtAlloc_Free_4(piVar3);
      piVar3 = piVar2;
    } while (piVar2 != (int *)*(int *)(this + 0xa4));
  }
  return;
}




/* from: libgsclient:GSArenaConnection.cpp
   addr: 005B5D10 */

int __thiscall CArenaConnectionList::FindArena(CArenaConnectionList *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(*(int *)(this + 0xc4) + 8);
  while( true ) {
    if (iVar2 == *(int *)(this + 0xc4)) {
      return 0;
    }
    if ((*(int *)(iVar2 + 0x10) <= param_1) &&
       (param_1 < *(int *)(iVar2 + 0xb8) + *(int *)(iVar2 + 0x10))) break;
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
  }
  return *(int *)(iVar2 + 0x10);
}




/* from: libgsclient:GSArenaConnection.cpp
   addr: 005B5D80 */

CCurMessage * __thiscall CArenaConnectionList::ReadMessage(CArenaConnectionList *this)

{
  int iVar1;
  _List_iterator<class_clData*,struct__STL::_Const_traits<class_clData*>_> *p_Var2;
  int iVar3;
  _Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_> *p_Var4;
  CCurMessage *pCVar5;
  input_iterator_tag local_36;
  input_iterator_tag local_35;
  int local_34;
  CCurMessage *local_30;
  CCurMessage *local_2c [2];
  undefined **local_24;
  undefined4 *local_20;
  undefined **local_18 [2];
  undefined8 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005cc06e;
  local_c = ExceptionList;
  local_30 = (CCurMessage *)0x0;
  local_34 = *(int *)(this + 0xbc);
  ExceptionList = &local_c;
  p_Var2 = (_List_iterator<class_clData*,struct__STL::_Const_traits<class_clData*>_> *)
           _STL::list<class_clRcvElement*,class_ExtAlloc::Allocator<class_clRcvElement*>_>::begin
                     ((list<class_clRcvElement*,class_ExtAlloc::Allocator<class_clRcvElement*>_> *)
                      (this + 0xbc));
  local_36 = local_35;
  iVar3 = _STL::distance(p_Var2,(_List_iterator<class_clData*,struct__STL::_Const_traits<class_clData*>_>
                                 *)&local_34,&local_36);
  if (iVar3 == 0) {
    local_2c[0] = *(CCurMessage **)(this + 0xa4);
    p_Var2 = (_List_iterator<class_clData*,struct__STL::_Const_traits<class_clData*>_> *)
             _STL::list<class_clRcvElement*,class_ExtAlloc::Allocator<class_clRcvElement*>_>::begin
                       ((list<class_clRcvElement*,class_ExtAlloc::Allocator<class_clRcvElement*>_> *
                        )(this + 0xa4));
    iVar3 = _STL::distance(p_Var2,(_List_iterator<class_clData*,struct__STL::_Const_traits<class_clData*>_>
                                   *)local_2c,&local_35);
    if (iVar3 != 0) {
      iVar3 = **(int **)(this + 0xa4);
      iVar1 = **(int **)(iVar3 + 8);
      local_30 = (CCurMessage *)ExtAlloc_Malloc_4(0x1c);
      local_4 = 6;
      if (local_30 == (CCurMessage *)0x0) {
        pCVar5 = (CCurMessage *)0x0;
      }
      else {
        iVar3 = *(int *)(iVar3 + 8);
        pCVar5 = (CCurMessage *)
                 CCurMessage::CCurMessage
                           (local_30,*(uchar *)(iVar3 + 4),*(clDataList **)(iVar3 + 8),0);
      }
      local_4 = 0xffffffff;
      RemoveMessageFromInbox(this,iVar1);
      ExceptionList = local_c;
      return pCVar5;
    }
    pCVar5 = CConnectionList::ReadMessage((CConnectionList *)this);
    ExceptionList = local_c;
    return pCVar5;
  }
  pCVar5 = (CCurMessage *)0x0;
  local_34 = *(int *)(**(int **)(this + 0xbc) + 8);
  p_Var4 = _STL::
           _Rb_tree<int,struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Select1st<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>
           ::M_find((_Rb_tree<int,struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Select1st<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>
                     *)(this + 0xac),&local_34);
  if (p_Var4 == *(_Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_> **)
                 (this + 0xac)) goto LAB_005b5f3f;
  if (*(char *)(*(int *)(p_Var4 + 0x14) + 8) == '\0') {
    local_30 = *(CCurMessage **)(*(int *)(p_Var4 + 0x14) + 4);
    local_20 = &clDataList::_vbtable__for__clData__;
    local_10 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
    clData::clData((clData *)&local_24,3);
    local_4 = 3;
    clPointerList<class_clData*>::clPointerList<class_clData*>
              ((clPointerList<class_clData*> *)local_18);
    local_24 = &clDataList::_vftable__for__clData__;
    local_18[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
    local_4 = 4;
    clDataList::Add((clDataList *)&local_24,&local_34,4);
    clDataList::Add((clDataList *)&local_24,&local_30,4);
    local_2c[0] = (CCurMessage *)ExtAlloc_Malloc_4(0x1c);
    local_4 = CONCAT31(local_4._1_3_,5);
    if (local_2c[0] == (CCurMessage *)0x0) goto LAB_005b5f2a;
    pCVar5 = (CCurMessage *)CCurMessage::CCurMessage(local_2c[0],0x8e,(clDataList *)&local_24,0);
  }
  else {
    local_20 = &clDataList::_vbtable__for__clData__;
    local_10 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
    clData::clData((clData *)&local_24,3);
    local_4 = 0;
    clPointerList<class_clData*>::clPointerList<class_clData*>
              ((clPointerList<class_clData*> *)local_18);
    local_24 = &clDataList::_vftable__for__clData__;
    local_18[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
    local_4 = 1;
    clDataList::Add((clDataList *)&local_24,&local_34,4);
    local_2c[0] = (CCurMessage *)ExtAlloc_Malloc_4(0x1c);
    local_4 = CONCAT31(local_4._1_3_,2);
    if (local_2c[0] == (CCurMessage *)0x0) {
LAB_005b5f2a:
      pCVar5 = (CCurMessage *)0x0;
    }
    else {
      pCVar5 = (CCurMessage *)CCurMessage::CCurMessage(local_2c[0],0x91,(clDataList *)&local_24,0);
    }
  }
  local_4 = 0xffffffff;
  clDataList::~clDataList((clDataList *)&local_24);
LAB_005b5f3f:
  RemoveErrorGroupFromLists(this,local_34);
  ExceptionList = local_c;
  return pCVar5;
}




/* from: libgsclient:GSArenaConnection.cpp
   addr: 005B6020 */

uchar __thiscall CArenaConnectionList::RemoveArenaFromList(CArenaConnectionList *this,int param_1)

{
  _Rb_tree<int,struct__STL::pair<int_const_,class_CArenaConnectionList::GroupErrorInfo*>,struct__STL::_Select1st<struct__STL::pair<int_const_,class_CArenaConnectionList::GroupErrorInfo*>_>,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,class_CArenaConnectionList::GroupErrorInfo*>_>_>
  *p_Var1;
  uchar uVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *piVar6;
  _Rb_tree_node_base *p_Var7;
  int iVar8;
  clDataList acStack_74 [8];
  undefined4 uStack_6c;
  int local_48;
  uint local_44;
  int local_40;
  CArenaConnectionList *local_3c;
  GroupErrorInfo *local_38 [2];
  undefined1 *local_30;
  pair<int_const_,class_CArenaConnectionList::GroupErrorInfo*> local_2c [8];
  undefined **local_24;
  undefined4 *local_20;
  undefined **local_18 [2];
  undefined8 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005cc090;
  local_c = ExceptionList;
  local_44 = 0;
  ExceptionList = &local_c;
  _STL::
  _Rb_tree<int,struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Select1st<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>
  ::find((_Rb_tree<int,struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Select1st<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>
          *)(this + 0xc4),&local_48);
  if (local_48 == *(int *)(this + 0xc4)) {
    uVar2 = '\0';
  }
  else {
    piVar6 = (int *)**(int **)(local_48 + 0xc0);
    if (piVar6 != *(int **)(local_48 + 0xc0)) {
      local_3c = this + 0xbc;
      p_Var1 = (_Rb_tree<int,struct__STL::pair<int_const_,class_CArenaConnectionList::GroupErrorInfo*>,struct__STL::_Select1st<struct__STL::pair<int_const_,class_CArenaConnectionList::GroupErrorInfo*>_>,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,class_CArenaConnectionList::GroupErrorInfo*>_>_>
                *)(this + 0xac);
      do {
        RemoveErrorGroupFromLists(this,piVar6[2]);
        puVar3 = (undefined4 *)ExtAlloc_Malloc_4();
        if (puVar3 == (undefined4 *)0x0) {
          puVar3 = (undefined4 *)0x0;
        }
        else {
          *puVar3 = &GroupErrorInfo::_vbtable_;
          local_44 = local_44 | 1;
          puVar3[1] = 0x2c;
          *(undefined1 *)(puVar3 + 2) = 0;
        }
        uStack_6c = 0x5b60d9;
        _STL::list<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_>::end
                  ((list<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_> *)
                   local_3c);
        uStack_6c = 0x5b60e7;
        _STL::list<int,class_ExtAlloc::Allocator<int>_>::insert
                  ((list<int,class_ExtAlloc::Allocator<int>_> *)local_3c);
        _STL::
        _Rb_tree<int,struct__STL::pair<int_const_,class_CArenaConnectionList::GroupErrorInfo*>,struct__STL::_Select1st<struct__STL::pair<int_const_,class_CArenaConnectionList::GroupErrorInfo*>_>,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,class_CArenaConnectionList::GroupErrorInfo*>_>_>
        ::lower_bound(p_Var1,&local_40);
        if ((local_40 == *(int *)p_Var1) || (piVar6[2] < *(int *)(local_40 + 0x10))) {
          local_38[0] = (GroupErrorInfo *)0x0;
          _STL::pair<int_const_,class_CArenaConnectionList::GroupErrorInfo*>::
          pair<int_const_,class_CArenaConnectionList::GroupErrorInfo*>(local_2c,piVar6 + 2,local_38)
          ;
          uStack_6c = 0x5b612c;
          _STL::
          _List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
          ::
          List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
                    ((_List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
                      *)&stack0xffffff9c,
                     (_List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
                      *)&local_40);
          uStack_6c = 0x5b6138;
          piVar4 = (int *)_STL::
                          map<int,class_CArenaConnectionList::GroupErrorInfo*,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,class_CArenaConnectionList::GroupErrorInfo*>_>_>
                          ::insert((map<int,class_CArenaConnectionList::GroupErrorInfo*,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,class_CArenaConnectionList::GroupErrorInfo*>_>_>
                                    *)p_Var1);
          local_40 = *piVar4;
        }
        *(undefined4 **)(local_40 + 0x14) = puVar3;
        piVar6 = (int *)*piVar6;
      } while (piVar6 != (int *)*(int *)(local_48 + 0xc0));
    }
    p_Var7 = *(_Rb_tree_node_base **)(*(_Rb_tree_node_base **)(local_48 + 200) + 8);
    if (p_Var7 != *(_Rb_tree_node_base **)(local_48 + 200)) {
      p_Var1 = (_Rb_tree<int,struct__STL::pair<int_const_,class_CArenaConnectionList::GroupErrorInfo*>,struct__STL::_Select1st<struct__STL::pair<int_const_,class_CArenaConnectionList::GroupErrorInfo*>_>,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,class_CArenaConnectionList::GroupErrorInfo*>_>_>
                *)(this + 0xac);
      do {
        RemoveErrorGroupFromLists(this,*(int *)(p_Var7 + 0x10));
        puVar5 = (undefined4 *)ExtAlloc_Malloc_4();
        puVar3 = (undefined4 *)0x0;
        if (puVar5 != (undefined4 *)0x0) {
          puVar5[1] = 0;
          local_44 = local_44 | 2;
          *puVar5 = &GroupErrorInfo::_vbtable_;
          *(undefined1 *)(puVar5 + 2) = 1;
          puVar3 = puVar5;
        }
        uStack_6c = 0x5b61b7;
        _STL::list<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_>::end
                  ((list<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_> *)
                   (this + 0xbc));
        uStack_6c = 0x5b61cb;
        _STL::list<int,class_ExtAlloc::Allocator<int>_>::insert
                  ((list<int,class_ExtAlloc::Allocator<int>_> *)(this + 0xbc));
        _STL::
        _Rb_tree<int,struct__STL::pair<int_const_,class_CArenaConnectionList::GroupErrorInfo*>,struct__STL::_Select1st<struct__STL::pair<int_const_,class_CArenaConnectionList::GroupErrorInfo*>_>,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,class_CArenaConnectionList::GroupErrorInfo*>_>_>
        ::lower_bound(p_Var1,&local_40);
        if ((local_40 == *(int *)p_Var1) || (*(int *)(p_Var7 + 0x10) < *(int *)(local_40 + 0x10))) {
          local_38[0] = (GroupErrorInfo *)0x0;
          _STL::pair<int_const_,class_CArenaConnectionList::GroupErrorInfo*>::
          pair<int_const_,class_CArenaConnectionList::GroupErrorInfo*>
                    (local_2c,(int *)(p_Var7 + 0x10),local_38);
          uStack_6c = 0x5b6210;
          _STL::
          _List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
          ::
          List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
                    ((_List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
                      *)&stack0xffffff9c,
                     (_List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
                      *)&local_40);
          uStack_6c = 0x5b621c;
          piVar6 = (int *)_STL::
                          map<int,class_CArenaConnectionList::GroupErrorInfo*,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,class_CArenaConnectionList::GroupErrorInfo*>_>_>
                          ::insert((map<int,class_CArenaConnectionList::GroupErrorInfo*,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,class_CArenaConnectionList::GroupErrorInfo*>_>_>
                                    *)p_Var1);
          local_40 = *piVar6;
        }
        *(undefined4 **)(local_40 + 0x14) = puVar3;
        p_Var7 = _STL::_Rb_global<bool>::M_increment(p_Var7);
      } while (p_Var7 != *(_Rb_tree_node_base **)(local_48 + 200));
    }
    Disconnect(this,param_1);
    _STL::
    _Rb_tree<int,struct__STL::pair<int_const_,struct_stArenaInfo>,struct__STL::_Select1st<struct__STL::pair<int_const_,struct_stArenaInfo>_>,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,struct_stArenaInfo>_>_>
    ::erase((_Rb_tree<int,struct__STL::pair<int_const_,struct_stArenaInfo>,struct__STL::_Select1st<struct__STL::pair<int_const_,struct_stArenaInfo>_>,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,struct_stArenaInfo>_>_>
             *)(this + 0xc4));
    iVar8 = FindFirstConnectedArena(this);
    if (iVar8 == 0) {
      local_20 = &clDataList::_vbtable__for__clData__;
      local_10 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
      clData::clData((clData *)&local_24,3);
      local_4 = 0;
      clPointerList<class_clData*>::clPointerList<class_clData*>
                ((clPointerList<class_clData*> *)local_18);
      local_24 = &clDataList::_vftable__for__clData__;
      local_18[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
      local_4 = 1;
      EmptyInbox(this);
      local_30 = acStack_74;
      clDataList::clDataList(acStack_74,(clDataList *)&local_24);
      SendInternalMessage(this,0,0x8b,4);
      local_4 = 0xffffffff;
      clDataList::~clDataList((clDataList *)&local_24);
    }
    uVar2 = '\x01';
  }
  ExceptionList = local_c;
  return uVar2;
}




/* from: libgsclient:GSArenaConnection.cpp
   addr: 005B6310 */

uchar __thiscall CArenaConnectionList::RemoveAllArenaFromList(CArenaConnectionList *this)

{
  void **ppvVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  clDataList acStack_4c [16];
  undefined4 uStack_3c;
  Allocator<class_clData*> local_29;
  undefined ***local_28;
  undefined **local_24;
  undefined4 *local_20;
  undefined4 local_1c;
  undefined **local_18;
  list<class_clData*,class_ExtAlloc::Allocator<class_clData*>_> local_14 [4];
  undefined8 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005cc0e7;
  local_c = ExceptionList;
  local_28 = (undefined ***)0x0;
  iVar3 = *(int *)(*(int *)(this + 0xc4) + 8);
  ExceptionList = &local_c;
  ppvVar1 = &local_c;
  if (iVar3 != *(int *)(this + 0xc4)) {
    do {
      iVar4 = *(int *)(iVar3 + 0xc);
      if (iVar4 == 0) {
        iVar2 = *(int *)(iVar3 + 4);
        iVar4 = iVar3;
        if (iVar3 == *(int *)(iVar2 + 0xc)) {
          do {
            iVar4 = iVar2;
            iVar2 = *(int *)(iVar4 + 4);
          } while (iVar4 == *(int *)(iVar2 + 0xc));
        }
        if (*(int *)(iVar4 + 0xc) != iVar2) {
          iVar4 = iVar2;
        }
      }
      else {
        for (iVar2 = *(int *)(iVar4 + 8); iVar2 != 0; iVar2 = *(int *)(iVar2 + 8)) {
          iVar4 = iVar2;
        }
      }
      uStack_3c = 0x5b6382;
      RemoveArenaFromList(this,*(int *)(iVar3 + 0x10));
      iVar3 = iVar4;
      ppvVar1 = (void **)ExceptionList;
    } while (iVar4 != *(int *)(this + 0xc4));
  }
  ExceptionList = ppvVar1;
  iVar3 = FindFirstConnectedArena(this);
  if (iVar3 == 0) {
    local_20 = &clDataList::_vbtable__for__clData__;
    local_10 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
    local_1c = 3;
    local_24 = &clData::_vftable_;
    local_4 = 1;
    uStack_3c = 0x5b63cf;
    _STL::list<class_clData*,class_ExtAlloc::Allocator<class_clData*>_>::
    list<class_clData*,class_ExtAlloc::Allocator<class_clData*>_>(local_14,&local_29);
    local_18 = &clDataList::_vftable__for__clPointerList<class_clData*>__;
    local_24 = &clDataList::_vftable__for__clData__;
    local_4 = 2;
    EmptyInbox(this);
    local_28 = (undefined ***)acStack_4c;
    clDataList::clDataList(acStack_4c,(clDataList *)&local_24);
    SendInternalMessage(this,0,0x8b,4);
    local_24 = &clDataList::_vftable__for__clData__;
    local_28 = &local_18;
    local_18 = &clPointerList<class_clData*>::_vftable_;
    local_4._0_1_ = 4;
    local_4._1_3_ = 0;
    clPointerList<class_clRcvElement*>::clear((clPointerList<class_clRcvElement*> *)&local_18);
    local_4 = CONCAT31(local_4._1_3_,3);
    ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
              ((list<class_clRcvElement*> *)local_14);
  }
  ExceptionList = local_c;
  return '\x01';
}




/* from: libgsclient:GSArenaConnection.cpp
   addr: 005B6460 */

void __thiscall
CArenaConnectionList::RemoveErrorGroupFromLists(CArenaConnectionList *this,int param_1)

{
  _Rb_tree<int,struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Select1st<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>
  *this_00;
  int *piVar1;
  int iVar2;
  _Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_> *p_Var3;
  _Rb_tree_node_base *p_Var4;
  int *piVar5;
  
  this_00 = (_Rb_tree<int,struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Select1st<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>
             *)(this + 0xac);
  p_Var3 = _STL::
           _Rb_tree<int,struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Select1st<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>
           ::M_find(this_00,&param_1);
  if (p_Var3 != *(_Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_> **)this_00) {
    piVar1 = *(int **)(this + 0xbc);
    piVar5 = (int *)*piVar1;
    if (piVar5 != piVar1) {
      while (piVar5[2] != param_1) {
        piVar5 = (int *)*piVar5;
        if (piVar5 == piVar1) {
          return;
        }
      }
      if (*(int *)(p_Var3 + 0x14) != 0) {
        ExtAlloc_Free_4(*(int *)(p_Var3 + 0x14));
      }
      iVar2 = *(int *)this_00;
      p_Var4 = _STL::_Rb_global<bool>::Rebalance_for_erase
                         ((_Rb_tree_node_base *)p_Var3,(_Rb_tree_node_base **)(iVar2 + 4),
                          (_Rb_tree_node_base **)(iVar2 + 8),(_Rb_tree_node_base **)(iVar2 + 0xc));
      ExtAlloc_Free_4(p_Var4);
      *(int *)(this + 0xb0) = *(int *)(this + 0xb0) + -1;
      piVar1 = (int *)piVar5[1];
      iVar2 = *piVar5;
      *piVar1 = iVar2;
      *(int **)(iVar2 + 4) = piVar1;
      ExtAlloc_Free_4(piVar5);
    }
  }
  return;
}




/* from: libgsclient:GSArenaConnection.cpp
   addr: 005B64F0 */

int __thiscall CArenaConnectionList::FindFirstConnectedArena(CArenaConnectionList *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(*(int *)(this + 0xc4) + 8);
  while( true ) {
    if (iVar2 == *(int *)(this + 0xc4)) {
      return 0;
    }
    if (*(char *)(iVar2 + 0xbc) == '\x02') break;
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
  }
  return *(int *)(iVar2 + 0x10);
}




/* from: libgsclient:GSArenaConnection.cpp
   addr: 005B6550 */

uchar __thiscall
CArenaConnectionList::SendArenaMessage
          (CArenaConnectionList *this,int param_1,uchar param_2,uchar param_3,clDataList *param_4)

{
  undefined4 *puVar1;
  uchar uVar2;
  _Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_> *p_Var3;
  CConnection *pCVar4;
  _List_node<class_clData*> *p_Var5;
  int iVar6;
  undefined3 in_stack_00000009;
  undefined3 in_stack_0000000d;
  clData *local_14;
  clDataList *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005cc10a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  p_Var3 = _STL::
           _Rb_tree<int,struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Select1st<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>
           ::M_find((_Rb_tree<int,struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Select1st<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>
                     *)(this + 0xc4),&param_1);
  if (p_Var3 == *(_Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_> **)
                 (this + 0xc4)) {
    ExceptionList = local_c;
    return '\0';
  }
  pCVar4 = CConnectionList::GetConnection((CConnectionList *)this,param_1);
  if (pCVar4 == (CConnection *)0x0) {
    if (p_Var3[0xbc] == (_Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>)0x0) {
      ConnectStart(this,param_1);
    }
    local_10 = (clDataList *)ExtAlloc_Malloc_4(0x18);
    iVar6 = 0;
    local_4 = 0;
    if (local_10 != (clDataList *)0x0) {
      iVar6 = clDataList::clDataList(local_10,param_4);
    }
    local_4 = 0xffffffff;
    local_14 = (clData *)ExtAlloc_Malloc_4(0x10);
    *(int *)local_14 = param_1;
    *(int *)(local_14 + 8) = iVar6;
    local_14[5] = (clData)param_3;
    local_14[4] = (clData)param_2;
    local_14[0xc] = (clData)0x1;
    _STL::list<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_>::end
              ((list<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_> *)
               (this + 0x9c));
    p_Var5 = _STL::list<class_clData*,class_ExtAlloc::Allocator<class_clData*>_>::M_create_node
                       ((list<class_clData*,class_ExtAlloc::Allocator<class_clData*>_> *)
                        (this + 0x9c),&local_14);
    puVar1 = *(undefined4 **)(param_4 + 4);
    *(clDataList **)p_Var5 = param_4;
    *(undefined4 **)(p_Var5 + 4) = puVar1;
    *puVar1 = p_Var5;
    *(_List_node<class_clData*> **)(param_4 + 4) = p_Var5;
    ExceptionList = local_c;
    return '\x01';
  }
  uVar2 = CConnectionList::SendMessageA
                    ((CConnectionList *)this,param_1,(uchar)_param_2,(uchar)_param_3,param_4);
  ExceptionList = local_c;
  return uVar2;
}




/* from: libgsclient:GSArenaConnection.cpp
   addr: 005B66A0 */

void __thiscall CArenaConnectionList::RemoveMessageFromInbox(CArenaConnectionList *this,int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  
  piVar2 = (int *)**(int **)(this + 0xa4);
  if (piVar2 != *(int **)(this + 0xa4)) {
    do {
      puVar3 = (undefined4 *)*piVar2;
      if (*(int *)piVar2[2] == param_1) {
        puVar3 = (undefined4 *)((int *)piVar2[2])[2];
        if (puVar3 != (undefined4 *)0x0) {
          (**(code **)*puVar3)(1);
        }
        ExtAlloc_Free_4(piVar2[2]);
        puVar1 = (undefined4 *)piVar2[1];
        puVar3 = (undefined4 *)*piVar2;
        *puVar1 = puVar3;
        puVar3[1] = puVar1;
        ExtAlloc_Free_4(piVar2);
      }
      piVar2 = puVar3;
    } while (puVar3 != *(undefined4 **)(this + 0xa4));
  }
  return;
}




/* from: libgsclient:GSArenaConnection.cpp
   addr: 005B6700 */

void __thiscall
CArenaConnectionList::SendInternalMessage
          (CArenaConnectionList *this,undefined4 param_1,clData param_2,undefined4 *param_3,
          undefined **param_5,
          _Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
          *param_6,undefined4 param_7,undefined **param_8,undefined4 param_9)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  _List_node<class_clData*> *p_Var3;
  void *unaff_ESI;
  clData *local_14;
  clDataList *local_10;
  void *pvStack_c;
  undefined4 *puStack_8;
  int local_4;
  
  puStack_8 = (undefined4 *)&LAB_005cc169;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  local_14 = (clData *)ExtAlloc_Malloc_4();
  local_10 = (clDataList *)ExtAlloc_Malloc_4();
  local_4._0_1_ = 1;
  if (local_10 == (clDataList *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = clDataList::clDataList(local_10,(clDataList *)&param_5);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  *(undefined4 *)local_14 = param_1;
  *(undefined4 *)(local_14 + 8) = uVar2;
  local_14[5] = param_3._0_1_;
  local_14[4] = param_2;
  local_14[0xc] = (clData)0x1;
  _STL::list<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_>::end
            ((list<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_> *)
             (this + 0xa4));
  p_Var3 = _STL::list<class_clData*,class_ExtAlloc::Allocator<class_clData*>_>::M_create_node
                     ((list<class_clData*,class_ExtAlloc::Allocator<class_clData*>_> *)(this + 0xa4)
                      ,&local_14);
  puVar1 = *(undefined4 **)((int)param_3 + 4);
  *(undefined4 **)p_Var3 = param_3;
  *(undefined4 **)(p_Var3 + 4) = puVar1;
  *puVar1 = p_Var3;
  *(_List_node<class_clData*> **)((int)param_3 + 4) = p_Var3;
  param_5 = &clDataList::_vftable__for__clData__;
  param_3 = &param_8;
  param_8 = &clPointerList<class_clData*>::_vftable_;
  local_4 = 3;
  _STL::list<class_clRcvElement*,class_ExtAlloc::Allocator<class_clRcvElement*>_>::begin
            ((list<class_clRcvElement*,class_ExtAlloc::Allocator<class_clRcvElement*>_> *)&param_9);
  (*(code *)param_8[4])(&param_2);
  puStack_8 = &param_6;
  local_10 = (clDataList *)CONCAT31(local_10._1_3_,4);
  _STL::_List_base<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_>::clear
            ((_List_base<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_> *)
             &param_6);
  _STL::
  _STLP_alloc_proxy<struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>*,struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
  ::deallocate((_STLP_alloc_proxy<struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>*,struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
                *)&param_6,param_6,1);
  ExceptionList = unaff_ESI;
  return;
}




/* from: libgsclient:GSArenaConnection.cpp
   addr: 005B6840 */

void __thiscall
_STL::
_Rb_tree<int,int,struct__STL::_Identity<int>,struct__STL::less<int>,class_ExtAlloc::Allocator<int>_>
::
~_Rb_tree<int,int,struct__STL::_Identity<int>,struct__STL::less<int>,class_ExtAlloc::Allocator<int>_>
          (_Rb_tree<int,int,struct__STL::_Identity<int>,struct__STL::less<int>,class_ExtAlloc::Allocator<int>_>
           *this)

{
  int iVar1;
  int iVar2;
  void **ppvVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005cc188;
  local_c = ExceptionList;
  local_4 = 0;
  ppvVar3 = &local_c;
  if (*(int *)(this + 4) != 0) {
    iVar2 = *(int *)(*(int *)this + 4);
    ExceptionList = &local_c;
    while (iVar2 != 0) {
      M_erase(this,*(_Rb_tree_node<int> **)(iVar2 + 0xc));
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




/* from: libgsclient:GSArenaConnection.cpp
   addr: 005B68D0 */

stArenaInfo * __thiscall stArenaInfo::stArenaInfo(stArenaInfo *this,stArenaInfo *param_1)

{
  _STLP_alloc_proxy<struct__STL::_List_node<class_CConnection*>*,struct__STL::_List_node<class_CConnection*>,class_ExtAlloc::Allocator<class_CConnection*>_>
  *this_00;
  animSYSTEM *this_01;
  _Rb_tree_base<int,class_ExtAlloc::Allocator<int>_> *this_02;
  undefined4 uVar1;
  _Rb_tree_node<int> *p_Var2;
  int iVar3;
  Allocator<class_CConnection*> *pAVar4;
  Allocator<int> *pAVar5;
  _Rb_tree_node<int> *p_Var6;
  int iVar7;
  stArenaInfo *psVar8;
  stArenaInfo *psVar9;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_18;
  stArenaInfo *local_14;
  _STLP_alloc_proxy<struct__STL::_List_node<class_CConnection*>*,struct__STL::_List_node<class_CConnection*>,class_ExtAlloc::Allocator<class_CConnection*>_>
  *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005cc1ce;
  local_c = ExceptionList;
  local_18 = 0;
  psVar8 = param_1;
  psVar9 = this;
  ExceptionList = &local_c;
  for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
    *(undefined4 *)psVar9 = *(undefined4 *)psVar8;
    psVar8 = psVar8 + 4;
    psVar9 = psVar9 + 4;
  }
  *psVar9 = *psVar8;
  psVar8 = param_1 + 0x21;
  psVar9 = this + 0x21;
  for (iVar7 = 0x20; iVar7 != 0; iVar7 = iVar7 + -1) {
    *(undefined4 *)psVar9 = *(undefined4 *)psVar8;
    psVar8 = psVar8 + 4;
    psVar9 = psVar9 + 4;
  }
  *psVar9 = *psVar8;
  *(undefined2 *)(this + 0xa2) = *(undefined2 *)(param_1 + 0xa2);
  *(undefined4 *)(this + 0xa4) = *(undefined4 *)(param_1 + 0xa4);
  this_00 = (_STLP_alloc_proxy<struct__STL::_List_node<class_CConnection*>*,struct__STL::_List_node<class_CConnection*>,class_ExtAlloc::Allocator<class_CConnection*>_>
             *)(this + 0xac);
  this[0xa8] = param_1[0xa8];
  *(undefined8 **)(this + 0xb0) = &ExtAlloc::list<int>::_vbtable_;
  local_14 = this;
  local_10 = this_00;
  pAVar4 = (Allocator<class_CConnection*> *)
           animSYSTEM::GetBaseSeqNmb((animSYSTEM *)(param_1 + 0xac));
  local_4 = 0;
  uStack_3c = 0x5b6973;
  _STL::
  _STLP_alloc_proxy<struct__STL::_List_node<class_CConnection*>*,struct__STL::_List_node<class_CConnection*>,class_ExtAlloc::Allocator<class_CConnection*>_>
  ::
  STLP_alloc_proxy<struct__STL::_List_node<class_CConnection*>*,struct__STL::_List_node<class_CConnection*>,class_ExtAlloc::Allocator<class_CConnection*>_>
            (this_00,pAVar4,(_List_node<class_CConnection*> *)0x0);
  iVar7 = ExtAlloc_Malloc_4();
  *(int *)iVar7 = iVar7;
  *(int *)(iVar7 + 4) = iVar7;
  *(int *)this_00 = iVar7;
  local_4 = CONCAT31(local_4._1_3_,2);
  uVar1 = **(undefined4 **)(param_1 + 0xac);
  _STL::list<class_clRcvElement*,class_ExtAlloc::Allocator<class_clRcvElement*>_>::begin
            ((list<class_clRcvElement*,class_ExtAlloc::Allocator<class_clRcvElement*>_> *)this_00);
  uStack_40 = uVar1;
  uStack_3c = uVar1;
  _STL::_List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
  ::List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
            ((_List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
              *)&uStack_40,
             (_List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
              *)&local_18);
  _STL::list<int,class_ExtAlloc::Allocator<int>_>::M_insert_dispatch
            ((list<int,class_ExtAlloc::Allocator<int>_> *)this_00);
  this_01 = (animSYSTEM *)(param_1 + 0xb4);
  this_02 = (_Rb_tree_base<int,class_ExtAlloc::Allocator<int>_> *)(this + 0xb4);
  local_4 = 3;
  *(undefined8 **)(this + 0xc0) = &ExtAlloc::set<int,struct__STL::less<int>_>::_vbtable_;
  local_10 = (_STLP_alloc_proxy<struct__STL::_List_node<class_CConnection*>*,struct__STL::_List_node<class_CConnection*>,class_ExtAlloc::Allocator<class_CConnection*>_>
              *)this_02;
  pAVar5 = (Allocator<int> *)animSYSTEM::GetBaseSeqNmb(this_01);
  local_4._0_1_ = 4;
  _STL::_Rb_tree_base<int,class_ExtAlloc::Allocator<int>_>::
  Rb_tree_base<int,class_ExtAlloc::Allocator<int>_>(this_02,pAVar5);
  *(undefined4 *)(this + 0xb8) = 0;
  this[0xbc] = param_1[0xbc];
  local_4 = CONCAT31(local_4._1_3_,6);
  if (*(int *)(*(int *)this_01 + 4) == 0) {
    _STL::
    _Rb_tree<int,int,struct__STL::_Identity<int>,struct__STL::less<int>,class_ExtAlloc::Allocator<int>_>
    ::M_empty_initialize
              ((_Rb_tree<int,int,struct__STL::_Identity<int>,struct__STL::less<int>,class_ExtAlloc::Allocator<int>_>
                *)this_02);
  }
  else {
    **(undefined1 **)this_02 = 0;
    p_Var2 = *(_Rb_tree_node<int> **)this_02;
    uStack_3c = 0x5b6a2e;
    p_Var6 = _STL::
             _Rb_tree<int,int,struct__STL::_Identity<int>,struct__STL::less<int>,class_ExtAlloc::Allocator<int>_>
             ::M_copy((_Rb_tree<int,int,struct__STL::_Identity<int>,struct__STL::less<int>,class_ExtAlloc::Allocator<int>_>
                       *)this_02,*(_Rb_tree_node<int> **)(*(int *)this_01 + 4),p_Var2);
    *(_Rb_tree_node<int> **)(p_Var2 + 4) = p_Var6;
    iVar7 = *(int *)(*(int *)this_02 + 4);
    for (iVar3 = *(int *)(iVar7 + 8); iVar3 != 0; iVar3 = *(int *)(iVar3 + 8)) {
      iVar7 = iVar3;
    }
    *(int *)(*(int *)this_02 + 8) = iVar7;
    iVar7 = *(int *)(*(int *)this_02 + 4);
    for (iVar3 = *(int *)(iVar7 + 0xc); iVar3 != 0; iVar3 = *(int *)(iVar3 + 0xc)) {
      iVar7 = iVar3;
    }
    *(int *)(*(int *)this_02 + 0xc) = iVar7;
  }
  *(undefined4 *)(this + 0xb8) = *(undefined4 *)(param_1 + 0xb8);
  *(undefined4 *)(this + 0xc4) = *(undefined4 *)(param_1 + 0xc4);
  ExceptionList = local_c;
  return this;
}




/* from: libgsclient:GSArenaConnection.cpp
   addr: 005B6A90 */

set<int,struct__STL::less<int>,class_ExtAlloc::Allocator<int>_> * __thiscall
_STL::set<int,struct__STL::less<int>,class_ExtAlloc::Allocator<int>_>::
set<int,struct__STL::less<int>,class_ExtAlloc::Allocator<int>_>
          (set<int,struct__STL::less<int>,class_ExtAlloc::Allocator<int>_> *this)

{
  undefined1 *puVar1;
  set<int,struct__STL::less<int>,class_ExtAlloc::Allocator<int>_> local_1;
  
  *(undefined4 *)this = 0;
  puVar1 = (undefined1 *)ExtAlloc_Malloc_4(0x14);
  local_1 = SUB41((uint)this >> 0x18,0);
  *(undefined1 **)this = puVar1;
  *(undefined4 *)(this + 4) = 0;
  this[8] = local_1;
  *puVar1 = 0;
  *(undefined4 *)(*(int *)this + 4) = 0;
  *(int *)(*(int *)this + 8) = *(int *)this;
  *(int *)(*(int *)this + 0xc) = *(int *)this;
  return this;
}




/* from: libgsclient:GSArenaConnection.cpp
   addr: 005B6AD0 */

void __thiscall
_STL::
_Rb_tree<int,int,struct__STL::_Identity<int>,struct__STL::less<int>,class_ExtAlloc::Allocator<int>_>
::clear(_Rb_tree<int,int,struct__STL::_Identity<int>,struct__STL::less<int>,class_ExtAlloc::Allocator<int>_>
        *this)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(this + 4) != 0) {
    iVar2 = *(int *)(*(int *)this + 4);
    while (iVar2 != 0) {
      M_erase(this,*(_Rb_tree_node<int> **)(iVar2 + 0xc));
      iVar1 = *(int *)(iVar2 + 8);
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




/* from: libgsclient:GSArenaConnection.cpp
   addr: 005B6B20 */

undefined4 __thiscall
_STL::
map<int,class_CArenaConnectionList::GroupErrorInfo*,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,class_CArenaConnectionList::GroupErrorInfo*>_>_>
::insert(map<int,class_CArenaConnectionList::GroupErrorInfo*,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,class_CArenaConnectionList::GroupErrorInfo*>_>_>
         *this,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  map<int,class_CArenaConnectionList::GroupErrorInfo*,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,class_CArenaConnectionList::GroupErrorInfo*>_>_>
  *pmStack_10;
  undefined4 uStack_c;
  
  uStack_c = param_4;
  pmStack_10 = this;
  _List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>::
  List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
            ((_List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
              *)&pmStack_10,
             (_List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
              *)&param_3);
  _Rb_tree<int,struct__STL::pair<int_const_,class_CArenaConnectionList::GroupErrorInfo*>,struct__STL::_Select1st<struct__STL::pair<int_const_,class_CArenaConnectionList::GroupErrorInfo*>_>,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,class_CArenaConnectionList::GroupErrorInfo*>_>_>
  ::insert_unique((_Rb_tree<int,struct__STL::pair<int_const_,class_CArenaConnectionList::GroupErrorInfo*>,struct__STL::_Select1st<struct__STL::pair<int_const_,class_CArenaConnectionList::GroupErrorInfo*>_>,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,class_CArenaConnectionList::GroupErrorInfo*>_>_>
                   *)this,param_2);
  return param_2;
}




/* from: libgsclient:GSArenaConnection.cpp
   addr: 005B6B50 */

void __thiscall
_STL::
_Rb_tree<int,struct__STL::pair<int_const_,struct_stArenaInfo>,struct__STL::_Select1st<struct__STL::pair<int_const_,struct_stArenaInfo>_>,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,struct_stArenaInfo>_>_>
::erase(_Rb_tree<int,struct__STL::pair<int_const_,struct_stArenaInfo>,struct__STL::_Select1st<struct__STL::pair<int_const_,struct_stArenaInfo>_>,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,struct_stArenaInfo>_>_>
        *this,_Rb_tree_node_base *param_2)

{
  int iVar1;
  _Rb_tree_node_base *p_Var2;
  
  iVar1 = *(int *)this;
  p_Var2 = _Rb_global<bool>::Rebalance_for_erase
                     (param_2,(_Rb_tree_node_base **)(iVar1 + 4),(_Rb_tree_node_base **)(iVar1 + 8),
                      (_Rb_tree_node_base **)(iVar1 + 0xc));
  pair<int_const_,struct_stArenaInfo>::~pair<int_const_,struct_stArenaInfo>
            ((pair<int_const_,struct_stArenaInfo> *)(p_Var2 + 0x10));
  ExtAlloc_Free_4(p_Var2);
  *(int *)(this + 4) = *(int *)(this + 4) + -1;
  return;
}




/* from: libgsclient:GSArenaConnection.cpp
   addr: 005B6B90 */

void __thiscall
_STL::pair<int_const_,class_CArenaConnectionList::GroupErrorInfo*>::
pair<int_const_,class_CArenaConnectionList::GroupErrorInfo*>
          (pair<int_const_,class_CArenaConnectionList::GroupErrorInfo*> *this,int *param_1,
          GroupErrorInfo **param_2)

{
  *(int *)this = *param_1;
  *(GroupErrorInfo **)(this + 4) = *param_2;
  return;
}




/* from: libgsclient:GSArenaConnection.cpp
   addr: 005B6BB0 */

void __thiscall
_STL::
_Rb_tree<int,struct__STL::pair<int_const_,class_CArenaConnectionList::GroupErrorInfo*>,struct__STL::_Select1st<struct__STL::pair<int_const_,class_CArenaConnectionList::GroupErrorInfo*>_>,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,class_CArenaConnectionList::GroupErrorInfo*>_>_>
::lower_bound(_Rb_tree<int,struct__STL::pair<int_const_,class_CArenaConnectionList::GroupErrorInfo*>,struct__STL::_Select1st<struct__STL::pair<int_const_,class_CArenaConnectionList::GroupErrorInfo*>_>,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,class_CArenaConnectionList::GroupErrorInfo*>_>_>
              *this,int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *in_stack_00000008;
  
  iVar3 = *(int *)this;
  if (*(int *)(iVar3 + 4) != 0) {
    iVar1 = *(int *)(iVar3 + 4);
    do {
      if (*(int *)(iVar1 + 0x10) < *in_stack_00000008) {
        iVar2 = *(int *)(iVar1 + 0xc);
      }
      else {
        iVar2 = *(int *)(iVar1 + 8);
        iVar3 = iVar1;
      }
      iVar1 = iVar2;
    } while (iVar2 != 0);
  }
  *param_1 = iVar3;
  return;
}




/* from: libgsclient:GSArenaConnection.cpp
   addr: 005B6BE0 */

_Rb_tree_base<int,class_ExtAlloc::Allocator<int>_> * __thiscall
_STL::_Rb_tree_base<int,class_ExtAlloc::Allocator<int>_>::
Rb_tree_base<int,class_ExtAlloc::Allocator<int>_>
          (_Rb_tree_base<int,class_ExtAlloc::Allocator<int>_> *this,Allocator<int> *param_1)

{
  undefined4 uVar1;
  
  _STLP_alloc_proxy<struct__STL::_List_node<class_CConnection*>*,struct__STL::_List_node<class_CConnection*>,class_ExtAlloc::Allocator<class_CConnection*>_>
  ::
  STLP_alloc_proxy<struct__STL::_List_node<class_CConnection*>*,struct__STL::_List_node<class_CConnection*>,class_ExtAlloc::Allocator<class_CConnection*>_>
            ((_STLP_alloc_proxy<struct__STL::_List_node<class_CConnection*>*,struct__STL::_List_node<class_CConnection*>,class_ExtAlloc::Allocator<class_CConnection*>_>
              *)this,(Allocator<class_CConnection*> *)param_1,(_List_node<class_CConnection*> *)0x0)
  ;
  uVar1 = ExtAlloc_Malloc_4(0x14);
  *(undefined4 *)this = uVar1;
  return this;
}




/* from: libgsclient:GSArenaConnection.cpp
   addr: 005B6C00 */

_Rb_tree_node<int> * __thiscall
_STL::
_Rb_tree<int,int,struct__STL::_Identity<int>,struct__STL::less<int>,class_ExtAlloc::Allocator<int>_>
::M_copy(_Rb_tree<int,int,struct__STL::_Identity<int>,struct__STL::less<int>,class_ExtAlloc::Allocator<int>_>
         *this,_Rb_tree_node<int> *param_1,_Rb_tree_node<int> *param_2)

{
  _Rb_tree_node<int> *p_Var1;
  _Rb_tree_node<int> *p_Var2;
  _Rb_tree_node<int> *p_Var3;
  _Rb_tree_node<int> *p_Var4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005cc1e0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  p_Var2 = M_create_node(this,(int *)(param_1 + 0x10));
  *p_Var2 = *param_1;
  *(undefined4 *)(p_Var2 + 8) = 0;
  *(undefined4 *)(p_Var2 + 0xc) = 0;
  *(_Rb_tree_node<int> **)(p_Var2 + 4) = param_2;
  p_Var3 = *(_Rb_tree_node<int> **)(param_1 + 0xc);
  local_8 = 0;
  p_Var1 = p_Var2;
  while( true ) {
    if (p_Var3 != (_Rb_tree_node<int> *)0x0) {
      p_Var3 = M_copy(this,p_Var3,p_Var1);
      *(_Rb_tree_node<int> **)(p_Var1 + 0xc) = p_Var3;
    }
    param_1 = *(_Rb_tree_node<int> **)(param_1 + 8);
    if (param_1 == (_Rb_tree_node<int> *)0x0) break;
    p_Var4 = M_create_node(this,(int *)(param_1 + 0x10));
    *p_Var4 = *param_1;
    *(undefined4 *)(p_Var4 + 8) = 0;
    *(undefined4 *)(p_Var4 + 0xc) = 0;
    *(_Rb_tree_node<int> **)(p_Var1 + 8) = p_Var4;
    *(_Rb_tree_node<int> **)(p_Var4 + 4) = p_Var1;
    p_Var3 = *(_Rb_tree_node<int> **)(param_1 + 0xc);
    p_Var1 = p_Var4;
  }
  ExceptionList = local_10;
  return p_Var2;
}




/* from: libgsclient:GSArenaConnection.cpp
   addr: 005B6CE0 */

void __thiscall
_STL::
_Rb_tree<int,int,struct__STL::_Identity<int>,struct__STL::less<int>,class_ExtAlloc::Allocator<int>_>
::M_erase(_Rb_tree<int,int,struct__STL::_Identity<int>,struct__STL::less<int>,class_ExtAlloc::Allocator<int>_>
          *this,_Rb_tree_node<int> *param_1)

{
  _Rb_tree_node<int> *p_Var1;
  
  if (param_1 != (_Rb_tree_node<int> *)0x0) {
    do {
      M_erase(this,*(_Rb_tree_node<int> **)(param_1 + 0xc));
      p_Var1 = *(_Rb_tree_node<int> **)(param_1 + 8);
      ExtAlloc_Free_4(param_1);
      param_1 = p_Var1;
    } while (p_Var1 != (_Rb_tree_node<int> *)0x0);
  }
  return;
}




/* from: libgsclient:GSArenaConnection.cpp
   addr: 005B6D10 */

_Rb_tree_node_base * __thiscall
_STL::
_Rb_tree<int,struct__STL::pair<int_const_,class_CArenaConnectionList::GroupErrorInfo*>,struct__STL::_Select1st<struct__STL::pair<int_const_,class_CArenaConnectionList::GroupErrorInfo*>_>,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,class_CArenaConnectionList::GroupErrorInfo*>_>_>
::insert_unique(_Rb_tree<int,struct__STL::pair<int_const_,class_CArenaConnectionList::GroupErrorInfo*>,struct__STL::_Select1st<struct__STL::pair<int_const_,class_CArenaConnectionList::GroupErrorInfo*>_>,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,class_CArenaConnectionList::GroupErrorInfo*>_>_>
                *this,_Rb_tree_node_base *param_2,_Rb_tree_node_base *param_3,
               pair<void*_const,class_CHttpDownload*> *param_4)

{
  _Rb_tree_node_base *p_Var1;
  bool bVar2;
  pair<void*_const,class_CHttpDownload*> *ppVar3;
  int *piVar4;
  _Rb_tree_iterator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Nonconst_traits<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>
  *p_Var5;
  _Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> *p_Var6;
  _Rb_tree_node_base *p_Var7;
  _Rb_tree_node_base *p_Var8;
  undefined4 *puVar9;
  bool bVar10;
  pair<int_const_,class_CArenaConnectionList::GroupErrorInfo*> *ppVar11;
  pair<int_const_,class_CArenaConnectionList::GroupErrorInfo*> *ppVar12;
  bool *pbVar13;
  bool local_19;
  _Rb_tree_node_base *local_18;
  _Rb_tree_node_base local_14 [4];
  _Rb_tree_node_base local_10 [4];
  _Rb_tree_node_base local_c [4];
  undefined4 local_8 [2];
  
  ppVar3 = param_4;
  p_Var1 = param_3;
  ppVar11 = *(pair<int_const_,class_CArenaConnectionList::GroupErrorInfo*> **)this;
  if (param_3 != *(_Rb_tree_node_base **)(ppVar11 + 8)) {
    if (param_3 == (_Rb_tree_node_base *)ppVar11) {
      if (*(int *)(*(pair<int_const_,class_CArenaConnectionList::GroupErrorInfo*> **)(ppVar11 + 0xc)
                  + 0x10) < *(int *)param_4) {
        M_insert(this,param_2,(_Rb_tree_node_base *)0x0,
                 *(pair<int_const_,class_CArenaConnectionList::GroupErrorInfo*> **)(ppVar11 + 0xc),
                 (_Rb_tree_node_base *)param_4);
        return param_2;
      }
    }
    else {
      p_Var8 = _Rb_global<bool>::M_decrement(param_3);
      p_Var7 = (_Rb_tree_node_base *)param_4;
      bVar2 = *(int *)param_4 < *(int *)(p_Var1 + 0x10);
      if ((bVar2) && (*(int *)(p_Var8 + 0x10) < *(int *)param_4)) {
        if (*(int *)(p_Var8 + 0xc) == 0) {
          M_insert(this,param_2,(_Rb_tree_node_base *)0x0,
                   (pair<int_const_,class_CArenaConnectionList::GroupErrorInfo*> *)p_Var8,
                   (_Rb_tree_node_base *)param_4);
          return param_2;
        }
        M_insert(this,param_2,p_Var1,
                 (pair<int_const_,class_CArenaConnectionList::GroupErrorInfo*> *)p_Var1,
                 (_Rb_tree_node_base *)param_4);
        return param_2;
      }
      p_Var8 = _Rb_global<bool>::M_increment(p_Var1);
      bVar10 = !bVar2;
      if (!bVar2) {
        bVar10 = *(int *)(p_Var1 + 0x10) < *(int *)p_Var7;
        if (!bVar10) goto LAB_005b71cc;
        if ((p_Var8 == *(_Rb_tree_node_base **)this) || (*(int *)p_Var7 < *(int *)(p_Var8 + 0x10)))
        {
          if (*(int *)(p_Var1 + 0xc) == 0) {
            M_insert(this,param_2,(_Rb_tree_node_base *)0x0,
                     (pair<int_const_,class_CArenaConnectionList::GroupErrorInfo*> *)p_Var1,p_Var7);
            return param_2;
          }
          M_insert(this,param_2,p_Var8,
                   (pair<int_const_,class_CArenaConnectionList::GroupErrorInfo*> *)p_Var8,p_Var7);
          return param_2;
        }
      }
      if (bVar2 == bVar10) {
LAB_005b71cc:
        *(_Rb_tree_node_base **)param_2 = p_Var1;
        return param_2;
      }
    }
    puVar9 = (undefined4 *)
             insert_unique(this,(pair<int_const_,class_CArenaConnectionList::GroupErrorInfo*> *)
                                local_8);
    *(undefined4 *)param_2 = *puVar9;
    return param_2;
  }
  if (*(int *)(this + 4) != 0) {
    if (*(int *)param_4 < *(int *)(param_3 + 0x10)) {
      p_Var6 = _Rb_tree<void*,struct__STL::pair<void*_const,class_CHttpDownload*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CHttpDownload*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CHttpDownload*>_>_>
               ::M_create_node((_Rb_tree<void*,struct__STL::pair<void*_const,class_CHttpDownload*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CHttpDownload*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CHttpDownload*>_>_>
                                *)this,param_4);
      *(_Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> **)(p_Var1 + 8) = p_Var6
      ;
      p_Var7 = *(_Rb_tree_node_base **)this;
      if (p_Var1 == p_Var7) {
        *(_Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> **)(p_Var7 + 4) =
             p_Var6;
        *(_Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> **)
         (*(int *)this + 0xc) = p_Var6;
      }
      else if (p_Var1 == *(_Rb_tree_node_base **)(p_Var7 + 8)) {
        *(_Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> **)(p_Var7 + 8) =
             p_Var6;
      }
      *(_Rb_tree_node_base **)(p_Var6 + 4) = p_Var1;
      *(undefined4 *)(p_Var6 + 8) = 0;
      *(undefined4 *)(p_Var6 + 0xc) = 0;
      _Rb_global<bool>::Rebalance
                ((_Rb_tree_node_base *)p_Var6,(_Rb_tree_node_base **)(*(int *)this + 4));
      *(int *)(this + 4) = *(int *)(this + 4) + 1;
      *(_Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> **)param_2 = p_Var6;
      return param_2;
    }
    if (*(int *)param_4 <= *(int *)(param_3 + 0x10)) {
      *(_Rb_tree_node_base **)param_2 = param_3;
      return param_2;
    }
    p_Var7 = _Rb_global<bool>::M_increment(param_3);
    ppVar11 = *(pair<int_const_,class_CArenaConnectionList::GroupErrorInfo*> **)this;
    if (p_Var7 == (_Rb_tree_node_base *)ppVar11) {
      if (p_Var1 == (_Rb_tree_node_base *)ppVar11) {
        p_Var6 = _Rb_tree<void*,struct__STL::pair<void*_const,class_CHttpDownload*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CHttpDownload*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CHttpDownload*>_>_>
                 ::M_create_node((_Rb_tree<void*,struct__STL::pair<void*_const,class_CHttpDownload*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CHttpDownload*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CHttpDownload*>_>_>
                                  *)this,ppVar3);
        *(_Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> **)(p_Var1 + 8) =
             p_Var6;
        p_Var7 = *(_Rb_tree_node_base **)this;
        if (p_Var1 == p_Var7) {
          *(_Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> **)(p_Var7 + 4) =
               p_Var6;
          *(_Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> **)
           (*(int *)this + 0xc) = p_Var6;
        }
        else if (p_Var1 == *(_Rb_tree_node_base **)(p_Var7 + 8)) {
          *(_Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> **)(p_Var7 + 8) =
               p_Var6;
        }
      }
      else {
        p_Var6 = _Rb_tree<void*,struct__STL::pair<void*_const,class_CHttpDownload*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CHttpDownload*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CHttpDownload*>_>_>
                 ::M_create_node((_Rb_tree<void*,struct__STL::pair<void*_const,class_CHttpDownload*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CHttpDownload*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CHttpDownload*>_>_>
                                  *)this,ppVar3);
        *(_Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> **)(p_Var1 + 0xc) =
             p_Var6;
        if (p_Var1 == *(_Rb_tree_node_base **)(*(int *)this + 0xc)) {
          *(_Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> **)
           (*(int *)this + 0xc) = p_Var6;
        }
      }
      *(_Rb_tree_node_base **)((_Rb_tree_node_base *)p_Var6 + 4) = p_Var1;
      *(undefined4 *)((_Rb_tree_node_base *)p_Var6 + 8) = 0;
      *(undefined4 *)((_Rb_tree_node_base *)p_Var6 + 0xc) = 0;
      _Rb_global<bool>::Rebalance
                ((_Rb_tree_node_base *)p_Var6,(_Rb_tree_node_base **)(*(int *)this + 4));
      *(int *)(this + 4) = *(int *)(this + 4) + 1;
      *(_Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> **)param_2 = p_Var6;
      return param_2;
    }
    if (*(int *)ppVar3 < *(int *)(p_Var7 + 0x10)) {
      if (*(int *)(p_Var1 + 0xc) == 0) {
        if (p_Var1 == (_Rb_tree_node_base *)ppVar11) {
          p_Var6 = _Rb_tree<void*,struct__STL::pair<void*_const,class_CHttpDownload*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CHttpDownload*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CHttpDownload*>_>_>
                   ::M_create_node((_Rb_tree<void*,struct__STL::pair<void*_const,class_CHttpDownload*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CHttpDownload*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CHttpDownload*>_>_>
                                    *)this,ppVar3);
          *(_Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> **)(p_Var1 + 8) =
               p_Var6;
          p_Var7 = *(_Rb_tree_node_base **)this;
          if (p_Var1 == p_Var7) {
            *(_Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> **)(p_Var7 + 4) =
                 p_Var6;
            *(_Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> **)
             (*(int *)this + 0xc) = p_Var6;
          }
          else if (p_Var1 == *(_Rb_tree_node_base **)(p_Var7 + 8)) {
            *(_Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> **)(p_Var7 + 8) =
                 p_Var6;
          }
        }
        else {
          p_Var6 = _Rb_tree<void*,struct__STL::pair<void*_const,class_CHttpDownload*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CHttpDownload*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CHttpDownload*>_>_>
                   ::M_create_node((_Rb_tree<void*,struct__STL::pair<void*_const,class_CHttpDownload*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CHttpDownload*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CHttpDownload*>_>_>
                                    *)this,ppVar3);
          *(_Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> **)(p_Var1 + 0xc) =
               p_Var6;
          if (p_Var1 == *(_Rb_tree_node_base **)(*(int *)this + 0xc)) {
            *(_Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> **)
             (*(int *)this + 0xc) = p_Var6;
          }
        }
        *(_Rb_tree_node_base **)((_Rb_tree_node_base *)p_Var6 + 4) = p_Var1;
        *(undefined4 *)((_Rb_tree_node_base *)p_Var6 + 8) = 0;
        *(undefined4 *)((_Rb_tree_node_base *)p_Var6 + 0xc) = 0;
        _Rb_global<bool>::Rebalance
                  ((_Rb_tree_node_base *)p_Var6,(_Rb_tree_node_base **)(*(int *)this + 4));
        *(int *)(this + 4) = *(int *)(this + 4) + 1;
        *(_Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> **)param_2 = p_Var6;
        return param_2;
      }
      p_Var6 = _Rb_tree<void*,struct__STL::pair<void*_const,class_CHttpDownload*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CHttpDownload*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CHttpDownload*>_>_>
               ::M_create_node((_Rb_tree<void*,struct__STL::pair<void*_const,class_CHttpDownload*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CHttpDownload*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CHttpDownload*>_>_>
                                *)this,ppVar3);
      *(_Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> **)(p_Var7 + 8) = p_Var6
      ;
      p_Var1 = *(_Rb_tree_node_base **)this;
      if (p_Var7 == p_Var1) {
        *(_Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> **)(p_Var1 + 4) =
             p_Var6;
        *(_Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> **)
         (*(int *)this + 0xc) = p_Var6;
      }
      else if (p_Var7 == *(_Rb_tree_node_base **)(p_Var1 + 8)) {
        *(_Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> **)(p_Var1 + 8) =
             p_Var6;
      }
      *(_Rb_tree_node_base **)(p_Var6 + 4) = p_Var7;
      *(undefined4 *)(p_Var6 + 8) = 0;
      *(undefined4 *)(p_Var6 + 0xc) = 0;
      _Rb_global<bool>::Rebalance
                ((_Rb_tree_node_base *)p_Var6,(_Rb_tree_node_base **)(*(int *)this + 4));
      *(int *)(this + 4) = *(int *)(this + 4) + 1;
      *(_Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> **)param_2 = p_Var6;
      return param_2;
    }
    bVar2 = true;
    ppVar12 = *(pair<int_const_,class_CArenaConnectionList::GroupErrorInfo*> **)(ppVar11 + 4);
    while (ppVar12 != (pair<int_const_,class_CArenaConnectionList::GroupErrorInfo*> *)0x0) {
      bVar2 = *(int *)ppVar3 < *(int *)(ppVar12 + 0x10);
      ppVar11 = ppVar12;
      if (bVar2) {
        ppVar12 = *(pair<int_const_,class_CArenaConnectionList::GroupErrorInfo*> **)(ppVar12 + 8);
      }
      else {
        ppVar12 = *(pair<int_const_,class_CArenaConnectionList::GroupErrorInfo*> **)(ppVar12 + 0xc);
      }
    }
    local_18 = (_Rb_tree_node_base *)ppVar11;
    if (bVar2) {
      piVar4 = (int *)map<void*,class_PKCAlgorithm*,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_PKCAlgorithm*>_>_>
                      ::begin((map<void*,class_PKCAlgorithm*,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_PKCAlgorithm*>_>_>
                               *)this);
      if (local_18 == (_Rb_tree_node_base *)*piVar4) {
        pbVar13 = (bool *)&param_4;
        param_4 = (pair<void*_const,class_CHttpDownload*> *)CONCAT31(param_4._1_3_,1);
        p_Var5 = (_Rb_tree_iterator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Nonconst_traits<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>
                  *)M_insert(this,local_10,(_Rb_tree_node_base *)0x0,ppVar11,
                             (_Rb_tree_node_base *)ppVar3);
        pair<struct__STL::_Rb_tree_iterator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Nonconst_traits<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>,bool>
        ::
        pair<struct__STL::_Rb_tree_iterator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Nonconst_traits<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>,bool>
                  ((pair<struct__STL::_Rb_tree_iterator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Nonconst_traits<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>,bool>
                    *)local_8,p_Var5,pbVar13);
        *(undefined4 *)param_2 = local_8[0];
        return param_2;
      }
      local_18 = _Rb_global<bool>::M_decrement(local_18);
    }
    if (*(int *)((pair<int_const_,class_CArenaConnectionList::GroupErrorInfo*> *)local_18 + 0x10) <
        *(int *)ppVar3) {
      pbVar13 = (bool *)&param_3;
      param_3 = (_Rb_tree_node_base *)CONCAT31(param_3._1_3_,1);
      p_Var5 = (_Rb_tree_iterator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Nonconst_traits<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>
                *)M_insert(this,local_14,(_Rb_tree_node_base *)0x0,ppVar11,
                           (_Rb_tree_node_base *)ppVar3);
      pair<struct__STL::_Rb_tree_iterator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Nonconst_traits<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>,bool>
      ::
      pair<struct__STL::_Rb_tree_iterator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Nonconst_traits<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>,bool>
                ((pair<struct__STL::_Rb_tree_iterator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Nonconst_traits<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>,bool>
                  *)local_8,p_Var5,pbVar13);
      *(undefined4 *)param_2 = local_8[0];
      return param_2;
    }
    local_19 = false;
    pair<struct__STL::_Rb_tree_iterator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Nonconst_traits<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>,bool>
    ::
    pair<struct__STL::_Rb_tree_iterator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Nonconst_traits<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>,bool>
              ((pair<struct__STL::_Rb_tree_iterator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Nonconst_traits<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>,bool>
                *)local_8,
               (_Rb_tree_iterator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Nonconst_traits<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>
                *)&local_18,&local_19);
    *(undefined4 *)param_2 = local_8[0];
    return param_2;
  }
  ppVar12 = *(pair<int_const_,class_CArenaConnectionList::GroupErrorInfo*> **)(ppVar11 + 4);
  bVar2 = true;
  if (ppVar12 != (pair<int_const_,class_CArenaConnectionList::GroupErrorInfo*> *)0x0) {
    do {
      ppVar11 = ppVar12;
      bVar2 = *(int *)param_4 < *(int *)(ppVar11 + 0x10);
      if (bVar2) {
        ppVar12 = *(pair<int_const_,class_CArenaConnectionList::GroupErrorInfo*> **)(ppVar11 + 8);
      }
      else {
        ppVar12 = *(pair<int_const_,class_CArenaConnectionList::GroupErrorInfo*> **)(ppVar11 + 0xc);
      }
    } while (ppVar12 != (pair<int_const_,class_CArenaConnectionList::GroupErrorInfo*> *)0x0);
  }
  local_18 = (_Rb_tree_node_base *)ppVar11;
  if (bVar2) {
    piVar4 = (int *)map<void*,class_PKCAlgorithm*,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_PKCAlgorithm*>_>_>
                    ::begin((map<void*,class_PKCAlgorithm*,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_PKCAlgorithm*>_>_>
                             *)this);
    if (local_18 == (_Rb_tree_node_base *)*piVar4) {
      pbVar13 = (bool *)&param_4;
      param_4 = (pair<void*_const,class_CHttpDownload*> *)CONCAT31(param_4._1_3_,1);
      p_Var5 = (_Rb_tree_iterator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Nonconst_traits<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>
                *)M_insert(this,local_10,(_Rb_tree_node_base *)ppVar12,ppVar11,
                           (_Rb_tree_node_base *)ppVar3);
      goto LAB_005b6ddd;
    }
    local_18 = _Rb_global<bool>::M_decrement(local_18);
  }
  if (*(int *)(local_18 + 0x10) < *(int *)ppVar3) {
    pbVar13 = (bool *)&param_3;
    param_3 = (_Rb_tree_node_base *)CONCAT31(param_3._1_3_,1);
    p_Var5 = (_Rb_tree_iterator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Nonconst_traits<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>
              *)M_insert(this,local_c,(_Rb_tree_node_base *)ppVar12,ppVar11,
                         (_Rb_tree_node_base *)ppVar3);
  }
  else {
    pbVar13 = &local_19;
    p_Var5 = (_Rb_tree_iterator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Nonconst_traits<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>
              *)&local_18;
    local_19 = false;
  }
LAB_005b6ddd:
  pair<struct__STL::_Rb_tree_iterator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Nonconst_traits<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>,bool>
  ::
  pair<struct__STL::_Rb_tree_iterator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Nonconst_traits<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>,bool>
            ((pair<struct__STL::_Rb_tree_iterator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Nonconst_traits<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>,bool>
              *)local_8,p_Var5,pbVar13);
  *(undefined4 *)param_2 = local_8[0];
  return param_2;
}




/* from: libgsclient:GSArenaConnection.cpp
   addr: 005B7200 */

_Rb_tree_node_base * __thiscall
_STL::
_Rb_tree<int,struct__STL::pair<int_const_,struct_stArenaInfo>,struct__STL::_Select1st<struct__STL::pair<int_const_,struct_stArenaInfo>_>,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,struct_stArenaInfo>_>_>
::insert_unique(_Rb_tree<int,struct__STL::pair<int_const_,struct_stArenaInfo>,struct__STL::_Select1st<struct__STL::pair<int_const_,struct_stArenaInfo>_>,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,struct_stArenaInfo>_>_>
                *this,_Rb_tree_node_base *param_2,_Rb_tree_node_base *param_3,
               pair<int_const_,struct_stArenaInfo> *param_4)

{
  _Rb_tree_node_base *p_Var1;
  bool bVar2;
  pair<int_const_,struct_stArenaInfo> *ppVar3;
  int *piVar4;
  _Rb_tree_iterator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Nonconst_traits<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>
  *p_Var5;
  _Rb_tree_node<struct__STL::pair<int_const_,struct_stArenaInfo>_> *p_Var6;
  _Rb_tree_node_base *p_Var7;
  _Rb_tree_node_base *p_Var8;
  undefined4 *puVar9;
  bool bVar10;
  pair<int_const_,struct_stArenaInfo> *ppVar11;
  pair<int_const_,struct_stArenaInfo> *ppVar12;
  bool *pbVar13;
  bool local_19;
  _Rb_tree_node_base *local_18;
  _Rb_tree_node_base local_14 [4];
  _Rb_tree_node_base local_10 [4];
  _Rb_tree_node_base local_c [4];
  undefined4 local_8 [2];
  
  ppVar3 = param_4;
  p_Var1 = param_3;
  ppVar11 = *(pair<int_const_,struct_stArenaInfo> **)this;
  if (param_3 != *(_Rb_tree_node_base **)(ppVar11 + 8)) {
    if (param_3 == (_Rb_tree_node_base *)ppVar11) {
      if (*(int *)(*(pair<int_const_,struct_stArenaInfo> **)(ppVar11 + 0xc) + 0x10) <
          *(int *)param_4) {
        M_insert(this,param_2,(_Rb_tree_node_base *)0x0,
                 *(pair<int_const_,struct_stArenaInfo> **)(ppVar11 + 0xc),
                 (_Rb_tree_node_base *)param_4);
        return param_2;
      }
    }
    else {
      p_Var8 = _Rb_global<bool>::M_decrement(param_3);
      p_Var7 = (_Rb_tree_node_base *)param_4;
      bVar2 = *(int *)param_4 < *(int *)(p_Var1 + 0x10);
      if ((bVar2) && (*(int *)(p_Var8 + 0x10) < *(int *)param_4)) {
        if (*(int *)(p_Var8 + 0xc) == 0) {
          M_insert(this,param_2,(_Rb_tree_node_base *)0x0,
                   (pair<int_const_,struct_stArenaInfo> *)p_Var8,(_Rb_tree_node_base *)param_4);
          return param_2;
        }
        M_insert(this,param_2,p_Var1,(pair<int_const_,struct_stArenaInfo> *)p_Var1,
                 (_Rb_tree_node_base *)param_4);
        return param_2;
      }
      p_Var8 = _Rb_global<bool>::M_increment(p_Var1);
      bVar10 = !bVar2;
      if (!bVar2) {
        bVar10 = *(int *)(p_Var1 + 0x10) < *(int *)p_Var7;
        if (!bVar10) goto LAB_005b76bc;
        if ((p_Var8 == *(_Rb_tree_node_base **)this) || (*(int *)p_Var7 < *(int *)(p_Var8 + 0x10)))
        {
          if (*(int *)(p_Var1 + 0xc) == 0) {
            M_insert(this,param_2,(_Rb_tree_node_base *)0x0,
                     (pair<int_const_,struct_stArenaInfo> *)p_Var1,p_Var7);
            return param_2;
          }
          M_insert(this,param_2,p_Var8,(pair<int_const_,struct_stArenaInfo> *)p_Var8,p_Var7);
          return param_2;
        }
      }
      if (bVar2 == bVar10) {
LAB_005b76bc:
        *(_Rb_tree_node_base **)param_2 = p_Var1;
        return param_2;
      }
    }
    puVar9 = (undefined4 *)insert_unique(this,(pair<int_const_,struct_stArenaInfo> *)local_8);
    *(undefined4 *)param_2 = *puVar9;
    return param_2;
  }
  if (*(int *)(this + 4) != 0) {
    if (*(int *)param_4 < *(int *)(param_3 + 0x10)) {
      p_Var6 = M_create_node(this,param_4);
      *(_Rb_tree_node<struct__STL::pair<int_const_,struct_stArenaInfo>_> **)(p_Var1 + 8) = p_Var6;
      p_Var7 = *(_Rb_tree_node_base **)this;
      if (p_Var1 == p_Var7) {
        *(_Rb_tree_node<struct__STL::pair<int_const_,struct_stArenaInfo>_> **)(p_Var7 + 4) = p_Var6;
        *(_Rb_tree_node<struct__STL::pair<int_const_,struct_stArenaInfo>_> **)(*(int *)this + 0xc) =
             p_Var6;
      }
      else if (p_Var1 == *(_Rb_tree_node_base **)(p_Var7 + 8)) {
        *(_Rb_tree_node<struct__STL::pair<int_const_,struct_stArenaInfo>_> **)(p_Var7 + 8) = p_Var6;
      }
      *(_Rb_tree_node_base **)(p_Var6 + 4) = p_Var1;
      *(undefined4 *)(p_Var6 + 8) = 0;
      *(undefined4 *)(p_Var6 + 0xc) = 0;
      _Rb_global<bool>::Rebalance
                ((_Rb_tree_node_base *)p_Var6,(_Rb_tree_node_base **)(*(int *)this + 4));
      *(int *)(this + 4) = *(int *)(this + 4) + 1;
      *(_Rb_tree_node<struct__STL::pair<int_const_,struct_stArenaInfo>_> **)param_2 = p_Var6;
      return param_2;
    }
    if (*(int *)param_4 <= *(int *)(param_3 + 0x10)) {
      *(_Rb_tree_node_base **)param_2 = param_3;
      return param_2;
    }
    p_Var7 = _Rb_global<bool>::M_increment(param_3);
    ppVar11 = *(pair<int_const_,struct_stArenaInfo> **)this;
    if (p_Var7 == (_Rb_tree_node_base *)ppVar11) {
      if (p_Var1 == (_Rb_tree_node_base *)ppVar11) {
        p_Var6 = M_create_node(this,ppVar3);
        *(_Rb_tree_node<struct__STL::pair<int_const_,struct_stArenaInfo>_> **)(p_Var1 + 8) = p_Var6;
        p_Var7 = *(_Rb_tree_node_base **)this;
        if (p_Var1 == p_Var7) {
          *(_Rb_tree_node<struct__STL::pair<int_const_,struct_stArenaInfo>_> **)(p_Var7 + 4) =
               p_Var6;
          *(_Rb_tree_node<struct__STL::pair<int_const_,struct_stArenaInfo>_> **)(*(int *)this + 0xc)
               = p_Var6;
        }
        else if (p_Var1 == *(_Rb_tree_node_base **)(p_Var7 + 8)) {
          *(_Rb_tree_node<struct__STL::pair<int_const_,struct_stArenaInfo>_> **)(p_Var7 + 8) =
               p_Var6;
        }
      }
      else {
        p_Var6 = M_create_node(this,ppVar3);
        *(_Rb_tree_node<struct__STL::pair<int_const_,struct_stArenaInfo>_> **)(p_Var1 + 0xc) =
             p_Var6;
        if (p_Var1 == *(_Rb_tree_node_base **)(*(int *)this + 0xc)) {
          *(_Rb_tree_node<struct__STL::pair<int_const_,struct_stArenaInfo>_> **)(*(int *)this + 0xc)
               = p_Var6;
        }
      }
      *(_Rb_tree_node_base **)((_Rb_tree_node_base *)p_Var6 + 4) = p_Var1;
      *(undefined4 *)((_Rb_tree_node_base *)p_Var6 + 8) = 0;
      *(undefined4 *)((_Rb_tree_node_base *)p_Var6 + 0xc) = 0;
      _Rb_global<bool>::Rebalance
                ((_Rb_tree_node_base *)p_Var6,(_Rb_tree_node_base **)(*(int *)this + 4));
      *(int *)(this + 4) = *(int *)(this + 4) + 1;
      *(_Rb_tree_node<struct__STL::pair<int_const_,struct_stArenaInfo>_> **)param_2 = p_Var6;
      return param_2;
    }
    if (*(int *)ppVar3 < *(int *)(p_Var7 + 0x10)) {
      if (*(int *)(p_Var1 + 0xc) == 0) {
        if (p_Var1 == (_Rb_tree_node_base *)ppVar11) {
          p_Var6 = M_create_node(this,ppVar3);
          *(_Rb_tree_node<struct__STL::pair<int_const_,struct_stArenaInfo>_> **)(p_Var1 + 8) =
               p_Var6;
          p_Var7 = *(_Rb_tree_node_base **)this;
          if (p_Var1 == p_Var7) {
            *(_Rb_tree_node<struct__STL::pair<int_const_,struct_stArenaInfo>_> **)(p_Var7 + 4) =
                 p_Var6;
            *(_Rb_tree_node<struct__STL::pair<int_const_,struct_stArenaInfo>_> **)
             (*(int *)this + 0xc) = p_Var6;
          }
          else if (p_Var1 == *(_Rb_tree_node_base **)(p_Var7 + 8)) {
            *(_Rb_tree_node<struct__STL::pair<int_const_,struct_stArenaInfo>_> **)(p_Var7 + 8) =
                 p_Var6;
          }
        }
        else {
          p_Var6 = M_create_node(this,ppVar3);
          *(_Rb_tree_node<struct__STL::pair<int_const_,struct_stArenaInfo>_> **)(p_Var1 + 0xc) =
               p_Var6;
          if (p_Var1 == *(_Rb_tree_node_base **)(*(int *)this + 0xc)) {
            *(_Rb_tree_node<struct__STL::pair<int_const_,struct_stArenaInfo>_> **)
             (*(int *)this + 0xc) = p_Var6;
          }
        }
        *(_Rb_tree_node_base **)((_Rb_tree_node_base *)p_Var6 + 4) = p_Var1;
        *(undefined4 *)((_Rb_tree_node_base *)p_Var6 + 8) = 0;
        *(undefined4 *)((_Rb_tree_node_base *)p_Var6 + 0xc) = 0;
        _Rb_global<bool>::Rebalance
                  ((_Rb_tree_node_base *)p_Var6,(_Rb_tree_node_base **)(*(int *)this + 4));
        *(int *)(this + 4) = *(int *)(this + 4) + 1;
        *(_Rb_tree_node<struct__STL::pair<int_const_,struct_stArenaInfo>_> **)param_2 = p_Var6;
        return param_2;
      }
      p_Var6 = M_create_node(this,ppVar3);
      *(_Rb_tree_node<struct__STL::pair<int_const_,struct_stArenaInfo>_> **)(p_Var7 + 8) = p_Var6;
      p_Var1 = *(_Rb_tree_node_base **)this;
      if (p_Var7 == p_Var1) {
        *(_Rb_tree_node<struct__STL::pair<int_const_,struct_stArenaInfo>_> **)(p_Var1 + 4) = p_Var6;
        *(_Rb_tree_node<struct__STL::pair<int_const_,struct_stArenaInfo>_> **)(*(int *)this + 0xc) =
             p_Var6;
      }
      else if (p_Var7 == *(_Rb_tree_node_base **)(p_Var1 + 8)) {
        *(_Rb_tree_node<struct__STL::pair<int_const_,struct_stArenaInfo>_> **)(p_Var1 + 8) = p_Var6;
      }
      *(_Rb_tree_node_base **)(p_Var6 + 4) = p_Var7;
      *(undefined4 *)(p_Var6 + 8) = 0;
      *(undefined4 *)(p_Var6 + 0xc) = 0;
      _Rb_global<bool>::Rebalance
                ((_Rb_tree_node_base *)p_Var6,(_Rb_tree_node_base **)(*(int *)this + 4));
      *(int *)(this + 4) = *(int *)(this + 4) + 1;
      *(_Rb_tree_node<struct__STL::pair<int_const_,struct_stArenaInfo>_> **)param_2 = p_Var6;
      return param_2;
    }
    bVar2 = true;
    ppVar12 = *(pair<int_const_,struct_stArenaInfo> **)(ppVar11 + 4);
    while (ppVar12 != (pair<int_const_,struct_stArenaInfo> *)0x0) {
      bVar2 = *(int *)ppVar3 < *(int *)(ppVar12 + 0x10);
      ppVar11 = ppVar12;
      if (bVar2) {
        ppVar12 = *(pair<int_const_,struct_stArenaInfo> **)(ppVar12 + 8);
      }
      else {
        ppVar12 = *(pair<int_const_,struct_stArenaInfo> **)(ppVar12 + 0xc);
      }
    }
    local_18 = (_Rb_tree_node_base *)ppVar11;
    if (bVar2) {
      piVar4 = (int *)map<void*,class_PKCAlgorithm*,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_PKCAlgorithm*>_>_>
                      ::begin((map<void*,class_PKCAlgorithm*,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_PKCAlgorithm*>_>_>
                               *)this);
      if (local_18 == (_Rb_tree_node_base *)*piVar4) {
        pbVar13 = (bool *)&param_4;
        param_4 = (pair<int_const_,struct_stArenaInfo> *)CONCAT31(param_4._1_3_,1);
        p_Var5 = (_Rb_tree_iterator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Nonconst_traits<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>
                  *)M_insert(this,local_10,(_Rb_tree_node_base *)0x0,ppVar11,
                             (_Rb_tree_node_base *)ppVar3);
        pair<struct__STL::_Rb_tree_iterator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Nonconst_traits<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>,bool>
        ::
        pair<struct__STL::_Rb_tree_iterator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Nonconst_traits<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>,bool>
                  ((pair<struct__STL::_Rb_tree_iterator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Nonconst_traits<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>,bool>
                    *)local_8,p_Var5,pbVar13);
        *(undefined4 *)param_2 = local_8[0];
        return param_2;
      }
      local_18 = _Rb_global<bool>::M_decrement(local_18);
    }
    if (*(int *)((pair<int_const_,struct_stArenaInfo> *)local_18 + 0x10) < *(int *)ppVar3) {
      pbVar13 = (bool *)&param_3;
      param_3 = (_Rb_tree_node_base *)CONCAT31(param_3._1_3_,1);
      p_Var5 = (_Rb_tree_iterator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Nonconst_traits<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>
                *)M_insert(this,local_14,(_Rb_tree_node_base *)0x0,ppVar11,
                           (_Rb_tree_node_base *)ppVar3);
      pair<struct__STL::_Rb_tree_iterator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Nonconst_traits<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>,bool>
      ::
      pair<struct__STL::_Rb_tree_iterator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Nonconst_traits<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>,bool>
                ((pair<struct__STL::_Rb_tree_iterator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Nonconst_traits<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>,bool>
                  *)local_8,p_Var5,pbVar13);
      *(undefined4 *)param_2 = local_8[0];
      return param_2;
    }
    local_19 = false;
    pair<struct__STL::_Rb_tree_iterator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Nonconst_traits<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>,bool>
    ::
    pair<struct__STL::_Rb_tree_iterator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Nonconst_traits<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>,bool>
              ((pair<struct__STL::_Rb_tree_iterator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Nonconst_traits<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>,bool>
                *)local_8,
               (_Rb_tree_iterator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Nonconst_traits<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>
                *)&local_18,&local_19);
    *(undefined4 *)param_2 = local_8[0];
    return param_2;
  }
  ppVar12 = *(pair<int_const_,struct_stArenaInfo> **)(ppVar11 + 4);
  bVar2 = true;
  if (ppVar12 != (pair<int_const_,struct_stArenaInfo> *)0x0) {
    do {
      ppVar11 = ppVar12;
      bVar2 = *(int *)param_4 < *(int *)(ppVar11 + 0x10);
      if (bVar2) {
        ppVar12 = *(pair<int_const_,struct_stArenaInfo> **)(ppVar11 + 8);
      }
      else {
        ppVar12 = *(pair<int_const_,struct_stArenaInfo> **)(ppVar11 + 0xc);
      }
    } while (ppVar12 != (pair<int_const_,struct_stArenaInfo> *)0x0);
  }
  local_18 = (_Rb_tree_node_base *)ppVar11;
  if (bVar2) {
    piVar4 = (int *)map<void*,class_PKCAlgorithm*,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_PKCAlgorithm*>_>_>
                    ::begin((map<void*,class_PKCAlgorithm*,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_PKCAlgorithm*>_>_>
                             *)this);
    if (local_18 == (_Rb_tree_node_base *)*piVar4) {
      pbVar13 = (bool *)&param_4;
      param_4 = (pair<int_const_,struct_stArenaInfo> *)CONCAT31(param_4._1_3_,1);
      p_Var5 = (_Rb_tree_iterator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Nonconst_traits<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>
                *)M_insert(this,local_10,(_Rb_tree_node_base *)ppVar12,ppVar11,
                           (_Rb_tree_node_base *)ppVar3);
      goto LAB_005b72cd;
    }
    local_18 = _Rb_global<bool>::M_decrement(local_18);
  }
  if (*(int *)(local_18 + 0x10) < *(int *)ppVar3) {
    pbVar13 = (bool *)&param_3;
    param_3 = (_Rb_tree_node_base *)CONCAT31(param_3._1_3_,1);
    p_Var5 = (_Rb_tree_iterator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Nonconst_traits<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>
              *)M_insert(this,local_c,(_Rb_tree_node_base *)ppVar12,ppVar11,
                         (_Rb_tree_node_base *)ppVar3);
  }
  else {
    pbVar13 = &local_19;
    p_Var5 = (_Rb_tree_iterator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Nonconst_traits<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>
              *)&local_18;
    local_19 = false;
  }
LAB_005b72cd:
  pair<struct__STL::_Rb_tree_iterator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Nonconst_traits<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>,bool>
  ::
  pair<struct__STL::_Rb_tree_iterator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Nonconst_traits<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>,bool>
            ((pair<struct__STL::_Rb_tree_iterator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Nonconst_traits<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>,bool>
              *)local_8,p_Var5,pbVar13);
  *(undefined4 *)param_2 = local_8[0];
  return param_2;
}




/* from: libgsclient:GSArenaConnection.cpp
   addr: 005B76F0
   addr: 005B76F0 */

void __thiscall
_STL::
_Rb_tree<int,struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Select1st<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>
::find(_Rb_tree<int,struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Select1st<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>
       *this,int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *in_stack_00000008;
  
  iVar1 = *(int *)this;
  iVar4 = iVar1;
  if (*(int *)(iVar1 + 4) != 0) {
    iVar2 = *(int *)(iVar1 + 4);
    do {
      if (*(int *)(iVar2 + 0x10) < *in_stack_00000008) {
        iVar3 = *(int *)(iVar2 + 0xc);
      }
      else {
        iVar3 = *(int *)(iVar2 + 8);
        iVar4 = iVar2;
      }
      iVar2 = iVar3;
    } while (iVar3 != 0);
  }
  if ((iVar4 != iVar1) && (*(int *)(iVar4 + 0x10) <= *in_stack_00000008)) {
    *param_1 = iVar4;
    return;
  }
  *param_1 = iVar1;
  return;
}




/* from: libgsclient:GSArenaConnection.cpp
   addr: 005B7740 */

_Rb_tree_node<int> * __thiscall
_STL::
_Rb_tree<int,int,struct__STL::_Identity<int>,struct__STL::less<int>,class_ExtAlloc::Allocator<int>_>
::M_create_node(_Rb_tree<int,int,struct__STL::_Identity<int>,struct__STL::less<int>,class_ExtAlloc::Allocator<int>_>
                *this,int *param_1)

{
  _Rb_tree_node<int> *p_Var1;
  
  p_Var1 = (_Rb_tree_node<int> *)ExtAlloc_Malloc_4(0x14);
  if (p_Var1 + 0x10 != (_Rb_tree_node<int> *)0x0) {
    *(int *)(p_Var1 + 0x10) = *param_1;
  }
  return p_Var1;
}




/* from: libgsclient:GSArenaConnection.cpp
   addr: 005B7760 */

void __thiscall
_STL::
_Rb_tree<int,struct__STL::pair<int_const_,class_CArenaConnectionList::GroupErrorInfo*>,struct__STL::_Select1st<struct__STL::pair<int_const_,class_CArenaConnectionList::GroupErrorInfo*>_>,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,class_CArenaConnectionList::GroupErrorInfo*>_>_>
::M_insert(_Rb_tree<int,struct__STL::pair<int_const_,class_CArenaConnectionList::GroupErrorInfo*>,struct__STL::_Select1st<struct__STL::pair<int_const_,class_CArenaConnectionList::GroupErrorInfo*>_>,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,class_CArenaConnectionList::GroupErrorInfo*>_>_>
           *this,_Rb_tree_node_base *param_1,_Rb_tree_node_base *param_2,
          pair<int_const_,class_CArenaConnectionList::GroupErrorInfo*> *param_3,
          _Rb_tree_node_base *param_4)

{
  pair<int_const_,class_CArenaConnectionList::GroupErrorInfo*> *ppVar1;
  int iVar2;
  _Rb_tree_node_base *p_Var3;
  _Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> *p_Var4;
  _Rb_tree_node_base *p_Var5;
  _Rb_tree_node_base *p_Var6;
  _Rb_tree_node_base **pp_Var7;
  int in_stack_00000014;
  
  if ((param_3 == *(pair<int_const_,class_CArenaConnectionList::GroupErrorInfo*> **)this) ||
     ((in_stack_00000014 == 0 &&
      ((param_2 != (_Rb_tree_node_base *)0x0 || (*(int *)param_4 < *(int *)(param_3 + 0x10))))))) {
    p_Var4 = _Rb_tree<void*,struct__STL::pair<void*_const,class_CHttpDownload*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CHttpDownload*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CHttpDownload*>_>_>
             ::M_create_node((_Rb_tree<void*,struct__STL::pair<void*_const,class_CHttpDownload*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CHttpDownload*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CHttpDownload*>_>_>
                              *)this,(pair<void*_const,class_CHttpDownload*> *)param_4);
    *(_Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> **)(param_3 + 8) = p_Var4;
    ppVar1 = *(pair<int_const_,class_CArenaConnectionList::GroupErrorInfo*> **)this;
    if (param_3 == ppVar1) {
      *(_Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> **)(ppVar1 + 4) = p_Var4
      ;
      *(_Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> **)(*(int *)this + 0xc)
           = p_Var4;
    }
    else if (param_3 ==
             *(pair<int_const_,class_CArenaConnectionList::GroupErrorInfo*> **)(ppVar1 + 8)) {
      *(_Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> **)(ppVar1 + 8) = p_Var4
      ;
    }
  }
  else {
    p_Var4 = _Rb_tree<void*,struct__STL::pair<void*_const,class_CHttpDownload*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CHttpDownload*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CHttpDownload*>_>_>
             ::M_create_node((_Rb_tree<void*,struct__STL::pair<void*_const,class_CHttpDownload*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CHttpDownload*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CHttpDownload*>_>_>
                              *)this,(pair<void*_const,class_CHttpDownload*> *)param_4);
    *(_Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> **)(param_3 + 0xc) =
         p_Var4;
    if (param_3 ==
        *(pair<int_const_,class_CArenaConnectionList::GroupErrorInfo*> **)(*(int *)this + 0xc)) {
      *(_Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> **)(*(int *)this + 0xc)
           = p_Var4;
    }
  }
  *(pair<int_const_,class_CArenaConnectionList::GroupErrorInfo*> **)
   ((_Rb_tree_node_base *)p_Var4 + 4) = param_3;
  *(undefined4 *)((_Rb_tree_node_base *)p_Var4 + 8) = 0;
  *(undefined4 *)((_Rb_tree_node_base *)p_Var4 + 0xc) = 0;
  iVar2 = *(int *)this;
  *p_Var4 = (_Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_>)0x0;
  pp_Var7 = (_Rb_tree_node_base **)(iVar2 + 4);
  p_Var6 = (_Rb_tree_node_base *)p_Var4;
  if (p_Var4 != (_Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> *)*pp_Var7) {
    do {
      p_Var3 = *(_Rb_tree_node_base **)(p_Var6 + 4);
      if (*p_Var3 != (_Rb_tree_node_base)0x0) break;
      p_Var5 = *(_Rb_tree_node_base **)(*(int *)(p_Var3 + 4) + 8);
      if (p_Var3 == p_Var5) {
        p_Var5 = *(_Rb_tree_node_base **)(*(int *)(p_Var3 + 4) + 0xc);
        if ((p_Var5 == (_Rb_tree_node_base *)0x0) || (*p_Var5 != (_Rb_tree_node_base)0x0)) {
          if (p_Var6 == *(_Rb_tree_node_base **)(p_Var3 + 0xc)) {
            p_Var6 = *(_Rb_tree_node_base **)(p_Var3 + 0xc);
            *(undefined4 *)(p_Var3 + 0xc) = *(undefined4 *)(p_Var6 + 8);
            if (*(int *)(p_Var6 + 8) != 0) {
              *(_Rb_tree_node_base **)(*(int *)(p_Var6 + 8) + 4) = p_Var3;
            }
            *(undefined4 *)(p_Var6 + 4) = *(undefined4 *)(p_Var3 + 4);
            if (p_Var3 == *pp_Var7) {
              *pp_Var7 = p_Var6;
            }
            else {
              iVar2 = *(int *)(p_Var3 + 4);
              if (p_Var3 == *(_Rb_tree_node_base **)(iVar2 + 8)) {
                *(_Rb_tree_node_base **)(iVar2 + 8) = p_Var6;
              }
              else {
                *(_Rb_tree_node_base **)(iVar2 + 0xc) = p_Var6;
              }
            }
            *(_Rb_tree_node_base **)(p_Var6 + 8) = p_Var3;
            *(_Rb_tree_node_base **)(p_Var3 + 4) = p_Var6;
            p_Var6 = p_Var3;
          }
          **(undefined1 **)(p_Var6 + 4) = 1;
          **(undefined1 **)(*(int *)(p_Var6 + 4) + 4) = 0;
          p_Var3 = *(_Rb_tree_node_base **)(*(int *)(p_Var6 + 4) + 4);
          p_Var5 = *(_Rb_tree_node_base **)(p_Var3 + 8);
          *(undefined4 *)(p_Var3 + 8) = *(undefined4 *)(p_Var5 + 0xc);
          if (*(int *)(p_Var5 + 0xc) != 0) {
            *(_Rb_tree_node_base **)(*(int *)(p_Var5 + 0xc) + 4) = p_Var3;
          }
          *(undefined4 *)(p_Var5 + 4) = *(undefined4 *)(p_Var3 + 4);
          if (p_Var3 == *pp_Var7) {
            *pp_Var7 = p_Var5;
            *(_Rb_tree_node_base **)(p_Var5 + 0xc) = p_Var3;
            *(_Rb_tree_node_base **)(p_Var3 + 4) = p_Var5;
          }
          else {
            iVar2 = *(int *)(p_Var3 + 4);
            if (p_Var3 == *(_Rb_tree_node_base **)(iVar2 + 0xc)) {
              *(_Rb_tree_node_base **)(iVar2 + 0xc) = p_Var5;
              *(_Rb_tree_node_base **)(p_Var5 + 0xc) = p_Var3;
              *(_Rb_tree_node_base **)(p_Var3 + 4) = p_Var5;
            }
            else {
              *(_Rb_tree_node_base **)(iVar2 + 8) = p_Var5;
              *(_Rb_tree_node_base **)(p_Var5 + 0xc) = p_Var3;
              *(_Rb_tree_node_base **)(p_Var3 + 4) = p_Var5;
            }
          }
        }
        else {
LAB_005b780e:
          *p_Var3 = (_Rb_tree_node_base)0x1;
          *p_Var5 = (_Rb_tree_node_base)0x1;
          **(undefined1 **)(*(int *)(p_Var6 + 4) + 4) = 0;
          p_Var6 = *(_Rb_tree_node_base **)(*(int *)(p_Var6 + 4) + 4);
        }
      }
      else {
        if ((p_Var5 != (_Rb_tree_node_base *)0x0) && (*p_Var5 == (_Rb_tree_node_base)0x0))
        goto LAB_005b780e;
        if (p_Var6 == *(_Rb_tree_node_base **)(p_Var3 + 8)) {
          _Rb_global<bool>::Rotate_right(p_Var3,pp_Var7);
          p_Var6 = p_Var3;
        }
        **(undefined1 **)(p_Var6 + 4) = 1;
        **(undefined1 **)(*(int *)(p_Var6 + 4) + 4) = 0;
        _Rb_global<bool>::Rotate_left(*(_Rb_tree_node_base **)(*(int *)(p_Var6 + 4) + 4),pp_Var7);
      }
    } while (p_Var6 != *pp_Var7);
  }
  **pp_Var7 = (_Rb_tree_node_base)0x1;
  *(int *)(this + 4) = *(int *)(this + 4) + 1;
  *(_Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> **)param_1 = p_Var4;
  return;
}




/* from: libgsclient:GSArenaConnection.cpp
   addr: 005B7930 */

pair<int_const_,class_CArenaConnectionList::GroupErrorInfo*> * __thiscall
_STL::
_Rb_tree<int,struct__STL::pair<int_const_,class_CArenaConnectionList::GroupErrorInfo*>,struct__STL::_Select1st<struct__STL::pair<int_const_,class_CArenaConnectionList::GroupErrorInfo*>_>,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,class_CArenaConnectionList::GroupErrorInfo*>_>_>
::insert_unique(_Rb_tree<int,struct__STL::pair<int_const_,class_CArenaConnectionList::GroupErrorInfo*>,struct__STL::_Select1st<struct__STL::pair<int_const_,class_CArenaConnectionList::GroupErrorInfo*>_>,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,class_CArenaConnectionList::GroupErrorInfo*>_>_>
                *this,pair<int_const_,class_CArenaConnectionList::GroupErrorInfo*> *param_1)

{
  _Rb_tree_node_base *p_Var1;
  bool bVar2;
  _Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> *p_Var3;
  _Rb_tree_node_base *p_Var4;
  _Rb_tree_node_base *p_Var5;
  _Rb_tree_node_base *p_Var6;
  pair<void*_const,class_CHttpDownload*> *in_stack_00000008;
  
  bVar2 = true;
  p_Var1 = *(_Rb_tree_node_base **)this;
  p_Var5 = *(_Rb_tree_node_base **)(p_Var1 + 4);
  p_Var6 = p_Var1;
  if (p_Var5 != (_Rb_tree_node_base *)0x0) {
    do {
      p_Var6 = p_Var5;
      bVar2 = *(int *)in_stack_00000008 < *(int *)(p_Var6 + 0x10);
      if (bVar2) {
        p_Var5 = *(_Rb_tree_node_base **)(p_Var6 + 8);
      }
      else {
        p_Var5 = *(_Rb_tree_node_base **)(p_Var6 + 0xc);
      }
    } while (p_Var5 != (_Rb_tree_node_base *)0x0);
  }
  p_Var4 = p_Var6;
  if (bVar2) {
    if (p_Var6 == *(_Rb_tree_node_base **)(p_Var1 + 8)) {
      if (((p_Var6 == p_Var1) || (p_Var5 != (_Rb_tree_node_base *)0x0)) ||
         (*(int *)in_stack_00000008 < *(int *)(p_Var6 + 0x10))) {
        p_Var3 = _Rb_tree<void*,struct__STL::pair<void*_const,class_CHttpDownload*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CHttpDownload*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CHttpDownload*>_>_>
                 ::M_create_node((_Rb_tree<void*,struct__STL::pair<void*_const,class_CHttpDownload*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CHttpDownload*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CHttpDownload*>_>_>
                                  *)this,in_stack_00000008);
        *(_Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> **)(p_Var6 + 8) =
             p_Var3;
        p_Var1 = *(_Rb_tree_node_base **)this;
        if (p_Var6 == p_Var1) {
          *(_Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> **)(p_Var1 + 4) =
               p_Var3;
          *(_Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> **)
           (*(int *)this + 0xc) = p_Var3;
        }
        else if (p_Var6 == *(_Rb_tree_node_base **)(p_Var1 + 8)) {
          *(_Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> **)(p_Var1 + 8) =
               p_Var3;
        }
      }
      else {
        p_Var3 = _Rb_tree<void*,struct__STL::pair<void*_const,class_CHttpDownload*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CHttpDownload*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CHttpDownload*>_>_>
                 ::M_create_node((_Rb_tree<void*,struct__STL::pair<void*_const,class_CHttpDownload*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CHttpDownload*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CHttpDownload*>_>_>
                                  *)this,in_stack_00000008);
        *(_Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> **)(p_Var6 + 0xc) =
             p_Var3;
        if (p_Var6 == *(_Rb_tree_node_base **)(*(int *)this + 0xc)) {
          *(_Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> **)
           (*(int *)this + 0xc) = p_Var3;
        }
      }
      *(_Rb_tree_node_base **)((_Rb_tree_node_base *)p_Var3 + 4) = p_Var6;
      *(undefined4 *)((_Rb_tree_node_base *)p_Var3 + 8) = 0;
      *(undefined4 *)((_Rb_tree_node_base *)p_Var3 + 0xc) = 0;
      _Rb_global<bool>::Rebalance
                ((_Rb_tree_node_base *)p_Var3,(_Rb_tree_node_base **)(*(int *)this + 4));
      *(int *)(this + 4) = *(int *)(this + 4) + 1;
      *(_Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> **)param_1 = p_Var3;
      param_1[4] = (pair<int_const_,class_CArenaConnectionList::GroupErrorInfo*>)0x1;
      return param_1;
    }
    p_Var4 = _Rb_global<bool>::M_decrement(p_Var6);
  }
  if (*(int *)(p_Var4 + 0x10) < *(int *)in_stack_00000008) {
    if (((p_Var6 == *(_Rb_tree_node_base **)this) || (p_Var5 != (_Rb_tree_node_base *)0x0)) ||
       (*(int *)in_stack_00000008 < *(int *)(p_Var6 + 0x10))) {
      p_Var3 = _Rb_tree<void*,struct__STL::pair<void*_const,class_CHttpDownload*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CHttpDownload*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CHttpDownload*>_>_>
               ::M_create_node((_Rb_tree<void*,struct__STL::pair<void*_const,class_CHttpDownload*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CHttpDownload*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CHttpDownload*>_>_>
                                *)this,in_stack_00000008);
      *(_Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> **)(p_Var6 + 8) = p_Var3
      ;
      p_Var1 = *(_Rb_tree_node_base **)this;
      if (p_Var6 == p_Var1) {
        *(_Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> **)(p_Var1 + 4) =
             p_Var3;
        *(_Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> **)
         (*(int *)this + 0xc) = p_Var3;
      }
      else if (p_Var6 == *(_Rb_tree_node_base **)(p_Var1 + 8)) {
        *(_Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> **)(p_Var1 + 8) =
             p_Var3;
      }
    }
    else {
      p_Var3 = _Rb_tree<void*,struct__STL::pair<void*_const,class_CHttpDownload*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CHttpDownload*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CHttpDownload*>_>_>
               ::M_create_node((_Rb_tree<void*,struct__STL::pair<void*_const,class_CHttpDownload*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CHttpDownload*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CHttpDownload*>_>_>
                                *)this,in_stack_00000008);
      *(_Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> **)(p_Var6 + 0xc) =
           p_Var3;
      if (p_Var6 == *(_Rb_tree_node_base **)(*(int *)this + 0xc)) {
        *(_Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> **)
         (*(int *)this + 0xc) = p_Var3;
      }
    }
    *(_Rb_tree_node_base **)((_Rb_tree_node_base *)p_Var3 + 4) = p_Var6;
    *(undefined4 *)((_Rb_tree_node_base *)p_Var3 + 8) = 0;
    *(undefined4 *)((_Rb_tree_node_base *)p_Var3 + 0xc) = 0;
    _Rb_global<bool>::Rebalance
              ((_Rb_tree_node_base *)p_Var3,(_Rb_tree_node_base **)(*(int *)this + 4));
    *(int *)(this + 4) = *(int *)(this + 4) + 1;
    *(_Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> **)param_1 = p_Var3;
    param_1[4] = (pair<int_const_,class_CArenaConnectionList::GroupErrorInfo*>)0x1;
    return param_1;
  }
  *(_Rb_tree_node_base **)param_1 = p_Var4;
  param_1[4] = (pair<int_const_,class_CArenaConnectionList::GroupErrorInfo*>)0x0;
  return param_1;
}




/* from: libgsclient:GSArenaConnection.cpp
   addr: 005B7AA0 */

void __thiscall
_STL::
_Rb_tree<int,struct__STL::pair<int_const_,struct_stArenaInfo>,struct__STL::_Select1st<struct__STL::pair<int_const_,struct_stArenaInfo>_>,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,struct_stArenaInfo>_>_>
::M_insert(_Rb_tree<int,struct__STL::pair<int_const_,struct_stArenaInfo>,struct__STL::_Select1st<struct__STL::pair<int_const_,struct_stArenaInfo>_>,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,struct_stArenaInfo>_>_>
           *this,_Rb_tree_node_base *param_1,_Rb_tree_node_base *param_2,
          pair<int_const_,struct_stArenaInfo> *param_3,_Rb_tree_node_base *param_4)

{
  pair<int_const_,struct_stArenaInfo> *ppVar1;
  int iVar2;
  _Rb_tree_node_base *p_Var3;
  _Rb_tree_node<struct__STL::pair<int_const_,struct_stArenaInfo>_> *p_Var4;
  _Rb_tree_node_base *p_Var5;
  _Rb_tree_node_base *p_Var6;
  _Rb_tree_node_base **pp_Var7;
  int in_stack_00000014;
  
  if ((param_3 == *(pair<int_const_,struct_stArenaInfo> **)this) ||
     ((in_stack_00000014 == 0 &&
      ((param_2 != (_Rb_tree_node_base *)0x0 || (*(int *)param_4 < *(int *)(param_3 + 0x10))))))) {
    p_Var4 = M_create_node(this,(pair<int_const_,struct_stArenaInfo> *)param_4);
    *(_Rb_tree_node<struct__STL::pair<int_const_,struct_stArenaInfo>_> **)(param_3 + 8) = p_Var4;
    ppVar1 = *(pair<int_const_,struct_stArenaInfo> **)this;
    if (param_3 == ppVar1) {
      *(_Rb_tree_node<struct__STL::pair<int_const_,struct_stArenaInfo>_> **)(ppVar1 + 4) = p_Var4;
      *(_Rb_tree_node<struct__STL::pair<int_const_,struct_stArenaInfo>_> **)(*(int *)this + 0xc) =
           p_Var4;
    }
    else if (param_3 == *(pair<int_const_,struct_stArenaInfo> **)(ppVar1 + 8)) {
      *(_Rb_tree_node<struct__STL::pair<int_const_,struct_stArenaInfo>_> **)(ppVar1 + 8) = p_Var4;
    }
  }
  else {
    p_Var4 = M_create_node(this,(pair<int_const_,struct_stArenaInfo> *)param_4);
    *(_Rb_tree_node<struct__STL::pair<int_const_,struct_stArenaInfo>_> **)(param_3 + 0xc) = p_Var4;
    if (param_3 == *(pair<int_const_,struct_stArenaInfo> **)(*(int *)this + 0xc)) {
      *(_Rb_tree_node<struct__STL::pair<int_const_,struct_stArenaInfo>_> **)(*(int *)this + 0xc) =
           p_Var4;
    }
  }
  *(pair<int_const_,struct_stArenaInfo> **)((_Rb_tree_node_base *)p_Var4 + 4) = param_3;
  *(undefined4 *)((_Rb_tree_node_base *)p_Var4 + 8) = 0;
  *(undefined4 *)((_Rb_tree_node_base *)p_Var4 + 0xc) = 0;
  iVar2 = *(int *)this;
  *p_Var4 = (_Rb_tree_node<struct__STL::pair<int_const_,struct_stArenaInfo>_>)0x0;
  pp_Var7 = (_Rb_tree_node_base **)(iVar2 + 4);
  p_Var6 = (_Rb_tree_node_base *)p_Var4;
  if (p_Var4 != (_Rb_tree_node<struct__STL::pair<int_const_,struct_stArenaInfo>_> *)*pp_Var7) {
    do {
      p_Var3 = *(_Rb_tree_node_base **)(p_Var6 + 4);
      if (*p_Var3 != (_Rb_tree_node_base)0x0) break;
      p_Var5 = *(_Rb_tree_node_base **)(*(int *)(p_Var3 + 4) + 8);
      if (p_Var3 == p_Var5) {
        p_Var5 = *(_Rb_tree_node_base **)(*(int *)(p_Var3 + 4) + 0xc);
        if ((p_Var5 == (_Rb_tree_node_base *)0x0) || (*p_Var5 != (_Rb_tree_node_base)0x0)) {
          if (p_Var6 == *(_Rb_tree_node_base **)(p_Var3 + 0xc)) {
            p_Var6 = *(_Rb_tree_node_base **)(p_Var3 + 0xc);
            *(undefined4 *)(p_Var3 + 0xc) = *(undefined4 *)(p_Var6 + 8);
            if (*(int *)(p_Var6 + 8) != 0) {
              *(_Rb_tree_node_base **)(*(int *)(p_Var6 + 8) + 4) = p_Var3;
            }
            *(undefined4 *)(p_Var6 + 4) = *(undefined4 *)(p_Var3 + 4);
            if (p_Var3 == *pp_Var7) {
              *pp_Var7 = p_Var6;
            }
            else {
              iVar2 = *(int *)(p_Var3 + 4);
              if (p_Var3 == *(_Rb_tree_node_base **)(iVar2 + 8)) {
                *(_Rb_tree_node_base **)(iVar2 + 8) = p_Var6;
              }
              else {
                *(_Rb_tree_node_base **)(iVar2 + 0xc) = p_Var6;
              }
            }
            *(_Rb_tree_node_base **)(p_Var6 + 8) = p_Var3;
            *(_Rb_tree_node_base **)(p_Var3 + 4) = p_Var6;
            p_Var6 = p_Var3;
          }
          **(undefined1 **)(p_Var6 + 4) = 1;
          **(undefined1 **)(*(int *)(p_Var6 + 4) + 4) = 0;
          p_Var3 = *(_Rb_tree_node_base **)(*(int *)(p_Var6 + 4) + 4);
          p_Var5 = *(_Rb_tree_node_base **)(p_Var3 + 8);
          *(undefined4 *)(p_Var3 + 8) = *(undefined4 *)(p_Var5 + 0xc);
          if (*(int *)(p_Var5 + 0xc) != 0) {
            *(_Rb_tree_node_base **)(*(int *)(p_Var5 + 0xc) + 4) = p_Var3;
          }
          *(undefined4 *)(p_Var5 + 4) = *(undefined4 *)(p_Var3 + 4);
          if (p_Var3 == *pp_Var7) {
            *pp_Var7 = p_Var5;
            *(_Rb_tree_node_base **)(p_Var5 + 0xc) = p_Var3;
            *(_Rb_tree_node_base **)(p_Var3 + 4) = p_Var5;
          }
          else {
            iVar2 = *(int *)(p_Var3 + 4);
            if (p_Var3 == *(_Rb_tree_node_base **)(iVar2 + 0xc)) {
              *(_Rb_tree_node_base **)(iVar2 + 0xc) = p_Var5;
              *(_Rb_tree_node_base **)(p_Var5 + 0xc) = p_Var3;
              *(_Rb_tree_node_base **)(p_Var3 + 4) = p_Var5;
            }
            else {
              *(_Rb_tree_node_base **)(iVar2 + 8) = p_Var5;
              *(_Rb_tree_node_base **)(p_Var5 + 0xc) = p_Var3;
              *(_Rb_tree_node_base **)(p_Var3 + 4) = p_Var5;
            }
          }
        }
        else {
LAB_005b7b4e:
          *p_Var3 = (_Rb_tree_node_base)0x1;
          *p_Var5 = (_Rb_tree_node_base)0x1;
          **(undefined1 **)(*(int *)(p_Var6 + 4) + 4) = 0;
          p_Var6 = *(_Rb_tree_node_base **)(*(int *)(p_Var6 + 4) + 4);
        }
      }
      else {
        if ((p_Var5 != (_Rb_tree_node_base *)0x0) && (*p_Var5 == (_Rb_tree_node_base)0x0))
        goto LAB_005b7b4e;
        if (p_Var6 == *(_Rb_tree_node_base **)(p_Var3 + 8)) {
          _Rb_global<bool>::Rotate_right(p_Var3,pp_Var7);
          p_Var6 = p_Var3;
        }
        **(undefined1 **)(p_Var6 + 4) = 1;
        **(undefined1 **)(*(int *)(p_Var6 + 4) + 4) = 0;
        _Rb_global<bool>::Rotate_left(*(_Rb_tree_node_base **)(*(int *)(p_Var6 + 4) + 4),pp_Var7);
      }
    } while (p_Var6 != *pp_Var7);
  }
  **pp_Var7 = (_Rb_tree_node_base)0x1;
  *(int *)(this + 4) = *(int *)(this + 4) + 1;
  *(_Rb_tree_node<struct__STL::pair<int_const_,struct_stArenaInfo>_> **)param_1 = p_Var4;
  return;
}




/* from: libgsclient:GSArenaConnection.cpp
   addr: 005B7C70 */

pair<int_const_,struct_stArenaInfo> * __thiscall
_STL::
_Rb_tree<int,struct__STL::pair<int_const_,struct_stArenaInfo>,struct__STL::_Select1st<struct__STL::pair<int_const_,struct_stArenaInfo>_>,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,struct_stArenaInfo>_>_>
::insert_unique(_Rb_tree<int,struct__STL::pair<int_const_,struct_stArenaInfo>,struct__STL::_Select1st<struct__STL::pair<int_const_,struct_stArenaInfo>_>,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,struct_stArenaInfo>_>_>
                *this,pair<int_const_,struct_stArenaInfo> *param_1)

{
  _Rb_tree_node_base *p_Var1;
  bool bVar2;
  _Rb_tree_node<struct__STL::pair<int_const_,struct_stArenaInfo>_> *p_Var3;
  _Rb_tree_node_base *p_Var4;
  _Rb_tree_node_base *p_Var5;
  _Rb_tree_node_base *p_Var6;
  pair<int_const_,struct_stArenaInfo> *in_stack_00000008;
  
  bVar2 = true;
  p_Var1 = *(_Rb_tree_node_base **)this;
  p_Var5 = *(_Rb_tree_node_base **)(p_Var1 + 4);
  p_Var6 = p_Var1;
  if (p_Var5 != (_Rb_tree_node_base *)0x0) {
    do {
      p_Var6 = p_Var5;
      bVar2 = *(int *)in_stack_00000008 < *(int *)(p_Var6 + 0x10);
      if (bVar2) {
        p_Var5 = *(_Rb_tree_node_base **)(p_Var6 + 8);
      }
      else {
        p_Var5 = *(_Rb_tree_node_base **)(p_Var6 + 0xc);
      }
    } while (p_Var5 != (_Rb_tree_node_base *)0x0);
  }
  p_Var4 = p_Var6;
  if (bVar2) {
    if (p_Var6 == *(_Rb_tree_node_base **)(p_Var1 + 8)) {
      if (((p_Var6 == p_Var1) || (p_Var5 != (_Rb_tree_node_base *)0x0)) ||
         (*(int *)in_stack_00000008 < *(int *)(p_Var6 + 0x10))) {
        p_Var3 = M_create_node(this,in_stack_00000008);
        *(_Rb_tree_node<struct__STL::pair<int_const_,struct_stArenaInfo>_> **)(p_Var6 + 8) = p_Var3;
        p_Var1 = *(_Rb_tree_node_base **)this;
        if (p_Var6 == p_Var1) {
          *(_Rb_tree_node<struct__STL::pair<int_const_,struct_stArenaInfo>_> **)(p_Var1 + 4) =
               p_Var3;
          *(_Rb_tree_node<struct__STL::pair<int_const_,struct_stArenaInfo>_> **)(*(int *)this + 0xc)
               = p_Var3;
        }
        else if (p_Var6 == *(_Rb_tree_node_base **)(p_Var1 + 8)) {
          *(_Rb_tree_node<struct__STL::pair<int_const_,struct_stArenaInfo>_> **)(p_Var1 + 8) =
               p_Var3;
        }
      }
      else {
        p_Var3 = M_create_node(this,in_stack_00000008);
        *(_Rb_tree_node<struct__STL::pair<int_const_,struct_stArenaInfo>_> **)(p_Var6 + 0xc) =
             p_Var3;
        if (p_Var6 == *(_Rb_tree_node_base **)(*(int *)this + 0xc)) {
          *(_Rb_tree_node<struct__STL::pair<int_const_,struct_stArenaInfo>_> **)(*(int *)this + 0xc)
               = p_Var3;
        }
      }
      *(_Rb_tree_node_base **)((_Rb_tree_node_base *)p_Var3 + 4) = p_Var6;
      *(undefined4 *)((_Rb_tree_node_base *)p_Var3 + 8) = 0;
      *(undefined4 *)((_Rb_tree_node_base *)p_Var3 + 0xc) = 0;
      _Rb_global<bool>::Rebalance
                ((_Rb_tree_node_base *)p_Var3,(_Rb_tree_node_base **)(*(int *)this + 4));
      *(int *)(this + 4) = *(int *)(this + 4) + 1;
      *(_Rb_tree_node<struct__STL::pair<int_const_,struct_stArenaInfo>_> **)param_1 = p_Var3;
      param_1[4] = (pair<int_const_,struct_stArenaInfo>)0x1;
      return param_1;
    }
    p_Var4 = _Rb_global<bool>::M_decrement(p_Var6);
  }
  if (*(int *)(p_Var4 + 0x10) < *(int *)in_stack_00000008) {
    if (((p_Var6 == *(_Rb_tree_node_base **)this) || (p_Var5 != (_Rb_tree_node_base *)0x0)) ||
       (*(int *)in_stack_00000008 < *(int *)(p_Var6 + 0x10))) {
      p_Var3 = M_create_node(this,in_stack_00000008);
      *(_Rb_tree_node<struct__STL::pair<int_const_,struct_stArenaInfo>_> **)(p_Var6 + 8) = p_Var3;
      p_Var1 = *(_Rb_tree_node_base **)this;
      if (p_Var6 == p_Var1) {
        *(_Rb_tree_node<struct__STL::pair<int_const_,struct_stArenaInfo>_> **)(p_Var1 + 4) = p_Var3;
        *(_Rb_tree_node<struct__STL::pair<int_const_,struct_stArenaInfo>_> **)(*(int *)this + 0xc) =
             p_Var3;
      }
      else if (p_Var6 == *(_Rb_tree_node_base **)(p_Var1 + 8)) {
        *(_Rb_tree_node<struct__STL::pair<int_const_,struct_stArenaInfo>_> **)(p_Var1 + 8) = p_Var3;
      }
    }
    else {
      p_Var3 = M_create_node(this,in_stack_00000008);
      *(_Rb_tree_node<struct__STL::pair<int_const_,struct_stArenaInfo>_> **)(p_Var6 + 0xc) = p_Var3;
      if (p_Var6 == *(_Rb_tree_node_base **)(*(int *)this + 0xc)) {
        *(_Rb_tree_node<struct__STL::pair<int_const_,struct_stArenaInfo>_> **)(*(int *)this + 0xc) =
             p_Var3;
      }
    }
    *(_Rb_tree_node_base **)((_Rb_tree_node_base *)p_Var3 + 4) = p_Var6;
    *(undefined4 *)((_Rb_tree_node_base *)p_Var3 + 8) = 0;
    *(undefined4 *)((_Rb_tree_node_base *)p_Var3 + 0xc) = 0;
    _Rb_global<bool>::Rebalance
              ((_Rb_tree_node_base *)p_Var3,(_Rb_tree_node_base **)(*(int *)this + 4));
    *(int *)(this + 4) = *(int *)(this + 4) + 1;
    *(_Rb_tree_node<struct__STL::pair<int_const_,struct_stArenaInfo>_> **)param_1 = p_Var3;
    param_1[4] = (pair<int_const_,struct_stArenaInfo>)0x1;
    return param_1;
  }
  *(_Rb_tree_node_base **)param_1 = p_Var4;
  param_1[4] = (pair<int_const_,struct_stArenaInfo>)0x0;
  return param_1;
}




/* from: libgsclient:GSArenaConnection.cpp
   addr: 005B7DE0
   addr: 005B7DE0
   addr: 005B7DE0 */

_Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_> * __thiscall
_STL::
_Rb_tree<int,struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Select1st<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>
::M_find(_Rb_tree<int,struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Select1st<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>
         *this,int *param_1)

{
  _Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_> *p_Var1;
  _Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_> *p_Var2;
  _Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_> *p_Var3;
  _Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_> *p_Var4;
  
  p_Var1 = *(_Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_> **)this;
  p_Var4 = p_Var1;
  if (*(_Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_> **)(p_Var1 + 4) !=
      (_Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_> *)0x0) {
    p_Var2 = *(_Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_> **)(p_Var1 + 4);
    do {
      if (*(int *)(p_Var2 + 0x10) < *param_1) {
        p_Var3 = *(_Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_> **)
                  (p_Var2 + 0xc);
      }
      else {
        p_Var3 = *(_Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_> **)
                  (p_Var2 + 8);
        p_Var4 = p_Var2;
      }
      p_Var2 = p_Var3;
    } while (p_Var3 != (_Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_> *)0x0);
  }
  if ((p_Var4 != p_Var1) && (*(int *)(p_Var4 + 0x10) <= *param_1)) {
    p_Var1 = p_Var4;
  }
  return p_Var1;
}




/* from: libgsclient:GSArenaConnection.cpp
   addr: 005B7E20 */

void __thiscall
_STL::list<int,class_ExtAlloc::Allocator<int>_>::M_insert_dispatch
          (list<int,class_ExtAlloc::Allocator<int>_> *this,undefined4 param_2,int *param_3,
          int *param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  _List_node<class_clData*> *p_Var3;
  int *piVar4;
  
  piVar2 = param_4;
  piVar4 = param_3;
  if (param_3 != param_4) {
    do {
      _List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>::
      List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
                ((_List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
                  *)&param_3,
                 (_List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
                  *)&param_2);
      p_Var3 = list<class_clData*,class_ExtAlloc::Allocator<class_clData*>_>::M_create_node
                         ((list<class_clData*,class_ExtAlloc::Allocator<class_clData*>_> *)this,
                          (clData **)(piVar4 + 2));
      puVar1 = (undefined4 *)param_3[1];
      *(int **)p_Var3 = param_3;
      *(undefined4 **)(p_Var3 + 4) = puVar1;
      *puVar1 = p_Var3;
      param_3[1] = (int)p_Var3;
      piVar4 = (int *)*piVar4;
    } while (piVar4 != piVar2);
  }
  return;
}




/* from: libgsclient:GSArenaConnection.cpp
   addr: 005B7E70 */

_Rb_tree_node<struct__STL::pair<int_const_,struct_stArenaInfo>_> * __thiscall
_STL::
_Rb_tree<int,struct__STL::pair<int_const_,struct_stArenaInfo>,struct__STL::_Select1st<struct__STL::pair<int_const_,struct_stArenaInfo>_>,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,struct_stArenaInfo>_>_>
::M_create_node(_Rb_tree<int,struct__STL::pair<int_const_,struct_stArenaInfo>,struct__STL::_Select1st<struct__STL::pair<int_const_,struct_stArenaInfo>_>,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,struct_stArenaInfo>_>_>
                *this,pair<int_const_,struct_stArenaInfo> *param_1)

{
  _Rb_tree_node<struct__STL::pair<int_const_,struct_stArenaInfo>_> *p_Var1;
  int iVar2;
  _Rb_tree_node<struct__STL::pair<int_const_,struct_stArenaInfo>_> *p_Var3;
  _Rb_tree_node<struct__STL::pair<int_const_,struct_stArenaInfo>_> *p_Var4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005cc20f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  p_Var1 = (_Rb_tree_node<struct__STL::pair<int_const_,struct_stArenaInfo>_> *)
           ExtAlloc_Malloc_4(0xdc);
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  if (p_Var1 + 0x10 != (_Rb_tree_node<struct__STL::pair<int_const_,struct_stArenaInfo>_> *)0x0) {
    *(undefined4 *)(p_Var1 + 0x10) = *(undefined4 *)param_1;
    p_Var4 = p_Var1 + 0x14;
    p_Var3 = (_Rb_tree_node<struct__STL::pair<int_const_,struct_stArenaInfo>_> *)param_1;
    for (iVar2 = 8; p_Var3 = p_Var3 + 4, iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined4 *)p_Var4 = *(undefined4 *)p_Var3;
      p_Var4 = p_Var4 + 4;
    }
    *p_Var4 = *p_Var3;
    p_Var3 = (_Rb_tree_node<struct__STL::pair<int_const_,struct_stArenaInfo>_> *)(param_1 + 0x25);
    p_Var4 = p_Var1 + 0x35;
    for (iVar2 = 0x20; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined4 *)p_Var4 = *(undefined4 *)p_Var3;
      p_Var3 = p_Var3 + 4;
      p_Var4 = p_Var4 + 4;
    }
    *p_Var4 = *p_Var3;
    *(undefined2 *)(p_Var1 + 0xb6) = *(undefined2 *)(param_1 + 0xa6);
    *(undefined4 *)(p_Var1 + 0xb8) = *(undefined4 *)(param_1 + 0xa8);
    p_Var1[0xbc] = *(_Rb_tree_node<struct__STL::pair<int_const_,struct_stArenaInfo>_> *)
                    (param_1 + 0xac);
    *(undefined8 **)(p_Var1 + 0xc4) = &ExtAlloc::list<int>::_vbtable_;
    list<int,class_ExtAlloc::Allocator<int>_>::list<int,class_ExtAlloc::Allocator<int>_>
              ((list<int,class_ExtAlloc::Allocator<int>_> *)(p_Var1 + 0xc0),
               (list<int,class_ExtAlloc::Allocator<int>_> *)(param_1 + 0xb0));
    local_8 = CONCAT31(local_8._1_3_,2);
    *(undefined8 **)(p_Var1 + 0xd4) = &ExtAlloc::set<int,struct__STL::less<int>_>::_vbtable_;
    set<int,struct__STL::less<int>,class_ExtAlloc::Allocator<int>_>::
    set<int,struct__STL::less<int>,class_ExtAlloc::Allocator<int>_>
              ((set<int,struct__STL::less<int>,class_ExtAlloc::Allocator<int>_> *)(p_Var1 + 200),
               (set<int,struct__STL::less<int>,class_ExtAlloc::Allocator<int>_> *)(param_1 + 0xb8));
    *(undefined4 *)(p_Var1 + 0xd8) = *(undefined4 *)(param_1 + 200);
  }
  ExceptionList = local_10;
  return p_Var1;
}




/* from: libgsclient:GSArenaConnection.cpp
   addr: 005B7F80 */

list<int,class_ExtAlloc::Allocator<int>_> * __thiscall
_STL::list<int,class_ExtAlloc::Allocator<int>_>::list<int,class_ExtAlloc::Allocator<int>_>
          (list<int,class_ExtAlloc::Allocator<int>_> *this,
          list<int,class_ExtAlloc::Allocator<int>_> *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  _List_node<class_clData*> *p_Var5;
  _List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
  local_18 [4];
  int local_14;
  list<int,class_ExtAlloc::Allocator<int>_> *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005cc228;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)this = 0;
  local_10 = this;
  iVar4 = ExtAlloc_Malloc_4(0xc);
  *(int *)iVar4 = iVar4;
  *(int *)(iVar4 + 4) = iVar4;
  *(int *)this = iVar4;
  puVar1 = *(undefined4 **)param_1;
  local_4 = 0;
  puVar2 = (undefined4 *)*puVar1;
  list<class_clRcvElement*,class_ExtAlloc::Allocator<class_clRcvElement*>_>::begin
            ((list<class_clRcvElement*,class_ExtAlloc::Allocator<class_clRcvElement*>_> *)this);
  _List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>::
  List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
            (local_18,(_List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
                       *)&param_1);
  for (; puVar2 != puVar1; puVar2 = (undefined4 *)*puVar2) {
    _List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>::
    List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
              ((_List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
                *)&local_14,local_18);
    p_Var5 = list<class_clData*,class_ExtAlloc::Allocator<class_clData*>_>::M_create_node
                       ((list<class_clData*,class_ExtAlloc::Allocator<class_clData*>_> *)this,
                        (clData **)(puVar2 + 2));
    puVar3 = *(undefined4 **)(local_14 + 4);
    *(int *)p_Var5 = local_14;
    *(undefined4 **)(p_Var5 + 4) = puVar3;
    *puVar3 = p_Var5;
    *(_List_node<class_clData*> **)(local_14 + 4) = p_Var5;
  }
  ExceptionList = local_c;
  return this;
}




/* from: libgsclient:GSArenaConnection.cpp
   addr: 005B8030 */

set<int,struct__STL::less<int>,class_ExtAlloc::Allocator<int>_> * __thiscall
_STL::set<int,struct__STL::less<int>,class_ExtAlloc::Allocator<int>_>::
set<int,struct__STL::less<int>,class_ExtAlloc::Allocator<int>_>
          (set<int,struct__STL::less<int>,class_ExtAlloc::Allocator<int>_> *this,
          set<int,struct__STL::less<int>,class_ExtAlloc::Allocator<int>_> *param_1)

{
  int iVar1;
  _Rb_tree_node<int> *p_Var2;
  int iVar3;
  Allocator<class_CConnection*> *pAVar4;
  undefined1 *puVar5;
  _Rb_tree_node<int> *p_Var6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005cc248;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pAVar4 = (Allocator<class_CConnection*> *)animSYSTEM::GetBaseSeqNmb((animSYSTEM *)param_1);
  _STLP_alloc_proxy<struct__STL::_List_node<class_CConnection*>*,struct__STL::_List_node<class_CConnection*>,class_ExtAlloc::Allocator<class_CConnection*>_>
  ::
  STLP_alloc_proxy<struct__STL::_List_node<class_CConnection*>*,struct__STL::_List_node<class_CConnection*>,class_ExtAlloc::Allocator<class_CConnection*>_>
            ((_STLP_alloc_proxy<struct__STL::_List_node<class_CConnection*>*,struct__STL::_List_node<class_CConnection*>,class_ExtAlloc::Allocator<class_CConnection*>_>
              *)this,pAVar4,(_List_node<class_CConnection*> *)0x0);
  puVar5 = (undefined1 *)ExtAlloc_Malloc_4(0x14);
  *(undefined1 **)this = puVar5;
  *(undefined4 *)(this + 4) = 0;
  this[8] = param_1[8];
  local_4 = 0;
  iVar1 = *(int *)(*(int *)param_1 + 4);
  *puVar5 = 0;
  if (iVar1 == 0) {
    *(undefined4 *)(*(int *)this + 4) = 0;
    *(int *)(*(int *)this + 8) = *(int *)this;
    *(int *)(*(int *)this + 0xc) = *(int *)this;
  }
  else {
    p_Var2 = *(_Rb_tree_node<int> **)this;
    p_Var6 = _Rb_tree<int,int,struct__STL::_Identity<int>,struct__STL::less<int>,class_ExtAlloc::Allocator<int>_>
             ::M_copy((_Rb_tree<int,int,struct__STL::_Identity<int>,struct__STL::less<int>,class_ExtAlloc::Allocator<int>_>
                       *)this,*(_Rb_tree_node<int> **)(*(int *)param_1 + 4),p_Var2);
    *(_Rb_tree_node<int> **)(p_Var2 + 4) = p_Var6;
    iVar1 = *(int *)(*(int *)this + 4);
    for (iVar3 = *(int *)(iVar1 + 8); iVar3 != 0; iVar3 = *(int *)(iVar3 + 8)) {
      iVar1 = iVar3;
    }
    *(int *)(*(int *)this + 8) = iVar1;
    iVar1 = *(int *)(*(int *)this + 4);
    for (iVar3 = *(int *)(iVar1 + 0xc); iVar3 != 0; iVar3 = *(int *)(iVar3 + 0xc)) {
      iVar1 = iVar3;
    }
    *(int *)(*(int *)this + 0xc) = iVar1;
  }
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  ExceptionList = local_c;
  return this;
}

