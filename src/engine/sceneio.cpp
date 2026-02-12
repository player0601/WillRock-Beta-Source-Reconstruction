/* from: engine:sceneio.cpp
   addr: 00582340 */

void sioSetSourceFile(fioFILE *file)

{
  sioFilePtr = file;
  (**(code **)(*(int *)file + 0xc))(0,1);
  return;
}

/* from: engine:sceneio.cpp
   addr: 00582350 */

int sioReadScene(scnSCENE *scene)

{
  int result;
  objOBJ *rootObject;
  cdtCOLL_SCN *collision;
  camCAMERA *camera;
  ushort chunkID;
  undefined2 local_e;
  undefined2 uStack_c;
  undefined4 local_a;
  undefined4 local_6;
  
  chunkID = 0;
  local_e = 0xffff;
  uStack_c = 0xffff;
  local_a = 0xffffffff;
  local_6 = 0xffffffff;
  result = (**(code **)(*(int *)sioFilePtr + 0x10))();
  do {
    if (((result != 0) || (result = fioFILE::ReadChunk(sioFilePtr,(fioCHUNK *)&chunkID), result == 0)
        ) || (result = (**(code **)(*(int *)sioFilePtr + 0x10))(), result != 0)) {
      apFree(sioTexListNmb);
      sioTexListNmb = NULL;
      return 1;
    }
    fioFILE::RevertChunk(sioFilePtr,(fioCHUNK *)0x0);
    if (chunkID < 0x21e) {
      if (chunkID == 0x21d) {
        sioReadNamedSelList((int *)(scene + 0x78),(selSEL **)(scene + 0x7c));
      }
      else if (chunkID < 0x1b9) {
        if (chunkID == 0x1b8) {
          sioReadInstList(scene);
        }
        else if (chunkID == 0xf0) {
          rootObject = sioReadObj();
          *(objOBJ **)(scene + 0x44) = rootObject;
        }
        else {
          if ((chunkID < 0x154) || (0x155 < chunkID)) goto LAB_005824b8;
          sioReadTex();
        }
      }
      else if (chunkID == 0x1ea) {
        sioReadTplList(scene);
      }
      else {
        if (chunkID != 0x21c) goto LAB_005824b8;
        collision = sioReadColl_OLD();
        *(cdtCOLL_SCN **)(scene + 0x50) = collision;
        if (collision != (cdtCOLL_SCN *)0x0) {
          *(scnSCENE **)(collision + 100) = scene;
        }
      }
    }
    else if (chunkID < 0x281) {
      if (chunkID == 0x280) {
        sioReadLightList(scene);
      }
      else if (chunkID == 0x21e) {
        fioFILE::ReadChunk(_sioFilePtr,(fioCHUNK *)&chunkID);
        result = sioReadPSheet((psSHEET **)(scene + 0x80));
        if (result == 0) {
          apLogErr("Cannot parse global scene script");
        }
      }
      else {
        if (chunkID != 0x21f) goto LAB_005824b8;
        collision = sioReadColl();
        *(cdtCOLL_SCN **)(scene + 0x50) = collision;
        if (collision != (cdtCOLL_SCN *)0x0) {
          *(scnSCENE **)(collision + 100) = scene;
        }
      }
    }
    else if (chunkID == 0x3ac) {
      camera = sioReadCamera();
      *(camCAMERA **)(scene + 0x84) = camera;
    }
    else {
LAB_005824b8:
      fioFILE::SkipChunk(sioFilePtr,(fioCHUNK *)&chunkID);
    }
    result = (**(code **)(*(int *)sioFilePtr + 0x10))();
  } while( true );
}

/* from: engine:sceneio.cpp
   addr: 00582510 */

int sioReadSceneTex(void)

{
  int result;
  ushort chunkID;
  undefined2 local_e;
  undefined2 uStack_c;
  undefined4 local_a;
  undefined4 local_6;
  
  chunkID = 0;
  local_e = 0xffff;
  uStack_c = 0xffff;
  local_a = 0xffffffff;
  local_6 = 0xffffffff;
  result = (**(code **)(*(int *)sioFilePtr + 0x10))();
  while ((result == 0 && (result = fioFILE::ReadChunk(sioFilePtr,(fioCHUNK *)&chunkID), result != 0))
        ) {
    result = (**(code **)(*(int *)sioFilePtr + 0x10))();
    if (result != 0) break;
    if ((chunkID < 0x154) || (0x155 < chunkID)) {
      fioFILE::SkipChunk(sioFilePtr,(fioCHUNK *)&chunkID);
    }
    else {
      fioFILE::RevertChunk(sioFilePtr,(fioCHUNK *)0x0);
      sioReadTex();
    }
    result = (**(code **)(*(int *)sioFilePtr + 0x10))();
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
  result = sioReadPSheet(&tpl->propertySheet);
  if (result == 0) {
    apLogErr("Cannot parse script for template: %s", tpl->templateName);
  }
  result = sioReadNamedSelList(&tpl->numSelections, &tpl->selectionList);
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
