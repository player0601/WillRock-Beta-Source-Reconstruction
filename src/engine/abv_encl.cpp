
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:abv_encl.cpp
   addr: 004E5210 */

int __thiscall animINST::AbvCalcBVolEnclos(animINST *this,int param_1,int param_2,float param_3)

{
  m3dMATR *this_00;
  int *piVar1;
  abvBVOL *paVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  abvBVOL *paVar6;
  animINST *paVar7;
  m3dMATR *pmVar8;
  abvBVOL *paVar9;
  undefined4 *puVar10;
  objOBJ *poVar11;
  undefined4 *puVar12;
  int *local_154;
  int iStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined **local_140;
  undefined4 local_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  float fStack_128;
  undefined **local_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  int local_104;
  m3dMATR amStack_100 [64];
  undefined4 auStack_c0 [16];
  char acStack_80 [64];
  m3dMATR amStack_40 [64];
  
  local_124 = &m3dBOX::_vftable_;
  local_120 = 1;
  local_13c = 3;
  local_140 = &m3dSPHERE::_vftable_;
  if (*(int *)(this + 0x10) != 0) {
    AbvTermBVolEnclos(this);
    if (*(undefined4 **)(this + 0xfc) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(this + 0xfc))(3);
      *(undefined4 *)(this + 0xfc) = 0;
    }
    if (param_3 < ___real_00000000) {
      param_3 = 0.1;
    }
    iVar3 = *(int *)(*(int *)(this + 0x138) + 0x90);
    local_104 = *(int *)(this + 0xe0);
    if (local_104 == -1) {
      fStack_128 = 0.0;
    }
    else {
      fStack_128 = animSEQ::FrameToTime
                             ((animSEQ *)(iVar3 + local_104 * 0x88),*(float *)(this + 0xe4));
    }
    GetPos(this,(m3dV *)&uStack_14c);
    if (((byte)this[4] & 0x40) != 0) {
      Validate(this,2);
      (**(code **)(*(int *)(*(int *)(this + 0x10) + 0xc0) + 0x24))(&uStack_14c);
    }
    if ((((byte)this[4] & 0x40) == 0) && (param_1 == 4)) {
      paVar7 = this + 0x60;
      pmVar8 = amStack_40;
      for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(undefined4 *)pmVar8 = *(undefined4 *)paVar7;
        paVar7 = paVar7 + 4;
        pmVar8 = pmVar8 + 4;
      }
      m3dMATR::Identity(amStack_100);
      Transform(this,amStack_100,0);
    }
    if (((((byte)this[4] & 0x40) == 0) && (*(int *)(this + 0x10) != 0)) &&
       (iVar4 = *(int *)(*(int *)(this + 0x10) + 0x38), iVar4 != 0)) {
      this_00 = (m3dMATR *)(iVar4 + 0x7c);
      pmVar8 = this_00;
      puVar10 = auStack_c0;
      for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar10 = *(undefined4 *)pmVar8;
        pmVar8 = pmVar8 + 4;
        puVar10 = puVar10 + 1;
      }
      m3dMATR::Identity(this_00);
      Invalidate(this,4);
    }
    Validate(this,0x40);
    poVar11 = (objOBJ *)0x0;
    iVar4 = GetStr(this,s_ANIM_PROP,s_cdtEnclosRootObj,acStack_80,0x40);
    if (((iVar4 == 0) ||
        (poVar11 = objFindName(*(objOBJ **)(this + 0x10),acStack_80), poVar11 == (objOBJ *)0x0)) &&
       ((*(int *)(this + 0x138) != 0 &&
        (iVar4 = *(int *)(*(int *)(this + 0x138) + 0x8c), iVar4 != 0)))) {
      piVar1 = (int *)operator_new(iVar4 * 0x24 + 4);
      if (piVar1 == (int *)0x0) {
        paVar9 = (abvBVOL *)0x0;
      }
      else {
        *piVar1 = iVar4;
        paVar9 = (abvBVOL *)(piVar1 + 1);
        paVar6 = paVar9;
        if (-1 < iVar4 + -1) {
          do {
            abvBVOL::abvBVOL(paVar6);
            iVar4 = iVar4 + -1;
            paVar6 = paVar6 + 0x24;
          } while (iVar4 != 0);
        }
      }
      *(abvBVOL **)(this + 0xfc) = paVar9;
      iVar4 = *(int *)(this + 0x138);
      if (*(int *)(iVar4 + 0xb8) == 0) {
        if (iVar4 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = *(int *)(iVar4 + 0x8c);
        }
        piVar1 = (int *)operator_new(iVar4 * 0x24 + 4);
        if (piVar1 == (int *)0x0) {
          paVar9 = (abvBVOL *)0x0;
        }
        else {
          *piVar1 = iVar4;
          paVar9 = (abvBVOL *)(piVar1 + 1);
          paVar6 = paVar9;
          if (-1 < iVar4 + -1) {
            do {
              abvBVOL::abvBVOL(paVar6);
              iVar4 = iVar4 + -1;
              paVar6 = paVar6 + 0x24;
            } while (iVar4 != 0);
          }
        }
        *(abvBVOL **)(*(int *)(this + 0x138) + 0xb8) = paVar9;
      }
      iVar4 = 0;
      local_154 = (int *)(iVar3 + 0x80);
      iStack_150 = 0;
      while( true ) {
        iVar3 = *(int *)(this + 0x138);
        if (iVar3 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(iVar3 + 0x8c);
        }
        if (iVar5 <= iStack_150) break;
        paVar9 = (abvBVOL *)(*(int *)(this + 0xfc) + iVar4);
        if (((param_2 & 2U) == 0) ||
           (paVar2 = (abvBVOL *)(*(int *)(iVar3 + 0xb8) + iVar4), paVar6 = paVar9,
           *(int *)(paVar2 + 8) == 0)) {
          abvBVOL::Alloc(paVar9,param_1);
          if (*local_154 == 2) {
            poVar11 = *(objOBJ **)(this + 0x10);
            local_120 = *(undefined4 *)(poVar11 + 0xc4);
            uStack_11c = *(undefined4 *)(poVar11 + 200);
            uStack_118 = *(undefined4 *)(poVar11 + 0xcc);
            uStack_114 = *(undefined4 *)(poVar11 + 0xd0);
            uStack_110 = *(undefined4 *)(poVar11 + 0xd4);
            uStack_10c = *(undefined4 *)(poVar11 + 0xd8);
            uStack_108 = *(undefined4 *)(poVar11 + 0xdc);
            uStack_138 = uStack_14c;
            uStack_130 = uStack_144;
            uStack_134 = uStack_148;
            uStack_12c = 0;
            objCalcBSphereCenter(poVar11,(m3dSPHERE *)&local_140);
            _animIncreaseBVolEnclos
                      (this,paVar9,param_1,(m3dV *)&uStack_14c,(m3dBOX *)&local_124,
                       (m3dSPHERE *)&local_140);
            abvBVOL::Calc(paVar9,this);
            iVar3 = *(int *)(*(int *)(this + 0x138) + 0xb8);
          }
          else {
            SetAnimSeq(this,iStack_150,0.0);
            m3dBOX::CalcStart((m3dBOX *)&local_124);
            uStack_138 = uStack_14c;
            uStack_134 = uStack_148;
            uStack_130 = uStack_144;
            uStack_12c = 0;
            do {
              Validate(this,2);
              m3dBOX::CalcUpdate((m3dBOX *)&local_124,(m3dBOX *)(*(int *)(this + 0x10) + 0xc0));
              objCalcBSphereCenter(*(objOBJ **)(this + 0x10),(m3dSPHERE *)&local_140);
              iVar3 = AdvanceTime(this,param_3,1,(float *)0x0);
            } while (iVar3 == 0);
            _animIncreaseBVolEnclos
                      (this,paVar9,param_1,(m3dV *)&uStack_14c,(m3dBOX *)&local_124,
                       (m3dSPHERE *)&local_140);
            abvBVOL::Calc(paVar9,this);
            iVar3 = *(int *)(*(int *)(this + 0x138) + 0xb8);
          }
          paVar6 = (abvBVOL *)(iVar3 + iVar4);
          paVar2 = paVar9;
        }
        abvBVOL::operator=(paVar6,paVar2);
        iStack_150 = iStack_150 + 1;
        local_154 = local_154 + 0x22;
        iVar4 = iVar4 + 0x24;
      }
    }
    else {
      paVar9 = (abvBVOL *)operator_new(0x24);
      if (paVar9 == (abvBVOL *)0x0) {
        paVar9 = (abvBVOL *)0x0;
      }
      else {
        paVar9 = (abvBVOL *)abvBVOL::abvBVOL(paVar9);
      }
      *(abvBVOL **)(this + 0x100) = paVar9;
      abvBVOL::Alloc(paVar9,param_1);
      *(uint *)(this + 8) = *(uint *)(this + 8) | 1;
      *(objOBJ **)(*(int *)(this + 0x100) + 4) = poVar11;
      Validate(this,2);
      poVar11 = *(objOBJ **)(this + 0x10);
      local_120 = *(undefined4 *)(poVar11 + 0xc4);
      uStack_11c = *(undefined4 *)(poVar11 + 200);
      uStack_118 = *(undefined4 *)(poVar11 + 0xcc);
      uStack_114 = *(undefined4 *)(poVar11 + 0xd0);
      uStack_110 = *(undefined4 *)(poVar11 + 0xd4);
      uStack_10c = *(undefined4 *)(poVar11 + 0xd8);
      uStack_108 = *(undefined4 *)(poVar11 + 0xdc);
      uStack_138 = uStack_14c;
      uStack_130 = uStack_144;
      uStack_134 = uStack_148;
      uStack_12c = 0;
      objCalcBSphereCenter(poVar11,(m3dSPHERE *)&local_140);
      _animIncreaseBVolEnclos
                (this,*(abvBVOL **)(this + 0x100),param_1,(m3dV *)&uStack_14c,(m3dBOX *)&local_124,
                 (m3dSPHERE *)&local_140);
      abvBVOL::Calc(*(abvBVOL **)(this + 0x100),this);
    }
    if ((*(int *)(this + 0x138) != 0) && (*(int *)(*(int *)(this + 0x138) + 0x8c) != 0)) {
      SetAnimSeq(this,local_104,fStack_128);
    }
    if (((byte)this[4] & 0x40) == 0) {
      if ((*(int *)(this + 0x10) != 0) &&
         (iVar3 = *(int *)(*(int *)(this + 0x10) + 0x38), iVar3 != 0)) {
        puVar10 = auStack_c0;
        puVar12 = (undefined4 *)(iVar3 + 0x7c);
        for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar12 = *puVar10;
          puVar10 = puVar10 + 1;
          puVar12 = puVar12 + 1;
        }
        Invalidate(this,4);
      }
      if ((((byte)this[4] & 0x40) == 0) && (param_1 == 4)) {
        Transform(this,amStack_40,0);
      }
    }
  }
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:abv_encl.cpp
   addr: 004E57C0 */

void __fastcall
_animIncreaseBVolEnclos
          (animINST *param_1,abvBVOL *param_2,int param_3,m3dV *param_4,m3dBOX *param_5,
          m3dSPHERE *param_6)

{
  m3dBOX *pmVar1;
  m3dBOX *pmVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  m3dV local_c [12];
  
  abvBVOL::GetOrg(param_2,param_1,local_c);
  iVar3 = *(int *)(*(int *)(param_2 + 8) + 4);
  if (*(int *)(iVar3 + 4) == 1) {
    if ((param_3 & 1U) != 0) {
      *(float *)(param_5 + 8) = *(float *)param_4 - *(float *)(param_6 + 0x14);
      *(float *)(param_5 + 0xc) = *(float *)(param_4 + 4) - *(float *)(param_6 + 0x14);
      *(float *)(param_5 + 0x10) = *(float *)(param_4 + 8) - *(float *)(param_6 + 0x14);
      *(float *)(param_5 + 0x14) = *(float *)(param_6 + 0x14) + *(float *)param_4;
      *(float *)(param_5 + 0x18) = *(float *)(param_6 + 0x14) + *(float *)(param_4 + 4);
      *(float *)(param_5 + 0x1c) = *(float *)(param_6 + 0x14) + *(float *)(param_4 + 8);
    }
    pmVar1 = param_5 + 0x14;
    pmVar2 = param_5 + 8;
    fVar4 = (*(float *)(param_5 + 0x14) - *(float *)(param_5 + 8)) * ___real_3d4ccccd;
    fVar5 = (*(float *)(param_5 + 0x18) - *(float *)(param_5 + 0xc)) * ___real_3d4ccccd;
    fVar6 = (*(float *)(param_5 + 0x1c) - *(float *)(param_5 + 0x10)) * ___real_3d4ccccd;
    *(float *)pmVar1 = fVar4 + *(float *)pmVar1;
    *(float *)(param_5 + 0x18) = fVar5 + *(float *)(param_5 + 0x18);
    *(float *)(param_5 + 0x1c) = fVar6 + *(float *)(param_5 + 0x1c);
    *(float *)pmVar2 = *(float *)pmVar2 - fVar4;
    *(float *)(param_5 + 0xc) = *(float *)(param_5 + 0xc) - fVar5;
    *(float *)(param_5 + 0x10) = *(float *)(param_5 + 0x10) - fVar6;
    iVar3 = *(int *)(*(int *)(param_2 + 8) + 4);
    *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(param_5 + 4);
    *(float *)(iVar3 + 8) = *(float *)pmVar2;
    *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(param_5 + 0xc);
    *(undefined4 *)(iVar3 + 0x10) = *(undefined4 *)(param_5 + 0x10);
    *(float *)(iVar3 + 0x14) = *(float *)pmVar1;
    *(undefined4 *)(iVar3 + 0x18) = *(undefined4 *)(param_5 + 0x18);
    *(undefined4 *)(iVar3 + 0x1c) = *(undefined4 *)(param_5 + 0x1c);
  }
  else if (*(int *)(iVar3 + 4) == 4) {
    pmVar1 = param_5 + 8;
    fVar4 = (*(float *)(param_5 + 0x14) - *(float *)(param_5 + 8)) * ___real_3d4ccccd;
    fVar5 = (*(float *)(param_5 + 0x18) - *(float *)(param_5 + 0xc)) * ___real_3d4ccccd;
    fVar6 = (*(float *)(param_5 + 0x1c) - *(float *)(param_5 + 0x10)) * ___real_3d4ccccd;
    *(float *)(param_5 + 0x14) = fVar4 + *(float *)(param_5 + 0x14);
    *(float *)(param_5 + 0x18) = fVar5 + *(float *)(param_5 + 0x18);
    *(float *)(param_5 + 0x1c) = fVar6 + *(float *)(param_5 + 0x1c);
    *(float *)pmVar1 = *(float *)pmVar1 - fVar4;
    *(float *)(param_5 + 0xc) = *(float *)(param_5 + 0xc) - fVar5;
    *(float *)(param_5 + 0x10) = *(float *)(param_5 + 0x10) - fVar6;
    *(float *)(iVar3 + 8) = *(float *)pmVar1;
    *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(param_5 + 0xc);
    *(undefined4 *)(iVar3 + 0x10) = *(undefined4 *)(param_5 + 0x10);
    *(float *)(iVar3 + 0x14) = _m3dVZero;
    *(undefined4 *)(iVar3 + 0x18) = DAT_00963740;
    *(undefined4 *)(iVar3 + 0x1c) = DAT_00963744;
    *(float *)(iVar3 + 0x20) = _m3dVZero;
    *(undefined4 *)(iVar3 + 0x24) = DAT_00963740;
    *(undefined4 *)(iVar3 + 0x28) = DAT_00963744;
    *(float *)(iVar3 + 0x2c) = _m3dVZero;
    *(undefined4 *)(iVar3 + 0x30) = DAT_00963740;
    *(undefined4 *)(iVar3 + 0x34) = DAT_00963744;
    *(float *)(iVar3 + 0x14) = *(float *)(param_5 + 0x14) - *(float *)pmVar1;
    *(float *)(iVar3 + 0x24) = *(float *)(param_5 + 0x18) - *(float *)(param_5 + 0xc);
    *(float *)(iVar3 + 0x34) = *(float *)(param_5 + 0x1c) - *(float *)(param_5 + 0x10);
    return;
  }
  return;
}




/* from: engine:abv_encl.cpp
   addr: 004E5A00 */

int __thiscall animTPL::AbvCalcBVolEnclos(animTPL *this)

{
  bool bVar1;
  scnSCENE *psVar2;
  int iVar3;
  animINST *paVar4;
  
  if (*(int *)(this + 200) == 0) {
    psVar2 = (scnSCENE *)operator_new(0x8c);
    if (psVar2 == (scnSCENE *)0x0) {
      psVar2 = (scnSCENE *)0x0;
    }
    else {
      psVar2 = (scnSCENE *)scnSCENE::scnSCENE(psVar2);
    }
    *(scnSCENE **)(this + 200) = psVar2;
    if (psVar2 == (scnSCENE *)0x0) {
      return 0;
    }
    iVar3 = scnSCENE::ExpandV3DTmpList(psVar2,*(objOBJ **)(this + 0x88));
    if (iVar3 == 0) {
      return 0;
    }
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  paVar4 = scnSCENE::CreateInst(*(scnSCENE **)(this + 200),this,(animCREATE_DATA *)0x0,-1);
  scnSCENE::DestroyInst(*(scnSCENE **)(this + 200),paVar4);
  if (bVar1) {
    psVar2 = *(scnSCENE **)(this + 200);
    if (psVar2 != (scnSCENE *)0x0) {
      scnSCENE::~scnSCENE(psVar2);
      operator_delete(psVar2);
    }
    *(undefined4 *)(this + 200) = 0;
  }
  return 1;
}

