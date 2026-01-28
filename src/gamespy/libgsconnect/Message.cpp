
/* from: libgsconnect:Message.cpp
   addr: 0059A7E0 */

int clMessage::GetMessageSize(uchar *param_1)

{
  u_long uVar1;
  undefined4 local_4;
  
  local_4 = (uint)*(uint3 *)param_1 << 8;
                    /* WARNING: Could not recover jumptable at 0x0059a807. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = ntohl(local_4);
  return uVar1;
}




/* from: libgsconnect:Message.cpp
   addr: 0059A870 */

void clMessage::PutMessageSize(uchar *param_1,int param_2)

{
  u_long uVar1;
  
  uVar1 = htonl(param_2);
  param_2._1_2_ = (undefined2)(uVar1 >> 8);
  param_2._3_1_ = (uchar)(uVar1 >> 0x18);
  *(undefined2 *)param_1 = param_2._1_2_;
  param_1[2] = param_2._3_1_;
  return;
}




/* from: libgsconnect:Message.cpp
   addr: 0059A8A0 */

void clMessage::PutMessageProperty(uchar *param_1,uchar param_2)

{
  param_1[3] = param_1[3] & 0x1f | param_2 << 6;
  return;
}




/* from: libgsconnect:Message.cpp
   addr: 0059A8C0 */

void clMessage::PutMessagePriority(uchar *param_1,uchar param_2)

{
  param_1[3] = param_1[3] | param_2 & 0x20;
  return;
}




/* from: libgsconnect:Message.cpp
   addr: 0059A8F0 */

void clMessage::PutGSMessageSender(uchar *param_1,uchar param_2)

{
  param_1[5] = param_2 << 4 | param_1[5] & 0xf;
  return;
}




/* from: libgsconnect:Message.cpp
   addr: 0059A910 */

void clMessage::PutGSMessageReceiver(uchar *param_1,uchar param_2)

{
  param_1[5] = param_1[5] ^ (param_1[5] ^ param_2) & 0xf;
  return;
}




/* from: libgsconnect:Message.cpp
   addr: 0059A930 */

void clMessage::PutGameMessageSender(uchar *param_1,short param_2)

{
  *(short *)(param_1 + 5) = param_2;
  return;
}




/* from: libgsconnect:Message.cpp
   addr: 0059A940 */

uchar clMessage::CheckForm(uchar *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 < 6) {
    return '\0';
  }
  iVar1 = GetMessageSize(param_1);
  if (3000000 < iVar1) {
    printf(s_On_a_lSize>MAXMESSAGESIZE_);
    return '\0';
  }
  if (iVar1 < 6) {
    printf(s_On_a_lSize<GSHEADERSIZE_);
    return '\0';
  }
  return '\x01';
}




/* from: libgsconnect:Message.cpp
   addr: 0059A990 */

clGSMessage * __thiscall
clGSMessage::clGSMessage
          (clGSMessage *this,clAlgoEncrypt *param_1,uchar param_2,uchar param_3,uchar param_4,
          uchar param_5,clDataList *param_6)

{
  clDataList *this_00;
  undefined4 uVar1;
  int iVar2;
  int in_stack_0000001c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c8c7c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (in_stack_0000001c != 0) {
    ExceptionList = &local_c;
    *(undefined1 **)(this + 4) = &_vbtable_;
  }
  *(clAlgoEncrypt **)(this + 8) = param_1;
  this[0xd] = (clGSMessage)param_2;
  local_4 = 1;
  *(undefined ***)this = &_vftable_;
  this[0xc] = (clGSMessage)0x0;
  this[0xe] = (clGSMessage)param_3;
  this[0x10] = (clGSMessage)param_4;
  this[0x11] = (clGSMessage)param_5;
  this_00 = (clDataList *)ExtAlloc_Malloc_4(0x18);
  if (param_6 == (clDataList *)0x0) {
    if (this_00 == (clDataList *)0x0) {
      this_00 = (clDataList *)0x0;
    }
    else {
      *(undefined4 **)(this_00 + 4) = &clDataList::_vbtable__for__clData__;
      *(undefined8 **)(this_00 + 0x14) = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
      *(undefined4 *)(this_00 + 8) = 3;
      *(undefined ***)this_00 = &clData::_vftable_;
      *(undefined4 *)(this_00 + 0x10) = 0;
      iVar2 = ExtAlloc_Malloc_4(0xc);
      *(int *)iVar2 = iVar2;
      *(int *)(iVar2 + 4) = iVar2;
      *(int *)(this_00 + 0x10) = iVar2;
      *(undefined ***)(this_00 + 0xc) = &clPointerList<class_clData*>::_vftable_;
      *(undefined ***)this_00 = &clDataList::_vftable__for__clData__;
      *(undefined ***)(this_00 + 0xc) = &clDataList::_vftable__for__clPointerList<class_clData*>__;
    }
    *(clDataList **)(this + 0x14) = this_00;
  }
  else {
    local_4 = CONCAT31(local_4._1_3_,2);
    if (this_00 == (clDataList *)0x0) {
      *(undefined4 *)(this + 0x14) = 0;
    }
    else {
      uVar1 = clDataList::clDataList(this_00,param_6);
      *(undefined4 *)(this + 0x14) = uVar1;
    }
  }
  ExceptionList = local_c;
  return this;
}




/* from: libgsconnect:Message.cpp
   addr: 0059AAA0
   addr: 0059AAA0 */

void * __thiscall clGSMessage::_vector_deleting_destructor_(clGSMessage *this,uint param_1)

{
  ~clGSMessage(this);
  if ((param_1 & 1) != 0) {
    ExtAlloc_Free_4(this);
  }
  return this;
}




/* from: libgsconnect:Message.cpp
   addr: 0059AAC0 */

void __thiscall clGSMessage::clGSMessage(clGSMessage *this,clAlgoEncrypt *param_1)

{
  int in_stack_00000008;
  
  if (in_stack_00000008 != 0) {
    *(undefined1 **)(this + 4) = &_vbtable_;
  }
  *(undefined ***)this = &_vftable_;
  *(clAlgoEncrypt **)(this + 8) = param_1;
  this[0xc] = (clGSMessage)0x0;
  this[0x10] = (clGSMessage)0x0;
  this[0x11] = (clGSMessage)0x0;
  *(undefined4 *)(this + 0x14) = 0;
  return;
}




/* from: libgsconnect:Message.cpp
   addr: 0059AB00 */

void __thiscall clGSMessage::~clGSMessage(clGSMessage *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c8c98;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = &_vftable_;
  local_4 = 0;
  if (*(undefined4 **)(this + 0x14) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x14))(1);
  }
  *(undefined ***)this = &clMessage::_vftable_;
  ExceptionList = local_c;
  return;
}




/* from: libgsconnect:Message.cpp
   addr: 0059AB50 */

uchar * __thiscall clGSMessage::ConvertToBinary(clGSMessage *this,int *param_1)

{
  uchar *puVar1;
  void *_Dst;
  uchar *puVar2;
  uchar *puVar3;
  uint uVar4;
  undefined4 unaff_ESI;
  uchar *puVar5;
  undefined4 unaff_EDI;
  int iVar6;
  uchar *puVar7;
  uint local_3c;
  void *local_38;
  clDataSerialize local_34 [8];
  undefined **local_2c;
  undefined4 *local_28;
  undefined4 local_24;
  void *local_20;
  void *local_1c;
  undefined8 *local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c8cef;
  local_c = ExceptionList;
  local_28 = &clDataBin::_vbtable__for__clData__;
  local_14 = &clDataBin::_vbtable__for__ExtAlloc__vector<char>__;
  local_38 = (void *)0x1;
  local_2c = &clData::_vftable_;
  local_24 = 2;
  local_4 = 1;
  ExceptionList = &local_c;
  ExtAlloc::vector<char>::vector<char>((vector<char> *)&local_20);
  local_2c = &clDataBin::_vftable_;
  local_4 = 2;
  clDataSerialize::clDataSerialize(local_34);
  local_4._0_1_ = 3;
  clDataSerialize::CreateBinFromList(local_34,*(clDataList **)(this + 0x14),(clDataBin *)&local_2c);
  iVar6 = (int)local_1c - (int)local_20;
  puVar1 = (uchar *)ExtAlloc_Malloc_4(6);
  puVar1[0] = '\0';
  puVar1[1] = '\0';
  puVar1[2] = '\0';
  puVar1[3] = '\0';
  puVar1[4] = '\0';
  puVar1[5] = '\0';
  if (iVar6 == 0) {
    clMessage::PutMessageSize(puVar1,6);
    clMessage::PutMessageProperty(puVar1,(uchar)this[0xc]);
    clMessage::PutMessagePriority(puVar1,(uchar)this[0xe]);
    clMessage::PutMessageType(puVar1,(uchar)this[0xd]);
    clMessage::PutGSMessageSender(puVar1,(uchar)this[0x10]);
    clMessage::PutGSMessageReceiver(puVar1,(uchar)this[0x11]);
    local_4 = CONCAT31(local_4._1_3_,2);
    *param_1 = 6;
    clDataSerialize::~clDataSerialize(local_34);
    local_2c = &clDataBin::_vftable_;
    local_4 = 4;
    _STL::
    _Vector_base<void*,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
    ::
    ~_Vector_base<void*,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
              ((_Vector_base<void*,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
                *)&local_20);
    puVar3 = puVar1;
  }
  else {
    _Dst = (void *)ExtAlloc_Malloc_4(iVar6);
    local_38 = _Dst;
    if (local_1c != local_20) {
      memmove(_Dst,local_20,(int)local_1c - (int)local_20);
    }
    (**(code **)(*(int *)this + 0x14))(_Dst,iVar6,0,&local_3c);
    puVar2 = (uchar *)ExtAlloc_Malloc_4(unaff_EDI);
    (**(code **)(*(int *)this + 0x14))(unaff_ESI,iVar6,puVar2,&stack0xffffffb4);
    *param_1 = local_3c + 6;
    clMessage::PutMessageSize(puVar1,local_3c + 6);
    clMessage::PutMessageProperty(puVar1,(uchar)this[0xc]);
    clMessage::PutMessagePriority(puVar1,(uchar)this[0xe]);
    clMessage::PutMessageType(puVar1,(uchar)this[0xd]);
    clMessage::PutGSMessageSender(puVar1,(uchar)this[0x10]);
    clMessage::PutGSMessageReceiver(puVar1,(uchar)this[0x11]);
    puVar3 = (uchar *)ExtAlloc_Malloc_4(*param_1);
    *(undefined4 *)puVar3 = *(undefined4 *)puVar1;
    *(undefined2 *)(puVar3 + 4) = *(undefined2 *)(puVar1 + 4);
    puVar5 = puVar2;
    puVar7 = puVar3 + 6;
    for (uVar4 = local_3c >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)puVar7 = *(undefined4 *)puVar5;
      puVar5 = puVar5 + 4;
      puVar7 = puVar7 + 4;
    }
    for (local_3c = local_3c & 3; local_3c != 0; local_3c = local_3c - 1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar7 = puVar7 + 1;
    }
    ExtAlloc_Free_4(puVar1);
    ExtAlloc_Free_4(puVar2);
    ExtAlloc_Free_4(local_38);
    local_4 = CONCAT31(local_4._1_3_,2);
    clDataSerialize::~clDataSerialize(local_34);
    local_2c = &clDataBin::_vftable_;
    local_4 = 5;
    _STL::
    _Vector_base<void*,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
    ::
    ~_Vector_base<void*,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
              ((_Vector_base<void*,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
                *)&local_20);
  }
  ExceptionList = local_c;
  return puVar3;
}




/* from: libgsconnect:Message.cpp
   addr: 0059AD90 */

void __thiscall
clGSMessage::EncryptBuffer
          (clGSMessage *this,uchar *param_1,uint param_2,uchar *param_3,uint *param_4)

{
  clAlgoEncrypt::SessionEncrypt(*(clAlgoEncrypt **)(this + 8),param_1,param_2,param_3,param_4,1);
  return;
}




/* from: libgsconnect:Message.cpp
   addr: 0059ADC0 */

void __thiscall
clGSMessage::DecryptBuffer
          (clGSMessage *this,uchar *param_1,uint param_2,uchar *param_3,uint *param_4)

{
  clAlgoEncrypt::SessionDecrypt(*(clAlgoEncrypt **)(this + 8),param_1,param_2,param_3,param_4,1);
  return;
}




/* from: libgsconnect:Message.cpp
   addr: 0059ADF0 */

uchar __thiscall clGSMessage::InstanceMessage(clGSMessage *this,uchar *param_1,uint param_2)

{
  clGSMessage cVar1;
  uchar uVar2;
  clData *pcVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  uint unaff_EDI;
  char *pcVar7;
  uint local_5c [2];
  clData *local_54;
  clDataSerialize local_50 [8];
  undefined **local_48;
  undefined4 *local_44;
  undefined **local_3c [2];
  undefined8 *local_34;
  undefined **local_2c;
  undefined4 *local_28;
  vector<char> local_20 [12];
  undefined8 *local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c8d82;
  local_c = ExceptionList;
  local_28 = &clDataBin::_vbtable__for__clData__;
  local_14 = &clDataBin::_vbtable__for__ExtAlloc__vector<char>__;
  local_5c[1] = 1;
  local_4 = 0;
  ExceptionList = &local_c;
  clData::clData((clData *)&local_2c,2);
  local_4 = 1;
  ExtAlloc::vector<char>::vector<char>(local_20);
  local_2c = &clDataBin::_vftable_;
  local_4 = 2;
  clDataSerialize::clDataSerialize(local_50);
  local_44 = &clDataList::_vbtable__for__clData__;
  local_34 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
  local_5c[1] = 3;
  local_4 = CONCAT31(local_4._1_3_,4);
  clData::clData((clData *)&local_48,3);
  local_4 = 5;
  clPointerList<class_clData*>::clPointerList<class_clData*>
            ((clPointerList<class_clData*> *)local_3c);
  local_48 = &clDataList::_vftable__for__clData__;
  local_3c[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  pcVar3 = (clData *)ExtAlloc_Malloc_4(0x18);
  local_54 = pcVar3;
  if (pcVar3 == (clData *)0x0) {
    pcVar3 = (clData *)0x0;
  }
  else {
    *(undefined4 **)(pcVar3 + 4) = &clDataList::_vbtable__for__clData__;
    *(undefined8 **)(pcVar3 + 0x14) = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
    local_5c[1] = 7;
    local_4 = CONCAT31(local_4._1_3_,8);
    clData::clData(pcVar3,3);
    local_4 = 9;
    clPointerList<class_clData*>::clPointerList<class_clData*>
              ((clPointerList<class_clData*> *)(pcVar3 + 0xc));
    *(undefined ***)pcVar3 = &clDataList::_vftable__for__clData__;
    *(undefined ***)(pcVar3 + 0xc) = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  }
  local_4._0_1_ = 6;
  *(clData **)(this + 0x14) = pcVar3;
  if ((param_2 < 6) || (uVar4 = clMessage::GetMessageSize(param_1), uVar4 != param_2)) {
LAB_0059b006:
    local_4._0_1_ = 3;
    clDataList::~clDataList((clDataList *)&local_48);
    local_4 = CONCAT31(local_4._1_3_,2);
    clDataSerialize::~clDataSerialize(local_50);
    local_4 = 0xffffffff;
    clDataBin::~clDataBin((clDataBin *)&local_2c);
    ExceptionList = local_c;
    return '\0';
  }
  cVar1 = (clGSMessage)clMessage::GetMessagePriority(param_1);
  this[0xe] = cVar1;
  cVar1 = (clGSMessage)clMessage::GetMessageType(param_1);
  this[0xd] = cVar1;
  cVar1 = (clGSMessage)clMessage::GetGSMessageSender(param_1);
  this[0x10] = cVar1;
  cVar1 = (clGSMessage)clMessage::GetGSMessageReceiver(param_1);
  iVar6 = param_2 - 6;
  this[0x11] = cVar1;
  if (iVar6 == 0) {
    local_4._0_1_ = 3;
    clDataList::~clDataList((clDataList *)&local_48);
    local_4 = CONCAT31(local_4._1_3_,2);
    clDataSerialize::~clDataSerialize(local_50);
    local_4 = 0xffffffff;
    clDataBin::~clDataBin((clDataBin *)&local_2c);
  }
  else {
    (**(code **)(*(int *)this + 0x18))(param_1 + 6,iVar6,0,local_5c);
    pcVar5 = (char *)ExtAlloc_Malloc_4(unaff_EDI);
    pcVar7 = pcVar5;
    for (uVar4 = unaff_EDI >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      pcVar7[0] = '\0';
      pcVar7[1] = '\0';
      pcVar7[2] = '\0';
      pcVar7[3] = '\0';
      pcVar7 = pcVar7 + 4;
    }
    for (uVar4 = unaff_EDI & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar7 = '\0';
      pcVar7 = pcVar7 + 1;
    }
    (**(code **)(*(int *)this + 0x18))(puStack_8,iVar6,pcVar5,&stack0xffffff94);
    clDataBin::Copy((clDataBin *)&local_2c,pcVar5,local_5c[0]);
    uVar2 = clDataSerialize::CreateListFromBin
                      (local_50,(clDataBin *)&local_2c,*(clDataList **)(this + 0x14));
    if (uVar2 == '\0') {
      ExtAlloc_Free_4(pcVar5);
      goto LAB_0059b006;
    }
    ExtAlloc_Free_4(pcVar5);
    local_4._0_1_ = 3;
    clDataList::~clDataList((clDataList *)&local_48);
    local_4 = CONCAT31(local_4._1_3_,2);
    clDataSerialize::_vbase_destructor_(local_50);
    local_4 = 0xffffffff;
    clDataBin::_vbase_destructor_((clDataBin *)&local_2c);
  }
  ExceptionList = local_c;
  return '\x01';
}




/* from: libgsconnect:Message.cpp
   addr: 0059B080 */

void __thiscall
clGSMessage::DebugLobbySrvMessageType(clGSMessage *this,ushort param_1,char *param_2)

{
  sprintf(param_2,s__d,param_1);
  return;
}




/* from: libgsconnect:Message.cpp
   addr: 0059B0A0 */

void __thiscall clGSMessage::DebugMessageType(clGSMessage *this,uchar param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  
  switch((uint)param_1) {
  case 1:
    pcVar2 = s_NEWUSERREQUEST;
    do {
      cVar1 = *pcVar2;
      pcVar2[(int)(param_2 + -0x5ff538)] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 2:
    pcVar2 = s_CONNECTIONREQUEST;
    do {
      cVar1 = *pcVar2;
      pcVar2[(int)(param_2 + -0x5ff524)] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 3:
    pcVar2 = s_PLAYERNEW;
    do {
      cVar1 = *pcVar2;
      pcVar2[(int)(param_2 + -0x5ff518)] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 4:
    pcVar2 = s_DISCONNECTION;
    do {
      cVar1 = *pcVar2;
      pcVar2[(int)(param_2 + -0x5ff508)] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 5:
    pcVar2 = s_PLAYERREMOVED;
    do {
      cVar1 = *pcVar2;
      pcVar2[(int)(param_2 + -0x5ff4f8)] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  default:
    sprintf(param_2,s__d,(uint)param_1);
    return;
  case 7:
    pcVar2 = &s_NEWS;
    do {
      cVar1 = *pcVar2;
      pcVar2[(int)(param_2 + -0x5ff4f0)] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 8:
    pcVar2 = s_SEARCHPLAYER;
    do {
      cVar1 = *pcVar2;
      pcVar2[(int)(param_2 + -0x5ff4e0)] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 9:
    pcVar2 = s_REMOVEACCOUNT;
    do {
      cVar1 = *pcVar2;
      pcVar2[(int)(param_2 + -0x5ff4d0)] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0xb:
    pcVar2 = s_SERVERSLIST;
    do {
      cVar1 = *pcVar2;
      pcVar2[(int)(param_2 + -0x5ff4c4)] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0xd:
    pcVar2 = s_SESSIONLIST;
    do {
      cVar1 = *pcVar2;
      pcVar2[(int)(param_2 + -0x5ff4a0)] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0xf:
    pcVar2 = s_PLAYERLIST;
    do {
      cVar1 = *pcVar2;
      pcVar2[(int)(param_2 + -0x5ff494)] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x10:
    pcVar2 = s_GETGROUPINFO;
    do {
      cVar1 = *pcVar2;
      pcVar2[(int)(param_2 + -0x5ff3d4)] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x11:
    pcVar2 = s_GROUPINFO;
    do {
      cVar1 = *pcVar2;
      pcVar2[(int)(param_2 + -0x5ff3c8)] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x12:
    pcVar2 = s_GETPLAYERINFO;
    do {
      cVar1 = *pcVar2;
      pcVar2[(int)(param_2 + -0x5ff3b8)] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x13:
    pcVar2 = s_PLAYERINFO;
    do {
      cVar1 = *pcVar2;
      pcVar2[(int)(param_2 + -0x5ff4ac)] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x14:
    pcVar2 = s_CHATALL;
    do {
      cVar1 = *pcVar2;
      pcVar2[(int)(param_2 + -0x5ff474)] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x15:
    pcVar2 = s_CHATLIST;
    do {
      cVar1 = *pcVar2;
      pcVar2[(int)(param_2 + -0x5ff45c)] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x16:
    pcVar2 = s_CHATSESSION;
    do {
      cVar1 = *pcVar2;
      pcVar2[(int)(param_2 + -0x5ff468)] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x18:
    pcVar2 = &s_CHAT;
    do {
      cVar1 = *pcVar2;
      pcVar2[(int)(param_2 + -0x5ff47c)] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x1a:
    pcVar2 = s_CREATESESSION;
    do {
      cVar1 = *pcVar2;
      pcVar2[(int)(param_2 + -0x5ff44c)] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x1b:
    pcVar2 = s_SESSIONNEW;
    do {
      cVar1 = *pcVar2;
      pcVar2[(int)(param_2 + -0x5ff440)] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x1c:
    pcVar2 = s_JOINSESSION;
    do {
      cVar1 = *pcVar2;
      pcVar2[(int)(param_2 + -0x5ff434)] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x1f:
    pcVar2 = s_JOINNEW;
    do {
      cVar1 = *pcVar2;
      pcVar2[(int)(param_2 + -0x5ff42c)] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x20:
    pcVar2 = s_LEAVESESSION;
    do {
      cVar1 = *pcVar2;
      pcVar2[(int)(param_2 + -0x5ff41c)] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x21:
    pcVar2 = s_JOINLEAVE;
    do {
      cVar1 = *pcVar2;
      pcVar2[(int)(param_2 + -0x5ff410)] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x22:
    pcVar2 = s_SESSIONREMOVE;
    do {
      cVar1 = *pcVar2;
      pcVar2[(int)(param_2 + -0x5ff400)] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x26:
    pcVar2 = s_GSSUCCESS;
    do {
      cVar1 = *pcVar2;
      pcVar2[(int)(param_2 + -0x5ff550)] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x27:
    pcVar2 = s_GSFAIL;
    do {
      cVar1 = *pcVar2;
      pcVar2[(int)(param_2 + -0x5ff548)] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x28:
    pcVar2 = s_BEGINGAME;
    do {
      cVar1 = *pcVar2;
      pcVar2[(int)(param_2 + -0x5ff384)] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x2d:
    pcVar2 = s_UPDATEPLAYERINFO;
    do {
      cVar1 = *pcVar2;
      pcVar2[(int)(param_2 + -0x5ff3e4)] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x30:
    pcVar2 = s_MASTERCHANGED;
    do {
      cVar1 = *pcVar2;
      pcVar2[(int)(param_2 + -0x5ff32c)] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x33:
    pcVar2 = s_UPDATESESSIONSTATE;
    do {
      cVar1 = *pcVar2;
      pcVar2[(int)(param_2 + -0x5ff318)] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x34:
    pcVar2 = s_URGENTMESSAGE;
    do {
      cVar1 = *pcVar2;
      (param_2 + -0x5ff1fc)[(int)pcVar2] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x36:
    pcVar2 = s_NEWWAITMODULE;
    do {
      cVar1 = *pcVar2;
      pcVar2[(int)(param_2 + -0x5ff484)] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x37:
    pcVar2 = s_KILLMODULE;
    do {
      cVar1 = *pcVar2;
      pcVar2[(int)(param_2 + -0x5ff55c)] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x3a:
    pcVar2 = s_STILLALIVE;
    do {
      cVar1 = *pcVar2;
      pcVar2[(int)(param_2 + -0x5ff568)] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x3b:
    pcVar2 = &s_PING;
    do {
      cVar1 = *pcVar2;
      pcVar2[(int)(param_2 + -0x5ff3f8)] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x3c:
    pcVar2 = s_PLAYERKICK;
    do {
      cVar1 = *pcVar2;
      pcVar2[(int)(param_2 + -0x5ff2ac)] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x3d:
    pcVar2 = s_PLAYERMUTE;
    do {
      cVar1 = *pcVar2;
      (param_2 + -0x5ff2a0)[(int)pcVar2] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x3e:
    pcVar2 = s_ALLOWGAME;
    do {
      cVar1 = *pcVar2;
      (param_2 + -0x5ff294)[(int)pcVar2] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x3f:
    pcVar2 = s_FORBIDGAME;
    do {
      cVar1 = *pcVar2;
      (param_2 + -0x5ff288)[(int)pcVar2] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x40:
    pcVar2 = s_GAMELIST;
    do {
      cVar1 = *pcVar2;
      (param_2 + -0x5ff27c)[(int)pcVar2] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x41:
    pcVar2 = s_UPDATEADVERTISMEMENTS;
    do {
      cVar1 = *pcVar2;
      (param_2 + -0x5ff264)[(int)pcVar2] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x42:
    pcVar2 = s_UPDATENEWS;
    do {
      cVar1 = *pcVar2;
      (param_2 + -0x5ff258)[(int)pcVar2] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x43:
    pcVar2 = s_VERSIONLIST;
    do {
      cVar1 = *pcVar2;
      (param_2 + -0x5ff24c)[(int)pcVar2] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x44:
    pcVar2 = s_UPDATEVERSIONS;
    do {
      cVar1 = *pcVar2;
      (param_2 + -0x5ff224)[(int)pcVar2] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x46:
    pcVar2 = s_UPDATEDISTANTROUTERS;
    do {
      cVar1 = *pcVar2;
      (param_2 + -0x5ff234)[(int)pcVar2] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x47:
    pcVar2 = s_ADMINLOGIN;
    do {
      cVar1 = *pcVar2;
      (param_2 + -0x5feef8)[(int)pcVar2] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x48:
    pcVar2 = s_STAT_PLAYER;
    do {
      cVar1 = *pcVar2;
      (param_2 + -0x5ff218)[(int)pcVar2] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x49:
    pcVar2 = s_STAT_GAME;
    do {
      cVar1 = *pcVar2;
      (param_2 + -0x5ff20c)[(int)pcVar2] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x4a:
    pcVar2 = s_UPDATEFRIEND;
    do {
      cVar1 = *pcVar2;
      (param_2 + -0x5ff1ec)[(int)pcVar2] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x4b:
    pcVar2 = s_ADDFRIEND;
    do {
      cVar1 = *pcVar2;
      (param_2 + -0x5ff1e0)[(int)pcVar2] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x4c:
    pcVar2 = s_DELFRIEND;
    do {
      cVar1 = *pcVar2;
      (param_2 + -0x5ff1d4)[(int)pcVar2] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x4d:
    pcVar2 = s_LOGINWAITMODULE;
    do {
      cVar1 = *pcVar2;
      (param_2 + -0x5ff1c4)[(int)pcVar2] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x4e:
    pcVar2 = s_LOGINFRIENDS;
    do {
      cVar1 = *pcVar2;
      (param_2 + -0x5ff1b4)[(int)pcVar2] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x4f:
    pcVar2 = s_ADDIGNOREFRIEND;
    do {
      cVar1 = *pcVar2;
      (param_2 + -0x5ff1a4)[(int)pcVar2] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x50:
    pcVar2 = s_DELIGNOREFRIEND;
    do {
      cVar1 = *pcVar2;
      (param_2 + -0x5ff194)[(int)pcVar2] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x51:
    pcVar2 = s_STATUSCHANGE;
    do {
      cVar1 = *pcVar2;
      (param_2 + -0x5ff184)[(int)pcVar2] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x52:
    pcVar2 = s_JOINARENA;
    do {
      cVar1 = *pcVar2;
      pcVar2[(int)(param_2 + -0x5ff178)] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x53:
    pcVar2 = s_LEAVEARENA;
    do {
      cVar1 = *pcVar2;
      pcVar2[(int)(param_2 + -0x5ff16c)] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x54:
    pcVar2 = s_IGNORELIST;
    do {
      cVar1 = *pcVar2;
      pcVar2[(int)(param_2 + -0x5ff160)] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x55:
    pcVar2 = s_IGNOREFRIEND;
    do {
      cVar1 = *pcVar2;
      pcVar2[(int)(param_2 + -0x5ff150)] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x56:
    pcVar2 = s_GETARENA;
    do {
      cVar1 = *pcVar2;
      pcVar2[(int)(param_2 + -0x5ff144)] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x57:
    pcVar2 = s_GETSESSION;
    do {
      cVar1 = *pcVar2;
      pcVar2[(int)(param_2 + -0x5ff138)] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x58:
    pcVar2 = s_PAGEPLAYER;
    break;
  case 0x59:
    pcVar2 = s_FRIENDLIST;
    do {
      cVar1 = *pcVar2;
      pcVar2[(int)(param_2 + -0x5ff120)] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x5a:
    pcVar2 = s_PEERMSG;
    do {
      cVar1 = *pcVar2;
      pcVar2[(int)(param_2 + -0x5ff118)] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x5b:
    pcVar2 = s_PEERPLAYER;
    do {
      cVar1 = *pcVar2;
      pcVar2[(int)(param_2 + -0x5ff10c)] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x5c:
    pcVar2 = s_DISCONNECTFRIENDS;
    do {
      cVar1 = *pcVar2;
      pcVar2[(int)(param_2 + -0x5ff0f8)] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x5d:
    pcVar2 = s_JOINWAITMODULE;
    do {
      cVar1 = *pcVar2;
      pcVar2[(int)(param_2 + -0x5ff0e8)] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x5e:
    pcVar2 = s_LOGINSESSION;
    do {
      cVar1 = *pcVar2;
      pcVar2[(int)(param_2 + -0x5ff0d8)] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x5f:
    pcVar2 = s_DISCONNECTSESSION;
    do {
      cVar1 = *pcVar2;
      pcVar2[(int)(param_2 + -0x5ff0c4)] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x60:
    pcVar2 = s_PLAYERDISCONNECT;
    do {
      cVar1 = *pcVar2;
      pcVar2[(int)(param_2 + -0x5ff040)] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x61:
    pcVar2 = s_ADVERTISEMENT;
    do {
      cVar1 = *pcVar2;
      pcVar2[(int)(param_2 + -0x5ff3a8)] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x62:
    pcVar2 = s_MODIFYUSER;
    do {
      cVar1 = *pcVar2;
      pcVar2[(int)(param_2 + -0x5ff39c)] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 99:
    pcVar2 = s_STARTGAME;
    do {
      cVar1 = *pcVar2;
      pcVar2[(int)(param_2 + -0x5ff390)] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 100:
    pcVar2 = s_CHANGEVERSION;
    do {
      cVar1 = *pcVar2;
      pcVar2[(int)(param_2 + -0x5ff360)] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x65:
    pcVar2 = s_PAGER;
    do {
      cVar1 = *pcVar2;
      pcVar2[(int)(param_2 + -0x5ff358)] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x66:
    pcVar2 = s_LOGIN;
    do {
      cVar1 = *pcVar2;
      pcVar2[(int)(param_2 + -0x5ff350)] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x67:
    pcVar2 = s_PHOTO;
    do {
      cVar1 = *pcVar2;
      pcVar2[(int)(param_2 + -0x5ff348)] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x68:
    pcVar2 = s_LOGINARENA;
    do {
      cVar1 = *pcVar2;
      pcVar2[(int)(param_2 + -0x5ff33c)] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x6a:
    pcVar2 = s_SQLCREATE;
    do {
      cVar1 = *pcVar2;
      pcVar2[(int)(param_2 + -0x5ff2ec)] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x6b:
    pcVar2 = s_SQLSELECT;
    do {
      cVar1 = *pcVar2;
      pcVar2[(int)(param_2 + -0x5ff2d4)] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x6c:
    pcVar2 = s_SQLDELETE;
    do {
      cVar1 = *pcVar2;
      pcVar2[(int)(param_2 + -0x5ff2e0)] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x6d:
    pcVar2 = &s_SQLSET;
    do {
      cVar1 = *pcVar2;
      pcVar2[(int)(param_2 + -0x5ff2cc)] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x6e:
    pcVar2 = s_SQLSTAT;
    do {
      cVar1 = *pcVar2;
      pcVar2[(int)(param_2 + -0x5ff2c4)] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x6f:
    pcVar2 = s_SQLQUERY;
    do {
      cVar1 = *pcVar2;
      pcVar2[(int)(param_2 + -0x5ff2b8)] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x7f:
    pcVar2 = s_ROUTEURLIST;
    do {
      cVar1 = *pcVar2;
      pcVar2[(int)(param_2 + -0x5ff4b8)] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x83:
    pcVar2 = s_DISTANCEVECTOR;
    do {
      cVar1 = *pcVar2;
      pcVar2[(int)(param_2 + -0x5ff064)] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x84:
    pcVar2 = s_WRAPPEDMESSAGE;
    do {
      cVar1 = *pcVar2;
      pcVar2[(int)(param_2 + -0x5ff054)] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x85:
    pcVar2 = s_CHANGEFRIEND;
    do {
      cVar1 = *pcVar2;
      pcVar2[(int)(param_2 + -0x5ff0b4)] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x86:
    pcVar2 = s_NEWRELFRIEND;
    do {
      cVar1 = *pcVar2;
      pcVar2[(int)(param_2 + -0x5ff030)] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x87:
    pcVar2 = s_DELRELFRIEND;
    do {
      cVar1 = *pcVar2;
      pcVar2[(int)(param_2 + -0x5ff020)] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x88:
    pcVar2 = s_NEWIGNOREFRIEND;
    do {
      cVar1 = *pcVar2;
      pcVar2[(int)(param_2 + -0x5ff010)] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x89:
    pcVar2 = s_DELETEIGNOREFRIEND;
    do {
      cVar1 = *pcVar2;
      pcVar2[(int)(param_2 + -0x5feffc)] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x8a:
    pcVar2 = s_ARENACONNECTION;
    do {
      cVar1 = *pcVar2;
      pcVar2[(int)(param_2 + -0x5fefec)] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x8b:
    pcVar2 = s_ARENADISCONNECTION;
    do {
      cVar1 = *pcVar2;
      pcVar2[(int)(param_2 + -0x5fefd8)] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x8c:
    pcVar2 = s_ARENAWAITMODULE;
    do {
      cVar1 = *pcVar2;
      pcVar2[(int)(param_2 + -0x5fefc8)] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x8d:
    pcVar2 = s_ARENANEW;
    do {
      cVar1 = *pcVar2;
      pcVar2[(int)(param_2 + -0x5ff0a8)] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x8f:
    pcVar2 = s_NEWBASICGROUP;
    do {
      cVar1 = *pcVar2;
      pcVar2[(int)(param_2 + -0x5ff098)] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x90:
    pcVar2 = s_ARENAREMOVED;
    do {
      cVar1 = *pcVar2;
      pcVar2[(int)(param_2 + -0x5ff088)] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x91:
    pcVar2 = s_DELETEBASICGROUP;
    do {
      cVar1 = *pcVar2;
      pcVar2[(int)(param_2 + -0x5ff074)] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x92:
    pcVar2 = s_SESSIONSBEGIN;
    do {
      cVar1 = *pcVar2;
      (param_2 + -0x5fefb8)[(int)pcVar2] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x94:
    pcVar2 = s_GROUPDATA;
    do {
      cVar1 = *pcVar2;
      pcVar2[(int)(param_2 + -0x5ff30c)] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x97:
    pcVar2 = s_ARENA_MESSAGE;
    do {
      cVar1 = *pcVar2;
      (param_2 + -0x5fef98)[(int)pcVar2] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x9d:
    pcVar2 = s_ARENALISTREQUEST;
    do {
      cVar1 = *pcVar2;
      (param_2 + -0x5fef70)[(int)pcVar2] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x9e:
    pcVar2 = s_ROUTERPLAYERNEW;
    do {
      cVar1 = *pcVar2;
      (param_2 + -0x5fefa8)[(int)pcVar2] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x9f:
    pcVar2 = s_BASEGROUPREQUEST;
    do {
      cVar1 = *pcVar2;
      (param_2 + -0x5fef5c)[(int)pcVar2] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0xa6:
    pcVar2 = s_UPDATEPLAYERPING;
    do {
      cVar1 = *pcVar2;
      (param_2 + -0x5fef84)[(int)pcVar2] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0xa9:
    pcVar2 = s_UPDATEGROUPSIZE;
    do {
      cVar1 = *pcVar2;
      (param_2 + -0x5fef14)[(int)pcVar2] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0xb3:
    pcVar2 = &s_SLEEP;
    do {
      cVar1 = *pcVar2;
      (param_2 + -0x5fef54)[(int)pcVar2] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0xb4:
    pcVar2 = &s_WAKEUP;
    do {
      cVar1 = *pcVar2;
      (param_2 + -0x5fef4c)[(int)pcVar2] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0xb5:
    pcVar2 = s_SYSTEMPAGE;
    do {
      cVar1 = *pcVar2;
      (param_2 + -0x5fef40)[(int)pcVar2] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0xbd:
    pcVar2 = s_SESSIONOPEN;
    do {
      cVar1 = *pcVar2;
      (param_2 + -0x5fef34)[(int)pcVar2] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0xbe:
    pcVar2 = s_SESSIONCLOSE;
    do {
      cVar1 = *pcVar2;
      (param_2 + -0x5fef24)[(int)pcVar2] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0xc0:
    pcVar2 = s_LOGINCLANMANAGER;
    do {
      cVar1 = *pcVar2;
      pcVar2[(int)(param_2 + -0x5feeb0)] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0xc1:
    pcVar2 = s_DISCONNECTCLANMANAGER;
    do {
      cVar1 = *pcVar2;
      pcVar2[(int)(param_2 + -0x5fee98)] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0xc2:
    pcVar2 = s_CLANMANAGERPAGE;
    do {
      cVar1 = *pcVar2;
      pcVar2[(int)(param_2 + -0x5fee88)] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0xc3:
    pcVar2 = s_UPDATECLANPLAYER;
    do {
      cVar1 = *pcVar2;
      pcVar2[(int)(param_2 + -0x5fee74)] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0xc4:
    pcVar2 = s_PLAYERCLANS;
    do {
      cVar1 = *pcVar2;
      pcVar2[(int)(param_2 + -0x5fee68)] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 199:
    pcVar2 = s_GETPERSISTANTGROUPINFO;
    do {
      cVar1 = *pcVar2;
      (param_2 + -0x5feee0)[(int)pcVar2] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0xca:
    pcVar2 = s_UPDATEGROUPPING;
    do {
      cVar1 = *pcVar2;
      (param_2 + -0x5fef04)[(int)pcVar2] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0xcb:
    pcVar2 = s_DEFERREDGAMESTARTED;
    do {
      cVar1 = *pcVar2;
      pcVar2[(int)(param_2 + -0x5ff2f8)] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0xcd:
    pcVar2 = s_BEGINCLIENTHOSTGAME;
    do {
      cVar1 = *pcVar2;
      pcVar2[(int)(param_2 + -0x5ff370)] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0xd1:
    pcVar2 = s_LOBBY_MSG;
    do {
      cVar1 = *pcVar2;
      pcVar2[(int)(param_2 + -0x5fee5c)] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0xd2:
    pcVar2 = s_LOBBYSERVERLOGIN;
    do {
      cVar1 = *pcVar2;
      (param_2 + -0x5fee48)[(int)pcVar2] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0xd3:
    pcVar2 = s_SETGROUPSZDATA;
    do {
      cVar1 = *pcVar2;
      pcVar2[(int)(param_2 + -0x5feec4)] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0xd4:
    pcVar2 = s_GROUPSZDATA;
    do {
      cVar1 = *pcVar2;
      pcVar2[(int)(param_2 + -0x5feed4)] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  }
  do {
    cVar1 = *pcVar2;
    pcVar2[(int)(param_2 + -0x5ff12c)] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  return;
}




/* from: libgsconnect:Message.cpp
   addr: 0059BFC0 */

void __thiscall clGSMessage::DumpInfo(clGSMessage *this)

{
  clGSMessage cVar1;
  uchar uVar2;
  clPointerList<class_clData*> *this_00;
  bool bVar3;
  ushort local_d4 [2];
  undefined4 local_d0;
  undefined **local_cc;
  undefined4 *local_c8;
  undefined4 local_c4;
  undefined **local_c0 [2];
  undefined8 *local_b8;
  undefined **local_b4;
  undefined4 *local_b0;
  undefined4 local_ac;
  undefined **local_a8 [2];
  undefined8 *local_a0;
  char local_9c [16];
  char local_8c [128];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c8e14;
  local_c = ExceptionList;
  local_d0 = 0;
  ExceptionList = &local_c;
  DebugMessageType(this,(uchar)this[0xd],local_8c);
  printf(s___s__,local_8c);
  cVar1 = this[0xd];
  if ((cVar1 == (clGSMessage)0x26) || (cVar1 == (clGSMessage)0x27)) {
    local_c8 = &clDataList::_vbtable__for__clData__;
    local_b8 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
    local_c4 = 3;
    local_cc = &clData::_vftable_;
    local_4 = 0;
    clPointerList<class_clData*>::clPointerList<class_clData*>
              ((clPointerList<class_clData*> *)local_c0);
    local_cc = &clDataList::_vftable__for__clData__;
    local_c0[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
    local_4 = 1;
    uVar2 = clDataList::GetIndex(*(clDataList **)(this + 0x14),&local_d0,1,0);
    if (uVar2 == '\0') {
      clDataList::GetIndex(*(clDataList **)(this + 0x14),local_d4,0);
      local_d0 = CONCAT31(local_d0._1_3_,(undefined1)local_d4[0]);
    }
    DebugMessageType(this,(uchar)local_d0,local_8c);
    printf(s___s,local_8c);
    uVar2 = clDataList::GetIndex(*(clDataList **)(this + 0x14),(clDataList *)&local_cc,1);
    if (uVar2 != '\0') {
      clDataList::DumpStr((clDataList *)&local_cc);
    }
    printf(&s___);
    local_cc = &clDataList::_vftable__for__clData__;
    local_c0[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
    local_4 = 2;
    this_00 = (clPointerList<class_clData*> *)local_c0;
  }
  else {
    if (cVar1 != (clGSMessage)0xd1) {
      (**(code **)(**(int **)(this + 0x14) + 0x10))();
      printf(&s__);
      ExceptionList = local_c;
      return;
    }
    local_b0 = &clDataList::_vbtable__for__clData__;
    local_a0 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
    local_ac = 3;
    local_b4 = &clData::_vftable_;
    local_4 = 3;
    clPointerList<class_clData*>::clPointerList<class_clData*>
              ((clPointerList<class_clData*> *)local_a8);
    local_b4 = &clDataList::_vftable__for__clData__;
    local_a8[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
    local_4._0_1_ = 4;
    local_4._1_3_ = 0;
    clDataList::GetIndex(*(clDataList **)(this + 0x14),local_d4,0);
    bVar3 = local_d4[0] != 0;
    if (bVar3) {
      clDataList::GetIndex(*(clDataList **)(this + 0x14),(clDataList *)&local_b4,1);
    }
    else {
      local_c8 = &clDataList::_vbtable__for__clData__;
      local_b8 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
      local_c4 = 3;
      local_cc = &clData::_vftable_;
      local_4._0_1_ = 5;
      clPointerList<class_clData*>::clPointerList<class_clData*>
                ((clPointerList<class_clData*> *)local_c0);
      local_cc = &clDataList::_vftable__for__clData__;
      local_c0[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
      local_4._0_1_ = 6;
      clDataList::GetIndex(*(clDataList **)(this + 0x14),local_9c,0,0x10);
      clDataList::GetIndex(*(clDataList **)(this + 0x14),(clDataList *)&local_cc,1);
      clDataList::GetIndex((clDataList *)&local_cc,local_d4,0);
      clDataList::GetIndex((clDataList *)&local_cc,(clDataList *)&local_b4,1);
      printf(s____s__,local_9c);
      local_cc = &clDataList::_vftable__for__clData__;
      local_c0[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
      local_4._0_1_ = 7;
      clPointerList<class_clData*>::~clPointerList<class_clData*>
                ((clPointerList<class_clData*> *)local_c0);
      local_4._0_1_ = 4;
    }
    DebugLobbySrvMessageType(this,local_d4[0],local_8c);
    printf(s___s,local_8c);
    if ((local_d4[0] == 0x26) || (local_d4[0] == 0x27)) {
      local_c8 = &clDataList::_vbtable__for__clData__;
      local_b8 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
      clData::clData((clData *)&local_cc,3);
      local_4._0_1_ = 8;
      clPointerList<class_clData*>::clPointerList<class_clData*>
                ((clPointerList<class_clData*> *)local_c0);
      local_cc = &clDataList::_vftable__for__clData__;
      local_c0[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
      local_4 = CONCAT31(local_4._1_3_,9);
      clDataList::GetIndex((clDataList *)&local_b4,(ushort *)&local_d0,0);
      DebugLobbySrvMessageType(this,(ushort)local_d0,local_8c);
      printf(s___s,local_8c);
      uVar2 = clDataList::GetIndex((clDataList *)&local_b4,(clDataList *)&local_cc,1);
      if (uVar2 != '\0') {
        clDataList::DumpStr((clDataList *)&local_cc);
      }
      local_cc = &clDataList::_vftable__for__clData__;
      local_c0[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
      local_4._0_1_ = 10;
      clPointerList<class_clData*>::~clPointerList<class_clData*>
                ((clPointerList<class_clData*> *)local_c0);
    }
    else {
      clDataList::DumpStr((clDataList *)&local_b4);
    }
    if (!bVar3) {
      printf(&s___);
    }
    printf(&s___);
    local_b4 = &clDataList::_vftable__for__clData__;
    local_a8[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
    local_4 = 0xb;
    this_00 = (clPointerList<class_clData*> *)local_a8;
  }
  clPointerList<class_clData*>::~clPointerList<class_clData*>(this_00);
  ExceptionList = local_c;
  return;
}




/* from: libgsconnect:Message.cpp
   addr: 0059C3A0 */

void __thiscall clGSMessage::DumpInfo(clGSMessage *this,clOutputBuffer *param_1)

{
  char cVar1;
  clGSMessage cVar2;
  bool bVar3;
  uchar uVar4;
  uint uVar5;
  char *pcVar6;
  __false_type local_a3;
  __false_type local_a2;
  __false_type local_a1;
  clDataList *local_a0;
  clDataList *local_9c;
  ushort local_98 [2];
  undefined4 local_94;
  char local_90 [15];
  char acStack_81 [129];
  
  local_a0 = (clDataList *)0x0;
  DebugMessageType(this,(uchar)this[0xd],acStack_81 + 1);
  uVar5 = 0xffffffff;
  pcVar6 = &s__;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  _STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::
  M_append_dispatch((basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>
                     *)param_1,&s__,(char *)(~uVar5 + 0x5fe823),&local_a3);
  pcVar6 = acStack_81;
  uVar5 = 0xffffffff;
  do {
    pcVar6 = pcVar6 + 1;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
  } while (*pcVar6 != '\0');
  _STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::
  M_append_dispatch((basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>
                     *)param_1,acStack_81 + 1,acStack_81 + ~uVar5,&local_a1);
  uVar5 = 0xffffffff;
  pcVar6 = &s___;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  _STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::
  M_append_dispatch((basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>
                     *)param_1,&s___,s_STILLALIVE + ~uVar5 + 0xb,&local_a2);
  cVar2 = this[0xd];
  if ((cVar2 == (clGSMessage)0x26) || (cVar2 == (clGSMessage)0x27)) {
    uVar4 = clDataList::GetIndex(*(clDataList **)(this + 0x14),&local_9c,1,0);
    if (uVar4 == '\0') {
      clDataList::GetIndex(*(clDataList **)(this + 0x14),local_98,0);
      local_9c = (clDataList *)CONCAT31(local_9c._1_3_,(undefined1)local_98[0]);
    }
    DebugMessageType(this,(uchar)local_9c,acStack_81 + 1);
    uVar5 = 0xffffffff;
    pcVar6 = &s___;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    _STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::
    M_append_dispatch((basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>
                       *)param_1,&s___,(char *)(~uVar5 + 0x5ff58b),&local_a3);
    pcVar6 = acStack_81;
    uVar5 = 0xffffffff;
    do {
      pcVar6 = pcVar6 + 1;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
    } while (*pcVar6 != '\0');
    _STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::
    M_append_dispatch((basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>
                       *)param_1,acStack_81 + 1,acStack_81 + ~uVar5,&local_a1);
    uVar5 = 0xffffffff;
    pcVar6 = &s__;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    _STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::
    M_append_dispatch((basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>
                       *)param_1,&s__,s_unknown_obj + ~uVar5 + 0xb,&local_a2);
    uVar4 = clDataList::GetIndex(*(clDataList **)(this + 0x14),&local_a0,1);
    if (uVar4 != '\0') {
      (**(code **)(*(int *)local_a0 + 0xc))(param_1);
    }
    uVar5 = 0xffffffff;
    pcVar6 = &s___;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    _STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::
    M_append_dispatch((basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>
                       *)param_1,&s___,s___AVclDataRef___005fe80c + ~uVar5 + 0xf,&local_a3);
    return;
  }
  if (cVar2 != (clGSMessage)0xd1) {
    (**(code **)(**(int **)(this + 0x14) + 0xc))(param_1);
    uVar5 = 0xffffffff;
    pcVar6 = &s__;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    _STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::append
              ((basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *)
               param_1,&s__,(char *)(~uVar5 + 0x5f54b3),(forward_iterator_tag *)&stack0xffffff59);
    return;
  }
  bVar3 = false;
  clDataList::GetIndex(*(clDataList **)(this + 0x14),local_98,0);
  if (local_98[0] == 0) {
    clDataList::GetIndex(*(clDataList **)(this + 0x14),local_90,0,0x10);
    clDataList::GetIndex(*(clDataList **)(this + 0x14),&local_9c,1);
    clDataList::GetIndex(local_9c,local_98,0);
    clDataList::GetIndex(local_9c,&local_a0,1);
    uVar5 = 0xffffffff;
    pcVar6 = &s___;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    _STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::
    M_append_dispatch((basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>
                       *)param_1,&s___,(char *)(~uVar5 + 0x5ff58f),&local_a3);
    uVar5 = 0xffffffff;
    pcVar6 = local_90;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    _STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::
    M_append_dispatch((basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>
                       *)param_1,local_90,local_90 + (~uVar5 - 1),&local_a1);
    local_a2 = local_a3;
    uVar5 = 0xffffffff;
    pcVar6 = &s___;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    _STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::append
              ((basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *)
               param_1,&s___,(char *)(~uVar5 + 0x5fe82f),(forward_iterator_tag *)&local_a2);
    bVar3 = true;
  }
  else {
    clDataList::GetIndex(*(clDataList **)(this + 0x14),&local_a0,1);
  }
  DebugLobbySrvMessageType(this,local_98[0],acStack_81 + 1);
  local_a2 = local_a3;
  uVar5 = 0xffffffff;
  pcVar6 = &s___;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  _STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::append
            ((basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *)
             param_1,&s___,(char *)(~uVar5 + 0x5ff58b),(forward_iterator_tag *)&local_a2);
  pcVar6 = acStack_81;
  uVar5 = 0xffffffff;
  do {
    pcVar6 = pcVar6 + 1;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
  } while (*pcVar6 != '\0');
  local_a1 = local_a3;
  _STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::append
            ((basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *)
             param_1,acStack_81 + 1,acStack_81 + ~uVar5,(forward_iterator_tag *)&local_a1);
  uVar5 = 0xffffffff;
  pcVar6 = &s__;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  _STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::append
            ((basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *)
             param_1,&s__,s_unknown_obj + ~uVar5 + 0xb,(forward_iterator_tag *)&local_a3);
  if ((local_98[0] == 0x26) || (local_98[0] == 0x27)) {
    clDataList::GetIndex(local_a0,(ushort *)&local_9c,0);
    DebugLobbySrvMessageType(this,(ushort)local_9c,acStack_81 + 1);
    uVar5 = 0xffffffff;
    pcVar6 = &s___;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    _STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::append
              ((basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *)
               param_1,&s___,(char *)(~uVar5 + 0x5ff58b),(forward_iterator_tag *)&local_a3);
    pcVar6 = acStack_81;
    uVar5 = 0xffffffff;
    do {
      pcVar6 = pcVar6 + 1;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
    } while (*pcVar6 != '\0');
    local_a1 = local_a3;
    _STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::append
              ((basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *)
               param_1,acStack_81 + 1,acStack_81 + ~uVar5,(forward_iterator_tag *)&local_a1);
    local_a2 = local_a3;
    uVar5 = 0xffffffff;
    pcVar6 = &s__;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    _STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::append
              ((basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *)
               param_1,&s__,s_unknown_obj + ~uVar5 + 0xb,(forward_iterator_tag *)&local_a2);
    uVar4 = clDataList::GetIndex(local_a0,(clDataList **)&local_94,1);
    if (uVar4 != '\0') {
      (**(code **)(*(int *)local_94 + 0xc))(param_1);
    }
  }
  else {
    (**(code **)(*(int *)local_a0 + 0xc))(param_1);
  }
  if (bVar3) {
    uVar5 = 0xffffffff;
    pcVar6 = &s___;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    _STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::append
              ((basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *)
               param_1,&s___,s_STILLALIVE + ~uVar5 + 0xb,(forward_iterator_tag *)&local_a3);
  }
  uVar5 = 0xffffffff;
  pcVar6 = &s___;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  _STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::append
            ((basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *)
             param_1,&s___,s___AVclDataRef___005fe80c + ~uVar5 + 0xf,
             (forward_iterator_tag *)&local_a3);
  return;
}




/* from: libgsconnect:Message.cpp
   addr: 0059C880 */

clGameMessage * __thiscall
clGameMessage::clGameMessage
          (clGameMessage *this,clAlgoEncrypt *param_1,short param_2,uchar param_3,uchar param_4,
          uchar *param_5,int param_6)

{
  uchar *puVar1;
  uint uVar2;
  int in_stack_0000001c;
  
  if (in_stack_0000001c != 0) {
    *(undefined1 **)(this + 4) = &_vbtable_;
  }
  *(clAlgoEncrypt **)(this + 8) = param_1;
  *(undefined ***)this = &_vftable_;
  this[0xc] = (clGameMessage)0x1;
  this[0xd] = (clGameMessage)param_3;
  this[0xe] = (clGameMessage)param_4;
  *(short *)(this + 0x18) = param_2;
  puVar1 = (uchar *)ExtAlloc_Malloc_4(param_6);
  uVar2 = (uint)param_6 >> 2;
  *(uchar **)(this + 0x10) = puVar1;
  for (; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined4 *)puVar1 = *(undefined4 *)param_5;
    param_5 = param_5 + 4;
    puVar1 = puVar1 + 4;
  }
  for (uVar2 = param_6 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar1 = *param_5;
    param_5 = param_5 + 1;
    puVar1 = puVar1 + 1;
  }
  *(int *)(this + 0x14) = param_6;
  return this;
}




/* from: libgsconnect:Message.cpp
   addr: 0059C900
   addr: 0059C900 */

void * __thiscall clGameMessage::_vector_deleting_destructor_(clGameMessage *this,uint param_1)

{
  ~clGameMessage(this);
  if ((param_1 & 1) != 0) {
    ExtAlloc_Free_4(this);
  }
  return this;
}




/* from: libgsconnect:Message.cpp
   addr: 0059C920 */

clGameMessage * __thiscall clGameMessage::clGameMessage(clGameMessage *this,clGameMessage *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  int in_stack_00000008;
  
  if (in_stack_00000008 != 0) {
    *(undefined1 **)(this + 4) = &_vbtable_;
  }
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  this[0xc] = param_1[0xc];
  this[0xd] = param_1[0xd];
  this[0xe] = param_1[0xe];
  *(undefined ***)this = &_vftable_;
  *(undefined2 *)(this + 0x18) = *(undefined2 *)(param_1 + 0x18);
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x14) = uVar1;
  puVar2 = (undefined4 *)ExtAlloc_Malloc_4(uVar1);
  uVar4 = *(uint *)(this + 0x14);
  *(undefined4 **)(this + 0x10) = puVar2;
  puVar5 = *(undefined4 **)(param_1 + 0x10);
  for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar2 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar2 = puVar2 + 1;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined1 *)puVar2 = *(undefined1 *)puVar5;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  }
  return this;
}




/* from: libgsconnect:Message.cpp
   addr: 0059C9A0 */

void __thiscall clGameMessage::clGameMessage(clGameMessage *this,clAlgoEncrypt *param_1)

{
  int in_stack_00000008;
  
  if (in_stack_00000008 != 0) {
    *(undefined1 **)(this + 4) = &_vbtable_;
  }
  *(undefined ***)this = &_vftable_;
  *(clAlgoEncrypt **)(this + 8) = param_1;
  this[0xc] = (clGameMessage)0x1;
  this[0xd] = (clGameMessage)0x0;
  this[0xe] = (clGameMessage)0x0;
  *(undefined2 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  return;
}




/* from: libgsconnect:Message.cpp
   addr: 0059C9E0 */

void __thiscall clGameMessage::~clGameMessage(clGameMessage *this)

{
  *(undefined ***)this = &_vftable_;
  if (*(int *)(this + 0x10) != 0) {
    ExtAlloc_Free_4(*(int *)(this + 0x10));
  }
  *(undefined ***)this = &clMessage::_vftable_;
  return;
}




/* from: libgsconnect:Message.cpp
   addr: 0059CA00 */

uchar * __thiscall clGameMessage::ConvertToBinary(clGameMessage *this,int *param_1)

{
  uchar *puVar1;
  uchar *puVar2;
  uchar *puVar3;
  uint uVar4;
  uint uVar5;
  uchar *puVar6;
  undefined4 unaff_EDI;
  uchar *puVar7;
  int *piVar8;
  clGameMessage *local_4;
  
  uVar5 = *(uint *)(this + 0x10);
  piVar8 = (int *)0x0;
  local_4 = this;
  (**(code **)(*(int *)this + 0x14))(uVar5,*(undefined4 *)(this + 0x14),0,&local_4);
  puVar1 = (uchar *)ExtAlloc_Malloc_4(unaff_EDI);
  (**(code **)(*(int *)this + 0x14))
            (*(undefined4 *)(this + 0x10),*(undefined4 *)(this + 0x14),puVar1,&stack0xffffffec);
  *piVar8 = uVar5 + 7;
  puVar2 = (uchar *)ExtAlloc_Malloc_4(7);
  puVar2[0] = '\0';
  puVar2[1] = '\0';
  puVar2[2] = '\0';
  puVar2[3] = '\0';
  puVar2[4] = '\0';
  puVar2[5] = '\0';
  puVar2[6] = '\0';
  clMessage::PutMessageSize(puVar2,*piVar8);
  clMessage::PutMessageProperty(puVar2,(uchar)this[0xc]);
  clMessage::PutMessagePriority(puVar2,(uchar)this[0xe]);
  clMessage::PutMessageType(puVar2,(uchar)this[0xd]);
  clMessage::PutGameMessageSender(puVar2,*(short *)(this + 0x18));
  puVar3 = (uchar *)ExtAlloc_Malloc_4(*piVar8);
  *(undefined4 *)puVar3 = *(undefined4 *)puVar2;
  *(undefined2 *)(puVar3 + 4) = *(undefined2 *)(puVar2 + 4);
  puVar3[6] = puVar2[6];
  puVar6 = puVar1;
  puVar7 = puVar3 + 7;
  for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)puVar7 = *(undefined4 *)puVar6;
    puVar6 = puVar6 + 4;
    puVar7 = puVar7 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  ExtAlloc_Free_4(puVar2);
  ExtAlloc_Free_4(puVar1);
  return puVar3;
}




/* from: libgsconnect:Message.cpp
   addr: 0059CAF0
   addr: 0059CAF0 */

void __thiscall
clGameMessage::DecryptBuffer
          (clGameMessage *this,uchar *param_1,uint param_2,uchar *param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  
  if (param_3 != (uchar *)0x0) {
    uVar2 = *param_4;
    if (uVar2 == param_2) {
      for (uVar1 = uVar2 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
        *(undefined4 *)param_3 = *(undefined4 *)param_1;
        param_1 = param_1 + 4;
        param_3 = param_3 + 4;
      }
      for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *param_3 = *param_1;
        param_1 = param_1 + 1;
        param_3 = param_3 + 1;
      }
    }
    return;
  }
  *param_4 = param_2;
  return;
}




/* from: libgsconnect:Message.cpp
   addr: 0059CB30 */

uchar __thiscall clGameMessage::InstanceMessage(clGameMessage *this,uchar *param_1,uint param_2)

{
  clGameMessage *pcVar1;
  clGameMessage cVar2;
  short sVar3;
  uint uVar4;
  undefined4 uVar5;
  int extraout_ECX;
  
  if (param_2 < 7) {
    return '\0';
  }
  uVar4 = clMessage::GetMessageSize(param_1);
  if (uVar4 != param_2) {
    return '\0';
  }
  cVar2 = (clGameMessage)clMessage::GetMessagePriority(param_1);
  this[0xe] = cVar2;
  cVar2 = (clGameMessage)clMessage::GetMessageType(param_1);
  this[0xd] = cVar2;
  sVar3 = clMessage::GetGameMessageSender(param_1);
  pcVar1 = this + 0x14;
  *(short *)(this + 0x18) = sVar3;
  (**(code **)(*(int *)this + 0x18))(param_1 + 7,extraout_ECX + -7,0,pcVar1);
  uVar5 = ExtAlloc_Malloc_4(*(undefined4 *)pcVar1);
  *(undefined4 *)(this + 0x10) = uVar5;
  (**(code **)(*(int *)this + 0x18))(param_1 + 7,extraout_ECX + -7,uVar5,pcVar1);
  return '\x01';
}




/* from: libgsconnect:Message.cpp
   addr: 0059CBB0 */

void __thiscall clGameMessage::DebugMessageType(clGameMessage *this,uchar param_1,char *param_2)

{
  switch((uint)param_1) {
  case 1:
    sprintf(param_2,s_SENDTOOTHERPLAYERS);
    return;
  case 2:
    sprintf(param_2,s_SENDTOPLAYERGROUP);
    return;
  case 3:
    sprintf(param_2,s_SENDTOPLAYER);
    return;
  case 4:
    sprintf(param_2,s_SENDTOSERVER);
    return;
  case 5:
    sprintf(param_2,s_SENDTOALLPLAYERS);
    return;
  default:
    sprintf(param_2,s__d,(uint)param_1);
    return;
  }
}




/* from: libgsconnect:Message.cpp
   addr: 0059CC60 */

void __thiscall clGameMessage::DebugMessageEvent(clGameMessage *this,char *param_1)

{
  switch((uint)**(byte **)(this + 0x10)) {
  case 0xef:
    sprintf(param_1,s_EVENT_PLAYERINFOS);
    return;
  case 0xf0:
    sprintf(param_1,s_EVENT_SERVERTIME);
    return;
  case 0xf1:
    sprintf(param_1,s_EVENT_NEWMASTER);
    return;
  case 0xf2:
    sprintf(param_1,s_EVENT_PLAYERLEFT);
    return;
  case 0xf3:
    sprintf(param_1,s_EVENT_NEWPLAYER);
    return;
  default:
    sprintf(param_1,s__d,(uint)**(byte **)(this + 0x10));
    return;
  case 0xf9:
    sprintf(param_1,s_EVENT_OWNID);
    return;
  case 0xfa:
    sprintf(param_1,s_EVENT_REGISTER);
    return;
  }
}




/* from: libgsconnect:Message.cpp
   addr: 0059CD60 */

void __thiscall clGameMessage::DumpInfo(clGameMessage *this)

{
  uint uVar1;
  char local_80 [128];
  
  DebugMessageType(this,(uchar)this[0xd],local_80);
  printf(s__s_,local_80);
  DebugMessageEvent(this,local_80);
  printf(s__s____,local_80);
  printf(s___Sender__d,(int)*(short *)(this + 0x18));
  printf(s___Message_);
  uVar1 = 0;
  if (*(int *)(this + 0x14) != 0) {
    do {
      printf(s__d_,(uint)*(byte *)(*(int *)(this + 0x10) + uVar1));
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(this + 0x14));
  }
  printf(&s__);
  return;
}




/* WARNING: Type propagation algorithm not settling */
/* from: libgsconnect:Message.cpp
   addr: 0059CE00 */

void __thiscall clGameMessage::DumpInfo(clGameMessage *this,clOutputBuffer *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  forward_iterator_tag local_a2;
  forward_iterator_tag local_a1;
  char local_a0 [31];
  char acStack_81 [129];
  
  DebugMessageType(this,(uchar)this[0xd],acStack_81 + 1);
  pcVar4 = acStack_81;
  uVar2 = 0xffffffff;
  do {
    pcVar4 = pcVar4 + 1;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
  } while (*pcVar4 != '\0');
  local_a1 = local_a2;
  _STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::append
            ((basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *)
             param_1,acStack_81 + 1,acStack_81 + ~uVar2,&local_a1);
  uVar2 = 0xffffffff;
  pcVar4 = &s__;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  _STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::append
            ((basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *)
             param_1,&s__,(char *)(~uVar2 + 0x5ff6bf),&local_a2);
  DebugMessageEvent(this,acStack_81 + 1);
  pcVar4 = acStack_81;
  uVar2 = 0xffffffff;
  do {
    pcVar4 = pcVar4 + 1;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
  } while (*pcVar4 != '\0');
  _STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::append
            ((basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *)
             param_1,acStack_81 + 1,acStack_81 + ~uVar2,&local_a2);
  local_a1 = local_a2;
  uVar2 = 0xffffffff;
  pcVar4 = &s_____;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  _STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::append
            ((basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *)
             param_1,&s_____,s___Sender_ + ~uVar2 + 0xb,&local_a1);
  uVar2 = 0xffffffff;
  pcVar4 = s___Sender_;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  _STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::append
            ((basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *)
             param_1,s___Sender_,s__s_ + ~uVar2 + 3,&local_a2);
  sprintf(local_a0,s__d,(int)*(short *)(this + 0x18));
  uVar2 = 0xffffffff;
  pcVar4 = local_a0;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  _STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::
  M_append_dispatch((basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>
                     *)param_1,local_a0,(char *)(&local_a1 + ~uVar2),(__false_type *)&local_a1);
  uVar2 = 0xffffffff;
  pcVar4 = s___Message_;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  _STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::append
            ((basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *)
             param_1,s___Message_,s__d_ + ~uVar2 + 3,&local_a2);
  uVar2 = 0;
  if (*(int *)(this + 0x14) != 0) {
    do {
      sprintf(local_a0,s__d,(uint)*(byte *)(*(int *)(this + 0x10) + uVar2));
      uVar3 = 0xffffffff;
      pcVar4 = local_a0;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      _STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::
      append((basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *)
             param_1,local_a0,(char *)(&local_a1 + ~uVar3),&local_a2);
      local_a1 = local_a2;
      uVar3 = 0xffffffff;
      pcVar4 = &s__;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      _STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::
      append((basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *)
             param_1,&s__,(char *)(~uVar3 + 0x5f6b13),&local_a1);
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(this + 0x14));
  }
  uVar2 = 0xffffffff;
  pcVar4 = &s__;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  _STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::append
            ((basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *)
             param_1,&s__,(char *)(~uVar2 + 0x5f54b3),&local_a2);
  return;
}




/* from: libgsconnect:Message.cpp
   addr: 0059D050 */

clGSEncryptMessage * __thiscall
clGSEncryptMessage::clGSEncryptMessage
          (clGSEncryptMessage *this,clAlgoEncrypt *param_1,uchar param_2,uchar param_3,uchar param_4
          ,uchar param_5,clDataList *param_6)

{
  int in_stack_0000001c;
  
  if (in_stack_0000001c != 0) {
    *(undefined8 **)(this + 4) = &_vbtable_;
  }
  clGSMessage::clGSMessage((clGSMessage *)this,param_1,param_2,param_3,param_4,param_5,param_6);
  *(undefined ***)this = &_vftable_;
  this[0xc] = (clGSEncryptMessage)0x2;
  return this;
}




/* from: libgsconnect:Message.cpp
   addr: 0059D0B0
   addr: 0059D0B0 */

void * __thiscall
clGSEncryptMessage::_scalar_deleting_destructor_(clGSEncryptMessage *this,uint param_1)

{
  ~clGSEncryptMessage(this);
  if ((param_1 & 1) != 0) {
    ExtAlloc_Free_4(this);
  }
  return this;
}




/* from: libgsconnect:Message.cpp
   addr: 0059D0E0 */

clGSEncryptMessage * __thiscall
clGSEncryptMessage::clGSEncryptMessage(clGSEncryptMessage *this,clAlgoEncrypt *param_1)

{
  int in_stack_00000008;
  
  if (in_stack_00000008 != 0) {
    *(undefined8 **)(this + 4) = &_vbtable_;
  }
  clGSMessage::clGSMessage((clGSMessage *)this,param_1);
  *(undefined ***)this = &_vftable_;
  this[0xc] = (clGSEncryptMessage)0x2;
  return this;
}




/* from: libgsconnect:Message.cpp
   addr: 0059D120 */

void __thiscall
clGSEncryptMessage::EncryptBuffer
          (clGSEncryptMessage *this,uchar *param_1,uint param_2,uchar *param_3,uint *param_4)

{
  clAlgoEncrypt::SessionEncrypt(*(clAlgoEncrypt **)(this + 8),param_1,param_2,param_3,param_4,2);
  return;
}




/* from: libgsconnect:Message.cpp
   addr: 0059D150 */

void __thiscall
clGSEncryptMessage::DecryptBuffer
          (clGSEncryptMessage *this,uchar *param_1,uint param_2,uchar *param_3,uint *param_4)

{
  clAlgoEncrypt::SessionDecrypt(*(clAlgoEncrypt **)(this + 8),param_1,param_2,param_3,param_4,2);
  return;
}




/* from: libgsconnect:Message.cpp
   addr: 0059D190
   addr: 0059D190 */

void * __thiscall clMessage::_scalar_deleting_destructor_(clMessage *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  if ((param_1 & 1) != 0) {
    ExtAlloc_Free_4(this);
  }
  return this;
}

