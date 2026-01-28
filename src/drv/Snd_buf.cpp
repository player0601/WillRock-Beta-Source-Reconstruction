
/* from: drv:Snd_buf.cpp
   addr: 004A9540 */

void __thiscall sndBUFFER::Play(sndBUFFER *this,int param_1)

{
  uint uVar1;
  
  *(uint *)(this + 4) = *(uint *)(this + 4) & 0xfffffffb;
  uVar1 = *(uint *)(this + 4);
  if ((param_1 & 1U) != 0) {
    *(uint *)(this + 4) = uVar1 | 2;
    *(uint *)(this + 4) = uVar1 | 3;
    return;
  }
  *(uint *)(this + 4) = uVar1 & 0xfffffffd;
  *(uint *)(this + 4) = uVar1 & 0xfffffffd | 1;
  return;
}




/* from: drv:Snd_buf.cpp
   addr: 004A9580 */

void __thiscall sndBUFFER::Stop(sndBUFFER *this)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 & 0xfffffffb;
  *(uint *)(this + 4) = uVar1 & 0xfffffff9;
  *(uint *)(this + 4) = uVar1 & 0xfffffff8;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: drv:Snd_buf.cpp
   addr: 004A95C0 */

void __cdecl sndBUFFER(void)

{
  undefined4 *in_ECX;
  int iVar1;
  undefined4 *puVar2;
  
  in_ECX[1] = 0;
  *in_ECX = &_sndBUFFER::_vftable_;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  *(undefined2 *)(in_ECX + 6) = 0;
  puVar2 = (undefined4 *)((int)in_ECX + 0x1a);
  for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)((int)in_ECX + 0x3e) = 0;
  *(undefined4 *)((int)in_ECX + 0x42) = 0;
  *(undefined4 *)((int)in_ECX + 0x46) = 0;
  *(undefined4 *)((int)in_ECX + 0x4a) = 0;
  *(undefined4 *)((int)in_ECX + 0x4e) = 0;
  *(undefined4 *)((int)in_ECX + 0x52) = 0;
  *(undefined4 *)((int)in_ECX + 0x56) = 0x3dcccccd;
  *(undefined4 *)((int)in_ECX + 0x5a) = 0x4e6e6b28;
  *(undefined4 *)((int)in_ECX + 0x5e) = 0x43b40000;
  *(undefined4 *)((int)in_ECX + 0x62) = 0x43b40000;
  *(undefined4 *)((int)in_ECX + 0x66) = 0;
  in_ECX[1] = in_ECX[1] | 0x40;
  *(undefined4 *)((int)in_ECX + 0x6a) = _m3dVZero;
  *(undefined4 *)((int)in_ECX + 0x6e) = DAT_00963740;
  *(undefined4 *)((int)in_ECX + 0x72) = DAT_00963744;
  *(undefined4 *)((int)in_ECX + 0x76) = _m3dVZero;
  *(undefined4 *)((int)in_ECX + 0x7a) = DAT_00963740;
  *(undefined4 *)((int)in_ECX + 0x7e) = DAT_00963744;
  *(undefined4 *)((int)in_ECX + 0x82) = _m3dVUnitY;
  *(undefined4 *)((int)in_ECX + 0x86) = DAT_005f9994;
  *(undefined4 *)((int)in_ECX + 0x8a) = DAT_005f9998;
  return;
}




/* from: drv:Snd_buf.cpp
   addr: 004A9690
   addr: 004A9690
   addr: 004A9690
   addr: 004A9690
   addr: 004A9690
   addr: 004A9690 */

void * __thiscall _sndSTR_BUFFER::_scalar_deleting_destructor_(_sndSTR_BUFFER *this,uint param_1)

{
  *(undefined ***)this = &sndBUFFER::_vftable_;
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: drv:Snd_buf.cpp
   addr: 004A96B0 */

int __thiscall _sndBUFFER::Init(_sndBUFFER *this,char *param_1)

{
  _sndBUFFER *p_Var1;
  HANDLE hFile;
  HANDLE hFileMappingObject;
  LPVOID lpBaseAddress;
  int iVar2;
  sndFORMAT asStack_10 [16];
  
  hFile = CreateFileA(param_1,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  if (hFile != (HANDLE)0xffffffff) {
    hFileMappingObject = CreateFileMappingA(hFile,(LPSECURITY_ATTRIBUTES)0x0,2,0,0,(LPCSTR)0x0);
    if (hFileMappingObject == (HANDLE)0xffffffff) {
      CloseHandle(hFile);
      return 0;
    }
    CloseHandle(hFile);
    lpBaseAddress = MapViewOfFile(hFileMappingObject,4,0,0,0);
    CloseHandle(hFileMappingObject);
    if (lpBaseAddress != (LPVOID)0x0) {
      p_Var1 = this + 0x3e;
      iVar2 = sndParseWaveResource(lpBaseAddress,asStack_10,(uchar **)&param_1,(ulong *)p_Var1);
      if (iVar2 != 0) {
        iVar2 = (**(code **)(*(int *)this + 4))(asStack_10,*(ulong *)p_Var1);
        if (iVar2 != 0) {
          iVar2 = (**(code **)(*(int *)this + 0x4c))(param_1,*(ulong *)p_Var1,0);
          if (iVar2 != 0) {
            UnmapViewOfFile(lpBaseAddress);
            return 1;
          }
        }
      }
      UnmapViewOfFile(lpBaseAddress);
      return 0;
    }
  }
  return 0;
}




/* from: drv:Snd_buf.cpp
   addr: 004A97A0 */

int __thiscall _sndBUFFER::Init(_sndBUFFER *this,sndFORMAT *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined2 local_14;
  undefined2 local_12;
  undefined4 local_10;
  undefined4 local_c;
  undefined2 local_8;
  undefined2 local_6;
  undefined2 local_4;
  
  local_c = *(undefined4 *)(param_1 + 6);
  local_8 = *(undefined2 *)(param_1 + 10);
  local_12 = *(undefined2 *)param_1;
  local_10 = *(undefined4 *)(param_1 + 2);
  local_6 = *(undefined2 *)(param_1 + 0xc);
  local_14 = 1;
  local_4 = 0;
  iVar2 = CreateObj(this,(tWAVEFORMATEX *)&local_14,param_2,1);
  if (iVar2 == 0) {
    return 0;
  }
  (**(code **)(*(int *)this + 0x1c))(0);
  (**(code **)(*(int *)this + 0x50))(0);
  piVar1 = *(int **)(this + 0x4a);
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 0x48))(piVar1,0,0);
    if (iVar2 == 0) {
      *(uint *)(this + 4) = *(uint *)(this + 4) | 0x40;
      iVar2 = (**(code **)(**(int **)(this + 0x4a) + 0x4c))
                        (*(int **)(this + 0x4a),*(undefined4 *)(this + 0x6a),
                         *(undefined4 *)(this + 0x6e),*(undefined4 *)(this + 0x72),0);
      if (iVar2 == 0) {
        iVar2 = (**(code **)(**(int **)(this + 0x4a) + 0x50))
                          (*(int **)(this + 0x4a),*(undefined4 *)(this + 0x76),
                           *(undefined4 *)(this + 0x7a),*(undefined4 *)(this + 0x7e),0);
        if (iVar2 == 0) {
          iVar2 = (**(code **)(**(int **)(this + 0x4a) + 0x38))
                            (*(int **)(this + 0x4a),*(undefined4 *)(this + 0x82),
                             *(undefined4 *)(this + 0x86),*(undefined4 *)(this + 0x8a),0);
          if (iVar2 == 0) {
            iVar2 = (**(code **)(**(int **)(this + 0x4a) + 0x40))
                              (*(int **)(this + 0x4a),*(undefined4 *)(this + 0x5a),0);
            if (iVar2 == 0) {
              (**(code **)(**(int **)(this + 0x4a) + 0x44))
                        (*(int **)(this + 0x4a),*(undefined4 *)(this + 0x56),0);
            }
          }
        }
      }
    }
  }
  return 1;
}




/* from: drv:Snd_buf.cpp
   addr: 004A98C0 */

int __thiscall
_sndBUFFER::CreateObj(_sndBUFFER *this,tWAVEFORMATEX *param_1,int param_2,int param_3)

{
  _sndBUFFER *p_Var1;
  undefined2 uVar2;
  int iVar3;
  _sndSYSTEM *p_Var4;
  _sndBUFFER *p_Stack_24;
  undefined4 uStack_20;
  
  if (((byte)_sndSystem[4] & 1) != 0) {
    uStack_20 = 0x4a98df;
    iVar3 = (**(code **)(*(int *)this + 0xc))();
    if (iVar3 == 0) {
      *(undefined4 *)(this + 8) = *(undefined4 *)param_1;
      *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 4);
      *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 8);
      *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0xc);
      uVar2 = *(undefined2 *)(param_1 + 0x10);
      *(undefined4 *)(this + 0x1a) = 0x24;
      *(undefined2 *)(this + 0x18) = uVar2;
      *(int *)(this + 0x3e) = param_2;
      *(int *)(this + 0x22) = param_2;
      *(_sndBUFFER **)(this + 0x2a) = this + 8;
      *(undefined4 *)(this + 0x2e) = _DS3DALG_NO_VIRTUALIZATION;
      *(undefined4 *)(this + 0x32) = DAT_005dee9c;
      *(undefined4 *)(this + 0x36) = DAT_005deea0;
      *(undefined4 *)(this + 0x3a) = DAT_005deea4;
      *(undefined4 *)(this + 0x1e) = 0x20092;
      if (param_3 != 0) {
        *(undefined4 *)(this + 0x1e) = 0x20092;
      }
      p_Var1 = this + 0x42;
      uStack_20 = 0;
      p_Stack_24 = p_Var1;
      iVar3 = (**(code **)(**(int **)(_sndSystem + 0x11c) + 0xc))
                        (*(int **)(_sndSystem + 0x11c),this + 0x1a);
      if ((iVar3 == 0) &&
         ((*(int *)(_sndSystem + 0x124) == 0 ||
          (iVar3 = (**(code **)**(undefined4 **)p_Var1)
                             (*(undefined4 **)p_Var1,&_IID_IDirectSound3DBuffer,this + 0x4a),
          iVar3 == 0)))) {
        *(int *)(_sndSystem + 0x1652) = *(int *)(_sndSystem + 0x1652) + 1;
        uStack_20 = 0;
        p_Stack_24 = (_sndBUFFER *)0x14;
        (**(code **)(**(int **)p_Var1 + 0xc))(*(int **)p_Var1,&p_Stack_24);
        p_Var4 = _sndSystem + 0x13a;
        for (iVar3 = 0x18; iVar3 != 0; iVar3 = iVar3 + -1) {
          *(undefined4 *)p_Var4 = 0;
          p_Var4 = p_Var4 + 4;
        }
        *(undefined4 *)(_sndSystem + 0x13a) = 0x60;
        iVar3 = (**(code **)(**(int **)(_sndSystem + 0x11c) + 0x10))
                          (*(int **)(_sndSystem + 0x11c),_sndSystem + 0x13a);
        if (iVar3 == 0) {
          return 1;
        }
      }
    }
  }
  return 0;
}




/* from: drv:Snd_buf.cpp
   addr: 004A9A40 */

int __thiscall _sndBUFFER::IsHWBuf(_sndBUFFER *this)

{
  (**(code **)(**(int **)(this + 0x42) + 0xc))(*(int **)(this + 0x42));
  return 1;
}




/* from: drv:Snd_buf.cpp
   addr: 004A9A90 */

void __thiscall _sndBUFFER::Term(_sndBUFFER *this)

{
  int *piVar1;
  int iVar2;
  
  if (((byte)_sndSystem[4] & 1) != 0) {
    iVar2 = (**(code **)(*(int *)this + 0xc))();
    if (iVar2 != 0) {
      piVar1 = *(int **)(this + 0x4a);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
      }
      piVar1 = *(int **)(this + 0x42);
      *(undefined4 *)(this + 0x4a) = 0;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
      }
      *(undefined4 *)(this + 0x42) = 0;
      *(int *)(_sndSystem + 0x1652) = *(int *)(_sndSystem + 0x1652) + -1;
    }
  }
  return;
}




/* from: drv:Snd_buf.cpp
   addr: 004A9AE0 */

int __thiscall _sndBUFFER::Duplicate(_sndBUFFER *this,sndBUFFER *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  sndBUFFER *psVar3;
  _sndBUFFER *p_Var4;
  
  if (((((byte)_sndSystem[4] & 1) != 0) &&
      (iVar2 = (**(code **)(*(int *)param_1 + 0xc))(), iVar2 != 0)) &&
     (param_1 != (sndBUFFER *)this)) {
    (**(code **)(*(int *)this + 0x10))();
    *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
    *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
    *(undefined2 *)(this + 0x18) = *(undefined2 *)(param_1 + 0x18);
    psVar3 = param_1 + 0x1a;
    p_Var4 = this + 0x1a;
    for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined4 *)p_Var4 = *(undefined4 *)psVar3;
      psVar3 = psVar3 + 4;
      p_Var4 = p_Var4 + 4;
    }
    *(undefined4 *)(this + 0x3e) = *(undefined4 *)(param_1 + 0x3e);
    *(undefined4 *)(this + 0x4e) = *(undefined4 *)(param_1 + 0x4e);
    *(undefined4 *)(this + 0x52) = *(undefined4 *)(param_1 + 0x52);
    iVar2 = (**(code **)(**(int **)(_sndSystem + 0x11c) + 0x14))
                      (*(int **)(_sndSystem + 0x11c),*(undefined4 *)(param_1 + 0x42),this + 0x42);
    if (iVar2 == 0) {
      if ((*(int *)(param_1 + 0x4a) != 0) &&
         (puVar1 = *(undefined4 **)(this + 0x42),
         iVar2 = (**(code **)*puVar1)(puVar1,&_IID_IDirectSound3DBuffer,this + 0x4a), iVar2 != 0)) {
        return 0;
      }
      *(int *)(_sndSystem + 0x1652) = *(int *)(_sndSystem + 0x1652) + 1;
      return 1;
    }
  }
  return 0;
}




/* WARNING: Removing unreachable block (ram,0x004a9c03) */
/* WARNING: Removing unreachable block (ram,0x004a9c10) */
/* from: drv:Snd_buf.cpp
   addr: 004A9BD0 */

int __thiscall _sndBUFFER::Check(_sndBUFFER *this)

{
  int iVar1;
  
  if ((((byte)_sndSystem[4] & 1) != 0) && (iVar1 = (**(code **)(*(int *)this + 0xc))(), iVar1 != 0))
  {
    (**(code **)(**(int **)(this + 0x42) + 0x24))(*(int **)(this + 0x42));
  }
  return 0;
}




/* from: drv:Snd_buf.cpp
   addr: 004A9C20 */

int __thiscall _sndBUFFER::Write(_sndBUFFER *this,void *param_1,ulong param_2,ulong param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *unaff_EDI;
  undefined4 *puVar4;
  uint uStack_34;
  undefined1 *puStack_30;
  undefined4 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 *puStack_24;
  undefined4 uStack_20;
  undefined4 uStack_10;
  undefined1 auStack_c [4];
  undefined4 uStack_8;
  undefined1 auStack_4 [4];
  
  if (((byte)_sndSystem[4] & 1) != 0) {
    uStack_20 = 0x4a9c40;
    iVar1 = (**(code **)(*(int *)this + 0xc))();
    if (iVar1 != 0) {
      if (*(uint *)(this + 0x3e) < param_2) {
        param_2 = *(uint *)(this + 0x3e);
      }
      puStack_24 = &uStack_8;
      uStack_20 = 0;
      puStack_28 = auStack_c;
      puStack_2c = &uStack_10;
      puStack_30 = auStack_4;
      uStack_34 = param_2;
      iVar1 = (**(code **)(**(int **)(this + 0x42) + 0x2c))(*(int **)(this + 0x42),param_3);
      if (iVar1 == -0x7787ff6a) {
        (**(code **)(**(int **)(this + 0x42) + 0x50))(*(int **)(this + 0x42));
        iVar1 = (**(code **)(**(int **)(this + 0x42) + 0x2c))
                          (*(int **)(this + 0x42),param_3,param_2,&puStack_28,&uStack_34,&puStack_30
                           ,&puStack_2c,0);
      }
      if (iVar1 == 0) {
        puVar3 = unaff_EDI;
        puVar4 = puStack_24;
        for (uVar2 = (uint)puStack_30 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
        }
        for (uVar2 = (uint)puStack_30 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
          *(undefined1 *)puVar4 = *(undefined1 *)puVar3;
          puVar3 = (undefined4 *)((int)puVar3 + 1);
          puVar4 = (undefined4 *)((int)puVar4 + 1);
        }
        if (puStack_2c != (undefined4 *)0x0) {
          puVar3 = (undefined4 *)(puStack_30 + (int)unaff_EDI);
          puVar4 = puStack_2c;
          for (uVar2 = (uint)puStack_28 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar4 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
          for (uVar2 = (uint)puStack_28 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
            *(undefined1 *)puVar4 = *(undefined1 *)puVar3;
            puVar3 = (undefined4 *)((int)puVar3 + 1);
            puVar4 = (undefined4 *)((int)puVar4 + 1);
          }
        }
        iVar1 = (**(code **)(**(int **)(this + 0x42) + 0x4c))
                          (*(int **)(this + 0x42),puStack_24,puStack_30,puStack_2c,puStack_28);
        return (uint)(iVar1 == 0);
      }
    }
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: drv:Snd_buf.cpp
   addr: 004A9D30 */

void __thiscall _sndBUFFER::SetVolume(_sndBUFFER *this,float param_1)

{
  int iVar1;
  uint uVar2;
  float10 fVar3;
  
  if ((((byte)_sndSystem[4] & 1) != 0) && (iVar1 = (**(code **)(*(int *)this + 0xc))(), iVar1 != 0))
  {
    fVar3 = (float10)(**(code **)(*(int *)_sndSystem + 0x28))();
    fVar3 = (fVar3 + (float10)param_1) * (float10)___real_42c80000;
    if (fVar3 < (float10)___real_c61c4000) {
      fVar3 = (float10)___real_c61c4000;
    }
    param_1 = (float)(uint)(ABS((float)(fVar3 - (float10)*(int *)(this + 0x4e))) < _DAT_005db430);
    if ((float)(int)param_1 == ___real_00000000) {
      uVar2 = ftol();
      *(uint *)(this + 0x4e) = uVar2;
      uVar2 = uVar2 & (-1 < (int)uVar2) - 1;
      *(uint *)(this + 0x4e) = uVar2;
      if ((int)uVar2 < -9999) {
        uVar2 = 0xffffd8f0;
      }
      *(uint *)(this + 0x4e) = uVar2;
      (**(code **)(**(int **)(this + 0x42) + 0x3c))(*(int **)(this + 0x42),uVar2);
      return;
    }
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: drv:Snd_buf.cpp
   addr: 004A9E00 */

float __thiscall _sndBUFFER::GetVolume(_sndBUFFER *this)

{
  int iVar1;
  _sndBUFFER *p_Stack_4;
  
  if (((byte)_sndSystem[4] & 1) != 0) {
    p_Stack_4 = this;
    iVar1 = (**(code **)(*(int *)this + 0xc))();
    if (iVar1 != 0) {
      iVar1 = (**(code **)(**(int **)(this + 0x42) + 0x18))(*(int **)(this + 0x42));
      if (iVar1 == 0) {
        return (float)(int)&p_Stack_4 * ___real_3c23d70a;
      }
    }
  }
  return ___real_00000000;
}




/* from: drv:Snd_buf.cpp
   addr: 004A9E60 */

void __thiscall _sndBUFFER::SetCurPlayTime(_sndBUFFER *this,ulong param_1)

{
  ushort uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  if (((byte)_sndSystem[4] & 1) != 0) {
    iVar3 = (**(code **)(*(int *)this + 0xc))();
    if (iVar3 != 0) {
      piVar2 = *(int **)(this + 0x42);
      iVar3 = *piVar2;
      uVar1 = *(ushort *)(this + 0x14);
      iVar4 = ftol();
      (**(code **)(iVar3 + 0x34))(piVar2,(iVar4 / (int)(uint)uVar1) * (uint)uVar1);
    }
  }
  return;
}




/* from: drv:Snd_buf.cpp
   addr: 004A9EF0 */

ulong __thiscall _sndBUFFER::GetCurPlayTime(_sndBUFFER *this)

{
  int iVar1;
  ulong uVar2;
  undefined1 auStack_8 [8];
  
  if (((byte)_sndSystem[4] & 1) != 0) {
    iVar1 = (**(code **)(*(int *)this + 0xc))();
    if (iVar1 != 0) {
      iVar1 = (**(code **)(**(int **)(this + 0x42) + 0x10))(*(int **)(this + 0x42),auStack_8,0);
      if (iVar1 == 0) {
        uVar2 = ftol();
        return uVar2;
      }
    }
  }
  return 0;
}




/* from: drv:Snd_buf.cpp
   addr: 004A9F50 */

ulong __thiscall _sndBUFFER::GetTotalTime(_sndBUFFER *this)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = (**(code **)(*(int *)this + 0xc))();
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = ftol();
  return uVar2;
}




/* from: drv:Snd_buf.cpp
   addr: 004A9FA0 */

void __thiscall _sndBUFFER::Play(_sndBUFFER *this,int param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  
  if (((byte)_sndSystem[4] & 1) != 0) {
    iVar3 = (**(code **)(*(int *)this + 0xc))();
    if (iVar3 != 0) {
      uVar1 = *(uint *)(this + 4);
      uVar4 = uVar1 & 0xfffffffb;
      *(uint *)(this + 4) = uVar4;
      if ((param_1 & 1U) == 0) {
        uVar4 = uVar1 & 0xfffffff9;
      }
      else {
        uVar4 = uVar4 | 2;
      }
      *(uint *)(this + 4) = uVar4;
      *(uint *)(this + 4) = uVar4 | 1;
      if ((param_1 & 2U) != 0) {
        (**(code **)(*(int *)this + 0x24))(0);
      }
      piVar2 = *(int **)(this + 0x42);
      if ((param_1 & 1U) != 0) {
        (**(code **)(*piVar2 + 0x30))(piVar2,0,0,1);
        return;
      }
      (**(code **)(*piVar2 + 0x30))(piVar2,0,0,0);
    }
  }
  return;
}




/* WARNING: Removing unreachable block (ram,0x004aa053) */
/* from: drv:Snd_buf.cpp
   addr: 004AA020 */

int __thiscall _sndBUFFER::IsPlay(_sndBUFFER *this)

{
  int iVar1;
  
  if ((((byte)_sndSystem[4] & 1) != 0) && (iVar1 = (**(code **)(*(int *)this + 0xc))(), iVar1 != 0))
  {
    (**(code **)(**(int **)(this + 0x42) + 0x24))(*(int **)(this + 0x42));
  }
  return 0;
}




/* WARNING: Removing unreachable block (ram,0x004aa0ab) */
/* from: drv:Snd_buf.cpp
   addr: 004AA060 */

void __thiscall _sndBUFFER::Stop(_sndBUFFER *this)

{
  uint uVar1;
  int iVar2;
  
  if ((((byte)_sndSystem[4] & 1) != 0) && (iVar2 = (**(code **)(*(int *)this + 0xc))(), iVar2 != 0))
  {
    uVar1 = *(uint *)(this + 4);
    *(uint *)(this + 4) = uVar1 & 0xfffffffb;
    *(uint *)(this + 4) = uVar1 & 0xfffffff9;
    *(uint *)(this + 4) = uVar1 & 0xfffffff8;
    (**(code **)(**(int **)(this + 0x42) + 0x24))(*(int **)(this + 0x42));
  }
  return;
}




/* from: drv:Snd_buf.cpp
   addr: 004AA0C0 */

void __thiscall _sndBUFFER::Pause(_sndBUFFER *this)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((byte)_sndSystem[4] & 1) != 0) {
    iVar1 = (**(code **)(*(int *)this + 0xc))();
    if (iVar1 != 0) {
      *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
      uVar2 = (**(code **)(*(int *)this + 0x28))();
      *(undefined4 *)(this + 0x46) = uVar2;
      (**(code **)(**(int **)(this + 0x42) + 0x48))(*(int **)(this + 0x42));
    }
  }
  return;
}




/* from: drv:Snd_buf.cpp
   addr: 004AA100 */

void __thiscall _sndBUFFER::Continue(_sndBUFFER *this)

{
  int iVar1;
  
  if (((byte)_sndSystem[4] & 1) != 0) {
    iVar1 = (**(code **)(*(int *)this + 0xc))();
    if (iVar1 != 0) {
      *(uint *)(this + 4) = *(uint *)(this + 4) & 0xfffffffb;
      (**(code **)(*(int *)this + 0x24))(*(undefined4 *)(this + 0x46));
      (**(code **)(*(int *)this + 0x30))(*(uint *)(this + 4) >> 1 & 1);
    }
  }
  return;
}




/* from: drv:Snd_buf.cpp
   addr: 004AA140 */

void __thiscall _sndBUFFER::Enable3D(_sndBUFFER *this,int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  if (((byte)_sndSystem[4] & 1) != 0) {
    iVar2 = (**(code **)(*(int *)this + 0xc))();
    if ((iVar2 != 0) && (*(int *)(this + 0x4a) != 0)) {
      if ((((*(uint *)(this + 4) & 0x40) == 0) || (param_1 == 0)) &&
         (((*(uint *)(this + 4) & 0x40) != 0 || (param_1 != 0)))) {
        if (param_1 == 0) {
          uVar3 = *(uint *)(this + 4) & 0xffffffbf;
        }
        else {
          uVar3 = *(uint *)(this + 4) | 0x40;
        }
        *(uint *)(this + 4) = uVar3;
        piVar1 = *(int **)(this + 0x4a);
        if (param_2 != 0) {
          if (param_1 != 0) {
            (**(code **)(*piVar1 + 0x48))(piVar1,0);
            return;
          }
          (**(code **)(*piVar1 + 0x48))(piVar1,2,0);
          return;
        }
        if (param_1 != 0) {
          (**(code **)(*piVar1 + 0x48))(piVar1,0);
          return;
        }
        (**(code **)(*piVar1 + 0x48))(piVar1,2,1);
      }
    }
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: drv:Snd_buf.cpp
   addr: 004AA1D0 */

void __thiscall _sndBUFFER::Set3DPosVel(_sndBUFFER *this,m3dV *param_1,m3dV *param_2,int param_3)

{
  int *piVar1;
  m3dV *pmVar2;
  int iVar3;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  pmVar2 = param_1;
  local_c = _m3dVZero;
  local_8 = DAT_00963740;
  local_4 = DAT_00963744;
  if ((((((byte)_sndSystem[4] & 1) != 0) &&
       (iVar3 = (**(code **)(*(int *)this + 0xc))(), iVar3 != 0)) &&
      (piVar1 = *(int **)(this + 0x4a), piVar1 != (int *)0x0)) && (param_1 != (m3dV *)0x0)) {
    if (param_2 == (m3dV *)0x0) {
      param_2 = (m3dV *)&local_c;
    }
    param_1 = (m3dV *)(uint)(ABS(*(float *)(this + 0x6a) - *(float *)param_1) < _DAT_005db430);
    if (((((float)(int)param_1 == ___real_00000000) ||
         (param_1 = (m3dV *)(uint)(ABS(*(float *)(this + 0x6e) - *(float *)(pmVar2 + 4)) <
                                  _DAT_005db430), (float)(int)param_1 == ___real_00000000)) ||
        ((param_1 = (m3dV *)(uint)(ABS(*(float *)(this + 0x72) - *(float *)(pmVar2 + 8)) <
                                  _DAT_005db430), (float)(int)param_1 == ___real_00000000 ||
         ((param_1 = (m3dV *)(uint)(ABS(*(float *)(this + 0x76) - *(float *)param_2) < _DAT_005db430
                                   ), (float)(int)param_1 == ___real_00000000 ||
          (param_1 = (m3dV *)(uint)(ABS(*(float *)(this + 0x7a) - *(float *)(param_2 + 4)) <
                                   _DAT_005db430), (float)(int)param_1 == ___real_00000000)))))) ||
       (param_1 = (m3dV *)(uint)(ABS(*(float *)(this + 0x7e) - *(float *)(param_2 + 8)) <
                                _DAT_005db430), (float)(int)param_1 == ___real_00000000)) {
      *(undefined4 *)(this + 0x6a) = *(undefined4 *)pmVar2;
      *(undefined4 *)(this + 0x6e) = *(undefined4 *)(pmVar2 + 4);
      *(undefined4 *)(this + 0x72) = *(undefined4 *)(pmVar2 + 8);
      *(float *)(this + 0x76) = *(float *)param_2;
      *(float *)(this + 0x7a) = *(float *)(param_2 + 4);
      *(float *)(this + 0x7e) = *(float *)(param_2 + 8);
      if (param_3 == 0) {
        iVar3 = (**(code **)(*piVar1 + 0x4c))
                          (piVar1,*(undefined4 *)pmVar2,*(undefined4 *)(pmVar2 + 4),
                           *(undefined4 *)(pmVar2 + 8),1);
        if (iVar3 == 0) {
          (**(code **)(**(int **)(this + 0x4a) + 0x50))
                    (*(int **)(this + 0x4a),*(float *)param_2,*(float *)(param_2 + 4),
                     *(float *)(param_2 + 8),1);
        }
      }
      else {
        iVar3 = (**(code **)(*piVar1 + 0x4c))
                          (piVar1,*(undefined4 *)pmVar2,*(undefined4 *)(pmVar2 + 4),
                           *(undefined4 *)(pmVar2 + 8),0);
        if (iVar3 == 0) {
          (**(code **)(**(int **)(this + 0x4a) + 0x50))
                    (*(int **)(this + 0x4a),*(float *)param_2,*(float *)(param_2 + 4),
                     *(float *)(param_2 + 8),0);
          return;
        }
      }
    }
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: drv:Snd_buf.cpp
   addr: 004AA450 */

void __thiscall
_sndBUFFER::Set3DMinMaxDist(_sndBUFFER *this,float param_1,float param_2,int param_3)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  
  if ((((((byte)_sndSystem[4] & 1) != 0) &&
       (iVar3 = (**(code **)(*(int *)this + 0xc))(), iVar3 != 0)) &&
      (piVar1 = *(int **)(this + 0x4a), piVar1 != (int *)0x0)) &&
     (((*(float *)(this + 0x56) <= *(float *)(this + 0x5a) &&
       (*(float *)(this + 0x56) < _DAT_005db430 == (*(float *)(this + 0x56) == _DAT_005db430))) &&
      ((bVar2 = ABS(param_1 - *(float *)(this + 0x56)) < _DAT_005db430,
       (float)bVar2 == ___real_00000000 ||
       (bVar2 = ABS(param_2 - *(float *)(this + 0x5a)) < _DAT_005db430,
       (float)bVar2 == ___real_00000000)))))) {
    *(float *)(this + 0x56) = param_1;
    *(float *)(this + 0x5a) = param_2;
    if (param_3 == 0) {
      iVar3 = (**(code **)(*piVar1 + 0x44))(piVar1,param_1,1);
      if (iVar3 == 0) {
        (**(code **)(**(int **)(this + 0x4a) + 0x40))(*(int **)(this + 0x4a),bVar2,1);
      }
    }
    else {
      iVar3 = (**(code **)(*piVar1 + 0x44))(piVar1,param_1,0);
      if (iVar3 == 0) {
        (**(code **)(**(int **)(this + 0x4a) + 0x40))(*(int **)(this + 0x4a),bVar2,0);
        return;
      }
    }
  }
  return;
}




/* from: drv:Snd_buf.cpp
   addr: 004AA590 */

void __cdecl sndSTR_BUFFER(void)

{
  undefined4 *in_ECX;
  
  sndBUFFER();
  *in_ECX = &_sndSTR_BUFFER::_vftable_;
  *(undefined4 *)((int)in_ECX + 0x8e) = 0;
  *(undefined4 *)((int)in_ECX + 0x92) = 0;
  *(undefined4 *)((int)in_ECX + 0x96) = 0;
  *(undefined4 *)((int)in_ECX + 0x9a) = 0;
  return;
}




/* from: drv:Snd_buf.cpp
   addr: 004AA5C0 */

int __thiscall _sndSTR_BUFFER::Init(_sndSTR_BUFFER *this,char *param_1)

{
  HANDLE hFile;
  HANDLE hFileMappingObject;
  int iVar1;
  LPVOID pvVar2;
  sndFORMAT asStack_10 [16];
  
  hFile = CreateFileA(param_1,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffff) {
    pvVar2 = (void *)0x0;
  }
  else {
    hFileMappingObject = CreateFileMappingA(hFile,(LPSECURITY_ATTRIBUTES)0x0,2,0,0,(LPCSTR)0x0);
    if (hFileMappingObject == (HANDLE)0xffffffff) {
      CloseHandle(hFile);
      pvVar2 = (void *)0x0;
    }
    else {
      CloseHandle(hFile);
      pvVar2 = MapViewOfFile(hFileMappingObject,4,0,0,0);
      CloseHandle(hFileMappingObject);
      if (pvVar2 == (LPVOID)0x0) {
        pvVar2 = (void *)0x0;
      }
    }
  }
  *(LPVOID *)(this + 0x96) = pvVar2;
  if (pvVar2 != (void *)0x0) {
    iVar1 = sndParseWaveResource(pvVar2,asStack_10,(uchar **)(this + 0x9a),(ulong *)(this + 0x8e));
    if (((iVar1 != 0) && (iVar1 = (**(code **)(*(int *)this + 4))(asStack_10,0), iVar1 != 0)) &&
       (iVar1 = (**(code **)(*(int *)this + 0x4c))
                          (*(uchar **)(this + 0x9a),*(undefined4 *)(this + 0x3e),0), iVar1 != 0)) {
      return 1;
    }
    if (*(LPCVOID *)(this + 0x96) != (LPCVOID)0x0) {
      UnmapViewOfFile(*(LPCVOID *)(this + 0x96));
    }
    return 0;
  }
  return 0;
}




/* from: drv:Snd_buf.cpp
   addr: 004AA6C0 */

int __thiscall _sndSTR_BUFFER::Init(_sndSTR_BUFFER *this,sndFORMAT *param_1,int param_2)

{
  int iVar1;
  undefined2 local_14;
  undefined2 local_12;
  undefined4 local_10;
  undefined4 local_c;
  undefined2 local_8;
  undefined2 local_6;
  undefined2 local_4;
  
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x20;
  local_c = *(undefined4 *)(param_1 + 6);
  local_8 = *(undefined2 *)(param_1 + 10);
  local_12 = *(undefined2 *)param_1;
  local_10 = *(undefined4 *)(param_1 + 2);
  local_6 = *(undefined2 *)(param_1 + 0xc);
  local_14 = 1;
  local_4 = 0;
  iVar1 = _sndBUFFER::CreateObj((_sndBUFFER *)this,(tWAVEFORMATEX *)&local_14,84000,0);
  return iVar1;
}




/* from: drv:Snd_buf.cpp
   addr: 004AA720 */

void __thiscall _sndSTR_BUFFER::Term(_sndSTR_BUFFER *this)

{
  int *piVar1;
  int iVar2;
  
  if (((byte)_sndSystem[4] & 1) != 0) {
    iVar2 = (**(code **)(*(int *)this + 0xc))();
    if (iVar2 != 0) {
      piVar1 = *(int **)(this + 0x4a);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
      }
      piVar1 = *(int **)(this + 0x42);
      *(undefined4 *)(this + 0x4a) = 0;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
      }
      *(undefined4 *)(this + 0x42) = 0;
      *(int *)(_sndSystem + 0x1652) = *(int *)(_sndSystem + 0x1652) + -1;
    }
  }
  if (*(LPCVOID *)(this + 0x96) != (LPCVOID)0x0) {
    UnmapViewOfFile(*(LPCVOID *)(this + 0x96));
  }
  *(undefined4 *)(this + 0x96) = 0;
  *(undefined4 *)(this + 0x9a) = 0;
  return;
}




/* from: drv:Snd_buf.cpp
   addr: 004AA790 */

int __thiscall _sndSTR_BUFFER::Update(_sndSTR_BUFFER *this)

{
  uint uVar1;
  int iVar2;
  uint unaff_EBX;
  uint uVar3;
  uint uVar4;
  uint uStack_8;
  undefined1 auStack_4 [4];
  
  if (((((byte)_sndSystem[4] & 1) == 0) || (iVar2 = (**(code **)(*(int *)this + 0xc))(), iVar2 == 0)
      ) || ((uStack_8 = 0, ((byte)this[4] & 0x20) == 0 &&
            (iVar2 = (**(code **)(**(int **)(this + 0x42) + 0x10))
                               (*(int **)(this + 0x42),&uStack_8,0), iVar2 != 0)))) {
    return 0;
  }
  uVar4 = *(uint *)(this + 0x3e) >> 1;
  uVar3 = *(int *)(this + 0x8e) - *(int *)(this + 0x92);
  if (uStack_8 < uVar4) {
    *(uint *)(this + 4) = *(uint *)(this + 4) | 8;
  }
  uVar1 = *(uint *)(this + 4);
  if (((uVar1 & 0x20) != 0) || (((uVar1 & 8) != 0 && (uVar4 < uStack_8)))) {
    if (uVar4 < uVar3) {
      (**(code **)(*(int *)this + 0x4c))(*(int *)(this + 0x9a) + *(int *)(this + 0x92),uVar4,0);
      *(uint *)(this + 0x92) = *(int *)(this + 0x92) + uVar4;
    }
    else {
      if ((uVar1 & 2) == 0) {
        if (((byte)_sndSystem[4] & 1) == 0) {
          return 1;
        }
        iVar2 = (**(code **)(*(int *)this + 0xc))();
        goto LAB_004aa90a;
      }
      (**(code **)(*(int *)this + 0x4c))(*(int *)(this + 0x9a) + *(int *)(this + 0x92),uVar3,0);
      (**(code **)(*(int *)this + 0x4c))(*(undefined4 *)(this + 0x9a),uVar4 - uVar3,uVar3);
      *(uint *)(this + 0x92) = uVar4 - uVar3;
    }
    *(uint *)(this + 4) = *(uint *)(this + 4) & 0xfffffff7;
  }
  uVar3 = *(int *)(this + 0x8e) - *(int *)(this + 0x92);
  if (uVar4 < uStack_8) {
    *(uint *)(this + 4) = *(uint *)(this + 4) | 0x10;
  }
  uVar1 = *(uint *)(this + 4);
  if (((uVar1 & 0x20) != 0) || (((uVar1 & 0x10) != 0 && (uStack_8 < uVar4)))) {
    if (uVar4 < uVar3) {
      (**(code **)(*(int *)this + 0x4c))(*(int *)(this + 0x9a) + *(int *)(this + 0x92),uVar4,uVar4);
      *(uint *)(this + 0x92) = *(int *)(this + 0x92) + uVar4;
    }
    else {
      if ((uVar1 & 2) == 0) {
        if (((byte)_sndSystem[4] & 1) == 0) {
          return 1;
        }
        iVar2 = (**(code **)(*(int *)this + 0xc))();
LAB_004aa90a:
        if (iVar2 != 0) {
          uVar3 = *(uint *)(this + 4);
          *(uint *)(this + 4) = uVar3 & 0xfffffffb;
          *(uint *)(this + 4) = uVar3 & 0xfffffff9;
          *(uint *)(this + 4) = uVar3 & 0xfffffff8;
          iVar2 = (**(code **)(**(int **)(this + 0x42) + 0x24))(*(int **)(this + 0x42),auStack_4);
          if ((iVar2 == 0) && ((unaff_EBX & 1) != 0)) {
            (**(code **)(**(int **)(this + 0x42) + 0x48))(*(int **)(this + 0x42));
          }
        }
        return 1;
      }
      (**(code **)(*(int *)this + 0x4c))(*(int *)(this + 0x9a) + *(int *)(this + 0x92),uVar3,uVar4);
      (**(code **)(*(int *)this + 0x4c))(*(undefined4 *)(this + 0x9a),uVar4 - uVar3,uVar3 + uVar4);
      *(uint *)(this + 0x92) = uVar4 - uVar3;
    }
    *(uint *)(this + 4) = *(uint *)(this + 4) & 0xffffffef;
  }
  *(uint *)(this + 4) = *(uint *)(this + 4) & 0xffffffdf;
  return 1;
}




/* from: drv:Snd_buf.cpp
   addr: 004AA9B0 */

void __thiscall _sndSTR_BUFFER::SetCurPlayTime(_sndSTR_BUFFER *this,ulong param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)this + 0xc))();
  if (iVar1 != 0) {
    *(uint *)(this + 4) = *(uint *)(this + 4) | 0x20;
  }
  return;
}




/* from: drv:Snd_buf.cpp
   addr: 004AA9D0 */

ulong __thiscall _sndSTR_BUFFER::GetCurPlayTime(_sndSTR_BUFFER *this)

{
  int iVar1;
  int iVar2;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar1 = (**(code **)(*(int *)this + 0xc))();
  if (iVar1 == 0) {
    return 0;
  }
  if (((byte)_sndSystem[4] & 1) != 0) {
    iVar1 = (**(code **)(*(int *)this + 0xc))();
    if (iVar1 != 0) {
      iVar1 = (**(code **)(**(int **)(this + 0x42) + 0x10))(*(int **)(this + 0x42),&uStack_8,0);
      if (iVar1 == 0) {
        uStack_8 = *(undefined4 *)(this + 0x10);
        uStack_4 = 0;
        iVar1 = ftol();
        goto LAB_004aaa38;
      }
    }
  }
  iVar1 = 0;
LAB_004aaa38:
  uStack_8 = *(undefined4 *)(this + 0x10);
  uStack_4 = 0;
  iVar2 = ftol();
  return iVar1 - iVar2;
}




/* from: drv:Snd_buf.cpp
   addr: 004AAA70 */

ulong __thiscall _sndSTR_BUFFER::GetTotalTime(_sndSTR_BUFFER *this)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = (**(code **)(*(int *)this + 0xc))();
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = ftol();
  return uVar2;
}




/* from: drv:Snd_buf.cpp
   addr: 004AAAB0 */

int __fastcall sndParseWaveResource(void *param_1,sndFORMAT *param_2,uchar **param_3,ulong *param_4)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  undefined4 local_14;
  int local_10;
  int local_c;
  undefined4 local_8;
  
                    /* WARNING: Load size is inaccurate */
  piVar3 = (int *)((int)param_1 + 0xc);
  if ((*param_1 == 0x46464952) && (*(int *)((int)param_1 + 8) == 0x45564157)) {
    piVar1 = (int *)(*(int *)((int)param_1 + 4) + -4 + (int)piVar3);
    do {
      if (piVar1 <= piVar3) {
        *(undefined2 *)(param_2 + 10) = (undefined2)local_8;
        local_8._2_2_ = (undefined2)((uint)local_8 >> 0x10);
        *(int *)(param_2 + 2) = local_10;
        *(int *)(param_2 + 6) = local_c;
        *(undefined2 *)(param_2 + 0xc) = local_8._2_2_;
        *(undefined2 *)param_2 = local_14._2_2_;
        return 1;
      }
      uVar2 = piVar3[1];
      piVar4 = piVar3 + 2;
      if (*piVar3 == 0x20746d66) {
        if (uVar2 < 0xe) {
          return 0;
        }
        local_14 = *piVar4;
        local_10 = piVar3[3];
        local_c = piVar3[4];
        local_8 = piVar3[5];
      }
      else if (*piVar3 == 0x61746164) {
        *param_3 = (uchar *)piVar4;
        *param_4 = uVar2;
      }
      piVar3 = (int *)((int)piVar4 + (uVar2 + 1 & 0xfffffffe));
    } while( true );
  }
  return 0;
}

