
/* from: libgsconnect:TraceLog.cpp
   addr: 005C6EF0 */

uchar __thiscall
clTraceLog::WriteComments
          (clTraceLog *this,int param_1,char *param_2,char *param_3,char *param_4,char *param_5)

{
  char cVar1;
  uchar uVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  __false_type local_a4;
  __false_type local_a3;
  __false_type local_a2;
  __false_type local_a1;
  __false_type local_a0;
  __false_type local_9f;
  __false_type local_9e;
  __false_type local_9d;
  undefined4 local_9c [3];
  __false_type local_8d;
  char local_8c [128];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005cd00b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  _STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::
  basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>
            ((basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *)
             local_9c);
  local_4 = 0;
  if (param_1 < *(int *)(this + 0x118)) {
    local_4 = 0xffffffff;
    _STL::_String_base<char,class_ExtAlloc::Allocator<char>_>::
    ~_String_base<char,class_ExtAlloc::Allocator<char>_>
              ((_String_base<char,class_ExtAlloc::Allocator<char>_> *)local_9c);
    uVar2 = '\0';
  }
  else {
    if (*param_2 == '\0') {
      param_2 = param_3;
    }
    pcVar3 = GetDate(this,local_8c);
    uVar5 = 0xffffffff;
    pcVar6 = pcVar3;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    _STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::
    M_append_dispatch((basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>
                       *)local_9c,pcVar3,pcVar3 + (~uVar5 - 1),&local_8d);
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
                       *)local_9c,&s__,s_unknown_obj + ~uVar5 + 0xb,&local_a4);
    uVar5 = 0xffffffff;
    pcVar6 = &s__;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    local_9f = local_a4;
    _STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::append
              ((basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *)
               local_9c,&s__,(char *)(~uVar5 + 0x5fe823),(forward_iterator_tag *)&local_9f);
    uVar5 = 0xffffffff;
    pcVar6 = param_4;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    local_9e = local_a4;
    _STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::append
              ((basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *)
               local_9c,param_4,param_4 + (~uVar5 - 1),(forward_iterator_tag *)&local_9e);
    uVar5 = 0xffffffff;
    pcVar6 = &s____;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    local_a1 = local_a4;
    _STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::append
              ((basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *)
               local_9c,&s____,(char *)(~uVar5 + 0x6019bf),(forward_iterator_tag *)&local_a1);
    uVar5 = 0xffffffff;
    pcVar6 = param_2;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    local_a0 = local_a4;
    _STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::append
              ((basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *)
               local_9c,param_2,param_2 + (~uVar5 - 1),(forward_iterator_tag *)&local_a0);
    uVar5 = 0xffffffff;
    pcVar6 = &s____;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    local_9d = local_a4;
    _STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::append
              ((basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *)
               local_9c,&s____,(char *)(~uVar5 + 0x6019bf),(forward_iterator_tag *)&local_9d);
    uVar5 = 0xffffffff;
    pcVar6 = param_5;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    local_a3 = local_a4;
    _STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::append
              ((basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *)
               local_9c,param_5,param_5 + (~uVar5 - 1),(forward_iterator_tag *)&local_a3);
    uVar5 = 0xffffffff;
    pcVar6 = &s___;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    local_a2 = local_a4;
    _STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::append
              ((basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *)
               local_9c,&s___,s___AVclDataRef___005fe80c + ~uVar5 + 0xf,
               (forward_iterator_tag *)&local_a2);
    RotateLog(this);
    if (*(FILE **)(this + 0x120) != (FILE *)0x0) {
      iVar4 = fprintf(*(FILE **)(this + 0x120),s__s,local_9c[0]);
      if (iVar4 == 0) {
        OpenFile(this,'\0');
      }
      else {
        fflush(*(FILE **)(this + 0x120));
      }
    }
    if (this[0x124] != (clTraceLog)0x0) {
      printf(s__s,local_9c[0]);
    }
    local_4 = 0xffffffff;
    _STL::_String_base<char,class_ExtAlloc::Allocator<char>_>::
    ~_String_base<char,class_ExtAlloc::Allocator<char>_>
              ((_String_base<char,class_ExtAlloc::Allocator<char>_> *)local_9c);
    uVar2 = '\x01';
  }
  ExceptionList = local_c;
  return uVar2;
}




/* from: libgsconnect:TraceLog.cpp
   addr: 005C7190 */

char * __thiscall clTraceLog::GetDate(clTraceLog *this,char *param_1)

{
  tm *ptVar1;
  time_t tVar2;
  clTraceLog *local_4;
  
  local_4 = this;
  tVar2 = time((time_t *)0x0);
  local_4 = (clTraceLog *)tVar2;
  ptVar1 = gmtime((time_t *)&local_4);
  sprintf(param_1,s____2d___2d___2d____2d___2d___2d_,ptVar1->tm_mday,ptVar1->tm_mon + 1,
          ptVar1->tm_year + 0x76c,ptVar1->tm_hour,ptVar1->tm_min,ptVar1->tm_sec);
  return param_1;
}




/* from: libgsconnect:TraceLog.cpp
   addr: 005C71E0 */

void __thiscall clTraceLog::OpenFile(clTraceLog *this,uchar param_1)

{
  clTraceLog cVar1;
  clTraceLog *pcVar2;
  int iVar3;
  FILE *pFVar4;
  char *pcVar5;
  bool bVar6;
  
  if (*(FILE **)(this + 0x120) != (FILE *)0x0) {
    fclose(*(FILE **)(this + 0x120));
    *(undefined4 *)(this + 0x120) = 0;
  }
  pcVar5 = s_;
  pcVar2 = this + 4;
  do {
    cVar1 = *pcVar2;
    bVar6 = (byte)cVar1 < (byte)*pcVar5;
    if (cVar1 != (clTraceLog)*pcVar5) {
LAB_005c7235:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_005c723a;
    }
    if (cVar1 == (clTraceLog)0x0) break;
    cVar1 = pcVar2[1];
    bVar6 = (byte)cVar1 < (byte)((clTraceLog *)pcVar5)[1];
    if (cVar1 != ((clTraceLog *)pcVar5)[1]) goto LAB_005c7235;
    pcVar2 = pcVar2 + 2;
    pcVar5 = (char *)((clTraceLog *)pcVar5 + 2);
  } while (cVar1 != (clTraceLog)0x0);
  iVar3 = 0;
LAB_005c723a:
  if (iVar3 != 0) {
    if (param_1 == '\0') {
      pcVar5 = s_a;
    }
    else {
      if (param_1 != '\x01') {
        return;
      }
      pcVar5 = s_w;
    }
    pFVar4 = fopen((char *)(this + 4),pcVar5);
    *(FILE **)(this + 0x120) = pFVar4;
  }
  return;
}




/* from: libgsconnect:TraceLog.cpp
   addr: 005C7280 */

void __thiscall clTraceLog::RotateLog(clTraceLog *this)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  if (*(int *)(this + 0x104) < (int)tVar1) {
    OpenFile(this,'\0');
    tVar1 = time((time_t *)0x0);
    *(int *)(this + 0x104) = (int)tVar1 + 600;
  }
  return;
}

