
/* from: engine:sceneio_tpl.cpp
   addr: 00584710 */

int __fastcall _sioReadAnimSeq(animTPL *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  
  iVar1 = fioFILE::ReadChunk(_sioFilePtr,(fioCHUNK *)0x0);
  if (iVar1 != 0x2e6) {
    fioFILE::RevertChunk(_sioFilePtr,(fioCHUNK *)0x0);
    return 1;
  }
  (**(code **)(*(int *)_sioFilePtr + 0x14))(param_1 + 0x8c,4,4);
  iVar1 = *(int *)(param_1 + 0x8c);
  piVar2 = (int *)operator_new(iVar1 * 0x88 + 4);
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    *piVar2 = iVar1;
    piVar2 = piVar2 + 1;
    piVar5 = piVar2;
    if (-1 < iVar1 + -1) {
      do {
        piVar6 = piVar5;
        for (iVar4 = 0x22; iVar4 != 0; iVar4 = iVar4 + -1) {
          *piVar6 = 0;
          piVar6 = piVar6 + 1;
        }
        piVar5[0x20] = 2;
        iVar1 = iVar1 + -1;
        piVar5 = piVar5 + 0x22;
      } while (iVar1 != 0);
    }
  }
  *(int **)(param_1 + 0x90) = piVar2;
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x8c)) {
    iVar4 = 0;
    do {
      iVar3 = fioFILE::ReadChunk(_sioFilePtr,(fioCHUNK *)0x0);
      if (iVar3 != 0x2e7) {
        return 0;
      }
      fioFILE::Read(_sioFilePtr,(char *)(*(int *)(param_1 + 0x90) + iVar4),0x40);
      (**(code **)(*(int *)_sioFilePtr + 0x14))(iVar4 + 0x40 + *(int *)(param_1 + 0x90),4,4);
      (**(code **)(*(int *)_sioFilePtr + 0x14))(iVar4 + 0x44 + *(int *)(param_1 + 0x90),4,4);
      (**(code **)(*(int *)_sioFilePtr + 0x14))(iVar4 + 0x50 + *(int *)(param_1 + 0x90),4,4);
      (**(code **)(*(int *)_sioFilePtr + 0x14))(iVar4 + 0x54 + *(int *)(param_1 + 0x90),4,4);
      (**(code **)(*(int *)_sioFilePtr + 0x14))(iVar4 + 0x58 + *(int *)(param_1 + 0x90),4,4);
      iVar3 = fioFILE::ReadChunk(_sioFilePtr,(fioCHUNK *)0x0);
      if (iVar3 == 0x2f3) {
        (**(code **)(*(int *)_sioFilePtr + 0x14))(iVar4 + 0x48 + *(int *)(param_1 + 0x90),4,4);
        iVar3 = fioFILE::ReadChunk(_sioFilePtr,(fioCHUNK *)0x0);
        if (iVar3 != 0x2f4) {
          return 0;
        }
        (**(code **)(*(int *)_sioFilePtr + 0x14))(iVar4 + 0x4c + *(int *)(param_1 + 0x90),4,4);
        iVar3 = fioFILE::ReadChunk(_sioFilePtr,(fioCHUNK *)0x0);
        if (iVar3 != 0x2f7) goto LAB_005848fe;
        (**(code **)(*(int *)_sioFilePtr + 0x14))(iVar4 + 0x58 + *(int *)(param_1 + 0x90),0x28,4);
      }
      else {
LAB_005848fe:
        fioFILE::RevertChunk(_sioFilePtr,(fioCHUNK *)0x0);
      }
      iVar1 = iVar1 + 1;
      iVar4 = iVar4 + 0x88;
    } while (iVar1 < *(int *)(param_1 + 0x8c));
  }
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x8c)) {
    iVar4 = 0;
    do {
      animSEQ::PrepareDir((animSEQ *)(*(int *)(param_1 + 0x90) + iVar4));
      iVar1 = iVar1 + 1;
      iVar4 = iVar4 + 0x88;
    } while (iVar1 < *(int *)(param_1 + 0x8c));
  }
  iVar1 = _sioReadLastChunk();
  return (uint)(iVar1 != 0);
}




/* from: engine:sceneio_tpl.cpp
   addr: 00584960 */

int __fastcall _sioReadObjAnimList(animTPL *param_1)

{
  m3dMATR *this;
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  m3dSPL *pmVar5;
  objOBJ *poVar6;
  short unaff_BP;
  int iVar7;
  undefined4 uVar8;
  
  iVar1 = fioFILE::ReadChunk(_sioFilePtr,(fioCHUNK *)0x0);
  if (iVar1 != 0x2e8) {
    fioFILE::RevertChunk(_sioFilePtr,(fioCHUNK *)0x0);
    return 1;
  }
  (**(code **)(*(int *)_sioFilePtr + 0x14))(param_1 + 0x9c,4,4);
  iVar1 = *(int *)(param_1 + 0x9c);
  piVar2 = (int *)operator_new(iVar1 * 0x40 + 4);
  if (piVar2 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = piVar2 + 1;
    *piVar2 = iVar1;
    piVar2 = piVar3;
    if (-1 < iVar1 + -1) {
      do {
        *piVar2 = 0;
        piVar2[1] = 0;
        piVar2[5] = 0;
        piVar2[10] = 0;
        piVar2[0xe] = 0;
        piVar2[0xf] = 0;
        iVar1 = iVar1 + -1;
        piVar2 = piVar2 + 0x10;
      } while (iVar1 != 0);
    }
  }
  *(int **)(param_1 + 0xa0) = piVar3;
  if (piVar3 == (int *)0x0) {
    return 0;
  }
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x9c)) {
    iVar7 = 0;
    do {
      iVar4 = fioFILE::ReadChunk(_sioFilePtr,(fioCHUNK *)0x0);
      if (iVar4 != 0x2e9) {
        return 0;
      }
      (**(code **)(*(int *)_sioFilePtr + 0x14))(iVar7 + 4 + *(int *)(param_1 + 0xa0),4,4);
      iVar4 = fioFILE::ReadChunk(_sioFilePtr,(fioCHUNK *)&stack0xffffffe4);
      while ((iVar4 != 0 && (unaff_BP != 1))) {
        switch(unaff_BP) {
        case 0x2ea:
          pmVar5 = fioFILE::ReadSpline(_sioFilePtr);
          *(m3dSPL **)(iVar7 + 0x14 + *(int *)(param_1 + 0xa0)) = pmVar5;
          iVar4 = *(int *)(iVar7 + 0x14 + *(int *)(param_1 + 0xa0));
          break;
        case 0x2eb:
          pmVar5 = fioFILE::ReadSpline(_sioFilePtr);
          *(m3dSPL **)(iVar7 + 0x28 + *(int *)(param_1 + 0xa0)) = pmVar5;
          iVar4 = *(int *)(iVar7 + 0x28 + *(int *)(param_1 + 0xa0));
          break;
        case 0x2ec:
          pmVar5 = fioFILE::ReadSpline(_sioFilePtr);
          *(m3dSPL **)(iVar7 + 0x38 + *(int *)(param_1 + 0xa0)) = pmVar5;
          iVar4 = *(int *)(iVar7 + 0x38 + *(int *)(param_1 + 0xa0));
          break;
        case 0x2ed:
          pmVar5 = fioFILE::ReadSpline(_sioFilePtr);
          *(m3dSPL **)(iVar7 + 0x3c + *(int *)(param_1 + 0xa0)) = pmVar5;
          iVar4 = *(int *)(iVar7 + 0x3c + *(int *)(param_1 + 0xa0));
          break;
        default:
          fioFILE::SkipChunk(_sioFilePtr,(fioCHUNK *)&stack0xffffffe4);
          goto LAB_00584bb4;
        case 0x2fa:
          (**(code **)(*(int *)_sioFilePtr + 0x14))(iVar7 + 8 + *(int *)(param_1 + 0xa0),0xc,4);
          *(uint *)(*(int *)(param_1 + 0xa0) + iVar7) =
               *(uint *)(*(int *)(param_1 + 0xa0) + iVar7) | 1;
          goto LAB_00584bb4;
        case 0x2fb:
          uVar8 = 0x10;
          iVar4 = iVar7 + 0x18 + *(int *)(param_1 + 0xa0);
          goto LAB_00584b3e;
        case 0x2fc:
          uVar8 = 0xc;
          iVar4 = iVar7 + 0x2c + *(int *)(param_1 + 0xa0);
LAB_00584b3e:
          (**(code **)(*(int *)_sioFilePtr + 0x14))(iVar4,uVar8,4);
          *(uint *)(*(int *)(param_1 + 0xa0) + iVar7) =
               *(uint *)(*(int *)(param_1 + 0xa0) + iVar7) | 1;
          goto LAB_00584bb4;
        }
        if (iVar4 == 0) {
          return 0;
        }
LAB_00584bb4:
        iVar4 = fioFILE::ReadChunk(_sioFilePtr,(fioCHUNK *)&stack0xffffffe4);
      }
      if ((*(byte *)(iVar7 + *(int *)(param_1 + 0xa0)) & 1) == 0) {
        poVar6 = objFindAnimNmb(*(objOBJ **)(param_1 + 0x88),iVar1);
        if (poVar6 == (objOBJ *)0x0) {
          apLog(s_Template__s__invalid_Anim,param_1 + 0x44);
        }
        else {
          this = (m3dMATR *)(poVar6 + 0x7c);
          iVar4 = *(int *)(param_1 + 0xa0) + iVar7;
          m3dMATR::GetTranslate
                    (this,(float *)(iVar4 + 8),(float *)(iVar4 + 0xc),(float *)(iVar4 + 0x10));
          m3dQUAT::SetMatr((m3dQUAT *)(iVar7 + 0x18 + *(int *)(param_1 + 0xa0)),this);
          iVar4 = iVar7 + *(int *)(param_1 + 0xa0);
          m3dMATR::GetScale(this,(float *)(iVar4 + 0x2c),(float *)(iVar4 + 0x30),
                            (float *)(iVar4 + 0x34));
          *(uint *)(*(int *)(param_1 + 0xa0) + iVar7) =
               *(uint *)(*(int *)(param_1 + 0xa0) + iVar7) | 1;
        }
      }
      iVar1 = iVar1 + 1;
      iVar7 = iVar7 + 0x40;
    } while (iVar1 < *(int *)(param_1 + 0x9c));
  }
  return 1;
}




/* from: engine:sceneio_tpl.cpp
   addr: 00584CE0 */

int __fastcall _sioReadBVolList(animTPL *param_1)

{
  int iVar1;
  int *piVar2;
  abvBVOL *paVar3;
  int iVar4;
  m3dVOL *pmVar5;
  abvVOL_UPD *paVar6;
  int unaff_EBP;
  abvBVOL *this;
  int iVar7;
  int iVar8;
  undefined1 local_4 [4];
  
  iVar1 = fioFILE::ReadChunk(_sioFilePtr,(fioCHUNK *)0x0);
  if (iVar1 != 0x2f9) {
    fioFILE::RevertChunk(_sioFilePtr,(fioCHUNK *)0x0);
    return 1;
  }
  (**(code **)(*(int *)_sioFilePtr + 0x14))(local_4,4,4);
  if (unaff_EBP != *(int *)(param_1 + 0x8c)) {
    return 0;
  }
  if (unaff_EBP != 0) {
    piVar2 = (int *)operator_new(unaff_EBP * 0x24 + 4);
    if (piVar2 == (int *)0x0) {
      paVar3 = (abvBVOL *)0x0;
    }
    else {
      *piVar2 = unaff_EBP;
      paVar3 = (abvBVOL *)(piVar2 + 1);
      this = paVar3;
      if (-1 < unaff_EBP + -1) {
        do {
          abvBVOL::abvBVOL(this);
          unaff_EBP = unaff_EBP + -1;
          this = this + 0x24;
        } while (unaff_EBP != 0);
      }
    }
    iVar1 = 0;
    *(abvBVOL **)(param_1 + 0xb8) = paVar3;
    if (paVar3 == (abvBVOL *)0x0) {
      return 0;
    }
    iVar8 = 0;
    if (0 < *(int *)(param_1 + 0x8c)) {
      do {
        iVar7 = *(int *)(param_1 + 0xb8) + iVar1;
        iVar4 = fioFILE::ReadChunk(_sioFilePtr,(fioCHUNK *)0x0);
        if (iVar4 != 0x2f8) {
          return 0;
        }
        pmVar5 = fioFILE::ReadVol(_sioFilePtr);
        if (pmVar5 == (m3dVOL *)0x0) {
          return 0;
        }
        iVar4 = fioFILE::ReadVol(_sioFilePtr,(m3dVOL *)(iVar7 + 0xc));
        if (iVar4 == 0) {
          return 0;
        }
        paVar6 = abvVOL_UPD::Make(pmVar5);
        *(abvVOL_UPD **)(iVar7 + 8) = paVar6;
        if (paVar6 == (abvVOL_UPD *)0x0) {
          return 0;
        }
        switch(*(undefined4 *)(*(int *)(paVar6 + 4) + 4)) {
        case 1:
          (**(code **)(*(int *)_sioFilePtr + 0x14))(paVar6 + 8,0xc,4);
          (**(code **)(*(int *)_sioFilePtr + 0x14))(*(int *)(iVar7 + 8) + 0x14,0xc,4);
          break;
        case 2:
          (**(code **)(*(int *)_sioFilePtr + 0x14))(paVar6 + 8,8,4);
          (**(code **)(*(int *)_sioFilePtr + 0x14))(*(int *)(iVar7 + 8) + 0x10,8,4);
          (**(code **)(*(int *)_sioFilePtr + 0x14))(*(int *)(iVar7 + 8) + 0x18,8,4);
          (**(code **)(*(int *)_sioFilePtr + 0x14))(*(int *)(iVar7 + 8) + 0x20,8,4);
          (**(code **)(*(int *)_sioFilePtr + 0x14))(*(int *)(iVar7 + 8) + 0x28,4,4);
          (**(code **)(*(int *)_sioFilePtr + 0x14))(*(int *)(iVar7 + 8) + 0x2c,4,4);
          break;
        case 3:
          (**(code **)(*(int *)_sioFilePtr + 0x14))(paVar6 + 8,0xc,4);
          break;
        case 4:
          fioFILE::ReadVol(_sioFilePtr,(m3dVOL *)(paVar6 + 8));
        }
        iVar8 = iVar8 + 1;
        iVar1 = iVar1 + 0x24;
      } while (iVar8 < *(int *)(param_1 + 0x8c));
    }
  }
  return 1;
}




/* from: engine:sceneio_tpl.cpp
   addr: 00584F20 */

int __fastcall _sioReadObjSkinList(animTPL *param_1)

{
  objMOD_SKIN *poVar1;
  objMOD_SKIN *poVar2;
  animTPL *paVar3;
  int iVar4;
  void *pvVar5;
  objMOD_SKIN *poVar6;
  int iVar7;
  int iVar8;
  m3dSPL *pmVar9;
  animTPL *unaff_EBP;
  int iVar10;
  
  iVar4 = fioFILE::ReadChunk(_sioFilePtr,(fioCHUNK *)0x0);
  if (iVar4 == 0x2ee) {
    paVar3 = param_1 + 0xa8;
    (**(code **)(*(int *)_sioFilePtr + 0x14))(paVar3,4,4);
    pvVar5 = apCalloc(*(uint *)paVar3,4);
    *(void **)(param_1 + 0xac) = pvVar5;
    if (pvVar5 == (void *)0x0) {
      return 0;
    }
    iVar4 = 0;
    if (0 < (int)*(uint *)paVar3) {
      do {
        poVar6 = (objMOD_SKIN *)operator_new(0x44);
        if (poVar6 == (objMOD_SKIN *)0x0) {
          return 0;
        }
        poVar6 = (objMOD_SKIN *)objMOD_SKIN::objMOD_SKIN(poVar6);
        if (poVar6 == (objMOD_SKIN *)0x0) {
          return 0;
        }
        *(objMOD_SKIN **)(*(int *)(param_1 + 0xac) + iVar4 * 4) = poVar6;
        iVar7 = fioFILE::ReadChunk(_sioFilePtr,(fioCHUNK *)0x0);
        if (iVar7 != 0x2ef) {
          return 0;
        }
        poVar1 = poVar6 + 0x24;
        (**(code **)(*(int *)_sioFilePtr + 0x14))(poVar1,4,4);
        poVar2 = poVar6 + 0x2c;
        (**(code **)(*(int *)_sioFilePtr + 0x14))(poVar2,4,4);
        (**(code **)(*(int *)_sioFilePtr + 0x14))(poVar6 + 0x38,4,4);
        iVar7 = objMOD_SKIN::Init(poVar6,*(int *)poVar1,*(int *)poVar2,*(int *)(poVar6 + 0x38),0);
        if (iVar7 == 0) {
          return 0;
        }
        (**(code **)(*(int *)_sioFilePtr + 0x14))
                  (*(undefined4 *)(poVar6 + 0x30),*(int *)poVar1 << 2,4);
        iVar7 = fioFILE::ReadChunk(_sioFilePtr,(fioCHUNK *)0x0);
        if (iVar7 != 0x2f0) {
          return 0;
        }
        iVar7 = 0;
        if (0 < *(int *)poVar2) {
          do {
            (**(code **)(*(int *)_sioFilePtr + 0x14))(*(int *)(poVar6 + 0x34) + iVar7 * 8,4,4);
            (**(code **)(*(int *)_sioFilePtr + 0x14))(iVar7 * 8 + 4 + *(int *)(poVar6 + 0x34),4,4);
            iVar7 = iVar7 + 1;
          } while (iVar7 < *(int *)poVar2);
        }
        iVar7 = fioFILE::ReadChunk(_sioFilePtr,(fioCHUNK *)0x0);
        if (iVar7 != 0x2f1) {
          return 0;
        }
        iVar7 = 0;
        if (0 < *(int *)(poVar6 + 0x38)) {
          iVar10 = 0;
          do {
            iVar8 = fioFILE::ReadChunk(_sioFilePtr,(fioCHUNK *)0x0);
            if (iVar8 != 0x2f2) {
              return 0;
            }
            fioFILE::Read(_sioFilePtr,(char *)(*(int *)(poVar6 + 0x3c) + 4 + iVar10),0x40);
            (**(code **)(*(int *)_sioFilePtr + 0x14))
                      (*(undefined4 *)(*(int *)(poVar6 + 0x3c) + 0x44 + iVar10),*(int *)poVar2 * 0xc
                       ,4);
            iVar8 = fioFILE::ReadChunk(_sioFilePtr,(fioCHUNK *)0x0);
            if (iVar8 == 0x2f5) {
              (**(code **)(*(int *)_sioFilePtr + 0x14))(*(int *)(poVar6 + 0x3c) + 0x48 + iVar10,4,4)
              ;
            }
            else {
              fioFILE::RevertChunk(_sioFilePtr,(fioCHUNK *)0x0);
            }
            iVar8 = fioFILE::ReadChunk(_sioFilePtr,(fioCHUNK *)0x0);
            if (iVar8 == 0x2f6) {
              pmVar9 = fioFILE::ReadSpline(_sioFilePtr);
              *(m3dSPL **)(*(int *)(poVar6 + 0x3c) + 0x4c + iVar10) = pmVar9;
              if (*(int *)(*(int *)(poVar6 + 0x3c) + 0x4c + iVar10) == 0) {
                return 0;
              }
            }
            else {
              fioFILE::RevertChunk(_sioFilePtr,(fioCHUNK *)0x0);
            }
            iVar7 = iVar7 + 1;
            iVar10 = iVar10 + 0x50;
          } while (iVar7 < *(int *)(poVar6 + 0x38));
        }
        iVar4 = iVar4 + 1;
        param_1 = unaff_EBP;
      } while (iVar4 < *(int *)(unaff_EBP + 0xa8));
    }
  }
  else {
    fioFILE::RevertChunk(_sioFilePtr,(fioCHUNK *)0x0);
  }
  return 1;
}

