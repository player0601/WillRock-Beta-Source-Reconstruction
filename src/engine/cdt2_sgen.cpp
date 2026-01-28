
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:cdt2_sgen.cpp
   addr: 004F09D0 */

int __thiscall
cdtCOLL::CalcData2(cdtCOLL *this,float param_1,float param_2,float param_3,int param_4,int param_5,
                  int param_6,m3dBOX *param_7)

{
  voxGRID *this_00;
  undefined4 *puVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  _cdt2VOX_INFO *p_Var7;
  float extraout_ECX;
  float extraout_ECX_00;
  float fVar8;
  int iVar9;
  float extraout_EDX;
  float extraout_EDX_00;
  float extraout_EDX_01;
  float fVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iStack_e4;
  int iStack_e0;
  int iStack_dc;
  int iStack_d8;
  int iStack_d4;
  uint uStack_d0;
  int iStack_cc;
  _cdt2VOX_INFO *p_Stack_c8;
  int iStack_c4;
  int iStack_c0;
  int iStack_bc;
  int iStack_b8;
  uint uStack_b4;
  int iStack_b0;
  undefined4 local_ac;
  int local_a8;
  int local_a4;
  m3dBOX local_a0 [4];
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  void *local_74;
  int local_70;
  int local_6c;
  uint local_68;
  undefined4 local_64;
  void *local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined **ppuStack_40;
  undefined4 uStack_3c;
  m3dV amStack_38 [12];
  m3dV amStack_2c [12];
  undefined **ppuStack_20;
  undefined4 uStack_1c;
  
  local_a8 = DAT_00963768;
  local_ac = _m3dVIntZero;
  local_a4 = DAT_0096376c;
  m3dBOX::m3dBOX(local_a0);
  local_80 = _m3dVZero;
  local_54 = 0xffffffff;
  local_4c = 0xffffffff;
  local_7c = DAT_00963740;
  local_78 = DAT_00963744;
  local_74 = (void *)0x0;
  local_70 = 0;
  local_6c = 0;
  local_68 = 0;
  local_64 = 0;
  local_60 = (void *)0x0;
  local_5c = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_44 = 0;
  dsDYN_ARRAY::Init((dsDYN_ARRAY *)&local_5c,8,1000,&local_60,0,0);
  if (param_1 < ___real_00000000) {
    param_1 = 10.0;
  }
  bVar2 = param_2 < ___real_00000000;
  if (bVar2) {
    param_2 = DAT_005dc430;
  }
  if (param_7 == (m3dBOX *)0x0) {
    (**(code **)(*(int *)this + 0x20))(this + 0x14);
    fVar8 = extraout_EDX;
  }
  else {
    *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_7 + 4);
    *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_7 + 8);
    *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_7 + 0xc);
    *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_7 + 0x10);
    *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_7 + 0x14);
    fVar8 = *(float *)(param_7 + 0x18);
    *(float *)(this + 0x2c) = fVar8;
    *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_7 + 0x1c);
  }
  iVar3 = voxCalcNVoxel(param_1,fVar8);
  if (bVar2) {
    iVar4 = 1;
    fVar8 = extraout_ECX;
    fVar10 = extraout_EDX_00;
  }
  else {
    iVar4 = voxCalcNVoxel(extraout_ECX,param_2);
    fVar8 = extraout_ECX_00;
    fVar10 = extraout_EDX_01;
  }
  iVar5 = voxCalcNVoxel(fVar8,fVar10);
  this_00 = (voxGRID *)(this + 8);
  *(int *)this_00 = iVar3;
  *(int *)(this + 0xc) = iVar4;
  *(int *)(this + 0x10) = iVar5;
  if ((param_4 != 0) && (param_4 < iVar3)) {
    *(int *)this_00 = param_4;
  }
  if ((param_5 != 0) && (param_5 < iVar4)) {
    *(int *)(this + 0xc) = param_5;
  }
  if ((param_6 != 0) && (param_6 < iVar5)) {
    *(int *)(this + 0x10) = param_6;
  }
  voxGRID::CalcVoxSize(this_00);
  iVar3 = (**(code **)(*(int *)this + 0x14))();
  if ((0 < iVar3) && (iVar4 = (**(code **)(*(int *)this + 0x34))(), iVar4 != 0)) {
    iVar4 = 0;
    local_68 = 0;
    if (0 < iVar3) {
      do {
        uVar6 = (**(code **)(*(int *)this + 0x1c))(iVar4);
        if ((int)uVar6 < (int)local_68) {
          uVar6 = local_68;
        }
        iVar4 = iVar4 + 1;
        local_68 = uVar6;
      } while (iVar4 < iVar3);
    }
    if ((float)iVar3 * (float)(int)local_68 <= ___real_4f800000) {
      uVar6 = voxGRID::GetNVoxels(this_00);
      uStack_b4 = uVar6;
      local_74 = apCalloc(uVar6,8);
      if (local_74 != (void *)0x0) {
        local_ac = *(undefined4 *)this_00;
        local_a8 = *(int *)(this + 0xc);
        uStack_9c = *(undefined4 *)(this + 0x18);
        local_a4 = *(int *)(this + 0x10);
        uStack_98 = *(undefined4 *)(this + 0x1c);
        uStack_94 = *(undefined4 *)(this + 0x20);
        uStack_90 = *(undefined4 *)(this + 0x24);
        uStack_8c = *(undefined4 *)(this + 0x28);
        uStack_88 = *(undefined4 *)(this + 0x2c);
        local_80 = *(undefined4 *)(this + 0x34);
        uStack_84 = *(undefined4 *)(this + 0x30);
        local_7c = *(undefined4 *)(this + 0x38);
        local_78 = *(undefined4 *)(this + 0x3c);
        iVar4 = 0;
        if (0 < (int)uVar6) {
          do {
            puVar1 = (undefined4 *)((int)local_74 + iVar4 * 8);
            iVar4 = iVar4 + 1;
            *puVar1 = 0xffffffff;
            puVar1[1] = 0xffffffff;
          } while (iVar4 < (int)uVar6);
        }
        ppuStack_40 = &m3dBOX::_vftable_;
        ppuStack_20 = &m3dBOX::_vftable_;
        uStack_3c = 1;
        uStack_1c = 1;
        uStack_d0 = (**(code **)(*(int *)this + 0x14))();
        iStack_bc = 0;
        if (0 < (int)uStack_d0) {
          do {
            iVar4 = iStack_bc;
            iVar5 = (**(code **)(*(int *)this + 0xc))(iStack_bc);
            if (iVar5 != 0) {
              p_Var7 = (_cdt2VOX_INFO *)(**(code **)(*(int *)this + 0x1c))(iVar4);
              p_Stack_c8 = p_Var7;
              iStack_d4 = (**(code **)(*(int *)this + 0x18))(iVar4);
              iStack_e4 = 0;
              uVar6 = uStack_b4;
              if (0 < (int)p_Var7) {
                do {
                  (**(code **)(*(int *)this + 0x2c))(iStack_d4,iStack_e4,&ppuStack_40);
                  m3dBOX::Expand((m3dBOX *)&ppuStack_40,0.001);
                  voxGRID::GetPosInd((voxGRID *)&local_ac,amStack_38,&iStack_dc,&iStack_d8,
                                     &iStack_b0,1);
                  voxGRID::GetPosInd((voxGRID *)&local_ac,amStack_2c,&iStack_b8,&iStack_cc,
                                     &iStack_c0,1);
                  voxGRID::ClampIndices((voxGRID *)&local_ac,&iStack_dc,&iStack_d8,&iStack_b0);
                  voxGRID::ClampIndices((voxGRID *)&local_ac,&iStack_b8,&iStack_cc,&iStack_c0);
                  iVar5 = iStack_c0;
                  iVar9 = iStack_cc;
                  iVar11 = iStack_dc;
                  iVar13 = iStack_b0;
                  if (iStack_dc <= iStack_b8) {
                    do {
                      iVar4 = iStack_d8;
                      iVar12 = iVar13;
                      if (iStack_d8 <= iVar9) {
                        do {
                          iVar13 = iVar12;
                          if (iVar12 <= iVar5) {
                            do {
                              p_Stack_c8 = (_cdt2VOX_INFO *)
                                           ((int)local_74 +
                                           ((local_a8 * iVar11 + iVar4) * local_a4 + iVar12) * 8);
                              voxGRID::CalcVoxBBox
                                        ((voxGRID *)&local_ac,iVar11,iVar4,iVar12,
                                         (m3dBOX *)&ppuStack_20);
                              m3dBOX::Expand((m3dBOX *)&ppuStack_20,0.001);
                              iVar5 = (**(code **)(*(int *)this + 0x30))
                                                (iStack_d4,iStack_e4,&ppuStack_20);
                              if ((iVar5 != 0) &&
                                 (iVar5 = _cdt2AddID((_cdt2GEN_DATA *)&local_ac,p_Stack_c8,iStack_bc
                                                     ,iStack_e4), iVar5 == 0)) goto LAB_004f1104;
                              iVar12 = iVar12 + 1;
                              iVar5 = iStack_c0;
                              iVar9 = iStack_cc;
                              iVar13 = iStack_b0;
                            } while (iVar12 <= iStack_c0);
                          }
                          iVar4 = iVar4 + 1;
                          iVar12 = iVar13;
                        } while (iVar4 <= iVar9);
                      }
                      iVar11 = iVar11 + 1;
                      iVar4 = iStack_bc;
                    } while (iVar11 <= iStack_b8);
                  }
                  iStack_e4 = iStack_e4 + 1;
                  uVar6 = uStack_b4;
                } while (iStack_e4 < iStack_c4);
              }
            }
            iStack_bc = iVar4 + 1;
          } while (iStack_bc < (int)uStack_d0);
        }
        iVar4 = 0;
        *(uint *)(this + 4) = *(uint *)(this + 4) | 1;
        *(undefined4 *)(this + 0x60) = 0;
        if (0 < iVar3) {
          do {
            iVar5 = (**(code **)(*(int *)this + 0x1c))(iVar4);
            iVar4 = iVar4 + 1;
            *(int *)(this + 0x60) = *(int *)(this + 0x60) + iVar5;
          } while (iVar4 < iVar3);
        }
        iVar3 = AllocLists(this,uVar6,iVar3,local_70,*(int *)(this + 0x60),local_6c);
        if (iVar3 != 0) {
          iVar3 = 0;
          iVar4 = 0;
          iStack_e4 = 0;
          iStack_dc = 0;
          uVar14 = uStack_d0;
          if (0 < (int)uVar6) {
            do {
              iVar3 = 0;
              iStack_e0 = 0;
              iVar5 = *(int *)((int)local_74 + iStack_dc * 8);
              if (iVar5 != -1) {
                p_Var7 = (_cdt2VOX_INFO *)0xffffffff;
                iStack_d8 = iStack_e4 << 2;
                iStack_d4 = iStack_e4 * 2;
                while (iVar5 != -1) {
                  iStack_c4 = *(int *)((int)local_60 + iVar5 * 8 + 4);
                  uStack_d0 = *(uint *)((int)local_60 + iVar5 * 8);
                  p_Stack_c8 = (_cdt2VOX_INFO *)(uStack_d0 / local_68);
                  uStack_d0 = uStack_d0 % local_68;
                  if (p_Var7 != p_Stack_c8) {
                    if (p_Var7 != (_cdt2VOX_INFO *)0xffffffff) {
                      *(short *)(iStack_d4 + *(int *)(this + 0x44)) = (short)p_Var7;
                      iStack_d4 = iStack_d4 + 2;
                      *(int *)(*(int *)(this + 0x50) + iStack_d8) = iVar4;
                      iVar4 = iVar4 + uVar14;
                      iStack_e0 = iStack_e0 + 1;
                      iStack_d8 = iStack_d8 + 4;
                    }
                    uVar14 = 0;
                    p_Var7 = p_Stack_c8;
                  }
                  iVar3 = uVar14 + iVar4;
                  uVar14 = uVar14 + 1;
                  *(undefined2 *)(*(int *)(this + 0x54) + iVar3 * 2) = (undefined2)uStack_d0;
                  iVar5 = iStack_c4;
                }
                *(undefined2 *)(*(int *)(this + 0x44) + (iStack_e4 + iStack_e0) * 2) =
                     p_Stack_c8._0_2_;
                *(int *)(*(int *)(this + 0x50) + (iStack_e4 + iStack_e0) * 4) = iVar4;
                iVar4 = iVar4 + uVar14;
                iVar3 = iStack_e0 + 1;
              }
              *(int *)(*(int *)(this + 0x40) + iStack_dc * 4) = iStack_e4;
              iVar3 = iStack_e4 + iVar3;
              iStack_dc = iStack_dc + 1;
              iStack_e4 = iVar3;
            } while (iStack_dc < (int)uStack_b4);
          }
          iVar5 = 0;
          *(int *)(*(int *)(this + 0x40) + iStack_dc * 4) = iVar3;
          *(int *)(*(int *)(this + 0x50) + iVar3 * 4) = iVar4;
          iVar4 = 0;
          iVar3 = (**(code **)(*(int *)this + 0x14))();
          if (0 < iVar3) {
            do {
              *(int *)(*(int *)(this + 0x58) + iVar5 * 4) = iVar4;
              iVar3 = (**(code **)(*(int *)this + 0x1c))(iVar5);
              iVar4 = iVar4 + iVar3;
              iVar5 = iVar5 + 1;
              iVar3 = (**(code **)(*(int *)this + 0x14))();
            } while (iVar5 < iVar3);
          }
          *(int *)(*(int *)(this + 0x58) + iVar5 * 4) = iVar4;
          apFree(local_74);
          dsDYN_ARRAY::ReleaseMem((dsDYN_ARRAY *)&local_5c);
          dsDYN_ARRAY::~dsDYN_ARRAY((dsDYN_ARRAY *)&local_5c);
          return 1;
        }
      }
    }
  }
LAB_004f1104:
  apFree(local_74);
  dsDYN_ARRAY::ReleaseMem((dsDYN_ARRAY *)&local_5c);
  dsDYN_ARRAY::~dsDYN_ARRAY((dsDYN_ARRAY *)&local_5c);
  return 0;
}




/* from: engine:cdt2_sgen.cpp
   addr: 004F1140 */

int __fastcall _cdt2AddID(_cdt2GEN_DATA *param_1,_cdt2VOX_INFO *param_2,int param_3,int param_4)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = dsDYN_ARRAY::AddEntry((dsDYN_ARRAY *)(param_1 + 0x50),1);
  if (iVar4 == 0) {
    return 0;
  }
  uVar3 = *(uint *)(param_1 + 0x48);
  *(uint *)(param_1 + 0x48) = uVar3 + 1;
  piVar1 = (int *)(*(int *)(param_1 + 0x4c) + uVar3 * 8);
  *piVar1 = *(int *)(param_1 + 0x44) * param_3 + param_4;
  piVar1[1] = -1;
  if (*(int *)param_2 == -1) {
    uVar5 = 0xffffffff;
    *(uint *)param_2 = uVar3;
  }
  else {
    puVar2 = (uint *)(*(int *)(param_1 + 0x4c) + *(int *)(param_2 + 4) * 8);
    uVar5 = *puVar2 / *(uint *)(param_1 + 0x44);
    puVar2[1] = uVar3;
  }
  *(uint *)(param_2 + 4) = uVar3;
  if (uVar5 != param_3) {
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
  }
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
  return 1;
}

