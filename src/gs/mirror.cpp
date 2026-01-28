
/* from: gs:mirror.cpp
   addr: 00508B60 */

mrrMIRROR_SYSTEM * __thiscall mrrMIRROR_SYSTEM::mrrMIRROR_SYSTEM(mrrMIRROR_SYSTEM *this)

{
  mrrMIRROR_SYSTEM *pmVar1;
  mrrMIRROR_SYSTEM *pmVar2;
  int iVar3;
  
  pmVar2 = this + 0x2c;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0x4d414452;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined ***)this = &msgADDR::_vftable_;
  pmVar1 = this + 0x3c;
  iVar3 = 0x14;
  do {
    *(undefined4 *)pmVar2 = 0;
    *(undefined4 *)(pmVar1 + -8) = 0;
    *(undefined4 *)(pmVar1 + -4) = 0;
    *(undefined4 *)pmVar1 = 0;
    *(undefined4 *)(pmVar1 + 4) = 0;
    pmVar2 = pmVar2 + 0x38;
    pmVar1 = pmVar1 + 0x38;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  camCAMERA::camCAMERA((camCAMERA *)(this + 0x494));
  pmVar2 = this + 0x6a8;
  iVar3 = 0x1e;
  do {
    camCAMERA::camCAMERA((camCAMERA *)pmVar2);
    pmVar2 = (mrrMIRROR_SYSTEM *)((camCAMERA *)pmVar2 + 0x20c);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 0x28) = 0;
  pmVar2 = this + 0x2c;
  for (iVar3 = 0x118; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)pmVar2 = 0;
    pmVar2 = pmVar2 + 4;
  }
  *(undefined4 *)(this + 0x1c) = 0x59;
  *(undefined4 *)(this + 0x48c) = 0;
  return this;
}




/* from: gs:mirror.cpp
   addr: 00508C00
   addr: 00508C00 */

void * __thiscall
mrrMIRROR_SYSTEM::_scalar_deleting_destructor_(mrrMIRROR_SYSTEM *this,uint param_1)

{
  int iVar1;
  mrrMIRROR_SYSTEM *this_00;
  
  iVar1 = 0x1e;
  *(undefined ***)this = &_vftable_;
  this_00 = this + 0x4410;
  do {
    this_00 = this_00 + -0x20c;
    camCAMERA::~camCAMERA((camCAMERA *)this_00);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  camCAMERA::~camCAMERA((camCAMERA *)(this + 0x494));
  msgADDR::~msgADDR((msgADDR *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: gs:mirror.cpp
   addr: 00508C50 */

int __thiscall mrrMIRROR_SYSTEM::Init(mrrMIRROR_SYSTEM *this)

{
  msgSYSTEM::InsertAddr(&msgSystem,(msgADDR *)this,0x24535953,0);
  return 1;
}




/* from: gs:mirror.cpp
   addr: 00508C70 */

void __thiscall mrrMIRROR_SYSTEM::Term(mrrMIRROR_SYSTEM *this)

{
  int iVar1;
  mrrMIRROR_SYSTEM *pmVar2;
  
  pmVar2 = this + 0x2c;
  for (iVar1 = 0x118; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pmVar2 = 0;
    pmVar2 = pmVar2 + 4;
  }
  msgSYSTEM::RemoveAddr(&msgSystem,(msgADDR *)this);
  return;
}




/* from: gs:mirror.cpp
   addr: 00508C90 */

int __thiscall
mrrMIRROR_SYSTEM::ProcessMsg
          (mrrMIRROR_SYSTEM *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  if (((param_1 < 0x3f5) && (param_1 != 0x3f4)) && (param_1 == 2)) {
    return 1;
  }
  return 0;
}




/* from: gs:mirror.cpp
   addr: 00508CB0 */

int __thiscall mrrMIRROR_SYSTEM::InitObj(mrrMIRROR_SYSTEM *this,objOBJ *param_1)

{
  mrrMIRROR_SYSTEM *pmVar1;
  psSHEET *this_00;
  objOBJ *this_01;
  int iVar2;
  animINST *paVar3;
  int local_4c;
  int local_48;
  int local_44;
  char local_40 [64];
  
  this_01 = param_1;
  this_00 = *(psSHEET **)(param_1 + 0xf0);
  if (this_00 != (psSHEET *)0x0) {
    param_1 = (objOBJ *)0x0;
    psSHEET::GetInt(this_00,s_MIRROR,s_isMirror,(int *)&param_1);
    local_4c = 0;
    psSHEET::GetInt(this_00,s_PORTAL,s_isPortal,&local_4c);
    if ((param_1 != (objOBJ *)0x0) || (local_4c != 0)) {
      if (*(int *)(this + 0x28) == 0x14) {
        return 0;
      }
      *(uint *)(this_01 + 8) = *(uint *)(this_01 + 8) | 0x80000;
      if (*(animINST **)(this_01 + 0xbc) != (animINST *)0x0) {
        animINST::Invalidate(*(animINST **)(this_01 + 0xbc),4);
        animINST::Validate(*(animINST **)(this_01 + 0xbc),1);
      }
      objOBJ::SetStateRendYes(this_01,0xa0);
      *(undefined4 *)(this + *(int *)(this + 0x28) * 0x38 + 0x2c) = 0;
      *(objOBJ **)(this + *(int *)(this + 0x28) * 0x38 + 0x30) = this_01;
      if (param_1 != (objOBJ *)0x0) {
        pmVar1 = this + *(int *)(this + 0x28) * 0x38 + 0x34;
        *(undefined4 *)pmVar1 = 0;
        *(undefined4 *)(pmVar1 + 4) = 0;
        *(undefined4 *)(pmVar1 + 8) = 0;
        *(undefined4 *)(pmVar1 + 0xc) = 0;
        psSHEET::GetColor(this_00,s_MIRROR,s_color,
                          (m3dCOLOR *)(this + *(int *)(this + 0x28) * 0x38 + 0x34));
        *(undefined4 *)(this + *(int *)(this + 0x28) * 0x38 + 0x44) = 0;
        psSHEET::GetInt(this_00,s_MIRROR,s_priority,
                        (int *)(this + *(int *)(this + 0x28) * 0x38 + 0x44));
        iVar2 = psSHEET::GetInt(this_00,s_MIRROR,s_isClipping,&local_48);
        if ((iVar2 != 0) && (local_48 != 0)) {
          *(uint *)(this + *(int *)(this + 0x28) * 0x38 + 0x2c) =
               *(uint *)(this + *(int *)(this + 0x28) * 0x38 + 0x2c) | 0x10;
        }
        iVar2 = psSHEET::GetInt(this_00,s_MIRROR,s_isRefProjShd,&local_44);
        if ((iVar2 != 0) && (local_44 != 0)) {
          *(uint *)(this + *(int *)(this + 0x28) * 0x38 + 0x2c) =
               *(uint *)(this + *(int *)(this + 0x28) * 0x38 + 0x2c) | 0x40;
        }
      }
      if (local_4c != 0) {
        pmVar1 = this + *(int *)(this + 0x28) * 0x38 + 0x34;
        *(undefined4 *)pmVar1 = 0;
        *(undefined4 *)(pmVar1 + 4) = 0;
        *(undefined4 *)(pmVar1 + 8) = 0;
        *(undefined4 *)(pmVar1 + 0xc) = 0;
        psSHEET::GetColor(this_00,s_PORTAL,s_color,
                          (m3dCOLOR *)(this + *(int *)(this + 0x28) * 0x38 + 0x34));
        *(undefined4 *)(this + *(int *)(this + 0x28) * 0x38 + 0x44) = 0;
        psSHEET::GetInt(this_00,s_PORTAL,s_priority,
                        (int *)(this + *(int *)(this + 0x28) * 0x38 + 0x44));
        *(uint *)(this + *(int *)(this + 0x28) * 0x38 + 0x2c) =
             *(uint *)(this + *(int *)(this + 0x28) * 0x38 + 0x2c) | 1;
        psSHEET::GetStr(this_00,s_PORTAL,s_actor_name,local_40,0x40);
        paVar3 = scnSCENE::FindInstName(gsScenePtr,local_40);
        *(animINST **)(this + *(int *)(this + 0x28) * 0x38 + 0x48) = paVar3;
        if (*(int *)(this + *(int *)(this + 0x28) * 0x38 + 0x48) == 0) {
          apMsg(s_Instance__s_for_portal__s_not_fo,local_40,*(undefined4 *)(this_01 + 0x18));
          return 1;
        }
      }
      *(int *)(this + 0x28) = *(int *)(this + 0x28) + 1;
    }
  }
  return 1;
}




/* from: gs:mirror.cpp
   addr: 00508F80 */

void __thiscall mrrMIRROR_SYSTEM::TermObj(mrrMIRROR_SYSTEM *this,objOBJ *param_1)

{
  uint uVar1;
  int iVar2;
  mrrMIRROR_SYSTEM *pmVar3;
  int iVar4;
  mrrMIRROR_SYSTEM *pmVar5;
  mrrMIRROR_SYSTEM *pmVar6;
  mrrMIRROR_SYSTEM *pmVar7;
  mrrMIRROR_SYSTEM *pmVar8;
  
  iVar4 = 0;
  iVar2 = *(int *)(this + 0x28);
  if (0 < iVar2) {
    pmVar8 = this + 0x2c;
    pmVar3 = this + 0x30;
    pmVar5 = this + 100;
    do {
      if (*(objOBJ **)pmVar3 == param_1) {
        if (iVar4 < iVar2 + -1) {
          pmVar6 = pmVar5;
          pmVar7 = pmVar8;
          for (uVar1 = (uint)(((iVar2 - iVar4) + -1) * 0x38) >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
            *(undefined4 *)pmVar7 = *(undefined4 *)pmVar6;
            pmVar6 = pmVar6 + 4;
            pmVar7 = pmVar7 + 4;
          }
          for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
            *pmVar7 = *pmVar6;
            pmVar6 = pmVar6 + 1;
            pmVar7 = pmVar7 + 1;
          }
        }
        pmVar3 = pmVar3 + -0x38;
        iVar4 = iVar4 + -1;
        pmVar5 = pmVar5 + -0x38;
        *(int *)(this + 0x28) = *(int *)(this + 0x28) + -1;
        pmVar8 = pmVar8 + -0x38;
      }
      iVar2 = *(int *)(this + 0x28);
      iVar4 = iVar4 + 1;
      pmVar3 = pmVar3 + 0x38;
      pmVar5 = pmVar5 + 0x38;
      pmVar8 = pmVar8 + 0x38;
    } while (iVar4 < iVar2);
  }
  return;
}




/* from: gs:mirror.cpp
   addr: 00509010 */

int __thiscall mrrMIRROR_SYSTEM::GetNActive(mrrMIRROR_SYSTEM *this)

{
  int iVar1;
  mrrMIRROR_SYSTEM *pmVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x28);
  iVar1 = 0;
  if (0 < iVar3) {
    pmVar2 = this + 0x30;
    do {
      if ((*(byte *)(*(int *)pmVar2 + 8) & 0x3f) == 0) {
        iVar1 = iVar1 + 1;
      }
      pmVar2 = pmVar2 + 0x38;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return iVar1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:mirror.cpp
   addr: 00509030 */

int __thiscall mrrMIRROR_SYSTEM::Render(mrrMIRROR_SYSTEM *this,camCAMERA *param_1)

{
  m3dV *pmVar1;
  float *pfVar2;
  float fVar3;
  mrrMIRROR_SYSTEM *pmVar4;
  mrrMIRROR_SYSTEM *pmVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  camCAMERA *pcVar9;
  uint uVar10;
  apSTATE *paVar11;
  camCAMERA *pcVar12;
  bool bVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  int iVar21;
  camCAMERA local_3d4 [496];
  mrrMIRROR_SYSTEM local_1e4 [28];
  apSTATE local_1c8 [80];
  apSTATE local_178 [80];
  float local_128 [4];
  float local_118;
  float fStack_114;
  float fStack_110;
  undefined4 uStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  undefined4 uStack_fc;
  uint local_e8 [11];
  m3dV *local_bc;
  undefined1 local_b8 [12];
  m3dV local_ac [12];
  m3dV local_a0 [4];
  undefined4 local_9c;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  float local_88 [3];
  float local_7c [3];
  float local_70;
  float local_6c;
  float local_68;
  float local_64 [3];
  undefined8 local_58;
  float local_50;
  mrrMIRROR_SYSTEM *local_4c;
  undefined8 local_48;
  float local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  float local_30 [3];
  int local_24;
  float *local_20;
  float *local_1c;
  float *local_18;
  float local_14;
  float local_10;
  float local_c;
  int local_8;
  
  local_e8[0] = 0;
  local_e8[1] = 0;
  local_e8[2] = 0;
  local_e8[3] = 0;
  local_e8[4] = 0;
  local_e8[5] = 0;
  local_e8[6] = 0;
  local_e8[7] = 0;
  local_e8[8] = 0;
  local_e8[9] = 0;
  camCAMERA::camCAMERA(local_3d4);
  paVar11 = local_178;
  for (iVar6 = 0x14; iVar6 != 0; iVar6 = iVar6 + -1) {
    *(undefined4 *)paVar11 = 0;
    paVar11 = paVar11 + 4;
  }
  paVar11 = local_1c8;
  for (iVar6 = 0x14; iVar6 != 0; iVar6 = iVar6 + -1) {
    *(undefined4 *)paVar11 = 0;
    paVar11 = paVar11 + 4;
  }
  if (*(int *)(this + 0x28) == 0) {
    camCAMERA::~camCAMERA(local_3d4);
    return 0;
  }
  local_8 = 1;
  _apCfgReadBool((void **)&DAT_0094de64,s_Video,s_VIDEO_Mirror,&local_8);
  *(int *)(this + 0x48c) = *(int *)(this + 0x48c) + 1;
  camCAMERA::CalcPOVQual(param_1);
  if (*(int *)(this + 0x48c) == 1) {
    pcVar9 = param_1;
    pmVar5 = this + 0x494;
    for (iVar6 = 0x83; iVar6 != 0; iVar6 = iVar6 + -1) {
      *(undefined4 *)pmVar5 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pmVar5 = pmVar5 + 4;
    }
    PrepareNormals(this);
    DAT_0094de60 = param_1;
    qsort(this + 0x2c,*(size_t *)(this + 0x28),0x38,_mrrCmpMirror);
  }
  SetVisFlags(this,param_1,(uint)(*(int *)(this + 0x48c) == 2),local_178);
  SetVisFlags(this,(camCAMERA *)(this + 0x494),0,local_1c8);
  local_24 = 0;
  if (0 < *(int *)(this + 0x28)) {
    pmVar5 = this + 0x48;
    local_4c = pmVar5;
    do {
      local_4c = pmVar5;
      if (((byte)local_178[local_24 * 4] & 4) != 0) {
        iVar6 = *(int *)(this + 0x48c);
        pcVar9 = param_1;
        pcVar12 = local_3d4;
        for (iVar7 = 0x83; iVar7 != 0; iVar7 = iVar7 + -1) {
          *(undefined4 *)pcVar12 = *(undefined4 *)pcVar9;
          pcVar9 = pcVar9 + 4;
          pcVar12 = pcVar12 + 4;
        }
        local_e8[10] = (uint)(iVar6 == 1);
        if (((byte)pmVar5[-0x1c] & 1) == 0) {
          camCAMERA::GetParameters
                    (param_1,local_ac,(m3dV *)local_7c,(m3dV *)local_88,(m3dV *)local_64);
          pmVar1 = (m3dV *)(local_4c + 4);
          local_bc = pmVar1;
          m3dMirrorPointPlane((m3dV *)(local_4c + 0x10),pmVar1,local_ac,(m3dV *)&local_3c);
          m3dMirrorPointPlane(&m3dVZero,pmVar1,(m3dV *)local_7c,(m3dV *)&local_58);
          m3dMirrorPointPlane(&m3dVZero,pmVar1,(m3dV *)local_88,(m3dV *)local_30);
          local_30[0] = local_30[0] * ___real_bf800000;
          local_30[1] = local_30[1] * ___real_bf800000;
          local_30[2] = local_30[2] * ___real_bf800000;
          m3dMirrorPointPlane(&m3dVZero,pmVar1,(m3dV *)local_64,(m3dV *)&local_48);
          camCAMERA::SetParameters
                    (local_3d4,(m3dV *)&local_3c,(m3dV *)&local_58,(m3dV *)local_30,
                     (m3dV *)&local_48);
          pmVar5 = local_4c;
        }
        else {
          local_e8[10] = 0;
          animINST::GetDir(*(animINST **)pmVar5,local_a0);
          pmVar5 = local_4c;
          animINST::GetPos(*(animINST **)local_4c,(m3dV *)&local_94);
          local_70 = *(float *)(pmVar5 + 4) * ___real_bf800000;
          local_bc = (m3dV *)(pmVar5 + 4);
          local_6c = *(float *)(pmVar5 + 8) * ___real_bf800000;
          local_68 = *(float *)(pmVar5 + 0xc) * ___real_bf800000;
          (**(code **)(*(int *)(*(int *)(pmVar5 + -0x18) + 0xc0) + 0x24))(local_b8);
          local_9c = 0;
          local_6c = 0.0;
          m3dMATR::MakeRot((m3dMATR *)local_128,(m3dV *)&local_70,local_a0);
          camCAMERA::GetParameters
                    (param_1,local_ac,(m3dV *)local_7c,(m3dV *)local_88,(m3dV *)local_64);
          local_3c = local_94;
          local_38 = local_90;
          local_20 = (float *)&local_58;
          local_34 = local_8c;
          local_18 = local_7c;
          local_1c = local_128;
          if (m3dSimdType == 0) {
            if (((uint)local_128 & 0xf) == 0) {
              fVar19 = local_7c[0] * local_128[0] + local_7c[1] * local_118 +
                       local_7c[2] * local_108;
              fVar20 = local_7c[0] * local_128[1] + local_7c[1] * fStack_114 +
                       local_7c[2] * fStack_104;
              local_50 = local_7c[0] * local_128[2] + local_7c[1] * fStack_110 +
                         local_7c[2] * fStack_100;
            }
            else {
              fVar19 = local_7c[0] * local_128[0] + local_7c[1] * local_118 +
                       local_7c[2] * local_108;
              fVar20 = local_7c[0] * local_128[1] + local_7c[1] * fStack_114 +
                       local_7c[2] * fStack_104;
              local_50 = local_7c[0] * local_128[2] + local_7c[1] * fStack_110 +
                         local_7c[2] * fStack_100;
            }
            local_58 = CONCAT44(fVar20,fVar19);
          }
          else if (m3dSimdType == 1) {
            FastExitMediaState();
            uVar14 = PackedFloatingMUL(CONCAT44(local_7c[0],local_7c[0]),
                                       CONCAT44(local_128[1],local_128[0]));
            uVar15 = PackedFloatingMUL(CONCAT44(local_7c[1],local_7c[1]),
                                       CONCAT44(fStack_114,local_118));
            uVar16 = PackedFloatingMUL(CONCAT44(local_7c[2],local_7c[2]),
                                       CONCAT44(fStack_104,local_108));
            uVar17 = PackedFloatingMUL(CONCAT44(local_7c[0],local_7c[0]),
                                       CONCAT44(local_128[3],local_128[2]));
            uVar15 = PackedFloatingADD(uVar15,uVar16);
            uVar16 = PackedFloatingMUL(CONCAT44(local_7c[1],local_7c[1]),
                                       CONCAT44(uStack_10c,fStack_110));
            uVar18 = PackedFloatingMUL(CONCAT44(local_7c[2],local_7c[2]),
                                       CONCAT44(uStack_fc,fStack_100));
            local_58 = PackedFloatingADD(uVar14,uVar15);
            uVar14 = PackedFloatingADD(uVar16,uVar18);
            uVar14 = PackedFloatingADD(uVar17,uVar14);
            local_50 = (float)uVar14;
            FastExitMediaState();
          }
          else {
            iVar6 = 0;
            do {
              *(undefined4 *)((int)&local_58 + iVar6) = 0;
              iVar7 = 0;
              pfVar8 = (float *)((int)local_128 + iVar6);
              fVar19 = ___real_00000000;
              do {
                pfVar2 = local_7c + iVar7;
                fVar20 = *pfVar8;
                iVar7 = iVar7 + 1;
                pfVar8 = pfVar8 + 4;
                fVar19 = *pfVar2 * fVar20 + fVar19;
              } while (iVar7 < 3);
              *(float *)((int)&local_58 + iVar6) = fVar19;
              iVar6 = iVar6 + 4;
            } while (iVar6 < 0xc);
          }
          local_1c = local_30;
          local_18 = local_88;
          local_20 = local_128;
          if (m3dSimdType != 0) {
            if (m3dSimdType == 1) {
              FastExitMediaState();
              uVar14 = PackedFloatingMUL(CONCAT44(local_88[0],local_88[0]),
                                         CONCAT44(local_128[1],local_128[0]));
              uVar15 = PackedFloatingMUL(CONCAT44(local_88[1],local_88[1]),
                                         CONCAT44(fStack_114,local_118));
              uVar16 = PackedFloatingMUL(CONCAT44(local_88[2],local_88[2]),
                                         CONCAT44(fStack_104,local_108));
              uVar17 = PackedFloatingMUL(CONCAT44(local_88[0],local_88[0]),
                                         CONCAT44(local_128[3],local_128[2]));
              uVar15 = PackedFloatingADD(uVar15,uVar16);
              uVar16 = PackedFloatingMUL(CONCAT44(local_88[1],local_88[1]),
                                         CONCAT44(uStack_10c,fStack_110));
              uVar18 = PackedFloatingMUL(CONCAT44(local_88[2],local_88[2]),
                                         CONCAT44(uStack_fc,fStack_100));
              uVar14 = PackedFloatingADD(uVar14,uVar15);
              uVar15 = PackedFloatingADD(uVar16,uVar18);
              local_30[1] = (float)((ulonglong)uVar14 >> 0x20);
              local_30[0] = (float)uVar14;
              uVar14 = PackedFloatingADD(uVar17,uVar15);
              local_30[2] = (float)uVar14;
              FastExitMediaState();
            }
            else {
              iVar6 = 0;
              do {
                *(undefined4 *)((int)local_30 + iVar6) = 0;
                iVar7 = 0;
                pfVar8 = (float *)((int)local_128 + iVar6);
                fVar19 = ___real_00000000;
                do {
                  pfVar2 = local_88 + iVar7;
                  fVar20 = *pfVar8;
                  iVar7 = iVar7 + 1;
                  pfVar8 = pfVar8 + 4;
                  fVar19 = *pfVar2 * fVar20 + fVar19;
                } while (iVar7 < 3);
                *(float *)((int)local_30 + iVar6) = fVar19;
                iVar6 = iVar6 + 4;
              } while (iVar6 < 0xc);
            }
          }
          local_1c = (float *)&local_48;
          local_18 = local_64;
          local_20 = local_128;
          if (m3dSimdType == 0) {
            if (((uint)local_128 & 0xf) == 0) {
              fVar19 = local_64[0] * local_128[0] + local_64[1] * local_118 +
                       local_64[2] * local_108;
              fVar20 = local_64[0] * local_128[1] + local_64[1] * fStack_114 +
                       local_64[2] * fStack_104;
              local_40 = local_64[0] * local_128[2] + local_64[1] * fStack_110 +
                         local_64[2] * fStack_100;
            }
            else {
              fVar19 = local_64[0] * local_128[0] + local_64[1] * local_118 +
                       local_64[2] * local_108;
              fVar20 = local_64[0] * local_128[1] + local_64[1] * fStack_114 +
                       local_64[2] * fStack_104;
              local_40 = local_64[0] * local_128[2] + local_64[1] * fStack_110 +
                         local_64[2] * fStack_100;
            }
            local_48 = CONCAT44(fVar20,fVar19);
          }
          else if (m3dSimdType == 1) {
            FastExitMediaState();
            uVar14 = PackedFloatingMUL(CONCAT44(local_64[0],local_64[0]),
                                       CONCAT44(local_128[1],local_128[0]));
            uVar15 = PackedFloatingMUL(CONCAT44(local_64[1],local_64[1]),
                                       CONCAT44(fStack_114,local_118));
            uVar16 = PackedFloatingMUL(CONCAT44(local_64[2],local_64[2]),
                                       CONCAT44(fStack_104,local_108));
            uVar17 = PackedFloatingMUL(CONCAT44(local_64[0],local_64[0]),
                                       CONCAT44(local_128[3],local_128[2]));
            uVar15 = PackedFloatingADD(uVar15,uVar16);
            uVar16 = PackedFloatingMUL(CONCAT44(local_64[1],local_64[1]),
                                       CONCAT44(uStack_10c,fStack_110));
            uVar18 = PackedFloatingMUL(CONCAT44(local_64[2],local_64[2]),
                                       CONCAT44(uStack_fc,fStack_100));
            local_48 = PackedFloatingADD(uVar14,uVar15);
            uVar14 = PackedFloatingADD(uVar16,uVar18);
            uVar14 = PackedFloatingADD(uVar17,uVar14);
            local_40 = (float)uVar14;
            FastExitMediaState();
          }
          else {
            iVar6 = 0;
            do {
              *(undefined4 *)((int)&local_48 + iVar6) = 0;
              iVar7 = 0;
              pfVar8 = (float *)((int)local_128 + iVar6);
              fVar19 = ___real_00000000;
              do {
                pfVar2 = local_64 + iVar7;
                fVar20 = *pfVar8;
                iVar7 = iVar7 + 1;
                pfVar8 = pfVar8 + 4;
                fVar19 = *pfVar2 * fVar20 + fVar19;
              } while (iVar7 < 3);
              *(float *)((int)&local_48 + iVar6) = fVar19;
              iVar6 = iVar6 + 4;
            } while (iVar6 < 0xc);
          }
          camCAMERA::SetParameters
                    (local_3d4,(m3dV *)&local_3c,(m3dV *)&local_58,(m3dV *)local_30,
                     (m3dV *)&local_48);
        }
        camCAMERA::SetViewPort
                  (local_3d4,*(float *)(this + 0x5c0),*(float *)(this + 0x5c4),
                   *(float *)(this + 0x5c8),*(float *)(this + 0x5cc));
        fVar19 = *(float *)(this + 0x5d8);
        if (local_e8[10] == 0) {
          fVar20 = *(float *)(this + 0x5d4);
          fVar3 = *(float *)(this + 0x5d0);
        }
        else {
          fVar19 = -fVar19;
          fVar20 = *(float *)(this + 0x5d4);
          fVar3 = *(float *)(this + 0x5d0) + *(float *)(this + 0x5d8);
        }
        camCAMERA::SetViewWindow(local_3d4,fVar3,fVar20,fVar19,*(float *)(this + 0x5dc));
        if (*(int *)(this + 0x48c) == 1) {
          *(int *)(this + 0x490) = local_24;
        }
        else if (*(int *)(this + 0x490) == local_24) goto LAB_00509a22;
        pmVar4 = local_1e4;
        if (((byte)pmVar5[-0x1c] & 1) == 0) {
          pmVar4 = pmVar5 + 0x10;
        }
        (**(code **)(*(int *)gsSysVis + 0x7c))(pmVar4);
        (**(code **)(*(int *)gsSysVis + 0x80))(gsScenePtr);
        uVar10 = 0x30;
        *(uint *)(rendDrv + 4) = *(uint *)(rendDrv + 4) | 8;
        if (((byte)pmVar5[-0x1c] & 0x40) == 0) {
          uVar10 = 0x34;
        }
        if (*(int *)(this + 0x48c) < 2) {
          if (local_8 != 0) {
            (**(code **)(*(int *)gsSysRender + 0x1c))(local_3d4,uVar10);
          }
        }
        else {
          local_14 = *(float *)local_bc;
          local_c = *(float *)(local_bc + 8);
          local_10 = *(float *)(local_bc + 4);
          if (((byte)local_178[local_24 * 4] & 0x20) == 0) {
            local_14 = -*(float *)local_bc;
            local_10 = -*(float *)(local_bc + 4);
            local_c = -*(float *)(local_bc + 8);
          }
          (**(code **)(*(int *)rendDrv + 0x60))(pmVar5 + 0x10,&local_14);
          if (((byte)pmVar5[-0x1c] & 0x10) != 0) {
            (**(code **)(*(int *)rendDrv + 100))(1);
          }
          if (local_8 != 0) {
            (**(code **)(*(int *)gsSysRender + 0x1c))(local_3d4,uVar10 | 8);
          }
          RenderMirrorObjects(this,local_3d4,(apSTATE *)0x0,-1,0,-1,local_24);
          (**(code **)(*(int *)rendDrv + 100))(0);
        }
        (**(code **)(*(int *)rendDrv + 100))(0);
        if (*(int *)(this + 0x48c) == 1) {
          *(uint *)(rendDrv + 4) = *(uint *)(rendDrv + 4) & 0xfffffff7;
        }
        if (local_8 != 0) {
          local_e8[0] = local_e8[0] | 2;
          pshSHADOW_SYSTEM::UpdateClear(gsSysProjShd,(vidCLEAR *)local_e8);
          (**(code **)(*(int *)vidDriver + 0x24))(local_e8);
        }
        if (1 < *(int *)(this + 0x28)) {
          iVar6 = -1;
          if (*(int *)(this + 0x48c) == 2) {
            MaskMirrors(this,(camCAMERA *)(this + 0x494),local_1c8,2,1,*(int *)(this + 0x490),-1);
            iVar7 = local_24;
            RenderMirrorObjects(this,param_1,(apSTATE *)0x0,-1,1,local_24,-1);
            iVar6 = *(int *)(this + 0x490);
            uVar10 = 0;
            paVar11 = local_178;
            iVar21 = 4;
            pmVar5 = (mrrMIRROR_SYSTEM *)param_1;
          }
          else {
            bVar13 = ((byte)local_178[local_24 * 4] & 8) == 0;
            if (bVar13) {
              iVar7 = *(int *)(this + 0x490);
            }
            else {
              iVar7 = *(int *)(this + 0x490);
            }
            paVar11 = local_1c8;
            uVar10 = (uint)bVar13;
            iVar21 = 2;
            pmVar5 = this + 0x494;
          }
          MaskMirrors(this,(camCAMERA *)pmVar5,paVar11,iVar21,uVar10,iVar7 + 1,iVar6);
        }
      }
LAB_00509a22:
      local_24 = local_24 + 1;
      pmVar5 = local_4c + 0x38;
      local_4c = pmVar5;
    } while (local_24 < *(int *)(this + 0x28));
  }
  if (*(int *)(this + 0x48c) == 1) {
    RenderMirrorObjects(this,(camCAMERA *)(this + 0x494),local_1c8,2,local_8,-1,-1);
    (**(code **)(*(int *)rendDrv + 100))(0);
  }
  else {
    iVar6 = *(int *)(this + 0x490);
    local_14 = *(float *)(this + iVar6 * 0x38 + 0x4c);
    local_10 = *(float *)(this + iVar6 * 0x38 + 0x50);
    local_c = *(float *)(this + iVar6 * 0x38 + 0x54);
    if (((byte)local_178[iVar6 * 4] & 0x20) == 0) {
      local_14 = -*(float *)(this + iVar6 * 0x38 + 0x4c);
      local_10 = -*(float *)(this + iVar6 * 0x38 + 0x50);
      local_c = -*(float *)(this + iVar6 * 0x38 + 0x54);
    }
    (**(code **)(*(int *)rendDrv + 0x60))(this + iVar6 * 0x38 + 0x58,&local_14);
    if (((byte)this[*(int *)(this + 0x490) * 0x38 + 0x2c] & 0x10) != 0) {
      (**(code **)(*(int *)rendDrv + 100))(1);
    }
  }
  *(int *)(this + 0x48c) = *(int *)(this + 0x48c) + -1;
  camCAMERA::~camCAMERA(local_3d4);
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:mirror.cpp
   addr: 00509B20 */

void __thiscall mrrMIRROR_SYSTEM::PrepareNormals(mrrMIRROR_SYSTEM *this)

{
  mrrMIRROR_SYSTEM *pmVar1;
  m3dV *pmVar2;
  float fVar3;
  float fVar4;
  byte *pbVar5;
  float *pfVar6;
  mrrMIRROR_SYSTEM *pmVar7;
  float *pfVar8;
  int iVar9;
  mrrMIRROR_SYSTEM *pmVar10;
  mrrMIRROR_SYSTEM *pmVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  int local_14;
  
  local_14 = 0;
  if (0 < *(int *)(this + 0x28)) {
    pmVar11 = this + 0x30;
    do {
      if (*(int *)(*(int *)pmVar11 + 0xbc) != 0) {
        objOBJ::SetStateProcYes
                  (*(objOBJ **)(*(int *)(*(int *)pmVar11 + 0xbc) + 0x10),0x1000,
                   (_func_int_objOBJ_ptr_void_ptr *)0x0);
        animINST::Validate(*(animINST **)(*(int *)pmVar11 + 0xbc),0x203);
      }
      pbVar5 = *(byte **)pmVar11;
      pmVar1 = pmVar11 + 0x28;
      if ((*pbVar5 & 1) == 0) {
        pfVar6 = *(float **)(*(int *)(pbVar5 + 0x28) + 0x40);
        pfVar8 = (float *)(pbVar5 + 0x3c);
        if (m3dSimdType == 0) {
          if (((uint)pfVar8 & 0xf) == 0) {
            fVar24 = *pfVar6;
            fVar3 = pfVar6[1];
            fVar4 = pfVar6[2];
            fVar22 = fVar24 * *pfVar8 + *(float *)(pbVar5 + 0x6c) +
                     fVar3 * *(float *)(pbVar5 + 0x4c) + fVar4 * *(float *)(pbVar5 + 0x5c);
            fVar23 = fVar24 * *(float *)(pbVar5 + 0x40) + *(float *)(pbVar5 + 0x70) +
                     fVar3 * *(float *)(pbVar5 + 0x50) + fVar4 * *(float *)(pbVar5 + 0x60);
            fVar24 = fVar24 * *(float *)(pbVar5 + 0x44) + *(float *)(pbVar5 + 0x74) +
                     fVar3 * *(float *)(pbVar5 + 0x54) + fVar4 * *(float *)(pbVar5 + 100);
          }
          else {
            fVar24 = *pfVar6;
            fVar3 = pfVar6[1];
            fVar4 = pfVar6[2];
            fVar22 = fVar24 * (float)*(undefined8 *)pfVar8 +
                     fVar3 * (float)*(undefined8 *)(pbVar5 + 0x4c) +
                     fVar4 * (float)*(undefined8 *)(pbVar5 + 0x5c) +
                     (float)*(undefined8 *)(pbVar5 + 0x6c);
            fVar23 = fVar24 * (float)((ulonglong)*(undefined8 *)pfVar8 >> 0x20) +
                     fVar3 * (float)((ulonglong)*(undefined8 *)(pbVar5 + 0x4c) >> 0x20) +
                     fVar4 * (float)((ulonglong)*(undefined8 *)(pbVar5 + 0x5c) >> 0x20) +
                     (float)((ulonglong)*(undefined8 *)(pbVar5 + 0x6c) >> 0x20);
            fVar24 = fVar24 * (float)*(undefined8 *)(pbVar5 + 0x44) +
                     fVar3 * (float)*(undefined8 *)(pbVar5 + 0x54) +
                     fVar4 * (float)*(undefined8 *)(pbVar5 + 100) +
                     (float)*(undefined8 *)(pbVar5 + 0x74);
          }
          *(ulonglong *)pmVar1 = CONCAT44(fVar23,fVar22);
          *(float *)(pmVar11 + 0x30) = fVar24;
        }
        else if (m3dSimdType == 1) {
          FastExitMediaState();
          uVar14 = (undefined4)*(undefined8 *)pfVar6;
          uVar17 = CONCAT44(uVar14,uVar14);
          uVar14 = (undefined4)((ulonglong)*(undefined8 *)pfVar6 >> 0x20);
          uVar20 = CONCAT44(uVar14,uVar14);
          uVar21 = CONCAT44(pfVar6[2],pfVar6[2]);
          uVar15 = PackedFloatingMUL(uVar17,*(undefined8 *)pfVar8);
          uVar16 = PackedFloatingMUL(uVar20,*(undefined8 *)(pbVar5 + 0x4c));
          uVar18 = PackedFloatingMUL(uVar21,*(undefined8 *)(pbVar5 + 0x5c));
          uVar15 = PackedFloatingADD(uVar15,*(undefined8 *)(pbVar5 + 0x6c));
          uVar19 = PackedFloatingMUL(uVar17,*(undefined8 *)(pbVar5 + 0x44));
          uVar17 = PackedFloatingADD(uVar16,uVar18);
          uVar16 = PackedFloatingMUL(uVar20,*(undefined8 *)(pbVar5 + 0x54));
          uVar21 = PackedFloatingMUL(uVar21,*(undefined8 *)(pbVar5 + 100));
          uVar20 = PackedFloatingADD(uVar19,*(undefined8 *)(pbVar5 + 0x74));
          uVar17 = PackedFloatingADD(uVar15,uVar17);
          uVar15 = PackedFloatingADD(uVar16,uVar21);
          *(undefined8 *)pmVar1 = uVar17;
          uVar17 = PackedFloatingADD(uVar20,uVar15);
          *(int *)(pmVar11 + 0x30) = (int)uVar17;
          FastExitMediaState();
        }
        else {
          iVar12 = 0;
          pmVar7 = pmVar1;
          do {
            *(float *)pmVar7 = 0.0;
            iVar13 = 0;
            pmVar10 = pmVar7 + ((int)pfVar8 - (int)pmVar1);
            do {
              iVar9 = iVar13 + 1;
              *(float *)pmVar7 = pfVar6[iVar13] * *(float *)pmVar10 + *(float *)pmVar7;
              iVar13 = iVar9;
              pmVar10 = pmVar10 + 0x10;
            } while (iVar9 < 3);
            iVar13 = iVar12 + iVar9 * 4;
            iVar12 = iVar12 + 1;
            *(float *)pmVar7 = pfVar8[iVar13] + *(float *)pmVar7;
            pmVar7 = pmVar7 + 4;
          } while (iVar12 < 3);
        }
      }
      else {
        pfVar8 = *(float **)(*(int *)(pbVar5 + 0x28) + 0x40);
        *(float *)pmVar1 = *pfVar8;
        *(float *)(pmVar11 + 0x2c) = pfVar8[1];
        *(float *)(pmVar11 + 0x30) = pfVar8[2];
      }
      pmVar2 = (m3dV *)(pmVar11 + 0x1c);
      iVar13 = 0;
      *(undefined4 *)pmVar2 = _m3dVZero;
      *(int *)(pmVar11 + 0x20) = DAT_00963740;
      *(int *)(pmVar11 + 0x24) = DAT_00963744;
      iVar12 = *(int *)pmVar11;
      if (0 < *(int *)(iVar12 + 0x10)) {
        iVar9 = 0;
        do {
          pfVar8 = (float *)(*(int *)(*(int *)(iVar12 + 0x28) + 0x44) + iVar9);
          iVar13 = iVar13 + 1;
          iVar9 = iVar9 + 0xc;
          *(float *)pmVar2 = *(float *)pmVar2 + *pfVar8;
          *(float *)(pmVar11 + 0x20) = pfVar8[1] + *(float *)(pmVar11 + 0x20);
          *(float *)(pmVar11 + 0x24) = pfVar8[2] + *(float *)(pmVar11 + 0x24);
          iVar12 = *(int *)pmVar11;
        } while (iVar13 < *(int *)(iVar12 + 0x10));
      }
      m3dNormalize(pmVar2);
      local_14 = local_14 + 1;
      pmVar11 = pmVar11 + 0x38;
    } while (local_14 < *(int *)(this + 0x28));
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:mirror.cpp
   addr: 00509DB0 */

void __thiscall
mrrMIRROR_SYSTEM::SetVisFlags
          (mrrMIRROR_SYSTEM *this,camCAMERA *param_1,int param_2,apSTATE *param_3)

{
  int iVar1;
  float fVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  float *pfVar8;
  mrrMIRROR_SYSTEM *pmVar9;
  int iVar10;
  mrrMIRROR_SYSTEM *pmVar11;
  byte *pbVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  float local_3c;
  float local_38;
  float local_34;
  float local_30 [3];
  int local_24;
  byte *local_20;
  float *local_1c;
  mrrMIRROR_SYSTEM *local_18;
  mrrMIRROR_SYSTEM *local_14;
  int local_10;
  byte *local_c;
  mrrMIRROR_SYSTEM *local_8;
  
  local_14 = this;
  camCAMERA::GetOrigin(param_1,(m3dV *)&local_3c);
  iVar10 = 0;
  if (0 < *(int *)(this + 0x28)) {
    pmVar11 = this + 0x60;
    do {
      uVar3 = *(uint *)(param_3 + iVar10 * 4);
      *(uint *)(param_3 + iVar10 * 4) = uVar3 & 0xfffffffd;
      *(uint *)(param_3 + iVar10 * 4) = uVar3 & 0xfffffff9;
      *(uint *)(param_3 + iVar10 * 4) = uVar3 & 0xfffffff1;
      *(uint *)(param_3 + iVar10 * 4) = uVar3 & 0xffffffd1;
      if ((((*(byte *)((int)*(float *)(pmVar11 + -0x30) + 8) & 0x3f) == 0) &&
          (local_8 = pmVar11,
          iVar5 = (**(code **)(*(int *)gsSysVis + 0x94))(*(float *)(pmVar11 + -0x30)), iVar5 != 0))
         && (iVar5 = camCAMERA::QualBoxPOV
                               (param_1,(m3dBOX *)((int)*(float *)(pmVar11 + -0x30) + 0xc0)),
            iVar5 != 1)) {
        if ((local_38 - *(float *)(pmVar11 + -4)) * *(float *)(pmVar11 + -0x10) +
            (local_34 - *(float *)pmVar11) * *(float *)(pmVar11 + -0xc) +
            (local_3c - *(float *)(pmVar11 + -8)) * *(float *)(pmVar11 + -0x14) <=
            _DAT_005dcaa0 * ___real_41200000) {
          if ((**(byte **)(pmVar11 + -0x30) & 4) == 0) goto LAB_0050a0e4;
          *(uint *)(param_3 + iVar10 * 4) = *(uint *)(param_3 + iVar10 * 4) | 0x20;
        }
        if (param_2 == 0) {
LAB_0050a0d4:
          uVar3 = *(uint *)(param_3 + iVar10 * 4);
          *(uint *)(param_3 + iVar10 * 4) = uVar3 | 2;
          *(uint *)(param_3 + iVar10 * 4) = uVar3 | 6;
        }
        else {
          local_24 = 0;
          pmVar9 = local_14 + *(int *)(local_14 + 0x490) * 0x38 + 0x2c;
          local_18 = pmVar9;
          if (0 < *(int *)((int)*(float *)(pmVar11 + -0x30) + 0x14)) {
            local_10 = 0;
            do {
              pbVar4 = *(byte **)(pmVar11 + -0x30);
              if ((*pbVar4 & 1) == 0) {
                local_1c = local_30;
                pbVar12 = (byte *)(*(int *)(*(int *)(pbVar4 + 0x28) + 0x40) + local_10);
                local_c = pbVar4 + 0x3c;
                pmVar11 = local_8;
                local_20 = pbVar12;
                if (m3dSimdType != 0) {
                  if (m3dSimdType == 1) {
                    FastExitMediaState();
                    uVar13 = (undefined4)*(undefined8 *)pbVar12;
                    uVar16 = CONCAT44(uVar13,uVar13);
                    uVar13 = (undefined4)((ulonglong)*(undefined8 *)pbVar12 >> 0x20);
                    uVar19 = CONCAT44(uVar13,uVar13);
                    uVar20 = CONCAT44(*(undefined4 *)(pbVar12 + 8),*(undefined4 *)(pbVar12 + 8));
                    uVar14 = PackedFloatingMUL(uVar16,*(undefined8 *)local_c);
                    uVar15 = PackedFloatingMUL(uVar19,*(undefined8 *)(pbVar4 + 0x4c));
                    uVar17 = PackedFloatingMUL(uVar20,*(undefined8 *)(pbVar4 + 0x5c));
                    uVar14 = PackedFloatingADD(uVar14,*(undefined8 *)(pbVar4 + 0x6c));
                    uVar18 = PackedFloatingMUL(uVar16,*(undefined8 *)(pbVar4 + 0x44));
                    uVar16 = PackedFloatingADD(uVar15,uVar17);
                    uVar15 = PackedFloatingMUL(uVar19,*(undefined8 *)(pbVar4 + 0x54));
                    uVar20 = PackedFloatingMUL(uVar20,*(undefined8 *)(pbVar4 + 100));
                    uVar19 = PackedFloatingADD(uVar18,*(undefined8 *)(pbVar4 + 0x74));
                    uVar16 = PackedFloatingADD(uVar14,uVar16);
                    uVar14 = PackedFloatingADD(uVar15,uVar20);
                    local_30[1] = (float)((ulonglong)uVar16 >> 0x20);
                    local_30[0] = (float)uVar16;
                    uVar16 = PackedFloatingADD(uVar19,uVar14);
                    local_30[2] = (float)uVar16;
                    FastExitMediaState();
                    pmVar9 = local_18;
                  }
                  else {
                    iVar5 = 0;
                    local_20 = local_c + -(int)local_30;
                    pfVar6 = local_30;
                    do {
                      pbVar4 = local_20;
                      iVar7 = 0;
                      *pfVar6 = 0.0;
                      pfVar8 = (float *)(pbVar4 + (int)pfVar6);
                      do {
                        iVar1 = iVar7 * 4;
                        fVar2 = *pfVar8;
                        iVar7 = iVar7 + 1;
                        pfVar8 = pfVar8 + 4;
                        *pfVar6 = *(float *)(pbVar12 + iVar1) * fVar2 + *pfVar6;
                      } while (iVar7 < 3);
                      iVar7 = iVar5 + iVar7 * 4;
                      iVar5 = iVar5 + 1;
                      *pfVar6 = *(float *)(local_c + iVar7 * 4) + *pfVar6;
                      pfVar6 = pfVar6 + 1;
                      pmVar9 = local_18;
                      pmVar11 = local_8;
                    } while (iVar5 < 3);
                  }
                }
              }
              else {
                pfVar6 = (float *)(*(int *)(*(int *)(pbVar4 + 0x28) + 0x40) + local_10);
                local_30[0] = *pfVar6;
                local_30[1] = pfVar6[1];
                local_30[2] = pfVar6[2];
              }
              if (_DAT_005dcaa0 * ___real_41200000 <
                  (local_30[0] - *(float *)(pmVar9 + 0x2c)) * *(float *)(pmVar9 + 0x20) +
                  (local_30[1] - *(float *)(pmVar9 + 0x30)) * *(float *)(pmVar9 + 0x24) +
                  (local_30[2] - *(float *)(pmVar9 + 0x34)) * *(float *)(pmVar9 + 0x28))
              goto LAB_0050a0d4;
              local_24 = local_24 + 1;
              local_10 = local_10 + 0xc;
            } while (local_24 < *(int *)((int)*(float *)(pmVar11 + -0x30) + 0x14));
          }
        }
      }
LAB_0050a0e4:
      iVar10 = iVar10 + 1;
      pmVar11 = pmVar11 + 0x38;
    } while (iVar10 < *(int *)(local_14 + 0x28));
  }
  iVar10 = *(int *)(local_14 + 0x28) + -1;
  if (-1 < iVar10) {
    while (((byte)param_3[iVar10 * 4] & 4) == 0) {
      iVar10 = iVar10 + -1;
      if (iVar10 < 0) {
        return;
      }
    }
    *(uint *)(param_3 + iVar10 * 4) = *(uint *)(param_3 + iVar10 * 4) | 8;
  }
  return;
}




/* from: gs:mirror.cpp
   addr: 0050A130 */

void __thiscall
mrrMIRROR_SYSTEM::MaskMirrors
          (mrrMIRROR_SYSTEM *this,camCAMERA *param_1,apSTATE *param_2,int param_3,int param_4,
          int param_5,int param_6)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  int *piVar5;
  float *pfVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  float *pfVar10;
  int iVar11;
  int iVar12;
  mrrMIRROR_SYSTEM *pmVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined4 local_200;
  float local_1fc [60];
  rendCFG local_10c [184];
  undefined4 local_54;
  ulong local_50;
  uint local_48;
  undefined4 uStack_44;
  uint local_40;
  undefined4 uStack_3c;
  uint local_38;
  undefined4 uStack_34;
  uint local_30;
  undefined4 uStack_2c;
  float *local_28;
  float *local_24;
  float *local_20;
  int local_1c;
  float *local_18;
  mrrMIRROR_SYSTEM *local_14;
  int local_10;
  int local_c;
  byte *local_8;
  
  (**(code **)(*(int *)rendDrv + 0x30))(param_1,0x3d4ccccd,0x44a28000);
  local_50 = 0;
  rendCFG::InitMtl1(local_10c,(txmTEXTURE *)0x0);
  local_1c = 0;
  if (0 < param_5) {
    pmVar13 = this + 0x30;
    local_14 = pmVar13;
    do {
      local_14 = pmVar13;
      if (((*(uint *)(param_2 + local_1c * 4) & param_3) != 0) && (local_1c != param_6)) {
        if ((param_4 == 0) || (local_1c == 0)) {
          objOBJ::SetTransparency(*(objOBJ **)pmVar13,0x80,'\0');
          objOBJ::SetConstColor(*(objOBJ **)pmVar13,local_50,0);
          local_c = *(int *)(*(int *)pmVar13 + 0x28);
          uVar8 = *(uint *)(local_c + 0x5e);
          if (((*(byte *)(*(int *)pmVar13 + 0x24) & 0x40) != 0) && (uVar8 >> 0x18 != 0xff)) {
            uStack_2c = 0;
            uStack_3c = 0;
            local_40 = uVar8 >> 0x10 & 0xff;
            local_30 = uVar8 >> 0x18;
            uVar7 = ftol();
            uStack_44 = 0;
            local_48 = uVar8 >> 8 & 0xff;
            local_8 = (byte *)((uVar7 | 0xffffff00) << 8);
            uVar7 = ftol();
            local_38 = uVar8 & 0xff;
            uStack_34 = 0;
            local_8 = (byte *)(((uint)local_8 | uVar7 & 0xff) << 8);
            uVar8 = ftol();
            uVar8 = (uint)local_8 | uVar8 & 0xff;
          }
          *(uint *)(local_c + 0x62) = uVar8;
          objOBJ::GetFaceTexRendMtl(*(objOBJ **)pmVar13,0,1);
          rendDRIVER::RenderObj(rendDrv,*(objOBJ **)pmVar13,0);
          local_14 = pmVar13;
        }
        else {
          local_54 = 0x80aa;
          local_10 = 0;
          if (0 < *(int *)(*(int *)pmVar13 + 0x10)) {
            do {
              local_8 = *(byte **)local_14;
              local_200 = 3;
              if ((*local_8 & 1) == 0) {
                pfVar6 = local_1fc;
                local_c = 0;
                local_18 = (float *)(local_8 + 0x3c);
                local_20 = pfVar6;
                do {
                  piVar5 = *(int **)(local_8 + 0x28);
                  local_28 = pfVar6;
                  pfVar1 = (float *)(piVar5[0x10] +
                                    (uint)*(ushort *)
                                           ((uint)*(byte *)(piVar5 + 1) * local_10 + 2 + local_c * 2
                                           + *piVar5) * 0xc);
                  local_24 = pfVar1;
                  if (m3dSimdType == 0) {
                    if (((uint)local_18 & 0xf) == 0) {
                      fVar24 = *pfVar1;
                      fVar3 = pfVar1[1];
                      fVar4 = pfVar1[2];
                      fVar22 = fVar24 * *local_18 + local_18[0xc] + fVar3 * local_18[4] +
                               fVar4 * local_18[8];
                      fVar23 = fVar24 * local_18[1] + local_18[0xd] + fVar3 * local_18[5] +
                               fVar4 * local_18[9];
                      fVar24 = fVar24 * local_18[2] + local_18[0xe] + fVar3 * local_18[6] +
                               fVar4 * local_18[10];
                    }
                    else {
                      fVar24 = *pfVar1;
                      fVar3 = pfVar1[1];
                      fVar4 = pfVar1[2];
                      fVar22 = fVar24 * (float)*(undefined8 *)local_18 +
                               fVar3 * (float)*(undefined8 *)(local_18 + 4) +
                               fVar4 * (float)*(undefined8 *)(local_18 + 8) +
                               (float)*(undefined8 *)(local_18 + 0xc);
                      fVar23 = fVar24 * (float)((ulonglong)*(undefined8 *)local_18 >> 0x20) +
                               fVar3 * (float)((ulonglong)*(undefined8 *)(local_18 + 4) >> 0x20) +
                               fVar4 * (float)((ulonglong)*(undefined8 *)(local_18 + 8) >> 0x20) +
                               (float)((ulonglong)*(undefined8 *)(local_18 + 0xc) >> 0x20);
                      fVar24 = fVar24 * (float)*(undefined8 *)(local_18 + 2) +
                               fVar3 * (float)*(undefined8 *)(local_18 + 6) +
                               fVar4 * (float)*(undefined8 *)(local_18 + 10) +
                               (float)*(undefined8 *)(local_18 + 0xe);
                    }
                    *(ulonglong *)pfVar6 = CONCAT44(fVar23,fVar22);
                    pfVar6[2] = fVar24;
                    local_20 = pfVar6;
                  }
                  else if (m3dSimdType == 1) {
                    FastExitMediaState();
                    uVar14 = (undefined4)*(undefined8 *)pfVar1;
                    uVar17 = CONCAT44(uVar14,uVar14);
                    uVar14 = (undefined4)((ulonglong)*(undefined8 *)pfVar1 >> 0x20);
                    uVar20 = CONCAT44(uVar14,uVar14);
                    uVar21 = CONCAT44(pfVar1[2],pfVar1[2]);
                    uVar15 = PackedFloatingMUL(uVar17,*(undefined8 *)local_18);
                    uVar16 = PackedFloatingMUL(uVar20,*(undefined8 *)(local_18 + 4));
                    uVar18 = PackedFloatingMUL(uVar21,*(undefined8 *)(local_18 + 8));
                    uVar15 = PackedFloatingADD(uVar15,*(undefined8 *)(local_18 + 0xc));
                    uVar19 = PackedFloatingMUL(uVar17,*(undefined8 *)(local_18 + 2));
                    uVar17 = PackedFloatingADD(uVar16,uVar18);
                    uVar16 = PackedFloatingMUL(uVar20,*(undefined8 *)(local_18 + 6));
                    uVar21 = PackedFloatingMUL(uVar21,*(undefined8 *)(local_18 + 10));
                    uVar20 = PackedFloatingADD(uVar19,*(undefined8 *)(local_18 + 0xe));
                    uVar17 = PackedFloatingADD(uVar15,uVar17);
                    uVar15 = PackedFloatingADD(uVar16,uVar21);
                    *(undefined8 *)pfVar6 = uVar17;
                    uVar17 = PackedFloatingADD(uVar20,uVar15);
                    pfVar6[2] = (float)uVar17;
                    FastExitMediaState();
                    local_20 = pfVar6;
                  }
                  else {
                    iVar12 = 0;
                    iVar11 = (int)local_18 - (int)pfVar6;
                    local_20 = pfVar6;
                    do {
                      *pfVar6 = 0.0;
                      iVar9 = 0;
                      pfVar10 = (float *)(iVar11 + (int)pfVar6);
                      do {
                        pfVar2 = pfVar1 + iVar9;
                        fVar24 = *pfVar10;
                        iVar9 = iVar9 + 1;
                        pfVar10 = pfVar10 + 4;
                        *pfVar6 = *pfVar2 * fVar24 + *pfVar6;
                      } while (iVar9 < 3);
                      iVar9 = iVar12 + iVar9 * 4;
                      iVar12 = iVar12 + 1;
                      *pfVar6 = local_18[iVar9] + *pfVar6;
                      pfVar6 = pfVar6 + 1;
                    } while (iVar12 < 3);
                  }
                  local_c = local_c + 1;
                  pfVar6 = local_20 + 3;
                  local_20 = pfVar6;
                } while (local_c < 3);
              }
              else {
                iVar11 = 0;
                pfVar6 = local_1fc;
                do {
                  piVar5 = *(int **)(local_8 + 0x28);
                  iVar12 = iVar11 * 2;
                  iVar11 = iVar11 + 1;
                  pfVar1 = (float *)(piVar5[0x10] +
                                    (uint)*(ushort *)
                                           ((uint)*(byte *)(piVar5 + 1) * local_10 + 2 + iVar12 +
                                           *piVar5) * 0xc);
                  *pfVar6 = *pfVar1;
                  pfVar6[1] = pfVar1[1];
                  pfVar6[2] = pfVar1[2];
                  pfVar6 = pfVar6 + 3;
                } while (iVar11 < 3);
              }
              rendDRIVER::RenderPoly(rendDrv,param_1,(m3dPOLY *)&local_200,0,local_10c);
              local_10 = local_10 + 1;
            } while (local_10 < *(int *)(*(int *)local_14 + 0x10));
          }
        }
      }
      local_1c = local_1c + 1;
      pmVar13 = local_14 + 0x38;
      local_14 = pmVar13;
    } while (local_1c < param_5);
  }
  (**(code **)(*(int *)rendDrv + 0x34))();
  return;
}




/* from: gs:mirror.cpp
   addr: 0050A530 */

void __thiscall
mrrMIRROR_SYSTEM::RenderMirrorObjects
          (mrrMIRROR_SYSTEM *this,camCAMERA *param_1,apSTATE *param_2,int param_3,int param_4,
          int param_5,int param_6)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  mrrMIRROR_SYSTEM *unaff_EBX;
  uint unaff_EBP;
  uint uVar4;
  mrrMIRROR_SYSTEM *pmVar5;
  uint unaff_retaddr;
  objAPPLY_COLOR oVar6;
  undefined4 uVar7;
  int iStack_30;
  uint local_2c;
  mrrMIRROR_SYSTEM *local_28;
  uint uStack_24;
  undefined4 uStack_20;
  uint uStack_1c;
  undefined4 uStack_18;
  uint uStack_14;
  undefined4 uStack_10;
  apSTATE *paStack_8;
  int iStack_4;
  
  uVar4 = *(uint *)(*(int *)(vidDriver + 0x210) + 0x14) & 0x800;
  if ((*(uint *)(rendDrv + 4) & 0x400) == 0) {
    uVar7 = 0x3d4ccccd;
  }
  else {
    uVar7 = 0x3ecccccd;
  }
  local_2c = uVar4;
  local_28 = this;
  (**(code **)(*(int *)rendDrv + 0x30))(param_1,uVar7,0x44a28000);
  paStack_8 = (apSTATE *)0x0;
  if (0 < *(int *)(this + 0x28)) {
    pmVar5 = this + 0x30;
    do {
      if ((((iStack_4 == 0) || ((*(uint *)(iStack_4 + (int)paStack_8 * 4) & unaff_retaddr) != 0)) &&
          ((param_2 == (apSTATE *)0xffffffff || (paStack_8 == param_2)))) &&
         ((param_3 == -1 || (paStack_8 != (apSTATE *)param_3)))) {
        oVar6 = 0;
        if (param_1 == (camCAMERA *)0x0) {
          uVar4 = 0xffffffff;
        }
        else {
          uVar4 = ftol();
          iVar1 = ftol();
          uVar2 = ftol();
          uVar3 = ftol();
          uVar4 = ((uVar4 & 0xff | iVar1 << 8) << 8 | uVar2 & 0xff) << 8 | uVar3 & 0xff;
        }
        objOBJ::SetConstColor(*(objOBJ **)pmVar5,uVar4,oVar6);
        iVar1 = *(int *)(*(int *)pmVar5 + 0x28);
        uVar4 = *(uint *)(iVar1 + 0x5e);
        if (((*(byte *)(*(int *)pmVar5 + 0x24) & 0x40) != 0) && (uVar4 >> 0x18 != 0xff)) {
          local_28 = (mrrMIRROR_SYSTEM *)0x0;
          uStack_20 = 0;
          uStack_24 = uVar4 >> 0x10 & 0xff;
          local_2c = uVar4 >> 0x18;
          uVar2 = ftol();
          uStack_18 = 0;
          uStack_1c = uVar4 >> 8 & 0xff;
          uVar3 = ftol();
          uStack_14 = uVar4 & 0xff;
          uStack_10 = 0;
          uVar4 = ftol();
          uVar4 = ((uVar2 | 0xffffff00) << 8 | uVar3 & 0xff) << 8 | uVar4 & 0xff;
        }
        *(uint *)(iVar1 + 0x62) = uVar4;
        rendDRIVER::RenderObj(rendDrv,*(objOBJ **)pmVar5,0,&iStack_30);
        rendDRIVER::RenderObj(rendDrv,*(objOBJ **)pmVar5,0);
        uVar4 = unaff_EBP;
        this = unaff_EBX;
      }
      paStack_8 = paStack_8 + 1;
      pmVar5 = pmVar5 + 0x38;
    } while ((int)paStack_8 < *(int *)(this + 0x28));
  }
  (**(code **)(*(int *)rendDrv + 0x34))();
  vidDRIVER::ToggleModeParam(vidDriver,0x800,uVar4);
  return;
}




/* from: gs:mirror.cpp
   addr: 0050A750 */

int __cdecl _mrrCmpMirror(void *param_1,void *param_2)

{
  objOBJ *poVar1;
  m3dV local_30 [12];
  m3dV local_24 [12];
  m3dV local_18 [8];
  float local_10;
  m3dV local_c [8];
  float local_4;
  
  if (*(int *)((int)param_2 + 0x18) < *(int *)((int)param_1 + 0x18)) {
    return 1;
  }
  if (*(int *)((int)param_2 + 0x18) <= *(int *)((int)param_1 + 0x18)) {
    poVar1 = *(objOBJ **)((int)param_1 + 4);
    if (*(int *)(poVar1 + 0xbc) == 0) {
      (**(code **)(*(int *)(poVar1 + 0xc0) + 0x24))();
    }
    else {
      objOBJ::GetOrigin(poVar1,local_30);
    }
    poVar1 = *(objOBJ **)((int)param_2 + 4);
    if (*(int *)(poVar1 + 0xbc) == 0) {
      (**(code **)(*(int *)(poVar1 + 0xc0) + 0x24))();
    }
    else {
      objOBJ::GetOrigin(poVar1,local_24);
    }
    camCAMERA::TransformPoint(DAT_0094de60,local_30,local_18);
    camCAMERA::TransformPoint(DAT_0094de60,local_24,local_c);
    if (local_10 < local_4) {
      return 1;
    }
  }
  return -1;
}

