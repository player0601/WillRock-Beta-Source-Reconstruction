
/* from: gs:phys_rigid_cdt.cpp
   addr: 00513010 */

void __thiscall rgdCDT_QUERY::StartQuery(rgdCDT_QUERY *this)

{
  rgdRIGID *this_00;
  rgdCDT_QUERY *prVar1;
  int iVar2;
  
  this_00 = *(rgdRIGID **)(this + 0x430);
  rgdRIGID::CalcPointWCS
            (this_00,(rgdCFG *)(this_00 + 0xd8f),(m3dV *)(this_00 + 0x667),(m3dV *)(this + 0x10));
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(*(int *)(this + 0x430) + 0x673);
  iVar2 = 0;
  if (0 < *(int *)(*(int *)(this + 0x430) + 0x387)) {
    prVar1 = this + 0x20;
    do {
      *(undefined4 *)(prVar1 + 0x1c) = 0x3e4ccccd;
      *(undefined4 *)prVar1 = 0;
      *(int *)(prVar1 + 0x30) = iVar2;
      iVar2 = iVar2 + 1;
      prVar1 = prVar1 + 0x34;
    } while (iVar2 < *(int *)(*(int *)(this + 0x430) + 0x387));
  }
  return;
}




/* from: gs:phys_rigid_cdt.cpp
   addr: 00513080 */

void __thiscall rgdCDT_QUERY::MakeIndList(rgdCDT_QUERY *this,cdtOFL *param_1,int param_2)

{
  (**(code **)(**(int **)(this + 4) + 4))
            (this + 0x10,this + 0x10,*(undefined4 *)(this + 0x1c),param_1,param_2);
  return;
}




/* from: gs:phys_rigid_cdt.cpp
   addr: 005130B0 */

int __thiscall rgdCDT_QUERY::CalcDistance(rgdCDT_QUERY *this,void *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  rgdRIGID *prVar3;
  int iVar4;
  float unaff_ESI;
  rgdCDT_QUERY *prVar5;
  float unaff_EDI;
  undefined1 *puStack_150;
  m3dV amStack_138 [24];
  m3dBOX amStack_120 [12];
  undefined **local_114;
  undefined4 local_110;
  m3dPOLY amStack_10c [4];
  float fStack_108;
  float fStack_104;
  float fStack_100;
  m3dV amStack_fc [8];
  undefined1 local_f4 [228];
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  puStack_150 = local_f4;
  local_110 = 1;
  local_114 = &m3dBOX::_vftable_;
  (**(code **)(**(int **)(this + 4) + 0x44))(param_1,param_3);
  m3dBOX::Calc(amStack_120,amStack_fc,(int)fStack_100,0.01);
  iVar1 = m3dBOX::DistPoint(amStack_120,(m3dV *)(this + 0x10),*(float *)(this + 0x1c),(m3dV *)0x0,
                            (float *)0x0,(int *)0x0);
  if (iVar1 == 0) {
    return 0;
  }
  (**(code **)(**(int **)(this + 4) + 0x3c))(param_1,param_3,&stack0xfffffebc);
  if (*(float *)(this + 0x1c) <
      ABS((*(float *)(this + 0x10) - fStack_108) * (float)puStack_150 +
          unaff_EDI * (*(float *)(this + 0x14) - fStack_104) +
          unaff_ESI * (*(float *)(this + 0x18) - fStack_100))) {
    return 0;
  }
  prVar3 = *(rgdRIGID **)(this + 0x430);
  iVar1 = 0;
  if (0 < *(int *)(prVar3 + 0x387)) {
    iVar4 = 0;
    prVar5 = this + 0x3c;
    do {
      rgdRIGID::CalcPointWCS
                (prVar3,(rgdCFG *)(prVar3 + 0xd8f),(m3dV *)(prVar3 + iVar4 + 0x38b),amStack_138);
      prVar3 = *(rgdRIGID **)(this + 0x430);
      rgdRIGID::CalcPointWCS
                (prVar3,(rgdCFG *)(prVar3 + 0xd8f),(m3dV *)(prVar3 + iVar4 + 0x397),
                 (m3dV *)&stack0xfffffebc);
      iVar2 = m3dDistLSegPoly(amStack_138,(m3dV *)&stack0xfffffebc,amStack_10c,(m3dV *)&puStack_150,
                              (m3dV *)(prVar5 + 8),(m3dV *)(prVar5 + -0xc),(float *)prVar5,
                              (int *)(prVar5 + 4),*(float *)prVar5);
      if (iVar2 != 0) {
        *(undefined4 *)(prVar5 + -0x14) = uStack_10;
        *(undefined4 *)(prVar5 + -0x10) = uStack_c;
        *(uint *)(prVar5 + -0x1c) = *(uint *)(prVar5 + -0x1c) | 2;
      }
      prVar3 = *(rgdRIGID **)(this + 0x430);
      iVar1 = iVar1 + 1;
      iVar4 = iVar4 + 0x24;
      prVar5 = prVar5 + 0x34;
    } while (iVar1 < *(int *)(prVar3 + 0x387));
  }
  return 1;
}




/* from: gs:phys_rigid_cdt.cpp
   addr: 00513260 */

int __thiscall rgdCDT_QUERY::IsNearBVol(rgdCDT_QUERY *this,void *param_1,int param_2)

{
  rgdRIGID *this_00;
  int iVar1;
  m3dV local_c [12];
  
  this_00 = *(rgdRIGID **)(this + 0x430);
  rgdRIGID::CalcPointWCS(this_00,(rgdCFG *)(this_00 + 0xd8f),(m3dV *)(this_00 + 0x667),local_c);
  iVar1 = (**(code **)(**(int **)(this + 4) + 0x50))
                    ((*(int **)(this + 4))[0x19],param_2,local_c,
                     *(undefined4 *)(*(int *)(this + 0x430) + 0x673));
  return iVar1;
}




/* from: gs:phys_rigid_cdt.cpp
   addr: 005132B0 */

int __thiscall rgdCDT_QUERY::IsNearBVolAll(rgdCDT_QUERY *this,void *param_1)

{
  rgdRIGID *this_00;
  int iVar1;
  m3dV local_c [12];
  
  this_00 = *(rgdRIGID **)(this + 0x430);
  rgdRIGID::CalcPointWCS(this_00,(rgdCFG *)(this_00 + 0xd8f),(m3dV *)(this_00 + 0x667),local_c);
  iVar1 = (**(code **)(**(int **)(this + 4) + 0x54))
                    ((*(int **)(this + 4))[0x19],local_c,
                     *(undefined4 *)(*(int *)(this + 0x430) + 0x673));
  return iVar1;
}




/* from: gs:phys_rigid_cdt.cpp
   addr: 00513300 */

rgdINFO_LSEG * __thiscall rgdCDT_QUERY::GetCDTInfoNext(rgdCDT_QUERY *this,rgdINFO_LSEG *param_1)

{
  rgdCDT_QUERY *prVar1;
  
  if (param_1 != (rgdINFO_LSEG *)0x0) {
    param_1 = (rgdINFO_LSEG *)((int)(param_1 + (-0x20 - (int)this)) / 0x34 + 1);
  }
  if ((int)param_1 < *(int *)(*(int *)(this + 0x430) + 0x387)) {
    prVar1 = this + (int)param_1 * 0x34 + 0x20;
    do {
      if (((byte)*prVar1 & 2) != 0) {
        return (rgdINFO_LSEG *)(this + (int)param_1 * 0x34 + 0x20);
      }
      param_1 = param_1 + 1;
      prVar1 = prVar1 + 0x34;
    } while ((int)param_1 < *(int *)(*(int *)(this + 0x430) + 0x387));
  }
  return (rgdINFO_LSEG *)0x0;
}




/* from: gs:phys_rigid_cdt.cpp
   addr: 00513360 */

int __thiscall rgdCDT_QUERY::CalcDistance(rgdCDT_QUERY *this,rgdPLANE_SET *param_1)

{
  int iVar1;
  rgdRIGID *prVar2;
  int iVar3;
  m3dV *pmVar4;
  rgdCDT_QUERY *prVar5;
  int iStack_30;
  int iStack_2c;
  int local_28;
  m3dV amStack_18 [12];
  m3dV amStack_c [12];
  
  local_28 = 0;
  (**(code **)(*(int *)this + 4))();
  iStack_2c = 0;
  if (0 < *(int *)(param_1 + 0x78)) {
    pmVar4 = (m3dV *)(param_1 + 0xc);
    do {
      iVar3 = 0;
      if (ABS((*(float *)(this + 0x10) - *(float *)(pmVar4 + -0xc)) * *(float *)pmVar4 +
              *(float *)(pmVar4 + 4) * (*(float *)(this + 0x14) - *(float *)(pmVar4 + -8)) +
              *(float *)(pmVar4 + 8) * (*(float *)(this + 0x18) - *(float *)(pmVar4 + -4))) <=
          *(float *)(this + 0x1c)) {
        prVar2 = *(rgdRIGID **)(this + 0x430);
        iStack_30 = 0;
        if (0 < *(int *)(prVar2 + 0x387)) {
          prVar5 = this + 0x3c;
          do {
            rgdRIGID::CalcPointWCS
                      (prVar2,(rgdCFG *)(prVar2 + 0xd8f),(m3dV *)(prVar2 + iVar3 + 0x38b),amStack_c)
            ;
            prVar2 = *(rgdRIGID **)(this + 0x430);
            rgdRIGID::CalcPointWCS
                      (prVar2,(rgdCFG *)(prVar2 + 0xd8f),(m3dV *)(prVar2 + iVar3 + 0x397),amStack_18
                      );
            iVar1 = m3dDistLSegPlane(amStack_c,amStack_18,pmVar4 + -0xc,pmVar4,(m3dV *)(prVar5 + 8),
                                     (m3dV *)(prVar5 + -0xc),(float *)prVar5,*(float *)prVar5);
            if (iVar1 != 0) {
              *(undefined4 *)(prVar5 + 4) = 0xffffffff;
              *(int *)(prVar5 + -0x14) = iStack_2c;
              local_28 = 1;
              *(uint *)(prVar5 + -0x1c) = *(uint *)(prVar5 + -0x1c) | 2;
            }
            prVar2 = *(rgdRIGID **)(this + 0x430);
            iStack_30 = iStack_30 + 1;
            iVar3 = iVar3 + 0x24;
            prVar5 = prVar5 + 0x34;
          } while (iStack_30 < *(int *)(prVar2 + 0x387));
        }
      }
      iStack_2c = iStack_2c + 1;
      pmVar4 = pmVar4 + 0x18;
    } while (iStack_2c < *(int *)(param_1 + 0x78));
  }
  (**(code **)(*(int *)this + 0xc))();
  return local_28;
}




/* from: gs:phys_rigid_cdt.cpp
   addr: 005134E0 */

void __thiscall rgdPLANE_SET::AddPlane(rgdPLANE_SET *this,m3dPLANE *param_1)

{
  int iVar1;
  rgdPLANE_SET *prVar2;
  
  if (*(int *)(this + 0x78) < 5) {
    prVar2 = this + *(int *)(this + 0x78) * 0x18;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined4 *)prVar2 = *(undefined4 *)param_1;
      param_1 = param_1 + 4;
      prVar2 = prVar2 + 4;
    }
    *(int *)(this + 0x78) = *(int *)(this + 0x78) + 1;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:phys_rigid_cdt.cpp
   addr: 00513510 */

int __thiscall
rgdPLANE_SET::GetClosestPoint
          (rgdPLANE_SET *this,m3dV *param_1,float param_2,m3dV *param_3,m3dV *param_4,float *param_5
          )

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  rgdPLANE_SET *prVar10;
  int local_24;
  int local_20;
  
  local_20 = 0;
  local_24 = 0;
  iVar9 = 0;
  if (0 < *(int *)(this + 0x78)) {
    prVar10 = this + 0x14;
    do {
      fVar8 = (*(float *)(param_1 + 8) - *(float *)(prVar10 + -0xc)) * *(float *)prVar10 +
              (*(float *)(param_1 + 4) - *(float *)(prVar10 + -0x10)) * *(float *)(prVar10 + -4) +
              (*(float *)param_1 - *(float *)(prVar10 + -0x14)) * *(float *)(prVar10 + -8);
      if ((___real_00000000 <= fVar8) && (fVar8 < param_2)) {
        fVar7 = -((*(float *)(param_1 + 8) - *(float *)(prVar10 + -0xc)) * *(float *)prVar10 +
                 (*(float *)param_1 - *(float *)(prVar10 + -0x14)) * *(float *)(prVar10 + -8) +
                 (*(float *)(param_1 + 4) - *(float *)(prVar10 + -0x10)) * *(float *)(prVar10 + -4))
        ;
        fVar1 = *(float *)(prVar10 + -8);
        fVar2 = *(float *)(prVar10 + -4);
        fVar3 = *(float *)prVar10;
        fVar4 = *(float *)param_1;
        fVar5 = *(float *)(param_1 + 4);
        fVar6 = *(float *)(param_1 + 8);
        *param_5 = fVar8;
        *(float *)param_4 = *(float *)(prVar10 + -8);
        *(float *)(param_4 + 4) = *(float *)(prVar10 + -4);
        *(float *)(param_4 + 8) = *(float *)prVar10;
        if (param_3 != (m3dV *)0x0) {
          *(float *)param_3 = fVar7 * fVar1 + fVar4;
          *(float *)(param_3 + 4) = fVar7 * fVar2 + fVar5;
          *(float *)(param_3 + 8) = fVar7 * fVar3 + fVar6;
        }
        local_20 = 1;
        param_2 = fVar8;
      }
      prVar10 = prVar10 + 0x18;
      local_24 = local_24 + 1;
      iVar9 = local_20;
    } while (local_24 < *(int *)(this + 0x78));
  }
  return iVar9;
}

