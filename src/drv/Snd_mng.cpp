
/* from: drv:Snd_mng.cpp
   addr: 004A7BA0 */

snmSOUND_DATA * __thiscall
snmSOUND_DATA::snmSOUND_DATA(snmSOUND_DATA *this,char *param_1,int param_2)

{
  snmSOUND_DATA *psVar1;
  undefined4 uVar2;
  int iVar3;
  
  *(int *)this = param_2;
  apNAME::SetName((apNAME *)(this + 4),param_1);
  psVar1 = this + 0x148;
  iVar3 = 4;
  do {
    *(undefined4 *)psVar1 = 0;
    psVar1 = psVar1 + 0xc;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  psVar1 = this + 0x14c;
  iVar3 = 4;
  do {
    if (((byte)*this & 1) == 0) {
      uVar2 = (**(code **)(*(int *)sndSystem + 4))();
    }
    else {
      uVar2 = (**(code **)(*(int *)sndSystem + 8))();
    }
    *(undefined4 *)psVar1 = uVar2;
    *(undefined4 *)(psVar1 + -4) = 0;
    *(undefined4 *)(psVar1 + 4) = 0;
    psVar1 = psVar1 + 0xc;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return this;
}




/* from: drv:Snd_mng.cpp
   addr: 004A7C10 */

int __thiscall snmSOUND_DATA::Update(snmSOUND_DATA *this)

{
  int iVar1;
  snmSOUND_DATA *psVar2;
  int iVar3;
  snmSOUND_DATA *psVar4;
  
  if ((*(uint *)this & 0x1000) != 0) {
    iVar3 = 0;
    psVar4 = this + 0x14c;
    do {
      (**(code **)(**(int **)psVar4 + 0x18))();
      if (((((*(uint *)(psVar4 + -4) & 1) != 0) && ((*(uint *)(psVar4 + -4) & 2) != 0)) &&
          (iVar1 = (**(code **)(**(int **)psVar4 + 0x34))(), iVar1 == 0)) &&
         ((*(uint *)this & 0x1000) != 0)) {
        iVar1 = 0;
        psVar2 = this + 0x148;
        do {
          if ((*(int **)psVar4 == *(int **)(psVar2 + 4)) && (((byte)*psVar2 & 1) != 0)) {
            (**(code **)(**(int **)psVar4 + 0x38))();
            *(undefined4 *)(this + (iVar1 * 3 + 0x54) * 4) = *(undefined4 *)(snmManager + 0x150);
            *(uint *)(this + iVar1 * 0xc + 0x148) =
                 *(uint *)(this + iVar1 * 0xc + 0x148) & 0xfffffffe;
            break;
          }
          iVar1 = iVar1 + 1;
          psVar2 = psVar2 + 0xc;
        } while (iVar1 < 4);
        Invalidate(this);
      }
      if (((0 < iVar3) && (((byte)psVar4[-4] & 1) == 0)) &&
         ((iVar1 = (**(code **)(**(int **)psVar4 + 0xc))(), iVar1 != 0 &&
          (2000 < (uint)(*(int *)(snmManager + 0x150) - *(int *)(psVar4 + 4)))))) {
        (**(code **)(**(int **)psVar4 + 0x10))();
      }
      iVar3 = iVar3 + 1;
      psVar4 = psVar4 + 0xc;
    } while (iVar3 < 4);
    Invalidate(this);
  }
  return 1;
}




/* from: drv:Snd_mng.cpp
   addr: 004A7D00 */

int __thiscall snmSOUND_DATA::Validate(snmSOUND_DATA *this)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(uint *)this & 0x1000) != 0) {
    return 1;
  }
  if ((*(uint *)this & 0x2000) != 0) {
    iVar1 = (**(code **)(**(int **)(this + 0x14c) + 8))(this + 0x44);
    if (iVar1 != 0) {
      uVar2 = (**(code **)(**(int **)(this + 0x14c) + 0x2c))();
      *(undefined4 *)(this + 0x178) = uVar2;
      *(uint *)this = *(uint *)this | 0x1000;
    }
  }
  *(undefined4 *)(this + 0x17c) = *(undefined4 *)(snmManager + 0x150);
  return *(uint *)this & 0x1000;
}




/* from: drv:Snd_mng.cpp
   addr: 004A7D60 */

void __thiscall snmSOUND_DATA::Invalidate(snmSOUND_DATA *this)

{
  uint uVar1;
  bool bVar2;
  snmSOUND_DATA *psVar3;
  int iVar4;
  
  bVar2 = false;
  psVar3 = this + 0x148;
  iVar4 = 4;
  do {
    if (((byte)*psVar3 & 1) != 0) {
      bVar2 = true;
    }
    psVar3 = psVar3 + 0xc;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  if (bVar2) {
    *(undefined4 *)(this + 0x17c) = *(undefined4 *)(snmManager + 0x150);
    return;
  }
  uVar1 = *(uint *)this;
  if ((uVar1 & 4) == 0) {
    if (((((byte)*snmManager & 1) == 0) &&
        (15000 < (uint)(*(int *)(snmManager + 0x150) - *(int *)(this + 0x17c)))) &&
       ((uVar1 & 0x1000) != 0)) {
      psVar3 = this + 0x170;
      iVar4 = 4;
      do {
        (**(code **)(**(int **)psVar3 + 0x10))();
        psVar3 = psVar3 + -0xc;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      *(uint *)this = *(uint *)this & 0xffffefff;
    }
  }
  else if ((uVar1 & 0x1000) != 0) {
    psVar3 = this + 0x170;
    iVar4 = 4;
    do {
      (**(code **)(**(int **)psVar3 + 0x10))();
      psVar3 = psVar3 + -0xc;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    *(uint *)this = *(uint *)this & 0xffffefff;
    return;
  }
  return;
}




/* from: drv:Snd_mng.cpp
   addr: 004A7E20 */

sndBUFFER * __thiscall snmSOUND_DATA::GetBuffer(snmSOUND_DATA *this)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  snmSOUND_DATA *psVar4;
  int iVar5;
  int iStack_8;
  uint local_4;
  
  uVar1 = *(uint *)this & 0x1000;
  if (uVar1 == 0) {
    if (((*(uint *)this & 0x2000) != 0) &&
       (iVar2 = (**(code **)(**(int **)(this + 0x14c) + 8))(this + 0x44), iVar2 != 0)) {
      uVar3 = (**(code **)(**(int **)(this + 0x14c) + 0x2c))();
      *(undefined4 *)(this + 0x178) = uVar3;
      *(uint *)this = *(uint *)this | 0x1000;
    }
    uVar1 = *(uint *)this & 0x1000;
    *(undefined4 *)(this + 0x17c) = *(undefined4 *)(snmManager + 0x150);
    local_4 = uVar1;
    if (uVar1 == 0) {
      return (sndBUFFER *)0x0;
    }
  }
  if (uVar1 != 0) {
    (**(code **)(**(int **)(this + 0x14c) + 0x14))();
  }
  iVar2 = 0;
  psVar4 = this + 0x148;
  while (((byte)*psVar4 & 1) != 0) {
    iVar2 = iVar2 + 1;
    psVar4 = psVar4 + 0xc;
    if (3 < iVar2) {
      return (sndBUFFER *)0x0;
    }
  }
  if (0 < iVar2) {
    psVar4 = this + iVar2 * 0xc + 0x14c;
    iVar5 = (**(code **)(**(int **)(this + iVar2 * 0xc + 0x14c) + 0xc))();
    if (iVar5 == 0) {
      if (2 < iVar2) {
        iVar5 = (**(code **)(**(int **)(this + 0x14c) + 0x44))();
        if (iVar5 == 0) {
          return (sndBUFFER *)0x0;
        }
        iVar5 = (**(code **)(*(int *)sndSystem + 0x24))(0,&iStack_8);
        if (iVar5 == 0) {
          return (sndBUFFER *)0x0;
        }
        if (iStack_8 < 1) {
          return (sndBUFFER *)0x0;
        }
      }
      iVar5 = (**(code **)(**(int **)psVar4 + 0x48))(*(undefined4 *)(this + 0x14c));
      if (iVar5 == 0) {
        return (sndBUFFER *)0x0;
      }
      if ((2 < iVar2) && (iVar5 = (**(code **)(**(int **)psVar4 + 0x44))(), iVar5 == 0)) {
        (**(code **)(**(int **)psVar4 + 0x10))();
        return (sndBUFFER *)0x0;
      }
    }
  }
  (**(code **)(**(int **)(this + iVar2 * 0xc + 0x14c) + 0x24))(0);
  uVar1 = *(uint *)(this + iVar2 * 0xc + 0x148);
  *(uint *)(this + iVar2 * 0xc + 0x148) = uVar1 & 0xfffffffd;
  *(uint *)(this + iVar2 * 0xc + 0x148) = uVar1 & 0xfffffffd | 1;
  return *(sndBUFFER **)(this + iVar2 * 0xc + 0x14c);
}




/* from: drv:Snd_mng.cpp
   addr: 004A7F70 */

void __thiscall snmSOUND_DATA::DropBuffer(snmSOUND_DATA *this,sndBUFFER *param_1)

{
  snmSOUND_DATA *psVar1;
  int iVar2;
  
  if ((*(uint *)this & 0x1000) != 0) {
    iVar2 = 0;
    psVar1 = this + 0x148;
    while ((param_1 != *(sndBUFFER **)(psVar1 + 4) || (((byte)*psVar1 & 1) == 0))) {
      iVar2 = iVar2 + 1;
      psVar1 = psVar1 + 0xc;
      if (3 < iVar2) {
        Invalidate(this);
        return;
      }
    }
    (**(code **)(*(int *)param_1 + 0x38))();
    *(undefined4 *)(this + (iVar2 * 3 + 0x54) * 4) = *(undefined4 *)(snmManager + 0x150);
    *(uint *)(this + iVar2 * 0xc + 0x148) = *(uint *)(this + iVar2 * 0xc + 0x148) & 0xfffffffe;
    Invalidate(this);
  }
  return;
}




/* from: drv:Snd_mng.cpp
   addr: 004A7FE0 */

void __thiscall snmSOUND_DATA::AutoDropBuffer(snmSOUND_DATA *this,sndBUFFER *param_1)

{
  snmSOUND_DATA *psVar1;
  int iVar2;
  
  if ((*(uint *)this & 0x1000) != 0) {
    psVar1 = this + 0x148;
    iVar2 = 4;
    do {
      if ((param_1 == *(sndBUFFER **)(psVar1 + 4)) && (((byte)*psVar1 & 1) != 0)) {
        *(uint *)psVar1 = *(uint *)psVar1 | 2;
      }
      psVar1 = psVar1 + 0xc;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}




/* from: drv:Snd_mng.cpp
   addr: 004A8010 */

int __thiscall snmMANAGER::Init(snmMANAGER *this,char *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  DWORD DVar4;
  
  iVar2 = 4 - (int)param_1;
  do {
    cVar1 = *param_1;
    param_1[(int)(this + iVar2)] = cVar1;
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  iVar2 = 0x108 - (int)param_2;
  do {
    cVar1 = *param_2;
    param_2[(int)(this + iVar2)] = cVar1;
    param_2 = param_2 + 1;
  } while (cVar1 != '\0');
  pvVar3 = apCalloc(400,4);
  *(void **)(this + 0x14c) = pvVar3;
  if (pvVar3 == (void *)0x0) {
    return 0;
  }
  DVar4 = timeGetTime();
  *(DWORD *)(this + 0x150) = DVar4;
  return 1;
}




/* from: drv:Snd_mng.cpp
   addr: 004A8070 */

void __thiscall snmMANAGER::Term(snmMANAGER *this)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  
  if (*(int *)(this + 0x14c) != 0) {
    iVar3 = 0;
    do {
      puVar1 = *(uint **)(*(int *)(this + 0x14c) + iVar3);
      if (((puVar1 != (uint *)0x0) && ((*puVar1 & 0x1000) != 0)) && ((*puVar1 & 0x1000) != 0)) {
        puVar4 = puVar1 + 0x5c;
        iVar2 = 4;
        do {
          (**(code **)(*(int *)*puVar4 + 0x10))();
          puVar4 = puVar4 + -3;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
        *puVar1 = *puVar1 & 0xffffefff;
      }
      iVar3 = iVar3 + 4;
    } while (iVar3 < 0x640);
    iVar3 = 0;
    do {
      puVar1 = *(uint **)(*(int *)(this + 0x14c) + iVar3);
      if (puVar1 != (uint *)0x0) {
        if ((*puVar1 & 0x1000) != 0) {
          puVar4 = puVar1 + 0x5c;
          iVar2 = 4;
          do {
            (**(code **)(*(int *)*puVar4 + 0x10))();
            puVar4 = puVar4 + -3;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
          *puVar1 = *puVar1 & 0xffffefff;
        }
        puVar4 = puVar1 + 0x5c;
        iVar2 = 4;
        do {
          if ((undefined4 *)*puVar4 != (undefined4 *)0x0) {
            (*(code *)**(undefined4 **)*puVar4)(1);
          }
          puVar4 = puVar4 + -3;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
        operator_delete(puVar1);
      }
      iVar3 = iVar3 + 4;
    } while (iVar3 < 0x640);
    apFree(*(void **)(this + 0x14c));
    *(undefined4 *)(this + 0x14c) = 0;
  }
  return;
}




/* from: drv:Snd_mng.cpp
   addr: 004A8160 */

snmSOUND_DATA * __thiscall snmMANAGER::Add(snmMANAGER *this,char *param_1,int param_2)

{
  char cVar1;
  uint *puVar2;
  int iVar3;
  int *piVar4;
  snmSOUND_DATA *psVar5;
  char *pcVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  undefined1 local_24 [36];
  
  if (*(int *)(this + 0x14c) == 0) {
    return (snmSOUND_DATA *)0x0;
  }
  iVar8 = 0;
  while ((iVar3 = *(int *)(*(int *)(this + 0x14c) + iVar8 * 4), iVar3 == 0 ||
         (iVar3 = apNAME::IsName((apNAME *)(iVar3 + 4),param_1), iVar3 == 0))) {
    iVar8 = iVar8 + 1;
    if (399 < iVar8) {
LAB_004a81a8:
      do {
        iVar8 = *(int *)(this + 0x148);
        iVar3 = iVar8;
        if (iVar8 < 400) {
          piVar4 = (int *)(*(int *)(this + 0x14c) + iVar8 * 4);
          do {
            if (*piVar4 == 0) break;
            iVar3 = iVar3 + 1;
            piVar4 = piVar4 + 1;
          } while (iVar3 < 400);
        }
        if (iVar3 != 400) {
          psVar5 = (snmSOUND_DATA *)operator_new(0x180);
          if (psVar5 == (snmSOUND_DATA *)0x0) {
            iVar8 = 0;
          }
          else {
            iVar8 = snmSOUND_DATA::snmSOUND_DATA(psVar5,param_1,param_2);
          }
          *(int *)(*(int *)(this + 0x14c) + iVar3 * 4) = iVar8;
          if (iVar8 != 0) {
            puVar2 = *(uint **)(*(int *)(this + 0x14c) + iVar3 * 4);
            pcVar6 = fnmFindDisc((char *)(this + 4),(char *)(puVar2 + 1),(char *)(this + 0x108));
            if (pcVar6 == (char *)0x0) {
              apLogErr(s_Sound__s_not_found_,puVar2 + 1);
              puVar2 = *(uint **)(*(int *)(this + 0x14c) + iVar3 * 4);
              if (puVar2 != (uint *)0x0) {
                if ((*puVar2 & 0x1000) != 0) {
                  puVar9 = puVar2 + 0x5c;
                  iVar8 = 4;
                  do {
                    (**(code **)(*(int *)*puVar9 + 0x10))();
                    puVar9 = puVar9 + -3;
                    iVar8 = iVar8 + -1;
                  } while (iVar8 != 0);
                  *puVar2 = *puVar2 & 0xffffefff;
                }
                puVar9 = puVar2 + 0x5c;
                iVar8 = 4;
                do {
                  if ((undefined4 *)*puVar9 != (undefined4 *)0x0) {
                    (*(code *)**(undefined4 **)*puVar9)(1);
                  }
                  puVar9 = puVar9 + -3;
                  iVar8 = iVar8 + -1;
                } while (iVar8 != 0);
                operator_delete(puVar2);
              }
              *(undefined4 *)(*(int *)(this + 0x14c) + iVar3 * 4) = 0;
              return (snmSOUND_DATA *)0x0;
            }
            iVar8 = (int)(puVar2 + 0x11) - (int)pcVar6;
            do {
              cVar1 = *pcVar6;
              pcVar6[iVar8] = cVar1;
              pcVar6 = pcVar6 + 1;
            } while (cVar1 != '\0');
            iVar8 = stat(puVar2 + 0x11,local_24);
            if (iVar8 == 0) {
              uVar7 = ftol();
              puVar2[0x5e] = uVar7;
            }
            *puVar2 = *puVar2 | 0x2000;
            *(int *)(this + 0x148) = iVar3 + 1;
            return *(snmSOUND_DATA **)(*(int *)(this + 0x14c) + iVar3 * 4);
          }
          return (snmSOUND_DATA *)0x0;
        }
        if (iVar8 < 1) {
          return (snmSOUND_DATA *)0x0;
        }
        *(undefined4 *)(this + 0x148) = 0;
      } while( true );
    }
  }
  psVar5 = *(snmSOUND_DATA **)(*(int *)(this + 0x14c) + iVar8 * 4);
  if (psVar5 != (snmSOUND_DATA *)0x0) {
    return psVar5;
  }
  goto LAB_004a81a8;
}




/* from: drv:Snd_mng.cpp
   addr: 004A8350 */

int __thiscall snmMANAGER::Del(snmMANAGER *this,snmSOUND_DATA *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  snmSOUND_DATA *psVar4;
  
  piVar1 = *(int **)(this + 0x14c);
  iVar2 = 0;
  piVar3 = piVar1;
  if (piVar1 != (int *)0x0) {
    do {
      if (((snmSOUND_DATA *)*piVar3 != (snmSOUND_DATA *)0x0) &&
         ((snmSOUND_DATA *)*piVar3 == param_1)) {
        piVar1[iVar2] = 0;
        if (param_1 != (snmSOUND_DATA *)0x0) {
          if ((*(uint *)param_1 & 0x1000) != 0) {
            psVar4 = param_1 + 0x170;
            iVar2 = 4;
            do {
              (**(code **)(**(int **)psVar4 + 0x10))();
              psVar4 = psVar4 + -0xc;
              iVar2 = iVar2 + -1;
            } while (iVar2 != 0);
            *(uint *)param_1 = *(uint *)param_1 & 0xffffefff;
          }
          psVar4 = param_1 + 0x170;
          iVar2 = 4;
          do {
            if (*(undefined4 **)psVar4 != (undefined4 *)0x0) {
              (**(code **)**(undefined4 **)psVar4)(1);
            }
            psVar4 = psVar4 + -0xc;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
          operator_delete(param_1);
        }
        return 1;
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar2 < 400);
  }
  return 0;
}




/* from: drv:Snd_mng.cpp
   addr: 004A8410 */

int __thiscall snmMANAGER::LoadAll(snmMANAGER *this)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (*(int *)(this + 0x14c) == 0) {
    return 0;
  }
  if (((byte)*this & 1) == 0) {
    return 0;
  }
  iVar4 = 0;
  iVar5 = 0;
  do {
    puVar1 = *(uint **)(iVar5 + *(int *)(this + 0x14c));
    if (((puVar1 != (uint *)0x0) && (uVar3 = *puVar1, (uVar3 & 0x1000) == 0)) && ((uVar3 & 2) == 0))
    {
      if ((uVar3 & 0x2000) == 0) {
LAB_004a8480:
        iVar4 = iVar4 + 1;
      }
      else if ((uVar3 & 0x1000) == 0) {
        iVar2 = (**(code **)(*(int *)puVar1[0x53] + 8))(puVar1 + 0x11);
        if (iVar2 == 0) goto LAB_004a8480;
        uVar3 = (**(code **)(*(int *)puVar1[0x53] + 0x2c))();
        puVar1[0x5e] = uVar3;
        *puVar1 = *puVar1 | 0x1000;
      }
    }
    iVar5 = iVar5 + 4;
    if (0x63f < iVar5) {
      return iVar4;
    }
  } while( true );
}




/* from: drv:Snd_mng.cpp
   addr: 004A84A0 */

void __thiscall snmMANAGER::BeginFrame(snmMANAGER *this)

{
  snmSOUND_DATA *this_00;
  DWORD DVar1;
  int iVar2;
  
  if (*(int *)(this + 0x14c) != 0) {
    DVar1 = timeGetTime();
    *(DWORD *)(this + 0x150) = DVar1;
    iVar2 = 0;
    do {
      this_00 = *(snmSOUND_DATA **)(iVar2 + *(int *)(this + 0x14c));
      if ((this_00 != (snmSOUND_DATA *)0x0) && ((*(uint *)this_00 & 0x1000) != 0)) {
        snmSOUND_DATA::Update(this_00);
      }
      iVar2 = iVar2 + 4;
    } while (iVar2 < 0x640);
  }
  return;
}

