
/* from: libgsclient:GSSessionLIB.cpp
   addr: 005AB680 */

void __thiscall CGLSessionLib::GetNewCurMessage(CGLSessionLib *this,int param_1)

{
  clRcvElement *this_00;
  CCurMessage *pCVar1;
  
  this_00 = *(clRcvElement **)(this + 4);
  if (this_00 != (clRcvElement *)0x0) {
    clRcvElement::~clRcvElement(this_00);
    ExtAlloc_Free_4(this_00);
    *(undefined4 *)(this + 4) = 0;
  }
  pCVar1 = CMsgQueue::GetMessageA(*(CMsgQueue **)(this + 0x18),(ushort)param_1);
  *(CCurMessage **)(this + 4) = pCVar1;
  return;
}




/* from: libgsclient:GSSessionLIB.cpp
   addr: 005AB6C0
   addr: 005AB6C0
   addr: 005AB6C0 */

void __thiscall CGLFriendsLib::GLCopyString(CGLFriendsLib *this,char *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = (int)param_1 - (int)param_2;
  do {
    cVar1 = *param_2;
    param_2[iVar2] = cVar1;
    param_2 = param_2 + 1;
  } while (cVar1 != '\0');
  return;
}




/* from: libgsclient:GSSessionLIB.cpp
   addr: 005AB6E0 */

uchar __thiscall
CGLSessionLib::GLDecodeRcv_Result(CGLSessionLib *this,uchar param_1,uchar *param_2,int *param_3)

{
  uchar *puVar1;
  uchar uVar2;
  undefined1 uVar3;
  undefined **local_28;
  undefined4 *local_24;
  undefined4 local_20;
  undefined **local_1c;
  list<class_clData*> local_18 [4];
  undefined8 *local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puVar1 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005cac24;
  local_c = ExceptionList;
  if (*(int *)(this + 4) != 0) {
    uVar2 = *(uchar *)(*(int *)(this + 4) + 4);
    ExceptionList = &local_c;
    *param_2 = uVar2;
    if ((((uVar2 == '&') || (uVar2 == '\'')) &&
        (uVar2 = clDataList::GetIndex(*(clDataList **)(*(int *)(this + 4) + 8),&param_2,1,0),
        uVar2 != '\0')) && ((uchar)param_2 == param_1)) {
      if (*puVar1 != '\'') {
        ExceptionList = local_c;
        return '\x01';
      }
      local_24 = &clDataList::_vbtable__for__clData__;
      local_14 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
      local_20 = 3;
      local_28 = &clData::_vftable_;
      local_4 = 1;
      ExtAlloc::list<class_clData*>::list<class_clData*>(local_18);
      local_1c = &clDataList::_vftable__for__clPointerList<class_clData*>__;
      local_28 = &clDataList::_vftable__for__clData__;
      local_4 = 3;
      uVar2 = clDataList::GetIndex
                        (*(clDataList **)(*(int *)(this + 4) + 8),(clDataList *)&local_28,1);
      if (uVar2 == '\0') {
        uVar3 = 4;
        local_4._0_1_ = 5;
      }
      else {
        uVar2 = clDataList::GetIndex((clDataList *)&local_28,param_3,4,0);
        local_28 = &clDataList::_vftable__for__clData__;
        if (uVar2 != '\0') {
          local_1c = &clPointerList<class_clData*>::_vftable_;
          local_4._0_1_ = 9;
          local_4._1_3_ = 0;
          clPointerList<class_clRcvElement*>::clear((clPointerList<class_clRcvElement*> *)&local_1c)
          ;
          local_4 = CONCAT31(local_4._1_3_,8);
          ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
                    ((list<class_clRcvElement*> *)local_18);
          ExceptionList = local_c;
          return '\x01';
        }
        uVar3 = 6;
        local_4._0_1_ = 7;
      }
      local_4._1_3_ = 0;
      local_1c = &clPointerList<class_clData*>::_vftable_;
      local_28 = &clDataList::_vftable__for__clData__;
      clPointerList<class_clRcvElement*>::clear((clPointerList<class_clRcvElement*> *)&local_1c);
      local_4 = CONCAT31(local_4._1_3_,uVar3);
      ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
                ((list<class_clRcvElement*> *)local_18);
    }
  }
  ExceptionList = local_c;
  return '\0';
}




/* from: libgsclient:GSSessionLIB.cpp
   addr: 005AB8A0 */

uchar __thiscall CGLSessionLib::Session_AddArena(CGLSessionLib *this)

{
  uchar uVar1;
  clDataStr *local_b4;
  int local_b0;
  int local_ac;
  char local_a8 [36];
  char local_84 [132];
  
  GetNewCurMessage(this,0x8d);
  if (*(int *)(this + 4) == 0) {
    return '\0';
  }
  uVar1 = clDataList::GetIndex(*(clDataList **)(*(int *)(this + 4) + 8),&local_b0,4,0);
  if (uVar1 == '\0') {
    return '\0';
  }
  uVar1 = clDataList::GetIndex(*(clDataList **)(*(int *)(this + 4) + 8),&local_ac,4,1);
  if (uVar1 == '\0') {
    return '\0';
  }
  uVar1 = clDataList::GetIndex(*(clDataList **)(*(int *)(this + 4) + 8),&local_b4,2);
  if (uVar1 == '\0') {
    return '\0';
  }
  CGLFriendsLib::GLCopyString((CGLFriendsLib *)this,local_a8,*(char **)(local_b4 + 0xc));
  uVar1 = clDataList::GetIndex(*(clDataList **)(*(int *)(this + 4) + 8),&local_b4,3);
  if (uVar1 == '\0') {
    return '\0';
  }
  CGLFriendsLib::GLCopyString((CGLFriendsLib *)this,local_84,*(char **)(local_b4 + 0xc));
  uVar1 = CArenaConnectionList::AddArenaToList
                    (*(CArenaConnectionList **)(this + 0xc),local_b0,local_ac,local_a8,local_84);
  return uVar1 != '\0';
}




/* from: libgsclient:GSSessionLIB.cpp
   addr: 005AB990 */

uchar __thiscall CGLSessionLib::Session_CheckConnection(CGLSessionLib *this)

{
  uchar uVar1;
  
  if ((*(CArenaConnectionList **)(this + 0xc) != (CArenaConnectionList *)0x0) &&
     (this[0x15] != (CGLSessionLib)0x0)) {
    uVar1 = CArenaConnectionList::CheckConnection(*(CArenaConnectionList **)(this + 0xc));
    return uVar1 != '\0';
  }
  return '\0';
}




/* from: libgsclient:GSSessionLIB.cpp
   addr: 005AB9C0 */

uchar __thiscall CGLSessionLib::Session_RemoveArena(CGLSessionLib *this)

{
  uchar uVar1;
  CGLSessionLib *local_4;
  
  local_4 = this;
  GetNewCurMessage(this,0x90);
  if (*(int *)(this + 4) == 0) {
    return '\0';
  }
  uVar1 = clDataList::GetIndex(*(clDataList **)(*(int *)(this + 4) + 8),&local_4,4,0);
  if (uVar1 == '\0') {
    return '\0';
  }
  uVar1 = CArenaConnectionList::RemoveArenaFromList
                    (*(CArenaConnectionList **)(this + 0xc),(int)local_4);
  return uVar1 != '\0';
}




/* from: libgsclient:GSSessionLIB.cpp
   addr: 005ABA10 */

uchar __thiscall CGLSessionLib::SessionSend_NetInterface(CGLSessionLib *this,int param_1)

{
  uchar uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  u_long local_13c;
  u_long local_138;
  char local_134 [4];
  undefined **local_130;
  undefined4 *local_12c;
  undefined4 local_128;
  undefined **local_124 [2];
  undefined8 *local_11c;
  CGLSessionLib *local_118;
  char local_114;
  char local_113 [131];
  char local_90;
  char local_8f [131];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005cac5c;
  local_c = ExceptionList;
  local_134[0] = '\0';
  local_134[1] = '\0';
  local_134[2] = '\0';
  local_134[3] = '\0';
  if ((*(int *)(this + 0xc) != 0) && (this[0x15] != (CGLSessionLib)0x0)) {
    local_138 = 0;
    local_13c = 0;
    ExceptionList = &local_c;
    local_118 = this;
    uVar1 = GetNetInterface(&local_114,&local_90,0,0);
    if (uVar1 == '\0') {
      GetNetInterface(&local_114,&local_90,2,0);
    }
    pcVar8 = &local_114;
    local_13c = 0;
    iVar6 = 0;
    do {
      cVar2 = *pcVar8;
      uVar5 = 0;
      pcVar7 = pcVar8;
      if (cVar2 != '.') {
        do {
          if (cVar2 == '\0') break;
          cVar2 = pcVar7[1];
          pcVar7 = pcVar7 + 1;
          uVar5 = uVar5 + 1;
        } while (cVar2 != '.');
        if (3 < (int)uVar5) goto LAB_005abb06;
      }
      pcVar9 = local_134;
      for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar4 = uVar5 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar9 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar9 = pcVar9 + 1;
      }
      local_134[uVar5] = '\0';
      local_13c = local_13c << 8;
      iVar3 = atoi(local_134);
      local_13c = local_13c + iVar3;
      pcVar8 = pcVar7 + 1;
      iVar6 = iVar6 + 1;
    } while (iVar6 != 4);
    local_13c = htonl(local_13c);
LAB_005abb06:
    pcVar8 = &local_90;
    local_138 = 0;
    iVar6 = 0;
    do {
      cVar2 = *pcVar8;
      uVar5 = 0;
      pcVar7 = pcVar8;
      if (cVar2 != '.') {
        do {
          if (cVar2 == '\0') break;
          cVar2 = pcVar7[1];
          pcVar7 = pcVar7 + 1;
          uVar5 = uVar5 + 1;
        } while (cVar2 != '.');
        if (3 < (int)uVar5) goto LAB_005abb88;
      }
      pcVar9 = local_134;
      for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar4 = uVar5 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar9 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar9 = pcVar9 + 1;
      }
      local_134[uVar5] = '\0';
      local_138 = local_138 << 8;
      iVar3 = atoi(local_134);
      local_138 = local_138 + iVar3;
      pcVar8 = pcVar7 + 1;
      iVar6 = iVar6 + 1;
    } while (iVar6 != 4);
    local_138 = htonl(local_138);
LAB_005abb88:
    local_12c = &clDataList::_vbtable__for__clData__;
    local_11c = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
    local_128 = 3;
    local_130 = &clData::_vftable_;
    local_4 = 0;
    clPointerList<class_clData*>::clPointerList<class_clData*>
              ((clPointerList<class_clData*> *)local_124);
    local_130 = &clDataList::_vftable__for__clData__;
    local_124[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
    local_4 = 1;
    clDataList::Add((clDataList *)&local_130,&local_138,4);
    clDataList::Add((clDataList *)&local_130,&local_13c,4);
    uVar1 = CArenaConnectionList::SendArenaMessage
                      (*(CArenaConnectionList **)(local_118 + 0xc),param_1,0xce,'\x02',
                       (clDataList *)&local_130);
    local_124[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
    local_130 = &clDataList::_vftable__for__clData__;
    if (uVar1 != '\0') {
      local_4 = 2;
      clPointerList<class_clData*>::~clPointerList<class_clData*>
                ((clPointerList<class_clData*> *)local_124);
      ExceptionList = local_c;
      return '\x01';
    }
    local_4 = 3;
    clPointerList<class_clData*>::~clPointerList<class_clData*>
              ((clPointerList<class_clData*> *)local_124);
  }
  ExceptionList = local_c;
  return '\0';
}




/* from: libgsclient:GSSessionLIB.cpp
   addr: 005ABC70 */

uchar __thiscall CGLSessionLib::SessionSend_ErrorDisconnection(CGLSessionLib *this)

{
  if ((*(CArenaConnectionList **)(this + 0xc) != (CArenaConnectionList *)0x0) &&
     (this[0x15] != (CGLSessionLib)0x0)) {
    CArenaConnectionList::RemoveAllArenaFromList(*(CArenaConnectionList **)(this + 0xc));
    return '\x01';
  }
  return '\0';
}




/* WARNING: Type propagation algorithm not settling */
/* from: libgsclient:GSSessionLIB.cpp
   addr: 005ABC90 */

uchar __thiscall
CGLSessionLib::SessionRcv_JoinArena(CGLSessionLib *this,uchar *param_1,int *param_2)

{
  uchar uVar1;
  int local_2c [2];
  undefined **local_24;
  undefined4 *local_20;
  undefined4 local_1c;
  undefined **local_18;
  list<class_clRcvElement*> local_14 [4];
  undefined8 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005cacd7;
  local_c = ExceptionList;
  local_2c[1] = 0;
  local_20 = &clDataList::_vbtable__for__clData__;
  local_10 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
  local_1c = 3;
  local_24 = &clData::_vftable_;
  local_4 = 0;
  ExceptionList = &local_c;
  clPointerList<class_clData*>::clPointerList<class_clData*>
            ((clPointerList<class_clData*> *)&local_18);
  local_24 = &clDataList::_vftable__for__clData__;
  local_18 = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_4 = 1;
  GetNewCurMessage(this,0x52);
  uVar1 = GLDecodeRcv_Result(this,'R',param_1,param_2);
  if (uVar1 == '\0') {
    local_24 = &clDataList::_vftable__for__clData__;
    local_18 = &clDataList::_vftable__for__clPointerList<class_clData*>__;
    local_4 = 2;
    clPointerList<class_clData*>::~clPointerList<class_clData*>
              ((clPointerList<class_clData*> *)&local_18);
    ExceptionList = local_c;
    return '\0';
  }
  uVar1 = clDataList::GetIndex(*(clDataList **)(*(int *)(this + 4) + 8),(clDataList *)&local_24,1);
  if (uVar1 == '\0') {
    local_24 = &clDataList::_vftable__for__clData__;
    local_18 = &clDataList::_vftable__for__clPointerList<class_clData*>__;
    local_4 = 3;
    clPointerList<class_clData*>::~clPointerList<class_clData*>
              ((clPointerList<class_clData*> *)&local_18);
    ExceptionList = local_c;
    return '\0';
  }
  if (*param_1 == '\'') {
    uVar1 = clDataList::GetIndex((clDataList *)&local_24,local_2c,4,1);
    if (uVar1 == '\0') {
      local_24 = &clDataList::_vftable__for__clData__;
      local_18 = &clDataList::_vftable__for__clPointerList<class_clData*>__;
      local_4 = 4;
      clPointerList<class_clData*>::~clPointerList<class_clData*>
                ((clPointerList<class_clData*> *)&local_18);
      ExceptionList = local_c;
      return '\0';
    }
    CArenaConnectionList::ConnectFailed(*(CArenaConnectionList **)(this + 0xc),local_2c[0],*param_2)
    ;
  }
  else {
    uVar1 = clDataList::GetIndex((clDataList *)&local_24,local_2c,4,0);
    if (uVar1 == '\0') {
      local_24 = &clDataList::_vftable__for__clData__;
      local_18 = &clDataList::_vftable__for__clPointerList<class_clData*>__;
      local_4 = 5;
      clPointerList<class_clData*>::~clPointerList<class_clData*>
                ((clPointerList<class_clData*> *)&local_18);
      ExceptionList = local_c;
      return '\0';
    }
    uVar1 = clDataList::GetIndex((clDataList *)&local_24,local_2c + 1,4,1);
    if (uVar1 == '\0') {
      local_24 = &clDataList::_vftable__for__clData__;
      local_18 = &clDataList::_vftable__for__clPointerList<class_clData*>__;
      local_4 = 6;
      clPointerList<class_clData*>::~clPointerList<class_clData*>
                ((clPointerList<class_clData*> *)&local_18);
      ExceptionList = local_c;
      return '\0';
    }
    CArenaConnectionList::ConnectFinishRouter
              (*(CArenaConnectionList **)(this + 0xc),local_2c[0],(ushort)local_2c[1],
               (uchar)this[0x16]);
  }
  local_24 = &clDataList::_vftable__for__clData__;
  local_18 = &clPointerList<class_clData*>::_vftable_;
  local_4._0_1_ = 8;
  local_4._1_3_ = 0;
  clPointerList<class_clRcvElement*>::clear((clPointerList<class_clRcvElement*> *)&local_18);
  local_4 = CONCAT31(local_4._1_3_,7);
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>(local_14);
  ExceptionList = local_c;
  return '\x01';
}




/* from: libgsclient:GSSessionLIB.cpp
   addr: 005ABF00 */

uchar __thiscall CGLSessionLib::SessionRcv_LoginArenaResult(CGLSessionLib *this)

{
  uchar uVar1;
  undefined1 uVar2;
  int local_30;
  int local_2c;
  clPointerList<class_clRcvElement*> *local_28;
  undefined **local_24;
  undefined4 *local_20;
  undefined4 local_1c;
  undefined **local_18;
  list<class_clRcvElement*> local_14 [4];
  undefined8 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005cadbc;
  local_c = ExceptionList;
  local_2c = 0;
  ExceptionList = &local_c;
  GetNewCurMessage(this,0x68);
  if (*(int *)(this + 4) != 0) {
    local_20 = &clDataList::_vbtable__for__clData__;
    local_10 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
    local_1c = 3;
    local_24 = &clData::_vftable_;
    local_4 = 0;
    clPointerList<class_clData*>::clPointerList<class_clData*>
              ((clPointerList<class_clData*> *)&local_18);
    local_18 = &clDataList::_vftable__for__clPointerList<class_clData*>__;
    local_24 = &clDataList::_vftable__for__clData__;
    local_4 = 1;
    clDataList::GetIndex(*(clDataList **)(*(int *)(this + 4) + 8),(clDataList *)&local_24,1);
    if (*(char *)(*(int *)(this + 4) + 4) == '&') {
      uVar1 = clDataList::GetIndex((clDataList *)&local_24,&local_30,4,0);
      if (uVar1 != '\0') {
        SessionSend_NetInterface(this,local_30);
        CArenaConnectionList::ConnectFinishArena(*(CArenaConnectionList **)(this + 0xc),local_30);
        goto LAB_005ac0bb;
      }
      local_24 = &clDataList::_vftable__for__clData__;
      local_28 = (clPointerList<class_clRcvElement*> *)&local_18;
      local_18 = &clPointerList<class_clData*>::_vftable_;
      local_4._0_1_ = 3;
      local_4._1_3_ = 0;
      clPointerList<class_clRcvElement*>::clear((clPointerList<class_clRcvElement*> *)&local_18);
      local_4 = CONCAT31(local_4._1_3_,2);
    }
    else {
      if (*(char *)(*(int *)(this + 4) + 4) != '\'') {
LAB_005ac0bb:
        local_24 = &clDataList::_vftable__for__clData__;
        local_28 = (clPointerList<class_clRcvElement*> *)&local_18;
        local_18 = &clPointerList<class_clData*>::_vftable_;
        local_4._0_1_ = 9;
        local_4._1_3_ = 0;
        clPointerList<class_clRcvElement*>::clear((clPointerList<class_clRcvElement*> *)&local_18);
        local_4 = CONCAT31(local_4._1_3_,8);
        ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>(local_14);
        ExceptionList = local_c;
        return '\x01';
      }
      uVar2 = 4;
      uVar1 = clDataList::GetIndex((clDataList *)&local_24,&local_2c,4,0);
      if (uVar1 == '\0') {
        local_4._0_1_ = 5;
      }
      else {
        uVar1 = clDataList::GetIndex((clDataList *)&local_24,&local_30,4,1);
        if (uVar1 != '\0') {
          CArenaConnectionList::ConnectFailed
                    (*(CArenaConnectionList **)(this + 0xc),local_30,local_2c);
          goto LAB_005ac0bb;
        }
        uVar2 = 6;
        local_4._0_1_ = 7;
      }
      local_4._1_3_ = 0;
      local_18 = &clPointerList<class_clData*>::_vftable_;
      local_24 = &clDataList::_vftable__for__clData__;
      local_28 = (clPointerList<class_clRcvElement*> *)&local_18;
      clPointerList<class_clRcvElement*>::clear(local_28);
      local_4 = CONCAT31(local_4._1_3_,uVar2);
    }
    ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>(local_14);
  }
  ExceptionList = local_c;
  return '\0';
}




/* from: libgsclient:GSSessionLIB.cpp
   addr: 005AC110 */

uchar __thiscall CGLSessionLib::SessionRcv_Ping(CGLSessionLib *this)

{
  int iVar1;
  uchar uVar2;
  int local_2c;
  undefined ***local_28;
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
  puStack_8 = &LAB_005cae3e;
  local_c = ExceptionList;
  local_2c = 0;
  ExceptionList = &local_c;
  GetNewCurMessage(this,0x3b);
  iVar1 = *(int *)(this + 4);
  if ((iVar1 != 0) && (*(char *)(iVar1 + 4) == ';')) {
    uVar2 = clDataList::GetIndex(*(clDataList **)(iVar1 + 8),&local_2c,4,0);
    if (uVar2 != '\0') {
      local_20 = &clDataList::_vbtable__for__clData__;
      local_10 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
      local_1c = 3;
      local_24 = &clData::_vftable_;
      local_4 = 0;
      ExtAlloc::list<class_clData*>::list<class_clData*>(local_14);
      local_18 = &clDataList::_vftable__for__clPointerList<class_clData*>__;
      local_24 = &clDataList::_vftable__for__clData__;
      local_4 = 1;
      uVar2 = CArenaConnectionList::SendArenaMessage
                        (*(CArenaConnectionList **)(this + 0xc),local_2c,';','\x02',
                         (clDataList *)&local_24);
      local_24 = &clDataList::_vftable__for__clData__;
      if (uVar2 != '\0') {
        local_28 = &local_18;
        local_18 = &clPointerList<class_clData*>::_vftable_;
        local_4._0_1_ = 3;
        local_4._1_3_ = 0;
        clPointerList<class_clRcvElement*>::clear((clPointerList<class_clRcvElement*> *)&local_18);
        local_4 = CONCAT31(local_4._1_3_,2);
        ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
                  ((list<class_clRcvElement*> *)local_14);
        ExceptionList = local_c;
        return '\x01';
      }
      local_28 = &local_18;
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
  return '\0';
}




/* from: libgsclient:GSSessionLIB.cpp
   addr: 005AC260 */

uchar __thiscall CGLSessionLib::SessionRcv_SessionErrorDisconnectionCB(CGLSessionLib *this)

{
  int iVar1;
  
  GetNewCurMessage(this,-2);
  if ((*(CArenaConnectionList **)(this + 0xc) != (CArenaConnectionList *)0x0) &&
     (iVar1 = CArenaConnectionList::FindFirstConnectedArena(*(CArenaConnectionList **)(this + 0xc)),
     iVar1 == 0)) {
    this[0x15] = (CGLSessionLib)0x0;
    return '\x01';
  }
  return '\x01';
}




/* from: libgsclient:GSSessionLIB.cpp
   addr: 005AC290
   addr: 005AC290
   addr: 005AC290
   addr: 005AC290
   addr: 005AC290
   addr: 005AC290
   addr: 005AC290
   addr: 005AC290
   addr: 005AC290
   addr: 005AC290
   addr: 005AC290
   addr: 005AC290
   addr: 005AC290
   addr: 005AC290
   addr: 005AC290
   addr: 005AC290
   addr: 005AC290 */

void __thiscall
ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>(list<class_clRcvElement*> *this)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = (int *)**(int **)this;
  if (piVar2 != *(int **)this) {
    do {
      piVar1 = (int *)*piVar2;
      ExtAlloc_Free_4(piVar2);
      piVar2 = piVar1;
    } while (piVar1 != (int *)*(int *)this);
  }
  *(undefined4 *)*(undefined4 *)this = *(undefined4 *)this;
  *(int *)(*(int *)this + 4) = *(int *)this;
  ExtAlloc_Free_4(*(undefined4 *)this);
  return;
}




/* from: libgsclient:GSSessionLIB.cpp
   addr: 005AC2C0 */

list<int> * __thiscall ExtAlloc::list<int>::list<int>(list<int> *this)

{
  int iVar1;
  int in_stack_00000004;
  
  if (in_stack_00000004 != 0) {
    *(undefined8 **)(this + 4) = &_vbtable_;
  }
  *(undefined4 *)this = 0;
  iVar1 = ExtAlloc_Malloc_4(0xc);
  *(int *)iVar1 = iVar1;
  *(int *)(iVar1 + 4) = iVar1;
  *(int *)this = iVar1;
  return this;
}

