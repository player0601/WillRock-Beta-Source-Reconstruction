
/* from: libgsutility:DataSerialize.cpp
   addr: 00596D30 */

void __thiscall clDataSerialize::clDataSerialize(clDataSerialize *this)

{
  int in_stack_00000004;
  
  *(undefined ***)this = &_vftable_;
  if (in_stack_00000004 != 0) {
    *(undefined1 **)(this + 4) = &_vbtable_;
  }
  return;
}




/* from: libgsutility:DataSerialize.cpp
   addr: 00596D60
   addr: 00596D60 */

void * __thiscall clDataSerialize::_scalar_deleting_destructor_(clDataSerialize *this,uint param_1)

{
  ~clDataSerialize(this);
  if ((param_1 & 1) != 0) {
    ExtAlloc_Free_4(this);
  }
  return this;
}




/* from: libgsutility:DataSerialize.cpp
   addr: 00596D90 */

uchar __thiscall
clDataSerialize::CreateListFromBin(clDataSerialize *this,clDataBin *param_1,clDataList *param_2)

{
  clDataList cVar1;
  clDataList *pcVar2;
  clDataList *pcVar3;
  uchar uVar4;
  bool bVar5;
  
  pcVar3 = param_2;
  bVar5 = false;
  (**(code **)(*(int *)(param_2 + 0xc) + 4))();
  param_2 = *(clDataList **)(param_1 + 0xc);
  pcVar2 = *(clDataList **)(param_1 + 0x10);
  while (param_2 != pcVar2) {
    cVar1 = *param_2;
    param_2 = param_2 + 1;
    switch(cVar1) {
    case (clDataList)0x4c:
      uVar4 = ExtractLong(this,param_1,(char **)&param_2,pcVar3);
      break;
    default:
      bVar5 = true;
      goto LAB_00596e2d;
    case (clDataList)0x5b:
      uVar4 = ExtractSubList(this,param_1,(char **)&param_2,pcVar3);
      break;
    case (clDataList)0x62:
      uVar4 = ExtractBin(this,param_1,(char **)&param_2,pcVar3);
      break;
    case (clDataList)0x73:
      uVar4 = ExtractStr(this,param_1,(char **)&param_2,pcVar3);
    }
    bVar5 = uVar4 == '\0';
    if (bVar5) {
      return !bVar5;
    }
  }
LAB_00596e2d:
  return !bVar5;
}




/* from: libgsutility:DataSerialize.cpp
   addr: 00596E80 */

uchar __thiscall
clDataSerialize::ExtractSubList
          (clDataSerialize *this,clDataBin *param_1,char **param_2,clDataList *param_3)

{
  clDataList *pcVar1;
  list<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_> *this_00;
  char cVar2;
  char *pcVar3;
  char **ppcVar4;
  uchar uVar5;
  clDataList *pcVar6;
  _List_node<class_clData*> *p_Var7;
  bool bVar8;
  Allocator<class_clProxyMessage*> local_21;
  undefined4 local_20;
  clDataList *local_1c;
  char *local_18;
  clDataList *local_14;
  _List_base<class_clProxyMessage*,class_ExtAlloc::Allocator<class_clProxyMessage*>_> *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c8524;
  local_c = ExceptionList;
  local_20 = 0;
  local_18 = *(char **)(param_1 + 0x10);
  bVar8 = false;
  ExceptionList = &local_c;
  pcVar6 = (clDataList *)ExtAlloc_Malloc_4(0x18);
  local_14 = pcVar6;
  if (pcVar6 == (clDataList *)0x0) {
    pcVar6 = (clDataList *)0x0;
  }
  else {
    *(undefined4 **)(pcVar6 + 4) = &clDataList::_vbtable__for__clData__;
    *(undefined8 **)(pcVar6 + 0x14) = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
    local_20 = 1;
    *(undefined4 *)(pcVar6 + 8) = 3;
    *(undefined ***)pcVar6 = &clData::_vftable_;
    pcVar1 = pcVar6 + 0xc;
    local_10 = (_List_base<class_clProxyMessage*,class_ExtAlloc::Allocator<class_clProxyMessage*>_>
                *)(pcVar6 + 0x10);
    local_4 = 5;
    local_1c = pcVar1;
    _STL::_List_base<class_clProxyMessage*,class_ExtAlloc::Allocator<class_clProxyMessage*>_>::
    List_base<class_clProxyMessage*,class_ExtAlloc::Allocator<class_clProxyMessage*>_>
              (local_10,&local_21);
    *(undefined ***)pcVar1 = &clPointerList<class_clData*>::_vftable_;
    *(undefined ***)pcVar6 = &clDataList::_vftable__for__clData__;
    *(undefined ***)pcVar1 = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  }
  ppcVar4 = param_2;
  local_4 = 0xffffffff;
  do {
    pcVar3 = *ppcVar4;
    if (pcVar3 == local_18) break;
    cVar2 = *pcVar3;
    *ppcVar4 = pcVar3 + 1;
    switch(cVar2) {
    case 'L':
      uVar5 = ExtractLong(this,param_1,ppcVar4,pcVar6);
      break;
    default:
      bVar8 = true;
      goto switchD_00596f4f_caseD_5d;
    case '[':
      uVar5 = ExtractSubList(this,param_1,ppcVar4,pcVar6);
      break;
    case ']':
      goto switchD_00596f4f_caseD_5d;
    case 'b':
      uVar5 = ExtractBin(this,param_1,ppcVar4,pcVar6);
      break;
    case 's':
      uVar5 = ExtractStr(this,param_1,ppcVar4,pcVar6);
    }
    bVar8 = uVar5 == '\0';
  } while (!bVar8);
switchD_00596f4f_caseD_5d:
  this_00 = (list<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_> *)
            (param_3 + 0x10);
  param_1 = (clDataBin *)pcVar6;
  _STL::list<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_>::end(this_00);
  p_Var7 = _STL::list<class_clData*,class_ExtAlloc::Allocator<class_clData*>_>::M_create_node
                     ((list<class_clData*,class_ExtAlloc::Allocator<class_clData*>_> *)this_00,
                      (clData **)&param_1);
  pcVar3 = param_2[1];
  *(char ***)p_Var7 = param_2;
  *(char **)(p_Var7 + 4) = pcVar3;
  *(_List_node<class_clData*> **)pcVar3 = p_Var7;
  param_2[1] = (char *)p_Var7;
  ExceptionList = local_c;
  return !bVar8;
}




/* from: libgsutility:DataSerialize.cpp
   addr: 00597040 */

uchar __thiscall
clDataSerialize::ExtractStr
          (clDataSerialize *this,clDataBin *param_1,char **param_2,clDataList *param_3)

{
  list<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_> *plVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  undefined4 *puVar5;
  char **ppcVar6;
  clDataBin *pcVar7;
  undefined1 *puVar8;
  _List_node<class_clData*> *p_Var9;
  clDataBin **ppcVar10;
  clDataBin *pcVar11;
  basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *this_00;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c8564;
  local_c = ExceptionList;
  pcVar3 = *(char **)(param_1 + 0x10);
  ExceptionList = &local_c;
  pcVar7 = (clDataBin *)ExtAlloc_Malloc_4(0x18);
  pcVar11 = (clDataBin *)0x0;
  if (pcVar7 != (clDataBin *)0x0) {
    *(undefined1 **)(pcVar7 + 4) = &clDataStr::_vbtable_;
    *(undefined4 *)(pcVar7 + 8) = 1;
    *(undefined ***)pcVar7 = &clData::_vftable_;
    local_4 = 3;
    _STL::_Vector_base<char,class_ExtAlloc::Allocator<char>_>::
    Vector_base<char,class_ExtAlloc::Allocator<char>_>
              ((_Vector_base<char,class_ExtAlloc::Allocator<char>_> *)(pcVar7 + 0xc),
               (Allocator<char> *)&param_1);
    puVar8 = (undefined1 *)ExtAlloc_Malloc_4(8);
    *(undefined1 **)(pcVar7 + 0xc) = puVar8;
    *(undefined1 **)(pcVar7 + 0x10) = puVar8;
    *(undefined1 **)(pcVar7 + 0x14) = puVar8 + 8;
    *puVar8 = 0;
    *(undefined ***)pcVar7 = &clDataStr::_vftable_;
    pcVar11 = pcVar7;
  }
  ppcVar6 = param_2;
  local_4 = 0xffffffff;
  if (pcVar11 == (clDataBin *)0x0) {
    this_00 = (basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *)
              0x0;
  }
  else {
    this_00 = (basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_> *)
              (pcVar11 + 0xc);
  }
  pcVar4 = *param_2;
  while( true ) {
    if (pcVar4 == pcVar3) {
      plVar1 = (list<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_> *)
               (param_3 + 0x10);
      param_2 = (char **)pcVar11;
      _STL::list<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_>::end(plVar1);
      p_Var9 = _STL::list<class_clData*,class_ExtAlloc::Allocator<class_clData*>_>::M_create_node
                         ((list<class_clData*,class_ExtAlloc::Allocator<class_clData*>_> *)plVar1,
                          (clData **)&param_2);
      puVar5 = *(undefined4 **)(pcVar3 + 4);
      *(char **)p_Var9 = pcVar3;
      *(undefined4 **)(p_Var9 + 4) = puVar5;
      *puVar5 = p_Var9;
      *(_List_node<class_clData*> **)(pcVar3 + 4) = p_Var9;
      ExceptionList = local_c;
      return '\0';
    }
    cVar2 = *pcVar4;
    *ppcVar6 = pcVar4 + 1;
    if (cVar2 == '\0') break;
    if (*(int *)(this_00 + 4) + 1 == *(int *)(this_00 + 8)) {
      param_1 = (clDataBin *)0x1;
      param_2 = (char **)(*(int *)(this_00 + 4) - *(int *)this_00);
      ppcVar10 = &param_1;
      if (param_2 != (char **)0x0) {
        ppcVar10 = (clDataBin **)&param_2;
      }
      _STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>::
      reserve(this_00,(uint)(*ppcVar10 + (int)param_2));
    }
    *(undefined1 *)(*(int *)(this_00 + 4) + 1) = 0;
    **(char **)(this_00 + 4) = cVar2;
    *(int *)(this_00 + 4) = *(int *)(this_00 + 4) + 1;
    pcVar4 = *ppcVar6;
  }
  plVar1 = (list<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_> *)
           (param_3 + 0x10);
  param_1 = pcVar11;
  _STL::list<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_>::end(plVar1);
  p_Var9 = _STL::list<class_clData*,class_ExtAlloc::Allocator<class_clData*>_>::M_create_node
                     ((list<class_clData*,class_ExtAlloc::Allocator<class_clData*>_> *)plVar1,
                      (clData **)&param_1);
  puVar5 = *(undefined4 **)(param_3 + 4);
  *(clDataList **)p_Var9 = param_3;
  *(undefined4 **)(p_Var9 + 4) = puVar5;
  *puVar5 = p_Var9;
  *(_List_node<class_clData*> **)(param_3 + 4) = p_Var9;
  ExceptionList = local_c;
  return '\x01';
}




/* from: libgsutility:DataSerialize.cpp
   addr: 005971E0 */

uchar __thiscall
clDataSerialize::ExtractLong
          (clDataSerialize *this,clDataBin *param_1,char **param_2,clDataList *param_3)

{
  list<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_> *this_00;
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  bool bVar4;
  clDataLong *pcVar5;
  _List_node<class_clData*> *p_Var6;
  clDataLong *this_01;
  int *piVar7;
  
  piVar1 = *(int **)(param_1 + 0x10);
  piVar7 = (int *)*param_2;
  bVar4 = false;
  pcVar5 = (clDataLong *)ExtAlloc_Malloc_4(0x14);
  this_01 = (clDataLong *)0x0;
  if (pcVar5 != (clDataLong *)0x0) {
    *(undefined1 **)(pcVar5 + 4) = &clDataLong::_vbtable_;
    *(undefined4 *)(pcVar5 + 8) = 4;
    *(undefined ***)pcVar5 = &clDataLong::_vftable_;
    this_01 = pcVar5;
  }
  if (((piVar7 == piVar1) || ((int *)((int)piVar7 + 1) == piVar1)) ||
     ((uint)((int)piVar1 - (int)piVar7) < 4)) {
    bVar4 = true;
  }
  else {
    iVar2 = *piVar7;
    piVar7 = piVar7 + 1;
    clDataLong::AddNetValue(this_01,iVar2);
  }
  this_00 = (list<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_> *)
            (param_3 + 0x10);
  param_1 = (clDataBin *)this_01;
  _STL::list<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_>::end(this_00);
  p_Var6 = _STL::list<class_clData*,class_ExtAlloc::Allocator<class_clData*>_>::M_create_node
                     ((list<class_clData*,class_ExtAlloc::Allocator<class_clData*>_> *)this_00,
                      (clData **)&param_1);
  puVar3 = *(undefined4 **)(param_3 + 4);
  *(clDataList **)p_Var6 = param_3;
  *(undefined4 **)(p_Var6 + 4) = puVar3;
  *puVar3 = p_Var6;
  *(_List_node<class_clData*> **)(param_3 + 4) = p_Var6;
  *param_2 = (char *)piVar7;
  return !bVar4;
}




/* from: libgsutility:DataSerialize.cpp
   addr: 00597290 */

uchar __thiscall
clDataSerialize::ExtractBin
          (clDataSerialize *this,clDataBin *param_1,char **param_2,clDataList *param_3)

{
  list<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_> *this_00;
  u_long *puVar1;
  undefined4 *puVar2;
  bool bVar3;
  char **ppcVar4;
  clDataBin *pcVar5;
  u_long uVar6;
  _List_node<class_clData*> *p_Var7;
  u_long *puVar8;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  ppcVar4 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c85a4;
  pvStack_c = ExceptionList;
  puVar8 = (u_long *)*param_2;
  puVar1 = *(u_long **)(param_1 + 0x10);
  bVar3 = false;
  ExceptionList = &pvStack_c;
  pcVar5 = (clDataBin *)ExtAlloc_Malloc_4(0x1c);
  param_1 = pcVar5;
  if (pcVar5 == (clDataBin *)0x0) {
    pcVar5 = (clDataBin *)0x0;
  }
  else {
    *(undefined4 **)(pcVar5 + 4) = &clDataBin::_vbtable__for__clData__;
    *(undefined8 **)(pcVar5 + 0x18) = &clDataBin::_vbtable__for__ExtAlloc__vector<char>__;
    *(undefined4 *)(pcVar5 + 8) = 2;
    *(undefined ***)pcVar5 = &clData::_vftable_;
    local_4 = 4;
    _STL::vector<char,class_ExtAlloc::Allocator<char>_>::
    vector<char,class_ExtAlloc::Allocator<char>_>
              ((vector<char,class_ExtAlloc::Allocator<char>_> *)(pcVar5 + 0xc),
               (Allocator<char> *)&param_2);
    *(undefined ***)pcVar5 = &clDataBin::_vftable_;
  }
  local_4 = 0xffffffff;
  if ((puVar8 != puVar1) && ((u_long *)((int)puVar8 + 1) != puVar1)) {
    param_2 = (char **)*puVar8;
    puVar8 = puVar8 + 1;
    uVar6 = ntohl((u_long)param_2);
    if (uVar6 <= (uint)((int)puVar1 - (int)puVar8)) {
      *ppcVar4 = (char *)puVar8;
      puVar8 = (u_long *)((int)puVar8 + uVar6);
      _STL::vector<char,class_ExtAlloc::Allocator<char>_>::M_range_insert
                ((vector<char,class_ExtAlloc::Allocator<char>_> *)(pcVar5 + 0xc),
                 *(char **)(pcVar5 + 0xc),*ppcVar4,(char *)puVar8,(forward_iterator_tag *)&param_2);
      goto LAB_0059738b;
    }
  }
  bVar3 = true;
LAB_0059738b:
  this_00 = (list<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_> *)
            (param_3 + 0x10);
  param_1 = pcVar5;
  _STL::list<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_>::end(this_00);
  p_Var7 = _STL::list<class_clData*,class_ExtAlloc::Allocator<class_clData*>_>::M_create_node
                     ((list<class_clData*,class_ExtAlloc::Allocator<class_clData*>_> *)this_00,
                      (clData **)&param_1);
  puVar2 = *(undefined4 **)(param_3 + 4);
  *(clDataList **)p_Var7 = param_3;
  *(undefined4 **)(p_Var7 + 4) = puVar2;
  *puVar2 = p_Var7;
  *(_List_node<class_clData*> **)(param_3 + 4) = p_Var7;
  *ppcVar4 = (char *)puVar8;
  ExceptionList = pvStack_c;
  return !bVar3;
}




/* WARNING: Removing unreachable block (ram,0x00597406) */
/* from: libgsutility:DataSerialize.cpp
   addr: 005973F0 */

uchar __thiscall
clDataSerialize::CreateBinFromList(clDataSerialize *this,clDataList *param_1,clDataBin *param_2)

{
  uchar uVar1;
  
  *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_2 + 0xc);
  uVar1 = SerializeList(this,param_1,param_2);
  return uVar1;
}




/* from: libgsutility:DataSerialize.cpp
   addr: 00597430 */

uchar __thiscall
clDataSerialize::SerializeList(clDataSerialize *this,clDataList *param_1,clDataBin *param_2)

{
  vector<char,class_ExtAlloc::Allocator<char>_> *this_00;
  clDataList *pcVar1;
  char *pcVar2;
  clDataBin *pcVar3;
  uchar uVar4;
  undefined4 *puVar5;
  bool bVar6;
  __true_type local_9;
  clDataSerialize *local_8;
  undefined4 *local_4;
  
  local_4 = *(undefined4 **)(param_1 + 0x10);
  bVar6 = false;
  puVar5 = (undefined4 *)*local_4;
  local_8 = this;
  do {
    pcVar3 = param_2;
    if (puVar5 == local_4) {
LAB_00597536:
      return !bVar6;
    }
    pcVar1 = (clDataList *)puVar5[2];
    switch(*(undefined4 *)(pcVar1 + 8)) {
    case 1:
      uVar4 = SerializeStr(local_8,(clDataStr *)pcVar1,param_2);
      break;
    case 2:
      uVar4 = SerializeBin(local_8,(clDataBin *)pcVar1,param_2);
      break;
    case 3:
      pcVar2 = *(char **)(param_2 + 0x10);
      this_00 = (vector<char,class_ExtAlloc::Allocator<char>_> *)(param_2 + 0xc);
      if (pcVar2 == *(char **)(param_2 + 0x14)) {
        _STL::vector<char,class_ExtAlloc::Allocator<char>_>::M_insert_overflow
                  (this_00,pcVar2,"[]sLb",(__true_type *)&param_1,1,true);
      }
      else {
        if (pcVar2 != (char *)0x0) {
          *pcVar2 = '[';
        }
        *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 1;
      }
      uVar4 = SerializeList(local_8,pcVar1,pcVar3);
      bVar6 = uVar4 == '\0';
      pcVar2 = *(char **)(pcVar3 + 0x10);
      if (pcVar2 == *(char **)(pcVar3 + 0x14)) {
        _STL::vector<char,class_ExtAlloc::Allocator<char>_>::M_insert_overflow
                  (this_00,pcVar2,"]sLb",&local_9,1,true);
      }
      else {
        if (pcVar2 != (char *)0x0) {
          *pcVar2 = ']';
        }
        *(int *)(pcVar3 + 0x10) = *(int *)(pcVar3 + 0x10) + 1;
      }
      goto LAB_00597521;
    case 4:
      uVar4 = SerializeLong(local_8,(clDataLong *)pcVar1,param_2);
      break;
    case 5:
      uVar4 = SerializeStrRef(local_8,(clDataStrRef *)pcVar1,param_2);
      break;
    case 6:
      uVar4 = SerializeRef(local_8,*(clData **)(pcVar1 + 0xc),param_2);
      break;
    default:
      bVar6 = true;
      goto LAB_00597536;
    }
    bVar6 = uVar4 == '\0';
LAB_00597521:
    puVar5 = (undefined4 *)*puVar5;
    if (bVar6) {
      return !bVar6;
    }
  } while( true );
}




/* from: libgsutility:DataSerialize.cpp
   addr: 00597560 */

uchar __thiscall
clDataSerialize::SerializeStr(clDataSerialize *this,clDataStr *param_1,clDataBin *param_2)

{
  vector<char,class_ExtAlloc::Allocator<char>_> *this_00;
  char *pcVar1;
  undefined1 *puVar2;
  clDataBin *pcVar3;
  undefined1 *_Src;
  clDataBin *pcVar4;
  clDataStr *pcVar5;
  undefined1 *_Dst;
  void *pvVar6;
  undefined1 *puVar7;
  clDataBin **ppcVar8;
  
  pcVar4 = param_2;
  pcVar1 = *(char **)(param_2 + 0x10);
  this_00 = (vector<char,class_ExtAlloc::Allocator<char>_> *)(param_2 + 0xc);
  if (pcVar1 == *(char **)(param_2 + 0x14)) {
    _STL::vector<char,class_ExtAlloc::Allocator<char>_>::M_insert_overflow
              (this_00,pcVar1,"sLb",(__true_type *)&param_2,1,true);
  }
  else {
    if (pcVar1 != (char *)0x0) {
      *pcVar1 = 's';
    }
    *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 1;
  }
  _STL::vector<char,class_ExtAlloc::Allocator<char>_>::M_range_insert
            (this_00,*(char **)(pcVar4 + 0x10),*(char **)(param_1 + 0xc),*(char **)(param_1 + 0x10),
             (forward_iterator_tag *)&param_2);
  puVar2 = *(undefined1 **)(pcVar4 + 0x10);
  if (puVar2 == *(undefined1 **)(pcVar4 + 0x14)) {
    pcVar5 = (clDataStr *)(puVar2 + -*(int *)this_00);
    param_2 = (clDataBin *)0x1;
    param_1 = pcVar5;
    ppcVar8 = &param_2;
    if (pcVar5 != (clDataStr *)0x0) {
      ppcVar8 = (clDataBin **)&param_1;
    }
    pcVar3 = *ppcVar8;
    _Dst = (undefined1 *)ExtAlloc_Malloc_4(pcVar3 + (int)pcVar5);
    _Src = *(undefined1 **)this_00;
    puVar7 = _Dst;
    if (puVar2 != _Src) {
      pvVar6 = memmove(_Dst,_Src,(int)puVar2 - (int)_Src);
      puVar7 = (undefined1 *)((int)pvVar6 + ((int)puVar2 - (int)_Src));
    }
    *puVar7 = 0;
    ExtAlloc_Free_4(*(undefined4 *)this_00);
    *(undefined1 **)this_00 = _Dst;
    *(undefined1 **)(pcVar4 + 0x14) = _Dst + (int)(pcVar3 + (int)pcVar5);
    *(undefined1 **)(pcVar4 + 0x10) = puVar7 + 1;
    return '\x01';
  }
  if (puVar2 != (undefined1 *)0x0) {
    *puVar2 = 0;
  }
  *(int *)(pcVar4 + 0x10) = *(int *)(pcVar4 + 0x10) + 1;
  return '\x01';
}




/* from: libgsutility:DataSerialize.cpp
   addr: 00597650 */

uchar __thiscall
clDataSerialize::SerializeStrRef(clDataSerialize *this,clDataStrRef *param_1,clDataBin *param_2)

{
  vector<char,class_ExtAlloc::Allocator<char>_> *this_00;
  undefined1 *puVar1;
  undefined1 *_Src;
  clDataBin *pcVar2;
  clDataStrRef *pcVar3;
  clDataBin *_Src_00;
  clDataBin *pcVar4;
  char *_Dst;
  char *pcVar5;
  int iVar6;
  clDataBin *pcVar7;
  clDataBin *_Dst_00;
  void *pvVar8;
  clDataBin *pcVar9;
  clDataBin **ppcVar10;
  clDataStrRef **ppcVar11;
  clDataBin *local_8;
  clDataBin *pcStack_4;
  
  pcVar4 = param_2;
  puVar1 = *(undefined1 **)(param_2 + 0x10);
  this_00 = (vector<char,class_ExtAlloc::Allocator<char>_> *)(param_2 + 0xc);
  if (puVar1 == *(undefined1 **)(param_2 + 0x14)) {
    pcVar7 = (clDataBin *)(puVar1 + -*(int *)this_00);
    param_2 = (clDataBin *)0x1;
    local_8 = pcVar7;
    ppcVar10 = &param_2;
    if (pcVar7 != (clDataBin *)0x0) {
      ppcVar10 = &local_8;
    }
    pcVar2 = *ppcVar10;
    _Dst = (char *)ExtAlloc_Malloc_4(pcVar2 + (int)pcVar7);
    _Src = *(undefined1 **)this_00;
    pcVar5 = _Dst;
    if (puVar1 != _Src) {
      pvVar8 = memmove(_Dst,_Src,(int)puVar1 - (int)_Src);
      pcVar5 = (char *)((int)pvVar8 + ((int)puVar1 - (int)_Src));
    }
    *pcVar5 = 's';
    _STL::
    _STLP_alloc_proxy<struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>*,struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
    ::deallocate((_STLP_alloc_proxy<struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>*,struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
                  *)(pcVar4 + 0x14),
                 *(_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
                   **)this_00,
                 *(int *)(pcVar4 + 0x14) -
                 (int)*(_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
                        **)this_00);
    _STL::vector<char,class_ExtAlloc::Allocator<char>_>::M_set
              (this_00,_Dst,pcVar5 + 1,(char *)(pcVar2 + (int)pcVar7 + (int)_Dst));
  }
  else {
    if (puVar1 != (undefined1 *)0x0) {
      *puVar1 = 0x73;
    }
    *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 1;
  }
  pcVar2 = *(clDataBin **)(param_1 + 0xc);
  iVar6 = (**(code **)(*(int *)param_1 + 0x14))();
  pcVar7 = pcVar2 + iVar6 + 1;
  pcStack_4 = pcVar7;
  param_2 = pcVar2;
  if (pcVar2 != pcVar7) {
    do {
      pcVar2 = *(clDataBin **)(pcVar4 + 0x10);
      if (pcVar2 == *(clDataBin **)(pcVar4 + 0x14)) {
        pcVar7 = pcVar2 + -*(int *)this_00;
        param_1 = (clDataStrRef *)0x1;
        local_8 = pcVar7;
        ppcVar11 = &param_1;
        if (pcVar7 != (clDataBin *)0x0) {
          ppcVar11 = (clDataStrRef **)&local_8;
        }
        pcVar3 = *ppcVar11;
        _Dst_00 = (clDataBin *)ExtAlloc_Malloc_4(pcVar3 + (int)pcVar7);
        _Src_00 = *(clDataBin **)this_00;
        pcVar9 = _Dst_00;
        if (pcVar2 != _Src_00) {
          pvVar8 = memmove(_Dst_00,_Src_00,(int)pcVar2 - (int)_Src_00);
          pcVar9 = (clDataBin *)((int)pvVar8 + ((int)pcVar2 - (int)_Src_00));
        }
        *pcVar9 = *param_2;
        _STL::_String_base<char,class_ExtAlloc::Allocator<char>_>::
        ~_String_base<char,class_ExtAlloc::Allocator<char>_>
                  ((_String_base<char,class_ExtAlloc::Allocator<char>_> *)this_00);
        _STL::vector<char,class_ExtAlloc::Allocator<char>_>::M_set
                  (this_00,(char *)_Dst_00,(char *)(pcVar9 + 1),
                   (char *)(pcVar3 + (int)pcVar7 + (int)_Dst_00));
        pcVar7 = pcStack_4;
      }
      else {
        if (pcVar2 != (clDataBin *)0x0) {
          *pcVar2 = *param_2;
        }
        *(int *)(pcVar4 + 0x10) = *(int *)(pcVar4 + 0x10) + 1;
      }
      param_2 = param_2 + 1;
    } while (param_2 != pcVar7);
  }
  return '\x01';
}




/* from: libgsutility:DataSerialize.cpp
   addr: 005977A0 */

uchar __thiscall
clDataSerialize::SerializeLong(clDataSerialize *this,clDataLong *param_1,clDataBin *param_2)

{
  _String_base<char,class_ExtAlloc::Allocator<char>_> *this_00;
  clDataBin *pcVar1;
  clDataLong *pcVar2;
  int iVar3;
  clDataLong *_Src;
  clDataBin *pcVar4;
  clDataBin *pcVar5;
  char *_Dst;
  char *pcVar6;
  int iVar7;
  undefined1 *puVar8;
  void *pvVar9;
  undefined1 *puVar10;
  clDataBin **ppcVar11;
  int *piVar12;
  clDataBin *local_c;
  int local_8;
  int local_4;
  
  pcVar4 = param_2;
  puVar10 = *(undefined1 **)(param_2 + 0x10);
  this_00 = (_String_base<char,class_ExtAlloc::Allocator<char>_> *)(param_2 + 0xc);
  if (puVar10 == *(undefined1 **)(param_2 + 0x14)) {
    pcVar5 = (clDataBin *)(puVar10 + -*(int *)this_00);
    param_2 = (clDataBin *)0x1;
    local_c = pcVar5;
    ppcVar11 = &param_2;
    if (pcVar5 != (clDataBin *)0x0) {
      ppcVar11 = &local_c;
    }
    pcVar1 = *ppcVar11;
    _Dst = (char *)ExtAlloc_Malloc_4(pcVar1 + (int)pcVar5);
    puVar8 = *(undefined1 **)this_00;
    pcVar6 = _Dst;
    if (puVar10 != puVar8) {
      pvVar9 = memmove(_Dst,puVar8,(int)puVar10 - (int)puVar8);
      pcVar6 = (char *)((int)pvVar9 + ((int)puVar10 - (int)puVar8));
    }
    pcVar6 = _STL::fill_n(pcVar6,1,"Lb");
    _STL::_String_base<char,class_ExtAlloc::Allocator<char>_>::
    ~_String_base<char,class_ExtAlloc::Allocator<char>_>(this_00);
    _STL::vector<char,class_ExtAlloc::Allocator<char>_>::M_set
              ((vector<char,class_ExtAlloc::Allocator<char>_> *)this_00,_Dst,pcVar6,
               (char *)(pcVar1 + (int)pcVar5 + (int)_Dst));
  }
  else {
    if (puVar10 != (undefined1 *)0x0) {
      *puVar10 = 0x4c;
    }
    *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 1;
  }
  local_c = (clDataBin *)0x0;
  do {
    pcVar2 = *(clDataLong **)(pcVar4 + 0x10);
    param_2 = (clDataBin *)CONCAT31(param_2._1_3_,(param_1 + 0xc)[(int)local_c]);
    if (pcVar2 == *(clDataLong **)(pcVar4 + 0x14)) {
      iVar7 = (int)pcVar2 - *(int *)this_00;
      local_8 = 1;
      local_4 = iVar7;
      piVar12 = &local_8;
      if (iVar7 != 0) {
        piVar12 = &local_4;
      }
      iVar3 = *piVar12;
      puVar8 = (undefined1 *)ExtAlloc_Malloc_4(iVar3 + iVar7);
      _Src = *(clDataLong **)this_00;
      puVar10 = puVar8;
      if (pcVar2 != _Src) {
        pvVar9 = memmove(puVar8,_Src,(int)pcVar2 - (int)_Src);
        puVar10 = (undefined1 *)((int)pvVar9 + ((int)pcVar2 - (int)_Src));
      }
      *puVar10 = param_2._0_1_;
      ExtAlloc_Free_4(*(undefined4 *)this_00);
      *(undefined1 **)this_00 = puVar8;
      *(undefined1 **)(pcVar4 + 0x10) = puVar10 + 1;
      *(undefined1 **)(pcVar4 + 0x14) = puVar8 + iVar3 + iVar7;
    }
    else {
      if (pcVar2 != (clDataLong *)0x0) {
        *pcVar2 = (param_1 + 0xc)[(int)local_c];
      }
      *(int *)(pcVar4 + 0x10) = *(int *)(pcVar4 + 0x10) + 1;
    }
    local_c = local_c + 1;
  } while (local_c < (clDataBin *)0x4);
  return '\x01';
}




/* WARNING: Removing unreachable block (ram,0x00597a2f) */
/* from: libgsutility:DataSerialize.cpp
   addr: 005978D0 */

uchar __thiscall
clDataSerialize::SerializeBin(clDataSerialize *this,clDataBin *param_1,clDataBin *param_2)

{
  vector<char,class_ExtAlloc::Allocator<char>_> *this_00;
  char *pcVar1;
  clDataBin *pcVar2;
  clDataBin *pcVar3;
  u_long uVar4;
  char cVar5;
  char cStack_2;
  char cStack_1;
  
  pcVar2 = param_1;
  uVar4 = htonl(*(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xc));
  pcVar3 = param_2;
  pcVar1 = *(char **)(param_2 + 0x10);
  this_00 = (vector<char,class_ExtAlloc::Allocator<char>_> *)(param_2 + 0xc);
  if (pcVar1 == *(char **)(param_2 + 0x14)) {
    _STL::vector<char,class_ExtAlloc::Allocator<char>_>::M_insert_overflow
              (this_00,pcVar1,"b",(__true_type *)&param_1,1,true);
  }
  else {
    if (pcVar1 != (char *)0x0) {
      *pcVar1 = 'b';
    }
    *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 1;
  }
  pcVar1 = *(char **)(pcVar3 + 0x10);
  param_1 = (clDataBin *)CONCAT31(param_1._1_3_,(char)uVar4);
  if (pcVar1 == *(char **)(pcVar3 + 0x14)) {
    _STL::vector<char,class_ExtAlloc::Allocator<char>_>::M_insert_overflow
              (this_00,pcVar1,(char *)&param_1,(__true_type *)&param_2,1,true);
  }
  else {
    if (pcVar1 != (char *)0x0) {
      *pcVar1 = (char)uVar4;
    }
    *(int *)(pcVar3 + 0x10) = *(int *)(pcVar3 + 0x10) + 1;
  }
  pcVar1 = *(char **)(pcVar3 + 0x10);
  cVar5 = (char)(uVar4 >> 8);
  param_1 = (clDataBin *)CONCAT31(param_1._1_3_,cVar5);
  if (pcVar1 == *(char **)(pcVar3 + 0x14)) {
    _STL::vector<char,class_ExtAlloc::Allocator<char>_>::M_insert_overflow
              (this_00,pcVar1,(char *)&param_1,(__true_type *)&param_2,1,true);
  }
  else {
    if (pcVar1 != (char *)0x0) {
      *pcVar1 = cVar5;
    }
    *(int *)(pcVar3 + 0x10) = *(int *)(pcVar3 + 0x10) + 1;
  }
  pcVar1 = *(char **)(pcVar3 + 0x10);
  cStack_2 = (char)(uVar4 >> 0x10);
  param_1 = (clDataBin *)CONCAT31(param_1._1_3_,cStack_2);
  if (pcVar1 == *(char **)(pcVar3 + 0x14)) {
    _STL::vector<char,class_ExtAlloc::Allocator<char>_>::M_insert_overflow
              (this_00,pcVar1,(char *)&param_1,(__true_type *)&param_2,1,true);
  }
  else {
    if (pcVar1 != (char *)0x0) {
      *pcVar1 = cStack_2;
    }
    *(int *)(pcVar3 + 0x10) = *(int *)(pcVar3 + 0x10) + 1;
  }
  pcVar1 = *(char **)(pcVar3 + 0x10);
  cStack_1 = (char)(uVar4 >> 0x18);
  param_1 = (clDataBin *)CONCAT31(param_1._1_3_,cStack_1);
  if (pcVar1 == *(char **)(pcVar3 + 0x14)) {
    _STL::vector<char,class_ExtAlloc::Allocator<char>_>::M_insert_overflow
              (this_00,pcVar1,(char *)&param_1,(__true_type *)&param_2,1,true);
  }
  else {
    if (pcVar1 != (char *)0x0) {
      *pcVar1 = cStack_1;
    }
    *(int *)(pcVar3 + 0x10) = *(int *)(pcVar3 + 0x10) + 1;
  }
  _STL::vector<char,class_ExtAlloc::Allocator<char>_>::M_range_insert
            (this_00,*(char **)(pcVar3 + 0x10),*(char **)(pcVar2 + 0xc),*(char **)(pcVar2 + 0x10),
             (forward_iterator_tag *)&param_1);
  return '\x01';
}




/* from: libgsutility:DataSerialize.cpp
   addr: 00597A40 */

uchar __thiscall
clDataSerialize::SerializeRef(clDataSerialize *this,clData *param_1,clDataBin *param_2)

{
  _String_base<char,class_ExtAlloc::Allocator<char>_> *this_00;
  undefined1 *puVar1;
  int iVar2;
  clData *pcVar3;
  undefined1 *puVar4;
  clDataBin *pcVar5;
  uchar uVar6;
  int iVar7;
  clData *pcVar8;
  char *pcVar9;
  void *pvVar10;
  char *pcVar11;
  int *piVar12;
  clData **ppcVar13;
  int local_c;
  int local_8;
  clDataSerialize *local_4;
  
  pcVar5 = param_2;
  local_4 = this;
  switch(*(undefined4 *)(param_1 + 8)) {
  case 1:
    uVar6 = SerializeStr(this,(clDataStr *)param_1,param_2);
    return uVar6;
  case 2:
    uVar6 = SerializeBin(this,(clDataBin *)param_1,param_2);
    return uVar6;
  case 3:
    break;
  case 4:
    uVar6 = SerializeLong(this,(clDataLong *)param_1,param_2);
    return uVar6;
  case 5:
    uVar6 = SerializeStrRef(this,(clDataStrRef *)param_1,param_2);
    return uVar6;
  case 6:
    uVar6 = SerializeRef(this,*(clData **)(param_1 + 0xc),param_2);
    return uVar6;
  default:
    return '\0';
  }
  puVar1 = *(undefined1 **)(param_2 + 0x10);
  this_00 = (_String_base<char,class_ExtAlloc::Allocator<char>_> *)(param_2 + 0xc);
  if (puVar1 == *(undefined1 **)(param_2 + 0x14)) {
    iVar7 = (int)puVar1 - *(int *)this_00;
    local_c = 1;
    local_8 = iVar7;
    piVar12 = &local_c;
    if (iVar7 != 0) {
      piVar12 = &local_8;
    }
    iVar2 = *piVar12;
    pcVar9 = (char *)ExtAlloc_Malloc_4(iVar2 + iVar7);
    puVar4 = *(undefined1 **)this_00;
    pcVar11 = pcVar9;
    if (puVar1 != puVar4) {
      pvVar10 = memmove(pcVar9,puVar4,(int)puVar1 - (int)puVar4);
      pcVar11 = (char *)((int)pvVar10 + ((int)puVar1 - (int)puVar4));
    }
    pcVar11 = _STL::fill_n(pcVar11,1,"[]sLb");
    _STL::_String_base<char,class_ExtAlloc::Allocator<char>_>::
    ~_String_base<char,class_ExtAlloc::Allocator<char>_>(this_00);
    _STL::vector<char,class_ExtAlloc::Allocator<char>_>::M_set
              ((vector<char,class_ExtAlloc::Allocator<char>_> *)this_00,pcVar9,pcVar11,
               pcVar9 + iVar2 + iVar7);
  }
  else {
    if (puVar1 != (undefined1 *)0x0) {
      *puVar1 = 0x5b;
    }
    *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 1;
  }
  uVar6 = SerializeList(local_4,(clDataList *)param_1,param_2);
  puVar1 = *(undefined1 **)(pcVar5 + 0x10);
  param_2 = (clDataBin *)CONCAT31(param_2._1_3_,uVar6);
  if (puVar1 == *(undefined1 **)(pcVar5 + 0x14)) {
    pcVar8 = (clData *)(puVar1 + -*(int *)this_00);
    param_1 = (clData *)0x1;
    local_4 = (clDataSerialize *)pcVar8;
    ppcVar13 = &param_1;
    if (pcVar8 != (clData *)0x0) {
      ppcVar13 = (clData **)&local_4;
    }
    pcVar3 = *ppcVar13;
    pcVar9 = (char *)ExtAlloc_Malloc_4(pcVar3 + (int)pcVar8);
    puVar4 = *(undefined1 **)this_00;
    pcVar11 = pcVar9;
    if (puVar1 != puVar4) {
      pvVar10 = memmove(pcVar9,puVar4,(int)puVar1 - (int)puVar4);
      pcVar11 = (char *)((int)pvVar10 + ((int)puVar1 - (int)puVar4));
    }
    pcVar11 = _STL::fill_n(pcVar11,1,"]sLb");
    _STL::_String_base<char,class_ExtAlloc::Allocator<char>_>::
    ~_String_base<char,class_ExtAlloc::Allocator<char>_>(this_00);
    _STL::vector<char,class_ExtAlloc::Allocator<char>_>::M_set
              ((vector<char,class_ExtAlloc::Allocator<char>_> *)this_00,pcVar9,pcVar11,
               pcVar9 + (int)(pcVar3 + (int)pcVar8));
    return (uchar)param_2;
  }
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = 0x5d;
  }
  *(int *)(pcVar5 + 0x10) = *(int *)(pcVar5 + 0x10) + 1;
  return uVar6;
}




/* from: libgsutility:DataSerialize.cpp
   addr: 00597C30 */

void __thiscall
_STL::vector<char,class_ExtAlloc::Allocator<char>_>::M_insert_overflow
          (vector<char,class_ExtAlloc::Allocator<char>_> *this,char *param_1,char *param_2,
          __true_type *param_3,uint param_4,bool param_5)

{
  char *pcVar1;
  char *_Src;
  uint uVar2;
  char *pcVar3;
  char *_Dst;
  void *pvVar4;
  char **ppcVar5;
  char *_Dst_00;
  size_t _Size;
  char *local_4;
  
  uVar2 = param_4;
  pcVar3 = (char *)(*(int *)(this + 4) - *(int *)this);
  local_4 = pcVar3;
  ppcVar5 = (char **)&param_4;
  if (param_4 <= pcVar3) {
    ppcVar5 = &local_4;
  }
  pcVar1 = *ppcVar5;
  _Dst = (char *)ExtAlloc_Malloc_4(pcVar1 + (int)pcVar3);
  _Src = *(char **)this;
  _Dst_00 = _Dst;
  local_4 = _Dst;
  if (param_1 != _Src) {
    pvVar4 = memmove(_Dst,_Src,(int)param_1 - (int)_Src);
    _Dst_00 = (char *)((int)pvVar4 + ((int)param_1 - (int)_Src));
    uVar2 = param_4;
  }
  for (; uVar2 != 0; uVar2 = uVar2 - 1) {
    *_Dst_00 = *param_2;
    _Dst_00 = _Dst_00 + 1;
  }
  if ((param_5 == false) && (*(char **)(this + 4) != param_1)) {
    _Size = (int)*(char **)(this + 4) - (int)param_1;
    pvVar4 = memmove(_Dst_00,param_1,_Size);
    _Dst_00 = (char *)((int)pvVar4 + _Size);
    _Dst = local_4;
  }
  ExtAlloc_Free_4(*(undefined4 *)this);
  *(char **)this = _Dst;
  *(char **)(this + 8) = _Dst + (int)(pcVar1 + (int)pcVar3);
  *(char **)(this + 4) = _Dst_00;
  return;
}




/* from: libgsutility:DataSerialize.cpp
   addr: 00597CE0 */

void __thiscall
_STL::vector<char,class_ExtAlloc::Allocator<char>_>::M_set
          (vector<char,class_ExtAlloc::Allocator<char>_> *this,char *param_1,char *param_2,
          char *param_3)

{
  *(char **)this = param_1;
  *(char **)(this + 4) = param_2;
  *(char **)(this + 8) = param_3;
  return;
}

