
/* from: gs:phys_rigid_explos.cpp
   addr: 00501120 */

void __thiscall rgdRIGID_START::StartExplos(rgdRIGID_START *this,entENTITY *param_1)

{
  if (*(animINST **)(param_1 + 0xbc) != (animINST *)0x0) {
    pshSHADOW_SYSTEM::TermInst(gsSysProjShd,*(animINST **)(param_1 + 0xbc));
    animINST::Validate(*(animINST **)(param_1 + 0xbc),0x206);
    (*(code *)**(undefined4 **)this)(*(undefined4 *)(*(int *)(param_1 + 0xbc) + 0x10));
    *(uint *)(*(int *)(param_1 + 0xbc) + 4) = *(uint *)(*(int *)(param_1 + 0xbc) + 4) | 0x11;
    msgSYSTEM::PostMsg(&msgSystem,(msgADDR *)param_1,2,(msgADDR *)0x0);
  }
  return;
}




/* from: gs:phys_rigid_explos.cpp
   addr: 00501190 */

rgdRIGID * __thiscall
rgdRIGID_START::CreatePiece(rgdRIGID_START *this,objOBJ *param_1,rgdINIT_PARAMS *param_2)

{
  animINST *paVar1;
  char *pcVar2;
  entENTITY *peVar3;
  
  if (0 < *(int *)(param_1 + 0x10)) {
    paVar1 = scnSCENE::CreateInst(gsScenePtr,param_1,(animCREATE_DATA *)0x0);
    if (paVar1 != (animINST *)0x0) {
      pcVar2 = (char *)(**(code **)(*(int *)this + 0x10))(param_1);
      peVar3 = entCreate(pcVar2,paVar1,param_1,0);
      if (peVar3 != (entENTITY *)0x0) {
        *(uint *)(*(int *)(peVar3 + 0xbc) + 4) = *(uint *)(*(int *)(peVar3 + 0xbc) + 4) | 0x10;
        return (rgdRIGID *)peVar3;
      }
    }
  }
  return (rgdRIGID *)0x0;
}




/* from: gs:phys_rigid_explos.cpp
   addr: 005011F0 */

void __thiscall rgdRIGID_START::StartExplos(rgdRIGID_START *this,objOBJ *param_1)

{
  int iVar1;
  objOBJ_ITER_SAFE local_208 [512];
  int local_8;
  int local_4;
  
  objOBJ_ITER_SAFE::objOBJ_ITER_SAFE(local_208,param_1);
  local_4 = 0;
  if (0 < local_8) {
    do {
      (*(code *)**(undefined4 **)this)(*(undefined4 *)(local_208 + local_4 * 4));
      local_4 = local_4 + 1;
    } while (local_4 < local_8);
  }
  iVar1 = (**(code **)(*(int *)this + 0xc))(param_1);
  if (iVar1 != 0) {
    (**(code **)(*(int *)this + 8))(param_1,0);
    return;
  }
  (**(code **)(*(int *)gsSysLevel + 0x30))(param_1);
  if (param_1 != (objOBJ *)0x0) {
    objOBJ::~objOBJ(param_1);
    operator_delete(param_1);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:phys_rigid_explos.cpp
   addr: 00501290 */

int __thiscall rgdRIGID_START::IsInclObj(rgdRIGID_START *this,objOBJ *param_1)

{
  undefined **local_20;
  undefined4 local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_1c = 1;
  local_20 = &m3dBOX::_vftable_;
  if ((*(int *)(param_1 + 0x10) != 0) && (((byte)param_1[8] & 0x3f) == 0)) {
    m3dBOX::Calc((m3dBOX *)&local_20,*(m3dV **)(*(int *)(param_1 + 0x28) + 0x40),
                 *(int *)(param_1 + 0x14),0.0);
    local_8 = local_8 - local_14;
    local_4 = local_4 - local_10;
    if ((local_c - local_18 < ___real_3dcccccd) &&
       (((local_8 < ___real_3dcccccd && (local_4 < ___real_3e99999a)) ||
        ((local_8 < ___real_3e99999a && (local_4 < ___real_3dcccccd)))))) {
      return 0;
    }
    if (((___real_3e99999a <= local_c - local_18) || (___real_3dcccccd <= local_8)) ||
       (___real_3dcccccd <= local_4)) {
      return 1;
    }
  }
  return 0;
}




/* from: gs:phys_rigid_explos.cpp
   addr: 00501390 */

void __thiscall
rgdSHATTER_RIGID_START::StartExplos
          (rgdSHATTER_RIGID_START *this,entENTITY *param_1,int param_2,float param_3,float param_4,
          int param_5,int param_6)

{
  int iVar1;
  objOBJ *this_00;
  objOBJ *poVar2;
  shtSHATTER *this_01;
  shtSHATTER *psVar3;
  msgADDR *pmVar4;
  int iVar5;
  msgADDR *unaff_retaddr;
  
  iVar5 = param_6;
  if (*(animINST **)(param_1 + 0xbc) != (animINST *)0x0) {
    if (param_6 == 0) {
      pshSHADOW_SYSTEM::TermInst(gsSysProjShd,*(animINST **)(param_1 + 0xbc));
    }
    *(float *)(this + 0x10) = param_3;
    *(float *)(this + 0x14) = param_4;
    animINST::LODSetTemp(*(animINST **)(param_1 + 0xbc),3,1);
    animINST::Validate(*(animINST **)(param_1 + 0xbc),0x206);
    (**(code **)(*(int *)(*(int *)(*(int *)(param_1 + 0xbc) + 0x10) + 0xc0) + 0x24))(this + 4);
    param_2 = 0;
    pmVar4 = (msgADDR *)param_1;
    if (0 < (int)param_4) {
      do {
        poVar2 = *(objOBJ **)(*(int *)(pmVar4 + 0xbc) + 0x10);
        if (((*(animINST **)(poVar2 + 0xbc) == (animINST *)0x0) ||
            (iVar1 = animINST::GetStr(*(animINST **)(poVar2 + 0xbc),s_RIGID,s_objShatter,
                                      &stack0xffffffbc,0x40), iVar1 == 0)) ||
           (this_00 = objFindName(*(objOBJ **)(*(int *)(poVar2 + 0xbc) + 0x10),&stack0xffffffbc),
           this_00 == (objOBJ *)0x0)) {
          param_3 = 0.0;
          poVar2 = rgdFindObjMaxNVert(poVar2,(int *)&param_3);
          this_00 = _rgdAscertainObjVisible(poVar2);
        }
        else {
          poVar2 = *(objOBJ **)(*(int *)(this_00 + 0xbc) + 0x10);
          if (((byte)this_00[8] & 1) != 0) {
            if (*(int *)(this_00 + 0x38) == 0) {
              this_00 = *(objOBJ **)(this_00 + 0x2c);
            }
            if ((this_00 == (objOBJ *)0x0) ||
               (this_00 = objOBJ::FindObjMaxNVert(this_00), this_00 == (objOBJ *)0x0)) {
              this_00 = objOBJ::FindObjMaxNVert(poVar2);
            }
            if (((byte)this_00[8] & 0x3f) != 0) {
              this_00 = objOBJ::FindObjMaxNVert(poVar2);
            }
          }
        }
        if (this_00 == (objOBJ *)0x0) break;
        if (iVar5 != 0) {
          *(uint *)(this_00 + 8) = *(uint *)(this_00 + 8) | 8;
          this_00 = objOBJ::Duplicate(this_00,(objOBJ *)0x0);
          *(undefined2 *)(this_00 + 0x1c) = 0xffff;
          objOBJ::Attach(this_00,*(objOBJ **)(*(int *)(pmVar4 + 0xbc) + 0x10));
        }
        this_01 = (shtSHATTER *)(**(code **)(*(int *)this + 0x14))();
        shtSHATTER::Start(this_01,this_00,(int)param_1);
        iVar5 = 0;
        if (0 < *(int *)(this_01 + 0x9a4)) {
          psVar3 = this_01 + 0x44;
          do {
            (**(code **)(*(int *)this + 0x1c))(*(undefined4 *)psVar3);
            iVar5 = iVar5 + 1;
            psVar3 = psVar3 + 8;
            pmVar4 = unaff_retaddr;
          } while (iVar5 < *(int *)(this_01 + 0x9a4));
        }
        param_2 = param_2 + 1;
        iVar5 = param_5;
      } while (param_2 < (int)param_4);
    }
    CreateOtherObjPieces(this,*(objOBJ **)(*(int *)(pmVar4 + 0xbc) + 0x10),iVar5);
    if (iVar5 != 0) {
      animINST::LODRestore(*(animINST **)(pmVar4 + 0xbc));
      return;
    }
    *(uint *)(*(int *)(pmVar4 + 0xbc) + 4) = *(uint *)(*(int *)(pmVar4 + 0xbc) + 4) | 0x11;
    msgSYSTEM::PostMsg(&msgSystem,pmVar4,2,(msgADDR *)0x0);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:phys_rigid_explos.cpp
   addr: 005015A0 */

rgdRIGID * __thiscall
rgdSHATTER_RIGID_START::CreatePiece(rgdSHATTER_RIGID_START *this,objOBJ *param_1)

{
  float fVar1;
  float fVar2;
  animINST *paVar3;
  char *pcVar4;
  entENTITY *peVar5;
  float fStack_c8;
  undefined1 local_c4 [4];
  float afStack_c0 [2];
  undefined1 local_b8;
  undefined1 local_b7;
  undefined2 local_b6;
  float local_b4;
  float local_b0;
  float local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_ac = (float)DAT_00963740;
  local_a0 = DAT_00963740;
  local_a8 = DAT_00963744;
  local_9c = DAT_00963744;
  local_b0 = (float)_m3dVZero;
  local_a4 = _m3dVZero;
  local_b8 = 0;
  local_b7 = 0x40;
  local_b4 = 1.12104e-44;
  local_20 = 0;
  local_1c = 0x3f19999a;
  local_18 = 0x3f4ccccd;
  local_14 = 0x41200000;
  local_10 = 0x3e99999a;
  local_c = 0xbf800000;
  local_8 = 0xbf800000;
  local_4 = 0xbf800000;
  local_b6 = 0xb8;
  (**(code **)(*(int *)(param_1 + 0xc0) + 0x24))(local_c4);
  fVar1 = *(float *)(this + 4);
  fVar2 = *(float *)(this + 0xc);
  m3dNormalize((m3dV *)&stack0xffffff2c);
  local_b4 = (fStack_c8 - fVar1) * ___real_3f333333;
  local_b0 = ___real_3f333333 * 0.0;
  local_10 = *(undefined4 *)(this + 0x10);
  local_ac = (afStack_c0[0] - fVar2) * ___real_3f333333;
  local_8 = *(undefined4 *)(this + 0x14);
  if (0 < *(int *)(param_1 + 0x10)) {
    paVar3 = scnSCENE::CreateInst(gsScenePtr,param_1,(animCREATE_DATA *)0x0);
    if (paVar3 != (animINST *)0x0) {
      pcVar4 = (char *)(**(code **)(*(int *)this + 0x10))(param_1);
      peVar5 = entCreate(pcVar4,paVar3,afStack_c0,0);
      if (peVar5 != (entENTITY *)0x0) {
        *(uint *)(*(int *)(peVar5 + 0xbc) + 4) = *(uint *)(*(int *)(peVar5 + 0xbc) + 4) | 0x10;
        return (rgdRIGID *)peVar5;
      }
    }
  }
  return (rgdRIGID *)0x0;
}




/* from: gs:phys_rigid_explos.cpp
   addr: 00501740 */

void __thiscall
rgdSHATTER_RIGID_START::CreateOtherObjPieces
          (rgdSHATTER_RIGID_START *this,objOBJ *param_1,int param_2)

{
  objOBJ *this_00;
  objOBJ_ITER_SAFE local_208 [512];
  int local_8;
  int local_4;
  
  objOBJ_ITER_SAFE::objOBJ_ITER_SAFE(local_208,param_1);
  if (param_1 != (objOBJ *)0x0) {
    local_4 = 0;
    if (0 < local_8) {
      do {
        CreateOtherObjPieces(this,*(objOBJ **)(local_208 + local_4 * 4),param_2);
        local_4 = local_4 + 1;
      } while (local_4 < local_8);
    }
    if (0 < *(int *)(param_1 + 0x10)) {
      if (param_2 == 0) {
        if (((byte)param_1[8] & 0x3f) == 0) {
          (**(code **)(*(int *)this + 0x1c))();
          return;
        }
        (**(code **)(*(int *)gsSysLevel + 0x30))(param_1);
        objOBJ::~objOBJ(param_1);
        operator_delete(param_1);
      }
      else if (((byte)param_1[8] & 0x3f) == 0) {
        this_00 = objOBJ::Duplicate(param_1,1);
        *(undefined2 *)(this_00 + 0x1c) = 0xffff;
        objOBJ::Attach(this_00,*(objOBJ **)(*(int *)(this_00 + 0xbc) + 0x10));
        (**(code **)(*(int *)this + 0x1c))(this_00);
        return;
      }
    }
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:phys_rigid_explos.cpp
   addr: 00501830 */

shtSHATTER * __thiscall rgdSHATTER_RIGID_START::GetShatter(rgdSHATTER_RIGID_START *this)

{
  int iVar1;
  undefined4 *puVar2;
  
  if ((DAT_009483bc & 1) == 0) {
    DAT_009483bc = DAT_009483bc | 1;
    cgmWED_SYS::cgmWED_SYS((cgmWED_SYS *)&DAT_009483c4);
    _DAT_009483c4 = &cgmWED_3D::_vftable_;
    puVar2 = &DAT_00948d74;
    iVar1 = 100;
    do {
      puVar2[-2] = 0;
      puVar2[-1] = 0;
      *puVar2 = 0xffffffff;
      puVar2[1] = 0;
      puVar2[2] = 0xffffffff;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2[5] = 0;
      puVar2[6] = 0;
      puVar2[7] = 0xffffffff;
      puVar2[8] = 0;
      puVar2[9] = 0xffffffff;
      puVar2[10] = 0;
      puVar2[0xb] = 0;
      _vector_constructor_iterator_(puVar2 + 0xc,0x1c,3,dsDYN_ARRAY::dsDYN_ARRAY);
      puVar2[0x21] = 0;
      puVar2[0x22] = 0;
      puVar2[0x23] = 0xffffffff;
      puVar2[0x24] = 0;
      puVar2[0x25] = 0xffffffff;
      puVar2[0x26] = 0;
      puVar2[0x27] = 0;
      puVar2 = puVar2 + 0x30;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    _DAT_009483c0 = &rgdSHATTER::_vftable_;
    atexit((_func_4879 *)&__E13);
  }
  return (shtSHATTER *)&DAT_009483c0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:phys_rigid_explos.cpp
   addr: 00501970 */

int __thiscall rgdSHATTER::DisqualifyShard(rgdSHATTER *this,objOBJ *param_1)

{
  if (*(int *)(param_1 + 0x10) < 10) {
    return 1;
  }
  objCalcBBox(param_1);
  if (((___real_3e4ccccd <= *(float *)(param_1 + 0xd4) - *(float *)(param_1 + 200)) ||
      ((___real_3e4ccccd <= *(float *)(param_1 + 0xd8) - *(float *)(param_1 + 0xcc) &&
       (___real_3e4ccccd <= *(float *)(param_1 + 0xdc) - *(float *)(param_1 + 0xd0))))) &&
     ((___real_3e4ccccd <= *(float *)(param_1 + 0xd8) - *(float *)(param_1 + 0xcc) ||
      (___real_3e4ccccd <= *(float *)(param_1 + 0xdc) - *(float *)(param_1 + 0xd0))))) {
    return 0;
  }
  return 1;
}




/* from: gs:phys_rigid_explos.cpp
   addr: 00501A30 */

objOBJ * __fastcall _rgdAscertainObjVisible(objOBJ *param_1)

{
  objOBJ *poVar1;
  
  poVar1 = *(objOBJ **)(*(int *)(param_1 + 0xbc) + 0x10);
  if (((byte)param_1[8] & 1) != 0) {
    if (*(int *)(param_1 + 0x38) == 0) {
      param_1 = *(objOBJ **)(param_1 + 0x2c);
    }
    if ((param_1 == (objOBJ *)0x0) ||
       (param_1 = objOBJ::FindObjMaxNVert(param_1), param_1 == (objOBJ *)0x0)) {
      param_1 = objOBJ::FindObjMaxNVert(poVar1);
    }
    if (((byte)param_1[8] & 0x3f) != 0) {
      poVar1 = objOBJ::FindObjMaxNVert(poVar1);
      return poVar1;
    }
  }
  return param_1;
}




/* from: gs:phys_rigid_explos.cpp
   addr: 00501A80 */

objOBJ * __fastcall rgdFindObjMaxNVert(objOBJ *param_1,int *param_2)

{
  objOBJ *poVar1;
  bool bVar2;
  objOBJ *poVar3;
  objOBJ *poVar4;
  objOBJ *poVar5;
  
  if (param_1 != (objOBJ *)0x0) {
    poVar1 = *(objOBJ **)(param_1 + 0x38);
    bVar2 = false;
    poVar4 = (objOBJ *)0x0;
    poVar5 = poVar1;
    if ((((byte)param_1[8] & 0x3e) == 0) && (*param_2 < *(int *)(param_1 + 0x14))) {
      *param_2 = *(int *)(param_1 + 0x14);
      poVar4 = param_1;
    }
    for (; (poVar1 != (objOBJ *)0x0 && ((!bVar2 || (poVar5 != poVar1))));
        poVar5 = *(objOBJ **)(poVar5 + 0x30)) {
      poVar3 = rgdFindObjMaxNVert(poVar5,param_2);
      if (poVar3 != (objOBJ *)0x0) {
        poVar4 = poVar3;
      }
      bVar2 = true;
    }
    return poVar4;
  }
  return (objOBJ *)0x0;
}

