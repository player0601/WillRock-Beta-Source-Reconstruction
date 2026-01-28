
/* from: libgssocket:SRProtocol.cpp
   addr: 005BFCD0 */

clSRProtocol * __thiscall clSRProtocol::clSRProtocol(clSRProtocol *this)

{
  time_t tVar1;
  int in_stack_00000004;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005cc7b5;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (in_stack_00000004 != 0) {
    ExceptionList = &local_c;
    *(undefined1 **)(this + 4) = &_vbtable_;
    local_4 = 0;
  }
  clBasicProtocol::clBasicProtocol((clBasicProtocol *)this);
  local_4 = 1;
  *(undefined4 *)(this + 0x16c) = 0x3c;
  *(undefined4 *)(this + 0x170) = 300;
  *(undefined4 *)(this + 0x178) = 0x37;
  *(undefined4 *)(this + 0x180) = 0xf;
  clFifo::clFifo((clFifo *)(this + 0x188));
  local_4 = CONCAT31(local_4._1_3_,2);
  clFifo::clFifo((clFifo *)(this + 0x19c));
  *(undefined2 *)(this + 0x1b0) = 10;
  *(undefined2 *)(this + 0x1b6) = 0x224;
  *(undefined4 *)(this + 0x1c8) = 0;
  *(undefined4 *)(this + 0x1cc) = 0x40140000;
  *(undefined2 *)(this + 0x1d0) = 0x18;
  *(undefined2 *)(this + 0x1d2) = 2;
  this[0x1d4] = (clSRProtocol)0x0;
  *(undefined8 **)(this + 0x1d8) = &clSRPWindow::_vbtable_;
  *(undefined2 *)(this + 0x1dc) = 0;
  *(undefined2 *)(this + 0x1de) = 0;
  *(undefined2 *)(this + 0x1e0) = 0;
  *(undefined2 *)(this + 0x1e2) = 0;
  *(undefined2 *)(this + 0x1e4) = 0;
  *(undefined8 **)(this + 500) = &ExtAlloc::vector<struct_stWindowInfo>::_vbtable_;
  local_4 = 6;
  _STL::vector<char,class_ExtAlloc::Allocator<char>_>::vector<char,class_ExtAlloc::Allocator<char>_>
            ((vector<char,class_ExtAlloc::Allocator<char>_> *)(this + 0x1e8),
             (Allocator<char> *)&stack0x00000004);
  *(undefined8 **)(this + 0x1f8) = &clSRPWindow::_vbtable_;
  *(undefined2 *)(this + 0x1fc) = 0;
  *(undefined2 *)(this + 0x1fe) = 0;
  *(undefined2 *)(this + 0x200) = 0;
  *(undefined2 *)(this + 0x202) = 0;
  *(undefined2 *)(this + 0x204) = 0;
  *(undefined8 **)(this + 0x214) = &ExtAlloc::vector<struct_stWindowInfo>::_vbtable_;
  local_4 = 10;
  _STL::vector<char,class_ExtAlloc::Allocator<char>_>::vector<char,class_ExtAlloc::Allocator<char>_>
            ((vector<char,class_ExtAlloc::Allocator<char>_> *)(this + 0x208),
             (Allocator<char> *)&stack0x00000004);
  *(undefined8 **)(this + 0x240) = &ExtAlloc::deque<unsigned_short>::_vbtable_;
  local_4 = 0xd;
  _STL::_Deque_base<unsigned_short,class_ExtAlloc::Allocator<unsigned_short>_>::
  Deque_base<unsigned_short,class_ExtAlloc::Allocator<unsigned_short>_>
            ((_Deque_base<unsigned_short,class_ExtAlloc::Allocator<unsigned_short>_> *)
             (this + 0x218),(Allocator<unsigned_short> *)&stack0x00000004,0);
  local_4 = 0xe;
  *(undefined ***)this = &_vftable_;
  *(short *)(this + 0x1b8) = *(short *)(this + 0x1b6) + -0xc;
  *(undefined2 *)(this + 0x1c0) = *(undefined2 *)(this + 0x1d0);
  tVar1 = time((time_t *)0x0);
  *(short *)(this + 0x1b2) = (short)tVar1 + 0x1b2 + (short)this;
  SetCloseState(this);
  *(undefined4 *)(this + 0x1ac) = 500;
  ExceptionList = local_c;
  return this;
}




/* from: libgssocket:SRProtocol.cpp
   addr: 005BFEE0
   addr: 005BFEE0 */

void * __thiscall clSRProtocol::_scalar_deleting_destructor_(clSRProtocol *this,uint param_1)

{
  ~clSRProtocol(this);
  if ((param_1 & 1) != 0) {
    ExtAlloc_Free_4(this);
  }
  return this;
}




/* from: libgssocket:SRProtocol.cpp
   addr: 005BFF20 */

void __thiscall ExtAlloc::deque<unsigned_short>::~deque<unsigned_short>(deque<unsigned_short> *this)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  _Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_> local_5c [16];
  _Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_> local_4c [16];
  _Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_> local_3c [16];
  _Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_> local_2c [16];
  _Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_> local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005cc7c8;
  local_c = ExceptionList;
  local_4 = 0;
  local_6c = *(undefined4 *)(this + 0x10);
  local_68 = *(undefined4 *)(this + 0x14);
  local_64 = *(undefined4 *)(this + 0x18);
  local_60 = *(undefined4 *)(this + 0x1c);
  ExceptionList = &local_c;
  _STL::_Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>::
  Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>
            (local_5c,(_Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>
                       *)this);
  _STL::_Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>::
  Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>
            (local_4c,(_Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>
                       *)&local_6c);
  _STL::_Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>::
  Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>(local_3c,local_5c);
  _STL::_Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>::
  Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>(local_2c,local_4c);
  _STL::_Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>::
  Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>(local_1c,local_3c);
  if (*(int *)(this + 0x20) != 0) {
    iVar1 = *(int *)(this + 0x1c);
    for (puVar2 = *(undefined4 **)(this + 0xc); puVar2 < (undefined4 *)(iVar1 + 4);
        puVar2 = puVar2 + 1) {
      ExtAlloc_Free_4(*puVar2);
    }
    ExtAlloc_Free_4(*(undefined4 *)(this + 0x20));
  }
  ExceptionList = local_c;
  return;
}




/* from: libgssocket:SRProtocol.cpp
   addr: 005BFFF0 */

void __thiscall clSRProtocol::~clSRProtocol(clSRProtocol *this)

{
  _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
  *extraout_ECX;
  _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
  *this_00;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_005cc82e;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = &_vftable_;
  local_4 = 5;
  this_00 = (_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
             *)this;
  if ((1 < *(int *)(this + 0x134)) && (*(int *)(this + 0x134) < 6)) {
    (**(code **)(this + 0x144))();
    this_00 = extraout_ECX;
  }
  _STL::
  _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
  ::
  ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
            (this_00);
  local_4._0_1_ = 4;
  _STL::deque<unsigned_short,class_ExtAlloc::Allocator<unsigned_short>_>::
  ~deque<unsigned_short,class_ExtAlloc::Allocator<unsigned_short>_>
            ((deque<unsigned_short,class_ExtAlloc::Allocator<unsigned_short>_> *)(this + 0x218));
  local_4._0_1_ = 3;
  _STL::vector<struct_stWindowInfo,class_ExtAlloc::Allocator<struct_stWindowInfo>_>::
  ~vector<struct_stWindowInfo,class_ExtAlloc::Allocator<struct_stWindowInfo>_>
            ((vector<struct_stWindowInfo,class_ExtAlloc::Allocator<struct_stWindowInfo>_> *)
             (this + 0x208));
  local_4._0_1_ = 2;
  _STL::vector<struct_stWindowInfo,class_ExtAlloc::Allocator<struct_stWindowInfo>_>::
  ~vector<struct_stWindowInfo,class_ExtAlloc::Allocator<struct_stWindowInfo>_>
            ((vector<struct_stWindowInfo,class_ExtAlloc::Allocator<struct_stWindowInfo>_> *)
             (this + 0x1e8));
  local_4._0_1_ = 1;
  clFifo::~clFifo((clFifo *)(this + 0x19c));
  local_4 = (uint)local_4._1_3_ << 8;
  clFifo::~clFifo((clFifo *)(this + 0x188));
  local_4 = 0xffffffff;
  clBasicProtocol::~clBasicProtocol((clBasicProtocol *)this);
  ExceptionList = pvStack_c;
  return;
}




/* from: libgssocket:SRProtocol.cpp
   addr: 005C00D0 */

int __thiscall clSRProtocol::Recv(clSRProtocol *this,char *param_1,int param_2,uchar param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x194);
  if (param_2 <= *(int *)(this + 0x194)) {
    iVar1 = param_2;
  }
  if (param_3 != '\0') {
    clFifo::peek_front((clFifo *)(this + 0x188),param_2,(uchar *)param_1);
    return iVar1;
  }
  clFifo::pop_front((clFifo *)(this + 0x188),param_2,(uchar *)param_1);
  return iVar1;
}




/* from: libgssocket:SRProtocol.cpp
   addr: 005C0110 */

int __thiscall clSRProtocol::Send(clSRProtocol *this,char *param_1,int param_2)

{
  uchar uVar1;
  
  uVar1 = clFifo::push_back((clFifo *)(this + 0x19c),(uchar *)param_1,param_2);
  return -(uint)(uVar1 != '\0') & param_2;
}




/* from: libgssocket:SRProtocol.cpp
   addr: 005C0140 */

uchar __thiscall clSRProtocol::CheckConnection_InEstablishState(clSRProtocol *this)

{
  ReceiveAllData(this);
  SendAllData(this);
  return '\x01';
}




/* from: libgssocket:SRProtocol.cpp
   addr: 005C0170 */

uchar __thiscall clSRProtocol::CheckConnection_InSyn_SentState(clSRProtocol *this)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  if (*(int *)(this + 0x184) < (int)tVar1) {
    (**(code **)(this + 0x144))();
    return '\0';
  }
  ReceiveAllData_InSyn_SentState(this);
  return '\x01';
}




/* from: libgssocket:SRProtocol.cpp
   addr: 005C01C0 */

uchar __thiscall clSRProtocol::CheckConnection_InClosingState(clSRProtocol *this)

{
  uchar uVar1;
  time_t tVar2;
  
  tVar2 = time((time_t *)0x0);
  if (*(int *)(this + 0x168) < (int)tVar2) {
    SetCloseState(this);
    return '\0';
  }
  uVar1 = ReceiveAllData_InClosingState(this);
  if (uVar1 != '\0') {
    SendAllData(this);
  }
  return '\x01';
}




/* from: libgssocket:SRProtocol.cpp
   addr: 005C0200 */

uchar __thiscall clSRProtocol::SendAllData(clSRProtocol *this)

{
  undefined4 *puVar1;
  ushort uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  
  while ((uVar8 = *(uint *)(this + 0x1a8), uVar8 != 0 &&
         (*(ushort *)(this + 0x1e0) < *(ushort *)(this + 0x1dc)))) {
    if ((int)(uint)*(ushort *)(this + 0x1bc) < (int)uVar8) {
      uVar8 = (uint)*(ushort *)(this + 0x1bc);
    }
    puVar6 = (undefined4 *)ExtAlloc_Malloc_4(0x1c);
    if (puVar6 == (undefined4 *)0x0) break;
    uVar2 = *(ushort *)(this + 0x1ba);
    puVar6[1] = &clSRPSegment::_vbtable_;
    puVar6[5] = (uint)uVar2;
    *puVar6 = &clSegment::_vftable_;
    iVar7 = ExtAlloc_Malloc_4((uint)uVar2);
    puVar6[4] = iVar7;
    puVar6[6] = iVar7;
    *puVar6 = &clSRPSegment::_vftable_;
    clFifo::pop_front((clFifo *)(this + 0x19c),uVar8,(uchar *)(iVar7 + 0xc));
    uVar3 = *(undefined2 *)(this + 0x90);
    uVar4 = *(undefined4 *)(this + 8);
    *(undefined2 *)(puVar6 + 3) = *(undefined2 *)(this + 0x8e);
    iVar7 = puVar6[6];
    puVar6[2] = uVar4;
    *(undefined2 *)(iVar7 + 2) = uVar3;
    *(undefined2 *)(iVar7 + 6) = 0x3040;
    *(short *)(puVar6[6] + 4) = (short)uVar8;
    if (*(ushort *)(this + 0x1e0) < *(ushort *)(this + 0x1dc)) {
      *(undefined2 *)(puVar6[6] + 8) = *(undefined2 *)(this + 0x1e2);
      puVar1 = (undefined4 *)(*(int *)(this + 0x1e8) + (uint)*(ushort *)(this + 0x1e2) * 0xc);
      puVar5 = *(undefined4 **)(*(int *)(this + 0x1e8) + (uint)*(ushort *)(this + 0x1e2) * 0xc);
      if (puVar5 != (undefined4 *)0x0) {
        (**(code **)*puVar5)(1);
      }
      *puVar1 = puVar6;
      puVar1[1] = 0;
      puVar1[2] = 0;
      *(short *)(this + 0x1e0) = *(short *)(this + 0x1e0) + 1;
      *(short *)(this + 0x1e2) =
           (short)((ulonglong)(ushort)(*(short *)(this + 0x1e2) + 1) %
                  (ulonglong)(longlong)(int)(uint)*(ushort *)(this + 0x1de));
    }
  }
  SendTheWindow(this);
  SendAck(this);
  return '\x01';
}




/* from: libgssocket:SRProtocol.cpp
   addr: 005C0350 */

void __thiscall clSRProtocol::SendTheWindow(clSRProtocol *this)

{
  byte *pbVar1;
  int *piVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  undefined2 uVar6;
  uchar uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  ushort *puVar12;
  int iVar13;
  uint uVar14;
  ushort uVar15;
  bool bVar16;
  time_t tVar17;
  int local_8;
  
  tVar17 = time((time_t *)0x0);
  uVar8 = (uint)tVar17;
  uVar14 = (uint)*(ushort *)(this + 0x1e4);
  do {
    uVar3 = *(ushort *)(this + 0x1e2);
    do {
      uVar4 = *(ushort *)(this + 0x1e4);
      uVar15 = (ushort)uVar14;
      if (uVar3 < uVar4) {
        if (uVar3 <= uVar15) {
          if (uVar15 < uVar4) {
            return;
          }
          uVar5 = *(ushort *)(this + 0x1de);
          goto LAB_005c03a6;
        }
      }
      else {
        uVar5 = uVar3;
        if (uVar15 < uVar4) {
          return;
        }
LAB_005c03a6:
        if (uVar5 <= uVar15) {
          return;
        }
      }
      piVar2 = (int *)(*(int *)(this + 0x1e8) + uVar14 * 0xc);
      uVar14 = (uint)((ulonglong)(uVar14 + 1 & 0xffff) %
                     (ulonglong)(longlong)(int)(uint)*(ushort *)(this + 0x1de));
    } while ((uVar8 <= (uint)piVar2[2]) || (*piVar2 == 0));
    if (((*(int *)(this + 0x234) - *(int *)(this + 0x224) >> 2) + -1) * 0x40 +
        (*(int *)(this + 0x228) - *(int *)(this + 0x22c) >> 1) +
        (*(int *)(this + 0x220) - (int)*(undefined2 **)(this + 0x218) >> 1) != 0) {
      uVar6 = **(undefined2 **)(this + 0x218);
      iVar9 = *(int *)(*piVar2 + 0x18);
      pbVar1 = (byte *)(iVar9 + 6);
      *pbVar1 = *pbVar1 | 4;
      *(undefined2 *)(iVar9 + 10) = uVar6;
      if (*(int *)(this + 0x218) == *(int *)(this + 0x220) + -2) {
        ExtAlloc_Free_4(*(undefined4 *)(this + 0x21c));
        iVar9 = *(int *)(this + 0x224);
        *(int **)(this + 0x224) = (int *)(iVar9 + 4);
        iVar9 = *(int *)(iVar9 + 4);
        *(int *)(this + 0x21c) = iVar9;
        *(int *)(this + 0x220) = iVar9 + 0x80;
        iVar9 = *(int *)(this + 0x21c);
      }
      else {
        iVar9 = *(int *)(this + 0x218) + 2;
      }
      *(int *)(this + 0x218) = iVar9;
    }
    iVar9 = *piVar2;
    uVar10 = 0;
    local_8 = *(int *)(iVar9 + 0x14) >> 1;
    **(undefined2 **)(iVar9 + 0x18) = *(undefined2 *)(this + 0x1b4);
    uVar11 = *(uint *)(iVar9 + 0x14) & 0x80000001;
    bVar16 = uVar11 == 0;
    if ((int)uVar11 < 0) {
      bVar16 = (uVar11 - 1 | 0xfffffffe) == 0xffffffff;
    }
    puVar12 = *(ushort **)(iVar9 + 0x10);
    if (!bVar16) {
      uVar10 = (uint)(char)*puVar12;
      puVar12 = (ushort *)((int)puVar12 + 1);
    }
    if (0 < local_8) {
      do {
        uVar3 = *puVar12;
        puVar12 = puVar12 + 1;
        uVar10 = uVar10 + uVar3;
        local_8 = local_8 + -1;
      } while (local_8 != 0);
    }
    iVar13 = (uVar10 >> 0x10) + (uVar10 & 0xffff);
    **(ushort **)(iVar9 + 0x18) = ~((short)((uint)iVar13 >> 0x10) + (short)iVar13);
    uVar7 = clUDPEngine::Send(*(clUDPEngine **)(this + 0x120),(clSegment *)*piVar2);
    if (uVar7 == '\0') {
      return;
    }
    uVar3 = *(ushort *)(this + 0x1c0);
    piVar2[1] = uVar8;
    piVar2[2] = uVar3 + uVar8;
  } while( true );
}




/* from: libgssocket:SRProtocol.cpp
   addr: 005C0530 */

void __thiscall clSRProtocol::SendAck(clSRProtocol *this)

{
  byte *pbVar1;
  undefined2 uVar2;
  ushort uVar3;
  undefined4 uVar4;
  uchar uVar5;
  clSegment *this_00;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ushort *puVar9;
  bool bVar10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005cc84a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (((*(int *)(this + 0x234) - *(int *)(this + 0x224) >> 2) + -1) * 0x40 +
      (*(int *)(this + 0x228) - *(int *)(this + 0x22c) >> 1) +
      (*(int *)(this + 0x220) - *(int *)(this + 0x218) >> 1) != 0) {
    while( true ) {
      this_00 = (clSegment *)ExtAlloc_Malloc_4(0x1c);
      local_4 = 0;
      if (this_00 == (clSegment *)0x0) {
        this_00 = (clSegment *)0x0;
      }
      else {
        *(undefined8 **)(this_00 + 4) = &clSRPSegment::_vbtable_;
        clSegment::clSegment(this_00,0xc);
        *(undefined ***)this_00 = &clSRPSegment::_vftable_;
      }
      local_4 = 0xffffffff;
      if (this_00 == (clSegment *)0x0) {
        ExceptionList = local_c;
        return;
      }
      uVar2 = *(undefined2 *)(this + 0x90);
      uVar4 = *(undefined4 *)(this + 8);
      *(undefined2 *)(this_00 + 0xc) = *(undefined2 *)(this + 0x8e);
      iVar7 = *(int *)(this_00 + 0x18);
      *(undefined4 *)(this_00 + 8) = uVar4;
      *(undefined2 *)(iVar7 + 2) = uVar2;
      *(undefined2 *)(iVar7 + 6) = 0x3040;
      *(undefined2 *)(*(int *)(this_00 + 0x18) + 4) = 0;
      iVar7 = *(int *)(this_00 + 0x18);
      uVar2 = **(undefined2 **)(this + 0x218);
      pbVar1 = (byte *)(iVar7 + 6);
      *pbVar1 = *pbVar1 | 4;
      *(undefined2 *)(iVar7 + 10) = uVar2;
      *(undefined2 *)(*(int *)(this_00 + 0x18) + 8) = 0xffff;
      iVar7 = *(int *)(this_00 + 0x14);
      **(undefined2 **)(this_00 + 0x18) = *(undefined2 *)(this + 0x1b4);
      uVar6 = 0;
      iVar7 = iVar7 >> 1;
      uVar8 = *(uint *)(this_00 + 0x14) & 0x80000001;
      bVar10 = uVar8 == 0;
      if ((int)uVar8 < 0) {
        bVar10 = (uVar8 - 1 | 0xfffffffe) == 0xffffffff;
      }
      puVar9 = *(ushort **)(this_00 + 0x10);
      if (!bVar10) {
        uVar6 = (uint)(char)*puVar9;
        puVar9 = (ushort *)((int)puVar9 + 1);
      }
      if (0 < iVar7) {
        do {
          uVar3 = *puVar9;
          puVar9 = puVar9 + 1;
          uVar6 = uVar6 + uVar3;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      iVar7 = (uVar6 >> 0x10) + (uVar6 & 0xffff);
      **(ushort **)(this_00 + 0x18) = ~((short)((uint)iVar7 >> 0x10) + (short)iVar7);
      uVar5 = clUDPEngine::Send(*(clUDPEngine **)(this + 0x120),this_00);
      if (uVar5 == '\0') break;
      if (*(int *)(this + 0x218) == *(int *)(this + 0x220) + -2) {
        ExtAlloc_Free_4(*(undefined4 *)(this + 0x21c));
        iVar7 = *(int *)(this + 0x224);
        *(int **)(this + 0x224) = (int *)(iVar7 + 4);
        iVar7 = *(int *)(iVar7 + 4);
        *(int *)(this + 0x21c) = iVar7;
        *(undefined4 *)(this + 0x218) = *(undefined4 *)(this + 0x21c);
        *(int *)(this + 0x220) = iVar7 + 0x80;
      }
      else {
        *(int *)(this + 0x218) = *(int *)(this + 0x218) + 2;
      }
      (*(code *)**(undefined4 **)this_00)(1);
      if (((*(int *)(this + 0x234) - *(int *)(this + 0x224) >> 2) + -1) * 0x40 +
          (*(int *)(this + 0x228) - *(int *)(this + 0x22c) >> 1) +
          (*(int *)(this + 0x220) - *(int *)(this + 0x218) >> 1) == 0) {
        ExceptionList = local_c;
        return;
      }
    }
    (*(code *)**(undefined4 **)this_00)(1);
  }
  ExceptionList = local_c;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: libgssocket:SRProtocol.cpp
   addr: 005C0770 */

uchar __thiscall clSRProtocol::ReceiveAllData(clSRProtocol *this)

{
  int *piVar1;
  ushort uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  uchar uVar6;
  ushort uVar7;
  int iVar8;
  ushort uVar9;
  list<class_clSegment*,class_ExtAlloc::Allocator<class_clSegment*>_> *plVar10;
  short sVar11;
  undefined2 extraout_var;
  clSegment *this_00;
  time_t tVar12;
  clSegment *local_1c;
  int local_18;
  undefined1 local_14 [4];
  uint uStack_10;
  undefined4 uStack_c;
  
  clUDPEngine::ReceiveAllData(*(clUDPEngine **)(this + 0x120));
  CheckLivingConnection(this);
  if ((int *)**(int **)(this + 0x124) != *(int **)(this + 0x124)) {
    do {
      plVar10 = (list<class_clSegment*,class_ExtAlloc::Allocator<class_clSegment*>_> *)
                (this + 0x124);
      this_00 = *(clSegment **)(**(int **)plVar10 + 8);
      local_1c = this_00;
      _STL::list<class_clSegment*,class_ExtAlloc::Allocator<class_clSegment*>_>::erase
                (plVar10,local_14,**(undefined4 **)plVar10);
      if ((((*(ushort **)(this_00 + 0x18))[3] & 0xfc0) == 0x40) && (0xb < *(int *)(this_00 + 0x14)))
      {
        uVar9 = **(ushort **)(this_00 + 0x18);
        uVar7 = clSegment::CalculateCheckSum(this_00,*(ushort *)(this + 0x1b2));
        **(ushort **)(this_00 + 0x18) = uVar9;
        if (uVar9 != uVar7) goto LAB_005c094b;
        iVar8 = *(int *)(this_00 + 0x18);
        if ((*(byte *)(iVar8 + 6) & 4) != 0) {
          uVar9 = *(ushort *)(iVar8 + 10);
          uVar6 = clSRPWindow::IsValideNumber((clSRPWindow *)(this + 0x1d8),uVar9);
          if (uVar6 != '\0') {
            local_18 = *(int *)(*(int *)(this + 0x1e8) + 4 + (uint)uVar9 * 0xc);
            piVar1 = (int *)(*(int *)(this + 0x1e8) + (uint)uVar9 * 0xc);
            puVar3 = (undefined4 *)*piVar1;
            if (puVar3 != (undefined4 *)0x0) {
              (**(code **)*puVar3)(1);
            }
            *piVar1 = 0;
            if (uVar9 == *(ushort *)(this + 0x1e4)) {
              do {
                *(short *)(this + 0x1e0) = *(short *)(this + 0x1e0) + -1;
                uVar5 = (ulonglong)(ushort)(*(short *)(this + 0x1e4) + 1) %
                        (ulonglong)(longlong)(int)(uint)*(ushort *)(this + 0x1de);
                sVar11 = (short)uVar5;
                *(short *)(this + 0x1e4) = sVar11;
                if (*(int *)(*(int *)(this + 0x1e8) + (int)uVar5 * 0xc) != 0) break;
              } while (sVar11 != *(short *)(this + 0x1e2));
            }
            tVar12 = time((time_t *)0x0);
            uStack_c = 0;
            uStack_10 = (int)tVar12 - local_18;
            *(double *)(this + 0x1c8) =
                 *(double *)(this + 0x1c8) * ___real_3feccccccccccccd +
                 (double)uStack_10 * ___real_3fb999999999999a;
            uVar7 = ftol();
            uVar9 = *(ushort *)(this + 0x1d0);
            *(ushort *)(this + 0x1c0) = uVar7;
            if ((uVar9 < uVar7) || (uVar9 = *(ushort *)(this + 0x1d2), uVar7 < uVar9)) {
              *(ushort *)(this + 0x1c0) = uVar9;
            }
          }
          iVar8 = *(int *)(local_1c + 0x18);
          this_00 = local_1c;
          if (*(short *)(iVar8 + 8) == -1) goto LAB_005c094b;
        }
        if ((*(byte *)(iVar8 + 6) & 1) != 0) {
          RcvClose(this,(clSRPSegment *)this_00);
        }
        uVar9 = *(ushort *)(this + 0x204);
        uVar7 = *(ushort *)(*(int *)((clSRPSegment *)this_00 + 0x18) + 8);
        uVar2 = *(ushort *)(this + 0x202);
        if (uVar9 <= uVar2) {
          if (uVar9 <= uVar7) {
joined_r0x005c0a05:
            if (uVar7 < uVar2) goto LAB_005c0a0b;
          }
          goto LAB_005c094b;
        }
        if (uVar2 <= uVar7) {
          if (uVar9 <= uVar7) {
            uVar2 = *(ushort *)(this + 0x1fe);
            goto joined_r0x005c0a05;
          }
          goto LAB_005c094b;
        }
LAB_005c0a0b:
        puVar3 = (undefined4 *)(*(int *)(this + 0x208) + (uint)uVar7 * 0xc);
        puVar4 = *(undefined4 **)(*(int *)(this + 0x208) + (uint)uVar7 * 0xc);
        if (puVar4 != (undefined4 *)0x0) {
          (**(code **)*puVar4)(1);
        }
        *puVar3 = this_00;
        puVar3[1] = 0;
        puVar3[2] = 0;
      }
      else {
LAB_005c094b:
        (*(code *)**(undefined4 **)this_00)(1);
      }
    } while ((int *)**(int **)(this + 0x124) != *(int **)(this + 0x124));
  }
  if (*(int *)(this + 0x194) <= *(int *)(this + 0x198)) {
    do {
      uVar6 = clSRPWindow::GetReceivedSegment
                        ((clSRPWindow *)(this + 0x1f8),(clSRPSegment **)&local_1c);
      if (uVar6 == '\0') {
        return '\x01';
      }
      local_18 = CONCAT22(extraout_var,*(undefined2 *)(*(int *)(local_1c + 0x18) + 8));
      _STL::deque<unsigned_short,class_ExtAlloc::Allocator<unsigned_short>_>::push_back
                ((deque<unsigned_short,class_ExtAlloc::Allocator<unsigned_short>_> *)(this + 0x218),
                 (ushort *)&local_18);
      clFifo::push_back((clFifo *)(this + 0x188),(uchar *)(*(int *)(local_1c + 0x10) + 0xc),
                        (uint)*(ushort *)(*(int *)(local_1c + 0x18) + 4));
      if (local_1c != (clSegment *)0x0) {
        (*(code *)**(undefined4 **)local_1c)(1);
      }
    } while (*(int *)(this + 0x194) <= *(int *)(this + 0x198));
  }
  return '\x01';
}




/* from: libgssocket:SRProtocol.cpp
   addr: 005C0A40 */

clSegment * __thiscall clSegment::clSegment(clSegment *this,uint param_1)

{
  undefined4 uVar1;
  int in_stack_00000008;
  
  if (in_stack_00000008 != 0) {
    *(undefined1 **)(this + 4) = &_vbtable_;
  }
  *(undefined ***)this = &_vftable_;
  *(uint *)(this + 0x14) = param_1;
  uVar1 = ExtAlloc_Malloc_4(param_1);
  *(undefined4 *)(this + 0x10) = uVar1;
  *(undefined4 *)(this + 0x18) = uVar1;
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: libgssocket:SRProtocol.cpp
   addr: 005C0A80 */

uchar __thiscall clSRProtocol::ReceiveAllData_InSyn_SentState(clSRProtocol *this)

{
  int *piVar1;
  ushort uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  uchar uVar6;
  ushort uVar7;
  int iVar8;
  ushort uVar9;
  list<class_clSegment*,class_ExtAlloc::Allocator<class_clSegment*>_> *plVar10;
  short sVar11;
  undefined2 extraout_var;
  clSegment *this_00;
  time_t tVar12;
  clSegment *local_1c;
  int local_18;
  undefined1 local_14 [4];
  uint uStack_10;
  undefined4 uStack_c;
  
  clUDPEngine::ReceiveAllData(*(clUDPEngine **)(this + 0x120));
  if ((int *)**(int **)(this + 0x124) != *(int **)(this + 0x124)) {
    do {
      plVar10 = (list<class_clSegment*,class_ExtAlloc::Allocator<class_clSegment*>_> *)
                (this + 0x124);
      this_00 = *(clSegment **)(**(int **)plVar10 + 8);
      local_1c = this_00;
      _STL::list<class_clSegment*,class_ExtAlloc::Allocator<class_clSegment*>_>::erase
                (plVar10,local_14,**(undefined4 **)plVar10);
      if ((((*(ushort **)(this_00 + 0x18))[3] & 0xfc0) == 0x40) && (0xb < *(int *)(this_00 + 0x14)))
      {
        uVar9 = **(ushort **)(this_00 + 0x18);
        uVar7 = clSegment::CalculateCheckSum(this_00,*(ushort *)(this + 0x1b2));
        **(ushort **)(this_00 + 0x18) = uVar9;
        if (uVar9 != uVar7) goto LAB_005c0c77;
        if ((*(byte *)(*(int *)(this_00 + 0x18) + 6) & 2) != 0) {
          if (*(int *)(this + 0x134) == 2) {
            CheckConnectionAck(this,(clSRPSegment *)this_00);
          }
          *(undefined2 *)(*(int *)(this_00 + 0x18) + 4) = 0;
        }
        iVar8 = *(int *)(this_00 + 0x18);
        if ((*(byte *)(iVar8 + 6) & 4) != 0) {
          uVar9 = *(ushort *)(iVar8 + 10);
          uVar6 = clSRPWindow::IsValideNumber((clSRPWindow *)(this + 0x1d8),uVar9);
          if (uVar6 != '\0') {
            local_18 = *(int *)(*(int *)(this + 0x1e8) + 4 + (uint)uVar9 * 0xc);
            piVar1 = (int *)(*(int *)(this + 0x1e8) + (uint)uVar9 * 0xc);
            puVar3 = (undefined4 *)*piVar1;
            if (puVar3 != (undefined4 *)0x0) {
              (**(code **)*puVar3)(1);
            }
            *piVar1 = 0;
            if (uVar9 == *(ushort *)(this + 0x1e4)) {
              do {
                *(short *)(this + 0x1e0) = *(short *)(this + 0x1e0) + -1;
                uVar5 = (ulonglong)(ushort)(*(short *)(this + 0x1e4) + 1) %
                        (ulonglong)(longlong)(int)(uint)*(ushort *)(this + 0x1de);
                sVar11 = (short)uVar5;
                *(short *)(this + 0x1e4) = sVar11;
                if (*(int *)(*(int *)(this + 0x1e8) + (int)uVar5 * 0xc) != 0) break;
              } while (sVar11 != *(short *)(this + 0x1e2));
            }
            tVar12 = time((time_t *)0x0);
            uStack_c = 0;
            uStack_10 = (int)tVar12 - local_18;
            *(double *)(this + 0x1c8) =
                 *(double *)(this + 0x1c8) * ___real_3feccccccccccccd +
                 (double)uStack_10 * ___real_3fb999999999999a;
            uVar7 = ftol();
            uVar9 = *(ushort *)(this + 0x1d0);
            *(ushort *)(this + 0x1c0) = uVar7;
            if ((uVar9 < uVar7) || (uVar9 = *(ushort *)(this + 0x1d2), uVar7 < uVar9)) {
              *(ushort *)(this + 0x1c0) = uVar9;
            }
          }
          iVar8 = *(int *)(local_1c + 0x18);
          this_00 = local_1c;
          if (*(short *)(iVar8 + 8) == -1) goto LAB_005c0c77;
        }
        if ((*(byte *)(iVar8 + 6) & 1) != 0) {
          RcvClose(this,(clSRPSegment *)this_00);
        }
        uVar9 = *(ushort *)(this + 0x204);
        uVar7 = *(ushort *)(*(int *)((clSRPSegment *)this_00 + 0x18) + 8);
        uVar2 = *(ushort *)(this + 0x202);
        if (uVar9 <= uVar2) {
          if (uVar9 <= uVar7) {
joined_r0x005c0d31:
            if (uVar7 < uVar2) goto LAB_005c0d37;
          }
          goto LAB_005c0c77;
        }
        if (uVar2 <= uVar7) {
          if (uVar9 <= uVar7) {
            uVar2 = *(ushort *)(this + 0x1fe);
            goto joined_r0x005c0d31;
          }
          goto LAB_005c0c77;
        }
LAB_005c0d37:
        puVar3 = (undefined4 *)(*(int *)(this + 0x208) + (uint)uVar7 * 0xc);
        puVar4 = *(undefined4 **)(*(int *)(this + 0x208) + (uint)uVar7 * 0xc);
        if (puVar4 != (undefined4 *)0x0) {
          (**(code **)*puVar4)(1);
        }
        *puVar3 = this_00;
        puVar3[1] = 0;
        puVar3[2] = 0;
      }
      else {
LAB_005c0c77:
        (*(code *)**(undefined4 **)this_00)(1);
      }
    } while ((int *)**(int **)(this + 0x124) != *(int **)(this + 0x124));
  }
  if (*(int *)(this + 0x194) <= *(int *)(this + 0x198)) {
    do {
      uVar6 = clSRPWindow::GetReceivedSegment
                        ((clSRPWindow *)(this + 0x1f8),(clSRPSegment **)&local_1c);
      if (uVar6 == '\0') {
        return '\x01';
      }
      local_18 = CONCAT22(extraout_var,*(undefined2 *)(*(int *)(local_1c + 0x18) + 8));
      _STL::deque<unsigned_short,class_ExtAlloc::Allocator<unsigned_short>_>::push_back
                ((deque<unsigned_short,class_ExtAlloc::Allocator<unsigned_short>_> *)(this + 0x218),
                 (ushort *)&local_18);
      clFifo::push_back((clFifo *)(this + 0x188),(uchar *)(*(int *)(local_1c + 0x10) + 0xc),
                        (uint)*(ushort *)(*(int *)(local_1c + 0x18) + 4));
      if (local_1c != (clSegment *)0x0) {
        (*(code *)**(undefined4 **)local_1c)(1);
      }
    } while (*(int *)(this + 0x194) <= *(int *)(this + 0x198));
  }
  return '\x01';
}




/* from: libgssocket:SRProtocol.cpp
   addr: 005C0D70
   addr: 005C0D70 */

void * __thiscall clSegment::_scalar_deleting_destructor_(clSegment *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  ExtAlloc_Free_4(*(undefined4 *)(this + 0x10));
  if ((param_1 & 1) != 0) {
    ExtAlloc_Free_4(this);
  }
  return this;
}




/* from: libgssocket:SRProtocol.cpp
   addr: 005C0DA0 */

ushort __thiscall clSegment::CalculateCheckSum(clSegment *this,ushort param_1)

{
  ushort uVar1;
  uint uVar2;
  ushort *puVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = *(int *)(this + 0x14);
  uVar2 = 0;
  **(ushort **)(this + 0x18) = param_1;
  iVar4 = iVar4 >> 1;
  uVar5 = *(uint *)(this + 0x14) & 0x80000001;
  if ((int)uVar5 < 0) {
    uVar5 = (uVar5 - 1 | 0xfffffffe) + 1;
  }
  puVar3 = *(ushort **)(this + 0x10);
  if (uVar5 != 0) {
    uVar2 = (uint)(char)*puVar3;
    puVar3 = (ushort *)((int)puVar3 + 1);
  }
  if (0 < iVar4) {
    do {
      uVar1 = *puVar3;
      puVar3 = puVar3 + 1;
      uVar2 = uVar2 + uVar1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  iVar4 = (uVar2 >> 0x10) + (uVar2 & 0xffff);
  return ~((short)((uint)iVar4 >> 0x10) + (short)iVar4);
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: libgssocket:SRProtocol.cpp
   addr: 005C0E00 */

uchar __thiscall clSRProtocol::ReceiveAllData_InClosingState(clSRProtocol *this)

{
  undefined4 *puVar1;
  byte bVar2;
  ushort uVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  uchar uVar6;
  ushort uVar7;
  ushort uVar8;
  list<class_clSegment*,class_ExtAlloc::Allocator<class_clSegment*>_> *plVar9;
  undefined2 extraout_var;
  short sVar10;
  clSegment *pcVar11;
  time_t tVar12;
  clSegment *local_1c;
  int local_18;
  undefined1 local_14 [4];
  uint uStack_10;
  undefined4 uStack_c;
  
  clUDPEngine::ReceiveAllData(*(clUDPEngine **)(this + 0x120));
  if ((int *)**(int **)(this + 0x124) != *(int **)(this + 0x124)) {
    do {
      plVar9 = (list<class_clSegment*,class_ExtAlloc::Allocator<class_clSegment*>_> *)(this + 0x124)
      ;
      pcVar11 = *(clSegment **)(**(int **)plVar9 + 8);
      local_1c = pcVar11;
      _STL::list<class_clSegment*,class_ExtAlloc::Allocator<class_clSegment*>_>::erase
                (plVar9,local_14,**(undefined4 **)plVar9);
      if ((((*(ushort **)(pcVar11 + 0x18))[3] & 0xfc0) == 0x40) && (0xb < *(int *)(pcVar11 + 0x14)))
      {
        uVar8 = **(ushort **)(pcVar11 + 0x18);
        uVar7 = clSegment::CalculateCheckSum(pcVar11,*(ushort *)(this + 0x1b2));
        **(ushort **)(pcVar11 + 0x18) = uVar8;
        if (uVar8 != uVar7) goto LAB_005c104e;
        if ((*(byte *)(*(int *)(pcVar11 + 0x18) + 6) & 4) != 0) {
          uVar8 = *(ushort *)(*(int *)(pcVar11 + 0x18) + 10);
          uVar6 = clSRPWindow::IsValideNumber((clSRPWindow *)(this + 0x1d8),uVar8);
          pcVar11 = local_1c;
          if (uVar6 != '\0') {
            puVar1 = (undefined4 *)(*(int *)(this + 0x1e8) + (uint)uVar8 * 0xc);
            puVar4 = *(undefined4 **)(*(int *)(this + 0x1e8) + (uint)uVar8 * 0xc);
            local_18 = puVar1[1];
            bVar2 = *(byte *)(puVar4[6] + 6);
            if (puVar4 != (undefined4 *)0x0) {
              (**(code **)*puVar4)(1);
            }
            *puVar1 = 0;
            if (uVar8 == *(ushort *)(this + 0x1e4)) {
              do {
                *(short *)(this + 0x1e0) = *(short *)(this + 0x1e0) + -1;
                uVar5 = (ulonglong)(ushort)(*(short *)(this + 0x1e4) + 1) %
                        (ulonglong)(longlong)(int)(uint)*(ushort *)(this + 0x1de);
                sVar10 = (short)uVar5;
                *(short *)(this + 0x1e4) = sVar10;
                if (*(int *)(*(int *)(this + 0x1e8) + (int)uVar5 * 0xc) != 0) break;
              } while (sVar10 != *(short *)(this + 0x1e2));
            }
            if (((bVar2 & 1) != 0) && (this[0x1d4] == (clSRProtocol)0x0)) {
              (**(code **)(this + 0x144))();
            }
            tVar12 = time((time_t *)0x0);
            uStack_c = 0;
            uStack_10 = (int)tVar12 - local_18;
            *(double *)(this + 0x1c8) =
                 *(double *)(this + 0x1c8) * ___real_3feccccccccccccd +
                 (double)uStack_10 * ___real_3fb999999999999a;
            uVar8 = ftol();
            *(ushort *)(this + 0x1c0) = uVar8;
            pcVar11 = local_1c;
            if (*(ushort *)(this + 0x1d0) < uVar8) {
              *(ushort *)(this + 0x1c0) = *(ushort *)(this + 0x1d0);
            }
            else if (uVar8 < *(ushort *)(this + 0x1d2)) {
              *(ushort *)(this + 0x1c0) = *(ushort *)(this + 0x1d2);
            }
          }
        }
        if ((*(byte *)(*(int *)((clSRPSegment *)pcVar11 + 0x18) + 6) & 1) != 0) {
          if (this[0x1d4] == (clSRProtocol)0x0) {
            SetClosingState(this);
            *(undefined4 *)(this + 0x168) = 0;
          }
          else {
            tVar12 = time((time_t *)0x0);
            this[0x1d4] = (clSRProtocol)0x0;
            *(uint *)(this + 0x168) = (int)tVar12 + (uint)*(ushort *)(this + 0x1d0) * 2;
          }
        }
        uVar3 = *(ushort *)(this + 0x202);
        uVar8 = *(ushort *)(*(int *)((clSRPSegment *)pcVar11 + 0x18) + 8);
        uVar7 = *(ushort *)(this + 0x204);
        if (uVar7 <= uVar3) {
          if (uVar7 <= uVar8) {
joined_r0x005c1108:
            if (uVar8 < uVar3) goto LAB_005c110e;
          }
          goto LAB_005c104e;
        }
        if (uVar3 <= uVar8) {
          if (uVar7 <= uVar8) {
            uVar3 = *(ushort *)(this + 0x1fe);
            goto joined_r0x005c1108;
          }
          goto LAB_005c104e;
        }
LAB_005c110e:
        stWindowInfo::operator=
                  ((stWindowInfo *)(*(int *)(this + 0x208) + (uint)uVar8 * 0xc),
                   (clSRPSegment *)pcVar11);
      }
      else {
LAB_005c104e:
        (*(code *)**(undefined4 **)pcVar11)(1);
      }
    } while ((int *)**(int **)(this + 0x124) != *(int **)(this + 0x124));
  }
  if (*(int *)(this + 0x194) <= *(int *)(this + 0x198)) {
    do {
      uVar6 = clSRPWindow::GetReceivedSegment
                        ((clSRPWindow *)(this + 0x1f8),(clSRPSegment **)&local_1c);
      if (uVar6 == '\0') {
        return '\x01';
      }
      local_18 = CONCAT22(extraout_var,*(undefined2 *)(*(int *)(local_1c + 0x18) + 8));
      _STL::deque<unsigned_short,class_ExtAlloc::Allocator<unsigned_short>_>::push_back
                ((deque<unsigned_short,class_ExtAlloc::Allocator<unsigned_short>_> *)(this + 0x218),
                 (ushort *)&local_18);
      clFifo::push_back((clFifo *)(this + 0x188),(uchar *)(*(int *)(local_1c + 0x10) + 0xc),
                        (uint)*(ushort *)(*(int *)(local_1c + 0x18) + 4));
      if (local_1c != (clSegment *)0x0) {
        (*(code *)**(undefined4 **)local_1c)(1);
      }
    } while (*(int *)(this + 0x194) <= *(int *)(this + 0x198));
  }
  return '\x01';
}




/* from: libgssocket:SRProtocol.cpp
   addr: 005C1130 */

uchar __thiscall clSRProtocol::CheckConnectionAck(clSRProtocol *this,clSRPSegment *param_1)

{
  short sVar1;
  int iVar2;
  uchar uVar3;
  
  if ((*(byte *)(*(int *)(param_1 + 0x18) + 6) & 4) == 0) {
    return '\0';
  }
  iVar2 = *(int *)(param_1 + 0x10);
  *(undefined2 *)(this + 0x90) = *(undefined2 *)(iVar2 + 0xe);
  *(undefined2 *)(this + 0x1b4) = *(undefined2 *)(iVar2 + 0x10);
  *(undefined2 *)(this + 0x1be) = *(undefined2 *)(iVar2 + 0xc);
  *(undefined2 *)(this + 0x8e) = *(undefined2 *)(param_1 + 0xc);
  sVar1 = *(short *)(iVar2 + 0x12);
  *(short *)(this + 0x1bc) = sVar1;
  *(short *)(this + 0x1ba) = sVar1 + 0xc;
  clSRPWindow::SetSendWindowSize((clSRPWindow *)(this + 0x1d8),*(ushort *)(this + 0x1b0));
  clSRPWindow::SetRcvWindowSize((clSRPWindow *)(this + 0x1f8),*(ushort *)(this + 0x1be));
  uVar3 = clUDPEngine::SetMaxRecvSize(*(clUDPEngine **)(this + 0x120),*(ushort *)(this + 0x1ba));
  if (uVar3 == '\0') {
    return '\0';
  }
  SetEstablishedState(this);
  return '\x01';
}




/* from: libgssocket:SRProtocol.cpp
   addr: 005C11E0
   addr: 005C11E0 */

void * __thiscall clSRPSegment::_scalar_deleting_destructor_(clSRPSegment *this,uint param_1)

{
  ~clSRPSegment(this);
  if ((param_1 & 1) != 0) {
    ExtAlloc_Free_4(this);
  }
  return this;
}




/* from: libgssocket:SRProtocol.cpp
   addr: 005C1200 */

void __thiscall clSRPSegment::~clSRPSegment(clSRPSegment *this)

{
  *(undefined ***)this = &clSegment::_vftable_;
  ExtAlloc_Free_4(*(undefined4 *)(this + 0x10));
  return;
}




/* from: libgssocket:SRProtocol.cpp
   addr: 005C1210 */

void __thiscall clSRProtocol::CheckLivingConnection(clSRProtocol *this)

{
  undefined4 *puVar1;
  undefined2 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  time_t tVar7;
  
  tVar7 = time((time_t *)0x0);
  iVar4 = (int)tVar7;
  if ((int *)**(int **)(this + 0x124) != *(int **)(this + 0x124)) {
    *(int *)(this + 0x174) = *(int *)(this + 0x170) + iVar4;
    *(int *)(this + 0x17c) = *(int *)(this + 0x178) + iVar4;
    return;
  }
  if (*(int *)(this + 0x17c) < iVar4) {
    if (*(int *)(this + 0x174) < iVar4) {
      (**(code **)(this + 0x144))();
      return;
    }
    *(int *)(this + 0x17c) = *(int *)(this + 0x178) + iVar4;
    if (*(short *)(this + 0x1e0) == 0) {
      puVar5 = (undefined4 *)ExtAlloc_Malloc_4(0x1c);
      if (puVar5 != (undefined4 *)0x0) {
        puVar5[1] = &clSRPSegment::_vbtable_;
        puVar5[5] = 0xc;
        *puVar5 = &clSegment::_vftable_;
        uVar6 = ExtAlloc_Malloc_4(0xc);
        puVar5[4] = uVar6;
        puVar5[6] = uVar6;
        *puVar5 = &clSRPSegment::_vftable_;
        uVar2 = *(undefined2 *)(this + 0x90);
        uVar6 = *(undefined4 *)(this + 8);
        *(undefined2 *)(puVar5 + 3) = *(undefined2 *)(this + 0x8e);
        iVar4 = puVar5[6];
        puVar5[2] = uVar6;
        *(undefined2 *)(iVar4 + 2) = uVar2;
        *(undefined2 *)(iVar4 + 6) = 0x3040;
        *(undefined2 *)(puVar5[6] + 4) = 0;
        if (*(ushort *)(this + 0x1e0) < *(ushort *)(this + 0x1dc)) {
          *(undefined2 *)(puVar5[6] + 8) = *(undefined2 *)(this + 0x1e2);
          puVar1 = (undefined4 *)(*(int *)(this + 0x1e8) + (uint)*(ushort *)(this + 0x1e2) * 0xc);
          puVar3 = *(undefined4 **)(*(int *)(this + 0x1e8) + (uint)*(ushort *)(this + 0x1e2) * 0xc);
          if (puVar3 != (undefined4 *)0x0) {
            (**(code **)*puVar3)(1);
          }
          *puVar1 = puVar5;
          puVar1[1] = 0;
          puVar1[2] = 0;
          *(short *)(this + 0x1e0) = *(short *)(this + 0x1e0) + 1;
          *(short *)(this + 0x1e2) =
               (short)((ulonglong)(ushort)(*(short *)(this + 0x1e2) + 1) %
                      (ulonglong)(longlong)(int)(uint)*(ushort *)(this + 0x1de));
        }
      }
    }
  }
  return;
}




/* from: libgssocket:SRProtocol.cpp
   addr: 005C1380 */

void __thiscall clSRProtocol::Close(clSRProtocol *this)

{
  SetClosingState(this);
  this[0x1d4] = (clSRProtocol)0x1;
  SendCloseMessage(this);
  return;
}




/* from: libgssocket:SRProtocol.cpp
   addr: 005C13B0 */

void __thiscall clSRProtocol::DirectClose(clSRProtocol *this)

{
  undefined2 uVar1;
  ushort uVar2;
  clSegment *pcVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ushort *puVar8;
  int iVar9;
  bool bVar10;
  
  pcVar3 = (clSegment *)ExtAlloc_Malloc_4(0x1c);
  if (pcVar3 != (clSegment *)0x0) {
    *(undefined8 **)(pcVar3 + 4) = &clSRPSegment::_vbtable_;
    *(undefined4 *)(pcVar3 + 0x14) = 0xc;
    *(undefined ***)pcVar3 = &clSegment::_vftable_;
    uVar4 = ExtAlloc_Malloc_4(0xc);
    *(undefined4 *)(pcVar3 + 0x10) = uVar4;
    *(undefined4 *)(pcVar3 + 0x18) = uVar4;
    *(undefined ***)pcVar3 = &clSRPSegment::_vftable_;
    uVar1 = *(undefined2 *)(this + 0x90);
    uVar4 = *(undefined4 *)(this + 8);
    *(undefined2 *)(pcVar3 + 0xc) = *(undefined2 *)(this + 0x8e);
    iVar6 = *(int *)(pcVar3 + 0x18);
    *(undefined4 *)(pcVar3 + 8) = uVar4;
    *(undefined2 *)(iVar6 + 2) = uVar1;
    *(undefined2 *)(iVar6 + 6) = 0x3049;
    *(undefined2 *)(*(int *)(pcVar3 + 0x18) + 4) = 0;
    uVar5 = 0;
    *(undefined2 *)(*(int *)(pcVar3 + 0x18) + 8) = 0xffff;
    iVar6 = *(int *)(pcVar3 + 0x14);
    **(undefined2 **)(pcVar3 + 0x18) = *(undefined2 *)(this + 0x1b4);
    iVar6 = iVar6 >> 1;
    uVar7 = *(uint *)(pcVar3 + 0x14) & 0x80000001;
    bVar10 = uVar7 == 0;
    if ((int)uVar7 < 0) {
      bVar10 = (uVar7 - 1 | 0xfffffffe) == 0xffffffff;
    }
    puVar8 = *(ushort **)(pcVar3 + 0x10);
    if (!bVar10) {
      uVar5 = (uint)(char)*puVar8;
      puVar8 = (ushort *)((int)puVar8 + 1);
    }
    if (0 < iVar6) {
      do {
        uVar2 = *puVar8;
        puVar8 = puVar8 + 1;
        uVar5 = uVar5 + uVar2;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    iVar6 = (uVar5 >> 0x10) + (uVar5 & 0xffff);
    iVar9 = 3;
    **(ushort **)(pcVar3 + 0x18) = ~((short)((uint)iVar6 >> 0x10) + (short)iVar6);
    do {
      clUDPEngine::Send(*(clUDPEngine **)(this + 0x120),pcVar3);
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
    (*(code *)**(undefined4 **)pcVar3)(1);
    SetClosingState(this);
    *(undefined4 *)(this + 0x168) = 0;
  }
  return;
}




/* from: libgssocket:SRProtocol.cpp
   addr: 005C14C0 */

void __thiscall clSRProtocol::RcvClose(clSRProtocol *this,clSRPSegment *param_1)

{
  if ((*(byte *)(*(int *)(param_1 + 0x18) + 6) & 8) != 0) {
    SetClosingState(this);
    *(undefined4 *)(this + 0x168) = 0;
    return;
  }
  SetClosingState(this);
  SendCloseMessage(this);
  return;
}




/* from: libgssocket:SRProtocol.cpp
   addr: 005C1500 */

void __thiscall clSRProtocol::SendCloseMessage(clSRProtocol *this)

{
  undefined4 *puVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  
  puVar5 = (undefined4 *)ExtAlloc_Malloc_4(0x1c);
  if (puVar5 != (undefined4 *)0x0) {
    puVar5[1] = &clSRPSegment::_vbtable_;
    puVar5[5] = 0xc;
    *puVar5 = &clSegment::_vftable_;
    uVar6 = ExtAlloc_Malloc_4(0xc);
    puVar5[4] = uVar6;
    puVar5[6] = uVar6;
    *puVar5 = &clSRPSegment::_vftable_;
    uVar2 = *(undefined2 *)(this + 0x90);
    uVar6 = *(undefined4 *)(this + 8);
    *(undefined2 *)(puVar5 + 3) = *(undefined2 *)(this + 0x8e);
    iVar3 = puVar5[6];
    puVar5[2] = uVar6;
    *(undefined2 *)(iVar3 + 2) = uVar2;
    *(undefined2 *)(iVar3 + 6) = 0x3041;
    *(undefined2 *)(puVar5[6] + 4) = 0;
    if (*(ushort *)(this + 0x1e0) < *(ushort *)(this + 0x1dc)) {
      *(undefined2 *)(puVar5[6] + 8) = *(undefined2 *)(this + 0x1e2);
      puVar1 = (undefined4 *)(*(int *)(this + 0x1e8) + (uint)*(ushort *)(this + 0x1e2) * 0xc);
      puVar4 = *(undefined4 **)(*(int *)(this + 0x1e8) + (uint)*(ushort *)(this + 0x1e2) * 0xc);
      if (puVar4 != (undefined4 *)0x0) {
        (**(code **)*puVar4)(1);
      }
      *puVar1 = puVar5;
      puVar1[1] = 0;
      puVar1[2] = 0;
      *(short *)(this + 0x1e0) = *(short *)(this + 0x1e0) + 1;
      *(short *)(this + 0x1e2) =
           (short)((ulonglong)(ushort)(*(short *)(this + 0x1e2) + 1) %
                  (ulonglong)(longlong)(int)(uint)*(ushort *)(this + 0x1de));
    }
  }
  return;
}




/* from: libgssocket:SRProtocol.cpp
   addr: 005C15F0 */

void __thiscall clSRProtocol::SetClosingState(clSRProtocol *this)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  *(int *)(this + 0x168) = (int)tVar1 + *(int *)(this + 0x16c);
  *(code **)(this + 0x15c) = d3dREND_DRIVER::PostDrawObj;
  *(undefined4 *)(this + 0x134) = 5;
  *(undefined4 *)(this + 0x160) = 0;
  *(undefined4 *)(this + 0x164) = 0;
  *(code **)(this + 0x138) = m3dTerm2DMatr;
  *(undefined4 *)(this + 0x13c) = 0;
  *(undefined4 *)(this + 0x140) = 0;
  *(code **)(this + 0x144) = DirectClose;
  *(code **)(this + 0x150) = CheckConnection_InClosingState;
  *(undefined4 *)(this + 0x148) = 0;
  *(undefined4 *)(this + 0x154) = 0;
  *(undefined4 *)(this + 0x14c) = 0;
  *(undefined4 *)(this + 0x158) = 0;
  return;
}




/* from: libgssocket:SRProtocol.cpp
   addr: 005C1670 */

void __thiscall clSRProtocol::SetCloseState(clSRProtocol *this)

{
  int *piVar1;
  
  *(undefined4 *)(this + 0x134) = 0;
  clFifo::EmptyAll((clFifo *)(this + 0x19c));
  clFifo::EmptyAll((clFifo *)(this + 0x188));
  piVar1 = *(int **)(this + 0x1e8);
  *(undefined2 *)(this + 0x1e0) = 0;
  *(undefined2 *)(this + 0x1e2) = 0;
  *(undefined2 *)(this + 0x1e4) = 0;
  if (piVar1 != *(int **)(this + 0x1ec)) {
    do {
      if ((undefined4 *)*piVar1 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar1)(1);
      }
      *piVar1 = 0;
      piVar1 = piVar1 + 3;
    } while (piVar1 != *(int **)(this + 0x1ec));
  }
  *(undefined2 *)(this + 0x200) = 0;
  *(undefined2 *)(this + 0x202) = 0;
  *(undefined2 *)(this + 0x204) = 0;
  piVar1 = *(int **)(this + 0x208);
  if (piVar1 != *(int **)(this + 0x20c)) {
    do {
      if ((undefined4 *)*piVar1 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar1)(1);
      }
      *piVar1 = 0;
      piVar1 = piVar1 + 3;
    } while (piVar1 != *(int **)(this + 0x20c));
  }
  clSRPWindow::SetSendWindowSize((clSRPWindow *)(this + 0x1d8),*(ushort *)(this + 0x1b0));
  clSRPWindow::SetRcvWindowSize((clSRPWindow *)(this + 0x1f8),*(ushort *)(this + 0x1b0));
  *(undefined2 *)(this + 0x90) = 0;
  *(undefined2 *)(this + 0x1b4) = 0;
  *(undefined2 *)(this + 0x1c0) = *(undefined2 *)(this + 0x1d0);
  clBasicProtocol::LeaveService((clBasicProtocol *)this);
  *(code **)(this + 0x15c) = d3dREND_DRIVER::PostDrawObj;
  *(undefined4 *)(this + 0x160) = 0;
  *(undefined4 *)(this + 0x164) = 0;
  *(code **)(this + 0x138) = m3dTerm2DMatr;
  *(undefined4 *)(this + 0x13c) = 0;
  *(undefined4 *)(this + 0x140) = 0;
  *(code **)(this + 0x144) = DirectClose_Fail;
  *(code **)(this + 0x150) = CheckConnection_Fail;
  *(undefined4 *)(this + 0x148) = 0;
  *(undefined4 *)(this + 0x154) = 0;
  *(undefined4 *)(this + 0x14c) = 0;
  *(undefined4 *)(this + 0x158) = 0;
  return;
}




/* from: libgssocket:SRProtocol.cpp
   addr: 005C17B0 */

void __thiscall clSRProtocol::SetEstablishedState(clSRProtocol *this)

{
  time_t tVar1;
  
  *(undefined4 *)(this + 0x134) = 4;
  *(undefined4 *)(this + 0x168) = 0xffffffff;
  tVar1 = time((time_t *)0x0);
  *(int *)(this + 0x17c) = (int)tVar1 + *(int *)(this + 0x178);
  tVar1 = time((time_t *)0x0);
  *(int *)(this + 0x174) = (int)tVar1 + *(int *)(this + 0x170);
  *(code **)(this + 0x15c) = Send;
  *(undefined4 *)(this + 0x160) = 0;
  *(undefined4 *)(this + 0x164) = 0;
  *(code **)(this + 0x138) = Close;
  *(undefined4 *)(this + 0x13c) = 0;
  *(undefined4 *)(this + 0x140) = 0;
  *(code **)(this + 0x144) = DirectClose;
  *(code **)(this + 0x150) = CheckConnection_InEstablishState;
  *(undefined4 *)(this + 0x148) = 0;
  *(undefined4 *)(this + 0x154) = 0;
  *(undefined4 *)(this + 0x14c) = 0;
  *(undefined4 *)(this + 0x158) = 0;
  return;
}




/* from: libgssocket:SRProtocol.cpp
   addr: 005C1850 */

uchar __thiscall clSRProtocol::SetSyn_SentState(clSRProtocol *this)

{
  time_t tVar1;
  
  if (*(int *)(this + 0x134) != 0) {
    return '\0';
  }
  *(undefined4 *)(this + 0x134) = 2;
  tVar1 = time((time_t *)0x0);
  *(int *)(this + 0x184) = (int)tVar1 + *(int *)(this + 0x180);
  *(code **)(this + 0x15c) = d3dREND_DRIVER::PostDrawObj;
  *(undefined4 *)(this + 0x160) = 0;
  *(undefined4 *)(this + 0x164) = 0;
  *(code **)(this + 0x138) = Close;
  *(undefined4 *)(this + 0x13c) = 0;
  *(undefined4 *)(this + 0x140) = 0;
  *(code **)(this + 0x144) = DirectClose;
  *(code **)(this + 0x150) = CheckConnection_InSyn_SentState;
  *(undefined4 *)(this + 0x148) = 0;
  *(undefined4 *)(this + 0x154) = 0;
  *(undefined4 *)(this + 0x14c) = 0;
  *(undefined4 *)(this + 0x158) = 0;
  return '\x01';
}




/* from: libgssocket:SRProtocol.cpp
   addr: 005C18E0 */

uchar __thiscall
clSRPClient::ConnectHost(clSRPClient *this,uint param_1,ushort param_2,ushort param_3,uchar param_4)

{
  ushort uVar1;
  undefined4 uVar2;
  uchar uVar3;
  clUDPEngine *pcVar4;
  clSegment *pcVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ushort *puVar9;
  bool bVar10;
  
  *(uint *)(this + 8) = param_1;
  *(ushort *)(this + 0x8e) = param_2;
  *(ushort *)(this + 0x11a) = param_3;
  pcVar4 = clUDPEngine::GetClientService
                     (*(uint *)(this + 0x94),(ushort *)(this + 0x11a),(ushort *)(this + 0x11c),
                      (clBasicProtocol *)this,param_4);
  *(clUDPEngine **)(this + 0x120) = pcVar4;
  if (pcVar4 == (clUDPEngine *)0x0) {
    return '\0';
  }
  uVar3 = clSRProtocol::SetSyn_SentState((clSRProtocol *)this);
  if (uVar3 == '\0') {
    return '\0';
  }
  pcVar5 = (clSegment *)ExtAlloc_Malloc_4(0x1c);
  if (pcVar5 != (clSegment *)0x0) {
    *(undefined8 **)(pcVar5 + 4) = &clSRPSegment::_vbtable_;
    *(undefined4 *)(pcVar5 + 0x14) = 0x14;
    *(undefined ***)pcVar5 = &clSegment::_vftable_;
    iVar6 = ExtAlloc_Malloc_4(0x14);
    *(int *)(pcVar5 + 0x10) = iVar6;
    *(int *)(pcVar5 + 0x18) = iVar6;
    *(undefined ***)pcVar5 = &clSRPSegment::_vftable_;
    clUDPEngine::SetMaxRecvSize(*(clUDPEngine **)(this + 0x120),*(ushort *)(this + 0x1b6));
    *(ushort *)(iVar6 + 0xe) = *(ushort *)(this + 0x11c);
    *(undefined2 *)(iVar6 + 0x10) = *(undefined2 *)(this + 0x1b2);
    *(undefined2 *)(iVar6 + 0xc) = *(undefined2 *)(this + 0x1b0);
    *(undefined2 *)(iVar6 + 0x12) = *(undefined2 *)(this + 0x1b8);
    uVar2 = *(undefined4 *)(this + 8);
    *(undefined2 *)(pcVar5 + 0xc) = *(undefined2 *)(this + 0x8e);
    iVar6 = *(int *)(pcVar5 + 0x18);
    *(undefined4 *)(pcVar5 + 8) = uVar2;
    *(undefined2 *)(iVar6 + 2) = 0;
    *(undefined2 *)(iVar6 + 6) = 0x3042;
    *(undefined2 *)(*(int *)(pcVar5 + 0x18) + 4) = 8;
    uVar7 = 0;
    *(undefined2 *)(*(int *)(pcVar5 + 0x18) + 8) = 0;
    iVar6 = *(int *)(pcVar5 + 0x14);
    **(undefined2 **)(pcVar5 + 0x18) = 0;
    iVar6 = iVar6 >> 1;
    uVar8 = *(uint *)(pcVar5 + 0x14) & 0x80000001;
    bVar10 = uVar8 == 0;
    if ((int)uVar8 < 0) {
      bVar10 = (uVar8 - 1 | 0xfffffffe) == 0xffffffff;
    }
    puVar9 = *(ushort **)(pcVar5 + 0x10);
    if (!bVar10) {
      uVar7 = (uint)(char)*puVar9;
      puVar9 = (ushort *)((int)puVar9 + 1);
    }
    if (0 < iVar6) {
      do {
        uVar1 = *puVar9;
        puVar9 = puVar9 + 1;
        uVar7 = uVar7 + uVar1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    iVar6 = (uVar7 >> 0x10) + (uVar7 & 0xffff);
    **(ushort **)(pcVar5 + 0x18) = ~((short)((uint)iVar6 >> 0x10) + (short)iVar6);
    uVar3 = clUDPEngine::Send(*(clUDPEngine **)(this + 0x120),pcVar5);
    if (uVar3 != '\0') {
      (*(code *)**(undefined4 **)pcVar5)(1);
      return '\x01';
    }
    (*(code *)**(undefined4 **)pcVar5)();
  }
  return '\0';
}




/* from: libgssocket:SRProtocol.cpp
   addr: 005C1A80 */

void __thiscall
_STL::vector<struct_stWindowInfo,class_ExtAlloc::Allocator<struct_stWindowInfo>_>::
~vector<struct_stWindowInfo,class_ExtAlloc::Allocator<struct_stWindowInfo>_>
          (vector<struct_stWindowInfo,class_ExtAlloc::Allocator<struct_stWindowInfo>_> *this)

{
  int *piVar1;
  void **ppvVar2;
  int *piVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005cc868;
  piVar1 = *(int **)(this + 4);
  piVar3 = *(int **)this;
  local_4 = 0;
  ppvVar2 = &pvStack_c;
  pvStack_c = ExceptionList;
  for (; ExceptionList = ppvVar2, piVar3 != piVar1; piVar3 = piVar3 + 3) {
    if ((undefined4 *)*piVar3 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar3)(1);
    }
    ppvVar2 = (void **)ExceptionList;
  }
  if (*(int *)this != 0) {
    ExtAlloc_Free_4(*(int *)this);
  }
  ExceptionList = pvStack_c;
  return;
}




/* from: libgssocket:SRProtocol.cpp
   addr: 005C1AF0 */

void __thiscall
_STL::deque<unsigned_short,class_ExtAlloc::Allocator<unsigned_short>_>::
~deque<unsigned_short,class_ExtAlloc::Allocator<unsigned_short>_>
          (deque<unsigned_short,class_ExtAlloc::Allocator<unsigned_short>_> *this)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  _Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_> local_5c [16];
  _Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_> local_4c [16];
  _Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_> local_3c [16];
  _Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_> local_2c [16];
  _Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_> local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005cc888;
  local_c = ExceptionList;
  local_4 = 0;
  local_6c = *(undefined4 *)(this + 0x10);
  local_68 = *(undefined4 *)(this + 0x14);
  local_64 = *(undefined4 *)(this + 0x18);
  local_60 = *(undefined4 *)(this + 0x1c);
  ExceptionList = &local_c;
  _Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>::
  Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>
            (local_5c,(_Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>
                       *)this);
  _Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>::
  Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>
            (local_4c,(_Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>
                       *)&local_6c);
  _Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>::
  Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>(local_3c,local_5c);
  _Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>::
  Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>(local_2c,local_4c);
  _Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>::
  Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>(local_1c,local_3c);
  if (*(int *)(this + 0x20) != 0) {
    iVar1 = *(int *)(this + 0x1c);
    for (puVar2 = *(undefined4 **)(this + 0xc); puVar2 < (undefined4 *)(iVar1 + 4);
        puVar2 = puVar2 + 1) {
      ExtAlloc_Free_4(*puVar2);
    }
    ExtAlloc_Free_4(*(undefined4 *)(this + 0x20));
  }
  ExceptionList = local_c;
  return;
}




/* from: libgssocket:SRProtocol.cpp
   addr: 005C1BC0 */

void __thiscall
_STL::deque<unsigned_short,class_ExtAlloc::Allocator<unsigned_short>_>::push_back
          (deque<unsigned_short,class_ExtAlloc::Allocator<unsigned_short>_> *this,ushort *param_1)

{
  ushort *puVar1;
  
  puVar1 = *(ushort **)(this + 0x10);
  if (puVar1 != (ushort *)(*(int *)(this + 0x18) + -2)) {
    if (puVar1 != (ushort *)0x0) {
      *puVar1 = *param_1;
    }
    *(int *)(this + 0x10) = *(int *)(this + 0x10) + 2;
    return;
  }
  M_push_back_aux_v(this,param_1);
  return;
}




/* from: libgssocket:SRProtocol.cpp
   addr: 005C1BF0 */

void __thiscall
_STL::list<class_clSegment*,class_ExtAlloc::Allocator<class_clSegment*>_>::erase
          (undefined4 param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)param_3[1];
  iVar2 = *param_3;
  *piVar1 = iVar2;
  *(int **)(iVar2 + 4) = piVar1;
  ExtAlloc_Free_4(param_3);
  *param_2 = iVar2;
  return;
}




/* from: libgssocket:SRProtocol.cpp
   addr: 005C1C10 */

_Deque_base<unsigned_short,class_ExtAlloc::Allocator<unsigned_short>_> * __thiscall
_STL::_Deque_base<unsigned_short,class_ExtAlloc::Allocator<unsigned_short>_>::
Deque_base<unsigned_short,class_ExtAlloc::Allocator<unsigned_short>_>
          (_Deque_base<unsigned_short,class_ExtAlloc::Allocator<unsigned_short>_> *this,
          Allocator<unsigned_short> *param_1,uint param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005cc8b6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  local_4 = 1;
  M_initialize_map(this,param_2);
  ExceptionList = local_c;
  return this;
}




/* from: libgssocket:SRProtocol.cpp
   addr: 005C1C90 */

void __thiscall stWindowInfo::operator=(stWindowInfo *this,clSRPSegment *param_1)

{
  if (*(undefined4 **)this != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)this)(1);
  }
  *(undefined4 *)(this + 4) = 0;
  *(clSRPSegment **)this = param_1;
  *(undefined4 *)(this + 8) = 0;
  return;
}




/* from: libgssocket:SRProtocol.cpp
   addr: 005C1CC0 */

void __thiscall clSRPWindow::~clSRPWindow(clSRPWindow *this)

{
  stWindowInfo *psVar1;
  int iVar2;
  void **ppvVar3;
  stWindowInfo *this_00;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005cc8c8;
  psVar1 = *(stWindowInfo **)(this + 0x14);
  this_00 = *(stWindowInfo **)(this + 0x10);
  local_4 = 0;
  ppvVar3 = &local_c;
  local_c = ExceptionList;
  for (; ExceptionList = ppvVar3, this_00 != psVar1; this_00 = this_00 + 0xc) {
    stWindowInfo::~stWindowInfo(this_00);
    ppvVar3 = (void **)ExceptionList;
  }
  iVar2 = *(int *)(this + 0x10);
  if (iVar2 != 0) {
    ExtAlloc_Free_4(iVar2);
  }
  ExceptionList = local_c;
  return;
}




/* from: libgssocket:SRProtocol.cpp
   addr: 005C1D20 */

uchar __thiscall clSRPWindow::SetSendWindowSize(clSRPWindow *this,ushort param_1)

{
  uint uVar1;
  stWindowInfo *psVar2;
  uint uVar3;
  stWindowInfo *psVar4;
  stWindowInfo *psVar5;
  undefined2 in_stack_00000006;
  random_access_iterator_tag local_29;
  stWindowInfo *local_28;
  undefined4 *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  uVar3 = _param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005cc8f0;
  local_c = ExceptionList;
  if (param_1 < 0x7fff) {
    ExceptionList = &local_c;
    *(undefined2 *)(this + 4) = 0;
    *(undefined2 *)(this + 6) = 0;
    *(undefined2 *)(this + 8) = 0;
    *(undefined2 *)(this + 10) = 0;
    *(undefined2 *)(this + 0xc) = 0;
    local_29 = param_1._0_1_;
    _param_1 = uVar3;
    psVar2 = _STL::copy(*(stWindowInfo **)(this + 0x14),*(stWindowInfo **)(this + 0x14),
                        *(stWindowInfo **)(this + 0x10),&local_29,(int *)0x0);
    local_28 = *(stWindowInfo **)(this + 0x14);
    psVar5 = psVar2;
    if (psVar2 != local_28) {
      do {
        stWindowInfo::_scalar_deleting_destructor_(psVar5,0);
        psVar5 = psVar5 + 0xc;
      } while (psVar5 != local_28);
    }
    *(stWindowInfo **)(this + 0x14) = psVar2;
    *(short *)(this + 4) = (short)_param_1;
    local_24 = (undefined4 *)0x0;
    *(short *)(this + 6) = (short)(_param_1 * 2);
    local_20 = 0;
    local_1c = 0;
    psVar5 = *(stWindowInfo **)(this + 0x14);
    uVar3 = _param_1 * 2 & 0xffff;
    local_4 = 0;
    if (uVar3 != 0) {
      if ((uint)((*(int *)(this + 0x18) - *(int *)(this + 0x14)) / 0xc) < uVar3) {
        _STL::vector<struct_stWindowInfo,class_ExtAlloc::Allocator<struct_stWindowInfo>_>::
        M_insert_overflow((vector<struct_stWindowInfo,class_ExtAlloc::Allocator<struct_stWindowInfo>_>
                           *)(this + 0x10),psVar5,(stWindowInfo *)&local_24,(__false_type *)&param_1
                          ,uVar3,false);
      }
      else {
        local_18 = 0;
        local_14 = 0;
        local_10 = 0;
        uVar1 = (*(int *)(this + 0x14) - (int)psVar5) / 0xc;
        psVar2 = *(stWindowInfo **)(this + 0x14);
        local_4 = 1;
        if (uVar3 < uVar1) {
          local_28 = psVar2 + uVar3 * -0xc;
          _STL::uninitialized_copy(local_28,psVar2,psVar2,(__false_type *)&param_1);
          *(uint *)(this + 0x14) = *(int *)(this + 0x14) + uVar3 * 0xc;
          _STL::copy_backward(psVar5,local_28,psVar2,(random_access_iterator_tag *)&param_1,
                              (int *)0x0);
          psVar2 = psVar5 + uVar3 * 0xc;
        }
        else {
          _param_1 = uVar3 - uVar1;
          _STL::uninitialized_fill_n(psVar2,_param_1,(stWindowInfo *)&local_18);
          psVar4 = (stWindowInfo *)(*(int *)(this + 0x14) + _param_1 * 0xc);
          *(stWindowInfo **)(this + 0x14) = psVar4;
          _STL::uninitialized_copy(psVar5,psVar2,psVar4,(__false_type *)&param_1);
          *(uint *)(this + 0x14) = *(int *)(this + 0x14) + uVar1 * 0xc;
        }
        _STL::fill(psVar5,psVar2,(stWindowInfo *)&local_18);
        local_4 = local_4 & 0xffffff00;
        stWindowInfo::~stWindowInfo((stWindowInfo *)&local_18);
      }
    }
    local_4 = 0xffffffff;
    if (local_24 != (undefined4 *)0x0) {
      (**(code **)*local_24)(1);
    }
    ExceptionList = local_c;
    return '\x01';
  }
  return '\0';
}




/* from: libgssocket:SRProtocol.cpp
   addr: 005C1F20 */

uchar __thiscall clSRPWindow::SetRcvWindowSize(clSRPWindow *this,ushort param_1)

{
  stWindowInfo *this_00;
  random_access_iterator_tag local_21;
  stWindowInfo *local_20;
  stWindowInfo *local_1c;
  undefined4 *local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005cc908;
  local_c = ExceptionList;
  if (param_1 < 0x7fff) {
    ExceptionList = &local_c;
    *(undefined2 *)(this + 4) = 0;
    *(undefined2 *)(this + 6) = 0;
    *(undefined2 *)(this + 8) = 0;
    *(undefined2 *)(this + 10) = 0;
    *(undefined2 *)(this + 0xc) = 0;
    local_21 = param_1._0_1_;
    this_00 = _STL::copy(*(stWindowInfo **)(this + 0x14),*(stWindowInfo **)(this + 0x14),
                         *(stWindowInfo **)(this + 0x10),&local_21,(int *)0x0);
    local_20 = *(stWindowInfo **)(this + 0x14);
    local_1c = this_00;
    if (this_00 != local_20) {
      do {
        stWindowInfo::_scalar_deleting_destructor_(this_00,0);
        this_00 = this_00 + 0xc;
      } while (this_00 != local_20);
    }
    *(stWindowInfo **)(this + 0x14) = local_1c;
    *(ushort *)(this + 4) = param_1;
    local_18 = (undefined4 *)0x0;
    local_14 = 0;
    *(ushort *)(this + 6) = param_1 * 2;
    local_10 = 0;
    local_4 = 0;
    _STL::vector<struct_stWindowInfo,class_ExtAlloc::Allocator<struct_stWindowInfo>_>::M_fill_insert
              ((vector<struct_stWindowInfo,class_ExtAlloc::Allocator<struct_stWindowInfo>_> *)
               (this + 0x10),*(stWindowInfo **)(this + 0x14),(uint)(ushort)(param_1 * 2),
               (stWindowInfo *)&local_18);
    local_4 = 0xffffffff;
    *(short *)(this + 10) =
         (short)(((uint)*(ushort *)(this + 0xc) + (uint)*(ushort *)(this + 4)) %
                (uint)*(ushort *)(this + 6));
    if (local_18 != (undefined4 *)0x0) {
      (**(code **)*local_18)(1);
    }
    ExceptionList = local_c;
    return '\x01';
  }
  return '\0';
}




/* from: libgssocket:SRProtocol.cpp
   addr: 005C2040 */

uchar __thiscall clSRPWindow::IsValideNumber(clSRPWindow *this,ushort param_1)

{
  ushort uVar1;
  ushort uVar2;
  
  uVar1 = *(ushort *)(this + 0xc);
  uVar2 = *(ushort *)(this + 10);
  if (uVar2 < uVar1) {
    if (param_1 < uVar2) {
      return '\x01';
    }
    if (param_1 < uVar1) {
      return '\0';
    }
    uVar2 = *(ushort *)(this + 6);
  }
  else if (param_1 < uVar1) {
    return '\0';
  }
  if (uVar2 <= param_1) {
    return '\0';
  }
  return '\x01';
}




/* from: libgssocket:SRProtocol.cpp
   addr: 005C2090 */

uchar __thiscall clSRPWindow::GetReceivedSegment(clSRPWindow *this,clSRPSegment **param_1)

{
  int *piVar1;
  clSRPSegment *pcVar2;
  
  piVar1 = (int *)(*(int *)(this + 0x10) + (uint)*(ushort *)(this + 0xc) * 0xc);
  pcVar2 = (clSRPSegment *)*piVar1;
  *param_1 = pcVar2;
  if (pcVar2 == (clSRPSegment *)0x0) {
    return '\0';
  }
  *piVar1 = 0;
  *(short *)(this + 0xc) =
       (short)((ulonglong)(ushort)(*(short *)(this + 0xc) + 1) %
              (ulonglong)(longlong)(int)(uint)*(ushort *)(this + 6));
  *(short *)(this + 10) =
       (short)((ulonglong)(ushort)(*(short *)(this + 10) + 1) %
              (ulonglong)(longlong)(int)(uint)*(ushort *)(this + 6));
  return '\x01';
}




/* from: libgssocket:SRProtocol.cpp
   addr: 005C20F0 */

void __thiscall
_STL::vector<struct_stWindowInfo,class_ExtAlloc::Allocator<struct_stWindowInfo>_>::M_fill_insert
          (vector<struct_stWindowInfo,class_ExtAlloc::Allocator<struct_stWindowInfo>_> *this,
          stWindowInfo *param_1,uint param_2,stWindowInfo *param_3)

{
  uint uVar1;
  int iVar2;
  stWindowInfo *psVar3;
  stWindowInfo *psVar4;
  uint uVar5;
  stWindowInfo *psVar6;
  stWindowInfo *psVar7;
  undefined4 *local_18;
  int local_14;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005cc928;
  local_c = ExceptionList;
  if (param_2 != 0) {
    if ((uint)((*(int *)(this + 8) - *(int *)(this + 4)) / 0xc) < param_2) {
      ExceptionList = &local_c;
      M_insert_overflow(this,param_1,param_3,(__false_type *)&param_1,param_2,false);
    }
    else {
      local_18 = *(undefined4 **)param_3;
      local_14 = *(int *)(param_3 + 4);
      local_10 = *(void **)(param_3 + 8);
      local_4 = 0;
      uVar1 = (*(int *)(this + 4) - (int)param_1) / 0xc;
      psVar3 = *(stWindowInfo **)(this + 4);
      if (param_2 < uVar1) {
        iVar2 = param_2 * 0xc;
        psVar4 = psVar3 + param_2 * -0xc;
        ExceptionList = &local_c;
        uninitialized_copy(psVar4,psVar3,psVar3,(__false_type *)&param_3);
        psVar6 = param_1;
        *(int *)(this + 4) = *(int *)(this + 4) + iVar2;
        psVar7 = (stWindowInfo *)(((int)psVar4 - (int)param_1) / 0xc);
        if (0 < (int)psVar7) {
          psVar4 = psVar4 + 8;
          param_1 = psVar7;
          do {
            if (*(undefined4 **)(psVar3 + -0xc) != (undefined4 *)0x0) {
              (**(code **)**(undefined4 **)(psVar3 + -0xc))(1);
            }
            *(undefined4 *)(psVar3 + -0xc) = *(undefined4 *)(psVar4 + -0x14);
            *(undefined4 *)(psVar3 + -8) = *(undefined4 *)(psVar4 + -0x10);
            param_1 = param_1 + -1;
            *(undefined4 *)(psVar3 + -4) = *(undefined4 *)(psVar4 + -0xc);
            psVar4 = psVar4 + -0xc;
            psVar3 = psVar3 + -0xc;
          } while (param_1 != (stWindowInfo *)0x0);
        }
        psVar3 = psVar6 + iVar2;
        for (; psVar6 != psVar3; psVar6 = psVar6 + 0xc) {
          if (*(undefined4 **)psVar6 != (undefined4 *)0x0) {
            (**(code **)**(undefined4 **)psVar6)(1);
          }
          *(undefined4 **)psVar6 = local_18;
          *(int *)(psVar6 + 4) = local_14;
          *(void **)(psVar6 + 8) = local_10;
        }
      }
      else {
        uVar5 = param_2 - uVar1;
        param_3 = (stWindowInfo *)CONCAT31(param_3._1_3_,param_1._0_1_);
        ExceptionList = &local_c;
        uninitialized_fill_n(psVar3,uVar5,(stWindowInfo *)&local_18,(__false_type *)&param_3);
        psVar7 = param_1;
        psVar6 = (stWindowInfo *)(*(int *)(this + 4) + uVar5 * 0xc);
        *(stWindowInfo **)(this + 4) = psVar6;
        uninitialized_copy(param_1,psVar3,psVar6,(__false_type *)&param_1);
        *(uint *)(this + 4) = *(int *)(this + 4) + uVar1 * 0xc;
        for (; psVar7 != psVar3; psVar7 = psVar7 + 0xc) {
          if (*(undefined4 **)psVar7 != (undefined4 *)0x0) {
            (**(code **)**(undefined4 **)psVar7)(1);
          }
          *(undefined4 **)psVar7 = local_18;
          *(int *)(psVar7 + 4) = local_14;
          *(void **)(psVar7 + 8) = local_10;
        }
      }
      local_4 = 0xffffffff;
      if (local_18 != (undefined4 *)0x0) {
        (**(code **)*local_18)(1);
        ExceptionList = local_10;
        return;
      }
    }
  }
  ExceptionList = local_c;
  return;
}




/* from: libgssocket:SRProtocol.cpp
   addr: 005C22F0
   addr: 005C22F0 */

void __thiscall
_STL::_Deque_base<unsigned_short,class_ExtAlloc::Allocator<unsigned_short>_>::
~_Deque_base<unsigned_short,class_ExtAlloc::Allocator<unsigned_short>_>
          (_Deque_base<unsigned_short,class_ExtAlloc::Allocator<unsigned_short>_> *this)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (*(int *)(this + 0x20) != 0) {
    iVar1 = *(int *)(this + 0x1c);
    for (puVar2 = *(undefined4 **)(this + 0xc); puVar2 < (undefined4 *)(iVar1 + 4);
        puVar2 = puVar2 + 1) {
      ExtAlloc_Free_4(*puVar2);
    }
    ExtAlloc_Free_4(*(undefined4 *)(this + 0x20));
  }
  return;
}




/* from: libgssocket:SRProtocol.cpp
   addr: 005C2330 */

void __thiscall
_STL::_Deque_base<unsigned_short,class_ExtAlloc::Allocator<unsigned_short>_>::M_initialize_map
          (_Deque_base<unsigned_short,class_ExtAlloc::Allocator<unsigned_short>_> *this,uint param_1
          )

{
  ushort **ppuVar1;
  ushort **ppuVar2;
  uint uVar3;
  ushort *puVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  uint local_1c;
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005cc940;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffd4;
  iVar7 = (param_1 >> 6) + 1;
  local_18 = (param_1 >> 6) + 3;
  local_1c = 8;
  puVar5 = &local_18;
  if (local_18 < 9) {
    puVar5 = &local_1c;
  }
  uVar3 = *puVar5;
  ExceptionList = &local_10;
  *(uint *)(this + 0x24) = uVar3;
  iVar6 = ExtAlloc_Malloc_4(uVar3 << 2);
  *(int *)(this + 0x20) = iVar6;
  local_8 = 0;
  ppuVar1 = (ushort **)(iVar6 + ((uint)(*(int *)(this + 0x24) - iVar7) >> 1) * 4);
  ppuVar2 = ppuVar1 + iVar7;
  M_create_nodes(this,ppuVar1,ppuVar2);
  *(ushort ***)(this + 0xc) = ppuVar1;
  puVar4 = *ppuVar1;
  *(ushort **)(this + 4) = puVar4;
  *(ushort **)(this + 8) = puVar4 + 0x40;
  *(ushort ***)(this + 0x1c) = ppuVar2 + -1;
  puVar4 = ppuVar2[-1];
  *(ushort **)(this + 0x14) = puVar4;
  *(ushort **)(this + 0x18) = puVar4 + 0x40;
  *(undefined4 *)this = *(undefined4 *)(this + 4);
  *(uint *)(this + 0x10) = *(int *)(this + 0x14) + (param_1 & 0x3f) * 2;
  ExceptionList = local_10;
  return;
}




/* from: libgssocket:SRProtocol.cpp
   addr: 005C2410 */

void __thiscall
_STL::deque<unsigned_short,class_ExtAlloc::Allocator<unsigned_short>_>::M_push_back_aux_v
          (deque<unsigned_short,class_ExtAlloc::Allocator<unsigned_short>_> *this,ushort *param_1)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = *param_1;
  if ((uint)(*(int *)(this + 0x24) - (*(int *)(this + 0x1c) - *(int *)(this + 0x20) >> 2)) < 2) {
    M_reallocate_map(this,1,false);
  }
  uVar3 = ExtAlloc_Malloc_4(0x80);
  *(undefined4 *)(*(int *)(this + 0x1c) + 4) = uVar3;
  if (*(ushort **)(this + 0x10) != (ushort *)0x0) {
    **(ushort **)(this + 0x10) = uVar1;
  }
  iVar2 = *(int *)(this + 0x1c);
  *(int **)(this + 0x1c) = (int *)(iVar2 + 4);
  iVar2 = *(int *)(iVar2 + 4);
  *(int *)(this + 0x14) = iVar2;
  *(int *)(this + 0x18) = iVar2 + 0x80;
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(this + 0x14);
  return;
}




/* from: libgssocket:SRProtocol.cpp
   addr: 005C2480 */

void __thiscall
_STL::vector<struct_stWindowInfo,class_ExtAlloc::Allocator<struct_stWindowInfo>_>::M_insert_overflow
          (vector<struct_stWindowInfo,class_ExtAlloc::Allocator<struct_stWindowInfo>_> *this,
          stWindowInfo *param_1,stWindowInfo *param_2,__false_type *param_3,uint param_4,
          bool param_5)

{
  stWindowInfo *psVar1;
  stWindowInfo *psVar2;
  uint uVar3;
  stWindowInfo **ppsVar4;
  int *piVar5;
  int *piVar6;
  stWindowInfo *local_1c;
  stWindowInfo *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  uVar3 = param_4;
  local_8 = 0xffffffff;
  puStack_c = &LAB_005cc950;
  local_10 = ExceptionList;
  psVar2 = (stWindowInfo *)((*(int *)(this + 4) - *(int *)this) / 0xc);
  local_14 = &stack0xffffffd8;
  ppsVar4 = (stWindowInfo **)&param_4;
  local_1c = psVar2;
  if (param_4 <= psVar2) {
    ppsVar4 = &local_1c;
  }
  psVar1 = *ppsVar4;
  ExceptionList = &local_10;
  local_1c = (stWindowInfo *)ExtAlloc_Malloc_4((int)(psVar1 + (int)psVar2) * 0xc);
  local_8 = 0;
  local_18 = local_1c;
  local_18 = uninitialized_copy(*(stWindowInfo **)this,param_1,local_1c,
                                (__false_type *)((int)&param_4 + 3));
  if (uVar3 == 1) {
    if (local_18 != (stWindowInfo *)0x0) {
      *(undefined4 *)local_18 = *(undefined4 *)param_2;
      *(undefined4 *)(local_18 + 4) = *(undefined4 *)(param_2 + 4);
      *(undefined4 *)(local_18 + 8) = *(undefined4 *)(param_2 + 8);
    }
    local_18 = local_18 + 0xc;
  }
  else {
    local_18 = uninitialized_fill_n(local_18,uVar3,param_2,(__false_type *)((int)&param_4 + 3));
  }
  if (param_5 == false) {
    local_18 = uninitialized_copy(param_1,*(stWindowInfo **)(this + 4),local_18,
                                  (__false_type *)&stack0x00000017);
  }
  piVar5 = *(int **)(this + 4);
  piVar6 = *(int **)this;
  local_8 = 0xffffffff;
  param_4 = (uint)piVar5;
  if (piVar6 != piVar5) {
    do {
      if ((undefined4 *)*piVar6 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar6)(1);
        piVar5 = (int *)param_4;
      }
      piVar6 = piVar6 + 3;
    } while (piVar6 != piVar5);
  }
  ExtAlloc_Free_4(*(undefined4 *)this);
  *(stWindowInfo **)this = local_1c;
  *(stWindowInfo **)(this + 4) = local_18;
  *(stWindowInfo **)(this + 8) = local_1c + (int)(psVar1 + (int)psVar2) * 0xc;
  ExceptionList = local_10;
  return;
}




/* from: libgssocket:SRProtocol.cpp
   addr: 005C25E0 */

stWindowInfo *
_STL::uninitialized_copy
          (stWindowInfo *param_1,stWindowInfo *param_2,stWindowInfo *param_3,__false_type *param_4)

{
  if (param_1 != param_2) {
    do {
      if (param_3 != (stWindowInfo *)0x0) {
        *(undefined4 *)param_3 = *(undefined4 *)param_1;
        *(undefined4 *)(param_3 + 4) = *(undefined4 *)(param_1 + 4);
        *(undefined4 *)(param_3 + 8) = *(undefined4 *)(param_1 + 8);
      }
      param_1 = param_1 + 0xc;
      param_3 = param_3 + 0xc;
    } while (param_1 != param_2);
  }
  return param_3;
}




/* from: libgssocket:SRProtocol.cpp
   addr: 005C2620 */

void _STL::fill(stWindowInfo *param_1,stWindowInfo *param_2,stWindowInfo *param_3)

{
  if (param_1 != param_2) {
    do {
      if (*(undefined4 **)param_1 != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)param_1)(1);
      }
      *(int *)param_1 = *(int *)param_3;
      *(int *)(param_1 + 4) = *(int *)(param_3 + 4);
      *(int *)(param_1 + 8) = *(int *)(param_3 + 8);
      param_1 = param_1 + 0xc;
    } while (param_1 != param_2);
  }
  return;
}




/* from: libgssocket:SRProtocol.cpp
   addr: 005C2660 */

stWindowInfo * _STL::uninitialized_fill_n(stWindowInfo *param_1,uint param_2,stWindowInfo *param_3)

{
  stWindowInfo *psVar1;
  __false_type local_1;
  
  psVar1 = uninitialized_fill_n(param_1,param_2,param_3,&local_1);
  return psVar1;
}




/* from: libgssocket:SRProtocol.cpp
   addr: 005C2690 */

void __thiscall
_STL::deque<unsigned_short,class_ExtAlloc::Allocator<unsigned_short>_>::M_reallocate_map
          (deque<unsigned_short,class_ExtAlloc::Allocator<unsigned_short>_> *this,uint param_1,
          bool param_2)

{
  int iVar1;
  int iVar2;
  int *_Src;
  uint uVar3;
  void *_Src_00;
  size_t _Size;
  deque<unsigned_short,class_ExtAlloc::Allocator<unsigned_short>_> *pdVar4;
  int iVar5;
  int iVar6;
  int *_Dst;
  
  iVar2 = *(int *)(this + 0x1c);
  _Src = *(int **)(this + 0xc);
  iVar5 = iVar2 - (int)_Src >> 2;
  iVar6 = iVar5 + 1;
  iVar1 = iVar6 + param_1;
  uVar3 = *(uint *)(this + 0x24);
  if ((uint)(iVar1 * 2) < uVar3) {
    _Dst = (int *)(*(int *)(this + 0x20) + ((uVar3 - iVar1 >> 1) + (-(uint)param_2 & param_1)) * 4);
    if (_Dst < _Src) {
      if ((int *)(iVar2 + 4) != _Src) {
        memmove(_Dst,_Src,(iVar2 + 4) - (int)_Src);
      }
    }
    else {
      _Size = (iVar2 - (int)_Src) + 4;
      if (0 < (int)_Size) {
        memmove((void *)((iVar6 * 4 - _Size) + (int)_Dst),_Src,_Size);
      }
    }
  }
  else {
    pdVar4 = this + 0x24;
    if (*(uint *)(this + 0x24) < param_1) {
      pdVar4 = (deque<unsigned_short,class_ExtAlloc::Allocator<unsigned_short>_> *)&param_1;
    }
    iVar2 = uVar3 + 2 + *(int *)pdVar4;
    iVar6 = ExtAlloc_Malloc_4(iVar2 * 4);
    _Dst = (int *)(iVar6 + (((uint)(iVar2 - iVar1) >> 1) + (-(uint)(param_2 != false) & param_1)) *
                           4);
    _Src_00 = *(void **)(this + 0xc);
    if ((void *)(*(int *)(this + 0x1c) + 4) != _Src_00) {
      memmove(_Dst,_Src_00,(*(int *)(this + 0x1c) + 4) - (int)_Src_00);
    }
    ExtAlloc_Free_4(*(undefined4 *)(this + 0x20));
    *(int *)(this + 0x24) = iVar2;
    *(int *)(this + 0x20) = iVar6;
  }
  *(int **)(this + 0xc) = _Dst;
  iVar1 = *_Dst;
  *(int *)(this + 4) = iVar1;
  *(int *)(this + 8) = iVar1 + 0x80;
  *(int **)(this + 0x1c) = _Dst + iVar5;
  iVar1 = _Dst[iVar5];
  *(int *)(this + 0x14) = iVar1;
  *(int *)(this + 0x18) = iVar1 + 0x80;
  return;
}




/* from: libgssocket:SRProtocol.cpp
   addr: 005C27C0 */

stWindowInfo *
_STL::copy(stWindowInfo *param_1,stWindowInfo *param_2,stWindowInfo *param_3,
          random_access_iterator_tag *param_4,int *param_5)

{
  int iVar1;
  
  iVar1 = ((int)param_2 - (int)param_1) / 0xc;
  if (iVar1 < 1) {
    return param_3;
  }
  do {
    if (*(undefined4 **)param_3 != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)param_3)(1);
    }
    *(int *)param_3 = *(int *)param_1;
    *(int *)(param_3 + 4) = *(int *)(param_1 + 4);
    *(int *)(param_3 + 8) = *(int *)(param_1 + 8);
    param_3 = param_3 + 0xc;
    iVar1 = iVar1 + -1;
    param_1 = param_1 + 0xc;
  } while (iVar1 != 0);
  return param_3;
}




/* from: libgssocket:SRProtocol.cpp
   addr: 005C2820 */

stWindowInfo *
_STL::uninitialized_fill_n
          (stWindowInfo *param_1,uint param_2,stWindowInfo *param_3,__false_type *param_4)

{
  if (param_2 != 0) {
    do {
      if (param_1 != (stWindowInfo *)0x0) {
        *(undefined4 *)param_1 = *(undefined4 *)param_3;
        *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_3 + 4);
        *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_3 + 8);
      }
      param_1 = param_1 + 0xc;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
  }
  return param_1;
}




/* from: libgssocket:SRProtocol.cpp
   addr: 005C2860 */

stWindowInfo *
_STL::copy_backward(stWindowInfo *param_1,stWindowInfo *param_2,stWindowInfo *param_3,
                   random_access_iterator_tag *param_4,int *param_5)

{
  int iVar1;
  stWindowInfo *psVar2;
  
  iVar1 = ((int)param_2 - (int)param_1) / 0xc;
  if (iVar1 < 1) {
    return param_3;
  }
  do {
    psVar2 = param_3 + -0xc;
    if (*(undefined4 **)(param_3 + -0xc) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_3 + -0xc))(1);
    }
    iVar1 = iVar1 + -1;
    *(undefined4 *)psVar2 = *(undefined4 *)(param_2 + -0xc);
    *(undefined4 *)(param_3 + -8) = *(undefined4 *)(param_2 + -8);
    *(undefined4 *)(param_3 + -4) = *(undefined4 *)(param_2 + -4);
    param_3 = psVar2;
    param_2 = param_2 + -0xc;
  } while (iVar1 != 0);
  return psVar2;
}




/* from: libgssocket:SRProtocol.cpp
   addr: 005C28C0 */

void * __thiscall stWindowInfo::_scalar_deleting_destructor_(stWindowInfo *this,uint param_1)

{
  if (*(undefined4 **)this != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)this)(1);
  }
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

