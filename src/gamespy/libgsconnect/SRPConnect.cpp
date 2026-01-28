
/* from: libgsconnect:SRPConnect.cpp
   addr: 00597D00 */

clSRPGSConnect * __thiscall
clSRPGSConnect::clSRPGSConnect
          (clSRPGSConnect *this,clSRProtocol *param_1,int param_2,uchar param_3,uchar param_4,
          int param_5)

{
  int in_stack_00000018;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c85ca;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (in_stack_00000018 != 0) {
    ExceptionList = &local_c;
    *(undefined1 **)(this + 4) = &_vbtable_;
    local_4 = 0;
  }
  clConnectElem::clConnectElem
            ((clConnectElem *)this,(clTCPClient *)0x0,(clUDPProtocol *)0x0,param_2,param_3,param_4,
             param_5);
  *(undefined ***)this = &_vftable_;
  *(clSRProtocol **)(this + 0x68) = param_1;
  *(int *)(param_1 + 0x178) = param_2;
  *(int *)(*(int *)(this + 0x68) + 0x170) = param_5;
  ExceptionList = local_c;
  return this;
}




/* from: libgsconnect:SRPConnect.cpp
   addr: 00597DA0
   addr: 00597DA0 */

void * __thiscall clSRPGSConnect::_scalar_deleting_destructor_(clSRPGSConnect *this,uint param_1)

{
  ~clSRPGSConnect(this);
  if ((param_1 & 1) != 0) {
    ExtAlloc_Free_4(this);
  }
  return this;
}




/* from: libgsconnect:SRPConnect.cpp
   addr: 00597DC0 */

void __thiscall clSRPGSConnect::~clSRPGSConnect(clSRPGSConnect *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c85e8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = &_vftable_;
  local_4 = 0;
  (**(code **)(*(int *)(this + 0x68) + 0x144))();
  if (*(undefined4 **)(this + 0x68) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x68))(1);
  }
  local_4 = 0xffffffff;
  clConnectElem::~clConnectElem((clConnectElem *)this);
  ExceptionList = pvStack_c;
  return;
}




/* from: libgsconnect:SRPConnect.cpp
   addr: 00597E40 */

uchar __thiscall clSRPGSConnect::CheckConnection(clSRPGSConnect *this)

{
  uchar uVar1;
  
  UpdateRcvQueue(this);
  UpdateSendQueue(this);
                    /* WARNING: Could not recover jumptable at 0x00597e6b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(int *)(this + 0x68) + 0x150))();
  return uVar1;
}




/* from: libgsconnect:SRPConnect.cpp
   addr: 00597E80 */

uchar __thiscall clSRPGSConnect::Disconnect(clSRPGSConnect *this)

{
  (**(code **)(*(int *)(this + 0x68) + 0x138))();
  return '\x01';
}




/* from: libgsconnect:SRPConnect.cpp
   addr: 00597ED0 */

clMessage * __thiscall clSRPGSConnect::ReadMessage(clSRPGSConnect *this)

{
  clMessage *pcVar1;
  
  pcVar1 = clRcvMsgQueue::GetFirstMessage((clRcvMsgQueue *)(this + 0x3c));
  if (((pcVar1 != (clMessage *)0x0) && (pcVar1[0xc] == (clMessage)0x0)) &&
     (pcVar1[0xd] == (clMessage)0xdb)) {
    clConnectElem::ReadEncryptMsg((clConnectElem *)this,*(clDataList **)(pcVar1 + 0x14));
    (*(code *)**(undefined4 **)pcVar1)(1);
    return (clMessage *)0x0;
  }
  return pcVar1;
}




/* from: libgsconnect:SRPConnect.cpp
   addr: 00597F10 */

uchar __thiscall clSRPGSConnect::UpdateSendQueue(clSRPGSConnect *this)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  short sVar4;
  int iVar5;
  
  while( true ) {
    piVar1 = *(int **)(this + 0x30);
    iVar5 = 0;
    piVar3 = (int *)*piVar1;
    if (piVar3 == piVar1) {
      return '\x01';
    }
    do {
      piVar3 = (int *)*piVar3;
      iVar5 = iVar5 + 1;
    } while (piVar3 != piVar1);
    if (iVar5 == 0) break;
    iVar5 = (**(code **)(*(int *)(this + 0x68) + 0x15c))
                      (*(undefined4 *)(*(int *)(**(int **)(this + 0x30) + 8) + 8),
                       *(undefined4 *)(*(int *)(**(int **)(this + 0x30) + 8) + 0xc));
    if (iVar5 == 0) {
      return '\x01';
    }
    (**(code **)(*(int *)(this + 0x2c) + 8))();
    sVar4 = 0;
    for (puVar2 = (undefined4 *)**(undefined4 **)(this + 0x30);
        puVar2 != *(undefined4 **)(this + 0x30); puVar2 = (undefined4 *)*puVar2) {
      sVar4 = sVar4 + 1;
    }
    *(short *)(this + 0x38) = sVar4;
  }
  return '\x01';
}




/* from: libgsconnect:SRPConnect.cpp
   addr: 00597F90 */

uchar __thiscall clSRPGSConnect::UpdateRcvQueue(clSRPGSConnect *this)

{
  uchar uVar1;
  char cVar2;
  int iVar3;
  uchar *puVar4;
  int iVar5;
  clGameMessage *this_00;
  clMessage *pcVar6;
  clGSMessage *this_01;
  _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
  *this_02;
  _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
  *this_03;
  _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
  *this_04;
  uchar local_14 [4];
  void *pvStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c8614;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  while( true ) {
    iVar3 = clSRProtocol::Recv(*(clSRProtocol **)(this + 0x68),(char *)local_14,7,'\x01');
    if (iVar3 == 0) {
      ExceptionList = local_c;
      return '\x01';
    }
    iVar3 = clMessage::GetMessageSize(local_14);
    puVar4 = (uchar *)ExtAlloc_Malloc_4(iVar3);
    iVar5 = clSRProtocol::Recv(*(clSRProtocol **)(this + 0x68),(char *)puVar4,iVar3,'\0');
    if (iVar5 == 0) {
      ExtAlloc_Free_4(puVar4);
      ExceptionList = local_c;
      return '\x01';
    }
    uVar1 = clMessage::GetMessageProperty(puVar4);
    if (uVar1 == '\0') {
      this_01 = (clGSMessage *)ExtAlloc_Malloc_4(0x18);
      local_4 = 0;
      if (this_01 == (clGSMessage *)0x0) {
        pcVar6 = (clMessage *)0x0;
      }
      else {
        pcVar6 = (clMessage *)clGSMessage::clGSMessage(this_01,*(clAlgoEncrypt **)(this + 0x4c));
      }
      local_4 = 0xffffffff;
      cVar2 = (**(code **)(*(int *)pcVar6 + 0x10))(puVar4,iVar3);
      if (cVar2 == '\0') {
        _STL::
        _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
        ::
        ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
                  (this_03);
        ExtAlloc_Free_4(puVar4);
        (*(code *)**(undefined4 **)pcVar6)(1);
        ExceptionList = pvStack_10;
        return '\0';
      }
    }
    else {
      if (uVar1 != '\x01') goto LAB_0059812f;
      this_00 = (clGameMessage *)ExtAlloc_Malloc_4(0x1c);
      local_4 = 1;
      if (this_00 == (clGameMessage *)0x0) {
        pcVar6 = (clMessage *)0x0;
      }
      else {
        pcVar6 = (clMessage *)clGameMessage::clGameMessage(this_00,*(clAlgoEncrypt **)(this + 0x4c))
        ;
      }
      local_4 = 0xffffffff;
      cVar2 = (**(code **)(*(int *)pcVar6 + 0x10))(puVar4,iVar3);
      if (cVar2 == '\0') {
        _STL::
        _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
        ::
        ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
                  (this_02);
        ExtAlloc_Free_4(puVar4);
        (*(code *)**(undefined4 **)pcVar6)(1);
        ExceptionList = pvStack_10;
        return '\0';
      }
    }
    uVar1 = clRcvMsgQueue::AddMessage((clRcvMsgQueue *)(this + 0x3c),pcVar6);
    if (uVar1 == '\0') break;
    ExtAlloc_Free_4(puVar4);
  }
  _STL::
  _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
  ::
  ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
            (this_04);
LAB_0059812f:
  ExtAlloc_Free_4(puVar4);
  ExceptionList = local_c;
  return '\0';
}




/* from: libgsconnect:SRPConnect.cpp
   addr: 00598150 */

clSRPGSClient * __thiscall
clSRPGSClient::clSRPGSClient
          (clSRPGSClient *this,int param_1,uchar param_2,uchar param_3,int param_4)

{
  clSRProtocol *this_00;
  int in_stack_00000014;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c862a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (in_stack_00000014 != 0) {
    ExceptionList = &local_c;
    *(undefined1 **)(this + 4) = &_vbtable_;
  }
  this_00 = (clSRProtocol *)ExtAlloc_Malloc_4(0x248);
  local_4 = 0;
  if (this_00 == (clSRProtocol *)0x0) {
    this_00 = (clSRProtocol *)0x0;
  }
  else {
    *(undefined8 **)(this_00 + 4) = &clSRPClient::_vbtable_;
    clSRProtocol::clSRProtocol(this_00);
    *(undefined ***)this_00 = &clSRPClient::_vftable_;
  }
  local_4 = 0xffffffff;
  clSRPGSConnect::clSRPGSConnect((clSRPGSConnect *)this,this_00,param_1,param_2,param_3,param_4);
  *(undefined ***)this = &_vftable_;
  ExceptionList = local_c;
  return this;
}




/* from: libgsconnect:SRPConnect.cpp
   addr: 00598200
   addr: 00598200 */

void * __thiscall clSRPGSClient::_vector_deleting_destructor_(clSRPGSClient *this,uint param_1)

{
  ~clSRPGSClient(this);
  if ((param_1 & 1) != 0) {
    ExtAlloc_Free_4(this);
  }
  return this;
}




/* from: libgsconnect:SRPConnect.cpp
   addr: 00598230 */

uchar __thiscall
clSRPGSClient::ConnectHost(clSRPGSClient *this,char *param_1,ushort param_2,ushort param_3)

{
  char cVar1;
  uchar uVar2;
  undefined2 in_stack_0000000a;
  undefined2 in_stack_0000000e;
  
  clSocket::AddrToInt(param_1,(uint *)(this + 0x60));
  cVar1 = (**(code **)(**(int **)(this + 0x68) + 8))(*(uint *)(this + 0x60),_param_2,_param_3,0);
  if (cVar1 != '\0') {
    while( true ) {
      uVar2 = clSRPGSConnect::CheckConnection((clSRPGSConnect *)this);
      if (uVar2 == '\0') break;
      uVar2 = clSRPGSConnect::IsConnected((clSRPGSConnect *)this);
      if (uVar2 != '\0') {
        return '\x01';
      }
    }
  }
  return '\0';
}




/* from: libgsconnect:SRPConnect.cpp
   addr: 005982C0
   addr: 005982C0 */

void * __thiscall clSRPClient::_vector_deleting_destructor_(clSRPClient *this,uint param_1)

{
  ~clSRPClient(this);
  if ((param_1 & 1) != 0) {
    ExtAlloc_Free_4(this);
  }
  return this;
}

