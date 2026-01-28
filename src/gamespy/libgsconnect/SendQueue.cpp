
/* from: libgsconnect:SendQueue.cpp
   addr: 0059D730 */

void __thiscall
clSendElement::clSendElement
          (clSendElement *this,uchar param_1,uchar param_2,short param_3,uchar *param_4,int param_5)

{
  int in_stack_00000018;
  
  if (in_stack_00000018 != 0) {
    *(undefined1 **)this = &_vbtable_;
  }
  this[4] = (clSendElement)param_1;
  this[5] = (clSendElement)param_2;
  *(short *)(this + 6) = param_3;
  *(uchar **)(this + 8) = param_4;
  *(int *)(this + 0xc) = param_5;
  return;
}




/* from: libgsconnect:SendQueue.cpp
   addr: 0059D790 */

clSendMsgQueue * __thiscall clSendMsgQueue::clSendMsgQueue(clSendMsgQueue *this)

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




/* from: libgsconnect:SendQueue.cpp
   addr: 0059D7E0
   addr: 0059D7E0 */

void * __thiscall clSendMsgQueue::_vector_deleting_destructor_(clSendMsgQueue *this,uint param_1)

{
  ~clSendMsgQueue(this);
  if ((param_1 & 1) != 0) {
    ExtAlloc_Free_4(this);
  }
  return this;
}




/* from: libgsconnect:SendQueue.cpp
   addr: 0059D800 */

uchar __thiscall clSendMsgQueue::AddMessage(clSendMsgQueue *this,short param_1,clMessage *param_2)

{
  int *piVar1;
  list<class_clData*,class_ExtAlloc::Allocator<class_clData*>_> *this_00;
  byte bVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int *piVar7;
  byte bVar8;
  uchar *puVar9;
  clSendElement *this_01;
  undefined4 *puVar10;
  _List_node<class_clData*> *p_Var11;
  byte bVar12;
  bool bVar13;
  bool bVar14;
  int unaff_retaddr;
  short sVar15;
  int *piStack_18;
  int *piStack_14;
  clSendMsgQueue *local_10;
  int iStack_c;
  int local_8 [2];
  
  local_10 = this;
  puVar9 = (uchar *)(**(code **)(*(int *)param_2 + 4))();
  this_01 = (clSendElement *)ExtAlloc_Malloc_4();
  sVar15 = (short)unaff_retaddr;
  if (this_01 == (clSendElement *)0x0) {
    local_10 = (clSendMsgQueue *)0x0;
  }
  else {
    local_10 = (clSendMsgQueue *)
               clSendElement::clSendElement
                         (this_01,(uchar)param_2[0xc],(uchar)param_2[0xe],sVar15,puVar9,iStack_c);
  }
  bVar5 = false;
  bVar12 = (byte)param_2[0xe] & 0x1f;
  bVar13 = ((byte)param_2[0xe] & 0x20) != 0;
  piStack_18 = (int *)**(int **)(this + 4);
  if (piStack_18 != *(int **)(this + 4)) {
    do {
      piVar7 = piStack_14;
      if (bVar5) break;
      iVar3 = piStack_18[2];
      if ((*(byte *)(iVar3 + 5) & 0x20) == 0 ||
          ((param_2[0xc] != *(clMessage *)(iVar3 + 4) || bVar12 != (*(byte *)(iVar3 + 5) & 0x1f)) ||
          sVar15 != *(short *)(iVar3 + 6))) {
        piStack_18 = (int *)*piStack_18;
      }
      else {
        puVar10 = (undefined4 *)(**(code **)(*piStack_14 + 0x14))(local_8);
        piStack_18 = (int *)*puVar10;
        piVar1 = piVar7 + 3;
        *(short *)piVar1 = (short)*piVar1 + -1;
        bVar5 = true;
      }
    } while (piStack_18 != (undefined4 *)piVar7[1]);
  }
  bVar5 = false;
  bVar6 = false;
  this_00 = (list<class_clData*,class_ExtAlloc::Allocator<class_clData*>_> *)(piStack_14 + 1);
  piStack_18 = *(int **)piStack_14[1];
  if (piStack_18 != (int *)piStack_14[1]) {
    do {
      if (bVar6) goto LAB_0059d9de;
      bVar2 = *(byte *)(piStack_18[2] + 5);
      bVar8 = bVar2 & 0x1f;
      bVar14 = (bVar2 & 0x20) != 0;
      bVar4 = bVar8 < bVar12;
      if ((!bVar4) && (bVar12 == bVar8)) {
        bVar4 = bVar14 < bVar13;
        if ((!bVar4) && (bVar13 == bVar14)) {
          bVar4 = *(short *)(piStack_18[2] + 6) <= sVar15;
        }
      }
      if (bVar5) {
        if (bVar4) {
LAB_0059d995:
          bVar5 = true;
        }
        else {
          _STL::
          _List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
          ::
          List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
                    ((_List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
                      *)local_8,
                     (_List_iterator<class_clProxyMessage*,struct__STL::_Nonconst_traits<class_clProxyMessage*>_>
                      *)&piStack_18);
          p_Var11 = _STL::list<class_clData*,class_ExtAlloc::Allocator<class_clData*>_>::
                    M_create_node(this_00,(clData **)&local_10);
          bVar6 = true;
          puVar10 = *(undefined4 **)(local_8[0] + 4);
          *(int *)p_Var11 = local_8[0];
          *(undefined4 **)(p_Var11 + 4) = puVar10;
          *puVar10 = p_Var11;
          *(_List_node<class_clData*> **)(local_8[0] + 4) = p_Var11;
        }
      }
      else if (bVar4) goto LAB_0059d995;
      piStack_18 = (int *)*piStack_18;
    } while (piStack_18 != (int *)*(int *)this_00);
    if (bVar6) goto LAB_0059d9de;
  }
  _STL::list<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_>::end
            ((list<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_> *)this_00);
  p_Var11 = _STL::list<class_clData*,class_ExtAlloc::Allocator<class_clData*>_>::M_create_node
                      (this_00,(clData **)&local_10);
  puVar10 = *(undefined4 **)(unaff_retaddr + 4);
  *(int *)p_Var11 = unaff_retaddr;
  *(undefined4 **)(p_Var11 + 4) = puVar10;
  *puVar10 = p_Var11;
  *(_List_node<class_clData*> **)(unaff_retaddr + 4) = p_Var11;
LAB_0059d9de:
  *(short *)(piStack_14 + 3) = (short)piStack_14[3] + 1;
  return '\x01';
}




/* from: libgsconnect:SendQueue.cpp
   addr: 0059DA00 */

uchar __thiscall clSendMsgQueue::AddMessage(clSendMsgQueue *this,clMessage *param_1)

{
  list<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_> *this_00;
  undefined4 *puVar1;
  clMessage *pcVar2;
  uchar *puVar3;
  clSendElement *this_01;
  _List_node<class_clData*> *p_Var4;
  short sVar5;
  int unaff_retaddr;
  int iStack_8;
  
  pcVar2 = param_1;
  puVar3 = (uchar *)(**(code **)(*(int *)param_1 + 4))(&param_1);
  this_01 = (clSendElement *)ExtAlloc_Malloc_4(0x10);
  if (this_01 != (clSendElement *)0x0) {
    clSendElement::clSendElement
              (this_01,(uchar)pcVar2[0xc],(uchar)pcVar2[0xe],0,puVar3,unaff_retaddr);
  }
  this_00 = (list<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_> *)(this + 4);
  _STL::list<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_>::end(this_00);
  p_Var4 = _STL::list<class_clData*,class_ExtAlloc::Allocator<class_clData*>_>::M_create_node
                     ((list<class_clData*,class_ExtAlloc::Allocator<class_clData*>_> *)this_00,
                      (clData **)&stack0xfffffff4);
  puVar1 = *(undefined4 **)(iStack_8 + 4);
  *(int *)p_Var4 = iStack_8;
  *(undefined4 **)(p_Var4 + 4) = puVar1;
  *puVar1 = p_Var4;
  *(_List_node<class_clData*> **)(iStack_8 + 4) = p_Var4;
  sVar5 = 0;
  for (puVar1 = (undefined4 *)**(undefined4 **)this_00; puVar1 != *(undefined4 **)this_00;
      puVar1 = (undefined4 *)*puVar1) {
    sVar5 = sVar5 + 1;
  }
  *(short *)(this + 0xc) = sVar5;
  return '\x01';
}




/* from: libgsconnect:SendQueue.cpp
   addr: 0059DAA0 */

uchar * __thiscall clSendMsgQueue::ConcatMessages(clSendMsgQueue *this,int param_1,int *param_2)

{
  bool bVar1;
  uchar *puVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  uchar *puVar9;
  short sVar10;
  uchar *puVar11;
  
  piVar6 = *(int **)(this + 4);
  piVar5 = (int *)*piVar6;
  sVar10 = 0;
  bVar1 = false;
  iVar7 = 0;
  if (piVar5 != piVar6) {
    do {
      iVar8 = iVar7;
      if (bVar1) break;
      iVar8 = *(int *)(piVar5[2] + 0xc) + iVar7;
      if (iVar8 < param_1) {
        sVar10 = sVar10 + 1;
      }
      else {
        iVar8 = iVar7;
        if (iVar7 == 0) {
          sVar10 = sVar10 + 1;
          iVar8 = *(int *)(piVar5[2] + 0xc);
        }
        bVar1 = true;
      }
      piVar5 = (int *)*piVar5;
      iVar7 = iVar8;
    } while (piVar5 != piVar6);
    if (iVar8 != 0) {
      puVar2 = (uchar *)ExtAlloc_Malloc_4(iVar8);
      iVar7 = 0;
      param_1 = 0;
      piVar6 = (int *)**(int **)(this + 4);
      if (piVar6 != *(int **)(this + 4)) {
        do {
          if (sVar10 <= (short)param_1) break;
          uVar4 = *(uint *)(piVar6[2] + 0xc);
          puVar9 = *(uchar **)(piVar6[2] + 8);
          puVar11 = puVar2 + iVar7;
          for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
            *(undefined4 *)puVar11 = *(undefined4 *)puVar9;
            puVar9 = puVar9 + 4;
            puVar11 = puVar11 + 4;
          }
          for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
            *puVar11 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar11 = puVar11 + 1;
          }
          piVar5 = piVar6 + 2;
          piVar6 = (int *)*piVar6;
          iVar7 = iVar7 + *(int *)(*piVar5 + 0xc);
          param_1 = param_1 + 1;
        } while (piVar6 != (int *)*(int *)(this + 4));
      }
      *param_2 = iVar8;
      return puVar2;
    }
  }
  *param_2 = 0;
  return (uchar *)0x0;
}




/* from: libgsconnect:SendQueue.cpp
   addr: 0059DB90 */

uchar __thiscall clSendMsgQueue::RemoveMessages(clSendMsgQueue *this,int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = param_1;
  iVar3 = 0;
  piVar2 = (int *)**(int **)(this + 4);
  if (piVar2 != *(int **)(this + 4)) {
    do {
      if (iVar1 < iVar3) {
        return '\x01';
      }
      iVar3 = iVar3 + *(int *)(*(int *)((int)piVar2 + 8) + 0xc);
      if (iVar3 <= iVar1) {
        piVar2 = (int *)(**(code **)(*(int *)this + 0x14))(&param_1,piVar2);
        piVar2 = (int *)*piVar2;
        *(short *)(this + 0xc) = *(short *)(this + 0xc) + -1;
      }
    } while (piVar2 != (int *)*(int *)(this + 4));
  }
  return '\x01';
}

