
/* from: drv:Snd_sys.cpp
   addr: 004A5B50 */

sndSYSTEM * __fastcall sndSYSTEM::make(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x1676);
  if (pvVar1 != (void *)0x0) {
    _sndSystem = (_sndSYSTEM *)sndSYSTEM();
    return (sndSYSTEM *)_sndSystem;
  }
  _sndSystem = (_sndSYSTEM *)0x0;
  return (sndSYSTEM *)0x0;
}




/* from: drv:Snd_sys.cpp
   addr: 004A5B80 */

sndBUFFER * __thiscall _sndSYSTEM::makeBuffer(_sndSYSTEM *this)

{
  void *pvVar1;
  sndBUFFER *psVar2;
  
  pvVar1 = operator_new(0x8e);
  if (pvVar1 != (void *)0x0) {
    psVar2 = (sndBUFFER *)sndBUFFER();
    return psVar2;
  }
  return (sndBUFFER *)0x0;
}




/* from: drv:Snd_sys.cpp
   addr: 004A5BA0 */

sndBUFFER * __thiscall _sndSYSTEM::makeStrBuffer(_sndSYSTEM *this)

{
  void *pvVar1;
  sndBUFFER *psVar2;
  
  pvVar1 = operator_new(0x9e);
  if (pvVar1 != (void *)0x0) {
    psVar2 = (sndBUFFER *)sndSTR_BUFFER();
    return psVar2;
  }
  return (sndBUFFER *)0x0;
}




/* from: drv:Snd_sys.cpp
   addr: 004A5BC0 */

void __cdecl sndSYSTEM(void)

{
  undefined4 *in_ECX;
  int iVar1;
  undefined4 *puVar2;
  
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  *in_ECX = &_sndSYSTEM::_vftable_;
  in_ECX[0x47] = 0;
  in_ECX[0x48] = 0;
  in_ECX[0x49] = 0;
  in_ECX[0x4a] = 0;
  in_ECX[0x4b] = 0;
  in_ECX[0x4c] = 0;
  in_ECX[0x4d] = 0;
  *(undefined2 *)(in_ECX + 0x4e) = 0;
  puVar2 = (undefined4 *)((int)in_ECX + 0x13a);
  for (iVar1 = 0x18; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)((int)in_ECX + 0x19a) = 0;
  puVar2 = (undefined4 *)((int)in_ECX + 0x19e);
  for (iVar1 = 0x52d; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)((int)in_ECX + 0x1656) = 0;
  *(undefined4 *)((int)in_ECX + 0x165a) = 0;
  *(undefined4 *)((int)in_ECX + 0x165e) = 0;
  *(undefined4 *)((int)in_ECX + 0x1662) = 0;
  *(undefined4 *)((int)in_ECX + 0x1666) = 0;
  *(undefined4 *)((int)in_ECX + 0x166a) = 0;
  in_ECX[4] = 0;
  *(undefined4 *)((int)in_ECX + 0x1672) = 0;
  in_ECX[0x46] = 0;
  *(undefined4 *)((int)in_ECX + 0x166e) = 0;
  *(undefined4 *)((int)in_ECX + 0x1652) = 0;
  return;
}




/* from: drv:Snd_sys.cpp
   addr: 004A5C70
   addr: 004A5C70 */

void * __thiscall _sndSYSTEM::_vector_deleting_destructor_(_sndSYSTEM *this,uint param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(this + 0x124);
  *(undefined ***)this = &_vftable_;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)(this + 0x120);
  *(undefined4 *)(this + 0x124) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)(this + 0x11c);
  *(undefined4 *)(this + 0x120) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined4 *)(this + 0x11c) = 0;
  (**(code **)(*(int *)this + 0x44))();
  *(undefined ***)this = &sndSYSTEM::_vftable_;
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: drv:Snd_sys.cpp
   addr: 004A5CF0 */

int __thiscall _sndSYSTEM::Init(_sndSYSTEM *this)

{
  _sndSYSTEM *p_Var1;
  int *piVar2;
  int iVar3;
  _sndSYSTEM *p_Var4;
  _sndSYSTEM *p_Var5;
  undefined4 *puVar6;
  undefined4 auStack_24 [9];
  
  iVar3 = DirectSoundEnumerateA_8(_sndDSEnumProc,this);
  if (iVar3 == 0) {
    if (0 < *(int *)(this + 0x19a)) {
      p_Var4 = this + 0x19e;
      iVar3 = 0;
      do {
        if (*(int *)p_Var4 == 0) {
          iVar3 = DirectSoundCreate_12(this + iVar3 * 0x212 + 0x1a2,this + 0x11c,0);
          if (iVar3 == -0x7787fff6) {
            *(undefined4 *)(this + 8) = 1;
            return 1;
          }
          break;
        }
        iVar3 = iVar3 + 1;
        p_Var4 = p_Var4 + 0x212;
      } while (iVar3 < *(int *)(this + 0x19a));
    }
    p_Var4 = this + 0x11c;
    if (*(int *)(this + 0x11c) == 0) {
      iVar3 = DirectSoundCreate_12(0,p_Var4,0);
      if (iVar3 != 0) goto LAB_004a5e77;
    }
    iVar3 = (**(code **)(**(int **)p_Var4 + 0x18))(*(int **)p_Var4,_apHMainWindow,2);
    if (iVar3 == -0x7787fff6) {
      piVar2 = *(int **)p_Var4;
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))(piVar2);
      }
      *(undefined4 *)(this + 8) = 1;
      *(int *)p_Var4 = 0;
      return 1;
    }
    p_Var1 = this + 0x13a;
    p_Var5 = p_Var1;
    for (iVar3 = 0x18; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined4 *)p_Var5 = 0;
      p_Var5 = p_Var5 + 4;
    }
    *(undefined4 *)p_Var1 = 0x60;
    iVar3 = (**(code **)(**(int **)p_Var4 + 0x10))(*(int **)p_Var4,p_Var1);
    if (iVar3 == 0) {
      piVar2 = *(int **)p_Var4;
      puVar6 = auStack_24;
      for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
      p_Var4 = this + 0x120;
      auStack_24[0] = 0x24;
      auStack_24[1] = 0x91;
      iVar3 = (**(code **)(*piVar2 + 0xc))(piVar2,auStack_24,p_Var4,0);
      if (iVar3 == 0) {
        iVar3 = (**(code **)(**(int **)p_Var4 + 0x14))(*(int **)p_Var4,this + 0x128,0x12,0);
        if (iVar3 == 0) {
          iVar3 = (**(code **)(**(int **)p_Var4 + 0x30))(*(int **)p_Var4,0,0,1);
          if (iVar3 == 0) {
            iVar3 = (**(code **)**(undefined4 **)p_Var4)
                              (*(undefined4 **)p_Var4,&_IID_IDirectSound3DListener,this + 0x124);
            if (iVar3 == 0) {
              piVar2 = *(int **)(this + 0x124);
              iVar3 = (**(code **)(*piVar2 + 0x2c))(piVar2,0x3f800000,0);
              if (iVar3 == 0) {
                if (*(short *)(this + 0x12a) == 2) {
                  *(undefined2 *)(this + 0x12a) = 1;
                  *(ushort *)(this + 0x134) = *(ushort *)(this + 0x136) >> 3;
                  *(uint *)(this + 0x130) =
                       *(int *)(this + 300) * (uint)(*(ushort *)(this + 0x136) >> 3);
                }
                *(uint *)(this + 4) = *(uint *)(this + 4) | 1;
                *(undefined4 *)(this + 8) = 0;
                return 1;
              }
            }
          }
        }
      }
    }
  }
LAB_004a5e77:
  *(undefined4 *)(this + 8) = 2;
  (*(code *)**(undefined4 **)this)(1);
  return 0;
}




/* from: drv:Snd_sys.cpp
   addr: 004A5EF0 */

void __thiscall _sndSYSTEM::Term(_sndSYSTEM *this)

{
  int *piVar1;
  
  piVar1 = *(int **)(this + 0x124);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)(this + 0x120);
  *(undefined4 *)(this + 0x124) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)(this + 0x11c);
  *(undefined4 *)(this + 0x120) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined4 *)(this + 0x11c) = 0;
                    /* WARNING: Could not recover jumptable at 0x004a5f46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)this + 0x44))();
  return;
}




/* from: drv:Snd_sys.cpp
   addr: 004A5F50 */

void __thiscall _sndSYSTEM::SetFormat(_sndSYSTEM *this,sndFORMAT *param_1)

{
  int iVar1;
  
  *(undefined2 *)(this + 0x128) = 1;
  if (param_1 == (sndFORMAT *)0x0) {
    *(undefined2 *)(this + 0x12a) = 2;
    *(undefined4 *)(this + 300) = 0x5622;
    *(undefined2 *)(this + 0x136) = 0x10;
    *(undefined2 *)(this + 0x134) = 4;
    *(undefined4 *)(this + 0x130) = 0x15888;
  }
  else {
    *(undefined4 *)(this + 0x130) = *(undefined4 *)(param_1 + 6);
    *(undefined2 *)(this + 0x134) = *(undefined2 *)(param_1 + 10);
    *(undefined2 *)(this + 0x12a) = *(undefined2 *)param_1;
    *(undefined4 *)(this + 300) = *(undefined4 *)(param_1 + 2);
    *(undefined2 *)(this + 0x136) = *(undefined2 *)(param_1 + 0xc);
  }
  *(undefined2 *)(this + 0x138) = 0;
  iVar1 = (**(code **)(**(int **)(this + 0x120) + 0x38))(*(int **)(this + 0x120),this + 0x128);
  if ((iVar1 == 0) && (*(short *)(this + 0x12a) == 2)) {
    *(undefined2 *)(this + 0x12a) = 1;
    *(ushort *)(this + 0x134) = *(ushort *)(this + 0x136) >> 3;
    *(uint *)(this + 0x130) = (uint)(*(ushort *)(this + 0x136) >> 3) * *(int *)(this + 300);
  }
  return;
}




/* WARNING: Removing unreachable block (ram,0x004a6046) */
/* from: drv:Snd_sys.cpp
   addr: 004A6020 */

void __thiscall _sndSYSTEM::CheckPrimaryLost(_sndSYSTEM *this)

{
  if (((byte)this[4] & 1) != 0) {
    (**(code **)(**(int **)(this + 0x120) + 0x24))(*(int **)(this + 0x120));
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: drv:Snd_sys.cpp
   addr: 004A6060 */

void __thiscall _sndSYSTEM::SetPrimaryVolume(_sndSYSTEM *this,float param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (((byte)this[4] & 1) != 0) {
    piVar1 = *(int **)(this + 0x120);
    iVar2 = *piVar1;
    uVar3 = ftol();
    (**(code **)(iVar2 + 0x3c))(piVar1,uVar3);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: drv:Snd_sys.cpp
   addr: 004A60A0 */

float __thiscall _sndSYSTEM::GetPrimaryVolume(_sndSYSTEM *this)

{
  int iVar1;
  int *piVar2;
  _sndSYSTEM *local_4;
  
  if (((byte)this[4] & 1) == 0) {
    return ___real_00000000;
  }
  piVar2 = *(int **)(this + 0x120);
  local_4 = this;
  iVar1 = (**(code **)(*piVar2 + 0x18))(piVar2,&local_4);
  if (iVar1 != 0) {
    return ___real_00000000;
  }
  return (float)(int)piVar2 * ___real_3c23d70a;
}




/* from: drv:Snd_sys.cpp
   addr: 004A60E0 */

int __thiscall _sndSYSTEM::GetNmbHwBuf(_sndSYSTEM *this,int *param_1,int *param_2)

{
  _sndSYSTEM *p_Var1;
  int iVar2;
  undefined4 *unaff_ESI;
  _sndSYSTEM *p_Var3;
  undefined4 *unaff_retaddr;
  
  p_Var1 = this + 0x13a;
  p_Var3 = p_Var1;
  for (iVar2 = 0x18; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)p_Var3 = 0;
    p_Var3 = p_Var3 + 4;
  }
  *(undefined4 *)p_Var1 = 0x60;
  iVar2 = (**(code **)(**(int **)(this + 0x11c) + 0x10))(*(int **)(this + 0x11c),p_Var1);
  if (iVar2 != 0) {
    return 0;
  }
  if (unaff_ESI != (undefined4 *)0x0) {
    *unaff_ESI = *(undefined4 *)(this + 0x166);
  }
  if (unaff_retaddr != (undefined4 *)0x0) {
    *unaff_retaddr = *(undefined4 *)(this + 0x172);
  }
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: drv:Snd_sys.cpp
   addr: 004A6140 */

void __thiscall _sndSYSTEM::SetDopplerShift(_sndSYSTEM *this,float param_1)

{
  int *piVar1;
  
  if ((((byte)this[4] & 1) != 0) && (piVar1 = *(int **)(this + 0x124), piVar1 != (int *)0x0)) {
    (**(code **)(*piVar1 + 0x30))(piVar1,param_1 * ___real_41200000,0);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: drv:Snd_sys.cpp
   addr: 004A6170 */

void __thiscall _sndSYSTEM::SetAttenuationPow(_sndSYSTEM *this,float param_1)

{
  int *piVar1;
  
  if ((((byte)this[4] & 1) != 0) && (piVar1 = *(int **)(this + 0x124), piVar1 != (int *)0x0)) {
    (**(code **)(*piVar1 + 0x3c))(piVar1,param_1 * ___real_41200000,0);
  }
  return;
}




/* from: drv:Snd_sys.cpp
   addr: 004A61A0 */

void __thiscall _sndSYSTEM::CommitSettings(_sndSYSTEM *this)

{
  int *piVar1;
  
  if ((((byte)this[4] & 1) != 0) && (piVar1 = *(int **)(this + 0x124), piVar1 != (int *)0x0)) {
    (**(code **)(*piVar1 + 0x44))(piVar1);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: drv:Snd_sys.cpp
   addr: 004A61C0 */

void __thiscall
_sndSYSTEM::SetUpListener
          (_sndSYSTEM *this,m3dV *param_1,m3dV *param_2,m3dV *param_3,m3dV *param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  int unaff_EBP;
  undefined4 *puVar3;
  undefined4 local_40 [6];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  if (((byte)this[4] & 1) == 0) {
    return;
  }
  piVar1 = *(int **)(this + 0x124);
  if (piVar1 == (int *)0x0) {
    return;
  }
  if (param_1 == (m3dV *)0x0) {
    return;
  }
  if (param_2 == (m3dV *)0x0) {
    return;
  }
  if (param_3 == (m3dV *)0x0) {
    return;
  }
  puVar3 = local_40;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  local_40[0] = 0x40;
  iVar2 = (**(code **)(*piVar1 + 0xc))(piVar1,local_40);
  if (iVar2 != 0) {
    return;
  }
  local_40[1] = *(undefined4 *)(param_1 + 8);
  local_40[0] = *(undefined4 *)(param_1 + 4);
  if (param_2 == (m3dV *)0x0) {
    local_40[2] = 0x3d4ccccd;
    local_40[3] = 0x3d4ccccd;
  }
  else {
    if (___real_3d4ccccd <= *(float *)param_2) {
      local_40[2] = *(undefined4 *)param_2;
    }
    else {
      local_40[2] = 0x3d4ccccd;
    }
    if (___real_3d4ccccd <= *(float *)(param_2 + 4)) {
      local_40[3] = *(undefined4 *)(param_2 + 4);
    }
    else {
      local_40[3] = 0x3d4ccccd;
    }
    if (___real_3d4ccccd <= *(float *)(param_2 + 8)) {
      local_40[4] = *(undefined4 *)(param_2 + 8);
      goto LAB_004a62c0;
    }
  }
  local_40[4] = 0x3d4ccccd;
LAB_004a62c0:
  local_40[5] = *(undefined4 *)param_2;
  uStack_28 = *(undefined4 *)(param_2 + 4);
  uStack_24 = *(undefined4 *)(param_2 + 8);
  uStack_20 = *(undefined4 *)param_3;
  uStack_1c = *(undefined4 *)(param_3 + 4);
  uStack_18 = *(undefined4 *)(param_3 + 8);
  piVar1 = *(int **)(unaff_EBP + 0x124);
  if (param_3 == (m3dV *)0x0) {
    (**(code **)(*piVar1 + 0x28))(piVar1,&stack0xffffffb8,1);
    return;
  }
  (**(code **)(*piVar1 + 0x28))(piVar1,&stack0xffffffb8,0);
  return;
}




/* from: drv:Snd_sys.cpp
   addr: 004A6330 */

int _sndDSEnumProc(_GUID *param_1,char *param_2,char *param_3,void *param_4)

{
  ulong *puVar1;
  char cVar2;
  char *pcVar3;
  
  if (param_1 == (_GUID *)0x0) {
    *(undefined4 *)((int)param_4 + *(int *)((int)param_4 + 0x19a) * 0x212 + 0x19e) = 1;
  }
  else {
    puVar1 = (ulong *)((int)param_4 + *(int *)((int)param_4 + 0x19a) * 0x212 + 0x1a2);
    *puVar1 = param_1->Data1;
    puVar1[1] = *(ulong *)&param_1->Data2;
    puVar1[2] = *(ulong *)param_1->Data4;
    puVar1[3] = *(ulong *)(param_1->Data4 + 4);
    *(undefined4 *)((int)param_4 + *(int *)((int)param_4 + 0x19a) * 0x212 + 0x19e) = 0;
  }
  pcVar3 = (char *)((int)param_4 + *(int *)((int)param_4 + 0x19a) * 0x212 + 0x1b2);
  do {
    cVar2 = *param_3;
    param_3 = param_3 + 1;
    *pcVar3 = cVar2;
    pcVar3 = pcVar3 + 1;
  } while (cVar2 != '\0');
  pcVar3 = (char *)((int)param_4 + *(int *)((int)param_4 + 0x19a) * 0x212 + 0x2b1);
  do {
    cVar2 = *param_2;
    param_2 = param_2 + 1;
    *pcVar3 = cVar2;
    pcVar3 = pcVar3 + 1;
  } while (cVar2 != '\0');
  *(int *)((int)param_4 + 0x19a) = *(int *)((int)param_4 + 0x19a) + 1;
  return 1;
}




/* from: drv:Snd_sys.cpp
   addr: 004A6450 */

int __thiscall sndSYSTEM::InitMusic(sndSYSTEM *this,char *param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = 0x14 - (int)param_1;
  do {
    cVar1 = *param_1;
    param_1[(int)(this + iVar2)] = cVar1;
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  return 1;
}




/* from: drv:Snd_sys.cpp
   addr: 004A6490
   addr: 004A6490 */

void * __thiscall sndSYSTEM::_vector_deleting_destructor_(sndSYSTEM *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

