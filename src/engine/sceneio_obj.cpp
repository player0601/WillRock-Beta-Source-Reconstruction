
/* from: engine:sceneio_obj.cpp
   addr: 00583870 */

objOBJ * __fastcall _sioReadObj(void)

{
  int iVar1;
  objOBJ *this;
  objOBJ *poVar2;
  objSPLIT *poVar3;
  int iVar4;
  int iVar5;
  txmTEXTURE *ptVar6;
  int unaff_EBP;
  undefined2 unaff_SI;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int local_15c;
  int iStack_158;
  int iStack_154;
  int iStack_150;
  uint local_14c;
  undefined2 local_146;
  int local_144;
  undefined4 local_140;
  short local_13c;
  undefined2 local_13a;
  undefined2 uStack_138;
  undefined2 local_136;
  undefined2 uStack_134;
  undefined2 local_132;
  undefined2 uStack_130;
  undefined2 uStack_12e;
  int iStack_12c;
  int iStack_124;
  int local_120;
  short local_11c;
  undefined2 local_11a;
  undefined2 uStack_118;
  undefined4 local_116;
  undefined4 local_112;
  short local_10c;
  undefined2 uStack_10a;
  undefined2 uStack_108;
  undefined4 local_106;
  undefined4 local_102;
  short local_fc;
  undefined2 uStack_fa;
  undefined2 uStack_f8;
  undefined4 local_f6;
  undefined4 local_f2;
  undefined4 local_ec;
  int iStack_e8;
  int iStack_e4;
  objOBJ *local_e0;
  int iStack_dc;
  int iStack_d8;
  objOBJ *poStack_d4;
  undefined2 local_d0 [2];
  undefined1 auStack_cc [4];
  undefined **local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined1 auStack_b0 [4];
  undefined1 auStack_ac [4];
  undefined1 auStack_a8 [12];
  undefined4 auStack_9c [7];
  char local_80 [128];
  
  local_10c = 0;
  uStack_10a = 0xffff;
  uStack_108 = 0xffff;
  local_106 = 0xffffffff;
  local_102 = 0xffffffff;
  local_c4 = 3;
  local_c8 = &m3dSPHERE::_vftable_;
  iVar1 = fioFILE::ReadChunk(_sioFilePtr,(fioCHUNK *)0x0);
  if (iVar1 != 0xf0) {
    fioFILE::RevertChunk(_sioFilePtr,(fioCHUNK *)0x0);
    return (objOBJ *)0x0;
  }
  this = objOBJ::Make();
  if (this == (objOBJ *)0x0) {
    return (objOBJ *)0x0;
  }
  iVar1 = fioFILE::ReadChunk(_sioFilePtr,(fioCHUNK *)&local_10c);
  if (iVar1 != 0) {
    while (iVar1 = 0, local_10c != 1) {
      switch(local_10c) {
      case 0xf0:
        fioFILE::RevertChunk(_sioFilePtr,(fioCHUNK *)0x0);
        poVar2 = _sioReadObj();
        objOBJ::Attach(poVar2,this);
        break;
      case 0xf1:
        poVar2 = this + 0x14;
        (**(code **)(*(int *)_sioFilePtr + 0x14))(poVar2,4,4);
        if (0 < *(int *)poVar2) {
          iVar1 = objOBJ::AllocGeom(this);
          if ((iVar1 == 0) || (iVar1 = objOBJ::AllocVertList(this,*(int *)poVar2), iVar1 == 0))
          goto LAB_0058466d;
          (**(code **)(*(int *)_sioFilePtr + 0x14))
                    (*(undefined4 *)(*(int *)(this + 0x28) + 0x40),*(int *)poVar2 * 0xc,4);
        }
        break;
      case 0xf2:
      case 0xf3:
        break;
      case 0xf4:
        fioFILE::Read(_sioFilePtr,local_80,0x80);
        objOBJ::SetName(this,local_80);
        break;
      case 0xf5:
        (**(code **)(*(int *)_sioFilePtr + 0x14))(&local_c0,0xc,4);
        (**(code **)(*(int *)_sioFilePtr + 0x14))(&local_c0,4,4);
        iVar1 = *(int *)(this + 0x28);
        if (iVar1 != 0) {
          *(undefined4 *)(iVar1 + 0x2c) = local_c4;
          *(undefined4 *)(iVar1 + 0x30) = local_c0;
          *(undefined4 *)(iVar1 + 0x34) = uStack_bc;
          *(undefined4 *)(iVar1 + 0x38) = uStack_b8;
          *(undefined4 *)(iVar1 + 0x3c) = uStack_b4;
        }
        break;
      case 0xf6:
        (**(code **)(*(int *)_sioFilePtr + 0x14))(&local_146,2,2);
        *(undefined2 *)(this + 0x1c) = local_146;
        *(undefined2 *)(this + 0x20) = local_146;
        break;
      case 0xf7:
        (**(code **)(*(int *)_sioFilePtr + 0x14))(&local_14c,4,4);
        local_14c = local_14c & DAT_00964440;
        *(uint *)(this + 0x24) = local_14c;
        break;
      case 0xf8:
        (**(code **)(*(int *)_sioFilePtr + 0x14))(&local_ec,4,4);
        if (*(int *)(this + 0x28) != 0) {
          *(undefined4 *)(*(int *)(this + 0x28) + 0x5e) = local_ec;
        }
        break;
      case 0xf9:
        (**(code **)(*(int *)_sioFilePtr + 0x14))(this + 0x7c,0x40,4);
        break;
      case 0xfa:
        (**(code **)(*(int *)_sioFilePtr + 0x14))(local_d0,4,4);
        *(undefined2 *)(this + 0x20) = local_d0[0];
        break;
      case 0xfb:
        (**(code **)(*(int *)_sioFilePtr + 0x14))(&local_e0,4,4);
        *(undefined2 *)(this + 0x22) = local_e0._0_2_;
        break;
      case 0xfc:
        (**(code **)(*(int *)_sioFilePtr + 0x14))(this,4,4);
        *(uint *)this = *(uint *)this & DAT_0096443c;
        break;
      case 0xfd:
        iVar1 = _sioReadPSheet((psSHEET **)(this + 0xf0));
        if (iVar1 == 0) {
          apLogErr(s_Cannot_parse_script_for_object__,*(undefined4 *)(this + 0x18));
        }
        break;
      case 0xfe:
        poVar2 = this + 0x10;
        (**(code **)(*(int *)_sioFilePtr + 0x14))(poVar2,4,4);
        if (0 < *(int *)poVar2) {
          iVar4 = objOBJ::AllocGeom(this);
          if ((iVar4 == 0) || (iVar4 = objOBJ::AllocFaceList(this,*(int *)poVar2,3), iVar4 == 0))
          goto LAB_0058466d;
          objOBJ::CreateFaceSplitPerFace(this);
          iStack_150 = 0;
          if (0 < *(int *)poVar2) {
            do {
              iVar5 = (uint)*(byte *)(*(int **)(this + 0x28) + 1) * iStack_150 +
                      **(int **)(this + 0x28);
              iStack_dc = iVar5;
              iVar4 = fioFILE::ReadChunk(_sioFilePtr,(fioCHUNK *)0x0);
              if (iVar4 != 0xff) goto LAB_0058466d;
              (**(code **)(*(int *)_sioFilePtr + 0x14))(iVar5 + 2,6,2);
              iVar4 = fioFILE::ReadChunk(_sioFilePtr,(fioCHUNK *)0x0);
              if (iVar4 != 0x100) goto LAB_0058466d;
              (**(code **)(*(int *)_sioFilePtr + 0x14))(&iStack_154,4,4);
              iStack_124 = -1;
              iStack_12c = -1;
              iStack_158 = 0;
              if (0 < iStack_154) {
                do {
                  (**(code **)(*(int *)_sioFilePtr + 0x14))(auStack_cc,4,4);
                  if (iStack_d8 < 0) {
                    ptVar6 = (txmTEXTURE *)0x0;
                  }
                  else {
                    ptVar6 = txmMANAGER::GetListNmb(txmManager,_sioTexListNmb[iStack_d8]);
                  }
                  if (unaff_EBP == 0) {
                    iVar4 = objMTL_CTRL_TBL::AddMtlCtrl
                                      ((objMTL_CTRL_TBL *)
                                       (*(int *)(*(int *)(this + 0x28) + 0x18) + 6),0);
                    objMTL_TBL::AddMtl((objMTL_TBL *)
                                       (*(int *)(*(int *)(*(int *)(this + 0x28) + 0x18) + 2) + iVar1
                                       ),iVar4,ptVar6);
LAB_00583b71:
                    if (iVar4 < 0) goto LAB_00583bb1;
                    local_e0 = this;
                    (**(code **)(*(int *)_sioFilePtr + 0x14))
                              (iStack_e8 + 8 +
                               (uint)*(byte *)(*(int *)(*(int *)(this + 0x28) + 0x18) + 6 +
                                              iVar4 * 4) * 6,6,2);
                    this = poStack_d4;
                  }
                  else {
                    if (unaff_EBP == 1) {
                      if (ptVar6 != (txmTEXTURE *)0x0) {
                        iVar4 = objMTL_CTRL_TBL::AddMtlCtrl
                                          ((objMTL_CTRL_TBL *)
                                           (*(int *)(*(int *)(this + 0x28) + 0x18) + 6),1);
                        iVar5 = objMTL_TBL::AddMtl((objMTL_TBL *)
                                                   (*(int *)(*(int *)(*(int *)(this + 0x28) + 0x18)
                                                            + 2) + iVar1),iVar4,ptVar6);
                        uStack_138 = (undefined2)iVar5;
                        local_136 = (undefined2)((uint)iVar5 >> 0x10);
                        *(uint *)(ptVar6 + 4) = *(uint *)(ptVar6 + 4) | 8;
                        goto LAB_00583b71;
                      }
                    }
                    else if ((unaff_EBP == 2) && (ptVar6 != (txmTEXTURE *)0x0)) {
                      iVar4 = objMTL_CTRL_TBL::AddMtlCtrl
                                        ((objMTL_CTRL_TBL *)
                                         (*(int *)(*(int *)(this + 0x28) + 0x18) + 6),2);
                      iVar5 = objMTL_TBL::AddMtl((objMTL_TBL *)
                                                 (*(int *)(*(int *)(*(int *)(this + 0x28) + 0x18) +
                                                          2) + iVar1),iVar4,ptVar6);
                      uStack_130 = (undefined2)iVar5;
                      uStack_12e = (undefined2)((uint)iVar5 >> 0x10);
                      goto LAB_00583b71;
                    }
LAB_00583bb1:
                    (**(code **)(*(int *)_sioFilePtr + 0x14))(auStack_b0,6,2);
                  }
                  iStack_158 = iStack_158 + 1;
                } while (iStack_158 < iStack_154);
                if (((iStack_12c != -1) && (iStack_124 != -1)) && (iStack_12c < iStack_124)) {
                  iVar4 = *(int *)(*(int *)(*(int *)(this + 0x28) + 0x18) + 2) + iVar1;
                  puVar10 = (undefined4 *)(iVar4 + iStack_124 * 0x19);
                  puVar8 = (undefined4 *)(iVar4 + iStack_12c * 0x19);
                  puVar7 = puVar8;
                  puVar9 = auStack_9c;
                  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
                    *puVar9 = *puVar7;
                    puVar7 = puVar7 + 1;
                    puVar9 = puVar9 + 1;
                  }
                  *(undefined1 *)puVar9 = *(undefined1 *)puVar7;
                  puVar7 = puVar10;
                  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
                    *puVar8 = *puVar7;
                    puVar7 = puVar7 + 1;
                    puVar8 = puVar8 + 1;
                  }
                  *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
                  puVar8 = auStack_9c;
                  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
                    *puVar10 = *puVar8;
                    puVar8 = puVar8 + 1;
                    puVar10 = puVar10 + 1;
                  }
                  *(undefined1 *)puVar10 = *(undefined1 *)puVar8;
                }
              }
              iVar4 = _sioReadLastChunk();
              if (iVar4 == 0) goto LAB_0058466d;
              iStack_150 = iStack_150 + 1;
              iVar1 = iVar1 + 0x70;
            } while (iStack_150 < *(int *)(this + 0x10));
          }
          objOBJ::SortFaceList(this);
          objOBJ::CompressFaceSplit(this);
        }
        break;
      default:
        fioFILE::SkipChunk(_sioFilePtr,(fioCHUNK *)&local_10c);
        break;
      case 0x101:
        iVar1 = fioFILE::ReadChunk(_sioFilePtr,(fioCHUNK *)0x0);
        if (iVar1 != 0x102) {
LAB_0058466d:
          objOBJ::~objOBJ(this);
          operator_delete(this);
          return (objOBJ *)0x0;
        }
        (**(code **)(*(int *)_sioFilePtr + 0x14))(&local_120,4,4);
        iVar1 = 0;
        if (0 < local_120) {
          do {
            iVar4 = fioFILE::ReadChunk(_sioFilePtr,(fioCHUNK *)0x0);
            if (iVar4 != 0x103) goto LAB_0058466d;
            (**(code **)(*(int *)_sioFilePtr + 0x14))(&local_14c,4,4);
            if (local_14c != 0) {
              iVar4 = objOBJ::AllocGeom(this);
              if (iVar4 == 0) goto LAB_0058466d;
              iVar4 = objOBJ::GetTCCoordIDRendMtl(this,iVar1);
              *(undefined2 *)(*(int *)(this + 0x28) + 6 + iVar4 * 2) = (undefined2)local_14c;
              iVar5 = objOBJ::AllocTexCoord(this,iVar4,local_14c);
              if (iVar5 == 0) goto LAB_0058466d;
              (**(code **)(*(int *)_sioFilePtr + 0x14))
                        (*(undefined4 *)(*(int *)(this + 0x28) + 0xc + iVar4 * 4),
                         (uint)*(ushort *)(*(int *)(this + 0x28) + 6 + iVar4 * 2) << 3,4);
            }
            iVar1 = iVar1 + 1;
          } while (iVar1 < local_120);
        }
        break;
      case 0x104:
        (**(code **)(*(int *)_sioFilePtr + 0x14))(&local_144,4,4);
        iVar1 = 0;
        if (0 < local_144) {
          do {
            (**(code **)(*(int *)_sioFilePtr + 0x14))(auStack_ac,4,4);
            iVar1 = iVar1 + 1;
          } while (iVar1 < local_144);
        }
        iVar1 = 0;
        if (0 < local_144) {
          do {
            (**(code **)(*(int *)_sioFilePtr + 0x14))(auStack_b0,4,4);
            iVar1 = iVar1 + 1;
          } while (iVar1 < local_144);
        }
        iVar1 = 0;
        if (0 < local_144) {
          do {
            (**(code **)(*(int *)_sioFilePtr + 0x14))(auStack_a8,4,4);
            iVar1 = iVar1 + 1;
          } while (iVar1 < local_144);
        }
        break;
      case 0x106:
        (**(code **)(*(int *)_sioFilePtr + 0x14))(&local_140,4,4);
        if (0 < local_140) {
          iVar4 = objOBJ::AllocGeom(this);
          if (iVar4 == 0) goto LAB_0058466d;
          if (0 < local_140) {
            do {
              iVar4 = fioFILE::ReadChunk(_sioFilePtr,(fioCHUNK *)0x0);
              if (iVar4 != 0xff) goto LAB_0058466d;
              (**(code **)(*(int *)_sioFilePtr + 0x14))(&iStack_e8,6,2);
              iVar4 = fioFILE::ReadChunk(_sioFilePtr,(fioCHUNK *)0x0);
              if ((iVar4 != 0x100) ||
                 (((**(code **)(*(int *)_sioFilePtr + 0x14))(&iStack_154,4,4),
                  **(int **)(this + 0x28) == 0 &&
                  (iVar4 = objOBJ::AllocFaceList(this,local_140,iStack_154), iVar4 == 0))))
              goto LAB_0058466d;
              iVar5 = 0;
              iVar4 = (uint)*(byte *)(*(int **)(this + 0x28) + 1) * iVar1 + **(int **)(this + 0x28);
              *(int *)(iVar4 + 2) = iStack_e8;
              *(undefined2 *)(iVar4 + 6) = (undefined2)iStack_e4;
              if (0 < iStack_154) {
                iVar4 = iVar4 + 8;
                do {
                  (**(code **)(*(int *)_sioFilePtr + 0x14))(iVar4,6,2);
                  iVar5 = iVar5 + 1;
                  iVar4 = iVar4 + 6;
                } while (iVar5 < iStack_154);
              }
              iVar4 = _sioReadLastChunk();
              if (iVar4 == 0) goto LAB_0058466d;
              iVar1 = iVar1 + 1;
            } while (iVar1 < local_140);
          }
        }
        break;
      case 0x107:
        local_fc = 0;
        uStack_fa = 0xffff;
        uStack_f8 = 0xffff;
        local_f6 = 0xffffffff;
        local_f2 = 0xffffffff;
        local_11c = 0;
        local_11a = 0xffff;
        uStack_118 = 0xffff;
        local_116 = 0xffffffff;
        local_112 = 0xffffffff;
        local_13c = 0;
        local_13a = 0xffff;
        uStack_138 = 0xffff;
        local_136 = 0xffff;
        uStack_134 = 0xffff;
        local_132 = 0xffff;
        uStack_130 = 0xffff;
        iVar1 = objOBJ::AllocGeom(this);
        if ((iVar1 != 0) && (poVar3 = objSPLIT::Make(), poVar3 != (objSPLIT *)0x0)) {
          *(objSPLIT **)(*(int *)(this + 0x28) + 0x18) = poVar3;
          iVar1 = fioFILE::ReadChunk(_sioFilePtr,(fioCHUNK *)&local_fc);
          while ((iVar1 != 0 && (local_fc != 1))) {
            if (local_fc == 0xf3) {
              (**(code **)(*(int *)_sioFilePtr + 0x14))(&local_15c,4,4);
              iVar4 = 0xc;
              iVar1 = 6;
              iStack_158 = 0;
              do {
                iVar5 = fioFILE::ReadChunk(_sioFilePtr,(fioCHUNK *)&local_13c);
                while ((iVar5 != 0 && (local_13c != 1))) {
                  if (local_13c == 0x103) {
                    (**(code **)(*(int *)_sioFilePtr + 0x14))(&local_15c,4,4);
                    *(undefined2 *)(iVar1 + *(int *)(this + 0x28)) = (undefined2)local_15c;
                    iVar5 = objOBJ::AllocTexCoord(this,iStack_158,local_15c);
                    if (iVar5 == 0) goto switchD_00583931_caseD_f2;
                    (**(code **)(*(int *)_sioFilePtr + 0x14))
                              (*(undefined4 *)(*(int *)(this + 0x28) + iVar4),
                               (uint)*(ushort *)(*(int *)(this + 0x28) + iVar1) << 3,4);
                  }
                  else {
                    fioFILE::SkipChunk(_sioFilePtr,(fioCHUNK *)&local_13c);
                  }
                  iVar5 = fioFILE::ReadChunk(_sioFilePtr,(fioCHUNK *)&local_13c);
                }
                iVar1 = iVar1 + 2;
                iStack_158 = iStack_158 + 1;
                iVar4 = iVar4 + 4;
              } while (iVar1 < 0xc);
            }
            else if (local_fc == 0x104) {
              (**(code **)(*(int *)_sioFilePtr + 0x14))(&local_15c,4,4);
              iVar1 = objSPLIT::Alloc(*(objSPLIT **)(*(int *)(this + 0x28) + 0x18),local_15c);
              if (iVar1 == 0) goto switchD_00583931_caseD_f2;
              iStack_158 = 0;
              if (**(short **)(*(int *)(this + 0x28) + 0x18) != 0) {
                iVar1 = 0;
                do {
                  iVar4 = fioFILE::ReadChunk(_sioFilePtr,(fioCHUNK *)&local_11c);
                  while ((iVar4 != 0 && (local_11c != 1))) {
                    if (local_11c == 0x105) {
                      (**(code **)(*(int *)_sioFilePtr + 0x14))(&local_15c,4,4);
                      *(undefined2 *)
                       (*(int *)(*(int *)(*(int *)(this + 0x28) + 0x18) + 2) + 0x68 + iVar1) =
                           unaff_SI;
                      (**(code **)(*(int *)_sioFilePtr + 0x14))(&stack0xfffffe98,4,4);
                      *(undefined2 *)
                       (*(int *)(*(int *)(*(int *)(this + 0x28) + 0x18) + 2) + 0x6a + iVar1) =
                           (undefined2)local_15c;
                    }
                    else if (local_11c == 0x10b) {
                      (**(code **)(*(int *)_sioFilePtr + 0x14))(&local_15c,4,4);
                      iStack_150 = 0;
                      *(undefined2 *)
                       (*(int *)(*(int *)(*(int *)(this + 0x28) + 0x18) + 2) + 100 + iVar1) =
                           (undefined2)local_15c;
                      if (0 < *(short *)(*(int *)(*(int *)(*(int *)(this + 0x28) + 0x18) + 2) + 100
                                        + iVar1)) {
                        iVar4 = 0;
                        do {
                          iVar5 = fioFILE::ReadChunk(_sioFilePtr,(fioCHUNK *)&local_13c);
                          while ((iVar5 != 0 && (local_13c != 1))) {
                            if (local_13c == 0x10a) {
                              (**(code **)(*(int *)_sioFilePtr + 0x14))(&iStack_d8,4,4);
                              if ((-1 < iStack_e4) && (iStack_e4 < 1000)) {
                                iVar5 = *(int *)(*(int *)(*(int *)(this + 0x28) + 0x18) + 2);
                                ptVar6 = txmMANAGER::GetListNmb
                                                   (txmManager,_sioTexListNmb[iStack_e4]);
                                *(txmTEXTURE **)(iVar4 + iVar5 + iVar1) = ptVar6;
                              }
                              (**(code **)(*(int *)_sioFilePtr + 0x14))
                                        (*(int *)(*(int *)(*(int *)(this + 0x28) + 0x18) + 2) +
                                         iVar1 + 4 + iVar4,4,4);
                              (**(code **)(*(int *)_sioFilePtr + 0x14))
                                        (*(int *)(*(int *)(*(int *)(this + 0x28) + 0x18) + 2) +
                                         iVar1 + 8 + iVar4,4,4);
                              (**(code **)(*(int *)_sioFilePtr + 0x14))
                                        (*(int *)(*(int *)(*(int *)(this + 0x28) + 0x18) + 2) +
                                         iVar1 + 0x18 + iVar4,1,1);
                            }
                            else if (local_13c == 0x10c) {
                              (**(code **)(*(int *)_sioFilePtr + 0x14))
                                        (*(int *)(*(int *)(*(int *)(this + 0x28) + 0x18) + 2) +
                                         iVar1 + 0xc + iVar4,4,4);
                            }
                            else {
                              fioFILE::SkipChunk(_sioFilePtr,(fioCHUNK *)&local_13c);
                            }
                            iVar5 = fioFILE::ReadChunk(_sioFilePtr,(fioCHUNK *)&local_13c);
                          }
                          iStack_150 = iStack_150 + 1;
                          iVar4 = iVar4 + 0x19;
                        } while (iStack_150 <
                                 *(short *)(*(int *)(*(int *)(*(int *)(this + 0x28) + 0x18) + 2) +
                                            100 + iVar1));
                      }
                    }
                    else {
                      fioFILE::SkipChunk(_sioFilePtr,(fioCHUNK *)&local_11c);
                    }
                    iVar4 = fioFILE::ReadChunk(_sioFilePtr,(fioCHUNK *)&local_11c);
                  }
                  iStack_158 = iStack_158 + 1;
                  iVar1 = iVar1 + 0x70;
                } while (iStack_158 < (int)(uint)**(ushort **)(*(int *)(this + 0x28) + 0x18));
              }
            }
            else if (local_fc == 0x109) {
              (**(code **)(*(int *)_sioFilePtr + 0x14))(&local_15c,4,4);
              iVar1 = 0;
              *(undefined2 *)(*(int *)(*(int *)(this + 0x28) + 0x18) + 0x16) = (undefined2)local_15c
              ;
              if (0 < *(short *)(*(int *)(*(int *)(this + 0x28) + 0x18) + 0x16)) {
                do {
                  iVar4 = fioFILE::ReadChunk(_sioFilePtr,(fioCHUNK *)&local_13c);
                  while ((iVar4 != 0 && (local_13c != 1))) {
                    if (local_13c == 0x108) {
                      (**(code **)(*(int *)_sioFilePtr + 0x14))
                                (*(int *)(*(int *)(this + 0x28) + 0x18) + 6 + iVar1 * 4,1,1);
                      (**(code **)(*(int *)_sioFilePtr + 0x14))(&local_132,2,2);
                      *(undefined1 *)(*(int *)(*(int *)(this + 0x28) + 0x18) + 7 + iVar1 * 4) =
                           local_140._2_1_;
                      (**(code **)(*(int *)_sioFilePtr + 0x14))
                                (*(int *)(*(int *)(this + 0x28) + 0x18) + 8 + iVar1 * 4,1,1);
                    }
                    else {
                      fioFILE::SkipChunk(_sioFilePtr,(fioCHUNK *)&local_13c);
                    }
                    iVar4 = fioFILE::ReadChunk(_sioFilePtr,(fioCHUNK *)&local_13c);
                  }
                  iVar1 = iVar1 + 1;
                } while (iVar1 < *(short *)(*(int *)(*(int *)(this + 0x28) + 0x18) + 0x16));
              }
            }
            else {
              fioFILE::SkipChunk(_sioFilePtr,(fioCHUNK *)&local_fc);
            }
            iVar1 = fioFILE::ReadChunk(_sioFilePtr,(fioCHUNK *)&local_fc);
          }
          objSPLIT::RestoreFaceSplitNmb(*(objSPLIT **)(*(int *)(this + 0x28) + 0x18),this);
          objOBJ::CompressFaceList(this,-1);
        }
      }
switchD_00583931_caseD_f2:
      iVar1 = fioFILE::ReadChunk(_sioFilePtr,(fioCHUNK *)&local_10c);
      if (iVar1 == 0) {
        return this;
      }
    }
  }
  return this;
}

