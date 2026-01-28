
/* from: libgsclient:GSProxyConnection.cpp
   addr: 005AEE00 */

void __thiscall CProxyConnection::~CProxyConnection(CProxyConnection *this)

{
  _Rb_tree<unsigned_short,struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>_>,struct__STL::less<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>_>_>
  *this_00;
  _Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
  *p_Var1;
  _Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
  *p_Var2;
  _STLP_alloc_proxy<struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>*,struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
  *this_01;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005cb5f9;
  local_c = ExceptionList;
  local_4 = 2;
  ExceptionList = &local_c;
  ResetAll(this);
  this_00 = (_Rb_tree<unsigned_short,struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>_>,struct__STL::less<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>_>_>
             *)(this + 0x1c);
  local_4._0_1_ = 3;
  if (*(int *)(this + 0x20) != 0) {
    _STL::
    _Rb_tree<unsigned_short,struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>_>,struct__STL::less<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>_>_>
    ::M_erase(this_00,*(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>_>
                        **)(*(int *)this_00 + 4));
    *(int *)(*(int *)this_00 + 8) = *(int *)this_00;
    *(undefined4 *)(*(int *)this_00 + 4) = 0;
    *(int *)(*(int *)this_00 + 0xc) = *(int *)this_00;
    *(undefined4 *)(this + 0x20) = 0;
  }
  local_4._0_1_ = 1;
  _STL::_String_base<char,class_ExtAlloc::Allocator<char>_>::
  ~_String_base<char,class_ExtAlloc::Allocator<char>_>
            ((_String_base<char,class_ExtAlloc::Allocator<char>_> *)this_00);
  local_4 = CONCAT31(local_4._1_3_,4);
  _STL::_List_base<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_>::clear
            ((_List_base<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_> *)
             (this + 0x14));
  ExtAlloc_Free_4(*(undefined4 *)(this + 0x14));
  this_01 = (_STLP_alloc_proxy<struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>*,struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
             *)(this + 0xc);
  local_4 = 5;
  p_Var2 = *(_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
             **)*(_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
                  **)this_01;
  if (p_Var2 != *(_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
                  **)this_01) {
    do {
      p_Var1 = *(_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
                 **)p_Var2;
      _STL::
      _STLP_alloc_proxy<struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>*,struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
      ::deallocate(this_01,p_Var2,1);
      p_Var2 = p_Var1;
    } while (p_Var1 != *(_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
                         **)this_01);
  }
  *(undefined4 *)*(undefined4 *)this_01 = *(undefined4 *)this_01;
  *(int *)(*(int *)this_01 + 4) = *(int *)this_01;
  ExtAlloc_Free_4(*(undefined4 *)this_01);
  ExceptionList = local_c;
  return;
}




/* from: libgsclient:GSProxyConnection.cpp
   addr: 005AEEF0 */

void __thiscall
ExtAlloc::map<unsigned_short,struct_stProxyInfo,struct__STL::less<unsigned_short>_>::
~map<unsigned_short,struct_stProxyInfo,struct__STL::less<unsigned_short>_>
          (map<unsigned_short,struct_stProxyInfo,struct__STL::less<unsigned_short>_> *this)

{
  int iVar1;
  int iVar2;
  void **ppvVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005cb618;
  local_c = ExceptionList;
  local_4 = 0;
  ppvVar3 = &local_c;
  if (*(int *)(this + 4) != 0) {
    iVar2 = *(int *)(*(int *)this + 4);
    ExceptionList = &local_c;
    while (iVar2 != 0) {
      _STL::
      _Rb_tree<unsigned_short,struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>_>,struct__STL::less<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>_>_>
      ::M_erase((_Rb_tree<unsigned_short,struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>_>,struct__STL::less<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>_>_>
                 *)this,*(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>_>
                          **)(iVar2 + 0xc));
      iVar1 = *(int *)(iVar2 + 8);
      _STL::pair<unsigned_short_const_,struct_stProxyInfo>::_scalar_deleting_destructor_
                ((pair<unsigned_short_const_,struct_stProxyInfo> *)(iVar2 + 0x10),0);
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




/* from: libgsclient:GSProxyConnection.cpp
   addr: 005AEF80 */

ushort __thiscall
CProxyConnection::FindProxyServer
          (CProxyConnection *this,char *param_1,ushort param_2,ushort param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  bool bVar8;
  
  iVar5 = *(int *)(*(int *)(this + 0x1c) + 8);
  do {
    if (iVar5 == *(int *)(this + 0x1c)) {
      return 0;
    }
    iVar4 = *(int *)(*(int *)(iVar5 + 0xa0) + 8);
    while (iVar4 != *(int *)(iVar5 + 0xa0)) {
      pbVar6 = (byte *)(iVar4 + 0x12);
      pbVar7 = (byte *)param_1;
      do {
        bVar1 = *pbVar6;
        bVar8 = bVar1 < *pbVar7;
        if (bVar1 != *pbVar7) {
LAB_005aefd3:
          iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_005aefd8;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar6[1];
        bVar8 = bVar1 < pbVar7[1];
        if (bVar1 != pbVar7[1]) goto LAB_005aefd3;
        pbVar6 = pbVar6 + 2;
        pbVar7 = pbVar7 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_005aefd8:
      if (((iVar3 == 0) && (*(ushort *)(iVar4 + 0x36) == param_2)) &&
         (*(ushort *)(iVar4 + 0x38) == param_3)) {
        return *(ushort *)(iVar5 + 0x10);
      }
      iVar3 = *(int *)(iVar4 + 0xc);
      if (iVar3 == 0) {
        iVar3 = *(int *)(iVar4 + 4);
        if (iVar4 == *(int *)(iVar3 + 0xc)) {
          do {
            iVar4 = iVar3;
            iVar3 = *(int *)(iVar4 + 4);
          } while (iVar4 == *(int *)(iVar3 + 0xc));
        }
        if (*(int *)(iVar4 + 0xc) != iVar3) {
          iVar4 = iVar3;
        }
      }
      else {
        for (iVar2 = *(int *)(iVar3 + 8); iVar4 = iVar3, iVar2 != 0; iVar2 = *(int *)(iVar2 + 8)) {
          iVar3 = iVar2;
        }
      }
    }
    iVar4 = *(int *)(iVar5 + 0xc);
    if (iVar4 == 0) {
      iVar4 = *(int *)(iVar5 + 4);
      if (iVar5 == *(int *)(iVar4 + 0xc)) {
        do {
          iVar5 = iVar4;
          iVar4 = *(int *)(iVar5 + 4);
        } while (iVar5 == *(int *)(iVar4 + 0xc));
      }
      if (*(int *)(iVar5 + 0xc) != iVar4) {
        iVar5 = iVar4;
      }
    }
    else {
      for (iVar3 = *(int *)(iVar4 + 8); iVar5 = iVar4, iVar3 != 0; iVar3 = *(int *)(iVar3 + 8)) {
        iVar4 = iVar3;
      }
    }
  } while( true );
}




/* from: libgsclient:GSProxyConnection.cpp
   addr: 005AF0A0 */

ushort __thiscall
CProxyConnection::FindProxyModule
          (CProxyConnection *this,ushort param_1,char *param_2,ushort param_3,ushort param_4)

{
  byte bVar1;
  int iVar2;
  _Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_> *p_Var3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  byte *pbVar7;
  bool bVar8;
  
  p_Var3 = _STL::
           _Rb_tree<unsigned_short,struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>,struct__STL::less<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>_>
           ::M_find((_Rb_tree<unsigned_short,struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>,struct__STL::less<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>_>
                     *)(this + 0x1c),&param_1);
  if (p_Var3 != *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_> **)
                 (this + 0x1c)) {
    iVar4 = *(int *)(*(int *)(p_Var3 + 0xa0) + 8);
    while (iVar4 != *(int *)(p_Var3 + 0xa0)) {
      pbVar5 = (byte *)(iVar4 + 0x12);
      pbVar7 = (byte *)param_2;
      do {
        bVar1 = *pbVar5;
        bVar8 = bVar1 < *pbVar7;
        if (bVar1 != *pbVar7) {
LAB_005af0f9:
          iVar6 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_005af0fe;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar5[1];
        bVar8 = bVar1 < pbVar7[1];
        if (bVar1 != pbVar7[1]) goto LAB_005af0f9;
        pbVar5 = pbVar5 + 2;
        pbVar7 = pbVar7 + 2;
      } while (bVar1 != 0);
      iVar6 = 0;
LAB_005af0fe:
      if (((iVar6 == 0) && (*(ushort *)(iVar4 + 0x36) == param_3)) &&
         (*(ushort *)(iVar4 + 0x38) == param_4)) {
        return *(ushort *)(iVar4 + 0x10);
      }
      iVar6 = *(int *)(iVar4 + 0xc);
      if (iVar6 == 0) {
        iVar6 = *(int *)(iVar4 + 4);
        if (iVar4 == *(int *)(iVar6 + 0xc)) {
          do {
            iVar4 = iVar6;
            iVar6 = *(int *)(iVar4 + 4);
          } while (iVar4 == *(int *)(iVar6 + 0xc));
        }
        if (*(int *)(iVar4 + 0xc) != iVar6) {
          iVar4 = iVar6;
        }
      }
      else {
        for (iVar2 = *(int *)(iVar6 + 8); iVar4 = iVar6, iVar2 != 0; iVar2 = *(int *)(iVar2 + 8)) {
          iVar6 = iVar2;
        }
      }
    }
  }
  return 0;
}




/* from: libgsclient:GSProxyConnection.cpp
   addr: 005AF170 */

uchar __thiscall
CProxyConnection::AddProxyToList(CProxyConnection *this,ushort param_1,char *param_2,ushort param_3)

{
  _Rb_tree<unsigned_short,struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>,struct__STL::less<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>_>
  *this_00;
  _Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_> *p_Var1;
  char *pcVar2;
  uchar uVar3;
  _Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_> *p_Var4;
  _Rb_tree_node_base *p_Var5;
  ushort uVar6;
  undefined2 in_stack_00000006;
  undefined2 in_stack_0000000e;
  _Rb_tree_node_base *local_160;
  CProxyConnection *local_15c;
  clProxyConnection *local_158;
  undefined1 local_154 [4];
  stProxyInfo local_150 [130];
  ushort local_ce;
  undefined1 local_cc;
  undefined4 local_c8;
  int local_c4;
  int local_c0;
  undefined1 *local_b8;
  ushort local_b0;
  stProxyInfo local_ac [140];
  _Rb_tree<unsigned_short,struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>,struct__STL::less<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>_>
  local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005cb669;
  local_c = ExceptionList;
  this_00 = (_Rb_tree<unsigned_short,struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>,struct__STL::less<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>_>
             *)(this + 0x1c);
  local_160 = (_Rb_tree_node_base *)0x0;
  p_Var1 = *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_> **)this_00
  ;
  ExceptionList = &local_c;
  local_15c = this;
  p_Var4 = _STL::
           _Rb_tree<unsigned_short,struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>,struct__STL::less<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>_>
           ::M_find(this_00,&param_1);
  if (p_Var4 == p_Var1) {
    p_Var5 = *(_Rb_tree_node_base **)(*(_Rb_tree_node_base **)this_00 + 8);
    local_160 = p_Var5;
    if (p_Var5 != *(_Rb_tree_node_base **)this_00) {
      do {
        local_160 = p_Var5;
        if (param_1 < *(ushort *)(p_Var5 + 0x10)) break;
        p_Var5 = _STL::_Rb_global<bool>::M_increment(p_Var5);
        local_160 = p_Var5;
      } while (p_Var5 != *(_Rb_tree_node_base **)this_00);
    }
    local_b8 = &ExtAlloc::map<unsigned_short,struct_stModuleInfo,struct__STL::less<unsigned_short>_>
                ::_vbtable_;
    _STL::
    map<unsigned_short,struct_stModuleInfo,struct__STL::less<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>_>
    ::
    map<unsigned_short,struct_stModuleInfo,struct__STL::less<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>_>
              ((map<unsigned_short,struct_stModuleInfo,struct__STL::less<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>_>
                *)&local_c4);
    pcVar2 = param_2;
    local_4 = 0;
    strncpy((char *)local_150,param_2,0x80);
    uVar6 = (ushort)_param_3;
    local_cc = 0;
    local_ce = uVar6;
    local_158 = (clProxyConnection *)ExtAlloc_Malloc_4();
    local_4._0_1_ = 1;
    if (local_158 == (clProxyConnection *)0x0) {
      local_c8 = 0;
    }
    else {
      local_c8 = clProxyConnection::clProxyConnection
                           (local_158,pcVar2,uVar6,*(clProxyHandler **)(local_15c + 8),
                            (clTraceLog *)0x0,(ushort)_param_1);
    }
    local_4._0_1_ = 0;
    if (local_c0 != 0) {
      _STL::
      _Rb_tree<unsigned_short,struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>,struct__STL::less<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>_>
      ::M_erase((_Rb_tree<unsigned_short,struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>,struct__STL::less<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>_>
                 *)&local_c4,
                *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_> **)
                 (local_c4 + 4));
      *(int *)(local_c4 + 8) = local_c4;
      *(undefined4 *)(local_c4 + 4) = 0;
      *(int *)(local_c4 + 0xc) = local_c4;
      local_c0 = 0;
    }
    local_b0 = param_1;
    stProxyInfo::stProxyInfo(local_ac,local_150);
    local_4._0_1_ = 2;
    _STL::
    _List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>::
    List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
              ((_List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
                *)&local_158,
               (_List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
                *)&local_160);
    _STL::
    _List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>::
    List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
              ((_List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
                *)&stack0xfffffe88,
               (_List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
                *)&local_158);
    _STL::
    _Rb_tree<unsigned_short,struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>_>,struct__STL::less<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>_>_>
    ::insert_unique((_Rb_tree<unsigned_short,struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>_>,struct__STL::less<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>_>_>
                     *)this_00,local_154);
    local_15c = (CProxyConnection *)local_20;
    local_4._0_1_ = 3;
    _STL::
    _Rb_tree<unsigned_short,struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>,struct__STL::less<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>_>
    ::clear(local_20);
    local_4 = (uint)local_4._1_3_ << 8;
    _STL::_String_base<char,class_ExtAlloc::Allocator<char>_>::
    ~_String_base<char,class_ExtAlloc::Allocator<char>_>
              ((_String_base<char,class_ExtAlloc::Allocator<char>_> *)local_20);
    local_15c = (CProxyConnection *)&local_c4;
    local_4 = 4;
    if (local_c0 != 0) {
      _STL::
      _Rb_tree<unsigned_short,struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>,struct__STL::less<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>_>
      ::M_erase((_Rb_tree<unsigned_short,struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>,struct__STL::less<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>_>
                 *)&local_c4,
                *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_> **)
                 (local_c4 + 4));
      *(int *)(local_c4 + 8) = local_c4;
      *(undefined4 *)(local_c4 + 4) = 0;
      *(int *)(local_c4 + 0xc) = local_c4;
      local_c0 = 0;
    }
    local_4 = 0xffffffff;
    _STL::_String_base<char,class_ExtAlloc::Allocator<char>_>::
    ~_String_base<char,class_ExtAlloc::Allocator<char>_>
              ((_String_base<char,class_ExtAlloc::Allocator<char>_> *)&local_c4);
    uVar3 = '\x01';
  }
  else {
    uVar3 = '\0';
  }
  ExceptionList = local_c;
  return uVar3;
}




/* from: libgsclient:GSProxyConnection.cpp
   addr: 005AF3F0 */

void __thiscall stProxyInfo::~stProxyInfo(stProxyInfo *this)

{
  _Rb_tree<unsigned_short,struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>,struct__STL::less<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>_>
  *this_00;
  _Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
  *p_Var1;
  _Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
  *p_Var2;
  void **ppvVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005cb688;
  local_c = ExceptionList;
  this_00 = (_Rb_tree<unsigned_short,struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>,struct__STL::less<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>_>
             *)(this + 0x8c);
  local_4 = 0;
  ppvVar3 = &local_c;
  if (*(int *)(this + 0x90) != 0) {
    p_Var2 = *(_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
               **)(*(int *)this_00 + 4);
    ExceptionList = &local_c;
    while (p_Var2 != (_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
                      *)0x0) {
      _STL::
      _Rb_tree<unsigned_short,struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>,struct__STL::less<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>_>
      ::M_erase(this_00,*(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>
                          **)(p_Var2 + 0xc));
      p_Var1 = *(_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
                 **)(p_Var2 + 8);
      _STL::
      _STLP_alloc_proxy<struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>*,struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
      ::deallocate((_STLP_alloc_proxy<struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>*,struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
                    *)this_00,p_Var2,1);
      p_Var2 = p_Var1;
    }
    *(int *)(*(int *)this_00 + 8) = *(int *)this_00;
    *(undefined4 *)(*(int *)this_00 + 4) = 0;
    *(int *)(*(int *)this_00 + 0xc) = *(int *)this_00;
    *(undefined4 *)(this + 0x90) = 0;
    ppvVar3 = (void **)ExceptionList;
  }
  ExceptionList = ppvVar3;
  ExtAlloc_Free_4(*(undefined4 *)this_00);
  ExceptionList = local_c;
  return;
}




/* from: libgsclient:GSProxyConnection.cpp
   addr: 005AF480 */

void __thiscall
_STL::pair<unsigned_short_const_,struct_stProxyInfo>::
~pair<unsigned_short_const_,struct_stProxyInfo>
          (pair<unsigned_short_const_,struct_stProxyInfo> *this)

{
  _Rb_tree<unsigned_short,struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>,struct__STL::less<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>_>
  *this_00;
  _Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
  *p_Var1;
  _Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
  *p_Var2;
  void **ppvVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005cb6a8;
  local_c = ExceptionList;
  this_00 = (_Rb_tree<unsigned_short,struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>,struct__STL::less<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>_>
             *)(this + 0x90);
  local_4 = 0;
  ppvVar3 = &local_c;
  if (*(int *)(this + 0x94) != 0) {
    p_Var2 = *(_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
               **)(*(int *)this_00 + 4);
    ExceptionList = &local_c;
    while (p_Var2 != (_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
                      *)0x0) {
      _Rb_tree<unsigned_short,struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>,struct__STL::less<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>_>
      ::M_erase(this_00,*(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>
                          **)(p_Var2 + 0xc));
      p_Var1 = *(_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
                 **)(p_Var2 + 8);
      _STLP_alloc_proxy<struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>*,struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
      ::deallocate((_STLP_alloc_proxy<struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>*,struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
                    *)this_00,p_Var2,1);
      p_Var2 = p_Var1;
    }
    *(int *)(*(int *)this_00 + 8) = *(int *)this_00;
    *(undefined4 *)(*(int *)this_00 + 4) = 0;
    *(int *)(*(int *)this_00 + 0xc) = *(int *)this_00;
    *(undefined4 *)(this + 0x94) = 0;
    ppvVar3 = (void **)ExceptionList;
  }
  ExceptionList = ppvVar3;
  ExtAlloc_Free_4(*(undefined4 *)this_00);
  ExceptionList = local_c;
  return;
}




/* from: libgsclient:GSProxyConnection.cpp
   addr: 005AF510 */

uchar __thiscall CProxyConnection::RemoveProxyFromList(CProxyConnection *this,ushort param_1)

{
  _Rb_tree<unsigned_short,struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>,struct__STL::less<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>_>
  *this_00;
  _Rb_tree<unsigned_short,struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>,struct__STL::less<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>_>
  *this_01;
  _Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
  *p_Var1;
  int iVar2;
  _Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
  *p_Var3;
  _Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_> *p_Var4;
  _Rb_tree_node_base *p_Var5;
  
  this_00 = (_Rb_tree<unsigned_short,struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>,struct__STL::less<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>_>
             *)(this + 0x1c);
  p_Var4 = _STL::
           _Rb_tree<unsigned_short,struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>,struct__STL::less<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>_>
           ::M_find(this_00,&param_1);
  if (p_Var4 == *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_> **)
                 this_00) {
    return '\0';
  }
  if (*(undefined4 **)(p_Var4 + 0x9c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(p_Var4 + 0x9c))(1);
    *(undefined4 *)(p_Var4 + 0x9c) = 0;
  }
  this_01 = (_Rb_tree<unsigned_short,struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>,struct__STL::less<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>_>
             *)(p_Var4 + 0xa0);
  if (*(int *)(p_Var4 + 0xa4) != 0) {
    p_Var3 = *(_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
               **)(*(int *)this_01 + 4);
    while (p_Var3 != (_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
                      *)0x0) {
      _STL::
      _Rb_tree<unsigned_short,struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>,struct__STL::less<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>_>
      ::M_erase(this_01,*(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>
                          **)(p_Var3 + 0xc));
      p_Var1 = *(_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
                 **)(p_Var3 + 8);
      _STL::
      _STLP_alloc_proxy<struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>*,struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
      ::deallocate((_STLP_alloc_proxy<struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>*,struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
                    *)this_01,p_Var3,1);
      p_Var3 = p_Var1;
    }
    *(int *)(*(int *)this_01 + 8) = *(int *)this_01;
    *(undefined4 *)(*(int *)this_01 + 4) = 0;
    *(int *)(*(int *)this_01 + 0xc) = *(int *)this_01;
    *(undefined4 *)(p_Var4 + 0xa4) = 0;
  }
  iVar2 = *(int *)this_00;
  p_Var5 = _STL::_Rb_global<bool>::Rebalance_for_erase
                     ((_Rb_tree_node_base *)p_Var4,(_Rb_tree_node_base **)(iVar2 + 4),
                      (_Rb_tree_node_base **)(iVar2 + 8),(_Rb_tree_node_base **)(iVar2 + 0xc));
  _STL::pair<unsigned_short_const_,struct_stProxyInfo>::
  ~pair<unsigned_short_const_,struct_stProxyInfo>
            ((pair<unsigned_short_const_,struct_stProxyInfo> *)(p_Var5 + 0x10));
  ExtAlloc_Free_4(p_Var5);
  *(int *)(this + 0x20) = *(int *)(this + 0x20) + -1;
  return '\x01';
}




/* from: libgsclient:GSProxyConnection.cpp
   addr: 005AF5E0 */

uchar __thiscall CProxyConnection::RemoveAllProxyFromList(CProxyConnection *this)

{
  _Rb_tree<unsigned_short,struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>_>,struct__STL::less<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>_>_>
  *this_00;
  int iVar1;
  int iVar2;
  int iVar3;
  
  this_00 = (_Rb_tree<unsigned_short,struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>_>,struct__STL::less<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>_>_>
             *)(this + 0x1c);
  iVar2 = *(int *)(*(int *)(this + 0x1c) + 8);
  if (iVar2 != *(int *)(this + 0x1c)) {
    do {
      iVar3 = *(int *)(iVar2 + 0xc);
      if (iVar3 == 0) {
        iVar1 = *(int *)(iVar2 + 4);
        iVar3 = iVar2;
        if (iVar2 == *(int *)(iVar1 + 0xc)) {
          do {
            iVar3 = iVar1;
            iVar1 = *(int *)(iVar3 + 4);
          } while (iVar3 == *(int *)(iVar1 + 0xc));
        }
        if (*(int *)(iVar3 + 0xc) != iVar1) {
          iVar3 = iVar1;
        }
      }
      else {
        for (iVar1 = *(int *)(iVar3 + 8); iVar1 != 0; iVar1 = *(int *)(iVar1 + 8)) {
          iVar3 = iVar1;
        }
      }
      RemoveProxyFromList(this,*(ushort *)(iVar2 + 0x10));
      iVar2 = iVar3;
    } while (iVar3 != *(int *)this_00);
  }
  if (*(int *)(this + 0x20) != 0) {
    iVar2 = *(int *)(*(int *)this_00 + 4);
    while (iVar2 != 0) {
      _STL::
      _Rb_tree<unsigned_short,struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>_>,struct__STL::less<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>_>_>
      ::M_erase(this_00,*(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>_>
                          **)(iVar2 + 0xc));
      iVar3 = *(int *)(iVar2 + 8);
      _STL::pair<unsigned_short_const_,struct_stProxyInfo>::
      ~pair<unsigned_short_const_,struct_stProxyInfo>
                ((pair<unsigned_short_const_,struct_stProxyInfo> *)(iVar2 + 0x10));
      ExtAlloc_Free_4(iVar2);
      iVar2 = iVar3;
    }
    *(int *)(*(int *)this_00 + 8) = *(int *)this_00;
    *(undefined4 *)(*(int *)this_00 + 4) = 0;
    *(int *)(*(int *)this_00 + 0xc) = *(int *)this_00;
    *(undefined4 *)(this + 0x20) = 0;
  }
  return '\x01';
}




/* from: libgsclient:GSProxyConnection.cpp
   addr: 005AF690 */

uchar __thiscall
CProxyConnection::AddProxyModule
          (CProxyConnection *this,ushort param_1,char *param_2,ushort param_3,ushort param_4,
          ushort param_5)

{
  int iVar1;
  ushort uVar2;
  pair<int_const_,struct_stLobbySrvInfo> *ppVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined2 in_stack_00000006;
  undefined2 in_stack_00000012;
  undefined2 in_stack_00000016;
  ushort uVar7;
  ushort uVar8;
  int local_60;
  _Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_> *local_5c;
  char local_58 [36];
  ushort local_34;
  ushort local_32;
  undefined1 local_30;
  ushort local_2c;
  undefined4 local_2a [10];
  
  local_5c = _STL::
             _Rb_tree<unsigned_short,struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>,struct__STL::less<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>_>
             ::M_find((_Rb_tree<unsigned_short,struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>,struct__STL::less<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>_>
                       *)(this + 0x1c),&param_1);
  if (local_5c ==
      *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_> **)
       (this + 0x1c)) {
    return '\0';
  }
  uVar7 = (ushort)_param_4;
  uVar8 = (ushort)_param_5;
  uVar2 = FindProxyModule(this,(ushort)_param_1,param_2,uVar7,uVar8);
  if (uVar2 != 0) {
    return '\0';
  }
  *(short *)this = *(short *)this + 1;
  uVar2 = *(ushort *)this;
  local_60 = *(int *)(*(int *)(local_5c + 0xa0) + 8);
  if (local_60 != *(int *)(local_5c + 0xa0)) {
    do {
      if (uVar2 < *(ushort *)(local_60 + 0x10)) break;
      iVar4 = *(int *)(local_60 + 0xc);
      if (iVar4 == 0) {
        iVar4 = *(int *)(local_60 + 4);
        if (local_60 == *(int *)(iVar4 + 0xc)) {
          do {
            local_60 = iVar4;
            iVar4 = *(int *)(local_60 + 4);
          } while (local_60 == *(int *)(iVar4 + 0xc));
        }
        if (*(int *)(local_60 + 0xc) != iVar4) {
          local_60 = iVar4;
        }
      }
      else {
        for (iVar1 = *(int *)(iVar4 + 8); local_60 = iVar4, iVar1 != 0; iVar1 = *(int *)(iVar1 + 8))
        {
          iVar4 = iVar1;
        }
      }
    } while (local_60 != *(int *)(local_5c + 0xa0));
  }
  strncpy(local_58,param_2,0x20);
  local_32 = uVar8;
  local_2c = uVar2;
  local_34 = uVar7;
  local_30 = 0;
  pcVar5 = local_58;
  puVar6 = local_2a;
  for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    puVar6 = puVar6 + 1;
  }
  *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
  _STL::_List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
  ::List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
            ((_List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
              *)&param_2,
             (_List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
              *)&local_60);
  ppVar3 = _STL::
           _Rb_tree_iterator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Nonconst_traits<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>
           ::operator->((_Rb_tree_iterator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Nonconst_traits<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>
                         *)&local_5c);
  _STL::_List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
  ::List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
            ((_List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
              *)&stack0xffffff8c,
             (_List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
              *)&param_2);
  _STL::
  _Rb_tree<unsigned_short,struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>,struct__STL::less<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>_>
  ::insert_unique((_Rb_tree<unsigned_short,struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>,struct__STL::less<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>_>
                   *)(ppVar3 + 0x90),&param_5);
  return '\x01';
}




/* from: libgsclient:GSProxyConnection.cpp
   addr: 005AF7E0 */

uchar __thiscall
CProxyConnection::LoadProxyModule(CProxyConnection *this,ushort param_1,ushort param_2)

{
  _Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_> *p_Var1;
  _Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_> *p_Var2;
  
  p_Var1 = _STL::
           _Rb_tree<unsigned_short,struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>,struct__STL::less<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>_>
           ::M_find((_Rb_tree<unsigned_short,struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>,struct__STL::less<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>_>
                     *)(this + 0x1c),&param_1);
  if (p_Var1 == *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_> **)
                 (this + 0x1c)) {
    return '\0';
  }
  p_Var2 = _STL::
           _Rb_tree<unsigned_short,struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>,struct__STL::less<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>_>
           ::M_find((_Rb_tree<unsigned_short,struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>,struct__STL::less<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>_>
                     *)(p_Var1 + 0xa0),&param_2);
  if (p_Var2 == *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_> **)
                 (p_Var1 + 0xa0)) {
    return '\0';
  }
  p_Var2[0x3a] = (_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>)0x1;
  return '\x01';
}




/* from: libgsclient:GSProxyConnection.cpp
   addr: 005AF820 */

uchar __thiscall
CProxyConnection::StartConnect(CProxyConnection *this,char *param_1,ushort param_2,ushort param_3)

{
  uchar uVar1;
  ushort uVar2;
  undefined2 extraout_var;
  _Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_> *p_Var3;
  uint local_44;
  uint local_40;
  undefined **local_3c;
  undefined4 *local_38;
  undefined **local_30;
  list<class_clRcvElement*> local_2c [4];
  undefined8 *local_28;
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
  puStack_8 = &LAB_005cb746;
  local_c = ExceptionList;
  local_40 = 0;
  ExceptionList = &local_c;
  uVar2 = FindProxyServer(this,param_1,param_2,param_3);
  local_44 = CONCAT22(extraout_var,uVar2);
  if (uVar2 == 0) {
    NoProxySrvAvailable(this,param_1,param_2,param_3);
    uVar1 = '\0';
  }
  else {
    p_Var3 = _STL::
             _Rb_tree<unsigned_short,struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>,struct__STL::less<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>_>
             ::M_find((_Rb_tree<unsigned_short,struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>,struct__STL::less<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>_>
                       *)(this + 0x1c),(ushort *)&local_44);
    if (p_Var3 == *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_> **)
                   (this + 0x1c)) {
      uVar1 = '\0';
    }
    else {
      local_20 = &clDataList::_vbtable__for__clData__;
      local_10 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
      local_1c = 3;
      local_24 = &clData::_vftable_;
      local_4 = 0;
      clPointerList<class_clData*>::clPointerList<class_clData*>
                ((clPointerList<class_clData*> *)&local_18);
      local_24 = &clDataList::_vftable__for__clData__;
      local_18 = &clDataList::_vftable__for__clPointerList<class_clData*>__;
      local_4 = 1;
      local_38 = &clDataList::_vbtable__for__clData__;
      local_28 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
      clData::clData((clData *)&local_3c,3);
      local_4._0_1_ = 2;
      clPointerList<class_clData*>::clPointerList<class_clData*>
                ((clPointerList<class_clData*> *)&local_30);
      local_3c = &clDataList::_vftable__for__clData__;
      local_30 = &clDataList::_vftable__for__clPointerList<class_clData*>__;
      local_40 = local_44 & 0xffff;
      local_4._0_1_ = 3;
      clDataList::Add((clDataList *)&local_24,(int *)&local_40);
      local_40 = 2;
      clDataList::Add((clDataList *)&local_3c,(int *)&local_40);
      clDataList::Add((clDataList *)&local_3c,(clDataList *)&local_24);
      uVar1 = CConnection::SendMessageA
                        (*(CConnection **)(this + 4),0xcc,'\x01',(clDataList *)&local_3c);
      if (uVar1 == '\0') {
        local_3c = &clDataList::_vftable__for__clData__;
        local_30 = &clDataList::_vftable__for__clPointerList<class_clData*>__;
        local_4 = CONCAT31(local_4._1_3_,4);
        clPointerList<class_clData*>::~clPointerList<class_clData*>
                  ((clPointerList<class_clData*> *)&local_30);
        local_3c = &clData::_vftable_;
        local_4 = 0xffffffff;
        clDataList::~clDataList((clDataList *)&local_24);
        uVar1 = '\0';
      }
      else {
        uVar2 = FindProxyModule(this,(ushort)local_44,param_1,param_2,param_3);
        *(ushort *)(p_Var3 + 0xb0) = uVar2;
        LoadProxyModule(this,(ushort)local_44,uVar2);
        p_Var3[0x98] = (_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>
                       )0x1;
        local_3c = &clDataList::_vftable__for__clData__;
        local_30 = &clPointerList<class_clData*>::_vftable_;
        local_4._0_1_ = 6;
        clPointerList<class_clRcvElement*>::clear((clPointerList<class_clRcvElement*> *)&local_30);
        local_4 = CONCAT31(local_4._1_3_,5);
        ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>(local_2c);
        local_3c = &clData::_vftable_;
        local_24 = &clDataList::_vftable__for__clData__;
        local_18 = &clPointerList<class_clData*>::_vftable_;
        local_4._0_1_ = 8;
        local_4._1_3_ = 0;
        clPointerList<class_clRcvElement*>::clear((clPointerList<class_clRcvElement*> *)&local_18);
        local_4 = CONCAT31(local_4._1_3_,7);
        ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>(local_14);
        uVar1 = '\x01';
      }
    }
  }
  ExceptionList = local_c;
  return uVar1;
}




/* from: libgsclient:GSProxyConnection.cpp
   addr: 005AFA70 */

uchar __thiscall CProxyConnection::FinishConnect(CProxyConnection *this,ushort param_1)

{
  int iVar1;
  int iVar2;
  uchar uVar3;
  int iVar4;
  
  iVar1 = *(int *)(this + 0x1c);
  iVar4 = iVar1;
  iVar2 = *(int *)(iVar1 + 4);
  while (iVar2 != 0) {
    if (*(ushort *)(iVar2 + 0x10) < param_1) {
      iVar2 = *(int *)(iVar2 + 0xc);
    }
    else {
      iVar4 = iVar2;
      iVar2 = *(int *)(iVar2 + 8);
    }
  }
  if ((iVar4 == iVar1) || (param_1 < *(ushort *)(iVar4 + 0x10))) {
    iVar4 = iVar1;
  }
  if (iVar4 == *(int *)(this + 0x1c)) {
    return '\0';
  }
  uVar3 = clProxyConnection::Connect
                    (*(clProxyConnection **)(iVar4 + 0x9c),(char *)(this + 0x2c),
                     (char *)(this + 0x3c));
  return uVar3;
}




/* from: libgsclient:GSProxyConnection.cpp
   addr: 005AFAD0 */

uchar __thiscall CProxyConnection::ConnectFailed(CProxyConnection *this,ushort param_1,int param_2)

{
  int *piVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  clDataList acStack_80 [12];
  undefined4 uStack_74;
  undefined1 *local_5c;
  int local_58;
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
  puStack_8 = &LAB_005cb790;
  local_c = ExceptionList;
  local_58 = 0;
  local_20 = &clDataList::_vbtable__for__clData__;
  local_10 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
  uStack_74 = 0x5afb14;
  ExceptionList = &local_c;
  clData::clData((clData *)&local_24,3);
  local_4 = 0;
  clPointerList<class_clData*>::clPointerList<class_clData*>
            ((clPointerList<class_clData*> *)local_18);
  local_24 = &clDataList::_vftable__for__clData__;
  local_18[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_4 = 1;
  local_50 = &clDataList::_vbtable__for__clData__;
  local_40 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
  uStack_74 = 0x5afb54;
  clData::clData((clData *)&local_54,3);
  local_4._0_1_ = 2;
  clPointerList<class_clData*>::clPointerList<class_clData*>
            ((clPointerList<class_clData*> *)local_48);
  local_54 = &clDataList::_vftable__for__clData__;
  local_48[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_4._0_1_ = 3;
  local_38 = &clDataList::_vbtable__for__clData__;
  local_28 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
  uStack_74 = 0x5afb8e;
  clData::clData((clData *)&local_3c,3);
  local_4._0_1_ = 4;
  clPointerList<class_clData*>::clPointerList<class_clData*>
            ((clPointerList<class_clData*> *)local_30);
  ppuVar2 = &clDataList::_vftable__for__clData__;
  local_30[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_3c = &clDataList::_vftable__for__clData__;
  local_4._0_1_ = 5;
  uStack_74 = 0x5afbc8;
  _STL::
  _Rb_tree<unsigned_short,struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>_>,struct__STL::less<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>_>_>
  ::find((_Rb_tree<unsigned_short,struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>_>,struct__STL::less<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>_>_>
          *)(this + 0x1c),(ushort *)&local_5c);
  if (local_5c != *(undefined1 **)(this + 0x1c)) {
    local_5c[0x98] = 0;
    ppuVar3 = (undefined **)**(undefined ***)(this + 0x14);
    if (ppuVar3 != *(undefined ***)(this + 0x14)) {
      do {
        ppuVar2 = (undefined **)CONCAT22((short)((uint)ppuVar2 >> 0x10),*(ushort *)ppuVar3[2]);
        if (*(ushort *)ppuVar3[2] == param_1) {
          EmptyInboxForProxySrv(this,param_1);
          clDataList::Add((clDataList *)&local_3c,&param_2);
          uStack_74 = 0x5afc64;
          clDataList::GetIndex(*(clDataList **)(ppuVar3[2] + 4),&local_58,0);
          clDataList::Add((clDataList *)&local_24,&local_58);
          clDataList::Add((clDataList *)&local_24,(clDataList *)&local_3c);
          local_5c = (undefined1 *)0x27;
          clDataList::Add((clDataList *)&local_54,(int *)&local_5c);
          clDataList::Add((clDataList *)&local_54,(clDataList *)&local_24);
          local_5c = acStack_80;
          clDataList::clDataList(acStack_80,(clDataList *)&local_54);
          PutMessage(this,2,ppuVar2,0xcc);
          if (*(undefined4 **)(ppuVar3[2] + 4) != (undefined4 *)0x0) {
            (**(code **)**(undefined4 **)(ppuVar3[2] + 4))();
          }
          ExtAlloc_Free_4();
          piVar1 = (int *)ppuVar3[1];
          ppuVar2 = (undefined **)*ppuVar3;
          *piVar1 = (int)ppuVar2;
          ppuVar2[1] = (undefined *)piVar1;
          ExtAlloc_Free_4();
          ppuVar3 = ppuVar2;
        }
        else {
          ppuVar3 = (undefined **)*ppuVar3;
        }
      } while (ppuVar3 != *(undefined ***)(this + 0x14));
    }
    local_3c = &clDataList::_vftable__for__clData__;
    local_30[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
    local_4._0_1_ = 6;
    clPointerList<class_clData*>::~clPointerList<class_clData*>
              ((clPointerList<class_clData*> *)local_30);
    local_54 = &clDataList::_vftable__for__clData__;
    local_3c = &clData::_vftable_;
    local_48[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
    local_4 = CONCAT31(local_4._1_3_,7);
    clPointerList<class_clData*>::~clPointerList<class_clData*>
              ((clPointerList<class_clData*> *)local_48);
    local_54 = &clData::_vftable_;
    local_4 = 0xffffffff;
    clDataList::~clDataList((clDataList *)&local_24);
    ExceptionList = local_c;
    return '\x01';
  }
  local_4._0_1_ = 3;
  clDataList::~clDataList((clDataList *)&local_3c);
  local_4 = CONCAT31(local_4._1_3_,1);
  clDataList::~clDataList((clDataList *)&local_54);
  local_4 = 0xffffffff;
  clDataList::~clDataList((clDataList *)&local_24);
  ExceptionList = local_c;
  return '\0';
}




/* from: libgsclient:GSProxyConnection.cpp
   addr: 005AFD70 */

uchar __thiscall
CProxyConnection::NoProxySrvAvailable
          (CProxyConnection *this,char *param_1,ushort param_2,ushort param_3)

{
  undefined2 in_stack_0000000a;
  undefined2 in_stack_0000000e;
  clDataList acStack_64 [16];
  undefined4 uStack_54;
  undefined **local_3c;
  undefined4 *local_38;
  undefined4 local_34;
  undefined **local_30;
  list<class_clData*> local_2c [4];
  undefined8 *local_28;
  undefined **local_24;
  undefined4 *local_20;
  undefined4 local_1c;
  undefined **local_18;
  list<class_clData*> local_14 [4];
  undefined8 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005cb7f7;
  local_c = ExceptionList;
  local_38 = &clDataList::_vbtable__for__clData__;
  local_28 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
  local_34 = 3;
  local_3c = &clData::_vftable_;
  local_4 = 0;
  uStack_54 = 0x5afdc2;
  ExceptionList = &local_c;
  ExtAlloc::list<class_clData*>::list<class_clData*>(local_2c);
  local_30 = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_3c = &clDataList::_vftable__for__clData__;
  local_20 = &clDataList::_vbtable__for__clData__;
  local_10 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
  local_1c = 3;
  local_24 = &clData::_vftable_;
  local_4._0_1_ = 2;
  local_4._1_3_ = 0;
  uStack_54 = 0x5afe07;
  ExtAlloc::list<class_clData*>::list<class_clData*>(local_14);
  local_24 = &clDataList::_vftable__for__clData__;
  local_18 = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_4._0_1_ = 3;
  uStack_54 = 0x5afe26;
  clDataList::Add((clDataList *)&local_3c,param_1);
  param_1 = (char *)(_param_2 & 0xffff);
  uStack_54 = 0x5afe42;
  clDataList::Add((clDataList *)&local_3c,(int *)&param_1);
  param_1 = (char *)(_param_3 & 0xffff);
  uStack_54 = 0x5afe5d;
  clDataList::Add((clDataList *)&local_3c,(int *)&param_1);
  param_1 = (char *)0xc8;
  uStack_54 = 0x5afe73;
  clDataList::Add((clDataList *)&local_24,(int *)&param_1);
  uStack_54 = 0x5afe81;
  clDataList::Add((clDataList *)&local_24,(clDataList *)&local_3c);
  param_1 = (char *)acStack_64;
  clDataList::clDataList(acStack_64,(clDataList *)&local_24);
  PutMessage(this,2,0,0xcc);
  local_24 = &clDataList::_vftable__for__clData__;
  local_18 = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  local_4 = CONCAT31(local_4._1_3_,4);
  clPointerList<class_clData*>::~clPointerList<class_clData*>
            ((clPointerList<class_clData*> *)&local_18);
  local_24 = &clData::_vftable_;
  local_3c = &clDataList::_vftable__for__clData__;
  param_1 = (char *)&local_30;
  local_30 = &clPointerList<class_clData*>::_vftable_;
  local_4._0_1_ = 6;
  local_4._1_3_ = 0;
  clPointerList<class_clRcvElement*>::clear((clPointerList<class_clRcvElement*> *)&local_30);
  local_4 = CONCAT31(local_4._1_3_,5);
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            ((list<class_clRcvElement*> *)local_2c);
  ExceptionList = local_c;
  return '\x01';
}




/* from: libgsclient:GSProxyConnection.cpp
   addr: 005AFF20 */

void __thiscall CProxyConnection::EmptyOutbox(CProxyConnection *this)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = (int *)**(int **)(this + 0x14);
  if (piVar3 != *(int **)(this + 0x14)) {
    do {
      if (*(undefined4 **)(piVar3[2] + 4) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(piVar3[2] + 4))(1);
      }
      ExtAlloc_Free_4(piVar3[2]);
      piVar1 = (int *)piVar3[1];
      piVar2 = (int *)*piVar3;
      *piVar1 = (int)piVar2;
      piVar2[1] = (int)piVar1;
      ExtAlloc_Free_4(piVar3);
      piVar3 = piVar2;
    } while (piVar2 != (int *)*(int *)(this + 0x14));
  }
  return;
}




/* from: libgsclient:GSProxyConnection.cpp
   addr: 005AFF70 */

void __thiscall CProxyConnection::EmptyInbox(CProxyConnection *this)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = (int *)**(int **)(this + 0xc);
  if (piVar3 != *(int **)(this + 0xc)) {
    do {
      if (*(undefined4 **)(piVar3[2] + 4) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(piVar3[2] + 4))(1);
      }
      ExtAlloc_Free_4(piVar3[2]);
      piVar1 = (int *)piVar3[1];
      piVar2 = (int *)*piVar3;
      *piVar1 = (int)piVar2;
      piVar2[1] = (int)piVar1;
      ExtAlloc_Free_4(piVar3);
      piVar3 = piVar2;
    } while (piVar2 != (int *)*(int *)(this + 0xc));
  }
  return;
}




/* from: libgsclient:GSProxyConnection.cpp
   addr: 005AFFC0 */

void __thiscall
CProxyConnection::PutMessage
          (CProxyConnection *this,byte param_1,int param_2,undefined2 param_3,undefined **param_5,
          undefined4 param_6,undefined4 param_7,undefined **param_8,undefined4 param_9)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  _List_node<class_clData*> *p_Var3;
  void *unaff_EBX;
  clData *local_14;
  clDataList *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_005cb851;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  local_14 = (clData *)ExtAlloc_Malloc_4();
  local_10 = (clDataList *)ExtAlloc_Malloc_4();
  local_4._0_1_ = 1;
  if (local_10 == (clDataList *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = clDataList::clDataList(local_10,(clDataList *)&param_5);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  *(undefined2 *)local_14 = (undefined2)param_2;
  *(undefined4 *)(local_14 + 4) = uVar2;
  *(undefined2 *)(local_14 + 2) = param_3;
  if ((param_1 & 2) != 0) {
    _STL::list<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_>::end
              ((list<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_> *)
               (this + 0xc));
    p_Var3 = _STL::list<class_clData*,class_ExtAlloc::Allocator<class_clData*>_>::M_create_node
                       ((list<class_clData*,class_ExtAlloc::Allocator<class_clData*>_> *)
                        (this + 0xc),&local_14);
    puVar1 = *(undefined4 **)(param_2 + 4);
    *(int *)p_Var3 = param_2;
    *(undefined4 **)(p_Var3 + 4) = puVar1;
    *puVar1 = p_Var3;
    *(_List_node<class_clData*> **)(param_2 + 4) = p_Var3;
  }
  if ((param_1 & 1) != 0) {
    _STL::list<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_>::end
              ((list<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_> *)
               (this + 0x14));
    p_Var3 = _STL::list<class_clData*,class_ExtAlloc::Allocator<class_clData*>_>::M_create_node
                       ((list<class_clData*,class_ExtAlloc::Allocator<class_clData*>_> *)
                        (this + 0x14),&local_14);
    puVar1 = *(undefined4 **)(param_2 + 4);
    *(int *)p_Var3 = param_2;
    *(undefined4 **)(p_Var3 + 4) = puVar1;
    *puVar1 = p_Var3;
    *(_List_node<class_clData*> **)(param_2 + 4) = p_Var3;
  }
  param_5 = &clDataList::_vftable__for__clData__;
  param_8 = &clPointerList<class_clData*>::_vftable_;
  local_4 = 3;
  _STL::list<class_clRcvElement*,class_ExtAlloc::Allocator<class_clRcvElement*>_>::begin
            ((list<class_clRcvElement*,class_ExtAlloc::Allocator<class_clRcvElement*>_> *)&param_9);
  (*(code *)param_8[4])(&param_3);
  local_10 = (clDataList *)CONCAT31(local_10._1_3_,2);
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            ((list<class_clRcvElement*> *)&param_6);
  ExceptionList = unaff_EBX;
  return;
}




/* from: libgsclient:GSProxyConnection.cpp
   addr: 005B0110 */

void __thiscall CProxyConnection::EmptyInboxForProxySrv(CProxyConnection *this,ushort param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  piVar3 = (int *)**(int **)(this + 0xc);
  if (piVar3 != *(int **)(this + 0xc)) {
    do {
      if (*(ushort *)piVar3[2] == param_1) {
        puVar1 = *(undefined4 **)((ushort *)piVar3[2] + 2);
        if (puVar1 != (undefined4 *)0x0) {
          (**(code **)*puVar1)(1);
        }
        ExtAlloc_Free_4(piVar3[2]);
        piVar2 = (int *)piVar3[1];
        piVar4 = (int *)*piVar3;
        *piVar2 = (int)piVar4;
        piVar4[1] = (int)piVar2;
        ExtAlloc_Free_4(piVar3);
      }
      else {
        piVar4 = (int *)*piVar3;
      }
      piVar3 = piVar4;
    } while (piVar4 != *(int **)(this + 0xc));
  }
  return;
}




/* from: libgsclient:GSProxyConnection.cpp
   addr: 005B0170 */

CCurMessage * __thiscall CProxyConnection::ReadMessage(CProxyConnection *this)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  CCurMessage *pCVar4;
  input_iterator_tag local_15;
  undefined4 *local_14;
  CCurMessage *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005cb86a;
  local_c = ExceptionList;
  local_14 = *(undefined4 **)(this + 0xc);
  local_10 = (CCurMessage *)*local_14;
  ExceptionList = &local_c;
  iVar3 = _STL::distance((_List_iterator<class_clData*,struct__STL::_Const_traits<class_clData*>_> *
                         )&local_10,
                         (_List_iterator<class_clData*,struct__STL::_Const_traits<class_clData*>_> *
                         )&local_14,&local_15);
  if (iVar3 != 0) {
    piVar1 = (int *)**(int **)(this + 0xc);
    local_10 = (CCurMessage *)ExtAlloc_Malloc_4(0x1c);
    local_4 = 0;
    if (local_10 == (CCurMessage *)0x0) {
      pCVar4 = (CCurMessage *)0x0;
    }
    else {
      pCVar4 = (CCurMessage *)
               CCurMessage::CCurMessage
                         (local_10,*(uchar *)(piVar1[2] + 2),*(clDataList **)(piVar1[2] + 4),0);
    }
    local_4 = 0xffffffff;
    if (*(undefined4 **)(piVar1[2] + 4) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(piVar1[2] + 4))(1);
    }
    ExtAlloc_Free_4(piVar1[2]);
    piVar2 = (int *)piVar1[1];
    iVar3 = *piVar1;
    *piVar2 = iVar3;
    *(int **)(iVar3 + 4) = piVar2;
    ExtAlloc_Free_4(piVar1);
    ExceptionList = local_c;
    return pCVar4;
  }
  ExceptionList = local_c;
  return (CCurMessage *)0x0;
}




/* from: libgsclient:GSProxyConnection.cpp
   addr: 005B0250 */

void __thiscall CProxyConnection::DisconnectProxy(CProxyConnection *this,ushort param_1)

{
  _Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_> *p_Var1;
  _Rb_tree_node_base *p_Var2;
  undefined2 in_stack_00000006;
  clDataList acStack_6c [12];
  undefined4 uStack_60;
  uint local_44;
  undefined ***local_40;
  undefined **local_3c;
  undefined4 *local_38;
  undefined **local_30;
  list<class_clRcvElement*> alStack_2c [4];
  undefined8 *local_28;
  undefined **local_24;
  undefined4 *local_20;
  undefined **local_18;
  list<class_clRcvElement*> alStack_14 [4];
  undefined8 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005cb8fe;
  local_c = ExceptionList;
  local_40 = (undefined ***)0x0;
  ExceptionList = &local_c;
  p_Var1 = _STL::
           _Rb_tree<unsigned_short,struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>,struct__STL::less<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>_>
           ::M_find((_Rb_tree<unsigned_short,struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>,struct__STL::less<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>_>
                     *)(this + 0x1c),&param_1);
  if ((p_Var1 != *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_> **)
                  (this + 0x1c)) &&
     (p_Var1[0x98] ==
      (_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>)0x2)) {
    EmptyInboxForProxySrv(this,(ushort)_param_1);
    local_20 = &clDataList::_vbtable__for__clData__;
    local_10 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
    uStack_60 = 0x5b02c8;
    clData::clData((clData *)&local_24,3);
    local_4 = 0;
    clPointerList<class_clData*>::clPointerList<class_clData*>
              ((clPointerList<class_clData*> *)&local_18);
    local_24 = &clDataList::_vftable__for__clData__;
    local_18 = &clDataList::_vftable__for__clPointerList<class_clData*>__;
    local_4 = 1;
    local_38 = &clDataList::_vbtable__for__clData__;
    local_28 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
    uStack_60 = 0x5b030d;
    clData::clData((clData *)&local_3c,3);
    local_4._0_1_ = 2;
    clPointerList<class_clData*>::clPointerList<class_clData*>
              ((clPointerList<class_clData*> *)&local_30);
    local_30 = &clDataList::_vftable__for__clPointerList<class_clData*>__;
    local_3c = &clDataList::_vftable__for__clData__;
    local_4._0_1_ = 3;
    p_Var2 = *(_Rb_tree_node_base **)(*(_Rb_tree_node_base **)(p_Var1 + 0xa0) + 8);
    if (p_Var2 != *(_Rb_tree_node_base **)(p_Var1 + 0xa0)) {
      do {
        if (p_Var2[0x3a] != (_Rb_tree_node_base)0x0) {
          clDataList::Add((clDataList *)&local_24,(char *)(p_Var2 + 0x12));
          local_44 = (uint)*(ushort *)(p_Var2 + 0x36);
          clDataList::Add((clDataList *)&local_24,(int *)&local_44);
          local_44 = (uint)*(ushort *)(p_Var2 + 0x38);
          clDataList::Add((clDataList *)&local_24,(int *)&local_44);
          local_44 = 0xc9;
          clDataList::Add((clDataList *)&local_3c,(int *)&local_44);
          clDataList::Add((clDataList *)&local_3c,(clDataList *)&local_24);
          local_40 = (undefined ***)acStack_6c;
          clDataList::clDataList(acStack_6c,(clDataList *)&local_3c);
          PutMessage(this,2,_param_1,0xcc);
        }
        p_Var2 = _STL::_Rb_global<bool>::M_increment(p_Var2);
      } while (p_Var2 != *(_Rb_tree_node_base **)(p_Var1 + 0xa0));
    }
    (**(code **)(**(int **)(p_Var1 + 0x9c) + 8))();
    p_Var1[0x98] = (_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>)0x0
    ;
    local_3c = &clDataList::_vftable__for__clData__;
    local_40 = &local_30;
    local_30 = &clPointerList<class_clData*>::_vftable_;
    local_4._0_1_ = 5;
    clPointerList<class_clRcvElement*>::clear((clPointerList<class_clRcvElement*> *)&local_30);
    local_4 = CONCAT31(local_4._1_3_,4);
    ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>(alStack_2c);
    local_3c = &clData::_vftable_;
    local_24 = &clDataList::_vftable__for__clData__;
    local_40 = &local_18;
    local_18 = &clPointerList<class_clData*>::_vftable_;
    local_4._0_1_ = 7;
    local_4._1_3_ = 0;
    clPointerList<class_clRcvElement*>::clear((clPointerList<class_clRcvElement*> *)&local_18);
    local_4 = CONCAT31(local_4._1_3_,6);
    ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>(alStack_14);
  }
  ExceptionList = local_c;
  return;
}




/* from: libgsclient:GSProxyConnection.cpp
   addr: 005B0490 */

void __thiscall CProxyConnection::DisconnectAll(CProxyConnection *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(*(int *)(this + 0x1c) + 8);
  if (iVar2 != *(int *)(this + 0x1c)) {
    do {
      DisconnectProxy(this,*(ushort *)(iVar2 + 0x10));
      iVar3 = *(int *)(iVar2 + 0xc);
      if (iVar3 == 0) {
        iVar3 = *(int *)(iVar2 + 4);
        if (iVar2 == *(int *)(iVar3 + 0xc)) {
          do {
            iVar2 = iVar3;
            iVar3 = *(int *)(iVar2 + 4);
          } while (iVar2 == *(int *)(iVar3 + 0xc));
        }
        if (*(int *)(iVar2 + 0xc) != iVar3) {
          iVar2 = iVar3;
        }
      }
      else {
        for (iVar1 = *(int *)(iVar3 + 8); iVar2 = iVar3, iVar1 != 0; iVar1 = *(int *)(iVar1 + 8)) {
          iVar3 = iVar1;
        }
      }
    } while (iVar2 != *(int *)(this + 0x1c));
  }
  return;
}




/* from: libgsclient:GSProxyConnection.cpp
   addr: 005B04F0 */

void __thiscall CProxyConnection::ResetAll(CProxyConnection *this)

{
  DisconnectAll(this);
  RemoveAllProxyFromList(this);
  EmptyInbox(this);
  EmptyOutbox(this);
  return;
}




/* from: libgsclient:GSProxyConnection.cpp
   addr: 005B0510 */

stProxyInfo * __thiscall stProxyInfo::stProxyInfo(stProxyInfo *this,stProxyInfo *param_1)

{
  animSYSTEM *this_00;
  _STLP_alloc_proxy<struct__STL::_List_node<class_CConnection*>*,struct__STL::_List_node<class_CConnection*>,class_ExtAlloc::Allocator<class_CConnection*>_>
  *this_01;
  _Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_> *p_Var1;
  int iVar2;
  Allocator<class_CConnection*> *pAVar3;
  undefined1 *puVar4;
  _Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_> *p_Var5;
  int iVar6;
  stProxyInfo *psVar7;
  stProxyInfo *psVar8;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005cb920;
  local_c = ExceptionList;
  psVar7 = param_1;
  psVar8 = this;
  ExceptionList = &local_c;
  for (iVar6 = 0x20; iVar6 != 0; iVar6 = iVar6 + -1) {
    *(undefined4 *)psVar8 = *(undefined4 *)psVar7;
    psVar7 = psVar7 + 4;
    psVar8 = psVar8 + 4;
  }
  *psVar8 = *psVar7;
  this_00 = (animSYSTEM *)(param_1 + 0x8c);
  *(undefined2 *)(this + 0x82) = *(undefined2 *)(param_1 + 0x82);
  this[0x84] = param_1[0x84];
  this_01 = (_STLP_alloc_proxy<struct__STL::_List_node<class_CConnection*>*,struct__STL::_List_node<class_CConnection*>,class_ExtAlloc::Allocator<class_CConnection*>_>
             *)(this + 0x8c);
  *(undefined4 *)(this + 0x88) = *(undefined4 *)(param_1 + 0x88);
  *(undefined1 **)(this + 0x98) =
       &ExtAlloc::map<unsigned_short,struct_stModuleInfo,struct__STL::less<unsigned_short>_>::
        _vbtable_;
  pAVar3 = (Allocator<class_CConnection*> *)animSYSTEM::GetBaseSeqNmb(this_00);
  local_4 = 0;
  _STL::
  _STLP_alloc_proxy<struct__STL::_List_node<class_CConnection*>*,struct__STL::_List_node<class_CConnection*>,class_ExtAlloc::Allocator<class_CConnection*>_>
  ::
  STLP_alloc_proxy<struct__STL::_List_node<class_CConnection*>*,struct__STL::_List_node<class_CConnection*>,class_ExtAlloc::Allocator<class_CConnection*>_>
            (this_01,pAVar3,(_List_node<class_CConnection*> *)0x0);
  puVar4 = (undefined1 *)ExtAlloc_Malloc_4(0x3c);
  *(undefined1 **)this_01 = puVar4;
  local_4 = CONCAT31(local_4._1_3_,2);
  *(undefined4 *)(this + 0x90) = 0;
  this[0x94] = param_1[0x94];
  iVar6 = *(int *)(*(int *)this_00 + 4);
  *puVar4 = 0;
  if (iVar6 == 0) {
    *(undefined4 *)(*(int *)this_01 + 4) = 0;
    *(int *)(*(int *)this_01 + 8) = *(int *)this_01;
    *(int *)(*(int *)this_01 + 0xc) = *(int *)this_01;
  }
  else {
    p_Var1 = *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_> **)
              this_01;
    p_Var5 = _STL::
             _Rb_tree<unsigned_short,struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>,struct__STL::less<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>_>
             ::M_copy((_Rb_tree<unsigned_short,struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>,struct__STL::less<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>_>
                       *)this_01,
                      *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>
                        **)(*(int *)this_00 + 4),p_Var1);
    *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_> **)(p_Var1 + 4) =
         p_Var5;
    iVar6 = *(int *)(*(int *)this_01 + 4);
    for (iVar2 = *(int *)(iVar6 + 8); iVar2 != 0; iVar2 = *(int *)(iVar2 + 8)) {
      iVar6 = iVar2;
    }
    *(int *)(*(int *)this_01 + 8) = iVar6;
    iVar6 = *(int *)(*(int *)this_01 + 4);
    for (iVar2 = *(int *)(iVar6 + 0xc); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0xc)) {
      iVar6 = iVar2;
    }
    *(int *)(*(int *)this_01 + 0xc) = iVar6;
  }
  *(undefined4 *)(this + 0x90) = *(undefined4 *)(param_1 + 0x90);
  *(undefined2 *)(this + 0x9c) = *(undefined2 *)(param_1 + 0x9c);
  ExceptionList = local_c;
  return this;
}




/* from: libgsclient:GSProxyConnection.cpp
   addr: 005B0650 */

map<unsigned_short,struct_stModuleInfo,struct__STL::less<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>_>
* __thiscall
_STL::
map<unsigned_short,struct_stModuleInfo,struct__STL::less<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>_>
::
map<unsigned_short,struct_stModuleInfo,struct__STL::less<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>_>
          (map<unsigned_short,struct_stModuleInfo,struct__STL::less<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>_>
           *this)

{
  undefined1 *puVar1;
  map<unsigned_short,struct_stModuleInfo,struct__STL::less<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>_>
  local_1;
  
  *(undefined4 *)this = 0;
  puVar1 = (undefined1 *)ExtAlloc_Malloc_4(0x3c);
  local_1 = SUB41((uint)this >> 0x18,0);
  *(undefined1 **)this = puVar1;
  *(undefined4 *)(this + 4) = 0;
  this[8] = local_1;
  *puVar1 = 0;
  *(undefined4 *)(*(int *)this + 4) = 0;
  *(int *)(*(int *)this + 8) = *(int *)this;
  *(int *)(*(int *)this + 0xc) = *(int *)this;
  return this;
}




/* from: libgsclient:GSProxyConnection.cpp
   addr: 005B0690 */

void __thiscall
_STL::
_Rb_tree<unsigned_short,struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>,struct__STL::less<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>_>
::clear(_Rb_tree<unsigned_short,struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>,struct__STL::less<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>_>
        *this)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(this + 4) != 0) {
    iVar2 = *(int *)(*(int *)this + 4);
    while (iVar2 != 0) {
      M_erase(this,*(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_> **
                    )(iVar2 + 0xc));
      iVar1 = *(int *)(iVar2 + 8);
      ExtAlloc_Free_4(iVar2);
      iVar2 = iVar1;
    }
    *(int *)(*(int *)this + 8) = *(int *)this;
    *(undefined4 *)(*(int *)this + 4) = 0;
    *(int *)(*(int *)this + 0xc) = *(int *)this;
    *(undefined4 *)(this + 4) = 0;
  }
  return;
}




/* from: libgsclient:GSProxyConnection.cpp
   addr: 005B06E0
   addr: 005B06E0
   addr: 005B06E0
   addr: 005B06E0
   addr: 005B06E0
   addr: 005B06E0
   addr: 005B06E0
   addr: 005B06E0
   addr: 005B06E0
   addr: 005B06E0
   addr: 005B06E0
   addr: 005B06E0
   addr: 005B06E0 */

_List_node<class_clData*> * __thiscall
_STL::list<class_clData*,class_ExtAlloc::Allocator<class_clData*>_>::M_create_node
          (list<class_clData*,class_ExtAlloc::Allocator<class_clData*>_> *this,clData **param_1)

{
  _List_node<class_clData*> *p_Var1;
  
  p_Var1 = (_List_node<class_clData*> *)ExtAlloc_Malloc_4(0xc);
  if (p_Var1 + 8 != (_List_node<class_clData*> *)0x0) {
    *(clData **)(p_Var1 + 8) = *param_1;
  }
  return p_Var1;
}




/* from: libgsclient:GSProxyConnection.cpp
   addr: 005B0700 */

_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_> * __thiscall
_STL::
_Rb_tree<unsigned_short,struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>,struct__STL::less<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>_>
::M_copy(_Rb_tree<unsigned_short,struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>,struct__STL::less<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>_>
         *this,_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_> *param_1
        ,_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_> *param_2)

{
  _Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_> *p_Var1;
  _Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_> *p_Var2;
  _Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_> *p_Var3;
  _Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_> *p_Var4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005cb930;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  p_Var2 = M_create_node(this,(pair<unsigned_short_const_,struct_stModuleInfo> *)(param_1 + 0x10));
  *p_Var2 = *param_1;
  *(undefined4 *)(p_Var2 + 8) = 0;
  *(undefined4 *)(p_Var2 + 0xc) = 0;
  *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_> **)(p_Var2 + 4) =
       param_2;
  p_Var3 = *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_> **)
            (param_1 + 0xc);
  local_8 = 0;
  p_Var1 = p_Var2;
  while( true ) {
    if (p_Var3 != (_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_> *)
                  0x0) {
      p_Var3 = M_copy(this,p_Var3,p_Var1);
      *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_> **)
       (p_Var1 + 0xc) = p_Var3;
    }
    param_1 = *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_> **)
               (param_1 + 8);
    if (param_1 ==
        (_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_> *)0x0) break;
    p_Var4 = M_create_node(this,(pair<unsigned_short_const_,struct_stModuleInfo> *)(param_1 + 0x10))
    ;
    *p_Var4 = *param_1;
    *(undefined4 *)(p_Var4 + 8) = 0;
    *(undefined4 *)(p_Var4 + 0xc) = 0;
    *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_> **)(p_Var1 + 8) =
         p_Var4;
    *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_> **)(p_Var4 + 4) =
         p_Var1;
    p_Var3 = *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_> **)
              (param_1 + 0xc);
    p_Var1 = p_Var4;
  }
  ExceptionList = local_10;
  return p_Var2;
}




/* from: libgsclient:GSProxyConnection.cpp
   addr: 005B07E0 */

void __thiscall
_STL::
_Rb_tree<unsigned_short,struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>,struct__STL::less<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>_>
::M_erase(_Rb_tree<unsigned_short,struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>,struct__STL::less<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>_>
          *this,_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>
                *param_1)

{
  _Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_> *p_Var1;
  
  if (param_1 != (_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_> *)0x0
     ) {
    do {
      M_erase(this,*(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_> **
                    )(param_1 + 0xc));
      p_Var1 = *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_> **)
                (param_1 + 8);
      ExtAlloc_Free_4(param_1);
      param_1 = p_Var1;
    } while (p_Var1 != (_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>
                        *)0x0);
  }
  return;
}




/* from: libgsclient:GSProxyConnection.cpp
   addr: 005B0810 */

_Rb_tree_node_base * __thiscall
_STL::
_Rb_tree<unsigned_short,struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>,struct__STL::less<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>_>
::insert_unique(_Rb_tree<unsigned_short,struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>,struct__STL::less<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>_>
                *this,_Rb_tree_node_base *param_2,_Rb_tree_node_base *param_3,
               pair<unsigned_short_const_,struct_stModuleInfo> *param_4)

{
  _Rb_tree_node_base *p_Var1;
  pair<unsigned_short_const_,struct_stModuleInfo> *ppVar2;
  int *piVar3;
  _Rb_tree_iterator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Nonconst_traits<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>
  *p_Var4;
  _Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_> *p_Var5;
  _Rb_tree_node_base *p_Var6;
  _Rb_tree_node_base *p_Var7;
  undefined4 *puVar8;
  pair<unsigned_short_const_,struct_stModuleInfo> *ppVar9;
  pair<unsigned_short_const_,struct_stModuleInfo> *ppVar10;
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
  ppVar9 = *(pair<unsigned_short_const_,struct_stModuleInfo> **)this;
  if (param_3 != *(_Rb_tree_node_base **)(ppVar9 + 8)) {
    if (param_3 == (_Rb_tree_node_base *)ppVar9) {
      if (*(ushort *)(*(pair<unsigned_short_const_,struct_stModuleInfo> **)(ppVar9 + 0xc) + 0x10) <
          *(ushort *)param_4) {
        M_insert(this,param_2,(_Rb_tree_node_base *)0x0,
                 *(pair<unsigned_short_const_,struct_stModuleInfo> **)(ppVar9 + 0xc),
                 (_Rb_tree_node_base *)param_4);
        return param_2;
      }
    }
    else {
      p_Var7 = _Rb_global<bool>::M_decrement(param_3);
      p_Var6 = (_Rb_tree_node_base *)param_4;
      bVar11 = *(ushort *)param_4 < *(ushort *)(p_Var1 + 0x10);
      if ((bVar11) && (*(ushort *)(p_Var7 + 0x10) < *(ushort *)param_4)) {
        if (*(int *)(p_Var7 + 0xc) == 0) {
          M_insert(this,param_2,(_Rb_tree_node_base *)0x0,
                   (pair<unsigned_short_const_,struct_stModuleInfo> *)p_Var7,
                   (_Rb_tree_node_base *)param_4);
          return param_2;
        }
        M_insert(this,param_2,p_Var1,(pair<unsigned_short_const_,struct_stModuleInfo> *)p_Var1,
                 (_Rb_tree_node_base *)param_4);
        return param_2;
      }
      p_Var7 = _Rb_global<bool>::M_increment(p_Var1);
      bVar12 = !bVar11;
      if (!bVar11) {
        bVar12 = *(ushort *)(p_Var1 + 0x10) < *(ushort *)p_Var6;
        if (!bVar12) goto LAB_005b0cd0;
        if ((p_Var7 == *(_Rb_tree_node_base **)this) ||
           (*(ushort *)p_Var6 < *(ushort *)(p_Var7 + 0x10))) {
          if (*(int *)(p_Var1 + 0xc) == 0) {
            M_insert(this,param_2,(_Rb_tree_node_base *)0x0,
                     (pair<unsigned_short_const_,struct_stModuleInfo> *)p_Var1,p_Var6);
            return param_2;
          }
          M_insert(this,param_2,p_Var7,(pair<unsigned_short_const_,struct_stModuleInfo> *)p_Var7,
                   p_Var6);
          return param_2;
        }
      }
      if (bVar11 == bVar12) {
LAB_005b0cd0:
        *(_Rb_tree_node_base **)param_2 = p_Var1;
        return param_2;
      }
    }
    puVar8 = (undefined4 *)
             insert_unique(this,(pair<unsigned_short_const_,struct_stModuleInfo> *)local_8);
    *(undefined4 *)param_2 = *puVar8;
    return param_2;
  }
  if (*(int *)(this + 4) != 0) {
    if (*(ushort *)param_4 < *(ushort *)(param_3 + 0x10)) {
      p_Var5 = M_create_node(this,param_4);
      *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_> **)(p_Var1 + 8)
           = p_Var5;
      p_Var6 = *(_Rb_tree_node_base **)this;
      if (p_Var1 == p_Var6) {
        *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_> **)
         (p_Var6 + 4) = p_Var5;
        *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_> **)
         (*(int *)this + 0xc) = p_Var5;
      }
      else if (p_Var1 == *(_Rb_tree_node_base **)(p_Var6 + 8)) {
        *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_> **)
         (p_Var6 + 8) = p_Var5;
      }
      *(_Rb_tree_node_base **)(p_Var5 + 4) = p_Var1;
      *(undefined4 *)(p_Var5 + 8) = 0;
      *(undefined4 *)(p_Var5 + 0xc) = 0;
      _Rb_global<bool>::Rebalance
                ((_Rb_tree_node_base *)p_Var5,(_Rb_tree_node_base **)(*(int *)this + 4));
      *(int *)(this + 4) = *(int *)(this + 4) + 1;
      *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_> **)param_2 =
           p_Var5;
      return param_2;
    }
    if (*(ushort *)param_4 <= *(ushort *)(param_3 + 0x10)) {
      *(_Rb_tree_node_base **)param_2 = param_3;
      return param_2;
    }
    p_Var6 = _Rb_global<bool>::M_increment(param_3);
    ppVar9 = *(pair<unsigned_short_const_,struct_stModuleInfo> **)this;
    if (p_Var6 == (_Rb_tree_node_base *)ppVar9) {
      if (p_Var1 == (_Rb_tree_node_base *)ppVar9) {
        p_Var5 = M_create_node(this,ppVar2);
        *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_> **)
         (p_Var1 + 8) = p_Var5;
        p_Var6 = *(_Rb_tree_node_base **)this;
        if (p_Var1 == p_Var6) {
          *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_> **)
           (p_Var6 + 4) = p_Var5;
          *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_> **)
           (*(int *)this + 0xc) = p_Var5;
        }
        else if (p_Var1 == *(_Rb_tree_node_base **)(p_Var6 + 8)) {
          *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_> **)
           (p_Var6 + 8) = p_Var5;
        }
      }
      else {
        p_Var5 = M_create_node(this,ppVar2);
        *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_> **)
         (p_Var1 + 0xc) = p_Var5;
        if (p_Var1 == *(_Rb_tree_node_base **)(*(int *)this + 0xc)) {
          *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_> **)
           (*(int *)this + 0xc) = p_Var5;
        }
      }
      *(_Rb_tree_node_base **)((_Rb_tree_node_base *)p_Var5 + 4) = p_Var1;
      *(undefined4 *)((_Rb_tree_node_base *)p_Var5 + 8) = 0;
      *(undefined4 *)((_Rb_tree_node_base *)p_Var5 + 0xc) = 0;
      _Rb_global<bool>::Rebalance
                ((_Rb_tree_node_base *)p_Var5,(_Rb_tree_node_base **)(*(int *)this + 4));
      *(int *)(this + 4) = *(int *)(this + 4) + 1;
      *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_> **)param_2 =
           p_Var5;
      return param_2;
    }
    if (*(ushort *)ppVar2 < *(ushort *)(p_Var6 + 0x10)) {
      if (*(int *)(p_Var1 + 0xc) == 0) {
        if (p_Var1 == (_Rb_tree_node_base *)ppVar9) {
          p_Var5 = M_create_node(this,ppVar2);
          *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_> **)
           (p_Var1 + 8) = p_Var5;
          p_Var6 = *(_Rb_tree_node_base **)this;
          if (p_Var1 == p_Var6) {
            *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_> **)
             (p_Var6 + 4) = p_Var5;
            *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_> **)
             (*(int *)this + 0xc) = p_Var5;
          }
          else if (p_Var1 == *(_Rb_tree_node_base **)(p_Var6 + 8)) {
            *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_> **)
             (p_Var6 + 8) = p_Var5;
          }
        }
        else {
          p_Var5 = M_create_node(this,ppVar2);
          *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_> **)
           (p_Var1 + 0xc) = p_Var5;
          if (p_Var1 == *(_Rb_tree_node_base **)(*(int *)this + 0xc)) {
            *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_> **)
             (*(int *)this + 0xc) = p_Var5;
          }
        }
        *(_Rb_tree_node_base **)((_Rb_tree_node_base *)p_Var5 + 4) = p_Var1;
        *(undefined4 *)((_Rb_tree_node_base *)p_Var5 + 8) = 0;
        *(undefined4 *)((_Rb_tree_node_base *)p_Var5 + 0xc) = 0;
        _Rb_global<bool>::Rebalance
                  ((_Rb_tree_node_base *)p_Var5,(_Rb_tree_node_base **)(*(int *)this + 4));
        *(int *)(this + 4) = *(int *)(this + 4) + 1;
        *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_> **)param_2 =
             p_Var5;
        return param_2;
      }
      p_Var5 = M_create_node(this,ppVar2);
      *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_> **)(p_Var6 + 8)
           = p_Var5;
      p_Var1 = *(_Rb_tree_node_base **)this;
      if (p_Var6 == p_Var1) {
        *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_> **)
         (p_Var1 + 4) = p_Var5;
        *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_> **)
         (*(int *)this + 0xc) = p_Var5;
      }
      else if (p_Var6 == *(_Rb_tree_node_base **)(p_Var1 + 8)) {
        *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_> **)
         (p_Var1 + 8) = p_Var5;
      }
      *(_Rb_tree_node_base **)(p_Var5 + 4) = p_Var6;
      *(undefined4 *)(p_Var5 + 8) = 0;
      *(undefined4 *)(p_Var5 + 0xc) = 0;
      _Rb_global<bool>::Rebalance
                ((_Rb_tree_node_base *)p_Var5,(_Rb_tree_node_base **)(*(int *)this + 4));
      *(int *)(this + 4) = *(int *)(this + 4) + 1;
      *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_> **)param_2 =
           p_Var5;
      return param_2;
    }
    bVar11 = true;
    ppVar10 = *(pair<unsigned_short_const_,struct_stModuleInfo> **)(ppVar9 + 4);
    while (ppVar10 != (pair<unsigned_short_const_,struct_stModuleInfo> *)0x0) {
      bVar11 = *(ushort *)ppVar2 < *(ushort *)(ppVar10 + 0x10);
      ppVar9 = ppVar10;
      if (bVar11) {
        ppVar10 = *(pair<unsigned_short_const_,struct_stModuleInfo> **)(ppVar10 + 8);
      }
      else {
        ppVar10 = *(pair<unsigned_short_const_,struct_stModuleInfo> **)(ppVar10 + 0xc);
      }
    }
    local_18 = (_Rb_tree_node_base *)ppVar9;
    if (bVar11) {
      piVar3 = (int *)map<void*,class_PKCAlgorithm*,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_PKCAlgorithm*>_>_>
                      ::begin((map<void*,class_PKCAlgorithm*,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_PKCAlgorithm*>_>_>
                               *)this);
      if (local_18 == (_Rb_tree_node_base *)*piVar3) {
        pbVar13 = (bool *)&param_4;
        param_4 = (pair<unsigned_short_const_,struct_stModuleInfo> *)CONCAT31(param_4._1_3_,1);
        p_Var4 = (_Rb_tree_iterator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Nonconst_traits<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>
                  *)M_insert(this,local_10,(_Rb_tree_node_base *)0x0,ppVar9,
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
    if (*(ushort *)((pair<unsigned_short_const_,struct_stModuleInfo> *)local_18 + 0x10) <
        *(ushort *)ppVar2) {
      pbVar13 = (bool *)&param_3;
      param_3 = (_Rb_tree_node_base *)CONCAT31(param_3._1_3_,1);
      p_Var4 = (_Rb_tree_iterator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Nonconst_traits<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>
                *)M_insert(this,local_14,(_Rb_tree_node_base *)0x0,ppVar9,
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
  ppVar10 = *(pair<unsigned_short_const_,struct_stModuleInfo> **)(ppVar9 + 4);
  bVar11 = true;
  if (ppVar10 != (pair<unsigned_short_const_,struct_stModuleInfo> *)0x0) {
    do {
      ppVar9 = ppVar10;
      bVar11 = *(ushort *)param_4 < *(ushort *)(ppVar9 + 0x10);
      if (bVar11) {
        ppVar10 = *(pair<unsigned_short_const_,struct_stModuleInfo> **)(ppVar9 + 8);
      }
      else {
        ppVar10 = *(pair<unsigned_short_const_,struct_stModuleInfo> **)(ppVar9 + 0xc);
      }
    } while (ppVar10 != (pair<unsigned_short_const_,struct_stModuleInfo> *)0x0);
  }
  local_18 = (_Rb_tree_node_base *)ppVar9;
  if (bVar11) {
    piVar3 = (int *)map<void*,class_PKCAlgorithm*,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_PKCAlgorithm*>_>_>
                    ::begin((map<void*,class_PKCAlgorithm*,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_PKCAlgorithm*>_>_>
                             *)this);
    if (local_18 == (_Rb_tree_node_base *)*piVar3) {
      pbVar13 = (bool *)&param_4;
      param_4 = (pair<unsigned_short_const_,struct_stModuleInfo> *)CONCAT31(param_4._1_3_,1);
      p_Var4 = (_Rb_tree_iterator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Nonconst_traits<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>
                *)M_insert(this,local_10,(_Rb_tree_node_base *)ppVar10,ppVar9,
                           (_Rb_tree_node_base *)ppVar2);
      goto LAB_005b08dd;
    }
    local_18 = _Rb_global<bool>::M_decrement(local_18);
  }
  if (*(ushort *)(local_18 + 0x10) < *(ushort *)ppVar2) {
    pbVar13 = (bool *)&param_3;
    param_3 = (_Rb_tree_node_base *)CONCAT31(param_3._1_3_,1);
    p_Var4 = (_Rb_tree_iterator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Nonconst_traits<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>
              *)M_insert(this,local_c,(_Rb_tree_node_base *)ppVar10,ppVar9,
                         (_Rb_tree_node_base *)ppVar2);
  }
  else {
    pbVar13 = &local_19;
    p_Var4 = (_Rb_tree_iterator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Nonconst_traits<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>
              *)&local_18;
    local_19 = false;
  }
LAB_005b08dd:
  pair<struct__STL::_Rb_tree_iterator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Nonconst_traits<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>,bool>
  ::
  pair<struct__STL::_Rb_tree_iterator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Nonconst_traits<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>,bool>
            ((pair<struct__STL::_Rb_tree_iterator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Nonconst_traits<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>,bool>
              *)local_8,p_Var4,pbVar13);
  *(undefined4 *)param_2 = local_8[0];
  return param_2;
}




/* from: libgsclient:GSProxyConnection.cpp
   addr: 005B0D00 */

void __thiscall
_STL::
_Rb_tree<unsigned_short,struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>_>,struct__STL::less<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>_>_>
::M_erase(_Rb_tree<unsigned_short,struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>_>,struct__STL::less<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>_>_>
          *this,_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>_> *param_1
         )

{
  _Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>_> *p_Var1;
  
  if (param_1 != (_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>_> *)0x0)
  {
    do {
      M_erase(this,*(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>_> **)
                    (param_1 + 0xc));
      p_Var1 = *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>_> **)
                (param_1 + 8);
      pair<unsigned_short_const_,struct_stProxyInfo>::
      ~pair<unsigned_short_const_,struct_stProxyInfo>
                ((pair<unsigned_short_const_,struct_stProxyInfo> *)(param_1 + 0x10));
      ExtAlloc_Free_4(param_1);
      param_1 = p_Var1;
    } while (p_Var1 != (_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>_>
                        *)0x0);
  }
  return;
}




/* from: libgsclient:GSProxyConnection.cpp
   addr: 005B0D40 */

_Rb_tree_node_base * __thiscall
_STL::
_Rb_tree<unsigned_short,struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>_>,struct__STL::less<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>_>_>
::insert_unique(_Rb_tree<unsigned_short,struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>_>,struct__STL::less<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>_>_>
                *this,_Rb_tree_node_base *param_2,_Rb_tree_node_base *param_3,
               pair<unsigned_short_const_,struct_stProxyInfo> *param_4)

{
  _Rb_tree_node_base *p_Var1;
  pair<unsigned_short_const_,struct_stProxyInfo> *ppVar2;
  int *piVar3;
  _Rb_tree_iterator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Nonconst_traits<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>
  *p_Var4;
  _Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>_> *p_Var5;
  _Rb_tree_node_base *p_Var6;
  _Rb_tree_node_base *p_Var7;
  undefined4 *puVar8;
  pair<unsigned_short_const_,struct_stProxyInfo> *ppVar9;
  pair<unsigned_short_const_,struct_stProxyInfo> *ppVar10;
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
  ppVar9 = *(pair<unsigned_short_const_,struct_stProxyInfo> **)this;
  if (param_3 != *(_Rb_tree_node_base **)(ppVar9 + 8)) {
    if (param_3 == (_Rb_tree_node_base *)ppVar9) {
      if (*(ushort *)(*(pair<unsigned_short_const_,struct_stProxyInfo> **)(ppVar9 + 0xc) + 0x10) <
          *(ushort *)param_4) {
        M_insert(this,param_2,(_Rb_tree_node_base *)0x0,
                 *(pair<unsigned_short_const_,struct_stProxyInfo> **)(ppVar9 + 0xc),
                 (_Rb_tree_node_base *)param_4);
        return param_2;
      }
    }
    else {
      p_Var7 = _Rb_global<bool>::M_decrement(param_3);
      p_Var6 = (_Rb_tree_node_base *)param_4;
      bVar11 = *(ushort *)param_4 < *(ushort *)(p_Var1 + 0x10);
      if ((bVar11) && (*(ushort *)(p_Var7 + 0x10) < *(ushort *)param_4)) {
        if (*(int *)(p_Var7 + 0xc) == 0) {
          M_insert(this,param_2,(_Rb_tree_node_base *)0x0,
                   (pair<unsigned_short_const_,struct_stProxyInfo> *)p_Var7,
                   (_Rb_tree_node_base *)param_4);
          return param_2;
        }
        M_insert(this,param_2,p_Var1,(pair<unsigned_short_const_,struct_stProxyInfo> *)p_Var1,
                 (_Rb_tree_node_base *)param_4);
        return param_2;
      }
      p_Var7 = _Rb_global<bool>::M_increment(p_Var1);
      bVar12 = !bVar11;
      if (!bVar11) {
        bVar12 = *(ushort *)(p_Var1 + 0x10) < *(ushort *)p_Var6;
        if (!bVar12) goto LAB_005b1200;
        if ((p_Var7 == *(_Rb_tree_node_base **)this) ||
           (*(ushort *)p_Var6 < *(ushort *)(p_Var7 + 0x10))) {
          if (*(int *)(p_Var1 + 0xc) == 0) {
            M_insert(this,param_2,(_Rb_tree_node_base *)0x0,
                     (pair<unsigned_short_const_,struct_stProxyInfo> *)p_Var1,p_Var6);
            return param_2;
          }
          M_insert(this,param_2,p_Var7,(pair<unsigned_short_const_,struct_stProxyInfo> *)p_Var7,
                   p_Var6);
          return param_2;
        }
      }
      if (bVar11 == bVar12) {
LAB_005b1200:
        *(_Rb_tree_node_base **)param_2 = p_Var1;
        return param_2;
      }
    }
    puVar8 = (undefined4 *)
             insert_unique(this,(pair<unsigned_short_const_,struct_stProxyInfo> *)local_8);
    *(undefined4 *)param_2 = *puVar8;
    return param_2;
  }
  if (*(int *)(this + 4) != 0) {
    if (*(ushort *)param_4 < *(ushort *)(param_3 + 0x10)) {
      p_Var5 = M_create_node(this,param_4);
      *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>_> **)(p_Var1 + 8)
           = p_Var5;
      p_Var6 = *(_Rb_tree_node_base **)this;
      if (p_Var1 == p_Var6) {
        *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>_> **)
         (p_Var6 + 4) = p_Var5;
        *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>_> **)
         (*(int *)this + 0xc) = p_Var5;
      }
      else if (p_Var1 == *(_Rb_tree_node_base **)(p_Var6 + 8)) {
        *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>_> **)
         (p_Var6 + 8) = p_Var5;
      }
      *(_Rb_tree_node_base **)(p_Var5 + 4) = p_Var1;
      *(undefined4 *)(p_Var5 + 8) = 0;
      *(undefined4 *)(p_Var5 + 0xc) = 0;
      _Rb_global<bool>::Rebalance
                ((_Rb_tree_node_base *)p_Var5,(_Rb_tree_node_base **)(*(int *)this + 4));
      *(int *)(this + 4) = *(int *)(this + 4) + 1;
      *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>_> **)param_2 =
           p_Var5;
      return param_2;
    }
    if (*(ushort *)param_4 <= *(ushort *)(param_3 + 0x10)) {
      *(_Rb_tree_node_base **)param_2 = param_3;
      return param_2;
    }
    p_Var6 = _Rb_global<bool>::M_increment(param_3);
    ppVar9 = *(pair<unsigned_short_const_,struct_stProxyInfo> **)this;
    if (p_Var6 == (_Rb_tree_node_base *)ppVar9) {
      if (p_Var1 == (_Rb_tree_node_base *)ppVar9) {
        p_Var5 = M_create_node(this,ppVar2);
        *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>_> **)
         (p_Var1 + 8) = p_Var5;
        p_Var6 = *(_Rb_tree_node_base **)this;
        if (p_Var1 == p_Var6) {
          *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>_> **)
           (p_Var6 + 4) = p_Var5;
          *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>_> **)
           (*(int *)this + 0xc) = p_Var5;
        }
        else if (p_Var1 == *(_Rb_tree_node_base **)(p_Var6 + 8)) {
          *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>_> **)
           (p_Var6 + 8) = p_Var5;
        }
      }
      else {
        p_Var5 = M_create_node(this,ppVar2);
        *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>_> **)
         (p_Var1 + 0xc) = p_Var5;
        if (p_Var1 == *(_Rb_tree_node_base **)(*(int *)this + 0xc)) {
          *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>_> **)
           (*(int *)this + 0xc) = p_Var5;
        }
      }
      *(_Rb_tree_node_base **)((_Rb_tree_node_base *)p_Var5 + 4) = p_Var1;
      *(undefined4 *)((_Rb_tree_node_base *)p_Var5 + 8) = 0;
      *(undefined4 *)((_Rb_tree_node_base *)p_Var5 + 0xc) = 0;
      _Rb_global<bool>::Rebalance
                ((_Rb_tree_node_base *)p_Var5,(_Rb_tree_node_base **)(*(int *)this + 4));
      *(int *)(this + 4) = *(int *)(this + 4) + 1;
      *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>_> **)param_2 =
           p_Var5;
      return param_2;
    }
    if (*(ushort *)ppVar2 < *(ushort *)(p_Var6 + 0x10)) {
      if (*(int *)(p_Var1 + 0xc) == 0) {
        if (p_Var1 == (_Rb_tree_node_base *)ppVar9) {
          p_Var5 = M_create_node(this,ppVar2);
          *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>_> **)
           (p_Var1 + 8) = p_Var5;
          p_Var6 = *(_Rb_tree_node_base **)this;
          if (p_Var1 == p_Var6) {
            *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>_> **)
             (p_Var6 + 4) = p_Var5;
            *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>_> **)
             (*(int *)this + 0xc) = p_Var5;
          }
          else if (p_Var1 == *(_Rb_tree_node_base **)(p_Var6 + 8)) {
            *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>_> **)
             (p_Var6 + 8) = p_Var5;
          }
        }
        else {
          p_Var5 = M_create_node(this,ppVar2);
          *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>_> **)
           (p_Var1 + 0xc) = p_Var5;
          if (p_Var1 == *(_Rb_tree_node_base **)(*(int *)this + 0xc)) {
            *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>_> **)
             (*(int *)this + 0xc) = p_Var5;
          }
        }
        *(_Rb_tree_node_base **)((_Rb_tree_node_base *)p_Var5 + 4) = p_Var1;
        *(undefined4 *)((_Rb_tree_node_base *)p_Var5 + 8) = 0;
        *(undefined4 *)((_Rb_tree_node_base *)p_Var5 + 0xc) = 0;
        _Rb_global<bool>::Rebalance
                  ((_Rb_tree_node_base *)p_Var5,(_Rb_tree_node_base **)(*(int *)this + 4));
        *(int *)(this + 4) = *(int *)(this + 4) + 1;
        *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>_> **)param_2 =
             p_Var5;
        return param_2;
      }
      p_Var5 = M_create_node(this,ppVar2);
      *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>_> **)(p_Var6 + 8)
           = p_Var5;
      p_Var1 = *(_Rb_tree_node_base **)this;
      if (p_Var6 == p_Var1) {
        *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>_> **)
         (p_Var1 + 4) = p_Var5;
        *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>_> **)
         (*(int *)this + 0xc) = p_Var5;
      }
      else if (p_Var6 == *(_Rb_tree_node_base **)(p_Var1 + 8)) {
        *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>_> **)
         (p_Var1 + 8) = p_Var5;
      }
      *(_Rb_tree_node_base **)(p_Var5 + 4) = p_Var6;
      *(undefined4 *)(p_Var5 + 8) = 0;
      *(undefined4 *)(p_Var5 + 0xc) = 0;
      _Rb_global<bool>::Rebalance
                ((_Rb_tree_node_base *)p_Var5,(_Rb_tree_node_base **)(*(int *)this + 4));
      *(int *)(this + 4) = *(int *)(this + 4) + 1;
      *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>_> **)param_2 =
           p_Var5;
      return param_2;
    }
    bVar11 = true;
    ppVar10 = *(pair<unsigned_short_const_,struct_stProxyInfo> **)(ppVar9 + 4);
    while (ppVar10 != (pair<unsigned_short_const_,struct_stProxyInfo> *)0x0) {
      bVar11 = *(ushort *)ppVar2 < *(ushort *)(ppVar10 + 0x10);
      ppVar9 = ppVar10;
      if (bVar11) {
        ppVar10 = *(pair<unsigned_short_const_,struct_stProxyInfo> **)(ppVar10 + 8);
      }
      else {
        ppVar10 = *(pair<unsigned_short_const_,struct_stProxyInfo> **)(ppVar10 + 0xc);
      }
    }
    local_18 = (_Rb_tree_node_base *)ppVar9;
    if (bVar11) {
      piVar3 = (int *)map<void*,class_PKCAlgorithm*,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_PKCAlgorithm*>_>_>
                      ::begin((map<void*,class_PKCAlgorithm*,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_PKCAlgorithm*>_>_>
                               *)this);
      if (local_18 == (_Rb_tree_node_base *)*piVar3) {
        pbVar13 = (bool *)&param_4;
        param_4 = (pair<unsigned_short_const_,struct_stProxyInfo> *)CONCAT31(param_4._1_3_,1);
        p_Var4 = (_Rb_tree_iterator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Nonconst_traits<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>
                  *)M_insert(this,local_10,(_Rb_tree_node_base *)0x0,ppVar9,
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
    if (*(ushort *)((pair<unsigned_short_const_,struct_stProxyInfo> *)local_18 + 0x10) <
        *(ushort *)ppVar2) {
      pbVar13 = (bool *)&param_3;
      param_3 = (_Rb_tree_node_base *)CONCAT31(param_3._1_3_,1);
      p_Var4 = (_Rb_tree_iterator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Nonconst_traits<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>
                *)M_insert(this,local_14,(_Rb_tree_node_base *)0x0,ppVar9,
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
  ppVar10 = *(pair<unsigned_short_const_,struct_stProxyInfo> **)(ppVar9 + 4);
  bVar11 = true;
  if (ppVar10 != (pair<unsigned_short_const_,struct_stProxyInfo> *)0x0) {
    do {
      ppVar9 = ppVar10;
      bVar11 = *(ushort *)param_4 < *(ushort *)(ppVar9 + 0x10);
      if (bVar11) {
        ppVar10 = *(pair<unsigned_short_const_,struct_stProxyInfo> **)(ppVar9 + 8);
      }
      else {
        ppVar10 = *(pair<unsigned_short_const_,struct_stProxyInfo> **)(ppVar9 + 0xc);
      }
    } while (ppVar10 != (pair<unsigned_short_const_,struct_stProxyInfo> *)0x0);
  }
  local_18 = (_Rb_tree_node_base *)ppVar9;
  if (bVar11) {
    piVar3 = (int *)map<void*,class_PKCAlgorithm*,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_PKCAlgorithm*>_>_>
                    ::begin((map<void*,class_PKCAlgorithm*,struct__STL::less<void*>,class_ExtAlloc::Allocator<struct__STL::pair<void*_const,class_PKCAlgorithm*>_>_>
                             *)this);
    if (local_18 == (_Rb_tree_node_base *)*piVar3) {
      pbVar13 = (bool *)&param_4;
      param_4 = (pair<unsigned_short_const_,struct_stProxyInfo> *)CONCAT31(param_4._1_3_,1);
      p_Var4 = (_Rb_tree_iterator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Nonconst_traits<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>
                *)M_insert(this,local_10,(_Rb_tree_node_base *)ppVar10,ppVar9,
                           (_Rb_tree_node_base *)ppVar2);
      goto LAB_005b0e0d;
    }
    local_18 = _Rb_global<bool>::M_decrement(local_18);
  }
  if (*(ushort *)(local_18 + 0x10) < *(ushort *)ppVar2) {
    pbVar13 = (bool *)&param_3;
    param_3 = (_Rb_tree_node_base *)CONCAT31(param_3._1_3_,1);
    p_Var4 = (_Rb_tree_iterator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Nonconst_traits<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>
              *)M_insert(this,local_c,(_Rb_tree_node_base *)ppVar10,ppVar9,
                         (_Rb_tree_node_base *)ppVar2);
  }
  else {
    pbVar13 = &local_19;
    p_Var4 = (_Rb_tree_iterator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Nonconst_traits<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>
              *)&local_18;
    local_19 = false;
  }
LAB_005b0e0d:
  pair<struct__STL::_Rb_tree_iterator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Nonconst_traits<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>,bool>
  ::
  pair<struct__STL::_Rb_tree_iterator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Nonconst_traits<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>,bool>
            ((pair<struct__STL::_Rb_tree_iterator<struct__STL::pair<int_const_,struct_stLobbySrvInfo>,struct__STL::_Nonconst_traits<struct__STL::pair<int_const_,struct_stLobbySrvInfo>_>_>,bool>
              *)local_8,p_Var4,pbVar13);
  *(undefined4 *)param_2 = local_8[0];
  return param_2;
}




/* from: libgsclient:GSProxyConnection.cpp
   addr: 005B1230 */

void __thiscall
_STL::
_Rb_tree<unsigned_short,struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>_>,struct__STL::less<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>_>_>
::find(_Rb_tree<unsigned_short,struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>_>,struct__STL::less<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>_>_>
       *this,ushort *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ushort *in_stack_00000008;
  
  iVar1 = *(int *)this;
  iVar4 = iVar1;
  if (*(int *)(iVar1 + 4) != 0) {
    iVar2 = *(int *)(iVar1 + 4);
    do {
      if (*(ushort *)(iVar2 + 0x10) < *in_stack_00000008) {
        iVar3 = *(int *)(iVar2 + 0xc);
      }
      else {
        iVar3 = *(int *)(iVar2 + 8);
        iVar4 = iVar2;
      }
      iVar2 = iVar3;
    } while (iVar3 != 0);
  }
  if ((iVar4 != iVar1) && (*(ushort *)(iVar4 + 0x10) <= *in_stack_00000008)) {
    *(int *)param_1 = iVar4;
    return;
  }
  *(int *)param_1 = iVar1;
  return;
}




/* from: libgsclient:GSProxyConnection.cpp
   addr: 005B1280 */

void * __thiscall
_STL::pair<unsigned_short_const_,struct_stProxyInfo>::_scalar_deleting_destructor_
          (pair<unsigned_short_const_,struct_stProxyInfo> *this,uint param_1)

{
  ~pair<unsigned_short_const_,struct_stProxyInfo>(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: libgsclient:GSProxyConnection.cpp
   addr: 005B12A0 */

_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_> * __thiscall
_STL::
_Rb_tree<unsigned_short,struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>,struct__STL::less<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>_>
::M_create_node(_Rb_tree<unsigned_short,struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>,struct__STL::less<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>_>
                *this,pair<unsigned_short_const_,struct_stModuleInfo> *param_1)

{
  _Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_> *p_Var1;
  int iVar2;
  pair<unsigned_short_const_,struct_stModuleInfo> *ppVar3;
  _Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_> *p_Var4;
  
  p_Var1 = (_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_> *)
           ExtAlloc_Malloc_4(0x3c);
  if (p_Var1 + 0x10 !=
      (_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_> *)0x0) {
    *(undefined2 *)(p_Var1 + 0x10) = *(undefined2 *)param_1;
    ppVar3 = param_1 + 2;
    p_Var4 = p_Var1 + 0x12;
    for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined4 *)p_Var4 = *(undefined4 *)ppVar3;
      ppVar3 = ppVar3 + 4;
      p_Var4 = p_Var4 + 4;
    }
    *(undefined2 *)p_Var4 = *(undefined2 *)ppVar3;
  }
  return p_Var1;
}




/* from: libgsclient:GSProxyConnection.cpp
   addr: 005B12D0 */

void __thiscall
_STL::
_Rb_tree<unsigned_short,struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>,struct__STL::less<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>_>
::M_insert(_Rb_tree<unsigned_short,struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>,struct__STL::less<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>_>
           *this,_Rb_tree_node_base *param_1,_Rb_tree_node_base *param_2,
          pair<unsigned_short_const_,struct_stModuleInfo> *param_3,_Rb_tree_node_base *param_4)

{
  pair<unsigned_short_const_,struct_stModuleInfo> *ppVar1;
  int iVar2;
  _Rb_tree_node_base *p_Var3;
  _Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_> *p_Var4;
  _Rb_tree_node_base *p_Var5;
  _Rb_tree_node_base *p_Var6;
  _Rb_tree_node_base **pp_Var7;
  int in_stack_00000014;
  
  if ((param_3 == *(pair<unsigned_short_const_,struct_stModuleInfo> **)this) ||
     ((in_stack_00000014 == 0 &&
      ((param_2 != (_Rb_tree_node_base *)0x0 || (*(ushort *)param_4 < *(ushort *)(param_3 + 0x10))))
      ))) {
    p_Var4 = M_create_node(this,(pair<unsigned_short_const_,struct_stModuleInfo> *)param_4);
    *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_> **)(param_3 + 8)
         = p_Var4;
    ppVar1 = *(pair<unsigned_short_const_,struct_stModuleInfo> **)this;
    if (param_3 == ppVar1) {
      *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_> **)(ppVar1 + 4)
           = p_Var4;
      *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_> **)
       (*(int *)this + 0xc) = p_Var4;
    }
    else if (param_3 == *(pair<unsigned_short_const_,struct_stModuleInfo> **)(ppVar1 + 8)) {
      *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_> **)(ppVar1 + 8)
           = p_Var4;
    }
  }
  else {
    p_Var4 = M_create_node(this,(pair<unsigned_short_const_,struct_stModuleInfo> *)param_4);
    *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_> **)
     (param_3 + 0xc) = p_Var4;
    if (param_3 == *(pair<unsigned_short_const_,struct_stModuleInfo> **)(*(int *)this + 0xc)) {
      *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_> **)
       (*(int *)this + 0xc) = p_Var4;
    }
  }
  *(pair<unsigned_short_const_,struct_stModuleInfo> **)((_Rb_tree_node_base *)p_Var4 + 4) = param_3;
  *(undefined4 *)((_Rb_tree_node_base *)p_Var4 + 8) = 0;
  *(undefined4 *)((_Rb_tree_node_base *)p_Var4 + 0xc) = 0;
  iVar2 = *(int *)this;
  *p_Var4 = (_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>)0x0;
  pp_Var7 = (_Rb_tree_node_base **)(iVar2 + 4);
  p_Var6 = (_Rb_tree_node_base *)p_Var4;
  if (p_Var4 != (_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_> *)
                *pp_Var7) {
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
LAB_005b137e:
          *p_Var3 = (_Rb_tree_node_base)0x1;
          *p_Var5 = (_Rb_tree_node_base)0x1;
          **(undefined1 **)(*(int *)(p_Var6 + 4) + 4) = 0;
          p_Var6 = *(_Rb_tree_node_base **)(*(int *)(p_Var6 + 4) + 4);
        }
      }
      else {
        if ((p_Var5 != (_Rb_tree_node_base *)0x0) && (*p_Var5 == (_Rb_tree_node_base)0x0))
        goto LAB_005b137e;
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
  *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_> **)param_1 = p_Var4
  ;
  return;
}




/* from: libgsclient:GSProxyConnection.cpp
   addr: 005B14A0 */

pair<unsigned_short_const_,struct_stModuleInfo> * __thiscall
_STL::
_Rb_tree<unsigned_short,struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>,struct__STL::less<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>_>
::insert_unique(_Rb_tree<unsigned_short,struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>,struct__STL::less<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>_>
                *this,pair<unsigned_short_const_,struct_stModuleInfo> *param_1)

{
  _Rb_tree_node_base *p_Var1;
  _Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_> *p_Var2;
  _Rb_tree_node_base *p_Var3;
  _Rb_tree_node_base *p_Var4;
  _Rb_tree_node_base *p_Var5;
  bool bVar6;
  pair<unsigned_short_const_,struct_stModuleInfo> *in_stack_00000008;
  
  bVar6 = true;
  p_Var1 = *(_Rb_tree_node_base **)this;
  p_Var4 = *(_Rb_tree_node_base **)(p_Var1 + 4);
  p_Var5 = p_Var1;
  if (p_Var4 != (_Rb_tree_node_base *)0x0) {
    do {
      p_Var5 = p_Var4;
      bVar6 = *(ushort *)in_stack_00000008 < *(ushort *)(p_Var5 + 0x10);
      if (bVar6) {
        p_Var4 = *(_Rb_tree_node_base **)(p_Var5 + 8);
      }
      else {
        p_Var4 = *(_Rb_tree_node_base **)(p_Var5 + 0xc);
      }
    } while (p_Var4 != (_Rb_tree_node_base *)0x0);
  }
  p_Var3 = p_Var5;
  if (bVar6) {
    if (p_Var5 == *(_Rb_tree_node_base **)(p_Var1 + 8)) {
      if (((p_Var5 == p_Var1) || (p_Var4 != (_Rb_tree_node_base *)0x0)) ||
         (*(ushort *)in_stack_00000008 < *(ushort *)(p_Var5 + 0x10))) {
        p_Var2 = M_create_node(this,in_stack_00000008);
        *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_> **)
         (p_Var5 + 8) = p_Var2;
        p_Var1 = *(_Rb_tree_node_base **)this;
        if (p_Var5 == p_Var1) {
          *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_> **)
           (p_Var1 + 4) = p_Var2;
          *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_> **)
           (*(int *)this + 0xc) = p_Var2;
        }
        else if (p_Var5 == *(_Rb_tree_node_base **)(p_Var1 + 8)) {
          *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_> **)
           (p_Var1 + 8) = p_Var2;
        }
      }
      else {
        p_Var2 = M_create_node(this,in_stack_00000008);
        *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_> **)
         (p_Var5 + 0xc) = p_Var2;
        if (p_Var5 == *(_Rb_tree_node_base **)(*(int *)this + 0xc)) {
          *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_> **)
           (*(int *)this + 0xc) = p_Var2;
        }
      }
      *(_Rb_tree_node_base **)((_Rb_tree_node_base *)p_Var2 + 4) = p_Var5;
      *(undefined4 *)((_Rb_tree_node_base *)p_Var2 + 8) = 0;
      *(undefined4 *)((_Rb_tree_node_base *)p_Var2 + 0xc) = 0;
      _Rb_global<bool>::Rebalance
                ((_Rb_tree_node_base *)p_Var2,(_Rb_tree_node_base **)(*(int *)this + 4));
      *(int *)(this + 4) = *(int *)(this + 4) + 1;
      *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_> **)param_1 =
           p_Var2;
      param_1[4] = (pair<unsigned_short_const_,struct_stModuleInfo>)0x1;
      return param_1;
    }
    p_Var3 = _Rb_global<bool>::M_decrement(p_Var5);
  }
  if (*(ushort *)(p_Var3 + 0x10) < *(ushort *)in_stack_00000008) {
    if (((p_Var5 == *(_Rb_tree_node_base **)this) || (p_Var4 != (_Rb_tree_node_base *)0x0)) ||
       (*(ushort *)in_stack_00000008 < *(ushort *)(p_Var5 + 0x10))) {
      p_Var2 = M_create_node(this,in_stack_00000008);
      *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_> **)(p_Var5 + 8)
           = p_Var2;
      p_Var1 = *(_Rb_tree_node_base **)this;
      if (p_Var5 == p_Var1) {
        *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_> **)
         (p_Var1 + 4) = p_Var2;
        *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_> **)
         (*(int *)this + 0xc) = p_Var2;
      }
      else if (p_Var5 == *(_Rb_tree_node_base **)(p_Var1 + 8)) {
        *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_> **)
         (p_Var1 + 8) = p_Var2;
      }
    }
    else {
      p_Var2 = M_create_node(this,in_stack_00000008);
      *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_> **)
       (p_Var5 + 0xc) = p_Var2;
      if (p_Var5 == *(_Rb_tree_node_base **)(*(int *)this + 0xc)) {
        *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_> **)
         (*(int *)this + 0xc) = p_Var2;
      }
    }
    *(_Rb_tree_node_base **)((_Rb_tree_node_base *)p_Var2 + 4) = p_Var5;
    *(undefined4 *)((_Rb_tree_node_base *)p_Var2 + 8) = 0;
    *(undefined4 *)((_Rb_tree_node_base *)p_Var2 + 0xc) = 0;
    _Rb_global<bool>::Rebalance
              ((_Rb_tree_node_base *)p_Var2,(_Rb_tree_node_base **)(*(int *)this + 4));
    *(int *)(this + 4) = *(int *)(this + 4) + 1;
    *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_> **)param_1 =
         p_Var2;
    param_1[4] = (pair<unsigned_short_const_,struct_stModuleInfo>)0x1;
    return param_1;
  }
  *(_Rb_tree_node_base **)param_1 = p_Var3;
  param_1[4] = (pair<unsigned_short_const_,struct_stModuleInfo>)0x0;
  return param_1;
}




/* from: libgsclient:GSProxyConnection.cpp
   addr: 005B1610 */

void __thiscall
_STL::
_Rb_tree<unsigned_short,struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>_>,struct__STL::less<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>_>_>
::M_insert(_Rb_tree<unsigned_short,struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>_>,struct__STL::less<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>_>_>
           *this,_Rb_tree_node_base *param_1,_Rb_tree_node_base *param_2,
          pair<unsigned_short_const_,struct_stProxyInfo> *param_3,_Rb_tree_node_base *param_4)

{
  pair<unsigned_short_const_,struct_stProxyInfo> *ppVar1;
  int iVar2;
  _Rb_tree_node_base *p_Var3;
  _Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>_> *p_Var4;
  _Rb_tree_node_base *p_Var5;
  _Rb_tree_node_base *p_Var6;
  _Rb_tree_node_base **pp_Var7;
  int in_stack_00000014;
  
  if ((param_3 == *(pair<unsigned_short_const_,struct_stProxyInfo> **)this) ||
     ((in_stack_00000014 == 0 &&
      ((param_2 != (_Rb_tree_node_base *)0x0 || (*(ushort *)param_4 < *(ushort *)(param_3 + 0x10))))
      ))) {
    p_Var4 = M_create_node(this,(pair<unsigned_short_const_,struct_stProxyInfo> *)param_4);
    *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>_> **)(param_3 + 8) =
         p_Var4;
    ppVar1 = *(pair<unsigned_short_const_,struct_stProxyInfo> **)this;
    if (param_3 == ppVar1) {
      *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>_> **)(ppVar1 + 4)
           = p_Var4;
      *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>_> **)
       (*(int *)this + 0xc) = p_Var4;
    }
    else if (param_3 == *(pair<unsigned_short_const_,struct_stProxyInfo> **)(ppVar1 + 8)) {
      *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>_> **)(ppVar1 + 8)
           = p_Var4;
    }
  }
  else {
    p_Var4 = M_create_node(this,(pair<unsigned_short_const_,struct_stProxyInfo> *)param_4);
    *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>_> **)(param_3 + 0xc)
         = p_Var4;
    if (param_3 == *(pair<unsigned_short_const_,struct_stProxyInfo> **)(*(int *)this + 0xc)) {
      *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>_> **)
       (*(int *)this + 0xc) = p_Var4;
    }
  }
  *(pair<unsigned_short_const_,struct_stProxyInfo> **)((_Rb_tree_node_base *)p_Var4 + 4) = param_3;
  *(undefined4 *)((_Rb_tree_node_base *)p_Var4 + 8) = 0;
  *(undefined4 *)((_Rb_tree_node_base *)p_Var4 + 0xc) = 0;
  iVar2 = *(int *)this;
  *p_Var4 = (_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>_>)0x0;
  pp_Var7 = (_Rb_tree_node_base **)(iVar2 + 4);
  p_Var6 = (_Rb_tree_node_base *)p_Var4;
  if (p_Var4 != (_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>_> *)
                *pp_Var7) {
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
LAB_005b16be:
          *p_Var3 = (_Rb_tree_node_base)0x1;
          *p_Var5 = (_Rb_tree_node_base)0x1;
          **(undefined1 **)(*(int *)(p_Var6 + 4) + 4) = 0;
          p_Var6 = *(_Rb_tree_node_base **)(*(int *)(p_Var6 + 4) + 4);
        }
      }
      else {
        if ((p_Var5 != (_Rb_tree_node_base *)0x0) && (*p_Var5 == (_Rb_tree_node_base)0x0))
        goto LAB_005b16be;
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
  *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>_> **)param_1 = p_Var4;
  return;
}




/* from: libgsclient:GSProxyConnection.cpp
   addr: 005B17E0 */

pair<unsigned_short_const_,struct_stProxyInfo> * __thiscall
_STL::
_Rb_tree<unsigned_short,struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>_>,struct__STL::less<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>_>_>
::insert_unique(_Rb_tree<unsigned_short,struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>_>,struct__STL::less<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>_>_>
                *this,pair<unsigned_short_const_,struct_stProxyInfo> *param_1)

{
  _Rb_tree_node_base *p_Var1;
  _Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>_> *p_Var2;
  _Rb_tree_node_base *p_Var3;
  _Rb_tree_node_base *p_Var4;
  _Rb_tree_node_base *p_Var5;
  bool bVar6;
  pair<unsigned_short_const_,struct_stProxyInfo> *in_stack_00000008;
  
  bVar6 = true;
  p_Var1 = *(_Rb_tree_node_base **)this;
  p_Var4 = *(_Rb_tree_node_base **)(p_Var1 + 4);
  p_Var5 = p_Var1;
  if (p_Var4 != (_Rb_tree_node_base *)0x0) {
    do {
      p_Var5 = p_Var4;
      bVar6 = *(ushort *)in_stack_00000008 < *(ushort *)(p_Var5 + 0x10);
      if (bVar6) {
        p_Var4 = *(_Rb_tree_node_base **)(p_Var5 + 8);
      }
      else {
        p_Var4 = *(_Rb_tree_node_base **)(p_Var5 + 0xc);
      }
    } while (p_Var4 != (_Rb_tree_node_base *)0x0);
  }
  p_Var3 = p_Var5;
  if (bVar6) {
    if (p_Var5 == *(_Rb_tree_node_base **)(p_Var1 + 8)) {
      if (((p_Var5 == p_Var1) || (p_Var4 != (_Rb_tree_node_base *)0x0)) ||
         (*(ushort *)in_stack_00000008 < *(ushort *)(p_Var5 + 0x10))) {
        p_Var2 = M_create_node(this,in_stack_00000008);
        *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>_> **)
         (p_Var5 + 8) = p_Var2;
        p_Var1 = *(_Rb_tree_node_base **)this;
        if (p_Var5 == p_Var1) {
          *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>_> **)
           (p_Var1 + 4) = p_Var2;
          *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>_> **)
           (*(int *)this + 0xc) = p_Var2;
        }
        else if (p_Var5 == *(_Rb_tree_node_base **)(p_Var1 + 8)) {
          *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>_> **)
           (p_Var1 + 8) = p_Var2;
        }
      }
      else {
        p_Var2 = M_create_node(this,in_stack_00000008);
        *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>_> **)
         (p_Var5 + 0xc) = p_Var2;
        if (p_Var5 == *(_Rb_tree_node_base **)(*(int *)this + 0xc)) {
          *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>_> **)
           (*(int *)this + 0xc) = p_Var2;
        }
      }
      *(_Rb_tree_node_base **)((_Rb_tree_node_base *)p_Var2 + 4) = p_Var5;
      *(undefined4 *)((_Rb_tree_node_base *)p_Var2 + 8) = 0;
      *(undefined4 *)((_Rb_tree_node_base *)p_Var2 + 0xc) = 0;
      _Rb_global<bool>::Rebalance
                ((_Rb_tree_node_base *)p_Var2,(_Rb_tree_node_base **)(*(int *)this + 4));
      *(int *)(this + 4) = *(int *)(this + 4) + 1;
      *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>_> **)param_1 =
           p_Var2;
      param_1[4] = (pair<unsigned_short_const_,struct_stProxyInfo>)0x1;
      return param_1;
    }
    p_Var3 = _Rb_global<bool>::M_decrement(p_Var5);
  }
  if (*(ushort *)(p_Var3 + 0x10) < *(ushort *)in_stack_00000008) {
    if (((p_Var5 == *(_Rb_tree_node_base **)this) || (p_Var4 != (_Rb_tree_node_base *)0x0)) ||
       (*(ushort *)in_stack_00000008 < *(ushort *)(p_Var5 + 0x10))) {
      p_Var2 = M_create_node(this,in_stack_00000008);
      *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>_> **)(p_Var5 + 8)
           = p_Var2;
      p_Var1 = *(_Rb_tree_node_base **)this;
      if (p_Var5 == p_Var1) {
        *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>_> **)
         (p_Var1 + 4) = p_Var2;
        *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>_> **)
         (*(int *)this + 0xc) = p_Var2;
      }
      else if (p_Var5 == *(_Rb_tree_node_base **)(p_Var1 + 8)) {
        *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>_> **)
         (p_Var1 + 8) = p_Var2;
      }
    }
    else {
      p_Var2 = M_create_node(this,in_stack_00000008);
      *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>_> **)
       (p_Var5 + 0xc) = p_Var2;
      if (p_Var5 == *(_Rb_tree_node_base **)(*(int *)this + 0xc)) {
        *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>_> **)
         (*(int *)this + 0xc) = p_Var2;
      }
    }
    *(_Rb_tree_node_base **)((_Rb_tree_node_base *)p_Var2 + 4) = p_Var5;
    *(undefined4 *)((_Rb_tree_node_base *)p_Var2 + 8) = 0;
    *(undefined4 *)((_Rb_tree_node_base *)p_Var2 + 0xc) = 0;
    _Rb_global<bool>::Rebalance
              ((_Rb_tree_node_base *)p_Var2,(_Rb_tree_node_base **)(*(int *)this + 4));
    *(int *)(this + 4) = *(int *)(this + 4) + 1;
    *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>_> **)param_1 =
         p_Var2;
    param_1[4] = (pair<unsigned_short_const_,struct_stProxyInfo>)0x1;
    return param_1;
  }
  *(_Rb_tree_node_base **)param_1 = p_Var3;
  param_1[4] = (pair<unsigned_short_const_,struct_stProxyInfo>)0x0;
  return param_1;
}




/* from: libgsclient:GSProxyConnection.cpp
   addr: 005B1950
   addr: 005B1950 */

_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_> * __thiscall
_STL::
_Rb_tree<unsigned_short,struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>,struct__STL::less<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>_>
::M_find(_Rb_tree<unsigned_short,struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>,struct__STL::less<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>_>
         *this,ushort *param_1)

{
  _Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_> *p_Var1;
  _Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_> *p_Var2;
  _Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_> *p_Var3;
  _Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_> *p_Var4;
  
  p_Var1 = *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_> **)this;
  p_Var4 = p_Var1;
  if (*(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_> **)(p_Var1 + 4)
      != (_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_> *)0x0) {
    p_Var2 = *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_> **)
              (p_Var1 + 4);
    do {
      if (*(ushort *)(p_Var2 + 0x10) < *param_1) {
        p_Var3 = *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_> **)
                  (p_Var2 + 0xc);
      }
      else {
        p_Var3 = *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_> **)
                  (p_Var2 + 8);
        p_Var4 = p_Var2;
      }
      p_Var2 = p_Var3;
    } while (p_Var3 != (_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>
                        *)0x0);
  }
  if ((p_Var4 != p_Var1) && (*(ushort *)(p_Var4 + 0x10) <= *param_1)) {
    p_Var1 = p_Var4;
  }
  return p_Var1;
}




/* from: libgsclient:GSProxyConnection.cpp
   addr: 005B1990 */

_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>_> * __thiscall
_STL::
_Rb_tree<unsigned_short,struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>_>,struct__STL::less<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>_>_>
::M_create_node(_Rb_tree<unsigned_short,struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>_>,struct__STL::less<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>_>_>
                *this,pair<unsigned_short_const_,struct_stProxyInfo> *param_1)

{
  _Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>_> *p_Var1;
  int iVar2;
  _Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>_> *p_Var3;
  _Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>_> *p_Var4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005cb951;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  p_Var1 = (_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>_> *)
           ExtAlloc_Malloc_4(0xb4);
  local_8 = 1;
  if (p_Var1 + 0x10 !=
      (_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>_> *)0x0) {
    *(undefined2 *)(p_Var1 + 0x10) = *(undefined2 *)param_1;
    p_Var4 = p_Var1 + 0x14;
    p_Var3 = (_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>_> *)param_1;
    for (iVar2 = 0x20; p_Var3 = p_Var3 + 4, iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined4 *)p_Var4 = *(undefined4 *)p_Var3;
      p_Var4 = p_Var4 + 4;
    }
    *p_Var4 = *p_Var3;
    *(undefined2 *)(p_Var1 + 0x96) = *(undefined2 *)(param_1 + 0x86);
    p_Var1[0x98] = *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stProxyInfo>_> *)
                    (param_1 + 0x88);
    *(undefined4 *)(p_Var1 + 0x9c) = *(undefined4 *)(param_1 + 0x8c);
    *(undefined1 **)(p_Var1 + 0xac) =
         &ExtAlloc::map<unsigned_short,struct_stModuleInfo,struct__STL::less<unsigned_short>_>::
          _vbtable_;
    _Rb_tree<unsigned_short,struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>,struct__STL::less<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>_>
    ::
    Rb_tree<unsigned_short,struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>,struct__STL::less<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>_>
              ((_Rb_tree<unsigned_short,struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>,struct__STL::less<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>_>
                *)(p_Var1 + 0xa0),
               (_Rb_tree<unsigned_short,struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>,struct__STL::less<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>_>
                *)(param_1 + 0x90));
    *(undefined2 *)(p_Var1 + 0xb0) = *(undefined2 *)(param_1 + 0xa0);
  }
  ExceptionList = local_10;
  return p_Var1;
}




/* from: libgsclient:GSProxyConnection.cpp
   addr: 005B1A80 */

_Rb_tree<unsigned_short,struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>,struct__STL::less<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>_>
* __thiscall
_STL::
_Rb_tree<unsigned_short,struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>,struct__STL::less<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>_>
::
Rb_tree<unsigned_short,struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>,struct__STL::less<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>_>
          (_Rb_tree<unsigned_short,struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>,struct__STL::less<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>_>
           *this,_Rb_tree<unsigned_short,struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>,struct__STL::less<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>_>
                 *param_1)

{
  int iVar1;
  _Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_> *p_Var2;
  int iVar3;
  undefined1 *puVar4;
  _Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_> *p_Var5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005cb968;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)this = 0;
  puVar4 = (undefined1 *)ExtAlloc_Malloc_4(0x3c);
  *(undefined1 **)this = puVar4;
  *(undefined4 *)(this + 4) = 0;
  local_4 = 0;
  this[8] = param_1[8];
  iVar1 = *(int *)(*(int *)param_1 + 4);
  *puVar4 = 0;
  if (iVar1 == 0) {
    *(undefined4 *)(*(int *)this + 4) = 0;
    *(int *)(*(int *)this + 8) = *(int *)this;
    *(int *)(*(int *)this + 0xc) = *(int *)this;
  }
  else {
    p_Var2 = *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_> **)this;
    p_Var5 = M_copy(this,*(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>
                           **)(*(int *)param_1 + 4),p_Var2);
    *(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_> **)(p_Var2 + 4) =
         p_Var5;
    iVar1 = *(int *)(*(int *)this + 4);
    for (iVar3 = *(int *)(iVar1 + 8); iVar3 != 0; iVar3 = *(int *)(iVar3 + 8)) {
      iVar1 = iVar3;
    }
    *(int *)(*(int *)this + 8) = iVar1;
    iVar1 = *(int *)(*(int *)this + 4);
    for (iVar3 = *(int *)(iVar1 + 0xc); iVar3 != 0; iVar3 = *(int *)(iVar3 + 0xc)) {
      iVar1 = iVar3;
    }
    *(int *)(*(int *)this + 0xc) = iVar1;
  }
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  ExceptionList = local_c;
  return this;
}

