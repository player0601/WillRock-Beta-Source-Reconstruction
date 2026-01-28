
/* WARNING: Removing unreachable block (ram,0x0058a121) */
/* WARNING: Removing unreachable block (ram,0x0058a125) */
/* WARNING: Removing unreachable block (ram,0x0058a129) */
/* WARNING: Removing unreachable block (ram,0x0058a13c) */
/* from: libgshttp:GSHttpDownload.cpp
   addr: 00589F80 */

CHttpRequest * __thiscall
CHttpRequest::CHttpRequest
          (CHttpRequest *this,REQUEST_TYPE param_1,uchar param_2,char *param_3,
          _func_void_uint_GSHTTPResult_char_ptr_uint_uchar_void_ptr *param_4,
          _func_void_uint_GSHTTPState_char_ptr_uint_uint_uint_void_ptr *param_5,void *param_6,
          char *param_7,char *param_8,char *param_9,uint param_10)

{
  _String_base<char,class_ExtAlloc::Allocator<char>_> *p_Var1;
  _String_base<char,class_ExtAlloc::Allocator<char>_> *p_Var2;
  clTCPProtocol *this_00;
  int iVar3;
  _String_base<char,class_ExtAlloc::Allocator<char>_> *this_01;
  CHttpRequest *pCVar4;
  int in_stack_0000002c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c7a01;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (in_stack_0000002c != 0) {
    ExceptionList = &local_c;
    *(undefined1 **)(this + 4) = &_vbtable_;
  }
  *(undefined ***)this = &clExtalloc_Override_Baseclass::_vftable_;
  *(undefined1 **)(this + 0x1a4) =
       &ExtAlloc::
        vector<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
        ::_vbtable_;
  local_4 = 3;
  *(undefined4 *)(this + 0x198) = 0;
  *(undefined4 *)(this + 0x19c) = 0;
  _STL::
  _STLP_alloc_proxy<struct__STL::_List_node<class_CConnection*>*,struct__STL::_List_node<class_CConnection*>,class_ExtAlloc::Allocator<class_CConnection*>_>
  ::
  STLP_alloc_proxy<struct__STL::_List_node<class_CConnection*>*,struct__STL::_List_node<class_CConnection*>,class_ExtAlloc::Allocator<class_CConnection*>_>
            ((_STLP_alloc_proxy<struct__STL::_List_node<class_CConnection*>*,struct__STL::_List_node<class_CConnection*>,class_ExtAlloc::Allocator<class_CConnection*>_>
              *)(this + 0x1a0),(Allocator<class_CConnection*> *)&stack0x0000002c,
             (_List_node<class_CConnection*> *)0x0);
  local_4 = 1;
  *(undefined ***)this = &_vftable_;
  this_00 = (clTCPProtocol *)ExtAlloc_Malloc_4(0x54);
  if (this_00 == (clTCPProtocol *)0x0) {
    this_00 = (clTCPProtocol *)0x0;
  }
  else {
    *(undefined1 **)(this_00 + 4) = &clTCPClient::_vbtable_;
    local_4 = CONCAT31(local_4._1_3_,6);
    clTCPProtocol::clTCPProtocol(this_00);
    *(undefined ***)this_00 = &clTCPClient::_vftable_;
    local_4 = 0;
  }
  *(clTCPProtocol **)(this + 8) = this_00;
  pCVar4 = this + 0x5c6;
  for (iVar3 = 0x100; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)pCVar4 = 0;
    pCVar4 = pCVar4 + 4;
  }
  pCVar4 = this + 0x9c6;
  for (iVar3 = 0x20; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)pCVar4 = 0;
    pCVar4 = pCVar4 + 4;
  }
  *pCVar4 = (CHttpRequest)0x0;
  pCVar4 = this + 0x1c5;
  for (iVar3 = 0x100; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)pCVar4 = 0;
    pCVar4 = pCVar4 + 4;
  }
  *pCVar4 = (CHttpRequest)0x0;
  local_4 = CONCAT31(local_4._1_3_,4);
  strncpy((char *)(this + 0x1c5),param_3,0x400);
  if (param_8 != (char *)0x0) {
    strncpy((char *)(this + 0x9c6),param_8,0x80);
  }
  if (param_7 != (char *)0x0) {
    strncpy((char *)(this + 0x5c6),param_7,0x3ff);
  }
  *(REQUEST_TYPE *)(this + 0x1b0) = param_1;
  this[0x1c4] = (CHttpRequest)param_2;
  *(undefined4 *)(this + 0x1b4) = 0;
  *(_func_void_uint_GSHTTPState_char_ptr_uint_uint_uint_void_ptr **)(this + 0x1b8) = param_5;
  *(_func_void_uint_GSHTTPResult_char_ptr_uint_uchar_void_ptr **)(this + 0x1bc) = param_4;
  *(void **)(this + 0x1c0) = param_6;
  p_Var2 = *(_String_base<char,class_ExtAlloc::Allocator<char>_> **)(this + 0x19c);
  p_Var1 = *(_String_base<char,class_ExtAlloc::Allocator<char>_> **)(this + 0x198);
  for (this_01 = p_Var1; this_01 != p_Var2; this_01 = this_01 + 0xc) {
    local_4._1_3_ = (undefined3)((uint)local_4 >> 8);
    local_4._0_1_ = 7;
    wrUI_WINDOW::OnChildKbdFocus
              (*(wrUI_WINDOW **)this_01,(int)*(wrUI_WINDOW **)this_01,*(int *)(this_01 + 4) + 1);
    local_4 = CONCAT31(local_4._1_3_,4);
    _STL::_String_base<char,class_ExtAlloc::Allocator<char>_>::
    ~_String_base<char,class_ExtAlloc::Allocator<char>_>(this_01);
  }
  *(_String_base<char,class_ExtAlloc::Allocator<char>_> **)(this + 0x19c) = p_Var1;
  *(undefined4 *)(this + 0xa48) = 0xffffffff;
  *(undefined4 *)(this + 0xa4c) = 0;
  *(undefined4 *)(this + 0xa50) = 0;
  *(undefined4 *)(this + 0xa54) = 0;
  pCVar4 = this + 0xc;
  for (iVar3 = 0x61; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)pCVar4 = 0;
    pCVar4 = pCVar4 + 4;
  }
  *(uint *)(this + 0xa68) = param_10;
  this[0x194] = (CHttpRequest)0x0;
  this[0xa47] = (CHttpRequest)0x0;
  this[0xa70] = (CHttpRequest)0x0;
  *(char **)(this + 0xa60) = param_9;
  *(undefined4 *)(this + 0xa64) = 0;
  *(undefined4 *)(this + 0xa74) = 0;
  *(undefined4 *)(this + 0xa78) = 0;
  *(undefined4 *)(this + 0xa7c) = 0;
  *(undefined4 *)(this + 0xa80) = 0;
  *(undefined4 *)(this + 0x1a8) = 0;
  *(undefined4 *)(this + 0x1ac) = 0;
  *(undefined4 *)(this + 0xa58) = 0;
  *(undefined4 *)(this + 0xa5c) = 0;
  *(undefined4 *)(this + 0xa6c) = 0;
  ExceptionList = local_c;
  return this;
}




/* from: libgshttp:GSHttpDownload.cpp
   addr: 0058A240
   addr: 0058A240 */

void * __thiscall CHttpRequest::_vector_deleting_destructor_(CHttpRequest *this,uint param_1)

{
  ~CHttpRequest(this);
  if ((param_1 & 1) != 0) {
    ExtAlloc_Free_4(this);
  }
  return this;
}




/* from: libgshttp:GSHttpDownload.cpp
   addr: 0058A270 */

void __thiscall
ExtAlloc::
vector<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
::
~vector<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
          (vector<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
           *this)

{
  _String_base<char,class_ExtAlloc::Allocator<char>_> *p_Var1;
  void **ppvVar2;
  _String_base<char,class_ExtAlloc::Allocator<char>_> *this_00;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_005c7a23;
  p_Var1 = *(_String_base<char,class_ExtAlloc::Allocator<char>_> **)(this + 4);
  this_00 = *(_String_base<char,class_ExtAlloc::Allocator<char>_> **)this;
  local_4 = 0;
  ppvVar2 = &local_c;
  local_c = ExceptionList;
  for (; ExceptionList = ppvVar2, this_00 != p_Var1; this_00 = this_00 + 0xc) {
    local_4._1_3_ = (uint3)((uint)local_4 >> 8);
    local_4._0_1_ = 1;
    _STL::_String_base<char,class_ExtAlloc::Allocator<char>_>::
    ~_String_base<char,class_ExtAlloc::Allocator<char>_>(this_00);
    local_4 = (uint)local_4._1_3_ << 8;
    _STL::
    _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
    ::
    ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
              ((_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
                *)(this_00 + 8));
    ppvVar2 = (void **)ExceptionList;
  }
  if (*(int *)this != 0) {
    ExtAlloc_Free_4(*(int *)this);
  }
  ExceptionList = local_c;
  return;
}




/* from: libgshttp:GSHttpDownload.cpp
   addr: 0058A2F0 */

void __thiscall CHttpRequest::~CHttpRequest(CHttpRequest *this)

{
  _String_base<char,class_ExtAlloc::Allocator<char>_> *p_Var1;
  int iVar2;
  _String_base<char,class_ExtAlloc::Allocator<char>_> *this_00;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c7a4e;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = &_vftable_;
  local_4 = 1;
  CloseOutputFile(this);
  Disconnect(this);
  if (*(int *)(this + 0xa74) != 0) {
    ExtAlloc_Free_4(*(int *)(this + 0xa74));
  }
  if (*(int *)(this + 0xa7c) != 0) {
    ExtAlloc_Free_4(*(int *)(this + 0xa7c));
  }
  if ((this[0xa70] != (CHttpRequest)0x0) && (*(int *)(this + 0xa60) != 0)) {
    ExtAlloc_Free_4(*(int *)(this + 0xa60));
  }
  if (*(int *)(this + 0x1a8) != 0) {
    ExtAlloc_Free_4(*(int *)(this + 0x1a8));
  }
  if (*(int *)(this + 0xa50) != 0) {
    ExtAlloc_Free_4(*(int *)(this + 0xa50));
  }
  if (*(undefined4 **)(this + 8) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 8))(1);
  }
  if (*(int *)(this + 0xa58) != 0) {
    ExtAlloc_Free_4(*(int *)(this + 0xa58));
  }
  p_Var1 = *(_String_base<char,class_ExtAlloc::Allocator<char>_> **)(this + 0x19c);
  this_00 = *(_String_base<char,class_ExtAlloc::Allocator<char>_> **)(this + 0x198);
  local_4 = CONCAT31(local_4._1_3_,2);
  for (; this_00 != p_Var1; this_00 = this_00 + 0xc) {
    _STL::_String_base<char,class_ExtAlloc::Allocator<char>_>::
    ~_String_base<char,class_ExtAlloc::Allocator<char>_>(this_00);
  }
  iVar2 = *(int *)(this + 0x198);
  if (iVar2 != 0) {
    ExtAlloc_Free_4(iVar2);
  }
  *(undefined ***)this = &clExtalloc_Override_Baseclass::_vftable_;
  ExceptionList = pvStack_c;
  return;
}




/* from: libgshttp:GSHttpDownload.cpp
   addr: 0058A3F0 */

uchar __thiscall CHttpRequest::Connect(CHttpRequest *this)

{
  CHttpRequest CVar1;
  
  if (this[0xa47] != (CHttpRequest)0x0) {
    return '\x01';
  }
  CVar1 = (CHttpRequest)
          clTCPClient::ConnectHost
                    (*(clTCPClient **)(this + 8),(char *)(this + 0xc),*(ushort *)(this + 0x18e));
  this[0xa47] = CVar1;
  return (uchar)CVar1;
}




/* from: libgshttp:GSHttpDownload.cpp
   addr: 0058A420 */

uchar __thiscall CHttpRequest::Disconnect(CHttpRequest *this)

{
  if (this[0xa47] != (CHttpRequest)0x0) {
    clTCPProtocol::Close(*(clTCPProtocol **)(this + 8));
    this[0xa47] = (CHttpRequest)0x0;
  }
  return '\x01';
}




/* from: libgshttp:GSHttpDownload.cpp
   addr: 0058A440 */

uchar __thiscall CHttpRequest::ReceiveHeadData(CHttpRequest *this)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  char *pcVar6;
  char local_400 [1024];
  
  *(undefined4 *)(this + 0xa80) = 0;
  uVar1 = clTCPProtocol::Receive(*(clTCPProtocol **)(this + 8),local_400,0x400);
  if (0 < (int)uVar1) {
    uVar5 = *(int *)(this + 0xa5c) + uVar1;
    iVar2 = ExtAlloc_Realloc_8(*(undefined4 *)(this + 0xa58),uVar5);
    *(int *)(this + 0xa58) = iVar2;
    pcVar4 = local_400;
    pcVar6 = (char *)(*(int *)(this + 0xa5c) + iVar2);
    for (uVar3 = uVar1 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar1 = uVar1 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
      *pcVar6 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      pcVar6 = pcVar6 + 1;
    }
    *(uint *)(this + 0xa5c) = uVar5;
    *(uint *)(this + 0xa6c) = uVar5;
    if (3 < uVar5) {
      uVar1 = 3;
      pcVar4 = (char *)(*(int *)(this + 0xa58) + 2);
      do {
        if (((((pcVar4[-2] == '\r') || (pcVar4[-2] == '\n')) &&
             ((pcVar4[-1] == '\r' || (pcVar4[-1] == '\n')))) &&
            ((*pcVar4 == '\r' || (*pcVar4 == '\n')))) &&
           ((pcVar4[1] == '\r' || (pcVar4[1] == '\n')))) {
          return '\x01';
        }
        pcVar4 = pcVar4 + 1;
        uVar1 = uVar1 + 1;
      } while (uVar1 < uVar5);
    }
  }
  return '\0';
}




/* from: libgshttp:GSHttpDownload.cpp
   addr: 0058A520 */

uchar __thiscall CHttpRequest::ReceiveFile(CHttpRequest *this)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  *(undefined4 *)(this + 0xa80) = 0;
  uVar1 = clTCPProtocol::Receive
                    (*(clTCPProtocol **)(this + 8),*(char **)(this + 0xa74),*(int *)(this + 0xa78));
  if (uVar1 == 0) {
    return '\x01';
  }
  if ((int)uVar1 < 1) {
    return '\0';
  }
  if (*(int *)(this + 0xa60) == 0) {
    *(uint *)(this + 0xa64) = *(int *)(this + 0xa64) + uVar1;
  }
  else {
    uVar5 = *(uint *)(this + 0xa6c);
    if (*(uint *)(this + 0xa68) <= uVar5) {
      return '\0';
    }
    uVar2 = *(uint *)(this + 0xa68) - uVar5;
    if (uVar1 <= uVar2) {
      uVar2 = uVar1;
    }
    puVar6 = *(undefined4 **)(this + 0xa74);
    puVar3 = (undefined4 *)(*(int *)(this + 0xa60) + uVar5);
    for (uVar4 = uVar2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar3 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar3 = puVar3 + 1;
    }
    for (uVar5 = uVar2 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar3 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
    *(uint *)(this + 0xa6c) = *(int *)(this + 0xa6c) + uVar2;
    *(uint *)(this + 0xa64) = *(int *)(this + 0xa64) + uVar2;
  }
  if (*(int *)(this + 0xa7c) != 0) {
    ExtAlloc_Free_4(*(int *)(this + 0xa7c));
  }
  puVar3 = (undefined4 *)ExtAlloc_Malloc_4(uVar1);
  *(undefined4 **)(this + 0xa7c) = puVar3;
  *(uint *)(this + 0xa80) = uVar1;
  puVar6 = *(undefined4 **)(this + 0xa74);
  for (uVar5 = uVar1 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar3 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar3 = puVar3 + 1;
  }
  for (uVar1 = uVar1 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined1 *)puVar3 = *(undefined1 *)puVar6;
    puVar6 = (undefined4 *)((int)puVar6 + 1);
    puVar3 = (undefined4 *)((int)puVar3 + 1);
  }
  return '\x01';
}




/* WARNING: Type propagation algorithm not settling */
/* from: libgshttp:GSHttpDownload.cpp
   addr: 0058A610 */

uchar __thiscall CHttpRequest::ReadHeaders(CHttpRequest *this)

{
  char cVar1;
  basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> bVar2;
  basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *pbVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *pbVar12;
  char *pcVar13;
  char *pcVar14;
  bool bVar15;
  Allocator<class_CConnection*> local_462;
  __false_type local_461;
  basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *local_460;
  _Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
  *local_45c;
  undefined4 local_458;
  int local_454;
  uint local_450;
  basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *local_44c;
  _Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
  *local_448 [2];
  int local_440;
  _String_base<char,class_ExtAlloc::Allocator<char>_> local_43c [12];
  _String_base<char,class_ExtAlloc::Allocator<char>_> local_430 [12];
  undefined4 local_424 [3];
  _String_base<char,class_ExtAlloc::Allocator<char>_> local_418 [11];
  char cStack_40d;
  basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> local_40c [1024]
  ;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c7b1d;
  local_c = ExceptionList;
  pbVar12 = (basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *)0x0
  ;
  puVar5 = (undefined4 *)local_40c;
  for (iVar8 = 0x100; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  local_450 = 0;
  ExceptionList = &local_c;
  while( true ) {
    pbVar3 = pbVar12 + *(int *)(this + 0xa58);
    bVar2 = *pbVar3;
    if ((((bVar2 == (basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>
                     )0xd) ||
         (bVar2 == (basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>
                    )0xa)) &&
        ((pbVar3[1] ==
          (basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>)0xd ||
         (pbVar3[1] ==
          (basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>)0xa))))
       && (((pbVar3[2] ==
             (basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>)0xd
            || (pbVar3[2] ==
                (basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>)
                0xa)) &&
           ((pbVar3[3] ==
             (basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>)0xd
            || (pbVar3[3] ==
                (basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>)
                0xa)))))) break;
    if ((bVar2 == (basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>
                  )0xd) ||
       (bVar2 == (basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>)
                 0xa)) {
      pcVar14 = (char *)((int)local_40c + local_450);
      *pcVar14 = '\0';
      for (pcVar13 = (char *)local_40c; pcVar13 != pcVar14; pcVar13 = pcVar13 + 1) {
        iVar8 = toupper((int)*pcVar13);
        *pcVar13 = (char)iVar8;
      }
      local_45c = (_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
                   *)0x0;
      local_458 = 0;
      local_4 = 5;
      _STL::
      _STLP_alloc_proxy<struct__STL::_List_node<class_CConnection*>*,struct__STL::_List_node<class_CConnection*>,class_ExtAlloc::Allocator<class_CConnection*>_>
      ::
      STLP_alloc_proxy<struct__STL::_List_node<class_CConnection*>*,struct__STL::_List_node<class_CConnection*>,class_ExtAlloc::Allocator<class_CConnection*>_>
                ((_STLP_alloc_proxy<struct__STL::_List_node<class_CConnection*>*,struct__STL::_List_node<class_CConnection*>,class_ExtAlloc::Allocator<class_CConnection*>_>
                  *)&local_454,&local_462,(_List_node<class_CConnection*> *)0x0);
      uVar10 = 0xffffffff;
      pcVar14 = (char *)local_40c;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        cVar1 = *pcVar14;
        pcVar14 = pcVar14 + 1;
      } while (cVar1 != '\0');
      local_4._0_1_ = 6;
      _STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::
      M_range_initialize((basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>
                          *)&local_45c,(char *)local_40c,(char *)((int)local_40c + (~uVar10 - 1)));
      pbVar3 = *(basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>
                 **)(this + 0x19c);
      local_4 = CONCAT31(local_4._1_3_,7);
      if (pbVar3 == *(basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>
                      **)(this + 0x1a0)) {
        _STL::
        vector<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
        ::M_insert_overflow((vector<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
                             *)(this + 0x198),pbVar3,
                            (basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>
                             *)&local_45c,&local_461,1,true);
      }
      else {
        local_4 = CONCAT31(local_4._1_3_,8);
        local_460 = pbVar3;
        local_44c = pbVar3;
        if (pbVar3 != (basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>
                       *)0x0) {
          _STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::
          basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>
                    (pbVar3,(basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>
                             *)&local_45c);
        }
        *(int *)(this + 0x19c) = *(int *)(this + 0x19c) + 0xc;
      }
      local_4 = CONCAT31(local_4._1_3_,9);
      _STL::_String_base<char,class_ExtAlloc::Allocator<char>_>::
      ~_String_base<char,class_ExtAlloc::Allocator<char>_>
                ((_String_base<char,class_ExtAlloc::Allocator<char>_> *)&local_45c);
      uVar10 = local_450;
      puVar5 = (undefined4 *)local_40c;
      for (local_450 = local_450 >> 2; local_450 != 0; local_450 = local_450 - 1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
      local_450 = 0;
      local_4 = 0xffffffff;
      pbVar12 = pbVar12 + 1;
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined1 *)puVar5 = 0;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
    }
    else {
      *(basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *)
       ((int)local_40c + local_450) = bVar2;
      local_450 = local_450 + 1;
    }
    pbVar12 = pbVar12 + 1;
    if (*(basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> **)
         (this + 0xa6c) < pbVar12) goto LAB_0058a8c5;
  }
  pcVar14 = (char *)((int)local_40c + local_450);
  *pcVar14 = '\0';
  local_460 = pbVar12;
  for (pcVar13 = (char *)local_40c; pcVar13 != pcVar14; pcVar13 = pcVar13 + 1) {
    iVar8 = toupper((int)*pcVar13);
    *pcVar13 = (char)iVar8;
  }
  local_4 = 0;
  local_45c = (_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
               *)0x0;
  local_458 = 0;
  _STL::
  _STLP_alloc_proxy<struct__STL::_List_node<class_CConnection*>*,struct__STL::_List_node<class_CConnection*>,class_ExtAlloc::Allocator<class_CConnection*>_>
  ::
  STLP_alloc_proxy<struct__STL::_List_node<class_CConnection*>*,struct__STL::_List_node<class_CConnection*>,class_ExtAlloc::Allocator<class_CConnection*>_>
            ((_STLP_alloc_proxy<struct__STL::_List_node<class_CConnection*>*,struct__STL::_List_node<class_CConnection*>,class_ExtAlloc::Allocator<class_CConnection*>_>
              *)&local_454,(Allocator<class_CConnection*> *)&local_461,
             (_List_node<class_CConnection*> *)0x0);
  uVar10 = 0xffffffff;
  local_4._0_1_ = 1;
  pcVar14 = (char *)local_40c;
  do {
    if (uVar10 == 0) break;
    uVar10 = uVar10 - 1;
    cVar1 = *pcVar14;
    pcVar14 = pcVar14 + 1;
  } while (cVar1 != '\0');
  _STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::
  M_range_initialize((basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>
                      *)&local_45c,(char *)local_40c,(char *)((int)local_40c + (~uVar10 - 1)));
  pbVar3 = *(basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> **)
            (this + 0x19c);
  local_4 = CONCAT31(local_4._1_3_,2);
  if (pbVar3 == *(basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>
                  **)(this + 0x1a0)) {
    _STL::
    vector<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
    ::M_insert_overflow((vector<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
                         *)(this + 0x198),pbVar3,
                        (basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>
                         *)&local_45c,(__false_type *)&local_462,1,true);
  }
  else {
    local_4 = CONCAT31(local_4._1_3_,3);
    local_460 = pbVar3;
    local_44c = pbVar3;
    if (pbVar3 != (basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>
                   *)0x0) {
      _STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::
      basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>
                (pbVar3,(basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>
                         *)&local_45c);
    }
    *(int *)(this + 0x19c) = *(int *)(this + 0x19c) + 0xc;
  }
  local_4 = CONCAT31(local_4._1_3_,4);
  _STL::_String_base<char,class_ExtAlloc::Allocator<char>_>::
  ~_String_base<char,class_ExtAlloc::Allocator<char>_>
            ((_String_base<char,class_ExtAlloc::Allocator<char>_> *)&local_45c);
  puVar5 = (undefined4 *)local_40c;
  for (uVar10 = local_450 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  local_4 = 0xffffffff;
  pbVar12 = pbVar12 + 4;
  for (uVar10 = local_450 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
    *(undefined1 *)puVar5 = 0;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  }
LAB_0058a8c5:
  *(basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> **)
   (this + 0x1ac) = pbVar12;
  local_460 = pbVar12;
  puVar4 = (undefined4 *)ExtAlloc_Malloc_4(pbVar12);
  uVar10 = *(uint *)(this + 0x1ac);
  *(undefined4 **)(this + 0x1a8) = puVar4;
  puVar5 = *(undefined4 **)(this + 0xa58);
  for (uVar9 = uVar10 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *puVar4 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar4 = puVar4 + 1;
  }
  for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
    *(undefined1 *)puVar4 = *(undefined1 *)puVar5;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
    puVar4 = (undefined4 *)((int)puVar4 + 1);
  }
  pbVar12 = *(basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> **)
             (this + 0x198);
  if (pbVar12 ==
      *(basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> **)
       (this + 0x19c)) goto LAB_0058ab50;
  do {
    puVar5 = (undefined4 *)
             _STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>
             ::substr(pbVar12,(uint)local_43c,0);
    uVar10 = 0xffffffff;
    pcVar14 = &s_HTTP_1_1_;
    do {
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      cVar1 = *pcVar14;
      pcVar14 = pcVar14 + 1;
    } while (cVar1 != '\0');
    iVar8 = ~uVar10 - 1;
    if (puVar5[1] - (int)*puVar5 == iVar8) {
      bVar15 = true;
      pcVar14 = (char *)*puVar5;
      pcVar13 = &s_HTTP_1_1_;
      do {
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        bVar15 = *pcVar14 == *pcVar13;
        pcVar14 = pcVar14 + 1;
        pcVar13 = pcVar13 + 1;
      } while (bVar15);
      local_462 = (Allocator<class_CConnection*>)0x1;
      if (!bVar15) goto LAB_0058a947;
    }
    else {
LAB_0058a947:
      local_462 = (Allocator<class_CConnection*>)0x0;
    }
    local_4 = 10;
    _STL::_String_base<char,class_ExtAlloc::Allocator<char>_>::
    ~_String_base<char,class_ExtAlloc::Allocator<char>_>(local_43c);
    local_4 = 0xffffffff;
    if (local_462 != (Allocator<class_CConnection*>)0x0) {
      puVar5 = (undefined4 *)
               _STL::
               basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::
               substr(pbVar12,(uint)local_418,9);
      iVar8 = atoi((char *)*puVar5);
      *(int *)(this + 0xa4c) = iVar8;
      local_4 = 0xb;
      _STL::_String_base<char,class_ExtAlloc::Allocator<char>_>::
      ~_String_base<char,class_ExtAlloc::Allocator<char>_>(local_418);
      local_4 = 0xffffffff;
      piVar6 = (int *)_STL::
                      basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>
                      ::substr(pbVar12,(uint)local_430,0xd);
      *(int *)(this + 0xa54) = piVar6[1] - *piVar6;
      local_4 = 0xc;
      _STL::_String_base<char,class_ExtAlloc::Allocator<char>_>::
      ~_String_base<char,class_ExtAlloc::Allocator<char>_>(local_430);
      local_4 = 0xffffffff;
      if (*(int *)(this + 0xa54) == 0) {
        ExceptionList = local_c;
        return '\0';
      }
      puVar5 = (undefined4 *)ExtAlloc_Malloc_4(*(int *)(this + 0xa54));
      uVar10 = *(uint *)(this + 0xa54);
      *(undefined4 **)(this + 0xa50) = puVar5;
      for (uVar9 = uVar10 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined1 *)puVar5 = 0;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
      puVar5 = (undefined4 *)
               _STL::
               basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::
               substr(pbVar12,(uint)&local_45c,0xd);
      uVar10 = *(uint *)(this + 0xa54);
      puVar5 = (undefined4 *)*puVar5;
      puVar4 = *(undefined4 **)(this + 0xa50);
      for (uVar9 = uVar10 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *puVar4 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar4 = puVar4 + 1;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined1 *)puVar4 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar4 = (undefined4 *)((int)puVar4 + 1);
      }
      local_4 = 0xd;
      _STL::
      _STLP_alloc_proxy<struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>*,struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
      ::deallocate((_STLP_alloc_proxy<struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>*,struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
                    *)&local_454,local_45c,local_454 - (int)local_45c);
    }
    local_4 = 0xffffffff;
    if (*(int *)(this + 0xa4c) == 0) {
      ExceptionList = local_c;
      return '\0';
    }
    puVar5 = (undefined4 *)
             _STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>
             ::substr(pbVar12,(uint)local_448,0);
    uVar10 = 0xffffffff;
    pcVar14 = s_CONTENT_LENGTH__;
    do {
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      cVar1 = *pcVar14;
      pcVar14 = pcVar14 + 1;
    } while (cVar1 != '\0');
    iVar8 = ~uVar10 - 1;
    if (puVar5[1] - (int)*puVar5 == iVar8) {
      bVar15 = true;
      pcVar14 = (char *)*puVar5;
      pcVar13 = s_CONTENT_LENGTH__;
      do {
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        bVar15 = *pcVar14 == *pcVar13;
        pcVar14 = pcVar14 + 1;
        pcVar13 = pcVar13 + 1;
      } while (bVar15);
      local_462 = (Allocator<class_CConnection*>)0x1;
      if (!bVar15) goto LAB_0058aad3;
    }
    else {
LAB_0058aad3:
      local_462 = (Allocator<class_CConnection*>)0x0;
    }
    local_4 = 0xe;
    _STL::
    _STLP_alloc_proxy<struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>*,struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
    ::deallocate((_STLP_alloc_proxy<struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>*,struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
                  *)&local_440,local_448[0],local_440 - (int)local_448[0]);
    local_4 = 0xffffffff;
    if (local_462 != (Allocator<class_CConnection*>)0x0) {
      puVar5 = (undefined4 *)
               _STL::
               basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::
               substr(pbVar12,(uint)local_424,0x10);
      iVar8 = atoi((char *)*puVar5);
      *(int *)(this + 0xa48) = iVar8;
      ExtAlloc_Free_4(local_424[0]);
    }
    pbVar12 = pbVar12 + 0xc;
    if (pbVar12 ==
        *(basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> **)
         (this + 0x19c)) {
LAB_0058ab50:
      pbVar12 = local_460;
      uVar10 = *(int *)(this + 0xa6c) - (int)local_460;
      if (*(int *)(this + 0xa7c) != 0) {
        ExtAlloc_Free_4(*(int *)(this + 0xa7c));
      }
      if (uVar10 != 0) {
        pbVar3 = (basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>
                  *)ExtAlloc_Malloc_4(uVar10);
        *(basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> **)
         (this + 0xa7c) = pbVar3;
        *(uint *)(this + 0xa80) = uVar10;
        pbVar12 = pbVar12 + *(int *)(this + 0xa58);
        for (uVar9 = uVar10 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pbVar3 = *(undefined4 *)pbVar12;
          pbVar12 = pbVar12 + 4;
          pbVar3 = pbVar3 + 4;
        }
        for (uVar9 = uVar10 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *pbVar3 = *pbVar12;
          pbVar12 = pbVar12 + 1;
          pbVar3 = pbVar3 + 1;
        }
      }
      *(uint *)(this + 0xa64) = uVar10;
      if ((((*(int *)(this + 0x1b0) == 0) || (*(int *)(this + 0x1b0) == 1)) &&
          (*(int *)(this + 0xa4c) == 200)) && (iVar8 = *(int *)(this + 0xa48), 0 < iVar8)) {
        if (*(undefined4 **)(this + 0xa60) == (undefined4 *)0x0) {
          *(int *)(this + 0xa68) = iVar8;
          puVar5 = (undefined4 *)ExtAlloc_Malloc_4(iVar8);
          uVar10 = *(uint *)(this + 0xa48);
          *(undefined4 **)(this + 0xa60) = puVar5;
          for (uVar9 = uVar10 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
            *puVar5 = 0;
            puVar5 = puVar5 + 1;
          }
          for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
            *(undefined1 *)puVar5 = 0;
            puVar5 = (undefined4 *)((int)puVar5 + 1);
          }
          uVar10 = *(uint *)(this + 0xa80);
          puVar5 = *(undefined4 **)(this + 0xa7c);
          puVar4 = *(undefined4 **)(this + 0xa60);
          for (uVar9 = uVar10 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
            *puVar4 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar4 = puVar4 + 1;
          }
          for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
            *(undefined1 *)puVar4 = *(undefined1 *)puVar5;
            puVar5 = (undefined4 *)((int)puVar5 + 1);
            puVar4 = (undefined4 *)((int)puVar4 + 1);
          }
          this[0xa70] = (CHttpRequest)0x1;
          *(undefined4 *)(this + 0xa6c) = *(undefined4 *)(this + 0xa80);
        }
        else {
          uVar9 = *(uint *)(this + 0xa68);
          puVar5 = *(undefined4 **)(this + 0xa60);
          for (uVar11 = uVar9 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
            *puVar5 = 0;
            puVar5 = puVar5 + 1;
          }
          for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
            *(undefined1 *)puVar5 = 0;
            puVar5 = (undefined4 *)((int)puVar5 + 1);
          }
          if (*(uint *)(this + 0xa68) < uVar10) {
            uVar10 = *(uint *)(this + 0xa68);
          }
          puVar5 = *(undefined4 **)(this + 0xa7c);
          puVar4 = *(undefined4 **)(this + 0xa60);
          for (uVar9 = uVar10 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
            *puVar4 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar4 = puVar4 + 1;
          }
          for (uVar9 = uVar10 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
            *(undefined1 *)puVar4 = *(undefined1 *)puVar5;
            puVar5 = (undefined4 *)((int)puVar5 + 1);
            puVar4 = (undefined4 *)((int)puVar4 + 1);
          }
          *(uint *)(this + 0xa6c) = uVar10;
          this[0xa70] = (CHttpRequest)0x0;
        }
      }
      iVar8 = ((*(int *)(this + 0xa48) < 0x2801) - 1 & 0x1000) + 0x400;
      *(int *)(this + 0xa78) = iVar8;
      uVar7 = ExtAlloc_Malloc_4(iVar8);
      *(undefined4 *)(this + 0xa74) = uVar7;
      ExceptionList = local_c;
      return '\x01';
    }
  } while( true );
}




/* from: libgshttp:GSHttpDownload.cpp
   addr: 0058ACF0
   addr: 0058ACF0 */

void * __thiscall
clExtalloc_Override_Baseclass::_scalar_deleting_destructor_
          (clExtalloc_Override_Baseclass *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  if ((param_1 & 1) != 0) {
    ExtAlloc_Free_4(this);
  }
  return this;
}




/* from: libgshttp:GSHttpDownload.cpp
   addr: 0058AD10 */

uchar __thiscall CHttpRequest::SendRequest(CHttpRequest *this)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  char local_200 [512];
  
  pcVar4 = local_200;
  for (iVar2 = 0x80; iVar2 != 0; iVar2 = iVar2 + -1) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4[2] = '\0';
    pcVar4[3] = '\0';
    pcVar4 = pcVar4 + 4;
  }
  if (this + 0x5c6 == (CHttpRequest *)0x0) {
    snprintf(local_200,0x1ff,s_GET__s_HTTP_1_1__Host___s__User_,this + 0x8d,this + 0xc);
  }
  else {
    snprintf(local_200,0x1ff,s_GET__s_HTTP_1_1__Host___s__User_,this + 0x8d,this + 0xc,this + 0x5c6)
    ;
  }
  uVar3 = 0xffffffff;
  pcVar4 = local_200;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar2 = clTCPProtocol::Send(*(clTCPProtocol **)(this + 8),local_200,~uVar3 - 1);
  return iVar2 != 0;
}




/* from: libgshttp:GSHttpDownload.cpp
   addr: 0058ADA0 */

uchar __thiscall CHttpRequest::OpenOutputFile(CHttpRequest *this)

{
  CHttpRequest *_Filename;
  CHttpRequest CVar1;
  FILE *pFVar2;
  int iVar3;
  CHttpRequest *pCVar4;
  
  iVar3 = -1;
  _Filename = this + 0x9c6;
  pCVar4 = _Filename;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    CVar1 = *pCVar4;
    pCVar4 = pCVar4 + 1;
  } while (CVar1 != (CHttpRequest)0x0);
  if (iVar3 == -2) {
    return '\0';
  }
  if (this[0x194] != (CHttpRequest)0x0) {
    return '\x01';
  }
  pFVar2 = fopen((char *)_Filename,s_w);
  *(FILE **)(this + 400) = pFVar2;
  if (pFVar2 == (FILE *)0x0) {
    return '\0';
  }
  fclose(pFVar2);
  pFVar2 = fopen((char *)_Filename,s_ab);
  *(FILE **)(this + 400) = pFVar2;
  this[0x194] = (CHttpRequest)0x1;
  return '\x01';
}




/* from: libgshttp:GSHttpDownload.cpp
   addr: 0058AE20 */

uchar __thiscall CHttpRequest::CloseOutputFile(CHttpRequest *this)

{
  if (this[0x194] != (CHttpRequest)0x0) {
    if (*(FILE **)(this + 400) != (FILE *)0x0) {
      fclose(*(FILE **)(this + 400));
    }
    *(undefined4 *)(this + 400) = 0;
  }
  return '\x01';
}




/* from: libgshttp:GSHttpDownload.cpp
   addr: 0058AE50 */

void __thiscall
CHttpRequest::CompletedCallback(CHttpRequest *this,uint param_1,GSHTTPResult param_2)

{
  GSHTTPResult GVar1;
  
  if (*(code **)(this + 0x1bc) != (code *)0x0) {
    GVar1 = 2;
    if (*(int *)(this + 0xa48) <= *(int *)(this + 0xa64)) {
      GVar1 = param_2;
    }
    (**(code **)(this + 0x1bc))
              (param_1,GVar1,*(undefined4 *)(this + 0xa60),*(int *)(this + 0xa64),
               CONCAT31((int3)((uint)*(undefined4 *)(this + 0x1c0) >> 8),
                        this[0xa70] == (CHttpRequest)0x0),*(undefined4 *)(this + 0x1c0));
    if ((this[0xa70] != (CHttpRequest)0x0) && (*(int *)(this + 0xa60) != 0)) {
      ExtAlloc_Free_4(*(int *)(this + 0xa60));
    }
    *(undefined4 *)(this + 0xa60) = 0;
  }
  return;
}




/* from: libgshttp:GSHttpDownload.cpp
   addr: 0058AED0 */

void __thiscall CHttpRequest::ProgressCallback(CHttpRequest *this,uint param_1,GSHTTPState param_2)

{
  if (((param_2 == 5) &&
      (((*(int *)(this + 0x1b0) == 2 || (*(int *)(this + 0x1b0) == 3)) &&
       (*(size_t *)(this + 0xa80) != 0)))) && (*(FILE **)(this + 400) != (FILE *)0x0)) {
    fwrite(*(void **)(this + 0xa7c),1,*(size_t *)(this + 0xa80),*(FILE **)(this + 400));
  }
  if (*(code **)(this + 0x1b8) != (code *)0x0) {
    (**(code **)(this + 0x1b8))
              (param_1,param_2,*(undefined4 *)(this + 0xa7c),*(undefined4 *)(this + 0xa80),
               *(undefined4 *)(this + 0xa64),*(undefined4 *)(this + 0xa48),
               *(undefined4 *)(this + 0x1c0));
  }
  return;
}




/* from: libgshttp:GSHttpDownload.cpp
   addr: 0058AF50 */

CHttpDownload * __thiscall CHttpDownload::CHttpDownload(CHttpDownload *this)

{
  undefined1 *puVar1;
  CHttpDownload CStack00000004;
  
  if (_CStack00000004 != 0) {
    *(undefined1 **)(this + 4) = &_vbtable_;
  }
  *(undefined ***)this = &clExtalloc_Override_Baseclass::_vftable_;
  *(undefined8 **)(this + 0x14) =
       &ExtAlloc::map<unsigned_int,class_CHttpRequest*,struct__STL::less<unsigned_int>_>::_vbtable_;
  *(undefined4 *)(this + 8) = 0;
  puVar1 = (undefined1 *)ExtAlloc_Malloc_4(0x18);
  *(undefined1 **)(this + 8) = puVar1;
  *(undefined4 *)(this + 0xc) = 0;
  this[0x10] = CStack00000004;
  *puVar1 = 0;
  *(undefined4 *)(*(int *)(this + 8) + 4) = 0;
  *(int *)(*(int *)(this + 8) + 8) = *(int *)(this + 8);
  *(int *)(*(int *)(this + 8) + 0xc) = *(int *)(this + 8);
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 0x18) = 0;
  return this;
}




/* from: libgshttp:GSHttpDownload.cpp
   addr: 0058AFC0
   addr: 0058AFC0 */

void * __thiscall CHttpDownload::_scalar_deleting_destructor_(CHttpDownload *this,uint param_1)

{
  ~CHttpDownload(this);
  if ((param_1 & 1) != 0) {
    ExtAlloc_Free_4(this);
  }
  return this;
}




/* from: libgshttp:GSHttpDownload.cpp
   addr: 0058AFE0 */

void __thiscall CHttpDownload::~CHttpDownload(CHttpDownload *this)

{
  _Rb_tree<unsigned_int,struct__STL::pair<unsigned_int_const_,class_CHttpRequest*>,struct__STL::_Select1st<struct__STL::pair<unsigned_int_const_,class_CHttpRequest*>_>,struct__STL::less<unsigned_int>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_int_const_,class_CHttpRequest*>_>_>
  *this_00;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c7b53;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = &_vftable_;
  local_4 = 1;
  ClearAllRequest(this);
  this_00 = (_Rb_tree<unsigned_int,struct__STL::pair<unsigned_int_const_,class_CHttpRequest*>,struct__STL::_Select1st<struct__STL::pair<unsigned_int_const_,class_CHttpRequest*>_>,struct__STL::less<unsigned_int>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_int_const_,class_CHttpRequest*>_>_>
             *)(this + 8);
  local_4._0_1_ = 2;
  if (*(int *)(this + 0xc) != 0) {
    _STL::
    _Rb_tree<unsigned_int,struct__STL::pair<unsigned_int_const_,class_CHttpRequest*>,struct__STL::_Select1st<struct__STL::pair<unsigned_int_const_,class_CHttpRequest*>_>,struct__STL::less<unsigned_int>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_int_const_,class_CHttpRequest*>_>_>
    ::M_erase(this_00,*(_Rb_tree_node<struct__STL::pair<unsigned_int_const_,class_CHttpRequest*>_>
                        **)(*(int *)this_00 + 4));
    *(int *)(*(int *)this_00 + 8) = *(int *)this_00;
    *(undefined4 *)(*(int *)this_00 + 4) = 0;
    *(int *)(*(int *)this_00 + 0xc) = *(int *)this_00;
    *(undefined4 *)(this + 0xc) = 0;
  }
  local_4 = CONCAT31(local_4._1_3_,3);
  _STL::
  _STLP_alloc_proxy<struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>*,struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
  ::deallocate((_STLP_alloc_proxy<struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>*,struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
                *)this_00,
               *(_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
                 **)this_00,1);
  *(undefined ***)this = &clExtalloc_Override_Baseclass::_vftable_;
  ExceptionList = local_c;
  return;
}




/* from: libgshttp:GSHttpDownload.cpp
   addr: 0058B090 */

void __thiscall
ExtAlloc::map<unsigned_int,class_CHttpRequest*,struct__STL::less<unsigned_int>_>::
~map<unsigned_int,class_CHttpRequest*,struct__STL::less<unsigned_int>_>
          (map<unsigned_int,class_CHttpRequest*,struct__STL::less<unsigned_int>_> *this)

{
  int iVar1;
  int iVar2;
  void **ppvVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c7b68;
  local_c = ExceptionList;
  local_4 = 0;
  ppvVar3 = &local_c;
  if (*(int *)(this + 4) != 0) {
    iVar2 = *(int *)(*(int *)this + 4);
    ExceptionList = &local_c;
    while (iVar2 != 0) {
      _STL::
      _Rb_tree<unsigned_int,struct__STL::pair<unsigned_int_const_,class_CHttpRequest*>,struct__STL::_Select1st<struct__STL::pair<unsigned_int_const_,class_CHttpRequest*>_>,struct__STL::less<unsigned_int>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_int_const_,class_CHttpRequest*>_>_>
      ::M_erase((_Rb_tree<unsigned_int,struct__STL::pair<unsigned_int_const_,class_CHttpRequest*>,struct__STL::_Select1st<struct__STL::pair<unsigned_int_const_,class_CHttpRequest*>_>,struct__STL::less<unsigned_int>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_int_const_,class_CHttpRequest*>_>_>
                 *)this,*(_Rb_tree_node<struct__STL::pair<unsigned_int_const_,class_CHttpRequest*>_>
                          **)(iVar2 + 0xc));
      iVar1 = *(int *)(iVar2 + 8);
      ExtAlloc_Free_4(iVar2);
      iVar2 = iVar1;
    }
    *(int *)(*(int *)this + 8) = *(int *)this;
    *(undefined4 *)(*(int *)this + 4) = 0;
    *(int *)(*(int *)this + 0xc) = *(int *)this;
    *(undefined4 *)(this + 4) = 0;
    ppvVar3 = (void **)ExceptionList;
  }
  ExceptionList = ppvVar3;
  ExtAlloc_Free_4(*(undefined4 *)this);
  ExceptionList = local_c;
  return;
}




/* from: libgshttp:GSHttpDownload.cpp
   addr: 0058B120 */

uchar __thiscall CHttpDownload::Engine(CHttpDownload *this,uint param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(*(int *)(this + 8) + 8);
  PTIMER_fn_bResetStart();
  uVar2 = PTIMER_fn_ulElapsedMiliSeconds();
  while ((uVar2 < param_1 && (iVar1 != *(int *)(this + 8)))) {
    iVar3 = *(int *)(iVar1 + 0xc);
    if (iVar3 == 0) {
      iVar4 = *(int *)(iVar1 + 4);
      iVar3 = iVar1;
      if (iVar1 == *(int *)(iVar4 + 0xc)) {
        do {
          iVar3 = iVar4;
          iVar4 = *(int *)(iVar3 + 4);
        } while (iVar3 == *(int *)(iVar4 + 0xc));
      }
      if (*(int *)(iVar3 + 0xc) != iVar4) {
        iVar3 = iVar4;
      }
    }
    else {
      for (iVar4 = *(int *)(iVar3 + 8); iVar4 != 0; iVar4 = *(int *)(iVar4 + 8)) {
        iVar3 = iVar4;
      }
    }
    ProcessRequest(this,*(uint *)(iVar1 + 0x10));
    uVar2 = PTIMER_fn_ulElapsedMiliSeconds();
    iVar1 = iVar3;
  }
  ClearClosedRequest(this);
  return '\x01';
}




/* from: libgshttp:GSHttpDownload.cpp
   addr: 0058B1A0 */

uint __thiscall
CHttpDownload::Save(CHttpDownload *this,char *param_1,char *param_2,uchar param_3,
                   _func_void_uint_GSHTTPResult_char_ptr_uint_uchar_void_ptr *param_4,void *param_5)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  CHttpRequest *this_00;
  char *pcVar4;
  int iVar5;
  undefined3 in_stack_0000000d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  pcVar4 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c7b8a;
  local_c = ExceptionList;
  iVar5 = 0;
  if (param_2 == (char *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(int *)(this + 0x18) + 1;
    ExceptionList = &local_c;
    *(uint *)(this + 0x18) = uVar3;
    this_00 = (CHttpRequest *)ExtAlloc_Malloc_4();
    local_4 = 0;
    if (this_00 != (CHttpRequest *)0x0) {
      iVar5 = CHttpRequest::CHttpRequest
                        (this_00,2,(uchar)_param_3,param_1,param_4,
                         (_func_void_uint_GSHTTPState_char_ptr_uint_uint_uint_void_ptr *)0x0,param_5
                         ,(char *)0x0,pcVar4,(char *)0x0,0);
    }
    local_4 = 0xffffffff;
    param_2 = *(char **)(*(char **)(this + 8) + 8);
    while ((param_2 != *(char **)(this + 8) && (*(uint *)(param_2 + 0x10) <= uVar3))) {
      pcVar4 = *(char **)(param_2 + 0xc);
      if (pcVar4 == (char *)0x0) {
        pcVar4 = *(char **)(param_2 + 4);
        if (param_2 == *(char **)(pcVar4 + 0xc)) {
          do {
            param_2 = pcVar4;
            pcVar4 = *(char **)(param_2 + 4);
          } while (param_2 == *(char **)(pcVar4 + 0xc));
        }
        if (*(char **)(param_2 + 0xc) != pcVar4) {
          param_2 = pcVar4;
        }
      }
      else {
        for (pcVar2 = *(char **)(pcVar4 + 8); param_2 = pcVar4, pcVar2 != (char *)0x0;
            pcVar2 = *(char **)(pcVar2 + 8)) {
          pcVar4 = pcVar2;
        }
      }
    }
    _STL::
    _List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>::
    List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
              ((_List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
                *)&param_5,
               (_List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
                *)&param_2);
    _STL::
    _List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>::
    List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
              ((_List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
                *)&stack0xffffffd4,
               (_List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
                *)&param_5);
    _STL::
    _Rb_tree<unsigned_int,struct__STL::pair<unsigned_int_const_,class_CHttpRequest*>,struct__STL::_Select1st<struct__STL::pair<unsigned_int_const_,class_CHttpRequest*>_>,struct__STL::less<unsigned_int>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_int_const_,class_CHttpRequest*>_>_>
    ::insert_unique((_Rb_tree<unsigned_int,struct__STL::pair<unsigned_int_const_,class_CHttpRequest*>,struct__STL::_Select1st<struct__STL::pair<unsigned_int_const_,class_CHttpRequest*>_>,struct__STL::less<unsigned_int>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_int_const_,class_CHttpRequest*>_>_>
                     *)(this + 8),&param_4);
    if (param_3 != '\0') {
      iVar1 = *(int *)(iVar5 + 0x1b4);
      while (iVar1 != 6) {
        ProcessRequest(this,uVar3);
        iVar1 = *(int *)(iVar5 + 0x1b4);
      }
      ClearClosedRequest(this);
    }
  }
  ExceptionList = local_c;
  return uVar3;
}




/* from: libgshttp:GSHttpDownload.cpp
   addr: 0058B2F0 */

uchar __thiscall CHttpDownload::CancelRequest(CHttpDownload *this,uint param_1)

{
  _Rb_tree<unsigned_int,struct__STL::pair<unsigned_int_const_,class_CHttpRequest*>,struct__STL::_Select1st<struct__STL::pair<unsigned_int_const_,class_CHttpRequest*>_>,struct__STL::less<unsigned_int>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_int_const_,class_CHttpRequest*>_>_>
  *this_00;
  int iVar1;
  _Rb_tree_node<struct__STL::pair<unsigned_int_const_,class_CHttpRequest*>_> *p_Var2;
  _Rb_tree_node_base *p_Var3;
  
  this_00 = (_Rb_tree<unsigned_int,struct__STL::pair<unsigned_int_const_,class_CHttpRequest*>,struct__STL::_Select1st<struct__STL::pair<unsigned_int_const_,class_CHttpRequest*>_>,struct__STL::less<unsigned_int>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_int_const_,class_CHttpRequest*>_>_>
             *)(this + 8);
  p_Var2 = _STL::
           _Rb_tree<unsigned_int,struct__STL::pair<unsigned_int_const_,class_CHttpRequest*>,struct__STL::_Select1st<struct__STL::pair<unsigned_int_const_,class_CHttpRequest*>_>,struct__STL::less<unsigned_int>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_int_const_,class_CHttpRequest*>_>_>
           ::M_find(this_00,&param_1);
  if (p_Var2 == *(_Rb_tree_node<struct__STL::pair<unsigned_int_const_,class_CHttpRequest*>_> **)
                 this_00) {
    return '\0';
  }
  if (*(CHttpRequest **)(p_Var2 + 0x14) != (CHttpRequest *)0x0) {
    CHttpRequest::Disconnect(*(CHttpRequest **)(p_Var2 + 0x14));
    if (*(undefined4 **)(p_Var2 + 0x14) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(p_Var2 + 0x14))(1);
    }
  }
  iVar1 = *(int *)this_00;
  p_Var3 = _STL::_Rb_global<bool>::Rebalance_for_erase
                     ((_Rb_tree_node_base *)p_Var2,(_Rb_tree_node_base **)(iVar1 + 4),
                      (_Rb_tree_node_base **)(iVar1 + 8),(_Rb_tree_node_base **)(iVar1 + 0xc));
  ExtAlloc_Free_4(p_Var3);
  *(int *)(this + 0xc) = *(int *)(this + 0xc) + -1;
  return '\x01';
}




/* from: libgshttp:GSHttpDownload.cpp
   addr: 0058B360 */

uchar __thiscall CHttpDownload::ProcessRequest(CHttpDownload *this,uint param_1)

{
  CHttpRequest *this_00;
  int iVar1;
  uchar uVar2;
  _Rb_tree_node<struct__STL::pair<unsigned_int_const_,class_CHttpRequest*>_> *p_Var3;
  GSHTTPResult GVar4;
  _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
  *this_01;
  _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
  *this_02;
  _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
  *this_03;
  
  p_Var3 = _STL::
           _Rb_tree<unsigned_int,struct__STL::pair<unsigned_int_const_,class_CHttpRequest*>,struct__STL::_Select1st<struct__STL::pair<unsigned_int_const_,class_CHttpRequest*>_>,struct__STL::less<unsigned_int>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_int_const_,class_CHttpRequest*>_>_>
           ::M_find((_Rb_tree<unsigned_int,struct__STL::pair<unsigned_int_const_,class_CHttpRequest*>,struct__STL::_Select1st<struct__STL::pair<unsigned_int_const_,class_CHttpRequest*>_>,struct__STL::less<unsigned_int>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_int_const_,class_CHttpRequest*>_>_>
                     *)(this + 8),&param_1);
  if (p_Var3 == *(_Rb_tree_node<struct__STL::pair<unsigned_int_const_,class_CHttpRequest*>_> **)
                 (this + 8)) {
    return '\0';
  }
  this_00 = *(CHttpRequest **)(p_Var3 + 0x14);
  if ((((*(int *)(this_00 + 0x1b0) == 2) || (*(int *)(this_00 + 0x1b0) == 3)) &&
      (this_00[0x194] == (CHttpRequest)0x0)) &&
     (uVar2 = CHttpRequest::OpenOutputFile(this_00), uVar2 == '\0')) {
    *(undefined4 *)(this_00 + 0x1b4) = 6;
    CHttpRequest::ProgressCallback(this_00,param_1,0);
    CHttpRequest::CompletedCallback(this_00,param_1,0xc);
  }
  switch(*(undefined4 *)(this_00 + 0x1b4)) {
  case 0:
    CHttpRequest::ProgressCallback(this_00,param_1,0);
    uVar2 = ParseURL(this,(char *)(this_00 + 0x1c5),(_HOST_INFO_ *)(this_00 + 0xc));
    if (uVar2 == '\0') {
      *(undefined4 *)(this_00 + 0x1b4) = 6;
      CHttpRequest::CompletedCallback(this_00,param_1,3);
      return '\x01';
    }
    *(undefined4 *)(this_00 + 0x1b4) = 1;
    CHttpRequest::ProgressCallback(this_00,param_1,1);
    return '\x01';
  case 1:
    uVar2 = CHttpRequest::Connect(this_00);
    if (uVar2 == '\0') {
      _STL::
      _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
      ::
      ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
                (this_01);
      *(undefined4 *)(this_00 + 0x1b4) = 6;
      CHttpRequest::CompletedCallback(this_00,param_1,5);
      return '\x01';
    }
    *(undefined4 *)(this_00 + 0x1b4) = 2;
    CHttpRequest::ProgressCallback(this_00,param_1,2);
    return '\x01';
  case 2:
    uVar2 = CHttpRequest::SendRequest(this_00);
    if (uVar2 == '\0') {
      _STL::
      _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
      ::
      ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
                (this_02);
      *(undefined4 *)(this_00 + 0x1b4) = 6;
      CHttpRequest::CompletedCallback(this_00,param_1,5);
      return '\x01';
    }
    *(undefined4 *)(this_00 + 0x1b4) = 3;
    CHttpRequest::ProgressCallback(this_00,param_1,3);
    return '\x01';
  case 3:
    uVar2 = CHttpRequest::ReceiveHeadData(this_00);
    if (uVar2 != '\0') {
      *(undefined4 *)(this_00 + 0x1b4) = 4;
      CHttpRequest::ProgressCallback(this_00,param_1,4);
      return '\x01';
    }
    break;
  case 4:
    uVar2 = CHttpRequest::ReadHeaders(this_00);
    if (uVar2 == '\0') {
      _STL::
      _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
      ::
      ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
                (this_03);
      *(undefined4 *)(this_00 + 0x1b4) = 6;
      CHttpRequest::CompletedCallback(this_00,param_1,6);
      return '\x01';
    }
    iVar1 = *(int *)(this_00 + 0xa4c);
    if (iVar1 != 200) {
      if ((iVar1 < 300) || (399 < iVar1)) {
        *(undefined4 *)(this_00 + 0x1b4) = 6;
        GVar4 = GetHttpResultFromStatus(this,iVar1);
      }
      else {
        *(undefined4 *)(this_00 + 0x1b4) = 6;
        GVar4 = GetHttpResultFromStatus(this,iVar1);
      }
      CHttpRequest::CompletedCallback(this_00,param_1,GVar4);
    }
    *(undefined4 *)(this_00 + 0x1b4) = 5;
    return '\x01';
  case 5:
    CHttpRequest::ProgressCallback(this_00,param_1,5);
    uVar2 = CHttpRequest::ReceiveFile(this_00);
    if (uVar2 == '\0') {
      *(undefined4 *)(this_00 + 0x1b4) = 6;
      CHttpRequest::CompletedCallback(this_00,param_1,0);
    }
    if ((*(int *)(this_00 + 0xa48) != -1) &&
       (*(int *)(this_00 + 0xa48) <= *(int *)(this_00 + 0xa64))) {
      *(undefined4 *)(this_00 + 0x1b4) = 6;
      CHttpRequest::ProgressCallback(this_00,param_1,5);
      CHttpRequest::CompletedCallback(this_00,param_1,0);
    }
  }
  return '\x01';
}




/* from: libgshttp:GSHttpDownload.cpp
   addr: 0058B630 */

uchar __thiscall CHttpDownload::ParseURL(CHttpDownload *this,char *param_1,_HOST_INFO_ *param_2)

{
  char cVar1;
  bool bVar2;
  basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *pbVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  Allocator<char> local_44e;
  Allocator<char> local_44d;
  char *local_44c;
  char *local_448;
  undefined4 local_440;
  Allocator<char> local_439;
  int local_438;
  _String_base<char,class_ExtAlloc::Allocator<char>_> local_434 [12];
  _Vector_base<char,class_ExtAlloc::Allocator<char>_> local_428 [12];
  _Vector_base<char,class_ExtAlloc::Allocator<char>_> local_41c [11];
  char cStack_411;
  undefined4 local_410 [257];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c7bf8;
  local_c = ExceptionList;
  uVar5 = 0xffffffff;
  pcVar8 = param_1;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  local_438 = ~uVar5 - 1;
  if (local_438 == 0) {
    return '\0';
  }
  puVar4 = local_410;
  for (iVar6 = 0x100; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  pcVar8 = param_1 + local_438;
  *(undefined1 *)puVar4 = 0;
  ExceptionList = &local_c;
  if (param_1 != pcVar8) {
    pcVar9 = param_1;
    ExceptionList = &local_c;
    do {
      iVar6 = toupper((int)*pcVar9);
      pcVar9[(int)local_410 - (int)param_1] = (char)iVar6;
      pcVar9 = pcVar9 + 1;
    } while (pcVar9 != pcVar8);
  }
  local_4 = 0;
  _STL::_Vector_base<char,class_ExtAlloc::Allocator<char>_>::
  Vector_base<char,class_ExtAlloc::Allocator<char>_>(local_41c,&local_439);
  uVar5 = 0xffffffff;
  uVar7 = 0xffffffff;
  pcVar8 = param_1;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  local_4._0_1_ = 1;
  _STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::
  M_range_initialize((basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>
                      *)local_41c,param_1,param_1 + (~uVar7 - 1));
  local_4._0_1_ = 4;
  _STL::_Vector_base<char,class_ExtAlloc::Allocator<char>_>::
  Vector_base<char,class_ExtAlloc::Allocator<char>_>(local_428,&local_44d);
  uVar7 = 0xffffffff;
  local_4._0_1_ = 5;
  pcVar8 = (char *)local_410;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  _STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::
  M_range_initialize((basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>
                      *)local_428,(char *)local_410,(char *)((int)local_410 + (~uVar7 - 1)));
  local_4._0_1_ = 7;
  pbVar3 = (basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *)
           _STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::
           substr((basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>
                   *)local_428,(uint)local_434,0);
  local_4._0_1_ = 8;
  bVar2 = _STL::operator==(pbVar3,s_HTTP___);
  local_4._0_1_ = 7;
  _STL::_String_base<char,class_ExtAlloc::Allocator<char>_>::
  ~_String_base<char,class_ExtAlloc::Allocator<char>_>(local_434);
  if (!bVar2) {
    local_4 = CONCAT31(local_4._1_3_,3);
    _STL::_String_base<char,class_ExtAlloc::Allocator<char>_>::
    ~_String_base<char,class_ExtAlloc::Allocator<char>_>
              ((_String_base<char,class_ExtAlloc::Allocator<char>_> *)local_428);
    local_4 = 0xffffffff;
    _STL::_String_base<char,class_ExtAlloc::Allocator<char>_>::
    ~_String_base<char,class_ExtAlloc::Allocator<char>_>
              ((_String_base<char,class_ExtAlloc::Allocator<char>_> *)local_41c);
    ExceptionList = local_c;
    return '\0';
  }
  _STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::substr
            ((basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *)
             local_41c,(uint)&local_44c,7);
  local_4 = CONCAT31(local_4._1_3_,9);
  if (local_448 != local_44c) {
    local_440 = CONCAT31(local_440._1_3_,0x3a);
    local_44e = local_44d;
    pcVar8 = _STL::find_if(local_44c,local_448,local_440,&local_44e);
    if (pcVar8 != local_448) {
      uVar5 = (int)pcVar8 - (int)local_44c;
    }
  }
  if (local_448 != local_44c) {
    local_440 = CONCAT31(local_440._1_3_,0x2f);
    local_44e = local_44d;
    pcVar8 = _STL::find_if(local_44c,local_448,local_440,&local_44e);
    if (pcVar8 != local_448) {
      uVar7 = (int)pcVar8 - (int)local_44c;
      goto LAB_0058b81b;
    }
  }
  uVar7 = 0xffffffff;
LAB_0058b81b:
  if ((int)uVar5 < 0) {
    *(undefined2 *)(param_2 + 0x182) = 0x50;
  }
  else {
    puVar4 = (undefined4 *)
             _STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>
             ::substr((basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>
                       *)&local_44c,(uint)local_434,uVar5 + 1);
    iVar6 = atoi((char *)*puVar4);
    *(short *)(param_2 + 0x182) = (short)iVar6;
    _STL::_String_base<char,class_ExtAlloc::Allocator<char>_>::
    ~_String_base<char,class_ExtAlloc::Allocator<char>_>(local_434);
  }
  if ((int)uVar7 < 0) {
    uVar7 = (int)local_448 - (int)local_44c;
    param_2[0x81] = (_HOST_INFO_)0x2f;
    param_2[0x82] = (_HOST_INFO_)0x0;
  }
  else {
    puVar4 = (undefined4 *)
             _STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>
             ::substr((basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>
                       *)&local_44c,(uint)local_434,uVar7);
    strncpy((char *)(param_2 + 0x81),(char *)*puVar4,0xff);
    _STL::_String_base<char,class_ExtAlloc::Allocator<char>_>::
    ~_String_base<char,class_ExtAlloc::Allocator<char>_>(local_434);
  }
  if ((int)uVar5 < 0) {
    uVar5 = uVar7;
  }
  if ((int)uVar5 < 1) {
    local_4._0_1_ = 7;
    _STL::_String_base<char,class_ExtAlloc::Allocator<char>_>::
    ~_String_base<char,class_ExtAlloc::Allocator<char>_>
              ((_String_base<char,class_ExtAlloc::Allocator<char>_> *)&local_44c);
    local_4 = CONCAT31(local_4._1_3_,3);
    _STL::_String_base<char,class_ExtAlloc::Allocator<char>_>::
    ~_String_base<char,class_ExtAlloc::Allocator<char>_>
              ((_String_base<char,class_ExtAlloc::Allocator<char>_> *)local_428);
    local_4 = 0xffffffff;
    _STL::_String_base<char,class_ExtAlloc::Allocator<char>_>::
    ~_String_base<char,class_ExtAlloc::Allocator<char>_>
              ((_String_base<char,class_ExtAlloc::Allocator<char>_> *)local_41c);
    ExceptionList = local_c;
    return '\0';
  }
  puVar4 = (undefined4 *)
           _STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::
           substr((basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>
                   *)&local_44c,(uint)local_434,0);
  strncpy((char *)param_2,(char *)*puVar4,0x80);
  _STL::_String_base<char,class_ExtAlloc::Allocator<char>_>::
  ~_String_base<char,class_ExtAlloc::Allocator<char>_>(local_434);
  local_4._0_1_ = 7;
  _STL::_String_base<char,class_ExtAlloc::Allocator<char>_>::
  ~_String_base<char,class_ExtAlloc::Allocator<char>_>
            ((_String_base<char,class_ExtAlloc::Allocator<char>_> *)&local_44c);
  local_4 = CONCAT31(local_4._1_3_,3);
  _STL::_String_base<char,class_ExtAlloc::Allocator<char>_>::
  ~_String_base<char,class_ExtAlloc::Allocator<char>_>
            ((_String_base<char,class_ExtAlloc::Allocator<char>_> *)local_428);
  local_4 = 0xffffffff;
  _STL::_String_base<char,class_ExtAlloc::Allocator<char>_>::
  ~_String_base<char,class_ExtAlloc::Allocator<char>_>
            ((_String_base<char,class_ExtAlloc::Allocator<char>_> *)local_41c);
  ExceptionList = local_c;
  return '\x01';
}




/* from: libgshttp:GSHttpDownload.cpp
   addr: 0058B980 */

void __thiscall CHttpDownload::ClearClosedRequest(CHttpDownload *this)

{
  CHttpRequest *this_00;
  int iVar1;
  _Rb_tree_node_base *p_Var2;
  _Rb_tree_node_base *p_Var3;
  
  p_Var3 = *(_Rb_tree_node_base **)(*(_Rb_tree_node_base **)(this + 8) + 8);
  if (p_Var3 != *(_Rb_tree_node_base **)(this + 8)) {
    do {
      p_Var2 = _STL::_Rb_global<bool>::M_increment(p_Var3);
      this_00 = *(CHttpRequest **)(p_Var3 + 0x14);
      if (*(int *)(this_00 + 0x1b4) == 6) {
        if (this_00 != (CHttpRequest *)0x0) {
          CHttpRequest::Disconnect(this_00);
          if (*(undefined4 **)(p_Var3 + 0x14) != (undefined4 *)0x0) {
            (**(code **)**(undefined4 **)(p_Var3 + 0x14))(1);
          }
        }
        iVar1 = *(int *)(this + 8);
        p_Var3 = _STL::_Rb_global<bool>::Rebalance_for_erase
                           (p_Var3,(_Rb_tree_node_base **)(iVar1 + 4),
                            (_Rb_tree_node_base **)(iVar1 + 8),(_Rb_tree_node_base **)(iVar1 + 0xc))
        ;
        ExtAlloc_Free_4(p_Var3);
        *(int *)(this + 0xc) = *(int *)(this + 0xc) + -1;
      }
      p_Var3 = p_Var2;
    } while (p_Var2 != *(_Rb_tree_node_base **)(this + 8));
  }
  return;
}




/* from: libgshttp:GSHttpDownload.cpp
   addr: 0058B9F0 */

void __thiscall CHttpDownload::ClearAllRequest(CHttpDownload *this)

{
  int iVar1;
  _Rb_tree_node_base *p_Var2;
  _Rb_tree_node_base *p_Var3;
  _Rb_tree_node_base *p_Var4;
  
  p_Var3 = *(_Rb_tree_node_base **)(*(_Rb_tree_node_base **)(this + 8) + 8);
  if (p_Var3 != *(_Rb_tree_node_base **)(this + 8)) {
    do {
      p_Var4 = *(_Rb_tree_node_base **)(p_Var3 + 0xc);
      if (p_Var4 == (_Rb_tree_node_base *)0x0) {
        p_Var2 = *(_Rb_tree_node_base **)(p_Var3 + 4);
        p_Var4 = p_Var3;
        if (p_Var3 == *(_Rb_tree_node_base **)(p_Var2 + 0xc)) {
          do {
            p_Var4 = p_Var2;
            p_Var2 = *(_Rb_tree_node_base **)(p_Var4 + 4);
          } while (p_Var4 == *(_Rb_tree_node_base **)(p_Var2 + 0xc));
        }
        if (*(_Rb_tree_node_base **)(p_Var4 + 0xc) != p_Var2) {
          p_Var4 = p_Var2;
        }
      }
      else {
        for (p_Var2 = *(_Rb_tree_node_base **)(p_Var4 + 8); p_Var2 != (_Rb_tree_node_base *)0x0;
            p_Var2 = *(_Rb_tree_node_base **)(p_Var2 + 8)) {
          p_Var4 = p_Var2;
        }
      }
      if (*(CHttpRequest **)(p_Var3 + 0x14) != (CHttpRequest *)0x0) {
        CHttpRequest::Disconnect(*(CHttpRequest **)(p_Var3 + 0x14));
        if (*(undefined4 **)(p_Var3 + 0x14) != (undefined4 *)0x0) {
          (**(code **)**(undefined4 **)(p_Var3 + 0x14))(1);
        }
      }
      iVar1 = *(int *)(this + 8);
      p_Var3 = _STL::_Rb_global<bool>::Rebalance_for_erase
                         (p_Var3,(_Rb_tree_node_base **)(iVar1 + 4),
                          (_Rb_tree_node_base **)(iVar1 + 8),(_Rb_tree_node_base **)(iVar1 + 0xc));
      ExtAlloc_Free_4(p_Var3);
      *(int *)(this + 0xc) = *(int *)(this + 0xc) + -1;
      p_Var3 = p_Var4;
    } while (p_Var4 != *(_Rb_tree_node_base **)(this + 8));
  }
  return;
}




/* from: libgshttp:GSHttpDownload.cpp
   addr: 0058BA80 */

GSHTTPResult __thiscall CHttpDownload::GetHttpResultFromStatus(CHttpDownload *this,int param_1)

{
  switch(param_1) {
  case 200:
    return 0;
  default:
    return 0xb;
  case 400:
    return 7;
  case 0x191:
    return 8;
  case 0x193:
    return 9;
  case 0x194:
    return 10;
  }
}




/* from: libgshttp:GSHttpDownload.cpp
   addr: 0058BBC0
   addr: 0058BBC0 */

void * __thiscall clTCPClient::_vector_deleting_destructor_(clTCPClient *this,uint param_1)

{
  ~clTCPClient(this);
  if ((param_1 & 1) != 0) {
    ExtAlloc_Free_4(this);
  }
  return this;
}




/* from: libgshttp:GSHttpDownload.cpp
   addr: 0058BBF0 */

uint __thiscall
_STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::substr
          (basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *this,
          uint param_1,uint param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  undefined1 *puVar5;
  basic_string<char,class__STL::char_traits<char>,class__STL::allocator<char>_> *pbVar6;
  uint uVar7;
  uint *puVar8;
  char *pcVar9;
  void *pvVar10;
  uint in_stack_0000000c;
  Allocator<char> local_129;
  uint local_128;
  _Vector_base<char,class_ExtAlloc::Allocator<char>_> local_124 [12];
  undefined **local_118 [67];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c7c4f;
  local_c = ExceptionList;
  local_128 = 0;
  iVar3 = *(int *)this;
  if (param_2 <= (uint)(*(int *)(this + 4) - iVar3)) {
    local_128 = (*(int *)(this + 4) - iVar3) - param_2;
    puVar8 = &local_128;
    if (in_stack_0000000c <= local_128) {
      puVar8 = &stack0x0000000c;
    }
    uVar7 = *puVar8;
    ExceptionList = &local_c;
    *(undefined4 *)param_1 = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    pvVar10 = (void *)(uVar7 + iVar3 + param_2);
    *(undefined4 *)(param_1 + 8) = 0;
    local_4 = 3;
    iVar1 = (int)pvVar10 + (1 - (int)(iVar3 + param_2));
    if (iVar1 == 0) {
      local_4._0_1_ = 4;
      local_4._1_3_ = 0;
      pbVar6 = (basic_string<char,class__STL::char_traits<char>,class__STL::allocator<char>_> *)
               basic_string<char,class__STL::char_traits<char>,class__STL::allocator<char>_>::
               basic_string<char,class__STL::char_traits<char>,class__STL::allocator<char>_>
                         ((basic_string<char,class__STL::char_traits<char>,class__STL::allocator<char>_>
                           *)local_124,s_basic_string,(allocator<char> *)&local_129);
      local_4 = CONCAT31(local_4._1_3_,5);
      length_error::length_error((length_error *)local_118,pbVar6);
                    /* WARNING: Subroutine does not return */
      CxxThrowException_8(local_118,&__TI4_AVlength_error__STL__);
    }
    pvVar4 = (void *)ExtAlloc_Malloc_4(iVar1);
    *(void **)param_1 = pvVar4;
    *(void **)(param_1 + 4) = pvVar4;
    *(int *)(param_1 + 8) = (int)pvVar4 + iVar1;
    puVar5 = (undefined1 *)copy_trivial((void *)(iVar3 + param_2),pvVar10,pvVar4);
    *(undefined1 **)(param_1 + 4) = puVar5;
    *puVar5 = 0;
    ExceptionList = local_c;
    return param_1;
  }
  local_4 = 0;
  ExceptionList = &local_c;
  _Vector_base<char,class_ExtAlloc::Allocator<char>_>::
  Vector_base<char,class_ExtAlloc::Allocator<char>_>(local_124,&local_129);
  uVar7 = 0xffffffff;
  local_4._0_1_ = 1;
  pcVar9 = s_basic_string;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  basic_string<char,class__STL::char_traits<char>,class__STL::allocator<char>_>::M_range_initialize
            ((basic_string<char,class__STL::char_traits<char>,class__STL::allocator<char>_> *)
             local_124,s_basic_string,s___AVlength_error__STL___005fe384 + ~uVar7 + 0x17);
  local_4 = CONCAT31(local_4._1_3_,2);
  logic_error::logic_error
            ((logic_error *)local_118,
             (basic_string<char,class__STL::char_traits<char>,class__STL::allocator<char>_> *)
             local_124);
  local_118[0] = &out_of_range::_vftable_;
                    /* WARNING: Subroutine does not return */
  CxxThrowException_8(local_118,&__TI4_AVout_of_range__STL__);
}




/* from: libgshttp:GSHttpDownload.cpp
   addr: 0058BD60 */

void * _STL::copy_trivial(void *param_1,void *param_2,void *param_3)

{
  void *pvVar1;
  
  if (param_2 == param_1) {
    return param_3;
  }
  pvVar1 = memmove(param_3,param_1,(int)param_2 - (int)param_1);
  return (void *)((int)pvVar1 + ((int)param_2 - (int)param_1));
}




/* from: libgshttp:GSHttpDownload.cpp
   addr: 0058BDA0 */

logic_error * __thiscall
_STL::logic_error::logic_error
          (logic_error *this,
          basic_string<char,class__STL::char_traits<char>,class__STL::allocator<char>_> *param_1)

{
  exception::exception((exception *)this);
  *(undefined ***)this = &__Named_exception::_vftable_;
  strncpy((char *)(this + 0xc),*(char **)param_1,0x100);
  this[0x10b] = (logic_error)0x0;
  *(undefined ***)this = &_vftable_;
  return this;
}




/* from: libgshttp:GSHttpDownload.cpp
   addr: 0058BDE0
   addr: 0058BDE0
   addr: 0058BDE0
   addr: 0058BDE0
   addr: 0058BDE0
   addr: 0058BDE0
   addr: 0058BDE0
   addr: 0058BDE0 */

void * __thiscall _STL::out_of_range::_vector_deleting_destructor_(out_of_range *this,uint param_1)

{
  logic_error::~logic_error((logic_error *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: libgshttp:GSHttpDownload.cpp
   addr: 0058BE00 */

length_error * __thiscall
_STL::length_error::length_error
          (length_error *this,
          basic_string<char,class__STL::char_traits<char>,class__STL::allocator<char>_> *param_1)

{
  exception::exception((exception *)this);
  *(undefined ***)this = &__Named_exception::_vftable_;
  strncpy((char *)(this + 0xc),*(char **)param_1,0x100);
  this[0x10b] = (length_error)0x0;
  *(undefined ***)this = &_vftable_;
  return this;
}




/* from: libgshttp:GSHttpDownload.cpp
   addr: 0058BE50 */

__Named_exception * __thiscall
_STL::__Named_exception::Named_exception(__Named_exception *this,__Named_exception *param_1)

{
  int iVar1;
  __Named_exception *p_Var2;
  __Named_exception *p_Var3;
  
  exception::exception((exception *)this,(exception *)param_1);
  p_Var2 = param_1 + 0xc;
  p_Var3 = this + 0xc;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)p_Var3 = *(undefined4 *)p_Var2;
    p_Var2 = p_Var2 + 4;
    p_Var3 = p_Var3 + 4;
  }
  *(undefined ***)this = &_vftable_;
  return this;
}




/* from: libgshttp:GSHttpDownload.cpp
   addr: 0058BE80 */

out_of_range * __thiscall _STL::out_of_range::out_of_range(out_of_range *this,out_of_range *param_1)

{
  int iVar1;
  out_of_range *poVar2;
  out_of_range *poVar3;
  
  exception::exception((exception *)this,(exception *)param_1);
  poVar2 = param_1 + 0xc;
  poVar3 = this + 0xc;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)poVar3 = *(undefined4 *)poVar2;
    poVar2 = poVar2 + 4;
    poVar3 = poVar3 + 4;
  }
  *(undefined ***)this = &_vftable_;
  return this;
}




/* from: libgshttp:GSHttpDownload.cpp
   addr: 0058BEB0 */

logic_error * __thiscall _STL::logic_error::logic_error(logic_error *this,logic_error *param_1)

{
  int iVar1;
  logic_error *plVar2;
  logic_error *plVar3;
  
  exception::exception((exception *)this,(exception *)param_1);
  plVar2 = param_1 + 0xc;
  plVar3 = this + 0xc;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)plVar3 = *(undefined4 *)plVar2;
    plVar2 = plVar2 + 4;
    plVar3 = plVar3 + 4;
  }
  *(undefined ***)this = &_vftable_;
  return this;
}




/* from: libgshttp:GSHttpDownload.cpp
   addr: 0058BEE0 */

length_error * __thiscall _STL::length_error::length_error(length_error *this,length_error *param_1)

{
  int iVar1;
  length_error *plVar2;
  length_error *plVar3;
  
  exception::exception((exception *)this,(exception *)param_1);
  plVar2 = param_1 + 0xc;
  plVar3 = this + 0xc;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)plVar3 = *(undefined4 *)plVar2;
    plVar2 = plVar2 + 4;
    plVar3 = plVar3 + 4;
  }
  *(undefined ***)this = &_vftable_;
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: libgshttp:GSHttpDownload.cpp
   addr: 0058BF10 */

void __thiscall
_STL::basic_string<char,class__STL::char_traits<char>,class__STL::allocator<char>_>::
~basic_string<char,class__STL::char_traits<char>,class__STL::allocator<char>_>
          (basic_string<char,class__STL::char_traits<char>,class__STL::allocator<char>_> *this)

{
  _Node_alloc_obj **pp_Var1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c7c6b;
  local_c = ExceptionList;
  pp_Var1 = *(_Node_alloc_obj ***)this;
  iVar2 = *(int *)(this + 8);
  local_4 = 0;
  if (pp_Var1 != (_Node_alloc_obj **)0x0) {
    if (0x80 < (uint)(iVar2 - (int)pp_Var1)) {
      ExceptionList = &local_c;
      operator_delete(pp_Var1);
      ExceptionList = local_c;
      return;
    }
    ExceptionList = &local_c;
    _STLP_mutex_spin<0>::M_do_lock((long *)&_Node_Alloc_Lock<1,0>::_S_lock);
    *pp_Var1 = (_Node_alloc_obj *)
               (&__node_alloc<1,0>::_S_free_list)[(iVar2 - (int)pp_Var1) - 1U >> 3];
    (&__node_alloc<1,0>::_S_free_list)[(iVar2 - (int)pp_Var1) - 1U >> 3] = pp_Var1;
    __S_lock = 0;
  }
  ExceptionList = local_c;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: libgshttp:GSHttpDownload.cpp
   addr: 0058BFA0 */

void __thiscall
_STL::_String_base<char,class__STL::allocator<char>_>::
~_String_base<char,class__STL::allocator<char>_>
          (_String_base<char,class__STL::allocator<char>_> *this)

{
  _Node_alloc_obj **pp_Var1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c7c8b;
  local_c = ExceptionList;
  pp_Var1 = *(_Node_alloc_obj ***)this;
  iVar2 = *(int *)(this + 8);
  local_4 = 0;
  if (pp_Var1 != (_Node_alloc_obj **)0x0) {
    if (0x80 < (uint)(iVar2 - (int)pp_Var1)) {
      ExceptionList = &local_c;
      operator_delete(pp_Var1);
      ExceptionList = local_c;
      return;
    }
    ExceptionList = &local_c;
    _STLP_mutex_spin<0>::M_do_lock((long *)&_Node_Alloc_Lock<1,0>::_S_lock);
    *pp_Var1 = (_Node_alloc_obj *)
               (&__node_alloc<1,0>::_S_free_list)[(iVar2 - (int)pp_Var1) - 1U >> 3];
    (&__node_alloc<1,0>::_S_free_list)[(iVar2 - (int)pp_Var1) - 1U >> 3] = pp_Var1;
    __S_lock = 0;
  }
  ExceptionList = local_c;
  return;
}




/* from: libgshttp:GSHttpDownload.cpp
   addr: 0058C030 */

void __thiscall
_STL::
vector<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
::M_insert_overflow(vector<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
                    *this,basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>
                          *param_1,
                   basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>
                   *param_2,__false_type *param_3,uint param_4,bool param_5)

{
  basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *pbVar1;
  _String_base<char,class_ExtAlloc::Allocator<char>_> *p_Var2;
  basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *pbVar3;
  basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> **ppbVar4;
  basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *pbVar5;
  Allocator<char> *pAVar6;
  basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *local_20;
  basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *local_1c;
  __false_type local_15;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c7cc4;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffd0;
  pbVar3 = (basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *)
           ((*(int *)(this + 4) - *(int *)this) / 0xc);
  local_20 = pbVar3;
  ppbVar4 = (basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> **)
            &param_4;
  if (param_4 <= pbVar3) {
    ppbVar4 = &local_20;
  }
  pbVar1 = *ppbVar4;
  ExceptionList = &local_10;
  local_20 = (basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *)
             ExtAlloc_Malloc_4((int)(pbVar1 + (int)pbVar3) * 0xc);
  local_8 = 0;
  local_1c = local_20;
  pbVar5 = uninitialized_copy(*(basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>
                                **)this,param_1,local_20,&local_15);
  local_1c = pbVar5;
  if (param_4 == 1) {
    local_8._0_1_ = 1;
    if (pbVar5 != (basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>
                   *)0x0) {
      pAVar6 = (Allocator<char> *)animSYSTEM::GetBaseSeqNmb((animSYSTEM *)param_2);
      _Vector_base<char,class_ExtAlloc::Allocator<char>_>::
      Vector_base<char,class_ExtAlloc::Allocator<char>_>
                ((_Vector_base<char,class_ExtAlloc::Allocator<char>_> *)pbVar5,pAVar6);
      local_8._0_1_ = 2;
      basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::
      M_range_initialize(pbVar5,*(char **)param_2,*(char **)(param_2 + 4));
    }
    local_8 = (uint)local_8._1_3_ << 8;
    pbVar5 = pbVar5 + 0xc;
  }
  else {
    pbVar5 = uninitialized_fill_n(pbVar5,param_4,param_2,(__false_type *)((int)&param_4 + 3));
  }
  local_1c = pbVar5;
  if (param_5 == false) {
    pbVar5 = uninitialized_copy(param_1,*(basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>
                                          **)(this + 4),pbVar5,(__false_type *)&stack0x00000017);
  }
  p_Var2 = *(_String_base<char,class_ExtAlloc::Allocator<char>_> **)(this + 4);
  param_4 = *(uint *)this;
  local_8 = 0xffffffff;
  for (; (_String_base<char,class_ExtAlloc::Allocator<char>_> *)param_4 != p_Var2;
      param_4 = param_4 + 0xc) {
    _String_base<char,class_ExtAlloc::Allocator<char>_>::
    ~_String_base<char,class_ExtAlloc::Allocator<char>_>
              ((_String_base<char,class_ExtAlloc::Allocator<char>_> *)param_4);
  }
  ExtAlloc_Free_4(*(undefined4 *)this);
  *(basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> **)this =
       local_20;
  *(basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> **)(this + 4)
       = pbVar5;
  *(basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> **)(this + 8)
       = local_20 + (int)(pbVar1 + (int)pbVar3) * 0xc;
  ExceptionList = local_10;
  return;
}




/* from: libgshttp:GSHttpDownload.cpp
   addr: 0058C1C0 */

void __cdecl _STL::_STLP_mutex_spin<0>::M_do_lock(long *param_1)

{
  uint uVar1;
  LONG LVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  LVar2 = InterlockedExchange(param_1,1);
  uVar1 = __max;
  if (LVar2 != 0) {
    uVar4 = 0;
    if (__max != 0) {
      uVar3 = __last >> 1;
      do {
        if (((uVar3 <= uVar4) && (*param_1 == 0)) &&
           (LVar2 = InterlockedExchange(param_1,1), LVar2 == 0)) {
          __max = 1000;
          __last = uVar4;
          return;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar1);
    }
    __max = 0x1e;
    iVar6 = 6;
    while( true ) {
      iVar5 = iVar6;
      if (0x1b < iVar6) {
        iVar5 = 0x1b;
      }
      LVar2 = InterlockedExchange(param_1,1);
      if (LVar2 == 0) break;
      if (iVar5 < 0x15) {
        Sleep(0);
        iVar6 = iVar6 + 1;
      }
      else {
        Sleep(1 << ((char)iVar5 - 0x14U & 0x1f));
        iVar6 = iVar6 + 1;
      }
    }
  }
  return;
}




/* from: libgshttp:GSHttpDownload.cpp
   addr: 0058C2B0 */

basic_string<char,class__STL::char_traits<char>,class__STL::allocator<char>_> * __thiscall
_STL::basic_string<char,class__STL::char_traits<char>,class__STL::allocator<char>_>::
basic_string<char,class__STL::char_traits<char>,class__STL::allocator<char>_>
          (basic_string<char,class__STL::char_traits<char>,class__STL::allocator<char>_> *this,
          char *param_1,allocator<char> *param_2)

{
  char cVar1;
  uint uVar2;
  void *pvVar3;
  basic_string<char,class__STL::char_traits<char>,class__STL::allocator<char>_> *pbVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  _Node_alloc_obj **local_134;
  allocator<char> local_12d;
  uint local_12c;
  basic_string<char,class__STL::char_traits<char>,class__STL::allocator<char>_> *local_128;
  basic_string<char,class__STL::char_traits<char>,class__STL::allocator<char>_> local_124 [12];
  length_error local_118 [268];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_005c7cee;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  uVar5 = 0xffffffff;
  pcVar6 = param_1;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  local_4 = 0;
  local_12c = (int)(param_1 + (~uVar5 - 1)) - (int)param_1;
  uVar7 = local_12c + 1;
  local_128 = this;
  if (uVar7 == 0) {
    pbVar4 = (basic_string<char,class__STL::char_traits<char>,class__STL::allocator<char>_> *)
             basic_string<char,class__STL::char_traits<char>,class__STL::allocator<char>_>
                       (local_124,s_basic_string,&local_12d);
    local_4 = CONCAT31(local_4._1_3_,2);
    length_error::length_error(local_118,pbVar4);
                    /* WARNING: Subroutine does not return */
    CxxThrowException_8(local_118,&__TI4_AVlength_error__STL__);
  }
  if (uVar7 < 0x81) {
    uVar2 = local_12c >> 3;
    _STLP_mutex_base::M_acquire_lock(&_Node_Alloc_Lock<1,0>::_S_lock);
    local_4._0_1_ = 1;
    local_134 = (&__node_alloc<1,0>::_S_free_list)[uVar2];
    if (local_134 == (_Node_alloc_obj **)0x0) {
      local_134 = (_Node_alloc_obj **)__node_alloc<1,0>::S_refill(uVar7);
    }
    else {
      (&__node_alloc<1,0>::_S_free_list)[uVar2] = (_Node_alloc_obj **)*local_134;
    }
    local_4 = (uint)local_4._1_3_ << 8;
    _STLP_mutex_base::M_release_lock(&_Node_Alloc_Lock<1,0>::_S_lock);
  }
  else {
    local_134 = (_Node_alloc_obj **)operator_new(uVar7);
  }
  uVar2 = local_12c;
  *(_Node_alloc_obj ***)this = local_134;
  *(_Node_alloc_obj ***)(this + 4) = local_134;
  *(undefined1 **)(this + 8) = (undefined1 *)((int)local_134 + uVar7);
  if (param_1 + (~uVar5 - 1) != param_1) {
    pvVar3 = memmove(local_134,param_1,local_12c);
    local_134 = (_Node_alloc_obj **)((int)pvVar3 + uVar2);
  }
  *(_Node_alloc_obj ***)(this + 4) = local_134;
  *(undefined1 *)local_134 = 0;
  ExceptionList = local_c;
  return this;
}




/* from: libgshttp:GSHttpDownload.cpp
   addr: 0058C400 */

void __thiscall _STL::_STLP_mutex_base::M_acquire_lock(_STLP_mutex_base *this)

{
  uint uVar1;
  LONG LVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  LVar2 = InterlockedExchange((LONG *)this,1);
  uVar1 = _STLP_mutex_spin<0>::__max;
  if (LVar2 != 0) {
    uVar4 = 0;
    if (_STLP_mutex_spin<0>::__max != 0) {
      uVar3 = _STLP_mutex_spin<0>::__last >> 1;
      do {
        if (((uVar3 <= uVar4) && (*(int *)this == 0)) &&
           (LVar2 = InterlockedExchange((LONG *)this,1), LVar2 == 0)) {
          _STLP_mutex_spin<0>::__max = 1000;
          _STLP_mutex_spin<0>::__last = uVar4;
          return;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar1);
    }
    _STLP_mutex_spin<0>::__max = 0x1e;
    iVar6 = 6;
    while( true ) {
      iVar5 = iVar6;
      if (0x1b < iVar6) {
        iVar5 = 0x1b;
      }
      LVar2 = InterlockedExchange((LONG *)this,1);
      if (LVar2 == 0) break;
      if (iVar5 < 0x15) {
        Sleep(0);
        iVar6 = iVar6 + 1;
      }
      else {
        Sleep(1 << ((char)iVar5 - 0x14U & 0x1f));
        iVar6 = iVar6 + 1;
      }
    }
  }
  return;
}




/* from: libgshttp:GSHttpDownload.cpp
   addr: 0058C500 */

void __thiscall
_STL::
_Rb_tree<unsigned_int,struct__STL::pair<unsigned_int_const_,class_CHttpRequest*>,struct__STL::_Select1st<struct__STL::pair<unsigned_int_const_,class_CHttpRequest*>_>,struct__STL::less<unsigned_int>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_int_const_,class_CHttpRequest*>_>_>
::M_erase(_Rb_tree<unsigned_int,struct__STL::pair<unsigned_int_const_,class_CHttpRequest*>,struct__STL::_Select1st<struct__STL::pair<unsigned_int_const_,class_CHttpRequest*>_>,struct__STL::less<unsigned_int>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_int_const_,class_CHttpRequest*>_>_>
          *this,_Rb_tree_node<struct__STL::pair<unsigned_int_const_,class_CHttpRequest*>_> *param_1)

{
  _Rb_tree_node<struct__STL::pair<unsigned_int_const_,class_CHttpRequest*>_> *p_Var1;
  
  if (param_1 != (_Rb_tree_node<struct__STL::pair<unsigned_int_const_,class_CHttpRequest*>_> *)0x0)
  {
    do {
      M_erase(this,*(_Rb_tree_node<struct__STL::pair<unsigned_int_const_,class_CHttpRequest*>_> **)
                    (param_1 + 0xc));
      p_Var1 = *(_Rb_tree_node<struct__STL::pair<unsigned_int_const_,class_CHttpRequest*>_> **)
                (param_1 + 8);
      ExtAlloc_Free_4(param_1);
      param_1 = p_Var1;
    } while (p_Var1 != (_Rb_tree_node<struct__STL::pair<unsigned_int_const_,class_CHttpRequest*>_> *
                       )0x0);
  }
  return;
}




/* from: libgshttp:GSHttpDownload.cpp
   addr: 0058C530
   addr: 0058C530 */

_Rb_tree_node_base * __thiscall
_STL::
_Rb_tree<unsigned_int,struct__STL::pair<unsigned_int_const_,class_CHttpRequest*>,struct__STL::_Select1st<struct__STL::pair<unsigned_int_const_,class_CHttpRequest*>_>,struct__STL::less<unsigned_int>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_int_const_,class_CHttpRequest*>_>_>
::insert_unique(_Rb_tree<unsigned_int,struct__STL::pair<unsigned_int_const_,class_CHttpRequest*>,struct__STL::_Select1st<struct__STL::pair<unsigned_int_const_,class_CHttpRequest*>_>,struct__STL::less<unsigned_int>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_int_const_,class_CHttpRequest*>_>_>
                *this,_Rb_tree_node_base *param_2,_Rb_tree_node_base *param_3,
               pair<void*_const,class_CHttpDownload*> *param_4)

{
  _Rb_tree_node_base *p_Var1;
  pair<void*_const,class_CHttpDownload*> *ppVar2;
  int *piVar3;
  _Rb_tree_iterator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Nonconst_traits<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>
  *p_Var4;
  _Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> *p_Var5;
  _Rb_tree_node_base *p_Var6;
  _Rb_tree_node_base *p_Var7;
  undefined4 *puVar8;
  pair<void*_const,class_CHttpDownload*> *ppVar9;
  pair<void*_const,class_CHttpDownload*> *ppVar10;
  bool bVar11;
  bool bVar12;
  bool *pbVar13;
  bool local_19;
  _Rb_tree_node_base *local_18;
  _Rb_tree_node_base local_14 [4];
  _Rb_tree_node_base local_10 [4];
  _Rb_tree_node_base local_c [4];
  undefined4 local_8 [2];
  
  ppVar2 = param_4;
  p_Var1 = param_3;
  ppVar9 = *(pair<void*_const,class_CHttpDownload*> **)this;
  if (param_3 != *(_Rb_tree_node_base **)(ppVar9 + 8)) {
    if (param_3 == (_Rb_tree_node_base *)ppVar9) {
      if (*(uint *)(*(pair<void*_const,class_CHttpDownload*> **)(ppVar9 + 0xc) + 0x10) <
          *(uint *)param_4) {
        _Rb_tree<void*,struct__STL::pair<void*_const,class_CHttpDownload*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CHttpDownload*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CHttpDownload*>_>_>
        ::M_insert((_Rb_tree<void*,struct__STL::pair<void*_const,class_CHttpDownload*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CHttpDownload*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CHttpDownload*>_>_>
                    *)this,param_2,(_Rb_tree_node_base *)0x0,
                   *(pair<void*_const,class_CHttpDownload*> **)(ppVar9 + 0xc),
                   (_Rb_tree_node_base *)param_4);
        return param_2;
      }
    }
    else {
      p_Var7 = _Rb_global<bool>::M_decrement(param_3);
      p_Var6 = (_Rb_tree_node_base *)param_4;
      bVar11 = *(uint *)param_4 < *(uint *)(p_Var1 + 0x10);
      if ((bVar11) && (*(uint *)(p_Var7 + 0x10) < *(uint *)param_4)) {
        if (*(int *)(p_Var7 + 0xc) == 0) {
          _Rb_tree<void*,struct__STL::pair<void*_const,class_CHttpDownload*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CHttpDownload*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CHttpDownload*>_>_>
          ::M_insert((_Rb_tree<void*,struct__STL::pair<void*_const,class_CHttpDownload*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CHttpDownload*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CHttpDownload*>_>_>
                      *)this,param_2,(_Rb_tree_node_base *)0x0,
                     (pair<void*_const,class_CHttpDownload*> *)p_Var7,(_Rb_tree_node_base *)param_4)
          ;
          return param_2;
        }
        _Rb_tree<void*,struct__STL::pair<void*_const,class_CHttpDownload*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CHttpDownload*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CHttpDownload*>_>_>
        ::M_insert((_Rb_tree<void*,struct__STL::pair<void*_const,class_CHttpDownload*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CHttpDownload*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CHttpDownload*>_>_>
                    *)this,param_2,p_Var1,(pair<void*_const,class_CHttpDownload*> *)p_Var1,
                   (_Rb_tree_node_base *)param_4);
        return param_2;
      }
      p_Var7 = _Rb_global<bool>::M_increment(p_Var1);
      bVar12 = !bVar11;
      if (!bVar11) {
        bVar12 = *(uint *)(p_Var1 + 0x10) < *(uint *)p_Var6;
        if (!bVar12) goto LAB_0058c9ec;
        if ((p_Var7 == *(_Rb_tree_node_base **)this) || (*(uint *)p_Var6 < *(uint *)(p_Var7 + 0x10))
           ) {
          if (*(int *)(p_Var1 + 0xc) == 0) {
            _Rb_tree<void*,struct__STL::pair<void*_const,class_CHttpDownload*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CHttpDownload*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CHttpDownload*>_>_>
            ::M_insert((_Rb_tree<void*,struct__STL::pair<void*_const,class_CHttpDownload*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CHttpDownload*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CHttpDownload*>_>_>
                        *)this,param_2,(_Rb_tree_node_base *)0x0,
                       (pair<void*_const,class_CHttpDownload*> *)p_Var1,p_Var6);
            return param_2;
          }
          _Rb_tree<void*,struct__STL::pair<void*_const,class_CHttpDownload*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CHttpDownload*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CHttpDownload*>_>_>
          ::M_insert((_Rb_tree<void*,struct__STL::pair<void*_const,class_CHttpDownload*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CHttpDownload*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CHttpDownload*>_>_>
                      *)this,param_2,p_Var7,(pair<void*_const,class_CHttpDownload*> *)p_Var7,p_Var6)
          ;
          return param_2;
        }
      }
      if (bVar11 == bVar12) {
LAB_0058c9ec:
        *(_Rb_tree_node_base **)param_2 = p_Var1;
        return param_2;
      }
    }
    puVar8 = (undefined4 *)
             _Rb_tree<unsigned_int,struct__STL::pair<unsigned_int_const_,int>,struct__STL::_Select1st<struct__STL::pair<unsigned_int_const_,int>_>,struct__STL::less<unsigned_int>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_int_const_,int>_>_>
             ::insert_unique((_Rb_tree<unsigned_int,struct__STL::pair<unsigned_int_const_,int>,struct__STL::_Select1st<struct__STL::pair<unsigned_int_const_,int>_>,struct__STL::less<unsigned_int>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_int_const_,int>_>_>
                              *)this,(pair<unsigned_int_const_,int> *)local_8);
    *(undefined4 *)param_2 = *puVar8;
    return param_2;
  }
  if (*(int *)(this + 4) != 0) {
    if (*(uint *)param_4 < *(uint *)(param_3 + 0x10)) {
      p_Var5 = _Rb_tree<void*,struct__STL::pair<void*_const,class_CHttpDownload*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CHttpDownload*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CHttpDownload*>_>_>
               ::M_create_node((_Rb_tree<void*,struct__STL::pair<void*_const,class_CHttpDownload*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CHttpDownload*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CHttpDownload*>_>_>
                                *)this,param_4);
      *(_Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> **)(p_Var1 + 8) = p_Var5
      ;
      p_Var6 = *(_Rb_tree_node_base **)this;
      if (p_Var1 == p_Var6) {
        *(_Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> **)(p_Var6 + 4) =
             p_Var5;
        *(_Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> **)
         (*(int *)this + 0xc) = p_Var5;
      }
      else if (p_Var1 == *(_Rb_tree_node_base **)(p_Var6 + 8)) {
        *(_Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> **)(p_Var6 + 8) =
             p_Var5;
      }
      *(_Rb_tree_node_base **)(p_Var5 + 4) = p_Var1;
      *(undefined4 *)(p_Var5 + 8) = 0;
      *(undefined4 *)(p_Var5 + 0xc) = 0;
      _Rb_global<bool>::Rebalance
                ((_Rb_tree_node_base *)p_Var5,(_Rb_tree_node_base **)(*(int *)this + 4));
      *(int *)(this + 4) = *(int *)(this + 4) + 1;
      *(_Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> **)param_2 = p_Var5;
      return param_2;
    }
    if (*(uint *)param_4 <= *(uint *)(param_3 + 0x10)) {
      *(_Rb_tree_node_base **)param_2 = param_3;
      return param_2;
    }
    p_Var6 = _Rb_global<bool>::M_increment(param_3);
    ppVar9 = *(pair<void*_const,class_CHttpDownload*> **)this;
    if (p_Var6 == (_Rb_tree_node_base *)ppVar9) {
      if (p_Var1 == (_Rb_tree_node_base *)ppVar9) {
        p_Var5 = _Rb_tree<void*,struct__STL::pair<void*_const,class_CHttpDownload*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CHttpDownload*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CHttpDownload*>_>_>
                 ::M_create_node((_Rb_tree<void*,struct__STL::pair<void*_const,class_CHttpDownload*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CHttpDownload*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CHttpDownload*>_>_>
                                  *)this,ppVar2);
        *(_Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> **)(p_Var1 + 8) =
             p_Var5;
        p_Var6 = *(_Rb_tree_node_base **)this;
        if (p_Var1 == p_Var6) {
          *(_Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> **)(p_Var6 + 4) =
               p_Var5;
          *(_Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> **)
           (*(int *)this + 0xc) = p_Var5;
        }
        else if (p_Var1 == *(_Rb_tree_node_base **)(p_Var6 + 8)) {
          *(_Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> **)(p_Var6 + 8) =
               p_Var5;
        }
      }
      else {
        p_Var5 = _Rb_tree<void*,struct__STL::pair<void*_const,class_CHttpDownload*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CHttpDownload*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CHttpDownload*>_>_>
                 ::M_create_node((_Rb_tree<void*,struct__STL::pair<void*_const,class_CHttpDownload*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CHttpDownload*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CHttpDownload*>_>_>
                                  *)this,ppVar2);
        *(_Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> **)(p_Var1 + 0xc) =
             p_Var5;
        if (p_Var1 == *(_Rb_tree_node_base **)(*(int *)this + 0xc)) {
          *(_Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> **)
           (*(int *)this + 0xc) = p_Var5;
        }
      }
      *(_Rb_tree_node_base **)((_Rb_tree_node_base *)p_Var5 + 4) = p_Var1;
      *(undefined4 *)((_Rb_tree_node_base *)p_Var5 + 8) = 0;
      *(undefined4 *)((_Rb_tree_node_base *)p_Var5 + 0xc) = 0;
      _Rb_global<bool>::Rebalance
                ((_Rb_tree_node_base *)p_Var5,(_Rb_tree_node_base **)(*(int *)this + 4));
      *(int *)(this + 4) = *(int *)(this + 4) + 1;
      *(_Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> **)param_2 = p_Var5;
      return param_2;
    }
    if (*(uint *)ppVar2 < *(uint *)(p_Var6 + 0x10)) {
      if (*(int *)(p_Var1 + 0xc) == 0) {
        if (p_Var1 == (_Rb_tree_node_base *)ppVar9) {
          p_Var5 = _Rb_tree<void*,struct__STL::pair<void*_const,class_CHttpDownload*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CHttpDownload*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CHttpDownload*>_>_>
                   ::M_create_node((_Rb_tree<void*,struct__STL::pair<void*_const,class_CHttpDownload*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CHttpDownload*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CHttpDownload*>_>_>
                                    *)this,ppVar2);
          *(_Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> **)(p_Var1 + 8) =
               p_Var5;
          p_Var6 = *(_Rb_tree_node_base **)this;
          if (p_Var1 == p_Var6) {
            *(_Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> **)(p_Var6 + 4) =
                 p_Var5;
            *(_Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> **)
             (*(int *)this + 0xc) = p_Var5;
          }
          else if (p_Var1 == *(_Rb_tree_node_base **)(p_Var6 + 8)) {
            *(_Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> **)(p_Var6 + 8) =
                 p_Var5;
          }
        }
        else {
          p_Var5 = _Rb_tree<void*,struct__STL::pair<void*_const,class_CHttpDownload*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CHttpDownload*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CHttpDownload*>_>_>
                   ::M_create_node((_Rb_tree<void*,struct__STL::pair<void*_const,class_CHttpDownload*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CHttpDownload*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CHttpDownload*>_>_>
                                    *)this,ppVar2);
          *(_Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> **)(p_Var1 + 0xc) =
               p_Var5;
          if (p_Var1 == *(_Rb_tree_node_base **)(*(int *)this + 0xc)) {
            *(_Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> **)
             (*(int *)this + 0xc) = p_Var5;
          }
        }
        *(_Rb_tree_node_base **)((_Rb_tree_node_base *)p_Var5 + 4) = p_Var1;
        *(undefined4 *)((_Rb_tree_node_base *)p_Var5 + 8) = 0;
        *(undefined4 *)((_Rb_tree_node_base *)p_Var5 + 0xc) = 0;
        _Rb_global<bool>::Rebalance
                  ((_Rb_tree_node_base *)p_Var5,(_Rb_tree_node_base **)(*(int *)this + 4));
        *(int *)(this + 4) = *(int *)(this + 4) + 1;
        *(_Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> **)param_2 = p_Var5;
        return param_2;
      }
      p_Var5 = _Rb_tree<void*,struct__STL::pair<void*_const,class_CHttpDownload*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CHttpDownload*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CHttpDownload*>_>_>
               ::M_create_node((_Rb_tree<void*,struct__STL::pair<void*_const,class_CHttpDownload*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CHttpDownload*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CHttpDownload*>_>_>
                                *)this,ppVar2);
      *(_Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> **)(p_Var6 + 8) = p_Var5
      ;
      p_Var1 = *(_Rb_tree_node_base **)this;
      if (p_Var6 == p_Var1) {
        *(_Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> **)(p_Var1 + 4) =
             p_Var5;
        *(_Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> **)
         (*(int *)this + 0xc) = p_Var5;
      }
      else if (p_Var6 == *(_Rb_tree_node_base **)(p_Var1 + 8)) {
        *(_Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> **)(p_Var1 + 8) =
             p_Var5;
      }
      *(_Rb_tree_node_base **)(p_Var5 + 4) = p_Var6;
      *(undefined4 *)(p_Var5 + 8) = 0;
      *(undefined4 *)(p_Var5 + 0xc) = 0;
      _Rb_global<bool>::Rebalance
                ((_Rb_tree_node_base *)p_Var5,(_Rb_tree_node_base **)(*(int *)this + 4));
      *(int *)(this + 4) = *(int *)(this + 4) + 1;
      *(_Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> **)param_2 = p_Var5;
      return param_2;
    }
    bVar11 = true;
    ppVar10 = *(pair<void*_const,class_CHttpDownload*> **)(ppVar9 + 4);
    while (ppVar10 != (pair<void*_const,class_CHttpDownload*> *)0x0) {
      bVar11 = *(uint *)ppVar2 < *(uint *)(ppVar10 + 0x10);
      ppVar9 = ppVar10;
      if (bVar11) {
        ppVar10 = *(pair<void*_const,class_CHttpDownload*> **)(ppVar10 + 8);
      }
      else {
        ppVar10 = *(pair<void*_const,class_CHttpDownload*> **)(ppVar10 + 0xc);
      }
    }
    local_18 = (_Rb_tree_node_base *)ppVar9;
    if (bVar11) {
      piVar3 = (int *)map<void*,class_PKCAlgorithm*,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_PKCAlgorithm*>_>_>
                      ::begin((map<void*,class_PKCAlgorithm*,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_PKCAlgorithm*>_>_>
                               *)this);
      if (local_18 == (_Rb_tree_node_base *)*piVar3) {
        pbVar13 = (bool *)&param_4;
        param_4 = (pair<void*_const,class_CHttpDownload*> *)CONCAT31(param_4._1_3_,1);
        p_Var4 = (_Rb_tree_iterator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Nonconst_traits<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>
                  *)_Rb_tree<void*,struct__STL::pair<void*_const,class_CHttpDownload*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CHttpDownload*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CHttpDownload*>_>_>
                    ::M_insert((_Rb_tree<void*,struct__STL::pair<void*_const,class_CHttpDownload*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CHttpDownload*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CHttpDownload*>_>_>
                                *)this,local_10,(_Rb_tree_node_base *)0x0,ppVar9,
                               (_Rb_tree_node_base *)ppVar2);
        pair<struct__STL::_Rb_tree_iterator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Nonconst_traits<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>,bool>
        ::
        pair<struct__STL::_Rb_tree_iterator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Nonconst_traits<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>,bool>
                  ((pair<struct__STL::_Rb_tree_iterator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Nonconst_traits<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>,bool>
                    *)local_8,p_Var4,pbVar13);
        *(undefined4 *)param_2 = local_8[0];
        return param_2;
      }
      local_18 = _Rb_global<bool>::M_decrement(local_18);
    }
    if (*(uint *)((pair<void*_const,class_CHttpDownload*> *)local_18 + 0x10) < *(uint *)ppVar2) {
      pbVar13 = (bool *)&param_3;
      param_3 = (_Rb_tree_node_base *)CONCAT31(param_3._1_3_,1);
      p_Var4 = (_Rb_tree_iterator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Nonconst_traits<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>
                *)_Rb_tree<void*,struct__STL::pair<void*_const,class_CHttpDownload*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CHttpDownload*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CHttpDownload*>_>_>
                  ::M_insert((_Rb_tree<void*,struct__STL::pair<void*_const,class_CHttpDownload*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CHttpDownload*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CHttpDownload*>_>_>
                              *)this,local_14,(_Rb_tree_node_base *)0x0,ppVar9,
                             (_Rb_tree_node_base *)ppVar2);
      pair<struct__STL::_Rb_tree_iterator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Nonconst_traits<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>,bool>
      ::
      pair<struct__STL::_Rb_tree_iterator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Nonconst_traits<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>,bool>
                ((pair<struct__STL::_Rb_tree_iterator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Nonconst_traits<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>,bool>
                  *)local_8,p_Var4,pbVar13);
      *(undefined4 *)param_2 = local_8[0];
      return param_2;
    }
    local_19 = false;
    pair<struct__STL::_Rb_tree_iterator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Nonconst_traits<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>,bool>
    ::
    pair<struct__STL::_Rb_tree_iterator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Nonconst_traits<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>,bool>
              ((pair<struct__STL::_Rb_tree_iterator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Nonconst_traits<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>,bool>
                *)local_8,
               (_Rb_tree_iterator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Nonconst_traits<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>
                *)&local_18,&local_19);
    *(undefined4 *)param_2 = local_8[0];
    return param_2;
  }
  ppVar10 = *(pair<void*_const,class_CHttpDownload*> **)(ppVar9 + 4);
  bVar11 = true;
  if (ppVar10 != (pair<void*_const,class_CHttpDownload*> *)0x0) {
    do {
      ppVar9 = ppVar10;
      bVar11 = *(uint *)param_4 < *(uint *)(ppVar9 + 0x10);
      if (bVar11) {
        ppVar10 = *(pair<void*_const,class_CHttpDownload*> **)(ppVar9 + 8);
      }
      else {
        ppVar10 = *(pair<void*_const,class_CHttpDownload*> **)(ppVar9 + 0xc);
      }
    } while (ppVar10 != (pair<void*_const,class_CHttpDownload*> *)0x0);
  }
  local_18 = (_Rb_tree_node_base *)ppVar9;
  if (bVar11) {
    piVar3 = (int *)map<void*,class_PKCAlgorithm*,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_PKCAlgorithm*>_>_>
                    ::begin((map<void*,class_PKCAlgorithm*,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_PKCAlgorithm*>_>_>
                             *)this);
    if (local_18 == (_Rb_tree_node_base *)*piVar3) {
      pbVar13 = (bool *)&param_4;
      param_4 = (pair<void*_const,class_CHttpDownload*> *)CONCAT31(param_4._1_3_,1);
      p_Var4 = (_Rb_tree_iterator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Nonconst_traits<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>
                *)_Rb_tree<void*,struct__STL::pair<void*_const,class_CHttpDownload*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CHttpDownload*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CHttpDownload*>_>_>
                  ::M_insert((_Rb_tree<void*,struct__STL::pair<void*_const,class_CHttpDownload*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CHttpDownload*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CHttpDownload*>_>_>
                              *)this,local_10,(_Rb_tree_node_base *)ppVar10,ppVar9,
                             (_Rb_tree_node_base *)ppVar2);
      goto LAB_0058c5fd;
    }
    local_18 = _Rb_global<bool>::M_decrement(local_18);
  }
  if (*(uint *)(local_18 + 0x10) < *(uint *)ppVar2) {
    pbVar13 = (bool *)&param_3;
    param_3 = (_Rb_tree_node_base *)CONCAT31(param_3._1_3_,1);
    p_Var4 = (_Rb_tree_iterator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Nonconst_traits<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>
              *)_Rb_tree<void*,struct__STL::pair<void*_const,class_CHttpDownload*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CHttpDownload*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CHttpDownload*>_>_>
                ::M_insert((_Rb_tree<void*,struct__STL::pair<void*_const,class_CHttpDownload*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CHttpDownload*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CHttpDownload*>_>_>
                            *)this,local_c,(_Rb_tree_node_base *)ppVar10,ppVar9,
                           (_Rb_tree_node_base *)ppVar2);
  }
  else {
    pbVar13 = &local_19;
    p_Var4 = (_Rb_tree_iterator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Nonconst_traits<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>
              *)&local_18;
    local_19 = false;
  }
LAB_0058c5fd:
  pair<struct__STL::_Rb_tree_iterator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Nonconst_traits<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>,bool>
  ::
  pair<struct__STL::_Rb_tree_iterator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Nonconst_traits<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>,bool>
            ((pair<struct__STL::_Rb_tree_iterator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Nonconst_traits<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>,bool>
              *)local_8,p_Var4,pbVar13);
  *(undefined4 *)param_2 = local_8[0];
  return param_2;
}




/* from: libgshttp:GSHttpDownload.cpp
   addr: 0058CA20 */

bool __cdecl
_STL::operator==(basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>
                 *param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  bool bVar5;
  
  uVar2 = 0xffffffff;
  pcVar4 = param_2;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar3 = ~uVar2 - 1;
  if (*(int *)(param_1 + 4) - (int)*(char **)param_1 == iVar3) {
    bVar5 = true;
    pcVar4 = *(char **)param_1;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar5 = *pcVar4 == *param_2;
      pcVar4 = pcVar4 + 1;
      param_2 = param_2 + 1;
    } while (bVar5);
    if (bVar5) {
      return true;
    }
  }
  return false;
}




/* from: libgshttp:GSHttpDownload.cpp
   addr: 0058CA60 */

basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *
_STL::uninitialized_copy
          (basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>
           *param_1,
          basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *param_2
          ,basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>
           *param_3,__false_type *param_4)

{
  void **ppvVar1;
  void **ppvVar2;
  __true_type local_15;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_005c7d19;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffd4;
  uStack_7 = 0;
  ExceptionList = &local_10;
  while( true ) {
    if (param_1 == param_2) break;
    local_8 = 1;
    if (param_3 !=
        (basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *)0x0) {
      animSYSTEM::GetBaseSeqNmb((animSYSTEM *)param_1);
      *(undefined4 *)param_3 = 0;
      *(undefined4 *)((_String_base<char,class_ExtAlloc::Allocator<char>_> *)param_3 + 4) = 0;
      *(undefined4 *)((_String_base<char,class_ExtAlloc::Allocator<char>_> *)param_3 + 8) = 0;
      ppvVar2 = *(void ***)(param_1 + 4);
      ppvVar1 = *(void ***)param_1;
      local_8 = 2;
      _String_base<char,class_ExtAlloc::Allocator<char>_>::M_allocate_block
                ((_String_base<char,class_ExtAlloc::Allocator<char>_> *)param_3,
                 (int)ppvVar2 + (1 - (int)ppvVar1));
      local_15 = param_1._3_1_;
      ppvVar2 = copy_aux(ppvVar1,ppvVar2,*(void ***)param_3,&local_15);
      *(void ***)((_String_base<char,class_ExtAlloc::Allocator<char>_> *)param_3 + 4) = ppvVar2;
      *(undefined1 *)ppvVar2 = 0;
    }
    param_1 = param_1 + 0xc;
    param_3 = (basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *)
              ((_String_base<char,class_ExtAlloc::Allocator<char>_> *)param_3 + 0xc);
  }
  ExceptionList = local_10;
  return param_3;
}




/* from: libgshttp:GSHttpDownload.cpp
   addr: 0058CB40 */

basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *
_STL::uninitialized_fill_n
          (basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>
           *param_1,uint param_2,
          basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *param_3
          ,__false_type *param_4)

{
  void **ppvVar1;
  void **ppvVar2;
  __true_type local_15;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_005c7d49;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffd4;
  uStack_7 = 0;
  ExceptionList = &local_10;
  for (; param_2 != 0; param_2 = param_2 - 1) {
    local_8 = 1;
    if (param_1 !=
        (basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *)0x0) {
      animSYSTEM::GetBaseSeqNmb((animSYSTEM *)param_3);
      *(undefined4 *)param_1 = 0;
      *(undefined4 *)((_String_base<char,class_ExtAlloc::Allocator<char>_> *)param_1 + 4) = 0;
      *(undefined4 *)((_String_base<char,class_ExtAlloc::Allocator<char>_> *)param_1 + 8) = 0;
      ppvVar2 = *(void ***)(param_3 + 4);
      ppvVar1 = *(void ***)param_3;
      local_8 = 2;
      _String_base<char,class_ExtAlloc::Allocator<char>_>::M_allocate_block
                ((_String_base<char,class_ExtAlloc::Allocator<char>_> *)param_1,
                 (int)ppvVar2 + (1 - (int)ppvVar1));
      local_15 = param_2._3_1_;
      ppvVar2 = copy_aux(ppvVar1,ppvVar2,*(void ***)param_1,&local_15);
      *(void ***)((_String_base<char,class_ExtAlloc::Allocator<char>_> *)param_1 + 4) = ppvVar2;
      *(undefined1 *)ppvVar2 = 0;
    }
    param_1 = (basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *)
              ((_String_base<char,class_ExtAlloc::Allocator<char>_> *)param_1 + 0xc);
  }
  ExceptionList = local_10;
  return param_1;
}




/* from: libgshttp:GSHttpDownload.cpp
   addr: 0058CC30 */

void __thiscall
_STL::basic_string<char,class__STL::char_traits<char>,class__STL::allocator<char>_>::
M_range_initialize(basic_string<char,class__STL::char_traits<char>,class__STL::allocator<char>_>
                   *this,char *param_1,char *param_2)

{
  uint uVar1;
  void *pvVar2;
  undefined1 *_Dst;
  size_t _Size;
  
  _Size = (int)param_2 - (int)param_1;
  uVar1 = _Size + 1;
  if (uVar1 == 0) {
    stl_throw_length_error(s_basic_string);
  }
  else if (uVar1 < 0x81) {
    pvVar2 = __node_alloc<1,0>::M_allocate(uVar1);
    *(void **)this = pvVar2;
    *(void **)(this + 4) = pvVar2;
    *(uint *)(this + 8) = (int)pvVar2 + uVar1;
  }
  else {
    pvVar2 = operator_new(uVar1);
    *(void **)this = pvVar2;
    *(void **)(this + 4) = pvVar2;
    *(uint *)(this + 8) = (int)pvVar2 + uVar1;
  }
  _Dst = *(undefined1 **)this;
  if (param_2 != param_1) {
    pvVar2 = memmove(_Dst,param_1,_Size);
    _Dst = (undefined1 *)((int)pvVar2 + _Size);
  }
  *(undefined1 **)(this + 4) = _Dst;
  *_Dst = 0;
  return;
}




/* from: libgshttp:GSHttpDownload.cpp
   addr: 0058CCB0 */

void __cdecl _STL::stl_throw_length_error(char *param_1)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  Allocator<class_CConnection*> local_125;
  char *local_124;
  undefined1 *local_120;
  _STLP_alloc_proxy<struct__STL::_List_node<class_CConnection*>*,struct__STL::_List_node<class_CConnection*>,class_ExtAlloc::Allocator<class_CConnection*>_>
  local_11c [4];
  undefined **local_118 [3];
  char local_10c [255];
  undefined1 local_d;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c7d76;
  pvStack_c = ExceptionList;
  local_124 = (char *)0x0;
  local_120 = (undefined1 *)0x0;
  ExceptionList = &pvStack_c;
  _STLP_alloc_proxy<struct__STL::_List_node<class_CConnection*>*,struct__STL::_List_node<class_CConnection*>,class_ExtAlloc::Allocator<class_CConnection*>_>
  ::
  STLP_alloc_proxy<struct__STL::_List_node<class_CConnection*>*,struct__STL::_List_node<class_CConnection*>,class_ExtAlloc::Allocator<class_CConnection*>_>
            (local_11c,&local_125,(_List_node<class_CConnection*> *)0x0);
  uVar2 = 0xffffffff;
  pcVar3 = param_1;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  local_4 = 0;
  _String_base<char,class__STL::allocator<char>_>::M_allocate_block
            ((_String_base<char,class__STL::allocator<char>_> *)&local_124,
             (uint)(param_1 + (~uVar2 - 1) + (1 - (int)param_1)));
  local_120 = (undefined1 *)copy_trivial(param_1,param_1 + (~uVar2 - 1),local_124);
  *local_120 = 0;
  local_4 = 1;
  exception::exception((exception *)local_118);
  local_118[0] = &__Named_exception::_vftable_;
  strncpy(local_10c,local_124,0x100);
  local_d = 0;
  local_118[0] = &length_error::_vftable_;
                    /* WARNING: Subroutine does not return */
  CxxThrowException_8(local_118,&__TI4_AVlength_error__STL__);
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: libgshttp:GSHttpDownload.cpp
   addr: 0058CD80 */

void * __cdecl _STL::__node_alloc<1,0>::M_allocate(uint param_1)

{
  _Node_alloc_obj *p_Var1;
  LONG LVar2;
  _Node_alloc_obj **pp_Var3;
  _Node_alloc_obj *p_Var4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int local_14;
  _Node_alloc_obj ***local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c7d88;
  local_c = ExceptionList;
  local_10 = &_S_free_list + (param_1 - 1 >> 3);
  ExceptionList = &local_c;
  LVar2 = InterlockedExchange((LONG *)&_Node_Alloc_Lock<1,0>::_S_lock,1);
  uVar8 = _STLP_mutex_spin<0>::__max;
  if (LVar2 != 0) {
    uVar6 = 0;
    local_14 = 0x11;
    if (_STLP_mutex_spin<0>::__max != 0) {
      uVar5 = _STLP_mutex_spin<0>::__last >> 1;
      do {
        if ((uVar6 < uVar5) || (__S_lock != 0)) {
          local_14 = local_14 * local_14 * local_14 * local_14;
          local_14 = local_14 * local_14;
          local_14 = local_14 * local_14;
        }
        else {
          LVar2 = InterlockedExchange((LONG *)&_Node_Alloc_Lock<1,0>::_S_lock,1);
          if (LVar2 == 0) {
            _STLP_mutex_spin<0>::__max = 1000;
            _STLP_mutex_spin<0>::__last = uVar6;
            goto LAB_0058ce9d;
          }
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar8);
    }
    _STLP_mutex_spin<0>::__max = 0x1e;
    iVar9 = 6;
    while( true ) {
      iVar7 = iVar9;
      if (0x1b < iVar9) {
        iVar7 = 0x1b;
      }
      LVar2 = InterlockedExchange((LONG *)&_Node_Alloc_Lock<1,0>::_S_lock,1);
      if (LVar2 == 0) break;
      if (iVar7 < 0x15) {
        Sleep(0);
        iVar9 = iVar9 + 1;
      }
      else {
        Sleep(1 << ((char)iVar7 - 0x14U & 0x1f));
        iVar9 = iVar9 + 1;
      }
    }
  }
LAB_0058ce9d:
  local_4 = 0;
  pp_Var3 = *local_10;
  if (pp_Var3 == (_Node_alloc_obj **)0x0) {
    local_14 = 0x14;
    uVar8 = param_1 + 7 & 0xfffffff8;
    pp_Var3 = (_Node_alloc_obj **)S_chunk_alloc(uVar8,&local_14);
    if (local_14 != 1) {
      p_Var4 = (_Node_alloc_obj *)((int)pp_Var3 + uVar8);
      iVar9 = 1;
      (&_S_free_list)[uVar8 - 1 >> 3] = (_Node_alloc_obj **)p_Var4;
      p_Var1 = p_Var4;
      if (local_14 != 2) {
        do {
          p_Var4 = p_Var1 + uVar8;
          *(_Node_alloc_obj **)p_Var1 = p_Var4;
          iVar9 = iVar9 + 1;
          p_Var1 = p_Var4;
        } while (local_14 + -1 != iVar9);
      }
      *(undefined4 *)p_Var4 = 0;
    }
  }
  else {
    *local_10 = (_Node_alloc_obj **)*pp_Var3;
  }
  __S_lock = 0;
  ExceptionList = local_c;
  return pp_Var3;
}




/* from: libgshttp:GSHttpDownload.cpp
   addr: 0058CF30 */

basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> * __thiscall
_STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::
basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>
          (basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *this,
          basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *param_1
          )

{
  int iVar1;
  char cVar2;
  undefined1 *_Dst;
  void *pvVar3;
  uint uVar4;
  size_t _Size;
  char *pcVar5;
  Allocator<char> local_12d;
  void *local_12c;
  _Vector_base<char,class_ExtAlloc::Allocator<char>_> local_128 [12];
  basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *local_11c;
  length_error local_118 [268];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c7dc1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_11c = this;
  animSYSTEM::GetBaseSeqNmb((animSYSTEM *)param_1);
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  local_12c = *(void **)(param_1 + 4);
  pvVar3 = *(void **)param_1;
  local_4 = 0;
  _Size = (int)local_12c - (int)pvVar3;
  iVar1 = _Size + 1;
  if (iVar1 != 0) {
    _Dst = (undefined1 *)ExtAlloc_Malloc_4(iVar1);
    *(undefined1 **)this = _Dst;
    *(undefined1 **)(this + 8) = _Dst + iVar1;
    *(undefined1 **)(this + 4) = _Dst;
    if (local_12c != pvVar3) {
      pvVar3 = memmove(_Dst,pvVar3,_Size);
      _Dst = (undefined1 *)((int)pvVar3 + _Size);
    }
    *(undefined1 **)(this + 4) = _Dst;
    *_Dst = 0;
    ExceptionList = local_c;
    return this;
  }
  _Vector_base<char,class_ExtAlloc::Allocator<char>_>::
  Vector_base<char,class_ExtAlloc::Allocator<char>_>(local_128,&local_12d);
  uVar4 = 0xffffffff;
  local_4._0_1_ = 1;
  pcVar5 = s_basic_string;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar2 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar2 != '\0');
  basic_string<char,class__STL::char_traits<char>,class__STL::allocator<char>_>::M_range_initialize
            ((basic_string<char,class__STL::char_traits<char>,class__STL::allocator<char>_> *)
             local_128,s_basic_string,s___AVlength_error__STL___005fe384 + ~uVar4 + 0x17);
  local_4 = CONCAT31(local_4._1_3_,2);
  length_error::length_error
            (local_118,
             (basic_string<char,class__STL::char_traits<char>,class__STL::allocator<char>_> *)
             local_128);
                    /* WARNING: Subroutine does not return */
  CxxThrowException_8(local_118,&__TI4_AVlength_error__STL__);
}




/* from: libgshttp:GSHttpDownload.cpp
   addr: 0058D040
   addr: 0058D040
   addr: 0058D040
   addr: 0058D040
   addr: 0058D040
   addr: 0058D040 */

void __thiscall
_STL::
_Rb_tree<void*,struct__STL::pair<void*_const,class_CHttpDownload*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CHttpDownload*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CHttpDownload*>_>_>
::M_insert(_Rb_tree<void*,struct__STL::pair<void*_const,class_CHttpDownload*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CHttpDownload*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CHttpDownload*>_>_>
           *this,_Rb_tree_node_base *param_1,_Rb_tree_node_base *param_2,
          pair<void*_const,class_CHttpDownload*> *param_3,_Rb_tree_node_base *param_4)

{
  pair<void*_const,class_CHttpDownload*> *ppVar1;
  int iVar2;
  _Rb_tree_node_base *p_Var3;
  _Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> *p_Var4;
  _Rb_tree_node_base *p_Var5;
  _Rb_tree_node_base *p_Var6;
  _Rb_tree_node_base **pp_Var7;
  int in_stack_00000014;
  
  if ((param_3 == *(pair<void*_const,class_CHttpDownload*> **)this) ||
     ((in_stack_00000014 == 0 &&
      ((param_2 != (_Rb_tree_node_base *)0x0 || (*(uint *)param_4 < *(uint *)(param_3 + 0x10)))))))
  {
    p_Var4 = M_create_node(this,(pair<void*_const,class_CHttpDownload*> *)param_4);
    *(_Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> **)(param_3 + 8) = p_Var4;
    ppVar1 = *(pair<void*_const,class_CHttpDownload*> **)this;
    if (param_3 == ppVar1) {
      *(_Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> **)(ppVar1 + 4) = p_Var4
      ;
      *(_Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> **)(*(int *)this + 0xc)
           = p_Var4;
    }
    else if (param_3 == *(pair<void*_const,class_CHttpDownload*> **)(ppVar1 + 8)) {
      *(_Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> **)(ppVar1 + 8) = p_Var4
      ;
    }
  }
  else {
    p_Var4 = M_create_node(this,(pair<void*_const,class_CHttpDownload*> *)param_4);
    *(_Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> **)(param_3 + 0xc) =
         p_Var4;
    if (param_3 == *(pair<void*_const,class_CHttpDownload*> **)(*(int *)this + 0xc)) {
      *(_Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> **)(*(int *)this + 0xc)
           = p_Var4;
    }
  }
  *(pair<void*_const,class_CHttpDownload*> **)((_Rb_tree_node_base *)p_Var4 + 4) = param_3;
  *(undefined4 *)((_Rb_tree_node_base *)p_Var4 + 8) = 0;
  *(undefined4 *)((_Rb_tree_node_base *)p_Var4 + 0xc) = 0;
  iVar2 = *(int *)this;
  *p_Var4 = (_Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_>)0x0;
  pp_Var7 = (_Rb_tree_node_base **)(iVar2 + 4);
  p_Var6 = (_Rb_tree_node_base *)p_Var4;
  if (p_Var4 != (_Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> *)*pp_Var7) {
    do {
      p_Var3 = *(_Rb_tree_node_base **)(p_Var6 + 4);
      if (*p_Var3 != (_Rb_tree_node_base)0x0) break;
      p_Var5 = *(_Rb_tree_node_base **)(*(int *)(p_Var3 + 4) + 8);
      if (p_Var3 == p_Var5) {
        p_Var5 = *(_Rb_tree_node_base **)(*(int *)(p_Var3 + 4) + 0xc);
        if ((p_Var5 == (_Rb_tree_node_base *)0x0) || (*p_Var5 != (_Rb_tree_node_base)0x0)) {
          if (p_Var6 == *(_Rb_tree_node_base **)(p_Var3 + 0xc)) {
            p_Var6 = *(_Rb_tree_node_base **)(p_Var3 + 0xc);
            *(undefined4 *)(p_Var3 + 0xc) = *(undefined4 *)(p_Var6 + 8);
            if (*(int *)(p_Var6 + 8) != 0) {
              *(_Rb_tree_node_base **)(*(int *)(p_Var6 + 8) + 4) = p_Var3;
            }
            *(undefined4 *)(p_Var6 + 4) = *(undefined4 *)(p_Var3 + 4);
            if (p_Var3 == *pp_Var7) {
              *pp_Var7 = p_Var6;
            }
            else {
              iVar2 = *(int *)(p_Var3 + 4);
              if (p_Var3 == *(_Rb_tree_node_base **)(iVar2 + 8)) {
                *(_Rb_tree_node_base **)(iVar2 + 8) = p_Var6;
              }
              else {
                *(_Rb_tree_node_base **)(iVar2 + 0xc) = p_Var6;
              }
            }
            *(_Rb_tree_node_base **)(p_Var6 + 8) = p_Var3;
            *(_Rb_tree_node_base **)(p_Var3 + 4) = p_Var6;
            p_Var6 = p_Var3;
          }
          **(undefined1 **)(p_Var6 + 4) = 1;
          **(undefined1 **)(*(int *)(p_Var6 + 4) + 4) = 0;
          p_Var3 = *(_Rb_tree_node_base **)(*(int *)(p_Var6 + 4) + 4);
          p_Var5 = *(_Rb_tree_node_base **)(p_Var3 + 8);
          *(undefined4 *)(p_Var3 + 8) = *(undefined4 *)(p_Var5 + 0xc);
          if (*(int *)(p_Var5 + 0xc) != 0) {
            *(_Rb_tree_node_base **)(*(int *)(p_Var5 + 0xc) + 4) = p_Var3;
          }
          *(undefined4 *)(p_Var5 + 4) = *(undefined4 *)(p_Var3 + 4);
          if (p_Var3 == *pp_Var7) {
            *pp_Var7 = p_Var5;
            *(_Rb_tree_node_base **)(p_Var5 + 0xc) = p_Var3;
            *(_Rb_tree_node_base **)(p_Var3 + 4) = p_Var5;
          }
          else {
            iVar2 = *(int *)(p_Var3 + 4);
            if (p_Var3 == *(_Rb_tree_node_base **)(iVar2 + 0xc)) {
              *(_Rb_tree_node_base **)(iVar2 + 0xc) = p_Var5;
              *(_Rb_tree_node_base **)(p_Var5 + 0xc) = p_Var3;
              *(_Rb_tree_node_base **)(p_Var3 + 4) = p_Var5;
            }
            else {
              *(_Rb_tree_node_base **)(iVar2 + 8) = p_Var5;
              *(_Rb_tree_node_base **)(p_Var5 + 0xc) = p_Var3;
              *(_Rb_tree_node_base **)(p_Var3 + 4) = p_Var5;
            }
          }
        }
        else {
LAB_0058d0ee:
          *p_Var3 = (_Rb_tree_node_base)0x1;
          *p_Var5 = (_Rb_tree_node_base)0x1;
          **(undefined1 **)(*(int *)(p_Var6 + 4) + 4) = 0;
          p_Var6 = *(_Rb_tree_node_base **)(*(int *)(p_Var6 + 4) + 4);
        }
      }
      else {
        if ((p_Var5 != (_Rb_tree_node_base *)0x0) && (*p_Var5 == (_Rb_tree_node_base)0x0))
        goto LAB_0058d0ee;
        if (p_Var6 == *(_Rb_tree_node_base **)(p_Var3 + 8)) {
          _Rb_global<bool>::Rotate_right(p_Var3,pp_Var7);
          p_Var6 = p_Var3;
        }
        **(undefined1 **)(p_Var6 + 4) = 1;
        **(undefined1 **)(*(int *)(p_Var6 + 4) + 4) = 0;
        _Rb_global<bool>::Rotate_left(*(_Rb_tree_node_base **)(*(int *)(p_Var6 + 4) + 4),pp_Var7);
      }
    } while (p_Var6 != *pp_Var7);
  }
  **pp_Var7 = (_Rb_tree_node_base)0x1;
  *(int *)(this + 4) = *(int *)(this + 4) + 1;
  *(_Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> **)param_1 = p_Var4;
  return;
}




/* from: libgshttp:GSHttpDownload.cpp
   addr: 0058D210 */

_Rb_tree_node<struct__STL::pair<unsigned_int_const_,class_CHttpRequest*>_> * __thiscall
_STL::
_Rb_tree<unsigned_int,struct__STL::pair<unsigned_int_const_,class_CHttpRequest*>,struct__STL::_Select1st<struct__STL::pair<unsigned_int_const_,class_CHttpRequest*>_>,struct__STL::less<unsigned_int>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_int_const_,class_CHttpRequest*>_>_>
::M_find(_Rb_tree<unsigned_int,struct__STL::pair<unsigned_int_const_,class_CHttpRequest*>,struct__STL::_Select1st<struct__STL::pair<unsigned_int_const_,class_CHttpRequest*>_>,struct__STL::less<unsigned_int>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_int_const_,class_CHttpRequest*>_>_>
         *this,uint *param_1)

{
  _Rb_tree_node<struct__STL::pair<unsigned_int_const_,class_CHttpRequest*>_> *p_Var1;
  _Rb_tree_node<struct__STL::pair<unsigned_int_const_,class_CHttpRequest*>_> *p_Var2;
  _Rb_tree_node<struct__STL::pair<unsigned_int_const_,class_CHttpRequest*>_> *p_Var3;
  _Rb_tree_node<struct__STL::pair<unsigned_int_const_,class_CHttpRequest*>_> *p_Var4;
  
  p_Var1 = *(_Rb_tree_node<struct__STL::pair<unsigned_int_const_,class_CHttpRequest*>_> **)this;
  p_Var4 = p_Var1;
  if (*(_Rb_tree_node<struct__STL::pair<unsigned_int_const_,class_CHttpRequest*>_> **)(p_Var1 + 4)
      != (_Rb_tree_node<struct__STL::pair<unsigned_int_const_,class_CHttpRequest*>_> *)0x0) {
    p_Var2 = *(_Rb_tree_node<struct__STL::pair<unsigned_int_const_,class_CHttpRequest*>_> **)
              (p_Var1 + 4);
    do {
      if (*(uint *)(p_Var2 + 0x10) < *param_1) {
        p_Var3 = *(_Rb_tree_node<struct__STL::pair<unsigned_int_const_,class_CHttpRequest*>_> **)
                  (p_Var2 + 0xc);
      }
      else {
        p_Var3 = *(_Rb_tree_node<struct__STL::pair<unsigned_int_const_,class_CHttpRequest*>_> **)
                  (p_Var2 + 8);
        p_Var4 = p_Var2;
      }
      p_Var2 = p_Var3;
    } while (p_Var3 != (_Rb_tree_node<struct__STL::pair<unsigned_int_const_,class_CHttpRequest*>_> *
                       )0x0);
  }
  if ((p_Var4 != p_Var1) && (*(uint *)(p_Var4 + 0x10) <= *param_1)) {
    p_Var1 = p_Var4;
  }
  return p_Var1;
}




/* from: libgshttp:GSHttpDownload.cpp
   addr: 0058D250 */

void * __cdecl _STL::__node_alloc<1,0>::S_refill(uint param_1)

{
  uint uVar1;
  _Node_alloc_obj **pp_Var2;
  _Node_alloc_obj *p_Var3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  _Node_alloc_obj *p_Var7;
  uint uVar8;
  int iVar9;
  uint local_4;
  
  uVar8 = param_1 + 7 & 0xfffffff8;
  uVar4 = (int)_S_end_free - (int)_S_start_free;
  local_4 = 0x14;
  pcVar6 = _S_start_free;
  if (uVar4 < uVar8 * 0x14) {
    if (uVar4 < uVar8) {
      uVar1 = ((_S_heap_size >> 4) + 7 & 0xfffffff8) + uVar8 * 0x28;
      if (uVar4 != 0) {
        uVar4 = uVar4 - 1 >> 3;
        *(_Node_alloc_obj ***)_S_start_free = (&_S_free_list)[uVar4];
        (&_S_free_list)[uVar4] = (_Node_alloc_obj **)_S_start_free;
      }
      _S_start_free = (char *)operator_new(uVar1);
      uVar4 = uVar8;
      if (_S_start_free == (char *)0x0) {
        for (; uVar4 < 0x81; uVar4 = uVar4 + 8) {
          uVar5 = uVar4 - 1 >> 3;
          pp_Var2 = (&_S_free_list)[uVar5];
          if (pp_Var2 != (_Node_alloc_obj **)0x0) {
            _S_end_free = (char *)((int)pp_Var2 + uVar4);
            _S_start_free = (char *)pp_Var2;
            (&_S_free_list)[uVar5] = (_Node_alloc_obj **)*pp_Var2;
            goto LAB_0058d351;
          }
        }
        _S_end_free = (char *)0x0;
        _S_start_free = (char *)operator_new(uVar1);
      }
      _S_heap_size = _S_heap_size + uVar1;
      _S_end_free = _S_start_free + uVar1;
LAB_0058d351:
      pcVar6 = S_chunk_alloc(uVar8,(int *)&local_4);
    }
    else {
      local_4 = uVar4 / uVar8;
      _S_start_free = _S_start_free + local_4 * uVar8;
    }
    if (local_4 == 1) {
      return pcVar6;
    }
  }
  else {
    _S_start_free = _S_start_free + uVar8 * 0x14;
  }
  p_Var7 = (_Node_alloc_obj *)(pcVar6 + uVar8);
  iVar9 = 1;
  (&_S_free_list)[uVar8 - 1 >> 3] = (_Node_alloc_obj **)p_Var7;
  p_Var3 = p_Var7;
  if (local_4 != 2) {
    do {
      p_Var7 = p_Var3 + uVar8;
      *(_Node_alloc_obj **)p_Var3 = p_Var7;
      iVar9 = iVar9 + 1;
      p_Var3 = p_Var7;
    } while (local_4 - 1 != iVar9);
  }
  *(undefined4 *)p_Var7 = 0;
  return pcVar6;
}




/* from: libgshttp:GSHttpDownload.cpp
   addr: 0058D3C0
   addr: 0058D3C0
   addr: 0058D3C0
   addr: 0058D3C0
   addr: 0058D3C0
   addr: 0058D3C0
   addr: 0058D3C0 */

_Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> * __thiscall
_STL::
_Rb_tree<void*,struct__STL::pair<void*_const,class_CHttpDownload*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CHttpDownload*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CHttpDownload*>_>_>
::M_create_node(_Rb_tree<void*,struct__STL::pair<void*_const,class_CHttpDownload*>,struct__STL::_Select1st<struct__STL::pair<void*_const,class_CHttpDownload*>_>,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_CHttpDownload*>_>_>
                *this,pair<void*_const,class_CHttpDownload*> *param_1)

{
  _Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> *p_Var1;
  
  p_Var1 = (_Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> *)
           ExtAlloc_Malloc_4(0x18);
  if (p_Var1 + 0x10 != (_Rb_tree_node<struct__STL::pair<void*_const,class_CHttpDownload*>_> *)0x0) {
    *(undefined4 *)(p_Var1 + 0x10) = *(undefined4 *)param_1;
    *(undefined4 *)(p_Var1 + 0x14) = *(undefined4 *)(param_1 + 4);
  }
  return p_Var1;
}




/* from: libgshttp:GSHttpDownload.cpp
   addr: 0058D3F0
   addr: 0058D3F0 */

void __thiscall
_STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::
M_range_initialize(basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>
                   *this,char *param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  undefined1 *_Dst;
  size_t _Size;
  
  _Size = (int)param_2 - (int)param_1;
  iVar1 = _Size + 1;
  if (iVar1 == 0) {
    stl_throw_length_error(s_basic_string);
  }
  else {
    iVar2 = ExtAlloc_Malloc_4(iVar1);
    *(int *)this = iVar2;
    *(int *)(this + 4) = iVar2;
    *(int *)(this + 8) = iVar2 + iVar1;
  }
  _Dst = *(undefined1 **)this;
  if (param_2 != param_1) {
    pvVar3 = memmove(_Dst,param_1,_Size);
    _Dst = (undefined1 *)((int)pvVar3 + _Size);
  }
  *(undefined1 **)(this + 4) = _Dst;
  *_Dst = 0;
  return;
}




/* from: libgshttp:GSHttpDownload.cpp
   addr: 0058D450 */

char * _STL::find_if(char *param_1,char *param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_2 - (int)param_1 >> 2;
  while( true ) {
    if (iVar1 < 1) {
      iVar1 = (int)param_2 - (int)param_1;
      if (iVar1 != 1) {
        if (iVar1 != 2) {
          if (iVar1 != 3) {
            return param_2;
          }
          if (*param_1 == param_3) {
            return param_1;
          }
          param_1 = param_1 + 1;
        }
        if (*param_1 == param_3) {
          return param_1;
        }
        param_1 = param_1 + 1;
      }
      if (*param_1 != param_3) {
        return param_2;
      }
      return param_1;
    }
    if (*param_1 == param_3) {
      return param_1;
    }
    if (param_1[1] == param_3) {
      return param_1 + 1;
    }
    if (param_1[2] == param_3) {
      return param_1 + 2;
    }
    if (param_1[3] == param_3) break;
    param_1 = param_1 + 4;
    iVar1 = iVar1 + -1;
  }
  return param_1 + 3;
}




/* from: libgshttp:GSHttpDownload.cpp
   addr: 0058D4B0 */

void __cdecl
_STL::_Rb_global<bool>::Rebalance(_Rb_tree_node_base *param_1,_Rb_tree_node_base **param_2)

{
  int iVar1;
  _Rb_tree_node_base *p_Var2;
  _Rb_tree_node_base *p_Var3;
  
  *param_1 = (_Rb_tree_node_base)0x0;
  if (param_1 == *param_2) {
    **param_2 = (_Rb_tree_node_base)0x1;
    return;
  }
  do {
    p_Var2 = *(_Rb_tree_node_base **)(param_1 + 4);
    if (*p_Var2 != (_Rb_tree_node_base)0x0) {
      **param_2 = (_Rb_tree_node_base)0x1;
      return;
    }
    p_Var3 = *(_Rb_tree_node_base **)(*(int *)(p_Var2 + 4) + 8);
    if (p_Var2 == p_Var3) {
      p_Var3 = *(_Rb_tree_node_base **)(*(int *)(p_Var2 + 4) + 0xc);
      if ((p_Var3 != (_Rb_tree_node_base *)0x0) && (*p_Var3 == (_Rb_tree_node_base)0x0))
      goto LAB_0058d4eb;
      if (param_1 == *(_Rb_tree_node_base **)(p_Var2 + 0xc)) {
        p_Var3 = *(_Rb_tree_node_base **)(p_Var2 + 0xc);
        *(undefined4 *)(p_Var2 + 0xc) = *(undefined4 *)(p_Var3 + 8);
        if (*(int *)(p_Var3 + 8) != 0) {
          *(_Rb_tree_node_base **)(*(int *)(p_Var3 + 8) + 4) = p_Var2;
        }
        *(undefined4 *)(p_Var3 + 4) = *(undefined4 *)(p_Var2 + 4);
        if (p_Var2 == *param_2) {
          *param_2 = p_Var3;
        }
        else {
          iVar1 = *(int *)(p_Var2 + 4);
          if (p_Var2 == *(_Rb_tree_node_base **)(iVar1 + 8)) {
            *(_Rb_tree_node_base **)(iVar1 + 8) = p_Var3;
          }
          else {
            *(_Rb_tree_node_base **)(iVar1 + 0xc) = p_Var3;
          }
        }
        *(_Rb_tree_node_base **)(p_Var3 + 8) = p_Var2;
        *(_Rb_tree_node_base **)(p_Var2 + 4) = p_Var3;
        param_1 = p_Var2;
      }
      **(undefined1 **)(param_1 + 4) = 1;
      **(undefined1 **)(*(int *)(param_1 + 4) + 4) = 0;
      p_Var2 = *(_Rb_tree_node_base **)(*(int *)(param_1 + 4) + 4);
      p_Var3 = *(_Rb_tree_node_base **)(p_Var2 + 8);
      *(undefined4 *)(p_Var2 + 8) = *(undefined4 *)(p_Var3 + 0xc);
      if (*(int *)(p_Var3 + 0xc) != 0) {
        *(_Rb_tree_node_base **)(*(int *)(p_Var3 + 0xc) + 4) = p_Var2;
      }
      *(undefined4 *)(p_Var3 + 4) = *(undefined4 *)(p_Var2 + 4);
      if (p_Var2 == *param_2) {
        *param_2 = p_Var3;
        *(_Rb_tree_node_base **)(p_Var3 + 0xc) = p_Var2;
      }
      else {
        iVar1 = *(int *)(p_Var2 + 4);
        if (p_Var2 == *(_Rb_tree_node_base **)(iVar1 + 0xc)) {
          *(_Rb_tree_node_base **)(iVar1 + 0xc) = p_Var3;
          *(_Rb_tree_node_base **)(p_Var3 + 0xc) = p_Var2;
        }
        else {
          *(_Rb_tree_node_base **)(iVar1 + 8) = p_Var3;
          *(_Rb_tree_node_base **)(p_Var3 + 0xc) = p_Var2;
        }
      }
LAB_0058d639:
      *(_Rb_tree_node_base **)(p_Var2 + 4) = p_Var3;
    }
    else {
      if ((p_Var3 == (_Rb_tree_node_base *)0x0) || (*p_Var3 != (_Rb_tree_node_base)0x0)) {
        if (param_1 == *(_Rb_tree_node_base **)(p_Var2 + 8)) {
          p_Var3 = *(_Rb_tree_node_base **)(p_Var2 + 8);
          *(undefined4 *)(p_Var2 + 8) = *(undefined4 *)(p_Var3 + 0xc);
          if (*(int *)(p_Var3 + 0xc) != 0) {
            *(_Rb_tree_node_base **)(*(int *)(p_Var3 + 0xc) + 4) = p_Var2;
          }
          *(undefined4 *)(p_Var3 + 4) = *(undefined4 *)(p_Var2 + 4);
          if (p_Var2 == *param_2) {
            *param_2 = p_Var3;
          }
          else {
            iVar1 = *(int *)(p_Var2 + 4);
            if (p_Var2 == *(_Rb_tree_node_base **)(iVar1 + 0xc)) {
              *(_Rb_tree_node_base **)(iVar1 + 0xc) = p_Var3;
            }
            else {
              *(_Rb_tree_node_base **)(iVar1 + 8) = p_Var3;
            }
          }
          *(_Rb_tree_node_base **)(p_Var3 + 0xc) = p_Var2;
          *(_Rb_tree_node_base **)(p_Var2 + 4) = p_Var3;
          param_1 = p_Var2;
        }
        **(undefined1 **)(param_1 + 4) = 1;
        **(undefined1 **)(*(int *)(param_1 + 4) + 4) = 0;
        p_Var2 = *(_Rb_tree_node_base **)(*(int *)(param_1 + 4) + 4);
        p_Var3 = *(_Rb_tree_node_base **)(p_Var2 + 0xc);
        *(undefined4 *)(p_Var2 + 0xc) = *(undefined4 *)(p_Var3 + 8);
        if (*(int *)(p_Var3 + 8) != 0) {
          *(_Rb_tree_node_base **)(*(int *)(p_Var3 + 8) + 4) = p_Var2;
        }
        *(undefined4 *)(p_Var3 + 4) = *(undefined4 *)(p_Var2 + 4);
        if (p_Var2 == *param_2) {
          *param_2 = p_Var3;
        }
        else {
          iVar1 = *(int *)(p_Var2 + 4);
          if (p_Var2 == *(_Rb_tree_node_base **)(iVar1 + 8)) {
            *(_Rb_tree_node_base **)(iVar1 + 8) = p_Var3;
          }
          else {
            *(_Rb_tree_node_base **)(iVar1 + 0xc) = p_Var3;
          }
        }
        *(_Rb_tree_node_base **)(p_Var3 + 8) = p_Var2;
        goto LAB_0058d639;
      }
LAB_0058d4eb:
      *p_Var2 = (_Rb_tree_node_base)0x1;
      *p_Var3 = (_Rb_tree_node_base)0x1;
      **(undefined1 **)(*(int *)(param_1 + 4) + 4) = 0;
      param_1 = *(_Rb_tree_node_base **)(*(int *)(param_1 + 4) + 4);
    }
    if (param_1 == *param_2) {
      **param_2 = (_Rb_tree_node_base)0x1;
      return;
    }
  } while( true );
}




/* from: libgshttp:GSHttpDownload.cpp
   addr: 0058D660 */

char * __cdecl _STL::__node_alloc<1,0>::S_chunk_alloc(uint param_1,int *param_2)

{
  char *pcVar1;
  _Node_alloc_obj **pp_Var2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = (int)_S_end_free - (int)_S_start_free;
  uVar3 = *param_2 * param_1;
  pp_Var2 = (_Node_alloc_obj **)_S_start_free;
  if (uVar4 < uVar3) {
    do {
      if (param_1 <= uVar4) {
        *param_2 = uVar4 / param_1;
        pcVar1 = _S_start_free;
        _S_start_free = _S_start_free + (uVar4 / param_1) * param_1;
        return pcVar1;
      }
      uVar3 = ((_S_heap_size >> 4) + 7 & 0xfffffff8) + uVar3 * 2;
      if (uVar4 != 0) {
        uVar4 = uVar4 - 1 >> 3;
        *pp_Var2 = (_Node_alloc_obj *)(&_S_free_list)[uVar4];
        (&_S_free_list)[uVar4] = (_Node_alloc_obj **)_S_start_free;
      }
      _S_start_free = (char *)operator_new(uVar3);
      if ((_Node_alloc_obj **)_S_start_free == (_Node_alloc_obj **)0x0) {
        uVar4 = param_1;
        if (param_1 < 0x81) {
          do {
            uVar5 = uVar4 - 1 >> 3;
            pp_Var2 = (&_S_free_list)[uVar5];
            if (pp_Var2 != (_Node_alloc_obj **)0x0) {
              _S_start_free = (char *)pp_Var2;
              (&_S_free_list)[uVar5] = (_Node_alloc_obj **)*pp_Var2;
              _S_end_free = (char *)((int)pp_Var2 + uVar4);
              goto LAB_0058d728;
            }
            uVar4 = uVar4 + 8;
          } while (uVar4 < 0x81);
        }
        _S_end_free = (char *)0x0;
        _S_start_free = (char *)operator_new(uVar3);
      }
      _S_end_free = (char *)((int)_S_start_free + uVar3);
      _S_heap_size = _S_heap_size + uVar3;
      pp_Var2 = (_Node_alloc_obj **)_S_start_free;
LAB_0058d728:
      uVar3 = *param_2 * param_1;
      uVar4 = (int)_S_end_free - (int)pp_Var2;
    } while (uVar4 < uVar3);
  }
  _S_start_free = (char *)((int)pp_Var2 + uVar3);
  return (char *)pp_Var2;
}




/* from: libgshttp:GSHttpDownload.cpp
   addr: 0058D790 */

void __thiscall
_STL::_String_base<char,class__STL::allocator<char>_>::M_allocate_block
          (_String_base<char,class__STL::allocator<char>_> *this,uint param_1)

{
  void *pvVar1;
  
  if (param_1 == 0) {
    stl_throw_length_error(s_basic_string);
    return;
  }
  if (param_1 < 0x81) {
    pvVar1 = __node_alloc<1,0>::M_allocate(param_1);
    *(void **)this = pvVar1;
    *(void **)(this + 4) = pvVar1;
    *(uint *)(this + 8) = (int)pvVar1 + param_1;
    return;
  }
  pvVar1 = operator_new(param_1);
  *(void **)this = pvVar1;
  *(void **)(this + 4) = pvVar1;
  *(uint *)(this + 8) = (int)pvVar1 + param_1;
  return;
}




/* from: libgshttp:GSHttpDownload.cpp
   addr: 0058D7F0 */

void __thiscall
_STL::_String_base<char,class_ExtAlloc::Allocator<char>_>::M_allocate_block
          (_String_base<char,class_ExtAlloc::Allocator<char>_> *this,uint param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    stl_throw_length_error(s_basic_string);
    return;
  }
  iVar1 = ExtAlloc_Malloc_4(param_1);
  *(int *)this = iVar1;
  *(int *)(this + 4) = iVar1;
  *(uint *)(this + 8) = iVar1 + param_1;
  return;
}




/* from: libgshttp:GSHttpDownload.cpp
   addr: 0058D830 */

basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> * __thiscall
_STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::
M_assign_dispatch(basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>
                  *this,char *param_1,char *param_2,__false_type *param_3)

{
  char cVar1;
  char *pcVar2;
  char *_Dst;
  
  _Dst = *(char **)this;
  pcVar2 = param_1;
  if (param_1 != param_2) {
    do {
      if (_Dst == *(char **)(this + 4)) {
        if (pcVar2 != param_2) {
          append(this,pcVar2,param_2,(forward_iterator_tag *)&param_1);
          return this;
        }
        break;
      }
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      *_Dst = cVar1;
      _Dst = _Dst + 1;
    } while (pcVar2 != param_2);
  }
  pcVar2 = *(char **)(this + 4);
  if (_Dst == pcVar2) {
    return this;
  }
  memmove(_Dst,pcVar2,1);
  *(char **)(this + 4) = _Dst + (*(int *)(this + 4) - (int)pcVar2);
  return this;
}




/* from: libgshttp:GSHttpDownload.cpp
   addr: 0058D8B0 */

basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> * __thiscall
_STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::append
          (basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *this,
          char *param_1,char *param_2,forward_iterator_tag *param_3)

{
  char *pcVar1;
  char *pcVar2;
  char **ppcVar3;
  void *pvVar4;
  void *pvVar5;
  undefined1 *puVar6;
  char *pcVar7;
  char *pcVar8;
  char *local_4;
  
  pcVar2 = param_2;
  if (param_1 != param_2) {
    pcVar7 = (char *)(*(int *)(this + 4) - *(int *)this);
    pcVar8 = param_2 + -(int)param_1;
    local_4 = pcVar7;
    if ((pcVar8 == (char *)0xffffffff) || ((char *)(-(int)pcVar8 - 2U) < pcVar7)) {
      stl_throw_length_error(s_basic_string);
    }
    if ((char *)((*(int *)(this + 8) - *(int *)this) - 1U) < pcVar8 + (int)pcVar7) {
      ppcVar3 = &param_2;
      if (pcVar8 <= pcVar7) {
        ppcVar3 = &local_4;
      }
      pcVar1 = *ppcVar3;
      param_2 = pcVar8;
      pvVar4 = (void *)ExtAlloc_Malloc_4(pcVar1 + 1 + (int)pcVar7);
      pvVar5 = copy_trivial(*(void **)this,*(void **)(this + 4),pvVar4);
      puVar6 = (undefined1 *)copy_trivial(param_1,pcVar2,pvVar5);
      *puVar6 = 0;
      ExtAlloc_Free_4(*(undefined4 *)this);
      *(void **)this = pvVar4;
      *(char **)(this + 8) = (char *)((int)pvVar4 + (int)(pcVar1 + 1 + (int)pcVar7));
      *(undefined1 **)(this + 4) = puVar6;
      return this;
    }
    pcVar7 = param_1 + 1;
    if (pcVar2 != pcVar7) {
      memmove((void *)(*(int *)(this + 4) + 1),pcVar7,(int)pcVar2 - (int)pcVar7);
    }
    pcVar8[*(int *)(this + 4)] = '\0';
    **(char **)(this + 4) = *param_1;
    *(char **)(this + 4) = pcVar8 + *(int *)(this + 4);
  }
  return this;
}

