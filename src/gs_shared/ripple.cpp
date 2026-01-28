
/* from: gs_shared:ripple.cpp
   addr: 00547640 */

int __fastcall rplInit(void)

{
  int iVar1;
  
  iVar1 = entRegisterClass(s_ripple,0x2452504c,0x32,rplEFFECT::Create,(char *)0x0,1);
  return (uint)(iVar1 != 0);
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:ripple.cpp
   addr: 00547670 */

entENTITY * __fastcall rplEFFECT::Create(animINST *param_1)

{
  undefined4 uVar1;
  entENTITY *this;
  
  DAT_009635ec = txmMANAGER::Add(txmManager,s_lspot_plr_rpl,0x40003,1);
  if (DAT_009635ec == (txmTEXTURE *)0x0) {
    return (entENTITY *)0x0;
  }
  this = (entENTITY *)operator_new(0x1a7);
  if (this != (entENTITY *)0x0) {
    entENTITY::entENTITY(this);
    *(undefined4 *)(this + 0x14f) = 0;
    *(undefined4 *)(this + 0x153) = 0;
    *(undefined4 *)(this + 0x157) = 0x437f0000;
    *(undefined4 *)(this + 0x15b) = 0x437f0000;
    *(undefined4 *)(this + 0x163) = 0x437f0000;
    *(undefined4 *)(this + 0x15f) = 0x433b0000;
    *(undefined4 *)(this + 0x167) = 2;
    *(undefined4 *)(this + 0x16b) = 2;
    *(undefined4 *)(this + 0x16f) = 0x40000000;
    *(undefined4 *)(this + 0x173) = 0x40000000;
    *(undefined4 *)(this + 0x177) = 0;
    *(undefined4 *)(this + 0x17b) = 0;
    *(undefined4 *)(this + 0x17f) = 0;
    *(undefined4 *)(this + 0x183) = _m3dVZero;
    *(undefined4 *)(this + 0x187) = DAT_00963740;
    *(undefined4 *)(this + 0x18b) = DAT_00963744;
    *(undefined4 *)(this + 399) = _m3dVZero;
    *(undefined4 *)(this + 0x193) = DAT_00963740;
    uVar1 = DAT_00963744;
    *(undefined4 *)(this + 0x19b) = 0;
    *(undefined4 *)(this + 0x19f) = 0;
    *(undefined4 *)(this + 0x197) = uVar1;
    *(undefined4 *)(this + 0x1a3) = 0xffffffff;
    *(undefined ***)this = &_vftable_;
    return this;
  }
  return (entENTITY *)0x0;
}




/* from: gs_shared:ripple.cpp
   addr: 00547780 */

rplRIPPLE * __thiscall
rplRIPPLE::rplRIPPLE(rplRIPPLE *this,float param_1,float param_2,ulong param_3)

{
  float fVar1;
  float fVar2;
  m3dSPL *pmVar3;
  m3dCTRL_TIME *pmVar4;
  m3dCTRL_COLOR *pmVar5;
  
  pteSPOT::pteSPOT((pteSPOT *)this,0);
  *(undefined4 *)(this + 0xf8) = 0;
  *(undefined4 *)(this + 0xfc) = 0;
  *(undefined4 *)(this + 0x100) = 0;
  *(undefined4 *)(this + 0x104) = 0;
  *(undefined ***)this = &_vftable_;
  pteSPOT::SetStateRend((pteSPOT *)this,0x6f);
  pmVar3 = (m3dSPL *)operator_new(0x34);
  if (pmVar3 == (m3dSPL *)0x0) {
    pmVar3 = (m3dSPL *)0x0;
  }
  else {
    *(undefined4 *)(pmVar3 + 4) = 0;
    *(undefined4 *)(pmVar3 + 8) = 0;
    *(undefined4 *)(pmVar3 + 0xc) = 0;
    *(undefined4 *)(pmVar3 + 0x14) = 8;
    *(undefined4 *)(pmVar3 + 0x18) = 8;
    *(undefined4 *)(pmVar3 + 0x1c) = 1;
    *(undefined4 *)(pmVar3 + 0x20) = 0;
    *(undefined4 *)(pmVar3 + 0x24) = 0;
    *(undefined4 *)(pmVar3 + 0x28) = 0;
    *(undefined4 *)(pmVar3 + 0x2c) = 0;
    *(undefined4 *)(pmVar3 + 0x30) = 0;
    *(undefined ***)pmVar3 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar3,2);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,0.05);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,1.0,param_2);
  pmVar4 = (m3dCTRL_TIME *)operator_new(0x20);
  if (pmVar4 == (m3dCTRL_TIME *)0x0) {
    pmVar4 = (m3dCTRL_TIME *)0x0;
  }
  else {
    m3dCTRL_TIME::m3dCTRL_TIME(pmVar4,param_1);
    *(undefined4 *)(pmVar4 + 0x18) = 0;
    *(m3dSPL **)(pmVar4 + 0x1c) = pmVar3;
    *(undefined ***)pmVar4 = &m3dCTRL_1D_SPL::_vftable_;
  }
  pteSPOT_ANIM::SetCtrlRad((pteSPOT_ANIM *)this,(m3dCTRL_1D *)pmVar4);
  fVar1 = (float)(param_3 >> 0x10 & 0xff);
  fVar2 = (float)(param_3 >> 8 & 0xff);
  pmVar3 = (m3dSPL *)operator_new(0x34);
  if (pmVar3 == (m3dSPL *)0x0) {
    pmVar3 = (m3dSPL *)0x0;
  }
  else {
    *(undefined4 *)(pmVar3 + 4) = 0;
    *(undefined4 *)(pmVar3 + 8) = 8;
    *(undefined4 *)(pmVar3 + 0xc) = 0;
    *(undefined4 *)(pmVar3 + 0x14) = 0x14;
    *(undefined4 *)(pmVar3 + 0x18) = 0x14;
    *(undefined4 *)(pmVar3 + 0x1c) = 4;
    *(undefined4 *)(pmVar3 + 0x20) = 0;
    *(undefined4 *)(pmVar3 + 0x24) = 0;
    *(undefined4 *)(pmVar3 + 0x28) = 0;
    *(undefined4 *)(pmVar3 + 0x2c) = 0;
    *(undefined4 *)(pmVar3 + 0x30) = 0;
    *(undefined ***)pmVar3 = &m3dSPL_COLOR::_vftable_;
    m3dSPL::AllocKpList(pmVar3,3);
  }
  m3dSPL_COLOR::SetKp((m3dSPL_COLOR *)pmVar3,0,0.0,fVar1,fVar2,(float)(param_3 & 0xff),
                      (float)(param_3 >> 0x18));
  m3dSPL_COLOR::SetKp((m3dSPL_COLOR *)pmVar3,1,0.33333334,fVar1,fVar2,(float)(param_3 & 0xff),
                      (float)(param_3 >> 0x18));
  m3dSPL_COLOR::SetKp((m3dSPL_COLOR *)pmVar3,2,1.0,0.0,0.0,0.0,0.0);
  pmVar4 = (m3dCTRL_TIME *)operator_new(0x2c);
  pmVar5 = (m3dCTRL_COLOR *)0x0;
  if (pmVar4 != (m3dCTRL_TIME *)0x0) {
    m3dCTRL_TIME::m3dCTRL_TIME(pmVar4,param_1);
    wrSTAT_WPN::wrSTAT_WPN((wrSTAT_WPN *)(pmVar4 + 0x18));
    *(m3dSPL **)(pmVar4 + 0x28) = pmVar3;
    *(undefined ***)pmVar4 = &m3dCTRL_COLOR_SPL::_vftable_;
    pmVar5 = (m3dCTRL_COLOR *)pmVar4;
  }
  pteSPOT_ANIM::SetCtrlColorBase((pteSPOT_ANIM *)this,pmVar5);
  pteSPOT::SetTex((pteSPOT *)this,DAT_009635ec);
  *(undefined4 *)(this + 8) = 0x28;
  *(uint *)(this + 4) = *(uint *)(this + 4) & 0xffffffef;
  return this;
}




/* from: gs_shared:ripple.cpp
   addr: 005479C0
   addr: 005479C0
   addr: 005479C0
   addr: 005479C0
   addr: 005479C0
   addr: 005479C0
   addr: 005479C0
   addr: 005479C0
   addr: 005479C0
   addr: 005479C0
   addr: 005479C0
   addr: 005479C0 */

void * __thiscall wrsfxSCORCHMARK::_vector_deleting_destructor_(wrsfxSCORCHMARK *this,uint param_1)

{
  *(undefined ***)this = &pteSPOT_ANIM::_vftable_;
  if (*(undefined4 **)(this + 0xf8) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0xf8))(1);
  }
  if (*(undefined4 **)(this + 0xfc) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0xfc))(1);
  }
  if (*(undefined4 **)(this + 0x100) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x100))(1);
  }
  if (*(undefined4 **)(this + 0x104) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x104))(1);
  }
  pteSPOT::~pteSPOT((pteSPOT *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: gs_shared:ripple.cpp
   addr: 00547A30 */

int __thiscall rplRIPPLE::IsShadeInst(rplRIPPLE *this,animINST *param_1)

{
  int iVar1;
  
  animINST::Validate(param_1,0x100);
  iVar1 = abvBVOL::DistPoint(*(abvBVOL **)(param_1 + 0x100),(m3dV *)(this + 0x90),
                             *(float *)(this + 200),(cdtINFO *)0x0);
  return (uint)(iVar1 != 0);
}




/* from: gs_shared:ripple.cpp
   addr: 00547A70 */

int __thiscall rplRIPPLE::IsShadeObj(rplRIPPLE *this,objOBJ *param_1)

{
  if (((byte)param_1[0xc] & 2) != 0) {
    return (uint)(*(int *)(param_1 + 0xbc) != 0);
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:ripple.cpp
   addr: 00547AA0 */

int __thiscall rplRIPPLE::ShadeFacePrepare(rplRIPPLE *this,objOBJ *param_1)

{
  objOBJ *poVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  int iVar5;
  objFACE *poVar6;
  float *pfVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  objOBJ *poVar12;
  float *pfVar13;
  undefined8 *puVar14;
  undefined4 *puVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  int local_130;
  float local_12c;
  float fStack_128;
  float local_124;
  objOBJ *local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c [3];
  int local_20;
  float *local_1c;
  float local_18;
  int local_14;
  int local_10;
  objOBJ *local_c;
  float *local_8;
  
  if (*(animINST **)(param_1 + 0xbc) != (animINST *)0x0) {
    animINST::Validate(*(animINST **)(param_1 + 0xbc),0x200);
  }
  (**(code **)(*(int *)this + 0x18))(&local_38);
  local_18 = *(float *)(this + 200);
  iVar5 = dsDYN_ARRAY::Expand((dsDYN_ARRAY *)&DAT_0096360c,*(int *)(param_1 + 0x14));
  if (iVar5 == 0) {
    return 0;
  }
  iVar5 = dsDYN_ARRAY::Expand((dsDYN_ARRAY *)&DAT_009635f0,*(int *)(param_1 + 0x14));
  if (iVar5 == 0) {
    return 0;
  }
  uVar9 = *(uint *)(param_1 + 0x14);
  puVar15 = (undefined4 *)*DAT_00963608;
  for (uVar8 = uVar9 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *puVar15 = 0;
    puVar15 = puVar15 + 1;
  }
  for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined1 *)puVar15 = 0;
    puVar15 = (undefined4 *)((int)puVar15 + 1);
  }
  if (*(animINST **)(param_1 + 0xbc) != (animINST *)0x0) {
    animINST::Validate(*(animINST **)(param_1 + 0xbc),1);
  }
  local_20 = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    local_14 = 0;
    do {
      local_130 = 3;
      if (((byte)*param_1 & 1) == 0) {
        local_3c = param_1 + 0x3c;
        local_8 = &local_12c;
        local_10 = 0;
        do {
          iVar5 = local_10;
          poVar6 = objOBJ::GetFace(param_1,local_20);
          pfVar7 = local_8;
          local_1c = local_8;
          poVar1 = (objOBJ *)
                   (*(int *)(*(int *)(param_1 + 0x28) + 0x40) +
                   (uint)*(ushort *)(poVar6 + iVar5 * 2 + 2) * 0xc);
          local_c = poVar1;
          if (m3dSimdType == 0) {
            if (((uint)local_3c & 0xf) == 0) {
              fVar26 = *(float *)poVar1;
              fVar2 = *(float *)(poVar1 + 4);
              fVar3 = *(float *)(poVar1 + 8);
              fVar24 = fVar26 * *(float *)local_3c + *(float *)(local_3c + 0x30) +
                       fVar2 * *(float *)(local_3c + 0x10) + fVar3 * *(float *)(local_3c + 0x20);
              fVar25 = fVar26 * *(float *)(local_3c + 4) + *(float *)(local_3c + 0x34) +
                       fVar2 * *(float *)(local_3c + 0x14) + fVar3 * *(float *)(local_3c + 0x24);
              fVar26 = fVar26 * *(float *)(local_3c + 8) + *(float *)(local_3c + 0x38) +
                       fVar2 * *(float *)(local_3c + 0x18) + fVar3 * *(float *)(local_3c + 0x28);
            }
            else {
              fVar26 = *(float *)poVar1;
              fVar2 = *(float *)(poVar1 + 4);
              fVar3 = *(float *)(poVar1 + 8);
              fVar24 = fVar26 * (float)*(undefined8 *)local_3c +
                       fVar2 * (float)*(undefined8 *)(local_3c + 0x10) +
                       fVar3 * (float)*(undefined8 *)(local_3c + 0x20) +
                       (float)*(undefined8 *)(local_3c + 0x30);
              fVar25 = fVar26 * (float)((ulonglong)*(undefined8 *)local_3c >> 0x20) +
                       fVar2 * (float)((ulonglong)*(undefined8 *)(local_3c + 0x10) >> 0x20) +
                       fVar3 * (float)((ulonglong)*(undefined8 *)(local_3c + 0x20) >> 0x20) +
                       (float)((ulonglong)*(undefined8 *)(local_3c + 0x30) >> 0x20);
              fVar26 = fVar26 * (float)*(undefined8 *)(local_3c + 8) +
                       fVar2 * (float)*(undefined8 *)(local_3c + 0x18) +
                       fVar3 * (float)*(undefined8 *)(local_3c + 0x28) +
                       (float)*(undefined8 *)(local_3c + 0x38);
            }
            *(ulonglong *)local_8 = CONCAT44(fVar25,fVar24);
            local_8[2] = fVar26;
            local_10 = iVar5;
          }
          else if (m3dSimdType == 1) {
            FastExitMediaState();
            uVar16 = (undefined4)*(undefined8 *)poVar1;
            uVar19 = CONCAT44(uVar16,uVar16);
            uVar16 = (undefined4)((ulonglong)*(undefined8 *)poVar1 >> 0x20);
            uVar22 = CONCAT44(uVar16,uVar16);
            uVar23 = CONCAT44(*(float *)(poVar1 + 8),*(float *)(poVar1 + 8));
            uVar17 = PackedFloatingMUL(uVar19,*(undefined8 *)local_3c);
            uVar18 = PackedFloatingMUL(uVar22,*(undefined8 *)(local_3c + 0x10));
            uVar20 = PackedFloatingMUL(uVar23,*(undefined8 *)(local_3c + 0x20));
            uVar17 = PackedFloatingADD(uVar17,*(undefined8 *)(local_3c + 0x30));
            uVar21 = PackedFloatingMUL(uVar19,*(undefined8 *)(local_3c + 8));
            uVar19 = PackedFloatingADD(uVar18,uVar20);
            uVar18 = PackedFloatingMUL(uVar22,*(undefined8 *)(local_3c + 0x18));
            uVar23 = PackedFloatingMUL(uVar23,*(undefined8 *)(local_3c + 0x28));
            uVar22 = PackedFloatingADD(uVar21,*(undefined8 *)(local_3c + 0x38));
            uVar19 = PackedFloatingADD(uVar17,uVar19);
            uVar17 = PackedFloatingADD(uVar18,uVar23);
            *(undefined8 *)local_8 = uVar19;
            uVar19 = PackedFloatingADD(uVar22,uVar17);
            pfVar7[2] = (float)uVar19;
            FastExitMediaState();
            local_10 = iVar5;
          }
          else {
            iVar5 = 0;
            do {
              iVar10 = 0;
              *pfVar7 = 0.0;
              poVar12 = local_3c + -(int)local_8 + (int)pfVar7;
              do {
                iVar11 = iVar10 * 4;
                fVar26 = *(float *)poVar12;
                iVar10 = iVar10 + 1;
                poVar12 = poVar12 + 0x10;
                *pfVar7 = *(float *)(poVar1 + iVar11) * fVar26 + *pfVar7;
              } while (iVar10 < 3);
              iVar10 = iVar5 + iVar10 * 4;
              iVar5 = iVar5 + 1;
              *pfVar7 = *(float *)(local_3c + iVar10 * 4) + *pfVar7;
              pfVar7 = pfVar7 + 1;
              local_c = local_3c + -(int)local_8;
            } while (iVar5 < 3);
          }
          local_10 = local_10 + 1;
          local_8 = local_8 + 3;
        } while (local_10 < local_130);
      }
      else {
        piVar4 = *(int **)(param_1 + 0x28);
        iVar5 = 0;
        pfVar7 = &local_12c;
        do {
          iVar10 = iVar5 * 2;
          iVar5 = iVar5 + 1;
          pfVar13 = (float *)(piVar4[0x10] +
                             (uint)*(ushort *)
                                    ((uint)*(byte *)(piVar4 + 1) * local_20 + 2 + iVar10 + *piVar4)
                             * 0xc);
          *pfVar7 = *pfVar13;
          pfVar7[1] = pfVar13[1];
          pfVar7[2] = pfVar13[2];
          pfVar7 = pfVar7 + 3;
        } while (iVar5 < 3);
      }
      pfVar7 = (float *)(*(int *)(*(int *)(param_1 + 0x28) + 0x44) + local_14);
      local_8 = (float *)ABS((local_38 - local_12c) * *pfVar7 +
                             (local_34 - fStack_128) * pfVar7[1] +
                             (local_30 - local_124) * pfVar7[2]);
      if (((float)local_8 <= local_18) &&
         (iVar5 = m3xzIsIsectPolyCircle((m3dPOLY *)&local_130,(m3dV *)&local_38,local_18),
         iVar5 != 0)) {
        iVar5 = 2;
        do {
          iVar10 = (uint)*(byte *)(*(int **)(param_1 + 0x28) + 1) * local_20 + iVar5;
          iVar5 = iVar5 + 2;
          *(undefined1 *)
           ((uint)*(ushort *)(iVar10 + **(int **)(param_1 + 0x28)) * DAT_009635f8 + *DAT_00963608) =
               1;
        } while (iVar5 < 8);
      }
      local_20 = local_20 + 1;
      local_14 = local_14 + 0xc;
    } while (local_20 < *(int *)(param_1 + 0x10));
  }
  local_1c = (float *)(___real_3f000000 / local_18);
  local_18 = 0.0;
  if (0 < *(int *)(param_1 + 0x14)) {
    local_14 = 0;
    do {
      if (((byte)*param_1 & 1) == 0) {
        poVar1 = param_1 + 0x3c;
        puVar14 = (undefined8 *)(*(int *)(*(int *)(param_1 + 0x28) + 0x40) + local_14);
        local_c = (objOBJ *)puVar14;
        if (m3dSimdType != 0) {
          if (m3dSimdType == 1) {
            FastExitMediaState();
            uVar16 = (undefined4)*puVar14;
            uVar19 = CONCAT44(uVar16,uVar16);
            uVar16 = (undefined4)((ulonglong)*puVar14 >> 0x20);
            uVar22 = CONCAT44(uVar16,uVar16);
            uVar23 = CONCAT44(*(undefined4 *)(puVar14 + 1),*(undefined4 *)(puVar14 + 1));
            uVar17 = PackedFloatingMUL(uVar19,*(undefined8 *)poVar1);
            uVar18 = PackedFloatingMUL(uVar22,*(undefined8 *)(param_1 + 0x4c));
            uVar20 = PackedFloatingMUL(uVar23,*(undefined8 *)(param_1 + 0x5c));
            uVar17 = PackedFloatingADD(uVar17,*(undefined8 *)(param_1 + 0x6c));
            uVar21 = PackedFloatingMUL(uVar19,*(undefined8 *)(param_1 + 0x44));
            uVar19 = PackedFloatingADD(uVar18,uVar20);
            uVar18 = PackedFloatingMUL(uVar22,*(undefined8 *)(param_1 + 0x54));
            uVar23 = PackedFloatingMUL(uVar23,*(undefined8 *)(param_1 + 100));
            uVar22 = PackedFloatingADD(uVar21,*(undefined8 *)(param_1 + 0x74));
            uVar19 = PackedFloatingADD(uVar17,uVar19);
            uVar17 = PackedFloatingADD(uVar18,uVar23);
            local_2c[0] = (float)uVar19;
            uVar19 = PackedFloatingADD(uVar22,uVar17);
            local_2c[2] = (float)uVar19;
            FastExitMediaState();
          }
          else {
            iVar5 = 0;
            local_10 = (int)poVar1 - (int)local_2c;
            pfVar7 = local_2c;
            do {
              iVar10 = local_10;
              iVar11 = 0;
              *pfVar7 = 0.0;
              pfVar13 = (float *)(iVar10 + (int)pfVar7);
              do {
                iVar10 = iVar11 * 4;
                fVar26 = *pfVar13;
                iVar11 = iVar11 + 1;
                pfVar13 = pfVar13 + 4;
                *pfVar7 = *(float *)((int)puVar14 + iVar10) * fVar26 + *pfVar7;
              } while (iVar11 < 3);
              iVar10 = iVar5 + iVar11 * 4;
              iVar5 = iVar5 + 1;
              *pfVar7 = *(float *)(poVar1 + iVar10 * 4) + *pfVar7;
              pfVar7 = pfVar7 + 1;
            } while (iVar5 < 3);
          }
        }
      }
      else {
        pfVar7 = (float *)(*(int *)(*(int *)(param_1 + 0x28) + 0x40) + local_14);
        local_2c[0] = *pfVar7;
        local_2c[1] = pfVar7[1];
        local_2c[2] = pfVar7[2];
      }
      local_14 = local_14 + 0xc;
      pfVar7 = (float *)(DAT_00963614 * (int)local_18 + *DAT_00963624);
      local_18 = (float)((int)local_18 + 1);
      *pfVar7 = (local_2c[0] - local_38) * (float)local_1c + ___real_3f000000;
      pfVar7[1] = (local_2c[2] - local_30) * (float)local_1c + ___real_3f000000;
    } while ((int)local_18 < *(int *)(param_1 + 0x14));
  }
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:ripple.cpp
   addr: 00548040 */

int __thiscall
rplRIPPLE::ShadeFace
          (rplRIPPLE *this,objOBJ *param_1,int param_2,pteSDR_INFO *param_3,ptePOLY_DATA *param_4)

{
  m3dPOLY *pmVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  int unaff_retaddr;
  float fStack_10;
  float local_c;
  float fStack_8;
  
  (**(code **)(*(int *)this + 0x18))(&local_c);
  fVar2 = *(float *)(this + 200);
  pmVar1 = (m3dPOLY *)(param_2 + 4);
  pfVar4 = (float *)(*(int *)(*(int *)(unaff_retaddr + 0x28) + 0x44) + (int)param_1 * 0xc);
  if (fVar2 < ABS((fStack_10 - *(float *)(param_2 + 8)) * *pfVar4 +
                  (local_c - *(float *)(param_2 + 0xc)) * pfVar4[1] +
                  (fStack_8 - *(float *)(param_2 + 0x10)) * pfVar4[2])) {
    return 0;
  }
  iVar3 = m3xzIsIsectPolyCircle(pmVar1,(m3dV *)&fStack_10,fVar2);
  if (iVar3 == 0) {
    return 0;
  }
  fVar2 = ___real_3f000000 / fVar2;
  iVar3 = 0;
  if (0 < *(int *)pmVar1) {
    pfVar4 = (float *)(param_2 + 0x10);
    do {
      iVar3 = iVar3 + 1;
      *(float *)(param_3 + 4) = (pfVar4[-2] - fStack_10) * fVar2 + ___real_3f000000;
      *(float *)(param_3 + 8) = (*pfVar4 - fStack_8) * fVar2 + ___real_3f000000;
      pfVar4 = pfVar4 + 3;
      param_3 = param_3 + 8;
    } while (iVar3 < *(int *)pmVar1);
  }
  return 1;
}




/* from: gs_shared:ripple.cpp
   addr: 00548140 */

int __thiscall
rplRIPPLE::ShadeVert(rplRIPPLE *this,objOBJ *param_1,int param_2,pteVERT_DATA *param_3)

{
  int iVar1;
  int iVar2;
  
  if (*(char *)(DAT_009635f8 * param_2 + *DAT_00963608) == '\0') {
    return 0;
  }
  iVar2 = DAT_00963614 * param_2;
  iVar1 = *DAT_00963624;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(iVar2 + iVar1);
  *(undefined4 *)(param_3 + 5) = *(undefined4 *)(iVar2 + 4 + iVar1);
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:ripple.cpp
   addr: 00548190 */

rplSTEAM * __thiscall rplSTEAM::rplSTEAM(rplSTEAM *this,float param_1)

{
  float fVar1;
  float fVar2;
  m3dSPL *this_00;
  m3dSPL_COLOR *unaff_EBX;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,100.0,1.0);
  fVar1 = param_1 * ___real_3dcccccd;
  *(undefined ***)this = &_vftable_;
  partEMITTER_PHYS::SetSize
            ((partEMITTER_PHYS *)this,fVar1,param_1 * ___real_3d23d70a,(m3dSPL_LINEAR1D *)0x0,1.0);
  fVar2 = param_1 * ___real_3e99999a;
  *(undefined4 *)(this + 0xbc) = 0;
  *(float *)(this + 0xc4) = fVar1;
  *(undefined4 *)(this + 200) = 0;
  *(undefined4 *)(this + 0xf0) = 0;
  *(float *)(this + 0xb4) = fVar2;
  fVar1 = param_1 * ___real_3e4ccccd;
  *(undefined4 *)(this + 0xec) = 0;
  *(undefined4 *)(this + 0xf8) = 0x41200000;
  *(undefined4 *)(this + 0xfc) = 0;
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0xe0) = 0x3f800000;
  *(undefined4 *)(this + 0xe4) = 0;
  *(float *)(this + 0xb8) = fVar1;
  *(undefined4 *)(this + 0xb0) = 0x3e99999a;
  *(float *)(this + 0xc0) = fVar2;
  *(float *)(this + 0xe8) = fVar2;
  this_00 = (m3dSPL *)operator_new(0x34);
  if (this_00 == (m3dSPL *)0x0) {
    this_00 = (m3dSPL *)0x0;
  }
  else {
    *(undefined4 *)(this_00 + 4) = 0;
    *(undefined4 *)(this_00 + 8) = 8;
    *(undefined4 *)(this_00 + 0xc) = 0;
    *(undefined4 *)(this_00 + 0x14) = 0x14;
    *(undefined4 *)(this_00 + 0x18) = 0x14;
    *(undefined4 *)(this_00 + 0x1c) = 4;
    *(undefined4 *)(this_00 + 0x20) = 0;
    *(undefined4 *)(this_00 + 0x24) = 0;
    *(undefined4 *)(this_00 + 0x28) = 0;
    *(undefined4 *)(this_00 + 0x2c) = 0;
    *(undefined4 *)(this_00 + 0x30) = 0;
    *(undefined ***)this_00 = &m3dSPL_COLOR::_vftable_;
    m3dSPL::AllocKpList(this_00,2);
  }
  m3dSPL_COLOR::SetKp((m3dSPL_COLOR *)this_00,0,0.0,181.0,236.0,84.0,150.0);
  m3dSPL_COLOR::SetKp((m3dSPL_COLOR *)this_00,1,1.0,255.0,255.0,255.0,20.0);
  (**(code **)(*(int *)this + 8))(0,&param_1,0);
  partEMITTER_PHYS::SetColor((partEMITTER_PHYS *)this,0,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)0x0);
  if (unaff_EBX != (m3dSPL_COLOR *)0x0) {
    m3dSPL_COLOR::SetKp(unaff_EBX,0,0.0,0.0,0.0,0.0,0.0);
  }
  return this;
}




/* from: gs_shared:ripple.cpp
   addr: 00548340 */

void __thiscall rplSTEAM::SetColor(rplSTEAM *this,ulong param_1,m3dSPL_COLOR *param_2)

{
  m3dSPL_COLOR *unaff_EDI;
  undefined1 local_c [4];
  uint uStack_8;
  
  (**(code **)(*(int *)this + 8))(0,local_c,0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,uStack_8,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)0x0);
  if (unaff_EDI != (m3dSPL_COLOR *)0x0) {
    m3dSPL_COLOR::SetKp(unaff_EDI,0,0.0,(float)(uStack_8 >> 0x10 & 0xff),
                        (float)(uStack_8 >> 8 & 0xff),(float)(uStack_8 & 0xff),
                        (float)(uStack_8 >> 0x18));
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:ripple.cpp
   addr: 005483E0 */

int __thiscall
rplEFFECT::ProcessMsg(rplEFFECT *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  void *pvVar1;
  rplRIPPLE *this_00;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint *puVar7;
  rplSTEAM *this_01;
  partEMITTER_PHYS *ppVar8;
  int iVar9;
  undefined4 *puVar10;
  rplEFFECT *prVar11;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  if (param_1 < 4) {
    if (param_1 == 3) {
      if ((*(void **)(this + 0xc0) != (void *)0x0) && (*(void **)(this + 0xc0) == param_2)) {
        msgSYSTEM::PostMsg(&msgSystem,(msgADDR *)this,2,(msgADDR *)this);
        return 0;
      }
    }
    else if (param_1 == 1) {
      if (param_2 != (void *)0x0) {
        puVar10 = (undefined4 *)param_2;
        prVar11 = this + 0x14f;
        for (iVar9 = 10; iVar9 != 0; iVar9 = iVar9 + -1) {
          *(undefined4 *)prVar11 = *puVar10;
          puVar10 = puVar10 + 1;
          prVar11 = prVar11 + 4;
        }
      }
      iVar9 = animINST::GetFloat(*(animINST **)(this + 0xbc),s_RIPPLE,s_SCALE,(float *)&param_2);
      if (iVar9 != 0) {
        *(float *)(this + 0x173) = (float)param_2 * *(float *)(this + 0x173);
      }
      animINST::GetColor(*(animINST **)(this + 0xbc),s_RIPPLE,s_COLOR,(m3dCOLOR *)(this + 0x157));
      iVar9 = animINST::GetColor(*(animINST **)(this + 0xbc),s_RIPPLE,s_PART_COLOR,
                                 (m3dCOLOR *)&local_10);
      if (iVar9 == 0) {
        local_10 = 0x437f0000;
        local_c = 0x437f0000;
        local_8 = 0x437f0000;
        local_4 = 0x437f0000;
      }
      iVar9 = animINST::GetInt(*(animINST **)(this + 0xbc),s_RIPPLE,s_SMOKE,&param_1);
      if (iVar9 != 0) {
        *(uint *)(this + 0x14f) = *(uint *)(this + 0x14f) | 2;
      }
      pvVar1 = apMalloc(*(int *)(this + 0x16b) << 2);
      *(void **)(this + 0x177) = pvVar1;
      if (pvVar1 != (void *)0x0) {
        pvVar1 = apMalloc(*(int *)(this + 0x16b) * 0xc);
        *(void **)(this + 0x17b) = pvVar1;
        if (pvVar1 != (void *)0x0) {
          iVar9 = 0;
          if (0 < *(int *)(this + 0x16b)) {
            do {
              this_00 = (rplRIPPLE *)operator_new(0x108);
              if (this_00 == (rplRIPPLE *)0x0) {
                uVar6 = 0;
              }
              else {
                iVar2 = ftol();
                uVar3 = ftol();
                uVar4 = ftol();
                uVar5 = ftol();
                uVar6 = rplRIPPLE::rplRIPPLE
                                  (this_00,*(float *)(this + 0x16f),*(float *)(this + 0x173),
                                   ((iVar2 << 8 | uVar3 & 0xff) << 8 | uVar4 & 0xff) << 8 |
                                   uVar5 & 0xff);
              }
              *(undefined4 *)(*(int *)(this + 0x177) + iVar9 * 4) = uVar6;
              pteSHADER::Register(*(pteSHADER **)(*(int *)(this + 0x177) + iVar9 * 4));
              (**(code **)(**(int **)(*(int *)(this + 0x177) + iVar9 * 4) + 4))(0);
              if (*(txmTEXTURE **)(this + 0x153) != (txmTEXTURE *)0x0) {
                pteSPOT::SetTex(*(pteSPOT **)(*(int *)(this + 0x177) + iVar9 * 4),
                                *(txmTEXTURE **)(this + 0x153));
              }
              puVar7 = (uint *)(*(int *)(*(int *)(*(int *)(this + 0x177) + iVar9 * 4) + 0xf8) + 4);
              *puVar7 = *puVar7 | 6;
              puVar7 = (uint *)(*(int *)(*(int *)(this + 0x177) + iVar9 * 4) + 0xf4);
              iVar9 = iVar9 + 1;
              *puVar7 = *puVar7 | 4;
            } while (iVar9 < *(int *)(this + 0x16b));
          }
          if (((byte)this[0x14f] & 2) != 0) {
            this_01 = (rplSTEAM *)operator_new(0x2c0);
            if (this_01 == (rplSTEAM *)0x0) {
              ppVar8 = (partEMITTER_PHYS *)0x0;
            }
            else {
              ppVar8 = (partEMITTER_PHYS *)
                       rplSTEAM::rplSTEAM(this_01,*(float *)(this + 0x173) * ___real_3f000000);
            }
            *(partEMITTER_PHYS **)(this + 0x17f) = ppVar8;
            partEMITTER_PHYS::SetPosDirSpeed(ppVar8,(m3dV *)0x0,&m3dVUnitY,(m3dV *)0x0);
            partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)(this + 0x17f));
            iVar9 = **(int **)(this + 0x17f);
            iVar2 = ftol(0);
            uVar3 = ftol();
            uVar4 = ftol();
            uVar5 = ftol();
            (**(code **)(iVar9 + 0x30))
                      (((iVar2 << 8 | uVar3 & 0xff) << 8 | uVar4 & 0xff) << 8 | uVar5 & 0xff);
          }
          *(uint *)(this + 0x14f) = *(uint *)(this + 0x14f) | 4;
          *(undefined4 *)(this + 0x19f) = 0;
          *(undefined4 *)(this + 0x1a3) = 0xffffffff;
          return 0;
        }
      }
    }
    else if (param_1 == 2) {
      iVar9 = 0;
      if (0 < *(int *)(this + 0x16b)) {
        do {
          puVar10 = *(undefined4 **)(*(int *)(this + 0x177) + iVar9 * 4);
          if (puVar10 != (undefined4 *)0x0) {
            (**(code **)*puVar10)(1);
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < *(int *)(this + 0x16b));
      }
      apFree(*(void **)(this + 0x177));
      *(undefined4 *)(this + 0x177) = 0;
      apFree(*(void **)(this + 0x17b));
      *(undefined4 *)(this + 0x17b) = 0;
      if (*(undefined4 **)(this + 0x17f) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(this + 0x17f))(1);
      }
      *(undefined4 *)(this + 0x17f) = 0;
      return 0;
    }
  }
  else if (param_1 == 1000) {
    if (*(int *)(this + 0xc0) != 0) {
      uVar3 = *(uint *)(*(int *)(this + 0xbc) + 4);
      if ((*(byte *)(*(int *)(*(int *)(this + 0xc0) + 0xbc) + 4) & 1) == 0) {
        uVar3 = uVar3 & 0xfffffffe;
      }
      else {
        uVar3 = uVar3 | 1;
      }
      *(uint *)(*(int *)(this + 0xbc) + 4) = uVar3;
    }
    Update(this);
    ppVar8 = *(partEMITTER_PHYS **)(this + 0x17f);
    if (ppVar8 != (partEMITTER_PHYS *)0x0) {
      if ((*(byte *)(*(int *)(this + 0xbc) + 4) & 1) == 0) {
        partEMITTER_PHYS::StartEmission(ppVar8);
      }
      else {
        partEMITTER_PHYS::StopEmission(ppVar8);
      }
      partEMITTER_PHYS::SetPosDirSpeed
                (*(partEMITTER_PHYS **)(this + 0x17f),(m3dV *)(this + 0x183),(m3dV *)0x0,(m3dV *)0x0
                );
    }
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:ripple.cpp
   addr: 00548840 */

void __thiscall rplEFFECT::Update(rplEFFECT *this)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  undefined8 in_MM1;
  undefined8 extraout_MM1;
  undefined8 uVar8;
  undefined8 uVar9;
  float fVar10;
  undefined1 auVar11 [16];
  float local_14;
  float local_10;
  float local_c;
  float fStack_8;
  
  local_14 = *(float *)(this + 399) * *(float *)(this + 399) +
             *(float *)(this + 0x193) * *(float *)(this + 0x193) +
             *(float *)(this + 0x197) * *(float *)(this + 0x197);
  if (m3dSimdType == 0) {
    local_14 = local_14 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar11 = rsqrtss(ZEXT416((uint)local_14),ZEXT416((uint)local_14));
    fVar10 = auVar11._0_4_;
    local_14 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar10 *
               (`float___cdecl_m3dSqrt(float)'::__l2::three - local_14 * fVar10 * fVar10) * local_14
    ;
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar7 = (ulonglong)(uint)local_14;
    uVar8 = PackedFloatingReciprocalSQRAprox(in_MM1,uVar7);
    uVar9 = PackedFloatingMUL(uVar8,uVar8);
    uVar9 = PackedFloatingReciprocalSQRIter1(uVar9,uVar7);
    uVar8 = PackedFloatingReciprocalIter2(uVar9,uVar8);
    uVar8 = PackedFloatingMUL(uVar8,uVar7);
    local_14 = (float)uVar8;
    FastExitMediaState();
  }
  else {
    local_14 = SQRT(local_14);
  }
  iVar5 = 0;
  local_10 = local_14;
  if (0 < *(int *)(this + 0x16b)) {
    iVar6 = 0;
    do {
      piVar4 = *(int **)(*(int *)(this + 0x177) + iVar5 * 4);
      if ((*(byte *)(piVar4 + 1) & 1) != 0) {
        (**(code **)(*piVar4 + 0x18))(&local_c);
        pfVar3 = (float *)(*(int *)(this + 0x17b) + iVar6);
        local_10 = gsElapsedTime * *pfVar3 + local_10;
        local_c = gsElapsedTime * pfVar3[1] + local_c;
        fStack_8 = gsElapsedTime * pfVar3[2] + fStack_8;
        (**(code **)(**(int **)(*(int *)(this + 0x177) + iVar5 * 4) + 0x14))(&local_10);
        pfVar3 = (float *)(*(int *)(this + 0x17b) + iVar6);
        local_14 = *pfVar3 * *pfVar3 + pfVar3[1] * pfVar3[1] + pfVar3[2] * pfVar3[2];
        if (m3dSimdType == 0) {
          local_14 = local_14 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
          auVar11 = rsqrtss(ZEXT416((uint)local_14),ZEXT416((uint)local_14));
          fVar10 = auVar11._0_4_;
          local_14 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar10 *
                     (`float___cdecl_m3dSqrt(float)'::__l2::three - local_14 * fVar10 * fVar10) *
                     local_14;
        }
        else if (m3dSimdType == 1) {
          FastExitMediaState();
          uVar7 = (ulonglong)(uint)local_14;
          uVar8 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar7);
          uVar9 = PackedFloatingMUL(uVar8,uVar8);
          uVar9 = PackedFloatingReciprocalSQRIter1(uVar9,uVar7);
          uVar8 = PackedFloatingReciprocalIter2(uVar9,uVar8);
          uVar8 = PackedFloatingMUL(uVar8,uVar7);
          local_14 = (float)uVar8;
          FastExitMediaState();
        }
        else {
          local_14 = SQRT(local_14);
        }
        fVar10 = ___real_3f7d70a4;
        if (local_10 < local_14) {
          fVar10 = (local_10 / local_14) * ___real_3f866666;
        }
        pfVar3 = (float *)(*(int *)(this + 0x17b) + iVar6);
        *pfVar3 = fVar10 * *pfVar3;
        pfVar3[1] = fVar10 * pfVar3[1];
        pfVar3[2] = fVar10 * pfVar3[2];
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 0xc;
    } while (iVar5 < *(int *)(this + 0x16b));
  }
  fVar10 = gsElapsedTime + *(float *)(this + 0x19b);
  *(float *)(this + 0x19b) = fVar10;
  if ((((byte)this[0x14f] & 4) != 0) && ((*(byte *)(*(int *)(this + 0xbc) + 4) & 1) == 0)) {
    iVar5 = *(int *)(this + 0x16b);
    fVar1 = *(float *)(this + 0x16f) / (float)*(int *)(this + 0x167);
    fVar2 = fVar1;
    if ((___real_00000000 <= local_10) &&
       (fVar2 = *(float *)(this + 0x16f) / (float)iVar5, local_10 <= ___real_40400000)) {
      fVar2 = (*(float *)(this + 0x16f) / (float)iVar5 - fVar1) * local_10 * ___real_3eaaaaab +
              fVar1;
    }
    if (fVar2 <= fVar10) {
      iVar6 = 0;
      if (0 < iVar5) {
        piVar4 = *(int **)(this + 0x177);
        do {
          if ((*(byte *)(*piVar4 + 4) & 1) == 0) break;
          iVar6 = iVar6 + 1;
          piVar4 = piVar4 + 1;
        } while (iVar6 < iVar5);
      }
      if (iVar6 < iVar5) {
        pteSPOT_ANIM::SetCurTime(*(pteSPOT_ANIM **)(*(int *)(this + 0x177) + iVar6 * 4),0.0);
        (**(code **)(**(int **)(*(int *)(this + 0x177) + iVar6 * 4) + 4))(1);
        (**(code **)(**(int **)(*(int *)(this + 0x177) + iVar6 * 4) + 0x14))(this + 0x183);
        *(undefined4 *)(this + 0x19b) = 0;
        pfVar3 = (float *)(*(int *)(this + 0x17b) + iVar6 * 0xc);
        *pfVar3 = *(float *)(this + 399) * ___real_3f333333;
        pfVar3[1] = *(float *)(this + 0x193) * ___real_3f333333;
        pfVar3[2] = *(float *)(this + 0x197) * ___real_3f333333;
        iVar5 = *(int *)(this + 0x19f);
        *(int *)(this + 0x19f) = iVar5 + 1;
        if ((*(int *)(this + 0x1a3) != -1) && (*(int *)(this + 0x1a3) < iVar5 + 1)) {
          *(uint *)(this + 0x14f) = *(uint *)(this + 0x14f) & 0xfffffffb;
          *(undefined4 *)(this + 0x19f) = 0;
          *(undefined4 *)(this + 0x1a3) = 0xffffffff;
          return;
        }
      }
    }
  }
  return;
}




/* from: gs_shared:ripple.cpp
   addr: 00548C20
   addr: 00548C20 */

void * __thiscall rplEFFECT::_vector_deleting_destructor_(rplEFFECT *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  gsDOMAIN_LIST::~gsDOMAIN_LIST((gsDOMAIN_LIST *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

