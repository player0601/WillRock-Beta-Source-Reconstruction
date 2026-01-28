
/* from: engine:Cdtm_sys.cpp
   addr: 004F0520 */

void __thiscall
cdtCOLL::MakeIndList
          (cdtCOLL *this,m3dV *param_1,m3dV *param_2,float param_3,cdtOFL *param_4,int param_5)

{
  voxGRID *this_00;
  ushort *puVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  m3dV *pmVar9;
  int iVar10;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined **local_20;
  undefined4 local_1c;
  m3dV local_18 [12];
  m3dV local_c [12];
  
  uVar6 = *(uint *)(this + 0x4c);
  local_1c = 1;
  local_20 = &m3dBOX::_vftable_;
  puVar8 = *(undefined4 **)(this + 0x48);
  for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined1 *)puVar8 = 0;
    puVar8 = (undefined4 *)((int)puVar8 + 1);
  }
  if (((byte)this[4] & 1) != 0) {
    uVar6 = *(uint *)(this + 0x60);
    puVar8 = *(undefined4 **)(this + 0x5c);
    for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar8 = 0;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
  }
  m3dBOX::MakePointPoint((m3dBOX *)&local_20,param_1,param_2);
  m3dBOX::Expand((m3dBOX *)&local_20,param_3);
  this_00 = (voxGRID *)(this + 8);
  voxGRID::GetPosInd(this_00,local_18,&local_34,&local_30,&local_2c,1);
  voxGRID::GetPosInd(this_00,local_c,&local_38,&local_3c,&local_40,1);
  voxGRID::ClampIndices(this_00,&local_34,&local_30,&local_2c);
  voxGRID::ClampIndices(this_00,&local_38,&local_3c,&local_40);
  *(undefined4 *)param_4 = 0;
  for (; iVar3 = local_30, local_34 <= local_38; local_34 = local_34 + 1) {
    while (local_28 = iVar3, iVar3 = local_2c, local_28 <= local_3c) {
      for (; iVar3 <= local_40; iVar3 = iVar3 + 1) {
        iVar4 = (*(int *)(this + 0xc) * local_34 + local_28) * *(int *)(this + 0x10) + iVar3;
        local_24 = *(int *)(*(int *)(this + 0x40) + 4 + iVar4 * 4) -
                   *(int *)(*(int *)(this + 0x40) + iVar4 * 4);
        param_2 = (m3dV *)0x0;
        if (0 < local_24) {
          do {
            uVar2 = *(ushort *)
                     (*(int *)(this + 0x44) +
                     (int)(param_2 + *(int *)(*(int *)(this + 0x40) + iVar4 * 4)) * 2);
            uVar6 = (uint)uVar2;
            if (*(char *)(uVar6 + *(int *)(this + 0x48)) == '\0') {
              if (*(int *)(param_4 + 0x18) <= *(int *)param_4) goto LAB_004f073e;
              *(ushort *)(*(int *)(param_4 + 4) + *(int *)param_4 * 2) = uVar2;
              *(int *)param_4 = *(int *)param_4 + 1;
              *(undefined1 *)(uVar6 + *(int *)(this + 0x48)) = 1;
            }
            if (((byte)this[4] & 1) != 0) {
              iVar10 = *(int *)(this + 0x50);
              pmVar9 = param_2 + *(int *)(*(int *)(this + 0x40) + iVar4 * 4);
              iVar7 = *(int *)(iVar10 + 4 + (int)pmVar9 * 4) - *(int *)(iVar10 + (int)pmVar9 * 4);
              if (0 < iVar7) {
                iVar10 = *(int *)(iVar10 + (int)pmVar9 * 4) * 2;
                do {
                  puVar1 = (ushort *)(iVar10 + *(int *)(this + 0x54));
                  iVar10 = iVar10 + 2;
                  iVar7 = iVar7 + -1;
                  *(undefined1 *)
                   (*(int *)(this + 0x5c) +
                   (uint)*puVar1 + *(int *)(*(int *)(this + 0x58) + uVar6 * 4)) = 1;
                } while (iVar7 != 0);
              }
            }
            param_2 = param_2 + 1;
          } while ((int)param_2 < local_24);
        }
      }
      iVar3 = local_28 + 1;
    }
  }
LAB_004f073e:
  (**(code **)(*(int *)this + 0x10))(param_4,param_5);
  if (((byte)this[4] & 1) != 0) {
    _cdtOFLCollectFaceList(this,param_4);
  }
  return;
}




/* WARNING: Function: chkstk replaced with injection: alloca_probe */
/* from: engine:Cdtm_sys.cpp
   addr: 004F0770 */

void __thiscall
cdtCOLL::MakeIndListRay(cdtCOLL *this,m3dV *param_1,m3dV *param_2,cdtOFL *param_3,int param_4)

{
  ushort *puVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  int local_1f50;
  int local_1f4c;
  int local_1f48;
  int local_1f44;
  int local_1f40 [1999];
  undefined4 uStack_4;
  
  uStack_4 = 0x4f077a;
  uVar7 = *(uint *)(this + 0x4c);
  puVar9 = *(undefined4 **)(this + 0x48);
  for (uVar6 = uVar7 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined1 *)puVar9 = 0;
    puVar9 = (undefined4 *)((int)puVar9 + 1);
  }
  if (((byte)this[4] & 1) != 0) {
    uVar7 = *(uint *)(this + 0x60);
    puVar9 = *(undefined4 **)(this + 0x5c);
    for (uVar6 = uVar7 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar9 = 0;
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
  }
  voxGRID::MakeIndListRay((voxGRID *)(this + 8),param_1,param_2,local_1f40,&local_1f50,2000);
  *(undefined4 *)param_3 = 0;
  local_1f48 = 0;
  if (0 < local_1f50) {
    do {
      iVar3 = local_1f40[local_1f48];
      local_1f44 = *(int *)(*(int *)(this + 0x40) + 4 + iVar3 * 4) -
                   *(int *)(*(int *)(this + 0x40) + iVar3 * 4);
      local_1f4c = 0;
      if (0 < local_1f44) {
        do {
          uVar2 = *(ushort *)
                   (*(int *)(this + 0x44) +
                   (*(int *)(*(int *)(this + 0x40) + iVar3 * 4) + local_1f4c) * 2);
          uVar7 = (uint)uVar2;
          if (*(char *)(uVar7 + *(int *)(this + 0x48)) == '\0') {
            if (*(int *)(param_3 + 0x18) <= *(int *)param_3) goto LAB_004f08c3;
            *(ushort *)(*(int *)(param_3 + 4) + *(int *)param_3 * 2) = uVar2;
            *(int *)param_3 = *(int *)param_3 + 1;
            *(undefined1 *)(uVar7 + *(int *)(this + 0x48)) = 1;
          }
          if (((byte)this[4] & 1) != 0) {
            iVar4 = *(int *)(this + 0x50);
            iVar8 = *(int *)(*(int *)(this + 0x40) + iVar3 * 4) + local_1f4c;
            iVar5 = *(int *)(iVar4 + 4 + iVar8 * 4) - *(int *)(iVar4 + iVar8 * 4);
            if (0 < iVar5) {
              iVar8 = *(int *)(iVar4 + iVar8 * 4) * 2;
              do {
                puVar1 = (ushort *)(*(int *)(this + 0x54) + iVar8);
                iVar8 = iVar8 + 2;
                iVar5 = iVar5 + -1;
                *(undefined1 *)
                 ((uint)*puVar1 + *(int *)(*(int *)(this + 0x58) + uVar7 * 4) +
                 *(int *)(this + 0x5c)) = 1;
              } while (iVar5 != 0);
            }
          }
          local_1f4c = local_1f4c + 1;
        } while (local_1f4c < local_1f44);
      }
      local_1f48 = local_1f48 + 1;
    } while (local_1f48 < local_1f50);
  }
LAB_004f08c3:
  (**(code **)(*(int *)this + 0x10))(param_3,param_4);
  if (((byte)this[4] & 1) != 0) {
    _cdtOFLCollectFaceList(this,param_3);
  }
  return;
}




/* from: engine:Cdtm_sys.cpp
   addr: 004F08F0 */

void __fastcall _cdtOFLCollectFaceList(cdtCOLL *param_1,cdtOFL *param_2)

{
  short *psVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int local_8;
  
  iVar4 = 0;
  iVar2 = 0;
  local_8 = 0;
  *(undefined4 *)(param_2 + 0x10) = 0;
  if (0 < *(int *)param_2) {
    do {
      iVar2 = iVar2 + 1;
      *(undefined4 *)(*(int *)(param_2 + 0xc) + -4 + iVar2 * 4) = 0;
      *(undefined2 *)(*(int *)(param_2 + 8) + -2 + iVar2 * 2) = 0;
    } while (iVar2 < *(int *)param_2);
  }
  if (0 < *(int *)param_2) {
    do {
      uVar3 = (uint)*(ushort *)(*(int *)(param_2 + 4) + iVar4 * 2);
      iVar2 = *(int *)(*(int *)(param_1 + 0x58) + 4 + uVar3 * 4) -
              *(int *)(*(int *)(param_1 + 0x58) + uVar3 * 4);
      *(int *)(*(int *)(param_2 + 0xc) + iVar4 * 4) = local_8;
      *(undefined2 *)(*(int *)(param_2 + 8) + iVar4 * 2) = 0;
      iVar5 = 0;
      if (0 < iVar2) {
        do {
          if (*(char *)(*(int *)(*(int *)(param_1 + 0x58) + uVar3 * 4) + iVar5 +
                       *(int *)(param_1 + 0x5c)) != '\0') {
            if (*(int *)(param_2 + 0x1c) <= *(int *)(param_2 + 0x10)) {
              return;
            }
            psVar1 = (short *)(*(int *)(param_2 + 8) + iVar4 * 2);
            *psVar1 = *psVar1 + 1;
            *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 1;
            *(short *)(*(int *)(param_2 + 0x14) + local_8 * 2) = (short)iVar5;
            local_8 = local_8 + 1;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < iVar2);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)param_2);
  }
  return;
}

