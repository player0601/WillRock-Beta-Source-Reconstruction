
/* from: libgsutility:DataList_.cpp
   addr: 00593DD0 */

clDataList * __thiscall clDataList::clDataList(clDataList *this,clDataList *param_1)

{
  clDataList *pcVar1;
  vector<char> *this_00;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  clData *pcVar5;
  int *piVar6;
  clDataList *in_stack_00000008;
  __false_type local_21;
  uint local_20;
  clData *local_1c;
  clDataList *local_18;
  clData *local_14;
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c800d;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (in_stack_00000008 != (clDataList *)0x0) {
    ExceptionList = &local_c;
    *(undefined4 **)(this + 4) = &_vbtable__for__clData__;
    *(undefined8 **)(this + 0x14) = &_vbtable__for__clPointerList<class_clData*>__;
  }
  local_20 = (uint)(in_stack_00000008 != (clDataList *)0x0);
  *(undefined ***)this = &clData::_vftable_;
  *(undefined4 *)(this + 8) = 3;
  pcVar1 = this + 0xc;
  local_4 = 1;
  in_stack_00000008 = pcVar1;
  local_18 = this;
  ExtAlloc::list<class_clData*>::list<class_clData*>((list<class_clData*> *)(this + 0x10));
  *(undefined ***)pcVar1 = &clPointerList<class_clData*>::_vftable_;
  *(undefined ***)this = &_vftable__for__clData__;
  *(undefined ***)pcVar1 = &_vftable__for__clPointerList<class_clData*>__;
  local_1c = (clData *)0x0;
  local_4 = 3;
  piVar6 = (int *)**(int **)(param_1 + 0x10);
  if (piVar6 != *(int **)(param_1 + 0x10)) {
    do {
      switch(*(undefined4 *)(piVar6[2] + 8)) {
      case 1:
        pcVar5 = (clData *)ExtAlloc_Malloc_4();
        local_14 = pcVar5;
        if (pcVar5 == (clData *)0x0) {
LAB_0059407e:
          local_4 = CONCAT31(local_4._1_3_,3);
          local_1c = (clData *)0x0;
        }
        else {
          iVar3 = piVar6[2];
          local_20 = local_20 | 8;
          *(undefined1 **)(pcVar5 + 4) = &clDataStr::_vbtable_;
          local_4 = CONCAT31(local_4._1_3_,5);
          clData::clData(pcVar5,1);
          local_4 = 6;
          _STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::
          basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>
                    ((basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>
                      *)(pcVar5 + 0xc));
          local_4._0_1_ = 7;
          *(undefined ***)pcVar5 = &clDataStr::_vftable_;
          if (iVar3 == 0) {
            puVar4 = (undefined4 *)0x0;
          }
          else {
            puVar4 = (undefined4 *)(iVar3 + 0xc);
          }
          _STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::
          M_append_dispatch((basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>
                             *)(pcVar5 + 0xc),(char *)*puVar4,(char *)puVar4[1],
                            (__false_type *)&stack0x00000008);
          local_4 = CONCAT31(local_4._1_3_,3);
          this = local_18;
          local_1c = pcVar5;
        }
        break;
      case 2:
        pcVar5 = (clData *)ExtAlloc_Malloc_4();
        local_14 = pcVar5;
        if (pcVar5 == (clData *)0x0) goto LAB_0059407e;
        iVar3 = piVar6[2];
        local_20 = local_20 | 0x10;
        *(undefined4 **)(pcVar5 + 4) = &clDataBin::_vbtable__for__clData__;
        *(undefined8 **)(pcVar5 + 0x18) = &clDataBin::_vbtable__for__ExtAlloc__vector<char>__;
        local_4 = CONCAT31(local_4._1_3_,9);
        clData::clData(pcVar5,2);
        this_00 = (vector<char> *)(pcVar5 + 0xc);
        local_4 = 10;
        ExtAlloc::vector<char>::vector<char>(this_00);
        *(undefined ***)pcVar5 = &clDataBin::_vftable_;
        local_4._0_1_ = 0xb;
        _STL::vector<char,class_ExtAlloc::Allocator<char>_>::M_insert_dispatch
                  ((vector<char,class_ExtAlloc::Allocator<char>_> *)this_00,*(char **)this_00,
                   *(char **)(iVar3 + 0xc),*(char **)(iVar3 + 0x10),&local_21);
        local_4 = CONCAT31(local_4._1_3_,3);
        this = local_18;
        local_1c = pcVar5;
        break;
      case 3:
        local_14 = (clData *)ExtAlloc_Malloc_4();
        local_4._0_1_ = 0xc;
        if (local_14 == (clData *)0x0) {
          local_1c = (clData *)0x0;
          local_4 = CONCAT31(local_4._1_3_,3);
        }
        else {
          local_1c = (clData *)clDataList((clDataList *)local_14,(clDataList *)piVar6[2]);
          local_4 = CONCAT31(local_4._1_3_,3);
        }
        break;
      case 4:
        pcVar5 = (clData *)ExtAlloc_Malloc_4();
        local_14 = pcVar5;
        if (pcVar5 == (clData *)0x0) goto LAB_0059407e;
        iVar3 = piVar6[2];
        local_20 = local_20 | 0x20;
        *(undefined1 **)(pcVar5 + 4) = &clDataLong::_vbtable_;
        local_4 = CONCAT31(local_4._1_3_,0xe);
        clData::clData(pcVar5,4);
        *(undefined ***)pcVar5 = &clDataLong::_vftable_;
        *(undefined4 *)(pcVar5 + 0x10) = *(undefined4 *)(iVar3 + 0x10);
        *(undefined4 *)(pcVar5 + 0xc) = *(undefined4 *)(iVar3 + 0xc);
        local_4 = 3;
        local_1c = pcVar5;
        break;
      case 5:
        pcVar5 = (clData *)ExtAlloc_Malloc_4();
        local_14 = pcVar5;
        if (pcVar5 == (clData *)0x0) goto LAB_0059407e;
        iVar3 = piVar6[2];
        local_20 = local_20 | 0x40;
        *(undefined1 **)(pcVar5 + 4) = &clDataStrRef::_vbtable_;
        local_4 = CONCAT31(local_4._1_3_,0x10);
        clData::clData(pcVar5,5);
        uVar2 = *(undefined4 *)(iVar3 + 0xc);
        *(undefined ***)pcVar5 = &clDataStrRef::_vftable_;
        *(undefined4 *)(pcVar5 + 0xc) = uVar2;
        local_4 = 3;
        local_1c = pcVar5;
        break;
      case 6:
        local_1c = (clData *)ExtAlloc_Malloc_4();
        if (local_1c == (clData *)0x0) {
          local_1c = (clData *)0x0;
        }
        else {
          iVar3 = piVar6[2];
          local_20 = local_20 | 0x80;
          *(undefined1 **)(local_1c + 4) = &clDataRef::_vbtable_;
          *(undefined4 *)(local_1c + 8) = 6;
          *(undefined ***)local_1c = &clDataRef::_vftable_;
          *(undefined4 *)(local_1c + 0xc) = *(undefined4 *)(iVar3 + 0xc);
        }
      }
      if (local_1c != (clData *)0x0) {
        _STL::list<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_>::end
                  ((list<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_> *)
                   (this + 0x10));
        _STL::list<int,class_ExtAlloc::Allocator<int>_>::insert
                  ((list<int,class_ExtAlloc::Allocator<int>_> *)(this + 0x10),local_10);
      }
      piVar6 = (int *)*piVar6;
    } while (piVar6 != (int *)*(int *)(param_1 + 0x10));
  }
  ExceptionList = local_c;
  return this;
}




/* from: libgsutility:DataList_.cpp
   addr: 00594130 */

void __thiscall clDataList::operator=(clDataList *this,clDataList *param_1)

{
  vector<char> *this_00;
  list<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_> *this_01;
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  clData *pcVar4;
  int *piVar5;
  __false_type _Stack_22;
  __false_type _Stack_21;
  uint local_20;
  clData *local_1c;
  clDataList *local_18;
  clData *pcStack_14;
  undefined1 auStack_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_005c80e0;
  local_c = ExceptionList;
  local_20 = 0;
  local_1c = (clData *)0x0;
  piVar5 = (int *)**(int **)(param_1 + 0x10);
  if ((param_1 != this) &&
     (ExceptionList = &local_c, local_18 = this, (**(code **)(*(int *)(this + 0xc) + 4))(),
     piVar5 != *(int **)(param_1 + 0x10))) {
    do {
      switch(*(undefined4 *)(piVar5[2] + 8)) {
      case 1:
        pcVar4 = (clData *)ExtAlloc_Malloc_4();
        pcStack_14 = pcVar4;
        if (pcVar4 == (clData *)0x0) {
LAB_0059439d:
          uStack_4 = 0xffffffff;
          local_1c = (clData *)0x0;
        }
        else {
          iVar2 = piVar5[2];
          local_20 = local_20 | 1;
          *(undefined1 **)(pcVar4 + 4) = &clDataStr::_vbtable_;
          uStack_4 = 1;
          clData::clData(pcVar4,1);
          uStack_4 = 2;
          _STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::
          basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>
                    ((basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>
                      *)(pcVar4 + 0xc));
          uStack_4 = CONCAT31(uStack_4._1_3_,3);
          *(undefined ***)pcVar4 = &clDataStr::_vftable_;
          if (iVar2 == 0) {
            puVar3 = (undefined4 *)0x0;
          }
          else {
            puVar3 = (undefined4 *)(iVar2 + 0xc);
          }
          _STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::
          M_append_dispatch((basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>
                             *)(pcVar4 + 0xc),(char *)*puVar3,(char *)puVar3[1],&_Stack_22);
          uStack_4 = 0xffffffff;
          local_1c = pcVar4;
        }
        break;
      case 2:
        pcVar4 = (clData *)ExtAlloc_Malloc_4();
        pcStack_14 = pcVar4;
        if (pcVar4 == (clData *)0x0) goto LAB_0059439d;
        iVar2 = piVar5[2];
        local_20 = local_20 | 2;
        *(undefined4 **)(pcVar4 + 4) = &clDataBin::_vbtable__for__clData__;
        *(undefined8 **)(pcVar4 + 0x18) = &clDataBin::_vbtable__for__ExtAlloc__vector<char>__;
        uStack_4 = 5;
        clData::clData(pcVar4,2);
        this_00 = (vector<char> *)(pcVar4 + 0xc);
        uStack_4 = 6;
        ExtAlloc::vector<char>::vector<char>(this_00);
        *(undefined ***)pcVar4 = &clDataBin::_vftable_;
        uStack_4 = CONCAT31(uStack_4._1_3_,7);
        _STL::vector<char,class_ExtAlloc::Allocator<char>_>::M_insert_dispatch
                  ((vector<char,class_ExtAlloc::Allocator<char>_> *)this_00,*(char **)this_00,
                   *(char **)(iVar2 + 0xc),*(char **)(iVar2 + 0x10),&_Stack_21);
        uStack_4 = 0xffffffff;
        local_1c = pcVar4;
        break;
      case 3:
        pcStack_14 = (clData *)ExtAlloc_Malloc_4();
        uStack_4 = 8;
        if (pcStack_14 == (clData *)0x0) {
          local_1c = (clData *)0x0;
          uStack_4 = 0xffffffff;
        }
        else {
          local_1c = (clData *)clDataList((clDataList *)pcStack_14,(clDataList *)piVar5[2]);
          uStack_4 = 0xffffffff;
        }
        break;
      case 4:
        pcVar4 = (clData *)ExtAlloc_Malloc_4();
        pcStack_14 = pcVar4;
        if (pcVar4 == (clData *)0x0) goto LAB_0059439d;
        iVar2 = piVar5[2];
        local_20 = local_20 | 4;
        *(undefined1 **)(pcVar4 + 4) = &clDataLong::_vbtable_;
        uStack_4 = 10;
        clData::clData(pcVar4,4);
        *(undefined ***)pcVar4 = &clDataLong::_vftable_;
        *(undefined4 *)(pcVar4 + 0x10) = *(undefined4 *)(iVar2 + 0x10);
        *(undefined4 *)(pcVar4 + 0xc) = *(undefined4 *)(iVar2 + 0xc);
        uStack_4 = 0xffffffff;
        local_1c = pcVar4;
        break;
      case 5:
        pcVar4 = (clData *)ExtAlloc_Malloc_4();
        pcStack_14 = pcVar4;
        if (pcVar4 == (clData *)0x0) goto LAB_0059439d;
        iVar2 = piVar5[2];
        local_20 = local_20 | 8;
        *(undefined1 **)(pcVar4 + 4) = &clDataStrRef::_vbtable_;
        uStack_4 = 0xc;
        clData::clData(pcVar4,5);
        uVar1 = *(undefined4 *)(iVar2 + 0xc);
        *(undefined ***)pcVar4 = &clDataStrRef::_vftable_;
        *(undefined4 *)(pcVar4 + 0xc) = uVar1;
        uStack_4 = 0xffffffff;
        local_1c = pcVar4;
        break;
      case 6:
        local_1c = (clData *)ExtAlloc_Malloc_4();
        if (local_1c == (clData *)0x0) {
          local_1c = (clData *)0x0;
        }
        else {
          iVar2 = piVar5[2];
          local_20 = local_20 | 0x10;
          *(undefined1 **)(local_1c + 4) = &clDataRef::_vbtable_;
          *(undefined4 *)(local_1c + 8) = 6;
          *(undefined ***)local_1c = &clDataRef::_vftable_;
          *(undefined4 *)(local_1c + 0xc) = *(undefined4 *)(iVar2 + 0xc);
        }
      }
      if (local_1c != (clData *)0x0) {
        this_01 = (list<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_> *)
                  (local_18 + 0x10);
        _STL::list<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_>::end(this_01);
        _STL::list<int,class_ExtAlloc::Allocator<int>_>::insert
                  ((list<int,class_ExtAlloc::Allocator<int>_> *)this_01,auStack_10);
      }
      piVar5 = (int *)*piVar5;
      local_1c = (clData *)0x0;
    } while (piVar5 != (int *)*(int *)(param_1 + 0x10));
  }
  ExceptionList = local_c;
  return;
}




/* from: libgsutility:DataList_.cpp
   addr: 00594460 */

void __thiscall clDataList::DumpAll(clDataList *this,clOutputBuffer *param_1,uint param_2)

{
  int iVar1;
  char cVar2;
  clOutputBuffer *this_00;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  forward_iterator_tag local_20 [7];
  Allocator<char> local_19;
  char *local_18;
  char *local_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  uVar3 = param_2;
  puStack_8 = &LAB_005c8108;
  pvStack_c = ExceptionList;
  local_4 = 0;
  local_20[0] = (forward_iterator_tag)0x20;
  ExceptionList = &pvStack_c;
  _STL::_String_base<char,class_ExtAlloc::Allocator<char>_>::
  String_base<char,class_ExtAlloc::Allocator<char>_>
            ((_String_base<char,class_ExtAlloc::Allocator<char>_> *)&local_18,&local_19,param_2 + 1)
  ;
  local_4._0_1_ = 1;
  local_14 = _STL::fill_n(local_18,uVar3,(char *)local_20);
  this_00 = param_1;
  *local_14 = '\0';
  piVar4 = (int *)**(int **)(this + 0x10);
  local_20[0] = param_2._0_1_;
  local_4 = CONCAT31(local_4._1_3_,3);
  _STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::append
            ((basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *)
             param_1,local_18,local_14,local_20);
  param_1 = (clOutputBuffer *)CONCAT31(param_1._1_3_,param_2._0_1_);
  uVar3 = 0xffffffff;
  pcVar5 = &s___;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar2 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar2 != '\0');
  _STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::append
            ((basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *)
             this_00,&s___,(char *)(~uVar3 + 0x5fe81f),(forward_iterator_tag *)&param_1);
  if (piVar4 != *(int **)(this + 0x10)) {
    iVar1 = param_2 + 2;
    do {
      (**(code **)(*(int *)piVar4[2] + 8))(this_00,iVar1);
      piVar4 = (int *)*piVar4;
    } while (piVar4 != (int *)*(int *)(this + 0x10));
  }
  _STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::append
            ((basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *)
             this_00,local_18,local_14,(forward_iterator_tag *)&param_2);
  uVar3 = 0xffffffff;
  pcVar5 = &s___;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar2 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar2 != '\0');
  param_1 = (clOutputBuffer *)CONCAT31(param_1._1_3_,param_2._0_1_);
  _STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::append
            ((basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *)
             this_00,&s___,s___AVclDataRef___005fe80c + ~uVar3 + 0xf,
             (forward_iterator_tag *)&param_1);
  ExtAlloc_Free_4(local_18);
  ExceptionList = pvStack_c;
  return;
}




/* from: libgsutility:DataList_.cpp
   addr: 005945B0 */

void __thiscall clDataList::Dump(clDataList *this,clOutputBuffer *param_1,uint param_2)

{
  char cVar1;
  clOutputBuffer *this_00;
  uint uVar2;
  int *piVar3;
  char *pcVar4;
  forward_iterator_tag local_20 [7];
  Allocator<char> local_19;
  char *local_18;
  char *local_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  uVar2 = param_2;
  puStack_8 = &LAB_005c8138;
  pvStack_c = ExceptionList;
  local_4 = 0;
  local_20[0] = (forward_iterator_tag)0x20;
  ExceptionList = &pvStack_c;
  _STL::_String_base<char,class_ExtAlloc::Allocator<char>_>::
  String_base<char,class_ExtAlloc::Allocator<char>_>
            ((_String_base<char,class_ExtAlloc::Allocator<char>_> *)&local_18,&local_19,param_2 + 1)
  ;
  local_4._0_1_ = 1;
  local_14 = _STL::fill_n(local_18,uVar2,(char *)local_20);
  this_00 = param_1;
  *local_14 = '\0';
  piVar3 = (int *)**(int **)(this + 0x10);
  local_20[0] = param_2._0_1_;
  local_4 = CONCAT31(local_4._1_3_,3);
  _STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::append
            ((basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *)
             param_1,local_18,local_14,local_20);
  uVar2 = 0xffffffff;
  pcVar4 = &s___;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  _STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::
  M_append_dispatch((basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>
                     *)this_00,&s___,(char *)(~uVar2 + 0x5fe81f),(__false_type *)&param_1);
  if (piVar3 != *(int **)(this + 0x10)) {
    do {
      if (((int *)piVar3[2])[2] != 3) {
        (**(code **)(*(int *)piVar3[2] + 4))(this_00,param_2 + 2);
      }
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)*(int *)(this + 0x10));
  }
  _STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::append
            ((basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *)
             this_00,local_18,local_14,(forward_iterator_tag *)&param_2);
  uVar2 = 0xffffffff;
  pcVar4 = &s___;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  param_1 = (clOutputBuffer *)CONCAT31(param_1._1_3_,param_2._0_1_);
  _STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::append
            ((basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *)
             this_00,&s___,s___AVclDataRef___005fe80c + ~uVar2 + 0xf,
             (forward_iterator_tag *)&param_1);
  ExtAlloc_Free_4(local_18);
  ExceptionList = pvStack_c;
  return;
}




/* from: libgsutility:DataList_.cpp
   addr: 00594700 */

void __thiscall clDataList::DumpStr(clDataList *this,clOutputBuffer *param_1)

{
  clOutputBuffer *pcVar1;
  int iVar2;
  clOutputBuffer *this_00;
  clOutputBuffer **ppcVar3;
  int *piVar4;
  clDataList *local_4;
  
  this_00 = param_1;
  piVar4 = (int *)**(int **)(this + 0x10);
  pcVar1 = param_1 + 4;
  local_4 = this;
  if (*(int *)pcVar1 + 1 == *(int *)(param_1 + 8)) {
    iVar2 = *(int *)param_1;
    param_1 = (clOutputBuffer *)0x1;
    local_4 = (clDataList *)(*(int *)pcVar1 - iVar2);
    ppcVar3 = &param_1;
    if (local_4 != (clDataList *)0x0) {
      ppcVar3 = (clOutputBuffer **)&local_4;
    }
    _STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::reserve
              ((basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *)
               this_00,(uint)(*ppcVar3 + (int)local_4));
  }
  *(undefined1 *)(*(int *)(this_00 + 4) + 1) = 0;
  **(undefined1 **)(this_00 + 4) = 0x5b;
  *(int *)(this_00 + 4) = *(int *)(this_00 + 4) + 1;
  if (piVar4 != *(int **)(this + 0x10)) {
    do {
      (**(code **)(*(int *)piVar4[2] + 0xc))(this_00);
      piVar4 = (int *)*piVar4;
    } while (piVar4 != (int *)*(int *)(this + 0x10));
  }
  if (*(int *)(this_00 + 4) + 1 == *(int *)(this_00 + 8)) {
    param_1 = (clOutputBuffer *)0x1;
    local_4 = (clDataList *)(*(int *)(this_00 + 4) - *(int *)this_00);
    ppcVar3 = &param_1;
    if (local_4 != (clDataList *)0x0) {
      ppcVar3 = (clOutputBuffer **)&local_4;
    }
    _STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::reserve
              ((basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *)
               this_00,(uint)(*ppcVar3 + (int)local_4));
  }
  *(undefined1 *)(*(int *)(this_00 + 4) + 1) = 0;
  **(undefined1 **)(this_00 + 4) = 0x5d;
  *(int *)(this_00 + 4) = *(int *)(this_00 + 4) + 1;
  return;
}




/* from: libgsutility:DataList_.cpp
   addr: 005947D0 */

void __thiscall clDataList::DumpStr(clDataList *this)

{
  int *piVar1;
  
  piVar1 = (int *)**(int **)(this + 0x10);
  printf(&s__);
  if (piVar1 != *(int **)(this + 0x10)) {
    do {
      (**(code **)(*(int *)piVar1[2] + 0x10))();
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)*(int *)(this + 0x10));
  }
  printf(s__);
  return;
}




/* from: libgsutility:DataList_.cpp
   addr: 00594810 */

uint __thiscall clDataList::Size(clDataList *this)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  
  uVar2 = 0;
  piVar3 = (int *)**(int **)(this + 0x10);
  if (piVar3 != *(int **)(this + 0x10)) {
    do {
      iVar1 = (**(code **)(*(int *)piVar3[2] + 0x14))();
      piVar3 = (int *)*piVar3;
      uVar2 = uVar2 + iVar1;
    } while (piVar3 != (int *)*(int *)(this + 0x10));
  }
  return uVar2;
}




/* from: libgsutility:DataList_.cpp
   addr: 00594840 */

uint __thiscall clDataList::NbElements(clDataList *this)

{
  undefined4 *puVar1;
  uint uVar2;
  
  uVar2 = 0;
  for (puVar1 = (undefined4 *)**(undefined4 **)(this + 0x10);
      puVar1 != *(undefined4 **)(this + 0x10); puVar1 = (undefined4 *)*puVar1) {
    uVar2 = uVar2 + 1;
  }
  return uVar2;
}




/* from: libgsutility:DataList_.cpp
   addr: 00594860 */

void __thiscall clDataList::Add(clDataList *this,char *param_1)

{
  basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *this_00;
  list<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_> *this_01;
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;
  _List_node<class_clData*> *p_Var4;
  uint uVar5;
  char *pcVar6;
  Allocator<class_CConnection*> local_19;
  clDataList *local_18;
  char *local_14;
  basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c8172;
  local_c = ExceptionList;
  local_14 = (char *)0x0;
  ExceptionList = &local_c;
  local_18 = this;
  pcVar3 = (char *)ExtAlloc_Malloc_4(0x18);
  local_14 = pcVar3;
  if (pcVar3 == (char *)0x0) {
    param_1 = (char *)0x0;
  }
  else {
    *(undefined1 **)(pcVar3 + 4) = &clDataStr::_vbtable_;
    pcVar3[8] = '\x01';
    pcVar3[9] = '\0';
    pcVar3[10] = '\0';
    pcVar3[0xb] = '\0';
    *(undefined ***)pcVar3 = &clData::_vftable_;
    this_00 = (basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *)
              (pcVar3 + 0xc);
    local_4._0_1_ = 2;
    local_4._1_3_ = 0;
    *(undefined4 *)this_00 = 0;
    pcVar3[0x10] = '\0';
    pcVar3[0x11] = '\0';
    pcVar3[0x12] = '\0';
    pcVar3[0x13] = '\0';
    local_10 = this_00;
    _STL::
    _STLP_alloc_proxy<struct__STL::_List_node<class_CConnection*>*,struct__STL::_List_node<class_CConnection*>,class_ExtAlloc::Allocator<class_CConnection*>_>
    ::
    STLP_alloc_proxy<struct__STL::_List_node<class_CConnection*>*,struct__STL::_List_node<class_CConnection*>,class_ExtAlloc::Allocator<class_CConnection*>_>
              ((_STLP_alloc_proxy<struct__STL::_List_node<class_CConnection*>*,struct__STL::_List_node<class_CConnection*>,class_ExtAlloc::Allocator<class_CConnection*>_>
                *)(pcVar3 + 0x14),&local_19,(_List_node<class_CConnection*> *)0x0);
    uVar5 = 0xffffffff;
    pcVar6 = param_1;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    local_4 = CONCAT31(local_4._1_3_,3);
    _STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::
    M_range_initialize(this_00,param_1,param_1 + (~uVar5 - 1),(forward_iterator_tag *)&param_1);
    *(undefined ***)pcVar3 = &clDataStr::_vftable_;
    param_1 = pcVar3;
  }
  local_4 = 0xffffffff;
  this_01 = (list<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_> *)
            (local_18 + 0x10);
  _STL::list<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_>::end(this_01);
  p_Var4 = _STL::list<class_clData*,class_ExtAlloc::Allocator<class_clData*>_>::M_create_node
                     ((list<class_clData*,class_ExtAlloc::Allocator<class_clData*>_> *)this_01,
                      (clData **)&param_1);
  puVar2 = *(undefined4 **)(local_18 + 4);
  *(clDataList **)p_Var4 = local_18;
  *(undefined4 **)(p_Var4 + 4) = puVar2;
  *puVar2 = p_Var4;
  *(_List_node<class_clData*> **)(local_18 + 4) = p_Var4;
  ExceptionList = local_c;
  return;
}




/* from: libgsutility:DataList_.cpp
   addr: 00594960 */

void __thiscall clDataList::Add(clDataList *this,void *param_1,uint param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  _List_node<class_clData*> *p_Var3;
  undefined4 uStack_14;
  int *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c819a;
  pvStack_c = ExceptionList;
  local_10 = (int *)0x0;
  ExceptionList = &pvStack_c;
  piVar2 = (int *)ExtAlloc_Malloc_4(0x1c);
  local_10 = piVar2;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2[1] = (int)&clDataBin::_vbtable__for__clData__;
    piVar2[6] = (int)&clDataBin::_vbtable__for__ExtAlloc__vector<char>__;
    piVar2[2] = 2;
    *piVar2 = (int)&clData::_vftable_;
    local_4 = 2;
    piVar2[3] = 0;
    piVar2[4] = 0;
    _STL::
    _STLP_alloc_proxy<struct__STL::_List_node<class_CConnection*>*,struct__STL::_List_node<class_CConnection*>,class_ExtAlloc::Allocator<class_CConnection*>_>
    ::
    STLP_alloc_proxy<struct__STL::_List_node<class_CConnection*>*,struct__STL::_List_node<class_CConnection*>,class_ExtAlloc::Allocator<class_CConnection*>_>
              ((_STLP_alloc_proxy<struct__STL::_List_node<class_CConnection*>*,struct__STL::_List_node<class_CConnection*>,class_ExtAlloc::Allocator<class_CConnection*>_>
                *)(piVar2 + 5),(Allocator<class_CConnection*> *)((int)&uStack_14 + 3),
               (_List_node<class_CConnection*> *)0x0);
    *piVar2 = (int)&clDataBin::_vftable_;
  }
  local_4 = -1;
  (**(code **)(*piVar2 + 0x1c))(param_1,param_2);
  _STL::list<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_>::end
            ((list<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_> *)
             (this + 0x10));
  p_Var3 = _STL::list<class_clData*,class_ExtAlloc::Allocator<class_clData*>_>::M_create_node
                     ((list<class_clData*,class_ExtAlloc::Allocator<class_clData*>_> *)(this + 0x10)
                      ,(clData **)&stack0x00000000);
  puVar1 = *(undefined4 **)(local_4 + 4);
  *(int *)p_Var3 = local_4;
  *(undefined4 **)(p_Var3 + 4) = puVar1;
  *puVar1 = p_Var3;
  *(_List_node<class_clData*> **)(local_4 + 4) = p_Var3;
  ExceptionList = uStack_14;
  return;
}




/* from: libgsutility:DataList_.cpp
   addr: 00594A40 */

void __thiscall clDataList::Add(clDataList *this,clDataBin *param_1)

{
  undefined4 *puVar1;
  clDataBin *pcVar2;
  vector<char> *pvVar3;
  _List_node<class_clData*> *p_Var4;
  Allocator<char> local_11;
  clDataBin *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c81ca;
  local_c = ExceptionList;
  local_10 = (clDataBin *)0x0;
  ExceptionList = &local_c;
  pcVar2 = (clDataBin *)ExtAlloc_Malloc_4(0x1c);
  local_10 = pcVar2;
  if (pcVar2 == (clDataBin *)0x0) {
    pcVar2 = (clDataBin *)0x0;
  }
  else {
    *(undefined4 **)(pcVar2 + 4) = &clDataBin::_vbtable__for__clData__;
    *(undefined8 **)(pcVar2 + 0x18) = &clDataBin::_vbtable__for__ExtAlloc__vector<char>__;
    *(undefined4 *)(pcVar2 + 8) = 2;
    *(undefined ***)pcVar2 = &clData::_vftable_;
    local_4 = 2;
    _STL::_Vector_base<char,class_ExtAlloc::Allocator<char>_>::
    Vector_base<char,class_ExtAlloc::Allocator<char>_>
              ((_Vector_base<char,class_ExtAlloc::Allocator<char>_> *)(pcVar2 + 0xc),&local_11);
    *(undefined ***)pcVar2 = &clDataBin::_vftable_;
  }
  local_4 = 0xffffffff;
  if (param_1 != pcVar2) {
    if (param_1 == (clDataBin *)0x0) {
      pvVar3 = (vector<char> *)0x0;
    }
    else {
      pvVar3 = (vector<char> *)(param_1 + 0xc);
    }
    clDataBin::operator=(pcVar2,pvVar3);
  }
  param_1 = pcVar2;
  _STL::list<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_>::end
            ((list<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_> *)
             (this + 0x10));
  p_Var4 = _STL::list<class_clData*,class_ExtAlloc::Allocator<class_clData*>_>::M_create_node
                     ((list<class_clData*,class_ExtAlloc::Allocator<class_clData*>_> *)(this + 0x10)
                      ,(clData **)&param_1);
  puVar1 = *(undefined4 **)(local_10 + 4);
  *(clDataBin **)p_Var4 = local_10;
  *(undefined4 **)(p_Var4 + 4) = puVar1;
  *puVar1 = p_Var4;
  *(_List_node<class_clData*> **)(local_10 + 4) = p_Var4;
  ExceptionList = local_c;
  return;
}




/* from: libgsutility:DataList_.cpp
   addr: 00594B20 */

void __thiscall clDataList::Add(clDataList *this,clDataList *param_1)

{
  undefined4 *puVar1;
  clDataList *pcVar2;
  _List_node<class_clData*> *p_Var3;
  Allocator<class_clProxyMessage*> local_11;
  clDataList *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c81fa;
  local_c = ExceptionList;
  local_10 = (clDataList *)0x0;
  ExceptionList = &local_c;
  pcVar2 = (clDataList *)ExtAlloc_Malloc_4(0x18);
  local_10 = pcVar2;
  if (pcVar2 == (clDataList *)0x0) {
    pcVar2 = (clDataList *)0x0;
  }
  else {
    *(undefined4 **)(pcVar2 + 4) = &_vbtable__for__clData__;
    *(undefined8 **)(pcVar2 + 0x14) = &_vbtable__for__clPointerList<class_clData*>__;
    *(undefined4 *)(pcVar2 + 8) = 3;
    *(undefined ***)pcVar2 = &clData::_vftable_;
    local_4 = 2;
    _STL::_List_base<class_clProxyMessage*,class_ExtAlloc::Allocator<class_clProxyMessage*>_>::
    List_base<class_clProxyMessage*,class_ExtAlloc::Allocator<class_clProxyMessage*>_>
              ((_List_base<class_clProxyMessage*,class_ExtAlloc::Allocator<class_clProxyMessage*>_>
                *)(pcVar2 + 0x10),&local_11);
    *(undefined ***)(pcVar2 + 0xc) = &clPointerList<class_clData*>::_vftable_;
    *(undefined ***)pcVar2 = &_vftable__for__clData__;
    *(undefined ***)(pcVar2 + 0xc) = &_vftable__for__clPointerList<class_clData*>__;
  }
  local_4 = 0xffffffff;
  operator=(pcVar2,param_1);
  param_1 = pcVar2;
  _STL::list<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_>::end
            ((list<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_> *)
             (this + 0x10));
  p_Var3 = _STL::list<class_clData*,class_ExtAlloc::Allocator<class_clData*>_>::M_create_node
                     ((list<class_clData*,class_ExtAlloc::Allocator<class_clData*>_> *)(this + 0x10)
                      ,(clData **)&param_1);
  puVar1 = *(undefined4 **)(local_10 + 4);
  *(clDataList **)p_Var3 = local_10;
  *(undefined4 **)(p_Var3 + 4) = puVar1;
  *puVar1 = p_Var3;
  *(_List_node<class_clData*> **)(local_10 + 4) = p_Var3;
  ExceptionList = local_c;
  return;
}




/* from: libgsutility:DataList_.cpp
   addr: 00594C00 */

void __thiscall clDataList::Add(clDataList *this,clDataList *param_1)

{
  undefined4 *puVar1;
  _List_node<class_clData*> *p_Var2;
  
  _STL::list<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_>::end
            ((list<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_> *)
             (this + 0x10));
  p_Var2 = _STL::list<class_clData*,class_ExtAlloc::Allocator<class_clData*>_>::M_create_node
                     ((list<class_clData*,class_ExtAlloc::Allocator<class_clData*>_> *)(this + 0x10)
                      ,(clData **)&param_1);
  puVar1 = *(undefined4 **)(this + 4);
  *(clDataList **)p_Var2 = this;
  *(undefined4 **)(p_Var2 + 4) = puVar1;
  *puVar1 = p_Var2;
  *(_List_node<class_clData*> **)(this + 4) = p_Var2;
  return;
}




/* from: libgsutility:DataList_.cpp
   addr: 00594C40
   addr: 00594C40 */

void __thiscall clDataList::Add(clDataList *this,int *param_1)

{
  char local_20 [32];
  
  sprintf(local_20,s__d,*param_1);
  Add(this,local_20);
  return;
}




/* from: libgsutility:DataList_.cpp
   addr: 00594C80 */

uchar __thiscall clDataList::GetIndex(clDataList *this,clDataStr *param_1,uint param_2)

{
  list<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_> *this_00;
  basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *pbVar1;
  clDataStr *pcVar2;
  char *pcVar3;
  _List_iterator<class_clData*,struct__STL::_Const_traits<class_clData*>_> *p_Var4;
  _List_iterator<class_clData*,struct__STL::_Const_traits<class_clData*>_> *p_Var5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  undefined4 *puVar9;
  char *_Dst;
  basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *pbVar10;
  input_iterator_tag local_9 [9];
  
  this_00 = (list<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_> *)(this + 0x10)
  ;
  p_Var4 = (_List_iterator<class_clData*,struct__STL::_Const_traits<class_clData*>_> *)
           _STL::list<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_>::end
                     (this_00);
  p_Var5 = (_List_iterator<class_clData*,struct__STL::_Const_traits<class_clData*>_> *)
           _STL::list<class_clRcvElement*,class_ExtAlloc::Allocator<class_clRcvElement*>_>::begin
                     ((list<class_clRcvElement*,class_ExtAlloc::Allocator<class_clRcvElement*>_> *)
                      this_00);
  local_9[0] = param_2._0_1_;
  uVar6 = _STL::distance(p_Var5,p_Var4,local_9);
  if (param_2 < uVar6) {
    if (param_2 < uVar6 >> 1) {
      puVar9 = (undefined4 *)**(undefined4 **)this_00;
      for (uVar6 = param_2; uVar6 != 0; uVar6 = uVar6 - 1) {
        puVar9 = (undefined4 *)*puVar9;
      }
    }
    else {
      puVar9 = *(undefined4 **)this_00;
      if (param_2 < uVar6) {
        iVar7 = uVar6 - param_2;
        do {
          puVar9 = (undefined4 *)puVar9[1];
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
    }
    pcVar2 = (clDataStr *)puVar9[2];
    if (pcVar2 != (clDataStr *)0x0) {
      if (*(int *)(pcVar2 + 8) != 1) {
        return '\0';
      }
      if (pcVar2 != param_1) {
        pbVar1 = (basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>
                  *)(pcVar2 + 0xc);
        if (param_1 == (clDataStr *)0x0) {
          pbVar10 = (basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>
                     *)0x0;
        }
        else {
          pbVar10 = (basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>
                     *)(param_1 + 0xc);
        }
        if (pbVar1 != pbVar10) {
          if (param_1 == (clDataStr *)0x0) {
            pbVar10 = (basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>
                       *)0x0;
          }
          else {
            pbVar10 = (basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>
                       *)(param_1 + 0xc);
          }
          if (pbVar1 != pbVar10) {
            pcVar3 = *(char **)(pcVar2 + 0x10);
            _Dst = *(char **)pbVar10;
            for (pcVar8 = *(char **)pbVar1; pcVar8 != pcVar3; pcVar8 = pcVar8 + 1) {
              if (_Dst == *(char **)(pbVar10 + 4)) {
                if (pcVar8 != pcVar3) {
                  _STL::
                  basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>
                  ::append(pbVar10,pcVar8,pcVar3,(forward_iterator_tag *)&param_2);
                  return '\x01';
                }
                break;
              }
              *_Dst = *pcVar8;
              _Dst = _Dst + 1;
            }
            pcVar3 = *(char **)(pbVar10 + 4);
            if (_Dst != pcVar3) {
              memmove(_Dst,pcVar3,1);
              *(char **)(pbVar10 + 4) = _Dst + (*(int *)(pbVar10 + 4) - (int)pcVar3);
              return '\x01';
            }
          }
        }
      }
      return '\x01';
    }
  }
  return '\0';
}




/* from: libgsutility:DataList_.cpp
   addr: 00594DB0 */

uchar __thiscall clDataList::GetIndex(clDataList *this,clDataBin *param_1,uint param_2)

{
  list<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_> *this_00;
  clDataBin *pcVar1;
  _List_iterator<class_clData*,struct__STL::_Const_traits<class_clData*>_> *p_Var2;
  _List_iterator<class_clData*,struct__STL::_Const_traits<class_clData*>_> *p_Var3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  input_iterator_tag local_9 [9];
  
  this_00 = (list<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_> *)(this + 0x10)
  ;
  p_Var2 = (_List_iterator<class_clData*,struct__STL::_Const_traits<class_clData*>_> *)
           _STL::list<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_>::end
                     (this_00);
  p_Var3 = (_List_iterator<class_clData*,struct__STL::_Const_traits<class_clData*>_> *)
           _STL::list<class_clRcvElement*,class_ExtAlloc::Allocator<class_clRcvElement*>_>::begin
                     ((list<class_clRcvElement*,class_ExtAlloc::Allocator<class_clRcvElement*>_> *)
                      this_00);
  local_9[0] = param_2._0_1_;
  uVar4 = _STL::distance(p_Var3,p_Var2,local_9);
  if (param_2 < uVar4) {
    if (param_2 < uVar4 >> 1) {
      puVar6 = (undefined4 *)**(undefined4 **)this_00;
      if (param_2 != 0) {
        do {
          puVar6 = (undefined4 *)*puVar6;
          param_2 = param_2 - 1;
        } while (param_2 != 0);
      }
    }
    else {
      puVar6 = *(undefined4 **)this_00;
      if (param_2 < uVar4) {
        iVar5 = uVar4 - param_2;
        do {
          puVar6 = (undefined4 *)puVar6[1];
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
    }
    pcVar1 = (clDataBin *)puVar6[2];
    if (pcVar1 != (clDataBin *)0x0) {
      if (*(int *)(pcVar1 + 8) == 2) {
        if (pcVar1 != param_1) {
          clDataBin::operator=(param_1,(vector<char> *)(pcVar1 + 0xc));
        }
        return '\x01';
      }
      return '\0';
    }
  }
  return '\0';
}




/* from: libgsutility:DataList_.cpp
   addr: 00594E60 */

uchar __thiscall clDataList::GetIndex(clDataList *this,clDataBin **param_1,uint param_2)

{
  list<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_> *this_00;
  _List_iterator<class_clData*,struct__STL::_Const_traits<class_clData*>_> *p_Var1;
  _List_iterator<class_clData*,struct__STL::_Const_traits<class_clData*>_> *p_Var2;
  uint uVar3;
  int iVar4;
  clDataBin *pcVar5;
  undefined4 *puVar6;
  input_iterator_tag local_9 [9];
  
  this_00 = (list<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_> *)(this + 0x10)
  ;
  p_Var1 = (_List_iterator<class_clData*,struct__STL::_Const_traits<class_clData*>_> *)
           _STL::list<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_>::end
                     (this_00);
  p_Var2 = (_List_iterator<class_clData*,struct__STL::_Const_traits<class_clData*>_> *)
           _STL::list<class_clRcvElement*,class_ExtAlloc::Allocator<class_clRcvElement*>_>::begin
                     ((list<class_clRcvElement*,class_ExtAlloc::Allocator<class_clRcvElement*>_> *)
                      this_00);
  local_9[0] = param_2._0_1_;
  uVar3 = _STL::distance(p_Var2,p_Var1,local_9);
  if (param_2 < uVar3) {
    if (param_2 < uVar3 >> 1) {
      puVar6 = (undefined4 *)**(undefined4 **)this_00;
      if (param_2 != 0) {
        do {
          puVar6 = (undefined4 *)*puVar6;
          param_2 = param_2 - 1;
        } while (param_2 != 0);
      }
    }
    else {
      puVar6 = *(undefined4 **)this_00;
      if (param_2 < uVar3) {
        iVar4 = uVar3 - param_2;
        do {
          puVar6 = (undefined4 *)puVar6[1];
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
    }
    iVar4 = puVar6[2];
    if (iVar4 != 0) {
      pcVar5 = (clDataBin *)
               RTDynamicCast(iVar4,0,&class_clData__RTTI_Type_Descriptor_,
                             &class_clDataBin__RTTI_Type_Descriptor_,0);
      *param_1 = pcVar5;
      if (pcVar5 != (clDataBin *)0x0) {
        return '\x01';
      }
      if (*(int *)(iVar4 + 8) == 6) {
        pcVar5 = (clDataBin *)
                 RTDynamicCast(*(undefined4 *)(iVar4 + 0xc),0,&class_clData__RTTI_Type_Descriptor_,
                               &class_clDataBin__RTTI_Type_Descriptor_,0);
        *param_1 = pcVar5;
        if (pcVar5 != (clDataBin *)0x0) {
          return '\x01';
        }
      }
    }
  }
  return '\0';
}




/* from: libgsutility:DataList_.cpp
   addr: 00594F40 */

uchar __thiscall clDataList::GetIndex(clDataList *this,clDataList *param_1,uint param_2)

{
  list<class_clRcvElement*,class_ExtAlloc::Allocator<class_clRcvElement*>_> *this_00;
  clDataList *pcVar1;
  _List_iterator<class_clData*,struct__STL::_Const_traits<class_clData*>_> *p_Var2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  input_iterator_tag local_9;
  undefined4 local_8 [2];
  
  local_8[0] = *(undefined4 *)(this + 0x10);
  this_00 = (list<class_clRcvElement*,class_ExtAlloc::Allocator<class_clRcvElement*>_> *)
            (this + 0x10);
  p_Var2 = (_List_iterator<class_clData*,struct__STL::_Const_traits<class_clData*>_> *)
           _STL::list<class_clRcvElement*,class_ExtAlloc::Allocator<class_clRcvElement*>_>::begin
                     (this_00);
  local_9 = param_2._0_1_;
  uVar3 = _STL::distance(p_Var2,(_List_iterator<class_clData*,struct__STL::_Const_traits<class_clData*>_>
                                 *)local_8,&local_9);
  if (param_2 < uVar3) {
    if (param_2 < uVar3 >> 1) {
      puVar5 = (undefined4 *)**(undefined4 **)this_00;
      if (param_2 != 0) {
        do {
          puVar5 = (undefined4 *)*puVar5;
          param_2 = param_2 - 1;
        } while (param_2 != 0);
      }
    }
    else {
      puVar5 = *(undefined4 **)this_00;
      if (param_2 < uVar3) {
        iVar4 = uVar3 - param_2;
        do {
          puVar5 = (undefined4 *)puVar5[1];
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
    }
    pcVar1 = (clDataList *)puVar5[2];
    if (pcVar1 != (clDataList *)0x0) {
      if (*(int *)(pcVar1 + 8) == 3) {
        operator=(param_1,pcVar1);
        return '\x01';
      }
      return '\0';
    }
  }
  return '\0';
}




/* from: libgsutility:DataList_.cpp
   addr: 00594FE0 */

uchar __thiscall clDataList::GetIndex(clDataList *this,clDataList **param_1,uint param_2)

{
  list<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_> *this_00;
  _List_iterator<class_clData*,struct__STL::_Const_traits<class_clData*>_> *p_Var1;
  _List_iterator<class_clData*,struct__STL::_Const_traits<class_clData*>_> *p_Var2;
  uint uVar3;
  int iVar4;
  clDataList *pcVar5;
  undefined4 *puVar6;
  input_iterator_tag local_9 [9];
  
  this_00 = (list<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_> *)(this + 0x10)
  ;
  p_Var1 = (_List_iterator<class_clData*,struct__STL::_Const_traits<class_clData*>_> *)
           _STL::list<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_>::end
                     (this_00);
  p_Var2 = (_List_iterator<class_clData*,struct__STL::_Const_traits<class_clData*>_> *)
           _STL::list<class_clRcvElement*,class_ExtAlloc::Allocator<class_clRcvElement*>_>::begin
                     ((list<class_clRcvElement*,class_ExtAlloc::Allocator<class_clRcvElement*>_> *)
                      this_00);
  local_9[0] = param_2._0_1_;
  uVar3 = _STL::distance(p_Var2,p_Var1,local_9);
  if (param_2 < uVar3) {
    if (param_2 < uVar3 >> 1) {
      puVar6 = (undefined4 *)**(undefined4 **)this_00;
      if (param_2 != 0) {
        do {
          puVar6 = (undefined4 *)*puVar6;
          param_2 = param_2 - 1;
        } while (param_2 != 0);
      }
    }
    else {
      puVar6 = *(undefined4 **)this_00;
      if (param_2 < uVar3) {
        iVar4 = uVar3 - param_2;
        do {
          puVar6 = (undefined4 *)puVar6[1];
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
    }
    iVar4 = puVar6[2];
    if (iVar4 != 0) {
      pcVar5 = (clDataList *)
               RTDynamicCast(iVar4,0,&class_clData__RTTI_Type_Descriptor_,
                             &class_clDataList__RTTI_Type_Descriptor_,0);
      *param_1 = pcVar5;
      if (pcVar5 != (clDataList *)0x0) {
        return '\x01';
      }
      if (*(int *)(iVar4 + 8) == 6) {
        pcVar5 = (clDataList *)
                 RTDynamicCast(*(undefined4 *)(iVar4 + 0xc),0,&class_clData__RTTI_Type_Descriptor_,
                               &class_clDataList__RTTI_Type_Descriptor_,0);
        *param_1 = pcVar5;
        if (pcVar5 != (clDataList *)0x0) {
          return '\x01';
        }
      }
    }
  }
  return '\0';
}




/* from: libgsutility:DataList_.cpp
   addr: 005950C0 */

uchar __thiscall clDataList::GetIndex(clDataList *this,char *param_1,uint param_2)

{
  _Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
  _Var1;
  uchar uVar2;
  _Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
  *p_Var3;
  Allocator<class_CConnection*> local_29;
  undefined4 local_28;
  undefined **local_24;
  undefined1 *local_20;
  undefined4 local_1c;
  _Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
  *local_18;
  _Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
  *local_14;
  _Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
  *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c823b;
  local_c = ExceptionList;
  local_28 = 0;
  local_20 = &clDataStr::_vbtable_;
  local_1c = 1;
  local_24 = &clData::_vftable_;
  local_18 = (_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
              *)0x0;
  local_14 = (_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
              *)0x0;
  local_4 = 1;
  ExceptionList = &local_c;
  _STL::
  _STLP_alloc_proxy<struct__STL::_List_node<class_CConnection*>*,struct__STL::_List_node<class_CConnection*>,class_ExtAlloc::Allocator<class_CConnection*>_>
  ::
  STLP_alloc_proxy<struct__STL::_List_node<class_CConnection*>*,struct__STL::_List_node<class_CConnection*>,class_ExtAlloc::Allocator<class_CConnection*>_>
            ((_STLP_alloc_proxy<struct__STL::_List_node<class_CConnection*>*,struct__STL::_List_node<class_CConnection*>,class_ExtAlloc::Allocator<class_CConnection*>_>
              *)&local_10,&local_29,(_List_node<class_CConnection*> *)0x0);
  local_18 = (_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
              *)ExtAlloc_Malloc_4(8);
  local_10 = local_18 + 8;
  *local_18 = (_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
               )0x0;
  local_24 = &clDataStr::_vftable_;
  local_4 = 2;
  local_14 = local_18;
  uVar2 = GetIndex(this,(clDataStr *)&local_24,param_2);
  if (uVar2 != '\0') {
    p_Var3 = local_18;
    do {
      _Var1 = *p_Var3;
      p_Var3[(int)param_1 - (int)local_18] = _Var1;
      p_Var3 = p_Var3 + 1;
    } while (_Var1 != (_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
                       )0x0);
  }
  local_24 = &clDataStr::_vftable_;
  local_4 = 4;
  _STL::
  _STLP_alloc_proxy<struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>*,struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
  ::deallocate((_STLP_alloc_proxy<struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>*,struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
                *)&local_10,local_18,(int)local_10 - (int)local_18);
  ExceptionList = local_c;
  return uVar2;
}




/* from: libgsutility:DataList_.cpp
   addr: 005951B0 */

uchar __thiscall clDataList::GetIndex(clDataList *this,char *param_1,uint param_2,uint param_3)

{
  char cVar1;
  uchar uVar2;
  undefined **local_24;
  undefined1 *local_20;
  undefined4 local_1c;
  char *local_18 [3];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c827b;
  local_c = ExceptionList;
  local_20 = &clDataStr::_vbtable_;
  local_1c = 1;
  local_24 = &clData::_vftable_;
  local_4 = 0;
  ExceptionList = &local_c;
  _STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::
  basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>
            ((basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *)
             local_18);
  local_24 = &clDataStr::_vftable_;
  local_4 = 1;
  uVar2 = GetIndex(this,(clDataStr *)&local_24,param_2);
  if (uVar2 == '\0') {
    local_24 = &clDataStr::_vftable_;
    local_4 = 4;
    _STL::_String_base<char,class_ExtAlloc::Allocator<char>_>::
    ~_String_base<char,class_ExtAlloc::Allocator<char>_>
              ((_String_base<char,class_ExtAlloc::Allocator<char>_> *)local_18);
    ExceptionList = local_c;
    return '\0';
  }
  strncpy(param_1,local_18[0],param_3);
  cVar1 = param_1[param_3 - 1];
  if (cVar1 != '\0') {
    param_1[param_3 - 1] = '\0';
  }
  local_24 = &clDataStr::_vftable_;
  local_4 = 2;
  _STL::_String_base<char,class_ExtAlloc::Allocator<char>_>::
  ~_String_base<char,class_ExtAlloc::Allocator<char>_>
            ((_String_base<char,class_ExtAlloc::Allocator<char>_> *)local_18);
  ExceptionList = local_c;
  return cVar1 == '\0';
}




/* from: libgsutility:DataList_.cpp
   addr: 005952B0 */

uchar __thiscall clDataList::GetIndex(clDataList *this,int *param_1,uint param_2)

{
  uchar uVar1;
  int iVar2;
  Allocator<class_CConnection*> local_29;
  undefined4 local_28;
  undefined **local_24;
  undefined1 *local_20;
  undefined4 local_1c;
  _Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
  *local_18;
  _Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
  *local_14;
  _Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
  *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c82bb;
  local_c = ExceptionList;
  local_28 = 0;
  local_20 = &clDataStr::_vbtable_;
  local_1c = 1;
  local_24 = &clData::_vftable_;
  local_18 = (_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
              *)0x0;
  local_14 = (_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
              *)0x0;
  local_4 = 1;
  ExceptionList = &local_c;
  _STL::
  _STLP_alloc_proxy<struct__STL::_List_node<class_CConnection*>*,struct__STL::_List_node<class_CConnection*>,class_ExtAlloc::Allocator<class_CConnection*>_>
  ::
  STLP_alloc_proxy<struct__STL::_List_node<class_CConnection*>*,struct__STL::_List_node<class_CConnection*>,class_ExtAlloc::Allocator<class_CConnection*>_>
            ((_STLP_alloc_proxy<struct__STL::_List_node<class_CConnection*>*,struct__STL::_List_node<class_CConnection*>,class_ExtAlloc::Allocator<class_CConnection*>_>
              *)&local_10,&local_29,(_List_node<class_CConnection*> *)0x0);
  local_18 = (_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
              *)ExtAlloc_Malloc_4(8);
  local_10 = local_18 + 8;
  *local_18 = (_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
               )0x0;
  local_24 = &clDataStr::_vftable_;
  local_4 = 2;
  local_14 = local_18;
  uVar1 = GetIndex(this,(clDataStr *)&local_24,param_2);
  if (uVar1 != '\0') {
    iVar2 = atoi((char *)local_18);
    *param_1 = iVar2;
  }
  local_24 = &clDataStr::_vftable_;
  local_4 = 4;
  _STL::
  _STLP_alloc_proxy<struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>*,struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
  ::deallocate((_STLP_alloc_proxy<struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>*,struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
                *)&local_10,local_18,(int)local_10 - (int)local_18);
  ExceptionList = local_c;
  return uVar1;
}




/* from: libgsutility:DataList_.cpp
   addr: 005953A0 */

uchar __thiscall clDataList::GetIndex(clDataList *this,uint *param_1,uint param_2)

{
  uchar uVar1;
  uint uVar2;
  Allocator<class_CConnection*> local_29;
  undefined4 local_28;
  undefined **local_24;
  undefined1 *local_20;
  undefined4 local_1c;
  _Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
  *local_18;
  _Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
  *local_14;
  _Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
  *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c82fb;
  local_c = ExceptionList;
  local_28 = 0;
  local_20 = &clDataStr::_vbtable_;
  local_1c = 1;
  local_24 = &clData::_vftable_;
  local_18 = (_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
              *)0x0;
  local_14 = (_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
              *)0x0;
  local_4 = 1;
  ExceptionList = &local_c;
  _STL::
  _STLP_alloc_proxy<struct__STL::_List_node<class_CConnection*>*,struct__STL::_List_node<class_CConnection*>,class_ExtAlloc::Allocator<class_CConnection*>_>
  ::
  STLP_alloc_proxy<struct__STL::_List_node<class_CConnection*>*,struct__STL::_List_node<class_CConnection*>,class_ExtAlloc::Allocator<class_CConnection*>_>
            ((_STLP_alloc_proxy<struct__STL::_List_node<class_CConnection*>*,struct__STL::_List_node<class_CConnection*>,class_ExtAlloc::Allocator<class_CConnection*>_>
              *)&local_10,&local_29,(_List_node<class_CConnection*> *)0x0);
  local_18 = (_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
              *)ExtAlloc_Malloc_4(8);
  local_10 = local_18 + 8;
  *local_18 = (_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
               )0x0;
  local_24 = &clDataStr::_vftable_;
  local_4 = 2;
  local_14 = local_18;
  uVar1 = GetIndex(this,(clDataStr *)&local_24,param_2);
  if (uVar1 != '\0') {
    uVar2 = atoi((char *)local_18);
    *param_1 = uVar2;
  }
  local_24 = &clDataStr::_vftable_;
  local_4 = 4;
  _STL::
  _STLP_alloc_proxy<struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>*,struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
  ::deallocate((_STLP_alloc_proxy<struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>*,struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
                *)&local_10,local_18,(int)local_10 - (int)local_18);
  ExceptionList = local_c;
  return uVar1;
}




/* from: libgsutility:DataList_.cpp
   addr: 00595490 */

uchar __thiscall clDataList::GetIndex(clDataList *this,short *param_1,uint param_2)

{
  uchar uVar1;
  int iVar2;
  Allocator<class_CConnection*> local_29;
  undefined4 local_28;
  undefined **local_24;
  undefined1 *local_20;
  undefined4 local_1c;
  _Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
  *local_18;
  _Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
  *local_14;
  _Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
  *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c833b;
  local_c = ExceptionList;
  local_28 = 0;
  local_20 = &clDataStr::_vbtable_;
  local_1c = 1;
  local_24 = &clData::_vftable_;
  local_18 = (_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
              *)0x0;
  local_14 = (_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
              *)0x0;
  local_4 = 1;
  ExceptionList = &local_c;
  _STL::
  _STLP_alloc_proxy<struct__STL::_List_node<class_CConnection*>*,struct__STL::_List_node<class_CConnection*>,class_ExtAlloc::Allocator<class_CConnection*>_>
  ::
  STLP_alloc_proxy<struct__STL::_List_node<class_CConnection*>*,struct__STL::_List_node<class_CConnection*>,class_ExtAlloc::Allocator<class_CConnection*>_>
            ((_STLP_alloc_proxy<struct__STL::_List_node<class_CConnection*>*,struct__STL::_List_node<class_CConnection*>,class_ExtAlloc::Allocator<class_CConnection*>_>
              *)&local_10,&local_29,(_List_node<class_CConnection*> *)0x0);
  local_18 = (_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
              *)ExtAlloc_Malloc_4(8);
  local_10 = local_18 + 8;
  *local_18 = (_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
               )0x0;
  local_24 = &clDataStr::_vftable_;
  local_4 = 2;
  local_14 = local_18;
  uVar1 = GetIndex(this,(clDataStr *)&local_24,param_2);
  if (uVar1 != '\0') {
    iVar2 = atoi((char *)local_18);
    *param_1 = (short)iVar2;
  }
  local_24 = &clDataStr::_vftable_;
  local_4 = 4;
  _STL::
  _STLP_alloc_proxy<struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>*,struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
  ::deallocate((_STLP_alloc_proxy<struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>*,struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
                *)&local_10,local_18,(int)local_10 - (int)local_18);
  ExceptionList = local_c;
  return uVar1;
}




/* from: libgsutility:DataList_.cpp
   addr: 00595590 */

uchar __thiscall clDataList::GetIndex(clDataList *this,ushort *param_1,uint param_2)

{
  uchar uVar1;
  int iVar2;
  Allocator<class_CConnection*> local_29;
  undefined4 local_28;
  undefined **local_24;
  undefined1 *local_20;
  undefined4 local_1c;
  _Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
  *local_18;
  _Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
  *local_14;
  _Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
  *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c837b;
  local_c = ExceptionList;
  local_28 = 0;
  local_20 = &clDataStr::_vbtable_;
  local_1c = 1;
  local_24 = &clData::_vftable_;
  local_18 = (_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
              *)0x0;
  local_14 = (_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
              *)0x0;
  local_4 = 1;
  ExceptionList = &local_c;
  _STL::
  _STLP_alloc_proxy<struct__STL::_List_node<class_CConnection*>*,struct__STL::_List_node<class_CConnection*>,class_ExtAlloc::Allocator<class_CConnection*>_>
  ::
  STLP_alloc_proxy<struct__STL::_List_node<class_CConnection*>*,struct__STL::_List_node<class_CConnection*>,class_ExtAlloc::Allocator<class_CConnection*>_>
            ((_STLP_alloc_proxy<struct__STL::_List_node<class_CConnection*>*,struct__STL::_List_node<class_CConnection*>,class_ExtAlloc::Allocator<class_CConnection*>_>
              *)&local_10,&local_29,(_List_node<class_CConnection*> *)0x0);
  local_18 = (_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
              *)ExtAlloc_Malloc_4(8);
  local_10 = local_18 + 8;
  *local_18 = (_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
               )0x0;
  local_24 = &clDataStr::_vftable_;
  local_4 = 2;
  local_14 = local_18;
  uVar1 = GetIndex(this,(clDataStr *)&local_24,param_2);
  if (uVar1 != '\0') {
    iVar2 = atoi((char *)local_18);
    *param_1 = (ushort)iVar2;
  }
  local_24 = &clDataStr::_vftable_;
  local_4 = 4;
  _STL::
  _STLP_alloc_proxy<struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>*,struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
  ::deallocate((_STLP_alloc_proxy<struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>*,struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
                *)&local_10,local_18,(int)local_10 - (int)local_18);
  ExceptionList = local_c;
  return uVar1;
}




/* from: libgsutility:DataList_.cpp
   addr: 00595690 */

uchar __thiscall clDataList::GetIndex(clDataList *this,uchar *param_1,uint param_2)

{
  uchar uVar1;
  int iVar2;
  Allocator<class_CConnection*> local_29;
  undefined4 local_28;
  undefined **local_24;
  undefined1 *local_20;
  undefined4 local_1c;
  _Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
  *local_18;
  _Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
  *local_14;
  _Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
  *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c83bb;
  local_c = ExceptionList;
  local_28 = 0;
  local_20 = &clDataStr::_vbtable_;
  local_1c = 1;
  local_24 = &clData::_vftable_;
  local_18 = (_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
              *)0x0;
  local_14 = (_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
              *)0x0;
  local_4 = 1;
  ExceptionList = &local_c;
  _STL::
  _STLP_alloc_proxy<struct__STL::_List_node<class_CConnection*>*,struct__STL::_List_node<class_CConnection*>,class_ExtAlloc::Allocator<class_CConnection*>_>
  ::
  STLP_alloc_proxy<struct__STL::_List_node<class_CConnection*>*,struct__STL::_List_node<class_CConnection*>,class_ExtAlloc::Allocator<class_CConnection*>_>
            ((_STLP_alloc_proxy<struct__STL::_List_node<class_CConnection*>*,struct__STL::_List_node<class_CConnection*>,class_ExtAlloc::Allocator<class_CConnection*>_>
              *)&local_10,&local_29,(_List_node<class_CConnection*> *)0x0);
  local_18 = (_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
              *)ExtAlloc_Malloc_4(8);
  local_10 = local_18 + 8;
  *local_18 = (_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
               )0x0;
  local_24 = &clDataStr::_vftable_;
  local_4 = 2;
  local_14 = local_18;
  uVar1 = GetIndex(this,(clDataStr *)&local_24,param_2);
  if (uVar1 != '\0') {
    iVar2 = atoi((char *)local_18);
    *param_1 = (uchar)iVar2;
  }
  local_24 = &clDataStr::_vftable_;
  local_4 = 4;
  _STL::
  _STLP_alloc_proxy<struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>*,struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
  ::deallocate((_STLP_alloc_proxy<struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>*,struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
                *)&local_10,local_18,(int)local_10 - (int)local_18);
  ExceptionList = local_c;
  return uVar1;
}




/* from: libgsutility:DataList_.cpp
   addr: 00595780 */

uchar __thiscall clDataList::GetIndex(clDataList *this,void *param_1,uint param_2,uint param_3)

{
  byte bVar1;
  undefined **local_28;
  undefined4 *local_24;
  undefined4 local_20;
  _Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
  *local_1c;
  _Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
  *local_18;
  int local_14;
  undefined8 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c83f3;
  local_c = ExceptionList;
  local_24 = &clDataBin::_vbtable__for__clData__;
  local_10 = &clDataBin::_vbtable__for__ExtAlloc__vector<char>__;
  local_20 = 2;
  local_28 = &clData::_vftable_;
  local_4 = 0;
  ExceptionList = &local_c;
  ExtAlloc::vector<char>::vector<char>((vector<char> *)&local_1c);
  local_28 = &clDataBin::_vftable_;
  local_4 = 1;
  bVar1 = GetIndex(this,(clDataBin *)&local_28,param_3);
  if (bVar1 != 0) {
    bVar1 = bVar1 & param_2 == (int)local_18 - (int)local_1c;
    if ((bVar1 != 0) && (local_18 != local_1c)) {
      memmove(param_1,local_1c,(int)local_18 - (int)local_1c);
    }
  }
  local_28 = &clDataBin::_vftable_;
  local_4 = 3;
  if (local_1c !=
      (_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
       *)0x0) {
    _STL::
    _STLP_alloc_proxy<struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>*,struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
    ::deallocate((_STLP_alloc_proxy<struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>*,struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
                  *)&local_14,local_1c,local_14 - (int)local_1c);
  }
  ExceptionList = local_c;
  return bVar1;
}




/* from: libgsutility:DataList_.cpp
   addr: 00595880 */

clData * __thiscall clDataList::GetIndex(clDataList *this,uint param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  input_iterator_tag local_9;
  undefined4 *local_8;
  undefined4 local_4;
  
  local_8 = *(undefined4 **)(this + 0x10);
  local_9 = param_1._0_1_;
  local_4 = *local_8;
  uVar1 = _STL::distance((_List_iterator<class_clData*,struct__STL::_Const_traits<class_clData*>_> *
                         )&local_4,
                         (_List_iterator<class_clData*,struct__STL::_Const_traits<class_clData*>_> *
                         )&local_8,&local_9);
  if (uVar1 <= param_1) {
    return (clData *)0x0;
  }
  if (param_1 < uVar1 >> 1) {
    piVar3 = (int *)**(int **)(this + 0x10);
    if (param_1 != 0) {
      do {
        piVar3 = (int *)*piVar3;
        param_1 = param_1 - 1;
      } while (param_1 != 0);
      return (clData *)piVar3[2];
    }
  }
  else {
    piVar3 = *(int **)(this + 0x10);
    if (param_1 < uVar1) {
      iVar2 = uVar1 - param_1;
      do {
        piVar3 = (int *)piVar3[1];
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  return (clData *)piVar3[2];
}




/* from: libgsutility:DataList_.cpp
   addr: 00595900 */

uchar __thiscall clDataList::GetIndex(clDataList *this,clDataStr **param_1,uint param_2)

{
  clData *pcVar1;
  
  pcVar1 = GetIndex(this,param_2);
  if ((pcVar1 != (clData *)0x0) && (*(int *)(pcVar1 + 8) == 1)) {
    *param_1 = (clDataStr *)pcVar1;
    return '\x01';
  }
  return '\0';
}




/* from: libgsutility:DataList_.cpp
   addr: 00595950 */

_String_base<char,class_ExtAlloc::Allocator<char>_> * __thiscall
_STL::_String_base<char,class_ExtAlloc::Allocator<char>_>::
String_base<char,class_ExtAlloc::Allocator<char>_>
          (_String_base<char,class_ExtAlloc::Allocator<char>_> *this,Allocator<char> *param_1,
          uint param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  Allocator<class_CConnection*> local_12a;
  Allocator<class_CConnection*> local_129;
  char *local_128;
  undefined4 local_124;
  _STLP_alloc_proxy<struct__STL::_List_node<class_CConnection*>*,struct__STL::_List_node<class_CConnection*>,class_ExtAlloc::Allocator<class_CConnection*>_>
  local_120 [4];
  _String_base<char,class_ExtAlloc::Allocator<char>_> *local_11c;
  undefined **local_118 [3];
  char local_10c [255];
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c842f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  local_4 = 0;
  local_11c = this;
  if (param_2 != 0) {
    iVar2 = ExtAlloc_Malloc_4(param_2);
    *(int *)this = iVar2;
    *(int *)(this + 4) = iVar2;
    *(uint *)(this + 8) = iVar2 + param_2;
    ExceptionList = local_c;
    return this;
  }
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  local_128 = (char *)0x0;
  local_124 = 0;
  _STLP_alloc_proxy<struct__STL::_List_node<class_CConnection*>*,struct__STL::_List_node<class_CConnection*>,class_ExtAlloc::Allocator<class_CConnection*>_>
  ::
  STLP_alloc_proxy<struct__STL::_List_node<class_CConnection*>*,struct__STL::_List_node<class_CConnection*>,class_ExtAlloc::Allocator<class_CConnection*>_>
            (local_120,&local_12a,(_List_node<class_CConnection*> *)0x0);
  uVar3 = 0xffffffff;
  pcVar4 = s_basic_string;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  local_4._0_1_ = 2;
  local_129 = local_12a;
  basic_string<char,class__STL::char_traits<char>,class__STL::allocator<char>_>::M_range_initialize
            ((basic_string<char,class__STL::char_traits<char>,class__STL::allocator<char>_> *)
             &local_128,s_basic_string,s___AVlength_error__STL___005fe384 + ~uVar3 + 0x17,
             (forward_iterator_tag *)&local_129);
  local_4 = CONCAT31(local_4._1_3_,3);
  exception::exception((exception *)local_118);
  local_118[0] = &__Named_exception::_vftable_;
  strncpy(local_10c,local_128,0x100);
  local_d = 0;
  local_118[0] = &length_error::_vftable_;
                    /* WARNING: Subroutine does not return */
  CxxThrowException_8(local_118,&__TI4_AVlength_error__STL__);
}




/* from: libgsutility:DataList_.cpp
   addr: 00595A70
   addr: 00595A70 */

undefined4 * __thiscall
_STL::list<int,class_ExtAlloc::Allocator<int>_>::insert
          (list<int,class_ExtAlloc::Allocator<int>_> *this,undefined4 *param_2,int param_3,
          clData **param_4)

{
  undefined4 *puVar1;
  _List_node<class_clData*> *p_Var2;
  
  p_Var2 = list<class_clData*,class_ExtAlloc::Allocator<class_clData*>_>::M_create_node
                     ((list<class_clData*,class_ExtAlloc::Allocator<class_clData*>_> *)this,param_4)
  ;
  puVar1 = *(undefined4 **)(param_3 + 4);
  *(int *)p_Var2 = param_3;
  *(undefined4 **)(p_Var2 + 4) = puVar1;
  *puVar1 = p_Var2;
  *(_List_node<class_clData*> **)(param_3 + 4) = p_Var2;
  *param_2 = p_Var2;
  return param_2;
}




/* from: libgsutility:DataList_.cpp
   addr: 00595AA0
   addr: 00595AA0
   addr: 00595AA0 */

_Vector_base<char,class_ExtAlloc::Allocator<char>_> * __thiscall
_STL::_Vector_base<char,class_ExtAlloc::Allocator<char>_>::
Vector_base<char,class_ExtAlloc::Allocator<char>_>
          (_Vector_base<char,class_ExtAlloc::Allocator<char>_> *this,Allocator<char> *param_1)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  _STLP_alloc_proxy<struct__STL::_List_node<class_CConnection*>*,struct__STL::_List_node<class_CConnection*>,class_ExtAlloc::Allocator<class_CConnection*>_>
  ::
  STLP_alloc_proxy<struct__STL::_List_node<class_CConnection*>*,struct__STL::_List_node<class_CConnection*>,class_ExtAlloc::Allocator<class_CConnection*>_>
            ((_STLP_alloc_proxy<struct__STL::_List_node<class_CConnection*>*,struct__STL::_List_node<class_CConnection*>,class_ExtAlloc::Allocator<class_CConnection*>_>
              *)(this + 8),(Allocator<class_CConnection*> *)param_1,
             (_List_node<class_CConnection*> *)0x0);
  return this;
}




/* from: libgsutility:DataList_.cpp
   addr: 00595AD0
   addr: 00595AD0 */

void __thiscall clDataStr::DumpStr(clDataStr *this)

{
  printf(s___s__,*(undefined4 *)(this + 0xc));
  return;
}




/* from: libgsutility:DataList_.cpp
   addr: 00595AF0 */

void __thiscall clDataStr::DumpStr(clDataStr *this,clOutputBuffer *param_1)

{
  char cVar1;
  int iVar2;
  clOutputBuffer *this_00;
  clOutputBuffer *pcVar3;
  clOutputBuffer **ppcVar4;
  uint uVar5;
  char *pcVar6;
  clDataStr *local_4;
  
  this_00 = param_1;
  pcVar3 = param_1 + 4;
  local_4 = this;
  if (*(int *)pcVar3 + 1 == *(int *)(param_1 + 8)) {
    iVar2 = *(int *)param_1;
    param_1 = (clOutputBuffer *)0x1;
    local_4 = (clDataStr *)(*(int *)pcVar3 - iVar2);
    ppcVar4 = &param_1;
    if (local_4 != (clDataStr *)0x0) {
      ppcVar4 = (clOutputBuffer **)&local_4;
    }
    _STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::reserve
              ((basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *)
               this_00,(uint)(*ppcVar4 + (int)local_4));
  }
  *(undefined1 *)(*(int *)(this_00 + 4) + 1) = 0;
  **(undefined1 **)(this_00 + 4) = 0x22;
  *(int *)(this_00 + 4) = *(int *)(this_00 + 4) + 1;
  pcVar3 = operator<<(this_00,this);
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
             pcVar3,&s___,(char *)(~uVar5 + 0x5fe82f),(forward_iterator_tag *)&param_1);
  return;
}




/* from: libgsutility:DataList_.cpp
   addr: 00595BA0
   addr: 00595BA0 */

void * __thiscall clDataStr::_scalar_deleting_destructor_(clDataStr *this,uint param_1)

{
  ~clDataStr(this);
  if ((param_1 & 1) != 0) {
    ExtAlloc_Free_4(this);
  }
  return this;
}




/* from: libgsutility:DataList_.cpp
   addr: 00595BC0 */

void __thiscall clDataStr::~clDataStr(clDataStr *this)

{
  *(undefined ***)this = &_vftable_;
  ExtAlloc_Free_4(*(undefined4 *)(this + 0xc));
  *(undefined ***)this = &clData::_vftable_;
  return;
}




/* from: libgsutility:DataList_.cpp
   addr: 00595BF0 */

basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> * __thiscall
_STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::
basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>
          (basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *this)

{
  undefined1 *puVar1;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  puVar1 = (undefined1 *)ExtAlloc_Malloc_4(8);
  *(undefined1 **)this = puVar1;
  *(undefined1 **)(this + 4) = puVar1;
  *(undefined1 **)(this + 8) = puVar1 + 8;
  *puVar1 = 0;
  return this;
}




/* from: libgsutility:DataList_.cpp
   addr: 00595C20 */

void __thiscall
_STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::reserve
          (basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *this,
          uint param_1)

{
  uint uVar1;
  basic_string<char,class__STL::char_traits<char>,class__STL::allocator<char>_> *pbVar2;
  uint *puVar3;
  undefined1 *_Dst;
  void *pvVar4;
  undefined1 *puVar5;
  uint local_130;
  allocator<char> local_129;
  basic_string<char,class__STL::char_traits<char>,class__STL::allocator<char>_> local_128 [12];
  length_error local_11c [272];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c844b;
  local_c = ExceptionList;
  if (param_1 != 0xffffffff) {
    local_130 = *(int *)(this + 4) - *(int *)this;
    puVar3 = &local_130;
    if ((uint)(*(int *)(this + 4) - *(int *)this) <= param_1) {
      puVar3 = &param_1;
    }
    uVar1 = *puVar3;
    ExceptionList = &local_c;
    _Dst = (undefined1 *)ExtAlloc_Malloc_4(uVar1 + 1);
    pvVar4 = *(void **)this;
    puVar5 = _Dst;
    if (*(void **)(this + 4) != pvVar4) {
      local_130 = (int)*(void **)(this + 4) - (int)pvVar4;
      pvVar4 = memmove(_Dst,pvVar4,local_130);
      puVar5 = (undefined1 *)((int)pvVar4 + local_130);
    }
    *puVar5 = 0;
    ExtAlloc_Free_4(*(undefined4 *)this);
    *(undefined1 **)this = _Dst;
    *(undefined1 **)(this + 4) = puVar5;
    *(undefined1 **)(this + 8) = _Dst + uVar1 + 1;
    ExceptionList = local_c;
    return;
  }
  ExceptionList = &local_c;
  pbVar2 = (basic_string<char,class__STL::char_traits<char>,class__STL::allocator<char>_> *)
           basic_string<char,class__STL::char_traits<char>,class__STL::allocator<char>_>::
           basic_string<char,class__STL::char_traits<char>,class__STL::allocator<char>_>
                     (local_128,s_basic_string,&local_129);
  local_4 = 0;
  length_error::length_error(local_11c,pbVar2);
                    /* WARNING: Subroutine does not return */
  CxxThrowException_8(local_11c,&__TI4_AVlength_error__STL__);
}




/* from: libgsutility:DataList_.cpp
   addr: 00595D10 */

void __thiscall clDataStrRef::DumpStr(clDataStrRef *this,clOutputBuffer *param_1)

{
  clOutputBuffer *pcVar1;
  char cVar2;
  int iVar3;
  clOutputBuffer *this_00;
  clOutputBuffer **ppcVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  forward_iterator_tag local_5;
  clOutputBuffer *local_4;
  
  this_00 = param_1;
  pcVar1 = param_1 + 4;
  if (*(int *)pcVar1 + 1 == *(int *)(param_1 + 8)) {
    iVar3 = *(int *)param_1;
    param_1 = (clOutputBuffer *)0x1;
    local_4 = (clOutputBuffer *)(*(int *)pcVar1 - iVar3);
    ppcVar4 = &param_1;
    if (local_4 != (clOutputBuffer *)0x0) {
      ppcVar4 = &local_4;
    }
    _STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::reserve
              ((basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *)
               this_00,(uint)(*ppcVar4 + (int)local_4));
  }
  *(undefined1 *)(*(int *)(this_00 + 4) + 1) = 0;
  **(undefined1 **)(this_00 + 4) = 0x22;
  *(int *)(this_00 + 4) = *(int *)(this_00 + 4) + 1;
  pcVar7 = *(char **)(this + 0xc);
  uVar5 = 0xffffffff;
  pcVar6 = pcVar7;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar2 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar2 != '\0');
  _STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::append
            ((basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *)
             this_00,pcVar7,pcVar7 + (~uVar5 - 1),(forward_iterator_tag *)&param_1);
  uVar5 = 0xffffffff;
  pcVar7 = &s___;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar2 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar2 != '\0');
  local_5 = param_1._0_1_;
  _STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::append
            ((basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *)
             this_00,&s___,(char *)(~uVar5 + 0x5fe82f),&local_5);
  return;
}




/* from: libgsutility:DataList_.cpp
   addr: 00595DD0 */

uint __thiscall clDataStrRef::Size(clDataStrRef *this)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  
  uVar2 = 0xffffffff;
  pcVar3 = *(char **)(this + 0xc);
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  return ~uVar2 - 1;
}




/* from: libgsutility:DataList_.cpp
   addr: 00595DF0
   addr: 00595DF0
   addr: 00595DF0
   addr: 00595DF0
   addr: 00595DF0
   addr: 00595DF0 */

void * __thiscall clDataLong::_vector_deleting_destructor_(clDataLong *this,uint param_1)

{
  clDataRef::~clDataRef((clDataRef *)this);
  if ((param_1 & 1) != 0) {
    ExtAlloc_Free_4(this);
  }
  return this;
}




/* from: libgsutility:DataList_.cpp
   addr: 00595E10 */

void __thiscall clDataLong::DumpStr(clDataLong *this)

{
  printf(s__L_d_,*(undefined4 *)(this + 0x10));
  return;
}




/* WARNING: Type propagation algorithm not settling */
/* from: libgsutility:DataList_.cpp
   addr: 00595E30 */

void __thiscall clDataLong::DumpStr(clDataLong *this,clOutputBuffer *param_1)

{
  char cVar1;
  clOutputBuffer *this_00;
  uint uVar2;
  char *pcVar3;
  forward_iterator_tag local_22;
  forward_iterator_tag local_21;
  char local_20 [32];
  
  this_00 = param_1;
  local_22 = param_1._0_1_;
  uVar2 = 0xffffffff;
  pcVar3 = &s__L;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  _STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::append
            ((basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *)
             param_1,&s__L,(char *)(~uVar2 + 0x5fe83b),&local_22);
  sprintf(local_20,s__d,*(undefined4 *)(this + 0x10));
  uVar2 = 0xffffffff;
  pcVar3 = local_20;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  _STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::append
            ((basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *)
             this_00,local_20,(char *)(&local_21 + ~uVar2),(forward_iterator_tag *)&param_1);
  uVar2 = 0xffffffff;
  pcVar3 = &s__;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  local_21 = param_1._0_1_;
  _STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::append
            ((basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *)
             this_00,&s__,s_unknown_obj + ~uVar2 + 0xb,&local_21);
  return;
}




/* from: libgsutility:DataList_.cpp
   addr: 00595F40 */

void __thiscall
_STL::vector<char,class_ExtAlloc::Allocator<char>_>::M_insert_dispatch
          (vector<char,class_ExtAlloc::Allocator<char>_> *this,char *param_1,char *param_2,
          char *param_3,__false_type *param_4)

{
  forward_iterator_tag local_1;
  
  M_range_insert(this,param_1,param_2,param_3,&local_1);
  return;
}




/* from: libgsutility:DataList_.cpp
   addr: 00595F70
   addr: 00595F70
   addr: 00595F70
   addr: 00595F70
   addr: 00595F70
   addr: 00595F70 */

int __cdecl
_STL::distance(_List_iterator<class_clData*,struct__STL::_Const_traits<class_clData*>_> *param_1,
              _List_iterator<class_clData*,struct__STL::_Const_traits<class_clData*>_> *param_2,
              input_iterator_tag *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  for (puVar1 = *(undefined4 **)param_1; puVar1 != *(undefined4 **)param_2;
      puVar1 = (undefined4 *)*puVar1) {
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}




/* from: libgsutility:DataList_.cpp
   addr: 00595F90 */

basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> * __thiscall
_STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::
M_append_dispatch(basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>
                  *this,char *param_1,char *param_2,__false_type *param_3)

{
  basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *pbVar1;
  forward_iterator_tag local_1;
  
  pbVar1 = append(this,param_1,param_2,&local_1);
  return pbVar1;
}




/* from: libgsutility:DataList_.cpp
   addr: 00595FC0 */

basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> * __thiscall
_STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::
M_append_dispatch(basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>
                  *this,char *param_1,char *param_2,__false_type *param_3)

{
  basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *pbVar1;
  forward_iterator_tag local_1;
  
  pbVar1 = append(this,param_1,param_2,&local_1);
  return pbVar1;
}




/* from: libgsutility:DataList_.cpp
   addr: 00595FF0 */

void __thiscall
_STL::basic_string<char,class__STL::char_traits<char>,class__STL::allocator<char>_>::
M_range_initialize(basic_string<char,class__STL::char_traits<char>,class__STL::allocator<char>_>
                   *this,char *param_1,char *param_2,forward_iterator_tag *param_3)

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




/* from: libgsutility:DataList_.cpp
   addr: 00596070 */

void __thiscall
_STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::
M_range_initialize(basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>
                   *this,char *param_1,char *param_2,forward_iterator_tag *param_3)

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




/* from: libgsutility:DataList_.cpp
   addr: 005960D0 */

void __thiscall
_STL::vector<char,class_ExtAlloc::Allocator<char>_>::M_range_insert
          (vector<char,class_ExtAlloc::Allocator<char>_> *this,char *param_1,char *param_2,
          char *param_3,forward_iterator_tag *param_4)

{
  int iVar1;
  void **ppvVar2;
  uint uVar3;
  void *pvVar4;
  void *pvVar5;
  char *_Dst;
  uint *puVar6;
  size_t sVar7;
  uint uVar8;
  __true_type local_9;
  uint local_8;
  uint local_4;
  
  if (param_2 != param_3) {
    iVar1 = *(int *)(this + 4);
    uVar8 = (int)param_3 - (int)param_2;
    local_8 = uVar8;
    if (uVar8 <= (uint)(*(int *)(this + 8) - iVar1)) {
      uVar3 = iVar1 - (int)param_1;
      ppvVar2 = *(void ***)(this + 4);
      if (uVar8 < uVar3) {
        local_9 = param_1._0_1_;
        copy_aux((void **)((int)ppvVar2 - uVar8),ppvVar2,ppvVar2,&local_9);
        *(uint *)(this + 4) = *(int *)(this + 4) + uVar8;
        sVar7 = (int)((int)ppvVar2 - uVar8) - (int)param_1;
        if (0 < (int)sVar7) {
          memmove((void *)((int)ppvVar2 - sVar7),param_1,sVar7);
        }
        copy_trivial(param_2,param_3,param_1);
        return;
      }
      copy_trivial(param_2 + uVar3,param_3,ppvVar2);
      pvVar4 = (void *)(*(int *)(this + 4) + (uVar8 - uVar3));
      *(void **)(this + 4) = pvVar4;
      copy_trivial(param_1,ppvVar2,pvVar4);
      *(uint *)(this + 4) = *(int *)(this + 4) + uVar3;
      copy_trivial(param_2,param_2 + uVar3,param_1);
      return;
    }
    puVar6 = &local_8;
    uVar3 = iVar1 - *(int *)this;
    local_4 = uVar3;
    if (uVar8 <= uVar3) {
      puVar6 = &local_4;
    }
    uVar8 = *puVar6;
    pvVar4 = (void *)ExtAlloc_Malloc_4(uVar8 + uVar3);
    pvVar5 = copy_trivial(*(void **)this,param_1,pvVar4);
    _Dst = (char *)copy_trivial(param_2,param_3,pvVar5);
    if (*(char **)(this + 4) != param_1) {
      sVar7 = (int)*(char **)(this + 4) - (int)param_1;
      pvVar5 = memmove(_Dst,param_1,sVar7);
      _Dst = (char *)((int)pvVar5 + sVar7);
    }
    param_1 = _Dst;
    ExtAlloc_Free_4(*(undefined4 *)this);
    *(void **)this = pvVar4;
    *(char **)(this + 4) = param_1;
    *(uint *)(this + 8) = (int)pvVar4 + uVar8 + uVar3;
  }
  return;
}




/* from: libgsutility:DataList_.cpp
   addr: 00596230 */

basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> * __thiscall
_STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::append
          (basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *this,
          char *param_1,char *param_2,forward_iterator_tag *param_3)

{
  char *_Src;
  char **ppcVar1;
  void *pvVar2;
  void *pvVar3;
  char *_Size;
  char *pcVar4;
  
  _Src = param_1;
  if (param_1 != param_2) {
    pcVar4 = (char *)(*(int *)(this + 4) - *(int *)this);
    _Size = param_2 + -(int)param_1;
    param_1 = pcVar4;
    if ((_Size == (char *)0xffffffff) || ((char *)(-(int)_Size - 2U) < pcVar4)) {
      stl_throw_length_error(s_basic_string);
    }
    if ((char *)((*(int *)(this + 8) - *(int *)this) - 1U) < _Size + (int)pcVar4) {
      param_2 = _Size;
      ppcVar1 = &param_2;
      if (_Size <= pcVar4) {
        ppcVar1 = &param_1;
      }
      param_2 = *ppcVar1 + 1 + (int)pcVar4;
      pvVar2 = (void *)ExtAlloc_Malloc_4(param_2);
      pvVar3 = copy_trivial(*(void **)this,*(void **)(this + 4),pvVar2);
      pvVar3 = memmove(pvVar3,_Src,(size_t)_Size);
      *(char *)((int)pvVar3 + (int)_Size) = '\0';
      ExtAlloc_Free_4(*(undefined4 *)this);
      *(void **)this = pvVar2;
      *(char **)(this + 4) = (char *)((int)pvVar3 + (int)_Size);
      *(char **)(this + 8) = (char *)((int)pvVar2 + (int)param_2);
      return this;
    }
    pcVar4 = _Src + 1;
    if (param_2 != pcVar4) {
      memmove((void *)(*(int *)(this + 4) + 1),pcVar4,(int)param_2 - (int)pcVar4);
    }
    _Size[*(int *)(this + 4)] = '\0';
    **(char **)(this + 4) = *_Src;
    *(char **)(this + 4) = _Size + *(int *)(this + 4);
  }
  return this;
}

