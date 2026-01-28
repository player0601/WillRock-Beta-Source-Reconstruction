
/* from: drv:D3d_rnd_idx.cpp
   addr: 004B2570 */

d3dREND_DRIVER * __thiscall d3dREND_DRIVER::d3dREND_DRIVER(d3dREND_DRIVER *this)

{
  rendDRIVER::rendDRIVER((rendDRIVER *)this);
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 0x1e14) = 0;
  return this;
}




/* from: drv:D3d_rnd_idx.cpp
   addr: 004B2590
   addr: 004B2590 */

void * __thiscall d3dREND_DRIVER::_vector_deleting_destructor_(d3dREND_DRIVER *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  d3dVBUF_MNG::ReleaseVBufAll(&d3dVBMng);
  rendDRIVER::~rendDRIVER((rendDRIVER *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: drv:D3d_rnd_idx.cpp
   addr: 004B25C0 */

int __thiscall d3dREND_DRIVER::InitHW(d3dREND_DRIVER *this,scnSCENE *param_1)

{
  objOBJ *poVar1;
  int iVar2;
  animTPL *paVar3;
  animINST *paVar4;
  objOBJ *local_10;
  objOBJ *local_c;
  objOBJ *local_8;
  int local_4;
  
  iVar2 = rendDRIVER::InitHW((rendDRIVER *)this,param_1);
  if (iVar2 != 0) {
    d3dVBUF_MNG::CreateVBufDefault(&d3dVBMng);
    if (param_1 != (scnSCENE *)0x0) {
      poVar1 = *(objOBJ **)(param_1 + 0x44);
      local_10 = poVar1;
      objOBJ_ITER::Rewind((objOBJ_ITER *)&local_10);
      if (poVar1 != (objOBJ *)0x0) {
        if ((*(int *)(poVar1 + 0x14) != 0) && (*(int *)(poVar1 + 0x10) != 0)) {
          d3dVBUF_MNG::FreeObjVBData(&d3dVBMng,poVar1);
        }
        for (; (local_c != (objOBJ *)0x0 && ((local_4 == 0 || (local_8 != local_c))));
            local_8 = *(objOBJ **)(local_8 + 0x30)) {
          FreeObjVBufHier(this,local_8);
          local_4 = 1;
        }
      }
      for (paVar3 = scnSCENE::FindNextTpl(param_1,(animTPL *)0x0); paVar3 != (animTPL *)0x0;
          paVar3 = scnSCENE::FindNextTpl(param_1,paVar3)) {
        poVar1 = *(objOBJ **)(paVar3 + 0x88);
        local_10 = poVar1;
        objOBJ_ITER::Rewind((objOBJ_ITER *)&local_10);
        if (poVar1 != (objOBJ *)0x0) {
          if ((*(int *)(poVar1 + 0x14) != 0) && (*(int *)(poVar1 + 0x10) != 0)) {
            d3dVBUF_MNG::FreeObjVBData(&d3dVBMng,poVar1);
          }
          for (; (local_c != (objOBJ *)0x0 && ((local_4 == 0 || (local_8 != local_c))));
              local_8 = *(objOBJ **)(local_8 + 0x30)) {
            FreeObjVBufHier(this,local_8);
            local_4 = 1;
          }
        }
      }
      for (paVar4 = scnSCENE::FindNextInst(param_1,(animINST *)0x0); paVar4 != (animINST *)0x0;
          paVar4 = scnSCENE::FindNextInst(param_1,paVar4)) {
        poVar1 = *(objOBJ **)(paVar4 + 0x10);
        local_10 = poVar1;
        objOBJ_ITER::Rewind((objOBJ_ITER *)&local_10);
        if (poVar1 != (objOBJ *)0x0) {
          if ((*(int *)(poVar1 + 0x14) != 0) && (*(int *)(poVar1 + 0x10) != 0)) {
            d3dVBUF_MNG::FreeObjVBData(&d3dVBMng,poVar1);
          }
          iVar2 = objOBJ_ITER::IsDone((objOBJ_ITER *)&local_10);
          while (iVar2 == 0) {
            FreeObjVBufHier(this,local_8);
            local_4 = 1;
            local_8 = *(objOBJ **)(local_8 + 0x30);
            iVar2 = objOBJ_ITER::IsDone((objOBJ_ITER *)&local_10);
          }
        }
      }
      poVar1 = *(objOBJ **)(param_1 + 0x44);
      local_10 = poVar1;
      objOBJ_ITER::Rewind((objOBJ_ITER *)&local_10);
      if (poVar1 != (objOBJ *)0x0) {
        AllocObjVBuf(this,poVar1);
        for (; (local_c != (objOBJ *)0x0 && ((local_4 == 0 || (local_8 != local_c))));
            local_8 = *(objOBJ **)(local_8 + 0x30)) {
          AllocObjVBufHier(this,local_8);
          local_4 = 1;
        }
      }
      for (paVar4 = scnSCENE::FindNextInst(param_1,(animINST *)0x0); paVar4 != (animINST *)0x0;
          paVar4 = scnSCENE::FindNextInst(param_1,paVar4)) {
        *(uint *)(paVar4 + 4) = *(uint *)(paVar4 + 4) & 0xfbffffff;
        AllocObjVBufHier(this,*(objOBJ **)(paVar4 + 0x10));
      }
      (**(code **)(*(int *)this + 0x6c))(this + 0x3c);
      (**(code **)(*(int *)this + 0x70))(1);
    }
    return 1;
  }
  return 0;
}




/* from: drv:D3d_rnd_idx.cpp
   addr: 004B2820 */

int __thiscall d3dREND_DRIVER::BeginFrame(d3dREND_DRIVER *this,scnSCENE *param_1)

{
  uint uVar1;
  
  if ((*(uint *)(*(int *)(d3dDriver + 0x210) + 0x14) & 0x400000) == 0) {
    uVar1 = *(uint *)(this + 4) & 0xffffffdf;
  }
  else {
    uVar1 = *(uint *)(this + 4) | 0x20;
  }
  *(uint *)(this + 4) = uVar1;
  rendDRIVER::BeginFrame((rendDRIVER *)this,param_1);
  d3dVBUF_MNG::BeginFrame(&d3dVBMng);
  *(int *)(this + 0x1e14) = *(int *)(this + 0x1e14) + 1;
  return 1;
}




/* from: drv:D3d_rnd_idx.cpp
   addr: 004B2890 */

void __thiscall
d3dREND_DRIVER::RasterizeObj
          (d3dREND_DRIVER *this,objOBJ *param_1,objSPLIT_ENTRY *param_2,rendCFG *param_3)

{
  ushort uVar1;
  d3dDRIVER *pdVar2;
  int iVar3;
  uint uVar4;
  undefined2 *puVar5;
  rendDRIVER *this_00;
  uint local_28 [10];
  
  if ((*(byte *)(*(int *)(param_1 + 0x28) + 0x66) & 1) == 0) {
    BeginRasterizeObj(this,param_1,0);
    uVar4 = (uint)*(ushort *)(param_2 + 0x68);
    if (uVar4 < *(ushort *)(param_2 + 0x6a) + uVar4) {
      puVar5 = (undefined2 *)((int)&d3dIdxFaceInd + uVar4 * 6 + 2);
      do {
        puVar5[-1] = *(undefined2 *)
                      (*(byte *)(*(int **)(param_1 + 0x28) + 1) * uVar4 + 2 +
                      **(int **)(param_1 + 0x28));
        *puVar5 = *(undefined2 *)
                   (*(byte *)(*(int **)(param_1 + 0x28) + 1) * uVar4 + 4 +
                   **(int **)(param_1 + 0x28));
        iVar3 = *(byte *)(*(int **)(param_1 + 0x28) + 1) * uVar4;
        uVar4 = uVar4 + 1;
        puVar5[1] = *(undefined2 *)(iVar3 + 6 + **(int **)(param_1 + 0x28));
        puVar5 = puVar5 + 3;
      } while ((int)uVar4 <
               (int)((uint)*(ushort *)(param_2 + 0x6a) + (uint)*(ushort *)(param_2 + 0x68)));
    }
    d3dFVF_DESCR::Init((d3dFVF_DESCR *)local_28,param_1,param_3);
    if ((local_28[0] & 0x10) != 0) {
      if (*(animINST **)(param_1 + 0xbc) == (animINST *)0x0) {
        objOBJ::CalcVertNormals(param_1);
      }
      else {
        animINST::Validate(*(animINST **)(param_1 + 0xbc),0x400);
      }
    }
    d3dPrepareVert(param_1,0,(uint)*(ushort *)(param_2 + 0x6a),(ushort *)&d3dIdxFaceInd,
                   (d3dFVF_DESCR *)local_28,&d3dIdxVert,5000,(m3dMATR *)0x0);
    pdVar2 = d3dDriver;
    uVar1 = *(ushort *)(param_2 + 0x6a);
    this_00 = *(rendDRIVER **)(param_1 + 0x14);
    *(uint *)(d3dDriver + 0x228) = *(int *)(d3dDriver + 0x228) + ((uint)uVar1 * 3) / 3;
    (**(code **)(**(int **)(pdVar2 + 0x77c) + 0x68))
              (*(int **)(pdVar2 + 0x77c),4,local_28[0],&d3dIdxVert,this_00,&d3dIdxFaceInd,
               (uint)uVar1 * 3,0);
    rendDRIVER::ConfigureTransp(this_00,(camCAMERA *)param_1);
    return;
  }
  iVar3 = d3dDecideVBStatDyn(param_1);
  if (iVar3 != 0) {
    BeginRasterizeObj(this,param_1,(uint)((*(uint *)(*(int *)(param_1 + 0x28) + 0x66) & 0x1f0) != 0)
                     );
    d3dVBUF_MNG::RenderStatObj(&d3dVBMng,param_1,param_2);
    rendDRIVER::ConfigureTransp((rendDRIVER *)this,(camCAMERA *)param_1);
    return;
  }
  BeginRasterizeObj(this,param_1,0);
  d3dVBUF_MNG::RenderDynObj(&d3dVBMng,param_1,param_2,param_3);
  rendDRIVER::ConfigureTransp((rendDRIVER *)this,(camCAMERA *)param_1);
  return;
}




/* from: drv:D3d_rnd_idx.cpp
   addr: 004B2A70 */

int __thiscall
d3dREND_DRIVER::DrawIndexedPrimitive
          (d3dREND_DRIVER *this,void *param_1,int param_2,ushort *param_3,int param_4,
          rendCFG *param_5)

{
  int iVar1;
  
  if ((*(uint *)(d3dDriver + 4) & 0x1000000) != 0) {
    if ((param_4 != 0) || (param_1 != (void *)0x0)) {
      StartUseHTL(this);
      if (DAT_006121bc != 1) {
        (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x50))(*(int **)(d3dDriver + 0x77c),0x16,1);
        DAT_006121bc = 1;
      }
      if (*(int *)(this + 0x1e10) == 0) {
        (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x2c))
                  (*(int **)(d3dDriver + 0x77c),1,&m3dMatrIdentity);
        *(undefined4 *)(this + 0x1e10) = 1;
      }
      if (param_5 == (rendCFG *)0x0) {
        iVar1 = 2;
      }
      else {
        iVar1 = 0x144;
      }
      d3dVBUF_MNG::RenderIndexedPrimitive(&d3dVBMng,param_1,param_2,param_3,param_4,iVar1);
    }
  }
  return 1;
}




/* from: drv:D3d_rnd_idx.cpp
   addr: 004B2B50 */

int __thiscall d3dREND_DRIVER::AllocObjVBufHier(d3dREND_DRIVER *this,objOBJ *param_1)

{
  objOBJ *poVar1;
  bool bVar2;
  objOBJ *poVar3;
  
  if (param_1 != (objOBJ *)0x0) {
    poVar1 = *(objOBJ **)(param_1 + 0x38);
    bVar2 = false;
    AllocObjVBuf(this,param_1);
    for (poVar3 = poVar1; (poVar1 != (objOBJ *)0x0 && ((!bVar2 || (poVar3 != poVar1))));
        poVar3 = *(objOBJ **)(poVar3 + 0x30)) {
      AllocObjVBufHier(this,poVar3);
      bVar2 = true;
    }
  }
  return 1;
}




/* from: drv:D3d_rnd_idx.cpp
   addr: 004B2BA0 */

void __thiscall d3dREND_DRIVER::FreeObjVBufHier(d3dREND_DRIVER *this,objOBJ *param_1)

{
  objOBJ *poVar1;
  bool bVar2;
  objOBJ *poVar3;
  
  if (param_1 != (objOBJ *)0x0) {
    poVar1 = *(objOBJ **)(param_1 + 0x38);
    bVar2 = false;
    poVar3 = poVar1;
    if ((*(int *)(param_1 + 0x14) != 0) && (*(int *)(param_1 + 0x10) != 0)) {
      d3dVBUF_MNG::FreeObjVBData(&d3dVBMng,param_1);
    }
    for (; (poVar1 != (objOBJ *)0x0 && ((!bVar2 || (poVar3 != poVar1))));
        poVar3 = *(objOBJ **)(poVar3 + 0x30)) {
      FreeObjVBufHier(this,poVar3);
      bVar2 = true;
    }
  }
  return;
}




/* from: drv:D3d_rnd_idx.cpp
   addr: 004B2C00 */

int __thiscall d3dREND_DRIVER::AllocObjVBuf(d3dREND_DRIVER *this,objOBJ *param_1)

{
  int iVar1;
  
  if ((((*(uint *)(vidDriver + 4) & 0x2000) != 0) && (*(int *)(param_1 + 0x14) != 0)) &&
     (*(int *)(param_1 + 0x10) != 0)) {
    if ((*(byte *)(*(int *)(param_1 + 0x28) + 0x66) & 1) == 0) {
      (**(code **)(*(int *)this + 0x90))(param_1);
      if ((*(uint *)(*(int *)(param_1 + 0x28) + 0x66) & 0x1f0) == 0) {
        iVar1 = d3dVBUF_MNG::PrepStatObj(&d3dVBMng,param_1);
        if (iVar1 == 0) {
          return 0;
        }
      }
      else {
        iVar1 = d3dVBUF_MNG::PrepDynObj(&d3dVBMng,param_1);
        if (iVar1 == 0) {
          return 0;
        }
      }
      *(uint *)(*(int *)(param_1 + 0x28) + 0x66) = *(uint *)(*(int *)(param_1 + 0x28) + 0x66) | 1;
    }
    else if ((*(uint *)(param_1 + 0x24) & 0x800) != 0) {
      animINST::Validate(*(animINST **)(param_1 + 0xbc),0x400);
      return 1;
    }
  }
  return 1;
}




/* from: drv:D3d_rnd_idx.cpp
   addr: 004B2CA0 */

void __thiscall d3dREND_DRIVER::InvalidateObjDynVBuf(d3dREND_DRIVER *this,objOBJ *param_1)

{
  int iVar1;
  int iVar2;
  int local_c;
  int local_8;
  int local_4;
  
  local_c = 0;
  if (param_1 != (objOBJ *)0x0) {
    local_8 = *(int *)(param_1 + 0x38);
    local_4 = 0;
    local_c = local_8;
  }
  iVar1 = *(int *)(param_1 + 0x28);
  if ((*(int *)(iVar1 + 0x1c) != 0) && (iVar2 = 0, **(short **)(iVar1 + 0x18) != 0)) {
    do {
      iVar2 = iVar2 + 1;
      *(undefined4 *)(**(int **)(iVar1 + 0x1c) + -8 + iVar2 * 8) = 0;
      iVar1 = *(int *)(param_1 + 0x28);
    } while (iVar2 < (int)(uint)**(ushort **)(iVar1 + 0x18));
  }
  for (; (local_c != 0 && ((local_4 == 0 || (local_8 != local_c))));
      local_8 = *(int *)(local_8 + 0x30)) {
    (**(code **)(*(int *)this + 0x74))(local_8);
    local_4 = 1;
  }
  return;
}




/* from: drv:D3d_rnd_idx.cpp
   addr: 004B2D40 */

void __thiscall d3dREND_DRIVER::InitLevel(d3dREND_DRIVER *this,scnSCENE *param_1)

{
  objOBJ *poVar1;
  bool bVar2;
  animINST *paVar3;
  objOBJ *poVar4;
  
  rendDRIVER::InitLevel((rendDRIVER *)this,param_1);
  if ((*(uint *)(d3dDriver + 4) & 0x1000000) != 0) {
    for (paVar3 = scnSCENE::FindNextInst(param_1,(animINST *)0x0); paVar3 != (animINST *)0x0;
        paVar3 = scnSCENE::FindNextInst(param_1,paVar3)) {
      if ((((byte)paVar3[8] & 2) != 0) &&
         (poVar4 = *(objOBJ **)(paVar3 + 0x10), poVar4 != (objOBJ *)0x0)) {
        poVar1 = *(objOBJ **)(poVar4 + 0x38);
        bVar2 = false;
        AllocObjVBuf(this,poVar4);
        for (poVar4 = poVar1; (poVar1 != (objOBJ *)0x0 && ((!bVar2 || (poVar4 != poVar1))));
            poVar4 = *(objOBJ **)(poVar4 + 0x30)) {
          AllocObjVBufHier(this,poVar4);
          bVar2 = true;
        }
      }
    }
  }
  return;
}




/* from: drv:D3d_rnd_idx.cpp
   addr: 004B2DE0 */

void __thiscall d3dREND_DRIVER::TermLevel(d3dREND_DRIVER *this,scnSCENE *param_1)

{
  objOBJ *poVar1;
  objOBJ *poVar2;
  bool bVar3;
  animTPL *paVar4;
  animINST *paVar5;
  objOBJ *poVar6;
  
  if (param_1 != (scnSCENE *)0x0) {
    for (paVar4 = scnSCENE::FindNextTpl(param_1,(animTPL *)0x0); paVar4 != (animTPL *)0x0;
        paVar4 = scnSCENE::FindNextTpl(param_1,paVar4)) {
      poVar1 = *(objOBJ **)(paVar4 + 0x88);
      if (poVar1 != (objOBJ *)0x0) {
        poVar2 = *(objOBJ **)(poVar1 + 0x38);
        bVar3 = false;
        poVar6 = poVar2;
        if ((*(int *)(poVar1 + 0x14) != 0) && (*(int *)(poVar1 + 0x10) != 0)) {
          d3dVBUF_MNG::FreeObjVBData(&d3dVBMng,poVar1);
        }
        for (; (poVar2 != (objOBJ *)0x0 && ((!bVar3 || (poVar6 != poVar2))));
            poVar6 = *(objOBJ **)(poVar6 + 0x30)) {
          FreeObjVBufHier(this,poVar6);
          bVar3 = true;
        }
      }
    }
    for (paVar5 = scnSCENE::FindNextInst(param_1,(animINST *)0x0); paVar5 != (animINST *)0x0;
        paVar5 = scnSCENE::FindNextInst(param_1,paVar5)) {
      poVar1 = *(objOBJ **)(paVar5 + 0x10);
      if (poVar1 != (objOBJ *)0x0) {
        poVar2 = *(objOBJ **)(poVar1 + 0x38);
        bVar3 = false;
        poVar6 = poVar2;
        if ((*(int *)(poVar1 + 0x14) != 0) && (*(int *)(poVar1 + 0x10) != 0)) {
          d3dVBUF_MNG::FreeObjVBData(&d3dVBMng,poVar1);
        }
        for (; (poVar2 != (objOBJ *)0x0 && ((!bVar3 || (poVar6 != poVar2))));
            poVar6 = *(objOBJ **)(poVar6 + 0x30)) {
          FreeObjVBufHier(this,poVar6);
          bVar3 = true;
        }
      }
    }
    d3dVBUF_MNG::ReleaseVBufAll(&d3dVBMng);
    for (paVar5 = scnSCENE::FindNextInst(param_1,(animINST *)0x0); paVar5 != (animINST *)0x0;
        paVar5 = scnSCENE::FindNextInst(param_1,paVar5)) {
      *(uint *)(paVar5 + 4) = *(uint *)(paVar5 + 4) & 0xfbffffff;
    }
    rendDRIVER::TermLevel((rendDRIVER *)this,param_1);
  }
  return;
}




/* from: drv:D3d_rnd_idx.cpp
   addr: 004B2F10 */

void __thiscall d3dREND_DRIVER::ObjLoadNotify(d3dREND_DRIVER *this,objOBJ *param_1)

{
  int iVar1;
  
  rendDRIVER::ObjLoadNotify((rendDRIVER *)this,param_1);
  AllocObjVBuf(this,param_1);
  iVar1 = *(int *)(param_1 + 0xbc);
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 8) = *(uint *)(iVar1 + 8) | 2;
  }
  return;
}




/* from: drv:D3d_rnd_idx.cpp
   addr: 004B2F40 */

void __thiscall d3dREND_DRIVER::ObjDestroyNotify(d3dREND_DRIVER *this,objOBJ *param_1)

{
  rendDRIVER::ObjDestroyNotify((rendDRIVER *)this,param_1);
  if (((((*(uint *)(vidDriver + 4) & 0x2000) != 0) && (param_1 != (objOBJ *)0x0)) &&
      (*(int *)(param_1 + 0x14) != 0)) && (*(int *)(param_1 + 0x10) != 0)) {
    d3dVBUF_MNG::FreeObjVBData(&d3dVBMng,param_1);
  }
  return;
}




/* from: drv:D3d_rnd_idx.cpp
   addr: 004B2FA0 */

void __thiscall d3dREND_DRIVER::ObjTplInitHWNotify(d3dREND_DRIVER *this,objOBJ *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  
  if (param_1 != (objOBJ *)0x0) {
    iVar1 = *(int *)(param_1 + 0x38);
    bVar2 = false;
    if ((*(int *)(param_1 + 0x14) != 0) && (*(int *)(param_1 + 0x10) != 0)) {
      d3dVBUF_MNG::FreeObjVBData(&d3dVBMng,param_1);
    }
    iVar3 = iVar1;
    if (0 < *(short *)(*(int *)(param_1 + 0x28) + 0x6e)) {
      apFree(*(void **)(*(int *)(param_1 + 0x28) + 0x70));
      *(undefined2 *)(*(int *)(param_1 + 0x28) + 0x6e) = 0;
      *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x70) = 0;
      *(uint *)(*(int *)(param_1 + 0x28) + 0x66) =
           *(uint *)(*(int *)(param_1 + 0x28) + 0x66) & 0xfffffffe;
    }
    for (; (iVar1 != 0 && ((!bVar2 || (iVar3 != iVar1)))); iVar3 = *(int *)(iVar3 + 0x30)) {
      (**(code **)(*(int *)this + 0xb4))(iVar3);
      bVar2 = true;
    }
  }
  return;
}




/* from: drv:D3d_rnd_idx.cpp
   addr: 004B3030 */

void __thiscall d3dREND_DRIVER::ObjInitHWNotify(d3dREND_DRIVER *this,objOBJ *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  
  if (param_1 != (objOBJ *)0x0) {
    iVar1 = *(int *)(param_1 + 0x38);
    bVar2 = false;
    if ((*(int *)(param_1 + 0x14) != 0) && (*(int *)(param_1 + 0x10) != 0)) {
      d3dVBUF_MNG::FreeObjVBData(&d3dVBMng,param_1);
    }
    AllocObjVBuf(this,param_1);
    for (iVar3 = iVar1; (iVar1 != 0 && ((!bVar2 || (iVar3 != iVar1))));
        iVar3 = *(int *)(iVar3 + 0x30)) {
      (**(code **)(*(int *)this + 0xb0))(iVar3);
      bVar2 = true;
    }
  }
  return;
}




/* from: drv:D3d_rnd_idx.cpp
   addr: 004B30C0 */

int __thiscall
d3dREND_DRIVER::SetVBStatFrames(d3dREND_DRIVER *this,objOBJ *param_1,objVB_STAT_FRAME_DATA *param_2)

{
  objOBJ *poVar1;
  bool bVar2;
  objOBJ *poVar3;
  
  if (*(int *)(param_1 + 0xf4) == 0) {
    SetVBStatFrames_StoreData(this,param_1,param_2);
  }
  else {
    bVar2 = false;
    poVar1 = *(objOBJ **)(param_1 + 0x38);
    for (poVar3 = poVar1; (poVar1 != (objOBJ *)0x0 && ((!bVar2 || (poVar3 != poVar1))));
        poVar3 = *(objOBJ **)(poVar3 + 0x30)) {
      SetVBStatFrames_StoreData(this,poVar3,param_2);
      bVar2 = true;
    }
  }
  return 1;
}




/* from: drv:D3d_rnd_idx.cpp
   addr: 004B3120 */

int __thiscall
d3dREND_DRIVER::SetVBStatFrames_StoreData
          (d3dREND_DRIVER *this,objOBJ *param_1,objVB_STAT_FRAME_DATA *param_2)

{
  int iVar1;
  objOBJ *poVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  poVar2 = objGetTplObj(param_1);
  if (poVar2 == (objOBJ *)0x0) {
    return 0;
  }
  iVar5 = *(int *)(poVar2 + 0x28);
  if (*(short *)(iVar5 + 0x78) == 0) {
    pvVar3 = apMalloc(*(short *)param_2 * 0xc);
    *(void **)(iVar5 + 0x7a) = pvVar3;
    if (*(int *)(*(int *)(poVar2 + 0x28) + 0x7a) == 0) {
      return 0;
    }
    *(undefined4 *)(*(int *)(poVar2 + 0x28) + 0x7e) = *(undefined4 *)(param_2 + 6);
    *(undefined2 *)(*(int *)(poVar2 + 0x28) + 0x78) = *(undefined2 *)param_2;
    puVar6 = *(undefined4 **)(param_2 + 2);
    puVar7 = *(undefined4 **)(*(int *)(poVar2 + 0x28) + 0x7a);
    for (uVar4 = *(short *)param_2 * 3 & 0x3fffffff; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
  }
  iVar5 = *(int *)(poVar2 + 0x28);
  iVar1 = *(int *)(param_1 + 0x28);
  *(undefined4 *)(iVar1 + 0x78) = *(undefined4 *)(iVar5 + 0x78);
  *(undefined4 *)(iVar1 + 0x7c) = *(undefined4 *)(iVar5 + 0x7c);
  *(undefined2 *)(iVar1 + 0x80) = *(undefined2 *)(iVar5 + 0x80);
  if (((*(uint *)(*(int *)(param_1 + 0x28) + 0x66) & 1) != 0) &&
     ((*(uint *)(*(int *)(param_1 + 0x28) + 0x66) & 8) == 0)) {
    d3dVBUF_MNG::SetVBStatFrames_AddAllFrames(&d3dVBMng,param_1);
  }
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: drv:D3d_rnd_idx.cpp
   addr: 004B31F0 */

int __fastcall d3dDecideVBStatDyn(objOBJ *param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  
  if (*(int *)(param_1 + 0xbc) != 0) {
    iVar3 = *(int *)(param_1 + 0x28);
    sVar2 = *(short *)(iVar3 + 0x78);
    if (sVar2 != 0) {
      if (*(short *)(iVar3 + 0x6e) == 0) {
        return 0;
      }
      if ((*(uint *)(iVar3 + 0x66) & 0x1f000) == 0) {
        if (*(float *)(iVar3 + 0x7e) < ___real_00000000) {
          *(undefined2 *)(iVar3 + 0x74) = 0;
          return 1;
        }
        iVar7 = -1;
        iVar5 = 0;
        if (0 < sVar2) {
          pfVar6 = *(float **)(iVar3 + 0x7a);
          fVar4 = _DAT_005db704;
          do {
            fVar1 = ABS(*(float *)(*(int *)(param_1 + 0xbc) + 0xe4) - *pfVar6);
            if ((fVar1 < fVar4) && (fVar1 < *(float *)(iVar3 + 0x7e))) {
              iVar7 = iVar5;
              fVar4 = fVar1;
            }
            iVar5 = iVar5 + 1;
            pfVar6 = pfVar6 + 3;
          } while (iVar5 < sVar2);
          if (-1 < iVar7) {
            *(short *)(iVar3 + 0x74) = (short)iVar7;
            return 1;
          }
        }
        return 0;
      }
      return 0;
    }
  }
  return (uint)((*(uint *)(*(int *)(param_1 + 0x28) + 0x66) & 0x1f0) == 0);
}




/* from: drv:D3d_rnd_idx.cpp
   addr: 004B32F0 */

int __thiscall objOBJ_ITER::IsDone(objOBJ_ITER *this)

{
  if ((*(int *)(this + 4) != 0) &&
     ((*(int *)(this + 0xc) == 0 || (*(int *)(this + 8) != *(int *)(this + 4))))) {
    return 0;
  }
  return 1;
}

