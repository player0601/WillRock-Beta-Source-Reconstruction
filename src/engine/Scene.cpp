
/* from: engine:Scene.cpp
   addr: 004DD520 */

scnSCENE * __thiscall scnSCENE::scnSCENE(scnSCENE *this)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  scnSCENE *psVar5;
  int *piVar6;
  
  *(undefined4 *)(this + 0x40) = 0;
  psVar5 = this;
  for (iVar2 = 0x23; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)psVar5 = 0;
    psVar5 = psVar5 + 4;
  }
  pvVar1 = apCalloc(0xcc,300);
  *(void **)(this + 0x58) = pvVar1;
  if (pvVar1 == (void *)0x0) {
    apFree(this);
    return this;
  }
  pvVar1 = apCalloc(0x14c,1000);
  *(void **)(this + 0x5c) = pvVar1;
  if (pvVar1 == (void *)0x0) {
    apFree(*(void **)(this + 0x58));
    apFree(this);
    return this;
  }
  iVar3 = 0;
  iVar2 = 0;
  do {
    iVar2 = iVar2 + 0x14c;
    *(int *)(*(int *)(this + 0x5c) + -0x138 + iVar2) = iVar3;
    iVar3 = iVar3 + 1;
  } while (iVar2 < 0x510e0);
  *(undefined4 *)(this + 100) = 0;
  iVar2 = 0;
  piVar4 = *(int **)(this + 0x58);
  do {
    if (*piVar4 == 0) {
      piVar4 = *(int **)(this + 0x58) + iVar2 * 0x33;
      if (piVar4 == (int *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar6 = piVar4;
        for (iVar2 = 0x33; iVar2 != 0; iVar2 = iVar2 + -1) {
          *piVar6 = 0;
          piVar6 = piVar6 + 1;
        }
        *piVar4 = 0x4154504c;
        piVar4[0x32] = (int)this;
      }
      goto LAB_004dd5f5;
    }
    iVar2 = iVar2 + 1;
    piVar4 = piVar4 + 0x33;
  } while (iVar2 < 300);
  piVar4 = (int *)0x0;
LAB_004dd5f5:
  *(int **)(this + 0x88) = piVar4;
  if (piVar4 != (int *)0x0) {
    strncpy((char *)(piVar4 + 1),s___DUMMY__,0x3f);
    *(undefined1 *)(*(int *)(this + 0x88) + 0x42) = 0;
    strncpy((char *)(*(int *)(this + 0x88) + 0x44),s_,0x3f);
    *(undefined1 *)(*(int *)(this + 0x88) + 0x82) = 0;
    *(uint *)(*(int *)(this + 0x88) + 0x84) = *(uint *)(*(int *)(this + 0x88) + 0x84) | 0x10;
    *(uint *)(*(int *)(this + 0x88) + 0x84) = *(uint *)(*(int *)(this + 0x88) + 0x84) | 0x100;
  }
  return this;
}




/* from: engine:Scene.cpp
   addr: 004DD670 */

void __thiscall scnSCENE::~scnSCENE(scnSCENE *this)

{
  animTPL *this_00;
  int iVar1;
  
  DestroyLevel(this,1);
  iVar1 = 0;
  do {
    if (*(int *)(*(int *)(this + 0x5c) + iVar1) != 0) {
      DestroyInst(this,(animINST *)(*(int *)(this + 0x5c) + iVar1));
    }
    iVar1 = iVar1 + 0x14c;
  } while (iVar1 < 0x510e0);
  iVar1 = 0;
  do {
    this_00 = (animTPL *)(*(int *)(this + 0x58) + iVar1);
    if ((*(int *)(*(int *)(this + 0x58) + iVar1) != 0) && (this_00 != (animTPL *)0x0)) {
      animTPL::DestroyData(this_00);
      *(undefined4 *)this_00 = 0;
    }
    iVar1 = iVar1 + 0xcc;
  } while (iVar1 < 0xef10);
  apFree(*(void **)(this + 0x58));
  apFree(*(void **)(this + 0x5c));
  apFree(*(void **)(this + 0x6c));
  return;
}




/* from: engine:Scene.cpp
   addr: 004DD700 */

animINST * __thiscall scnSCENE::InstPtr(scnSCENE *this,int param_1)

{
  return (animINST *)(*(int *)(this + 0x5c) + param_1 * 0x14c);
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:Scene.cpp
   addr: 004DD720 */

int __thiscall scnSCENE::InitLevel(scnSCENE *this)

{
  int iVar1;
  undefined4 *puVar2;
  void *pvVar3;
  cdtCOLL_ANIM *this_00;
  uint uVar4;
  undefined **local_20;
  undefined4 local_1c;
  undefined4 local_18;
  float local_14;
  undefined4 local_10;
  undefined4 local_c;
  float local_8;
  undefined4 local_4;
  
  local_1c = 1;
  local_20 = &m3dBOX::_vftable_;
  iVar1 = objOBJ::GetNObj(*(objOBJ **)(this + 0x44),(_func_int_objOBJ_ptr_void_ptr *)0x0);
  *(int *)(this + 0x48) = iVar1;
  puVar2 = (undefined4 *)apRealloc(*(void **)(this + 0x4c),iVar1 << 2);
  iVar1 = 0;
  *(undefined4 **)(this + 0x4c) = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    for (uVar4 = *(uint *)(this + 0x48) & 0x3fffffff; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined1 *)puVar2 = 0;
      puVar2 = (undefined4 *)((int)puVar2 + 1);
    }
    objMakePtrListID(*(objOBJ **)(this + 0x44),*(objOBJ ***)(this + 0x4c),*(int *)(this + 0x48));
    iVar1 = objOBJ::GetMaxNVert(*(objOBJ **)(this + 0x44));
    if (*(int *)(this + 0x68) < iVar1) {
      pvVar3 = apRealloc(*(void **)(this + 0x6c),iVar1 * 0xc);
      *(void **)(this + 0x6c) = pvVar3;
      if (pvVar3 == (void *)0x0) {
        *(undefined4 *)(this + 0x68) = 0;
        return 0;
      }
      *(int *)(this + 0x68) = iVar1;
    }
    objOBJ::FreezeLTM(*(objOBJ **)(this + 0x44));
    objOBJ::CalcFaceNormals(*(objOBJ **)(this + 0x44));
    objCalcBBox(*(objOBJ **)(this + 0x44));
    if (*(int *)(this + 0x50) != 0) {
      this_00 = (cdtCOLL_ANIM *)operator_new(0x74);
      if (this_00 == (cdtCOLL_ANIM *)0x0) {
        this_00 = (cdtCOLL_ANIM *)0x0;
      }
      else {
        cdtCOLL_ANIM::cdtCOLL_ANIM(this_00);
        *(undefined ***)this_00 = &cdtCOLL_ANIM_SCN::_vftable_;
      }
      *(cdtCOLL_ANIM **)(this + 0x54) = this_00;
      if (this_00 == (cdtCOLL_ANIM *)0x0) {
        return 0;
      }
      iVar1 = *(int *)(this + 0x50);
      local_1c = *(undefined4 *)(iVar1 + 0x18);
      local_18 = *(undefined4 *)(iVar1 + 0x1c);
      local_14 = *(float *)(iVar1 + 0x20);
      local_10 = *(undefined4 *)(iVar1 + 0x24);
      local_c = *(undefined4 *)(iVar1 + 0x28);
      local_8 = *(float *)(iVar1 + 0x2c);
      local_4 = *(undefined4 *)(iVar1 + 0x30);
      if (local_8 - local_14 < ___real_41a00000) {
        local_8 = local_8 + ___real_41a00000;
      }
      *(scnSCENE **)(this_00 + 0x70) = this;
      iVar1 = *(int *)(this + 0x50);
      iVar1 = cdtCOLL_ANIM::InitData
                        (*(cdtCOLL_ANIM **)(this + 0x54),
                         *(float *)(iVar1 + 0x34) + *(float *)(iVar1 + 0x34),
                         *(float *)(iVar1 + 0x38) + *(float *)(iVar1 + 0x38),
                         *(float *)(iVar1 + 0x3c) + *(float *)(iVar1 + 0x3c),*(int *)(iVar1 + 8) / 2
                         ,*(int *)(iVar1 + 0xc) / 2,*(int *)(iVar1 + 0x10) / 2,(m3dBOX *)&local_20);
      if (iVar1 == 0) {
        return 0;
      }
    }
    iVar1 = 1;
  }
  return iVar1;
}




/* from: engine:Scene.cpp
   addr: 004DD8E0 */

void __thiscall scnSCENE::DestroyLevel(scnSCENE *this,int param_1)

{
  animTPL *this_00;
  int iVar1;
  objOBJ *this_01;
  psSHEET *ppVar2;
  camCAMERA *this_02;
  animINST *paVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  
  if (param_1 != 0) {
    iVar5 = 0;
    do {
      paVar3 = (animINST *)(*(int *)(this + 0x5c) + iVar5);
      if ((*(int *)paVar3 != 0) && ((*(uint *)(paVar3 + 4) & 0x100) == 0)) {
        DestroyInst(this,paVar3);
      }
      iVar5 = iVar5 + 0x14c;
    } while (iVar5 < 0x510e0);
  }
  iVar5 = 0;
  do {
    this_00 = (animTPL *)(*(int *)(this + 0x58) + iVar5);
    if (((*(int *)(*(int *)(this + 0x58) + iVar5) != 0) &&
        ((*(uint *)(this_00 + 0x84) & 0x800) != 0)) && (this_00 != (animTPL *)0x0)) {
      animTPL::DestroyData(this_00);
      *(undefined4 *)this_00 = 0;
    }
    iVar5 = iVar5 + 0xcc;
  } while (iVar5 < 0xef10);
  this_01 = *(objOBJ **)(this + 0x44);
  if (this_01 != (objOBJ *)0x0) {
    objOBJ::~objOBJ(this_01);
    operator_delete(this_01);
  }
  *(undefined4 *)(this + 0x44) = 0;
  apFree(*(void **)(this + 0x4c));
  *(undefined4 *)(this + 0x4c) = 0;
  if (*(undefined4 **)(this + 0x50) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x50))(1);
  }
  *(undefined4 *)(this + 0x50) = 0;
  if (*(undefined4 **)(this + 0x54) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x54))(1);
  }
  ppVar2 = *(psSHEET **)(this + 0x80);
  *(undefined4 *)(this + 0x54) = 0;
  if (ppVar2 != (psSHEET *)0x0) {
    psSHEET::Empty(ppVar2);
    operator_delete(ppVar2);
  }
  iVar5 = *(int *)(this + 0x7c);
  *(undefined4 *)(this + 0x80) = 0;
  if (iVar5 != 0) {
    iVar4 = *(int *)(iVar5 + -4);
    if (-1 < iVar4 + -1) {
      puVar6 = (undefined4 *)(iVar5 + iVar4 * 0x4c + 0x48);
      do {
        operator_delete((void *)puVar6[-0x13]);
        iVar4 = iVar4 + -1;
        puVar6[-0x13] = 0;
        puVar6[-0x14] = 0;
        puVar6 = puVar6 + -0x13;
      } while (iVar4 != 0);
    }
    operator_delete((void *)(iVar5 + -4));
  }
  iVar5 = 0;
  *(undefined4 *)(this + 0x7c) = 0;
  *(undefined4 *)(this + 0x78) = 0;
  if (0 < *(int *)(this + 0x70)) {
    iVar4 = 0;
    do {
      iVar1 = *(int *)(this + 0x74) + 0xac + iVar4;
      operator_delete(*(void **)(*(int *)(this + 0x74) + 0xf4 + iVar4));
      *(undefined4 *)(iVar1 + 0x48) = 0;
      *(undefined4 *)(iVar1 + 0x44) = 0;
      ppVar2 = *(psSHEET **)(*(int *)(this + 0x74) + 0xf8 + iVar4);
      if (ppVar2 != (psSHEET *)0x0) {
        psSHEET::Empty(ppVar2);
        operator_delete(ppVar2);
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 0xfc;
    } while (iVar5 < *(int *)(this + 0x70));
  }
  apFree(*(void **)(this + 0x74));
  this_02 = *(camCAMERA **)(this + 0x84);
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  if (this_02 != (camCAMERA *)0x0) {
    camCAMERA::~camCAMERA(this_02);
    operator_delete(this_02);
  }
  *(undefined4 *)(this + 0x84) = 0;
  return;
}




/* from: engine:Scene.cpp
   addr: 004DDAA0 */

animTPL * __thiscall scnSCENE::FindTplName(scnSCENE *this,char *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  
  if (param_1 != (char *)0x0) {
    iVar3 = -1;
    pcVar4 = param_1;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    if (iVar3 != -2) {
      iVar5 = 0;
      iVar3 = 0;
      do {
        if (*(int *)(*(int *)(this + 0x58) + iVar3) == 0x4154504c) {
          iVar2 = stricmp((char *)((int *)(*(int *)(this + 0x58) + iVar3) + 1),param_1);
          if (iVar2 == 0) {
            return (animTPL *)(*(int *)(this + 0x58) + iVar5 * 0xcc);
          }
        }
        iVar3 = iVar3 + 0xcc;
        iVar5 = iVar5 + 1;
      } while (iVar3 < 0xef10);
    }
  }
  return (animTPL *)0x0;
}




/* from: engine:Scene.cpp
   addr: 004DDB10 */

animTPL * __thiscall scnSCENE::AllocTpl(scnSCENE *this)

{
  animTPL *paVar1;
  int *piVar2;
  int iVar3;
  animTPL *paVar4;
  
  iVar3 = 0;
  piVar2 = *(int **)(this + 0x58);
  do {
    if (*piVar2 == 0) {
      paVar1 = (animTPL *)(*(int **)(this + 0x58) + iVar3 * 0x33);
      if (paVar1 == (animTPL *)0x0) {
        return (animTPL *)0x0;
      }
      paVar4 = paVar1;
      for (iVar3 = 0x33; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(int *)paVar4 = 0;
        paVar4 = paVar4 + 4;
      }
      *(scnSCENE **)(paVar1 + 200) = this;
      *(int *)paVar1 = 0x4154504c;
      return paVar1;
    }
    iVar3 = iVar3 + 1;
    piVar2 = piVar2 + 0x33;
  } while (iVar3 < 300);
  return (animTPL *)0x0;
}




/* from: engine:Scene.cpp
   addr: 004DDB70 */

void __thiscall scnSCENE::DestroyTpl(scnSCENE *this,animTPL *param_1)

{
  if (param_1 != (animTPL *)0x0) {
    animTPL::DestroyData(param_1);
    *(undefined4 *)param_1 = 0;
  }
  return;
}




/* from: engine:Scene.cpp
   addr: 004DDB90 */

int __thiscall scnSCENE::FindInstEmpty(scnSCENE *this)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = *(int **)(this + 0x5c);
  iVar1 = 0;
  do {
    if (*piVar2 == 0) {
      iVar3 = iVar1 + 1;
      if (iVar1 + 1 <= *(int *)(this + 100)) {
        iVar3 = *(int *)(this + 100);
      }
      *(int *)(this + 100) = iVar3;
      return iVar1;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 0x53;
  } while (iVar1 < 1000);
  return -1;
}




/* from: engine:Scene.cpp
   addr: 004DDBC0 */

void __thiscall scnSCENE::AttachInst(scnSCENE *this,animINST *param_1)

{
  if (*(int *)(this + 0x60) == 0) {
    *(animINST **)(this + 0x60) = param_1;
    *(animINST **)(param_1 + 0x58) = param_1;
    *(animINST **)(param_1 + 0x5c) = param_1;
    return;
  }
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(*(int *)(this + 0x60) + 0x5c);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(this + 0x60);
  *(animINST **)(*(int *)(*(int *)(this + 0x60) + 0x5c) + 0x58) = param_1;
  *(animINST **)(*(int *)(this + 0x60) + 0x5c) = param_1;
  if (((byte)param_1[4] & 0x48) != 0) {
    *(animINST **)(this + 0x60) = param_1;
  }
  return;
}




/* from: engine:Scene.cpp
   addr: 004DDC10 */

animINST * __thiscall scnSCENE::AllocInst(scnSCENE *this)

{
  animINST *this_00;
  int *piVar1;
  int iVar2;
  int iVar3;
  animINST *paVar4;
  
  iVar3 = 0;
  piVar1 = *(int **)(this + 0x5c);
  do {
    if (*piVar1 == 0) {
      iVar2 = iVar3 + 1;
      if (iVar3 + 1 <= *(int *)(this + 100)) {
        iVar2 = *(int *)(this + 100);
      }
      *(int *)(this + 100) = iVar2;
      if (iVar3 != -1) {
        this_00 = (animINST *)(*(int **)(this + 0x5c) + iVar3 * 0x53);
        paVar4 = this_00;
        for (iVar2 = 0x53; iVar2 != 0; iVar2 = iVar2 + -1) {
          *(undefined4 *)paVar4 = 0;
          paVar4 = paVar4 + 4;
        }
        *(undefined4 *)this_00 = 0x41494e53;
        *(int *)(this_00 + 0x14) = iVar3;
        m3dMATR::Identity((m3dMATR *)(this_00 + 0x60));
        *(scnSCENE **)(this_00 + 0x148) = this;
        *(undefined4 *)(this_00 + 0x130) = 0xffffffff;
        *(undefined4 *)(this_00 + 0xe4) = 0xc2ea0000;
        animINST::Invalidate(this_00,0x84);
        if (*(int *)(this + 0x60) != 0) {
          *(undefined4 *)(this_00 + 0x5c) = *(undefined4 *)(*(int *)(this + 0x60) + 0x5c);
          *(undefined4 *)(this_00 + 0x58) = *(undefined4 *)(this + 0x60);
          *(animINST **)(*(int *)(*(int *)(this + 0x60) + 0x5c) + 0x58) = this_00;
          *(animINST **)(*(int *)(this + 0x60) + 0x5c) = this_00;
          if (((byte)this_00[4] & 0x48) != 0) {
            *(animINST **)(this + 0x60) = this_00;
          }
          return this_00;
        }
        *(animINST **)(this + 0x60) = this_00;
        *(animINST **)(this_00 + 0x58) = this_00;
        *(animINST **)(this_00 + 0x5c) = this_00;
        return this_00;
      }
      break;
    }
    iVar3 = iVar3 + 1;
    piVar1 = piVar1 + 0x53;
  } while (iVar3 < 1000);
  iVar3 = *(int *)(this + 0x60);
  do {
    if (iVar3 == 0) {
      return (animINST *)0x0;
    }
    iVar3 = *(int *)(iVar3 + 0x58);
  } while (iVar3 != *(int *)(this + 0x60));
  return (animINST *)0x0;
}




/* from: engine:Scene.cpp
   addr: 004DDD20 */

animINST * __thiscall
scnSCENE::CreateInst(scnSCENE *this,animTPL *param_1,animCREATE_DATA *param_2,int param_3)

{
  m3dMATR *this_00;
  animTPL *paVar1;
  animCREATE_DATA *paVar2;
  int *piVar3;
  objOBJ *poVar4;
  uint uVar5;
  objOBJ **ppoVar6;
  animINST *paVar7;
  int iVar8;
  int iVar9;
  animINST *paVar10;
  float local_8;
  objOBJ *local_4;
  
  iVar9 = param_3;
  paVar1 = param_1;
  if (param_3 == -1) {
    param_3 = *(int *)(param_1 + 0x88);
  }
  else {
    poVar4 = objFindID(*(objOBJ **)(param_1 + 0x88),param_3);
    if (poVar4 != (objOBJ *)0x0) {
      local_4 = objOBJ::Duplicate(poVar4,(objOBJ *)0x0);
      paVar2 = param_2;
      if (local_4 == (objOBJ *)0x0) {
        return (animINST *)0x0;
      }
      this_00 = (m3dMATR *)(param_2 + 0x12);
      m3dMATR::GetScale(this_00,(float *)&param_1,(float *)&param_2,(float *)&param_3);
      m3dMATR::RemoveScale(this_00);
      param_1 = (animTPL *)(*(float *)paVar2 * (float)param_1);
      param_2 = (animCREATE_DATA *)(*(float *)(paVar2 + 4) * (float)param_2);
      param_3 = (int)(*(float *)(paVar2 + 8) * (float)param_3);
      *(animTPL **)paVar2 = param_1;
      *(animCREATE_DATA **)(paVar2 + 4) = param_2;
      *(int *)(paVar2 + 8) = param_3;
      paVar7 = CreateInst(this,local_4,paVar2);
      *(int *)(paVar7 + 0x130) = iVar9;
      return paVar7;
    }
    param_3 = *(int *)(paVar1 + 0x88);
  }
  iVar9 = 0;
  piVar3 = *(int **)(this + 0x5c);
  while (*piVar3 != 0) {
    iVar9 = iVar9 + 1;
    piVar3 = piVar3 + 0x53;
    if (999 < iVar9) {
      _scnDumpInstList(this);
      return (animINST *)0x0;
    }
  }
  iVar8 = iVar9 + 1;
  if (iVar9 + 1 <= *(int *)(this + 100)) {
    iVar8 = *(int *)(this + 100);
  }
  *(int *)(this + 100) = iVar8;
  if (iVar9 == -1) {
    _scnDumpInstList(this);
    return (animINST *)0x0;
  }
  paVar7 = (animINST *)(*(int **)(this + 0x5c) + iVar9 * 0x53);
  paVar10 = paVar7;
  for (iVar8 = 0x53; iVar8 != 0; iVar8 = iVar8 + -1) {
    *(undefined4 *)paVar10 = 0;
    paVar10 = paVar10 + 4;
  }
  *(undefined4 *)paVar7 = 0x41494e53;
  *(int *)(paVar7 + 0x14) = iVar9;
  m3dMATR::Identity((m3dMATR *)(paVar7 + 0x60));
  *(scnSCENE **)(paVar7 + 0x148) = this;
  *(undefined4 *)(paVar7 + 0x130) = 0xffffffff;
  *(undefined4 *)(paVar7 + 0xe4) = 0xc2ea0000;
  animINST::Invalidate(paVar7,0x84);
  AttachInst(this,paVar7);
  if (param_3 != 0) {
    poVar4 = objOBJ::Duplicate((objOBJ *)param_3,(objOBJ *)0x0);
    *(objOBJ **)(paVar7 + 0x10) = poVar4;
    if (poVar4 == (objOBJ *)0x0) goto LAB_004de034;
  }
  *(uint *)(paVar7 + 4) = *(uint *)(paVar7 + 4) | *(uint *)(paVar1 + 0x84);
  if ((*(animINST **)(this + 0x60) == paVar7) &&
     (*(animINST **)(*(animINST **)(this + 0x60) + 0x58) == paVar7)) {
    *(undefined4 *)(paVar7 + 0x5c) = 0;
    *(undefined4 *)(paVar7 + 0x58) = 0;
    *(undefined4 *)(this + 0x60) = 0;
  }
  else {
    *(undefined4 *)(*(int *)(paVar7 + 0x5c) + 0x58) = *(undefined4 *)(paVar7 + 0x58);
    *(undefined4 *)(*(int *)(paVar7 + 0x58) + 0x5c) = *(undefined4 *)(paVar7 + 0x5c);
    if (paVar7 == *(animINST **)(this + 0x60)) {
      *(undefined4 *)(this + 0x60) = *(undefined4 *)(paVar7 + 0x58);
    }
    *(undefined4 *)(paVar7 + 0x5c) = 0;
    *(undefined4 *)(paVar7 + 0x58) = 0;
  }
  AttachInst(this,paVar7);
  if ((*(uint *)(paVar1 + 0x84) & 0x100) != 0) {
    *(uint *)(paVar7 + 4) = *(uint *)(paVar7 + 4) & 0xfffffeff;
    if ((*(animINST **)(this + 0x60) == paVar7) &&
       (*(animINST **)(*(animINST **)(this + 0x60) + 0x58) == paVar7)) {
      *(undefined4 *)(paVar7 + 0x5c) = 0;
      *(undefined4 *)(paVar7 + 0x58) = 0;
      *(undefined4 *)(this + 0x60) = 0;
    }
    else {
      *(undefined4 *)(*(int *)(paVar7 + 0x5c) + 0x58) = *(undefined4 *)(paVar7 + 0x58);
      *(undefined4 *)(*(int *)(paVar7 + 0x58) + 0x5c) = *(undefined4 *)(paVar7 + 0x5c);
      if (paVar7 == *(animINST **)(this + 0x60)) {
        *(undefined4 *)(this + 0x60) = *(undefined4 *)(paVar7 + 0x58);
      }
      *(undefined4 *)(paVar7 + 0x5c) = 0;
      *(undefined4 *)(paVar7 + 0x58) = 0;
    }
    AttachInst(this,paVar7);
  }
  animINST::SetNameClass(paVar7,(char *)(paVar1 + 0x44));
  animINST::SetNameTpl(paVar7,(char *)(paVar1 + 4));
  *(animTPL **)(paVar7 + 0x138) = paVar1;
  animINST::ApplyCreateData(paVar7,param_2);
  if (*(int *)(paVar7 + 0x134) != 0) {
    *(undefined4 *)(*(int *)(paVar7 + 0x134) + 0xc) = *(undefined4 *)(paVar1 + 0xc4);
  }
  iVar9 = animINST::GetFloat(paVar7,s_ANIM_PROP,s_scale,&local_8);
  if (iVar9 != 0) {
    animINST::Scale(paVar7,local_8,local_8,local_8,2);
  }
  animINST::SetObjInstRef(paVar7);
  uVar5 = objOBJ::GetNObj(*(objOBJ **)(paVar7 + 0x10),(_func_int_objOBJ_ptr_void_ptr *)0x0);
  *(uint *)(paVar7 + 0x128) = uVar5;
  ppoVar6 = (objOBJ **)apCalloc(uVar5,4);
  *(objOBJ ***)(paVar7 + 300) = ppoVar6;
  if (ppoVar6 == (objOBJ **)0x0) {
    return (animINST *)0x0;
  }
  objMakePtrListID(*(objOBJ **)(paVar7 + 0x10),ppoVar6,*(int *)(paVar7 + 0x128));
  animINST::Invalidate(paVar7,0x20004);
  iVar9 = animINST::AbvInit(paVar7);
  if (iVar9 != 0) {
    *(undefined4 *)(paVar7 + 0xf0) = DAT_005dc2e8;
    return paVar7;
  }
LAB_004de034:
  DestroyInst(this,paVar7);
  return (animINST *)0x0;
}




/* from: engine:Scene.cpp
   addr: 004DE050 */

animINST * __thiscall scnSCENE::CreateInst(scnSCENE *this,objOBJ *param_1,animCREATE_DATA *param_2)

{
  animINST *this_00;
  objOBJ oVar1;
  int iVar2;
  objOBJ *poVar3;
  objOBJ *this_01;
  uint uVar4;
  objOBJ **ppoVar5;
  scnSCENE *extraout_ECX;
  int iVar6;
  m3dMATR *pmVar7;
  animINST *paVar8;
  float local_90;
  float local_8c;
  float local_88;
  m3dMATR local_84 [64];
  char local_44 [68];
  
  if (param_1 == (objOBJ *)0x0) {
    return (animINST *)0x0;
  }
  iVar2 = FindInstEmpty(this);
  if (iVar2 == -1) {
    _scnDumpInstList(extraout_ECX);
    return (animINST *)0x0;
  }
  this_00 = (animINST *)(*(int *)(this + 0x5c) + iVar2 * 0x14c);
  paVar8 = this_00;
  for (iVar6 = 0x53; iVar6 != 0; iVar6 = iVar6 + -1) {
    *(undefined4 *)paVar8 = 0;
    paVar8 = paVar8 + 4;
  }
  *(undefined4 *)this_00 = 0x41494e53;
  *(int *)(this_00 + 0x14) = iVar2;
  m3dMATR::Identity((m3dMATR *)(this_00 + 0x60));
  *(scnSCENE **)(this_00 + 0x148) = this;
  *(undefined4 *)(this_00 + 0x130) = 0xffffffff;
  *(undefined4 *)(this_00 + 0xe4) = 0xc2ea0000;
  animINST::Invalidate(this_00,0x84);
  AttachInst(this,this_00);
  if (*(animINST **)(param_1 + 0xbc) != (animINST *)0x0) {
    animINST::Validate(*(animINST **)(param_1 + 0xbc),0x204);
  }
  iVar2 = *(int *)(param_1 + 0x38);
  poVar3 = param_1 + 0x3c;
  pmVar7 = local_84;
  for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
    *(undefined4 *)pmVar7 = *(undefined4 *)poVar3;
    poVar3 = poVar3 + 4;
    pmVar7 = pmVar7 + 4;
  }
  if (iVar2 != 0) {
    return (animINST *)0x0;
  }
  if (*(int *)(param_1 + 4) != 0) {
    iVar2 = objOBJ::UnshareAll(param_1);
    if (iVar2 == 0) {
      DestroyInst(this,this_00);
      return (animINST *)0x0;
    }
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    objOBJ::Detach(param_1);
  }
  iVar2 = *(int *)(param_1 + 0x28);
  *(undefined4 *)(iVar2 + 0x66) = 0;
  *(undefined4 *)(iVar2 + 0x6a) = 0;
  *(undefined2 *)(iVar2 + 0x6e) = 0;
  *(undefined4 *)(iVar2 + 0x70) = 0;
  *(undefined2 *)(iVar2 + 0x74) = 0;
  *(undefined2 *)(iVar2 + 0x76) = 0xffff;
  *(undefined2 *)(*(int *)(param_1 + 0x28) + 0x78) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x7a) = 0;
  *(uint *)(*(int *)(param_1 + 0x28) + 0x66) = *(uint *)(*(int *)(param_1 + 0x28) + 0x66) | 0x10;
  poVar3 = objOBJ::Make();
  if (poVar3 == (objOBJ *)0x0) {
    DestroyInst(this,this_00);
    return (animINST *)0x0;
  }
  this_01 = objOBJ::Make();
  if (this_01 == (objOBJ *)0x0) {
    objOBJ::~objOBJ(poVar3);
    operator_delete(poVar3);
    DestroyInst(this,this_00);
    return (animINST *)0x0;
  }
  objOBJ::Attach(this_01,poVar3);
  objOBJ::Attach(param_1,this_01);
  *(objOBJ **)(this_00 + 0x10) = poVar3;
  *(undefined2 *)(poVar3 + 0x1c) = 0xffff;
  *(undefined2 *)(this_01 + 0x1c) = 0xffff;
  *(undefined2 *)(param_1 + 0x22) = 0xffff;
  *(undefined2 *)(param_1 + 0x20) = 0xffff;
  objOBJ::RemoveModifiers(param_1);
  sprintf(local_44,s__s_root,*(undefined4 *)(param_1 + 0x18));
  objOBJ::SetName(poVar3,local_44);
  objOBJ::SetName(this_01,s_scaleObj);
  *(undefined4 *)(this_00 + 4) = 0;
  iVar2 = *(int *)(this + 0x88);
  *(int *)(this_00 + 0x138) = iVar2;
  animINST::SetNameTpl(this_00,(char *)(iVar2 + 4));
  animINST::SetNameClass(this_00,s_dynamic);
  animINST::SetAnimSeq(this_00,-1,0.0);
  animINST::SetObjInstRef(this_00);
  objOBJ::SetIDHier(*(objOBJ **)(this_00 + 0x10),0);
  m3dMATR::GetScale(local_84,&local_8c,&local_90,&local_88);
  m3dMATR::RemoveScale(local_84);
  animINST::Transform(this_00,local_84,0);
  oVar1 = *param_1;
  pmVar7 = &m3dMatrIdentity;
  poVar3 = param_1 + 0x7c;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)poVar3 = *(undefined4 *)pmVar7;
    pmVar7 = pmVar7 + 4;
    poVar3 = poVar3 + 4;
  }
  if (((byte)oVar1 & 1) == 0) {
    objOBJ::ScaleVertList(param_1,local_8c,local_90,local_88);
  }
  else {
    objOBJ::UnfreezeLTM(param_1);
  }
  uVar4 = objOBJ::GetNObj(*(objOBJ **)(this_00 + 0x10),(_func_int_objOBJ_ptr_void_ptr *)0x0);
  *(uint *)(this_00 + 0x128) = uVar4;
  ppoVar5 = (objOBJ **)apCalloc(uVar4,4);
  *(objOBJ ***)(this_00 + 300) = ppoVar5;
  if (ppoVar5 == (objOBJ **)0x0) {
    return (animINST *)0x0;
  }
  objMakePtrListID(*(objOBJ **)(this_00 + 0x10),ppoVar5,*(int *)(this_00 + 0x128));
  animINST::ApplyCreateData(this_00,param_2);
  animINST::Invalidate(this_00,4);
  iVar2 = animINST::AbvInit(this_00);
  if (iVar2 == 0) {
    DestroyInst(this,this_00);
    return (animINST *)0x0;
  }
  *(undefined4 *)(this_00 + 0xf0) = DAT_005dc2e8;
  return this_00;
}




/* from: engine:Scene.cpp
   addr: 004DE390 */

void __thiscall scnSCENE::DestroyInst(scnSCENE *this,animINST *param_1)

{
  animSYSTEM_INST *this_00;
  int iVar1;
  
  if (param_1 != (animINST *)0x0) {
    if (*(cdtCOLL_ANIM **)(this + 0x54) != (cdtCOLL_ANIM *)0x0) {
      cdtCOLL_ANIM::Invalidate(*(cdtCOLL_ANIM **)(this + 0x54),*(int *)(param_1 + 0x14),1);
    }
    animINST::DestroyData(param_1);
    if ((*(animINST **)(this + 0x60) == param_1) &&
       (*(animINST **)(*(animINST **)(this + 0x60) + 0x58) == param_1)) {
      *(undefined4 *)(param_1 + 0x5c) = 0;
      *(undefined4 *)(param_1 + 0x58) = 0;
      *(undefined4 *)(this + 0x60) = 0;
    }
    else {
      *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x58) = *(undefined4 *)(param_1 + 0x58);
      *(undefined4 *)(*(int *)(param_1 + 0x58) + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
      if (param_1 == *(animINST **)(this + 0x60)) {
        *(undefined4 *)(this + 0x60) = *(undefined4 *)(param_1 + 0x58);
      }
      *(undefined4 *)(param_1 + 0x5c) = 0;
      *(undefined4 *)(param_1 + 0x58) = 0;
    }
    this_00 = *(animSYSTEM_INST **)(param_1 + 0xe8);
    if (this_00 != (animSYSTEM_INST *)0x0) {
      animSYSTEM_INST::~animSYSTEM_INST(this_00);
      operator_delete(this_00);
    }
    *(undefined4 *)param_1 = 0;
    if (0 < *(int *)(this + 100)) {
      do {
        if (*(int *)(*(int *)(this + 0x5c) + -0x14c + *(int *)(this + 100) * 0x14c) != 0) {
          return;
        }
        iVar1 = *(int *)(this + 100) + -1;
        *(int *)(this + 100) = iVar1;
      } while (0 < iVar1);
    }
  }
  return;
}




/* from: engine:Scene.cpp
   addr: 004DE450 */

animINST * __thiscall scnSCENE::FindInstName(scnSCENE *this,char *param_1)

{
  char *_Str1;
  int iVar1;
  animINST *paVar2;
  
  paVar2 = (animINST *)0x0;
  while( true ) {
    if (paVar2 == (animINST *)0x0) {
      paVar2 = *(animINST **)(this + 0x60);
    }
    else {
      paVar2 = *(animINST **)(paVar2 + 0x58);
      if (paVar2 == *(animINST **)(this + 0x60)) {
        return (animINST *)0x0;
      }
    }
    if (paVar2 == (animINST *)0x0) break;
    _Str1 = *(char **)(paVar2 + 0x18);
    if (_Str1 == (char *)0x0) {
      _Str1 = s_;
    }
    iVar1 = stricmp(_Str1,param_1);
    if (iVar1 == 0) {
      return paVar2;
    }
  }
  return (animINST *)0x0;
}




/* from: engine:Scene.cpp
   addr: 004DE4A0 */

void __thiscall
scnSCENE::ForAllInst(scnSCENE *this,_func_int_animINST_ptr_void_ptr *param_1,void *param_2)

{
  int iVar1;
  void *unaff_ESI;
  int iVar2;
  animINST *unaff_EDI;
  
  iVar2 = 0;
  while( true ) {
    if (iVar2 == 0) {
      iVar2 = *(int *)(this + 0x60);
    }
    else {
      iVar2 = *(int *)(iVar2 + 0x58);
      if (iVar2 == *(int *)(this + 0x60)) {
        return;
      }
    }
    if (iVar2 == 0) break;
    iVar1 = (*param_1)(unaff_EDI,unaff_ESI);
    if (iVar1 == 0) {
      return;
    }
  }
  return;
}




/* from: engine:Scene.cpp
   addr: 004DE4E0 */

animINST * __thiscall scnSCENE::FindNextInst(scnSCENE *this,animINST *param_1)

{
  if (param_1 == (animINST *)0x0) {
    return *(animINST **)(this + 0x60);
  }
  return (animINST *)
         (-(uint)(*(uint *)(param_1 + 0x58) != *(uint *)(this + 0x60)) & *(uint *)(param_1 + 0x58));
}




/* from: engine:Scene.cpp
   addr: 004DE510 */

animTPL * __thiscall scnSCENE::FindNextTpl(scnSCENE *this,animTPL *param_1)

{
  int *piVar1;
  
  if ((param_1 != (animTPL *)0x0) &&
     (param_1 = (animTPL *)(((int)param_1 - *(int *)(this + 0x58)) / 0xcc + 1), 299 < (int)param_1))
  {
    return (animTPL *)0x0;
  }
  piVar1 = (int *)(*(int *)(this + 0x58) + (int)param_1 * 0xcc);
  do {
    if (*piVar1 != 0) {
      return (animTPL *)(*(int *)(this + 0x58) + (int)param_1 * 0xcc);
    }
    param_1 = param_1 + 1;
    piVar1 = piVar1 + 0x33;
  } while ((int)param_1 < 300);
  return (animTPL *)0x0;
}




/* from: engine:Scene.cpp
   addr: 004DE580 */

int __thiscall scnSCENE::GetNInst(scnSCENE *this)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = 0;
  while( true ) {
    if (iVar2 == 0) {
      iVar2 = *(int *)(this + 0x60);
    }
    else {
      iVar2 = *(int *)(iVar2 + 0x58);
      if (iVar2 == *(int *)(this + 0x60)) {
        return iVar1;
      }
    }
    if (iVar2 == 0) break;
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}




/* from: engine:Scene.cpp
   addr: 004DE5B0 */

int __thiscall scnSCENE::GetNTpl(scnSCENE *this)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = 0;
  iVar3 = 0;
  while( true ) {
    if ((iVar1 != 0) && (iVar1 = (iVar1 - *(int *)(this + 0x58)) / 0xcc + 1, 299 < iVar1)) {
      return iVar3;
    }
    piVar2 = (int *)(*(int *)(this + 0x58) + iVar1 * 0xcc);
    while (*piVar2 == 0) {
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 0x33;
      if (299 < iVar1) {
        return iVar3;
      }
    }
    iVar1 = *(int *)(this + 0x58) + iVar1 * 0xcc;
    if (iVar1 == 0) break;
    iVar3 = iVar3 + 1;
  }
  return iVar3;
}




/* from: engine:Scene.cpp
   addr: 004DE620 */

void __thiscall scnSCENE::SetAnimLightFlags(scnSCENE *this)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_4;
  
  iVar3 = 0;
  if (0 < *(int *)(this + 0x70)) {
    iVar4 = 0;
    do {
      pcVar1 = strstr((char *)(*(int *)(this + 0x74) + iVar4),s__lm);
      if (pcVar1 != (char *)0x0) {
        *(uint *)(*(int *)(this + 0x74) + 0x40 + iVar4) =
             *(uint *)(*(int *)(this + 0x74) + 0x40 + iVar4) | 0x1000;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0xfc;
    } while (iVar3 < *(int *)(this + 0x70));
  }
  iVar3 = 0;
  local_4 = 0;
  if (0 < *(int *)(this + 0x78)) {
    do {
      pcVar1 = strstr((char *)(*(int *)(this + 0x7c) + 4 + iVar3),s__lm);
      if ((pcVar1 != (char *)0x0) && (iVar4 = 0, 0 < *(int *)(this + 0x70))) {
        iVar5 = 0;
        do {
          iVar2 = selSEL::Find((selSEL *)(*(int *)(this + 0x7c) + iVar3),
                               (char *)(*(int *)(this + 0x74) + iVar5));
          if (iVar2 != -1) {
            *(uint *)(*(int *)(this + 0x74) + 0x40 + iVar5) =
                 *(uint *)(*(int *)(this + 0x74) + 0x40 + iVar5) | 0x1000;
          }
          iVar4 = iVar4 + 1;
          iVar5 = iVar5 + 0xfc;
        } while (iVar4 < *(int *)(this + 0x70));
      }
      local_4 = local_4 + 1;
      iVar3 = iVar3 + 0x4c;
    } while (local_4 < *(int *)(this + 0x78));
  }
  return;
}




/* from: engine:Scene.cpp
   addr: 004DE6F0 */

int __thiscall
scnSCENE::GetAnimLights
          (scnSCENE *this,int *param_1,lgtLIGHT_GROUP **param_2,txmTEXTURE_LAY ***param_3)

{
  bool bVar1;
  uint *puVar2;
  lgtLIGHT_GROUP *plVar3;
  void *pvVar4;
  int iVar5;
  txmTEXTURE_LAY **pptVar6;
  objOBJ *this_00;
  txmTEXTURE *ptVar7;
  int iVar8;
  lgtLIGHT_GROUP *plVar9;
  int iVar10;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  iVar10 = 0;
  iVar8 = *(int *)(this + 0x70);
  if (0 < iVar8) {
    puVar2 = (uint *)(*(int *)(this + 0x74) + 0x40);
    do {
      if ((*puVar2 & 0x1000) != 0) {
        iVar10 = iVar10 + 1;
      }
      puVar2 = puVar2 + 0x3f;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  plVar3 = (lgtLIGHT_GROUP *)operator_new(iVar10 * 0x1d4);
  if (plVar3 == (lgtLIGHT_GROUP *)0x0) {
    plVar3 = (lgtLIGHT_GROUP *)0x0;
  }
  else {
    plVar9 = plVar3;
    if (-1 < iVar10 + -1) {
      do {
        *plVar9 = (lgtLIGHT_GROUP)0x0;
        *(undefined4 *)(plVar9 + 0x40) = 0;
        iVar10 = iVar10 + -1;
        plVar9 = plVar9 + 0x1d4;
      } while (iVar10 != 0);
    }
  }
  *param_2 = plVar3;
  if (plVar3 == (lgtLIGHT_GROUP *)0x0) {
    return 0;
  }
  pvVar4 = operator_new(*(int *)(this + 0x78) << 2);
  iVar8 = 0;
  if (pvVar4 != (void *)0x0) {
    if (0 < *(int *)(this + 0x78)) {
      do {
        *(undefined4 *)((int)pvVar4 + iVar8 * 4) = 0xffffffff;
        iVar8 = iVar8 + 1;
      } while (iVar8 < *(int *)(this + 0x78));
    }
    local_14 = 0;
    *param_1 = 0;
    if (0 < *(int *)(this + 0x70)) {
      iVar8 = 0;
      do {
        iVar10 = 0;
        if ((*(uint *)(iVar8 + 0x40 + *(int *)(this + 0x74)) & 0x1000) != 0) {
          bVar1 = false;
          if (0 < *(int *)(this + 0x78)) {
            local_10 = 0;
            do {
              iVar5 = selSEL::Find((selSEL *)(*(int *)(this + 0x7c) + local_10),
                                   (char *)(*(int *)(this + 0x74) + iVar8));
              if (iVar5 != -1) {
                if (bVar1) {
                  apMsg(s_Named_selection__s_has_the_secon,local_10 + 4 + *(int *)(this + 0x7c),
                        *(int *)(this + 0x74) + iVar8);
                }
                else {
                  iVar5 = *(int *)((int)pvVar4 + iVar10 * 4);
                  if (iVar5 == -1) {
                    iVar5 = *param_1;
                    *(int *)((int)pvVar4 + iVar10 * 4) = iVar5;
                    plVar3 = *param_2;
                    *(int *)(plVar3 + *(int *)(plVar3 + iVar5 * 0x1d4 + 0x40) * 4 +
                                      iVar5 * 0x1d4 + 0x44) = *(int *)(this + 0x74) + iVar8;
                    *(int *)(plVar3 + iVar5 * 0x1d4 + 0x40) =
                         *(int *)(plVar3 + iVar5 * 0x1d4 + 0x40) + 1;
                    *param_1 = *param_1 + 1;
                  }
                  else {
                    plVar3 = *param_2;
                    *(int *)(plVar3 + *(int *)(plVar3 + iVar5 * 0x1d4 + 0x40) * 4 +
                                      iVar5 * 0x1d4 + 0x44) = *(int *)(this + 0x74) + iVar8;
                    *(int *)(plVar3 + iVar5 * 0x1d4 + 0x40) =
                         *(int *)(plVar3 + iVar5 * 0x1d4 + 0x40) + 1;
                  }
                  bVar1 = true;
                }
              }
              iVar10 = iVar10 + 1;
              local_10 = local_10 + 0x4c;
            } while (iVar10 < *(int *)(this + 0x78));
            if (bVar1) goto LAB_004de8d6;
          }
          iVar10 = *param_1;
          plVar3 = *param_2;
          *(int *)(plVar3 + *(int *)(plVar3 + iVar10 * 0x1d4 + 0x40) * 4 + iVar10 * 0x1d4 + 0x44) =
               *(int *)(this + 0x74) + iVar8;
          *(int *)(plVar3 + iVar10 * 0x1d4 + 0x40) = *(int *)(plVar3 + iVar10 * 0x1d4 + 0x40) + 1;
          *param_1 = *param_1 + 1;
        }
LAB_004de8d6:
        local_14 = local_14 + 1;
        iVar8 = iVar8 + 0xfc;
      } while (local_14 < *(int *)(this + 0x70));
    }
    operator_delete(pvVar4);
    if (param_3 != (txmTEXTURE_LAY ***)0x0) {
      pptVar6 = (txmTEXTURE_LAY **)operator_new(*param_1 << 2);
      *param_3 = pptVar6;
      if (pptVar6 == (txmTEXTURE_LAY **)0x0) {
        return 0;
      }
      local_14 = 0;
      if (0 < *param_1) {
        local_10 = 0;
        do {
          local_4 = 0;
          (*param_3)[local_14] = (txmTEXTURE_LAY *)0x0;
          plVar3 = *param_2;
          if (0 < *(int *)(plVar3 + local_10 + 0x40)) {
            local_c = local_10 + 0x44;
            do {
              local_8 = 0;
              iVar8 = *(int *)(plVar3 + local_c);
              if (0 < *(int *)(iVar8 + 0xf0)) {
                iVar10 = 0;
                do {
                  this_00 = objFindName(*(objOBJ **)(this + 0x44),
                                        (char *)(iVar10 + 4 + *(int *)(iVar8 + 0xf4)));
                  if (((this_00 != (objOBJ *)0x0) && (0 < *(int *)(this_00 + 0x10))) &&
                     (ptVar7 = objOBJ::GetFaceTexRendMtl(this_00,0,1), ptVar7 != (txmTEXTURE *)0x0))
                  {
                    ptVar7 = objOBJ::GetFaceTexRendMtl(this_00,0,1);
                    (*param_3)[local_14] = (txmTEXTURE_LAY *)ptVar7;
                    break;
                  }
                  local_8 = local_8 + 1;
                  iVar10 = iVar10 + 0x44;
                } while (local_8 < *(int *)(iVar8 + 0xf0));
              }
              if ((*param_3)[local_14] != (txmTEXTURE_LAY *)0x0) break;
              local_c = local_c + 4;
              local_4 = local_4 + 1;
              plVar3 = *param_2;
            } while (local_4 < *(int *)(plVar3 + local_10 + 0x40));
          }
          local_14 = local_14 + 1;
          local_10 = local_10 + 0x1d4;
        } while (local_14 < *param_1);
      }
    }
    iVar8 = 1;
  }
  return iVar8;
}




/* from: engine:Scene.cpp
   addr: 004DEA50 */

int __thiscall scnSCENE::ExpandV3DTmpList(scnSCENE *this,objOBJ *param_1)

{
  int iVar1;
  void *pvVar2;
  
  iVar1 = objOBJ::GetMaxNVert(param_1);
  if (*(int *)(this + 0x68) < iVar1) {
    pvVar2 = apRealloc(*(void **)(this + 0x6c),iVar1 * 0xc);
    *(void **)(this + 0x6c) = pvVar2;
    if (pvVar2 == (void *)0x0) {
      *(undefined4 *)(this + 0x68) = 0;
      return 0;
    }
    *(int *)(this + 0x68) = iVar1;
  }
  return 1;
}




/* from: engine:Scene.cpp
   addr: 004DEAA0 */

void __thiscall scnSCENE::SetStateYesInst(scnSCENE *this,animINST *param_1,int param_2)

{
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | param_2;
  if ((*(animINST **)(this + 0x60) == param_1) &&
     (*(animINST **)(*(animINST **)(this + 0x60) + 0x58) == param_1)) {
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(this + 0x60) = 0;
  }
  else {
    *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x58) = *(undefined4 *)(param_1 + 0x58);
    *(undefined4 *)(*(int *)(param_1 + 0x58) + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
    if (param_1 == *(animINST **)(this + 0x60)) {
      *(undefined4 *)(this + 0x60) = *(undefined4 *)(param_1 + 0x58);
    }
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  if (*(int *)(this + 0x60) == 0) {
    *(animINST **)(this + 0x60) = param_1;
    *(animINST **)(param_1 + 0x58) = param_1;
    *(animINST **)(param_1 + 0x5c) = param_1;
    return;
  }
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(*(int *)(this + 0x60) + 0x5c);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(this + 0x60);
  *(animINST **)(*(int *)(*(int *)(this + 0x60) + 0x5c) + 0x58) = param_1;
  *(animINST **)(*(int *)(this + 0x60) + 0x5c) = param_1;
  if (((byte)param_1[4] & 0x48) != 0) {
    *(animINST **)(this + 0x60) = param_1;
  }
  return;
}




/* from: engine:Scene.cpp
   addr: 004DEB40 */

void __fastcall _scnDumpInstList(scnSCENE *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x60);
  do {
    if (iVar1 == 0) {
      return;
    }
    iVar1 = *(int *)(iVar1 + 0x58);
  } while (iVar1 != *(int *)(param_1 + 0x60));
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:Scene.cpp
   addr: 004DEB60 */

void __thiscall cdtCOLL_ANIM::cdtCOLL_ANIM(cdtCOLL_ANIM *this)

{
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = _m3dVIntZero;
  *(undefined4 *)(this + 0xc) = DAT_00963768;
  *(undefined4 *)(this + 0x10) = DAT_0096376c;
  *(undefined4 *)(this + 0x18) = 1;
  *(undefined ***)(this + 0x14) = &m3dBOX::_vftable_;
  *(undefined4 *)(this + 0x34) = _m3dVZero;
  *(undefined4 *)(this + 0x38) = DAT_00963740;
  *(undefined4 *)(this + 0x3c) = DAT_00963744;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined ***)(this + 0x50) = &lstLIST::_vftable_;
  *(undefined ***)(this + 0x44) = &lstNODE_CACHE<class_cdtCOLL_ANIM_NODE>::_vftable_;
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 100) = 0;
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined ***)this = &_vftable_;
  return;
}




/* from: engine:Scene.cpp
   addr: 004DEBF0
   addr: 004DEBF0 */

void * __thiscall
lstNODE_CACHE<class_cdtCOLL_ANIM_NODE>::_scalar_deleting_destructor_
          (lstNODE_CACHE<class_cdtCOLL_ANIM_NODE> *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  *(undefined ***)(this + 0xc) = &lstLIST_SIMPLE::_vftable_;
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: engine:Scene.cpp
   addr: 004DEC20 */

int __thiscall
lstNODE_CACHE<class_cdtCOLL_ANIM_NODE>::Init
          (lstNODE_CACHE<class_cdtCOLL_ANIM_NODE> *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = (int *)operator_new(param_1 * 0xc + 4);
  iVar4 = 0;
  if (piVar1 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = piVar1 + 1;
    *piVar1 = param_1;
    piVar1 = piVar2;
    iVar3 = param_1;
    if (-1 < param_1 + -1) {
      do {
        *piVar1 = 0;
        piVar1[1] = 0;
        iVar3 = iVar3 + -1;
        piVar1 = piVar1 + 3;
      } while (iVar3 != 0);
    }
  }
  *(int **)(this + 8) = piVar2;
  if (piVar2 != (int *)0x0) {
    iVar3 = 0;
    *(int *)(this + 4) = param_1;
    if (0 < param_1) {
      do {
        (**(code **)(*(int *)(this + 0xc) + 8))(*(int *)(this + 8) + iVar4);
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 0xc;
      } while (iVar3 < *(int *)(this + 4));
    }
    return 1;
  }
  return 0;
}




/* from: engine:Scene.cpp
   addr: 004DECB0 */

void __thiscall
lstNODE_CACHE<class_cdtCOLL_ANIM_NODE>::Term(lstNODE_CACHE<class_cdtCOLL_ANIM_NODE> *this)

{
  if (*(int *)(this + 8) != 0) {
    operator_delete((void *)(*(int *)(this + 8) + -4));
  }
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 4) = 0;
  return;
}




/* from: engine:Scene.cpp
   addr: 004DECE0
   addr: 004DECE0 */

void * __thiscall cdtCOLL_ANIM::_scalar_deleting_destructor_(cdtCOLL_ANIM *this,uint param_1)

{
  ~cdtCOLL_ANIM(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: engine:Scene.cpp
   addr: 004DED00
   addr: 004DED00 */

void * __thiscall
cdtCOLL_ANIM_SCN::_vector_deleting_destructor_(cdtCOLL_ANIM_SCN *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  cdtCOLL_ANIM::~cdtCOLL_ANIM((cdtCOLL_ANIM *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

