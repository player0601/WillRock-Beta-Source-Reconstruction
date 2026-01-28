
/* from: libgsutility:DataLong.cpp
   addr: 00596BA0 */

void __thiscall clDataLong::Dump(clDataLong *this,clOutputBuffer *param_1,uint param_2)

{
  char cVar1;
  clOutputBuffer *this_00;
  uint uVar2;
  char *pcVar3;
  forward_iterator_tag local_40 [6];
  forward_iterator_tag local_3a;
  Allocator<class_CConnection*> local_39;
  char *local_38;
  char *local_34;
  _STLP_alloc_proxy<struct__STL::_List_node<class_CConnection*>*,struct__STL::_List_node<class_CConnection*>,class_ExtAlloc::Allocator<class_CConnection*>_>
  local_30 [3];
  char acStack_2d [33];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c84e0;
  local_c = ExceptionList;
  local_4 = 0;
  local_40[0] = (forward_iterator_tag)0x20;
  local_38 = (char *)0x0;
  local_34 = (char *)0x0;
  ExceptionList = &local_c;
  _STL::
  _STLP_alloc_proxy<struct__STL::_List_node<class_CConnection*>*,struct__STL::_List_node<class_CConnection*>,class_ExtAlloc::Allocator<class_CConnection*>_>
  ::
  STLP_alloc_proxy<struct__STL::_List_node<class_CConnection*>*,struct__STL::_List_node<class_CConnection*>,class_ExtAlloc::Allocator<class_CConnection*>_>
            (local_30,&local_39,(_List_node<class_CConnection*> *)0x0);
  uVar2 = param_2;
  local_4._0_1_ = 1;
  _STL::_String_base<char,class_ExtAlloc::Allocator<char>_>::M_allocate_block
            ((_String_base<char,class_ExtAlloc::Allocator<char>_> *)&local_38,param_2 + 1);
  local_4._0_1_ = 2;
  local_34 = _STL::fill_n(local_38,uVar2,(char *)local_40);
  this_00 = param_1;
  *local_34 = '\0';
  local_4 = CONCAT31(local_4._1_3_,4);
  _STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::append
            ((basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *)
             param_1,local_38,local_34,(forward_iterator_tag *)&param_2);
  uVar2 = 0xffffffff;
  pcVar3 = &s_Long_>_;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  param_1 = (clOutputBuffer *)CONCAT31(param_1._1_3_,param_2._0_1_);
  _STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::append
            ((basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *)
             this_00,&s_Long_>_,s_StringRef_>_ + ~uVar2 + 0xf,(forward_iterator_tag *)&param_1);
  sprintf(acStack_2d + 1,s__d,*(undefined4 *)(this + 0x10));
  local_40[0] = param_2._0_1_;
  pcVar3 = acStack_2d;
  uVar2 = 0xffffffff;
  do {
    pcVar3 = pcVar3 + 1;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
  } while (*pcVar3 != '\0');
  _STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::append
            ((basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *)
             this_00,acStack_2d + 1,acStack_2d + ~uVar2,local_40);
  local_3a = param_2._0_1_;
  uVar2 = 0xffffffff;
  pcVar3 = &s___;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  _STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::append
            ((basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *)
             this_00,&s___,(char *)(~uVar2 + 0x5fe86b),&local_3a);
  ExtAlloc_Free_4(local_38);
  ExceptionList = local_c;
  return;
}




/* from: libgsutility:DataLong.cpp
   addr: 00596D10 */

void __thiscall clDataLong::AddNetValue(clDataLong *this,int param_1)

{
  u_long uVar1;
  
  uVar1 = ntohl(param_1);
  *(int *)(this + 0xc) = param_1;
  *(u_long *)(this + 0x10) = uVar1;
  return;
}

