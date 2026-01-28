
/* from: engine:sceneio.cpp
   addr: 00582340 */

void __fastcall sioSetSourceFile(fioFILE *param_1)

{
  _sioFilePtr = param_1;
  (**(code **)(*(int *)param_1 + 0xc))(0,1);
  return;
}




/* from: engine:sceneio.cpp
   addr: 00582350 */

int __fastcall sioReadScene(scnSCENE *param_1)

{
  int iVar1;
  objOBJ *poVar2;
  cdtCOLL_SCN *pcVar3;
  camCAMERA *pcVar4;
  ushort local_10;
  undefined2 local_e;
  undefined2 uStack_c;
  undefined4 local_a;
  undefined4 local_6;
  
  local_10 = 0;
  local_e = 0xffff;
  uStack_c = 0xffff;
  local_a = 0xffffffff;
  local_6 = 0xffffffff;
  iVar1 = (**(code **)(*(int *)_sioFilePtr + 0x10))();
  do {
    if (((iVar1 != 0) || (iVar1 = fioFILE::ReadChunk(_sioFilePtr,(fioCHUNK *)&local_10), iVar1 == 0)
        ) || (iVar1 = (**(code **)(*(int *)_sioFilePtr + 0x10))(), iVar1 != 0)) {
      apFree(_sioTexListNmb);
      _sioTexListNmb = (int *)0x0;
      return 1;
    }
    fioFILE::RevertChunk(_sioFilePtr,(fioCHUNK *)0x0);
    if (local_10 < 0x21e) {
      if (local_10 == 0x21d) {
        _sioReadNamedSelList((int *)(param_1 + 0x78),(selSEL **)(param_1 + 0x7c));
      }
      else if (local_10 < 0x1b9) {
        if (local_10 == 0x1b8) {
          _sioReadInstList(param_1);
        }
        else if (local_10 == 0xf0) {
          poVar2 = _sioReadObj();
          *(objOBJ **)(param_1 + 0x44) = poVar2;
        }
        else {
          if ((local_10 < 0x154) || (0x155 < local_10)) goto LAB_005824b8;
          _sioReadTex();
        }
      }
      else if (local_10 == 0x1ea) {
        _sioReadTplList(param_1);
      }
      else {
        if (local_10 != 0x21c) goto LAB_005824b8;
        pcVar3 = _sioReadColl_OLD();
        *(cdtCOLL_SCN **)(param_1 + 0x50) = pcVar3;
        if (pcVar3 != (cdtCOLL_SCN *)0x0) {
          *(scnSCENE **)(pcVar3 + 100) = param_1;
        }
      }
    }
    else if (local_10 < 0x281) {
      if (local_10 == 0x280) {
        _sioReadLightList(param_1);
      }
      else if (local_10 == 0x21e) {
        fioFILE::ReadChunk(_sioFilePtr,(fioCHUNK *)&local_10);
        iVar1 = _sioReadPSheet((psSHEET **)(param_1 + 0x80));
        if (iVar1 == 0) {
          apLogErr(s_Cannot_parse_global_scene_script);
        }
      }
      else {
        if (local_10 != 0x21f) goto LAB_005824b8;
        pcVar3 = _sioReadColl();
        *(cdtCOLL_SCN **)(param_1 + 0x50) = pcVar3;
        if (pcVar3 != (cdtCOLL_SCN *)0x0) {
          *(scnSCENE **)(pcVar3 + 100) = param_1;
        }
      }
    }
    else if (local_10 == 0x3ac) {
      pcVar4 = _sioReadCamera();
      *(camCAMERA **)(param_1 + 0x84) = pcVar4;
    }
    else {
LAB_005824b8:
      fioFILE::SkipChunk(_sioFilePtr,(fioCHUNK *)&local_10);
    }
    iVar1 = (**(code **)(*(int *)_sioFilePtr + 0x10))();
  } while( true );
}




/* from: engine:sceneio.cpp
   addr: 00582510 */

int __fastcall sioReadSceneTex(void)

{
  int iVar1;
  ushort local_10;
  undefined2 local_e;
  undefined2 uStack_c;
  undefined4 local_a;
  undefined4 local_6;
  
  local_10 = 0;
  local_e = 0xffff;
  uStack_c = 0xffff;
  local_a = 0xffffffff;
  local_6 = 0xffffffff;
  iVar1 = (**(code **)(*(int *)_sioFilePtr + 0x10))();
  while ((iVar1 == 0 && (iVar1 = fioFILE::ReadChunk(_sioFilePtr,(fioCHUNK *)&local_10), iVar1 != 0))
        ) {
    iVar1 = (**(code **)(*(int *)_sioFilePtr + 0x10))();
    if (iVar1 != 0) break;
    if ((local_10 < 0x154) || (0x155 < local_10)) {
      fioFILE::SkipChunk(_sioFilePtr,(fioCHUNK *)&local_10);
    }
    else {
      fioFILE::RevertChunk(_sioFilePtr,(fioCHUNK *)0x0);
      _sioReadTex();
    }
    iVar1 = (**(code **)(*(int *)_sioFilePtr + 0x10))();
  }
  apFree(_sioTexListNmb);
  _sioTexListNmb = (int *)0x0;
  return 1;
}




/* from: engine:sceneio.cpp
   addr: 005825D0 */

int __fastcall sioReadTemplate(animTPL *param_1,int param_2)

{
  int iVar1;
  objOBJ *poVar2;
  
  iVar1 = fioFILE::ReadChunk(_sioFilePtr,(fioCHUNK *)0x0);
  if (iVar1 != 0x2e4) {
    fioFILE::RevertChunk(_sioFilePtr,(fioCHUNK *)0x0);
    return 0;
  }
  iVar1 = fioFILE::ReadChunk(_sioFilePtr,(fioCHUNK *)0x0);
  if (iVar1 != 0x2e5) {
    return 0;
  }
  (**(code **)(*(int *)_sioFilePtr + 0x14))(param_1,4,4);
  fioFILE::Read(_sioFilePtr,(char *)(param_1 + 4),0x40);
  fioFILE::Read(_sioFilePtr,(char *)(param_1 + 0x44),0x40);
  if (*(int *)param_1 != 0x4154504c) {
    return 0;
  }
  if (param_2 != 0) {
    iVar1 = _sioReadTex();
    if (iVar1 == 0) {
      return 0;
    }
  }
  poVar2 = _sioReadObj();
  *(objOBJ **)(param_1 + 0x88) = poVar2;
  if (poVar2 == (objOBJ *)0x0) {
    return 0;
  }
  iVar1 = _sioReadObjSkinList(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = _sioReadObjAnimList(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = _sioReadAnimSeq(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = _sioReadBVolList(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = _sioReadPSheet((psSHEET **)(param_1 + 0xc4));
  if (iVar1 == 0) {
    apLogErr(s_Cannot_parse_script_for_template,param_1 + 4);
  }
  iVar1 = _sioReadNamedSelList((int *)(param_1 + 0xbc),(selSEL **)(param_1 + 0xc0));
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = _sioReadLastChunk();
  if (iVar1 == 0) {
    return 0;
  }
  if (param_2 != 0) {
    apFree(_sioTexListNmb);
    _sioTexListNmb = (int *)0x0;
  }
  animCleanConstSpl(param_1);
  animCompressAnim(param_1);
  animCleanConstSpl(param_1);
  return 1;
}

