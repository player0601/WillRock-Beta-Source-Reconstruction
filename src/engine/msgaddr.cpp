
/* from: engine:msgaddr.cpp
   addr: 004BE220 */

void __thiscall msgADDR_LIST::Insert(msgADDR_LIST *this,lstNODE *param_1)

{
  int iVar1;
  lstNODE *plVar2;
  msgADDR_LIST *pmVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar1 = *(int *)(this + 0x10);
  if (0 < iVar1) {
    pmVar3 = this + 0x14;
    do {
      if (param_1 == (lstNODE *)0x0) {
        plVar2 = (lstNODE *)0x0;
      }
      else {
        plVar2 = param_1 + -4;
      }
      if (*(int *)pmVar3 == *(int *)(plVar2 + 0x14)) break;
      iVar4 = iVar4 + 1;
      pmVar3 = pmVar3 + 8;
    } while (iVar4 < iVar1);
  }
  if (iVar4 == iVar1) {
    if (param_1 == (lstNODE *)0x0) {
      plVar2 = (lstNODE *)0x0;
    }
    else {
      plVar2 = param_1 + -4;
    }
    *(undefined4 *)(this + iVar1 * 8 + 0x14) = *(undefined4 *)(plVar2 + 0x14);
    *(undefined4 *)(this + *(int *)(this + 0x10) * 8 + 0x18) = 0;
    *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
  }
  if (param_1 == (lstNODE *)0x0) {
    plVar2 = (lstNODE *)0x0;
  }
  else {
    plVar2 = param_1 + -4;
  }
  *(undefined4 *)(plVar2 + 0x18) = *(undefined4 *)(this + iVar4 * 8 + 0x18);
  lstPLIST::Insert((lstPLIST *)this,param_1);
  *(int *)(this + iVar4 * 8 + 0x18) = *(int *)(this + iVar4 * 8 + 0x18) + 1;
  return;
}




/* from: engine:msgaddr.cpp
   addr: 004BE2B0 */

int __thiscall msgADDR_LIST::Compare(msgADDR_LIST *this,lstNODE *param_1,lstNODE *param_2)

{
  lstNODE *plVar1;
  
  if (param_1 == (lstNODE *)0x0) {
    plVar1 = (lstNODE *)0x0;
  }
  else {
    plVar1 = param_1 + -4;
  }
  if (param_2 != (lstNODE *)0x0) {
    return (uint)(*(uint *)(plVar1 + 0x1c) < *(uint *)(param_2 + 0x18));
  }
  return (uint)(*(uint *)(plVar1 + 0x1c) < uRam0000001c);
}




/* from: engine:msgaddr.cpp
   addr: 004BE2F0 */

void __thiscall lstLIST::lstLIST(lstLIST *this)

{
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined ***)this = &_vftable_;
  return;
}




/* from: engine:msgaddr.cpp
   addr: 004BE310
   addr: 004BE310
   addr: 004BE310
   addr: 004BE310
   addr: 004BE310
   addr: 004BE310 */

void * __thiscall msgADDR_LIST::_vector_deleting_destructor_(msgADDR_LIST *this,uint param_1)

{
  *(undefined ***)this = &lstLIST_SIMPLE::_vftable_;
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: engine:msgaddr.cpp
   addr: 004BE330 */

void __thiscall msgQUEUE::DeleteMsgByAddr(msgQUEUE *this,msgADDR *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 8);
  if (iVar2 < *(int *)(this + 0xc)) {
    iVar1 = iVar2 * 0x14;
    do {
      if (*(msgADDR **)(*(int *)this + iVar1) == param_1) {
        *(int *)(*(int *)this + iVar1) = 0;
      }
      if (*(msgADDR **)(iVar1 + 4 + *(int *)this) == param_1) {
        *(undefined4 *)(iVar1 + 4 + *(int *)this) = 0;
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x14;
    } while (iVar2 < *(int *)(this + 0xc));
  }
  iVar2 = 0;
  if (0 < *(int *)(this + 0x10)) {
    iVar1 = 0;
    do {
      if (*(msgADDR **)(*(int *)(this + 4) + iVar1) == param_1) {
        *(int *)(*(int *)(this + 4) + iVar1) = 0;
      }
      if (*(msgADDR **)(iVar1 + 4 + *(int *)(this + 4)) == param_1) {
        *(undefined4 *)(iVar1 + 4 + *(int *)(this + 4)) = 0;
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x14;
    } while (iVar2 < *(int *)(this + 0x10));
  }
  return;
}




/* from: engine:msgaddr.cpp
   addr: 004BE3C0
   addr: 004BE3C0 */

void * __thiscall msgADDR::_scalar_deleting_destructor_(msgADDR *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: engine:msgaddr.cpp
   addr: 004BE3E0 */

int __cdecl _msgQSortCompare(void *param_1,void *param_2)

{
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
  if ((*param_1 != 0) && (*param_2 != 0)) {
    return *(int *)(*param_1 + 0x1c) - *(int *)(*param_2 + 0x1c);
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:msgaddr.cpp
   addr: 004BE400 */

void __thiscall msgTIME_QUEUE::DeleteMsgByAddr(msgTIME_QUEUE *this,msgADDR *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  if (*(int *)(this + 4) != 0) {
    piVar3 = (int *)(*(int *)(this + 4) + -0x14);
    while (piVar3 != (int *)0x0) {
      if ((msgADDR *)*piVar3 == param_1) {
        if (piVar3[6] == 0) {
          piVar2 = (int *)0x0;
        }
        else {
          piVar2 = (int *)(piVar3[6] + -0x14);
        }
        if ((float)piVar3[4] < ___real_00000000 != ((float)piVar3[4] == ___real_00000000)) {
          *(int *)(this + 0x10) = *(int *)(this + 0x10) + -1;
        }
        if (*(int **)(this + 0x14) == piVar3) {
          if (piVar3[6] == 0) {
            iVar1 = 0;
          }
          else {
            iVar1 = piVar3[6] + -0x14;
          }
          *(int *)(this + 0x14) = iVar1;
        }
        (**(code **)(*(int *)this + 0xc))(piVar3 + 5);
        operator_delete(piVar3);
        piVar3 = piVar2;
      }
      else {
        if ((msgADDR *)piVar3[1] == param_1) {
          piVar3[1] = 0;
        }
        if (piVar3[6] == 0) {
          return;
        }
        piVar3 = (int *)(piVar3[6] + -0x14);
      }
    }
  }
  return;
}




/* from: engine:msgaddr.cpp
   addr: 004BE490
   addr: 004BE490 */

void * __thiscall msgTIME_QUEUE::_scalar_deleting_destructor_(msgTIME_QUEUE *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  lstLIST_SIMPLE::Clear((lstLIST_SIMPLE *)this);
  *(undefined ***)this = &lstLIST_SIMPLE::_vftable_;
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: engine:msgaddr.cpp
   addr: 004BE4C0 */

int __thiscall msgSYSTEM::Init(msgSYSTEM *this)

{
  void *pvVar1;
  msgMSG *pmVar2;
  undefined4 *puVar3;
  int iVar4;
  msgMSG *this_00;
  
  pvVar1 = operator_new(10000);
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    puVar3 = (undefined4 *)((int)pvVar1 + 8);
    iVar4 = 500;
    do {
      puVar3[-2] = 0;
      puVar3[-1] = 0;
      *puVar3 = 0xffffffff;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3 = puVar3 + 5;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  *(void **)this = pvVar1;
  if (pvVar1 != (void *)0x0) {
    pmVar2 = (msgMSG *)operator_new(10000);
    if (pmVar2 == (msgMSG *)0x0) {
      pmVar2 = (msgMSG *)0x0;
    }
    else {
      iVar4 = 500;
      this_00 = pmVar2;
      do {
        msgMSG::msgMSG(this_00);
        this_00 = this_00 + 0x14;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    *(msgMSG **)(this + 4) = pmVar2;
    if (pmVar2 != (msgMSG *)0x0) {
      *(undefined4 *)(this + 0x14) = 500;
      *(undefined4 *)(&DAT_008b6a90 + DAT_008b6a8c * 8) = 1;
      *(char **)(&DAT_008b6a94 + DAT_008b6a8c * 8) = s_MSG_MSG_INIT;
      DAT_008b6a8c = DAT_008b6a8c + 1;
      *(undefined4 *)(&DAT_008b6a90 + DAT_008b6a8c * 8) = 2;
      *(char **)(&DAT_008b6a94 + DAT_008b6a8c * 8) = s_MSG_MSG_TERM;
      DAT_008b6a8c = DAT_008b6a8c + 1;
      *(undefined4 *)(&DAT_008b6a90 + DAT_008b6a8c * 8) = 3;
      *(char **)(&DAT_008b6a94 + DAT_008b6a8c * 8) = s_MSG_MSG_DESTROY_ADDR;
      DAT_008b6a8c = DAT_008b6a8c + 1;
      if ((DAT_008b6f58 < 1) && (*(int *)(this + 0x698) < 100)) {
        DAT_008b6f58 = *(int *)(this + 0x698);
        *(undefined **)(this + *(int *)(this + 0x698) * 4 + 0x69c) = &DAT_008b6f54;
        *(int *)(this + 0x698) = *(int *)(this + 0x698) + 1;
      }
      return 1;
    }
  }
  return 0;
}




/* from: engine:msgaddr.cpp
   addr: 004BE620 */

void __thiscall msgMSG::msgMSG(msgMSG *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0xffffffff;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:msgaddr.cpp
   addr: 004BE640 */

void __thiscall msgSYSTEM::Term(msgSYSTEM *this)

{
  bool bVar1;
  msgADDR *pmVar2;
  msgADDR *pmVar3;
  
  if (*(void **)this != (void *)0x0) {
    operator_delete(*(void **)this);
  }
  *(undefined4 *)this = 0;
  if (*(void **)(this + 4) != (void *)0x0) {
    operator_delete(*(void **)(this + 4));
  }
  *(undefined4 *)(this + 4) = 0;
  if (0 < *(int *)(this + 0x694)) {
    while( true ) {
      if (*(int *)(this + 0x20) == 0) {
        pmVar3 = (msgADDR *)0x0;
      }
      else {
        pmVar3 = (msgADDR *)(*(int *)(this + 0x20) + -4);
      }
      bVar1 = false;
      if (pmVar3 == (msgADDR *)0x0) break;
      do {
        if (*(int *)(pmVar3 + 8) == 0) {
          pmVar2 = (msgADDR *)0x0;
        }
        else {
          pmVar2 = (msgADDR *)(*(int *)(pmVar3 + 8) + -4);
        }
        if (((byte)pmVar3[0xc] & 8) != 0) {
          bVar1 = true;
          msgQUEUE::DeleteMsgByAddr((msgQUEUE *)this,pmVar3);
          msgTIME_QUEUE::DeleteMsgByAddr((msgTIME_QUEUE *)(this + 0x350),pmVar3);
          (**(code **)(*(int *)(this + 0x1c) + 0xc))(pmVar3 + 4);
          _DAT_008b6f5c = 1;
          (*(code *)**(undefined4 **)pmVar3)(1);
          _DAT_008b6f5c = 0;
          *(int *)(this + 0x694) = *(int *)(this + 0x694) + -1;
        }
        pmVar3 = pmVar2;
      } while (pmVar2 != (msgADDR *)0x0);
      if (!bVar1) {
        return;
      }
      if (*(int *)(this + 0x694) < 1) {
        return;
      }
    }
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:msgaddr.cpp
   addr: 004BE710 */

void __thiscall msgSYSTEM::DispatchAll(msgSYSTEM *this,float param_1)

{
  undefined4 *puVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  msgSYSTEM *local_4;
  
  *(undefined4 *)(this + 0x360) = 0;
  if (*(int *)(this + 0x354) == 0) {
    piVar7 = (int *)0x0;
  }
  else {
    piVar7 = (int *)(*(int *)(this + 0x354) + -0x14);
  }
  *(int **)(this + 0x364) = piVar7;
  for (; piVar7 != (int *)0x0; piVar7 = (int *)(piVar7[6] + -0x14)) {
    if (*(int *)(*piVar7 + 0x24) < 1) {
      fVar2 = (float)piVar7[4] - param_1;
      piVar7[4] = (int)fVar2;
      if (fVar2 < ___real_00000000 != (fVar2 == ___real_00000000)) {
        *(int *)(this + 0x360) = *(int *)(this + 0x360) + 1;
      }
    }
    if (piVar7[6] == 0) break;
  }
  iVar4 = *(int *)(this + 0x360);
  local_4 = this;
  do {
    if (iVar4 < 1) {
      iVar4 = *(int *)(this + 0xc);
      iVar6 = *(int *)(this + 8);
      if (iVar4 != iVar6 && -1 < iVar4 - iVar6) {
        do {
          iVar3 = *(int *)this;
          iVar6 = *(int *)(iVar3 + iVar6 * 0x14);
          while ((iVar6 == 0 && (*(int *)(this + 8) < iVar4))) {
            iVar6 = *(int *)(this + 8) + 1;
            *(int *)(this + 8) = iVar6;
            iVar6 = *(int *)(iVar3 + iVar6 * 0x14);
          }
          iVar6 = *(int *)(this + 8);
          if (iVar6 < iVar4) {
            *(int *)(this + 8) = iVar6 + 1;
            puVar1 = (undefined4 *)(iVar3 + iVar6 * 0x14);
            Dispatch(this,(msgADDR *)*puVar1,puVar1[2],(void *)puVar1[3],(msgADDR *)puVar1[1],
                     (int *)&local_4);
            *puVar1 = 0;
            puVar1[1] = 0;
            puVar1[2] = 0xffffffff;
            puVar1[4] = 0;
            apFree((void *)puVar1[3]);
            puVar1[3] = 0;
          }
          iVar4 = *(int *)(this + 0xc);
          iVar6 = *(int *)(this + 8);
        } while (iVar4 != iVar6 && -1 < iVar4 - iVar6);
      }
      return;
    }
    iVar4 = *(int *)(this + 0x364);
    while (iVar4 != 0) {
      fVar2 = *(float *)(*(int *)(this + 0x364) + 0x10);
      if (fVar2 < ___real_00000000 != (fVar2 == ___real_00000000)) {
        puVar1 = *(undefined4 **)(this + 0x364);
        if (puVar1 != (undefined4 *)0x0) {
          if (puVar1[6] == 0) {
            iVar4 = 0;
          }
          else {
            iVar4 = puVar1[6] + -0x14;
          }
          *(int *)(this + 0x364) = iVar4;
          if (puVar1 == (undefined4 *)0x0) {
            puVar5 = (undefined4 *)0x0;
          }
          else {
            puVar5 = puVar1 + 5;
          }
          (**(code **)(*(int *)(this + 0x350) + 0xc))(puVar5);
          *(int *)(this + 0x360) = *(int *)(this + 0x360) + -1;
          Dispatch(this,(msgADDR *)*puVar1,puVar1[2],(void *)puVar1[3],(msgADDR *)puVar1[1],
                   (int *)&local_4);
          *puVar1 = 0;
          puVar1[1] = 0;
          puVar1[2] = 0xffffffff;
          puVar1[4] = 0;
          apFree((void *)puVar1[3]);
          puVar1[3] = 0;
          operator_delete(puVar1);
        }
        break;
      }
      iVar4 = *(int *)(*(int *)(this + 0x364) + 0x18);
      if (iVar4 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = iVar4 + -0x14;
      }
      *(int *)(this + 0x364) = iVar4;
    }
    iVar4 = *(int *)(this + 0x360);
  } while( true );
}




/* from: engine:msgaddr.cpp
   addr: 004BE8B0 */

void __thiscall
msgSYSTEM::Dispatch(msgSYSTEM *this,msgADDR *param_1,int param_2,void *param_3,msgADDR *param_4,
                   int *param_5)

{
  int iVar1;
  undefined4 unaff_EBX;
  int *piVar2;
  
  if ((((param_2 != 1) || (((byte)param_1[0xc] & 1) == 0)) && ((*(uint *)(param_1 + 0xc) & 8) == 0))
     && (((*(uint *)(param_1 + 0xc) & 4) == 0 || (param_2 == 2)))) {
    piVar2 = param_5;
    iVar1 = (**(code **)(*(int *)param_1 + 8))(param_2,param_3,param_4,param_5);
    if (iVar1 == 0) {
      iVar1 = (**(code **)(*(int *)param_1 + 4))(param_2,unaff_EBX,param_4,param_5);
      if (iVar1 == 0) {
        (**(code **)(*(int *)param_1 + 0xc))(param_2,piVar2,param_4,param_5);
        if (param_2 == 1) {
          *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 1;
        }
      }
    }
  }
  return;
}




/* from: engine:msgaddr.cpp
   addr: 004BE930 */

int __thiscall
msgSYSTEM::SendMsg(msgSYSTEM *this,msgADDR *param_1,int param_2,void *param_3,msgADDR *param_4)

{
  int local_4;
  
  local_4 = 0;
  if ((((byte)param_1[0xc] & 4) != 0) && (param_2 != 2)) {
    return 0;
  }
  Dispatch(this,param_1,param_2,param_3,param_4,&local_4);
  return local_4;
}




/* from: engine:msgaddr.cpp
   addr: 004BE980 */

void __thiscall msgSYSTEM::PostMsg(msgSYSTEM *this,msgADDR *param_1,int param_2,msgADDR *param_3)

{
  undefined4 *puVar1;
  
  if (((byte)param_1[0xc] & 4) == 0) {
    puVar1 = (undefined4 *)(*(int *)(this + 4) + *(int *)(this + 0x10) * 0x14);
    puVar1[1] = param_3;
    *puVar1 = param_1;
    puVar1[2] = param_2;
    puVar1[4] = 0;
    *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
    if (param_2 == 2) {
      *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 4;
    }
  }
  return;
}




/* from: engine:msgaddr.cpp
   addr: 004BE9D0 */

void __thiscall
msgSYSTEM::PostTimeMsg(msgSYSTEM *this,msgADDR *param_1,int param_2,msgADDR *param_3,float param_4)

{
  undefined4 *puVar1;
  
  if (((byte)param_1[0xc] & 4) == 0) {
    puVar1 = (undefined4 *)operator_new(0x1c);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0xffffffff;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      puVar1[6] = 0;
      *puVar1 = param_1;
      puVar1[1] = param_3;
      puVar1[2] = param_2;
      puVar1[4] = param_4;
      (**(code **)(*(int *)(this + 0x350) + 0x1c))(puVar1 + 5);
    }
  }
  return;
}




/* from: engine:msgaddr.cpp
   addr: 004BEA30 */

void __thiscall
msgSYSTEM::PostMsgData
          (msgSYSTEM *this,msgADDR *param_1,int param_2,msgDATA *param_3,msgADDR *param_4)

{
  undefined4 *puVar1;
  msgDATA *pmVar2;
  uint uVar3;
  uint uVar4;
  
  if (((byte)param_1[0xc] & 4) == 0) {
    if (param_3 == (msgDATA *)0x0) {
      puVar1 = (undefined4 *)(*(int *)(this + 4) + *(int *)(this + 0x10) * 0x14);
      puVar1[1] = param_4;
      *puVar1 = param_1;
      puVar1[2] = param_2;
      puVar1[4] = 0;
    }
    else {
      uVar4 = (uint)*(short *)(param_3 + 2);
      puVar1 = (undefined4 *)(*(int *)(this + 4) + *(int *)(this + 0x10) * 0x14);
      *puVar1 = param_1;
      puVar1[1] = param_4;
      puVar1[2] = param_2;
      puVar1[4] = 0;
      pmVar2 = (msgDATA *)apMalloc(uVar4);
      puVar1[3] = pmVar2;
      if (pmVar2 != (msgDATA *)0x0) {
        for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
          *(undefined4 *)pmVar2 = *(undefined4 *)param_3;
          param_3 = param_3 + 4;
          pmVar2 = pmVar2 + 4;
        }
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *pmVar2 = *param_3;
          param_3 = param_3 + 1;
          pmVar2 = pmVar2 + 1;
        }
      }
    }
    *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
    if (param_2 == 2) {
      *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 4;
    }
  }
  return;
}




/* from: engine:msgaddr.cpp
   addr: 004BEAE0 */

void __thiscall
msgSYSTEM::PostTimeMsgData
          (msgSYSTEM *this,msgADDR *param_1,int param_2,msgDATA *param_3,msgADDR *param_4,
          float param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  msgDATA *pmVar3;
  uint uVar4;
  uint uVar5;
  
  if (((byte)param_1[0xc] & 4) == 0) {
    puVar2 = (undefined4 *)operator_new(0x1c);
    if (puVar2 != (undefined4 *)0x0) {
      puVar1 = puVar2 + 5;
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0xffffffff;
      puVar2[3] = 0;
      puVar2[4] = 0;
      *puVar1 = 0;
      puVar2[6] = 0;
      if (param_3 == (msgDATA *)0x0) {
        *puVar2 = param_1;
        puVar2[1] = param_4;
        puVar2[2] = param_2;
        puVar2[4] = param_5;
      }
      else {
        uVar5 = (uint)*(short *)(param_3 + 2);
        *puVar2 = param_1;
        puVar2[1] = param_4;
        puVar2[2] = param_2;
        puVar2[4] = param_5;
        pmVar3 = (msgDATA *)apMalloc(uVar5);
        puVar2[3] = pmVar3;
        if (pmVar3 != (msgDATA *)0x0) {
          for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
            *(undefined4 *)pmVar3 = *(undefined4 *)param_3;
            param_3 = param_3 + 4;
            pmVar3 = pmVar3 + 4;
          }
          for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *pmVar3 = *param_3;
            param_3 = param_3 + 1;
            pmVar3 = pmVar3 + 1;
          }
          (**(code **)(*(int *)(this + 0x350) + 0x1c))(puVar1);
          return;
        }
      }
      (**(code **)(*(int *)(this + 0x350) + 0x1c))(puVar1);
    }
  }
  return;
}




/* from: engine:msgaddr.cpp
   addr: 004BEBC0 */

void __thiscall msgSYSTEM::DeleteAllMsg(msgSYSTEM *this)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(this + 8);
  if (iVar1 < *(int *)(this + 0xc)) {
    iVar2 = iVar1 * 0x14;
    do {
      iVar1 = iVar1 + 1;
      *(undefined4 *)(iVar2 + *(int *)this) = 0;
      iVar2 = iVar2 + 0x14;
    } while (iVar1 < *(int *)(this + 0xc));
  }
  iVar1 = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 8) = 0;
  if (0 < *(int *)(this + 0x10)) {
    iVar2 = 0;
    do {
      iVar1 = iVar1 + 1;
      *(undefined4 *)(iVar2 + *(int *)(this + 4)) = 0;
      iVar2 = iVar2 + 0x14;
    } while (iVar1 < *(int *)(this + 0x10));
  }
  *(undefined4 *)(this + 0x10) = 0;
  (**(code **)(*(int *)(this + 0x350) + 0x10))();
  *(undefined4 *)(this + 0x360) = 0;
  *(undefined4 *)(this + 0x364) = 0;
  return;
}




/* from: engine:msgaddr.cpp
   addr: 004BEC20 */

void __thiscall msgSYSTEM::NextFrame(msgSYSTEM *this)

{
  void *_Base;
  size_t _NumOfElements;
  
  _Base = *(void **)(this + 4);
  _NumOfElements = *(size_t *)(this + 0x10);
  *(undefined4 *)(this + 4) = *(undefined4 *)this;
  *(void **)this = _Base;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(size_t *)(this + 0xc) = _NumOfElements;
  qsort(_Base,_NumOfElements,0x14,_msgQSortCompare);
  *(int *)(this + 0x368) = *(int *)(this + 0x368) + 1;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:msgaddr.cpp
   addr: 004BEC60 */

void __thiscall msgSYSTEM::SendAll(msgSYSTEM *this,int param_1,void *param_2,msgADDR *param_3)

{
  int iVar1;
  bool bVar2;
  msgADDR *pmVar3;
  msgADDR *pmVar4;
  msgADDR *pmVar5;
  
  pmVar5 = param_3;
  do {
    if (*(int *)(this + 0x20) == 0) {
      pmVar3 = (msgADDR *)0x0;
    }
    else {
      pmVar3 = (msgADDR *)(*(int *)(this + 0x20) + -4);
    }
    do {
      if (pmVar3 == (msgADDR *)0x0) {
        if (param_1 != *(int *)(this + 0x830)) {
          return;
        }
        iVar1 = *(int *)(this + 0x694);
        while( true ) {
          if (iVar1 < 1) {
            return;
          }
          if (*(int *)(this + 0x20) == 0) {
            pmVar5 = (msgADDR *)0x0;
          }
          else {
            pmVar5 = (msgADDR *)(*(int *)(this + 0x20) + -4);
          }
          bVar2 = false;
          if (pmVar5 == (msgADDR *)0x0) break;
          do {
            if (*(int *)(pmVar5 + 8) == 0) {
              pmVar3 = (msgADDR *)0x0;
            }
            else {
              pmVar3 = (msgADDR *)(*(int *)(pmVar5 + 8) + -4);
            }
            if (((byte)pmVar5[0xc] & 8) != 0) {
              bVar2 = true;
              msgQUEUE::DeleteMsgByAddr((msgQUEUE *)this,pmVar5);
              msgTIME_QUEUE::DeleteMsgByAddr((msgTIME_QUEUE *)(this + 0x350),pmVar5);
              (**(code **)(*(int *)(this + 0x1c) + 0xc))(pmVar5 + 4);
              _DAT_008b6f5c = 1;
              (*(code *)**(undefined4 **)pmVar5)(1);
              _DAT_008b6f5c = 0;
              *(int *)(this + 0x694) = *(int *)(this + 0x694) + -1;
            }
            pmVar5 = pmVar3;
          } while (pmVar3 != (msgADDR *)0x0);
          if (!bVar2) {
            return;
          }
          iVar1 = *(int *)(this + 0x694);
        }
        return;
      }
      if (*(int *)(pmVar3 + 8) == 0) {
        pmVar4 = (msgADDR *)0x0;
      }
      else {
        pmVar4 = (msgADDR *)(*(int *)(pmVar3 + 8) + -4);
      }
      if (((*(int *)(pmVar3 + 0x24) < 1) || (param_1 == *(int *)(this + 0x82c))) &&
         ((param_3 = (msgADDR *)0x0, ((byte)pmVar3[0xc] & 4) == 0 || (param_1 == 2)))) {
        Dispatch(this,pmVar3,param_1,param_2,pmVar5,(int *)&param_3);
      }
      pmVar3 = pmVar4;
    } while ((pmVar4 == (msgADDR *)0x0) || (*(int *)(pmVar4 + 0x10) == 0x4d414452));
  } while( true );
}




/* from: engine:msgaddr.cpp
   addr: 004BED90 */

void __thiscall msgSYSTEM::InsertAddr(msgSYSTEM *this,msgADDR *param_1,ulong param_2,ulong param_3)

{
  if (param_2 != 0) {
    *(ulong *)(param_1 + 0x14) = param_2;
  }
  if (param_3 != 0) {
    *(ulong *)(param_1 + 0x1c) = param_3;
  }
  if (param_1 != (msgADDR *)0x0) {
    (**(code **)(*(int *)(this + 0x1c) + 0x1c))(param_1 + 4);
    return;
  }
  (**(code **)(*(int *)(this + 0x1c) + 0x1c))(0);
  return;
}




/* from: engine:msgaddr.cpp
   addr: 004BEDD0 */

void __thiscall msgSYSTEM::RemoveAddr(msgSYSTEM *this,msgADDR *param_1)

{
  msgQUEUE::DeleteMsgByAddr((msgQUEUE *)this,param_1);
  msgTIME_QUEUE::DeleteMsgByAddr((msgTIME_QUEUE *)(this + 0x350),param_1);
                    /* WARNING: Could not recover jumptable at 0x004bee01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(this + 0x1c) + 0xc))();
  return;
}




/* from: engine:msgaddr.cpp
   addr: 004BEE10 */

void __thiscall msgSYSTEM::DestroyAddr(msgSYSTEM *this,msgADDR *param_1)

{
  msgADDR *pmVar1;
  msgADDR *pmVar2;
  msgADDR *pmVar3;
  
  pmVar2 = param_1;
  if (*(int *)(this + 0x20) != 0) {
    pmVar3 = (msgADDR *)(*(int *)(this + 0x20) + -4);
    while (pmVar1 = pmVar3, pmVar1 != (msgADDR *)0x0) {
      if (*(int *)(pmVar1 + 8) == 0) {
        pmVar3 = (msgADDR *)0x0;
      }
      else {
        pmVar3 = (msgADDR *)(*(int *)(pmVar1 + 8) + -4);
      }
      if (((pmVar1 != pmVar2) && ((*(uint *)(pmVar1 + 0xc) & 2) != 0)) &&
         (param_1 = (msgADDR *)0x0, (*(uint *)(pmVar1 + 0xc) & 4) == 0)) {
        Dispatch(this,pmVar1,3,pmVar2,pmVar2,(int *)&param_1);
      }
    }
  }
  *(uint *)(pmVar2 + 0xc) = *(uint *)(pmVar2 + 0xc) | 0xc;
  *(int *)(this + 0x694) = *(int *)(this + 0x694) + 1;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:msgaddr.cpp
   addr: 004BEE90 */

void __thiscall msgSYSTEM::PurgeDestroyAddrAll(msgSYSTEM *this)

{
  bool bVar1;
  msgADDR *pmVar2;
  msgADDR *pmVar3;
  
  if (0 < *(int *)(this + 0x694)) {
    while( true ) {
      if (*(int *)(this + 0x20) == 0) {
        pmVar3 = (msgADDR *)0x0;
      }
      else {
        pmVar3 = (msgADDR *)(*(int *)(this + 0x20) + -4);
      }
      bVar1 = false;
      if (pmVar3 == (msgADDR *)0x0) break;
      do {
        if (*(int *)(pmVar3 + 8) == 0) {
          pmVar2 = (msgADDR *)0x0;
        }
        else {
          pmVar2 = (msgADDR *)(*(int *)(pmVar3 + 8) + -4);
        }
        if (((byte)pmVar3[0xc] & 8) != 0) {
          bVar1 = true;
          msgQUEUE::DeleteMsgByAddr((msgQUEUE *)this,pmVar3);
          msgTIME_QUEUE::DeleteMsgByAddr((msgTIME_QUEUE *)(this + 0x350),pmVar3);
          (**(code **)(*(int *)(this + 0x1c) + 0xc))(pmVar3 + 4);
          _DAT_008b6f5c = 1;
          (*(code *)**(undefined4 **)pmVar3)(1);
          _DAT_008b6f5c = 0;
          *(int *)(this + 0x694) = *(int *)(this + 0x694) + -1;
        }
        pmVar3 = pmVar2;
      } while (pmVar2 != (msgADDR *)0x0);
      if (!bVar1) {
        return;
      }
      if (*(int *)(this + 0x694) < 1) {
        return;
      }
    }
  }
  return;
}




/* from: engine:msgaddr.cpp
   addr: 004BEF50 */

void __thiscall msgSYSTEM::RegisterMsg(msgSYSTEM *this,int param_1,char *param_2)

{
  *(int *)(this + *(int *)(this + 0x36c) * 8 + 0x370) = param_1;
  *(char **)(this + *(int *)(this + 0x36c) * 8 + 0x374) = param_2;
  *(int *)(this + 0x36c) = *(int *)(this + 0x36c) + 1;
  return;
}




/* from: engine:msgaddr.cpp
   addr: 004BEF90 */

msgMSG_TIME * __thiscall msgSYSTEM::GetNextTimeMsg(msgSYSTEM *this,msgMSG_TIME *param_1)

{
  int iVar1;
  
  if (param_1 == (msgMSG_TIME *)0x0) {
    iVar1 = *(int *)(this + 0x354);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x18);
  }
  if (iVar1 != 0) {
    return (msgMSG_TIME *)(iVar1 + -0x14);
  }
  return (msgMSG_TIME *)0x0;
}




/* from: engine:msgaddr.cpp
   addr: 004BEFC0 */

int __thiscall msgSYSTEM::IsValidMsgData(msgSYSTEM *this,void *param_1)

{
  if (param_1 == (void *)0x0) {
    return 1;
  }
  if ((*(char *)((int)param_1 + 1) == '@') && (0 < *(short *)((int)param_1 + 2))) {
    return 1;
  }
  return 0;
}




/* from: engine:msgaddr.cpp
   addr: 004BEFF0 */

void __thiscall msgSYSTEM::RegisterMsgData(msgSYSTEM *this,msgDATA_PACK *param_1)

{
  if ((*(int *)(param_1 + 4) < 1) && (*(int *)(this + 0x698) < 100)) {
    *(int *)(param_1 + 4) = *(int *)(this + 0x698);
    *(msgDATA_PACK **)(this + *(int *)(this + 0x698) * 4 + 0x69c) = param_1;
    *(int *)(this + 0x698) = *(int *)(this + 0x698) + 1;
  }
  return;
}




/* from: engine:msgaddr.cpp
   addr: 004BF030 */

int __thiscall msgSYSTEM::Pack(msgSYSTEM *this,fioFILE_MEM *param_1,msgDATA *param_2)

{
  msgDATA *pmVar1;
  int iVar2;
  
  pmVar1 = param_2;
  if (param_2 == (msgDATA *)0x0) {
    param_2 = (msgDATA *)0xff;
    (**(code **)(*(int *)param_1 + 0x18))(&param_2,1,1);
    return 1;
  }
  (**(code **)(*(int *)param_1 + 0x18))(param_2,1,1);
  iVar2 = (**(code **)**(undefined4 **)(this + (uint)(byte)*pmVar1 * 4 + 0x69c))(param_1,pmVar1);
  return iVar2;
}




/* from: engine:msgaddr.cpp
   addr: 004BF090 */

msgDATA * __thiscall msgSYSTEM::UnPack(msgSYSTEM *this,fioFILE_MEM *param_1)

{
  fioFILE_MEM *pfVar1;
  msgDATA *pmVar2;
  byte unaff_DI;
  
  pfVar1 = param_1;
  (**(code **)(*(int *)param_1 + 0x14))(&param_1,1,1);
  if (unaff_DI == 0xff) {
    return (msgDATA *)0x0;
  }
  pmVar2 = (msgDATA *)(**(code **)(**(int **)(this + (uint)unaff_DI * 4 + 0x69c) + 4))(pfVar1);
  return pmVar2;
}




/* from: engine:msgaddr.cpp
   addr: 004BF0D0 */

int __thiscall msgDATA_PACK::Pack(msgDATA_PACK *this,fioFILE_MEM *param_1,msgDATA *param_2)

{
  msgDATA *pmVar1;
  msgDATA *pmVar2;
  undefined4 in_EAX;
  
  pmVar2 = param_2;
  pmVar1 = param_2 + 2;
  param_2 = (msgDATA *)CONCAT22((short)((uint)in_EAX >> 0x10),*(short *)pmVar1);
  if (*(short *)pmVar1 == -1) {
    return 0;
  }
  (**(code **)(*(int *)param_1 + 0x18))(&param_2,2,2);
  (**(code **)(*(int *)param_1 + 0x18))(pmVar2,(int)*(short *)(pmVar2 + 2),1);
  return 1;
}




/* from: engine:msgaddr.cpp
   addr: 004BF120 */

msgDATA * __thiscall msgDATA_PACK::UnPack(msgDATA_PACK *this,fioFILE_MEM *param_1)

{
  fioFILE_MEM *pfVar1;
  msgDATA *pmVar2;
  short unaff_DI;
  
  pfVar1 = param_1;
  (**(code **)(*(int *)param_1 + 0x14))(&param_1,2,2);
  pmVar2 = (msgDATA *)(**(code **)(*(int *)pfVar1 + 0x24))();
  (**(code **)(*(int *)pfVar1 + 0xc))((int)unaff_DI,0);
  return pmVar2;
}

