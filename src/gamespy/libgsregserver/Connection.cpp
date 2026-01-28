
/* from: libgsregserver:Connection.cpp
   addr: 00589150 */

CRegServerCurMessage * __thiscall
CRegServerCurMessage::CRegServerCurMessage
          (CRegServerCurMessage *this,uchar param_1,clDataList *param_2,int param_3)

{
  clDataList *this_00;
  undefined4 uVar1;
  int in_stack_00000010;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c7894;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (in_stack_00000010 != 0) {
    ExceptionList = &local_c;
    *(undefined8 **)this = &_vbtable_;
  }
  this[4] = (CRegServerCurMessage)param_1;
  this_00 = (clDataList *)ExtAlloc_Malloc_4(0x18);
  local_4 = 1;
  if (this_00 == (clDataList *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = clDataList::clDataList(this_00,param_2);
  }
  *(undefined4 *)(this + 8) = uVar1;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(int *)(this + 0x18) = param_3;
  ExceptionList = local_c;
  return this;
}




/* from: libgsregserver:Connection.cpp
   addr: 00589200 */

void __thiscall CRegServerConnection::CRegServerConnection(CRegServerConnection *this)

{
  CRegServerConnection CVar1;
  char *pcVar2;
  int in_stack_00000004;
  
  if (in_stack_00000004 != 0) {
    *(undefined1 **)this = &_vbtable_;
  }
  pcVar2 = s_;
  *(undefined4 *)(this + 4) = 0;
  do {
    CVar1 = (CRegServerConnection)*pcVar2;
    (this + -0x601fd8)[(int)pcVar2] = CVar1;
    pcVar2 = (char *)((CRegServerConnection *)pcVar2 + 1);
  } while (CVar1 != (CRegServerConnection)0x0);
  *(undefined4 *)(this + 0x94) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  return;
}




/* from: libgsregserver:Connection.cpp
   addr: 00589250 */

uchar __thiscall
CRegServerConnection::Connect
          (CRegServerConnection *this,char *param_1,ushort param_2,uchar param_3,int param_4,
          int param_5,int param_6)

{
  char cVar1;
  int iVar2;
  char cVar3;
  clConnectElem *this_00;
  int *piVar4;
  void *unaff_EBP;
  undefined2 in_stack_0000000a;
  undefined3 in_stack_0000000d;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_005c78aa;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (*(undefined4 **)(this + 4) != (undefined4 *)0x0) {
    ExceptionList = &pvStack_c;
    (**(code **)**(undefined4 **)(this + 4))(1);
    *(undefined4 *)(this + 4) = 0;
  }
  this_00 = (clConnectElem *)ExtAlloc_Malloc_4(0x68);
  uStack_4 = 0;
  if (this_00 == (clConnectElem *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)clConnectElem::clConnectElem(this_00,0x22,param_4,'\x04',param_3,0xb4,0,0);
  }
  *(int **)(this + 4) = piVar4;
  uStack_4 = 0xffffffff;
  cVar3 = (**(code **)(*piVar4 + 4))(param_1,_param_2,0);
  iVar2 = 0x10 - (int)param_1;
  do {
    cVar1 = *param_1;
    param_1[(int)(this + iVar2)] = cVar1;
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  *(undefined4 *)(this + 8) = _param_2;
  *(uint *)(this + 0x94) = (uint)param_2;
  *(undefined4 *)(this + 0xc) = _param_3;
  ExceptionList = unaff_EBP;
  return cVar3 == '\x01';
}




/* from: libgsregserver:Connection.cpp
   addr: 00589320
   addr: 00589320 */

uchar __thiscall CConnection::CheckConnection(CConnection *this)

{
  uchar uVar1;
  
  if (*(clConnectElem **)(this + 4) != (clConnectElem *)0x0) {
    uVar1 = clConnectElem::CheckConnection(*(clConnectElem **)(this + 4));
    return uVar1 == '\x01';
  }
  return '\0';
}




/* from: libgsregserver:Connection.cpp
   addr: 00589340
   addr: 00589340 */

uchar __thiscall
CConnection::SendMessageA(CConnection *this,uchar param_1,uchar param_2,clDataList *param_3)

{
  uchar uVar1;
  
  if ((*(clConnectElem **)(this + 4) != (clConnectElem *)0x0) && (param_3 != (clDataList *)0x0)) {
    uVar1 = clConnectElem::SendGSMessage
                      (*(clConnectElem **)(this + 4),param_1,'\x04',param_2,param_3);
    return uVar1;
  }
  return '\0';
}




/* from: libgsregserver:Connection.cpp
   addr: 00589380 */

CRegServerCurMessage * __thiscall CRegServerConnection::ReadMessage(CRegServerConnection *this)

{
  clMessage *pcVar1;
  CRegServerCurMessage *this_00;
  CRegServerCurMessage *pCVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c78ca;
  local_c = ExceptionList;
  if (*(clConnectElem **)(this + 4) != (clConnectElem *)0x0) {
    ExceptionList = &local_c;
    pcVar1 = clConnectElem::ReadTCPMessage(*(clConnectElem **)(this + 4));
    if (pcVar1 != (clMessage *)0x0) {
      this_00 = (CRegServerCurMessage *)ExtAlloc_Malloc_4(0x1c);
      local_4 = 0;
      if (this_00 == (CRegServerCurMessage *)0x0) {
        pCVar2 = (CRegServerCurMessage *)0x0;
      }
      else {
        pCVar2 = (CRegServerCurMessage *)
                 CRegServerCurMessage::CRegServerCurMessage
                           (this_00,(uchar)pcVar1[0xd],*(clDataList **)(pcVar1 + 0x14),
                            *(int *)(this + 8));
      }
      local_4 = 0xffffffff;
      (*(code *)**(undefined4 **)pcVar1)(1);
      ExceptionList = this_00;
      return pCVar2;
    }
  }
  ExceptionList = local_c;
  return (CRegServerCurMessage *)0x0;
}

