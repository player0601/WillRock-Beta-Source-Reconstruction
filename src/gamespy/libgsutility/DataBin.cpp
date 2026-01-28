
/* from: libgsutility:DataBin.cpp
   addr: 00596320 */

void __thiscall clDataBin::operator=(clDataBin *this,vector<char> *param_1)

{
  vector<char,class_ExtAlloc::Allocator<char>_> *this_00;
  clDataBin *pcVar1;
  char *pcVar2;
  char *_Src;
  void *_Dst;
  uint uVar3;
  
  if (this == (clDataBin *)0x0) {
    pcVar1 = (clDataBin *)0x0;
  }
  else {
    pcVar1 = this + 0xc;
  }
  if ((param_1 != (vector<char> *)pcVar1) &&
     (this_00 = (vector<char,class_ExtAlloc::Allocator<char>_> *)(this + 0xc),
     param_1 != (vector<char> *)this_00)) {
    pcVar2 = *(char **)(param_1 + 4);
    _Src = *(char **)param_1;
    _Dst = *(void **)this_00;
    uVar3 = (int)pcVar2 - (int)_Src;
    if ((uint)(*(int *)(this + 0x14) - (int)_Dst) < uVar3) {
      pcVar2 = _STL::vector<char,class_ExtAlloc::Allocator<char>_>::M_allocate_and_copy
                         (this_00,uVar3,_Src,pcVar2);
      ExtAlloc_Free_4(*(undefined4 *)this_00);
      *(char **)this_00 = pcVar2;
      *(char **)(this + 0x14) = pcVar2 + uVar3;
      *(uint *)(this + 0x10) = *(int *)this_00 + uVar3;
      return;
    }
    if ((uint)(*(int *)(this + 0x10) - (int)_Dst) < uVar3) {
      if (_Src + (*(int *)(this + 0x10) - (int)_Dst) != _Src) {
        memmove(_Dst,_Src,(int)(_Src + (*(int *)(this + 0x10) - (int)_Dst)) - (int)_Src);
      }
      _Dst = *(void **)(this + 0x10);
      pcVar2 = *(char **)(param_1 + 4);
      _Src = (char *)((int)_Dst + (*(int *)param_1 - *(int *)this_00));
    }
    if (pcVar2 != _Src) {
      memmove(_Dst,_Src,(int)pcVar2 - (int)_Src);
    }
    *(uint *)(this + 0x10) = *(int *)this_00 + uVar3;
  }
  return;
}




/* from: libgsutility:DataBin.cpp
   addr: 005963D0 */

void __thiscall clDataBin::DumpStr(clDataBin *this,clOutputBuffer *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  clOutputBuffer *pcVar4;
  char *pcVar5;
  forward_iterator_tag local_29;
  forward_iterator_tag local_28;
  char local_27;
  short local_26;
  undefined4 local_24;
  char local_20 [32];
  
  pcVar4 = param_1;
  iVar2 = *(int *)(this + 0x10) - *(int *)(this + 0xc);
  if (iVar2 == 1) {
    local_28 = param_1._0_1_;
    _STL::copy_aux(*(void ***)(this + 0xc),(void **)((int)*(void ***)(this + 0xc) + 1),
                   (void **)&local_27,(__true_type *)&local_28);
    pcVar4 = param_1;
    uVar3 = 0xffffffff;
    pcVar5 = &s__b;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    _STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::
    M_append_dispatch((basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>
                       *)param_1,&s__b,(char *)(~uVar3 + 0x5fe83f),(__false_type *)&param_1);
    sprintf(local_20,s__d,(int)local_27);
    uVar3 = 0xffffffff;
    pcVar5 = local_20;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    _STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::
    M_append_dispatch((basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>
                       *)pcVar4,local_20,local_20 + (~uVar3 - 1),(__false_type *)&local_28);
  }
  else {
    if (iVar2 == 2) {
      _STL::copy_trivial(*(void **)(this + 0xc),(void *)((int)*(void **)(this + 0xc) + 2),&local_26)
      ;
      pcVar4 = param_1;
      uVar3 = 0xffffffff;
      pcVar5 = &s__b;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      _STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::
      M_append_dispatch((basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>
                         *)param_1,&s__b,(char *)(~uVar3 + 0x5fe83f),(__false_type *)&param_1);
      sprintf(local_20,s__d,(int)local_26);
      uVar3 = 0xffffffff;
      pcVar5 = local_20;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
    }
    else {
      if (iVar2 != 4) {
        local_29 = param_1._0_1_;
        uVar3 = 0xffffffff;
        pcVar5 = &s_____;
        do {
          if (uVar3 == 0) break;
          uVar3 = uVar3 - 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        _STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::
        append((basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *)
               param_1,&s_____,(char *)(~uVar3 + 0x5fe84f),&local_29);
        sprintf(local_20,s__u,*(int *)(this + 0x10) - *(int *)(this + 0xc));
        uVar3 = 0xffffffff;
        pcVar5 = local_20;
        do {
          if (uVar3 == 0) break;
          uVar3 = uVar3 - 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        _STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::
        append((basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *)
               pcVar4,local_20,local_20 + (~uVar3 - 1),(forward_iterator_tag *)&param_1);
        uVar3 = 0xffffffff;
        pcVar5 = &s_____;
        do {
          if (uVar3 == 0) break;
          uVar3 = uVar3 - 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        local_28 = param_1._0_1_;
        _STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::
        append((basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *)
               pcVar4,&s_____,(char *)(~uVar3 + 0x5fe843),&local_28);
        return;
      }
      _STL::copy_trivial(*(void **)(this + 0xc),(void *)((int)*(void **)(this + 0xc) + 4),&local_24)
      ;
      pcVar4 = param_1;
      uVar3 = 0xffffffff;
      pcVar5 = &s__b;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      _STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::
      M_append_dispatch((basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>
                         *)param_1,&s__b,(char *)(~uVar3 + 0x5fe83f),(__false_type *)&param_1);
      sprintf(local_20,s__d,local_24);
      uVar3 = 0xffffffff;
      pcVar5 = local_20;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
    }
    _STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::
    M_append_dispatch((basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>
                       *)pcVar4,local_20,local_20 + (~uVar3 - 1),(__false_type *)&local_28);
  }
  uVar3 = 0xffffffff;
  pcVar5 = &s__;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  _STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::
  M_append_dispatch((basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>
                     *)pcVar4,&s__,s_unknown_obj + ~uVar3 + 0xb,(__false_type *)&local_29);
  return;
}




/* from: libgsutility:DataBin.cpp
   addr: 00596650 */

void __thiscall clDataBin::DumpStr(clDataBin *this)

{
  void *pvVar1;
  int iVar2;
  char local_7;
  short local_6;
  undefined4 local_4;
  
  iVar2 = *(int *)(this + 0x10) - *(int *)(this + 0xc);
  if (iVar2 == 1) {
    pvVar1 = *(void **)(this + 0xc);
    if ((void *)((int)pvVar1 + 1) != pvVar1) {
      memmove(&local_7,pvVar1,((int)pvVar1 + 1) - (int)pvVar1);
    }
    printf(s__b_d_,(int)local_7);
    return;
  }
  if (iVar2 != 2) {
    if (iVar2 != 4) {
      printf(s______d____,*(int *)(this + 0x10) - *(int *)(this + 0xc));
      return;
    }
    pvVar1 = *(void **)(this + 0xc);
    if ((void *)((int)pvVar1 + 4) != pvVar1) {
      memmove(&local_4,pvVar1,((int)pvVar1 + 4) - (int)pvVar1);
    }
    printf(s__b_d_,local_4);
    return;
  }
  pvVar1 = *(void **)(this + 0xc);
  if ((void *)((int)pvVar1 + 2) != pvVar1) {
    memmove(&local_6,pvVar1,((int)pvVar1 + 2) - (int)pvVar1);
  }
  printf(s__b_d_,(int)local_6);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00596735) */
/* from: libgsutility:DataBin.cpp
   addr: 00596720 */

void __thiscall clDataBin::Copy(clDataBin *this,char *param_1,uint param_2)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  char *_Dst;
  void *pvVar4;
  char *pcVar5;
  char *pcVar6;
  uint *puVar7;
  uint local_8;
  char *local_4;
  
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(this + 0xc);
  pcVar6 = param_1 + param_2;
  local_4 = pcVar6;
  if (param_1 != pcVar6) {
    do {
      pcVar1 = *(char **)(this + 0x10);
      if (pcVar1 == *(char **)(this + 0x14)) {
        uVar3 = (int)pcVar1 - *(int *)(this + 0xc);
        param_2 = 1;
        local_8 = uVar3;
        puVar7 = &param_2;
        if (uVar3 != 0) {
          puVar7 = &local_8;
        }
        uVar2 = *puVar7;
        _Dst = (char *)ExtAlloc_Malloc_4(uVar2 + uVar3);
        pcVar6 = *(char **)(this + 0xc);
        pcVar5 = _Dst;
        if (pcVar1 != pcVar6) {
          pvVar4 = memmove(_Dst,pcVar6,(int)pcVar1 - (int)pcVar6);
          pcVar5 = (char *)((int)pvVar4 + ((int)pcVar1 - (int)pcVar6));
        }
        *pcVar5 = *param_1;
        ExtAlloc_Free_4(*(undefined4 *)(this + 0xc));
        *(char **)(this + 0xc) = _Dst;
        *(char **)(this + 0x10) = pcVar5 + 1;
        *(char **)(this + 0x14) = _Dst + uVar2 + uVar3;
        pcVar6 = local_4;
      }
      else {
        if (pcVar1 != (char *)0x0) {
          *pcVar1 = *param_1;
        }
        *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
      }
      param_1 = param_1 + 1;
    } while (param_1 != pcVar6);
  }
  return;
}




/* from: libgsutility:DataBin.cpp
   addr: 00596810 */

uchar __thiscall clDataBin::Copy(clDataBin *this,uchar *param_1,uint *param_2)

{
  void *_Src;
  uint uVar1;
  
  uVar1 = (**(code **)(*(int *)this + 0x14))();
  if (*param_2 < uVar1) {
    uVar1 = (**(code **)(*(int *)this + 0x14))();
    *param_2 = uVar1;
    return '\0';
  }
  _Src = *(void **)(this + 0xc);
  if (*(void **)(this + 0x10) != _Src) {
    memmove(param_1,_Src,(int)*(void **)(this + 0x10) - (int)_Src);
  }
  uVar1 = (**(code **)(*(int *)this + 0x14))();
  *param_2 = uVar1;
  return '\x01';
}




/* from: libgsutility:DataBin.cpp
   addr: 00596860 */

char * __thiscall
_STL::vector<char,class_ExtAlloc::Allocator<char>_>::M_allocate_and_copy
          (vector<char,class_ExtAlloc::Allocator<char>_> *this,uint param_1,char *param_2,
          char *param_3)

{
  char *_Dst;
  
  _Dst = (char *)ExtAlloc_Malloc_4(param_1);
  if (param_3 != param_2) {
    memmove(_Dst,param_2,(int)param_3 - (int)param_2);
  }
  return _Dst;
}




/* from: libgsutility:DataBin.cpp
   addr: 00596890
   addr: 00596890
   addr: 00596890 */

void ** _STL::copy_aux(void **param_1,void **param_2,void **param_3,__true_type *param_4)

{
  void *pvVar1;
  
  if (param_2 == param_1) {
    return param_3;
  }
  pvVar1 = memmove(param_3,param_1,(int)param_2 - (int)param_1);
  return (void **)((int)pvVar1 + ((int)param_2 - (int)param_1));
}

