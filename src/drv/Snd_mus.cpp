
/* from: drv:Snd_mus.cpp
   addr: 004AABA0 */

int __thiscall _sndSYSTEM::InitMusic(_sndSYSTEM *this,char *param_1)

{
  _sndSYSTEM *ppv;
  char cVar1;
  int *piVar2;
  HRESULT HVar3;
  int iVar4;
  
  iVar4 = 0x14 - (int)param_1;
  do {
    cVar1 = *param_1;
    param_1[(int)(this + iVar4)] = cVar1;
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  ppv = this + 0x1656;
  HVar3 = CoCreateInstance((IID *)&_CLSID_FilterGraph,(LPUNKNOWN)0x0,3,(IID *)&_IID_IGraphBuilder,
                           (LPVOID *)ppv);
  if (HVar3 < 0) {
    return 0;
  }
  iVar4 = (**(code **)**(undefined4 **)ppv)(*(undefined4 **)ppv,&_IID_IMediaControl,this + 0x165a);
  if (iVar4 < 0) {
    return 0;
  }
  iVar4 = (**(code **)**(undefined4 **)ppv)(*(undefined4 **)ppv,&_IID_IMediaSeeking,this + 0x165e);
  if (iVar4 < 0) {
    return 0;
  }
  iVar4 = (**(code **)**(undefined4 **)ppv)(*(undefined4 **)ppv,&_IID_IBasicAudio,this + 0x166a);
  if (iVar4 < 0) {
    return 0;
  }
  piVar2 = *(int **)(this + 0x165e);
  iVar4 = (**(code **)(*piVar2 + 0x24))(piVar2,&_TIME_FORMAT_MEDIA_TIME);
  if (iVar4 < 0) {
    return 0;
  }
  *(undefined4 *)(this + 0x118) = 0;
  *(undefined4 *)(this + 0x166e) = 0;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x10;
  return 1;
}




/* from: drv:Snd_mus.cpp
   addr: 004AAC80 */

void __thiscall _sndSYSTEM::TermMusic(_sndSYSTEM *this)

{
  int *piVar1;
  
  *(uint *)(this + 4) = *(uint *)(this + 4) & 0xffffffef;
  piVar1 = *(int **)(this + 0x1662);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)(this + 0x1666);
  *(undefined4 *)(this + 0x1662) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)(this + 0x165a);
  *(undefined4 *)(this + 0x1666) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x24))(piVar1);
  }
  piVar1 = *(int **)(this + 0x166a);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)(this + 0x165e);
  *(undefined4 *)(this + 0x166a) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)(this + 0x165a);
  *(undefined4 *)(this + 0x165e) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)(this + 0x1656);
  *(undefined4 *)(this + 0x165a) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined4 *)(this + 0x1656) = 0;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: drv:Snd_mus.cpp
   addr: 004AAD30 */

int __thiscall _sndSYSTEM::SetMusic(_sndSYSTEM *this,sndMUSIC *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  byte *pbVar4;
  int iVar5;
  void *pvVar6;
  char *lpMultiByteStr;
  undefined4 uVar7;
  int iVar8;
  int *unaff_ESI;
  void *pvVar9;
  int *local_20c;
  WCHAR aWStack_208 [260];
  
  uVar1 = *(uint *)(this + 4);
  if (((uVar1 & 0x10) != 0) && (((uVar1 & 0x100) != 0 || (*(sndMUSIC **)(this + 0x10) != param_1))))
  {
    *(sndMUSIC **)(this + 0x10) = param_1;
    iVar8 = 0;
    if ((param_2 != 0) && ((char)uVar1 < '\0')) {
      *(undefined4 *)(this + 0x1672) = 0;
      *(uint *)(this + 4) = *(uint *)(this + 4) | 0x40;
      return 1;
    }
    uVar1 = *(uint *)(this + 4);
    *(uint *)(this + 4) = uVar1 & 0xffffffbf;
    *(uint *)(this + 4) = uVar1 & 0xffffff3f;
    if (*(int *)(this + 0x1662) != 0) {
      if (((uVar1 & 0x20) == 0) &&
         (iVar5 = (**(code **)(**(int **)(this + 0x165a) + 0x24))(*(int **)(this + 0x165a)),
         iVar5 < 0)) {
        return 0;
      }
      if (*(int *)(this + 0x1662) != 0) {
        local_20c = (int *)0x0;
        iVar5 = (**(code **)(**(int **)(this + 0x1656) + 0x14))(*(int **)(this + 0x1656),&local_20c)
        ;
        if (-1 < iVar5) {
          iVar5 = (**(code **)(*local_20c + 0x10))(local_20c,1);
          while (iVar5 == 0) {
            iVar8 = iVar8 + 1;
            iVar5 = (**(code **)(*unaff_ESI + 0x10))(unaff_ESI,1);
          }
          pvVar6 = apMalloc(iVar8 * 4);
          (**(code **)(*unaff_ESI + 0x14))(unaff_ESI);
          pvVar9 = pvVar6;
          do {
            iVar5 = (**(code **)(*local_20c + 0xc))(local_20c,1,pvVar9,0);
            pvVar9 = (void *)((int)pvVar9 + 4);
          } while (iVar5 == 0);
          iVar5 = 0;
          if (local_20c != (int *)0x0) {
            (**(code **)(*local_20c + 8))(local_20c);
          }
          local_20c = (int *)0x0;
          if (0 < iVar8) {
            do {
              (**(code **)(**(int **)(this + 0x1656) + 0x10))
                        (*(int **)(this + 0x1656),*(undefined4 *)((int)pvVar6 + iVar5 * 4));
              iVar2 = *(int *)((int)pvVar6 + iVar5 * 4);
              if (iVar2 != *(int *)(this + 0x1662)) {
                (**(code **)(**(int **)(this + 0x1656) + 0xc))(*(int **)(this + 0x1656),iVar2,0);
              }
              piVar3 = *(int **)((int)pvVar6 + iVar5 * 4);
              if (piVar3 != (int *)0x0) {
                (**(code **)(*piVar3 + 8))(piVar3);
              }
              *(undefined4 *)((int)pvVar6 + iVar5 * 4) = 0;
              iVar5 = iVar5 + 1;
            } while (iVar5 < iVar8);
          }
          apFree(pvVar6);
        }
        piVar3 = *(int **)(this + 0x1662);
        if (piVar3 != (int *)0x0) {
          (**(code **)(*piVar3 + 8))(piVar3);
        }
        piVar3 = *(int **)(this + 0x1666);
        *(undefined4 *)(this + 0x1662) = 0;
        if (piVar3 != (int *)0x0) {
          (**(code **)(*piVar3 + 8))(piVar3);
        }
        *(undefined4 *)(this + 0x1666) = 0;
      }
    }
    if (*(int *)(this + 0x10) != 0) {
      lpMultiByteStr =
           fnmFindDisc((char *)(this + 0x14),(char *)(*(int *)(this + 0x10) + 4),(char *)0x0);
      if (lpMultiByteStr == (char *)0x0) {
        apLog(s_music__s_not_found_,*(int *)(this + 0x10) + 4);
        return 0;
      }
      MultiByteToWideChar(0,0,lpMultiByteStr,-1,aWStack_208,0x104);
      iVar8 = (**(code **)(**(int **)(this + 0x1656) + 0x38))
                        (*(int **)(this + 0x1656),aWStack_208,aWStack_208,this + 0x1662);
      if (iVar8 < 0) {
        return 0;
      }
      piVar3 = *(int **)(this + 0x1662);
      iVar8 = (**(code **)(*piVar3 + 0x2c))(piVar3,u_Output,this + 0x1666);
      if (iVar8 < 0) {
        return 0;
      }
      iVar8 = (**(code **)(**(int **)(this + 0x1656) + 0x30))
                        (*(int **)(this + 0x1656),*(undefined4 *)(this + 0x1666));
      if (iVar8 < 0) {
        return 0;
      }
      pbVar4 = *(byte **)(this + 0x10);
      if ((*pbVar4 & 2) != 0) {
        pbVar4[0x48] = 0;
        pbVar4[0x49] = 0;
        pbVar4[0x4a] = 0;
        pbVar4[0x4b] = 0;
        pbVar4[0x4c] = 0;
        pbVar4[0x4d] = 0;
        pbVar4[0x4e] = 0;
        pbVar4[0x4f] = 0;
      }
      iVar8 = (**(code **)(**(int **)(this + 0x165e) + 0x38))
                        (*(int **)(this + 0x165e),*(int *)(this + 0x10) + 0x48,1,
                         *(int *)(this + 0x10) + 0x48,0);
      if (iVar8 < 0) {
        return 0;
      }
      uVar1 = *(uint *)(this + 4);
      *(uint *)(this + 4) = uVar1 | 0x80;
      if ((uVar1 & 0x20) == 0) {
        iVar8 = (**(code **)(**(int **)(this + 0x165a) + 0x1c))(*(int **)(this + 0x165a));
        if (iVar8 < 0) {
          return 0;
        }
        **(uint **)(this + 0x10) = **(uint **)(this + 0x10) | 8;
      }
      *(float *)(this + 0x166e) =
           *(float *)(*(int *)(this + 0x10) + 0x44) + *(float *)(this + 0x118);
      piVar3 = *(int **)(this + 0x166a);
      iVar8 = *piVar3;
      uVar7 = ftol();
      (**(code **)(iVar8 + 0x1c))(piVar3,uVar7);
    }
  }
  return 1;
}




/* from: drv:Snd_mus.cpp
   addr: 004AB090 */

void __thiscall _sndSYSTEM::StopMusic(_sndSYSTEM *this,sndMUSIC *param_1)

{
  if ((*(sndMUSIC **)(this + 0x10) == param_1) || (param_1 == (sndMUSIC *)0x0)) {
    (**(code **)(*(int *)this + 0x48))(0,1);
  }
  return;
}




/* from: drv:Snd_mus.cpp
   addr: 004AB0B0 */

void __thiscall _sndSYSTEM::MuteMusic(_sndSYSTEM *this,int param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  
  if ((*(uint *)(this + 4) & 0x10) != 0) {
    if (param_1 == 0) {
      uVar3 = *(uint *)(this + 4) & ~(0x1000000 << ((byte)param_2 & 0x1f));
      *(uint *)(this + 4) = uVar3;
      if ((uVar3 & 0xf000000) == 0) {
        if (((*(int *)(this + 0x1662) != 0) && ((uVar3 & 0x20) != 0)) &&
           (iVar2 = (**(code **)(**(int **)(this + 0x165a) + 0x1c))(*(int **)(this + 0x165a)),
           iVar2 < 0)) {
          return;
        }
        *(uint *)(this + 4) = *(uint *)(this + 4) & 0xffffffdf;
        puVar1 = *(uint **)(this + 0x10);
        if (puVar1 != (uint *)0x0) {
          *puVar1 = *puVar1 & 0xfffffff7;
        }
      }
    }
    else {
      if (((*(int *)(this + 0x1662) != 0) && ((*(uint *)(this + 4) & 0x20) == 0)) &&
         (iVar2 = (**(code **)(**(int **)(this + 0x165a) + 0x24))(*(int **)(this + 0x165a)),
         iVar2 < 0)) {
        return;
      }
      uVar3 = *(uint *)(this + 4) | 0x1000000 << ((byte)param_2 & 0x1f);
      *(uint *)(this + 4) = uVar3;
      *(uint *)(this + 4) = uVar3 | 0x20;
      puVar1 = *(uint **)(this + 0x10);
      if (puVar1 != (uint *)0x0) {
        *puVar1 = *puVar1 | 8;
        return;
      }
    }
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: drv:Snd_mus.cpp
   addr: 004AB170 */

void __thiscall _sndSYSTEM::SetMusicVolume(_sndSYSTEM *this,float param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  *(float *)(this + 0x118) = param_1;
  if (((byte)this[4] & 0x10) != 0) {
    *(float *)(this + 0x166e) = param_1;
    piVar1 = *(int **)(this + 0x166a);
    iVar2 = *piVar1;
    uVar3 = ftol();
    (**(code **)(iVar2 + 0x1c))(piVar1,uVar3);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: drv:Snd_mus.cpp
   addr: 004AB1E0 */

void __thiscall _sndSYSTEM::UpdateMusic(_sndSYSTEM *this,float param_1)

{
  float fVar1;
  int *piVar2;
  uint *puVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  int iVar7;
  undefined1 *unaff_EBP;
  int unaff_ESI;
  undefined1 *puVar8;
  int local_10 [2];
  undefined1 local_8 [8];
  
  fVar1 = ___real_40000000;
  if ((*(uint *)(this + 4) & 0x10) != 0) {
    if ((*(uint *)(this + 4) & 0x40) != 0) {
      fVar4 = param_1 + *(float *)(this + 0x1672);
      *(float *)(this + 0x1672) = fVar4;
      if (fVar1 < fVar4) {
        *(uint *)(this + 4) = *(uint *)(this + 4) | 0x100;
        (**(code **)(*(int *)this + 0x48))(*(undefined4 *)(this + 0x10));
        *(uint *)(this + 4) = *(uint *)(this + 4) & 0xfffffeff;
        return;
      }
      *(float *)(this + 0x166e) = *(float *)(this + 0x118);
      if (*(int *)(this + 0x10) != 0) {
        *(float *)(this + 0x166e) =
             *(float *)(this + 0x118) + *(float *)(*(int *)(this + 0x10) + 0x44);
      }
      fVar1 = *(float *)(this + 0x166e);
      fVar5 = fVar1;
      if ((___real_00000000 <= fVar4) && (fVar5 = ___real_c2c80000, fVar4 <= ___real_40000000)) {
        fVar5 = (___real_c2c80000 - fVar1) * fVar4 * ___real_3f000000 + fVar1;
      }
      *(float *)(this + 0x166e) = fVar5;
      piVar2 = *(int **)(this + 0x166a);
      iVar7 = *piVar2;
      uVar6 = ftol();
      (**(code **)(iVar7 + 0x1c))(piVar2,uVar6);
    }
    puVar3 = *(uint **)(this + 0x10);
    if (puVar3 != (uint *)0x0) {
      *puVar3 = *puVar3 & 0xfffffffb;
    }
    if (((*(int *)(this + 0x1662) != 0) && (*(int *)(this + 0x10) != 0)) &&
       (((byte)this[4] & 0x20) == 0)) {
      puVar8 = local_8;
      iVar7 = (**(code **)(**(int **)(this + 0x165e) + 0x3c))(*(int **)(this + 0x165e),local_10);
      if (-1 < iVar7) {
        if ((((**(byte **)(this + 0x10) & 1) != 0) && (local_10[0] <= unaff_ESI)) &&
           ((local_10[0] < unaff_ESI || (unaff_EBP <= puVar8)))) {
          puVar8 = (undefined1 *)0x0;
          unaff_ESI = 0;
          iVar7 = (**(code **)(**(int **)(this + 0x165e) + 0x38))
                            (*(int **)(this + 0x165e),&stack0xffffffe4,1,&stack0xffffffe4,0);
          if (iVar7 < 0) {
            return;
          }
        }
        if (((byte)this[4] & 0x40) == 0) {
          iVar7 = *(int *)(this + 0x10);
          *(undefined1 **)(iVar7 + 0x48) = puVar8;
          *(int *)(iVar7 + 0x4c) = unaff_ESI;
        }
      }
    }
  }
  return;
}

