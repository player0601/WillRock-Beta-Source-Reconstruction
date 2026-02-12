
/* from: engine:sceneio.cpp
   addr: 00582340 */

void sioSetSourceFile(fioFILE *param_1)

{
  sioFilePtr = file;
  (**(code **)(*(int *)param_1 + 0xc))(0,1);
  return;
}

/* from: engine:sceneio.cpp
   addr: 00582350 */

int sioReadScene(scnSCENE *param_1)

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
  iVar1 = (**(code **)(*(int *)sioFilePtr + 0x10))();
  do {
    if (((iVar1 != 0) || (iVar1 = fioFILE::ReadChunk(sioFilePtr,(fioCHUNK *)&local_10), iVar1 == 0)
        ) || (iVar1 = (**(code **)(*(int *)sioFilePtr + 0x10))(), iVar1 != 0)) {
      apFree(sioTexListNmb);
      sioTexListNmb = NULL;
      return 1;
    }
    fioFILE::RevertChunk(_sioFilePtr,(fioCHUNK *)0x0);
    if (local_10 < 0x21e) {
      if (local_10 == 0x21d) {
        sioReadNamedSelList((int *)(param_1 + 0x78),(selSEL **)(param_1 + 0x7c));
      }
      else if (local_10 < 0x1b9) {
        if (local_10 == 0x1b8) {
          sioReadInstList(param_1);
        }
        else if (local_10 == 0xf0) {
          poVar2 = sioReadObj();
          *(objOBJ **)(param_1 + 0x44) = poVar2;
        }
        else {
          if ((local_10 < 0x154) || (0x155 < local_10)) goto LAB_005824b8;
          sioReadTex();
        }
      }
      else if (local_10 == 0x1ea) {
        sioReadTplList(param_1);
      }
      else {
        if (local_10 != 0x21c) goto LAB_005824b8;
        pcVar3 = sioReadColl_OLD();
        *(cdtCOLL_SCN **)(param_1 + 0x50) = pcVar3;
        if (pcVar3 != (cdtCOLL_SCN *)0x0) {
          *(scnSCENE **)(pcVar3 + 100) = param_1;
        }
      }
    }
    else if (local_10 < 0x281) {
      if (local_10 == 0x280) {
        sioReadLightList(param_1);
      }
      else if (local_10 == 0x21e) {
        fioFILE::ReadChunk(_sioFilePtr,(fioCHUNK *)&local_10);
        iVar1 = sioReadPSheet((psSHEET **)(param_1 + 0x80));
        if (iVar1 == 0) {
          apLogErr("Cannot parse global scene script");
        }
      }
      else {
        if (local_10 != 0x21f) goto LAB_005824b8;
        pcVar3 = sioReadColl();
        *(cdtCOLL_SCN **)(param_1 + 0x50) = pcVar3;
        if (pcVar3 != (cdtCOLL_SCN *)0x0) {
          *(scnSCENE **)(pcVar3 + 100) = param_1;
        }
      }
    }
    else if (local_10 == 0x3ac) {
      pcVar4 = sioReadCamera();
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
  iVar1 = (**(code **)(*(int *)sioFilePtr + 0x10))();
  while ((iVar1 == 0 && (iVar1 = fioFILE::ReadChunk(sioFilePtr,(fioCHUNK *)&local_10), iVar1 != 0))
        ) {
    iVar1 = (**(code **)(*(int *)sioFilePtr + 0x10))();
    if (iVar1 != 0) break;
    if ((local_10 < 0x154) || (0x155 < local_10)) {
      fioFILE::SkipChunk(sioFilePtr,(fioCHUNK *)&local_10);
    }
    else {
      fioFILE::RevertChunk(sioFilePtr,(fioCHUNK *)0x0);
      _sioReadTex();
    }
    iVar1 = (**(code **)(*(int *)sioFilePtr + 0x10))();
  }
  apFree(sioTexListNmb);
  sioTexListNmb = NULL;
  return 1;
}

/* from: engine:sceneio.cpp
   addr: 005825D0 */

int sioReadTemplate(animTPL* tpl, bool loadTexture)

{
  int result;
  objOBJ* rootObject;
  
  result = fioFILE::ReadChunk(sioFilePtr, NULL);
  if (result != 0x2e4) {
    fioFILE::RevertChunk(sioFilePtr, NULL);
    return 0;
  }
  result = fioFILE::ReadChunk(sioFilePtr, NULL);
  if (result != 0x2e5) {
    return 0;
  }
  sioFilePtr->Read(&tpl->magic, 4);
  fioFILE::Read(sioFilePtr, tpl->templateName, 0x40);
  fioFILE::Read(sioFilePtr, tpl->className, 0x40);
   
  if (tpl->magic != ATPL) { // magic header for TPL format (0x4154504c)
    return 0;
  }
  if (loadTextures != 0) {
    result = sioReadTex();
    if (result == 0) {
      return 0;
    }
  }
  rootObject = sioReadObj();
  tpl->rootObject = rootObject;
  if (rootObject == NULL) {
    return 0;
  }
  result = sioReadObjSkinList(tpl);
  if (result == 0) {
    return 0;
  }
  result = sioReadObjAnimList(tpl);
  if (result == 0) {
    return 0;
  }
  result = sioReadAnimSeq(tpl);
  if (result == 0) {
    return 0;
  }
  result = sioReadBVolList(tpl);
  if (result == 0) {
    return 0;
  }
  result = sioReadPSheet(&tpl->propertySheet); // 0xC4 
  if (result == 0) {
    apLogErr("Cannot parse script for template: %s", tpl->templateName);
  }
  result = sioReadNamedSelList(&tpl->numSelections, &tpl->selectionList); // 0xB4, 0xC0
  if (result == 0) {
    return 0;
  }
  result = sioReadLastChunk();
  if (result == 0) {
    return 0;
  }
  if (loadTextures != 0) {
    apFree(sioTexListNmb);
    sioTexListNmb = NULL;
  }
  animCleanConstSpl(tpl);
  animCompressAnim(tpl);
  animCleanConstSpl(tpl);
  return 1;
}
