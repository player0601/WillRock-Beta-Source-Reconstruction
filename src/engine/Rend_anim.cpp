
/* from: engine:Rend_anim.cpp
   addr: 0057FEE0 */

void __thiscall rendDRIVER::RenderInst(rendDRIVER *this,animINST *param_1,int param_2)

{
  animINST *this_00;
  int iVar1;
  int iVar2;
  
  iVar2 = param_2;
  this_00 = param_1;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0x7fffffff;
  if (((byte)this[4] & 8) != 0) {
    animINST::Invalidate(param_1,param_2);
  }
  iVar1 = QualInst(this,this_00,(int *)&param_1);
  if (iVar1 == 0) {
    if (*(int *)(this_00 + 0x10) != 0) {
      rnsMNG::UnLinkInst((rnsMNG *)(this + 0x8c),this_00);
      return;
    }
  }
  else {
    if (((byte)this[4] & 8) == 0) {
      animINST::Invalidate(this_00,iVar2);
    }
    animINST::LODApply(this_00,*(camCAMERA **)(this + 0x84));
    rnsMNG::LinkInst((rnsMNG *)(this + 0x8c),this_00);
    animINST::Validate(this_00,iVar2 + 0x621c);
    if (((byte)this[4] & 0x40) != 0) {
      animINST::Validate(this_00,1);
    }
    *(uint *)(this + 4) = *(uint *)(this + 4) & 0xfffffdff;
    if (pteManager != (pteMANAGER *)0x0) {
      iVar2 = pteMANAGER::IsShadeInst(pteManager,this_00);
      if (iVar2 != 0) {
        *(uint *)(this + 4) = *(uint *)(this + 4) | 0x200;
      }
    }
    RenderObjListAnim(this,*(int *)(this_00 + 0x128),*(objOBJ ***)(this_00 + 300),(int)param_1);
    *(uint *)(this_00 + 4) = *(uint *)(this_00 + 4) | 0x80000000;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:Rend_anim.cpp
   addr: 0057FFD0 */

int __thiscall rendDRIVER::QualInst(rendDRIVER *this,animINST *param_1,int *param_2)

{
  uint uVar1;
  m3dBOX *pmVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  m3dV amStack_28 [8];
  float fStack_20;
  m3dSPHERE amStack_1c [4];
  undefined **local_18;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  float fStack_8;
  
  local_14 = 3;
  local_18 = &m3dSPHERE::_vftable_;
  iVar4 = (**(code **)(*(int *)this + 0x1c))(param_1);
  if (((iVar4 == 0) && (*(int *)(param_1 + 0x10) != 0)) &&
     (uVar1 = *(uint *)(param_1 + 4), (uVar1 & 3) == 0)) {
    if ((*(uint *)(this + 4) & 8) == 0) {
      uVar3 = uVar1 & 0x100000;
    }
    else {
      uVar3 = uVar1 & 0x80000;
    }
    if (uVar3 == 0) {
      if ((*(uint *)(this + 4) & 0x100) == 0) {
        if ((uVar1 & 0x40000000) != 0) {
          return 0;
        }
      }
      else if ((uVar1 & 0x40000000) == 0) {
        return 0;
      }
      animINST::Validate(param_1,0x8100);
      iVar4 = *(int *)(param_1 + 0x100);
      if ((*(uint *)(param_1 + 4) & 0x40000) == 0) {
        pmVar2 = *(m3dBOX **)(*(int *)(iVar4 + 8) + 4);
        iVar5 = iVar4;
        switch(*(undefined4 *)(pmVar2 + 4)) {
        case 1:
          iVar5 = camCAMERA::QualBoxPOV(*(camCAMERA **)(this + 0x84),pmVar2);
          (**(code **)(*(int *)pmVar2 + 0x1c))(amStack_1c);
          break;
        case 2:
          iVar5 = camCAMERA::QualPrismPOV(*(camCAMERA **)(this + 0x84),(m3dPRISM *)pmVar2);
          (**(code **)(*(int *)pmVar2 + 0x1c))(amStack_1c);
          break;
        case 3:
          local_18 = *(undefined ***)(pmVar2 + 4);
          local_14 = *(undefined4 *)(pmVar2 + 8);
          uStack_10 = *(undefined4 *)(pmVar2 + 0xc);
          uStack_c = *(undefined4 *)(pmVar2 + 0x10);
          fStack_8 = *(float *)(pmVar2 + 0x14);
          iVar5 = camCAMERA::QualSpherePOV(*(camCAMERA **)(this + 0x84),amStack_1c);
          break;
        case 4:
          iVar5 = camCAMERA::QualOBBPOV(*(camCAMERA **)(this + 0x84),(m3dOBB *)pmVar2);
          (**(code **)(*(int *)pmVar2 + 0x1c))(amStack_1c);
        }
        if (iVar5 == 1) {
          return 0;
        }
      }
      else {
        iVar5 = 0;
      }
      if (((((byte)this[4] & 0x10) == 0) || ((*(uint *)(param_1 + 4) & 0x40000) != 0)) ||
         ((iVar4 = (**(code **)(**(int **)(*(int *)(iVar4 + 8) + 4) + 0x30))(this + 0xc,this + 0x18)
          , iVar4 != 1 && (iVar4 != 0)))) {
        if (((*(uint *)(param_1 + 4) & 0x40000) == 0) &&
           (camCAMERA::TransformPoint
                      (*(camCAMERA **)(this + 0x84),(m3dV *)&stack0xffffffcc,amStack_28),
           ___real_3f800000 < fStack_20)) {
          iVar4 = *(int *)(this + 0x84);
          fStack_8 = (*(float *)(iVar4 + 0x80) / fStack_20) * fStack_8;
          if ((ABS(fStack_8) < ___real_43480000) &&
             (ABS(((fStack_8 - *(float *)(iVar4 + 300)) * *(float *)(iVar4 + 0x158) +
                  *(float *)(iVar4 + 0x13c)) -
                  (-*(float *)(iVar4 + 300) * *(float *)(iVar4 + 0x158) + *(float *)(iVar4 + 0x13c))
                 ) < ___real_40000000)) {
            return 0;
          }
        }
        *(int *)param_1 = iVar5;
        return 1;
      }
    }
  }
  return 0;
}




/* from: engine:Rend_anim.cpp
   addr: 00580250 */

void __thiscall
rendDRIVER::RenderObjListAnim(rendDRIVER *this,int param_1,objOBJ **param_2,int param_3)

{
  objOBJ *poVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int local_28;
  
  local_28 = 0;
  if (0 < param_1) {
    do {
      poVar1 = param_2[local_28];
      if (((poVar1 != (objOBJ *)0x0) && (*(int *)(poVar1 + 0x10) != 0)) &&
         (*(int *)(poVar1 + 0x28) != 0)) {
        uVar3 = *(uint *)(poVar1 + 8);
        *(uint *)(poVar1 + 8) = uVar3 | 0x100000;
        if ((uVar3 & 0x3f) == 0) {
          if (((byte)this[4] & 8) == 0) {
            uVar3 = uVar3 & 0x200;
          }
          else {
            uVar3 = uVar3 & 0x100;
          }
          if ((uVar3 == 0) && (iVar2 = (**(code **)(*(int *)this + 0x18))(poVar1), iVar2 == 0)) {
            *(uint *)(poVar1 + 8) = *(uint *)(poVar1 + 8) & 0xffefffff;
            *(uint *)poVar1 = *(uint *)poVar1 & 0xfffffffd;
            if ((pteManager != (pteMANAGER *)0x0) && ((*(uint *)(this + 4) & 0x200) != 0)) {
              pteMANAGER::PrepareObj(pteManager,poVar1);
            }
            if ((((byte)this[4] & 0x20) != 0) && (((byte)*poVar1 & 2) != 0)) {
              SetPOVClipFlags(this,poVar1,param_3);
            }
            if ((*(uint *)(poVar1 + 8) & 0x80000) == 0) {
              iVar2 = *(int *)(poVar1 + 0x28);
              uVar3 = *(uint *)(iVar2 + 0x5e);
              if ((((byte)poVar1[0x24] & 0x40) != 0) && (uVar3 >> 0x18 != 0xff)) {
                uVar3 = ftol();
                uVar4 = ftol();
                uVar5 = ftol();
                uVar3 = ((uVar3 | 0xffffff00) << 8 | uVar4 & 0xff) << 8 | uVar5 & 0xff;
              }
              *(uint *)(iVar2 + 0x62) = uVar3;
              rnsMNG::StoreObj((rnsMNG *)(this + 0x8c),poVar1);
            }
          }
        }
      }
      local_28 = local_28 + 1;
    } while (local_28 < param_1);
  }
  return;
}

