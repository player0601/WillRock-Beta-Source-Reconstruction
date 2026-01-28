
/* from: libgsclient:GSProxyLib.cpp
   addr: 005A1300 */

CGSProxyLib * __thiscall CGSProxyLib::CGSProxyLib(CGSProxyLib *this)

{
  clPersistentCB *this_00;
  undefined4 uVar1;
  int in_stack_00000004;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c93f4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (in_stack_00000004 != 0) {
    ExceptionList = &local_c;
    *(undefined8 **)this = &_vbtable_;
  }
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  this_00 = (clPersistentCB *)ExtAlloc_Malloc_4(0x20);
  local_4 = 1;
  if (this_00 == (clPersistentCB *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = clPersistentCB::clPersistentCB(this_00);
  }
  *(undefined4 *)(this + 0x18) = uVar1;
  this[0x1c] = (CGSProxyLib)0x0;
  ExceptionList = local_c;
  return this;
}




/* from: libgsclient:GSProxyLib.cpp
   addr: 005A1390 */

void __thiscall CGSProxyLib::~CGSProxyLib(CGSProxyLib *this)

{
  CProxyConnection *this_00;
  clRcvElement *this_01;
  int iVar1;
  
  this_00 = *(CProxyConnection **)(this + 8);
  if (this_00 != (CProxyConnection *)0x0) {
    CProxyConnection::~CProxyConnection(this_00);
    operator_delete(this_00);
    *(undefined4 *)(this + 8) = 0;
  }
  this_01 = *(clRcvElement **)(this + 0x14);
  if (this_01 != (clRcvElement *)0x0) {
    clRcvElement::~clRcvElement(this_01);
    ExtAlloc_Free_4(this_01);
    *(undefined4 *)(this + 0x14) = 0;
  }
  if (this[0x1c] == (CGSProxyLib)0x0) {
    iVar1 = *(int *)(this + 0x18);
    if (iVar1 != 0) {
      (*(code *)**(undefined4 **)(*(int *)(*(int *)(iVar1 + 4) + 8) + 4 + iVar1))(1);
    }
    *(undefined4 *)(this + 0x18) = 0;
  }
  return;
}




/* from: libgsclient:GSProxyLib.cpp
   addr: 005A1400 */

void __thiscall CGSProxyLib::GetNewCurMessage(CGSProxyLib *this,int param_1)

{
  clRcvElement *this_00;
  CCurMessage *pCVar1;
  
  this_00 = *(clRcvElement **)(this + 0x14);
  if (this_00 != (clRcvElement *)0x0) {
    clRcvElement::~clRcvElement(this_00);
    ExtAlloc_Free_4(this_00);
    *(undefined4 *)(this + 0x14) = 0;
  }
  pCVar1 = CMsgQueue::GetMessageA(*(CMsgQueue **)(this + 0x10),(ushort)param_1);
  *(CCurMessage **)(this + 0x14) = pCVar1;
  return;
}




/* from: libgsclient:GSProxyLib.cpp
   addr: 005A1440 */

uchar __thiscall
CGSProxyLib::DecodeRcv_Result(CGSProxyLib *this,ushort param_1,uchar *param_2,int *param_3)

{
  int iVar1;
  uchar uVar2;
  undefined2 extraout_var;
  ushort local_42;
  undefined4 local_40;
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
  puStack_8 = &LAB_005c9430;
  local_c = ExceptionList;
  local_40 = 0;
  local_38 = &clDataList::_vbtable__for__clData__;
  local_28 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
  ExceptionList = &local_c;
  clData::clData((clData *)&local_3c,3);
  local_4 = 0;
  clPointerList<class_clData*>::clPointerList<class_clData*>
            ((clPointerList<class_clData*> *)local_30);
  local_3c = &clDataList::_vftable__for__clData__;
  local_30[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  iVar1 = *(int *)(this + 0x14);
  local_4 = 1;
  if ((iVar1 != 0) &&
     (local_40 = CONCAT22(extraout_var,(ushort)*(byte *)(iVar1 + 4)), *(byte *)(iVar1 + 4) == 0xcc))
  {
    uVar2 = clDataList::GetIndex(*(clDataList **)(iVar1 + 8),(ushort *)&local_40,0);
    if (uVar2 != '\0') {
      uVar2 = clDataList::GetIndex
                        (*(clDataList **)(*(int *)(this + 0x14) + 8),(clDataList *)&local_3c,1);
      if (uVar2 != '\0') {
        if (((short)local_40 == 0x26) || ((short)local_40 == 0x27)) {
          *param_2 = (uchar)local_40;
          uVar2 = clDataList::GetIndex((clDataList *)&local_3c,&local_42,0);
          if (uVar2 != '\0') {
            if (local_42 != param_1) {
              local_3c = &clDataList::_vftable__for__clData__;
              local_30[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
              local_4 = 2;
              clPointerList<class_clData*>::~clPointerList<class_clData*>
                        ((clPointerList<class_clData*> *)local_30);
              ExceptionList = local_c;
              return '\0';
            }
            if (*param_2 != '\'') {
LAB_005a162f:
              local_4 = 0xffffffff;
              clDataList::~clDataList((clDataList *)&local_3c);
              ExceptionList = local_c;
              return '\x01';
            }
            local_20 = &clDataList::_vbtable__for__clData__;
            local_10 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
            clData::clData((clData *)&local_24,3);
            local_4._0_1_ = 3;
            clPointerList<class_clData*>::clPointerList<class_clData*>
                      ((clPointerList<class_clData*> *)local_18);
            local_18[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
            local_24 = &clDataList::_vftable__for__clData__;
            local_4._0_1_ = 4;
            uVar2 = clDataList::GetIndex((clDataList *)&local_3c,(clDataList *)&local_24,1);
            if (uVar2 != '\0') {
              uVar2 = clDataList::GetIndex((clDataList *)&local_24,param_3,0);
              if (uVar2 != '\0') {
                local_24 = &clDataList::_vftable__for__clData__;
                local_18[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
                local_4 = CONCAT31(local_4._1_3_,5);
                clPointerList<class_clData*>::~clPointerList<class_clData*>
                          ((clPointerList<class_clData*> *)local_18);
                local_24 = &clData::_vftable_;
                goto LAB_005a162f;
              }
            }
            local_4 = CONCAT31(local_4._1_3_,1);
            clDataList::~clDataList((clDataList *)&local_24);
          }
        }
      }
    }
  }
  local_4 = 0xffffffff;
  clDataList::~clDataList((clDataList *)&local_3c);
  ExceptionList = local_c;
  return '\0';
}




/* from: libgsclient:GSProxyLib.cpp
   addr: 005A1670 */

uchar __thiscall
CGSProxyLib::ProxyRcv_ProxyServerRequest(CGSProxyLib *this,uchar *param_1,int *param_2)

{
  uint uVar1;
  uchar uVar2;
  undefined4 local_124;
  undefined4 local_120;
  undefined **local_11c;
  undefined4 *local_118;
  undefined **local_110 [2];
  undefined8 *local_108;
  undefined **local_104;
  undefined4 *local_100;
  undefined **local_f8 [2];
  undefined8 *local_f0;
  undefined **local_ec;
  undefined4 *local_e8;
  undefined **local_e0 [2];
  undefined8 *local_d8;
  undefined **local_d4;
  undefined4 *local_d0;
  undefined **local_c8 [2];
  undefined8 *local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  char local_b4 [36];
  char local_90 [132];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c9498;
  local_c = ExceptionList;
  local_b8 = 0;
  local_d0 = &clDataList::_vbtable__for__clData__;
  local_c0 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
  ExceptionList = &local_c;
  clData::clData((clData *)&local_d4,3);
  local_4 = 0;
  clPointerList<class_clData*>::clPointerList<class_clData*>
            ((clPointerList<class_clData*> *)local_c8);
  local_d4 = &clDataList::_vftable__for__clData__;
  local_c8[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_4 = 1;
  local_118 = &clDataList::_vbtable__for__clData__;
  local_108 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
  clData::clData((clData *)&local_11c,3);
  local_4._0_1_ = 2;
  clPointerList<class_clData*>::clPointerList<class_clData*>
            ((clPointerList<class_clData*> *)local_110);
  local_11c = &clDataList::_vftable__for__clData__;
  local_110[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_4._0_1_ = 3;
  local_e8 = &clDataList::_vbtable__for__clData__;
  local_d8 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
  clData::clData((clData *)&local_ec,3);
  local_4._0_1_ = 4;
  clPointerList<class_clData*>::clPointerList<class_clData*>
            ((clPointerList<class_clData*> *)local_e0);
  local_ec = &clDataList::_vftable__for__clData__;
  local_e0[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_4._0_1_ = 5;
  local_100 = &clDataList::_vbtable__for__clData__;
  local_f0 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
  clData::clData((clData *)&local_104,3);
  local_4._0_1_ = 6;
  clPointerList<class_clData*>::clPointerList<class_clData*>
            ((clPointerList<class_clData*> *)local_f8);
  local_104 = &clDataList::_vftable__for__clData__;
  local_f8[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_4._0_1_ = 7;
  GetNewCurMessage(this,1);
  uVar2 = DecodeRcv_Result(this,1,param_1,param_2);
  if ((uVar2 == '\0') ||
     (uVar2 = clDataList::GetIndex
                        (*(clDataList **)(*(int *)(this + 0x14) + 8),(clDataList *)&local_d4,1),
     uVar2 == '\0')) {
LAB_005a17bf:
    local_4._0_1_ = 5;
    clDataList::~clDataList((clDataList *)&local_104);
    local_4._0_1_ = 3;
    clDataList::~clDataList((clDataList *)&local_ec);
    local_4 = CONCAT31(local_4._1_3_,1);
    clDataList::~clDataList((clDataList *)&local_11c);
    local_4 = 0xffffffff;
    clDataList::~clDataList((clDataList *)&local_d4);
    ExceptionList = local_c;
    return '\0';
  }
  uVar2 = clDataList::GetIndex((clDataList *)&local_d4,(clDataList *)&local_11c,1);
  if (uVar2 == '\0') goto LAB_005a17bf;
  if (*param_1 == '\'') {
    uVar2 = clDataList::GetIndex((clDataList *)&local_11c,local_b4,1);
    if (uVar2 == '\0') goto LAB_005a17bf;
    uVar2 = clDataList::GetIndex((clDataList *)&local_11c,(ushort *)&local_120,2);
    if (uVar2 == '\0') {
      local_4._0_1_ = 5;
      clDataList::~clDataList((clDataList *)&local_104);
      local_4 = CONCAT31(local_4._1_3_,3);
      clDataList::~clDataList((clDataList *)&local_ec);
      goto LAB_005a18e4;
    }
    uVar2 = clDataList::GetIndex((clDataList *)&local_11c,(ushort *)&local_124,3);
    if (uVar2 != '\0') {
      CProxyConnection::NoProxySrvAvailable
                (*(CProxyConnection **)(this + 8),local_b4,(ushort)local_120,(ushort)local_124);
    }
  }
  else {
    uVar2 = clDataList::GetIndex((clDataList *)&local_11c,local_b4,0);
    if ((((uVar2 != '\0') &&
         (uVar2 = clDataList::GetIndex((clDataList *)&local_11c,(ushort *)&local_120,1),
         uVar2 != '\0')) &&
        (uVar2 = clDataList::GetIndex((clDataList *)&local_11c,(ushort *)&local_124,2),
        uVar2 != '\0')) &&
       (uVar2 = clDataList::GetIndex((clDataList *)&local_11c,(clDataList *)&local_ec,3),
       uVar2 != '\0')) {
      uVar2 = clDataList::GetIndex((clDataList *)&local_ec,(clDataList *)&local_104,0);
      uVar1 = 1;
      while( true ) {
        if (uVar2 == '\0') {
          uVar2 = CProxyConnection::StartConnect
                            (*(CProxyConnection **)(this + 8),local_b4,(ushort)local_120,
                             (ushort)local_124);
          local_4._0_1_ = 5;
          clDataList::_vbase_destructor_((clDataList *)&local_104);
          local_4._0_1_ = 3;
          clDataList::_vbase_destructor_((clDataList *)&local_ec);
          local_4 = CONCAT31(local_4._1_3_,1);
          clDataList::_vbase_destructor_((clDataList *)&local_11c);
          local_4 = 0xffffffff;
          clDataList::_vbase_destructor_((clDataList *)&local_d4);
          ExceptionList = local_c;
          return uVar2;
        }
        uVar2 = clDataList::GetIndex((clDataList *)&local_104,(ushort *)&local_bc,0);
        if (uVar2 == '\0') break;
        uVar2 = clDataList::GetIndex((clDataList *)&local_104,local_90,1);
        if ((uVar2 == '\0') ||
           (uVar2 = clDataList::GetIndex((clDataList *)&local_104,(ushort *)&local_b8,2),
           uVar2 == '\0')) break;
        CProxyConnection::AddProxyToList
                  (*(CProxyConnection **)(this + 8),(ushort)local_bc,local_90,(ushort)local_b8);
        CProxyConnection::AddProxyModule
                  (*(CProxyConnection **)(this + 8),(ushort)local_bc,local_b4,0,(ushort)local_120,
                   (ushort)local_124);
        uVar2 = clDataList::GetIndex((clDataList *)&local_ec,(clDataList *)&local_104,uVar1);
        uVar1 = uVar1 + 1;
      }
    }
  }
  local_4._0_1_ = 5;
  clDataList::_vbase_destructor_((clDataList *)&local_104);
  local_4 = CONCAT31(local_4._1_3_,3);
  clDataList::_vbase_destructor_((clDataList *)&local_ec);
LAB_005a18e4:
  local_4 = CONCAT31(local_4._1_3_,1);
  clDataList::_vbase_destructor_((clDataList *)&local_11c);
  local_4 = 0xffffffff;
  clDataList::_vbase_destructor_((clDataList *)&local_d4);
  ExceptionList = local_c;
  return '\0';
}




/* from: libgsclient:GSProxyLib.cpp
   addr: 005A1AB0 */

uchar __thiscall
CGSProxyLib::ProxyRcv_ProxyConnectAttempt(CGSProxyLib *this,uchar *param_1,int *param_2)

{
  uchar uVar1;
  ushort local_70 [2];
  undefined **local_6c;
  undefined4 *local_68;
  undefined **local_60 [2];
  undefined8 *local_58;
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
  puStack_8 = &LAB_005c94f0;
  local_c = ExceptionList;
  local_70[0] = 0;
  local_70[1] = 0;
  local_50 = &clDataList::_vbtable__for__clData__;
  local_40 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
  ExceptionList = &local_c;
  clData::clData((clData *)&local_54,3);
  local_4 = 0;
  clPointerList<class_clData*>::clPointerList<class_clData*>
            ((clPointerList<class_clData*> *)local_48);
  local_54 = &clDataList::_vftable__for__clData__;
  local_48[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_4 = 1;
  local_68 = &clDataList::_vbtable__for__clData__;
  local_58 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
  clData::clData((clData *)&local_6c,3);
  local_4._0_1_ = 2;
  clPointerList<class_clData*>::clPointerList<class_clData*>
            ((clPointerList<class_clData*> *)local_60);
  local_6c = &clDataList::_vftable__for__clData__;
  local_60[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_4._0_1_ = 3;
  local_20 = &clDataList::_vbtable__for__clData__;
  local_10 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
  clData::clData((clData *)&local_24,3);
  local_4._0_1_ = 4;
  clPointerList<class_clData*>::clPointerList<class_clData*>
            ((clPointerList<class_clData*> *)local_18);
  local_24 = &clDataList::_vftable__for__clData__;
  local_18[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_4._0_1_ = 5;
  local_38 = &clDataList::_vbtable__for__clData__;
  local_28 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
  clData::clData((clData *)&local_3c,3);
  local_4._0_1_ = 6;
  clPointerList<class_clData*>::clPointerList<class_clData*>
            ((clPointerList<class_clData*> *)local_30);
  local_3c = &clDataList::_vftable__for__clData__;
  local_30[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_4._0_1_ = 7;
  GetNewCurMessage(this,2);
  uVar1 = DecodeRcv_Result(this,2,param_1,param_2);
  if ((uVar1 != '\0') &&
     (uVar1 = clDataList::GetIndex
                        (*(clDataList **)(*(int *)(this + 0x14) + 8),(clDataList *)&local_54,1),
     uVar1 != '\0')) {
    uVar1 = clDataList::GetIndex((clDataList *)&local_54,(clDataList *)&local_6c,1);
    if (uVar1 == '\0') {
      local_4._0_1_ = 5;
      clDataList::~clDataList((clDataList *)&local_3c);
      local_4 = CONCAT31(local_4._1_3_,3);
      clDataList::~clDataList((clDataList *)&local_24);
    }
    else {
      if (*param_1 == '\'') {
        uVar1 = clDataList::GetIndex((clDataList *)&local_6c,local_70,1);
        if (uVar1 != '\0') {
          CProxyConnection::ConnectFailed(*(CProxyConnection **)(this + 8),local_70[0],*param_2);
        }
      }
      else {
        uVar1 = clDataList::GetIndex((clDataList *)&local_6c,local_70,0);
        if (uVar1 != '\0') {
          uVar1 = CProxyConnection::FinishConnect(*(CProxyConnection **)(this + 8),local_70[0]);
          local_4._0_1_ = 5;
          clDataList::_vbase_destructor_((clDataList *)&local_3c);
          local_4._0_1_ = 3;
          clDataList::_vbase_destructor_((clDataList *)&local_24);
          local_4 = CONCAT31(local_4._1_3_,1);
          clDataList::_vbase_destructor_((clDataList *)&local_6c);
          local_4 = 0xffffffff;
          clDataList::_vbase_destructor_((clDataList *)&local_54);
          ExceptionList = local_c;
          return uVar1;
        }
      }
      local_4._0_1_ = 5;
      clDataList::_vbase_destructor_((clDataList *)&local_3c);
      local_4 = CONCAT31(local_4._1_3_,3);
      clDataList::_vbase_destructor_((clDataList *)&local_24);
    }
    local_4 = CONCAT31(local_4._1_3_,1);
    clDataList::_vbase_destructor_((clDataList *)&local_6c);
    local_4 = 0xffffffff;
    clDataList::_vbase_destructor_((clDataList *)&local_54);
    ExceptionList = local_c;
    return '\0';
  }
  local_4._0_1_ = 5;
  clDataList::~clDataList((clDataList *)&local_3c);
  local_4._0_1_ = 3;
  clDataList::~clDataList((clDataList *)&local_24);
  local_4 = CONCAT31(local_4._1_3_,1);
  clDataList::~clDataList((clDataList *)&local_6c);
  local_4 = 0xffffffff;
  clDataList::~clDataList((clDataList *)&local_54);
  ExceptionList = local_c;
  return '\0';
}

