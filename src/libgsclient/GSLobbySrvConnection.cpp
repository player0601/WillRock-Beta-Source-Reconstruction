
/* from: libgsclient:GSLobbySrvConnection.cpp
   addr: 005B2840 */

CLobbySrvConnectionList * __thiscall
CLobbySrvConnectionList::CLobbySrvConnectionList(CLobbySrvConnectionList *this,CConnection *param_1)

{
  _STLP_alloc_proxy<struct__STL::_List_node<class_CConnection*>*,struct__STL::_List_node<class_CConnection*>,class_ExtAlloc::Allocator<class_CConnection*>_>
  *this_00;
  int iVar1;
  undefined4 uVar2;
  CLobbySrvConnectionList *pCVar3;
  CLobbySrvConnectionList CStack00000008;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005cbb0f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (_CStack00000008 != 0) {
    ExceptionList = &local_c;
    *(undefined8 **)(this + 8) = &_vbtable_;
    local_4 = 0;
  }
  CConnectionList::CConnectionList((CConnectionList *)this);
  *(undefined8 **)(this + 0xa0) = &ExtAlloc::list<struct_stLobbyMsgData*>::_vbtable_;
  local_4 = 3;
  _STL::
  _STLP_alloc_proxy<struct__STL::_List_node<class_CConnection*>*,struct__STL::_List_node<class_CConnection*>,class_ExtAlloc::Allocator<class_CConnection*>_>
  ::
  STLP_alloc_proxy<struct__STL::_List_node<class_CConnection*>*,struct__STL::_List_node<class_CConnection*>,class_ExtAlloc::Allocator<class_CConnection*>_>
            ((_STLP_alloc_proxy<struct__STL::_List_node<class_CConnection*>*,struct__STL::_List_node<class_CConnection*>,class_ExtAlloc::Allocator<class_CConnection*>_>
              *)(this + 0x9c),(Allocator<class_CConnection*> *)&stack0x00000008,
             (_List_node<class_CConnection*> *)0x0);
  iVar1 = ExtAlloc_Malloc_4(0xc);
  *(int *)iVar1 = iVar1;
  *(int *)(iVar1 + 4) = iVar1;
  *(int *)(this + 0x9c) = iVar1;
  *(undefined8 **)(this + 0xa8) = &ExtAlloc::list<struct_stLobbyMsgData*>::_vbtable_;
  local_4 = 6;
  _STL::
  _STLP_alloc_proxy<struct__STL::_List_node<class_CConnection*>*,struct__STL::_List_node<class_CConnection*>,class_ExtAlloc::Allocator<class_CConnection*>_>
  ::
  STLP_alloc_proxy<struct__STL::_List_node<class_CConnection*>*,struct__STL::_List_node<class_CConnection*>,class_ExtAlloc::Allocator<class_CConnection*>_>
            ((_STLP_alloc_proxy<struct__STL::_List_node<class_CConnection*>*,struct__STL::_List_node<class_CConnection*>,class_ExtAlloc::Allocator<class_CConnection*>_>
              *)(this + 0xa4),(Allocator<class_CConnection*> *)&stack0x00000008,
             (_List_node<class_CConnection*> *)0x0);
  iVar1 = ExtAlloc_Malloc_4(0xc);
  *(int *)iVar1 = iVar1;
  *(int *)(iVar1 + 4) = iVar1;
  *(int *)(this + 0xa4) = iVar1;
  this_00 = (_STLP_alloc_proxy<struct__STL::_List_node<class_CConnection*>*,struct__STL::_List_node<class_CConnection*>,class_ExtAlloc::Allocator<class_CConnection*>_>
             *)(this + 0xac);
  *(undefined8 **)(this + 0xb8) =
       &ExtAlloc::map<int,struct_stLobbySrvInfo,struct__STL::less<int>_>::_vbtable_;
  local_4 = 9;
  _STL::
  _STLP_alloc_proxy<struct__STL::_List_node<class_CConnection*>*,struct__STL::_List_node<class_CConnection*>,class_ExtAlloc::Allocator<class_CConnection*>_>
  ::
  STLP_alloc_proxy<struct__STL::_List_node<class_CConnection*>*,struct__STL::_List_node<class_CConnection*>,class_ExtAlloc::Allocator<class_CConnection*>_>
            (this_00,(Allocator<class_CConnection*> *)&stack0x00000008,
             (_List_node<class_CConnection*> *)0x0);
  uVar2 = ExtAlloc_Malloc_4(0xa8);
  *(undefined4 *)this_00 = uVar2;
  local_4 = CONCAT31(local_4._1_3_,10);
  *(undefined4 *)(this + 0xb0) = 0;
  this[0xb4] = CStack00000008;
  _STL::
  _Rb_tree<int,int,struct__STL::_Identity<int>,struct__STL::less<int>,class_ExtAlloc::Allocator<int>_>
  ::M_empty_initialize
            ((_Rb_tree<int,int,struct__STL::_Identity<int>,struct__STL::less<int>,class_ExtAlloc::Allocator<int>_>
              *)this_00);
  *(undefined ***)this = &_vftable_;
  *(CConnection **)(this + 0x1d0) = param_1;
  this[0x1d8] = (CLobbySrvConnectionList)0x0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0xc0) = 0;
  *(undefined4 *)(this + 0xc4) = 0;
  *(undefined4 *)(this + 200) = 0;
  pCVar3 = this + 0xcc;
  for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pCVar3 = 0;
    pCVar3 = pCVar3 + 4;
  }
  *pCVar3 = (CLobbySrvConnectionList)0x0;
  pCVar3 = this + 0x14d;
  for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pCVar3 = 0;
    pCVar3 = pCVar3 + 4;
  }
  *pCVar3 = (CLobbySrvConnectionList)0x0;
  *(undefined4 *)(this + 0x1d4) = 0;
  ExceptionList = local_c;
  return this;
}




/* from: libgsclient:GSLobbySrvConnection.cpp
   addr: 005B29C0
   addr: 005B29C0 */

void * __thiscall
CLobbySrvConnectionList::_scalar_deleting_destructor_(CLobbySrvConnectionList *this,uint param_1)

{
  ~CLobbySrvConnectionList(this);
  if ((param_1 & 1) != 0) {
    ExtAlloc_Free_4(this);
  }
  return this;
}




/* from: libgsclient:GSLobbySrvConnection.cpp
   addr: 005B29E0 */

void __thiscall CLobbySrvConnectionList::~CLobbySrvConnectionList(CLobbySrvConnectionList *this)

{
  _STLP_alloc_proxy<struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>*,struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
  *this_00;
  int iVar1;
  _Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
  *p_Var2;
  _Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
  *p_Var3;
  undefined1 local_14 [4];
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005cbb6a;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = &_vftable_;
  local_4 = 3;
  EmptyOutbox(this);
  EmptyInbox(this);
  iVar1 = *(int *)this;
  _STL::list<class_clRcvElement*,class_ExtAlloc::Allocator<class_clRcvElement*>_>::begin
            ((list<class_clRcvElement*,class_ExtAlloc::Allocator<class_clRcvElement*>_> *)(this + 4)
            );
  (**(code **)(iVar1 + 0x10))(local_14);
  uStack_10._0_1_ = 4;
  _STL::
  _Rb_tree<int,struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Select1st<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>
  ::clear((_Rb_tree<int,struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Select1st<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>
           *)(this + 0xac));
  ExtAlloc_Free_4(*(undefined4 *)(this + 0xac));
  uStack_10._0_1_ = 5;
  _STL::_List_base<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_>::clear
            ((_List_base<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_> *)
             (this + 0xa4));
  ExtAlloc_Free_4(*(undefined4 *)(this + 0xa4));
  this_00 = (_STLP_alloc_proxy<struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>*,struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
             *)(this + 0x9c);
  uStack_10 = CONCAT31(uStack_10._1_3_,6);
  p_Var3 = *(_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
             **)*(_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
                  **)this_00;
  if (p_Var3 != *(_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
                  **)this_00) {
    do {
      p_Var2 = *(_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
                 **)p_Var3;
      _STL::
      _STLP_alloc_proxy<struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>*,struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
      ::deallocate(this_00,p_Var3,1);
      p_Var3 = p_Var2;
    } while (p_Var2 != *(_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
                         **)this_00);
  }
  *(undefined4 *)*(undefined4 *)this_00 = *(undefined4 *)this_00;
  *(int *)(*(int *)this_00 + 4) = *(int *)this_00;
  ExtAlloc_Free_4(*(undefined4 *)this_00);
  uStack_10 = 0xffffffff;
  CConnectionList::~CConnectionList((CConnectionList *)this);
  ExceptionList = this;
  return;
}




/* from: libgsclient:GSLobbySrvConnection.cpp
   addr: 005B2AE0 */

void __thiscall
ExtAlloc::map<int,struct_stLobbySrvInfo,struct__STL::less<int>_>::
~map<int,struct_stLobbySrvInfo,struct__STL::less<int>_>
          (map<int,struct_stLobbySrvInfo,struct__STL::less<int>_> *this)

{
  int iVar1;
  int iVar2;
  void **ppvVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005cbb88;
  local_c = ExceptionList;
  local_4 = 0;
  ppvVar3 = &local_c;
  if (*(int *)(this + 4) != 0) {
    iVar2 = *(int *)(*(int *)this + 4);
    ExceptionList = &local_c;
    while (iVar2 != 0) {
      _STL::
      _Rb_tree<int,struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Select1st<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>
      ::M_erase((_Rb_tree<int,struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Select1st<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>
                 *)this,*(_Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_> **)
                         (iVar2 + 0xc));
      iVar1 = *(int *)(iVar2 + 8);
      _STL::pair<int_const_,struct_stLobbySrvInfo>::_scalar_deleting_destructor_
                ((pair<int_const_,struct_stLobbySrvInfo> *)(iVar2 + 0x10),0);
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




/* from: libgsclient:GSLobbySrvConnection.cpp
   addr: 005B2B70 */

uchar __thiscall
CLobbySrvConnectionList::RegisterGroup(CLobbySrvConnectionList *this,int param_1,int param_2)

{
  undefined4 *puVar1;
  uchar uVar2;
  _Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_> *p_Var3;
  _List_node<class_clData*> *p_Var4;
  
  uVar2 = IsLobbyServerValid(this,param_2);
  if (uVar2 == '\0') {
    AddLobbySrvToList(this,param_2,s_,0);
  }
  p_Var3 = _STL::
           _Rb_tree<int,struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Select1st<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>
           ::M_find((_Rb_tree<int,struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Select1st<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>
                     *)(this + 0xac),&param_2);
  if (p_Var3 != *(_Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_> **)
                 (this + 0xac)) {
    puVar1 = (undefined4 *)**(undefined4 **)(p_Var3 + 0x9c);
    while( true ) {
      if (puVar1 == *(undefined4 **)(p_Var3 + 0x9c)) {
        _STL::list<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_>::end
                  ((list<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_> *)
                   (p_Var3 + 0x9c));
        p_Var4 = _STL::list<class_clData*,class_ExtAlloc::Allocator<class_clData*>_>::M_create_node
                           ((list<class_clData*,class_ExtAlloc::Allocator<class_clData*>_> *)
                            (p_Var3 + 0x9c),(clData **)&param_1);
        puVar1 = *(undefined4 **)(this + 4);
        *(CLobbySrvConnectionList **)p_Var4 = this;
        *(undefined4 **)(p_Var4 + 4) = puVar1;
        *puVar1 = p_Var4;
        *(_List_node<class_clData*> **)(this + 4) = p_Var4;
        return '\x01';
      }
      if (puVar1[2] == param_1) break;
      puVar1 = (undefined4 *)*puVar1;
    }
    return '\x01';
  }
  return '\0';
}




/* from: libgsclient:GSLobbySrvConnection.cpp
   addr: 005B2C10 */

uchar __thiscall
CLobbySrvConnectionList::RemoveGroup(CLobbySrvConnectionList *this,int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  CLobbySrvConnectionList *local_4;
  
  local_4 = this;
  local_4 = (CLobbySrvConnectionList *)
            _STL::
            _Rb_tree<int,struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Select1st<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>
            ::M_find((_Rb_tree<int,struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Select1st<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>
                      *)(this + 0xac),&param_2);
  if (local_4 !=
      (CLobbySrvConnectionList *)
      *(_Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_> **)(this + 0xac)) {
    for (piVar1 = (int *)**(int **)((_Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>
                                     *)local_4 + 0x9c);
        piVar1 != *(int **)((_Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_> *)
                            local_4 + 0x9c); piVar1 = (int *)*piVar1) {
      if (piVar1[2] == param_1) {
        _STL::
        _Rb_tree_iterator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Nonconst_traits<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>
        ::operator->((_Rb_tree_iterator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Nonconst_traits<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>
                      *)&local_4);
        piVar2 = (int *)piVar1[1];
        iVar3 = *piVar1;
        *piVar2 = iVar3;
        *(int **)(iVar3 + 4) = piVar2;
        ExtAlloc_Free_4(piVar1);
        return '\x01';
      }
    }
  }
  return '\0';
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: libgsclient:GSLobbySrvConnection.cpp
   addr: 005B2C70 */

uchar __thiscall CLobbySrvConnectionList::CheckConnection(CLobbySrvConnectionList *this)

{
  int iVar1;
  uchar uVar2;
  int iVar3;
  undefined4 uVar4;
  _List_iterator<class_clData*,struct__STL::_Const_traits<class_clData*>_> *p_Var5;
  int iVar6;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  time_t tVar7;
  double dVar8;
  input_iterator_tag local_9;
  undefined4 *local_8;
  undefined4 local_4;
  
  iVar3 = CConnectionList::CheckConnection((CConnectionList *)this);
  while ((iVar3 != 0 && (uVar2 = RemoveLobbySrvFromList(this,iVar3), uVar2 != '\0'))) {
    iVar3 = CConnectionList::CheckConnection((CConnectionList *)this);
  }
  tVar7 = time((time_t *)0x0);
  uVar4 = (undefined4)tVar7;
  if (*(int *)(this + 0xb0) == 0) {
    local_8 = *(undefined4 **)(this + 0xa4);
    p_Var5 = (_List_iterator<class_clData*,struct__STL::_Const_traits<class_clData*>_> *)
             _STL::list<class_clRcvElement*,class_ExtAlloc::Allocator<class_clRcvElement*>_>::begin
                       ((list<class_clRcvElement*,class_ExtAlloc::Allocator<class_clRcvElement*>_> *
                        )(this + 0xa4));
    iVar3 = _STL::distance(p_Var5,(_List_iterator<class_clData*,struct__STL::_Const_traits<class_clData*>_>
                                   *)&local_8,&local_9);
    if (iVar3 == 0) {
      if (*(int *)(this + 0x1d4) == 0) {
        tVar7 = time((time_t *)0x0);
        *(int *)(this + 0x1d4) = (int)tVar7;
      }
      dVar8 = difftime(CONCAT44(*(undefined4 *)(this + 0x1d4),uVar4),CONCAT44(unaff_EBP,unaff_EDI));
      if (dVar8 <= ___real_4014000000000000) {
        return '\x01';
      }
      return '\0';
    }
  }
  *(undefined4 *)(this + 0x1d4) = 0;
  iVar3 = *(int *)(*(int *)(this + 0xac) + 8);
  if (iVar3 != *(int *)(this + 0xac)) {
    do {
      if (*(char *)(iVar3 + 0x98) == '\x02') {
        local_8 = *(undefined4 **)(iVar3 + 0x9c);
        local_4 = *local_8;
        iVar6 = _STL::distance((_List_iterator<class_clData*,struct__STL::_Const_traits<class_clData*>_>
                                *)&local_4,
                               (_List_iterator<class_clData*,struct__STL::_Const_traits<class_clData*>_>
                                *)&local_8,&local_9);
        if (iVar6 == 0) {
          if (*(int *)(iVar3 + 0xa4) == 0) {
            *(undefined4 *)(iVar3 + 0xa4) = uVar4;
          }
          else {
            dVar8 = difftime(CONCAT44(*(int *)(iVar3 + 0xa4),uVar4),CONCAT44(unaff_ESI,unaff_EBX));
            if (___real_403e000000000000 < dVar8) {
              Disconnect(this,*(int *)(iVar3 + 0x10));
            }
          }
        }
      }
      iVar6 = *(int *)(iVar3 + 0xc);
      if (iVar6 == 0) {
        iVar6 = *(int *)(iVar3 + 4);
        if (iVar3 == *(int *)(iVar6 + 0xc)) {
          do {
            iVar3 = iVar6;
            iVar6 = *(int *)(iVar3 + 4);
          } while (iVar3 == *(int *)(iVar6 + 0xc));
        }
        if (*(int *)(iVar3 + 0xc) != iVar6) {
          iVar3 = iVar6;
        }
      }
      else {
        for (iVar1 = *(int *)(iVar6 + 8); iVar3 = iVar6, iVar1 != 0; iVar1 = *(int *)(iVar1 + 8)) {
          iVar6 = iVar1;
        }
      }
    } while (iVar3 != *(int *)(this + 0xac));
  }
  return '\x01';
}




/* from: libgsclient:GSLobbySrvConnection.cpp
   addr: 005B2E10 */

void __thiscall
CLobbySrvConnectionList::ConnectFailed(CLobbySrvConnectionList *this,int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  stLobbyMsgData **ppsVar3;
  int *piVar4;
  clDataList acStack_8c [12];
  undefined4 uStack_80;
  int *local_64;
  int local_60 [2];
  undefined1 *local_58;
  undefined **local_54;
  undefined4 *local_50;
  undefined **local_48 [2];
  undefined8 *local_40;
  undefined **local_3c;
  undefined4 *local_38;
  undefined **local_30 [2];
  undefined8 *local_28;
  undefined **local_24;
  undefined4 *local_20;
  undefined **local_18 [2];
  undefined8 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005cbbf0;
  local_c = ExceptionList;
  local_58 = (undefined1 *)0x0;
  local_60[0] = 0;
  local_60[1] = 0;
  local_20 = &clDataList::_vbtable__for__clData__;
  local_10 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
  uStack_80 = 0x5b2e5a;
  ExceptionList = &local_c;
  clData::clData((clData *)&local_24,3);
  local_4 = 0;
  clPointerList<class_clData*>::clPointerList<class_clData*>
            ((clPointerList<class_clData*> *)local_18);
  local_24 = &clDataList::_vftable__for__clData__;
  local_18[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_4 = 1;
  local_38 = &clDataList::_vbtable__for__clData__;
  local_28 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
  uStack_80 = 0x5b2e94;
  clData::clData((clData *)&local_3c,3);
  local_4._0_1_ = 2;
  clPointerList<class_clData*>::clPointerList<class_clData*>
            ((clPointerList<class_clData*> *)local_30);
  local_3c = &clDataList::_vftable__for__clData__;
  local_30[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_4._0_1_ = 3;
  local_50 = &clDataList::_vbtable__for__clData__;
  local_40 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
  uStack_80 = 0x5b2ecc;
  clData::clData((clData *)&local_54,3);
  local_4._0_1_ = 4;
  clPointerList<class_clData*>::clPointerList<class_clData*>
            ((clPointerList<class_clData*> *)local_48);
  local_48[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_54 = &clDataList::_vftable__for__clData__;
  local_4._0_1_ = 5;
  uStack_80 = 0x5b2f08;
  _STL::
  _Rb_tree<int,struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Select1st<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>
  ::find((_Rb_tree<int,struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Select1st<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>
          *)(this + 0xac),(int *)&local_58);
  if (local_58 == *(undefined1 **)(this + 0xac)) {
    local_4._0_1_ = 3;
    clDataList::~clDataList((clDataList *)&local_54);
    local_4 = CONCAT31(local_4._1_3_,1);
    clDataList::~clDataList((clDataList *)&local_3c);
    local_4 = 0xffffffff;
    clDataList::~clDataList((clDataList *)&local_24);
  }
  else {
    local_58[0x98] = 0;
    piVar4 = (int *)**(int **)(this + 0x9c);
    local_64 = piVar4;
    if (piVar4 != *(int **)(this + 0x9c)) {
      do {
        local_60[0] = *(int *)piVar4[2];
        iVar1 = *(int *)(piVar4[2] + 4);
        if (iVar1 == param_1) {
          local_64 = piVar4;
          EmptyInboxForLobbySrv(this,param_1);
          clDataList::Add((clDataList *)&local_54,&param_2);
          clDataList::Add((clDataList *)&local_54,local_60);
          uStack_80 = 0x5b2fb2;
          clDataList::GetIndex(*(clDataList **)(local_64[2] + 0x10),local_60 + 1,0);
          clDataList::Add((clDataList *)&local_24,local_60 + 1);
          clDataList::Add((clDataList *)&local_24,(clDataList *)&local_54);
          local_58 = (undefined1 *)0x27;
          clDataList::Add((clDataList *)&local_3c,(int *)&local_58);
          clDataList::Add((clDataList *)&local_3c,(clDataList *)&local_24);
          local_58 = acStack_8c;
          clDataList::clDataList(acStack_8c,(clDataList *)&local_3c);
          local_4._0_1_ = 5;
          ppsVar3 = _STL::
                    _List_iterator<struct_stLobbyMsgData*,struct__STL::_Nonconst_traits<struct_stLobbyMsgData*>_>
                    ::operator*((_List_iterator<struct_stLobbyMsgData*,struct__STL::_Nonconst_traits<struct_stLobbyMsgData*>_>
                                 *)&local_64);
          PutMessage(this,2,local_60[0],iVar1,0xd1,(*ppsVar3)[0xc]);
          piVar4 = local_64;
          if (*(undefined4 **)(local_64[2] + 0x10) != (undefined4 *)0x0) {
            (**(code **)**(undefined4 **)(local_64[2] + 0x10))();
          }
          ExtAlloc_Free_4();
          piVar2 = (int *)piVar4[1];
          piVar4 = (int *)*piVar4;
          *piVar2 = (int)piVar4;
          piVar4[1] = (int)piVar2;
          ExtAlloc_Free_4();
        }
        else {
          piVar4 = (int *)*piVar4;
        }
        local_64 = piVar4;
      } while (piVar4 != *(int **)(this + 0x9c));
    }
    local_54 = &clDataList::_vftable__for__clData__;
    local_48[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
    local_4._0_1_ = 7;
    clPointerList<class_clData*>::~clPointerList<class_clData*>
              ((clPointerList<class_clData*> *)local_48);
    local_3c = &clDataList::_vftable__for__clData__;
    local_54 = &clData::_vftable_;
    local_30[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
    local_4 = CONCAT31(local_4._1_3_,8);
    clPointerList<class_clData*>::~clPointerList<class_clData*>
              ((clPointerList<class_clData*> *)local_30);
    local_3c = &clData::_vftable_;
    local_24 = &clDataList::_vftable__for__clData__;
    local_18[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
    local_4 = 9;
    clPointerList<class_clData*>::~clPointerList<class_clData*>
              ((clPointerList<class_clData*> *)local_18);
  }
  ExceptionList = local_c;
  return;
}




/* from: libgsclient:GSLobbySrvConnection.cpp
   addr: 005B30F0 */

uchar __thiscall
CLobbySrvConnectionList::LobbyServerFinishConnection(CLobbySrvConnectionList *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(this + 0xac);
  iVar3 = iVar1;
  iVar2 = *(int *)(iVar1 + 4);
  while (iVar2 != 0) {
    if (*(int *)(iVar2 + 0x10) < param_1) {
      iVar2 = *(int *)(iVar2 + 0xc);
    }
    else {
      iVar3 = iVar2;
      iVar2 = *(int *)(iVar2 + 8);
    }
  }
  if ((iVar3 == iVar1) || (param_1 < *(int *)(iVar3 + 0x10))) {
    iVar3 = iVar1;
  }
  if (iVar3 == *(int *)(this + 0xac)) {
    return '\0';
  }
  SendBufferedMessage(this,param_1);
  this[0x1d8] = (CLobbySrvConnectionList)0x1;
  *(undefined1 *)(iVar3 + 0x98) = 2;
  return '\x01';
}




/* from: libgsclient:GSLobbySrvConnection.cpp
   addr: 005B3150 */

void __thiscall
CLobbySrvConnectionList::SendBufferedMessage(CLobbySrvConnectionList *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  
  piVar3 = (int *)**(int **)(this + 0x9c);
  if (piVar3 != *(int **)(this + 0x9c)) {
    do {
      puVar4 = (undefined4 *)*piVar3;
      iVar1 = piVar3[2];
      if (*(int *)(iVar1 + 4) == param_1) {
        CConnectionList::SendMessageA
                  ((CConnectionList *)this,param_1,*(uchar *)(iVar1 + 8),*(uchar *)(iVar1 + 0xc),
                   *(clDataList **)(iVar1 + 0x10));
        if (*(undefined4 **)(piVar3[2] + 0x10) != (undefined4 *)0x0) {
          (**(code **)**(undefined4 **)(piVar3[2] + 0x10))(1);
        }
        ExtAlloc_Free_4(piVar3[2]);
        puVar2 = (undefined4 *)piVar3[1];
        puVar4 = (undefined4 *)*piVar3;
        *puVar2 = puVar4;
        puVar4[1] = puVar2;
        ExtAlloc_Free_4(piVar3);
      }
      piVar3 = puVar4;
    } while (puVar4 != *(undefined4 **)(this + 0x9c));
  }
  return;
}




/* from: libgsclient:GSLobbySrvConnection.cpp
   addr: 005B31C0 */

uchar __thiscall
CLobbySrvConnectionList::RouterFinishConnection
          (CLobbySrvConnectionList *this,int param_1,char *param_2,ushort param_3,uchar param_4,
          ushort param_5)

{
  uchar uVar1;
  _Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_> *p_Var2;
  CConnection *pCVar3;
  undefined2 in_stack_0000000e;
  undefined3 in_stack_00000011;
  undefined2 in_stack_00000016;
  undefined **local_3c;
  undefined4 *local_38;
  undefined4 local_34;
  undefined **local_30 [2];
  undefined8 *local_28;
  undefined **local_24;
  undefined4 *local_20;
  undefined4 local_1c;
  undefined **local_18 [2];
  undefined8 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005cbc40;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar1 = IsLobbyServerValid(this,param_1);
  if (uVar1 == '\0') {
    uVar1 = AddLobbySrvToList(this,param_1,param_2,(ushort)_param_3);
    if (uVar1 == '\0') {
      ExceptionList = local_c;
      return '\0';
    }
  }
  else {
    ChangeLobbyServer(this,param_1,param_2,(ushort)_param_3);
  }
  p_Var2 = _STL::
           _Rb_tree<int,struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Select1st<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>
           ::M_find((_Rb_tree<int,struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Select1st<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>
                     *)(this + 0xac),&param_1);
  if (((p_Var2 != *(_Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_> **)
                   (this + 0xac)) &&
      (pCVar3 = CConnectionList::GetConnection((CConnectionList *)this,param_1),
      pCVar3 == (CConnection *)0x0)) &&
     (p_Var2[0x98] == (_Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>)0x1)) {
    uVar1 = CConnectionList::AddConnection
                      ((CConnectionList *)this,(char *)(p_Var2 + 0x14),*(ushort *)(p_Var2 + 0x96),
                       '\x02',0x1e,param_1,0);
    if (uVar1 == '\0') {
      p_Var2[0x98] = (_Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>)0x0;
      ConnectFailed(this,param_1,0x10);
    }
    else {
      pCVar3 = CConnectionList::GetConnection((CConnectionList *)this,param_1);
      local_38 = &clDataList::_vbtable__for__clData__;
      local_28 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
      local_34 = 3;
      local_3c = &clData::_vftable_;
      local_4 = 0;
      clPointerList<class_clData*>::clPointerList<class_clData*>
                ((clPointerList<class_clData*> *)local_30);
      local_3c = &clDataList::_vftable__for__clData__;
      local_30[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
      local_20 = &clDataList::_vbtable__for__clData__;
      local_10 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
      local_1c = 3;
      local_24 = &clData::_vftable_;
      local_4._0_1_ = 2;
      local_4._1_3_ = 0;
      clPointerList<class_clData*>::clPointerList<class_clData*>
                ((clPointerList<class_clData*> *)local_18);
      local_24 = &clDataList::_vftable__for__clData__;
      local_18[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
      local_4._0_1_ = 3;
      clDataList::Add((clDataList *)&local_3c,(char *)(this + 0xbc));
      _param_4 = (uint)(param_4 != '\0');
      clDataList::Add((clDataList *)&local_3c,(int *)&param_4);
      clDataList::Add((clDataList *)&local_3c,(char *)(this + 0xcc));
      clDataList::Add((clDataList *)&local_3c,(char *)(this + 0x14d));
      _param_4 = _param_5 & 0xffff;
      clDataList::Add((clDataList *)&local_3c,(int *)&param_4);
      uVar1 = CConnection::SendMessageA(pCVar3,0xd2,'\x02',(clDataList *)&local_3c);
      if (uVar1 != '\0') {
        local_18[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
        local_24 = &clDataList::_vftable__for__clData__;
        local_4 = CONCAT31(local_4._1_3_,6);
        clPointerList<class_clData*>::~clPointerList<class_clData*>
                  ((clPointerList<class_clData*> *)local_18);
        local_24 = &clData::_vftable_;
        local_3c = &clDataList::_vftable__for__clData__;
        local_30[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
        local_4 = 7;
        clPointerList<class_clData*>::~clPointerList<class_clData*>
                  ((clPointerList<class_clData*> *)local_30);
        ExceptionList = local_c;
        return '\x01';
      }
      p_Var2[0x98] = (_Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>)0x0;
      ConnectFailed(this,param_1,0x11);
      local_18[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
      local_24 = &clDataList::_vftable__for__clData__;
      local_4 = CONCAT31(local_4._1_3_,4);
      clPointerList<class_clData*>::~clPointerList<class_clData*>
                ((clPointerList<class_clData*> *)local_18);
      local_24 = &clData::_vftable_;
      local_3c = &clDataList::_vftable__for__clData__;
      local_30[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
      local_4 = 5;
      clPointerList<class_clData*>::~clPointerList<class_clData*>
                ((clPointerList<class_clData*> *)local_30);
    }
  }
  ExceptionList = local_c;
  return '\0';
}




/* from: libgsclient:GSLobbySrvConnection.cpp
   addr: 005B3450 */

uchar __thiscall CLobbySrvConnectionList::ConnectStart(CLobbySrvConnectionList *this,int param_1)

{
  uchar uVar1;
  int local_44;
  _Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_> *local_40;
  undefined **local_3c;
  undefined4 *local_38;
  undefined4 local_34;
  undefined **local_30 [2];
  undefined8 *local_28;
  undefined **local_24;
  undefined4 *local_20;
  undefined4 local_1c;
  undefined **local_18 [2];
  undefined8 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005cbc90;
  local_c = ExceptionList;
  local_40 = (_Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_> *)0x0;
  ExceptionList = &local_c;
  local_40 = _STL::
             _Rb_tree<int,struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Select1st<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>
             ::M_find((_Rb_tree<int,struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Select1st<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>
                       *)(this + 0xac),&param_1);
  if (local_40 ==
      *(_Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_> **)(this + 0xac)) {
    ExceptionList = local_c;
    return '\0';
  }
  local_20 = &clDataList::_vbtable__for__clData__;
  local_10 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
  local_1c = 3;
  local_24 = &clData::_vftable_;
  local_4 = 0;
  clPointerList<class_clData*>::clPointerList<class_clData*>
            ((clPointerList<class_clData*> *)local_18);
  local_24 = &clDataList::_vftable__for__clData__;
  local_18[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_38 = &clDataList::_vbtable__for__clData__;
  local_28 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
  local_34 = 3;
  local_3c = &clData::_vftable_;
  local_4._0_1_ = 2;
  local_4._1_3_ = 0;
  clPointerList<class_clData*>::clPointerList<class_clData*>
            ((clPointerList<class_clData*> *)local_30);
  local_3c = &clDataList::_vftable__for__clData__;
  local_30[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_4._0_1_ = 3;
  clDataList::Add((clDataList *)&local_24,&param_1);
  local_44 = 3;
  clDataList::Add((clDataList *)&local_3c,&local_44);
  clDataList::Add((clDataList *)&local_3c,(clDataList *)&local_24);
  uVar1 = CConnection::SendMessageA
                    (*(CConnection **)(this + 0x1d0),0xd1,'\x01',(clDataList *)&local_3c);
  if (uVar1 == '\0') {
    local_3c = &clDataList::_vftable__for__clData__;
    local_30[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
    local_4 = CONCAT31(local_4._1_3_,4);
    clPointerList<class_clData*>::~clPointerList<class_clData*>
              ((clPointerList<class_clData*> *)local_30);
    local_3c = &clData::_vftable_;
    local_24 = &clDataList::_vftable__for__clData__;
    local_18[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
    local_4 = 5;
    clPointerList<class_clData*>::~clPointerList<class_clData*>
              ((clPointerList<class_clData*> *)local_18);
    ExceptionList = local_c;
    return '\0';
  }
  local_40[0x98] = (_Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>)0x1;
  local_3c = &clDataList::_vftable__for__clData__;
  local_30[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_4 = CONCAT31(local_4._1_3_,6);
  clPointerList<class_clData*>::~clPointerList<class_clData*>
            ((clPointerList<class_clData*> *)local_30);
  local_3c = &clData::_vftable_;
  local_24 = &clDataList::_vftable__for__clData__;
  local_18[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_4 = 7;
  clPointerList<class_clData*>::~clPointerList<class_clData*>
            ((clPointerList<class_clData*> *)local_18);
  ExceptionList = local_c;
  return '\x01';
}




/* from: libgsclient:GSLobbySrvConnection.cpp
   addr: 005B3620 */

uchar __thiscall CLobbySrvConnectionList::Disconnect(CLobbySrvConnectionList *this,int param_1)

{
  uchar uVar1;
  _Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_> *p_Var2;
  
  p_Var2 = _STL::
           _Rb_tree<int,struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Select1st<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>
           ::M_find((_Rb_tree<int,struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Select1st<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>
                     *)(this + 0xac),&param_1);
  if (p_Var2 == *(_Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_> **)
                 (this + 0xac)) {
    return '\0';
  }
  p_Var2[0x98] = (_Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>)0x0;
  *(undefined4 *)(p_Var2 + 0xa4) = 0;
  uVar1 = CConnectionList::Disconnect((CConnectionList *)this,param_1);
  return uVar1;
}




/* from: libgsclient:GSLobbySrvConnection.cpp
   addr: 005B3660 */

void __thiscall CLobbySrvConnectionList::EmptyOutbox(CLobbySrvConnectionList *this)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = (int *)**(int **)(this + 0x9c);
  if (piVar3 != *(int **)(this + 0x9c)) {
    do {
      if (*(undefined4 **)(piVar3[2] + 0x10) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(piVar3[2] + 0x10))(1);
      }
      ExtAlloc_Free_4(piVar3[2]);
      piVar1 = (int *)piVar3[1];
      piVar2 = (int *)*piVar3;
      *piVar1 = (int)piVar2;
      piVar2[1] = (int)piVar1;
      ExtAlloc_Free_4(piVar3);
      piVar3 = piVar2;
    } while (piVar2 != (int *)*(int *)(this + 0x9c));
  }
  return;
}




/* from: libgsclient:GSLobbySrvConnection.cpp
   addr: 005B36B0 */

void __thiscall CLobbySrvConnectionList::EmptyInbox(CLobbySrvConnectionList *this)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = (int *)**(int **)(this + 0xa4);
  if (piVar3 != *(int **)(this + 0xa4)) {
    do {
      if (*(undefined4 **)(piVar3[2] + 0x10) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(piVar3[2] + 0x10))(1);
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




/* from: libgsclient:GSLobbySrvConnection.cpp
   addr: 005B3700 */

uchar __thiscall
CLobbySrvConnectionList::IsLobbyServerValid(CLobbySrvConnectionList *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(this + 0xac);
  iVar3 = iVar1;
  iVar2 = *(int *)(iVar1 + 4);
  while (iVar2 != 0) {
    if (*(int *)(iVar2 + 0x10) < param_1) {
      iVar2 = *(int *)(iVar2 + 0xc);
    }
    else {
      iVar3 = iVar2;
      iVar2 = *(int *)(iVar2 + 8);
    }
  }
  if ((iVar3 == iVar1) || (param_1 < *(int *)(iVar3 + 0x10))) {
    iVar3 = iVar1;
  }
  return iVar3 != *(int *)(this + 0xac);
}




/* from: libgsclient:GSLobbySrvConnection.cpp
   addr: 005B3750 */

CCurMessage * __thiscall CLobbySrvConnectionList::ReadMessage(CLobbySrvConnectionList *this)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  CCurMessage *pCVar5;
  input_iterator_tag local_19;
  undefined4 *local_18;
  undefined4 local_14;
  CCurMessage *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005cbcaa;
  local_c = ExceptionList;
  local_18 = *(undefined4 **)(this + 0xa4);
  local_14 = *local_18;
  ExceptionList = &local_c;
  iVar4 = _STL::distance((_List_iterator<class_clData*,struct__STL::_Const_traits<class_clData*>_> *
                         )&local_14,
                         (_List_iterator<class_clData*,struct__STL::_Const_traits<class_clData*>_> *
                         )&local_18,&local_19);
  if (iVar4 != 0) {
    iVar4 = **(int **)(this + 0xa4);
    piVar1 = *(int **)(iVar4 + 8);
    iVar2 = *piVar1;
    iVar3 = piVar1[1];
    local_10 = (CCurMessage *)ExtAlloc_Malloc_4(0x1c);
    local_4 = 0;
    if (local_10 == (CCurMessage *)0x0) {
      pCVar5 = (CCurMessage *)0x0;
    }
    else {
      iVar4 = *(int *)(iVar4 + 8);
      pCVar5 = (CCurMessage *)
               CCurMessage::CCurMessage
                         (local_10,*(uchar *)(iVar4 + 8),*(clDataList **)(iVar4 + 0x10),0);
    }
    local_4 = 0xffffffff;
    *(int *)(pCVar5 + 0x18) = iVar3;
    RemoveMessageFromInbox(this,iVar3,iVar2);
    ExceptionList = local_c;
    return pCVar5;
  }
  pCVar5 = CConnectionList::ReadMessage((CConnectionList *)this);
  ExceptionList = local_c;
  return pCVar5;
}




/* from: libgsclient:GSLobbySrvConnection.cpp
   addr: 005B3830 */

uchar __thiscall
CLobbySrvConnectionList::RemoveLobbySrvFromList(CLobbySrvConnectionList *this,int param_1)

{
  undefined **ppuVar1;
  uchar uVar2;
  _Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_> *p_Var3;
  stLobbyMsgData **ppsVar4;
  int *piVar5;
  undefined4 uStack_88;
  undefined4 uStack_84;
  stLobbyMsgData *psStack_80;
  int iStack_7c;
  int **ppiStack_70;
  int *piStack_6c;
  int *piStack_68;
  undefined1 **local_64;
  int *local_4c;
  undefined **local_48;
  undefined1 local_44 [4];
  undefined1 *puStack_40;
  undefined **local_3c;
  int *local_38 [2];
  undefined **local_30 [2];
  undefined8 *local_28;
  undefined **local_24;
  undefined4 *local_20;
  undefined4 uStack_1c;
  undefined **local_18;
  list<class_clRcvElement*,class_ExtAlloc::Allocator<class_clRcvElement*>_> local_14 [4];
  undefined8 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005cbcf8;
  local_c = ExceptionList;
  local_4c = (int *)0x0;
  local_20 = &clDataList::_vbtable__for__clData__;
  local_10 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
  local_64 = (undefined1 **)0x5b3874;
  ExceptionList = &local_c;
  clData::clData((clData *)&local_24,3);
  local_4 = 0;
  clPointerList<class_clData*>::clPointerList<class_clData*>
            ((clPointerList<class_clData*> *)&local_18);
  local_24 = &clDataList::_vftable__for__clData__;
  local_18 = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_4 = 1;
  local_38[0] = &clDataList::_vbtable__for__clData__;
  local_28 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
  local_64 = (undefined1 **)0x5b38b4;
  clData::clData((clData *)&local_3c,3);
  local_4._0_1_ = 2;
  clPointerList<class_clData*>::clPointerList<class_clData*>
            ((clPointerList<class_clData*> *)local_30);
  local_3c = &clDataList::_vftable__for__clData__;
  local_30[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_4._0_1_ = 3;
  p_Var3 = _STL::
           _Rb_tree<int,struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Select1st<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>
           ::M_find((_Rb_tree<int,struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Select1st<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>
                     *)(this + 0xac),&param_1);
  if (p_Var3 == *(_Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_> **)
                 (this + 0xac)) {
    local_4 = CONCAT31(local_4._1_3_,1);
    clDataList::~clDataList((clDataList *)&local_3c);
    local_4 = 0xffffffff;
    clDataList::~clDataList((clDataList *)&local_24);
    ExceptionList = local_c;
    return '\0';
  }
  local_4c = (int *)**(int **)(p_Var3 + 0x9c);
  if (local_4c != *(int **)(p_Var3 + 0x9c)) {
    do {
      clDataList::Add((clDataList *)&local_24,local_4c + 2);
      clDataList::Add((clDataList *)&local_24,&param_1);
      local_48 = (undefined **)0x37;
      clDataList::Add((clDataList *)&local_3c,(int *)&local_48);
      clDataList::Add((clDataList *)&local_3c,(clDataList *)&local_24);
      local_48 = (undefined **)&ppiStack_70;
      iStack_7c = 0x5b3997;
      clDataList::clDataList((clDataList *)&ppiStack_70,(clDataList *)&local_3c);
      local_4._0_1_ = 3;
      ppsVar4 = _STL::
                _List_iterator<struct_stLobbyMsgData*,struct__STL::_Nonconst_traits<struct_stLobbyMsgData*>_>
                ::operator*((_List_iterator<struct_stLobbyMsgData*,struct__STL::_Nonconst_traits<struct_stLobbyMsgData*>_>
                             *)&local_4c);
      psStack_80 = *ppsVar4;
      iStack_7c = param_1;
      uStack_84 = 2;
      uStack_88 = 0x5b39bd;
      PutMessage(this);
      local_64 = (undefined1 **)&stack0xffffffa0;
      ppuVar1 = local_18 + 4;
      piStack_68 = (int *)0x5b39d8;
      _STL::list<class_clRcvElement*,class_ExtAlloc::Allocator<class_clRcvElement*>_>::begin
                (local_14);
      local_64 = (undefined1 **)local_44;
      piStack_68 = (int *)0x5b39e4;
      (*(code *)*ppuVar1)();
      ppiStack_70 = &piStack_6c;
      piStack_6c = local_38[0];
      piStack_68 = local_38[0];
      ppuVar1 = local_3c + 4;
      _STL::list<class_clRcvElement*,class_ExtAlloc::Allocator<class_clRcvElement*>_>::begin
                ((list<class_clRcvElement*,class_ExtAlloc::Allocator<class_clRcvElement*>_> *)
                 local_38);
      ppiStack_70 = &local_4c;
      (*(code *)*ppuVar1)();
      local_4c = (int *)*local_4c;
    } while (local_4c != (int *)*(int *)(p_Var3 + 0x9c));
  }
  piVar5 = (int *)**(int **)(p_Var3 + 0x9c);
  if (piVar5 != *(int **)(p_Var3 + 0x9c)) {
    do {
      piVar5 = (int *)*piVar5;
      ExtAlloc_Free_4();
    } while (piVar5 != (int *)*(int *)(p_Var3 + 0x9c));
  }
  *(undefined4 *)*(undefined4 *)(p_Var3 + 0x9c) = *(undefined4 *)(p_Var3 + 0x9c);
  *(int *)(*(int *)(p_Var3 + 0x9c) + 4) = *(int *)(p_Var3 + 0x9c);
  uVar2 = IsLobbyServerConnected(this,param_1);
  if (uVar2 != '\0') {
    clDataList::Add((clDataList *)&local_24,&param_1);
    local_48 = (undefined **)0x12;
    clDataList::Add((clDataList *)&local_3c,(int *)&local_48);
    clDataList::Add((clDataList *)&local_3c,(clDataList *)&local_24);
    puStack_40 = (undefined1 *)&ppiStack_70;
    iStack_7c = 0x5b3aaa;
    clDataList::clDataList((clDataList *)&ppiStack_70,(clDataList *)&local_3c);
    iStack_7c = param_1;
    psStack_80 = (stLobbyMsgData *)0x0;
    uStack_84 = 2;
    uStack_88 = 0x5b3ac1;
    PutMessage(this);
    Disconnect(this,param_1);
  }
  local_64 = (undefined1 **)&stack0xffffffa0;
  ppuVar1 = local_18 + 4;
  piStack_68 = (int *)0x5b3ae8;
  _STL::list<class_clRcvElement*,class_ExtAlloc::Allocator<class_clRcvElement*>_>::begin(local_14);
  local_64 = &puStack_40;
  piStack_68 = (int *)0x5b3af4;
  (*(code *)*ppuVar1)();
  ppiStack_70 = &piStack_6c;
  piStack_6c = local_38[0];
  piStack_68 = local_38[0];
  ppuVar1 = local_3c + 4;
  _STL::list<class_clRcvElement*,class_ExtAlloc::Allocator<class_clRcvElement*>_>::begin
            ((list<class_clRcvElement*,class_ExtAlloc::Allocator<class_clRcvElement*>_> *)local_38);
  ppiStack_70 = &local_4c;
  (*(code *)*ppuVar1)();
  _STL::
  _Rb_tree<int,struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Select1st<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>
  ::erase((_Rb_tree<int,struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Select1st<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>
           *)(this + 0xac));
  if (*(int *)(this + 0xb0) == 0) {
    clDataList::Add((clDataList *)&local_3c,(int *)local_14);
    clDataList::Add((clDataList *)&stack0xffffffac,(int *)&stack0xffffffa0);
    clDataList::Add((clDataList *)&stack0xffffffac,(clDataList *)&local_3c);
    clDataList::clDataList((clDataList *)&uStack_88,(clDataList *)&stack0xffffffac);
    PutMessage(this,2,0,0,0xd1,0);
  }
  local_48 = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  uStack_1c = CONCAT31(uStack_1c._1_3_,5);
  clPointerList<class_clData*>::~clPointerList<class_clData*>
            ((clPointerList<class_clData*> *)&local_48);
  local_3c = &clDataList::_vftable__for__clData__;
  local_30[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  uStack_1c = 6;
  clPointerList<class_clData*>::~clPointerList<class_clData*>
            ((clPointerList<class_clData*> *)local_30);
  ExceptionList = local_24;
  return '\x01';
}




/* from: libgsclient:GSLobbySrvConnection.cpp
   addr: 005B3BF0 */

uchar __thiscall CLobbySrvConnectionList::RemoveAllLobbySrvFromList(CLobbySrvConnectionList *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(*(int *)(this + 0xac) + 8);
  if (iVar2 != *(int *)(this + 0xac)) {
    do {
      iVar3 = *(int *)(iVar2 + 0xc);
      if (iVar3 == 0) {
        iVar1 = *(int *)(iVar2 + 4);
        iVar3 = iVar2;
        if (iVar2 == *(int *)(iVar1 + 0xc)) {
          do {
            iVar3 = iVar1;
            iVar1 = *(int *)(iVar3 + 4);
          } while (iVar3 == *(int *)(iVar1 + 0xc));
        }
        if (*(int *)(iVar3 + 0xc) != iVar1) {
          iVar3 = iVar1;
        }
      }
      else {
        for (iVar1 = *(int *)(iVar3 + 8); iVar1 != 0; iVar1 = *(int *)(iVar1 + 8)) {
          iVar3 = iVar1;
        }
      }
      RemoveLobbySrvFromList(this,*(int *)(iVar2 + 0x10));
      iVar2 = iVar3;
    } while (iVar3 != *(int *)(this + 0xac));
  }
  return '\x01';
}




/* from: libgsclient:GSLobbySrvConnection.cpp
   addr: 005B3C50 */

uchar __thiscall
CLobbySrvConnectionList::IsLobbyServerConnected(CLobbySrvConnectionList *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(this + 0xac);
  iVar3 = iVar1;
  iVar2 = *(int *)(iVar1 + 4);
  while (iVar2 != 0) {
    if (*(int *)(iVar2 + 0x10) < param_1) {
      iVar2 = *(int *)(iVar2 + 0xc);
    }
    else {
      iVar3 = iVar2;
      iVar2 = *(int *)(iVar2 + 8);
    }
  }
  if ((iVar3 == iVar1) || (param_1 < *(int *)(iVar3 + 0x10))) {
    iVar3 = iVar1;
  }
  if ((iVar3 != *(int *)(this + 0xac)) && (*(char *)(iVar3 + 0x98) == '\x02')) {
    return '\x01';
  }
  return '\0';
}




/* from: libgsclient:GSLobbySrvConnection.cpp
   addr: 005B3CB0 */

void __thiscall
CLobbySrvConnectionList::EmptyInboxForLobbySrv(CLobbySrvConnectionList *this,int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  piVar3 = (int *)**(int **)(this + 0xa4);
  if (piVar3 != *(int **)(this + 0xa4)) {
    do {
      if (*(int *)(piVar3[2] + 4) == param_1) {
        puVar1 = *(undefined4 **)(piVar3[2] + 0x10);
        if (puVar1 != (undefined4 *)0x0) {
          (**(code **)*puVar1)(1);
        }
        ExtAlloc_Free_4(piVar3[2]);
        piVar2 = (int *)piVar3[1];
        piVar4 = (int *)*piVar3;
        *piVar2 = (int)piVar4;
        piVar4[1] = (int)piVar2;
        ExtAlloc_Free_4(piVar3);
      }
      else {
        piVar4 = (int *)*piVar3;
      }
      piVar3 = piVar4;
    } while (piVar4 != *(int **)(this + 0xa4));
  }
  return;
}




/* from: libgsclient:GSLobbySrvConnection.cpp
   addr: 005B3D10 */

void __thiscall
CLobbySrvConnectionList::RemoveMessageFromInbox
          (CLobbySrvConnectionList *this,int param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  
  piVar3 = (int *)**(int **)(this + 0xa4);
  if (piVar3 != *(int **)(this + 0xa4)) {
    do {
      puVar4 = (undefined4 *)*piVar3;
      piVar1 = (int *)piVar3[2];
      if ((piVar1[1] == param_1) && (*piVar1 == param_2)) {
        if ((undefined4 *)piVar1[4] != (undefined4 *)0x0) {
          (*(code *)**(undefined4 **)piVar1[4])(1);
        }
        ExtAlloc_Free_4(piVar3[2]);
        puVar2 = (undefined4 *)piVar3[1];
        puVar4 = (undefined4 *)*piVar3;
        *puVar2 = puVar4;
        puVar4[1] = puVar2;
        ExtAlloc_Free_4(piVar3);
      }
      piVar3 = puVar4;
    } while (puVar4 != *(undefined4 **)(this + 0xa4));
  }
  return;
}




/* from: libgsclient:GSLobbySrvConnection.cpp
   addr: 005B3D80 */

uchar __thiscall
CLobbySrvConnectionList::SendMessageA
          (CLobbySrvConnectionList *this,int param_1,int param_2,undefined4 param_3,
          undefined4 param_4,undefined **param_6,undefined4 param_7,undefined4 param_8,
          undefined **param_9)

{
  uchar uVar1;
  CConnection *pCVar2;
  _List_iterator<class_clData*,struct__STL::_Const_traits<class_clData*>_> *p_Var3;
  int iVar4;
  clDataList acStack_8c [4];
  undefined4 uStack_88;
  input_iterator_tag local_61;
  undefined1 *local_60;
  undefined1 *local_5c [2];
  undefined **local_54;
  undefined4 *local_50;
  undefined **local_48 [2];
  undefined8 *local_40;
  undefined **local_3c;
  undefined4 *local_38;
  undefined **local_30 [2];
  undefined8 *local_28;
  undefined **local_24;
  undefined4 *local_20;
  undefined **local_18 [2];
  undefined8 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_005cbd50;
  local_c = ExceptionList;
  local_5c[0] = (undefined1 *)0x0;
  local_4 = 0;
  local_20 = &clDataList::_vbtable__for__clData__;
  local_10 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
  ExceptionList = &local_c;
  clData::clData((clData *)&local_24,3);
  local_4._0_1_ = 1;
  clPointerList<class_clData*>::clPointerList<class_clData*>
            ((clPointerList<class_clData*> *)local_18);
  local_24 = &clDataList::_vftable__for__clData__;
  local_18[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_4._0_1_ = 2;
  local_50 = &clDataList::_vbtable__for__clData__;
  local_40 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
  clData::clData((clData *)&local_54,3);
  local_4._0_1_ = 3;
  clPointerList<class_clData*>::clPointerList<class_clData*>
            ((clPointerList<class_clData*> *)local_48);
  local_54 = &clDataList::_vftable__for__clData__;
  local_48[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_4._0_1_ = 4;
  local_38 = &clDataList::_vbtable__for__clData__;
  local_28 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
  clData::clData((clData *)&local_3c,3);
  local_4._0_1_ = 5;
  clPointerList<class_clData*>::clPointerList<class_clData*>
            ((clPointerList<class_clData*> *)local_30);
  local_3c = &clDataList::_vftable__for__clData__;
  local_30[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_4._0_1_ = 6;
  uVar1 = IsLobbyServerValid(this,param_2);
  if (uVar1 == '\0') {
    EmptyInboxForLobbySrv(this,param_2);
    local_60 = (undefined1 *)0x13;
    clDataList::Add((clDataList *)&local_3c,(int *)&local_60);
    clDataList::Add((clDataList *)&local_3c,&param_1);
    clDataList::Add((clDataList *)&local_24,&param_3);
    clDataList::Add((clDataList *)&local_24,(clDataList *)&local_3c);
    local_60 = (undefined1 *)0x27;
    clDataList::Add((clDataList *)&local_54,(int *)&local_60);
    clDataList::Add((clDataList *)&local_54,(clDataList *)&local_24);
    local_60 = acStack_8c;
    clDataList::clDataList(acStack_8c,(clDataList *)&local_54);
    PutMessage(this,2,param_1,param_2,0xd1,param_4);
    local_4._0_1_ = 4;
    clDataList::~clDataList((clDataList *)&local_3c);
    local_4._0_1_ = 2;
    clDataList::~clDataList((clDataList *)&local_54);
    local_4 = (uint)local_4._1_3_ << 8;
    clDataList::~clDataList((clDataList *)&local_24);
    local_4 = 0xffffffff;
    clDataList::~clDataList((clDataList *)&param_6);
    param_4._0_1_ = '\0';
  }
  else {
    _STL::
    _Rb_tree<int,struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Select1st<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>
    ::find((_Rb_tree<int,struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Select1st<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>
            *)(this + 0xac),(int *)&local_60);
    pCVar2 = CConnectionList::GetConnection((CConnectionList *)this,param_2);
    if (pCVar2 == (CConnection *)0x0) {
      if (local_60[0x98] == '\0') {
        ConnectStart(this,param_2);
      }
      clDataList::Add((clDataList *)&local_54,&param_3);
      clDataList::Add((clDataList *)&local_54,(clDataList *)&param_6);
      local_5c[0] = acStack_8c;
      clDataList::clDataList(acStack_8c,(clDataList *)&local_54);
      PutMessage(this,1,param_1,param_2,0xd1,param_4);
      local_4._0_1_ = 4;
      clDataList::~clDataList((clDataList *)&local_3c);
      local_4._0_1_ = 2;
      clDataList::~clDataList((clDataList *)&local_54);
      local_4 = (uint)local_4._1_3_ << 8;
      clDataList::~clDataList((clDataList *)&local_24);
      param_6 = &clDataList::_vftable__for__clData__;
      param_9 = &clDataList::_vftable__for__clPointerList<class_clData*>__;
      local_4 = 7;
      clPointerList<class_clData*>::~clPointerList<class_clData*>
                ((clPointerList<class_clData*> *)&param_9);
      param_4._0_1_ = '\x01';
    }
    else {
      local_5c[0] = *(undefined1 **)(local_60 + 0x9c);
      p_Var3 = (_List_iterator<class_clData*,struct__STL::_Const_traits<class_clData*>_> *)
               _STL::list<class_clRcvElement*,class_ExtAlloc::Allocator<class_clRcvElement*>_>::
               begin((list<class_clRcvElement*,class_ExtAlloc::Allocator<class_clRcvElement*>_> *)
                     (local_60 + 0x9c));
      local_61 = param_2._0_1_;
      iVar4 = _STL::distance(p_Var3,(_List_iterator<class_clData*,struct__STL::_Const_traits<class_clData*>_>
                                     *)local_5c,&local_61);
      if (iVar4 == 0) {
        *(undefined4 *)(local_60 + 0xa4) = 0;
      }
      clDataList::Add((clDataList *)&local_54,&param_3);
      clDataList::Add((clDataList *)&local_54,(clDataList *)&param_6);
      uStack_88 = 0x5b40d3;
      uVar1 = CConnectionList::SendMessageA
                        ((CConnectionList *)this,param_2,0xd1,(uchar)param_4,(clDataList *)&local_54
                        );
      param_4 = CONCAT31(param_4._1_3_,uVar1);
      local_4._0_1_ = 4;
      clDataList::~clDataList((clDataList *)&local_3c);
      local_4._0_1_ = 2;
      clDataList::~clDataList((clDataList *)&local_54);
      local_4 = (uint)local_4._1_3_ << 8;
      clDataList::~clDataList((clDataList *)&local_24);
      local_4 = 0xffffffff;
      clDataList::~clDataList((clDataList *)&param_6);
    }
  }
  ExceptionList = local_c;
  return (uchar)param_4;
}




/* from: libgsclient:GSLobbySrvConnection.cpp
   addr: 005B4140 */

void __thiscall
CLobbySrvConnectionList::PutMessage
          (CLobbySrvConnectionList *this,byte param_1,undefined4 param_2,undefined4 param_3,
          uint param_4,undefined4 *param_5,undefined **param_7,undefined4 param_8,undefined4 param_9
          ,undefined **param_10,undefined4 param_11)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  _List_node<class_clData*> *p_Var3;
  void *unaff_EBX;
  clData *local_14;
  clDataList *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_005cbda1;
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
    uVar2 = clDataList::clDataList(local_10,(clDataList *)&param_7);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  *(undefined4 *)local_14 = param_2;
  *(undefined4 *)(local_14 + 4) = param_3;
  *(undefined4 *)(local_14 + 0x10) = uVar2;
  local_14[0xc] = param_5._0_1_;
  *(uint *)(local_14 + 8) = param_4 & 0xff;
  if ((param_1 & 2) != 0) {
    _STL::list<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_>::end
              ((list<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_> *)
               (this + 0xa4));
    p_Var3 = _STL::list<class_clData*,class_ExtAlloc::Allocator<class_clData*>_>::M_create_node
                       ((list<class_clData*,class_ExtAlloc::Allocator<class_clData*>_> *)
                        (this + 0xa4),&local_14);
    puVar1 = *(undefined4 **)((int)param_5 + 4);
    *(undefined4 **)p_Var3 = param_5;
    *(undefined4 **)(p_Var3 + 4) = puVar1;
    *puVar1 = p_Var3;
    *(_List_node<class_clData*> **)((int)param_5 + 4) = p_Var3;
  }
  if ((param_1 & 1) != 0) {
    _STL::list<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_>::end
              ((list<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_> *)
               (this + 0x9c));
    p_Var3 = _STL::list<class_clData*,class_ExtAlloc::Allocator<class_clData*>_>::M_create_node
                       ((list<class_clData*,class_ExtAlloc::Allocator<class_clData*>_> *)
                        (this + 0x9c),&local_14);
    puVar1 = *(undefined4 **)((int)param_5 + 4);
    *(undefined4 **)p_Var3 = param_5;
    *(undefined4 **)(p_Var3 + 4) = puVar1;
    *puVar1 = p_Var3;
    *(_List_node<class_clData*> **)((int)param_5 + 4) = p_Var3;
  }
  param_7 = &clDataList::_vftable__for__clData__;
  param_5 = &param_10;
  param_10 = &clPointerList<class_clData*>::_vftable_;
  local_4 = 3;
  _STL::list<class_clRcvElement*,class_ExtAlloc::Allocator<class_clRcvElement*>_>::begin
            ((list<class_clRcvElement*,class_ExtAlloc::Allocator<class_clRcvElement*>_> *)&param_11)
  ;
  (*(code *)param_10[4])(&param_2);
  local_10 = (clDataList *)CONCAT31(local_10._1_3_,2);
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            ((list<class_clRcvElement*> *)&param_8);
  ExceptionList = unaff_EBX;
  return;
}




/* from: libgsclient:GSLobbySrvConnection.cpp
   addr: 005B42B0 */

uchar __thiscall
CLobbySrvConnectionList::AddLobbySrvToList
          (CLobbySrvConnectionList *this,int param_1,char *param_2,ushort param_3)

{
  _Rb_tree<int,struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Select1st<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>
  *this_00;
  _Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_> *p_Var1;
  uchar uVar2;
  _Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_> *p_Var3;
  _Rb_tree_node_base *p_Var4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  _Rb_tree_node_base *local_14c;
  Allocator<class_clData*> local_145;
  _List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
  local_144 [4];
  list<class_clData*,class_ExtAlloc::Allocator<class_clData*>_> *local_140;
  undefined1 local_13c [4];
  char local_138 [130];
  ushort local_b6;
  undefined1 local_b4;
  list<class_clData*,class_ExtAlloc::Allocator<class_clData*>_> local_b0 [4];
  undefined8 *local_ac;
  undefined4 local_a8;
  int local_a4;
  char local_a0 [130];
  ushort local_1e;
  undefined1 local_1c;
  _Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
  *local_18 [2];
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005cbde7;
  local_c = ExceptionList;
  this_00 = (_Rb_tree<int,struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Select1st<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>
             *)(this + 0xac);
  local_14c = (_Rb_tree_node_base *)0x0;
  p_Var1 = *(_Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_> **)this_00;
  ExceptionList = &local_c;
  p_Var3 = _STL::
           _Rb_tree<int,struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Select1st<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>
           ::M_find(this_00,&param_1);
  if (p_Var3 == p_Var1) {
    p_Var4 = *(_Rb_tree_node_base **)(*(_Rb_tree_node_base **)this_00 + 8);
    local_14c = p_Var4;
    if (p_Var4 != *(_Rb_tree_node_base **)this_00) {
      do {
        local_14c = p_Var4;
        if (param_1 < *(int *)(p_Var4 + 0x10)) break;
        p_Var4 = _STL::_Rb_global<bool>::M_increment(p_Var4);
        local_14c = p_Var4;
      } while (p_Var4 != *(_Rb_tree_node_base **)this_00);
    }
    local_ac = &ExtAlloc::list<int>::_vbtable_;
    local_4 = 0;
    _STL::list<class_clData*,class_ExtAlloc::Allocator<class_clData*>_>::
    list<class_clData*,class_ExtAlloc::Allocator<class_clData*>_>(local_b0,&local_145);
    local_4 = 1;
    local_b4 = 0;
    strncpy(local_138,param_2,0x80);
    local_b6 = param_3;
    local_a8 = 0;
    local_a4 = param_1;
    pcVar6 = local_138;
    pcVar7 = local_a0;
    for (iVar5 = 0x20; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar7 = pcVar7 + 4;
    }
    *pcVar7 = *pcVar6;
    local_1e = param_3;
    local_1c = local_b4;
    ExtAlloc::list<int>::list<int>((list<int> *)local_18,(list<int> *)local_b0);
    local_10 = local_a8;
    local_4._0_1_ = 2;
    _STL::
    _List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>::
    List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
              (local_144,
               (_List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
                *)&local_14c);
    _STL::
    _List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>::
    List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
              ((_List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
                *)&stack0xfffffe9c,local_144);
    _STL::
    _Rb_tree<int,struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Select1st<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>
    ::insert_unique(this_00,local_13c);
    local_140 = (list<class_clData*,class_ExtAlloc::Allocator<class_clData*>_> *)local_18;
    local_4 = CONCAT31(local_4._1_3_,3);
    _STL::_List_base<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_>::clear
              ((_List_base<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_> *)
               local_18);
    _STL::
    _STLP_alloc_proxy<struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>*,struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
    ::deallocate((_STLP_alloc_proxy<struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>*,struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
                  *)local_18,local_18[0],1);
    local_140 = local_b0;
    local_4 = 4;
    _STL::_List_base<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_>::clear
              ((_List_base<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_> *)
               local_b0);
    ExtAlloc_Free_4();
    uVar2 = '\x01';
  }
  else {
    uVar2 = '\0';
  }
  ExceptionList = local_c;
  return uVar2;
}




/* from: libgsclient:GSLobbySrvConnection.cpp
   addr: 005B44B0 */

void __thiscall stLobbySrvInfo::~stLobbySrvInfo(stLobbySrvInfo *this)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = (int *)**(int **)(this + 0x88);
  if (piVar2 != *(int **)(this + 0x88)) {
    do {
      piVar1 = (int *)*piVar2;
      ExtAlloc_Free_4(piVar2);
      piVar2 = piVar1;
    } while (piVar1 != (int *)*(int *)(this + 0x88));
  }
  *(undefined4 *)*(undefined4 *)(this + 0x88) = *(undefined4 *)(this + 0x88);
  *(int *)(*(int *)(this + 0x88) + 4) = *(int *)(this + 0x88);
  ExtAlloc_Free_4(*(undefined4 *)(this + 0x88));
  return;
}




/* from: libgsclient:GSLobbySrvConnection.cpp
   addr: 005B4500 */

void __thiscall
_STL::pair<int_const_,struct_stLobbySrvInfo>::~pair<int_const_,struct_stLobbySrvInfo>
          (pair<int_const_,struct_stLobbySrvInfo> *this)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = (int *)**(int **)(this + 0x8c);
  if (piVar2 != *(int **)(this + 0x8c)) {
    do {
      piVar1 = (int *)*piVar2;
      ExtAlloc_Free_4(piVar2);
      piVar2 = piVar1;
    } while (piVar1 != (int *)*(int *)(this + 0x8c));
  }
  *(undefined4 *)*(undefined4 *)(this + 0x8c) = *(undefined4 *)(this + 0x8c);
  *(int *)(*(int *)(this + 0x8c) + 4) = *(int *)(this + 0x8c);
  ExtAlloc_Free_4(*(undefined4 *)(this + 0x8c));
  return;
}




/* from: libgsclient:GSLobbySrvConnection.cpp
   addr: 005B4550 */

uchar __thiscall
CLobbySrvConnectionList::ChangeLobbyServer
          (CLobbySrvConnectionList *this,int param_1,char *param_2,ushort param_3)

{
  _Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_> *p_Var1;
  
  p_Var1 = _STL::
           _Rb_tree<int,struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Select1st<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>
           ::M_find((_Rb_tree<int,struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Select1st<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>
                     *)(this + 0xac),&param_1);
  if (p_Var1 == *(_Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_> **)
                 (this + 0xac)) {
    return '\0';
  }
  strncpy((char *)(p_Var1 + 0x14),param_2,0x80);
  *(ushort *)(p_Var1 + 0x96) = param_3;
  return '\x01';
}




/* from: libgsclient:GSLobbySrvConnection.cpp
   addr: 005B45C0 */

list<int> * __thiscall ExtAlloc::list<int>::list<int>(list<int> *this,list<int> *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  list<int> *plVar4;
  int iVar5;
  _List_node<class_clData*> *p_Var6;
  int in_stack_00000008;
  _List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
  local_18 [4];
  int local_14;
  list<int> *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  plVar4 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005cbe08;
  local_c = ExceptionList;
  local_14 = 0;
  ExceptionList = &local_c;
  if (in_stack_00000008 != 0) {
    ExceptionList = &local_c;
    *(undefined8 **)(this + 4) = &_vbtable_;
  }
  local_10 = this;
  animSYSTEM::GetBaseSeqNmb((animSYSTEM *)param_1);
  *(undefined4 *)this = 0;
  iVar5 = ExtAlloc_Malloc_4(0xc);
  *(int *)iVar5 = iVar5;
  *(int *)(iVar5 + 4) = iVar5;
  *(int *)this = iVar5;
  local_4 = 0;
  puVar1 = *(undefined4 **)plVar4;
  puVar2 = (undefined4 *)*puVar1;
  _STL::list<class_clRcvElement*,class_ExtAlloc::Allocator<class_clRcvElement*>_>::begin
            ((list<class_clRcvElement*,class_ExtAlloc::Allocator<class_clRcvElement*>_> *)this);
  _STL::_List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
  ::List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
            (local_18,(_List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
                       *)&param_1);
  for (; puVar2 != puVar1; puVar2 = (undefined4 *)*puVar2) {
    _STL::
    _List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>::
    List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
              ((_List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
                *)&local_14,local_18);
    p_Var6 = _STL::list<class_clData*,class_ExtAlloc::Allocator<class_clData*>_>::M_create_node
                       ((list<class_clData*,class_ExtAlloc::Allocator<class_clData*>_> *)this,
                        (clData **)(puVar2 + 2));
    puVar3 = *(undefined4 **)(local_14 + 4);
    *(int *)p_Var6 = local_14;
    *(undefined4 **)(p_Var6 + 4) = puVar3;
    *puVar3 = p_Var6;
    *(_List_node<class_clData*> **)(local_14 + 4) = p_Var6;
  }
  ExceptionList = local_c;
  return this;
}




/* from: libgsclient:GSLobbySrvConnection.cpp
   addr: 005B4690
   addr: 005B4690
   addr: 005B4690 */

list<class_clData*,class_ExtAlloc::Allocator<class_clData*>_> * __thiscall
_STL::list<class_clData*,class_ExtAlloc::Allocator<class_clData*>_>::
list<class_clData*,class_ExtAlloc::Allocator<class_clData*>_>
          (list<class_clData*,class_ExtAlloc::Allocator<class_clData*>_> *this,
          Allocator<class_clData*> *param_1)

{
  int iVar1;
  
  *(undefined4 *)this = 0;
  iVar1 = ExtAlloc_Malloc_4(0xc);
  *(int *)iVar1 = iVar1;
  *(int *)(iVar1 + 4) = iVar1;
  *(int *)this = iVar1;
  return this;
}




/* from: libgsclient:GSLobbySrvConnection.cpp
   addr: 005B46B0 */

void __thiscall
_STL::
_Rb_tree<int,struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Select1st<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>
::erase(_Rb_tree<int,struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Select1st<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>
        *this,_Rb_tree_node_base *param_2)

{
  int iVar1;
  _Rb_tree_node_base *p_Var2;
  
  iVar1 = *(int *)this;
  p_Var2 = _Rb_global<bool>::Rebalance_for_erase
                     (param_2,(_Rb_tree_node_base **)(iVar1 + 4),(_Rb_tree_node_base **)(iVar1 + 8),
                      (_Rb_tree_node_base **)(iVar1 + 0xc));
  pair<int_const_,struct_stLobbySrvInfo>::~pair<int_const_,struct_stLobbySrvInfo>
            ((pair<int_const_,struct_stLobbySrvInfo> *)(p_Var2 + 0x10));
  ExtAlloc_Free_4(p_Var2);
  *(int *)(this + 4) = *(int *)(this + 4) + -1;
  return;
}




/* from: libgsclient:GSLobbySrvConnection.cpp
   addr: 005B46F0 */

void __thiscall
_STL::
_Rb_tree<int,struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Select1st<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>
::clear(_Rb_tree<int,struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Select1st<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>
        *this)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(this + 4) != 0) {
    iVar2 = *(int *)(*(int *)this + 4);
    while (iVar2 != 0) {
      M_erase(this,*(_Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_> **)
                    (iVar2 + 0xc));
      iVar1 = *(int *)(iVar2 + 8);
      pair<int_const_,struct_stLobbySrvInfo>::~pair<int_const_,struct_stLobbySrvInfo>
                ((pair<int_const_,struct_stLobbySrvInfo> *)(iVar2 + 0x10));
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




/* from: libgsclient:GSLobbySrvConnection.cpp
   addr: 005B4750 */

void __thiscall
_STL::
_Rb_tree<int,struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Select1st<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>
::M_erase(_Rb_tree<int,struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Select1st<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>
          *this,_Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_> *param_1)

{
  _Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_> *p_Var1;
  
  if (param_1 != (_Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_> *)0x0) {
    do {
      M_erase(this,*(_Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_> **)
                    (param_1 + 0xc));
      p_Var1 = *(_Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_> **)
                (param_1 + 8);
      pair<int_const_,struct_stLobbySrvInfo>::~pair<int_const_,struct_stLobbySrvInfo>
                ((pair<int_const_,struct_stLobbySrvInfo> *)(param_1 + 0x10));
      ExtAlloc_Free_4(param_1);
      param_1 = p_Var1;
    } while (p_Var1 != (_Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_> *)0x0);
  }
  return;
}




/* from: libgsclient:GSLobbySrvConnection.cpp
   addr: 005B4790 */

_Rb_tree_node_base * __thiscall
_STL::
_Rb_tree<int,struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Select1st<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>
::insert_unique(_Rb_tree<int,struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Select1st<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>
                *this,_Rb_tree_node_base *param_2,_Rb_tree_node_base *param_3,
               pair<int_const_,struct_stLobbySrvInfo> *param_4)

{
  _Rb_tree_node_base *p_Var1;
  bool bVar2;
  pair<int_const_,struct_stLobbySrvInfo> *ppVar3;
  int *piVar4;
  _Rb_tree_iterator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Nonconst_traits<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>
  *p_Var5;
  _Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_> *p_Var6;
  _Rb_tree_node_base *p_Var7;
  _Rb_tree_node_base *p_Var8;
  undefined4 *puVar9;
  bool bVar10;
  pair<int_const_,struct_stLobbySrvInfo> *ppVar11;
  pair<int_const_,struct_stLobbySrvInfo> *ppVar12;
  bool *pbVar13;
  bool local_19;
  _Rb_tree_node_base *local_18;
  _Rb_tree_node_base local_14 [4];
  _Rb_tree_node_base local_10 [4];
  _Rb_tree_node_base local_c [4];
  undefined4 local_8 [2];
  
  ppVar3 = param_4;
  p_Var1 = param_3;
  ppVar11 = *(pair<int_const_,struct_stLobbySrvInfo> **)this;
  if (param_3 != *(_Rb_tree_node_base **)(ppVar11 + 8)) {
    if (param_3 == (_Rb_tree_node_base *)ppVar11) {
      if (*(int *)(*(pair<int_const_,struct_stLobbySrvInfo> **)(ppVar11 + 0xc) + 0x10) <
          *(int *)param_4) {
        M_insert(this,param_2,(_Rb_tree_node_base *)0x0,
                 *(pair<int_const_,struct_stLobbySrvInfo> **)(ppVar11 + 0xc),
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
                   (pair<int_const_,struct_stLobbySrvInfo> *)p_Var8,(_Rb_tree_node_base *)param_4);
          return param_2;
        }
        M_insert(this,param_2,p_Var1,(pair<int_const_,struct_stLobbySrvInfo> *)p_Var1,
                 (_Rb_tree_node_base *)param_4);
        return param_2;
      }
      p_Var8 = _Rb_global<bool>::M_increment(p_Var1);
      bVar10 = !bVar2;
      if (!bVar2) {
        bVar10 = *(int *)(p_Var1 + 0x10) < *(int *)p_Var7;
        if (!bVar10) goto LAB_005b4c4c;
        if ((p_Var8 == *(_Rb_tree_node_base **)this) || (*(int *)p_Var7 < *(int *)(p_Var8 + 0x10)))
        {
          if (*(int *)(p_Var1 + 0xc) == 0) {
            M_insert(this,param_2,(_Rb_tree_node_base *)0x0,
                     (pair<int_const_,struct_stLobbySrvInfo> *)p_Var1,p_Var7);
            return param_2;
          }
          M_insert(this,param_2,p_Var8,(pair<int_const_,struct_stLobbySrvInfo> *)p_Var8,p_Var7);
          return param_2;
        }
      }
      if (bVar2 == bVar10) {
LAB_005b4c4c:
        *(_Rb_tree_node_base **)param_2 = p_Var1;
        return param_2;
      }
    }
    puVar9 = (undefined4 *)insert_unique(this,(pair<int_const_,struct_stLobbySrvInfo> *)local_8);
    *(undefined4 *)param_2 = *puVar9;
    return param_2;
  }
  if (*(int *)(this + 4) != 0) {
    if (*(int *)param_4 < *(int *)(param_3 + 0x10)) {
      p_Var6 = M_create_node(this,param_4);
      *(_Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_> **)(p_Var1 + 8) = p_Var6
      ;
      p_Var7 = *(_Rb_tree_node_base **)this;
      if (p_Var1 == p_Var7) {
        *(_Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_> **)(p_Var7 + 4) =
             p_Var6;
        *(_Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_> **)
         (*(int *)this + 0xc) = p_Var6;
      }
      else if (p_Var1 == *(_Rb_tree_node_base **)(p_Var7 + 8)) {
        *(_Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_> **)(p_Var7 + 8) =
             p_Var6;
      }
      *(_Rb_tree_node_base **)(p_Var6 + 4) = p_Var1;
      *(undefined4 *)(p_Var6 + 8) = 0;
      *(undefined4 *)(p_Var6 + 0xc) = 0;
      _Rb_global<bool>::Rebalance
                ((_Rb_tree_node_base *)p_Var6,(_Rb_tree_node_base **)(*(int *)this + 4));
      *(int *)(this + 4) = *(int *)(this + 4) + 1;
      *(_Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_> **)param_2 = p_Var6;
      return param_2;
    }
    if (*(int *)param_4 <= *(int *)(param_3 + 0x10)) {
      *(_Rb_tree_node_base **)param_2 = param_3;
      return param_2;
    }
    p_Var7 = _Rb_global<bool>::M_increment(param_3);
    ppVar11 = *(pair<int_const_,struct_stLobbySrvInfo> **)this;
    if (p_Var7 == (_Rb_tree_node_base *)ppVar11) {
      if (p_Var1 == (_Rb_tree_node_base *)ppVar11) {
        p_Var6 = M_create_node(this,ppVar3);
        *(_Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_> **)(p_Var1 + 8) =
             p_Var6;
        p_Var7 = *(_Rb_tree_node_base **)this;
        if (p_Var1 == p_Var7) {
          *(_Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_> **)(p_Var7 + 4) =
               p_Var6;
          *(_Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_> **)
           (*(int *)this + 0xc) = p_Var6;
        }
        else if (p_Var1 == *(_Rb_tree_node_base **)(p_Var7 + 8)) {
          *(_Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_> **)(p_Var7 + 8) =
               p_Var6;
        }
      }
      else {
        p_Var6 = M_create_node(this,ppVar3);
        *(_Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_> **)(p_Var1 + 0xc) =
             p_Var6;
        if (p_Var1 == *(_Rb_tree_node_base **)(*(int *)this + 0xc)) {
          *(_Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_> **)
           (*(int *)this + 0xc) = p_Var6;
        }
      }
      *(_Rb_tree_node_base **)((_Rb_tree_node_base *)p_Var6 + 4) = p_Var1;
      *(undefined4 *)((_Rb_tree_node_base *)p_Var6 + 8) = 0;
      *(undefined4 *)((_Rb_tree_node_base *)p_Var6 + 0xc) = 0;
      _Rb_global<bool>::Rebalance
                ((_Rb_tree_node_base *)p_Var6,(_Rb_tree_node_base **)(*(int *)this + 4));
      *(int *)(this + 4) = *(int *)(this + 4) + 1;
      *(_Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_> **)param_2 = p_Var6;
      return param_2;
    }
    if (*(int *)ppVar3 < *(int *)(p_Var7 + 0x10)) {
      if (*(int *)(p_Var1 + 0xc) == 0) {
        if (p_Var1 == (_Rb_tree_node_base *)ppVar11) {
          p_Var6 = M_create_node(this,ppVar3);
          *(_Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_> **)(p_Var1 + 8) =
               p_Var6;
          p_Var7 = *(_Rb_tree_node_base **)this;
          if (p_Var1 == p_Var7) {
            *(_Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_> **)(p_Var7 + 4) =
                 p_Var6;
            *(_Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_> **)
             (*(int *)this + 0xc) = p_Var6;
          }
          else if (p_Var1 == *(_Rb_tree_node_base **)(p_Var7 + 8)) {
            *(_Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_> **)(p_Var7 + 8) =
                 p_Var6;
          }
        }
        else {
          p_Var6 = M_create_node(this,ppVar3);
          *(_Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_> **)(p_Var1 + 0xc) =
               p_Var6;
          if (p_Var1 == *(_Rb_tree_node_base **)(*(int *)this + 0xc)) {
            *(_Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_> **)
             (*(int *)this + 0xc) = p_Var6;
          }
        }
        *(_Rb_tree_node_base **)((_Rb_tree_node_base *)p_Var6 + 4) = p_Var1;
        *(undefined4 *)((_Rb_tree_node_base *)p_Var6 + 8) = 0;
        *(undefined4 *)((_Rb_tree_node_base *)p_Var6 + 0xc) = 0;
        _Rb_global<bool>::Rebalance
                  ((_Rb_tree_node_base *)p_Var6,(_Rb_tree_node_base **)(*(int *)this + 4));
        *(int *)(this + 4) = *(int *)(this + 4) + 1;
        *(_Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_> **)param_2 = p_Var6;
        return param_2;
      }
      p_Var6 = M_create_node(this,ppVar3);
      *(_Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_> **)(p_Var7 + 8) = p_Var6
      ;
      p_Var1 = *(_Rb_tree_node_base **)this;
      if (p_Var7 == p_Var1) {
        *(_Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_> **)(p_Var1 + 4) =
             p_Var6;
        *(_Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_> **)
         (*(int *)this + 0xc) = p_Var6;
      }
      else if (p_Var7 == *(_Rb_tree_node_base **)(p_Var1 + 8)) {
        *(_Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_> **)(p_Var1 + 8) =
             p_Var6;
      }
      *(_Rb_tree_node_base **)(p_Var6 + 4) = p_Var7;
      *(undefined4 *)(p_Var6 + 8) = 0;
      *(undefined4 *)(p_Var6 + 0xc) = 0;
      _Rb_global<bool>::Rebalance
                ((_Rb_tree_node_base *)p_Var6,(_Rb_tree_node_base **)(*(int *)this + 4));
      *(int *)(this + 4) = *(int *)(this + 4) + 1;
      *(_Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_> **)param_2 = p_Var6;
      return param_2;
    }
    bVar2 = true;
    ppVar12 = *(pair<int_const_,struct_stLobbySrvInfo> **)(ppVar11 + 4);
    while (ppVar12 != (pair<int_const_,struct_stLobbySrvInfo> *)0x0) {
      bVar2 = *(int *)ppVar3 < *(int *)(ppVar12 + 0x10);
      ppVar11 = ppVar12;
      if (bVar2) {
        ppVar12 = *(pair<int_const_,struct_stLobbySrvInfo> **)(ppVar12 + 8);
      }
      else {
        ppVar12 = *(pair<int_const_,struct_stLobbySrvInfo> **)(ppVar12 + 0xc);
      }
    }
    local_18 = (_Rb_tree_node_base *)ppVar11;
    if (bVar2) {
      piVar4 = (int *)map<void*,class_PKCAlgorithm*,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_PKCAlgorithm*>_>_>
                      ::begin((map<void*,class_PKCAlgorithm*,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_PKCAlgorithm*>_>_>
                               *)this);
      if (local_18 == (_Rb_tree_node_base *)*piVar4) {
        pbVar13 = (bool *)&param_4;
        param_4 = (pair<int_const_,struct_stLobbySrvInfo> *)CONCAT31(param_4._1_3_,1);
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
    if (*(int *)((pair<int_const_,struct_stLobbySrvInfo> *)local_18 + 0x10) < *(int *)ppVar3) {
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
  ppVar12 = *(pair<int_const_,struct_stLobbySrvInfo> **)(ppVar11 + 4);
  bVar2 = true;
  if (ppVar12 != (pair<int_const_,struct_stLobbySrvInfo> *)0x0) {
    do {
      ppVar11 = ppVar12;
      bVar2 = *(int *)param_4 < *(int *)(ppVar11 + 0x10);
      if (bVar2) {
        ppVar12 = *(pair<int_const_,struct_stLobbySrvInfo> **)(ppVar11 + 8);
      }
      else {
        ppVar12 = *(pair<int_const_,struct_stLobbySrvInfo> **)(ppVar11 + 0xc);
      }
    } while (ppVar12 != (pair<int_const_,struct_stLobbySrvInfo> *)0x0);
  }
  local_18 = (_Rb_tree_node_base *)ppVar11;
  if (bVar2) {
    piVar4 = (int *)map<void*,class_PKCAlgorithm*,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_PKCAlgorithm*>_>_>
                    ::begin((map<void*,class_PKCAlgorithm*,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_PKCAlgorithm*>_>_>
                             *)this);
    if (local_18 == (_Rb_tree_node_base *)*piVar4) {
      pbVar13 = (bool *)&param_4;
      param_4 = (pair<int_const_,struct_stLobbySrvInfo> *)CONCAT31(param_4._1_3_,1);
      p_Var5 = (_Rb_tree_iterator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Nonconst_traits<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>
                *)M_insert(this,local_10,(_Rb_tree_node_base *)ppVar12,ppVar11,
                           (_Rb_tree_node_base *)ppVar3);
      goto LAB_005b485d;
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
LAB_005b485d:
  pair<struct__STL::_Rb_tree_iterator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Nonconst_traits<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>,bool>
  ::
  pair<struct__STL::_Rb_tree_iterator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Nonconst_traits<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>,bool>
            ((pair<struct__STL::_Rb_tree_iterator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Nonconst_traits<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>,bool>
              *)local_8,p_Var5,pbVar13);
  *(undefined4 *)param_2 = local_8[0];
  return param_2;
}




/* from: libgsclient:GSLobbySrvConnection.cpp
   addr: 005B4C80 */

void * __thiscall
_STL::pair<int_const_,struct_stLobbySrvInfo>::_scalar_deleting_destructor_
          (pair<int_const_,struct_stLobbySrvInfo> *this,uint param_1)

{
  ~pair<int_const_,struct_stLobbySrvInfo>(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: libgsclient:GSLobbySrvConnection.cpp
   addr: 005B4CA0 */

void __thiscall
_STL::
_Rb_tree<int,struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Select1st<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>
::M_insert(_Rb_tree<int,struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Select1st<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>
           *this,_Rb_tree_node_base *param_1,_Rb_tree_node_base *param_2,
          pair<int_const_,struct_stLobbySrvInfo> *param_3,_Rb_tree_node_base *param_4)

{
  pair<int_const_,struct_stLobbySrvInfo> *ppVar1;
  int iVar2;
  _Rb_tree_node_base *p_Var3;
  _Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_> *p_Var4;
  _Rb_tree_node_base *p_Var5;
  _Rb_tree_node_base *p_Var6;
  _Rb_tree_node_base **pp_Var7;
  int in_stack_00000014;
  
  if ((param_3 == *(pair<int_const_,struct_stLobbySrvInfo> **)this) ||
     ((in_stack_00000014 == 0 &&
      ((param_2 != (_Rb_tree_node_base *)0x0 || (*(int *)param_4 < *(int *)(param_3 + 0x10))))))) {
    p_Var4 = M_create_node(this,(pair<int_const_,struct_stLobbySrvInfo> *)param_4);
    *(_Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_> **)(param_3 + 8) = p_Var4;
    ppVar1 = *(pair<int_const_,struct_stLobbySrvInfo> **)this;
    if (param_3 == ppVar1) {
      *(_Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_> **)(ppVar1 + 4) = p_Var4
      ;
      *(_Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_> **)(*(int *)this + 0xc)
           = p_Var4;
    }
    else if (param_3 == *(pair<int_const_,struct_stLobbySrvInfo> **)(ppVar1 + 8)) {
      *(_Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_> **)(ppVar1 + 8) = p_Var4
      ;
    }
  }
  else {
    p_Var4 = M_create_node(this,(pair<int_const_,struct_stLobbySrvInfo> *)param_4);
    *(_Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_> **)(param_3 + 0xc) =
         p_Var4;
    if (param_3 == *(pair<int_const_,struct_stLobbySrvInfo> **)(*(int *)this + 0xc)) {
      *(_Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_> **)(*(int *)this + 0xc)
           = p_Var4;
    }
  }
  *(pair<int_const_,struct_stLobbySrvInfo> **)((_Rb_tree_node_base *)p_Var4 + 4) = param_3;
  *(undefined4 *)((_Rb_tree_node_base *)p_Var4 + 8) = 0;
  *(undefined4 *)((_Rb_tree_node_base *)p_Var4 + 0xc) = 0;
  iVar2 = *(int *)this;
  *p_Var4 = (_Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>)0x0;
  pp_Var7 = (_Rb_tree_node_base **)(iVar2 + 4);
  p_Var6 = (_Rb_tree_node_base *)p_Var4;
  if (p_Var4 != (_Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_> *)*pp_Var7) {
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
LAB_005b4d4e:
          *p_Var3 = (_Rb_tree_node_base)0x1;
          *p_Var5 = (_Rb_tree_node_base)0x1;
          **(undefined1 **)(*(int *)(p_Var6 + 4) + 4) = 0;
          p_Var6 = *(_Rb_tree_node_base **)(*(int *)(p_Var6 + 4) + 4);
        }
      }
      else {
        if ((p_Var5 != (_Rb_tree_node_base *)0x0) && (*p_Var5 == (_Rb_tree_node_base)0x0))
        goto LAB_005b4d4e;
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
  *(_Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_> **)param_1 = p_Var4;
  return;
}




/* from: libgsclient:GSLobbySrvConnection.cpp
   addr: 005B4E70 */

pair<int_const_,struct_stLobbySrvInfo> * __thiscall
_STL::
_Rb_tree<int,struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Select1st<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>
::insert_unique(_Rb_tree<int,struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Select1st<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>
                *this,pair<int_const_,struct_stLobbySrvInfo> *param_1)

{
  _Rb_tree_node_base *p_Var1;
  bool bVar2;
  _Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_> *p_Var3;
  _Rb_tree_node_base *p_Var4;
  _Rb_tree_node_base *p_Var5;
  _Rb_tree_node_base *p_Var6;
  pair<int_const_,struct_stLobbySrvInfo> *in_stack_00000008;
  
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
        *(_Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_> **)(p_Var6 + 8) =
             p_Var3;
        p_Var1 = *(_Rb_tree_node_base **)this;
        if (p_Var6 == p_Var1) {
          *(_Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_> **)(p_Var1 + 4) =
               p_Var3;
          *(_Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_> **)
           (*(int *)this + 0xc) = p_Var3;
        }
        else if (p_Var6 == *(_Rb_tree_node_base **)(p_Var1 + 8)) {
          *(_Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_> **)(p_Var1 + 8) =
               p_Var3;
        }
      }
      else {
        p_Var3 = M_create_node(this,in_stack_00000008);
        *(_Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_> **)(p_Var6 + 0xc) =
             p_Var3;
        if (p_Var6 == *(_Rb_tree_node_base **)(*(int *)this + 0xc)) {
          *(_Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_> **)
           (*(int *)this + 0xc) = p_Var3;
        }
      }
      *(_Rb_tree_node_base **)((_Rb_tree_node_base *)p_Var3 + 4) = p_Var6;
      *(undefined4 *)((_Rb_tree_node_base *)p_Var3 + 8) = 0;
      *(undefined4 *)((_Rb_tree_node_base *)p_Var3 + 0xc) = 0;
      _Rb_global<bool>::Rebalance
                ((_Rb_tree_node_base *)p_Var3,(_Rb_tree_node_base **)(*(int *)this + 4));
      *(int *)(this + 4) = *(int *)(this + 4) + 1;
      *(_Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_> **)param_1 = p_Var3;
      param_1[4] = (pair<int_const_,struct_stLobbySrvInfo>)0x1;
      return param_1;
    }
    p_Var4 = _Rb_global<bool>::M_decrement(p_Var6);
  }
  if (*(int *)(p_Var4 + 0x10) < *(int *)in_stack_00000008) {
    if (((p_Var6 == *(_Rb_tree_node_base **)this) || (p_Var5 != (_Rb_tree_node_base *)0x0)) ||
       (*(int *)in_stack_00000008 < *(int *)(p_Var6 + 0x10))) {
      p_Var3 = M_create_node(this,in_stack_00000008);
      *(_Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_> **)(p_Var6 + 8) = p_Var3
      ;
      p_Var1 = *(_Rb_tree_node_base **)this;
      if (p_Var6 == p_Var1) {
        *(_Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_> **)(p_Var1 + 4) =
             p_Var3;
        *(_Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_> **)
         (*(int *)this + 0xc) = p_Var3;
      }
      else if (p_Var6 == *(_Rb_tree_node_base **)(p_Var1 + 8)) {
        *(_Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_> **)(p_Var1 + 8) =
             p_Var3;
      }
    }
    else {
      p_Var3 = M_create_node(this,in_stack_00000008);
      *(_Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_> **)(p_Var6 + 0xc) =
           p_Var3;
      if (p_Var6 == *(_Rb_tree_node_base **)(*(int *)this + 0xc)) {
        *(_Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_> **)
         (*(int *)this + 0xc) = p_Var3;
      }
    }
    *(_Rb_tree_node_base **)((_Rb_tree_node_base *)p_Var3 + 4) = p_Var6;
    *(undefined4 *)((_Rb_tree_node_base *)p_Var3 + 8) = 0;
    *(undefined4 *)((_Rb_tree_node_base *)p_Var3 + 0xc) = 0;
    _Rb_global<bool>::Rebalance
              ((_Rb_tree_node_base *)p_Var3,(_Rb_tree_node_base **)(*(int *)this + 4));
    *(int *)(this + 4) = *(int *)(this + 4) + 1;
    *(_Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_> **)param_1 = p_Var3;
    param_1[4] = (pair<int_const_,struct_stLobbySrvInfo>)0x1;
    return param_1;
  }
  *(_Rb_tree_node_base **)param_1 = p_Var4;
  param_1[4] = (pair<int_const_,struct_stLobbySrvInfo>)0x0;
  return param_1;
}




/* from: libgsclient:GSLobbySrvConnection.cpp
   addr: 005B4FE0 */

_Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_> * __thiscall
_STL::
_Rb_tree<int,struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Select1st<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>
::M_create_node(_Rb_tree<int,struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Select1st<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>,struct__STL::less<int>,class_ExtAlloc::Allocator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>
                *this,pair<int_const_,struct_stLobbySrvInfo> *param_1)

{
  _List_base<class_clProxyMessage*,class_ExtAlloc::Allocator<class_clProxyMessage*>_> *this_00;
  animSYSTEM *this_01;
  _Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_> *p_Var1;
  Allocator<class_clProxyMessage*> *pAVar2;
  int iVar3;
  _Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_> *p_Var4;
  _Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_> *p_Var5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005cbe39;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  p_Var1 = (_Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_> *)
           ExtAlloc_Malloc_4();
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  if (p_Var1 + 0x10 != (_Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_> *)0x0) {
    *(undefined4 *)(p_Var1 + 0x10) = *(undefined4 *)param_1;
    p_Var5 = p_Var1 + 0x14;
    p_Var4 = (_Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_> *)param_1;
    for (iVar3 = 0x20; p_Var4 = p_Var4 + 4, iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined4 *)p_Var5 = *(undefined4 *)p_Var4;
      p_Var5 = p_Var5 + 4;
    }
    *p_Var5 = *p_Var4;
    this_00 = (_List_base<class_clProxyMessage*,class_ExtAlloc::Allocator<class_clProxyMessage*>_> *
              )(p_Var1 + 0x9c);
    *(undefined2 *)(p_Var1 + 0x96) = *(undefined2 *)(param_1 + 0x86);
    p_Var1[0x98] = *(_Rb_tree_node<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_> *)
                    (param_1 + 0x88);
    this_01 = (animSYSTEM *)(param_1 + 0x8c);
    *(undefined8 **)(p_Var1 + 0xa0) = &ExtAlloc::list<int>::_vbtable_;
    pAVar2 = (Allocator<class_clProxyMessage*> *)animSYSTEM::GetBaseSeqNmb(this_01);
    _List_base<class_clProxyMessage*,class_ExtAlloc::Allocator<class_clProxyMessage*>_>::
    List_base<class_clProxyMessage*,class_ExtAlloc::Allocator<class_clProxyMessage*>_>
              (this_00,pAVar2);
    local_8 = CONCAT31(local_8._1_3_,2);
    list<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_>::end
              ((list<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_> *)this_01);
    list<class_clRcvElement*,class_ExtAlloc::Allocator<class_clRcvElement*>_>::begin
              ((list<class_clRcvElement*,class_ExtAlloc::Allocator<class_clRcvElement*>_> *)this_01)
    ;
    list<class_clRcvElement*,class_ExtAlloc::Allocator<class_clRcvElement*>_>::begin
              ((list<class_clRcvElement*,class_ExtAlloc::Allocator<class_clRcvElement*>_> *)this_00)
    ;
    list<int,class_ExtAlloc::Allocator<int>_>::insert
              ((list<int,class_ExtAlloc::Allocator<int>_> *)this_00);
    *(undefined4 *)(p_Var1 + 0xa4) = *(undefined4 *)(param_1 + 0x94);
  }
  ExceptionList = local_10;
  return p_Var1;
}




/* from: libgsclient:GSLobbySrvConnection.cpp
   addr: 005B5110 */

void __thiscall
_STL::list<int,class_ExtAlloc::Allocator<int>_>::insert
          (list<int,class_ExtAlloc::Allocator<int>_> *this,int param_2,int *param_3,int *param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  _List_node<class_clData*> *p_Var3;
  int *piVar4;
  
  piVar4 = param_3;
  _List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>::
  List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
            ((_List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
              *)&param_3,
             (_List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
              *)&param_2);
  piVar2 = param_4;
  if (piVar4 != param_4) {
    do {
      _List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>::
      List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
                ((_List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
                  *)&param_2,
                 (_List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
                  *)&param_3);
      p_Var3 = list<class_clData*,class_ExtAlloc::Allocator<class_clData*>_>::M_create_node
                         ((list<class_clData*,class_ExtAlloc::Allocator<class_clData*>_> *)this,
                          (clData **)(piVar4 + 2));
      puVar1 = *(undefined4 **)(param_2 + 4);
      *(int *)p_Var3 = param_2;
      *(undefined4 **)(p_Var3 + 4) = puVar1;
      *puVar1 = p_Var3;
      *(_List_node<class_clData*> **)(param_2 + 4) = p_Var3;
      piVar4 = (int *)*piVar4;
    } while (piVar4 != piVar2);
  }
  return;
}

