
/* from: gs:gs_iface.cpp
   addr: 00528380 */

objOBJ * __thiscall gsIFACE_SYSTEM::FindObj(gsIFACE_SYSTEM *this,char *param_1)

{
  objOBJ *poVar1;
  
  poVar1 = objFindName(*(objOBJ **)(*(int *)(this + 8) + 0x10),param_1);
  if (poVar1 == (objOBJ *)0x0) {
    poVar1 = objFindName(*(objOBJ **)(*(int *)(this + 8) + 0x10),s_unknown_obj);
  }
  return poVar1;
}




/* from: gs:gs_iface.cpp
   addr: 005283B0 */

void __thiscall gsIFACE_SYSTEM::GetRectObj(gsIFACE_SYSTEM *this,objOBJ *param_1,gssRECT *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = *(float *)(param_1 + 200);
  fVar2 = *(float *)(param_1 + 0xcc);
  fVar3 = *(float *)(param_1 + 0xd4);
  fVar4 = *(float *)(param_1 + 0xd8);
  *(float *)param_2 = fVar1;
  *(float *)(param_2 + 4) = -fVar4;
  *(float *)(param_2 + 8) = fVar3 - fVar1;
  *(float *)(param_2 + 0xc) = fVar4 - fVar2;
  return;
}




/* from: gs:gs_iface.cpp
   addr: 00528400 */

int __thiscall
gssWND_RENDER::ProcessAct(gssWND_RENDER *this,gssAREA *param_1,int param_2,void *param_3)

{
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  if (param_2 == 0) {
    camCAMERA::SetAspectRatioHW(gsCameraPtr,DAT_005f89bc);
    camCAMERA::SetAngleHor(gsCameraPtr,DAT_005f89b8);
  }
  else {
    if (param_2 == 6) {
      gssURect2SRect((gssRECT *)(this + 0x20),(gssRECT *)&local_10);
      camCAMERA::SetViewWindow(gsCameraPtr,local_10,local_c,local_8,local_4);
      return 0;
    }
    if (param_2 == 7) {
      (**(code **)(*(int *)gsSysRender + 0x1c))(gsCameraPtr,0);
      return 0;
    }
  }
  return 0;
}




/* from: gs:gs_iface.cpp
   addr: 00528490 */

void __thiscall gssWND::Paint(gssWND *this,camCAMERA *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(this + 0x10)) {
    do {
      piVar1 = *(int **)(*(int *)(this + 0x14) + iVar2 * 4);
      if ((piVar1 != (int *)0x0) && ((*(byte *)(piVar1 + 1) & 1) != 0)) {
        (**(code **)(*piVar1 + 4))(param_1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(this + 0x10));
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:gs_iface.cpp
   addr: 005284D0 */

void __thiscall gssAREA::Paint(gssAREA *this,camCAMERA *param_1)

{
  uint uVar1;
  gssRECT local_194 [16];
  float local_184;
  float local_180;
  float local_154;
  float local_150;
  float local_124;
  float local_120;
  float local_f4;
  float local_f0;
  rendCFG local_c4 [184];
  uint local_c;
  undefined4 local_8;
  
  local_184 = (*(float *)(this + 8) - *(float *)(param_1 + 300)) * *(float *)(param_1 + 0x158) +
              *(float *)(param_1 + 0x13c);
  local_150 = *(float *)(param_1 + 0x140) + *(float *)(param_1 + 0x140) +
              *(float *)(param_1 + 0x148);
  local_180 = local_150 -
              (((*(float *)(param_1 + 0x138) - *(float *)(this + 0xc)) + *(float *)(param_1 + 0x130)
               ) * *(float *)(param_1 + 0x15c) + *(float *)(param_1 + 0x140));
  local_124 = ((*(float *)(this + 0x10) + *(float *)(this + 8)) - *(float *)(param_1 + 300)) *
              *(float *)(param_1 + 0x158) + *(float *)(param_1 + 0x13c);
  local_150 = local_150 -
              ((((*(float *)(param_1 + 0x138) - *(float *)(this + 0x14)) - *(float *)(this + 0xc)) +
               *(float *)(param_1 + 0x130)) * *(float *)(param_1 + 0x15c) +
              *(float *)(param_1 + 0x140));
  uVar1 = *(uint *)(this + 4);
  local_154 = local_184;
  local_120 = local_150;
  local_f4 = local_124;
  local_f0 = local_180;
  if ((uVar1 & 8) != 0) {
    if ((uVar1 & 0x20) != 0) {
      if (*(float *)(this + 0x80) <= ___real_3f000000) {
        if (*(float *)(this + 0x80) <= ___real_3e800000) {
          *(undefined4 *)(this + 0x70) = 0xff460000;
        }
        else {
          *(undefined4 *)(this + 0x70) = 0xffaaaa00;
        }
      }
      else {
        *(undefined4 *)(this + 0x70) = 0xff004600;
      }
    }
    if ((uVar1 & 0x10) != 0) {
      if (local_124 - local_184 <= local_150 - local_180) {
        local_f0 = (___real_3f800000 - *(float *)(this + 0x80)) * (local_150 - local_180) +
                   local_180;
      }
      else {
        local_f4 = (local_124 - local_184) * *(float *)(this + 0x80) + local_184;
      }
    }
    local_c = 0x8002;
    local_180 = local_f0;
    local_124 = local_f4;
    rendCFG::InitMtl1(local_c4,(txmTEXTURE *)0x0);
    if (this[0x73] != (gssAREA)0xff) {
      local_c = local_c | 0xa8;
    }
    rendCFG::InitMtl1(local_c4,(txmTEXTURE *)0x0);
    local_8 = *(undefined4 *)(this + 0x70);
    rendDRIVER::RenderPolyCompat(rendDrv,param_1,4,(rendVERTEX *)&local_184,local_c4);
  }
  if (*(int *)(this + 0x20) != 0) {
    PaintRectObj(this,param_1);
  }
  if (((byte)this[4] & 6) != 0) {
    gssURectWnd2URect(*(gssWND **)(this + 0x2c),(gssRECT *)(this + 8),local_194);
    PaintText(this,local_194);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:gs_iface.cpp
   addr: 00528710 */

void __fastcall gssGetFaceBoxIndices(objOBJ *param_1,int *param_2)

{
  objOBJ *poVar1;
  int iVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  float local_64;
  undefined4 local_60;
  float local_58;
  undefined4 local_54;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  float local_34 [3];
  int *local_28;
  objOBJ *local_24;
  float *local_20;
  uint local_1c;
  undefined8 *local_18;
  float *local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_28 = param_2;
  local_24 = param_1;
  local_64 = *(float *)(param_1 + 200);
  local_60 = *(undefined4 *)(param_1 + 0xcc);
  local_58 = *(float *)(param_1 + 200);
  local_54 = *(undefined4 *)(param_1 + 0xd8);
  local_4c = *(undefined4 *)(param_1 + 0xd4);
  local_48 = *(undefined4 *)(param_1 + 0xd8);
  local_40 = *(undefined4 *)(param_1 + 0xd4);
  local_3c = *(undefined4 *)(param_1 + 0xcc);
  local_10 = 0;
  local_20 = &local_64;
  do {
    local_c = 0;
    local_8 = 0;
    do {
      if (((byte)*param_1 & 1) == 0) {
        local_14 = local_34;
        poVar1 = param_1 + 0x3c;
        puVar8 = (undefined8 *)(*(int *)(*(int *)(param_1 + 0x28) + 0x40) + local_8);
        local_18 = puVar8;
        if (m3dSimdType != 0) {
          if (m3dSimdType == 1) {
            FastExitMediaState();
            uVar10 = (undefined4)*puVar8;
            uVar13 = CONCAT44(uVar10,uVar10);
            uVar10 = (undefined4)((ulonglong)*puVar8 >> 0x20);
            uVar16 = CONCAT44(uVar10,uVar10);
            uVar17 = CONCAT44(*(undefined4 *)(puVar8 + 1),*(undefined4 *)(puVar8 + 1));
            uVar11 = PackedFloatingMUL(uVar13,*(undefined8 *)poVar1);
            uVar12 = PackedFloatingMUL(uVar16,*(undefined8 *)(param_1 + 0x4c));
            uVar14 = PackedFloatingMUL(uVar17,*(undefined8 *)(param_1 + 0x5c));
            uVar11 = PackedFloatingADD(uVar11,*(undefined8 *)(param_1 + 0x6c));
            uVar15 = PackedFloatingMUL(uVar13,*(undefined8 *)(param_1 + 0x44));
            uVar13 = PackedFloatingADD(uVar12,uVar14);
            uVar12 = PackedFloatingMUL(uVar16,*(undefined8 *)(param_1 + 0x54));
            uVar17 = PackedFloatingMUL(uVar17,*(undefined8 *)(param_1 + 100));
            uVar16 = PackedFloatingADD(uVar15,*(undefined8 *)(param_1 + 0x74));
            uVar13 = PackedFloatingADD(uVar11,uVar13);
            uVar11 = PackedFloatingADD(uVar12,uVar17);
            local_34[1] = (float)((ulonglong)uVar13 >> 0x20);
            local_34[0] = (float)uVar13;
            PackedFloatingADD(uVar16,uVar11);
            FastExitMediaState();
          }
          else {
            iVar9 = 0;
            local_1c = (int)poVar1 - (int)local_34;
            pfVar6 = local_34;
            do {
              uVar4 = local_1c;
              iVar5 = 0;
              *pfVar6 = 0.0;
              pfVar7 = (float *)(uVar4 + (int)pfVar6);
              do {
                iVar2 = iVar5 * 4;
                fVar3 = *pfVar7;
                iVar5 = iVar5 + 1;
                pfVar7 = pfVar7 + 4;
                *pfVar6 = *(float *)((int)puVar8 + iVar2) * fVar3 + *pfVar6;
              } while (iVar5 < 3);
              iVar5 = iVar9 + iVar5 * 4;
              iVar9 = iVar9 + 1;
              *pfVar6 = *(float *)(poVar1 + iVar5 * 4) + *pfVar6;
              pfVar6 = pfVar6 + 1;
              param_1 = local_24;
            } while (iVar9 < 3);
          }
        }
      }
      else {
        pfVar6 = (float *)(*(int *)(*(int *)(param_1 + 0x28) + 0x40) + local_8);
        local_34[0] = *pfVar6;
        local_34[1] = pfVar6[1];
        local_34[2] = pfVar6[2];
      }
      local_1c = (uint)(ABS(local_34[0] - *local_20) < ___real_3dcccccd);
      if (((float)local_1c != ___real_00000000) &&
         (local_1c = (uint)(ABS(local_34[1] - local_20[1]) < ___real_3dcccccd),
         (float)local_1c != ___real_00000000)) {
        local_28[local_10] = local_c;
        break;
      }
      local_8 = local_8 + 0xc;
      local_c = local_c + 1;
    } while (local_8 < 0x30);
    local_10 = local_10 + 1;
    local_20 = local_20 + 3;
    if (3 < local_10) {
      return;
    }
  } while( true );
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:gs_iface.cpp
   addr: 005289E0 */

void __thiscall gssAREA::PaintRectObj(gssAREA *this,camCAMERA *param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  txmTEXTURE *ptVar8;
  int iVar9;
  undefined4 *puVar10;
  int local_198;
  float local_194;
  float local_190;
  undefined4 local_17c;
  float local_178;
  float local_164;
  float local_160;
  undefined4 local_14c;
  float local_148;
  float local_134;
  float local_130;
  undefined4 local_11c;
  float local_118;
  float local_104;
  float local_100;
  undefined4 local_ec;
  float local_e8;
  int local_d4 [4];
  int local_c4 [46];
  uint local_c;
  undefined4 local_8;
  
  local_198 = 4;
  local_c = *(uint *)(*(objOBJ **)(this + 0x20) + 0x24) | 0x8000;
  ptVar8 = objOBJ::GetFaceTexRendMtl(*(objOBJ **)(this + 0x20),0,0);
  rendCFG::InitMtl1((rendCFG *)local_c4,ptVar8);
  if ((local_c4[0] != 0) || (((byte)this[4] & 8) != 0)) {
    gssGetFaceBoxIndices(*(objOBJ **)(this + 0x20),local_d4);
    iVar9 = 0;
    fVar3 = (*(float *)(this + 8) - *(float *)(param_1 + 300)) * *(float *)(param_1 + 0x158) +
            *(float *)(param_1 + 0x13c);
    fVar4 = *(float *)(param_1 + 0x140) + *(float *)(param_1 + 0x140) + *(float *)(param_1 + 0x148);
    fVar5 = fVar4 - (((*(float *)(param_1 + 0x138) - *(float *)(this + 0xc)) +
                     *(float *)(param_1 + 0x130)) * *(float *)(param_1 + 0x15c) +
                    *(float *)(param_1 + 0x140));
    fVar6 = ((*(float *)(this + 0x10) + *(float *)(this + 8)) - *(float *)(param_1 + 300)) *
            *(float *)(param_1 + 0x158) + *(float *)(param_1 + 0x13c);
    fVar4 = fVar4 - ((((*(float *)(param_1 + 0x138) - *(float *)(this + 0x14)) -
                      *(float *)(this + 0xc)) + *(float *)(param_1 + 0x130)) *
                     *(float *)(param_1 + 0x15c) + *(float *)(param_1 + 0x140));
    puVar10 = &local_17c;
    do {
      iVar1 = local_d4[iVar9];
      iVar9 = iVar9 + 1;
      iVar2 = *(int *)(*(int *)(*(int *)(this + 0x20) + 0x28) + 0xc);
      *puVar10 = *(undefined4 *)(iVar2 + iVar1 * 8);
      puVar10[1] = *(undefined4 *)(iVar2 + 4 + iVar1 * 8);
      puVar10 = puVar10 + 0xc;
    } while (iVar9 < 4);
    local_130 = fVar5;
    local_104 = fVar6;
    if ((*(uint *)(this + 4) & 0x10) != 0) {
      if (fVar6 - fVar3 <= fVar4 - fVar5) {
        local_130 = (___real_3f800000 - *(float *)(this + 0x80)) * (fVar4 - fVar5) + fVar5;
        local_148 = (local_148 - local_178) * *(float *)(this + 0x80) + local_178;
        local_118 = (local_118 - local_e8) * *(float *)(this + 0x80) + local_e8;
      }
      else {
        local_104 = (fVar6 - fVar3) * *(float *)(this + 0x80) + fVar3;
      }
    }
    iVar9 = 3;
    if (*(int *)(this + 0x24) == 0) {
      iVar9 = local_198;
    }
    local_8 = 0xffffffff;
    uVar7 = local_c;
    if ((*(uint *)(this + 4) & 0x40) != 0) {
      local_8 = *(undefined4 *)(this + 0x78);
      uVar7 = local_c | 2;
      if (this[0x7b] != (gssAREA)0xff) {
        uVar7 = local_c | 10;
        if ((local_c & 0x20) == 0) {
          uVar7 = CONCAT31((int3)(local_c >> 8),(char)(local_c | 10)) | 0xa0;
        }
      }
    }
    local_c = uVar7;
    local_194 = fVar3;
    local_190 = fVar4;
    local_164 = fVar3;
    local_160 = local_130;
    local_134 = local_104;
    local_100 = fVar4;
    rendDRIVER::RenderPolyCompat(rendDrv,param_1,iVar9,(rendVERTEX *)&local_194,(rendCFG *)local_c4)
    ;
    if (*(objOBJ **)(this + 0x24) != (objOBJ *)0x0) {
      ptVar8 = objOBJ::GetFaceTexRendMtl(*(objOBJ **)(this + 0x24),0,0);
      rendCFG::InitMtl1((rendCFG *)local_c4,ptVar8);
      local_14c = local_11c;
      local_148 = local_118;
      local_11c = local_ec;
      local_118 = local_e8;
      local_194 = fVar3;
      local_190 = fVar4;
      local_164 = fVar6;
      local_160 = fVar5;
      local_134 = fVar6;
      local_130 = fVar4;
      rendDRIVER::RenderPolyCompat(rendDrv,param_1,3,(rendVERTEX *)&local_194,(rendCFG *)local_c4);
    }
  }
  return;
}




/* WARNING: Function: chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:gs_iface.cpp
   addr: 00528D30 */

void __thiscall gssAREA::PaintText(gssAREA *this,gssRECT *param_1)

{
  gssAREA gVar1;
  char cVar2;
  fntFONT *this_00;
  float fVar3;
  gssAREA *pgVar4;
  char *pcVar5;
  gssAREA *_Str;
  fntFONT *this_01;
  int iVar6;
  float fVar7;
  fntFONT *pfVar8;
  char *pcVar9;
  float local_1008;
  float local_1004;
  gssAREA local_1000 [4092];
  undefined4 uStack_4;
  
  uStack_4 = 0x528d3a;
  this_00 = *(fntFONT **)(gsSysIFace + 4);
  if (((byte)this[4] & 2) == 0) {
    pcVar5 = *(char **)(this + 0x30);
    iVar6 = -(int)pcVar5;
    do {
      cVar2 = *pcVar5;
      pcVar5[(int)(local_1000 + iVar6)] = cVar2;
      pcVar5 = pcVar5 + 1;
    } while (cVar2 != '\0');
  }
  else {
    pgVar4 = this + 0x30;
    iVar6 = -(int)pgVar4;
    do {
      gVar1 = *pgVar4;
      pgVar4[(int)(local_1000 + iVar6)] = gVar1;
      pgVar4 = pgVar4 + 1;
    } while (gVar1 != (gssAREA)0x0);
  }
  pgVar4 = local_1000;
  iVar6 = 0;
  _Str = local_1000;
  do {
    iVar6 = iVar6 + 1;
    pcVar5 = strchr((char *)_Str,10);
    if (pcVar5 == (char *)0x0) break;
    _Str = (gssAREA *)(pcVar5 + 1);
  } while (_Str != (gssAREA *)0x0);
  fntFONT::GetStringExtents
            (*(fntFONT **)(gsSysIFace + 4),*(int *)(this + 0x7c),&s__,&local_1008,&local_1004);
  fVar3 = (*(float *)(param_1 + 0xc) - (float)iVar6 * local_1004) * ___real_3f000000 +
          *(float *)(param_1 + 4);
  while( true ) {
    if (local_1000[0] == (gssAREA)0x0) {
      return;
    }
    pcVar5 = strchr((char *)pgVar4,10);
    if (pcVar5 != (char *)0x0) {
      *pcVar5 = '\0';
    }
    fntFONT::GetStringExtents(this_00,*(int *)(this + 0x7c),(char *)pgVar4,&local_1008,(float *)0x0)
    ;
    if ((char)this[4] < '\0') {
      pcVar9 = *(char **)(this + 0x74);
      pfVar8 = *(fntFONT **)param_1;
      fVar7 = *(float *)(this + 0x7c);
      this_01 = pfVar8;
    }
    else {
      pcVar9 = *(char **)(this + 0x74);
      fVar7 = *(float *)(this + 0x7c);
      pfVar8 = (fntFONT *)
               ((*(float *)(param_1 + 8) - local_1008) * ___real_3f000000 + *(float *)param_1);
      this_01 = this_00;
    }
    fntFONT::Print(this_01,(int)this_00,fVar7,(float)pfVar8,(ulong)fVar3,pcVar9,pgVar4);
    fVar3 = fVar3 + local_1004;
    if (pcVar5 == (char *)0x0) break;
    local_1000[0] = *(gssAREA *)(pcVar5 + 1);
    pgVar4 = (gssAREA *)(pcVar5 + 1);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:gs_iface.cpp
   addr: 00528E90 */

void __thiscall gssAREA_DELIMITER::Paint(gssAREA_DELIMITER *this,camCAMERA *param_1)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  int iVar5;
  gsIFACE_SYSTEM *pgVar6;
  objOBJ *poVar7;
  objFACE *poVar8;
  objOBJ *poVar9;
  float *pfVar10;
  int iVar11;
  objOBJ *poVar12;
  int iVar13;
  objOBJ *poVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  objOBJ local_288 [240];
  rendCFG local_198 [184];
  undefined4 local_e0;
  undefined4 local_dc;
  rendVERTEX local_d4 [4];
  float local_d0 [35];
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  gssAREA_DELIMITER *local_2c;
  float local_28 [3];
  objOBJ *local_1c;
  int local_18;
  objOBJ *local_14;
  objOBJ *local_10;
  objOBJ *local_c;
  objOBJ *local_8;
  
  local_e0 = 0x8062;
  local_2c = this;
  rendCFG::InitMtl1(local_198,(txmTEXTURE *)0x0);
  pgVar6 = gsSysIFace;
  local_dc = 0x7fff0000;
  poVar7 = objFindName(*(objOBJ **)(*(int *)(gsSysIFace + 8) + 0x10),s_screen);
  if (poVar7 == (objOBJ *)0x0) {
    poVar7 = objFindName(*(objOBJ **)(*(int *)(pgVar6 + 8) + 0x10),s_unknown_obj);
  }
  gsIFACE_SYSTEM::GetRectObj(gsSysIFace,poVar7,(gssRECT *)&local_44);
  poVar7 = *(objOBJ **)(this + 0x20);
  local_18 = 0;
  if (0 < *(int *)(poVar7 + 0x10)) {
    local_34 = ___real_3f800000 / local_3c;
    local_30 = ___real_3f800000 / local_38;
    do {
      if (((byte)*poVar7 & 1) == 0) {
        local_14 = poVar7 + 0x3c;
        local_c = local_288;
        local_8 = (objOBJ *)0x0;
        do {
          poVar12 = local_8;
          poVar8 = objOBJ::GetFace(poVar7,local_18);
          poVar9 = local_c;
          local_1c = local_c;
          poVar14 = (objOBJ *)
                    (*(int *)(*(int *)(poVar7 + 0x28) + 0x40) +
                    (uint)*(ushort *)(poVar8 + (int)poVar12 * 2 + 2) * 0xc);
          local_10 = poVar14;
          if (m3dSimdType == 0) {
            if (((uint)local_14 & 0xf) == 0) {
              fVar25 = *(float *)poVar14;
              fVar2 = *(float *)(poVar14 + 4);
              fVar3 = *(float *)(poVar14 + 8);
              fVar23 = fVar25 * *(float *)local_14 + *(float *)(local_14 + 0x30) +
                       fVar2 * *(float *)(local_14 + 0x10) + fVar3 * *(float *)(local_14 + 0x20);
              fVar24 = fVar25 * *(float *)(local_14 + 4) + *(float *)(local_14 + 0x34) +
                       fVar2 * *(float *)(local_14 + 0x14) + fVar3 * *(float *)(local_14 + 0x24);
              fVar25 = fVar25 * *(float *)(local_14 + 8) + *(float *)(local_14 + 0x38) +
                       fVar2 * *(float *)(local_14 + 0x18) + fVar3 * *(float *)(local_14 + 0x28);
            }
            else {
              fVar25 = *(float *)poVar14;
              fVar2 = *(float *)(poVar14 + 4);
              fVar3 = *(float *)(poVar14 + 8);
              fVar23 = fVar25 * (float)*(undefined8 *)local_14 +
                       fVar2 * (float)*(undefined8 *)(local_14 + 0x10) +
                       fVar3 * (float)*(undefined8 *)(local_14 + 0x20) +
                       (float)*(undefined8 *)(local_14 + 0x30);
              fVar24 = fVar25 * (float)((ulonglong)*(undefined8 *)local_14 >> 0x20) +
                       fVar2 * (float)((ulonglong)*(undefined8 *)(local_14 + 0x10) >> 0x20) +
                       fVar3 * (float)((ulonglong)*(undefined8 *)(local_14 + 0x20) >> 0x20) +
                       (float)((ulonglong)*(undefined8 *)(local_14 + 0x30) >> 0x20);
              fVar25 = fVar25 * (float)*(undefined8 *)(local_14 + 8) +
                       fVar2 * (float)*(undefined8 *)(local_14 + 0x18) +
                       fVar3 * (float)*(undefined8 *)(local_14 + 0x28) +
                       (float)*(undefined8 *)(local_14 + 0x38);
            }
            *(ulonglong *)local_c = CONCAT44(fVar24,fVar23);
            *(float *)(local_c + 8) = fVar25;
            local_8 = poVar12;
          }
          else if (m3dSimdType == 1) {
            FastExitMediaState();
            uVar15 = (undefined4)*(undefined8 *)poVar14;
            uVar18 = CONCAT44(uVar15,uVar15);
            uVar15 = (undefined4)((ulonglong)*(undefined8 *)poVar14 >> 0x20);
            uVar21 = CONCAT44(uVar15,uVar15);
            uVar22 = CONCAT44(*(float *)(poVar14 + 8),*(float *)(poVar14 + 8));
            uVar16 = PackedFloatingMUL(uVar18,*(undefined8 *)local_14);
            uVar17 = PackedFloatingMUL(uVar21,*(undefined8 *)(local_14 + 0x10));
            uVar19 = PackedFloatingMUL(uVar22,*(undefined8 *)(local_14 + 0x20));
            uVar16 = PackedFloatingADD(uVar16,*(undefined8 *)(local_14 + 0x30));
            uVar20 = PackedFloatingMUL(uVar18,*(undefined8 *)(local_14 + 8));
            uVar18 = PackedFloatingADD(uVar17,uVar19);
            uVar17 = PackedFloatingMUL(uVar21,*(undefined8 *)(local_14 + 0x18));
            uVar22 = PackedFloatingMUL(uVar22,*(undefined8 *)(local_14 + 0x28));
            uVar21 = PackedFloatingADD(uVar20,*(undefined8 *)(local_14 + 0x38));
            uVar18 = PackedFloatingADD(uVar16,uVar18);
            uVar16 = PackedFloatingADD(uVar17,uVar22);
            *(undefined8 *)local_c = uVar18;
            uVar18 = PackedFloatingADD(uVar21,uVar16);
            *(float *)(poVar9 + 8) = (float)uVar18;
            FastExitMediaState();
            local_8 = poVar12;
          }
          else {
            iVar13 = 0;
            do {
              iVar11 = 0;
              *(float *)poVar9 = 0.0;
              poVar12 = local_14 + -(int)local_c + (int)poVar9;
              do {
                iVar5 = iVar11 * 4;
                fVar25 = *(float *)poVar12;
                iVar11 = iVar11 + 1;
                poVar12 = poVar12 + 0x10;
                *(float *)poVar9 = *(float *)(poVar14 + iVar5) * fVar25 + *(float *)poVar9;
              } while (iVar11 < 3);
              iVar11 = iVar13 + iVar11 * 4;
              iVar13 = iVar13 + 1;
              *(float *)poVar9 = *(float *)(local_14 + iVar11 * 4) + *(float *)poVar9;
              poVar9 = poVar9 + 4;
              local_10 = local_14 + -(int)local_c;
            } while (iVar13 < 3);
          }
          local_8 = local_8 + 1;
          local_c = local_c + 0xc;
        } while ((int)local_8 < 3);
      }
      else {
        iVar13 = 0;
        poVar14 = local_288;
        local_8 = poVar7;
        do {
          piVar4 = *(int **)(local_8 + 0x28);
          iVar11 = iVar13 * 2;
          iVar13 = iVar13 + 1;
          puVar1 = (undefined4 *)
                   (piVar4[0x10] +
                   (uint)*(ushort *)((uint)*(byte *)(piVar4 + 1) * local_18 + 2 + iVar11 + *piVar4)
                   * 0xc);
          *(undefined4 *)poVar14 = *puVar1;
          *(undefined4 *)(poVar14 + 4) = puVar1[1];
          *(undefined4 *)(poVar14 + 8) = puVar1[2];
          poVar14 = poVar14 + 0xc;
        } while (iVar13 < 3);
      }
      iVar13 = 2;
      local_14 = (objOBJ *)local_d0;
      local_c = (objOBJ *)0x2;
      do {
        poVar7 = *(objOBJ **)(local_2c + 0x20);
        if (((byte)*poVar7 & 1) == 0) {
          local_8 = (objOBJ *)local_28;
          piVar4 = *(int **)(poVar7 + 0x28);
          poVar14 = poVar7 + 0x3c;
          local_1c = poVar14;
          poVar9 = (objOBJ *)
                   (piVar4[0x10] +
                   (uint)*(ushort *)((uint)*(byte *)(piVar4 + 1) * local_18 + iVar13 + *piVar4) *
                   0xc);
          local_10 = poVar9;
          if (m3dSimdType != 0) {
            if (m3dSimdType == 1) {
              FastExitMediaState();
              uVar15 = (undefined4)*(undefined8 *)poVar9;
              uVar18 = CONCAT44(uVar15,uVar15);
              uVar15 = (undefined4)((ulonglong)*(undefined8 *)poVar9 >> 0x20);
              uVar21 = CONCAT44(uVar15,uVar15);
              uVar22 = CONCAT44(*(float *)(poVar9 + 8),*(float *)(poVar9 + 8));
              uVar16 = PackedFloatingMUL(uVar18,*(undefined8 *)poVar14);
              uVar17 = PackedFloatingMUL(uVar21,*(undefined8 *)(poVar7 + 0x4c));
              uVar19 = PackedFloatingMUL(uVar22,*(undefined8 *)(poVar7 + 0x5c));
              uVar16 = PackedFloatingADD(uVar16,*(undefined8 *)(poVar7 + 0x6c));
              uVar20 = PackedFloatingMUL(uVar18,*(undefined8 *)(poVar7 + 0x44));
              uVar18 = PackedFloatingADD(uVar17,uVar19);
              uVar17 = PackedFloatingMUL(uVar21,*(undefined8 *)(poVar7 + 0x54));
              uVar22 = PackedFloatingMUL(uVar22,*(undefined8 *)(poVar7 + 100));
              uVar21 = PackedFloatingADD(uVar20,*(undefined8 *)(poVar7 + 0x74));
              uVar18 = PackedFloatingADD(uVar16,uVar18);
              uVar16 = PackedFloatingADD(uVar17,uVar22);
              local_28[1] = (float)((ulonglong)uVar18 >> 0x20);
              local_28[0] = (float)uVar18;
              uVar18 = PackedFloatingADD(uVar21,uVar16);
              local_28[2] = (float)uVar18;
              FastExitMediaState();
            }
            else {
              iVar13 = 0;
              local_8 = poVar14 + -(int)local_28;
              pfVar10 = local_28;
              do {
                poVar7 = local_8;
                iVar11 = 0;
                *pfVar10 = 0.0;
                poVar7 = poVar7 + (int)pfVar10;
                do {
                  iVar5 = iVar11 * 4;
                  fVar25 = *(float *)poVar7;
                  iVar11 = iVar11 + 1;
                  poVar7 = poVar7 + 0x10;
                  *pfVar10 = *(float *)(poVar9 + iVar5) * fVar25 + *pfVar10;
                } while (iVar11 < 3);
                iVar11 = iVar13 + iVar11 * 4;
                iVar13 = iVar13 + 1;
                *pfVar10 = *(float *)(poVar14 + iVar11 * 4) + *pfVar10;
                pfVar10 = pfVar10 + 1;
              } while (iVar13 < 3);
            }
          }
        }
        else {
          poVar8 = objOBJ::GetFace(poVar7,local_18);
          pfVar10 = (float *)(*(int *)(*(int *)(poVar7 + 0x28) + 0x40) +
                             (uint)*(ushort *)(poVar8 + (int)local_c) * 0xc);
          local_28[0] = *pfVar10;
          local_28[1] = pfVar10[1];
          local_28[2] = pfVar10[2];
        }
        poVar7 = local_14;
        local_28[1] = -local_28[1];
        local_14 = (objOBJ *)((int)local_14 + 0x30);
        *(float *)((int)poVar7 + -4) =
             ((local_28[0] - local_44) * local_34 - *(float *)(param_1 + 300)) *
             *(float *)(param_1 + 0x158) + *(float *)(param_1 + 0x13c);
        iVar13 = (int)local_c + 2;
        local_c = (objOBJ *)iVar13;
        *(float *)poVar7 =
             (*(float *)(param_1 + 0x140) + *(float *)(param_1 + 0x140) +
             *(float *)(param_1 + 0x148)) -
             (((*(float *)(param_1 + 0x138) - (local_28[1] - local_40) * local_30) +
              *(float *)(param_1 + 0x130)) * *(float *)(param_1 + 0x15c) +
             *(float *)(param_1 + 0x140));
      } while (iVar13 < 8);
      rendDRIVER::RenderPolyCompat(rendDrv,param_1,3,local_d4,local_198);
      local_18 = local_18 + 1;
      poVar7 = *(objOBJ **)(local_2c + 0x20);
    } while (local_18 < *(int *)(poVar7 + 0x10));
  }
  return;
}

