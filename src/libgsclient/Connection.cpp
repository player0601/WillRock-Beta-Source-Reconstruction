
/* from: libgsclient:Connection.cpp
   addr: 005AAB10 */

CCurMessage * __thiscall
CCurMessage::CCurMessage(CCurMessage *this,uchar param_1,clDataList *param_2,int param_3)

{
  clDataList *this_00;
  undefined4 uVar1;
  int in_stack_00000010;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005ca9b4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (in_stack_00000010 != 0) {
    ExceptionList = &local_c;
    *(undefined8 **)this = &_vbtable_;
  }
  this[4] = (CCurMessage)param_1;
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




/* from: libgsclient:Connection.cpp
   addr: 005AABB0 */

CCurMessage * __thiscall CCurMessage::CCurMessage(CCurMessage *this,CCurMessage *param_1)

{
  clDataList *this_00;
  undefined4 uVar1;
  int in_stack_00000008;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005ca9e4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (in_stack_00000008 != 0) {
    ExceptionList = &local_c;
    *(undefined8 **)this = &_vbtable_;
  }
  this[4] = param_1[4];
  this_00 = (clDataList *)ExtAlloc_Malloc_4(0x18);
  local_4 = 1;
  if (this_00 == (clDataList *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = clDataList::clDataList(this_00,*(clDataList **)(param_1 + 8));
  }
  *(undefined4 *)(this + 8) = uVar1;
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  ExceptionList = local_c;
  return this;
}




/* from: libgsclient:Connection.cpp
   addr: 005AAC50 */

void __thiscall CConnection::CConnection(CConnection *this)

{
  CConnection CVar1;
  char *pcVar2;
  int in_stack_00000004;
  
  if (in_stack_00000004 != 0) {
    *(undefined1 **)this = &_vbtable_;
  }
  pcVar2 = s_;
  *(undefined4 *)(this + 4) = 0;
  do {
    CVar1 = (CConnection)*pcVar2;
    (this + -0x601fd8)[(int)pcVar2] = CVar1;
    pcVar2 = (char *)((CConnection *)pcVar2 + 1);
  } while (CVar1 != (CConnection)0x0);
  *(undefined4 *)(this + 0x94) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  return;
}




/* from: libgsclient:Connection.cpp
   addr: 005AACA0
   addr: 005AACA0 */

void __thiscall CConnection::~CConnection(CConnection *this)

{
  if (*(undefined4 **)(this + 4) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 4))(1);
  }
  *(undefined4 *)(this + 4) = 0;
  return;
}




/* from: libgsclient:Connection.cpp
   addr: 005AACC0 */

uchar __thiscall
CConnection::Connect
          (CConnection *this,char *param_1,ushort param_2,uchar param_3,int param_4,int param_5,
          int param_6)

{
  char cVar1;
  int iVar2;
  uchar uVar3;
  clConnectElem *this_00;
  int *piVar4;
  undefined2 in_stack_0000000a;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_005ca9fa;
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
  uStack_4 = 0xffffffff;
  *(int **)(this + 4) = piVar4;
  if (piVar4 == (int *)0x0) {
    uVar3 = '\0';
  }
  else {
    uVar3 = (**(code **)(*piVar4 + 4))(param_1,_param_2,0);
    if (uVar3 != '\0') {
      iVar2 = 0x10 - (int)param_1;
      do {
        cVar1 = *param_1;
        param_1[(int)(this + iVar2)] = cVar1;
        param_1 = param_1 + 1;
      } while (cVar1 != '\0');
      *(int *)(this + 8) = param_5;
      *(uint *)(this + 0x94) = (uint)param_2;
      *(int *)(this + 0xc) = param_6;
    }
  }
  ExceptionList = pvStack_c;
  return uVar3;
}




/* from: libgsclient:Connection.cpp
   addr: 005AAD90
   addr: 005AAD90 */

uchar __thiscall CRegServerConnection::Disconnect(CRegServerConnection *this)

{
  if (*(undefined4 **)(this + 4) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 4))(1);
    *(undefined4 *)(this + 4) = 0;
  }
  return '\x01';
}




/* from: libgsclient:Connection.cpp
   addr: 005AADB0 */

uchar __thiscall
CConnection::SendSecureMessage(CConnection *this,uchar param_1,uchar param_2,clDataList *param_3)

{
  clConnectElem *this_00;
  uchar uVar1;
  
  this_00 = *(clConnectElem **)(this + 4);
  if (((this_00 != (clConnectElem *)0x0) && (param_3 != (clDataList *)0x0)) &&
     (this_00[0x50] != (clConnectElem)0x0)) {
    uVar1 = clConnectElem::SendGSEncryptMessage(this_00,param_1,'\x04',param_2,param_3);
    return uVar1;
  }
  return '\0';
}




/* from: libgsclient:Connection.cpp
   addr: 005AADE0 */

CCurMessage * __thiscall CConnection::ReadMessage(CConnection *this)

{
  clMessage *pcVar1;
  CCurMessage *this_00;
  CCurMessage *pCVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005caa1a;
  local_c = ExceptionList;
  if (*(clConnectElem **)(this + 4) != (clConnectElem *)0x0) {
    ExceptionList = &local_c;
    pcVar1 = clConnectElem::ReadTCPMessage(*(clConnectElem **)(this + 4));
    if (pcVar1 != (clMessage *)0x0) {
      this_00 = (CCurMessage *)ExtAlloc_Malloc_4(0x1c);
      local_4 = 0;
      if (this_00 == (CCurMessage *)0x0) {
        pCVar2 = (CCurMessage *)0x0;
      }
      else {
        pCVar2 = (CCurMessage *)
                 CCurMessage::CCurMessage
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
  return (CCurMessage *)0x0;
}




/* from: libgsclient:Connection.cpp
   addr: 005AAE80 */

void __thiscall CConnectionList::~CConnectionList(CConnectionList *this)

{
  list<class_clRcvElement*,class_ExtAlloc::Allocator<class_clRcvElement*>_> *this_00;
  CConnectionList CVar1;
  _List_base<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_> *this_01;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  int *piVar5;
  void *unaff_EDI;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005caa99;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = &_vftable_;
  pcVar4 = s_;
  local_4 = 1;
  do {
    CVar1 = (CConnectionList)*pcVar4;
    (this + -0x601fd0)[(int)pcVar4] = CVar1;
    pcVar4 = (char *)((CConnectionList *)pcVar4 + 1);
  } while (CVar1 != (CConnectionList)0x0);
  this_01 = *(_List_base<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_> **)
             (this + 4);
  this_00 = (list<class_clRcvElement*,class_ExtAlloc::Allocator<class_clRcvElement*>_> *)(this + 4);
  iVar2 = *(int *)this;
  _STL::list<class_clRcvElement*,class_ExtAlloc::Allocator<class_clRcvElement*>_>::begin(this_00);
  (**(code **)(iVar2 + 0x10))();
  *(undefined ***)(this + 0xc) = &clPointerList<class_CCurMessage*>::_vftable_;
  iVar2 = *(int *)(this + 0xc);
  _STL::list<class_clRcvElement*,class_ExtAlloc::Allocator<class_clRcvElement*>_>::begin
            ((list<class_clRcvElement*,class_ExtAlloc::Allocator<class_clRcvElement*>_> *)
             (this + 0x10));
  (**(code **)(iVar2 + 0x10))();
  _STL::_List_base<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_>::clear
            (this_01);
  _STL::
  _STLP_alloc_proxy<struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>*,struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
  ::deallocate((_STLP_alloc_proxy<struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>*,struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
                *)this_01,
               *(_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
                 **)this_01,1);
  *(undefined ***)this = &clPointerList<class_CConnection*>::_vftable_;
  iVar2 = *(int *)this;
  _STL::list<class_clRcvElement*,class_ExtAlloc::Allocator<class_clRcvElement*>_>::begin(this_00);
  (**(code **)(iVar2 + 0x10))(&stack0xffffffd8);
  piVar5 = (int *)**(int **)this_00;
  if (piVar5 != *(int **)this_00) {
    do {
      piVar3 = (int *)*piVar5;
      ExtAlloc_Free_4(piVar5);
      piVar5 = piVar3;
    } while (piVar3 != (int *)*(int *)this_00);
  }
  *(undefined4 *)*(undefined4 *)this_00 = *(undefined4 *)this_00;
  *(int *)(*(int *)this_00 + 4) = *(int *)this_00;
  ExtAlloc_Free_4(*(undefined4 *)this_00);
  ExceptionList = unaff_EDI;
  return;
}




/* from: libgsclient:Connection.cpp
   addr: 005AAFA0
   addr: 005AAFA0 */

void * __thiscall CConnectionList::_scalar_deleting_destructor_(CConnectionList *this,uint param_1)

{
  ~CConnectionList(this);
  if ((param_1 & 1) != 0) {
    ExtAlloc_Free_4(this);
  }
  return this;
}




/* from: libgsclient:Connection.cpp
   addr: 005AAFD0 */

CConnectionList * __thiscall CConnectionList::CConnectionList(CConnectionList *this)

{
  int iVar1;
  int in_stack_00000004;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005caab8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (in_stack_00000004 != 0) {
    ExceptionList = &local_c;
    *(undefined8 **)(this + 8) = &_vbtable_;
  }
  local_4 = 0;
  _STL::
  _STLP_alloc_proxy<struct__STL::_List_node<class_CConnection*>*,struct__STL::_List_node<class_CConnection*>,class_ExtAlloc::Allocator<class_CConnection*>_>
  ::
  STLP_alloc_proxy<struct__STL::_List_node<class_CConnection*>*,struct__STL::_List_node<class_CConnection*>,class_ExtAlloc::Allocator<class_CConnection*>_>
            ((_STLP_alloc_proxy<struct__STL::_List_node<class_CConnection*>*,struct__STL::_List_node<class_CConnection*>,class_ExtAlloc::Allocator<class_CConnection*>_>
              *)(this + 4),(Allocator<class_CConnection*> *)&stack0x00000004,
             (_List_node<class_CConnection*> *)0x0);
  iVar1 = ExtAlloc_Malloc_4(0xc);
  *(int *)iVar1 = iVar1;
  *(int *)(iVar1 + 4) = iVar1;
  *(int *)(this + 4) = iVar1;
  *(undefined ***)this = &clPointerList<class_CConnection*>::_vftable_;
  *(undefined8 **)(this + 0x14) = &clPointerList<class_CCurMessage*>::_vbtable_;
  *(undefined4 *)(this + 0x10) = 0;
  iVar1 = ExtAlloc_Malloc_4(0xc);
  *(int *)iVar1 = iVar1;
  *(int *)(iVar1 + 4) = iVar1;
  *(int *)(this + 0x10) = iVar1;
  *(undefined ***)(this + 0xc) = &clPointerList<class_CCurMessage*>::_vftable_;
  *(undefined ***)this = &_vftable_;
  ExceptionList = local_c;
  return this;
}




/* from: libgsclient:Connection.cpp
   addr: 005AB070
   addr: 005AB070 */

void * __thiscall
clPointerList<class_CConnection*>::_vector_deleting_destructor_
          (clPointerList<class_CConnection*> *this,uint param_1)

{
  ~clPointerList<class_CConnection*>(this);
  if ((param_1 & 1) != 0) {
    ExtAlloc_Free_4(this);
  }
  return this;
}




/* from: libgsclient:Connection.cpp
   addr: 005AB090
   addr: 005AB090 */

void * __thiscall
clPointerList<class_CCurMessage*>::_scalar_deleting_destructor_
          (clPointerList<class_CCurMessage*> *this,uint param_1)

{
  ~clPointerList<class_CCurMessage*>(this);
  if ((param_1 & 1) != 0) {
    ExtAlloc_Free_4(this);
  }
  return this;
}




/* from: libgsclient:Connection.cpp
   addr: 005AB0B0 */

uchar __thiscall
CConnectionList::AddConnection
          (CConnectionList *this,char *param_1,ushort param_2,uchar param_3,int param_4,int param_5,
          int param_6)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  uchar uVar4;
  CConnection *this_00;
  _List_node<class_clData*> *p_Var5;
  
  iVar2 = param_5;
  param_5 = (int)GetConnection(this,param_5);
  if ((CConnection *)param_5 == (CConnection *)0x0) {
    this_00 = (CConnection *)ExtAlloc_Malloc_4(0x98);
    if (this_00 == (CConnection *)0x0) {
      param_5 = 0;
    }
    else {
      param_5 = CConnection::CConnection(this_00);
    }
    uVar4 = CConnection::Connect
                      ((CConnection *)param_5,param_1,param_2,param_3,param_4,iVar2,param_6);
    iVar3 = param_5;
    if (uVar4 != '\0') {
      param_6 = **(undefined4 **)(this + 4);
      while (((undefined4 *)param_6 != *(undefined4 **)(this + 4) &&
             (*(int *)(*(int *)(param_6 + 8) + 8) <= iVar2))) {
        param_6 = *(int *)param_6;
      }
      _STL::
      _List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>::
      List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
                ((_List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
                  *)&param_4,
                 (_List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
                  *)&param_6);
      p_Var5 = _STL::list<class_clData*,class_ExtAlloc::Allocator<class_clData*>_>::M_create_node
                         ((list<class_clData*,class_ExtAlloc::Allocator<class_clData*>_> *)
                          (this + 4),(clData **)&param_5);
      puVar1 = *(undefined4 **)(param_4 + 4);
      *(int *)p_Var5 = param_4;
      *(undefined4 **)(p_Var5 + 4) = puVar1;
      *puVar1 = p_Var5;
      *(_List_node<class_clData*> **)(param_4 + 4) = p_Var5;
      return '\x01';
    }
    if (param_5 != 0) {
      CConnection::~CConnection((CConnection *)param_5);
      ExtAlloc_Free_4(iVar3);
    }
  }
  return '\0';
}




/* from: libgsclient:Connection.cpp
   addr: 005AB180 */

uchar __thiscall CConnectionList::Disconnect(CConnectionList *this,int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar1 = *(int **)(this + 4);
  piVar3 = (int *)*piVar1;
  if (piVar3 != piVar1) {
    do {
      iVar2 = *(int *)(piVar3[2] + 8);
      if (iVar2 == param_1) break;
      if (iVar2 != param_1 && param_1 <= iVar2) {
        return '\0';
      }
      piVar3 = (int *)*piVar3;
    } while (piVar3 != piVar1);
    if (piVar3 != piVar1) {
      (**(code **)(*(int *)this + 0x14))(&param_1,piVar3);
      return '\x01';
    }
  }
  return '\0';
}




/* from: libgsclient:Connection.cpp
   addr: 005AB1D0 */

int __thiscall CConnectionList::CheckConnection(CConnectionList *this)

{
  uchar uVar1;
  int *piVar2;
  
  piVar2 = (int *)**(int **)(this + 4);
  if (piVar2 != *(int **)(this + 4)) {
    do {
      uVar1 = CConnection::CheckConnection((CConnection *)piVar2[2]);
      if (uVar1 == '\0') {
        return *(int *)(piVar2[2] + 8);
      }
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)*(int *)(this + 4));
  }
  return 0;
}




/* from: libgsclient:Connection.cpp
   addr: 005AB200 */

uchar __thiscall
CConnectionList::SendMessageA
          (CConnectionList *this,int param_1,uchar param_2,uchar param_3,clDataList *param_4)

{
  uchar uVar1;
  CConnection *this_00;
  
  this_00 = GetConnection(this,param_1);
  if (this_00 != (CConnection *)0x0) {
    uVar1 = CConnection::SendMessageA(this_00,param_2,param_3,param_4);
    return uVar1;
  }
  return '\0';
}




/* from: libgsclient:Connection.cpp
   addr: 005AB230 */

CCurMessage * __thiscall CConnectionList::ReadMessage(CConnectionList *this)

{
  undefined4 *puVar1;
  void **ppvVar2;
  _List_node<class_clData*> *p_Var3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  CCurMessage *local_18;
  int local_14;
  CCurMessage *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005caada;
  local_c = ExceptionList;
  piVar6 = (int *)**(int **)(this + 4);
  ExceptionList = &local_c;
  ppvVar2 = &local_c;
  if (piVar6 != *(int **)(this + 4)) {
    do {
      local_18 = CConnection::ReadMessage((CConnection *)piVar6[2]);
      if (local_18 != (CCurMessage *)0x0) {
        _STL::list<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_>::end
                  ((list<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_> *)
                   (this + 0x10));
        p_Var3 = _STL::list<class_clData*,class_ExtAlloc::Allocator<class_clData*>_>::M_create_node
                           ((list<class_clData*,class_ExtAlloc::Allocator<class_clData*>_> *)
                            (this + 0x10),(clData **)&local_18);
        puVar1 = *(undefined4 **)(local_14 + 4);
        *(int *)p_Var3 = local_14;
        *(undefined4 **)(p_Var3 + 4) = puVar1;
        *puVar1 = p_Var3;
        *(_List_node<class_clData*> **)(local_14 + 4) = p_Var3;
      }
      piVar6 = (int *)*piVar6;
      ppvVar2 = (void **)ExceptionList;
    } while (piVar6 != (int *)*(int *)(this + 4));
  }
  ExceptionList = ppvVar2;
  piVar6 = *(int **)(this + 0x10);
  iVar5 = 0;
  piVar4 = (int *)*piVar6;
  if (piVar4 != piVar6) {
    do {
      piVar4 = (int *)*piVar4;
      iVar5 = iVar5 + 1;
    } while (piVar4 != piVar6);
    if (iVar5 != 0) {
      local_10 = (CCurMessage *)ExtAlloc_Malloc_4(0x1c);
      local_4 = 0;
      if (local_10 == (CCurMessage *)0x0) {
        local_18 = (CCurMessage *)0x0;
      }
      else {
        local_18 = (CCurMessage *)
                   CCurMessage::CCurMessage(local_10,*(CCurMessage **)(**(int **)(this + 0x10) + 8))
        ;
      }
      local_4 = 0xffffffff;
      (**(code **)(*(int *)(this + 0xc) + 8))();
      ExceptionList = local_c;
      return local_18;
    }
  }
  ExceptionList = local_c;
  return (CCurMessage *)0x0;
}




/* from: libgsclient:Connection.cpp
   addr: 005AB320 */

CConnection * __thiscall CConnectionList::GetConnection(CConnectionList *this,int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)**(undefined4 **)(this + 4);
  while( true ) {
    if (puVar1 == *(undefined4 **)(this + 4)) {
      return (CConnection *)0x0;
    }
    if (*(int *)(puVar1[2] + 8) == param_1) break;
    if (param_1 < *(int *)(puVar1[2] + 8)) {
      return (CConnection *)0x0;
    }
    puVar1 = (undefined4 *)*puVar1;
  }
  return (CConnection *)puVar1[2];
}




/* from: libgsclient:Connection.cpp
   addr: 005AB350 */

void __thiscall
clPointerList<class_CConnection*>::~clPointerList<class_CConnection*>
          (clPointerList<class_CConnection*> *this)

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
  
  puStack_8 = &LAB_005cab17;
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




/* from: libgsclient:Connection.cpp
   addr: 005AB3E0 */

void __thiscall
clPointerList<class_CConnection*>::pop_front(clPointerList<class_CConnection*> *this)

{
  int *piVar1;
  CConnection *this_00;
  int *piVar2;
  int iVar3;
  
  piVar1 = *(int **)(this + 4);
  if ((int *)*piVar1 != piVar1) {
    this_00 = *(CConnection **)(*piVar1 + 8);
    if (this_00 != (CConnection *)0x0) {
      CConnection::~CConnection(this_00);
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




/* from: libgsclient:Connection.cpp
   addr: 005AB420 */

void __thiscall clPointerList<class_CConnection*>::pop_back(clPointerList<class_CConnection*> *this)

{
  int *piVar1;
  CConnection *this_00;
  int *piVar2;
  int iVar3;
  _List_iterator<class_clGameMessage*,struct__STL::_Nonconst_traits<class_clGameMessage*>_> *p_Var4;
  clPointerList<class_CConnection*> *local_4;
  
  piVar1 = *(int **)(this + 4);
  if ((int *)*piVar1 != piVar1) {
    this_00 = *(CConnection **)(piVar1[1] + 8);
    if (this_00 != (CConnection *)0x0) {
      local_4 = this;
      CConnection::~CConnection(this_00);
      ExtAlloc_Free_4(this_00);
    }
    local_4 = *(clPointerList<class_CConnection*> **)(this + 4);
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




/* from: libgsclient:Connection.cpp
   addr: 005AB470 */

void __thiscall
clPointerList<class_CConnection*>::erase
          (clPointerList<class_CConnection*> *this,int *param_2,int *param_3)

{
  CConnection *this_00;
  int *piVar1;
  int iVar2;
  
  if ((param_3 != *(int **)(this + 4)) &&
     (this_00 = (CConnection *)param_3[2], this_00 != (CConnection *)0x0)) {
    CConnection::~CConnection(this_00);
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




/* from: libgsclient:Connection.cpp
   addr: 005AB4B0 */

void __thiscall
clPointerList<class_CConnection*>::erase
          (clPointerList<class_CConnection*> *this,undefined4 *param_2,int *param_3,int *param_4)

{
  CConnection *this_00;
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  piVar3 = param_4;
  piVar4 = param_3;
  if (param_3 != param_4) {
    do {
      if (piVar4 == *(int **)(this + 4)) break;
      this_00 = (CConnection *)piVar4[2];
      if (this_00 != (CConnection *)0x0) {
        CConnection::~CConnection(this_00);
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




/* from: libgsclient:Connection.cpp
   addr: 005AB530 */

void __thiscall
clPointerList<class_CCurMessage*>::~clPointerList<class_CCurMessage*>
          (clPointerList<class_CCurMessage*> *this)

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
  
  puStack_8 = &LAB_005cab57;
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




/* from: libgsclient:Connection.cpp
   addr: 005AB5C0
   addr: 005AB5C0 */

void __thiscall
clPointerList<class_clRcvElement*>::erase
          (clPointerList<class_clRcvElement*> *this,int *param_2,int *param_3)

{
  clRcvElement *this_00;
  int *piVar1;
  int iVar2;
  
  if ((param_3 != *(int **)(this + 4)) &&
     (this_00 = (clRcvElement *)param_3[2], this_00 != (clRcvElement *)0x0)) {
    clRcvElement::~clRcvElement(this_00);
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




/* from: libgsclient:Connection.cpp
   addr: 005AB600
   addr: 005AB600 */

void __thiscall
clPointerList<class_CCurMessage*>::erase
          (clPointerList<class_CCurMessage*> *this,undefined4 *param_2,int *param_3,int *param_4)

{
  clRcvElement *this_00;
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  piVar3 = param_4;
  piVar4 = param_3;
  if (param_3 != param_4) {
    do {
      if (piVar4 == *(int **)(this + 4)) break;
      this_00 = (clRcvElement *)piVar4[2];
      if (this_00 != (clRcvElement *)0x0) {
        clRcvElement::~clRcvElement(this_00);
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

