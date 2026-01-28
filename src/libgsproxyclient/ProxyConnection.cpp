
/* from: libgsproxyclient:ProxyConnection.cpp
   addr: 005C54E0 */

clProxyConnection * __thiscall
clProxyConnection::clProxyConnection
          (clProxyConnection *this,char *param_1,ushort param_2,clProxyHandler *param_3,
          clTraceLog *param_4,ushort param_5)

{
  basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *this_00;
  char cVar1;
  void *_Src;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  void *_Dst;
  char *pcVar5;
  char *pcVar6;
  undefined2 in_stack_0000000a;
  int in_stack_00000018;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005ccc78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (in_stack_00000018 != 0) {
    ExceptionList = &local_c;
    *(undefined8 **)(this + 4) = &_vbtable_;
    local_4 = 0;
  }
  clConnectElem::clConnectElem((clConnectElem *)this,0x22,0x1e,'\b','\v',0xb4,0,0);
  this_00 = (basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *)
            (this + 0x68);
  local_4 = 2;
  *(undefined4 *)this_00 = 0;
  *(undefined4 *)(this + 0x6c) = 0;
  _STL::
  _STLP_alloc_proxy<struct__STL::_List_node<class_CConnection*>*,struct__STL::_List_node<class_CConnection*>,class_ExtAlloc::Allocator<class_CConnection*>_>
  ::
  STLP_alloc_proxy<struct__STL::_List_node<class_CConnection*>*,struct__STL::_List_node<class_CConnection*>,class_ExtAlloc::Allocator<class_CConnection*>_>
            ((_STLP_alloc_proxy<struct__STL::_List_node<class_CConnection*>*,struct__STL::_List_node<class_CConnection*>,class_ExtAlloc::Allocator<class_CConnection*>_>
              *)(this + 0x70),(Allocator<class_CConnection*> *)&stack0x00000018,
             (_List_node<class_CConnection*> *)0x0);
  puVar2 = (undefined1 *)ExtAlloc_Malloc_4(8);
  *(undefined1 **)this_00 = puVar2;
  *(undefined1 **)(this + 0x6c) = puVar2;
  *(undefined1 **)(this + 0x70) = puVar2 + 8;
  *puVar2 = 0;
  *(ushort *)(this + 0x74) = param_2;
  *(undefined4 *)(this + 0x78) = 0;
  *(clProxyHandler **)(this + 0x7c) = param_3;
  *(undefined4 *)(this + 0x80) = 1;
  *(undefined8 **)(this + 0x8c) = &clPointerList<class_clProxyMessage*>::_vbtable_;
  param_3 = (clProxyHandler *)(this + 0x88);
  local_4 = 6;
  _param_2 = this + 0x84;
  _STL::_List_base<class_clProxyMessage*,class_ExtAlloc::Allocator<class_clProxyMessage*>_>::
  List_base<class_clProxyMessage*,class_ExtAlloc::Allocator<class_clProxyMessage*>_>
            ((_List_base<class_clProxyMessage*,class_ExtAlloc::Allocator<class_clProxyMessage*>_> *)
             param_3,(Allocator<class_clProxyMessage*> *)&stack0x00000018);
  *(undefined ***)(this + 0x84) = &clPointerList<class_clProxyMessage*>::_vftable_;
  local_4 = 7;
  *(clTraceLog **)(this + 0x90) = param_4;
  *(ushort *)(this + 0x94) = param_5;
  *(undefined ***)this = &_vftable_;
  if (param_1 == (char *)0x0) {
    param_1 = s_;
  }
  uVar3 = 0xffffffff;
  pcVar6 = param_1;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  pcVar6 = *(char **)this_00;
  _param_2 = (clProxyConnection *)(param_1 + (~uVar3 - 1));
  uVar4 = *(int *)(this + 0x6c) - (int)pcVar6;
  uVar3 = (int)_param_2 - (int)param_1;
  if (uVar4 < uVar3) {
    if (uVar4 != 0) {
      pcVar5 = param_1;
      for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar6 = pcVar6 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar6 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar6 = pcVar6 + 1;
      }
    }
    _STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::append
              (this_00,param_1 + (*(int *)(this + 0x6c) - *(int *)this_00),(char *)_param_2,
               (forward_iterator_tag *)&param_2);
  }
  else {
    if (uVar3 != 0) {
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)pcVar6 = *(undefined4 *)param_1;
        param_1 = param_1 + 4;
        pcVar6 = pcVar6 + 4;
      }
      for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar6 = *param_1;
        param_1 = param_1 + 1;
        pcVar6 = pcVar6 + 1;
      }
    }
    _Src = *(void **)(this + 0x6c);
    _Dst = (void *)(*(int *)this_00 + uVar3);
    if (_Dst != _Src) {
      memmove(_Dst,_Src,1);
      *(int *)(this + 0x6c) = (int)_Dst + (*(int *)(this + 0x6c) - (int)_Src);
    }
  }
  ExceptionList = local_c;
  return this;
}




/* from: libgsproxyclient:ProxyConnection.cpp
   addr: 005C56B0
   addr: 005C56B0 */

void * __thiscall
clProxyConnection::_vector_deleting_destructor_(clProxyConnection *this,uint param_1)

{
  ~clProxyConnection(this);
  if ((param_1 & 1) != 0) {
    ExtAlloc_Free_4(this);
  }
  return this;
}




/* from: libgsproxyclient:ProxyConnection.cpp
   addr: 005C56E0
   addr: 005C56E0 */

void * __thiscall
clPointerList<class_clProxyMessage*>::_scalar_deleting_destructor_
          (clPointerList<class_clProxyMessage*> *this,uint param_1)

{
  ~clPointerList<class_clProxyMessage*>(this);
  if ((param_1 & 1) != 0) {
    ExtAlloc_Free_4(this);
  }
  return this;
}




/* from: libgsproxyclient:ProxyConnection.cpp
   addr: 005C5700 */

void __thiscall clProxyConnection::~clProxyConnection(clProxyConnection *this)

{
  list<class_clRcvElement*,class_ExtAlloc::Allocator<class_clRcvElement*>_> *this_00;
  clProxyConnection *pcVar1;
  int iVar2;
  undefined1 local_14 [4];
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005cccd2;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = &_vftable_;
  pcVar1 = this + 0x84;
  *(undefined ***)pcVar1 = &clPointerList<class_clProxyMessage*>::_vftable_;
  this_00 = (list<class_clRcvElement*,class_ExtAlloc::Allocator<class_clRcvElement*>_> *)
            (this + 0x88);
  iVar2 = *(int *)pcVar1;
  local_4 = 2;
  _STL::list<class_clRcvElement*,class_ExtAlloc::Allocator<class_clRcvElement*>_>::begin(this_00);
  (**(code **)(iVar2 + 0x10))(local_14);
  uStack_10 = CONCAT31(uStack_10._1_3_,3);
  _STL::_List_base<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_>::clear
            ((_List_base<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_> *)
             this_00);
  ExtAlloc_Free_4(*(undefined4 *)this_00);
  ExtAlloc_Free_4(*(undefined4 *)(this + 0x68));
  uStack_10 = 0xffffffff;
  clConnectElem::~clConnectElem((clConnectElem *)this);
  ExceptionList = pcVar1;
  return;
}




/* from: libgsproxyclient:ProxyConnection.cpp
   addr: 005C57B0 */

uchar __thiscall clProxyConnection::Connect(clProxyConnection *this,char *param_1,char *param_2)

{
  char cVar1;
  undefined **ppuStack_138;
  undefined **ppuStack_12c;
  _Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
  *p_Stack_128;
  undefined8 *puStack_124;
  undefined ***pppuStack_120;
  _Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
  **pp_Stack_11c;
  char acStack_118 [4];
  undefined4 local_114;
  void *pvStack_18;
  undefined4 uStack_10;
  void *pvStack_c;
  char *pcStack_8;
  char *pcStack_4;
  
  pcStack_4 = (char *)0xffffffff;
  pcStack_8 = &LAB_005ccd4d;
  pvStack_c = ExceptionList;
  local_114 = 0;
  ppuStack_138 = (undefined **)0x0;
  ExceptionList = &pvStack_c;
  cVar1 = (**(code **)(*(int *)this + 4))(*(undefined4 *)(this + 0x68),*(undefined2 *)(this + 0x74))
  ;
  if (cVar1 != '\0') {
    puStack_124 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
    ppuStack_138 = &clData::_vftable_;
    uStack_10 = 1;
    _STL::_List_base<class_clProxyMessage*,class_ExtAlloc::Allocator<class_clProxyMessage*>_>::
    List_base<class_clProxyMessage*,class_ExtAlloc::Allocator<class_clProxyMessage*>_>
              ((_List_base<class_clProxyMessage*,class_ExtAlloc::Allocator<class_clProxyMessage*>_>
                *)&p_Stack_128,(Allocator<class_clProxyMessage*> *)&stack0xfffffec7);
    ppuStack_138 = &clDataList::_vftable__for__clData__;
    ppuStack_12c = &clDataList::_vftable__for__clPointerList<class_clData*>__;
    uStack_10 = 2;
    clDataList::Add((clDataList *)&ppuStack_138,pcStack_8);
    clDataList::Add((clDataList *)&ppuStack_138,pcStack_4);
    clConnectElem::SendGSMessage((clConnectElem *)this,'f','\b','\v',(clDataList *)&ppuStack_138);
    *(undefined4 *)(this + 0x78) = 1;
    ppuStack_138 = &clDataList::_vftable__for__clData__;
    pppuStack_120 = &ppuStack_12c;
    ppuStack_12c = &clPointerList<class_clData*>::_vftable_;
    uStack_10._0_1_ = 4;
    uStack_10._1_3_ = 0;
    clPointerList<class_clRcvElement*>::clear((clPointerList<class_clRcvElement*> *)&ppuStack_12c);
    pp_Stack_11c = &p_Stack_128;
    uStack_10 = CONCAT31(uStack_10._1_3_,5);
    _STL::_List_base<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_>::clear
              ((_List_base<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_> *)
               &p_Stack_128);
    _STL::
    _STLP_alloc_proxy<struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>*,struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
    ::deallocate((_STLP_alloc_proxy<struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>*,struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
                  *)&p_Stack_128,p_Stack_128,1);
  }
  else {
    sprintf(acStack_118,s_Connection_to_proxy____s__d_fail,*(undefined4 *)(this + 0x68),
            (uint)*(ushort *)(this + 0x74));
    WriteLogComments(this,5,s_,s_PROXY,s_,acStack_118);
  }
  ExceptionList = pvStack_18;
  return cVar1 != '\0';
}




/* from: libgsproxyclient:ProxyConnection.cpp
   addr: 005C5940 */

uchar __thiscall clProxyConnection::Disconnect(clProxyConnection *this)

{
  _STL::
  _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
  ::
  ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
            ((_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
              *)this);
  clConnectElem::Disconnect((clConnectElem *)this);
  *(undefined4 *)(this + 0x78) = 0;
  return '\x01';
}




/* from: libgsproxyclient:ProxyConnection.cpp
   addr: 005C5970 */

void __thiscall
clProxyConnection::WriteLogComments
          (clProxyConnection *this,int param_1,char *param_2,char *param_3,char *param_4,
          char *param_5)

{
  if (*(clTraceLog **)(this + 0x90) != (clTraceLog *)0x0) {
    clTraceLog::WriteComments(*(clTraceLog **)(this + 0x90),param_1,param_2,param_3,param_4,param_5)
    ;
    return;
  }
  return;
}




/* from: libgsproxyclient:ProxyConnection.cpp
   addr: 005C5990 */

void __thiscall
clProxyConnection::ReceivedLogin
          (clProxyConnection *this,ushort param_1,ushort param_2,clDataList *param_3)

{
  if (*(int **)(this + 0x7c) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005c59a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(this + 0x7c) + 4))();
    return;
  }
  return;
}




/* from: libgsproxyclient:ProxyConnection.cpp
   addr: 005C59B0 */

void __thiscall
clProxyConnection::ReceivedJoinWaitModule
          (clProxyConnection *this,ushort param_1,ushort param_2,clDataList *param_3)

{
  if (*(int **)(this + 0x7c) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005c59c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(this + 0x7c) + 8))();
    return;
  }
  return;
}




/* from: libgsproxyclient:ProxyConnection.cpp
   addr: 005C59D0 */

void __thiscall
clProxyConnection::ReceivedLoginWaitModule
          (clProxyConnection *this,ushort param_1,ushort param_2,clDataList *param_3)

{
  if (*(int **)(this + 0x7c) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005c59e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(this + 0x7c) + 0xc))();
    return;
  }
  return;
}




/* from: libgsproxyclient:ProxyConnection.cpp
   addr: 005C59F0 */

void __thiscall
clProxyConnection::HandleMessage
          (clProxyConnection *this,ushort param_1,ushort param_2,uint param_3,clDataList *param_4)

{
  undefined2 in_stack_00000006;
  undefined2 in_stack_0000000a;
  
  if (*(int **)(this + 0x7c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x7c) + 0x10))(_param_1,_param_2,param_3,param_4);
    if (param_4 != (clDataList *)0x0) {
      (*(code *)**(undefined4 **)param_4)(1);
    }
  }
  return;
}




/* from: libgsproxyclient:ProxyConnection.cpp
   addr: 005C5A30 */

void __thiscall
clPointerList<class_clProxyMessage*>::~clPointerList<class_clProxyMessage*>
          (clPointerList<class_clProxyMessage*> *this)

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
  
  puStack_8 = &LAB_005ccd87;
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




/* from: libgsproxyclient:ProxyConnection.cpp
   addr: 005C5AC0 */

void __thiscall
clPointerList<class_clProxyMessage*>::pop_front(clPointerList<class_clProxyMessage*> *this)

{
  int *piVar1;
  clProxyMessage *this_00;
  int *piVar2;
  int iVar3;
  
  piVar1 = *(int **)(this + 4);
  if ((int *)*piVar1 != piVar1) {
    this_00 = *(clProxyMessage **)(*piVar1 + 8);
    if (this_00 != (clProxyMessage *)0x0) {
      clProxyMessage::~clProxyMessage(this_00);
      ExtAlloc_Free_4(this_00);
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




/* from: libgsproxyclient:ProxyConnection.cpp
   addr: 005C5B00 */

void __thiscall
clPointerList<class_clProxyMessage*>::pop_back(clPointerList<class_clProxyMessage*> *this)

{
  int *piVar1;
  clProxyMessage *this_00;
  int *piVar2;
  int iVar3;
  _List_iterator<class_clGameMessage*,struct__STL::_Nonconst_traits<class_clGameMessage*>_> *p_Var4;
  clPointerList<class_clProxyMessage*> *local_4;
  
  piVar1 = *(int **)(this + 4);
  if ((int *)*piVar1 != piVar1) {
    this_00 = *(clProxyMessage **)(piVar1[1] + 8);
    if (this_00 != (clProxyMessage *)0x0) {
      local_4 = this;
      clProxyMessage::~clProxyMessage(this_00);
      ExtAlloc_Free_4(this_00);
    }
    local_4 = *(clPointerList<class_clProxyMessage*> **)(this + 4);
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




/* from: libgsproxyclient:ProxyConnection.cpp
   addr: 005C5B50 */

void __thiscall
clPointerList<class_clProxyMessage*>::erase
          (clPointerList<class_clProxyMessage*> *this,int *param_2,int *param_3)

{
  clProxyMessage *this_00;
  int *piVar1;
  int iVar2;
  
  if ((param_3 != *(int **)(this + 4)) &&
     (this_00 = (clProxyMessage *)param_3[2], this_00 != (clProxyMessage *)0x0)) {
    clProxyMessage::~clProxyMessage(this_00);
    ExtAlloc_Free_4(this_00);
  }
  piVar1 = (int *)param_3[1];
  iVar2 = *param_3;
  *piVar1 = iVar2;
  *(int **)(iVar2 + 4) = piVar1;
  ExtAlloc_Free_4(param_3);
  *param_2 = iVar2;
  return;
}




/* from: libgsproxyclient:ProxyConnection.cpp
   addr: 005C5B90 */

void __thiscall
clPointerList<class_clProxyMessage*>::erase
          (clPointerList<class_clProxyMessage*> *this,undefined4 *param_2,int *param_3,int *param_4)

{
  clProxyMessage *this_00;
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  piVar3 = param_4;
  piVar4 = param_3;
  if (param_3 != param_4) {
    do {
      if (piVar4 == *(int **)(this + 4)) break;
      this_00 = (clProxyMessage *)piVar4[2];
      if (this_00 != (clProxyMessage *)0x0) {
        clProxyMessage::~clProxyMessage(this_00);
        ExtAlloc_Free_4(this_00);
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




/* from: libgsproxyclient:ProxyConnection.cpp
   addr: 005C5C30 */

void __thiscall clProxyMessage::~clProxyMessage(clProxyMessage *this)

{
  clProxyMessage *pcVar1;
  clProxyMessage *pcVar2;
  list<class_clRcvElement*,class_ExtAlloc::Allocator<class_clRcvElement*>_> *this_00;
  int iVar3;
  undefined1 local_10 [4];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005ccdcf;
  pvStack_c = ExceptionList;
  pcVar1 = this + 8;
  pcVar2 = this + 0x14;
  ExceptionList = &pvStack_c;
  *(undefined ***)pcVar1 = &clDataList::_vftable__for__clData__;
  *(undefined ***)pcVar2 = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  *(undefined ***)pcVar2 = &clPointerList<class_clData*>::_vftable_;
  this_00 = (list<class_clRcvElement*,class_ExtAlloc::Allocator<class_clRcvElement*>_> *)
            (this + 0x18);
  iVar3 = *(int *)pcVar2;
  local_4 = 1;
  _STL::list<class_clRcvElement*,class_ExtAlloc::Allocator<class_clRcvElement*>_>::begin(this_00);
  (**(code **)(iVar3 + 0x10))(local_10);
  local_10[0] = 0;
  _STL::_List_base<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_>::clear
            ((_List_base<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_> *)
             this_00);
  ExtAlloc_Free_4(*(undefined4 *)this_00);
  *(undefined ***)pcVar1 = &clData::_vftable_;
  ExceptionList = pcVar1;
  return;
}

