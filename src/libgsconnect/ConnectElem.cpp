
/* from: libgsconnect:ConnectElem.cpp
   addr: 005982F0 */

clMessage * CreateUDPMessage(uchar *param_1,int param_2,int *param_3,clAlgoEncrypt *param_4)

{
  uchar uVar1;
  char cVar2;
  clGSEncryptMessage *this;
  clGameMessage *this_00;
  undefined4 *puVar3;
  clGSMessage *this_01;
  _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
  *this_02;
  uint uVar4;
  clMessage *pcVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c865e;
  local_c = ExceptionList;
  pcVar5 = (clMessage *)0x0;
  ExceptionList = &local_c;
  uVar1 = clMessage::CheckForm(param_1,param_2);
  if (uVar1 == '\0') {
    ExtAlloc_Free_4(param_1);
    pcVar5 = (clMessage *)0x0;
  }
  else {
    uVar1 = clMessage::GetMessageProperty(param_1);
    if (uVar1 == '\0') {
      this_01 = (clGSMessage *)ExtAlloc_Malloc_4(0x18);
      local_4 = 0;
      pcVar5 = (clMessage *)0x0;
      if (this_01 != (clGSMessage *)0x0) {
        pcVar5 = (clMessage *)clGSMessage::clGSMessage(this_01,param_4);
      }
      local_4 = 0xffffffff;
      cVar2 = (**(code **)(*(int *)pcVar5 + 0x10))(param_1,param_2);
      if (cVar2 == '\0') {
        (*(code *)**(undefined4 **)pcVar5)(1);
        ExceptionList = local_c;
        return (clMessage *)0x0;
      }
    }
    else if (uVar1 == '\x01') {
      this_00 = (clGameMessage *)ExtAlloc_Malloc_4(0x1c);
      local_4 = 2;
      if (this_00 == (clGameMessage *)0x0) {
        pcVar5 = (clMessage *)0x0;
      }
      else {
        pcVar5 = (clMessage *)clGameMessage::clGameMessage(this_00,param_4);
      }
      local_4 = 0xffffffff;
      cVar2 = (**(code **)(*(int *)pcVar5 + 0x10))(param_1,param_2);
      if (cVar2 == '\0') {
        (*(code *)**(undefined4 **)pcVar5)(1);
        ExceptionList = local_c;
        return (clMessage *)0x0;
      }
      uVar6 = *(int *)(pcVar5 + 0x14) - 4;
      *param_3 = **(int **)(pcVar5 + 0x10);
      puVar3 = (undefined4 *)ExtAlloc_Malloc_4(uVar6);
      puVar7 = *(undefined4 **)(pcVar5 + 0x10);
      puVar8 = puVar3;
      for (uVar4 = uVar6 >> 2; puVar7 = puVar7 + 1, uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar8 = *puVar7;
        puVar8 = puVar8 + 1;
      }
      for (uVar4 = uVar6 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      ExtAlloc_Free_4(*(int *)(pcVar5 + 0x10));
      *(uint *)(pcVar5 + 0x14) = uVar6;
      *(undefined4 **)(pcVar5 + 0x10) = puVar3;
    }
    else if (uVar1 == '\x02') {
      this = (clGSEncryptMessage *)ExtAlloc_Malloc_4(0x18);
      local_4 = 1;
      pcVar5 = (clMessage *)0x0;
      if (this != (clGSEncryptMessage *)0x0) {
        pcVar5 = (clMessage *)clGSEncryptMessage::clGSEncryptMessage(this,param_4);
      }
      local_4 = 0xffffffff;
      cVar2 = (**(code **)(*(int *)pcVar5 + 0x10))(param_1,param_2);
      if (cVar2 == '\0') {
        (*(code *)**(undefined4 **)pcVar5)(1);
        ExceptionList = local_c;
        return (clMessage *)0x0;
      }
    }
    else {
      _STL::
      _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
      ::
      ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
                (this_02);
    }
    ExtAlloc_Free_4(param_1);
  }
  ExceptionList = local_c;
  return pcVar5;
}




/* from: libgsconnect:ConnectElem.cpp
   addr: 005984B0 */

clConnectElem * __thiscall
clConnectElem::clConnectElem
          (clConnectElem *this,int param_1,int param_2,uchar param_3,uchar param_4,int param_5,
          int param_6,int param_7)

{
  undefined4 uVar1;
  clTCPProtocol *this_00;
  clUDPProtocol *this_01;
  time_t tVar2;
  clAlgoEncrypt *in_stack_00000020;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c8705;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (in_stack_00000020 != (clAlgoEncrypt *)0x0) {
    ExceptionList = &local_c;
    *(undefined1 **)(this + 4) = &_vbtable_;
  }
  *(undefined8 **)(this + 0x28) = &clPointerList<class_clGameMessage*>::_vbtable_;
  local_4 = 3;
  _STL::list<class_clData*,class_ExtAlloc::Allocator<class_clData*>_>::
  list<class_clData*,class_ExtAlloc::Allocator<class_clData*>_>
            ((list<class_clData*,class_ExtAlloc::Allocator<class_clData*>_> *)(this + 0x24),
             (Allocator<class_clData*> *)&stack0x00000020);
  *(undefined ***)(this + 0x20) = &clPointerList<class_clGameMessage*>::_vftable_;
  local_4 = 4;
  clSendMsgQueue::clSendMsgQueue((clSendMsgQueue *)(this + 0x2c));
  local_4._0_1_ = 5;
  clRcvMsgQueue::clRcvMsgQueue((clRcvMsgQueue *)(this + 0x3c));
  *(undefined ***)this = &_vftable_;
  in_stack_00000020 = (clAlgoEncrypt *)ExtAlloc_Malloc_4(0x10);
  local_4._0_1_ = 7;
  if (in_stack_00000020 == (clAlgoEncrypt *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = clAlgoEncrypt::clAlgoEncrypt(in_stack_00000020,1);
  }
  *(undefined4 *)(this + 0x4c) = uVar1;
  this[0x50] = (clConnectElem)0x0;
  *(int *)(this + 0x5c) = DAT_005fe97c;
  local_4._0_1_ = 6;
  DAT_005fe97c = DAT_005fe97c + 1;
  *(int *)(this + 8) = param_2;
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined2 *)(this + 100) = 0;
  this[0xc] = (clConnectElem)param_3;
  this[0xd] = (clConnectElem)param_4;
  *(int *)(this + 0x10) = param_5;
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  if (DAT_00964594 == '\0') {
    tVar2 = time((time_t *)0x0);
    srand((uint)tVar2);
    DAT_00964594 = '\x01';
  }
  if ((param_1 & 2U) == 0) {
    *(undefined4 *)(this + 0x14) = 0;
  }
  else {
    this_00 = (clTCPProtocol *)ExtAlloc_Malloc_4(0x54);
    if (this_00 == (clTCPProtocol *)0x0) {
      this_00 = (clTCPProtocol *)0x0;
    }
    else {
      *(undefined1 **)(this_00 + 4) = &clTCPClient::_vbtable_;
      local_4 = CONCAT31(local_4._1_3_,9);
      clTCPProtocol::clTCPProtocol(this_00);
      *(undefined ***)this_00 = &clTCPClient::_vftable_;
      local_4._1_3_ = 0;
    }
    local_4._0_1_ = 6;
    *(clTCPProtocol **)(this + 0x14) = this_00;
    clTCPProtocol::FixTimeoutConnections(this_00,*(int *)(this + 0x10));
  }
  if ((param_1 & 8U) == 0) {
    *(undefined4 *)(this + 0x18) = 0;
  }
  else {
    this_01 = (clUDPProtocol *)ExtAlloc_Malloc_4(0x20);
    local_4 = CONCAT31(local_4._1_3_,10);
    if (this_01 == (clUDPProtocol *)0x0) {
      *(undefined4 *)(this + 0x18) = 0;
    }
    else {
      uVar1 = clUDPProtocol::clUDPProtocol(this_01,param_6,param_7);
      *(undefined4 *)(this + 0x18) = uVar1;
    }
  }
  *(undefined4 *)(this + 0x1c) = 0;
  ExceptionList = local_c;
  return this;
}




/* from: libgsconnect:ConnectElem.cpp
   addr: 00598690
   addr: 00598690 */

void * __thiscall clConnectElem::_scalar_deleting_destructor_(clConnectElem *this,uint param_1)

{
  ~clConnectElem(this);
  if ((param_1 & 1) != 0) {
    ExtAlloc_Free_4(this);
  }
  return this;
}




/* from: libgsconnect:ConnectElem.cpp
   addr: 005986E0
   addr: 005986E0 */

void * __thiscall
clPointerList<class_clGameMessage*>::_scalar_deleting_destructor_
          (clPointerList<class_clGameMessage*> *this,uint param_1)

{
  ~clPointerList<class_clGameMessage*>(this);
  if ((param_1 & 1) != 0) {
    ExtAlloc_Free_4(this);
  }
  return this;
}




/* from: libgsconnect:ConnectElem.cpp
   addr: 00598700 */

void __thiscall clSendMsgQueue::~clSendMsgQueue(clSendMsgQueue *this)

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
  
  puStack_8 = &LAB_005c8737;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = &clPointerList<class_clSendElement*>::_vftable_;
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




/* from: libgsconnect:ConnectElem.cpp
   addr: 00598790 */

void __thiscall clRcvMsgQueue::~clRcvMsgQueue(clRcvMsgQueue *this)

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
  
  puStack_8 = &LAB_005c8777;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = &clPointerList<class_clRcvElement*>::_vftable_;
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




/* from: libgsconnect:ConnectElem.cpp
   addr: 00598820 */

clConnectElem * __thiscall
clConnectElem::clConnectElem
          (clConnectElem *this,clTCPClient *param_1,clUDPProtocol *param_2,int param_3,uchar param_4
          ,uchar param_5,int param_6)

{
  undefined4 uVar1;
  time_t tVar2;
  clAlgoEncrypt *in_stack_0000001c;
  ushort local_14 [2];
  clConnectElem *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c87c3;
  local_c = ExceptionList;
  local_14[0] = 0;
  local_14[1] = 0;
  ExceptionList = &local_c;
  if (in_stack_0000001c != (clAlgoEncrypt *)0x0) {
    ExceptionList = &local_c;
    *(undefined1 **)(this + 4) = &_vbtable_;
  }
  *(undefined8 **)(this + 0x28) = &clPointerList<class_clGameMessage*>::_vbtable_;
  local_4 = 0;
  local_10 = this;
  _STL::_List_base<class_clProxyMessage*,class_ExtAlloc::Allocator<class_clProxyMessage*>_>::
  List_base<class_clProxyMessage*,class_ExtAlloc::Allocator<class_clProxyMessage*>_>
            ((_List_base<class_clProxyMessage*,class_ExtAlloc::Allocator<class_clProxyMessage*>_> *)
             (this + 0x24),(Allocator<class_clProxyMessage*> *)&stack0x0000001c);
  *(undefined ***)(this + 0x20) = &clPointerList<class_clGameMessage*>::_vftable_;
  local_4 = 1;
  clSendMsgQueue::clSendMsgQueue((clSendMsgQueue *)(this + 0x2c));
  local_4._0_1_ = 2;
  clRcvMsgQueue::clRcvMsgQueue((clRcvMsgQueue *)(this + 0x3c));
  *(undefined ***)this = &_vftable_;
  in_stack_0000001c = (clAlgoEncrypt *)ExtAlloc_Malloc_4(0x10);
  local_4._0_1_ = 4;
  if (in_stack_0000001c == (clAlgoEncrypt *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = clAlgoEncrypt::clAlgoEncrypt(in_stack_0000001c,1);
  }
  *(undefined4 *)(this + 0x4c) = uVar1;
  this[0x50] = (clConnectElem)0x0;
  local_4 = CONCAT31(local_4._1_3_,3);
  *(int *)(this + 0x5c) = DAT_005fe97c;
  DAT_005fe97c = DAT_005fe97c + 1;
  if (DAT_00964594 == '\0') {
    tVar2 = time((time_t *)0x0);
    srand((uint)tVar2);
    DAT_00964594 = '\x01';
  }
  if (param_1 != (clTCPClient *)0x0) {
    clTCPProtocol::GetPeerAddress((clTCPProtocol *)param_1,(uint *)(this + 0x60),local_14);
    clTCPProtocol::FixTimeoutConnections((clTCPProtocol *)param_1,param_6);
  }
  *(int *)(this + 8) = param_3;
  this[0xd] = (clConnectElem)param_5;
  *(clTCPClient **)(this + 0x14) = param_1;
  *(undefined2 *)(this + 100) = 0;
  this[0xc] = (clConnectElem)param_4;
  *(int *)(this + 0x10) = param_6;
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  *(clUDPProtocol **)(this + 0x1c) = param_2;
  *(undefined4 *)(this + 0x18) = 0;
  ExceptionList = local_c;
  return this;
}




/* from: libgsconnect:ConnectElem.cpp
   addr: 00598970 */

void __thiscall clConnectElem::~clConnectElem(clConnectElem *this)

{
  list<class_clRcvElement*,class_ExtAlloc::Allocator<class_clRcvElement*>_> *this_00;
  int iVar1;
  void *unaff_ESI;
  _List_base<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_> *this_01;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c8876;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = &_vftable_;
  local_4 = 2;
  Disconnect(this);
  if (*(undefined4 **)(this + 0x14) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x14))();
  }
  if (*(clUDPProtocol **)(this + 0x18) != (clUDPProtocol *)0x0) {
    clUDPProtocol::~clUDPProtocol(*(clUDPProtocol **)(this + 0x18));
    ExtAlloc_Free_4();
  }
  if (*(clAlgoEncrypt **)(this + 0x4c) != (clAlgoEncrypt *)0x0) {
    clAlgoEncrypt::~clAlgoEncrypt(*(clAlgoEncrypt **)(this + 0x4c));
    ExtAlloc_Free_4();
  }
  *(undefined ***)(this + 0x3c) = &clPointerList<class_clRcvElement*>::_vftable_;
  local_4._0_1_ = 3;
  clPointerList<class_clRcvElement*>::clear((clPointerList<class_clRcvElement*> *)(this + 0x3c));
  this_01 = (_List_base<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_> *)
            (this + 0x40);
  local_4._0_1_ = 4;
  _STL::_List_base<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_>::clear
            (this_01);
  _STL::
  _STLP_alloc_proxy<struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>*,struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
  ::deallocate((_STLP_alloc_proxy<struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>*,struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
                *)this_01,
               *(_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
                 **)this_01,1);
  *(undefined ***)(this + 0x2c) = &clPointerList<class_clSendElement*>::_vftable_;
  iVar1 = *(int *)(this + 0x2c);
  local_4 = CONCAT31(local_4._1_3_,5);
  _STL::list<class_clRcvElement*,class_ExtAlloc::Allocator<class_clRcvElement*>_>::begin
            ((list<class_clRcvElement*,class_ExtAlloc::Allocator<class_clRcvElement*>_> *)
             (this + 0x30));
  (**(code **)(iVar1 + 0x10))();
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            ((list<class_clRcvElement*> *)(this + 0x30));
  *(undefined ***)(this + 0x20) = &clPointerList<class_clGameMessage*>::_vftable_;
  this_00 = (list<class_clRcvElement*,class_ExtAlloc::Allocator<class_clRcvElement*>_> *)
            (this + 0x24);
  iVar1 = *(int *)(this + 0x20);
  _STL::list<class_clRcvElement*,class_ExtAlloc::Allocator<class_clRcvElement*>_>::begin(this_00);
  (**(code **)(iVar1 + 0x10))(&stack0xffffffe0);
  _STL::_List_base<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_>::clear
            ((_List_base<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_> *)
             this_00);
  _STL::
  _STLP_alloc_proxy<struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>*,struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
  ::deallocate((_STLP_alloc_proxy<struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>*,struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
                *)this_00,
               *(_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
                 **)this_00,1);
  ExceptionList = unaff_ESI;
  return;
}




/* from: libgsconnect:ConnectElem.cpp
   addr: 00598AC0 */

void __thiscall clConnectElem::SendUDPConnectID(clConnectElem *this,int param_1)

{
  Allocator<class_clProxyMessage*> local_2d;
  undefined ***local_2c;
  _Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
  **local_28;
  undefined **local_24;
  undefined4 *local_20;
  undefined4 local_1c;
  undefined **local_18;
  _Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
  *local_14;
  undefined8 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c88cf;
  local_c = ExceptionList;
  local_2c = (undefined ***)0x0;
  local_20 = &clDataList::_vbtable__for__clData__;
  local_10 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
  local_1c = 3;
  local_24 = &clData::_vftable_;
  local_4 = 1;
  ExceptionList = &local_c;
  _STL::_List_base<class_clProxyMessage*,class_ExtAlloc::Allocator<class_clProxyMessage*>_>::
  List_base<class_clProxyMessage*,class_ExtAlloc::Allocator<class_clProxyMessage*>_>
            ((_List_base<class_clProxyMessage*,class_ExtAlloc::Allocator<class_clProxyMessage*>_> *)
             &local_14,&local_2d);
  local_24 = &clDataList::_vftable__for__clData__;
  local_18 = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_4 = 2;
  _STL::
  _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
  ::
  ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
            ((_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
              *)param_1);
  clDataList::Add((clDataList *)&local_24,&param_1);
  SendGSMessage(this,'\x06','\x02','\b',(clDataList *)&local_24);
  local_24 = &clDataList::_vftable__for__clData__;
  local_2c = &local_18;
  local_18 = &clPointerList<class_clData*>::_vftable_;
  local_4._0_1_ = 4;
  local_4._1_3_ = 0;
  clPointerList<class_clRcvElement*>::clear((clPointerList<class_clRcvElement*> *)&local_18);
  local_28 = &local_14;
  local_4 = CONCAT31(local_4._1_3_,5);
  _STL::_List_base<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_>::clear
            ((_List_base<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_> *)
             &local_14);
  _STL::
  _STLP_alloc_proxy<struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>*,struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
  ::deallocate((_STLP_alloc_proxy<struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>*,struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
                *)&local_14,local_14,1);
  ExceptionList = local_c;
  return;
}




/* from: libgsconnect:ConnectElem.cpp
   addr: 00598BD0 */

void __thiscall clConnectElem::ReadUDPConnectID(clConnectElem *this,clDataList *param_1)

{
  _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
  *this_00;
  
  clDataList::GetIndex(param_1,(int *)(this + 0x54),0);
  _STL::
  _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
  ::
  ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
            (this_00);
  SendUDPConnectEvent(this);
  return;
}




/* from: libgsconnect:ConnectElem.cpp
   addr: 00598C00 */

void __thiscall clConnectElem::SendUDPConnectEvent(clConnectElem *this)

{
  undefined4 uStack_4;
  
  uStack_4 = this;
  _STL::
  _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
  ::
  ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
            ((_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
              *)this);
  uStack_4 = (clConnectElem *)((uint)uStack_4 & 0xffffff);
  SendGameMessage(this,0xed,0,' ',(void *)((int)&uStack_4 + 3),1);
  return;
}




/* from: libgsconnect:ConnectElem.cpp
   addr: 00598C30 */

uchar __thiscall
clConnectElem::ConnectHost(clConnectElem *this,char *param_1,ushort param_2,ushort param_3)

{
  uchar uVar1;
  int iVar2;
  
  clSocket::AddrToInt(param_1,(uint *)(this + 0x60));
  if ((*(clTCPClient **)(this + 0x14) != (clTCPClient *)0x0) &&
     (uVar1 = clTCPClient::ConnectHost
                        (*(clTCPClient **)(this + 0x14),*(uint *)(this + 0x60),param_2),
     uVar1 == '\0')) {
    return '\0';
  }
  if (*(clUDPProtocol **)(this + 0x18) != (clUDPProtocol *)0x0) {
    uVar1 = clUDPProtocol::Bind(*(clUDPProtocol **)(this + 0x18),0,param_3,'\0','\x01');
    if (uVar1 == '\0') {
      return '\0';
    }
    iVar2 = rand();
    *(int *)(this + 0x58) = iVar2;
    while (iVar2 == 0) {
      iVar2 = rand();
      *(int *)(this + 0x58) = iVar2;
    }
    SendUDPConnectID(this,*(int *)(this + 0x58));
    CheckConnection(this);
    *(ushort *)(this + 100) = param_2 + 1;
  }
  return '\x01';
}




/* from: libgsconnect:ConnectElem.cpp
   addr: 00598CC0 */

uchar __thiscall clConnectElem::Disconnect(clConnectElem *this)

{
  uchar uVar1;
  
  CheckConnection(this);
  if (*(clTCPProtocol **)(this + 0x14) != (clTCPProtocol *)0x0) {
    uVar1 = clTCPProtocol::Close(*(clTCPProtocol **)(this + 0x14));
    if (uVar1 == '\0') {
      return '\0';
    }
  }
  if (*(clUDPProtocol **)(this + 0x18) != (clUDPProtocol *)0x0) {
    uVar1 = clUDPProtocol::Close(*(clUDPProtocol **)(this + 0x18));
    if (uVar1 == '\0') {
      return '\0';
    }
    *(undefined4 *)(this + 0x54) = 0;
    *(undefined4 *)(this + 0x58) = 0;
  }
  return '\x01';
}




/* from: libgsconnect:ConnectElem.cpp
   addr: 00598D00 */

uchar __thiscall clConnectElem::CheckConnection(clConnectElem *this)

{
  clTCPProtocol *this_00;
  int iVar1;
  uint uVar2;
  void **ppvVar3;
  uchar uVar4;
  clGSMessage *pcVar5;
  uchar *puVar6;
  clGameMessage *this_01;
  int *piVar7;
  char *pcVar8;
  uint uVar9;
  int unaff_EBX;
  uchar *puVar10;
  uchar *puVar11;
  time_t tVar12;
  int iStack_38;
  int *local_34;
  undefined1 auStack_28 [4];
  undefined **local_24;
  undefined4 *local_20;
  undefined4 local_1c;
  undefined **local_18 [2];
  undefined8 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c890c;
  local_c = ExceptionList;
  this_00 = *(clTCPProtocol **)(this + 0x14);
  ppvVar3 = &local_c;
  if (this_00 != (clTCPProtocol *)0x0) {
    if (this_00[0x44] == (clTCPProtocol)0x0) {
      return '\0';
    }
    ExceptionList = &local_c;
    uVar4 = clTCPProtocol::SendAllData(this_00);
    if (uVar4 == '\0') {
      ExceptionList = local_c;
      return '\0';
    }
    uVar4 = clTCPProtocol::ReadAllData(*(clTCPProtocol **)(this + 0x14));
    ppvVar3 = (void **)ExceptionList;
    if (uVar4 == '\0') {
      ExceptionList = local_c;
      return '\0';
    }
  }
  ExceptionList = ppvVar3;
  uVar4 = UpdateRcvQueue(this);
  if (uVar4 == '\0') {
    ExceptionList = local_c;
    return '\0';
  }
  UpdateSendQueue(this);
  iVar1 = *(int *)(this + 0x14);
  if (iVar1 != 0) {
    tVar12 = time((time_t *)0x0);
    if ((*(int *)(this + 8) < (int)tVar12 - *(int *)(iVar1 + 0x48)) && (*(int *)(this + 8) != 0)) {
      local_20 = &clDataList::_vbtable__for__clData__;
      local_10 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
      local_1c = 3;
      local_24 = &clData::_vftable_;
      local_4 = 0;
      clPointerList<class_clData*>::clPointerList<class_clData*>
                ((clPointerList<class_clData*> *)local_18);
      local_24 = &clDataList::_vftable__for__clData__;
      local_18[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
      local_4 = 1;
      pcVar5 = (clGSMessage *)ExtAlloc_Malloc_4();
      local_4._0_1_ = 2;
      if (pcVar5 == (clGSMessage *)0x0) {
        pcVar5 = (clGSMessage *)0x0;
      }
      else {
        pcVar5 = (clGSMessage *)
                 clGSMessage::clGSMessage
                           (pcVar5,*(clAlgoEncrypt **)(this + 0x4c),':','\0',(uchar)this[0xc],
                            (uchar)this[0xd],(clDataList *)&local_24);
      }
      local_4 = CONCAT31(local_4._1_3_,1);
      SendGSMessage(this,pcVar5);
      if (pcVar5 != (clGSMessage *)0x0) {
        (*(code *)**(undefined4 **)pcVar5)();
      }
      local_24 = &clDataList::_vftable__for__clData__;
      local_18[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
      local_4 = 3;
      clPointerList<class_clData*>::~clPointerList<class_clData*>
                ((clPointerList<class_clData*> *)local_18);
      local_4 = 0xffffffff;
    }
    if (*(int *)(*(int *)(this + 0x14) + 0x40) != 0) {
      ExceptionList = local_c;
      return '\0';
    }
  }
  local_34 = (int *)**(int **)(this + 0x24);
  if (local_34 != *(int **)(this + 0x24)) {
    do {
      iStack_38 = *(int *)(this + 0x18);
      if (iStack_38 == 0) {
        iStack_38 = *(int *)(this + 0x1c);
      }
      if (iStack_38 != 0) {
        iVar1 = local_34[2];
        uVar2 = *(uint *)(iVar1 + 0x14);
        puVar6 = (uchar *)ExtAlloc_Malloc_4();
        *(undefined4 *)puVar6 = *(undefined4 *)(this + 0x54);
        puVar10 = *(uchar **)(iVar1 + 0x10);
        puVar11 = puVar6;
        for (uVar9 = uVar2 >> 2; puVar11 = puVar11 + 4, uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)puVar11 = *(undefined4 *)puVar10;
          puVar10 = puVar10 + 4;
        }
        for (uVar9 = uVar2 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *puVar11 = *puVar10;
          puVar10 = puVar10 + 1;
          puVar11 = puVar11 + 1;
        }
        this_01 = (clGameMessage *)ExtAlloc_Malloc_4();
        local_4 = 4;
        if (this_01 == (clGameMessage *)0x0) {
          piVar7 = (int *)0x0;
        }
        else {
          piVar7 = (int *)clGameMessage::clGameMessage
                                    (this_01,*(clAlgoEncrypt **)(this + 0x4c),
                                     *(short *)(iVar1 + 0x18),*(uchar *)(iVar1 + 0xd),
                                     *(uchar *)(iVar1 + 0xe),puVar6,(int)(uVar2 + 4));
        }
        local_4 = 0xffffffff;
        ExtAlloc_Free_4();
        pcVar8 = (char *)(**(code **)(*piVar7 + 4))();
        uVar4 = clUDPProtocol::SendUDPMessage
                          ((clUDPProtocol *)(uVar2 + 4),pcVar8,unaff_EBX,*(uint *)(this + 0x60),
                           *(ushort *)(this + 100));
        (**(code **)*piVar7)(1);
        ExtAlloc_Free_4();
        if (uVar4 == '\0') {
          ExceptionList = local_c;
          return '\x01';
        }
      }
      local_34 = (int *)*local_34;
      (**(code **)(*(int *)(this + 0x20) + 0x14))(auStack_28);
    } while (local_34 != (int *)*(int *)(this + 0x24));
  }
  ExceptionList = local_c;
  return '\x01';
}




/* from: libgsconnect:ConnectElem.cpp
   addr: 00598FF0 */

uchar __thiscall clConnectElem::UpdateRcvQueue(clConnectElem *this)

{
  uchar uVar1;
  char cVar2;
  int iVar3;
  uchar *puVar4;
  clGSEncryptMessage *this_00;
  clMessage *pcVar5;
  clGameMessage *this_01;
  clGSMessage *this_02;
  _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
  *this_03;
  _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
  *this_04;
  _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
  *this_05;
  _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
  *this_06;
  _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
  *extraout_ECX;
  _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
  *this_07;
  uint local_24;
  uchar local_14 [4];
  void *pvStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c893e;
  local_c = ExceptionList;
  local_24 = 0;
  ExceptionList = &local_c;
  while( true ) {
    iVar3 = *(int *)(this + 0x14);
    if (iVar3 != 0) {
      local_24 = *(uint *)(iVar3 + 0x14);
    }
    if (local_24 < 6) {
      ExceptionList = local_c;
      return '\x01';
    }
    if (7 < local_24) {
      local_24 = 7;
    }
    if ((iVar3 != 0) &&
       (uVar1 = clFifo::peek_front((clFifo *)(iVar3 + 8),local_24,local_14), uVar1 == '\0')) {
      ExceptionList = local_c;
      return '\x01';
    }
    iVar3 = clMessage::GetMessageSize(local_14);
    uVar1 = clMessage::CheckForm(local_14,local_24);
    if (uVar1 == '\0') {
      _STL::
      _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
      ::
      ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
                (this_03);
      ExceptionList = local_c;
      return '\0';
    }
    if ((*(int *)(this + 0x14) != 0) && (*(int *)(*(int *)(this + 0x14) + 0x14) < iVar3)) {
      ExceptionList = local_c;
      return '\x01';
    }
    puVar4 = (uchar *)ExtAlloc_Malloc_4(iVar3);
    if ((*(int *)(this + 0x14) != 0) &&
       (uVar1 = clFifo::pop_front((clFifo *)(*(int *)(this + 0x14) + 8),iVar3,puVar4), uVar1 == '\0'
       )) break;
    uVar1 = clMessage::GetMessageProperty(puVar4);
    if (uVar1 == '\0') {
      this_02 = (clGSMessage *)ExtAlloc_Malloc_4(0x18);
      local_4 = 0;
      if (this_02 == (clGSMessage *)0x0) {
        pcVar5 = (clMessage *)0x0;
      }
      else {
        pcVar5 = (clMessage *)clGSMessage::clGSMessage(this_02,*(clAlgoEncrypt **)(this + 0x4c));
      }
      local_4 = 0xffffffff;
      cVar2 = (**(code **)(*(int *)pcVar5 + 0x10))(puVar4,iVar3);
      this_07 = extraout_ECX;
      if (cVar2 == '\0') {
LAB_00599248:
        _STL::
        _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
        ::
        ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
                  (this_07);
        ExtAlloc_Free_4(puVar4);
        (*(code *)**(undefined4 **)pcVar5)(1);
        ExceptionList = pvStack_10;
        return '\0';
      }
    }
    else if (uVar1 == '\x01') {
      this_01 = (clGameMessage *)ExtAlloc_Malloc_4(0x1c);
      local_4 = 1;
      if (this_01 == (clGameMessage *)0x0) {
        pcVar5 = (clMessage *)0x0;
      }
      else {
        pcVar5 = (clMessage *)clGameMessage::clGameMessage(this_01,*(clAlgoEncrypt **)(this + 0x4c))
        ;
      }
      local_4 = 0xffffffff;
      cVar2 = (**(code **)(*(int *)pcVar5 + 0x10))(puVar4,iVar3);
      if (cVar2 == '\0') {
        _STL::
        _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
        ::
        ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
                  (this_06);
        ExtAlloc_Free_4(puVar4);
        (*(code *)**(undefined4 **)pcVar5)(1);
        ExceptionList = pvStack_10;
        return '\0';
      }
    }
    else {
      if (uVar1 != '\x02') goto LAB_0059922e;
      this_00 = (clGSEncryptMessage *)ExtAlloc_Malloc_4(0x18);
      local_4 = 2;
      if (this_00 == (clGSEncryptMessage *)0x0) {
        pcVar5 = (clMessage *)0x0;
      }
      else {
        pcVar5 = (clMessage *)
                 clGSEncryptMessage::clGSEncryptMessage(this_00,*(clAlgoEncrypt **)(this + 0x4c));
      }
      local_4 = 0xffffffff;
      cVar2 = (**(code **)(*(int *)pcVar5 + 0x10))(puVar4,iVar3);
      this_07 = this_05;
      if (cVar2 == '\0') goto LAB_00599248;
      _STL::
      _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
      ::
      ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
                (this_05);
    }
    clRcvMsgQueue::AddMessage((clRcvMsgQueue *)(this + 0x3c),0,pcVar5);
    ExtAlloc_Free_4(puVar4);
  }
  _STL::
  _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
  ::
  ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
            (this_04);
LAB_0059922e:
  ExtAlloc_Free_4(puVar4);
  ExceptionList = local_c;
  return '\0';
}




/* from: libgsconnect:ConnectElem.cpp
   addr: 00599280 */

uchar __thiscall clConnectElem::UpdateSendQueue(clConnectElem *this)

{
  short sVar1;
  uchar uVar2;
  uchar *puVar3;
  clConnectElem *local_4;
  
  if ((*(int *)(this + 0x14) != 0) && (*(char *)(*(int *)(this + 0x14) + 0x44) == '\0')) {
    return '\0';
  }
  sVar1 = *(short *)(this + 0x38);
  uVar2 = '\x01';
  local_4 = this;
  while ((sVar1 != 0 && (uVar2 != '\0'))) {
    puVar3 = clSendMsgQueue::ConcatMessages((clSendMsgQueue *)(this + 0x2c),1000,(int *)&local_4);
    if (*(clTCPProtocol **)(this + 0x14) != (clTCPProtocol *)0x0) {
      uVar2 = clTCPProtocol::SendMessageA
                        (*(clTCPProtocol **)(this + 0x14),(char *)puVar3,(int)local_4);
    }
    if (uVar2 != '\0') {
      clSendMsgQueue::RemoveMessages((clSendMsgQueue *)(this + 0x2c),(int)local_4);
    }
    ExtAlloc_Free_4(puVar3);
    sVar1 = *(short *)(this + 0x38);
  }
  return '\x01';
}




/* from: libgsconnect:ConnectElem.cpp
   addr: 00599300 */

uchar __thiscall
clConnectElem::SendGSMessage
          (clConnectElem *this,uchar param_1,uchar param_2,uchar param_3,clDataList *param_4)

{
  clGSMessage *this_00;
  clMessage *pcVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c895a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this_00 = (clGSMessage *)ExtAlloc_Malloc_4(0x18);
  local_4 = 0;
  if (this_00 == (clGSMessage *)0x0) {
    pcVar1 = (clMessage *)0x0;
  }
  else {
    pcVar1 = (clMessage *)
             clGSMessage::clGSMessage
                       (this_00,*(clAlgoEncrypt **)(this + 0x4c),param_1,'\0',param_2,param_3,
                        param_4);
  }
  local_4 = 0xffffffff;
  clSendMsgQueue::AddMessage((clSendMsgQueue *)(this + 0x2c),0,pcVar1);
  if (pcVar1 != (clMessage *)0x0) {
    (*(code *)**(undefined4 **)pcVar1)(1);
  }
  ExceptionList = local_c;
  return '\x01';
}




/* from: libgsconnect:ConnectElem.cpp
   addr: 00599390 */

uchar __thiscall clConnectElem::SendGSMessage(clConnectElem *this,clGSMessage *param_1)

{
  clSendMsgQueue::AddMessage((clSendMsgQueue *)(this + 0x2c),0,(clMessage *)param_1);
  return '\x01';
}




/* from: libgsconnect:ConnectElem.cpp
   addr: 005993B0 */

uchar __thiscall clConnectElem::SendMessageA(clConnectElem *this,uchar param_1,clDataList *param_2)

{
  clGSMessage *this_00;
  clMessage *pcVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c897a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this_00 = (clGSMessage *)ExtAlloc_Malloc_4(0x18);
  local_4 = 0;
  if (this_00 == (clGSMessage *)0x0) {
    pcVar1 = (clMessage *)0x0;
  }
  else {
    pcVar1 = (clMessage *)
             clGSMessage::clGSMessage
                       (this_00,*(clAlgoEncrypt **)(this + 0x4c),param_1,'\0',(uchar)this[0xc],
                        (uchar)this[0xd],param_2);
  }
  local_4 = 0xffffffff;
  clSendMsgQueue::AddMessage((clSendMsgQueue *)(this + 0x2c),pcVar1);
  if (pcVar1 != (clMessage *)0x0) {
    (*(code *)**(undefined4 **)pcVar1)(1);
  }
  ExceptionList = local_c;
  return '\x01';
}




/* from: libgsconnect:ConnectElem.cpp
   addr: 00599440 */

uchar __thiscall
clConnectElem::SendGSEncryptMessage
          (clConnectElem *this,uchar param_1,uchar param_2,uchar param_3,clDataList *param_4)

{
  clGSEncryptMessage *this_00;
  clMessage *pcVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c899a;
  local_c = ExceptionList;
  if (this[0x50] == (clConnectElem)0x0) {
    return '\0';
  }
  ExceptionList = &local_c;
  _STL::
  _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
  ::
  ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
            ((_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
              *)this);
  this_00 = (clGSEncryptMessage *)ExtAlloc_Malloc_4(0x18);
  local_4 = 0;
  if (this_00 == (clGSEncryptMessage *)0x0) {
    pcVar1 = (clMessage *)0x0;
  }
  else {
    pcVar1 = (clMessage *)
             clGSEncryptMessage::clGSEncryptMessage
                       (this_00,*(clAlgoEncrypt **)(this + 0x4c),param_1,'\0',param_2,param_3,
                        param_4);
  }
  local_4 = 0xffffffff;
  clSendMsgQueue::AddMessage((clSendMsgQueue *)(this + 0x2c),0,pcVar1);
  if (pcVar1 != (clMessage *)0x0) {
    (*(code *)**(undefined4 **)pcVar1)(1);
  }
  ExceptionList = local_c;
  return '\x01';
}




/* from: libgsconnect:ConnectElem.cpp
   addr: 00599500 */

uchar __thiscall
clConnectElem::SendGameMessage
          (clConnectElem *this,uchar param_1,short param_2,uchar param_3,void *param_4,int param_5)

{
  uchar uVar1;
  clGameMessage *pcVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c89ba;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pcVar2 = (clGameMessage *)ExtAlloc_Malloc_4(0x1c);
  local_4 = 0;
  if (pcVar2 == (clGameMessage *)0x0) {
    pcVar2 = (clGameMessage *)0x0;
  }
  else {
    pcVar2 = (clGameMessage *)
             clGameMessage::clGameMessage
                       (pcVar2,*(clAlgoEncrypt **)(this + 0x4c),param_2,param_1,param_3,
                        (uchar *)param_4,param_5);
  }
  local_4 = 0xffffffff;
  uVar1 = SendGameMessage(this,pcVar2);
  if (pcVar2 != (clGameMessage *)0x0) {
    (*(code *)**(undefined4 **)pcVar2)(1);
  }
  ExceptionList = local_c;
  return uVar1;
}




/* from: libgsconnect:ConnectElem.cpp
   addr: 005995A0 */

uchar __thiscall clConnectElem::SendGameMessage(clConnectElem *this,clGameMessage *param_1)

{
  clGameMessage cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  byte bVar6;
  clConnectElem *this_00;
  uchar uVar7;
  clGameMessage *this_01;
  _List_node<class_clData*> *p_Var8;
  bool bVar9;
  int *piVar10;
  bool bVar11;
  bool bVar12;
  int *local_1c;
  clConnectElem *local_18;
  clConnectElem *local_14;
  clData *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c89da;
  local_c = ExceptionList;
  local_18 = this;
  if (((byte)param_1[0xe] & 0x20) == 0) {
    ExceptionList = &local_c;
    clSendMsgQueue::AddMessage
              ((clSendMsgQueue *)(this + 0x2c),*(short *)(param_1 + 0x18),(clMessage *)param_1);
  }
  else {
    ExceptionList = &local_c;
    uVar7 = IsUDPConnected(this);
    if (uVar7 == '\0') {
      ExceptionList = local_c;
      return '\0';
    }
    local_1c = *(int **)(this + 0x24);
    local_14 = this + 0x24;
    piVar10 = (int *)*local_1c;
    if (piVar10 != local_1c) {
      pcVar2 = *(char **)(param_1 + 0x10);
      cVar1 = param_1[0xd];
      do {
        iVar3 = piVar10[2];
        pcVar4 = *(char **)(iVar3 + 0x10);
        bVar11 = *(clGameMessage *)(iVar3 + 0xd) == cVar1;
        bVar12 = *(short *)(iVar3 + 0x18) == *(short *)(param_1 + 0x18);
        bVar9 = (bVar11 && bVar12) && *pcVar4 == *pcVar2;
        if ((bVar11 && bVar12) && *pcVar4 == *pcVar2) {
          if ((cVar1 == (clGameMessage)0x3) || (cVar1 == (clGameMessage)0x2)) {
            if ((pcVar4[1] == pcVar2[1]) && (pcVar4[2] == pcVar2[2])) {
              bVar6 = 1;
            }
            else {
              bVar6 = 0;
            }
            bVar9 = (bool)(bVar9 & bVar6);
          }
          if (bVar9) {
            local_1c = (int *)&stack0xffffffc8;
            (**(code **)(*(int *)(local_18 + 0x20) + 0x14))(&local_1c);
            break;
          }
        }
        piVar10 = (int *)*piVar10;
      } while (piVar10 != local_1c);
    }
    this_01 = (clGameMessage *)ExtAlloc_Malloc_4();
    local_4 = 0;
    if (this_01 == (clGameMessage *)0x0) {
      local_10 = (clData *)0x0;
    }
    else {
      local_10 = (clData *)clGameMessage::clGameMessage(this_01,param_1);
    }
    this_00 = local_14;
    local_4 = 0xffffffff;
    _STL::list<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_>::end
              ((list<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_> *)local_14);
    p_Var8 = _STL::list<class_clData*,class_ExtAlloc::Allocator<class_clData*>_>::M_create_node
                       ((list<class_clData*,class_ExtAlloc::Allocator<class_clData*>_> *)this_00,
                        &local_10);
    puVar5 = *(undefined4 **)(this_01 + 4);
    *(clGameMessage **)p_Var8 = this_01;
    *(undefined4 **)(p_Var8 + 4) = puVar5;
    *puVar5 = p_Var8;
    *(_List_node<class_clData*> **)(this_01 + 4) = p_Var8;
  }
  ExceptionList = local_c;
  return '\x01';
}




/* from: libgsconnect:ConnectElem.cpp
   addr: 00599710 */

uchar __thiscall clConnectElem::GetLocalIPAddress(clConnectElem *this,char *param_1)

{
  uchar uVar1;
  
  if (*(clTCPProtocol **)(this + 0x14) != (clTCPProtocol *)0x0) {
    uVar1 = clTCPProtocol::GetLocalAddress
                      (*(clTCPProtocol **)(this + 0x14),param_1,(ushort *)&param_1);
    return uVar1;
  }
  return '\0';
}




/* from: libgsconnect:ConnectElem.cpp
   addr: 00599730 */

uchar __thiscall clConnectElem::IsUDPConnected(clConnectElem *this)

{
  if ((*(int *)(this + 0x18) == 0) && (*(int *)(this + 0x1c) == 0)) {
    return '\x01';
  }
  if (*(int *)(this + 0x54) != 0) {
    if (*(short *)(this + 100) != 0) {
      return '\x01';
    }
    SendUDPConnectID(this,*(int *)(this + 0x58));
  }
  return '\0';
}




/* from: libgsconnect:ConnectElem.cpp
   addr: 00599760 */

clMessage * __thiscall clConnectElem::ReadTCPMessage(clConnectElem *this)

{
  clMessage *pcVar1;
  
  pcVar1 = clRcvMsgQueue::GetFirstMessage((clRcvMsgQueue *)(this + 0x3c));
  if ((pcVar1 != (clMessage *)0x0) && (pcVar1[0xc] == (clMessage)0x0)) {
    if (pcVar1[0xd] == (clMessage)0x6) {
      ReadUDPConnectID(this,*(clDataList **)(pcVar1 + 0x14));
      (*(code *)**(undefined4 **)pcVar1)(1);
      return (clMessage *)0x0;
    }
    if (pcVar1[0xd] == (clMessage)0xdb) {
      ReadEncryptMsg(this,*(clDataList **)(pcVar1 + 0x14));
      (*(code *)**(undefined4 **)pcVar1)(1);
      return (clMessage *)0x0;
    }
  }
  return pcVar1;
}




/* from: libgsconnect:ConnectElem.cpp
   addr: 005997C0 */

clMessage * __thiscall clConnectElem::ReadUDPMessage(clConnectElem *this)

{
  uchar *puVar1;
  clMessage *pcVar2;
  ushort local_e;
  int local_c;
  int local_8;
  uint local_4;
  
  if (((*(clUDPProtocol **)(this + 0x18) != (clUDPProtocol *)0x0) &&
      (puVar1 = clUDPProtocol::ReadUDPMessage
                          (*(clUDPProtocol **)(this + 0x18),&local_4,&local_e,&local_c),
      puVar1 != (uchar *)0x0)) &&
     (pcVar2 = CreateUDPMessage(puVar1,local_c,&local_8,*(clAlgoEncrypt **)(this + 0x4c)),
     pcVar2 != (clMessage *)0x0)) {
    if (local_8 == *(int *)(this + 0x58)) {
      *(ushort *)(this + 100) = local_e;
      if (pcVar2[0xc] != (clMessage)0x1) {
        return pcVar2;
      }
      if (pcVar2[0xd] != (clMessage)0xed) {
        return pcVar2;
      }
    }
    (*(code *)**(undefined4 **)pcVar2)(1);
  }
  return (clMessage *)0x0;
}




/* from: libgsconnect:ConnectElem.cpp
   addr: 00599830 */

clMessage * __thiscall clConnectElem::ReadMessage(clConnectElem *this,uchar *param_1)

{
  clMessage *pcVar1;
  
  *param_1 = '\x02';
  pcVar1 = ReadTCPMessage(this);
  if (pcVar1 == (clMessage *)0x0) {
    *param_1 = '\b';
    pcVar1 = ReadUDPMessage(this);
  }
  return pcVar1;
}




/* from: libgsconnect:ConnectElem.cpp
   addr: 00599860 */

uchar __thiscall clConnectElem::InitializeSecureTransmission(clConnectElem *this)

{
  uchar uVar1;
  uint uVar2;
  clMessage *pcVar3;
  time_t tVar4;
  time_t tVar5;
  RSA_PUBLIC_KEY local_104 [260];
  
  if (this[0x50] != (clConnectElem)0x0) {
    return '\x01';
  }
  if (*(char *)(*(int *)(this + 0x14) + 0x44) != '\0') {
    clAlgoEncrypt::GetPublicKey(*(clAlgoEncrypt **)(this + 0x4c),local_104);
    SendPublicKey(this,1,(uchar *)local_104,0x104);
    tVar4 = time((time_t *)0x0);
    tVar5 = time((time_t *)0x0);
    uVar2 = (int)tVar5 - (int)tVar4;
    while (uVar2 < 5) {
      uVar1 = CheckConnection(this);
      if (uVar1 == '\0') {
        return '\0';
      }
      pcVar3 = ReadTCPMessage(this);
      if (pcVar3 != (clMessage *)0x0) {
        (*(code *)**(undefined4 **)pcVar3)(1);
      }
      if (this[0x50] != (clConnectElem)0x0) {
        return '\x01';
      }
      tVar5 = time((time_t *)0x0);
      uVar2 = (int)tVar5 - (int)tVar4;
    }
    this[0x50] = (clConnectElem)0x0;
  }
  return '\0';
}




/* from: libgsconnect:ConnectElem.cpp
   addr: 00599910 */

void __thiscall clConnectElem::ReadEncryptMsg(clConnectElem *this,clDataList *param_1)

{
  uint uVar1;
  Allocator<class_clProxyMessage*> local_2d;
  uint local_2c;
  _Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
  **local_28;
  undefined **local_24;
  undefined4 *local_20;
  undefined4 local_1c;
  undefined **local_18;
  _Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
  *local_14;
  undefined8 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c8a3f;
  local_c = ExceptionList;
  local_2c = 0;
  local_20 = &clDataList::_vbtable__for__clData__;
  local_10 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
  local_1c = 3;
  local_24 = &clData::_vftable_;
  local_4 = 1;
  ExceptionList = &local_c;
  _STL::_List_base<class_clProxyMessage*,class_ExtAlloc::Allocator<class_clProxyMessage*>_>::
  List_base<class_clProxyMessage*,class_ExtAlloc::Allocator<class_clProxyMessage*>_>
            ((_List_base<class_clProxyMessage*,class_ExtAlloc::Allocator<class_clProxyMessage*>_> *)
             &local_14,&local_2d);
  local_24 = &clDataList::_vftable__for__clData__;
  local_18 = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_4 = 2;
  clDataList::GetIndex(param_1,(ushort *)&local_2c,0);
  clDataList::GetIndex(param_1,(clDataList *)&local_24,1);
  uVar1 = local_2c & 0xffff;
  if (uVar1 == 1) {
    ReadPublicKey(this,(clDataList *)&local_24);
  }
  else if (uVar1 == 2) {
    ReadCipherKey(this,(clDataList *)&local_24);
  }
  else if (uVar1 == 3) {
    ReadEncryptEnd(this);
  }
  local_24 = &clDataList::_vftable__for__clData__;
  local_18 = &clPointerList<class_clData*>::_vftable_;
  local_4._0_1_ = 4;
  local_4._1_3_ = 0;
  clPointerList<class_clRcvElement*>::clear((clPointerList<class_clRcvElement*> *)&local_18);
  local_28 = &local_14;
  local_4 = CONCAT31(local_4._1_3_,5);
  _STL::_List_base<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_>::clear
            ((_List_base<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_> *)
             &local_14);
  _STL::
  _STLP_alloc_proxy<struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>*,struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
  ::deallocate((_STLP_alloc_proxy<struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>*,struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
                *)&local_14,local_14,1);
  ExceptionList = local_c;
  return;
}




/* from: libgsconnect:ConnectElem.cpp
   addr: 00599A40 */

void __thiscall clConnectElem::ReadPublicKey(clConnectElem *this,clDataList *param_1)

{
  clAlgoEncrypt *this_00;
  uint uVar1;
  uchar *puVar2;
  uchar *puVar3;
  uint local_110 [3];
  RSA_PUBLIC_KEY local_104 [260];
  
  local_110[1] = 0;
  clDataList::GetIndex(param_1,(int *)(local_110 + 1),0);
  clDataList::GetIndex(param_1,local_110 + 2,1);
  clDataList::GetIndex(param_1,local_104,local_110[2],2);
  this_00 = *(clAlgoEncrypt **)(this + 0x4c);
  uVar1 = *(uint *)(this_00 + 0xc);
  puVar2 = *(uchar **)(this_00 + 8);
  clAlgoEncrypt::PublicKeyEncrypt(this_00,local_104,puVar2,uVar1,(uchar *)0x0,local_110);
  puVar3 = (uchar *)ExtAlloc_Malloc_4(local_110[0]);
  clAlgoEncrypt::PublicKeyEncrypt
            (*(clAlgoEncrypt **)(this + 0x4c),local_104,puVar2,uVar1,puVar3,local_110);
  SendCipherKey(this,1,puVar3,local_110[0]);
  this[0x50] = (clConnectElem)0x1;
  ExtAlloc_Free_4(puVar3);
  return;
}




/* from: libgsconnect:ConnectElem.cpp
   addr: 00599AF0 */

void __thiscall clConnectElem::ReadCipherKey(clConnectElem *this,clDataList *param_1)

{
  uchar *puVar1;
  Allocator<class_clProxyMessage*> local_39;
  uint local_38 [2];
  _Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
  **local_30;
  uchar *local_2c;
  uint local_28;
  undefined **local_24;
  undefined4 *local_20;
  undefined4 local_1c;
  undefined **local_18;
  _Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
  *local_14;
  undefined8 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c8a9f;
  local_c = ExceptionList;
  local_38[1] = 0;
  local_20 = &clDataList::_vbtable__for__clData__;
  local_10 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
  local_1c = 3;
  local_24 = &clData::_vftable_;
  local_4 = 1;
  ExceptionList = &local_c;
  _STL::_List_base<class_clProxyMessage*,class_ExtAlloc::Allocator<class_clProxyMessage*>_>::
  List_base<class_clProxyMessage*,class_ExtAlloc::Allocator<class_clProxyMessage*>_>
            ((_List_base<class_clProxyMessage*,class_ExtAlloc::Allocator<class_clProxyMessage*>_> *)
             &local_14,&local_39);
  local_24 = &clDataList::_vftable__for__clData__;
  local_18 = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_4 = 2;
  local_38[1] = 0;
  clDataList::GetIndex(param_1,(int *)(local_38 + 1),0);
  clDataList::GetIndex(param_1,local_38,1);
  puVar1 = (uchar *)ExtAlloc_Malloc_4(local_38[0]);
  clDataList::GetIndex(param_1,puVar1,local_38[0],2);
  clAlgoEncrypt::PrivateKeyDecrypt
            (*(clAlgoEncrypt **)(this + 0x4c),puVar1,local_38[0],(uchar *)0x0,&local_28);
  local_2c = (uchar *)ExtAlloc_Malloc_4(local_28);
  clAlgoEncrypt::PrivateKeyDecrypt
            (*(clAlgoEncrypt **)(this + 0x4c),puVar1,local_38[0],local_2c,&local_28);
  clAlgoEncrypt::SetSessionKey(*(clAlgoEncrypt **)(this + 0x4c),(_SESSION_KEY_ *)&local_2c);
  ExtAlloc_Free_4(local_2c);
  ExtAlloc_Free_4(puVar1);
  this[0x50] = (clConnectElem)0x1;
  local_24 = &clDataList::_vftable__for__clData__;
  local_18 = &clPointerList<class_clData*>::_vftable_;
  local_4._0_1_ = 4;
  local_4._1_3_ = 0;
  clPointerList<class_clRcvElement*>::clear((clPointerList<class_clRcvElement*> *)&local_18);
  local_30 = &local_14;
  local_4 = CONCAT31(local_4._1_3_,5);
  _STL::_List_base<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_>::clear
            ((_List_base<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_> *)
             &local_14);
  _STL::
  _STLP_alloc_proxy<struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>*,struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
  ::deallocate((_STLP_alloc_proxy<struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>*,struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
                *)&local_14,local_14,1);
  ExceptionList = local_c;
  return;
}




/* from: libgsconnect:ConnectElem.cpp
   addr: 00599C70 */

void __thiscall
clConnectElem::SendCipherKey(clConnectElem *this,uint param_1,uchar *param_2,uint param_3)

{
  int local_40;
  undefined **local_3c;
  undefined4 *local_38;
  undefined4 local_34;
  undefined **local_30;
  list<class_clData*> local_2c [4];
  undefined8 *local_28;
  undefined **local_24;
  undefined4 *local_20;
  undefined4 local_1c;
  undefined **local_18;
  list<class_clData*> local_14 [4];
  undefined8 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c8b07;
  local_c = ExceptionList;
  local_40 = 0;
  local_20 = &clDataList::_vbtable__for__clData__;
  local_10 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
  local_1c = 3;
  local_24 = &clData::_vftable_;
  local_4 = 0;
  ExceptionList = &local_c;
  ExtAlloc::list<class_clData*>::list<class_clData*>(local_14);
  local_18 = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_24 = &clDataList::_vftable__for__clData__;
  local_38 = &clDataList::_vbtable__for__clData__;
  local_28 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
  local_34 = 3;
  local_3c = &clData::_vftable_;
  local_4._0_1_ = 2;
  local_4._1_3_ = 0;
  ExtAlloc::list<class_clData*>::list<class_clData*>(local_2c);
  local_3c = &clDataList::_vftable__for__clData__;
  local_30 = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_4._0_1_ = 3;
  local_40 = 2;
  clDataList::Add((clDataList *)&local_24,&local_40);
  clDataList::Add((clDataList *)&local_3c,(int *)&param_1);
  clDataList::Add((clDataList *)&local_3c,(int *)&param_3);
  clDataList::Add((clDataList *)&local_3c,param_2,param_3);
  clDataList::Add((clDataList *)&local_24,(clDataList *)&local_3c);
  SendGSMessage(this,0xdb,'\b','\x02',(clDataList *)&local_24);
  local_3c = &clDataList::_vftable__for__clData__;
  local_30 = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_4 = CONCAT31(local_4._1_3_,4);
  clPointerList<class_clData*>::~clPointerList<class_clData*>
            ((clPointerList<class_clData*> *)&local_30);
  local_3c = &clData::_vftable_;
  local_24 = &clDataList::_vftable__for__clData__;
  param_2 = (uchar *)&local_18;
  local_18 = &clPointerList<class_clData*>::_vftable_;
  local_4._0_1_ = 6;
  local_4._1_3_ = 0;
  clPointerList<class_clRcvElement*>::clear((clPointerList<class_clRcvElement*> *)&local_18);
  local_4 = CONCAT31(local_4._1_3_,5);
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            ((list<class_clRcvElement*> *)local_14);
  ExceptionList = local_c;
  return;
}




/* from: libgsconnect:ConnectElem.cpp
   addr: 00599DF0 */

void __thiscall
clConnectElem::SendPublicKey(clConnectElem *this,uint param_1,uchar *param_2,uint param_3)

{
  int local_40;
  undefined **local_3c;
  undefined4 *local_38;
  undefined4 local_34;
  undefined **local_30;
  list<class_clData*> local_2c [4];
  undefined8 *local_28;
  undefined **local_24;
  undefined4 *local_20;
  undefined4 local_1c;
  undefined **local_18;
  list<class_clData*> local_14 [4];
  undefined8 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c8b77;
  local_c = ExceptionList;
  local_40 = 0;
  local_20 = &clDataList::_vbtable__for__clData__;
  local_10 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
  local_1c = 3;
  local_24 = &clData::_vftable_;
  local_4 = 0;
  ExceptionList = &local_c;
  ExtAlloc::list<class_clData*>::list<class_clData*>(local_14);
  local_18 = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_24 = &clDataList::_vftable__for__clData__;
  local_38 = &clDataList::_vbtable__for__clData__;
  local_28 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
  local_34 = 3;
  local_3c = &clData::_vftable_;
  local_4._0_1_ = 2;
  local_4._1_3_ = 0;
  ExtAlloc::list<class_clData*>::list<class_clData*>(local_2c);
  local_3c = &clDataList::_vftable__for__clData__;
  local_30 = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_4._0_1_ = 3;
  local_40 = 1;
  clDataList::Add((clDataList *)&local_24,&local_40);
  clDataList::Add((clDataList *)&local_3c,(int *)&param_1);
  clDataList::Add((clDataList *)&local_3c,(int *)&param_3);
  clDataList::Add((clDataList *)&local_3c,param_2,param_3);
  clDataList::Add((clDataList *)&local_24,(clDataList *)&local_3c);
  SendGSMessage(this,0xdb,'\b','\x02',(clDataList *)&local_24);
  local_3c = &clDataList::_vftable__for__clData__;
  local_30 = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_4 = CONCAT31(local_4._1_3_,4);
  clPointerList<class_clData*>::~clPointerList<class_clData*>
            ((clPointerList<class_clData*> *)&local_30);
  local_3c = &clData::_vftable_;
  local_24 = &clDataList::_vftable__for__clData__;
  param_2 = (uchar *)&local_18;
  local_18 = &clPointerList<class_clData*>::_vftable_;
  local_4._0_1_ = 6;
  local_4._1_3_ = 0;
  clPointerList<class_clRcvElement*>::clear((clPointerList<class_clRcvElement*> *)&local_18);
  local_4 = CONCAT31(local_4._1_3_,5);
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            ((list<class_clRcvElement*> *)local_14);
  ExceptionList = local_c;
  return;
}




/* from: libgsconnect:ConnectElem.cpp
   addr: 00599F70 */

void __thiscall
clPointerList<class_clSendElement*>::pop_front(clPointerList<class_clSendElement*> *this)

{
  int *piVar1;
  clSendElement *this_00;
  int *piVar2;
  int iVar3;
  
  piVar1 = *(int **)(this + 4);
  if ((int *)*piVar1 != piVar1) {
    this_00 = *(clSendElement **)(*piVar1 + 8);
    if (this_00 != (clSendElement *)0x0) {
      clSendElement::~clSendElement(this_00);
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




/* from: libgsconnect:ConnectElem.cpp
   addr: 00599FB0 */

void __thiscall
clPointerList<class_clSendElement*>::pop_back(clPointerList<class_clSendElement*> *this)

{
  int *piVar1;
  clSendElement *this_00;
  int *piVar2;
  int iVar3;
  _List_iterator<class_clGameMessage*,struct__STL::_Nonconst_traits<class_clGameMessage*>_> *p_Var4;
  clPointerList<class_clSendElement*> *local_4;
  
  piVar1 = *(int **)(this + 4);
  if ((int *)*piVar1 != piVar1) {
    this_00 = *(clSendElement **)(piVar1[1] + 8);
    if (this_00 != (clSendElement *)0x0) {
      local_4 = this;
      clSendElement::~clSendElement(this_00);
      ExtAlloc_Free_4(this_00);
    }
    local_4 = *(clPointerList<class_clSendElement*> **)(this + 4);
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




/* from: libgsconnect:ConnectElem.cpp
   addr: 0059A000 */

void __thiscall
clPointerList<class_clSendElement*>::erase
          (clPointerList<class_clSendElement*> *this,int *param_2,int *param_3)

{
  clSendElement *this_00;
  int *piVar1;
  int iVar2;
  
  if ((param_3 != *(int **)(this + 4)) &&
     (this_00 = (clSendElement *)param_3[2], this_00 != (clSendElement *)0x0)) {
    clSendElement::~clSendElement(this_00);
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




/* from: libgsconnect:ConnectElem.cpp
   addr: 0059A040 */

void __thiscall
clPointerList<class_clSendElement*>::erase
          (clPointerList<class_clSendElement*> *this,undefined4 *param_2,int *param_3,int *param_4)

{
  clSendElement *this_00;
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  piVar3 = param_4;
  piVar4 = param_3;
  if (param_3 != param_4) {
    do {
      if (piVar4 == *(int **)(this + 4)) break;
      this_00 = (clSendElement *)piVar4[2];
      if (this_00 != (clSendElement *)0x0) {
        clSendElement::~clSendElement(this_00);
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




/* from: libgsconnect:ConnectElem.cpp
   addr: 0059A0C0
   addr: 0059A0C0 */

void __thiscall
clPointerList<class_clRcvElement*>::pop_front(clPointerList<class_clRcvElement*> *this)

{
  int *piVar1;
  clRcvElement *this_00;
  int *piVar2;
  int iVar3;
  
  piVar1 = *(int **)(this + 4);
  if ((int *)*piVar1 != piVar1) {
    this_00 = *(clRcvElement **)(*piVar1 + 8);
    if (this_00 != (clRcvElement *)0x0) {
      clRcvElement::~clRcvElement(this_00);
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




/* from: libgsconnect:ConnectElem.cpp
   addr: 0059A100
   addr: 0059A100 */

void __thiscall
clPointerList<class_clRcvElement*>::pop_back(clPointerList<class_clRcvElement*> *this)

{
  int *piVar1;
  clRcvElement *this_00;
  int *piVar2;
  int iVar3;
  _List_iterator<class_clGameMessage*,struct__STL::_Nonconst_traits<class_clGameMessage*>_> *p_Var4;
  clPointerList<class_clRcvElement*> *local_4;
  
  piVar1 = *(int **)(this + 4);
  if ((int *)*piVar1 != piVar1) {
    this_00 = *(clRcvElement **)(piVar1[1] + 8);
    if (this_00 != (clRcvElement *)0x0) {
      local_4 = this;
      clRcvElement::~clRcvElement(this_00);
      ExtAlloc_Free_4(this_00);
    }
    local_4 = *(clPointerList<class_clRcvElement*> **)(this + 4);
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




/* from: libgsconnect:ConnectElem.cpp
   addr: 0059A150 */

void __thiscall
clPointerList<class_clGameMessage*>::~clPointerList<class_clGameMessage*>
          (clPointerList<class_clGameMessage*> *this)

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
  
  puStack_8 = &LAB_005c8bb7;
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




/* from: libgsconnect:ConnectElem.cpp
   addr: 0059A1E0
   addr: 0059A1E0 */

void __thiscall
clPointerList<class_clGameMessage*>::erase
          (clPointerList<class_clGameMessage*> *this,undefined4 *param_2,int *param_3,int *param_4)

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
      if ((undefined4 *)piVar4[2] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)piVar4[2])(1);
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




/* from: libgsconnect:ConnectElem.cpp
   addr: 0059A260
   addr: 0059A260 */

void * __thiscall
clPointerList<class_clSendElement*>::_scalar_deleting_destructor_
          (clPointerList<class_clSendElement*> *this,uint param_1)

{
  ~clPointerList<class_clSendElement*>(this);
  if ((param_1 & 1) != 0) {
    ExtAlloc_Free_4(this);
  }
  return this;
}




/* from: libgsconnect:ConnectElem.cpp
   addr: 0059A280 */

void __thiscall
clPointerList<class_clSendElement*>::~clPointerList<class_clSendElement*>
          (clPointerList<class_clSendElement*> *this)

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
  
  puStack_8 = &LAB_005c8bf7;
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




/* from: libgsconnect:ConnectElem.cpp
   addr: 0059A310
   addr: 0059A310 */

void * __thiscall
clPointerList<class_clRcvElement*>::_scalar_deleting_destructor_
          (clPointerList<class_clRcvElement*> *this,uint param_1)

{
  ~clPointerList<class_clRcvElement*>(this);
  if ((param_1 & 1) != 0) {
    ExtAlloc_Free_4(this);
  }
  return this;
}




/* from: libgsconnect:ConnectElem.cpp
   addr: 0059A330 */

void __thiscall
clPointerList<class_clRcvElement*>::~clPointerList<class_clRcvElement*>
          (clPointerList<class_clRcvElement*> *this)

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
  
  puStack_8 = &LAB_005c8c37;
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




/* from: libgsconnect:ConnectElem.cpp
   addr: 0059A3C0
   addr: 0059A3C0
   addr: 0059A3C0
   addr: 0059A3C0 */

_List_base<class_clProxyMessage*,class_ExtAlloc::Allocator<class_clProxyMessage*>_> * __thiscall
_STL::_List_base<class_clProxyMessage*,class_ExtAlloc::Allocator<class_clProxyMessage*>_>::
List_base<class_clProxyMessage*,class_ExtAlloc::Allocator<class_clProxyMessage*>_>
          (_List_base<class_clProxyMessage*,class_ExtAlloc::Allocator<class_clProxyMessage*>_> *this
          ,Allocator<class_clProxyMessage*> *param_1)

{
  int iVar1;
  
  _STLP_alloc_proxy<struct__STL::_List_node<class_CConnection*>*,struct__STL::_List_node<class_CConnection*>,class_ExtAlloc::Allocator<class_CConnection*>_>
  ::
  STLP_alloc_proxy<struct__STL::_List_node<class_CConnection*>*,struct__STL::_List_node<class_CConnection*>,class_ExtAlloc::Allocator<class_CConnection*>_>
            ((_STLP_alloc_proxy<struct__STL::_List_node<class_CConnection*>*,struct__STL::_List_node<class_CConnection*>,class_ExtAlloc::Allocator<class_CConnection*>_>
              *)this,(Allocator<class_CConnection*> *)param_1,(_List_node<class_CConnection*> *)0x0)
  ;
  iVar1 = ExtAlloc_Malloc_4(0xc);
  *(int *)iVar1 = iVar1;
  *(int *)(iVar1 + 4) = iVar1;
  *(int *)this = iVar1;
  return this;
}

