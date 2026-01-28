
/* from: libgsutility:DataStr.cpp
   addr: 005968C0 */

void __thiscall clDataStr::Dump(clDataStr *this,clOutputBuffer *param_1,uint param_2)

{
  char cVar1;
  clOutputBuffer *pcVar2;
  uint uVar3;
  char *pcVar4;
  forward_iterator_tag local_20 [7];
  Allocator<class_CConnection*> local_19;
  char *local_18;
  char *local_14;
  _STLP_alloc_proxy<struct__STL::_List_node<class_CConnection*>*,struct__STL::_List_node<class_CConnection*>,class_ExtAlloc::Allocator<class_CConnection*>_>
  local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c8480;
  local_c = ExceptionList;
  local_4 = 0;
  local_20[0] = (forward_iterator_tag)0x20;
  local_18 = (char *)0x0;
  local_14 = (char *)0x0;
  ExceptionList = &local_c;
  _STL::
  _STLP_alloc_proxy<struct__STL::_List_node<class_CConnection*>*,struct__STL::_List_node<class_CConnection*>,class_ExtAlloc::Allocator<class_CConnection*>_>
  ::
  STLP_alloc_proxy<struct__STL::_List_node<class_CConnection*>*,struct__STL::_List_node<class_CConnection*>,class_ExtAlloc::Allocator<class_CConnection*>_>
            (local_10,&local_19,(_List_node<class_CConnection*> *)0x0);
  uVar3 = param_2;
  local_4._0_1_ = 1;
  _STL::_String_base<char,class_ExtAlloc::Allocator<char>_>::M_allocate_block
            ((_String_base<char,class_ExtAlloc::Allocator<char>_> *)&local_18,param_2 + 1);
  local_4._0_1_ = 2;
  local_14 = _STL::fill_n(local_18,uVar3,(char *)local_20);
  pcVar2 = param_1;
  *local_14 = '\0';
  local_4 = CONCAT31(local_4._1_3_,4);
  _STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::append
            ((basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *)
             param_1,local_18,local_14,(forward_iterator_tag *)&param_2);
  uVar3 = 0xffffffff;
  pcVar4 = s_String_>_;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  param_1 = (clOutputBuffer *)CONCAT31(param_1._1_3_,param_2._0_1_);
  _STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::append
            ((basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *)
             pcVar2,s_String_>_,(char *)(~uVar3 + 0x5fe86f),(forward_iterator_tag *)&param_1);
  pcVar2 = operator<<(pcVar2,this);
  local_20[0] = param_2._0_1_;
  uVar3 = 0xffffffff;
  pcVar4 = &s___;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  _STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::append
            ((basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *)
             pcVar2,&s___,(char *)(~uVar3 + 0x5fe86b),local_20);
  ExtAlloc_Free_4(local_18);
  ExceptionList = local_c;
  return;
}




/* from: libgsutility:DataStr.cpp
   addr: 005969F0 */

clOutputBuffer * operator<<(clOutputBuffer *param_1,clDataStr *param_2)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  char *pcVar4;
  
  pcVar2 = *(char **)(param_2 + 0xc);
  uVar3 = 0xffffffff;
  pcVar4 = pcVar2;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  _STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::append
            ((basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *)
             param_1,pcVar2,pcVar2 + (~uVar3 - 1),(forward_iterator_tag *)&param_2);
  return param_1;
}




/* from: libgsutility:DataStr.cpp
   addr: 00596A30 */

void __thiscall clDataStrRef::Dump(clDataStrRef *this,clOutputBuffer *param_1,uint param_2)

{
  char cVar1;
  clOutputBuffer *this_00;
  uint uVar2;
  char *pcVar3;
  char *pcVar4;
  forward_iterator_tag local_20 [6];
  forward_iterator_tag local_1a;
  Allocator<class_CConnection*> local_19;
  char *local_18;
  char *local_14;
  _STLP_alloc_proxy<struct__STL::_List_node<class_CConnection*>*,struct__STL::_List_node<class_CConnection*>,class_ExtAlloc::Allocator<class_CConnection*>_>
  local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c84b0;
  local_c = ExceptionList;
  local_4 = 0;
  local_20[0] = (forward_iterator_tag)0x20;
  local_18 = (char *)0x0;
  local_14 = (char *)0x0;
  ExceptionList = &local_c;
  _STL::
  _STLP_alloc_proxy<struct__STL::_List_node<class_CConnection*>*,struct__STL::_List_node<class_CConnection*>,class_ExtAlloc::Allocator<class_CConnection*>_>
  ::
  STLP_alloc_proxy<struct__STL::_List_node<class_CConnection*>*,struct__STL::_List_node<class_CConnection*>,class_ExtAlloc::Allocator<class_CConnection*>_>
            (local_10,&local_19,(_List_node<class_CConnection*> *)0x0);
  uVar2 = param_2;
  local_4._0_1_ = 1;
  _STL::_String_base<char,class_ExtAlloc::Allocator<char>_>::M_allocate_block
            ((_String_base<char,class_ExtAlloc::Allocator<char>_> *)&local_18,param_2 + 1);
  local_4._0_1_ = 2;
  local_14 = _STL::fill_n(local_18,uVar2,(char *)local_20);
  this_00 = param_1;
  *local_14 = '\0';
  local_4 = CONCAT31(local_4._1_3_,4);
  _STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::append
            ((basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *)
             param_1,local_18,local_14,(forward_iterator_tag *)&param_2);
  uVar2 = 0xffffffff;
  pcVar4 = s_StringRef_>_;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  param_1 = (clOutputBuffer *)CONCAT31(param_1._1_3_,param_2._0_1_);
  _STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::append
            ((basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *)
             this_00,s_StringRef_>_,s_String_>_ + ~uVar2 + 0xb,(forward_iterator_tag *)&param_1);
  pcVar4 = *(char **)(this + 0xc);
  local_20[0] = param_2._0_1_;
  uVar2 = 0xffffffff;
  pcVar3 = pcVar4;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  _STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::append
            ((basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *)
             this_00,pcVar4,pcVar4 + (~uVar2 - 1),local_20);
  local_1a = param_2._0_1_;
  uVar2 = 0xffffffff;
  pcVar4 = &s___;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  _STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::append
            ((basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *)
             this_00,&s___,(char *)(~uVar2 + 0x5fe86b),&local_1a);
  ExtAlloc_Free_4(local_18);
  ExceptionList = local_c;
  return;
}




/* from: libgsutility:DataStr.cpp
   addr: 00596B80
   addr: 00596B80 */

char * _STL::fill_n(char *param_1,uint param_2,char *param_3)

{
  if (param_2 != 0) {
    do {
      *param_1 = *param_3;
      param_1 = param_1 + 1;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
  }
  return param_1;
}

