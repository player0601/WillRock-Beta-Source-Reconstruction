
/* from: libgsconnect:RcvQueue.cpp
   addr: 0059A490 */

void __thiscall
clRcvElement::clRcvElement
          (clRcvElement *this,uchar param_1,uchar param_2,short param_3,clMessage *param_4)

{
  int in_stack_00000014;
  
  if (in_stack_00000014 != 0) {
    *(undefined1 **)this = &_vbtable_;
  }
  this[4] = (clRcvElement)param_1;
  this[5] = (clRcvElement)param_2;
  *(short *)(this + 6) = param_3;
  *(clMessage **)(this + 8) = param_4;
  return;
}




/* from: libgsconnect:RcvQueue.cpp
   addr: 0059A4D0 */

clRcvMsgQueue * __thiscall clRcvMsgQueue::clRcvMsgQueue(clRcvMsgQueue *this)

{
  int iVar1;
  int in_stack_00000004;
  
  if (in_stack_00000004 != 0) {
    *(undefined1 **)(this + 8) = &_vbtable_;
  }
  *(undefined4 *)(this + 4) = 0;
  iVar1 = ExtAlloc_Malloc_4(0xc);
  *(int *)iVar1 = iVar1;
  *(int *)(iVar1 + 4) = iVar1;
  *(int *)(this + 4) = iVar1;
  *(undefined ***)this = &_vftable_;
  *(undefined2 *)(this + 0xc) = 0;
  return this;
}




/* from: libgsconnect:RcvQueue.cpp
   addr: 0059A520
   addr: 0059A520 */

void * __thiscall clRcvMsgQueue::_vector_deleting_destructor_(clRcvMsgQueue *this,uint param_1)

{
  ~clRcvMsgQueue(this);
  if ((param_1 & 1) != 0) {
    ExtAlloc_Free_4(this);
  }
  return this;
}




/* from: libgsconnect:RcvQueue.cpp
   addr: 0059A540 */

uchar __thiscall clRcvMsgQueue::AddMessage(clRcvMsgQueue *this,short param_1,clMessage *param_2)

{
  clRcvMsgQueue *pcVar1;
  list<class_clData*,class_ExtAlloc::Allocator<class_clData*>_> *this_00;
  byte bVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  clRcvMsgQueue *pcVar7;
  byte bVar8;
  clRcvElement *this_01;
  undefined4 *puVar9;
  _List_node<class_clData*> *p_Var10;
  byte bVar11;
  bool bVar12;
  bool bVar13;
  undefined2 in_stack_00000006;
  int *local_10;
  clRcvMsgQueue *local_c;
  clData *local_8;
  int local_4;
  
  local_c = this;
  this_01 = (clRcvElement *)ExtAlloc_Malloc_4();
  if (this_01 == (clRcvElement *)0x0) {
    local_8 = (clData *)0x0;
  }
  else {
    local_8 = (clData *)
              clRcvElement::clRcvElement
                        (this_01,(uchar)param_2[0xc],(uchar)param_2[0xe],param_1,param_2);
  }
  bVar5 = false;
  bVar11 = (byte)param_2[0xe] & 0x1f;
  bVar12 = ((byte)param_2[0xe] & 0x20) != 0;
  local_10 = (int *)**(int **)(this + 4);
  if (local_10 != *(int **)(this + 4)) {
    do {
      pcVar7 = local_c;
      if (bVar5) break;
      iVar3 = local_10[2];
      if ((*(byte *)(iVar3 + 5) & 0x20) == 0 ||
          ((param_2[0xc] != *(clMessage *)(iVar3 + 4) || bVar11 != (*(byte *)(iVar3 + 5) & 0x1f)) ||
          param_1 != *(short *)(iVar3 + 6))) {
        local_10 = (int *)*local_10;
      }
      else {
        puVar9 = (undefined4 *)(**(code **)(*(int *)local_c + 0x14))(&local_4);
        local_10 = (int *)*puVar9;
        pcVar1 = pcVar7 + 0xc;
        *(short *)pcVar1 = *(short *)pcVar1 + -1;
        bVar5 = true;
      }
    } while (local_10 != *(undefined4 **)(pcVar7 + 4));
  }
  bVar5 = false;
  bVar6 = false;
  this_00 = (list<class_clData*,class_ExtAlloc::Allocator<class_clData*>_> *)(local_c + 4);
  local_10 = (int *)**(int **)(local_c + 4);
  if (local_10 != *(int **)(local_c + 4)) {
    do {
      if (bVar6) goto LAB_0059a70a;
      bVar2 = *(byte *)(local_10[2] + 5);
      bVar8 = bVar2 & 0x1f;
      bVar13 = (bVar2 & 0x20) != 0;
      bVar4 = bVar8 < bVar11;
      if ((!bVar4) && (bVar11 == bVar8)) {
        bVar4 = bVar13 < bVar12;
        if ((!bVar4) && (bVar12 == bVar13)) {
          bVar4 = *(short *)(local_10[2] + 6) < param_1;
        }
      }
      if (bVar5) {
        if (!bVar4) {
          _STL::
          _List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
          ::
          List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
                    ((_List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
                      *)&local_4,
                     (_List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
                      *)&local_10);
          p_Var10 = _STL::list<class_clData*,class_ExtAlloc::Allocator<class_clData*>_>::
                    M_create_node(this_00,&local_8);
          bVar6 = true;
          puVar9 = *(undefined4 **)(local_4 + 4);
          *(int *)p_Var10 = local_4;
          *(undefined4 **)(p_Var10 + 4) = puVar9;
          *puVar9 = p_Var10;
          *(_List_node<class_clData*> **)(local_4 + 4) = p_Var10;
        }
      }
      else if (bVar4) {
        bVar5 = true;
      }
      local_10 = (int *)*local_10;
    } while (local_10 != (int *)*(int *)this_00);
    if (bVar6) goto LAB_0059a70a;
  }
  _STL::list<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_>::end
            ((list<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_> *)this_00);
  p_Var10 = _STL::list<class_clData*,class_ExtAlloc::Allocator<class_clData*>_>::M_create_node
                      (this_00,&local_8);
  puVar9 = *(undefined4 **)(_param_1 + 4);
  *(int *)p_Var10 = _param_1;
  *(undefined4 **)(p_Var10 + 4) = puVar9;
  *puVar9 = p_Var10;
  *(_List_node<class_clData*> **)(_param_1 + 4) = p_Var10;
LAB_0059a70a:
  *(short *)(local_c + 0xc) = *(short *)(local_c + 0xc) + 1;
  return '\x01';
}




/* from: libgsconnect:RcvQueue.cpp
   addr: 0059A720 */

uchar __thiscall clRcvMsgQueue::AddMessage(clRcvMsgQueue *this,clMessage *param_1)

{
  list<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_> *this_00;
  undefined4 *puVar1;
  clRcvElement *this_01;
  _List_node<class_clData*> *p_Var2;
  short sVar3;
  clRcvMsgQueue *local_4;
  
  local_4 = this;
  this_01 = (clRcvElement *)ExtAlloc_Malloc_4(0xc);
  if (this_01 == (clRcvElement *)0x0) {
    local_4 = (clRcvMsgQueue *)0x0;
  }
  else {
    local_4 = (clRcvMsgQueue *)
              clRcvElement::clRcvElement(this_01,(uchar)param_1[0xc],(uchar)param_1[0xe],0,param_1);
  }
  this_00 = (list<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_> *)(this + 4);
  _STL::list<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_>::end(this_00);
  p_Var2 = _STL::list<class_clData*,class_ExtAlloc::Allocator<class_clData*>_>::M_create_node
                     ((list<class_clData*,class_ExtAlloc::Allocator<class_clData*>_> *)this_00,
                      (clData **)&local_4);
  puVar1 = *(undefined4 **)(param_1 + 4);
  *(clMessage **)p_Var2 = param_1;
  *(undefined4 **)(p_Var2 + 4) = puVar1;
  *puVar1 = p_Var2;
  *(_List_node<class_clData*> **)(param_1 + 4) = p_Var2;
  sVar3 = 0;
  for (puVar1 = (undefined4 *)**(undefined4 **)this_00; puVar1 != *(undefined4 **)this_00;
      puVar1 = (undefined4 *)*puVar1) {
    sVar3 = sVar3 + 1;
  }
  *(short *)(this + 0xc) = sVar3;
  return '\x01';
}




/* from: libgsconnect:RcvQueue.cpp
   addr: 0059A7A0 */

clMessage * __thiscall clRcvMsgQueue::GetFirstMessage(clRcvMsgQueue *this)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  clMessage *pcVar4;
  clRcvMsgQueue *local_4;
  
  piVar1 = *(int **)(this + 4);
  if ((int *)*piVar1 != piVar1) {
    iVar2 = *piVar1;
    iVar3 = *(int *)(iVar2 + 8);
    pcVar4 = *(clMessage **)(iVar3 + 8);
    *(undefined4 *)(iVar3 + 8) = 0;
    local_4 = this;
    (**(code **)(*(int *)this + 0x14))(&local_4,iVar2);
    *(short *)(this + 0xc) = *(short *)(this + 0xc) + -1;
    return pcVar4;
  }
  return (clMessage *)0x0;
}

