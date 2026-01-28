
/* from: engine:sceneio_scn.cpp
   addr: 00582E90 */

int __fastcall _sioReadInstList(scnSCENE *param_1)

{
  int iVar1;
  int iVar2;
  animINST *this;
  char *pcVar3;
  int unaff_ESI;
  undefined1 local_48 [72];
  
  iVar1 = fioFILE::ReadChunk(_sioFilePtr,(fioCHUNK *)0x0);
  if (iVar1 != 0x1b8) {
    fioFILE::RevertChunk(_sioFilePtr,(fioCHUNK *)0x0);
    return 0;
  }
  (**(code **)(*(int *)_sioFilePtr + 0x14))(local_48,4);
  iVar1 = 0;
  if (0 < unaff_ESI) {
    do {
      iVar2 = fioFILE::ReadChunk(_sioFilePtr,(fioCHUNK *)0x0);
      if (iVar2 != 0x1b9) {
        return 0;
      }
      this = scnSCENE::AllocInst(param_1);
      if (this == (animINST *)0x0) {
        return 0;
      }
      (**(code **)(*(int *)_sioFilePtr + 0x14))(this,4,4);
      if (*(int *)this != 0x41494e53) {
        return 0;
      }
      fioFILE::Read(_sioFilePtr,&stack0xffffffa8,0x40);
      animINST::SetName(this,&stack0xffffffa8);
      fioFILE::Read(_sioFilePtr,&stack0xffffffa8,0x40);
      animINST::SetNameTpl(this,&stack0xffffffa8);
      fioFILE::Read(_sioFilePtr,&stack0xffffffa8,0x40);
      animINST::SetNameClass(this,&stack0xffffffa8);
      fioFILE::Read(_sioFilePtr,&stack0xffffffa8,0x40);
      (**(code **)(*(int *)_sioFilePtr + 0x14))(this + 0x60,0x40,4);
      iVar2 = _sioReadPSheet((psSHEET **)(this + 0x134));
      if (iVar2 == 0) {
        pcVar3 = *(char **)(this + 0x18);
        if (pcVar3 == (char *)0x0) {
          pcVar3 = s_;
        }
        apLogErr(s_Cannot_parse_script_for_instance,pcVar3);
      }
      *(uint *)(this + 4) = *(uint *)(this + 4) | 0x800;
      iVar2 = fioFILE::ReadChunk(_sioFilePtr,(fioCHUNK *)0x0);
      if (iVar2 == 0x1cc) {
        (**(code **)(*(int *)_sioFilePtr + 0x14))(&stack0xffffffb0,4,4);
      }
      else {
        fioFILE::RevertChunk(_sioFilePtr,(fioCHUNK *)0x0);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < unaff_ESI);
  }
  iVar1 = _sioReadLastChunk();
  return (uint)(iVar1 != 0);
}




/* from: engine:sceneio_scn.cpp
   addr: 00583020 */

int __fastcall _sioReadTplList(scnSCENE *param_1)

{
  int iVar1;
  animTPL *paVar2;
  int iVar3;
  int unaff_EDI;
  scnSCENE *local_4;
  
  local_4 = param_1;
  iVar1 = fioFILE::ReadChunk(_sioFilePtr,(fioCHUNK *)0x0);
  if (iVar1 != 0x1ea) {
    fioFILE::RevertChunk(_sioFilePtr,(fioCHUNK *)0x0);
    return 0;
  }
  (**(code **)(*(int *)_sioFilePtr + 0x14))(&local_4,4,4);
  iVar1 = 0;
  if (0 < unaff_EDI) {
    do {
      paVar2 = scnSCENE::AllocTpl(param_1);
      if (paVar2 == (animTPL *)0x0) {
        return 0;
      }
      iVar3 = sioReadTemplate(paVar2,0);
      if (iVar3 == 0) {
        return 0;
      }
      iVar1 = iVar1 + 1;
      *(uint *)(paVar2 + 0x84) = *(uint *)(paVar2 + 0x84) | 0x840;
    } while (iVar1 < unaff_EDI);
  }
  iVar1 = _sioReadLastChunk();
  return (uint)(iVar1 != 0);
}




/* from: engine:sceneio_scn.cpp
   addr: 005830B0 */

int __fastcall _sioReadLightList(scnSCENE *param_1)

{
  char *pcVar1;
  int iVar2;
  void *pvVar3;
  short unaff_BX;
  int iVar4;
  undefined4 unaff_EBP;
  uint unaff_ESI;
  undefined1 local_18 [8];
  undefined2 local_10;
  undefined4 local_e;
  undefined4 local_a;
  undefined4 local_6;
  
  iVar4 = 0;
  local_10 = 0;
  local_e = 0xffffffff;
  local_a = 0xffffffff;
  local_6 = 0xffffffff;
  iVar2 = fioFILE::ReadChunk(_sioFilePtr,(fioCHUNK *)0x0);
  if (iVar2 != 0x280) {
    fioFILE::RevertChunk(_sioFilePtr,(fioCHUNK *)0x0);
    return 1;
  }
  (**(code **)(*(int *)_sioFilePtr + 0x14))(local_18,4);
  pvVar3 = apCalloc(0xfc,unaff_ESI);
  *(void **)(param_1 + 0x74) = pvVar3;
  if (pvVar3 == (void *)0x0) {
    return 0;
  }
  if (0 < (int)unaff_ESI) {
    do {
      iVar2 = fioFILE::ReadChunk(_sioFilePtr,(fioCHUNK *)0x0);
      if (iVar2 != 0x281) {
        return 0;
      }
      iVar2 = *(int *)(param_1 + 0x70);
      *(int *)(param_1 + 0x70) = iVar2 + 1;
      pcVar1 = (char *)(*(int *)(param_1 + 0x74) + iVar2 * 0xfc);
      (**(code **)(*(int *)_sioFilePtr + 0x14))(pcVar1 + 0x44,4,4);
      (**(code **)(*(int *)_sioFilePtr + 0x14))(&stack0xffffffd4,4,4);
      *(undefined4 *)(pcVar1 + 0x40) = unaff_EBP;
      iVar2 = fioFILE::ReadChunk(_sioFilePtr,(fioCHUNK *)&stack0xffffffe4);
      while ((iVar2 != 0 && (unaff_BX != 1))) {
        switch(unaff_BX) {
        case 0x282:
          fioFILE::Read(_sioFilePtr,pcVar1,0x40);
          break;
        case 0x283:
          (**(code **)(*(int *)_sioFilePtr + 0x14))(pcVar1 + 0x48,0x40,4);
          break;
        case 0x284:
          (**(code **)(*(int *)_sioFilePtr + 0x14))(pcVar1 + 0x88,4,4);
          (**(code **)(*(int *)_sioFilePtr + 0x14))(pcVar1 + 0x8c,4,4);
          (**(code **)(*(int *)_sioFilePtr + 0x14))(pcVar1 + 0x90,4,4);
          break;
        case 0x285:
          (**(code **)(*(int *)_sioFilePtr + 0x14))(pcVar1 + 0x98,4,4);
          (**(code **)(*(int *)_sioFilePtr + 0x14))(pcVar1 + 0x9c,4,4);
          break;
        case 0x286:
          (**(code **)(*(int *)_sioFilePtr + 0x14))(pcVar1 + 0xa0,4,4);
          (**(code **)(*(int *)_sioFilePtr + 0x14))(pcVar1 + 0xa4,4,4);
          break;
        case 0x287:
          (**(code **)(*(int *)_sioFilePtr + 0x14))(pcVar1 + 0xa8,4,4);
          break;
        case 0x288:
          iVar2 = _sioReadPSheet((psSHEET **)(pcVar1 + 0xf8));
          if (iVar2 == 0) {
            apLogErr(s_Cannot_parse_script_for_light__s,pcVar1);
          }
          break;
        default:
          fioFILE::SkipChunk(_sioFilePtr,(fioCHUNK *)&stack0xffffffe4);
          break;
        case 0x348:
          fioFILE::RevertChunk(_sioFilePtr,(fioCHUNK *)0x0);
          iVar2 = _sioReadNamedSel((selSEL *)(pcVar1 + 0xac));
          if (iVar2 == 0) {
            return 0;
          }
        }
        iVar2 = fioFILE::ReadChunk(_sioFilePtr,(fioCHUNK *)&stack0xffffffe4);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)unaff_ESI);
  }
  iVar2 = _sioReadLastChunk();
  return (uint)(iVar2 != 0);
}




/* from: engine:sceneio_scn.cpp
   addr: 00583460 */

cdtCOLL_SCN * __fastcall _sioReadColl(void)

{
  int iVar1;
  cdtCOLL_OBJ *this;
  int iVar2;
  cdtCOLL_OBJ *pcVar3;
  int unaff_EDI;
  undefined4 uVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined1 *puVar7;
  int iVar8;
  int iVar9;
  undefined1 auStack_18 [4];
  undefined1 local_14 [4];
  short local_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined4 local_a;
  undefined4 local_6;
  
  local_10 = 0;
  uStack_e = 0xffff;
  uStack_c = 0xffff;
  local_a = 0xffffffff;
  local_6 = 0xffffffff;
  iVar1 = fioFILE::ReadChunk(_sioFilePtr,(fioCHUNK *)0x0);
  if (iVar1 == 0x21f) {
    this = (cdtCOLL_OBJ *)operator_new(0x68);
    if (this != (cdtCOLL_OBJ *)0x0) {
      cdtCOLL_OBJ::cdtCOLL_OBJ(this);
      *(undefined ***)this = &cdtCOLL_SCN::_vftable_;
      iVar1 = fioFILE::ReadChunk(_sioFilePtr,(fioCHUNK *)&local_10);
      do {
        if ((iVar1 == 0) || (local_10 == 1)) {
          return (cdtCOLL_SCN *)this;
        }
        if (local_10 == 0x220) {
          (**(code **)(*(int *)_sioFilePtr + 0x14))(this + 8,0xc,4);
          (**(code **)(*(int *)_sioFilePtr + 0x14))(this + 0x1c,0xc,4);
          (**(code **)(*(int *)_sioFilePtr + 0x14))(this + 0x28,0xc,4);
          pcVar3 = this + 0x34;
          uVar4 = 4;
          iVar1 = 0xc;
LAB_0058366e:
          (**(code **)(*(int *)_sioFilePtr + 0x14))(pcVar3,iVar1,uVar4);
        }
        else {
          if (local_10 == 0x221) {
            iVar2 = 4;
            puVar5 = auStack_18;
            (**(code **)(*(int *)_sioFilePtr + 0x14))(puVar5,4);
            (**(code **)(*(int *)_sioFilePtr + 0x14))(&stack0xffffffd4,4,4);
            iVar8 = 0;
            iVar9 = 0;
            iVar1 = voxGRID::GetNVoxels((voxGRID *)(this + 8));
            iVar1 = cdtCOLL::AllocLists((cdtCOLL *)this,iVar1,iVar2,(int)puVar5,iVar9,iVar8);
            if (iVar1 == 0) {
              return (cdtCOLL_SCN *)0x0;
            }
            iVar2 = voxGRID::GetNVoxels((voxGRID *)(this + 8));
            iVar1 = *(int *)(this + 0x40);
            (**(code **)(*(int *)_sioFilePtr + 0x14))(iVar1,(iVar2 + 1) * 4,4);
            uVar4 = 2;
            iVar1 = iVar1 * 2;
            pcVar3 = *(cdtCOLL_OBJ **)(this + 0x44);
            goto LAB_0058366e;
          }
          if (local_10 == 0x222) {
            iVar9 = 4;
            iVar8 = 4;
            *(uint *)(this + 4) = *(uint *)(this + 4) | 1;
            puVar5 = local_14;
            (**(code **)(*(int *)_sioFilePtr + 0x14))();
            iVar6 = 4;
            (**(code **)(*(int *)_sioFilePtr + 0x14))(&stack0xffffffd8,4,4);
            iVar1 = unaff_EDI;
            puVar7 = puVar5;
            iVar2 = voxGRID::GetNVoxels((voxGRID *)(this + 8));
            iVar1 = cdtCOLL::AllocLists((cdtCOLL *)this,iVar2,iVar9,(int)puVar5,iVar1,iVar8);
            if (iVar1 == 0) {
              return (cdtCOLL_SCN *)0x0;
            }
            (**(code **)(*(int *)_sioFilePtr + 0x14))
                      (*(undefined4 *)(this + 0x50),(int)puVar7 * 4 + 4,4);
            (**(code **)(*(int *)_sioFilePtr + 0x14))(*(undefined4 *)(this + 0x54),iVar6 * 2,2);
            uVar4 = 4;
            iVar1 = *(int *)(this + 0x4c) * 4 + 4;
            pcVar3 = *(cdtCOLL_OBJ **)(this + 0x58);
            goto LAB_0058366e;
          }
        }
        iVar1 = fioFILE::ReadChunk(_sioFilePtr,(fioCHUNK *)&local_10);
      } while( true );
    }
  }
  else {
    fioFILE::RevertChunk(_sioFilePtr,(fioCHUNK *)0x0);
  }
  return (cdtCOLL_SCN *)0x0;
}




/* from: engine:sceneio_scn.cpp
   addr: 005836A0 */

cdtCOLL_SCN * __fastcall _sioReadColl_OLD(void)

{
  voxGRID *this;
  int iVar1;
  cdtCOLL_OBJ *this_00;
  int iVar2;
  cdtCOLL_OBJ **ppcVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uStack_58;
  cdtCOLL_OBJ *pcStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  cdtCOLL_OBJ *pcStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  cdtCOLL_OBJ *pcStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  voxGRID *pvStack_30;
  undefined4 uStack_2c;
  uint uVar7;
  
  iVar1 = fioFILE::ReadChunk(_sioFilePtr,(fioCHUNK *)0x0);
  if (iVar1 == 0x21c) {
    uVar7 = 4;
    (**(code **)(*(int *)_sioFilePtr + 0x14))();
    if ((uVar7 & 1) != 0) {
      return (cdtCOLL_SCN *)0x0;
    }
    uStack_2c = 0x5836f2;
    this_00 = (cdtCOLL_OBJ *)operator_new(0x68);
    if (this_00 != (cdtCOLL_OBJ *)0x0) {
      cdtCOLL_OBJ::cdtCOLL_OBJ(this_00);
      *(undefined ***)this_00 = &cdtCOLL_SCN::_vftable_;
      *(uint *)(this_00 + 4) = uVar7;
      this = (voxGRID *)(this_00 + 8);
      uStack_2c = 0xc;
      uStack_34 = 0x583722;
      pvStack_30 = this;
      (**(code **)(*(int *)_sioFilePtr + 0x14))();
      pcStack_3c = this_00 + 0x1c;
      uStack_34 = 4;
      uStack_38 = 0xc;
      uStack_40 = 0x583735;
      (**(code **)(*(int *)_sioFilePtr + 0x14))();
      pcStack_48 = this_00 + 0x28;
      uStack_40 = 4;
      uStack_44 = 0xc;
      uStack_4c = 0x583748;
      (**(code **)(*(int *)_sioFilePtr + 0x14))();
      pcStack_54 = this_00 + 0x34;
      uStack_4c = 1;
      uStack_50 = 0xc;
      uStack_58 = 0x58375b;
      (**(code **)(*(int *)_sioFilePtr + 0x14))();
      ppcVar3 = &pcStack_48;
      uStack_58 = 4;
      (**(code **)(*(int *)_sioFilePtr + 0x14))();
      puVar6 = &uStack_50;
      (**(code **)(*(int *)_sioFilePtr + 0x14))(puVar6,4);
      iVar5 = 0;
      iVar4 = 0;
      iVar2 = 4;
      iVar1 = voxGRID::GetNVoxels(this);
      iVar1 = cdtCOLL::AllocLists((cdtCOLL *)this_00,iVar1,iVar2,(int)ppcVar3,iVar4,iVar5);
      if (iVar1 == 0) {
        return (cdtCOLL_SCN *)0x0;
      }
      iVar2 = 0;
      iVar1 = voxGRID::GetNVoxels(this);
      if (0 < iVar1) {
        do {
          (**(code **)(*(int *)_sioFilePtr + 0x14))(&uStack_58,2,2);
          iVar2 = iVar2 + 1;
          iVar1 = voxGRID::GetNVoxels(this);
        } while (iVar2 < iVar1);
      }
      iVar1 = voxGRID::GetNVoxels(this);
      (**(code **)(*(int *)_sioFilePtr + 0x14))(*(undefined4 *)(this_00 + 0x40),iVar1 << 2,4);
      iVar1 = voxGRID::GetNVoxels(this);
      iVar1 = *(int *)(*(int *)(this_00 + 0x40) + -4 + iVar1 * 4);
      iVar2 = voxGRID::GetNVoxels(this);
      *(int *)(*(int *)(this_00 + 0x40) + iVar2 * 4) = iVar1 + 4;
      (**(code **)(*(int *)_sioFilePtr + 0x14))(*(undefined4 *)(this_00 + 0x44),(int)puVar6 * 2,2);
      iVar1 = _sioReadLastChunk();
      return (cdtCOLL_SCN *)(-(uint)(iVar1 != 0) & (uint)this_00);
    }
  }
  else {
    fioFILE::RevertChunk(_sioFilePtr,(fioCHUNK *)0x0);
  }
  return (cdtCOLL_SCN *)0x0;
}




/* from: engine:sceneio_scn.cpp
   addr: 00583850 */

cdtCOLL_OBJ * __thiscall cdtCOLL_OBJ::cdtCOLL_OBJ(cdtCOLL_OBJ *this)

{
  cdtCOLL::cdtCOLL((cdtCOLL *)this);
  *(undefined ***)this = &_vftable_;
  return this;
}

