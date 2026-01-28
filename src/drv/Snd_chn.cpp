
/* from: drv:Snd_chn.cpp
   addr: 004A1D20 */

int __thiscall sncSOUND_DESCR::LinkData(sncSOUND_DESCR *this,char *param_1,int param_2)

{
  snmSOUND_DATA *psVar1;
  
  if (param_1 != (char *)0x0) {
    apNAME::SetName((apNAME *)(this + 4),param_1);
    *(int *)(this + 0x5c) = param_2;
  }
  if (snmManager == (snmMANAGER *)0x0) {
    *(undefined4 *)(this + 0x58) = 0;
  }
  else {
    psVar1 = snmMANAGER::Add(snmManager,(char *)(this + 4),*(int *)(this + 0x5c));
    *(snmSOUND_DATA **)(this + 0x58) = psVar1;
    if (psVar1 == (snmSOUND_DATA *)0x0) {
      return 0;
    }
  }
  return 1;
}




/* from: drv:Snd_chn.cpp
   addr: 004A1D70 */

void __thiscall sncSOUND_DESCR::UnlinkData(sncSOUND_DESCR *this)

{
  if (*(snmSOUND_DATA **)(this + 0x58) != (snmSOUND_DATA *)0x0) {
    snmMANAGER::Del(snmManager,*(snmSOUND_DATA **)(this + 0x58));
  }
  apNAME::SetName((apNAME *)(this + 4),s_);
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  return;
}




/* from: drv:Snd_chn.cpp
   addr: 004A1DB0 */

int __thiscall
sncSOUND_DESCR::ReadParams(sncSOUND_DESCR *this,psSHEET *param_1,char *param_2,char *param_3)

{
  int iVar1;
  snmSOUND_DATA *psVar2;
  int local_84;
  char local_80 [64];
  char local_40 [64];
  
  sprintf(local_80,s__sname,param_3);
  iVar1 = psSHEET::GetStr(param_1,param_2,local_80,local_40,0x40);
  if (iVar1 != 0) {
    sprintf(local_80,s__svolume,param_3);
    psSHEET::GetFloat(param_1,param_2,local_80,(float *)(this + 0x48));
    sprintf(local_80,s__sdelay,param_3);
    psSHEET::GetInt(param_1,param_2,local_80,(int *)(this + 0x4c));
    sprintf(local_80,s__stime,param_3);
    psSHEET::GetInt(param_1,param_2,local_80,(int *)(this + 0x54));
    sprintf(local_80,s__sisInfLoop,param_3);
    iVar1 = psSHEET::GetBool(param_1,param_2,local_80,&local_84);
    if ((iVar1 != 0) && (local_84 != 0)) {
      *(uint *)(this + 0x44) = *(uint *)(this + 0x44) | 2;
    }
    sprintf(local_80,s__sisRandDelay,param_3);
    iVar1 = psSHEET::GetBool(param_1,param_2,local_80,&local_84);
    if ((iVar1 != 0) && (local_84 != 0)) {
      *(uint *)(this + 0x44) = *(uint *)(this + 0x44) | 0x400;
    }
    sprintf(local_80,s__sisSkipSame,param_3);
    iVar1 = psSHEET::GetBool(param_1,param_2,local_80,&local_84);
    if ((iVar1 != 0) && (local_84 != 0)) {
      *(uint *)(this + 0x44) = *(uint *)(this + 0x44) | 0x40000;
    }
    sprintf(local_80,s__sisStreaming,param_3);
    iVar1 = psSHEET::GetBool(param_1,param_2,local_80,&local_84);
    if ((iVar1 != 0) && (local_84 != 0)) {
      *(uint *)(this + 0x5c) = *(uint *)(this + 0x5c) | 1;
    }
    sprintf(local_80,s__sisAutoLoad,param_3);
    iVar1 = psSHEET::GetBool(param_1,param_2,local_80,&local_84);
    if ((iVar1 != 0) && (local_84 != 0)) {
      *(uint *)(this + 0x5c) = *(uint *)(this + 0x5c) | 6;
    }
    iVar1 = *(int *)(this + 0x5c);
    apNAME::SetName((apNAME *)(this + 4),local_40);
    *(int *)(this + 0x5c) = iVar1;
    if (snmManager == (snmMANAGER *)0x0) {
      *(undefined4 *)(this + 0x58) = 0;
      return 1;
    }
    psVar2 = snmMANAGER::Add(snmManager,(char *)(this + 4),iVar1);
    *(snmSOUND_DATA **)(this + 0x58) = psVar2;
    if (psVar2 != (snmSOUND_DATA *)0x0) {
      return 1;
    }
  }
  return 0;
}




/* from: drv:Snd_chn.cpp
   addr: 004A1FF0 */

int __thiscall
sncSOUND_DESCR_3D::ReadParams(sncSOUND_DESCR_3D *this,psSHEET *param_1,char *param_2,char *param_3)

{
  char *pcVar1;
  int iVar2;
  char local_40 [64];
  
  pcVar1 = param_3;
  iVar2 = sncSOUND_DESCR::ReadParams((sncSOUND_DESCR *)this,param_1,param_2,param_3);
  if (iVar2 == 0) {
    return 0;
  }
  sprintf(local_40,s__sminDist,pcVar1);
  psSHEET::GetFloat(param_1,param_2,local_40,(float *)(this + 0x60));
  sprintf(local_40,s__smaxDist,pcVar1);
  psSHEET::GetFloat(param_1,param_2,local_40,(float *)(this + 100));
  sprintf(local_40,s__sisDisable3D,pcVar1);
  iVar2 = psSHEET::GetBool(param_1,param_2,local_40,(int *)&param_3);
  if ((iVar2 != 0) && (param_3 != (char *)0x0)) {
    *(uint *)(this + 0x44) = *(uint *)(this + 0x44) | 1;
  }
  return 1;
}




/* from: drv:Snd_chn.cpp
   addr: 004A20B0 */

void __thiscall sncCHANNEL::sncCHANNEL(sncCHANNEL *this)

{
  *(undefined4 *)(this + 4) = 0;
  this[8] = (sncCHANNEL)0x0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 100) = 0;
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined ***)this = &_vftable_;
  DAT_00611fc8 = DAT_00611fc8 + 1;
  return;
}




/* from: drv:Snd_chn.cpp
   addr: 004A20F0 */

void __thiscall sncCHANNEL::~sncCHANNEL(sncCHANNEL *this)

{
  int iVar1;
  
  *(undefined ***)this = &_vftable_;
  iVar1 = (*(code *)PTR_IsPlay_005db0cc)(0);
  if (iVar1 != 0) {
    if (((((byte)this[4] & 2) != 0) || ((*(uint *)(*(int *)(this + 0x6c) + 0x44) & 0x20000) != 0))
       && (*(int **)(this + 0x68) != (int *)0x0)) {
      iVar1 = (**(code **)(**(int **)(this + 0x68) + 0x34))();
      if (iVar1 != 0) {
        if ((*(uint *)(*(int *)(this + 0x6c) + 0x44) & 0x10000000) != 0) {
          (**(code **)(**(int **)(this + 0x68) + 0x38))();
          (**(code **)(**(int **)(this + 0x68) + 0x30))(0);
        }
        snmSOUND_DATA::AutoDropBuffer
                  (*(snmSOUND_DATA **)(*(int *)(this + 0x6c) + 0x58),*(sndBUFFER **)(this + 0x68));
        goto LAB_004a2172;
      }
    }
    iVar1 = (**(code **)(*(int *)this + 8))(0);
    if (iVar1 != 0) {
      (**(code **)(*(int *)this + 0x1c))(0);
      *(undefined4 *)(this + 0x6c) = 0;
      *(undefined4 *)(this + 0x70) = 0;
    }
  }
LAB_004a2172:
  iVar1 = 0;
  if (0 < *(int *)(this + 0x48)) {
    do {
      operator_delete(*(void **)(*(int *)(this + 0x4c) + iVar1 * 4));
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(this + 0x48));
  }
  apFree(*(void **)(this + 0x4c));
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  DAT_00611fc8 = DAT_00611fc8 + -1;
  return;
}




/* from: drv:Snd_chn.cpp
   addr: 004A21C0 */

int __thiscall sncCHANNEL::AddDescr(sncCHANNEL *this,sncSOUND_DESCR *param_1)

{
  int iVar1;
  void *pvVar2;
  
  pvVar2 = apRealloc(*(void **)(this + 0x4c),*(int *)(this + 0x48) * 4 + 4);
  *(void **)(this + 0x4c) = pvVar2;
  if (pvVar2 == (void *)0x0) {
    return -1;
  }
  *(sncSOUND_DESCR **)((int)pvVar2 + *(int *)(this + 0x48) * 4) = param_1;
  iVar1 = *(int *)(this + 0x48);
  *(int *)(this + 0x48) = iVar1 + 1;
  return iVar1;
}




/* from: drv:Snd_chn.cpp
   addr: 004A2210 */

void __thiscall sncCHANNEL::Mute(sncCHANNEL *this,int param_1,int param_2)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(this + 4);
  bVar2 = (byte)param_2;
  if ((param_1 == 0) || ((uVar1 & 0x1000000 << (bVar2 & 0x1f)) != 0)) {
    uVar3 = *(uint *)(this + 4) & ~(0x100000 << (bVar2 & 0x1f));
  }
  else {
    uVar3 = *(uint *)(this + 4) | 0x100000 << (bVar2 & 0x1f);
  }
  *(uint *)(this + 4) = uVar3;
  if ((uVar1 & 0xf00000) == 0) {
    if ((uVar3 & 0xf00000) == 0) {
      return;
    }
  }
  else if ((uVar3 & 0xf00000) != 0) {
    return;
  }
  (**(code **)(*(int *)this + 0x10))(0,0,0);
  return;
}




/* from: drv:Snd_chn.cpp
   addr: 004A2280 */

void __thiscall sncCHANNEL::EnableMute(sncCHANNEL *this,int param_1,int param_2)

{
  if (param_1 != 0) {
    *(uint *)(this + 4) = *(uint *)(this + 4) & ~(0x1000000 << ((byte)param_2 & 0x1f));
    return;
  }
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x1000000 << ((byte)param_2 & 0x1f);
  return;
}




/* from: drv:Snd_chn.cpp
   addr: 004A22B0 */

void __thiscall
sncCHANNEL::ReadParams(sncCHANNEL *this,psSHEET *param_1,char *param_2,char *param_3)

{
  char *pcVar1;
  int iVar2;
  char local_40 [64];
  
  pcVar1 = param_3;
  sprintf(local_40,s__svolume,param_3);
  psSHEET::GetFloat(param_1,param_2,local_40,(float *)(this + 0x50));
  sprintf(local_40,s__sisDisable3D,pcVar1);
  iVar2 = psSHEET::GetBool(param_1,param_2,local_40,(int *)&param_3);
  if ((iVar2 != 0) && (param_3 != (char *)0x0)) {
    *(uint *)(this + 4) = *(uint *)(this + 4) | 1;
  }
  return;
}




/* from: drv:Snd_chn.cpp
   addr: 004A2330 */

void __thiscall sncCHANNEL::Play(sncCHANNEL *this,int param_1,int param_2)

{
  if (this != (sncCHANNEL *)0x0) {
    if (param_1 == -1) {
                    /* WARNING: Could not recover jumptable at 0x004a2351. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(int *)this + 4))();
      return;
    }
    if (param_2 != -1) {
      (**(code **)(*(int *)this + 4))
                (*(undefined4 *)(*(int *)(this + 0x4c) + param_1 * 4),
                 *(undefined4 *)(*(int *)(this + 0x4c) + param_2 * 4));
      return;
    }
    (**(code **)(*(int *)this + 4))(*(undefined4 *)(*(int *)(this + 0x4c) + param_1 * 4),0);
  }
  return;
}




/* from: drv:Snd_chn.cpp
   addr: 004A2390 */

void __thiscall sncCHANNEL::Play(sncCHANNEL *this,sncSOUND_DESCR *param_1,sncSOUND_DESCR *param_2)

{
  sncSOUND_DESCR *psVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  if (this == (sncCHANNEL *)0x0) {
    return;
  }
  if (param_1 != (sncSOUND_DESCR *)0x0) {
    psVar1 = *(sncSOUND_DESCR **)(this + 0x6c);
    if (psVar1 == (sncSOUND_DESCR *)0x0) {
LAB_004a23bc:
      if ((*(uint *)(param_1 + 0x44) & 0x200000) != 0) {
        return;
      }
    }
    else {
      if ((*(uint *)(param_1 + 0x44) & 0x10000) != 0) {
        return;
      }
      if (psVar1 == (sncSOUND_DESCR *)0x0) goto LAB_004a23bc;
    }
    if ((((*(uint *)(param_1 + 0x44) & 0x40000) != 0) && (psVar1 != (sncSOUND_DESCR *)0x0)) &&
       (psVar1 == param_1)) {
      return;
    }
  }
  iVar3 = *(int *)(this + 0x6c);
  if (iVar3 != 0) {
    if ((((*(uint *)(iVar3 + 0x44) & 0x80000) != 0) && (param_1 != (sncSOUND_DESCR *)0x0)) &&
       ((*(uint *)(param_1 + 0x44) & 0x100000) == 0)) {
      *(sncSOUND_DESCR **)(this + 0x70) = param_1;
      uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x58) + 0x178);
      *(undefined4 *)(this + 0x5c) = *(undefined4 *)(this + 100);
      *(undefined4 *)(this + 0x58) = uVar2;
      return;
    }
    (**(code **)(*(int *)this + 0xc))();
  }
  if ((param_1 == (sncSOUND_DESCR *)0x0) ||
     (*(snmSOUND_DATA **)(param_1 + 0x58) == (snmSOUND_DATA *)0x0)) {
    (**(code **)(*(int *)this + 0xc))();
    return;
  }
  iVar3 = snmSOUND_DATA::Validate(*(snmSOUND_DATA **)(param_1 + 0x58));
  if (iVar3 == 0) {
    return;
  }
  *(sncSOUND_DESCR **)(this + 0x70) = param_2;
  iVar3 = *(int *)(param_1 + 0x50);
  if ((*(uint *)(param_1 + 0x44) & 0x200) != 0) {
    m3dRND_GEN::RndFloat(&rndGen);
    iVar3 = ftol();
  }
  iVar5 = *(int *)(param_1 + 0x4c);
  *(int *)(this + 0x60) = iVar5;
  if ((*(uint *)(param_1 + 0x44) & 0x400) != 0) {
    m3dRND_GEN::RndFloat(&rndGen);
    iVar4 = ftol();
    *(int *)(this + 0x60) = iVar5 / 2 - iVar4;
  }
  *(sncSOUND_DESCR **)(this + 0x6c) = param_1;
  iVar5 = *(int *)(param_1 + 0x54);
  if (iVar5 == 0) {
    iVar5 = *(int *)(*(int *)(param_1 + 0x58) + 0x178) + *(int *)(this + 0x60);
    *(int *)(this + 0x58) = iVar5;
    if (iVar3 == 0) {
      if (((byte)param_1[0x44] & 2) != 0) {
        *(undefined4 *)(this + 0x58) = 0x7fffffff;
      }
      goto LAB_004a24cd;
    }
    iVar5 = iVar5 * iVar3;
  }
  *(int *)(this + 0x58) = iVar5;
LAB_004a24cd:
  *(undefined4 *)(this + 100) = 0;
  *(undefined4 *)(this + 0x5c) = 0;
  if (((((byte)param_1[0x44] & 2) == 0) && (*(int *)(param_1 + 0x54) == 0)) &&
     ((*(int *)(param_1 + 0x4c) != 0 || (*(int *)(param_1 + 0x50) == 0)))) {
    uVar6 = *(uint *)(param_1 + 0x44) & 0xefffffff;
  }
  else {
    uVar6 = *(uint *)(param_1 + 0x44) | 0x10000000;
  }
  *(uint *)(param_1 + 0x44) = uVar6;
  if (*(int *)(this + 0x58) < 1) {
    return;
  }
  (**(code **)(*(int *)this + 0x10))(0,0,0);
  return;
}




/* from: drv:Snd_chn.cpp
   addr: 004A2530 */

void __thiscall sncCHANNEL::Stop(sncCHANNEL *this)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)this + 8))(0);
  if (iVar1 != 0) {
    (**(code **)(*(int *)this + 0x1c))(0);
    *(undefined4 *)(this + 0x6c) = 0;
    *(undefined4 *)(this + 0x70) = 0;
  }
  return;
}




/* from: drv:Snd_chn.cpp
   addr: 004A2560 */

int __thiscall sncCHANNEL::IsPlay(sncCHANNEL *this,int param_1)

{
  int iVar1;
  
  if (param_1 == -1) {
                    /* WARNING: Could not recover jumptable at 0x004a2573. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (**(code **)(*(int *)this + 8))();
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x004a2584. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)(*(int *)this + 8))();
  return iVar1;
}




/* from: drv:Snd_chn.cpp
   addr: 004A2590 */

int __thiscall sncCHANNEL::IsPlay(sncCHANNEL *this,sncSOUND_DESCR *param_1)

{
  sncSOUND_DESCR *psVar1;
  
  psVar1 = *(sncSOUND_DESCR **)(this + 0x6c);
  if (psVar1 == (sncSOUND_DESCR *)0x0) {
    return (int)psVar1;
  }
  if (param_1 != (sncSOUND_DESCR *)0x0) {
    return (uint)(psVar1 == param_1);
  }
  return 1;
}




/* from: drv:Snd_chn.cpp
   addr: 004A25C0 */

void __thiscall sncCHANNEL::Update(sncCHANNEL *this,int param_1,m3dV *param_2,m3dV *param_3)

{
  int iVar1;
  int iVar2;
  int unaff_EDI;
  undefined1 **ppuVar3;
  undefined1 *puStack_14;
  undefined1 auStack_8 [4];
  undefined1 local_4 [4];
  
  if (*(int *)(this + 0x6c) != 0) {
    if ((*(uint *)(this + 4) & 0xf00000) != 0) {
      puStack_14 = (undefined1 *)0x0;
      (**(code **)(*(int *)this + 0x1c))();
      return;
    }
    puStack_14 = local_4;
    iVar1 = (**(code **)(*(int *)this + 0x24))(param_1);
    if (iVar1 == 0) {
      iVar1 = *(int *)(this + 0x70);
      (**(code **)(*(int *)this + 0xc))();
      if (iVar1 != 0) {
        (**(code **)(*(int *)this + 4))(iVar1,0);
        return;
      }
    }
    else {
      iVar1 = (**(code **)(*(int *)this + 0x28))();
      iVar2 = (**(code **)(*(int *)this + 0x1c))(iVar1);
      if ((iVar2 != 0) && (iVar1 != 0)) {
        (**(code **)(*(int *)this + 0x30))(0);
        if (*(int *)(this + 0x68) != 0) {
          ppuVar3 = &puStack_14;
          (**(code **)(*(int *)this + 0x2c))(auStack_8,ppuVar3);
          (**(code **)(**(int **)(this + 0x68) + 0x1c))(unaff_EDI);
          (**(code **)(**(int **)(this + 0x68) + 0x50))(ppuVar3);
        }
      }
      if ((unaff_EDI != 0) && (iVar1 != 0)) {
        (**(code **)(*(int *)this + 0x20))(1);
        return;
      }
      (**(code **)(*(int *)this + 0x20))(0);
    }
  }
  return;
}




/* from: drv:Snd_chn.cpp
   addr: 004A26D0 */

int __thiscall sncCHANNEL::ValidateBuffer(sncCHANNEL *this,int param_1)

{
  sndBUFFER *psVar1;
  undefined4 unaff_ESI;
  
  psVar1 = *(sndBUFFER **)(this + 0x68);
  if (param_1 == 0) {
    if (psVar1 != (sndBUFFER *)0x0) {
      if (*(snmSOUND_DATA **)(*(int *)(this + 0x6c) + 0x58) != (snmSOUND_DATA *)0x0) {
        snmSOUND_DATA::DropBuffer(*(snmSOUND_DATA **)(*(int *)(this + 0x6c) + 0x58),psVar1);
      }
      *(undefined4 *)(this + 0x68) = 0;
    }
  }
  else if (psVar1 == (sndBUFFER *)0x0) {
    psVar1 = snmSOUND_DATA::GetBuffer(*(snmSOUND_DATA **)(*(int *)(this + 0x6c) + 0x58));
    *(sndBUFFER **)(this + 0x68) = psVar1;
    if (psVar1 == (sndBUFFER *)0x0) {
      return 0;
    }
    (**(code **)(*(int *)this + 0x34))(1);
    if (*(int *)(this + 0x68) != 0) {
      (**(code **)(*(int *)this + 0x2c))(&stack0x00000000,&stack0xfffffff8);
      (**(code **)(**(int **)(this + 0x68) + 0x1c))(unaff_ESI);
      (**(code **)(**(int **)(this + 0x68) + 0x50))(register0x00000010);
    }
    (**(code **)(*(int *)this + 0x30))(1);
    return 1;
  }
  return 1;
}




/* from: drv:Snd_chn.cpp
   addr: 004A2780 */

void __thiscall sncCHANNEL::ValidatePlay(sncCHANNEL *this,int param_1)

{
  bool bVar1;
  int iVar2;
  
  if (*(int **)(this + 0x68) != (int *)0x0) {
    if ((param_1 == 0) || ((*(uint *)(this + 4) & 0xf00000) != 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    iVar2 = (**(code **)(**(int **)(this + 0x68) + 0x34))();
    if (bVar1) {
      if (iVar2 == 0) {
        (**(code **)(**(int **)(this + 0x68) + 0x24))(*(undefined4 *)(this + 100));
        if ((*(uint *)(*(int *)(this + 0x6c) + 0x44) & 0x10000000) != 0) {
                    /* WARNING: Could not recover jumptable at 0x004a27da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(**(int **)(this + 0x68) + 0x30))();
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x004a27e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(int **)(this + 0x68) + 0x30))();
        return;
      }
    }
    else if (iVar2 != 0) {
      (**(code **)(**(int **)(this + 0x68) + 0x38))();
    }
  }
  return;
}




/* from: drv:Snd_chn.cpp
   addr: 004A2800 */

int __thiscall sncCHANNEL::AdvanceTime(sncCHANNEL *this,int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x5c) + param_1;
  *(int *)(this + 0x5c) = iVar3;
  if (*(int *)(this + 0x58) - iVar3 < 0) {
    *param_2 = 0;
    return 0;
  }
  iVar2 = *(int *)(this + 0x6c);
  iVar1 = *(int *)(*(int *)(iVar2 + 0x58) + 0x178) + *(int *)(this + 0x60);
  if (iVar1 == 0) {
    return 0;
  }
  iVar3 = iVar3 % iVar1;
  *(int *)(this + 100) = iVar3;
  if ((*(uint *)(iVar2 + 0x44) & 0x400000) == 0) {
    if (*(int *)(*(int *)(iVar2 + 0x58) + 0x178) < iVar3) {
      *param_2 = 0;
      *(undefined4 *)(this + 100) = *(undefined4 *)(*(int *)(*(int *)(this + 0x6c) + 0x58) + 0x178);
      return 1;
    }
    *param_2 = 1;
    return 1;
  }
  if (iVar3 < *(int *)(this + 0x60)) {
    *param_2 = 0;
    *(undefined4 *)(this + 100) = 0;
    return 1;
  }
  *param_2 = 1;
  *(int *)(this + 100) = *(int *)(this + 100) - *(int *)(this + 0x60);
  return 1;
}




/* from: drv:Snd_chn.cpp
   addr: 004A28E0 */

void __thiscall sncCHANNEL::Update3D(sncCHANNEL *this,int param_1)

{
  if (*(int **)(this + 0x68) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x68) + 0x68))(0,param_1);
  }
  return;
}




/* from: drv:Snd_chn.cpp
   addr: 004A2900 */

void __thiscall sncCHANNEL::CalcVolumePan(sncCHANNEL *this,float *param_1,float *param_2)

{
  *param_2 = 0.0;
  *param_1 = *(float *)(*(int *)(this + 0x6c) + 0x48) + *(float *)(this + 0x54) +
             *(float *)(this + 0x50);
  return;
}




/* from: drv:Snd_chn.cpp
   addr: 004A2920 */

void __thiscall sncCHANNEL_3D::Update(sncCHANNEL_3D *this,int param_1,m3dV *param_2,m3dV *param_3)

{
  if (param_2 != (m3dV *)0x0) {
    *(undefined4 *)(this + 0x74) = *(undefined4 *)param_2;
    *(undefined4 *)(this + 0x78) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)(this + 0x7c) = *(undefined4 *)(param_2 + 8);
    *(uint *)(this + 4) = *(uint *)(this + 4) | 0x20000000;
  }
  sncCHANNEL::Update((sncCHANNEL *)this,param_1,(m3dV *)0x0,(m3dV *)0x0);
  return;
}




/* from: drv:Snd_chn.cpp
   addr: 004A2960 */

void __thiscall sncCHANNEL_3D::Update3D(sncCHANNEL_3D *this,int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(this + 0x68);
  if (piVar1 != (int *)0x0) {
    if ((((byte)this[4] & 1) == 0) &&
       ((*(int *)(this + 0x6c) == 0 || ((*(byte *)(*(int *)(this + 0x6c) + 0x44) & 1) == 0)))) {
      (**(code **)(*piVar1 + 0x68))(1,param_1);
      return;
    }
    (**(code **)(*piVar1 + 0x68))(0,param_1);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: drv:Snd_chn.cpp
   addr: 004A29B0 */

void __thiscall
sncCHANNEL_CONE::SetParameters(sncCHANNEL_CONE *this,m3dV *param_1,m3dV *param_2,m3dV *param_3)

{
  undefined4 uVar1;
  
  *(undefined4 *)(this + 0x98) = *(undefined4 *)param_1;
  *(undefined4 *)(this + 0x9c) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 0xa0) = *(undefined4 *)(param_1 + 8);
  if (param_2 == (m3dV *)0x0) {
    *(undefined4 *)(this + 0xa4) = _m3dVZero;
    *(undefined4 *)(this + 0xa8) = DAT_00963740;
    uVar1 = DAT_00963744;
  }
  else {
    *(undefined4 *)(this + 0xa4) = *(undefined4 *)param_2;
    *(undefined4 *)(this + 0xa8) = *(undefined4 *)(param_2 + 4);
    uVar1 = *(undefined4 *)(param_2 + 8);
  }
  *(undefined4 *)(this + 0xac) = uVar1;
  if (param_3 != (m3dV *)0x0) {
    *(undefined4 *)(this + 0xb0) = *(undefined4 *)param_3;
    *(undefined4 *)(this + 0xb4) = *(undefined4 *)(param_3 + 4);
    *(undefined4 *)(this + 0xb8) = *(undefined4 *)(param_3 + 8);
    *(uint *)(this + 4) = *(uint *)(this + 4) | 0x40000000;
    return;
  }
  *(undefined4 *)(this + 0xb0) = _m3dVUnitZ;
  *(undefined4 *)(this + 0xb4) = DAT_005f99a0;
  *(undefined4 *)(this + 0xb8) = DAT_005f99a4;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x40000000;
  return;
}




/* from: drv:Snd_chn.cpp
   addr: 004A2A60 */

void __thiscall
sncCHANNEL_CONE::ReadParams(sncCHANNEL_CONE *this,psSHEET *param_1,char *param_2,char *param_3)

{
  int iVar1;
  int local_84;
  char local_80 [64];
  char local_40 [64];
  
  sprintf(local_80,s__svolume,param_3);
  psSHEET::GetFloat(param_1,param_2,local_80,(float *)(this + 0x50));
  sprintf(local_80,s__sisDisable3D,param_3);
  iVar1 = psSHEET::GetBool(param_1,param_2,local_80,&local_84);
  if ((iVar1 != 0) && (local_84 != 0)) {
    *(uint *)(this + 4) = *(uint *)(this + 4) | 1;
  }
  sprintf(local_40,s__sminDist,param_3);
  psSHEET::GetFloat(param_1,param_2,local_40,(float *)(this + 0x84));
  sprintf(local_40,s__smaxDist,param_3);
  psSHEET::GetFloat(param_1,param_2,local_40,(float *)(this + 0x88));
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: drv:Snd_chn.cpp
   addr: 004A2B40 */

int __thiscall sncCHANNEL_CONE::ValidateBuffer(sncCHANNEL_CONE *this,int param_1)

{
  int iVar1;
  bool bVar2;
  sndBUFFER *psVar3;
  undefined4 uVar4;
  undefined4 unaff_EBX;
  undefined4 uVar5;
  
  if ((param_1 == 0) || (*(int *)(this + 0x68) != 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  psVar3 = *(sndBUFFER **)(this + 0x68);
  if (param_1 == 0) {
    if (psVar3 != (sndBUFFER *)0x0) {
      if (*(snmSOUND_DATA **)(*(int *)(this + 0x6c) + 0x58) != (snmSOUND_DATA *)0x0) {
        snmSOUND_DATA::DropBuffer(*(snmSOUND_DATA **)(*(int *)(this + 0x6c) + 0x58),psVar3);
      }
      *(undefined4 *)(this + 0x68) = 0;
    }
  }
  else if (psVar3 == (sndBUFFER *)0x0) {
    psVar3 = snmSOUND_DATA::GetBuffer(*(snmSOUND_DATA **)(*(int *)(this + 0x6c) + 0x58));
    *(sndBUFFER **)(this + 0x68) = psVar3;
    if (psVar3 == (sndBUFFER *)0x0) {
      return 0;
    }
    uVar5 = 1;
    (**(code **)(*(int *)this + 0x34))(1);
    if (*(int *)(this + 0x68) != 0) {
      (**(code **)(*(int *)this + 0x2c))(&stack0x00000000,&stack0xfffffff8);
      (**(code **)(**(int **)(this + 0x68) + 0x1c))(unaff_EBX);
      (**(code **)(**(int **)(this + 0x68) + 0x50))(uVar5);
    }
    (**(code **)(*(int *)this + 0x30))(1);
  }
  if (bVar2) {
    iVar1 = *(int *)(this + 0x6c);
    param_1 = (int)(ABS(*(float *)(iVar1 + 100)) < _DAT_005db0bc);
    if ((float)param_1 == ___real_00000000) {
      uVar5 = *(undefined4 *)(iVar1 + 100);
      uVar4 = *(undefined4 *)(iVar1 + 0x60);
    }
    else {
      uVar5 = *(undefined4 *)(this + 0x88);
      uVar4 = *(undefined4 *)(this + 0x84);
    }
    (**(code **)(**(int **)(this + 0x68) + 0x5c))(uVar4,uVar5,1);
    (**(code **)(**(int **)(this + 0x68) + 0x60))
              (*(undefined4 *)(this + 0x8c),*(undefined4 *)(this + 0x90),
               *(undefined4 *)(this + 0x94),1);
  }
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: drv:Snd_chn.cpp
   addr: 004A2C80 */

int __thiscall sncCHANNEL_CONE::IsHear(sncCHANNEL_CONE *this)

{
  ulonglong uVar1;
  undefined8 in_MM1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  undefined1 auVar5 [16];
  float local_8;
  float local_4;
  
  if (((*(uint *)(this + 4) & 0x20000000) != 0) && ((*(uint *)(this + 4) & 0x40000000) != 0)) {
    if (*(int *)(this + 0x6c) != 0) {
      local_4 = *(float *)(*(int *)(this + 0x6c) + 100);
    }
    local_8 = (float)(uint)(ABS(local_4) < _DAT_005db0bc);
    if ((float)(int)local_8 != ___real_00000000) {
      local_4 = *(float *)(this + 0x88);
    }
    local_8 = (*(float *)(this + 0x98) - *(float *)(this + 0x74)) *
              (*(float *)(this + 0x98) - *(float *)(this + 0x74)) +
              (*(float *)(this + 0x9c) - *(float *)(this + 0x78)) *
              (*(float *)(this + 0x9c) - *(float *)(this + 0x78)) +
              (*(float *)(this + 0xa0) - *(float *)(this + 0x7c)) *
              (*(float *)(this + 0xa0) - *(float *)(this + 0x7c));
    if (m3dSimdType == 0) {
      local_8 = local_8 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
      auVar5 = rsqrtss(ZEXT416((uint)local_8),ZEXT416((uint)local_8));
      fVar4 = auVar5._0_4_;
      local_8 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar4 *
                (`float___cdecl_m3dSqrt(float)'::__l2::three - local_8 * fVar4 * fVar4) * local_8;
    }
    else if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar1 = (ulonglong)(uint)local_8;
      uVar2 = PackedFloatingReciprocalSQRAprox(in_MM1,uVar1);
      uVar3 = PackedFloatingMUL(uVar2,uVar2);
      uVar3 = PackedFloatingReciprocalSQRIter1(uVar3,uVar1);
      uVar2 = PackedFloatingReciprocalIter2(uVar3,uVar2);
      uVar2 = PackedFloatingMUL(uVar2,uVar1);
      local_8 = (float)uVar2;
      FastExitMediaState();
    }
    else {
      local_8 = SQRT(local_8);
    }
    *(float *)(this + 0x80) = local_8;
    if (local_8 < local_4 != (local_8 == local_4)) {
      return 1;
    }
  }
  return 0;
}




/* from: drv:Snd_chn.cpp
   addr: 004A2DE0 */

void __thiscall sncCHANNEL_CONE::UpdatePos(sncCHANNEL_CONE *this,int param_1)

{
  (**(code **)(**(int **)(this + 0x68) + 0x58))(this + 0x98,this + 0xa4,param_1);
  (**(code **)(**(int **)(this + 0x68) + 100))(this + 0xb0,param_1);
  return;
}




/* from: drv:Snd_chn.cpp
   addr: 004A2E20 */

int __thiscall sncCHANNEL_LIST::Init(sncCHANNEL_LIST *this,int param_1)

{
  void *pvVar1;
  
  pvVar1 = apCalloc(param_1,4);
  *(void **)(this + 0xc) = pvVar1;
  if (pvVar1 == (void *)0x0) {
    return 0;
  }
  *(int *)(this + 8) = param_1;
  return 1;
}




/* from: drv:Snd_chn.cpp
   addr: 004A2E50 */

void __thiscall sncCHANNEL_LIST::~sncCHANNEL_LIST(sncCHANNEL_LIST *this)

{
  *(undefined ***)this = &_vftable_;
  apFree(*(void **)(this + 0xc));
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 8) = 0;
  return;
}




/* from: drv:Snd_chn.cpp
   addr: 004A2E70 */

int __thiscall sncCHANNEL_LIST::Add(sncCHANNEL_LIST *this,sncCHANNEL *param_1)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < *(int *)(this + 8)) {
    piVar2 = *(int **)(this + 0xc);
    do {
      if (*piVar2 == 0) {
        (*(int **)(this + 0xc))[iVar4] = (int)param_1;
        uVar1 = *(uint *)(param_1 + 4);
        if (((*(uint *)(this + 4) & 0xf00000) == 0) || ((uVar1 & 0x1000000) != 0)) {
          uVar3 = *(uint *)(param_1 + 4) & 0xffefffff;
        }
        else {
          uVar3 = uVar1 | 0x100000;
        }
        *(uint *)(param_1 + 4) = uVar3;
        if ((uVar1 & 0xf00000) == 0) {
          if ((uVar3 & 0xf00000) != 0) goto LAB_004a2ee5;
        }
        else if ((uVar3 & 0xf00000) == 0) {
LAB_004a2ee5:
          (**(code **)(*(int *)param_1 + 0x10))(0,0,0);
        }
        uVar1 = *(uint *)(param_1 + 4);
        if (((*(uint *)(this + 4) & 0x1e00000) == 0) || ((uVar1 & 0x2000000) != 0)) {
          uVar3 = *(uint *)(param_1 + 4) & 0xffdfffff;
        }
        else {
          uVar3 = uVar1 | 0x200000;
        }
        *(uint *)(param_1 + 4) = uVar3;
        if ((uVar1 & 0xf00000) == 0) {
          if ((uVar3 & 0xf00000) != 0) goto LAB_004a2f34;
        }
        else if ((uVar3 & 0xf00000) == 0) {
LAB_004a2f34:
          (**(code **)(*(int *)param_1 + 0x10))(0,0,0);
        }
        uVar1 = *(uint *)(param_1 + 4);
        if (((*(uint *)(this + 4) & 0x3c00000) == 0) || ((uVar1 & 0x4000000) != 0)) {
          uVar3 = *(uint *)(param_1 + 4) & 0xffbfffff;
        }
        else {
          uVar3 = uVar1 | 0x400000;
        }
        *(uint *)(param_1 + 4) = uVar3;
        if ((uVar1 & 0xf00000) == 0) {
          if ((uVar3 & 0xf00000) != 0) goto LAB_004a2f83;
        }
        else if ((uVar3 & 0xf00000) == 0) {
LAB_004a2f83:
          (**(code **)(*(int *)param_1 + 0x10))(0,0,0);
        }
        uVar1 = *(uint *)(param_1 + 4);
        if (((*(uint *)(this + 4) & 0x7800000) == 0) || ((uVar1 & 0x8000000) != 0)) {
          uVar3 = *(uint *)(param_1 + 4) & 0xff7fffff;
        }
        else {
          uVar3 = uVar1 | 0x800000;
        }
        *(uint *)(param_1 + 4) = uVar3;
        if ((uVar1 & 0xf00000) == 0) {
          if ((uVar3 & 0xf00000) == 0) goto LAB_004a2feb;
        }
        else if ((uVar3 & 0xf00000) != 0) {
          *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(this + 0x14);
          return iVar4;
        }
        (**(code **)(*(int *)param_1 + 0x10))(0,0,0);
LAB_004a2feb:
        *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(this + 0x14);
        return iVar4;
      }
      iVar4 = iVar4 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar4 < *(int *)(this + 8));
  }
  return -1;
}




/* from: drv:Snd_chn.cpp
   addr: 004A3000 */

int __thiscall sncCHANNEL_LIST::Del(sncCHANNEL_LIST *this,sncCHANNEL *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(this + 8)) {
    piVar2 = *(int **)(this + 0xc);
    do {
      if ((sncCHANNEL *)*piVar2 == param_1) {
        (*(int **)(this + 0xc))[iVar1] = 0;
        return iVar1;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 < *(int *)(this + 8));
  }
  return -1;
}




/* from: drv:Snd_chn.cpp
   addr: 004A3040 */

void __thiscall
sncCHANNEL_LIST::Update(sncCHANNEL_LIST *this,ulong param_1,m3dV *param_2,m3dV *param_3)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*(int *)(this + 8) < 1) {
    *(ulong *)(this + 0x10) = param_1;
    return;
  }
  do {
    piVar1 = *(int **)(*(int *)(this + 0xc) + iVar2 * 4);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x10))(param_1 - *(int *)(this + 0x10),param_2,param_3);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < *(int *)(this + 8));
  *(ulong *)(this + 0x10) = param_1;
  return;
}




/* from: drv:Snd_chn.cpp
   addr: 004A3090 */

void __thiscall sncCHANNEL_LIST::Mute(sncCHANNEL_LIST *this,int param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  int local_4;
  
  local_4 = 0;
  bVar3 = (byte)param_2;
  if (0 < *(int *)(this + 8)) {
    do {
      piVar1 = *(int **)(*(int *)(this + 0xc) + local_4 * 4);
      if (piVar1 != (int *)0x0) {
        uVar2 = piVar1[1];
        if ((param_1 == 0) || ((uVar2 & 0x1000000 << (bVar3 & 0x1f)) != 0)) {
          uVar4 = piVar1[1] & ~(0x100000 << (bVar3 & 0x1f));
        }
        else {
          uVar4 = piVar1[1] | 0x100000 << (bVar3 & 0x1f);
        }
        piVar1[1] = uVar4;
        if ((uVar2 & 0xf00000) == 0) {
          if ((uVar4 & 0xf00000) != 0) goto LAB_004a310b;
        }
        else if ((uVar4 & 0xf00000) == 0) {
LAB_004a310b:
          (**(code **)(*piVar1 + 0x10))(0,0,0);
        }
      }
      local_4 = local_4 + 1;
    } while (local_4 < *(int *)(this + 8));
  }
  uVar2 = 0x100000 << (bVar3 & 0x1f);
  if (param_1 == 0) {
    *(uint *)(this + 4) = *(uint *)(this + 4) & ~uVar2;
    return;
  }
  *(uint *)(this + 4) = *(uint *)(this + 4) | uVar2;
  return;
}




/* from: drv:Snd_chn.cpp
   addr: 004A3160 */

int __thiscall sncCHANNEL_LIST::GetNmb(sncCHANNEL_LIST *this)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 8);
  iVar1 = 0;
  if (0 < iVar3) {
    piVar2 = *(int **)(this + 0xc);
    do {
      if (*piVar2 != 0) {
        iVar1 = iVar1 + 1;
      }
      piVar2 = piVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return iVar1;
}




/* from: drv:Snd_chn.cpp
   addr: 004A3180 */

int __fastcall sncLinkSndListData(int param_1,sncSOUND_DESCR *param_2)

{
  snmSOUND_DATA *psVar1;
  sncSOUND_DESCR *psVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_1) {
    psVar2 = param_2 + 0x58;
    do {
      if (snmManager == (snmMANAGER *)0x0) {
        *(undefined4 *)psVar2 = 0;
      }
      else {
        psVar1 = snmMANAGER::Add(snmManager,(char *)(psVar2 + -0x54),*(int *)(psVar2 + 4));
        *(snmSOUND_DATA **)psVar2 = psVar1;
        if (psVar1 == (snmSOUND_DATA *)0x0) {
          return 0;
        }
      }
      iVar3 = iVar3 + 1;
      psVar2 = psVar2 + 0x60;
    } while (iVar3 < param_1);
  }
  return 1;
}




/* from: drv:Snd_chn.cpp
   addr: 004A31D0 */

int __fastcall sncLinkSndListData(int param_1,sncSOUND_DESCR_3D *param_2)

{
  snmSOUND_DATA *psVar1;
  sncSOUND_DESCR_3D *psVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_1) {
    psVar2 = param_2 + 0x58;
    do {
      if (snmManager == (snmMANAGER *)0x0) {
        *(undefined4 *)psVar2 = 0;
      }
      else {
        psVar1 = snmMANAGER::Add(snmManager,(char *)(psVar2 + -0x54),*(int *)(psVar2 + 4));
        *(snmSOUND_DATA **)psVar2 = psVar1;
        if (psVar1 == (snmSOUND_DATA *)0x0) {
          return 0;
        }
      }
      iVar3 = iVar3 + 1;
      psVar2 = psVar2 + 0x68;
    } while (iVar3 < param_1);
  }
  return 1;
}




/* from: drv:Snd_chn.cpp
   addr: 004A3220
   addr: 004A3220 */

void * __thiscall sncCHANNEL_LIST::_scalar_deleting_destructor_(sncCHANNEL_LIST *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  apFree(*(void **)(this + 0xc));
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 8) = 0;
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

