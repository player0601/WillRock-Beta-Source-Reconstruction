
/* from: engine:particle.cpp
   addr: 004C0180 */

int __fastcall partInit(void)

{
  int iVar1;
  partEMITTER_PHYS ***ppppVar2;
  
  DAT_008b9830 = txmMANAGER::Add(txmManager,s_particle,0x40003,1);
  if (DAT_008b9830 == (txmTEXTURE *)0x0) {
    return 0;
  }
  ppppVar2 = &_partEmitList;
  for (iVar1 = 600; iVar1 != 0; iVar1 = iVar1 + -1) {
    *ppppVar2 = (partEMITTER_PHYS **)0x0;
    ppppVar2 = ppppVar2 + 1;
  }
  return 1;
}




/* from: engine:particle.cpp
   addr: 004C01C0 */

void __fastcall partTerm(void)

{
  partEMITTER_PHYS ***ppppVar1;
  
  ppppVar1 = &_partEmitList;
  do {
    if (*ppppVar1 != (partEMITTER_PHYS **)0x0) {
      (**(code **)**ppppVar1)(1);
    }
    ppppVar1 = ppppVar1 + 1;
  } while ((int)ppppVar1 < 0x8b78f0);
  return;
}




/* from: engine:particle.cpp
   addr: 004C01E0 */

partEMITTER_PHYS * __thiscall
partEMITTER_PHYS::partEMITTER_PHYS(partEMITTER_PHYS *this,float param_1,float param_2)

{
  int iVar1;
  
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined ***)this = &_vftable_;
  iVar1 = ftol();
  if (iVar1 < 3) {
    iVar1 = 3;
  }
  ConstructorInit(this,0x3c,iVar1,param_1,param_2);
  return this;
}




/* from: engine:particle.cpp
   addr: 004C0230 */

partEMITTER_PHYS * __thiscall
partEMITTER_PHYS::partEMITTER_PHYS(partEMITTER_PHYS *this,int param_1,float param_2,float param_3)

{
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined ***)this = &_vftable_;
  ConstructorInit(this,0x3c,param_1,param_2,param_3);
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:particle.cpp
   addr: 004C0260 */

int __thiscall
partEMITTER_PHYS::ConstructorInit
          (partEMITTER_PHYS *this,int param_1,int param_2,float param_3,float param_4)

{
  undefined4 uVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 8) = 0xc0;
  *(undefined4 *)(this + 8) = 0x2c0;
  *(float *)(this + 0xc) = param_3;
  *(float *)(this + 0x1c) = param_4;
  *(float *)(this + 0x10) = param_3;
  *(undefined4 *)(this + 0x14) = 0;
  *(float *)(this + 0x18) = param_4;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0x40a00000;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0x3f800000;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0x7fffffff;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x54) = 0x3f000000;
  *(undefined4 *)(this + 0x58) = 0x3f800000;
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined4 *)(this + 0x60) = 0x3f800000;
  *(undefined4 *)(this + 100) = 0;
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x7c) = 1;
  *(undefined4 *)(this + 0x80) = 1;
  *(undefined4 *)(this + 0x84) = 0;
  *(undefined4 *)(this + 0x88) = 0;
  uVar1 = DAT_008b9830;
  *(undefined4 *)(this + 0x98) = 0x3f800000;
  *(undefined4 *)(this + 0x68) = uVar1;
  *(undefined4 *)(this + 0x9c) = 0x3f800000;
  *(undefined4 *)(this + 0x264) = 0x3f800000;
  *(undefined4 *)(this + 0x268) = 0x3f800000;
  *(undefined4 *)(this + 0x8c) = 0x49742400;
  *(undefined4 *)(this + 0x90) = 0;
  *(undefined4 *)(this + 0x94) = 0;
  *(undefined4 *)(this + 0xb0) = 0;
  *(undefined4 *)(this + 0xdc) = _m3dVZero;
  *(undefined4 *)(this + 0xe0) = DAT_00963740;
  uVar1 = DAT_00963744;
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xb4) = 0;
  *(undefined4 *)(this + 0xe4) = uVar1;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0xc4) = 0;
  *(undefined4 *)(this + 0xc0) = 0;
  *(undefined4 *)(this + 200) = 0;
  *(undefined4 *)(this + 0xd0) = 0;
  *(undefined4 *)(this + 0xcc) = 0;
  *(undefined4 *)(this + 0xd8) = 0;
  *(undefined4 *)(this + 0xd4) = 0;
  *(undefined4 *)(this + 0x100) = _m3dVZero;
  *(undefined4 *)(this + 0x104) = DAT_00963740;
  *(undefined4 *)(this + 0x108) = DAT_00963744;
  *(undefined4 *)(this + 0x10c) = _m3dVUnitY;
  *(undefined4 *)(this + 0x110) = DAT_005f9994;
  *(undefined4 *)(this + 0x114) = DAT_005f9998;
  *(undefined4 *)(this + 0x118) = _m3dVZero;
  *(undefined4 *)(this + 0x11c) = DAT_00963740;
  *(undefined4 *)(this + 0x120) = DAT_00963744;
  m3dMATR::Identity((m3dMATR *)(this + 0x148));
  m3dMATR::Identity((m3dMATR *)(this + 0x188));
  *(undefined4 *)(this + 0x1c8) = _m3dVOneXYZ;
  *(undefined4 *)(this + 0x1cc) = DAT_005f99ac;
  uVar1 = DAT_005f99b0;
  *(undefined4 *)(this + 0xe8) = 0;
  *(undefined4 *)(this + 0xec) = 0;
  *(undefined4 *)(this + 0x1d0) = uVar1;
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0xf4) = 0;
  *(undefined4 *)(this + 0xf8) = 0;
  *(undefined4 *)(this + 0xfc) = 0;
  *(undefined4 *)(this + 0x124) = _m3dVZero;
  *(undefined4 *)(this + 0x128) = DAT_00963740;
  *(undefined4 *)(this + 300) = DAT_00963744;
  *(undefined4 *)(this + 0x130) = _m3dVUnitY;
  *(undefined4 *)(this + 0x134) = DAT_005f9994;
  *(undefined4 *)(this + 0x138) = DAT_005f9998;
  *(undefined4 *)(this + 0x13c) = _m3dVZero;
  *(undefined4 *)(this + 0x140) = DAT_00963740;
  uVar1 = DAT_00963744;
  *(undefined4 *)(this + 0xa0) = 0x3f800000;
  *(undefined4 *)(this + 0xa4) = 0x3f800000;
  *(undefined4 *)(this + 0xa8) = 0x3f800000;
  *(undefined4 *)(this + 0xac) = 0x3f800000;
  *(undefined4 *)(this + 0x144) = uVar1;
  *(undefined4 *)(this + 0x1d4) = 0;
  *(undefined4 *)(this + 0x1d8) = 0;
  *(undefined4 *)(this + 0x1dc) = 0;
  *(undefined4 *)(this + 0x1e0) = 0;
  *(undefined4 *)(this + 0x1e4) = 0;
  *(undefined4 *)(this + 0x1e8) = 0;
  *(undefined4 *)(this + 0x24c) = 0;
  *(undefined4 *)(this + 0x250) = 0;
  *(undefined4 *)(this + 0x254) = 0;
  *(undefined4 *)(this + 600) = 0xffffffff;
  *(undefined4 *)(this + 0x25c) = 0;
  *(undefined4 *)(this + 0x260) = 0;
  *(int *)(this + 0x40) = param_2;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 700) = 0;
  pvVar2 = apMalloc(param_1 * param_2);
  *(void **)(this + 0x50) = pvVar2;
  if (pvVar2 != (void *)0x0) {
    pvVar2 = apMalloc(*(int *)(this + 0x40) << 2);
    *(void **)(this + 0x4c) = pvVar2;
    if (pvVar2 != (void *)0x0) {
      iVar3 = 0;
      if (0 < *(int *)(this + 0x40)) {
        iVar4 = 0;
        do {
          iVar5 = *(int *)(this + 0x50) + iVar4;
          iVar4 = iVar4 + param_1;
          *(int *)(*(int *)(this + 0x4c) + iVar3 * 4) = iVar5;
          iVar3 = iVar3 + 1;
        } while (iVar3 < *(int *)(this + 0x40));
      }
      iVar3 = 0;
      do {
        if ((&_partEmitList)[iVar3] == (partEMITTER_PHYS **)0x0) {
          (&_partEmitList)[iVar3] = (partEMITTER_PHYS **)this;
          return 1;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 600);
      partGetNEmit();
    }
  }
  return 0;
}




/* from: engine:particle.cpp
   addr: 004C05B0 */

void __thiscall partEMITTER_PHYS::~partEMITTER_PHYS(partEMITTER_PHYS *this)

{
  int iVar1;
  
  *(undefined ***)this = &_vftable_;
  if (*(partEMITTER_PHYS **)(this + 0x25c) != (partEMITTER_PHYS *)0x0) {
    StopEmission(*(partEMITTER_PHYS **)(this + 0x25c));
    *(uint *)(*(int *)(this + 0x25c) + 8) = *(uint *)(*(int *)(this + 0x25c) + 8) | 0x20;
    *(undefined4 *)(this + 0x25c) = 0;
  }
  apFree(*(void **)(this + 0x4c));
  apFree(*(void **)(this + 0x50));
  if (*(int **)(this + 0x14) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x14) + 4))(1);
  }
  if (*(int **)(this + 0x30) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x30) + 4))(1);
  }
  if (*(int **)(this + 0x38) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x38) + 4))(1);
  }
  if (*(int **)(this + 0x3c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x3c) + 4))(1);
  }
  apFree(*(void **)(this + 0x1d8));
  apFree(*(void **)(this + 0x1dc));
  apFree(*(void **)(this + 0x1e0));
  if (*(int **)(this + 0x1e4) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x1e4) + 4))(1);
  }
  if (*(int **)(this + 0xbc) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xbc) + 4))(1);
  }
  if (*(int **)(this + 200) != (int *)0x0) {
    (**(code **)(**(int **)(this + 200) + 4))(1);
  }
  if (*(int **)(this + 0xf0) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xf0) + 4))(1);
  }
  if (*(int **)(this + 0xfc) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xfc) + 4))(1);
  }
  iVar1 = 0;
  do {
    if ((partEMITTER_PHYS *)(&_partEmitList)[iVar1] == this) {
      (&_partEmitList)[iVar1] = (partEMITTER_PHYS **)0x0;
      return;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 600);
  return;
}




/* from: engine:particle.cpp
   addr: 004C06D0 */

void __thiscall partEMITTER_PHYS::StartEmission(partEMITTER_PHYS *this)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(this + 8);
  uVar2 = uVar1 & 0xfffffffb;
  *(uint *)(this + 8) = uVar2;
  if ((uVar1 & 8) == 0) {
    *(uint *)(this + 8) = uVar2 | 4;
  }
  uVar1 = *(uint *)(this + 8);
  uVar2 = uVar1 | 1;
  *(uint *)(this + 8) = uVar2;
  *(uint *)(this + 8) = CONCAT31((int3)(uVar1 >> 8),(char)uVar2) | 0x40;
  *(undefined4 *)(this + 0x94) = 0;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:particle.cpp
   addr: 004C0710 */

void __thiscall
partEMITTER_PHYS::SetAnimEmission(partEMITTER_PHYS *this,float param_1,float param_2)

{
  if (_DAT_005db94c * ___real_3f000000 < *(float *)(this + 0x8c)) {
    *(uint *)(this + 4) = *(uint *)(this + 4) & 0xffffff7f;
    return;
  }
  *(float *)(this + 0x8c) = param_1;
  *(float *)(this + 0x90) = param_2;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x80;
  return;
}




/* from: engine:particle.cpp
   addr: 004C0760 */

void __thiscall
partEMITTER_PHYS::SetColor
          (partEMITTER_PHYS *this,ulong param_1,m3dSPL_COLOR *param_2,m3dSPL_LINEAR1D *param_3)

{
  *(ulong *)(this + 0x34) = param_1;
  if (param_2 != (m3dSPL_COLOR *)0x0) {
    *(m3dSPL_COLOR **)(this + 0x38) = param_2;
  }
  if (param_3 != (m3dSPL_LINEAR1D *)0x0) {
    *(m3dSPL_LINEAR1D **)(this + 0x3c) = param_3;
  }
  return;
}




/* from: engine:particle.cpp
   addr: 004C0780 */

void __thiscall
partEMITTER_PHYS::GetColor
          (partEMITTER_PHYS *this,ulong *param_1,m3dSPL_COLOR **param_2,m3dSPL_LINEAR1D **param_3)

{
  if (param_1 != (ulong *)0x0) {
    *param_1 = *(ulong *)(this + 0x34);
  }
  if (param_2 != (m3dSPL_COLOR **)0x0) {
    *param_2 = *(m3dSPL_COLOR **)(this + 0x38);
  }
  if (param_3 != (m3dSPL_LINEAR1D **)0x0) {
    *param_3 = *(m3dSPL_LINEAR1D **)(this + 0x3c);
  }
  return;
}




/* from: engine:particle.cpp
   addr: 004C07B0 */

void __thiscall
partEMITTER_PHYS::SetIntensity(partEMITTER_PHYS *this,float param_1,m3dSPL_LINEAR1D *param_2)

{
  *(float *)(this + 0x10) = param_1;
  if (param_2 != (m3dSPL_LINEAR1D *)0x0) {
    if (*(int **)(this + 0x14) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x14) + 4))(1);
    }
    *(m3dSPL_LINEAR1D **)(this + 0x14) = param_2;
  }
  return;
}




/* from: engine:particle.cpp
   addr: 004C07E0 */

void __thiscall
partEMITTER_PHYS::SetTimeLifePart(partEMITTER_PHYS *this,float param_1,float param_2)

{
  *(float *)(this + 0x1c) = param_1;
  *(float *)(this + 0x20) = param_2;
  return;
}




/* from: engine:particle.cpp
   addr: 004C0800 */

void __thiscall
partEMITTER_PHYS::SetSize
          (partEMITTER_PHYS *this,float param_1,float param_2,m3dSPL_LINEAR1D *param_3,float param_4
          )

{
  *(float *)(this + 0x24) = param_1;
  *(float *)(this + 0x2c) = param_4;
  *(float *)(this + 0x28) = param_2;
  if (param_3 != (m3dSPL_LINEAR1D *)0x0) {
    *(m3dSPL_LINEAR1D **)(this + 0x30) = param_3;
  }
  return;
}




/* from: engine:particle.cpp
   addr: 004C0840 */

void __thiscall
partEMITTER_PHYS::SetTextureScale
          (partEMITTER_PHYS *this,float param_1,float param_2,float param_3,float param_4)

{
  *(float *)(this + 0x58) = param_1;
  *(float *)(this + 0x5c) = param_2;
  *(float *)(this + 0x60) = param_3;
  *(float *)(this + 100) = param_4;
  return;
}




/* from: engine:particle.cpp
   addr: 004C0860 */

void __thiscall
partEMITTER_PHYS::SetTextureFrameAnim
          (partEMITTER_PHYS *this,int param_1,int param_2,float param_3,float param_4)

{
  *(int *)(this + 0x7c) = param_1;
  *(int *)(this + 0x80) = param_2;
  *(float *)(this + 0x84) = param_3;
  *(float *)(this + 0x88) = param_4;
  return;
}




/* from: engine:particle.cpp
   addr: 004C0890 */

void __thiscall
partEMITTER_PHYS::SetTextureRotAnim
          (partEMITTER_PHYS *this,float param_1,float param_2,float param_3,float param_4)

{
  *(float *)(this + 0x6c) = param_1;
  *(float *)(this + 0x70) = param_2;
  *(float *)(this + 0x74) = param_3;
  *(float *)(this + 0x78) = param_4;
  return;
}




/* from: engine:particle.cpp
   addr: 004C08B0 */

void __thiscall
partEMITTER_PHYS::SetDegNearParams(partEMITTER_PHYS *this,float param_1,float param_2)

{
  *(float *)(this + 0x98) = param_1;
  *(float *)(this + 0x9c) = param_2;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:particle.cpp
   addr: 004C0900 */

void __thiscall partEMITTER_PHYS::UpdateUpdate(partEMITTER_PHYS *this,float param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  double dVar6;
  uint local_c;
  
  fVar2 = param_1 + *(float *)(this + 0x94);
  *(float *)(this + 0x94) = fVar2;
  if ((char)*(uint *)(this + 4) < '\0') {
    if (((*(uint *)(this + 4) & 0x100) != 0) ||
       (fVar2 <= *(float *)(this + 0x90) + *(float *)(this + 0x8c))) {
      fVar4 = _DAT_005db948 * ___real_42c80000 + *(float *)(this + 0x90) + *(float *)(this + 0x8c);
      local_c = (uint)(ABS(fVar4) < _DAT_005db948);
      fVar3 = fVar2;
      if ((float)local_c == ___real_00000000) {
        dVar6 = floor((double)(fVar2 / fVar4));
        fVar3 = (float)dVar6 * fVar4;
      }
      *(float *)(this + 0x94) = fVar2 - fVar3;
      if (*(float *)(this + 0x8c) <= fVar2 - fVar3) {
        *(uint *)(this + 8) = *(uint *)(this + 8) | 2;
      }
      else {
        *(uint *)(this + 8) = *(uint *)(this + 8) & 0xfffffffd;
      }
    }
    else {
      StopEmission(this);
    }
  }
  iVar5 = *(int *)(this + 0x48);
  if (0 < iVar5) {
    iVar1 = *(int *)(this + 0x44);
    if (iVar1 + iVar5 <= *(int *)(this + 0x40)) {
      (**(code **)(*(int *)this + 0x20))(iVar5,*(int *)(this + 0x4c) + iVar1 * 4,param_1);
      return;
    }
    iVar5 = *(int *)(this + 0x40) - iVar1;
    (**(code **)(*(int *)this + 0x20))(iVar5,*(int *)(this + 0x4c) + iVar1 * 4,param_1);
    (**(code **)(*(int *)this + 0x20))
              (*(int *)(this + 0x48) - iVar5,*(undefined4 *)(this + 0x4c),param_1);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:particle.cpp
   addr: 004C0A60 */

void __thiscall partEMITTER_PHYS::UpdateErase(partEMITTER_PHYS *this)

{
  int iVar1;
  int iVar2;
  partPART **pppVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = *(int *)(this + 0x48);
  if (0 < iVar1) {
    iVar2 = *(int *)(this + 0x44);
    iVar4 = 0;
    iVar5 = 0;
    _partNTmp = 0;
    if (0 < iVar1) {
      do {
        pppVar3 = *(partPART ***)
                   (*(int *)(this + 0x4c) + ((iVar5 + iVar2) % *(int *)(this + 0x40)) * 4);
        if (___real_3f800000 < (float)*pppVar3) {
          if (((*(byte *)(pppVar3 + 0xe) & 4) == 0) &&
             (*(byte *)(pppVar3 + 0xe) = *(byte *)(pppVar3 + 0xe) | 4, iVar4 = _partNTmp,
             _partNTmp < 2000)) {
            (&_partTmpList)[_partNTmp] = pppVar3;
            iVar4 = _partNTmp + 1;
            _partNTmp = iVar4;
          }
          if (pppVar3 == *(partPART ***)(*(int *)(this + 0x4c) + *(int *)(this + 0x44) * 4)) {
            *(int *)(this + 0x48) = *(int *)(this + 0x48) + -1;
            *(int *)(this + 0x44) = (*(int *)(this + 0x44) + 1) % *(int *)(this + 0x40);
            iVar4 = _partNTmp;
          }
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar1);
      if (0 < iVar4) {
        (**(code **)(*(int *)this + 0x28))(iVar4,&_partTmpList);
      }
    }
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:particle.cpp
   addr: 004C0B10 */

int __thiscall partEMITTER_PHYS::UpdateGetNmbEmit(partEMITTER_PHYS *this,float param_1)

{
  int iVar1;
  float10 extraout_ST0;
  float fVar2;
  int local_8;
  undefined1 local_4 [4];
  
  if (*(int *)(this + 0x14) != 0) {
    local_8 = 0;
    do {
      (**(code **)(**(int **)(this + 0x14) + 0x10))
                (*(float *)(this + 0x94) - (float)local_8 * param_1 * ___real_3dcccccd,local_4,0);
      local_8 = local_8 + 1;
    } while (local_8 < 10);
  }
  iVar1 = ftol();
  if (((float10)_DAT_005db948 < extraout_ST0 - (float10)iVar1) &&
     (fVar2 = m3dRandom(), fVar2 < (float)(extraout_ST0 - (float10)iVar1))) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}




/* from: engine:particle.cpp
   addr: 004C0BD0 */

void __thiscall partEMITTER_PHYS::UpdateEmit(partEMITTER_PHYS *this,int param_1,float param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x48);
  iVar1 = *(int *)(this + 0x40);
  if (iVar1 < iVar2 + param_1) {
    param_1 = iVar1 - iVar2;
  }
  if (0 < param_1) {
    iVar2 = (*(int *)(this + 0x44) + iVar2) % iVar1;
    if (iVar2 + param_1 <= iVar1) {
      (**(code **)(*(int *)this + 0x1c))
                (param_1,*(int *)(this + 0x4c) + iVar2 * 4,param_2,param_1,0);
      *(int *)(this + 0x48) = *(int *)(this + 0x48) + param_1;
      return;
    }
    iVar1 = iVar1 - iVar2;
    (**(code **)(*(int *)this + 0x1c))(iVar1,*(int *)(this + 0x4c) + iVar2 * 4,param_2,param_1,0);
    (**(code **)(*(int *)this + 0x1c))
              (param_1 - iVar1,*(undefined4 *)(this + 0x4c),param_2,param_1,iVar1);
    *(int *)(this + 0x48) = *(int *)(this + 0x48) + param_1;
  }
  return;
}




/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:particle.cpp
   addr: 004C0C80 */

void __thiscall
partEMITTER_PHYS::PartUpdateVisible(partEMITTER_PHYS *this,int param_1,partPART **param_2)

{
  partPART *ppVar1;
  float fVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  float afStack_14 [5];
  
  afStack_14[1] = 0.0;
  afStack_14[2] = 0.0;
  afStack_14[3] = 0.0;
  afStack_14[4] = 0.0;
  if (((*(int *)(this + 0x38) != 0) || (*(int *)(this + 0x3c) != 0)) && (iVar8 = 0, 0 < param_1)) {
    do {
      ppVar1 = param_2[iVar8];
      if (*(int **)(this + 0x38) != (int *)0x0) {
        if ((*(uint *)(this + 4) & 0x1000) == 0) {
          uVar3 = *(undefined4 *)ppVar1;
        }
        else {
          uVar3 = *(undefined4 *)(this + 0x94);
        }
        (**(code **)(**(int **)(this + 0x38) + 0x10))(uVar3,afStack_14 + 1,0);
        uVar4 = ftol();
        iVar5 = ftol();
        uVar6 = ftol();
        uVar7 = ftol();
        *(uint *)(ppVar1 + 0xc) =
             ((uVar4 & 0xff | iVar5 << 8) << 8 | uVar6 & 0xff) << 8 | uVar7 & 0xff;
      }
      if (*(int **)(this + 0x3c) != (int *)0x0) {
        (**(code **)(**(int **)(this + 0x3c) + 0x10))(*(undefined4 *)ppVar1,afStack_14,0);
        fVar2 = ___real_00000000;
        if ((___real_00000000 <= afStack_14[0]) &&
           (fVar2 = afStack_14[0], ___real_437f0000 < afStack_14[0])) {
          fVar2 = ___real_437f0000;
        }
        afStack_14[0] = fVar2;
        iVar5 = ftol();
        *(uint *)(ppVar1 + 0xc) = *(uint *)(ppVar1 + 0xc) & 0xffffff ^ iVar5 << 0x18;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < param_1);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:particle.cpp
   addr: 004C0DC0 */

void __thiscall
partEMITTER_PHYS::SetPosDirSpeed(partEMITTER_PHYS *this,m3dV *param_1,m3dV *param_2,m3dV *param_3)

{
  float fVar1;
  m3dV *pmVar2;
  
  pmVar2 = param_1;
  if (param_1 != (m3dV *)0x0) {
    fVar1 = _DAT_005db948 * ___real_447a0000;
    param_1 = (m3dV *)(uint)(ABS(*(float *)(this + 0x100) - *(float *)param_1) < fVar1);
    if ((((float)(int)param_1 == ___real_00000000) ||
        (param_1 = (m3dV *)(uint)(ABS(*(float *)(this + 0x104) - *(float *)(pmVar2 + 4)) < fVar1),
        (float)(int)param_1 == ___real_00000000)) ||
       (param_1 = (m3dV *)(uint)(ABS(*(float *)(this + 0x108) - *(float *)(pmVar2 + 8)) < fVar1),
       (float)(int)param_1 == ___real_00000000)) {
      *(uint *)(this + 8) = *(uint *)(this + 8) | 0x200;
    }
    *(undefined4 *)(this + 0x100) = *(undefined4 *)pmVar2;
    *(undefined4 *)(this + 0x104) = *(undefined4 *)(pmVar2 + 4);
    *(undefined4 *)(this + 0x108) = *(undefined4 *)(pmVar2 + 8);
  }
  if (param_2 != (m3dV *)0x0) {
    *(undefined4 *)(this + 0x10c) = *(undefined4 *)param_2;
    *(undefined4 *)(this + 0x110) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)(this + 0x114) = *(undefined4 *)(param_2 + 8);
    m3dNormalize((m3dV *)(this + 0x10c));
  }
  if (param_3 != (m3dV *)0x0) {
    *(undefined4 *)(this + 0x118) = *(undefined4 *)param_3;
    *(undefined4 *)(this + 0x11c) = *(undefined4 *)(param_3 + 4);
    *(undefined4 *)(this + 0x120) = *(undefined4 *)(param_3 + 8);
  }
  return;
}




/* from: engine:particle.cpp
   addr: 004C0F20 */

void __thiscall
partEMITTER_PHYS::GetPosDirSpeed(partEMITTER_PHYS *this,m3dV *param_1,m3dV *param_2,m3dV *param_3)

{
  if (param_1 != (m3dV *)0x0) {
    *(undefined4 *)param_1 = *(undefined4 *)(this + 0x100);
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(this + 0x104);
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(this + 0x108);
  }
  if (param_2 != (m3dV *)0x0) {
    *(undefined4 *)param_2 = *(undefined4 *)(this + 0x10c);
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(this + 0x110);
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(this + 0x114);
  }
  if (param_3 != (m3dV *)0x0) {
    *(undefined4 *)param_3 = *(undefined4 *)(this + 0x118);
    *(undefined4 *)(param_3 + 4) = *(undefined4 *)(this + 0x11c);
    *(undefined4 *)(param_3 + 8) = *(undefined4 *)(this + 0x120);
  }
  return;
}




/* from: engine:particle.cpp
   addr: 004C0F90 */

void __thiscall partEMITTER_PHYS::SetCS(partEMITTER_PHYS *this,m3dMATR *param_1)

{
  int iVar1;
  partEMITTER_PHYS *ppVar2;
  
  ppVar2 = this + 0x148;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)ppVar2 = *(undefined4 *)param_1;
    param_1 = param_1 + 4;
    ppVar2 = ppVar2 + 4;
  }
  return;
}




/* from: engine:particle.cpp
   addr: 004C0FB0 */

int __thiscall
partEMITTER_PHYS::SetAreaEmission
          (partEMITTER_PHYS *this,int param_1,int param_2,m3dTRI *param_3,int param_4)

{
  void *pvVar1;
  undefined4 *puVar2;
  int iVar3;
  m3dTRI *pmVar4;
  
  if (*(int *)(this + 0x1d4) != param_1) {
    pvVar1 = apRealloc(*(void **)(this + 0x1d8),param_1 * 0x24);
    *(void **)(this + 0x1d8) = pvVar1;
    if (pvVar1 == (void *)0x0) {
      return 0;
    }
    pvVar1 = apRealloc(*(void **)(this + 0x1dc),param_1 * 0x24);
    *(void **)(this + 0x1dc) = pvVar1;
    if (pvVar1 == (void *)0x0) {
      return 0;
    }
    pvVar1 = apRealloc(*(void **)(this + 0x1e0),param_1 * 0xc);
    *(void **)(this + 0x1e0) = pvVar1;
    if (pvVar1 == (void *)0x0) {
      return 0;
    }
    if (*(int *)(this + 0x1e4) == 0) {
      puVar2 = (undefined4 *)operator_new(0x34);
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2[3] = 0;
        puVar2[5] = 8;
        puVar2[6] = 8;
        puVar2[7] = 1;
        puVar2[8] = 0;
        puVar2[9] = 0;
        puVar2[10] = 0;
        puVar2[0xb] = 0;
        puVar2[0xc] = 0;
        *puVar2 = &m3dSPL_LINEAR1D::_vftable_;
      }
      *(undefined4 **)(this + 0x1e4) = puVar2;
      if (puVar2 == (undefined4 *)0x0) {
        return 0;
      }
    }
    iVar3 = m3dSPL::AllocKpList(*(m3dSPL **)(this + 0x1e4),param_1 + 1);
    if (iVar3 == 0) {
      return 0;
    }
    *(int *)(this + 0x1d4) = param_1;
  }
  iVar3 = 9;
  pmVar4 = param_3;
  if (param_4 == 0) {
    pmVar4 = (m3dTRI *)(*(int *)(this + 0x1d8) + param_2 * 0x24);
  }
  puVar2 = (undefined4 *)(*(int *)(this + 0x1dc) + param_2 * 0x24);
  for (; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar2 = *(undefined4 *)pmVar4;
    pmVar4 = pmVar4 + 4;
    puVar2 = puVar2 + 1;
  }
  pmVar4 = param_3;
  puVar2 = (undefined4 *)(*(int *)(this + 0x1d8) + param_2 * 0x24);
  for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar2 = *(undefined4 *)pmVar4;
    pmVar4 = pmVar4 + 4;
    puVar2 = puVar2 + 1;
  }
  m3dGetPlaneNormal((m3dV *)param_3,(m3dV *)(param_3 + 0xc),(m3dV *)(param_3 + 0x18),
                    (m3dV *)(*(int *)(this + 0x1e0) + param_2 * 0xc));
  *(uint *)(this + 8) = *(uint *)(this + 8) | 0x10;
  return 1;
}




/* from: engine:particle.cpp
   addr: 004C1140 */

int __thiscall
partEMITTER_PHYS::SetCDTPlane(partEMITTER_PHYS *this,int param_1,int param_2,m3dPLANE *param_3)

{
  int iVar1;
  partEMITTER_PHYS *ppVar2;
  
  if (*(int *)(this + 0x1e8) != param_1) {
    *(int *)(this + 0x1e8) = param_1;
  }
  ppVar2 = this + param_2 * 0x18 + 0x1ec;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)ppVar2 = *(undefined4 *)param_3;
    param_3 = param_3 + 4;
    ppVar2 = ppVar2 + 4;
  }
  return 1;
}




/* from: engine:particle.cpp
   addr: 004C1180 */

void __thiscall
partEMITTER_PHYS::SetCDTParam
          (partEMITTER_PHYS *this,float param_1,float param_2,float param_3,int param_4)

{
  *(float *)(this + 0x24c) = param_1;
  *(float *)(this + 0x250) = param_2;
  *(float *)(this + 0x254) = param_3;
  *(int *)(this + 600) = param_4;
  return;
}




/* from: engine:particle.cpp
   addr: 004C11B0 */

void __thiscall
partEMITTER_PHYS::AttachEmitter
          (partEMITTER_PHYS *this,partEMITTER_PHYS *param_1,int param_2,int param_3)

{
  *(partEMITTER_PHYS **)(this + 0x25c) = param_1;
  *(int *)(this + 0x260) = param_3;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x800;
  return;
}




/* from: engine:particle.cpp
   addr: 004C11D0 */

void __thiscall
partEMITTER_PHYS::SetDegFarParams
          (partEMITTER_PHYS *this,float param_1,float param_2,float param_3,float param_4)

{
  *(float *)(this + 0xa0) = param_1;
  *(float *)(this + 0xa4) = param_2;
  *(float *)(this + 0xa8) = param_3;
  *(float *)(this + 0xac) = param_4;
  return;
}




/* from: engine:particle.cpp
   addr: 004C1200 */

void __thiscall
partEMITTER_PHYS::SetScaleCSVal(partEMITTER_PHYS *this,float param_1,float param_2,float param_3)

{
  *(float *)(this + 0x1c8) = param_1;
  *(float *)(this + 0x1cc) = param_2;
  *(float *)(this + 0x1d0) = param_3;
  return;
}




/* from: engine:particle.cpp
   addr: 004C1230 */

void __thiscall partEMITTER_PHYS::SetScaleCS(partEMITTER_PHYS *this,m3dMATR *param_1)

{
  int iVar1;
  partEMITTER_PHYS *ppVar2;
  
  ppVar2 = this + 0x188;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)ppVar2 = *(undefined4 *)param_1;
    param_1 = param_1 + 4;
    ppVar2 = ppVar2 + 4;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:particle.cpp
   addr: 004C1250 */

void __thiscall
partEMITTER_PHYS::PartCreate
          (partEMITTER_PHYS *this,int param_1,partPART **param_2,float param_3,int param_4,
          int param_5)

{
  partPART *ppVar1;
  partPART *ppVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  float *pfVar5;
  float extraout_ECX;
  float extraout_ECX_00;
  float extraout_ECX_01;
  float extraout_ECX_02;
  float extraout_ECX_03;
  float extraout_ECX_04;
  partEMITTER_PHYS *extraout_ECX_05;
  m3dV *pmVar6;
  int iVar7;
  float extraout_ECX_06;
  float extraout_ECX_07;
  float extraout_ECX_08;
  float extraout_ECX_09;
  partEMITTER_PHYS *ppVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  partPART *ppVar13;
  ulonglong uVar14;
  undefined8 extraout_MM1;
  undefined8 uVar15;
  undefined8 uVar16;
  unkbyte10 in_ST2;
  unkbyte10 in_ST3;
  unkbyte10 in_ST4;
  unkbyte10 in_ST5;
  unkbyte10 in_ST6;
  unkbyte10 in_ST7;
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  m3dV *pmStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  int local_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_20;
  float fStack_1c;
  float fStack_10;
  float fStack_8;
  float fStack_4;
  
  iVar10 = 0;
  if (0 < param_1) {
    local_38 = (float)param_4;
    ppVar8 = this;
    do {
      ppVar2 = param_2[iVar10];
      *(undefined4 *)ppVar2 = 0;
      in_ST2 = in_ST6;
      fVar18 = m3dRandMax((float)ppVar8);
      *(float *)(ppVar2 + 4) =
           ___real_3f800000 / ((fVar18 + *(float *)(this + 0x1c)) - *(float *)(this + 0x20));
      uVar3 = *(undefined4 *)(this + 0x34);
      ppVar2[0x38] = (partPART)0x0;
      *(undefined4 *)(ppVar2 + 0xc) = uVar3;
      ppVar2[0x39] = (partPART)0x0;
      if (((byte)this[4] & 1) != 0) {
        ppVar2[0x38] = (partPART)0x1;
      }
      in_ST3 = in_ST2;
      fVar18 = m3dRandMax(extraout_ECX);
      *(float *)(ppVar2 + 0x28) = (fVar18 + *(float *)(this + 0x58)) - *(float *)(this + 0x5c);
      in_ST4 = in_ST3;
      fVar18 = m3dRandMax(extraout_ECX_00);
      *(float *)(ppVar2 + 0x2c) = (fVar18 + *(float *)(this + 0x60)) - *(float *)(this + 100);
      in_ST5 = in_ST4;
      fVar18 = m3dRandMax(extraout_ECX_01);
      *(float *)(ppVar2 + 0x30) = (fVar18 + *(float *)(this + 0x6c)) - *(float *)(this + 0x70);
      in_ST6 = in_ST5;
      fVar18 = m3dRandMax(extraout_ECX_02);
      local_94 = param_5 + iVar10;
      *(float *)(ppVar2 + 0x34) = (fVar18 + *(float *)(this + 0x74)) - *(float *)(this + 0x78);
      ppVar13 = param_2[iVar10];
      *(float *)ppVar13 =
           (___real_3f800000 - (float)local_94 / local_38) * *(float *)(ppVar13 + 4) * param_3 +
           *(float *)ppVar13;
      if (*(int **)(this + 0x30) == (int *)0x0) {
        in_ST2 = in_ST3;
        in_ST3 = in_ST4;
        in_ST4 = in_ST5;
        in_ST5 = in_ST6;
        fVar18 = m3dRandMax(0.0);
        *(float *)(ppVar2 + 8) = (fVar18 - *(float *)(this + 0x28)) + *(float *)(this + 0x24);
        fVar18 = extraout_ECX_04;
      }
      else {
        (**(code **)(**(int **)(this + 0x30) + 0x10))
                  (*(undefined4 *)param_2[iVar10],param_2[iVar10] + 8,0);
        fVar18 = extraout_ECX_03;
      }
      in_ST7 = in_ST6;
      m3dRandMax(fVar18);
      uVar4 = ftol();
      *(undefined2 *)(ppVar2 + 0x3a) = uVar4;
      iVar10 = iVar10 + 1;
      ppVar8 = extraout_ECX_05;
    } while (iVar10 < param_1);
  }
  if ((0 < *(int *)(this + 0x1d4)) && (((byte)this[8] & 0x10) != 0)) {
    iVar10 = *(int *)(this + 0x1e4);
    iVar12 = 0;
    *(undefined4 *)
     (*(int *)(iVar10 + 0x18) * (*(uint *)(iVar10 + 0x10) & (0 < (int)*(uint *)(iVar10 + 0x10)) - 1)
     + *(int *)(iVar10 + 0x24)) = 0;
    if (0 < *(int *)(this + 0x1d4)) {
      local_94 = 0;
      do {
        uVar15 = (undefined8)in_ST2;
        iVar10 = *(int *)(this + 0x1e4);
        iVar9 = iVar12;
        if (*(int *)(iVar10 + 0x10) <= iVar12) {
          iVar9 = *(int *)(iVar10 + 0x10);
        }
        pmVar6 = (m3dV *)(local_94 + *(int *)(this + 0x1d8));
        in_ST2 = in_ST3;
        in_ST3 = in_ST4;
        in_ST4 = in_ST5;
        in_ST5 = in_ST6;
        in_ST6 = in_ST7;
        fStack_c4 = m3dCalcTriArea2(pmVar6,pmVar6 + 0xc,pmVar6 + 0x18);
        if (m3dSimdType == 0) {
          fStack_c4 = fStack_c4 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
          auVar17 = rsqrtss(ZEXT416((uint)fStack_c4),ZEXT416((uint)fStack_c4));
          fVar18 = auVar17._0_4_;
          fStack_c4 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar18 *
                      (`float___cdecl_m3dSqrt(float)'::__l2::three - fStack_c4 * fVar18 * fVar18) *
                      fStack_c4;
        }
        else if (m3dSimdType == 1) {
          FastExitMediaState();
          uVar14 = (ulonglong)(uint)fStack_c4;
          uVar15 = PackedFloatingReciprocalSQRAprox(uVar15,uVar14);
          in_ST2 = CONCAT28((short)((unkuint10)in_ST2 >> 0x40),uVar15);
          uVar16 = PackedFloatingMUL(uVar15,uVar15);
          uVar16 = PackedFloatingReciprocalSQRIter1(uVar16,uVar14);
          uVar15 = PackedFloatingReciprocalIter2(uVar16,uVar15);
          uVar15 = PackedFloatingMUL(uVar15,uVar14);
          fStack_c4 = (float)uVar15;
          FastExitMediaState();
        }
        else {
          fStack_c4 = SQRT(fStack_c4);
        }
        iVar11 = *(int *)(this + 0x1e4);
        iVar12 = iVar12 + 1;
        iVar7 = *(int *)(iVar11 + 0x10);
        if (iVar12 < *(int *)(iVar11 + 0x10)) {
          iVar7 = iVar12;
        }
        *(float *)(*(int *)(iVar11 + 0x18) * iVar7 + *(int *)(iVar11 + 0x24)) =
             fStack_c4 + *(float *)(*(int *)(iVar10 + 0x18) * iVar9 + *(int *)(iVar10 + 0x24));
        local_94 = local_94 + 0x24;
        in_ST7 = in_ST6;
      } while (iVar12 < *(int *)(this + 0x1d4));
    }
    iVar10 = *(int *)(this + 0x1d4);
    iVar12 = 0;
    if (0 < iVar10) {
      do {
        iVar9 = *(int *)(this + 0x1e4);
        iVar11 = iVar12;
        if (*(int *)(iVar9 + 0x10) <= iVar12) {
          iVar11 = *(int *)(iVar9 + 0x10);
        }
        pfVar5 = (float *)(*(int *)(iVar9 + 0x18) * iVar11 + *(int *)(iVar9 + 0x24));
        if (*(int *)(iVar9 + 0x10) <= iVar10) {
          iVar10 = *(int *)(iVar9 + 0x10);
        }
        iVar12 = iVar12 + 1;
        *pfVar5 = *pfVar5 / *(float *)(*(int *)(iVar9 + 0x18) * iVar10 + *(int *)(iVar9 + 0x24));
        iVar10 = *(int *)(this + 0x1d4);
      } while (iVar12 < iVar10);
    }
    iVar10 = *(int *)(this + 0x1e4);
    iVar12 = *(int *)(this + 0x1d4);
    if (*(int *)(iVar10 + 0x10) <= *(int *)(this + 0x1d4)) {
      iVar12 = *(int *)(iVar10 + 0x10);
    }
    *(undefined4 *)(*(int *)(iVar10 + 0x18) * iVar12 + *(int *)(iVar10 + 0x24)) = 0x3f800000;
    *(uint *)(this + 8) = *(uint *)(this + 8) & 0xffffffef;
  }
  local_94 = 0;
  if (0 < param_1) {
    local_38 = (float)param_4;
    iVar10 = 0;
    do {
      fStack_90 = *(float *)(this + 0x100);
      fStack_8c = *(float *)(this + 0x104);
      fStack_88 = *(float *)(this + 0x108);
      fStack_84 = *(float *)(this + 0x10c);
      fStack_80 = *(float *)(this + 0x110);
      fStack_7c = *(float *)(this + 0x114);
      fStack_a0 = *(float *)(this + 0x118);
      fStack_9c = *(float *)(this + 0x11c);
      fStack_98 = *(float *)(this + 0x120);
      ppVar2 = param_2[local_94];
      fStack_a4 = (float)(local_94 + param_5);
      fVar18 = ___real_3f800000 - (float)(int)fStack_a4 / local_38;
      if (((byte)this[8] & 4) == 0) {
        if ((*(uint *)(this + 4) & 0x10) != 0) {
          fVar19 = ___real_3f800000 - fVar18;
          fStack_90 = fVar18 * *(float *)(this + 0x124) + fVar19 * *(float *)(this + 0x100);
          fStack_8c = fVar19 * *(float *)(this + 0x104) + fVar18 * *(float *)(this + 0x128);
          fStack_88 = fVar19 * *(float *)(this + 0x108) + fVar18 * *(float *)(this + 300);
        }
        if ((*(uint *)(this + 4) & 0x20) != 0) {
          fVar19 = ___real_3f800000 - fVar18;
          fStack_84 = fVar19 * *(float *)(this + 0x10c) + fVar18 * *(float *)(this + 0x130);
          fStack_80 = fVar19 * *(float *)(this + 0x110) + fVar18 * *(float *)(this + 0x134);
          fStack_7c = fVar19 * *(float *)(this + 0x114) + fVar18 * *(float *)(this + 0x138);
          m3dNormalize((m3dV *)&fStack_84);
        }
        if (((byte)this[4] & 0x40) != 0) {
          fVar19 = ___real_3f800000 - fVar18;
          fStack_a0 = fVar18 * *(float *)(this + 0x13c) + fVar19 * *(float *)(this + 0x118);
          fStack_9c = fVar19 * *(float *)(this + 0x11c) + fVar18 * *(float *)(this + 0x140);
          fStack_98 = fVar19 * *(float *)(this + 0x120) + fVar18 * *(float *)(this + 0x144);
        }
      }
      if (*(int **)(this + 0xf0) == (int *)0x0) {
        fStack_ac = *(float *)(this + 0xe8);
      }
      else {
        (**(code **)(**(int **)(this + 0xf0) + 0x10))
                  (*(float *)(this + 0x94) - fVar18 * param_3,&fStack_ac,0);
      }
      if ((0 < *(int *)(this + 0x1d4)) && ((*(uint *)(this + 4) & 0x2000) != 0)) {
        if ((*(uint *)(this + 4) & 0x4000) == 0) {
          fVar19 = m3dRandom();
          iVar10 = m3dSPL::FindSeg(*(m3dSPL **)(this + 0x1e4),fVar19);
          if (iVar10 == -2) {
            iVar10 = 0;
          }
          else if (iVar10 == -1) {
            iVar10 = *(int *)(this + 0x1d4) + -1;
          }
          m3dRandBasicCoord(&fStack_b8,&fStack_bc);
          iVar12 = iVar10 * 0x24;
          pfVar5 = (float *)(*(int *)(this + 0x1d8) + iVar12);
          fStack_10 = pfVar5[5] - pfVar5[2];
          fStack_20 = pfVar5[7] - pfVar5[1];
          fStack_1c = pfVar5[8] - pfVar5[2];
          fStack_90 = (pfVar5[3] - *pfVar5) * fStack_b8 + (pfVar5[6] - *pfVar5) * fStack_bc +
                      *pfVar5;
          fStack_8c = (pfVar5[4] - pfVar5[1]) * fStack_b8 + fStack_20 * fStack_bc + pfVar5[1];
          fStack_88 = fStack_10 * fStack_b8 + fStack_1c * fStack_bc + pfVar5[2];
          if ((*(uint *)(this + 4) & 0x200000) != 0) {
            iVar9 = *(int *)(this + 0x1dc);
            pfVar5 = (float *)(iVar9 + iVar12);
            fStack_10 = pfVar5[5] - pfVar5[2];
            fStack_20 = pfVar5[7] - pfVar5[1];
            fStack_1c = pfVar5[8] - pfVar5[2];
            fStack_30 = (*(float *)(iVar9 + 0xc + iVar12) - *(float *)(iVar9 + iVar12)) * fStack_b8
                        + (pfVar5[6] - *pfVar5) * fStack_bc + *pfVar5;
            fStack_2c = (*(float *)(iVar9 + 0x10 + iVar12) - pfVar5[1]) * fStack_b8 +
                        fStack_20 * fStack_bc + pfVar5[1];
            fStack_28 = fStack_10 * fStack_b8 + fStack_1c * fStack_bc + pfVar5[2];
            goto LAB_004c1974;
          }
        }
        else {
          iVar10 = m3dRandIntMax(*(int *)(this + 0x1d4) + -1);
          iVar12 = m3dRandIntMax(2);
          iVar12 = (iVar10 + iVar12 + iVar10 * 2) * 0xc;
          pfVar5 = (float *)(*(int *)(this + 0x1d8) + iVar12);
          fStack_90 = *pfVar5;
          fStack_8c = pfVar5[1];
          fStack_88 = pfVar5[2];
          pfVar5 = (float *)(*(int *)(this + 0x1dc) + iVar12);
          fStack_30 = *pfVar5;
          fStack_2c = pfVar5[1];
          fStack_28 = pfVar5[2];
LAB_004c1974:
          if ((*(uint *)(this + 4) & 0x200000) != 0) {
            fStack_98 = ___real_3f800000 / param_3;
            fStack_a0 = fStack_98 * (fStack_90 - fStack_30);
            fStack_9c = (fStack_8c - fStack_2c) * fStack_98;
            fStack_98 = (fStack_88 - fStack_28) * fStack_98;
            goto LAB_004c19ee;
          }
        }
        fStack_a0 = _m3dVUnitY;
        fStack_9c = DAT_005f9994;
        fStack_98 = DAT_005f9998;
      }
LAB_004c19ee:
      fStack_34 = ABS(*(float *)(this + 0xf4));
      fStack_a4 = (float)(uint)(fStack_34 < _DAT_005db948);
      if ((float)(int)fStack_a4 == ___real_00000000) {
        m3dMakeVCylinderRandom
                  ((m3dV *)(this + 0x10c),(float)&fStack_78,fStack_ac,*(m3dV **)(this + 0xf4));
        *(float *)(ppVar2 + 0x10) = fStack_78 + fStack_90;
        *(float *)(ppVar2 + 0x14) = fStack_74 + fStack_8c;
        *(float *)(ppVar2 + 0x18) = fStack_70 + fStack_88;
      }
      else {
        m3dMakeVUnitRandom((m3dV *)&fStack_78);
        fVar19 = m3dRandRange(fStack_ac,*(float *)(this + 0xec));
        *(float *)(ppVar2 + 0x10) = fStack_78 * fVar19 + fStack_90;
        *(float *)(ppVar2 + 0x14) = fStack_74 * fVar19 + fStack_8c;
        *(float *)(ppVar2 + 0x18) = fStack_70 * fVar19 + fStack_88;
      }
      ppVar13 = ppVar2 + 0x10;
      if (*(int **)(this + 0xbc) == (int *)0x0) {
        fStack_b0 = *(float *)(this + 0xb4);
      }
      else {
        (**(code **)(**(int **)(this + 0xbc) + 0x10))
                  (*(float *)(this + 0x94) - fVar18 * param_3,&fStack_b0,0);
      }
      if (*(int **)(this + 200) == (int *)0x0) {
        fVar19 = *(float *)(this + 0xc0);
        fStack_b4 = fVar19;
      }
      else {
        (**(code **)(**(int **)(this + 200) + 0x10))
                  (*(float *)(this + 0x94) - fVar18 * param_3,&fStack_b4,0);
        fVar19 = extraout_ECX_06;
      }
      fVar19 = m3dRandMax(fVar19);
      fStack_b0 = (fVar19 - *(float *)(this + 0xb8)) + fStack_b0;
      fVar19 = m3dRandMax(extraout_ECX_07);
      fStack_b4 = (fVar19 - *(float *)(this + 0xc4)) + fStack_b4;
      fVar19 = m3dRandMax(extraout_ECX_08);
      fStack_3c = (fVar19 - *(float *)(this + 0xd0)) + *(float *)(this + 0xcc);
      fVar19 = m3dRandMax(extraout_ECX_09);
      fStack_a4 = (fVar19 - *(float *)(this + 0xd8)) + *(float *)(this + 0xd4);
      if (*(int **)(this + 0xfc) == (int *)0x0) {
        pmStack_a8 = *(m3dV **)(this + 0xf8);
      }
      else {
        (**(code **)(**(int **)(this + 0xfc) + 0x10))
                  (*(float *)(this + 0x94) - fVar18,&pmStack_a8,0);
      }
      if (((*(int *)(this + 0x1d4) < 1) || ((*(uint *)(this + 4) & 0x2000) == 0)) ||
         (-1 < (char)(*(uint *)(this + 4) >> 8))) {
        if (___real_43340000 - _DAT_005db948 <= *(float *)(this + 0xf8)) {
          m3dMakeVUnitRandom((m3dV *)&fStack_54);
        }
        else {
          m3dMakeVUnitConusRandom((m3dV *)&fStack_84,(float)&fStack_54,pmStack_a8);
        }
      }
      else {
        m3dMakeVUnitConusRandom
                  ((m3dV *)(*(int *)(this + 0x1e0) + iVar10 * 0xc),(float)&fStack_54,pmStack_a8);
      }
      m3dMakeVUnitRandom((m3dV *)&fStack_60);
      if (((*(int *)(this + 0x1d4) < 1) || ((*(uint *)(this + 4) & 0x2000) == 0)) ||
         (-1 < (char)(*(uint *)(this + 4) >> 8))) {
        ppVar8 = this + 0x10c;
      }
      else {
        ppVar8 = (partEMITTER_PHYS *)(*(int *)(this + 0x1e0) + iVar10 * 0xc);
      }
      m3dMakeVTangRandom((m3dV *)ppVar8,(m3dV *)&fStack_60);
      fStack_c0 = fStack_a0 * fStack_a0 + fStack_9c * fStack_9c + fStack_98 * fStack_98;
      if (m3dSimdType == 0) {
        fStack_c0 = fStack_c0 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
        auVar17 = rsqrtss(ZEXT416((uint)fStack_c0),ZEXT416((uint)fStack_c0));
        fVar19 = auVar17._0_4_;
        fStack_c0 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar19 *
                    (`float___cdecl_m3dSqrt(float)'::__l2::three - fStack_c0 * fVar19 * fVar19) *
                    fStack_c0;
      }
      else if (m3dSimdType == 1) {
        FastExitMediaState();
        uVar14 = (ulonglong)(uint)fStack_c0;
        uVar15 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar14);
        uVar16 = PackedFloatingMUL(uVar15,uVar15);
        uVar16 = PackedFloatingReciprocalSQRIter1(uVar16,uVar14);
        uVar15 = PackedFloatingReciprocalIter2(uVar16,uVar15);
        uVar15 = PackedFloatingMUL(uVar15,uVar14);
        fStack_c0 = (float)uVar15;
        FastExitMediaState();
      }
      else {
        fStack_c0 = SQRT(fStack_c0);
      }
      fStack_c0 = (float)(uint)(ABS(fStack_c0) < _DAT_005db948);
      if ((float)(int)fStack_c0 == ___real_00000000) {
        m3dMakeVTangRandom((m3dV *)&fStack_a0,(m3dV *)&fStack_6c);
      }
      else {
        fStack_6c = _m3dVZero;
        fStack_68 = DAT_00963740;
        fStack_64 = DAT_00963744;
      }
      ppVar1 = ppVar2 + 0x1c;
      *(float *)ppVar1 = _m3dVZero;
      *(float *)(ppVar2 + 0x20) = DAT_00963740;
      *(float *)(ppVar2 + 0x24) = DAT_00963744;
      *(float *)ppVar1 = fStack_54 * fStack_b0 + *(float *)ppVar1;
      *(float *)(ppVar2 + 0x20) = fStack_50 * fStack_b0 + *(float *)(ppVar2 + 0x20);
      *(float *)(ppVar2 + 0x24) = fStack_4c * fStack_b0 + *(float *)(ppVar2 + 0x24);
      *(float *)ppVar1 = fStack_60 * fStack_b4 + *(float *)ppVar1;
      *(float *)(ppVar2 + 0x20) = fStack_5c * fStack_b4 + *(float *)(ppVar2 + 0x20);
      *(float *)(ppVar2 + 0x24) = fStack_58 * fStack_b4 + *(float *)(ppVar2 + 0x24);
      *(float *)ppVar1 = fStack_a0 * fStack_3c + *(float *)ppVar1;
      *(float *)(ppVar2 + 0x20) = fStack_9c * fStack_3c + *(float *)(ppVar2 + 0x20);
      *(float *)(ppVar2 + 0x24) = fStack_98 * fStack_3c + *(float *)(ppVar2 + 0x24);
      *(float *)ppVar1 = fStack_6c * fStack_a4 + *(float *)ppVar1;
      *(float *)(ppVar2 + 0x20) = fStack_68 * fStack_a4 + *(float *)(ppVar2 + 0x20);
      *(float *)(ppVar2 + 0x24) = fStack_64 * fStack_a4 + *(float *)(ppVar2 + 0x24);
      if ((*(uint *)(this + 4) & 0x4000000) == 0) {
        fStack_a4 = fVar18 * param_3;
        fStack_48 = *(float *)ppVar13;
        uStack_44 = *(undefined4 *)(ppVar2 + 0x14);
        fVar18 = -*(float *)(this + 0xb0);
        uStack_40 = *(undefined4 *)(ppVar2 + 0x18);
        fStack_8 = fVar18 * *(float *)(ppVar2 + 0x20) + *(float *)(this + 0xe0);
        fStack_4 = fVar18 * *(float *)(ppVar2 + 0x24) + *(float *)(this + 0xe4);
        *(float *)ppVar1 =
             (fVar18 * *(float *)ppVar1 + *(float *)(this + 0xdc)) * fStack_a4 + *(float *)ppVar1;
        *(float *)(ppVar2 + 0x20) = fStack_8 * fStack_a4 + *(float *)(ppVar2 + 0x20);
        *(float *)(ppVar2 + 0x24) = fStack_4 * fStack_a4 + *(float *)(ppVar2 + 0x24);
        *(float *)ppVar13 = fStack_a4 * *(float *)ppVar1 + *(float *)ppVar13;
        *(float *)(ppVar2 + 0x14) =
             fStack_a4 * *(float *)(ppVar2 + 0x20) + *(float *)(ppVar2 + 0x14);
        *(float *)(ppVar2 + 0x18) =
             fStack_a4 * *(float *)(ppVar2 + 0x24) + *(float *)(ppVar2 + 0x18);
        if ((0 < *(int *)(this + 0x1e8)) && ((*(uint *)(this + 4) & 0x10000) != 0)) {
          (**(code **)(*(int *)this + 0x2c))(ppVar2,&fStack_48,fStack_a4);
        }
      }
      local_94 = local_94 + 1;
    } while (local_94 < param_1);
  }
  return;
}




/* from: engine:particle.cpp
   addr: 004C1F90 */

void __thiscall
partEMITTER_PHYS::PartUpdate(partEMITTER_PHYS *this,int param_1,partPART **param_2,float param_3)

{
  m3dV *pmVar1;
  float fVar2;
  partPART *ppVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar6 = 0;
  if (0 < param_1) {
    do {
      ppVar3 = param_2[iVar6];
      *(float *)ppVar3 = param_3 * *(float *)(ppVar3 + 4) + *(float *)ppVar3;
      if (*(int **)(this + 0x30) != (int *)0x0) {
        (**(code **)(**(int **)(this + 0x30) + 0x10))
                  (*(undefined4 *)param_2[iVar6],param_2[iVar6] + 8,0);
      }
      ppVar3 = param_2[iVar6];
      iVar6 = iVar6 + 1;
      *(float *)(ppVar3 + 0x30) = param_3 * *(float *)(ppVar3 + 0x34) + *(float *)(ppVar3 + 0x30);
    } while (iVar6 < param_1);
  }
  iVar6 = 0;
  if (0 < param_1) {
    do {
      ppVar3 = param_2[iVar6];
      if (((byte)ppVar3[0x38] & 8) == 0) {
        fVar4 = -*(float *)(this + 0xb0);
        local_c = *(undefined4 *)(ppVar3 + 0x10);
        local_8 = *(undefined4 *)(ppVar3 + 0x14);
        local_4 = *(undefined4 *)(ppVar3 + 0x18);
        fVar7 = *(float *)(this + 0xe0);
        fVar2 = *(float *)(this + 0xe4);
        *(float *)(ppVar3 + 0x1c) =
             (fVar4 * *(float *)(ppVar3 + 0x1c) + *(float *)(this + 0xdc)) * param_3 +
             *(float *)(ppVar3 + 0x1c);
        *(float *)(ppVar3 + 0x20) =
             (fVar4 * *(float *)(ppVar3 + 0x20) + fVar7) * param_3 + *(float *)(ppVar3 + 0x20);
        *(float *)(ppVar3 + 0x24) =
             (fVar4 * *(float *)(ppVar3 + 0x24) + fVar2) * param_3 + *(float *)(ppVar3 + 0x24);
        *(float *)(ppVar3 + 0x10) = param_3 * *(float *)(ppVar3 + 0x1c) + *(float *)(ppVar3 + 0x10);
        *(float *)(ppVar3 + 0x14) = param_3 * *(float *)(ppVar3 + 0x20) + *(float *)(ppVar3 + 0x14);
        *(float *)(ppVar3 + 0x18) = param_3 * *(float *)(ppVar3 + 0x24) + *(float *)(ppVar3 + 0x18);
        if ((0 < *(int *)(this + 0x1e8)) && ((*(uint *)(this + 4) & 0x10000) != 0)) {
          (**(code **)(*(int *)this + 0x2c))(param_2[iVar6],&local_c,param_3);
        }
      }
      if ((*(partEMITTER_PHYS **)(this + 0x25c) != (partEMITTER_PHYS *)0x0) &&
         ((*(uint *)(this + 4) & 0x40000) != 0)) {
        pmVar1 = (m3dV *)(param_2[iVar6] + 0x1c);
        SetPosDirSpeed(*(partEMITTER_PHYS **)(this + 0x25c),(m3dV *)(param_2[iVar6] + 0x10),pmVar1,
                       pmVar1);
        fVar7 = param_3;
        iVar5 = UpdateGetNmbEmit(*(partEMITTER_PHYS **)(this + 0x25c),param_3);
        UpdateEmit(*(partEMITTER_PHYS **)(this + 0x25c),iVar5,fVar7);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < param_1);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:particle.cpp
   addr: 004C2120 */

int __thiscall partEMITTER_PHYS::Update(partEMITTER_PHYS *this,camCAMERA *param_1,float param_2)

{
  float *pfVar1;
  camCAMERA *pcVar2;
  camCAMERA *pcVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined8 extraout_MM1;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  camCAMERA *local_28;
  float local_20;
  camCAMERA *local_1c;
  camCAMERA *local_18;
  camCAMERA *local_14;
  camCAMERA *local_10;
  float local_c;
  float local_8;
  float local_4;
  
  camCAMERA::GetOrigin(param_1,(m3dV *)&local_c);
  if ((*(int *)(this + 0x1d4) < 1) || ((*(uint *)(this + 4) & 0x2000) == 0)) {
    fVar9 = (local_c - *(float *)(this + 0x100)) * (local_c - *(float *)(this + 0x100)) +
            (local_8 - *(float *)(this + 0x104)) * (local_8 - *(float *)(this + 0x104)) +
            (local_4 - *(float *)(this + 0x108)) * (local_4 - *(float *)(this + 0x108));
    if (m3dSimdType == 0) {
      fVar9 = fVar9 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
      auVar11 = rsqrtss(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9));
      fVar10 = auVar11._0_4_;
      param_1 = (camCAMERA *)
                (`float___cdecl_m3dSqrt(float)'::__l2::half * fVar10 *
                 (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar9 * fVar10 * fVar10) * fVar9);
    }
    else if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar6 = (ulonglong)(uint)fVar9;
      uVar7 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar6);
      uVar8 = PackedFloatingMUL(uVar7,uVar7);
      uVar8 = PackedFloatingReciprocalSQRIter1(uVar8,uVar6);
      uVar7 = PackedFloatingReciprocalIter2(uVar8,uVar7);
      uVar7 = PackedFloatingMUL(uVar7,uVar6);
      param_1 = (camCAMERA *)uVar7;
      FastExitMediaState();
    }
    else {
      param_1 = (camCAMERA *)SQRT(fVar9);
    }
  }
  else {
    pfVar1 = *(float **)(this + 0x1d8);
    fVar9 = (local_c - *pfVar1) * (local_c - *pfVar1) +
            (local_8 - pfVar1[1]) * (local_8 - pfVar1[1]) +
            (local_4 - pfVar1[2]) * (local_4 - pfVar1[2]);
    if (m3dSimdType == 0) {
      fVar9 = fVar9 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
      auVar11 = rsqrtss(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9));
      fVar10 = auVar11._0_4_;
      param_1 = (camCAMERA *)
                (`float___cdecl_m3dSqrt(float)'::__l2::half * fVar10 *
                 (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar9 * fVar10 * fVar10) * fVar9);
    }
    else if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar6 = (ulonglong)(uint)fVar9;
      uVar7 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar6);
      uVar8 = PackedFloatingMUL(uVar7,uVar7);
      uVar8 = PackedFloatingReciprocalSQRIter1(uVar8,uVar6);
      uVar7 = PackedFloatingReciprocalIter2(uVar8,uVar7);
      uVar7 = PackedFloatingMUL(uVar7,uVar6);
      param_1 = (camCAMERA *)uVar7;
      FastExitMediaState();
    }
    else {
      param_1 = (camCAMERA *)SQRT(fVar9);
    }
  }
  pcVar3 = param_1;
  pcVar2 = *(camCAMERA **)(this + 0xa4);
  local_28 = *(camCAMERA **)(this + 0xa0);
  local_20 = 1.0;
  param_1 = pcVar2;
  fVar9 = *(float *)(this + 0xa8);
  if ((float)pcVar2 < (float)local_28) {
    param_1 = local_28;
    local_28 = pcVar2;
    local_20 = *(float *)(this + 0xa8);
    fVar9 = ___real_3f800000;
  }
  fVar10 = local_20;
  if (((float)local_28 <= (float)pcVar3) && (fVar10 = fVar9, (float)pcVar3 <= (float)param_1)) {
    local_18 = (camCAMERA *)(uint)(ABS((float)param_1 - (float)local_28) < _DAT_005db948);
    if ((float)(int)local_18 == ___real_00000000) {
      local_1c = local_28;
      local_10 = param_1;
      local_18 = (camCAMERA *)local_20;
      local_14 = (camCAMERA *)fVar9;
      if ((float)param_1 < (float)local_28) {
        local_1c = param_1;
        local_10 = local_28;
        local_14 = (camCAMERA *)local_20;
        local_18 = (camCAMERA *)fVar9;
      }
      fVar10 = (((float)pcVar3 - (float)local_1c) * ((float)local_14 - (float)local_18)) /
               ((float)local_10 - (float)local_1c) + (float)local_18;
    }
    else {
      fVar10 = (fVar9 + local_20) * ___real_3f000000;
    }
  }
  *(float *)(this + 0x264) = fVar10;
  pcVar2 = *(camCAMERA **)(this + 0xa4);
  local_28 = *(camCAMERA **)(this + 0xa0);
  local_20 = 1.0;
  param_1 = pcVar2;
  fVar9 = *(float *)(this + 0xac);
  if ((float)pcVar2 < (float)local_28) {
    param_1 = local_28;
    local_28 = pcVar2;
    local_20 = *(float *)(this + 0xac);
    fVar9 = ___real_3f800000;
  }
  fVar10 = local_20;
  if (((float)local_28 <= (float)pcVar3) && (fVar10 = fVar9, (float)pcVar3 <= (float)param_1)) {
    local_10 = (camCAMERA *)(uint)(ABS((float)param_1 - (float)local_28) < _DAT_005db948);
    if ((float)(int)local_10 == ___real_00000000) {
      local_14 = param_1;
      local_18 = local_28;
      local_1c = (camCAMERA *)local_20;
      local_10 = (camCAMERA *)fVar9;
      if ((float)param_1 < (float)local_28) {
        local_14 = local_28;
        local_18 = param_1;
        local_10 = (camCAMERA *)local_20;
        local_1c = (camCAMERA *)fVar9;
      }
      fVar10 = (((float)pcVar3 - (float)local_18) * ((float)local_10 - (float)local_1c)) /
               ((float)local_14 - (float)local_18) + (float)local_1c;
    }
    else {
      fVar10 = (fVar9 + local_20) * ___real_3f000000;
    }
  }
  *(float *)(this + 0x268) = fVar10;
  if (*(partEMITTER_PHYS **)(this + 0x25c) != (partEMITTER_PHYS *)0x0) {
    UpdateUpdate(*(partEMITTER_PHYS **)(this + 0x25c),param_2);
    UpdateErase(*(partEMITTER_PHYS **)(this + 0x25c));
  }
  UpdateUpdate(this,param_2);
  UpdateErase(this);
  if (((*(uint *)(this + 8) & 1) == 0) || ((*(uint *)(this + 8) & 2) != 0)) {
    uVar5 = *(uint *)(this + 8) & 0xfffffff7;
  }
  else {
    iVar4 = UpdateGetNmbEmit(this,param_2);
    UpdateEmit(this,iVar4,param_2);
    uVar5 = *(uint *)(this + 8) | 8;
  }
  *(uint *)(this + 8) = uVar5;
  *(uint *)(this + 8) = uVar5 & 0xfffffffb;
  if ((*(uint *)(this + 4) & 0x200000) != 0) {
    *(float *)(this + 0x118) = *(float *)(this + 0x100) - *(float *)(this + 0x124);
    *(float *)(this + 0x11c) = *(float *)(this + 0x104) - *(float *)(this + 0x128);
    *(float *)(this + 0x120) = *(float *)(this + 0x108) - *(float *)(this + 300);
    fVar9 = ___real_3f800000 / param_2;
    *(float *)(this + 0x118) = fVar9 * *(float *)(this + 0x118);
    *(float *)(this + 0x11c) = fVar9 * *(float *)(this + 0x11c);
    *(float *)(this + 0x120) = fVar9 * *(float *)(this + 0x120);
  }
  *(undefined4 *)(this + 0x124) = *(undefined4 *)(this + 0x100);
  *(undefined4 *)(this + 0x128) = *(undefined4 *)(this + 0x104);
  *(undefined4 *)(this + 300) = *(undefined4 *)(this + 0x108);
  *(undefined4 *)(this + 0x130) = *(undefined4 *)(this + 0x10c);
  *(undefined4 *)(this + 0x134) = *(undefined4 *)(this + 0x110);
  *(undefined4 *)(this + 0x138) = *(undefined4 *)(this + 0x114);
  *(undefined4 *)(this + 0x13c) = *(undefined4 *)(this + 0x118);
  *(undefined4 *)(this + 0x140) = *(undefined4 *)(this + 0x11c);
  *(undefined4 *)(this + 0x144) = *(undefined4 *)(this + 0x120);
  return (uint)(0 < *(int *)(this + 0x48));
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:particle.cpp
   addr: 004C2690 */

int __thiscall
partEMITTER_PHYS::PartApplyCDT(partEMITTER_PHYS *this,partPART *param_1,m3dV *param_2,float param_3)

{
  m3dV *pmVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  partPART pVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  partPART *extraout_EDX;
  partPART *ppVar12;
  partEMITTER_PHYS *ppVar13;
  m3dV *pmVar14;
  int local_34;
  
  iVar11 = 0;
  local_34 = 0;
  if (0 < *(int *)(this + 0x1e8)) {
    ppVar13 = this + 0x1fc;
    do {
      pmVar14 = (m3dV *)(param_1 + 0x10);
      pmVar1 = (m3dV *)(ppVar13 + -4);
      if (((*(float *)(param_2 + 8) - *(float *)(ppVar13 + -8)) * *(float *)(ppVar13 + 4) +
          (*(float *)(param_2 + 4) - *(float *)(ppVar13 + -0xc)) * *(float *)ppVar13 +
          (*(float *)param_2 - *(float *)(ppVar13 + -0x10)) * *(float *)pmVar1) *
          ((*(float *)(param_1 + 0x18) - *(float *)(ppVar13 + -8)) * *(float *)(ppVar13 + 4) +
          (*(float *)(param_1 + 0x14) - *(float *)(ppVar13 + -0xc)) * *(float *)ppVar13 +
          (*(float *)pmVar14 - *(float *)(ppVar13 + -0x10)) * *(float *)pmVar1) <= ___real_00000000)
      {
        pVar6 = param_1[0x39];
        param_1[0x39] = (partPART)((char)pVar6 + 1U);
        if ((*(uint *)(this + 4) & 0x2000000) == 0) {
          if ((*(int *)(this + 600) == -1) ||
             ((int)(uint)(byte)((char)pVar6 + 1U) < *(int *)(this + 600))) {
            m3dMirrorPointPlane((m3dV *)(ppVar13 + -0x10),pmVar1,pmVar14,pmVar14);
            pmVar14 = (m3dV *)(param_1 + 0x1c);
            m3dMirrorPointPlane(&m3dVZero,pmVar1,pmVar14,pmVar14);
            fVar7 = *(float *)(this + 0x254);
            fVar8 = *(float *)(this + 0x250);
            fVar9 = *(float *)pmVar1 * *(float *)pmVar14 +
                    *(float *)(param_1 + 0x20) * *(float *)ppVar13 +
                    *(float *)(param_1 + 0x24) * *(float *)(ppVar13 + 4);
            fVar2 = *(float *)ppVar13;
            fVar3 = *(float *)(ppVar13 + 4);
            fVar10 = *(float *)(param_1 + 0x20) * *(float *)ppVar13 +
                     *(float *)(ppVar13 + 4) * *(float *)(param_1 + 0x24) +
                     *(float *)pmVar1 * *(float *)pmVar14;
            fVar4 = *(float *)ppVar13;
            fVar5 = *(float *)(ppVar13 + 4);
            *(float *)pmVar14 =
                 fVar8 * fVar9 * *(float *)pmVar1 +
                 (*(float *)pmVar14 - fVar10 * *(float *)pmVar1) * fVar7;
            *(float *)(param_1 + 0x20) =
                 fVar9 * fVar2 * fVar8 + (*(float *)(param_1 + 0x20) - fVar10 * fVar4) * fVar7;
            *(float *)(param_1 + 0x24) =
                 fVar9 * fVar3 * fVar8 + (*(float *)(param_1 + 0x24) - fVar10 * fVar5) * fVar7;
          }
          else {
            param_1[0x38] = (partPART)((byte)param_1[0x38] | 8);
          }
          fVar2 = (*(float *)(param_1 + 0x18) - *(float *)(ppVar13 + -8)) * *(float *)(ppVar13 + 4)
                  + (*(float *)(param_1 + 0x14) - *(float *)(ppVar13 + -0xc)) * *(float *)ppVar13 +
                    (*(float *)(param_1 + 0x10) - *(float *)(ppVar13 + -0x10)) * *(float *)pmVar1;
          if (fVar2 < *(float *)(this + 0x24c)) {
            fVar2 = *(float *)(this + 0x24c) - fVar2;
            *(float *)(param_1 + 0x10) = fVar2 * *(float *)pmVar1 + *(float *)(param_1 + 0x10);
            *(float *)(param_1 + 0x14) = fVar2 * *(float *)ppVar13 + *(float *)(param_1 + 0x14);
            *(float *)(param_1 + 0x18) =
                 fVar2 * *(float *)(ppVar13 + 4) + *(float *)(param_1 + 0x18);
          }
        }
        ppVar12 = param_1;
        if ((*(uint *)(this + 4) & 0x20000) != 0) {
          KillParticle(this,param_1);
          ppVar12 = extraout_EDX;
        }
        if ((*(partEMITTER_PHYS **)(this + 0x25c) != (partEMITTER_PHYS *)0x0) &&
           ((*(uint *)(this + 4) & 0x80000) != 0)) {
          SetPosDirSpeed(*(partEMITTER_PHYS **)(this + 0x25c),(m3dV *)(param_1 + 0x10),
                         (m3dV *)(ppVar12 + 0x1c),(m3dV *)(ppVar12 + 0x1c));
          UpdateEmit(*(partEMITTER_PHYS **)(this + 0x25c),*(int *)(this + 0x260),param_3);
          ppVar12 = param_1;
        }
        (**(code **)(*(int *)this + 0x14))(ppVar12,param_3);
        iVar11 = 1;
      }
      local_34 = local_34 + 1;
      ppVar13 = ppVar13 + 0x18;
    } while (local_34 < *(int *)(this + 0x1e8));
  }
  return iVar11;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:particle.cpp
   addr: 004C2920 */

int __thiscall partEMITTER_PHYS::PredictCDT(partEMITTER_PHYS *this,m3dV *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  fVar1 = *(float *)(this + 0xb4);
  local_c = fVar1 * *(float *)(this + 0x10c) + *(float *)(this + 0x118);
  local_8 = fVar1 * *(float *)(this + 0x110) + *(float *)(this + 0x11c);
  local_4 = fVar1 * *(float *)(this + 0x114) + *(float *)(this + 0x120);
  iVar5 = m3dSolveQuadraticEq((float)&local_14,(float)&local_10,
                              *(float *)(this + 0xe0) * ___real_3f000000,
                              (float *)(_m3dVUnitY * local_c +
                                       DAT_005f9994 * local_8 + DAT_005f9998 * local_4),
                              (float *)(*(float *)(this + 0x104) - *(float *)(this + 0x1f0)));
  if (iVar5 == 0) {
    return 0;
  }
  if (local_10 < local_14) {
    local_10 = local_14;
  }
  if (param_2 != (float *)0x0) {
    *param_2 = local_10;
  }
  if (param_1 == (m3dV *)0x0) {
    return 1;
  }
  *(undefined4 *)param_1 = *(undefined4 *)(this + 0x100);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(this + 0x104);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(this + 0x108);
  fVar4 = local_c * local_10 + *(float *)param_1;
  *(float *)param_1 = fVar4;
  fVar3 = local_8 * local_10 + *(float *)(param_1 + 4);
  *(float *)(param_1 + 4) = fVar3;
  fVar2 = local_4 * local_10 + *(float *)(param_1 + 8);
  *(float *)(param_1 + 8) = fVar2;
  fVar1 = local_10 * local_10 * ___real_3f000000;
  *(float *)param_1 = fVar1 * *(float *)(this + 0xdc) + fVar4;
  *(float *)(param_1 + 4) = fVar1 * *(float *)(this + 0xe0) + fVar3;
  *(float *)(param_1 + 8) = fVar1 * *(float *)(this + 0xe4) + fVar2;
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:particle.cpp
   addr: 004C2A90 */

partEMITTER_PHYS_FLY * __thiscall
partEMITTER_PHYS_FLY::partEMITTER_PHYS_FLY(partEMITTER_PHYS_FLY *this,float param_1,float param_2)

{
  undefined4 uVar1;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,param_1,param_2);
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 0x2c0) = _m3dVZero;
  *(undefined4 *)(this + 0x2c4) = DAT_00963740;
  uVar1 = DAT_00963744;
  *(undefined4 *)(this + 0x2cc) = 0;
  *(undefined4 *)(this + 0x2c8) = uVar1;
  return this;
}




/* from: engine:particle.cpp
   addr: 004C2AE0 */

int __thiscall
partEMITTER_PHYS_FLY::Update(partEMITTER_PHYS_FLY *this,camCAMERA *param_1,float param_2)

{
  float fVar1;
  int iVar2;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_8;
  float local_4;
  
  partEMITTER_PHYS::GetPosDirSpeed
            ((partEMITTER_PHYS *)this,(m3dV *)&local_18,(m3dV *)0x0,(m3dV *)&local_24);
  fVar1 = -*(float *)(this + 0x2cc);
  local_8 = local_20 * fVar1 + *(float *)(this + 0x2c4);
  local_4 = local_1c * fVar1 + *(float *)(this + 0x2c8);
  local_24 = (local_24 * fVar1 + *(float *)(this + 0x2c0)) * param_2 + local_24;
  local_20 = local_8 * param_2 + local_20;
  local_1c = local_4 * param_2 + local_1c;
  local_18 = local_24 * param_2 + local_18;
  local_14 = local_20 * param_2 + local_14;
  local_10 = local_1c * param_2 + local_10;
  partEMITTER_PHYS::SetPosDirSpeed
            ((partEMITTER_PHYS *)this,(m3dV *)&local_18,(m3dV *)0x0,(m3dV *)&local_24);
  iVar2 = partEMITTER_PHYS::Update((partEMITTER_PHYS *)this,param_1,param_2);
  return iVar2;
}

