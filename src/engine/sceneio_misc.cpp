
/* from: engine:sceneio_misc.cpp
   addr: 00582750 */

int __fastcall _sioReadLastChunk(void)

{
  int iVar1;
  
  iVar1 = fioFILE::ReadChunk(_sioFilePtr,(fioCHUNK *)0x0);
  if (iVar1 != 1) {
    fioFILE::RevertChunk(_sioFilePtr,(fioCHUNK *)0x0);
    return 0;
  }
  return 1;
}




/* from: engine:sceneio_misc.cpp
   addr: 00582780 */

int __fastcall _sioReadTex(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  txmTEXTURE *ptVar4;
  short unaff_BX;
  int unaff_EBP;
  int unaff_ESI;
  int iVar5;
  undefined1 local_58 [8];
  short local_50 [2];
  char acStack_4c [2];
  undefined4 local_4a;
  undefined4 local_46;
  
  stack0xffffffb2 = 0xffffffff;
  local_4a = 0xffffffff;
  local_46 = 0xffffffff;
  iVar5 = 0;
  local_50[0] = 0;
  fioFILE::ReadChunk(_sioFilePtr,(fioCHUNK *)local_50);
  if ((local_50[0] != 0x154) && (local_50[0] != 0x155)) {
    fioFILE::RevertChunk(_sioFilePtr,(fioCHUNK *)0x0);
    return 0;
  }
  (**(code **)(*(int *)_sioFilePtr + 0x14))(local_58,4,4);
  piVar1 = (int *)apRealloc(_sioTexListNmb,unaff_ESI * 4);
  iVar2 = 0;
  iVar3 = unaff_ESI;
  _sioTexListNmb = piVar1;
  if (piVar1 != (int *)0x0) {
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar1 = 0;
      piVar1 = piVar1 + 1;
    }
    if (unaff_BX == 0x155) {
      iVar5 = 0;
      if (0 < unaff_ESI) {
        do {
          iVar3 = fioFILE::ReadChunk(_sioFilePtr,(fioCHUNK *)0x0);
          if (iVar3 != 0x156) {
            return 0;
          }
          fioFILE::Read(_sioFilePtr,acStack_4c,0x40);
          iVar3 = fioFILE::ReadChunk(_sioFilePtr,(fioCHUNK *)0x0);
          if (iVar3 == 0x157) {
            ptVar4 = txmMANAGER::Add(txmManager,acStack_4c,0x100,0);
            if (ptVar4 == (txmTEXTURE *)0x0) {
              return 0;
            }
            *(uint *)(ptVar4 + 4) = *(uint *)(ptVar4 + 4) | 0x200;
            (**(code **)(*(int *)_sioFilePtr + 0x14))(&stack0xffffffa0,4,4);
            iVar3 = 0;
            if (0 < unaff_EBP) {
              do {
                iVar2 = fioFILE::ReadChunk(_sioFilePtr,(fioCHUNK *)0x0);
                if (iVar2 != 0x158) {
                  return 0;
                }
                fioFILE::Read(_sioFilePtr,acStack_4c,0x40);
                iVar2 = txmTEXTURE_LAY::Add((txmTEXTURE_LAY *)ptVar4,acStack_4c);
                if (iVar2 == -1) {
                  return 0;
                }
                iVar3 = iVar3 + 1;
              } while (iVar3 < unaff_EBP);
            }
          }
          else {
            ptVar4 = txmMANAGER::Add(txmManager,acStack_4c,0x100,0xffffffff);
            if (ptVar4 == (txmTEXTURE *)0x0) {
              return 0;
            }
            *(uint *)(ptVar4 + 4) = *(uint *)(ptVar4 + 4) | 0x200;
            fioFILE::RevertChunk(_sioFilePtr,(fioCHUNK *)0x0);
          }
          _sioTexListNmb[iVar5] = *(int *)(ptVar4 + 0x6c);
          iVar5 = iVar5 + 1;
        } while (iVar5 < unaff_ESI);
      }
    }
    else if (0 < unaff_ESI) {
      do {
        fioFILE::Read(_sioFilePtr,acStack_4c,0x40);
        ptVar4 = txmMANAGER::Add(txmManager,acStack_4c,0x100,0xffffffff);
        if (ptVar4 == (txmTEXTURE *)0x0) {
          return 0;
        }
        _sioTexListNmb[iVar5] = *(int *)(ptVar4 + 0x6c);
        iVar5 = iVar5 + 1;
        *(uint *)(ptVar4 + 4) = *(uint *)(ptVar4 + 4) | 0x200;
      } while (iVar5 < unaff_ESI);
    }
    iVar5 = fioFILE::ReadChunk(_sioFilePtr,(fioCHUNK *)0x0);
    if (iVar5 != 1) {
      fioFILE::RevertChunk(_sioFilePtr,(fioCHUNK *)0x0);
      return 0;
    }
    iVar2 = 1;
  }
  return iVar2;
}




/* from: engine:sceneio_misc.cpp
   addr: 005829E0 */

int __fastcall _sioReadPSheet(psSHEET **param_1)

{
  int iVar1;
  psSHEET *ppVar2;
  
  iVar1 = fioFILE::ReadChunk(_sioFilePtr,(fioCHUNK *)0x0);
  if (iVar1 == 0x1ba) {
    ppVar2 = *param_1;
    if (ppVar2 != (psSHEET *)0x0) {
      psSHEET::Empty(ppVar2);
      operator_delete(ppVar2);
    }
    fioFILE::Read(_sioFilePtr,(char *)&apBuffer,0x1000);
    ppVar2 = (psSHEET *)operator_new(0x10);
    if (ppVar2 == (psSHEET *)0x0) {
      ppVar2 = (psSHEET *)0x0;
    }
    else {
      *(undefined4 *)ppVar2 = 0;
      *(undefined4 *)(ppVar2 + 4) = 0;
      *(undefined4 *)(ppVar2 + 8) = 0;
      *(undefined4 *)(ppVar2 + 0xc) = 0;
    }
    *param_1 = ppVar2;
    if (ppVar2 == (psSHEET *)0x0) {
      return 0;
    }
    iVar1 = psSHEET::SetString(ppVar2,(char *)&apBuffer);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = psSHEET::ParseString(*param_1);
    if (iVar1 != 0) {
      apLogErr(s_Cannot_parse_script);
      return 0;
    }
  }
  else {
    fioFILE::RevertChunk(_sioFilePtr,(fioCHUNK *)0x0);
  }
  return 1;
}




/* from: engine:sceneio_misc.cpp
   addr: 00582AA0 */

int __fastcall _sioReadNamedSel(selSEL *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 *puStack_60;
  int iStack_5c;
  undefined1 local_48 [72];
  
  iStack_5c = 0x582ab5;
  iVar1 = fioFILE::ReadChunk(_sioFilePtr,(fioCHUNK *)0x0);
  if (iVar1 != 0x348) {
    iStack_5c = 0x582ac9;
    fioFILE::RevertChunk(_sioFilePtr,(fioCHUNK *)0x0);
    return 0;
  }
  puStack_60 = local_48;
  iStack_5c = 4;
  (**(code **)(*(int *)_sioFilePtr + 0x14))();
  fioFILE::Read(_sioFilePtr,&stack0xffffffb4,0x40);
  iVar1 = fioFILE::ReadChunk(_sioFilePtr,(fioCHUNK *)0x0);
  if (iVar1 == 0x349) {
    (**(code **)(*(int *)_sioFilePtr + 0x14))(&stack0xffffffb0,4,4);
    iVar1 = selSEL::Init(param_1,iStack_5c);
    if (iVar1 == 0) {
      return 0;
    }
    apNAME::SetName((apNAME *)(param_1 + 4),&stack0xffffffa8);
    iVar1 = 0;
    *(undefined1 **)param_1 = puStack_60;
    if (0 < *(int *)(param_1 + 0x44)) {
      iVar3 = 0;
      do {
        iVar2 = fioFILE::ReadChunk(_sioFilePtr,(fioCHUNK *)0x0);
        if (iVar2 != 0x34a) {
          return 0;
        }
        (**(code **)(*(int *)_sioFilePtr + 0x14))(&puStack_60,4,4);
        fioFILE::Read(_sioFilePtr,&stack0xffffffa8,0x40);
        apNAME::SetName((apNAME *)(*(int *)(param_1 + 0x48) + 4 + iVar3),&stack0xffffffa8);
        iVar1 = iVar1 + 1;
        *(undefined1 **)(iVar3 + *(int *)(param_1 + 0x48)) = puStack_60;
        iVar3 = iVar3 + 0x44;
      } while (iVar1 < *(int *)(param_1 + 0x44));
    }
    selSEL::Prepare(param_1);
    return 1;
  }
  return 0;
}




/* from: engine:sceneio_misc.cpp
   addr: 00582BD0 */

int __fastcall _sioReadNamedSelList(int *param_1,selSEL **param_2)

{
  int iVar1;
  int *piVar2;
  selSEL *psVar3;
  selSEL *psVar4;
  int iVar5;
  int *unaff_ESI;
  int iVar6;
  
  iVar1 = fioFILE::ReadChunk(_sioFilePtr,(fioCHUNK *)0x0);
  if (iVar1 != 0x21d) {
    fioFILE::RevertChunk(_sioFilePtr,(fioCHUNK *)0x0);
    return 1;
  }
  (**(code **)(*(int *)_sioFilePtr + 0x14))(param_1,4,4);
  iVar1 = *param_1;
  piVar2 = (int *)operator_new(iVar1 * 0x4c + 4);
  if (piVar2 == (int *)0x0) {
    psVar4 = (selSEL *)0x0;
  }
  else {
    psVar4 = (selSEL *)(piVar2 + 1);
    *piVar2 = iVar1;
    psVar3 = psVar4;
    if (-1 < iVar1 + -1) {
      do {
        *(int *)psVar3 = 0;
        psVar3[4] = (selSEL)0x0;
        *(int *)(psVar3 + 0x44) = 0;
        *(int *)(psVar3 + 0x48) = 0;
        iVar1 = iVar1 + -1;
        psVar3 = psVar3 + 0x4c;
      } while (iVar1 != 0);
    }
  }
  *param_2 = psVar4;
  if (psVar4 != (selSEL *)0x0) {
    iVar1 = 0;
    if (*param_1 < 1) {
      return 1;
    }
    iVar6 = 0;
    while (iVar5 = _sioReadNamedSel((selSEL *)(*unaff_ESI + iVar6)), iVar5 != 0) {
      iVar1 = iVar1 + 1;
      iVar6 = iVar6 + 0x4c;
      if (*param_1 <= iVar1) {
        return 1;
      }
    }
  }
  return 0;
}




/* from: engine:sceneio_misc.cpp
   addr: 00582CC0 */

camCAMERA * __fastcall _sioReadCamera(void)

{
  int iVar1;
  camCAMERA *pcVar2;
  m3dSPL *pmVar3;
  m3dSPL *pmVar4;
  m3dSPL *pmVar5;
  m3dSPL *pmVar6;
  m3dSPL *local_58;
  float local_54;
  short local_50;
  undefined2 uStack_4e;
  undefined2 uStack_4c;
  undefined4 local_4a;
  undefined4 local_46;
  m3dMATR local_40 [64];
  
  pmVar6 = (m3dSPL *)0x0;
  pmVar4 = (m3dSPL *)0x0;
  local_58 = (m3dSPL *)0x0;
  pmVar5 = (m3dSPL *)0x0;
  local_50 = 0;
  uStack_4e = 0xffff;
  uStack_4c = 0xffff;
  local_4a = 0xffffffff;
  local_46 = 0xffffffff;
  iVar1 = fioFILE::ReadChunk(_sioFilePtr,(fioCHUNK *)0x0);
  if (iVar1 != 0x3ac) {
    fioFILE::RevertChunk(_sioFilePtr,(fioCHUNK *)0x0);
    return (camCAMERA *)0x0;
  }
  pcVar2 = (camCAMERA *)operator_new(0x20c);
  if ((pcVar2 != (camCAMERA *)0x0) &&
     (pcVar2 = (camCAMERA *)camCAMERA::camCAMERA(pcVar2), pcVar2 != (camCAMERA *)0x0)) {
    iVar1 = fioFILE::ReadChunk(_sioFilePtr,(fioCHUNK *)&local_50);
    while( true ) {
      if ((iVar1 == 0) || (local_50 == 1)) {
        camCAMERA::TransformMatrC2W(pcVar2,local_40,0);
        camCAMERA::SetAngleVert(pcVar2,local_54);
        *(m3dSPL **)(pcVar2 + 0x208) = pmVar6;
        *(m3dSPL **)(pcVar2 + 0x200) = pmVar5;
        *(m3dSPL **)(pcVar2 + 0x204) = pmVar4;
        *(m3dSPL **)(pcVar2 + 0x1fc) = local_58;
        return pcVar2;
      }
      switch(local_50) {
      case 0x3ad:
        (**(code **)(*(int *)_sioFilePtr + 0x14))(local_40,0x40,4);
        goto LAB_00582e17;
      case 0x3ae:
        (**(code **)(*(int *)_sioFilePtr + 0x14))(&local_54,4,4);
        goto LAB_00582e17;
      case 0x3af:
        local_58 = fioFILE::ReadSpline(_sioFilePtr);
        pmVar3 = local_58;
        break;
      case 0x3b0:
        pmVar5 = fioFILE::ReadSpline(_sioFilePtr);
        pmVar3 = pmVar5;
        break;
      case 0x3b1:
        pmVar4 = fioFILE::ReadSpline(_sioFilePtr);
        pmVar3 = pmVar4;
        break;
      case 0x3b2:
        pmVar6 = fioFILE::ReadSpline(_sioFilePtr);
        pmVar3 = pmVar6;
        break;
      default:
        fioFILE::SkipChunk(_sioFilePtr,(fioCHUNK *)&local_50);
        goto LAB_00582e17;
      }
      if (pmVar3 == (m3dSPL *)0x0) break;
LAB_00582e17:
      iVar1 = fioFILE::ReadChunk(_sioFilePtr,(fioCHUNK *)&local_50);
    }
  }
  return (camCAMERA *)0x0;
}

