
/* from: engine:obj_mod_tex.cpp
   addr: 004CEAA0
   addr: 004CEAA0
   addr: 004CEAA0
   addr: 004CEAA0
   addr: 004CEAA0
   addr: 004CEAA0 */

void * __thiscall objMOD_TEX::_vector_deleting_destructor_(objMOD_TEX *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  apFree(*(void **)(this + 0x24));
  objMODIFIER::~objMODIFIER((objMODIFIER *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: engine:obj_mod_tex.cpp
   addr: 004CEAE0 */

int __thiscall objMOD_TEX::AddObj(objMOD_TEX *this,objOBJ *param_1)

{
  int iVar1;
  objMTL_CTRL *poVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  iVar1 = objMODIFIER::AddObj((objMODIFIER *)this,param_1);
  if (iVar1 == 0) {
    return 0;
  }
  poVar2 = objMTL_CTRL_TBL::FindMtlCtrl
                     ((objMTL_CTRL_TBL *)
                      (*(int *)(*(int *)(*(int *)(this + 0x18) + 0x28) + 0x18) + 6),
                      *(int *)(this + 0x1c));
  *(objMTL_CTRL **)(this + 0x20) = poVar2;
  iVar1 = objMTL_CTRL_TBL::IsSharedTCCoordID
                    ((objMTL_CTRL_TBL *)
                     (*(int *)(*(int *)(*(int *)(this + 0x18) + 0x28) + 0x18) + 6),
                     (uint)(byte)poVar2[1]);
  if (iVar1 == 0) {
    iVar1 = objOBJ::UnshareTexCoord
                      (*(objOBJ **)(this + 0x18),(uint)*(byte *)(*(int *)(this + 0x20) + 1));
    if (iVar1 == 0) {
      return 0;
    }
  }
  else {
    iVar1 = objMTL_CTRL_TBL::FindFreeTCCoordID
                      ((objMTL_CTRL_TBL *)
                       (*(int *)(*(int *)(*(int *)(this + 0x18) + 0x28) + 0x18) + 6));
    if (iVar1 != -1) {
      iVar3 = objOBJ::AllocTexCoord
                        (*(objOBJ **)(this + 0x18),iVar1,
                         (uint)*(ushort *)
                                (*(int *)(*(objOBJ **)(this + 0x18) + 0x28) + 6 +
                                (uint)*(byte *)(*(int *)(this + 0x20) + 1) * 2));
      if (iVar3 == 0) {
        return 0;
      }
      iVar3 = *(int *)(*(int *)(this + 0x18) + 0x28);
      puVar5 = *(undefined4 **)(iVar3 + 0xc + (uint)*(byte *)(*(int *)(this + 0x20) + 1) * 4);
      puVar6 = *(undefined4 **)(iVar3 + 0xc + iVar1 * 4);
      for (uVar4 = ((uint)*(ushort *)(iVar3 + 6 + (uint)*(byte *)(*(int *)(this + 0x20) + 1) * 2) <<
                   3) >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
      *(char *)(*(int *)(this + 0x20) + 1) = (char)iVar1;
    }
    objOBJ::SetDefaultTCHWIndID(*(objOBJ **)(this + 0x18));
  }
  *(uint *)(*(int *)(*(int *)(this + 0x18) + 0x28) + 0x66) =
       *(uint *)(*(int *)(*(int *)(this + 0x18) + 0x28) + 0x66) | 0x40;
  return 1;
}




/* from: engine:obj_mod_tex.cpp
   addr: 004CEBF0 */

objMOD_TEX_SCROLL * __thiscall
objMOD_TEX_SCROLL::objMOD_TEX_SCROLL(objMOD_TEX_SCROLL *this,int param_1)

{
  objMODIFIER::objMODIFIER((objMODIFIER *)this,0x54534352,0x1e);
  *(undefined4 *)(this + 0x14) = 0x4000;
  *(int *)(this + 0x1c) = param_1;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 0x10) = 0x8000;
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:obj_mod_tex.cpp
   addr: 004CEC30 */

int __thiscall objMOD_TEX_SCROLL::Modify(objMOD_TEX_SCROLL *this)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint local_8;
  uint local_4;
  
  local_8 = (uint)(ABS(objMODIFIER::elapsedTime) < _DAT_005dbca4);
  if ((float)local_8 == ___real_00000000) {
    iVar3 = *(int *)(*(int *)(this + 0x18) + 0x28);
    iVar4 = 0;
    iVar2 = *(byte *)(*(int *)(this + 0x20) + 1) + 3;
    if (*(short *)(iVar3 + 6 + (uint)*(byte *)(*(int *)(this + 0x20) + 1) * 2) != 0) {
      do {
        local_4 = (uint)(ABS(*(float *)(this + 0x28)) < _DAT_005dbca4);
        if ((float)local_4 == ___real_00000000) {
          pfVar1 = (float *)(*(int *)(iVar3 + iVar2 * 4) + iVar4 * 8);
          *pfVar1 = objMODIFIER::elapsedTime * *(float *)(this + 0x28) + *pfVar1;
        }
        local_4 = (uint)(ABS(*(float *)(this + 0x2c)) < _DAT_005dbca4);
        if ((float)local_4 == ___real_00000000) {
          iVar2 = *(int *)(*(int *)(*(int *)(this + 0x18) + 0x28) + 0xc +
                          (uint)*(byte *)(*(int *)(this + 0x20) + 1) * 4);
          *(float *)(iVar2 + 4 + iVar4 * 8) =
               objMODIFIER::elapsedTime * *(float *)(this + 0x2c) +
               *(float *)(iVar2 + 4 + iVar4 * 8);
        }
        iVar4 = iVar4 + 1;
        iVar2 = *(byte *)(*(int *)(this + 0x20) + 1) + 3;
        iVar3 = *(int *)(*(int *)(this + 0x18) + 0x28);
      } while (iVar4 < (int)(uint)*(ushort *)(iVar3 + iVar2 * 2));
    }
    objOBJ::NormalizeTextCoord(*(objOBJ **)(this + 0x18),(uint)*(byte *)(*(int *)(this + 0x20) + 1))
    ;
    *(uint *)(*(int *)(*(int *)(this + 0x18) + 0x28) + 0x66) =
         *(uint *)(*(int *)(*(int *)(this + 0x18) + 0x28) + 0x66) | 0x4000;
  }
  return 1;
}




/* from: engine:obj_mod_tex.cpp
   addr: 004CEDA0 */

objMOD_TEX_FRAME_ANIM * __thiscall
objMOD_TEX_FRAME_ANIM::objMOD_TEX_FRAME_ANIM(objMOD_TEX_FRAME_ANIM *this,int param_1)

{
  objMODIFIER::objMODIFIER((objMODIFIER *)this,0x5446414e,10);
  *(undefined4 *)(this + 0x14) = 0x4000;
  *(int *)(this + 0x1c) = param_1;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 0x10) = 0x8000;
  return this;
}




/* from: engine:obj_mod_tex.cpp
   addr: 004CEDF0 */

int __thiscall objMOD_TEX_FRAME_ANIM::AddObj(objMOD_TEX_FRAME_ANIM *this,objOBJ *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  iVar1 = objMOD_TEX::AddObj((objMOD_TEX *)this,param_1);
  if (iVar1 == 0) {
    return 0;
  }
  puVar2 = (undefined4 *)
           apRealloc(*(void **)(this + 0x24),
                     (uint)*(ushort *)
                            (*(int *)(*(int *)(this + 0x18) + 0x28) + 6 +
                            (uint)*(byte *)(*(int *)(this + 0x20) + 1) * 2) << 3);
  *(undefined4 **)(this + 0x24) = puVar2;
  if (puVar2 == (undefined4 *)0x0) {
    return 0;
  }
  puVar4 = *(undefined4 **)
            (*(int *)(*(int *)(this + 0x18) + 0x28) + 0xc +
            (uint)*(byte *)(*(int *)(this + 0x20) + 1) * 4);
  for (uVar3 = ((uint)*(ushort *)
                       (*(int *)(*(int *)(this + 0x18) + 0x28) + 6 +
                       (uint)*(byte *)(*(int *)(this + 0x20) + 1) * 2) << 3) >> 2; uVar3 != 0;
      uVar3 = uVar3 - 1) {
    *puVar2 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar2 = puVar2 + 1;
  }
  for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined1 *)puVar2 = *(undefined1 *)puVar4;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  }
  return 1;
}




/* from: engine:obj_mod_tex.cpp
   addr: 004CEE70 */

void __thiscall
objMOD_TEX_FRAME_ANIM::SetParams
          (objMOD_TEX_FRAME_ANIM *this,int param_1,int param_2,float param_3,float param_4,
          int param_5,float param_6,float param_7,int param_8)

{
  *(int *)(this + 0x2c) = param_2;
  *(int *)(this + 0x28) = param_1;
  if (param_5 < 0) {
    param_5 = param_1 * param_2;
  }
  *(int *)(this + 0x30) = param_5;
  *(float *)(this + 0x48) = param_4;
  *(float *)(this + 0x34) = param_3;
  *(float *)(this + 0x44) = param_7;
  *(float *)(this + 0x40) = param_6;
  if (param_8 != 0) {
    *(uint *)(this + 4) = *(uint *)(this + 4) | 0x4000;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:obj_mod_tex.cpp
   addr: 004CEED0 */

int __thiscall objMOD_TEX_FRAME_ANIM::Modify(objMOD_TEX_FRAME_ANIM *this)

{
  int iVar1;
  int iVar2;
  uint local_8;
  
  local_8 = (uint)(ABS(objMODIFIER::elapsedTime) < _DAT_005dbca4);
  if ((float)local_8 == ___real_00000000) {
    if ((*(float *)(this + 0x34) <= *(float *)(this + 0x48)) &&
       ((*(uint *)(this + 4) & 0x4000) != 0)) {
      *(float *)(this + 0x48) = *(float *)(this + 0x48) - *(float *)(this + 0x34);
    }
    iVar1 = (int)ROUND((*(float *)(this + 0x48) / *(float *)(this + 0x34)) *
                       (float)*(int *)(this + 0x30) - `int___cdecl_m3dIntFloor(float)'::__l2::qqq);
    iVar2 = *(int *)(this + 0x30) + -1;
    if (iVar1 < *(int *)(this + 0x30) + -1) {
      iVar2 = iVar1;
    }
    *(int *)(this + 0x3c) = iVar2;
    ApplyFrameNmb(this,iVar2);
    *(uint *)(*(int *)(*(int *)(this + 0x18) + 0x28) + 0x66) =
         *(uint *)(*(int *)(*(int *)(this + 0x18) + 0x28) + 0x66) | 0x4000;
  }
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:obj_mod_tex.cpp
   addr: 004CEF90 */

void __thiscall objMOD_TEX_FRAME_ANIM::ApplyFrameNmb(objMOD_TEX_FRAME_ANIM *this,int param_1)

{
  txmTEXTURE *ptVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float local_c;
  
  iVar4 = *(int *)(this + 0x2c);
  local_c = (float)(param_1 / iVar4) / (float)*(int *)(this + 0x28);
  param_1 = (int)((float)(param_1 % iVar4) / (float)iVar4);
  if ((((___real_00000000 < *(float *)(this + 0x40)) && (___real_00000000 < *(float *)(this + 0x44))
       ) && (0 < *(int *)(*(objOBJ **)(this + 0x18) + 0x10))) &&
     (ptVar1 = objOBJ::GetFaceTexRendMtl(*(objOBJ **)(this + 0x18),0,*(int *)(this + 0x1c)),
     ptVar1 != (txmTEXTURE *)0x0)) {
    local_c = ((float)*(int *)(this + 0x2c) / (float)*(int *)(ptVar1 + 0x4c)) *
              *(float *)(this + 0x40) * local_c;
    param_1 = (int)(((float)*(int *)(this + 0x28) / (float)*(int *)(ptVar1 + 0x50)) *
                    *(float *)(this + 0x44) * (float)param_1);
  }
  iVar2 = 0;
  iVar3 = *(byte *)(*(int *)(this + 0x20) + 1) + 3;
  iVar4 = *(int *)(*(int *)(this + 0x18) + 0x28);
  if (*(short *)(iVar4 + iVar3 * 2) != 0) {
    do {
      *(float *)(*(int *)(iVar4 + iVar3 * 4) + iVar2 * 8) =
           (float)param_1 + *(float *)(*(int *)(this + 0x24) + iVar2 * 8);
      iVar4 = iVar2 * 8;
      iVar2 = iVar2 + 1;
      *(float *)(*(int *)(*(int *)(*(int *)(this + 0x18) + 0x28) + 0xc +
                         (uint)*(byte *)(*(int *)(this + 0x20) + 1) * 4) + -4 + iVar2 * 8) =
           local_c + *(float *)(*(int *)(this + 0x24) + 4 + iVar4);
      iVar3 = *(byte *)(*(int *)(this + 0x20) + 1) + 3;
      iVar4 = *(int *)(*(int *)(this + 0x18) + 0x28);
    } while (iVar2 < (int)(uint)*(ushort *)(iVar4 + iVar3 * 2));
  }
  return;
}




/* from: engine:obj_mod_tex.cpp
   addr: 004CF0A0 */

objMOD_TEX_SEQ_ANIM * __thiscall
objMOD_TEX_SEQ_ANIM::objMOD_TEX_SEQ_ANIM(objMOD_TEX_SEQ_ANIM *this,int param_1)

{
  objMODIFIER::objMODIFIER((objMODIFIER *)this,0x5446414e,10);
  *(undefined ***)this = &_vftable_;
  *(int *)(this + 0x1c) = param_1;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x10) = 0x8000;
  *(undefined4 *)(this + 0x14) = 0x4000;
  return this;
}




/* from: engine:obj_mod_tex.cpp
   addr: 004CF0E0
   addr: 004CF0E0 */

void * __thiscall
objMOD_TEX_SEQ_ANIM::_scalar_deleting_destructor_(objMOD_TEX_SEQ_ANIM *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  apFree(*(void **)(this + 0x24));
  objMODIFIER::~objMODIFIER((objMODIFIER *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: engine:obj_mod_tex.cpp
   addr: 004CF140 */

int __thiscall objMOD_TEX_SEQ_ANIM::AddObj(objMOD_TEX_SEQ_ANIM *this,objOBJ *param_1)

{
  int iVar1;
  
  iVar1 = objMODIFIER::AddObj((objMODIFIER *)this,param_1);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = objOBJ::UnshareFaceSplit(*(objOBJ **)(this + 0x18));
  return (uint)(iVar1 != 0);
}




/* from: engine:obj_mod_tex.cpp
   addr: 004CF170 */

int __thiscall
objMOD_TEX_SEQ_ANIM::SetParams
          (objMOD_TEX_SEQ_ANIM *this,int param_1,txmTEXTURE **param_2,float param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  
  *(int *)(this + 0x20) = param_1;
  *(float *)(this + 0x28) = param_3;
  puVar1 = (undefined4 *)apRealloc(*(void **)(this + 0x24),param_1 * 4);
  *(undefined4 **)(this + 0x24) = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    return 0;
  }
  for (uVar2 = *(uint *)(this + 0x20) & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar1 = *param_2;
    param_2 = param_2 + 1;
    puVar1 = puVar1 + 1;
  }
  for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined1 *)puVar1 = *(undefined1 *)param_2;
    param_2 = (txmTEXTURE **)((int)param_2 + 1);
    puVar1 = (undefined4 *)((int)puVar1 + 1);
  }
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:obj_mod_tex.cpp
   addr: 004CF1D0 */

int __thiscall objMOD_TEX_SEQ_ANIM::Modify(objMOD_TEX_SEQ_ANIM *this)

{
  int iVar1;
  uint local_8;
  
  local_8 = (uint)(ABS(objMODIFIER::elapsedTime) < _DAT_005dbca4);
  if ((float)local_8 == ___real_00000000) {
    if (*(float *)(this + 0x28) <= *(float *)(this + 0x2c)) {
      *(float *)(this + 0x2c) = *(float *)(this + 0x2c) - *(float *)(this + 0x28);
    }
    iVar1 = (int)ROUND((*(float *)(this + 0x2c) / *(float *)(this + 0x28)) *
                       (float)*(int *)(this + 0x20) - `int___cdecl_m3dIntFloor(float)'::__l2::qqq);
    if (*(int *)(this + 0x20) + -1 <= iVar1) {
      iVar1 = *(int *)(this + 0x20) + -1;
    }
    (**(code **)(*(int *)txmManager + 0x10))(*(undefined4 *)(*(int *)(this + 0x24) + iVar1 * 4));
    objOBJ::SetTex(*(objOBJ **)(this + 0x18),*(int *)(this + 0x1c),
                   *(txmTEXTURE **)(*(int *)(this + 0x24) + iVar1 * 4));
  }
  return 1;
}




/* from: engine:obj_mod_tex.cpp
   addr: 004CF290 */

objMOD_BLINK_TRANSP * __thiscall objMOD_BLINK_TRANSP::objMOD_BLINK_TRANSP(objMOD_BLINK_TRANSP *this)

{
  objMODIFIER::objMODIFIER((objMODIFIER *)this,0x424c5452,0x32);
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x10) = 0x8000;
  *(undefined4 *)(this + 0x14) = 0x2000;
  return this;
}




/* from: engine:obj_mod_tex.cpp
   addr: 004CF2D0 */

int __thiscall objMOD_BLINK_TRANSP::AddObj(objMOD_BLINK_TRANSP *this,objOBJ *param_1)

{
  int iVar1;
  m3dSPL *pmVar2;
  
  iVar1 = objMODIFIER::AddObj((objMODIFIER *)this,param_1);
  if (iVar1 == 0) {
    return 0;
  }
  pmVar2 = m3dSPL::Make(0,5);
  *(m3dSPL **)(this + 0x24) = pmVar2;
  return (uint)(pmVar2 != (m3dSPL *)0x0);
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:obj_mod_tex.cpp
   addr: 004CF310 */

void __thiscall
objMOD_BLINK_TRANSP::SetParams
          (objMOD_BLINK_TRANSP *this,float param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)*(byte *)(*(int *)(*(int *)(this + 0x18) + 0x28) + 0x61);
  *(float *)(this + 0x1c) = param_1;
  *(float *)(this + 0x28) = param_4;
  *(float *)(this + 0x20) = param_3;
  m3dSPL_LINEAR1D::SetKp(*(m3dSPL_LINEAR1D **)(this + 0x24),0,0.0,0.0);
  fVar2 = (param_1 - param_2) * ___real_3f000000;
  m3dSPL_LINEAR1D::SetKp(*(m3dSPL_LINEAR1D **)(this + 0x24),1,fVar2,fVar1);
  m3dSPL_LINEAR1D::SetKp(*(m3dSPL_LINEAR1D **)(this + 0x24),2,param_1 - fVar2,fVar1);
  m3dSPL_LINEAR1D::SetKp(*(m3dSPL_LINEAR1D **)(this + 0x24),3,param_1,0.0);
  m3dSPL_LINEAR1D::SetKp(*(m3dSPL_LINEAR1D **)(this + 0x24),4,param_1 + param_3,0.0);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:obj_mod_tex.cpp
   addr: 004CF3C0 */

int __thiscall objMOD_BLINK_TRANSP::Modify(objMOD_BLINK_TRANSP *this)

{
  int iVar1;
  objAPPLY_COLOR oVar2;
  int iVar3;
  uint local_4;
  
  local_4 = (uint)(ABS(objMODIFIER::elapsedTime) < _DAT_005dbca4);
  if ((float)local_4 == ___real_00000000) {
    if (*(float *)(this + 0x20) + *(float *)(this + 0x1c) < *(float *)(this + 0x28)) {
      *(float *)(this + 0x28) =
           *(float *)(this + 0x28) - (*(float *)(this + 0x20) + *(float *)(this + 0x1c));
    }
    (**(code **)(**(int **)(this + 0x24) + 0x10))(*(undefined4 *)(this + 0x28),&local_4,0);
    iVar3 = 0;
    oVar2 = 1;
    iVar1 = ftol();
    objOBJ::SetConstColor(*(objOBJ **)(this + 0x18),iVar1 << 0x18 | 0xffffff,oVar2,iVar3);
    *(uint *)(*(int *)(*(int *)(this + 0x18) + 0x28) + 0x66) =
         *(uint *)(*(int *)(*(int *)(this + 0x18) + 0x28) + 0x66) | 0x8000;
  }
  return 1;
}




/* from: engine:obj_mod_tex.cpp
   addr: 004CF470 */

objMOD_NOISE_DEFORM_UV * __thiscall
objMOD_NOISE_DEFORM_UV::objMOD_NOISE_DEFORM_UV(objMOD_NOISE_DEFORM_UV *this,int param_1)

{
  objMODIFIER::objMODIFIER((objMODIFIER *)this,0x4e445556,0x3c);
  *(undefined ***)this = &objMOD_TEX::_vftable_;
  *(int *)(this + 0x1c) = param_1;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x14) = 0x4000;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = DAT_005dbca8;
  *(undefined4 *)(this + 0x3c) = 2;
  *(undefined ***)(this + 0x38) = &m3dPRISM::_vftable_;
  *(undefined4 *)(this + 0xec) = 0;
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 0x10) = 0x8000;
  return this;
}




/* from: engine:obj_mod_tex.cpp
   addr: 004CF4E0 */

int __thiscall objMOD_NOISE_DEFORM_UV::AddObj(objMOD_NOISE_DEFORM_UV *this,objOBJ *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  m3dV *pmVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  
  iVar1 = objMOD_TEX::AddObj((objMOD_TEX *)this,param_1);
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)
             apRealloc(*(void **)(this + 0x24),
                       (uint)*(ushort *)
                              (*(int *)(*(int *)(this + 0x18) + 0x28) + 6 +
                              (uint)*(byte *)(*(int *)(this + 0x20) + 1) * 2) << 3);
    *(undefined4 **)(this + 0x24) = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      puVar5 = *(undefined4 **)
                (*(int *)(*(int *)(this + 0x18) + 0x28) + 0xc +
                (uint)*(byte *)(*(int *)(this + 0x20) + 1) * 4);
      for (uVar4 = ((uint)*(ushort *)
                           (*(int *)(*(int *)(this + 0x18) + 0x28) + 6 +
                           (uint)*(byte *)(*(int *)(this + 0x20) + 1) * 2) << 3) >> 2; uVar4 != 0;
          uVar4 = uVar4 - 1) {
        *puVar2 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar2 = puVar2 + 1;
      }
      for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
        *(undefined1 *)puVar2 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar2 = (undefined4 *)((int)puVar2 + 1);
      }
      objOBJ::TransformPoints(*(objOBJ **)(this + 0x18),(m3dMATR *)0x0,(m3dV *)0x0);
      iVar1 = *(int *)(this + 0x38);
      uVar6 = *(undefined4 *)(*(int *)(this + 0x18) + 0x14);
      pmVar3 = objOBJ::GetTransformedVertList();
      (**(code **)(iVar1 + 0x14))(pmVar3,uVar6);
      (**(code **)(*(int *)(this + 0x38) + 0x2c))(*(undefined4 *)(this + 0x28));
      return 1;
    }
  }
  return 0;
}




/* from: engine:obj_mod_tex.cpp
   addr: 004CF590 */

void __thiscall
objMOD_NOISE_DEFORM_UV::SetParams
          (objMOD_NOISE_DEFORM_UV *this,float param_1,float param_2,float param_3,float param_4)

{
  *(float *)(this + 0x28) = param_1;
  *(float *)(this + 0x2c) = param_2;
  *(float *)(this + 0x30) = param_3;
  *(float *)(this + 0x34) = param_4;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:obj_mod_tex.cpp
   addr: 004CF5B0 */

int __thiscall objMOD_NOISE_DEFORM_UV::Modify(objMOD_NOISE_DEFORM_UV *this)

{
  bool bVar1;
  float10 fVar2;
  float10 fVar3;
  int iVar4;
  float10 fVar5;
  uint local_1c;
  
  local_1c = (uint)(ABS(objMODIFIER::elapsedTime) < _DAT_005dbca4);
  if (((float)local_1c == ___real_00000000) &&
     (iVar4 = (**(code **)(*(int *)(this + 0x38) + 0x10))
                        (&objMODIFIER::viewPos,DAT_005dbca8,0,this + 0x34,0), iVar4 != 0)) {
    iVar4 = 0;
    if (*(short *)(*(int *)(*(int *)(this + 0x18) + 0x28) + 6 +
                  (uint)*(byte *)(*(int *)(this + 0x20) + 1) * 2) != 0) {
      do {
        if ((float)(1.0 < _DAT_005dbca4) == ___real_00000000) {
          floor((double)*(float *)(*(int *)(this + 0x24) + iVar4 * 8));
        }
        bVar1 = 1.0 < _DAT_005dbca4;
        if ((float)bVar1 == ___real_00000000) {
          floor((double)*(float *)(*(int *)(this + 0x24) + iVar4 * 8 + 4));
        }
        (**(code **)(*(int *)m3dNoise + 8))();
        fVar5 = (float10)(**(code **)(*(int *)m3dNoise + 8))(&stack0xffffffd4);
        fVar2 = (float10)___real_3f800000;
        fVar3 = (float10)___real_3f000000;
        *(float *)(*(int *)(*(int *)(*(int *)(this + 0x18) + 0x28) + 0xc +
                           (uint)*(byte *)(*(int *)(this + 0x20) + 1) * 4) + iVar4 * 8) =
             (float)(uint)bVar1 * *(float *)(this + 0x28) +
             *(float *)(*(int *)(this + 0x24) + iVar4 * 8);
        iVar4 = iVar4 + 1;
        *(float *)(*(int *)(*(int *)(*(int *)(this + 0x18) + 0x28) + 0xc +
                           (uint)*(byte *)(*(int *)(this + 0x20) + 1) * 4) + -4 + iVar4 * 8) =
             (float)((fVar5 + fVar2) * fVar3 * (float10)*(float *)(this + 0x28) +
                    (float10)*(float *)(*(int *)(this + 0x24) + -4 + iVar4 * 8));
      } while (iVar4 < (int)(uint)*(ushort *)
                                   (*(int *)(*(int *)(this + 0x18) + 0x28) + 6 +
                                   (uint)*(byte *)(*(int *)(this + 0x20) + 1) * 2));
    }
    *(uint *)(*(int *)(*(int *)(this + 0x18) + 0x28) + 0x66) =
         *(uint *)(*(int *)(*(int *)(this + 0x18) + 0x28) + 0x66) | 0x4000;
  }
  return 1;
}




/* from: engine:obj_mod_tex.cpp
   addr: 004CF7E0
   addr: 004CF7E0 */

void * __thiscall
objMOD_NOISE_DEFORM_UV::_scalar_deleting_destructor_(objMOD_NOISE_DEFORM_UV *this,uint param_1)

{
  *(undefined ***)(this + 0x38) = &m3dVOL::_vftable_;
  *(undefined ***)this = &objMOD_TEX::_vftable_;
  apFree(*(void **)(this + 0x24));
  objMODIFIER::~objMODIFIER((objMODIFIER *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: engine:obj_mod_tex.cpp
   addr: 004CF850
   addr: 004CF850 */

void * __thiscall
objMOD_BLINK_TRANSP::_vector_deleting_destructor_(objMOD_BLINK_TRANSP *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  if (*(int **)(this + 0x24) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x24) + 4))(1);
  }
  objMODIFIER::~objMODIFIER((objMODIFIER *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

