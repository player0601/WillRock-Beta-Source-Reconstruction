
/* from: gs_shared:water.cpp
   addr: 0052FED0 */

int __fastcall waterInit(void)

{
  int iVar1;
  
  iVar1 = entRegisterClass(s_water,0x24575452,0x2d,waterWATER::Create,(char *)0x0,1);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = entRegisterClass(s_lava,0x4c415641,0x2d,waterLAVA::Create,(char *)0x0,1);
  return (uint)(iVar1 != 0);
}




/* from: gs_shared:water.cpp
   addr: 0052FF10 */

int __fastcall waterIsUnderWater(m3dV *param_1,float param_2,float *param_3)

{
  waterWATER *this;
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_0095d6e8;
  do {
    this = (waterWATER *)*puVar2;
    if ((this != (waterWATER *)0x0) && (((byte)this[0xb8] & 1) != 0)) {
      iVar1 = waterWATER::IsUnderWater(this,param_1,(float)param_3,(float *)param_2);
      if (iVar1 != 0) {
        return 1;
      }
    }
    puVar2 = puVar2 + 1;
  } while ((int)puVar2 < 0x95d760);
  return 0;
}




/* from: gs_shared:water.cpp
   addr: 0052FF60 */

int __thiscall
waterLIQUID::ProcessMsg(waterLIQUID *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  psSHEET *this_00;
  objOBJ *poVar1;
  psSHEET *ppVar2;
  char *pcVar3;
  psSHEET *ppVar4;
  psSECT *ppVar5;
  pteFOG_GROUND *this_01;
  int iVar6;
  int iVar7;
  int local_1b0;
  int local_1ac [3];
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_194;
  objOBJ *local_190 [50];
  int aiStack_c8 [50];
  
  if (param_1 == 1) {
    gsMP_SERVER::DeclSyncable(gsSysServer,(entIACTIVE_OBJ *)this);
    iVar6 = 0;
    while ((&DAT_0095d6e8)[iVar6] != 0) {
      iVar6 = iVar6 + 1;
      if (0x1d < iVar6) {
        return 0;
      }
    }
    (&DAT_0095d6e8)[iVar6] = this;
  }
  else {
    if (param_1 == 2) {
      iVar6 = 0;
      do {
        if ((waterLIQUID *)(&DAT_0095d6e8)[iVar6] == this) {
          (&DAT_0095d6e8)[iVar6] = 0;
          return 0;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < 0x1e);
      return 0;
    }
    if (param_1 == 0x3f4) {
      this_00 = *(psSHEET **)(*(int *)(*(int *)(this + 0xbc) + 0x138) + 0xc4);
      local_1ac[0] = objMakePtrList((objOBJ **)(*(int *)(this + 0xbc) + 0x10),1,local_190,0x32);
      iVar6 = 0;
      local_1b0 = 0;
      if (0 < local_1ac[0]) {
        do {
          poVar1 = local_190[iVar6];
          local_190[iVar6] = (objOBJ *)0x0;
          if (*(int *)(poVar1 + 0x14) != 0) {
            pcVar3 = strstr(*(char **)(poVar1 + 0x18),s__fog);
            if (pcVar3 == (char *)0x0) {
              pcVar3 = strstr(*(char **)(poVar1 + 0x18),s__caust);
              if (pcVar3 == (char *)0x0) {
                ppVar2 = *(psSHEET **)(poVar1 + 0xf0);
                ppVar4 = this_00;
                if (ppVar2 != (psSHEET *)0x0) {
                  *(psSHEET **)(ppVar2 + 0xc) = this_00;
                  ppVar4 = ppVar2;
                }
                iVar7 = (**(code **)(*(int *)this + 0x68))(poVar1,ppVar4);
                if (iVar7 == 0) {
                  return 0;
                }
                local_190[iVar6] = poVar1;
              }
            }
            else {
              aiStack_c8[local_1b0] = (int)poVar1;
              local_1b0 = local_1b0 + 1;
            }
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < local_1ac[0]);
      }
      if ((this_00 != (psSHEET *)0x0) &&
         (ppVar5 = psSHEET::FindSect(this_00,s_FOG), ppVar5 != (psSECT *)0x0)) {
        this_01 = (pteFOG_GROUND *)operator_new(0xa4c);
        if (this_01 == (pteFOG_GROUND *)0x0) {
          iVar6 = 0;
        }
        else {
          iVar6 = pteFOG_GROUND::pteFOG_GROUND(this_01,(objOBJ *)0x0);
        }
        *(int *)(this + 0x153) = iVar6;
        if (iVar6 == 0) {
          return 0;
        }
        *(undefined4 *)(iVar6 + 8) = 0x32;
        pteSHADER::SetInstCreate(*(pteSHADER **)(this + 0x153),*(animINST **)(this + 0xbc));
        pteSHADER::SetSheet(*(pteSHADER **)(this + 0x153),this_00,s_FOG);
        iVar6 = 0;
        if (0 < local_1b0) {
          do {
            pteFOG_GROUND::SetDomainObj
                      (*(pteFOG_GROUND **)(this + 0x153),(objOBJ *)aiStack_c8[iVar6]);
            iVar6 = iVar6 + 1;
          } while (iVar6 < local_1b0);
        }
        iVar6 = local_1ac[0];
        if ((*(int *)(*(int *)(this + 0x153) + 0x8c) == 0) && (iVar7 = 0, 0 < local_1ac[0])) {
          do {
            if (local_190[iVar7] != (objOBJ *)0x0) {
              pteFOG_GROUND::SetDomainObj(*(pteFOG_GROUND **)(this + 0x153),local_190[iVar7]);
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < iVar6);
        }
        pteSHADER::Register(*(pteSHADER **)(this + 0x153));
      }
      local_19c = 0x40a00000;
      local_198 = 0xbf800000;
      local_194 = 0x40a00000;
      local_1ac[1] = 0x1e;
      local_1ac[2] = 1;
      local_1a0 = 0x1e;
      animINST::Validate(*(animINST **)(this + 0xbc),2);
      (**(code **)(*(int *)(*(int *)(*(int *)(this + 0xbc) + 0x10) + 0xc0) + 0x2c))
                (*(undefined4 *)(this + 0x14f));
      iVar6 = animINST::CDTInit(*(animINST **)(this + 0xbc),(m3dV *)&local_1a0,(m3dVINT *)local_1ac,
                                (char *)0x0,0.0);
      if (iVar6 != 0) {
        (**(code **)(**(int **)(*(int *)(*(int *)(this + 0xbc) + 0x100) + 8) + 0xc))
                  (*(undefined4 *)(this + 0x14f));
        return 0;
      }
    }
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:water.cpp
   addr: 00530240 */

int __thiscall waterLIQUID::InitObj(waterLIQUID *this,objOBJ *param_1,psSHEET *param_2)

{
  float fVar1;
  uint uVar2;
  objOBJ *poVar3;
  psSHEET *this_00;
  objMOD_NOISE_DEFORM *poVar4;
  int iVar5;
  objMOD_NOISE_DEFORM_UV *poVar6;
  objMTL *poVar7;
  objMOD_TEX_SCROLL *poVar8;
  int *piVar9;
  txmTEXTURE *ptVar10;
  objMOD_TEX_SEQ_ANIM *poVar11;
  uint *puVar12;
  undefined4 unaff_retaddr;
  float local_6c;
  float local_68;
  float local_64;
  float fStack_60;
  float afStack_5c [2];
  float local_54;
  float local_50;
  int iStack_4c;
  float fStack_48;
  uint auStack_44 [17];
  
  this_00 = param_2;
  local_54 = 60.0;
  psSHEET::GetFloat(param_2,s_WATER,s_maxDistUpdate,&local_54);
  local_6c = 0.0;
  psSHEET::GetFloat(this_00,s_WATER,s_maxAmp,&local_6c);
  local_64 = 1.0;
  psSHEET::GetFloat(this_00,s_WATER,s_freqXZ,&local_64);
  local_68 = 1.0;
  psSHEET::GetFloat(this_00,s_WATER,s_freqTime,&local_68);
  if (_DAT_005dd2bc < local_6c) {
    poVar4 = (objMOD_NOISE_DEFORM *)operator_new(0xf0);
    if (poVar4 == (objMOD_NOISE_DEFORM *)0x0) {
      poVar4 = (objMOD_NOISE_DEFORM *)0x0;
    }
    else {
      poVar4 = (objMOD_NOISE_DEFORM *)objMOD_NOISE_DEFORM::objMOD_NOISE_DEFORM(poVar4);
    }
    objMOD_NOISE_DEFORM::SetParams(poVar4,local_6c,local_64,local_68,local_54);
    (**(code **)(*(int *)poVar4 + 4))(param_1);
    iStack_4c = 1;
    psSHEET::GetBool(this_00,s_WATER,s_isFixBoundary,&iStack_4c);
    if (iStack_4c != 0) {
      fStack_48 = 1.0;
      psSHEET::GetFloat(this_00,s_WATER,s_fixDistance,&fStack_48);
      iVar5 = objMOD_NOISE_DEFORM::FixBoundary(poVar4,fStack_48);
      if (iVar5 == 0) {
        apLogErr(s_Water_Fix_Boundary_Failed_______);
      }
    }
  }
  fVar1 = *(float *)(this + 0x14f);
  if (*(float *)(this + 0x14f) <= local_6c) {
    fVar1 = local_6c;
  }
  *(float *)(this + 0x14f) = fVar1;
  local_50 = 0.0;
  psSHEET::GetFloat(this_00,s_WATER,s_maxAmpUV,&local_50);
  local_64 = 1.0;
  psSHEET::GetFloat(this_00,s_WATER,s_freqXZUV,&local_64);
  local_68 = 1.0;
  psSHEET::GetFloat(this_00,s_WATER,s_freqTimeUV,&local_68);
  if (_DAT_005dd2bc < local_50) {
    poVar6 = (objMOD_NOISE_DEFORM_UV *)operator_new(0xf0);
    if (poVar6 == (objMOD_NOISE_DEFORM_UV *)0x0) {
      poVar6 = (objMOD_NOISE_DEFORM_UV *)0x0;
    }
    else {
      poVar6 = (objMOD_NOISE_DEFORM_UV *)objMOD_NOISE_DEFORM_UV::objMOD_NOISE_DEFORM_UV(poVar6,0);
    }
    objMOD_NOISE_DEFORM_UV::SetParams(poVar6,local_50,local_64,local_68,local_54);
    (**(code **)(*(int *)poVar6 + 4))(param_1);
  }
  poVar7 = objOBJ::GetSplitMtlRendMtl(param_1,0,2);
  if (poVar7 != (objMTL *)0x0) {
    *(undefined4 *)(poVar7 + 0xc) = 0x38d1b717;
    auStack_44[0] = 1;
    psSHEET::GetBool(this_00,s_WATER,s_isAdditiveDet,(int *)auStack_44);
    if (auStack_44[0] != 0) {
      objOBJ::SetStateRendYes(param_1,0x1000);
    }
  }
  iVar5 = psSHEET::GetFloat(this_00,s_WATER,s_scrollUSpeedBase,afStack_5c);
  if (iVar5 == 0) {
    afStack_5c[0] = 0.0;
  }
  iVar5 = psSHEET::GetFloat(this_00,s_WATER,s_scrollVSpeedBase,&fStack_60);
  if (iVar5 == 0) {
    fStack_60 = 0.0;
  }
  poVar8 = (objMOD_TEX_SCROLL *)operator_new(0x30);
  if (poVar8 == (objMOD_TEX_SCROLL *)0x0) {
    piVar9 = (int *)0x0;
  }
  else {
    piVar9 = (int *)objMOD_TEX_SCROLL::objMOD_TEX_SCROLL(poVar8,0);
  }
  poVar3 = param_1;
  piVar9[10] = (int)afStack_5c[0];
  piVar9[0xb] = (int)fStack_60;
  (**(code **)(*piVar9 + 4))(param_1);
  if (poVar7 != (objMTL *)0x0) {
    iVar5 = psSHEET::GetFloat(this_00,s_WATER,s_scrollUSpeedDet,&fStack_60);
    if (iVar5 == 0) {
      fStack_60 = 0.0;
    }
    iVar5 = psSHEET::GetFloat(this_00,s_WATER,s_scrollVSpeedDet,&local_64);
    if (iVar5 == 0) {
      local_64 = 0.0;
    }
    poVar8 = (objMOD_TEX_SCROLL *)operator_new(0x30);
    if (poVar8 == (objMOD_TEX_SCROLL *)0x0) {
      piVar9 = (int *)0x0;
    }
    else {
      piVar9 = (int *)objMOD_TEX_SCROLL::objMOD_TEX_SCROLL(poVar8,2);
    }
    piVar9[10] = (int)fStack_60;
    piVar9[0xb] = (int)local_64;
    (**(code **)(*piVar9 + 4))(poVar3);
  }
  param_1 = (objOBJ *)0x0;
  psSHEET::GetInt(this_00,s_WATER,s_nTexBase,(int *)&param_1);
  auStack_44[0] = auStack_44[0] & 0xffffff00;
  psSHEET::GetStr(this_00,s_WATER,s_nameTexBase,(char *)auStack_44,0x40);
  if (0 < (int)param_1) {
    iVar5 = -1;
    puVar12 = auStack_44;
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      uVar2 = *puVar12;
      puVar12 = (uint *)((int)puVar12 + 1);
    } while ((char)uVar2 != '\0');
    if (iVar5 != -2) {
      iVar5 = 0;
      if (0 < (int)param_1) {
        do {
          sprintf((char *)&apBuffer,s__s__d,auStack_44,iVar5);
          ptVar10 = txmMANAGER::Add(txmManager,(char *)&apBuffer,0x100,1);
          (&DAT_0095d760)[iVar5] = ptVar10;
          if (ptVar10 == (txmTEXTURE *)0x0) {
            apLogErr(s_Cannot_find_water_texture__s,&apBuffer);
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < (int)param_1);
      }
      afStack_5c[0] = 2.0;
      psSHEET::GetFloat(this_00,s_WATER,s_texAnimTimeBase,afStack_5c);
      poVar11 = (objMOD_TEX_SEQ_ANIM *)operator_new(0x30);
      if (poVar11 == (objMOD_TEX_SEQ_ANIM *)0x0) {
        poVar11 = (objMOD_TEX_SEQ_ANIM *)0x0;
      }
      else {
        poVar11 = (objMOD_TEX_SEQ_ANIM *)objMOD_TEX_SEQ_ANIM::objMOD_TEX_SEQ_ANIM(poVar11,0);
      }
      objMOD_TEX_SEQ_ANIM::SetParams
                (poVar11,(int)param_1,(txmTEXTURE **)&DAT_0095d760,afStack_5c[0]);
      (**(code **)(*(int *)poVar11 + 4))(unaff_retaddr);
    }
  }
  if (poVar7 != (objMTL *)0x0) {
    param_1 = (objOBJ *)0x0;
    psSHEET::GetInt(this_00,s_WATER,s_nTexDet,(int *)&param_1);
    auStack_44[0] = auStack_44[0] & 0xffffff00;
    psSHEET::GetStr(this_00,s_WATER,s_nameTexDet,(char *)auStack_44,0x40);
    if (0 < (int)param_1) {
      iVar5 = -1;
      puVar12 = auStack_44;
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        uVar2 = *puVar12;
        puVar12 = (uint *)((int)puVar12 + 1);
      } while ((char)uVar2 != '\0');
      if (iVar5 != -2) {
        iVar5 = 0;
        if (0 < (int)param_1) {
          do {
            sprintf((char *)&apBuffer,s__s__d,auStack_44,iVar5);
            ptVar10 = txmMANAGER::Add(txmManager,(char *)&apBuffer,0x110,1);
            (&DAT_0095d760)[iVar5] = ptVar10;
            if (ptVar10 == (txmTEXTURE *)0x0) {
              apLogErr(s_Cannot_find_water_texture__s,&apBuffer);
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < (int)param_1);
        }
        afStack_5c[0] = 2.0;
        psSHEET::GetFloat(this_00,s_WATER,s_texAnimTimeDet,afStack_5c);
        poVar11 = (objMOD_TEX_SEQ_ANIM *)operator_new(0x30);
        if (poVar11 == (objMOD_TEX_SEQ_ANIM *)0x0) {
          poVar11 = (objMOD_TEX_SEQ_ANIM *)0x0;
        }
        else {
          poVar11 = (objMOD_TEX_SEQ_ANIM *)objMOD_TEX_SEQ_ANIM::objMOD_TEX_SEQ_ANIM(poVar11,2);
        }
        objMOD_TEX_SEQ_ANIM::SetParams
                  (poVar11,(int)param_1,(txmTEXTURE **)&DAT_0095d760,afStack_5c[0]);
        (**(code **)(*(int *)poVar11 + 4))(unaff_retaddr);
      }
    }
  }
  return 1;
}




/* from: gs_shared:water.cpp
   addr: 00530810 */

int __thiscall waterWATER::IsUnderWater(waterWATER *this,m3dV *param_1,float param_2,float *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(this + 0x153);
  if (iVar1 != 0) {
    iVar2 = 0;
    if (0 < *(int *)(iVar1 + 0x8c)) {
      iVar3 = 0;
      do {
        if ((*(float *)(iVar3 + 0x98 + iVar1) < *(float *)(param_1 + 4)) &&
           (*(float *)(param_1 + 4) <
            *(float *)(iVar3 + 0x9c + iVar1) + *(float *)(this + 0x14f) + param_2)) {
          iVar1 = (**(code **)(*(int *)(iVar3 + 0x90 + iVar1) + 0x10))(param_1);
          if (iVar1 != 0) {
            if (param_3 != (float *)0x0) {
              *param_3 = *(float *)(*(int *)(this + 0x153) + 0x9c + iVar2 * 0x3c) +
                         *(float *)(this + 0x14f);
            }
            return 1;
          }
        }
        iVar1 = *(int *)(this + 0x153);
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 0x3c;
      } while (iVar2 < *(int *)(iVar1 + 0x8c));
    }
  }
  return 0;
}




/* from: gs_shared:water.cpp
   addr: 005308C0 */

int __thiscall
waterWATER::ProcessMsg(waterWATER *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  waterLIQUID::ProcessMsg((waterLIQUID *)this,param_1,param_2,param_3,param_4);
  if (param_1 == 1) {
    *(uint *)(this + 0xb8) = *(uint *)(this + 0xb8) | 1;
  }
  return 0;
}




/* from: gs_shared:water.cpp
   addr: 00530900 */

int __thiscall waterWATER::InitObj(waterWATER *this,objOBJ *param_1,psSHEET *param_2)

{
  psSHEET *this_00;
  int iVar1;
  psSECT *ppVar2;
  pteEMAP_REFLECT *this_01;
  
  this_00 = param_2;
  iVar1 = waterLIQUID::InitObj((waterLIQUID *)this,param_1,param_2);
  if (iVar1 == 0) {
    return 0;
  }
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 2;
  *(uint *)param_1 = *(uint *)param_1 | 4;
  _apCfgReadBool((void **)&DAT_0095d828,s_Video,s_VIDEO_WaterReflCaust,(int *)&param_2);
  if ((param_2 != (psSHEET *)0x0) &&
     (ppVar2 = psSHEET::FindSect(this_00,s_REFLECTION), ppVar2 != (psSECT *)0x0)) {
    this_01 = (pteEMAP_REFLECT *)operator_new(0x128);
    if (this_01 == (pteEMAP_REFLECT *)0x0) {
      return 0;
    }
    pteEMAP_REFLECT::pteEMAP_REFLECT(this_01);
    *(undefined ***)this_01 = &pteEMAP_REFLECT_WATER::_vftable_;
    pteSHADER::SetInstCreate((pteSHADER *)this_01,*(animINST **)(this + 0xbc));
    pteSHADER::SetObjCreate((pteSHADER *)this_01,param_1);
    pteSHADER::SetSheet((pteSHADER *)this_01,this_00,s_REFLECTION);
    pteSHADER::Register((pteSHADER *)this_01);
  }
  return 1;
}




/* from: gs_shared:water.cpp
   addr: 005309C0 */

int __thiscall
waterLAVA::ProcessMsg(waterLAVA *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  waterLIQUID::ProcessMsg((waterLIQUID *)this,param_1,param_2,param_3,param_4);
  if (param_1 == 1) {
    *(uint *)(this + 0xb8) = *(uint *)(this + 0xb8) | 2;
  }
  return 0;
}




/* from: gs_shared:water.cpp
   addr: 00530A00 */

int __thiscall waterLAVA::InitObj(waterLAVA *this,objOBJ *param_1,psSHEET *param_2)

{
  int iVar1;
  
  iVar1 = waterLIQUID::InitObj((waterLIQUID *)this,param_1,param_2);
  if (iVar1 == 0) {
    return 0;
  }
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 4;
  return 1;
}




/* from: gs_shared:water.cpp
   addr: 00530A30 */

entENTITY * __fastcall waterWATER::Create(animINST *param_1)

{
  entENTITY *this;
  
  this = (entENTITY *)operator_new(0x157);
  if (this != (entENTITY *)0x0) {
    entENTITY::entENTITY(this);
    *(undefined4 *)(this + 0x14f) = 0;
    *(undefined4 *)(this + 0x153) = 0;
    *(undefined ***)this = &_vftable_;
    return this;
  }
  return (entENTITY *)0x0;
}




/* from: gs_shared:water.cpp
   addr: 00530A70 */

entENTITY * __fastcall waterLAVA::Create(animINST *param_1)

{
  entENTITY *this;
  
  this = (entENTITY *)operator_new(0x157);
  if (this != (entENTITY *)0x0) {
    entENTITY::entENTITY(this);
    *(undefined4 *)(this + 0x14f) = 0;
    *(undefined4 *)(this + 0x153) = 0;
    *(undefined ***)this = &_vftable_;
    return this;
  }
  return (entENTITY *)0x0;
}

