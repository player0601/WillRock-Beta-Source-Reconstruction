
/* from: libgssocket:TCPProtocol.cpp
   addr: 00593310 */

clTCPProtocol * __thiscall clTCPProtocol::clTCPProtocol(clTCPProtocol *this)

{
  time_t tVar1;
  int in_stack_00000004;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c7e60;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (in_stack_00000004 != 0) {
    ExceptionList = &local_c;
    *(undefined1 **)(this + 4) = &_vbtable_;
    local_4 = 0;
  }
  clFifo::clFifo((clFifo *)(this + 8));
  local_4 = 1;
  clFifo::clFifo((clFifo *)(this + 0x1c));
  local_4 = CONCAT31(local_4._1_3_,2);
  clSocket::clSocket((clSocket *)(this + 0x30));
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  tVar1 = time((time_t *)0x0);
  *(int *)(this + 0x48) = (int)tVar1;
  tVar1 = time((time_t *)0x0);
  *(int *)(this + 0x4c) = (int)tVar1;
  this[0x44] = (clTCPProtocol)0x0;
  ExceptionList = local_c;
  return this;
}




/* from: libgssocket:TCPProtocol.cpp
   addr: 005933C0
   addr: 005933C0 */

void * __thiscall clTCPProtocol::_vector_deleting_destructor_(clTCPProtocol *this,uint param_1)

{
  ~clTCPProtocol(this);
  if ((param_1 & 1) != 0) {
    ExtAlloc_Free_4(this);
  }
  return this;
}




/* from: libgssocket:TCPProtocol.cpp
   addr: 005933F0 */

void __thiscall clTCPProtocol::~clTCPProtocol(clTCPProtocol *this)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_005c7e91;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = &_vftable_;
  local_4 = 2;
  Close(this);
  local_4._0_1_ = 1;
  m3dTerm2DMatr();
  local_4 = (uint)local_4._1_3_ << 8;
  clFifo::~clFifo((clFifo *)(this + 0x1c));
  local_4 = 0xffffffff;
  clFifo::~clFifo((clFifo *)(this + 8));
  ExceptionList = local_c;
  return;
}




/* from: libgssocket:TCPProtocol.cpp
   addr: 00593480 */

uchar __thiscall clTCPProtocol::ReadAllData(clTCPProtocol *this)

{
  clSocket *this_00;
  _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
  *this_01;
  int iVar1;
  time_t tVar2;
  uchar local_3e8 [1000];
  
  this_00 = (clSocket *)(this + 0x30);
  do {
    iVar1 = clSocket::Receive(this_00,(char *)local_3e8,1000);
    if (0 < iVar1) {
      clFifo::push_back((clFifo *)(this + 8),local_3e8,iVar1);
      tVar2 = time((time_t *)0x0);
      *(int *)(this + 0x4c) = (int)tVar2;
    }
  } while (iVar1 == 1000);
  tVar2 = time((time_t *)0x0);
  this_01 = *(_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
              **)(this + 0x50);
  if ((0 < (int)this_01) && ((int)this_01 < (int)tVar2 - *(int *)(this + 0x4c))) {
    *(undefined4 *)(this + 0x40) = 0x97;
    _STL::
    _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
    ::
    ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
              (this_01);
  }
  iVar1 = clSocket::GetLastError(this_00);
  if (iVar1 != 0) {
    iVar1 = clSocket::GetLastError(this_00);
    *(int *)(this + 0x40) = iVar1;
  }
  return *(int *)(this + 0x40) == 0;
}




/* from: libgssocket:TCPProtocol.cpp
   addr: 00593530 */

uchar __thiscall clTCPProtocol::SendAllData(clTCPProtocol *this)

{
  int iVar1;
  time_t tVar2;
  uchar local_3e8 [1000];
  
  while (iVar1 = *(int *)(this + 0x28), iVar1 != 0) {
    if (1000 < iVar1) {
      iVar1 = 1000;
    }
    clFifo::peek_front((clFifo *)(this + 0x1c),iVar1,local_3e8);
    iVar1 = clSocket::Send((clSocket *)(this + 0x30),(char *)local_3e8,iVar1);
    if (iVar1 < 1) break;
    clFifo::pop_front((clFifo *)(this + 0x1c),iVar1,local_3e8);
    tVar2 = time((time_t *)0x0);
    *(int *)(this + 0x48) = (int)tVar2;
  }
  return *(int *)(this + 0x40) == 0;
}




/* from: libgssocket:TCPProtocol.cpp
   addr: 005935A0 */

uchar __thiscall clTCPProtocol::SendMessageA(clTCPProtocol *this,char *param_1,int param_2)

{
  uchar uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  time_t tVar5;
  
  uVar1 = '\0';
  if (*(int *)(this + 0x28) == 0) {
    iVar4 = 0;
    iVar3 = 1;
    iVar2 = param_2;
    if (0 < param_2) {
      do {
        if (iVar3 < 1) break;
        iVar3 = 1000;
        if (iVar2 < 0x3e9) {
          iVar3 = iVar2;
        }
        iVar3 = clSocket::Send((clSocket *)(this + 0x30),param_1 + iVar4,iVar3);
        if (0 < iVar3) {
          iVar2 = iVar2 - iVar3;
          iVar4 = iVar4 + iVar3;
          uVar1 = '\x01';
          tVar5 = time((time_t *)0x0);
          *(int *)(this + 0x48) = (int)tVar5;
        }
      } while (0 < iVar2);
      if ((uVar1 != '\0') && (iVar2 != 0)) {
        clFifo::push_back((clFifo *)(this + 0x1c),(uchar *)(param_1 + iVar4),param_2 - iVar4);
        return uVar1;
      }
    }
  }
  else {
    clFifo::push_back((clFifo *)(this + 0x1c),(uchar *)param_1,param_2);
    uVar1 = '\x01';
  }
  return uVar1;
}




/* from: libgssocket:TCPProtocol.cpp
   addr: 00593660 */

int __thiscall clTCPProtocol::Send(clTCPProtocol *this,char *param_1,int param_2)

{
  clSocket *this_00;
  int iVar1;
  int iVar2;
  
  this_00 = (clSocket *)(this + 0x30);
  iVar1 = clSocket::Send(this_00,param_1,param_2);
  iVar2 = clSocket::GetLastError(this_00);
  if (iVar2 != 0) {
    iVar2 = clSocket::GetLastError(this_00);
    *(int *)(this + 0x40) = iVar2;
  }
  return iVar1;
}




/* from: libgssocket:TCPProtocol.cpp
   addr: 005936A0 */

int __thiscall clTCPProtocol::Receive(clTCPProtocol *this,char *param_1,int param_2)

{
  clSocket *this_00;
  int iVar1;
  int iVar2;
  
  this_00 = (clSocket *)(this + 0x30);
  iVar1 = clSocket::Receive(this_00,param_1,param_2);
  iVar2 = clSocket::GetLastError(this_00);
  if (iVar2 != 0) {
    iVar2 = clSocket::GetLastError(this_00);
    *(int *)(this + 0x40) = iVar2;
  }
  return iVar1;
}




/* from: libgssocket:TCPProtocol.cpp
   addr: 005936E0 */

uchar __thiscall clTCPProtocol::Close(clTCPProtocol *this)

{
  uchar uVar1;
  int iVar2;
  
  this[0x44] = (clTCPProtocol)0x0;
  clFifo::EmptyAll((clFifo *)(this + 0x1c));
  uVar1 = clSocket::Close((clSocket *)(this + 0x30));
  if (uVar1 == '\0') {
    iVar2 = clSocket::GetLastError((clSocket *)(this + 0x30));
    *(int *)(this + 0x40) = iVar2;
    return '\0';
  }
  return '\x01';
}




/* from: libgssocket:TCPProtocol.cpp
   addr: 00593720 */

uchar __thiscall clTCPProtocol::GetLocalAddress(clTCPProtocol *this,char *param_1,ushort *param_2)

{
  clSocket::GetLocalAddress((clSocket *)(this + 0x30),param_1,param_2);
  return '\x01';
}




/* from: libgssocket:TCPProtocol.cpp
   addr: 00593740 */

uchar __thiscall clTCPProtocol::GetPeerAddress(clTCPProtocol *this,uint *param_1,ushort *param_2)

{
  clSocket::GetPeerAddress((clSocket *)(this + 0x30),param_1,param_2);
  return '\x01';
}




/* from: libgssocket:TCPProtocol.cpp
   addr: 00593760 */

uchar __thiscall clTCPClient::ConnectHost(clTCPClient *this,char *param_1,ushort param_2)

{
  clSocket *this_00;
  uchar uVar1;
  int iVar2;
  time_t tVar3;
  
  this_00 = (clSocket *)(this + 0x30);
  uVar1 = clSocket::CreateTCP(this_00);
  if (uVar1 != '\0') {
    uVar1 = clSocket::SetNonBlocking(this_00,'\x01');
    if (uVar1 != '\0') {
      uVar1 = clSocket::Connect(this_00,param_1,param_2);
      if (uVar1 != '\0') {
        uVar1 = clSocket::SetRemoveNagle(this_00,'\x01');
        if (uVar1 != '\0') {
          *(undefined4 *)(this + 0x40) = 0;
          tVar3 = time((time_t *)0x0);
          *(int *)(this + 0x48) = (int)tVar3;
          tVar3 = time((time_t *)0x0);
          *(int *)(this + 0x4c) = (int)tVar3;
          this[0x44] = (clTCPClient)0x1;
          return '\x01';
        }
      }
    }
  }
  iVar2 = clSocket::GetLastError(this_00);
  *(int *)(this + 0x40) = iVar2;
  clTCPProtocol::Close((clTCPProtocol *)this);
  return '\0';
}




/* from: libgssocket:TCPProtocol.cpp
   addr: 005937F0 */

uchar __thiscall clTCPClient::ConnectHost(clTCPClient *this,uint param_1,ushort param_2)

{
  clSocket *this_00;
  uchar uVar1;
  int iVar2;
  u_long uVar3;
  time_t tVar4;
  char acStack_80 [128];
  
  this_00 = (clSocket *)(this + 0x30);
  uVar1 = clSocket::CreateTCP(this_00);
  if (uVar1 != '\0') {
    uVar1 = clSocket::SetNonBlocking(this_00,'\x01');
    if (uVar1 != '\0') {
      uVar1 = clSocket::Connect(this_00,param_1,param_2);
      if (uVar1 != '\0') {
        uVar1 = clSocket::SetRemoveNagle(this_00,'\x01');
        if (uVar1 != '\0') {
          *(undefined4 *)(this + 0x40) = 0;
          tVar4 = time((time_t *)0x0);
          *(int *)(this + 0x48) = (int)tVar4;
          tVar4 = time((time_t *)0x0);
          *(int *)(this + 0x4c) = (int)tVar4;
          this[0x44] = (clTCPClient)0x1;
          return '\x01';
        }
      }
    }
  }
  iVar2 = clSocket::GetLastError(this_00);
  *(int *)(this + 0x40) = iVar2;
  clSocket::Close(this_00);
  uVar3 = ntohl(param_1);
  snprintf(acStack_80,0x10,s__d__d__d__d,uVar3 >> 0x18,uVar3 >> 0x10 & 0xff,uVar3 >> 8 & 0xff,
           uVar3 & 0xff);
  return '\0';
}

