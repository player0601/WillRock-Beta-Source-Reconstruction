
/* from: libgssocket:UDPProtocol.cpp
   addr: 005C2BB0 */

clUDPProtocol * __thiscall clUDPProtocol::clUDPProtocol(clUDPProtocol *this,int param_1,int param_2)

{
  int in_stack_0000000c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005cc9aa;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (in_stack_0000000c != 0) {
    ExceptionList = &local_c;
    *(undefined8 **)this = &_vbtable_;
    local_4 = 0;
  }
  clSocket::clSocket((clSocket *)(this + 0xc));
  *(int *)(this + 8) = param_2;
  *(int *)(this + 4) = param_1;
  ExceptionList = local_c;
  return this;
}




/* from: libgssocket:UDPProtocol.cpp
   addr: 005C2C20 */

void __thiscall clUDPProtocol::~clUDPProtocol(clUDPProtocol *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005cc9cb;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  clSocket::Close((clSocket *)(this + 0xc));
  local_4 = 0xffffffff;
  m3dTerm2DMatr();
  ExceptionList = local_c;
  return;
}




/* from: libgssocket:UDPProtocol.cpp
   addr: 005C2C70 */

uchar __thiscall
clUDPProtocol::Bind(clUDPProtocol *this,uint param_1,ushort param_2,uchar param_3,uchar param_4)

{
  clSocket *this_00;
  uchar uVar1;
  int iVar2;
  _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
  *this_01;
  
  this_00 = (clSocket *)(this + 0xc);
  clSocket::CreateUDP(this_00);
  clSocket::SetNonBlocking(this_00,'\x01');
  if (param_4 != '\0') {
    clSocket::SetReUseAddr(this_00,'\x01');
  }
  if (param_3 != '\0') {
    clSocket::SetBroadcast(this_00,'\x01');
  }
  if (0 < *(int *)(this + 4)) {
    clSocket::SetSendBuffer(this_00,*(int *)(this + 4));
  }
  if (0 < *(int *)(this + 8)) {
    clSocket::SetRcvBuffer(this_00,*(int *)(this + 8));
  }
  uVar1 = clSocket::Bind(this_00,param_1,param_2);
  if (uVar1 == '\0') {
    _STL::
    _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
    ::
    ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
              (this_01);
    iVar2 = clSocket::GetLastError(this_00);
    *(int *)(this + 0x1c) = iVar2;
    return '\0';
  }
  return '\x01';
}




/* from: libgssocket:UDPProtocol.cpp
   addr: 005C2D20 */

uchar __thiscall
clUDPProtocol::SendUDPMessage
          (clUDPProtocol *this,char *param_1,int param_2,uint param_3,ushort param_4)

{
  int iVar1;
  
  iVar1 = clSocket::SendTo((clSocket *)(this + 0xc),param_1,param_2,param_3,param_4);
  return iVar1 == param_2;
}




/* from: libgssocket:UDPProtocol.cpp
   addr: 005C2D50 */

uchar * __thiscall
clUDPProtocol::ReadUDPMessage(clUDPProtocol *this,uint *param_1,ushort *param_2,int *param_3)

{
  int iVar1;
  uchar *puVar2;
  uint uVar3;
  uint uVar4;
  uchar *puVar5;
  uchar *puVar6;
  uchar *local_4;
  
  local_4 = (uchar *)0x0;
  local_4 = (uchar *)ExtAlloc_Malloc_4(0x400);
  iVar1 = clSocket::ReceiveFrom((clSocket *)(this + 0xc),(char **)&local_4,0x400,param_1,param_2);
  *param_3 = iVar1;
  iVar1 = clSocket::GetLastError((clSocket *)(this + 0xc));
  *(int *)(this + 0x1c) = iVar1;
  if (0 < *param_3) {
    puVar2 = (uchar *)ExtAlloc_Malloc_4(*param_3);
    uVar4 = *param_3;
    puVar5 = local_4;
    puVar6 = puVar2;
    for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)puVar6 = *(undefined4 *)puVar5;
      puVar5 = puVar5 + 4;
      puVar6 = puVar6 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    if (local_4 != (uchar *)0x0) {
      ExtAlloc_Free_4(local_4);
    }
    return puVar2;
  }
  if (local_4 != (uchar *)0x0) {
    ExtAlloc_Free_4(local_4);
  }
  return (uchar *)0x0;
}

