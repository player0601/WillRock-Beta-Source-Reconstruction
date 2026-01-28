
/* from: m3d:cgm_wed_algo.cpp
   addr: 00565E40 */

int __thiscall cgmWED_SYS::DepthFirstSearch(cgmWED_SYS *this,cgmQUERY *param_1)

{
  int iVar1;
  int iVar2;
  cgmWED_NODE *pcVar3;
  int local_8;
  int local_4;
  
  ClearState(this);
  iVar2 = 0;
  local_8 = 0;
  local_4 = 0;
  iVar1 = 0;
  if (0 < *(int *)(this + 4)) {
    do {
      pcVar3 = (cgmWED_NODE *)(*(int *)(this + 8) + iVar2);
      if ((*(uint *)pcVar3 & 1) == 0) {
        *(uint *)pcVar3 = *(uint *)pcVar3 | 1;
        iVar1 = (**(code **)(*(int *)param_1 + 0xc))(0,pcVar3);
        if (iVar1 != 0) {
          DepthSearch(this,pcVar3,local_8,param_1);
          local_8 = local_8 + 1;
        }
      }
      local_4 = local_4 + 1;
      iVar2 = iVar2 + 0x24;
      iVar1 = local_8;
    } while (local_4 < *(int *)(this + 4));
  }
  return iVar1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:cgm_wed_algo.cpp
   addr: 00565EC0 */

void __thiscall
cgmWED_SYS::Dijkstra
          (cgmWED_SYS *this,int param_1,int *param_2,int param_3,int *param_4,float *param_5,
          cgmQUERY *param_6)

{
  uint *puVar1;
  cgmWED_EDGE *pcVar2;
  int iVar3;
  cgmWED_NODE *pcVar4;
  int iVar5;
  float fVar6;
  int iVar7;
  undefined4 *puVar8;
  float *pfVar9;
  cgmWED_NODE *this_00;
  int *piVar10;
  float10 fVar11;
  
  ClearState(this);
  if ((param_1 == 0) || (piVar10 = param_2, param_2 == (int *)0x0)) {
    param_1 = *(int *)(this + 4);
    piVar10 = (int *)0x0;
  }
  iVar3 = 0;
  if (0 < param_1) {
    iVar7 = 0;
    do {
      if (piVar10 == (int *)0x0) {
        iVar5 = *(int *)(this + 8) + iVar7;
      }
      else {
        iVar5 = *(int *)(this + 8) + piVar10[iVar3] * 0x24;
      }
      iVar7 = iVar7 + 0x24;
      *(int *)(*(int *)(this + 0x24) + iVar3 * 4) = iVar5;
      *(float *)(*(int *)(*(int *)(this + 0x24) + iVar3 * 4) + 0x18) = DAT_005de658;
      puVar1 = *(uint **)(*(int *)(this + 0x24) + iVar3 * 4);
      iVar3 = iVar3 + 1;
      *puVar1 = *puVar1 | 4;
    } while (iVar3 < param_1);
  }
  param_1 = 0;
  if (0 < param_3) {
    pfVar9 = param_5;
    do {
      fVar6 = 0.0;
      param_2 = (int *)(*(int *)(this + 8) +
                       *(int *)((int)pfVar9 + ((int)param_4 - (int)param_5)) * 0x24);
      ((uint *)param_2)[7] = 0;
      if (param_5 != (float *)0x0) {
        fVar6 = *pfVar9;
      }
      ((uint *)param_2)[6] = (uint)fVar6;
      *param_2 = *param_2 | 2;
      iVar3 = (**(code **)(*(int *)param_6 + 0xc))(0,param_2);
      if (iVar3 == 0) {
        return;
      }
      param_1 = param_1 + 1;
      pfVar9 = pfVar9 + 1;
    } while (param_1 < param_3);
  }
  while( true ) {
    iVar3 = *(int *)(this + 4);
    this_00 = (cgmWED_NODE *)0x0;
    if (iVar3 < 1) {
      return;
    }
    puVar8 = *(undefined4 **)(this + 0x24);
    fVar6 = DAT_005de658;
    do {
      pcVar4 = (cgmWED_NODE *)*puVar8;
      if ((((byte)*pcVar4 & 1) == 0) && (*(float *)(pcVar4 + 0x18) < fVar6)) {
        fVar6 = *(float *)(pcVar4 + 0x18);
        this_00 = pcVar4;
      }
      puVar8 = puVar8 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    if (this_00 == (cgmWED_NODE *)0x0) {
      return;
    }
    if (DAT_005de658 * ___real_3f666666 < fVar6) {
      return;
    }
    *(uint *)this_00 = *(uint *)this_00 | 1;
    iVar3 = (**(code **)(*(int *)param_6 + 0xc))(0,this_00);
    if (iVar3 == 0) break;
    param_1 = 0;
    if (0 < *(int *)(this_00 + 8)) {
      do {
        pcVar2 = *(cgmWED_EDGE **)(*(int *)(this_00 + 0xc) + param_1 * 4);
        pcVar4 = cgmWED_NODE::IncidentNode(this_00,pcVar2);
        if ((((*param_2 & 4) != 0) && (((byte)*pcVar4 & 1) == 0)) &&
           (iVar3 = (**(code **)(*(int *)param_6 + 4))(this_00,pcVar2), iVar3 != 0)) {
          fVar11 = (float10)(**(code **)(*(int *)this + 0x20))(pcVar2);
          if (fVar11 + (float10)*(float *)(this_00 + 0x18) < (float10)*(float *)(pcVar4 + 0x18)) {
            *(float *)(pcVar4 + 0x18) = (float)(fVar11 + (float10)*(float *)(this_00 + 0x18));
            *(cgmWED_NODE **)(pcVar4 + 0x1c) = this_00;
          }
        }
        param_1 = param_1 + 1;
      } while (param_1 < *(int *)(this_00 + 8));
    }
  }
  return;
}




/* from: m3d:cgm_wed_algo.cpp
   addr: 005660B0 */

void __thiscall cgmWED_SYS::CalcBoundary(cgmWED_SYS *this,int param_1)

{
  byte *pbVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  bool bVar7;
  
  iVar3 = 0;
  if (0 < *(int *)(this + 0xc)) {
    iVar5 = 0;
    do {
      puVar2 = (uint *)(*(int *)(this + 0x10) + iVar5);
      iVar5 = iVar5 + 0x24;
      iVar3 = iVar3 + 1;
      *puVar2 = *puVar2 & 0xffffffef;
    } while (iVar3 < *(int *)(this + 0xc));
  }
  iVar3 = 0;
  if (0 < *(int *)(this + 0x14)) {
    iVar5 = 0;
    do {
      puVar2 = (uint *)(*(int *)(this + 0x18) + iVar5);
      iVar5 = iVar5 + 0x1c;
      iVar3 = iVar3 + 1;
      *puVar2 = *puVar2 & 0xffffffef;
    } while (iVar3 < *(int *)(this + 0x14));
  }
  iVar3 = 0;
  if (0 < *(int *)(this + 4)) {
    iVar5 = 0;
    do {
      puVar2 = (uint *)(*(int *)(this + 8) + iVar5);
      iVar5 = iVar5 + 0x24;
      iVar3 = iVar3 + 1;
      *puVar2 = *puVar2 & 0xffffffef;
    } while (iVar3 < *(int *)(this + 4));
  }
  iVar3 = 0;
  if (0 < *(int *)(this + 0xc)) {
    iVar5 = 0;
    do {
      puVar2 = (uint *)(*(int *)(this + 0x10) + iVar5);
      if (param_1 == 0) {
        if (puVar2[4] != 0) {
          bVar7 = puVar2[5] == 0;
LAB_0056616b:
          if (bVar7) goto LAB_0056616d;
        }
      }
      else {
        pbVar1 = (byte *)puVar2[4];
        if (((pbVar1 == (byte *)0x0) || ((*pbVar1 & 8) == 0)) ||
           (((byte *)puVar2[5] != (byte *)0x0 && ((*(byte *)puVar2[5] & 8) != 0)))) {
          if (((byte *)puVar2[5] == (byte *)0x0) || ((*(byte *)puVar2[5] & 8) == 0))
          goto LAB_00566184;
          if (pbVar1 != (byte *)0x0) {
            bVar7 = (*pbVar1 & 8) == 0;
            goto LAB_0056616b;
          }
        }
LAB_0056616d:
        *puVar2 = *puVar2 | 0x10;
        *(uint *)puVar2[2] = *(uint *)puVar2[2] | 0x10;
        *(uint *)puVar2[3] = *(uint *)puVar2[3] | 0x10;
      }
LAB_00566184:
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + 0x24;
    } while (iVar3 < *(int *)(this + 0xc));
  }
  iVar3 = 0;
  if (0 < *(int *)(this + 0x14)) {
    iVar5 = 0;
    do {
      puVar2 = (uint *)(*(int *)(this + 0x18) + iVar5);
      uVar4 = puVar2[2];
      if (0 < (int)uVar4) {
        puVar6 = (undefined4 *)puVar2[3];
        do {
          if ((*(byte *)*puVar6 & 0x10) != 0) {
            *puVar2 = *puVar2 | 0x10;
          }
          puVar6 = puVar6 + 1;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + 0x1c;
    } while (iVar3 < *(int *)(this + 0x14));
  }
  return;
}




/* from: m3d:cgm_wed_algo.cpp
   addr: 005661D0 */

void __thiscall
cgmWED_SYS::DepthSearch(cgmWED_SYS *this,cgmWED_NODE *param_1,int param_2,cgmQUERY *param_3)

{
  cgmWED_EDGE *pcVar1;
  cgmWED_NODE *this_00;
  cgmWED_NODE *pcVar2;
  int iVar3;
  
  this_00 = param_1;
  param_1 = (cgmWED_NODE *)0x0;
  *(int *)(this_00 + 0x20) = param_2;
  if (0 < *(int *)(this_00 + 8)) {
    do {
      pcVar1 = *(cgmWED_EDGE **)(*(int *)(this_00 + 0xc) + (int)param_1 * 4);
      pcVar2 = cgmWED_NODE::IncidentNode(this_00,pcVar1);
      if ((((byte)*pcVar2 & 1) == 0) &&
         (iVar3 = (**(code **)(*(int *)param_3 + 4))(this_00,pcVar1), iVar3 != 0)) {
        *(uint *)pcVar2 = *(uint *)pcVar2 | 1;
        iVar3 = (**(code **)(*(int *)param_3 + 0xc))(pcVar1,pcVar2);
        if (iVar3 != 0) {
          DepthSearch(this,pcVar2,param_2,param_3);
        }
      }
      param_1 = param_1 + 1;
    } while ((int)param_1 < *(int *)(this_00 + 8));
  }
  return;
}




/* from: m3d:cgm_wed_algo.cpp
   addr: 00566260 */

int __thiscall
cgmQUERY_BOUNDARY::ProcessEdge(cgmQUERY_BOUNDARY *this,cgmWED_NODE *param_1,cgmWED_EDGE *param_2)

{
  cgmWED_NODE *pcVar1;
  
  pcVar1 = cgmWED_NODE::IncidentNode(param_1,param_2);
  if (((byte)*param_2 & 0x10) != 0) {
    return 1;
  }
  if ((((byte)*param_1 & 0x10) == 0) && (((byte)*pcVar1 & 0x10) == 0)) {
    return 1;
  }
  return 0;
}

