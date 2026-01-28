
/* from: libgsclient:MsgQueue.cpp
   addr: 005AA4D0 */

CMsgQueue * __thiscall CMsgQueue::CMsgQueue(CMsgQueue *this)

{
  int iVar1;
  HANDLE pvVar2;
  int in_stack_00000004;
  
  if (in_stack_00000004 != 0) {
    *(undefined8 **)(this + 4) = &_vbtable_;
  }
  *(undefined8 **)(this + 0xc) = &ExtAlloc::list<class_CCurMessage*>::_vbtable_;
  *(undefined4 *)(this + 8) = 0;
  iVar1 = ExtAlloc_Malloc_4(0xc);
  *(int *)iVar1 = iVar1;
  *(int *)(iVar1 + 4) = iVar1;
  *(int *)(this + 8) = iVar1;
  *(undefined ***)this = &_vftable_;
  pvVar2 = CreateMutexA((LPSECURITY_ATTRIBUTES)0x0,0,(LPCSTR)0x0);
  *(HANDLE *)(this + 0x10) = pvVar2;
  return this;
}




/* from: libgsclient:MsgQueue.cpp
   addr: 005AA530
   addr: 005AA530 */

void * __thiscall CMsgQueue::_scalar_deleting_destructor_(CMsgQueue *this,uint param_1)

{
  ~CMsgQueue(this);
  if ((param_1 & 1) != 0) {
    ExtAlloc_Free_4(this);
  }
  return this;
}




/* from: libgsclient:MsgQueue.cpp
   addr: 005AA550 */

void __thiscall CMsgQueue::~CMsgQueue(CMsgQueue *this)

{
  clRcvElement *this_00;
  int *piVar1;
  int *piVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005ca8cb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = &_vftable_;
  local_4 = 0;
  CloseHandle(*(HANDLE *)(this + 0x10));
  piVar2 = (int *)**(int **)(this + 8);
  if (piVar2 != *(int **)(this + 8)) {
    do {
      this_00 = (clRcvElement *)piVar2[2];
      if (this_00 != (clRcvElement *)0x0) {
        clRcvElement::~clRcvElement(this_00);
        ExtAlloc_Free_4(this_00);
      }
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)*(int *)(this + 8));
  }
  piVar2 = (int *)**(int **)(this + 8);
  if (piVar2 != *(int **)(this + 8)) {
    do {
      piVar1 = (int *)*piVar2;
      ExtAlloc_Free_4(piVar2);
      piVar2 = piVar1;
    } while (piVar1 != (int *)*(int *)(this + 8));
  }
  *(undefined4 *)*(undefined4 *)(this + 8) = *(undefined4 *)(this + 8);
  *(int *)(*(int *)(this + 8) + 4) = *(int *)(this + 8);
  ExtAlloc_Free_4(*(undefined4 *)(this + 8));
  ExceptionList = pvStack_c;
  return;
}




/* from: libgsclient:MsgQueue.cpp
   addr: 005AA5F0 */

void __thiscall CMsgQueue::Clear(CMsgQueue *this)

{
  clRcvElement *this_00;
  int *piVar1;
  int *piVar2;
  DWORD DVar3;
  int *piVar4;
  
  DVar3 = WaitForSingleObject(*(HANDLE *)(this + 0x10),0xffffffff);
  if ((DVar3 == 0) && (piVar4 = (int *)**(int **)(this + 8), piVar4 != *(int **)(this + 8))) {
    do {
      this_00 = (clRcvElement *)piVar4[2];
      if (this_00 != (clRcvElement *)0x0) {
        clRcvElement::~clRcvElement(this_00);
        ExtAlloc_Free_4(this_00);
      }
      piVar1 = (int *)piVar4[1];
      piVar2 = (int *)*piVar4;
      *piVar1 = (int)piVar2;
      piVar2[1] = (int)piVar1;
      ExtAlloc_Free_4(piVar4);
      piVar4 = piVar2;
    } while (piVar2 != (int *)*(int *)(this + 8));
  }
  ReleaseMutex(*(HANDLE *)(this + 0x10));
  return;
}




/* from: libgsclient:MsgQueue.cpp
   addr: 005AA650 */

CCurMessage * __thiscall CMsgQueue::GetMessageA(CMsgQueue *this,ushort param_1)

{
  CCurMessage CVar1;
  CCurMessage *pCVar2;
  int *piVar3;
  int iVar4;
  ushort uVar5;
  uchar uVar6;
  DWORD DVar7;
  int *piVar8;
  ushort uStack_34;
  ushort uStack_32;
  CMsgQueue *local_30;
  uint local_2c;
  undefined **ppuStack_28;
  undefined4 *puStack_24;
  undefined4 uStack_20;
  undefined **appuStack_1c [2];
  undefined8 *puStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_005ca917;
  pvStack_c = ExceptionList;
  local_2c = 0;
  ExceptionList = &pvStack_c;
  local_30 = this;
  DVar7 = WaitForSingleObject(*(HANDLE *)(this + 0x10),0xffffffff);
  uVar5 = param_1;
  if (DVar7 == 0) {
    piVar8 = (int *)**(int **)(this + 8);
    if (piVar8 != *(int **)(this + 8)) {
      do {
        pCVar2 = (CCurMessage *)piVar8[2];
        if ((pCVar2[4] == (CCurMessage)0xd1) || (pCVar2[4] == (CCurMessage)0xcc)) {
          clDataList::GetIndex(*(clDataList **)(pCVar2 + 8),&uStack_34,0);
          if (uStack_34 == uVar5) goto LAB_005aa808;
          if ((uStack_34 == 0x26) || (uStack_34 == 0x27)) {
            local_2c = local_2c | 1;
            puStack_24 = &clDataList::_vbtable__for__clData__;
            puStack_14 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
            uStack_20 = 3;
            ppuStack_28 = &clData::_vftable_;
            uStack_4 = 1;
            clPointerList<class_clData*>::clPointerList<class_clData*>
                      ((clPointerList<class_clData*> *)appuStack_1c);
            ppuStack_28 = &clDataList::_vftable__for__clData__;
            appuStack_1c[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
            uStack_4 = 2;
            clDataList::GetIndex(*(clDataList **)(pCVar2 + 8),(clDataList *)&ppuStack_28,1);
            clDataList::GetIndex((clDataList *)&ppuStack_28,&uStack_32,0);
            if (uStack_32 == uVar5) {
              piVar3 = (int *)piVar8[1];
              iVar4 = *piVar8;
              *piVar3 = iVar4;
              *(int **)(iVar4 + 4) = piVar3;
              ExtAlloc_Free_4(piVar8);
              ReleaseMutex(*(HANDLE *)(local_30 + 0x10));
              ppuStack_28 = &clDataList::_vftable__for__clData__;
              appuStack_1c[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
              uStack_4 = 3;
              clPointerList<class_clData*>::~clPointerList<class_clData*>
                        ((clPointerList<class_clData*> *)appuStack_1c);
              ExceptionList = pvStack_c;
              return pCVar2;
            }
            ppuStack_28 = &clDataList::_vftable__for__clData__;
            appuStack_1c[0] = &clDataList::_vftable__for__clPointerList<class_clData*>__;
            uStack_4 = 4;
            clPointerList<class_clData*>::~clPointerList<class_clData*>
                      ((clPointerList<class_clData*> *)appuStack_1c);
            uStack_4 = 0xffffffff;
            ppuStack_28 = &clData::_vftable_;
          }
        }
        CVar1 = pCVar2[4];
        if ((byte)CVar1 == uVar5) {
          piVar3 = (int *)piVar8[1];
          iVar4 = *piVar8;
          *piVar3 = iVar4;
          *(int **)(iVar4 + 4) = piVar3;
          ExtAlloc_Free_4(piVar8);
          ReleaseMutex(*(HANDLE *)(local_30 + 0x10));
          ExceptionList = pvStack_c;
          return pCVar2;
        }
        if ((CVar1 == (CCurMessage)0x26) || (CVar1 == (CCurMessage)0x27)) {
          uVar6 = clDataList::GetIndex(*(clDataList **)(pCVar2 + 8),&param_1,1,0);
          if (uVar6 == '\0') {
            clDataList::GetIndex(*(clDataList **)(pCVar2 + 8),(uchar *)&param_1,0);
          }
          if ((param_1 & 0xff) == uVar5) {
LAB_005aa808:
            piVar3 = (int *)piVar8[1];
            iVar4 = *piVar8;
            *piVar3 = iVar4;
            *(int **)(iVar4 + 4) = piVar3;
            ExtAlloc_Free_4(piVar8);
            ReleaseMutex(*(HANDLE *)(local_30 + 0x10));
            ExceptionList = pvStack_c;
            return pCVar2;
          }
        }
        piVar8 = (int *)*piVar8;
        this = local_30;
      } while (piVar8 != (int *)*(int *)(local_30 + 8));
    }
    ReleaseMutex(*(HANDLE *)(this + 0x10));
  }
  ExceptionList = pvStack_c;
  return (CCurMessage *)0x0;
}




/* from: libgsclient:MsgQueue.cpp
   addr: 005AA8D0 */

ushort __thiscall CMsgQueue::GetFrontMessageType(CMsgQueue *this)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  DWORD DVar5;
  Allocator<class_clProxyMessage*> AStack_31;
  ushort local_30 [4];
  undefined ***pppuStack_28;
  undefined **ppuStack_24;
  undefined4 *puStack_20;
  undefined4 uStack_1c;
  undefined **ppuStack_18;
  _List_base<class_clProxyMessage*,class_ExtAlloc::Allocator<class_clProxyMessage*>_> a_Stack_14 [4]
  ;
  undefined8 *puStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_005ca977;
  pvStack_c = ExceptionList;
  local_30[0] = 0;
  local_30[1] = 0;
  local_30[2] = 0;
  local_30[3] = 0;
  ExceptionList = &pvStack_c;
  DVar5 = WaitForSingleObject(*(HANDLE *)(this + 0x10),0xffffffff);
  if (DVar5 == 0) {
    piVar2 = (int *)**(int **)(this + 8);
    if (piVar2 != *(int **)(this + 8)) {
      iVar3 = piVar2[2];
      cVar1 = *(char *)(iVar3 + 4);
      if ((cVar1 != -0x2f) && (cVar1 != -0x34)) {
        if ((cVar1 != '&') && (cVar1 != '\'')) {
          ReleaseMutex(*(HANDLE *)(this + 0x10));
          ExceptionList = pvStack_c;
          return (ushort)*(byte *)(iVar3 + 4);
        }
        clDataList::GetIndex(*(clDataList **)(iVar3 + 8),&AStack_31,1,0);
        ReleaseMutex(*(HANDLE *)(this + 0x10));
        ExceptionList = pvStack_c;
        return (ushort)(byte)AStack_31;
      }
      clDataList::GetIndex(*(clDataList **)(iVar3 + 8),local_30,0);
      if (((short)local_30._0_4_ != 0x26) && ((short)local_30._0_4_ != 0x27)) {
        ReleaseMutex(*(HANDLE *)(this + 0x10));
        ExceptionList = pvStack_c;
        return local_30[0];
      }
      puStack_20 = &clDataList::_vbtable__for__clData__;
      puStack_10 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
      uStack_1c = 3;
      ppuStack_24 = &clData::_vftable_;
      uStack_4 = 1;
      _STL::_List_base<class_clProxyMessage*,class_ExtAlloc::Allocator<class_clProxyMessage*>_>::
      List_base<class_clProxyMessage*,class_ExtAlloc::Allocator<class_clProxyMessage*>_>
                (a_Stack_14,&AStack_31);
      ppuStack_24 = &clDataList::_vftable__for__clData__;
      ppuStack_18 = &clDataList::_vftable__for__clPointerList<class_clData*>__;
      uStack_4 = 2;
      clDataList::GetIndex(*(clDataList **)(iVar3 + 8),(clDataList *)&ppuStack_24,1);
      clDataList::GetIndex((clDataList *)&ppuStack_24,local_30 + 2,0);
      ReleaseMutex(*(HANDLE *)(this + 0x10));
      uVar4 = local_30._4_4_;
      ppuStack_24 = &clDataList::_vftable__for__clData__;
      pppuStack_28 = &ppuStack_18;
      ppuStack_18 = &clPointerList<class_clData*>::_vftable_;
      uStack_4._0_1_ = 4;
      uStack_4._1_3_ = 0;
      clPointerList<class_clRcvElement*>::clear((clPointerList<class_clRcvElement*> *)&ppuStack_18);
      uStack_4 = CONCAT31(uStack_4._1_3_,3);
      ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
                ((list<class_clRcvElement*> *)a_Stack_14);
      ExceptionList = pvStack_c;
      return (ushort)uVar4;
    }
    ReleaseMutex(*(HANDLE *)(this + 0x10));
  }
  ExceptionList = pvStack_c;
  return 0;
}




/* from: libgsclient:MsgQueue.cpp
   addr: 005AAAB0 */

void __thiscall CMsgQueue::AddMessage(CMsgQueue *this,CCurMessage *param_1)

{
  undefined4 *puVar1;
  DWORD DVar2;
  _List_node<class_clData*> *p_Var3;
  
  DVar2 = WaitForSingleObject(*(HANDLE *)(this + 0x10),0xffffffff);
  if (DVar2 == 0) {
    _STL::list<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_>::end
              ((list<class_CCurMessage*,class_ExtAlloc::Allocator<class_CCurMessage*>_> *)(this + 8)
              );
    p_Var3 = _STL::list<class_clData*,class_ExtAlloc::Allocator<class_clData*>_>::M_create_node
                       ((list<class_clData*,class_ExtAlloc::Allocator<class_clData*>_> *)(this + 8),
                        (clData **)&param_1);
    puVar1 = *(undefined4 **)(this + 4);
    *(CMsgQueue **)p_Var3 = this;
    *(undefined4 **)(p_Var3 + 4) = puVar1;
    *puVar1 = p_Var3;
    *(_List_node<class_clData*> **)(this + 4) = p_Var3;
    ReleaseMutex(*(HANDLE *)(this + 0x10));
  }
  return;
}

