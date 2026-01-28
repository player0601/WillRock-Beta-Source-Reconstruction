
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:entity.cpp
   addr: 004F3EF0 */

entENTITY * __thiscall entENTITY::entENTITY(entENTITY *this)

{
  undefined4 uVar1;
  
  entIACTIVE_OBJ::entIACTIVE_OBJ((entIACTIVE_OBJ *)this);
  *(undefined4 *)(this + 0xa4) = 0;
  *(undefined4 *)(this + 0xa8) = 0;
  *(undefined4 *)(this + 0xac) = 0;
  *(undefined4 *)(this + 0xb0) = 0;
  this[0xfc] = (entENTITY)0x0;
  *(undefined4 *)(this + 0xfd) = _m3dVZero;
  *(undefined4 *)(this + 0x101) = DAT_00963740;
  *(undefined4 *)(this + 0x105) = DAT_00963744;
  *(undefined4 *)(this + 0x109) = _m3dVZero;
  *(undefined4 *)(this + 0x10d) = DAT_00963740;
  *(undefined4 *)(this + 0x111) = DAT_00963744;
  *(undefined4 *)(this + 0x115) = _m3dVZero;
  *(undefined4 *)(this + 0x119) = DAT_00963740;
  *(undefined4 *)(this + 0x11d) = DAT_00963744;
  *(undefined4 *)(this + 0x121) = _m3dVZero;
  *(undefined4 *)(this + 0x125) = DAT_00963740;
  *(undefined4 *)(this + 0x129) = DAT_00963744;
  *(undefined4 *)(this + 0x12d) = _m3dVZero;
  *(undefined4 *)(this + 0x131) = DAT_00963740;
  *(undefined4 *)(this + 0x135) = DAT_00963744;
  *(undefined4 *)(this + 0x139) = _m3dVZero;
  *(undefined4 *)(this + 0x13d) = DAT_00963740;
  *(undefined4 *)(this + 0x141) = DAT_00963744;
  *(undefined4 *)(this + 0x94) = 0xffffffff;
  *(undefined4 *)(this + 0x9c) = 0xffffffff;
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 0x20) = 0x454e5424;
  *(undefined4 *)(this + 0xb4) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0xc0) = 0;
  *(undefined4 *)(this + 0xc4) = 0;
  *(undefined4 *)(this + 200) = 0;
  *(undefined4 *)(this + 0x98) = 0;
  *(undefined4 *)(this + 0xa4) = 0x437f0000;
  *(undefined4 *)(this + 0xa8) = 0x437f0000;
  *(undefined4 *)(this + 0xac) = 0x437f0000;
  *(undefined4 *)(this + 0xb0) = 0x437f0000;
  *(undefined4 *)(this + 0xa0) = 0;
  *(undefined4 *)(this + 0x1c) = 0x46;
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xe0) = _m3dVZero;
  *(undefined4 *)(this + 0xe4) = DAT_00963740;
  *(undefined4 *)(this + 0xe8) = DAT_00963744;
  *(undefined4 *)(this + 0xec) = _m3dVZero;
  *(undefined4 *)(this + 0xf0) = DAT_00963740;
  uVar1 = DAT_00963744;
  *(undefined4 *)(this + 0x14b) = 0;
  *(undefined4 *)(this + 0x145) = 0;
  *(undefined2 *)(this + 0x149) = 0;
  *(undefined4 *)(this + 0xf4) = uVar1;
  return this;
}




/* from: gs:entity.cpp
   addr: 004F40C0
   addr: 004F40C0 */

void __thiscall gsDOMAIN_LIST::~gsDOMAIN_LIST(gsDOMAIN_LIST *this)

{
  *(undefined ***)this = &entIACTIVE_OBJ::_vftable_;
  entIACTIVE_OBJ::TermIActive((entIACTIVE_OBJ *)this);
  msgADDR::~msgADDR((msgADDR *)this);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:entity.cpp
   addr: 004F40E0 */

int __thiscall
entENTITY::PreProcessMsg(entENTITY *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  int iVar1;
  
  iVar1 = entIACTIVE_OBJ::PreProcessMsg((entIACTIVE_OBJ *)this,param_1,param_2,param_3,param_4);
  if (iVar1 != 0) {
    return 1;
  }
  if (param_1 < 0x3f5) {
    if (param_1 == 0x3f4) {
      (**(code **)(*(int *)this + 100))();
      animINST::GetPos(*(animINST **)(this + 0xbc),(m3dV *)(this + 0xfd));
      m3dMATR::GetAxisZ((m3dMATR *)(*(int *)(this + 0xbc) + 0x60),(m3dV *)(this + 0x115));
      m3dMATR::GetAxisX((m3dMATR *)(*(int *)(this + 0xbc) + 0x60),(m3dV *)(this + 0x109));
      *(undefined4 *)(this + 0x121) = _m3dVZero;
      *(undefined4 *)(this + 0x125) = DAT_00963740;
      *(undefined4 *)(this + 0x129) = DAT_00963744;
      *(undefined4 *)(this + 0x12d) = _m3dVZero;
      *(undefined4 *)(this + 0x131) = DAT_00963740;
      *(undefined4 *)(this + 0x135) = DAT_00963744;
      (**(code **)(*(int *)this + 0x48))(this + 0x139);
      return 0;
    }
    if (param_1 == 1) {
      *param_4 = 1;
      iVar1 = *(int *)(this + 0xbc);
      if (*(psSHEET **)(iVar1 + 0x134) != (psSHEET *)0x0) {
        gsSND_SYSTEM::AddChannel
                  (gsSysSound,*(psSHEET **)(iVar1 + 0x134),(entIACTIVE_OBJ *)this,
                   *(objOBJ **)(iVar1 + 0x10));
        return 0;
      }
      gsSND_SYSTEM::AddChannel
                (gsSysSound,*(psSHEET **)(*(int *)(iVar1 + 0x138) + 0xc4),(entIACTIVE_OBJ *)this,
                 *(objOBJ **)(iVar1 + 0x10));
      return 0;
    }
    if (param_1 == 1000) {
      UpdateFollow(this);
      return 0;
    }
  }
  else if (param_1 == 0x40a) {
    (**(code **)(*(int *)this + 0x58))(param_2);
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:entity.cpp
   addr: 004F4250 */

int __thiscall
entENTITY::PostProcessMsg(entENTITY *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  entIACTION_DATA *peVar1;
  float fVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  float local_c;
  float local_8;
  float local_4;
  
  entIACTIVE_OBJ::PostProcessMsg((entIACTIVE_OBJ *)this,param_1,param_2,param_3,param_4);
  if (param_1 < 0x3e9) {
    if (param_1 == 1000) {
      if ((((((byte)this[0x88] & 4) != 0) && (*(int *)(this + 0xbc) != 0)) &&
          ((*(uint *)(*(int *)(this + 0xbc) + 4) & 0x2000) != 0)) &&
         (iVar5 = 0, 0 < *(int *)(this + 0x28))) {
        iVar6 = 0;
        do {
          peVar1 = (entIACTION_DATA *)(*(int *)(this + 0x2c) + iVar6);
          if (((*(byte *)(*(int *)(this + 0x2c) + 4 + iVar6) & 0x40) != 0) &&
             ((*(int *)(peVar1 + 0xac) == -1 ||
              (*(int *)(peVar1 + 0xac) == *(int *)(*(int *)(this + 0xbc) + 0xe0))))) {
            if (*(int *)(peVar1 + 0xb0) == -1) {
              uVar4 = (uint)(*(int *)(*(int *)(this + 0xbc) + 0x28) != 0);
            }
            else {
              uVar4 = *(uint *)(*(int *)(this + 0xbc) + 0x28) &
                      1 << ((byte)*(int *)(peVar1 + 0xb0) & 0x1f);
            }
            if (uVar4 != 0) {
              entIACTIVE_OBJ::ExecuteIAction(peVar1,(entIACTIVE_OBJ *)this);
            }
          }
          iVar5 = iVar5 + 1;
          iVar6 = iVar6 + 0xbc;
        } while (iVar5 < *(int *)(this + 0x28));
      }
      if (*(animINST **)(this + 0xbc) != (animINST *)0x0) {
        animINST::GetPos(*(animINST **)(this + 0xbc),(m3dV *)&local_c);
        if (((byte)this[0x88] & 1) == 0) {
          *(float *)(this + 0xe0) = local_c - *(float *)(this + 0xd4);
          *(float *)(this + 0xe4) = local_8 - *(float *)(this + 0xd8);
          *(float *)(this + 0xe8) = local_4 - *(float *)(this + 0xdc);
          fVar2 = ___real_3f800000 / gsElapsedTime;
          *(float *)(this + 0xe0) = fVar2 * *(float *)(this + 0xe0);
          *(float *)(this + 0xe4) = fVar2 * *(float *)(this + 0xe4);
          *(float *)(this + 0xe8) = fVar2 * *(float *)(this + 0xe8);
        }
        *(float *)(this + 0xd4) = local_c;
        *(float *)(this + 0xd8) = local_8;
        *(float *)(this + 0xdc) = local_4;
      }
      if (0 < *(int *)(this + 0x34)) {
        gsSND_SYSTEM::UpdateEntPos(gsSysSound,this);
      }
      if (*(int *)(gsSysMP + 0x28) != 1) {
        gsMP_SYSTEM::UpdateEntFrame(gsSysMP,this);
      }
      if (((byte)this[0xb4] & 0x20) != 0) {
        UpdateColorBlend(this);
        return 0;
      }
    }
    else if (param_1 == 1) {
      if (*param_4 == 0) {
        pcVar3 = *(char **)(*(int *)(this + 0xbc) + 0x18);
        if (pcVar3 == (char *)0x0) {
          pcVar3 = s_;
        }
        apMsg(s_Automatic_destroy_of_entity___s_,pcVar3);
        msgSYSTEM::PostMsg(&msgSystem,(msgADDR *)this,2,(msgADDR *)0x0);
        return 0;
      }
    }
    else if (param_1 == 2) {
      if (this != (entENTITY *)0x0) {
        apFree(*(void **)(this + 0x145));
        *(undefined4 *)(this + 0x145) = 0;
        *(undefined2 *)(this + 0x149) = 0;
        TermFollow(this);
        msgSYSTEM::DestroyAddr(&msgSystem,(msgADDR *)this);
        gsLvlInstDestroyNotify(*(animINST **)(this + 0xbc),(void *)0x0);
        if (*(animINST **)(this + 0xbc) != (animINST *)0x0) {
          scnSCENE::DestroyInst(gsScenePtr,*(animINST **)(this + 0xbc));
          return 0;
        }
      }
    }
    else if ((param_1 == 3) && (*(void **)(this + 0xc0) == param_2)) {
      *(undefined4 *)(this + 0xc0) = 0;
      *(undefined4 *)(this + 0xc4) = 0;
      operator_delete(*(void **)(this + 200));
      *(undefined4 *)(this + 200) = 0;
      return 0;
    }
  }
  else if (param_1 == 0x3f4) {
    iVar5 = *(int *)(*(int *)(this + 0xbc) + 0x134);
    if (iVar5 == 0) {
      iVar5 = *(int *)(*(int *)(*(int *)(this + 0xbc) + 0x138) + 0xc4);
    }
    (**(code **)(*(int *)this + 0x20))(iVar5);
    if (((byte)this[0x88] & 4) != 0) {
      (**(code **)(*(int *)this + 0x60))();
    }
    if (*(animINST **)(this + 0xbc) != (animINST *)0x0) {
      animINST::GetPos(*(animINST **)(this + 0xbc),(m3dV *)(this + 0xd4));
    }
  }
  else if (param_1 == 0x3fa) {
    if ((param_2 != (void *)0x0) && (*(animINST **)(this + 0xbc) != (animINST *)0x0)) {
      animINST::Transform(*(animINST **)(this + 0xbc),(m3dMATR *)param_2,2);
      return 0;
    }
  }
  else if (param_1 == 0x3fb) {
    *param_4 = 0;
    return 1;
  }
  return 0;
}




/* from: gs:entity.cpp
   addr: 004F45C0 */

void __thiscall entENTITY::ParsePS(entENTITY *this)

{
  int iVar1;
  char *pcVar2;
  animINST *paVar3;
  objOBJ *poVar4;
  int local_88;
  float local_84;
  char local_80 [64];
  char local_40 [64];
  
  if (*(animINST **)(this + 0xbc) != (animINST *)0x0) {
    iVar1 = animINST::GetInt(*(animINST **)(this + 0xbc),s_ANIM_PROP,s_ANIM_ST_IGNORE_CDT_ALWAYS,
                             &local_88);
    if ((iVar1 != 0) && (local_88 == 1)) {
      *(uint *)(*(int *)(this + 0xbc) + 4) = *(uint *)(*(int *)(this + 0xbc) + 4) | 0x10;
    }
    iVar1 = animINST::GetBool(*(animINST **)(this + 0xbc),s_ANIM_PROP,s_ANIM_ST_EXCLUDE_HH,&local_88
                             );
    if ((iVar1 != 0) && (local_88 == 1)) {
      *(uint *)(*(int *)(this + 0xbc) + 4) = *(uint *)(*(int *)(this + 0xbc) + 4) | 0x1000;
    }
    iVar1 = animINST::GetFloat(*(animINST **)(this + 0xbc),s_ANIM_PROP,s_renderOff,&local_84);
    if (iVar1 != 0) {
      *(float *)(*(int *)(this + 0xbc) + 0xf0) = local_84;
    }
    paVar3 = (animINST *)0x0;
    iVar1 = animINST::GetStr(*(animINST **)(this + 0xbc),s_ANIM_PROP,s_constraintActor,local_80,0x40
                            );
    if (iVar1 != 0) {
      paVar3 = scnSCENE::FindInstName(gsScenePtr,local_80);
      if (paVar3 == (animINST *)0x0) {
        pcVar2 = *(char **)(*(int *)(this + 0xbc) + 0x18);
        if (pcVar2 == (char *)0x0) {
          pcVar2 = s_;
        }
        apLogErr(s_Actor__s__Cannot_find_constraint,pcVar2,local_80);
      }
    }
    poVar4 = (objOBJ *)0x0;
    if (paVar3 != (animINST *)0x0) {
      iVar1 = animINST::GetStr(*(animINST **)(this + 0xbc),s_ANIM_PROP,s_constraintObj,local_40,0x40
                              );
      if (iVar1 != 0) {
        poVar4 = objFindName(*(objOBJ **)(paVar3 + 0x10),local_40);
        if (poVar4 == (objOBJ *)0x0) {
          pcVar2 = *(char **)(*(int *)(this + 0xbc) + 0x18);
          if (pcVar2 == (char *)0x0) {
            pcVar2 = s_;
          }
          apLogErr(s_Actor__s__Cannot_find_constraint,pcVar2,local_40);
        }
      }
      SetFollow(this,*(entENTITY **)(paVar3 + 0x13c),poVar4,(uint)(poVar4 != (objOBJ *)0x0));
    }
    iVar1 = animINST::GetBool(*(animINST **)(this + 0xbc),s_ANIM_PROP,s_isExactCDT,&local_88);
    if ((iVar1 != 0) && (local_88 != 0)) {
      scnSCENE::SetStateYesInst(gsScenePtr,*(animINST **)(this + 0xbc),8);
    }
  }
  return;
}




/* from: gs:entity.cpp
   addr: 004F4780 */

void __thiscall entENTITY::ParseIActions(entENTITY *this,psSHEET *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int local_94;
  int local_90;
  int local_8c;
  entENTITY *local_88;
  undefined4 local_84;
  char local_80 [64];
  char local_40 [64];
  
  if (param_1 != (psSHEET *)0x0) {
    local_88 = this;
    entIACTIVE_OBJ::ParseIActions((entIACTIVE_OBJ *)this,param_1);
    local_90 = 0;
    if (0 < *(int *)param_1) {
      local_94 = 0;
      do {
        piVar7 = (int *)(*(int *)(param_1 + 4) + local_94);
        iVar2 = 0;
        do {
          cVar1 = s_ON_ACTION_FRAME[iVar2];
          local_40[iVar2] = cVar1;
          iVar2 = iVar2 + 1;
        } while (cVar1 != '\0');
        pcVar3 = strstr((char *)*piVar7,local_40);
        if (pcVar3 != (char *)0x0) {
          uVar6 = 0xffffffff;
          local_8c = -1;
          pcVar3 = local_40;
          do {
            if (uVar6 == 0) break;
            uVar6 = uVar6 - 1;
            cVar1 = *pcVar3;
            pcVar3 = pcVar3 + 1;
          } while (cVar1 != '\0');
          local_80[0] = '\0';
          pcVar3 = (char *)((~uVar6 - 1) + *piVar7);
          if (*pcVar3 == '_') {
            if (pcVar3[1] == '\"') {
              local_84 = pcVar3 + 2;
              pcVar4 = strchr(local_84,0x22);
              this = local_88;
              if (pcVar4 != (char *)0x0) {
                strncpy(local_80,local_84,(size_t)(pcVar4 + (-2 - (int)pcVar3)));
                pcVar4[(int)(local_80 + (-2 - (int)pcVar3))] = '\0';
                pcVar3 = pcVar4 + 1;
                this = local_88;
              }
            }
            if (*pcVar3 == '_') {
              sscanf(pcVar3,s___d,&local_8c);
            }
          }
          iVar2 = (**(code **)(*(int *)this + 0x24))(param_1,*piVar7,0x40);
          if (iVar2 != -1) {
            *(int *)(*(int *)(this + 0x2c) + 0xb0 + iVar2 * 0xbc) = local_8c + -1;
            iVar5 = animTPL::FindSeqName(*(animTPL **)(*(int *)(this + 0xbc) + 0x138),local_80);
            *(int *)(*(int *)(this + 0x2c) + 0xac + iVar2 * 0xbc) = iVar5;
          }
        }
        local_90 = local_90 + 1;
        local_94 = local_94 + 0xc;
      } while (local_90 < *(int *)param_1);
    }
  }
  return;
}




/* from: gs:entity.cpp
   addr: 004F4910 */

void __thiscall entENTITY::SetFollow(entENTITY *this,entENTITY *param_1,objOBJ *param_2,int param_3)

{
  void *pvVar1;
  m3dMATR *this_00;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  *(undefined4 *)(this + 0xc0) = 0;
  *(undefined4 *)(this + 0xc4) = 0;
  operator_delete(*(void **)(this + 200));
  *(undefined4 *)(this + 200) = 0;
  *(entENTITY **)(this + 0xc0) = param_1;
  *(objOBJ **)(this + 0xc4) = param_2;
  if ((param_1 != (entENTITY *)0x0) &&
     (*(uint *)(this + 0xc) = *(uint *)(this + 0xc) | 2, param_3 != 0)) {
    animINST::Validate(*(animINST **)(this + 0xbc),4);
    animINST::Validate(*(animINST **)(*(int *)(this + 0xc0) + 0xbc),4);
    pvVar1 = operator_new(0x40);
    *(void **)(this + 200) = pvVar1;
    m3dMATR::GetTranslate((m3dMATR *)(*(int *)(this + 0xbc) + 0x60),&local_18,&local_14,&local_10);
    if (*(int *)(this + 0xc4) == 0) {
      this_00 = (m3dMATR *)(*(int *)(*(int *)(this + 0xc0) + 0xbc) + 0x60);
    }
    else {
      this_00 = (m3dMATR *)(*(int *)(this + 0xc4) + 0x3c);
    }
    m3dMATR::GetTranslate(this_00,&local_24,&local_20,&local_1c);
    local_c = local_18 - local_24;
    local_8 = local_14 - local_20;
    local_4 = local_10 - local_1c;
    m3dMATR::Identity(*(m3dMATR **)(this + 200));
    m3dMATR::Translate(*(m3dMATR **)(this + 200),(m3dV *)&local_c,0);
  }
  return;
}




/* from: gs:entity.cpp
   addr: 004F4A50 */

void __thiscall entENTITY::TermFollow(entENTITY *this)

{
  *(undefined4 *)(this + 0xc0) = 0;
  *(undefined4 *)(this + 0xc4) = 0;
  operator_delete(*(void **)(this + 200));
  *(undefined4 *)(this + 200) = 0;
  return;
}




/* from: gs:entity.cpp
   addr: 004F4A90 */

void __thiscall entENTITY::UpdateFollow(entENTITY *this)

{
  int iVar1;
  int iVar2;
  animINST *paVar3;
  m3dMATR *pmVar4;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  m3dMATR local_40 [64];
  
  if (((*(int *)(this + 0xc0) != 0) && ((*(uint *)(*(int *)(this + 0xbc) + 4) & 3) == 0)) &&
     (paVar3 = *(animINST **)(*(int *)(this + 0xc0) + 0xbc), ((byte)paVar3[4] & 3) == 0)) {
    if (*(int *)(this + 0xc4) == 0) {
      paVar3 = paVar3 + 0x60;
    }
    else {
      animINST::Validate(paVar3,4);
      paVar3 = (animINST *)(*(int *)(this + 0xc4) + 0x3c);
    }
    iVar1 = *(int *)(this + 200);
    pmVar4 = local_40;
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined4 *)pmVar4 = *(undefined4 *)paVar3;
      paVar3 = paVar3 + 4;
      pmVar4 = pmVar4 + 4;
    }
    if (iVar1 != 0) {
      m3dMATR::GetTranslate(local_40,&local_64,&local_60,&local_5c);
      m3dMATR::GetTranslate(*(m3dMATR **)(this + 200),&local_58,&local_54,&local_50);
      local_4c = local_64 + local_58;
      local_48 = local_60 + local_54;
      local_44 = local_5c + local_50;
      animINST::Translate(*(animINST **)(this + 0xbc),(m3dV *)&local_4c,0);
      return;
    }
    m3dMATR::RemoveScale(local_40);
    animINST::Transform(*(animINST **)(this + 0xbc),local_40,0);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:entity.cpp
   addr: 004F4B90 */

int __thiscall entENTITY::FloorPlace(entENTITY *this,float param_1,int param_2,cdtINFO *param_3)

{
  int iVar1;
  m3dV local_78 [4];
  float local_74;
  undefined **local_6c;
  undefined4 local_68;
  animINST *local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined **local_20;
  undefined4 local_1c;
  float local_8;
  
  local_2c = DAT_00963740;
  local_64 = *(animINST **)(this + 0xbc);
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = _m3dVZero;
  local_28 = DAT_00963744;
  local_24 = 0;
  local_6c = &cdtREFINE::_vftable_;
  local_68 = 2;
  local_1c = 1;
  local_20 = &m3dBOX::_vftable_;
  if (param_3 == (cdtINFO *)0x0) {
    param_3 = (cdtINFO *)&local_40;
  }
  animINST::GetPos(local_64,local_78);
  animINST::GetBBox(*(animINST **)(this + 0xbc),(m3dBOX *)&local_20);
  iVar1 = scnSCENE::FloorPlace
                    (gsScenePtr,local_78,50.0,local_78,local_8 - local_74,0.0,0,
                     (cdtREFINE *)&local_6c,param_3);
  if (iVar1 != 0) {
    local_74 = local_74 + param_1;
    animINST::Translate(*(animINST **)(this + 0xbc),local_78,0);
    if (param_2 != 0) {
      local_50 = 0;
      local_4c = 0;
      local_48 = 0;
      local_44 = 0;
      local_60 = 0;
      local_5c = 0;
      local_58 = 0;
      local_54 = 0;
      gsEffEnvirColor(param_3,(m3dCOLOR *)&local_50,(m3dCOLOR *)&local_60);
      ApplyColor(this,(m3dCOLOR *)&local_50,(m3dCOLOR *)&local_60,(m3dCOLOR *)0x0,0);
    }
    return 1;
  }
  return 0;
}




/* from: gs:entity.cpp
   addr: 004F4D00 */

void __thiscall entENTITY::ApplyColor(entENTITY *this)

{
  undefined4 uStack_18;
  m3dV local_c [12];
  
  uStack_18 = 0x4f4d16;
  animINST::GetPos(*(animINST **)(this + 0xbc),local_c);
  uStack_18 = 1;
  (**(code **)(*(int *)this + 0x44))(0);
  animINST::Translate(*(animINST **)(this + 0xbc),(m3dV *)&uStack_18,0);
  return;
}




/* from: gs:entity.cpp
   addr: 004F4D40 */

void __thiscall entENTITY::ApplyColor(entENTITY *this,cdtINFO *param_1,int param_2)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  gsEffEnvirColor(param_1,(m3dCOLOR *)&local_10,(m3dCOLOR *)&local_20);
  ApplyColor(this,(m3dCOLOR *)&local_10,(m3dCOLOR *)&local_20,(m3dCOLOR *)0x0,param_2);
  return;
}




/* from: gs:entity.cpp
   addr: 004F4DC0 */

void __thiscall
entENTITY::ApplyColor
          (entENTITY *this,m3dCOLOR *param_1,m3dCOLOR *param_2,m3dCOLOR *param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  bVar1 = false;
  if (*(int *)(this + 0xbc) == 0) {
    return;
  }
  if (*(int *)(*(int *)(this + 0xbc) + 0x10) == 0) {
    return;
  }
  if (param_2 != (m3dCOLOR *)0x0) {
    iVar2 = ftol();
    uVar3 = ftol();
    uVar4 = ftol();
    uVar5 = ftol();
    uVar3 = ((iVar2 << 8 | uVar3 & 0xff) << 8 | uVar4 & 0xff) << 8 | uVar5 & 0xff;
    if (*(uint *)(this + 0x98) != uVar3) {
      *(uint *)(this + 0x98) = uVar3;
      bVar1 = true;
    }
  }
  if (param_1 != (m3dCOLOR *)0x0) {
    iVar2 = ftol();
    uVar3 = ftol();
    uVar4 = ftol();
    uVar5 = ftol();
    uVar3 = ((iVar2 << 8 | uVar3 & 0xff) << 8 | uVar4 & 0xff) << 8 | uVar5 & 0xff;
    if (*(uint *)(this + 0x9c) != uVar3) {
      *(uint *)(this + 0x9c) = uVar3;
      bVar1 = true;
    }
  }
  if (param_3 != (m3dCOLOR *)0x0) {
    iVar2 = ftol();
    uVar3 = ftol();
    uVar4 = ftol();
    uVar5 = ftol();
    uVar3 = ((iVar2 << 8 | uVar3 & 0xff) << 8 | uVar4 & 0xff) << 8 | uVar5 & 0xff;
    if (*(uint *)(this + 0xa0) != uVar3) {
      *(uint *)(this + 0xa0) = uVar3;
      goto LAB_004f4ef6;
    }
  }
  if (!bVar1) {
    return;
  }
LAB_004f4ef6:
  if (param_4 == 0) {
    *(uint *)(this + 0xb4) = *(uint *)(this + 0xb4) & 0xffffffdf;
    UpdateColorBlend(this);
    return;
  }
  *(uint *)(this + 0xb4) = *(uint *)(this + 0xb4) | 0x20;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:entity.cpp
   addr: 004F4F30 */

void __thiscall entENTITY::UpdateColorBlend(entENTITY *this)

{
  entENTITY *peVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  objAPPLY_COLOR oVar13;
  int iVar14;
  uint local_60;
  
  iVar2 = *(int *)(this + 0xbc);
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0x10) != 0)) {
    uVar9 = *(uint *)(this + 0x9c);
    fVar3 = (float)(uVar9 >> 0x10 & 0xff);
    fVar4 = (float)(uVar9 >> 8 & 0xff);
    fVar5 = (float)(uVar9 & 0xff);
    fVar6 = (float)(uVar9 >> 0x18);
    peVar1 = this + 0xa4;
    if ((*(uint *)(this + 0xb4) & 0x20) == 0) {
      *(float *)peVar1 = fVar3;
      *(float *)(this + 0xa8) = fVar4;
      *(float *)(this + 0xac) = fVar5;
      *(float *)(this + 0xb0) = fVar6;
    }
    else {
      fVar7 = (___real_3f000000 - gsElapsedTime) + (___real_3f000000 - gsElapsedTime);
      fVar8 = gsElapsedTime + gsElapsedTime;
      *(float *)peVar1 = fVar3 * fVar8 + fVar7 * *(float *)peVar1;
      *(float *)(this + 0xa8) = fVar4 * fVar8 + fVar7 * *(float *)(this + 0xa8);
      *(float *)(this + 0xac) = fVar5 * fVar8 + fVar7 * *(float *)(this + 0xac);
      *(float *)(this + 0xb0) = fVar6 * fVar8 + fVar7 * *(float *)(this + 0xb0);
      local_60 = (uint)(ABS(fVar3 - *(float *)peVar1) < ___real_3f000000);
      if (((((float)local_60 != ___real_00000000) &&
           (local_60 = (uint)(ABS(fVar4 - *(float *)(this + 0xa8)) < ___real_3f000000),
           (float)local_60 != ___real_00000000)) &&
          (local_60 = (uint)(ABS(fVar5 - *(float *)(this + 0xac)) < ___real_3f000000),
          (float)local_60 != ___real_00000000)) &&
         (local_60 = (uint)(ABS(fVar6 - *(float *)(this + 0xb0)) < ___real_3f000000),
         (float)local_60 != ___real_00000000)) {
        *(uint *)(this + 0xb4) = *(uint *)(this + 0xb4) & 0xffffffdf;
      }
    }
    iVar14 = 8;
    oVar13 = 2;
    uVar9 = ftol();
    iVar10 = ftol();
    uVar11 = ftol();
    uVar12 = ftol();
    objOBJ::SetConstColor
              (*(objOBJ **)(iVar2 + 0x10),
               ((uVar9 & 0xff | iVar10 << 8) << 8 | uVar11 & 0xff) << 8 | uVar12 & 0xff,oVar13,
               iVar14);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:entity.cpp
   addr: 004F5410 */

ulong __thiscall
entENTITY::GetColor(entENTITY *this,m3dCOLOR *param_1,m3dCOLOR *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  m3dCOLOR local_10 [16];
  
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  if (param_1 == (m3dCOLOR *)0x0) {
    param_1 = (m3dCOLOR *)&local_20;
  }
  if (param_2 == (m3dCOLOR *)0x0) {
    param_2 = local_10;
  }
  if (param_3 == 0) {
    uVar1 = *(uint *)(this + 0x9c);
    *(float *)param_1 = (float)(uVar1 >> 0x10 & 0xff);
    *(float *)(param_1 + 4) = (float)(uVar1 >> 8 & 0xff);
    *(float *)(param_1 + 8) = (float)(uVar1 & 0xff);
    *(float *)(param_1 + 0xc) = (float)(uVar1 >> 0x18);
  }
  else {
    *(float *)param_1 = *(float *)(this + 0xa4);
    *(float *)(param_1 + 4) = *(float *)(this + 0xa8);
    *(float *)(param_1 + 8) = *(float *)(this + 0xac);
    *(float *)(param_1 + 0xc) = *(float *)(this + 0xb0);
  }
  uVar1 = *(uint *)(this + 0x98);
  *(float *)param_2 = (float)(uVar1 >> 0x10 & 0xff);
  *(float *)(param_2 + 4) = (float)(uVar1 >> 8 & 0xff);
  *(float *)(param_2 + 8) = (float)(uVar1 & 0xff);
  *(float *)(param_2 + 0xc) = (float)(uVar1 >> 0x18);
  uVar1 = ftol();
  iVar2 = ftol();
  uVar3 = ftol();
  uVar4 = ftol();
  return uVar4 & 0xff | ((uVar1 & 0xff | iVar2 << 8) << 8 | uVar3 & 0xff) << 8;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:entity.cpp
   addr: 004F5690 */

void __thiscall entENTITY::GetCenter(entENTITY *this,m3dV *param_1)

{
  if (*(animINST **)(this + 0xbc) == (animINST *)0x0) {
    *(undefined4 *)param_1 = _m3dVZero;
    *(undefined4 *)(param_1 + 4) = DAT_00963740;
    *(undefined4 *)(param_1 + 8) = DAT_00963744;
    return;
  }
  animINST::GetCenter(*(animINST **)(this + 0xbc),param_1);
  return;
}




/* from: gs:entity.cpp
   addr: 004F56C0 */

void __thiscall entENTITY::AssignANIM_ST_ANIMATE_HIDDEN(entENTITY *this)

{
  int iVar1;
  
  if ((((*(int *)(this + 0x8c) != -1) && (*(int *)(this + 0x8c) != -3)) &&
      (iVar1 = *(int *)(this + 0xbc), iVar1 != 0)) && ((*(uint *)(iVar1 + 4) & 0x40) != 0)) {
    *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) | 4;
  }
  return;
}




/* from: gs:entity.cpp
   addr: 004F56F0 */

int __fastcall
entRegisterClass(char *param_1,int param_2,int param_3,_func_entENTITY_ptr_animINST_ptr *param_4,
                char *param_5,int param_6)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  byte *_Str1;
  byte *pbVar6;
  bool bVar7;
  
  iVar5 = 0;
  if (DAT_00940c28 < 1) {
LAB_004f578b:
    bVar7 = true;
    iVar5 = DAT_00940c28;
  }
  else {
    _Str1 = &DAT_00940c30;
    do {
      pbVar2 = _Str1;
      pbVar6 = (byte *)param_1;
      if (*(int *)(_Str1 + 0x8c) == 0) {
        uVar4 = 0xffffffff;
        do {
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          bVar1 = *pbVar2;
          pbVar2 = pbVar2 + 1;
        } while (bVar1 != 0);
        iVar3 = strncmp((char *)_Str1,param_1,~uVar4 - 1);
      }
      else {
        do {
          bVar1 = *pbVar2;
          bVar7 = bVar1 < *pbVar6;
          if (bVar1 != *pbVar6) {
LAB_004f5747:
            iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
            goto LAB_004f5769;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar2[1];
          bVar7 = bVar1 < pbVar6[1];
          if (bVar1 != pbVar6[1]) goto LAB_004f5747;
          pbVar2 = pbVar2 + 2;
          pbVar6 = pbVar6 + 2;
        } while (bVar1 != 0);
        iVar3 = 0;
      }
LAB_004f5769:
      if (iVar3 == 0) {
        if (iVar5 == -1) goto LAB_004f578b;
        bVar7 = false;
        goto LAB_004f579b;
      }
      iVar5 = iVar5 + 1;
      _Str1 = _Str1 + 0x90;
    } while (iVar5 < DAT_00940c28);
    bVar7 = true;
    iVar5 = DAT_00940c28;
  }
LAB_004f579b:
  iVar3 = iVar5 * 0x90;
  strncpy(&DAT_00940c30 + iVar3,param_1,0x40);
  (&DAT_00940c6f)[iVar3] = 0;
  if (param_5 == (char *)0x0) {
    param_5 = s_;
  }
  strncpy(&DAT_00940c7c + iVar3,param_5,0x40);
  (&DAT_00940c70)[iVar5 * 0x24] = param_2;
  (&DAT_00940cbb)[iVar3] = 0;
  (&DAT_00940c74)[iVar5 * 0x24] = param_3;
  (&DAT_00940c78)[iVar5 * 0x24] = param_4;
  (&DAT_00940cbc)[iVar5 * 0x24] = param_6;
  if (bVar7) {
    DAT_00940c28 = DAT_00940c28 + 1;
  }
  return 1;
}




/* from: gs:entity.cpp
   addr: 004F5830 */

entENTITY * __fastcall entCreate(char *param_1,animINST *param_2,void *param_3,int param_4)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  char *pcVar4;
  entENTITY *peVar5;
  uint uVar6;
  int iVar7;
  byte *_Str1;
  byte *pbVar8;
  bool bVar9;
  
  iVar7 = 0;
  if (0 < DAT_00940c28) {
    _Str1 = &DAT_00940c30;
    do {
      pbVar2 = _Str1;
      pbVar8 = (byte *)param_1;
      if (*(int *)(_Str1 + 0x8c) == 0) {
        uVar6 = 0xffffffff;
        do {
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          bVar1 = *pbVar2;
          pbVar2 = pbVar2 + 1;
        } while (bVar1 != 0);
        iVar3 = strncmp((char *)_Str1,param_1,~uVar6 - 1);
      }
      else {
        do {
          bVar1 = *pbVar2;
          bVar9 = bVar1 < *pbVar8;
          if (bVar1 != *pbVar8) {
LAB_004f5883:
            iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
            goto LAB_004f58a5;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar2[1];
          bVar9 = bVar1 < pbVar8[1];
          if (bVar1 != pbVar8[1]) goto LAB_004f5883;
          pbVar2 = pbVar2 + 2;
          pbVar8 = pbVar8 + 2;
        } while (bVar1 != 0);
        iVar3 = 0;
      }
LAB_004f58a5:
      if (iVar3 == 0) {
        if (iVar7 != -1) {
          peVar5 = (entENTITY *)(*(code *)(&DAT_00940c78)[iVar7 * 0x24])();
          if (peVar5 != (entENTITY *)0x0) {
            *(undefined4 *)(peVar5 + 0x14) = (&DAT_00940c70)[iVar7 * 0x24];
            *(undefined4 *)(peVar5 + 0x1c) = (&DAT_00940c74)[iVar7 * 0x24];
            if (param_2 != (animINST *)0x0) {
              animINST::SetNameClass(param_2,param_1);
            }
            pcVar4 = *(char **)(param_2 + 0x18);
            if (pcVar4 == (char *)0x0) {
              pcVar4 = s_;
            }
            apNAME::SetName((apNAME *)(peVar5 + 0x44),pcVar4);
            *(uint *)(peVar5 + 0x88) = *(uint *)(peVar5 + 0x88) | param_4;
            entRegister(peVar5,param_2,param_3);
            return peVar5;
          }
          return (entENTITY *)0x0;
        }
        break;
      }
      iVar7 = iVar7 + 1;
      _Str1 = _Str1 + 0x90;
    } while (iVar7 < DAT_00940c28);
  }
  pcVar4 = *(char **)(param_2 + 0x18);
  if (pcVar4 == (char *)0x0) {
    pcVar4 = s_;
  }
  apLogErr(s_Cannot_find_entity_class__s__ins,param_1,pcVar4);
  return (entENTITY *)0x0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:entity.cpp
   addr: 004F5980 */

void __fastcall entRegister(entENTITY *param_1,animINST *param_2,void *param_3)

{
  char cVar1;
  uint uVar2;
  animINST *this;
  char *pcVar3;
  char *pcVar4;
  uint uStack_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  gsMSG_MP_PTR agStack_168 [2];
  undefined2 uStack_166;
  void *pvStack_164;
  undefined4 uStack_160;
  char acStack_15c [64];
  char acStack_11c [64];
  char acStack_dc [64];
  undefined4 uStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  m3dMATR amStack_86 [134];
  
  if (param_2 != (animINST *)0x0) {
    *(animINST **)(param_1 + 0xbc) = param_2;
    *(entENTITY **)(param_2 + 0x13c) = param_1;
  }
  msgSYSTEM::InsertAddr(&msgSystem,(msgADDR *)param_1,*(ulong *)(param_1 + 0x14),0);
  if (param_2 != (animINST *)0x0) {
    if (*(int *)(param_2 + 0x138) != 0) {
      if (*(int *)(*(int *)(param_2 + 0x138) + 0xa4) == 0) {
        (**(code **)(*(int *)param_1 + 0x3c))();
      }
      animINST::AbvCalcBVolEnclos(*(animINST **)(param_1 + 0xbc),4,2,-1.0);
    }
    animINST::CreateAnimSys(param_2);
  }
  objInitLOD(*(objOBJ **)(param_2 + 0x10));
  animINST::LODInit(param_2);
  animINST::CDTInit(param_2);
  if (((gsAppState & 0x40000U) != 0) &&
     (*(uint *)(param_1 + 0xb4) = *(uint *)(param_1 + 0xb4) | 1, (gsAppState & 0x40000U) != 0)) {
    gsLvlInstLoadNotify(*(animINST **)(param_1 + 0xbc),(void *)0x0);
  }
  uVar2 = *(uint *)(param_1 + 0xb4);
  msgSYSTEM::SendMsg(&msgSystem,(msgADDR *)param_1,1,param_3,(msgADDR *)0x0);
  if ((gsAppState & 4U) != 0) {
    msgSYSTEM::SendMsg(&msgSystem,(msgADDR *)param_1,0x3ef,(void *)0x0,(msgADDR *)0x0);
  }
  if ((gsAppState & 0x40000U) != 0) {
    msgSYSTEM::SendMsg(&msgSystem,(msgADDR *)param_1,0x3f4,(void *)0x0,(msgADDR *)0x0);
  }
  if ((gsAppState & 4U) != 0) {
    msgSYSTEM::SendMsg(&msgSystem,(msgADDR *)param_1,0x3f1,(void *)0x0,(msgADDR *)0x0);
  }
  if ((*(int *)(param_1 + 0x8c) != -1) && ((uVar2 & 1) != 0)) {
    if ((*(int *)(gsSysMP + 0x28) == 2) || (*(int *)(gsSysMP + 0x28) == 4)) {
      gsMSG_MP_PTR::gsMSG_MP_PTR(agStack_168);
      uStack_160 = 0xffffffff;
      uStack_9c = 0xffffffff;
      animCREATE_DATA::animCREATE_DATA((animCREATE_DATA *)&fStack_98);
      this = *(animINST **)(param_1 + 0xbc);
      acStack_11c[0] = '\0';
      acStack_dc[0] = '\0';
      uStack_166 = 0x166;
      pcVar3 = *(char **)(this + 0x18);
      if (pcVar3 == (char *)0x0) {
        pcVar3 = s_;
      }
      pcVar4 = acStack_15c;
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        *pcVar4 = cVar1;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      pcVar3 = *(char **)(this + 0x1c);
      if (pcVar3 == (char *)0x0) {
        pcVar3 = s_;
      }
      pcVar4 = acStack_11c;
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        *pcVar4 = cVar1;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      pcVar3 = *(char **)(this + 0x20);
      if (pcVar3 == (char *)0x0) {
        pcVar3 = s_;
      }
      pcVar4 = acStack_dc;
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        *pcVar4 = cVar1;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      animINST::MakeCreateData(this,(animCREATE_DATA *)&fStack_98);
      uStack_160 = *(undefined4 *)(param_1 + 0x8c);
      pvStack_164 = param_3;
      uStack_9c = *(undefined4 *)(*(int *)(param_1 + 0xbc) + 0x130);
      m3dMATR::GetScale(amStack_86,&fStack_174,&fStack_170,&fStack_16c);
      uStack_178 = (uint)(ABS(fStack_174 - ___real_3f800000) < _DAT_005dc480);
      if ((float)uStack_178 == ___real_00000000) {
        m3dMATR::RemoveScale(amStack_86);
        fStack_98 = fStack_98 * fStack_174;
        fStack_94 = fStack_94 * fStack_170;
        fStack_90 = fStack_90 * fStack_16c;
      }
      gsMP_SERVER::SendMsgClientAll
                (gsSysServer,(entIACTIVE_OBJ *)0x0,0x402,(msgDATA *)agStack_168,0x20000,0xffffffff,
                 0xfffffffd);
    }
    entPackInitDataPacked(param_1,(msgDATA *)param_3);
  }
  return;
}




/* from: gs:entity.cpp
   addr: 004F5C80 */

entENTITY * __fastcall
entCreate(scnSCENE *param_1,char *param_2,char *param_3,animCREATE_DATA *param_4,void *param_5,
         int param_6)

{
  int iVar1;
  entENTITY *peVar2;
  int unaff_ESI;
  void *unaff_EDI;
  scnSCENE *local_4;
  
  local_4 = param_1;
  iVar1 = _apCfgReadBool((void **)&DAT_00940c24,s_Debug,s_Decomp_ProfCallFr,(int *)&local_4);
  if ((iVar1 != 0) && (local_4 != (scnSCENE *)0x0)) {
    peVar2 = entCreateProfile((scnSCENE *)param_3,(char *)param_4,(char *)param_5,
                              (animCREATE_DATA *)param_6,unaff_EDI,unaff_ESI);
    return peVar2;
  }
  peVar2 = entCreateProfile((scnSCENE *)param_3,(char *)param_4,(char *)param_5,
                            (animCREATE_DATA *)param_6,unaff_EDI,unaff_ESI);
  return peVar2;
}




/* from: gs:entity.cpp
   addr: 004F5D10 */

entENTITY * __fastcall
entCreate(scnSCENE *param_1,char *param_2,char *param_3,animCREATE_DATA *param_4,void *param_5,
         int param_6)

{
  char cVar1;
  animTPL aVar2;
  animTPL *paVar3;
  animTPL *paVar4;
  entENTITY *peVar5;
  int iVar6;
  animINST *paVar7;
  char *pcVar8;
  char *pcVar9;
  bool bVar10;
  animTPL aaStack_40 [64];
  
  if (param_3 != (char *)0x0) {
    iVar6 = -1;
    pcVar8 = param_3;
    do {
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    if (iVar6 != -2) goto LAB_004f5d3c;
  }
  entGetClassTplName(param_2,param_3);
LAB_004f5d3c:
  paVar7 = (animINST *)0x0;
  if (param_3 != (char *)0x0) {
    iVar6 = 2;
    bVar10 = true;
    pcVar8 = param_3;
    pcVar9 = &s__;
    do {
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      bVar10 = *pcVar8 == *pcVar9;
      pcVar8 = pcVar8 + 1;
      pcVar9 = pcVar9 + 1;
    } while (bVar10);
    if (!bVar10) {
      paVar3 = (animTPL *)(**(code **)(*(int *)gsSysLevel + 0x24))(param_3);
      if (paVar3 == (animTPL *)0x0) {
        return (entENTITY *)0x0;
      }
      paVar7 = scnSCENE::CreateInst(param_1,paVar3,param_4,-1);
      if (paVar7 == (animINST *)0x0) {
        return (entENTITY *)0x0;
      }
      iVar6 = -1;
      pcVar8 = param_2;
      do {
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      if (iVar6 == -2) {
        paVar4 = paVar3 + 0x44;
        if (paVar3[0x44] == (animTPL)0x0) {
          iVar6 = 0;
          do {
            aVar2 = *(animTPL *)(s_dynamic + iVar6);
            aaStack_40[iVar6] = aVar2;
            iVar6 = iVar6 + 1;
          } while (aVar2 != (animTPL)0x0);
        }
        else {
          iVar6 = -(int)paVar4;
          do {
            aVar2 = *paVar4;
            paVar4[(int)(aaStack_40 + iVar6)] = aVar2;
            paVar4 = paVar4 + 1;
          } while (aVar2 != (animTPL)0x0);
        }
        param_2 = (char *)aaStack_40;
      }
    }
  }
  peVar5 = entCreate(param_2,paVar7,param_5,param_6);
  if (peVar5 == (entENTITY *)0x0) {
    if (paVar7 != (animINST *)0x0) {
      scnSCENE::DestroyInst(param_1,paVar7);
    }
    return (entENTITY *)0x0;
  }
  if (*(animINST **)(peVar5 + 0xbc) != (animINST *)0x0) {
    animINST::SetNameTpl(*(animINST **)(peVar5 + 0xbc),param_3);
  }
  return peVar5;
}




/* from: gs:entity.cpp
   addr: 004F5E20 */

entENTITY * __fastcall
entCreate(scnSCENE *param_1,char *param_2,char *param_3,int param_4,animCREATE_DATA *param_5,
         void *param_6,int param_7)

{
  char cVar1;
  animTPL aVar2;
  animTPL *paVar3;
  animTPL *paVar4;
  entENTITY *peVar5;
  int iVar6;
  animINST *this;
  char *pcVar7;
  char *pcVar8;
  bool bVar9;
  animTPL aaStack_40 [64];
  
  if (param_3 != (char *)0x0) {
    iVar6 = -1;
    pcVar7 = param_3;
    do {
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    if (iVar6 != -2) goto LAB_004f5e4c;
  }
  entGetClassTplName(param_2,param_3);
LAB_004f5e4c:
  this = (animINST *)0x0;
  if (param_3 != (char *)0x0) {
    iVar6 = 2;
    bVar9 = true;
    pcVar7 = param_3;
    pcVar8 = &s__;
    do {
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      bVar9 = *pcVar7 == *pcVar8;
      pcVar7 = pcVar7 + 1;
      pcVar8 = pcVar8 + 1;
    } while (bVar9);
    if (!bVar9) {
      paVar3 = (animTPL *)(**(code **)(*(int *)gsSysLevel + 0x24))(param_3);
      if (paVar3 == (animTPL *)0x0) {
        return (entENTITY *)0x0;
      }
      this = scnSCENE::CreateInst(param_1,paVar3,param_5,param_4);
      if (this == (animINST *)0x0) {
        return (entENTITY *)0x0;
      }
      iVar6 = -1;
      pcVar7 = param_2;
      do {
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      if (iVar6 == -2) {
        paVar4 = paVar3 + 0x44;
        if (paVar3[0x44] == (animTPL)0x0) {
          iVar6 = 0;
          do {
            aVar2 = *(animTPL *)(s_dynamic + iVar6);
            aaStack_40[iVar6] = aVar2;
            iVar6 = iVar6 + 1;
          } while (aVar2 != (animTPL)0x0);
        }
        else {
          iVar6 = -(int)paVar4;
          do {
            aVar2 = *paVar4;
            paVar4[(int)(aaStack_40 + iVar6)] = aVar2;
            paVar4 = paVar4 + 1;
          } while (aVar2 != (animTPL)0x0);
        }
        param_2 = (char *)aaStack_40;
      }
      animINST::SetNameTpl(this,param_3);
    }
  }
  peVar5 = entCreate(param_2,this,param_6,param_7);
  if (peVar5 == (entENTITY *)0x0) {
    if (this != (animINST *)0x0) {
      scnSCENE::DestroyInst(param_1,this);
    }
    return (entENTITY *)0x0;
  }
  return peVar5;
}




/* from: gs:entity.cpp
   addr: 004F5F20 */

void __fastcall entDestroy(entENTITY *param_1)

{
  if (param_1 != (entENTITY *)0x0) {
    apFree(*(void **)(param_1 + 0x145));
    *(undefined4 *)(param_1 + 0x145) = 0;
    *(undefined2 *)(param_1 + 0x149) = 0;
    entENTITY::TermFollow(param_1);
    msgSYSTEM::DestroyAddr(&msgSystem,(msgADDR *)param_1);
    gsLvlInstDestroyNotify(*(animINST **)(param_1 + 0xbc),(void *)0x0);
    if (*(animINST **)(param_1 + 0xbc) != (animINST *)0x0) {
      scnSCENE::DestroyInst(gsScenePtr,*(animINST **)(param_1 + 0xbc));
    }
  }
  return;
}




/* from: gs:entity.cpp
   addr: 004F5F80 */

int __fastcall entGetClassTplName(char *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  
  iVar2 = _entFindClass(param_1);
  if (-1 < iVar2) {
    iVar4 = -1;
    pcVar3 = &DAT_00940c7c + iVar2 * 0x90;
    pcVar5 = pcVar3;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    if (iVar4 != -2) {
      iVar2 = (int)param_2 - (int)pcVar3;
      do {
        cVar1 = *pcVar3;
        pcVar3[iVar2] = cVar1;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      return 1;
    }
  }
  return 0;
}




/* from: gs:entity.cpp
   addr: 004F5FD0 */

int __fastcall _entFindClass(char *param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  byte *_Str1;
  byte *pbVar6;
  bool bVar7;
  
  iVar5 = 0;
  if (0 < DAT_00940c28) {
    _Str1 = &DAT_00940c30;
    do {
      pbVar2 = _Str1;
      pbVar6 = (byte *)param_1;
      if (*(int *)(_Str1 + 0x8c) == 0) {
        uVar4 = 0xffffffff;
        do {
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          bVar1 = *pbVar2;
          pbVar2 = pbVar2 + 1;
        } while (bVar1 != 0);
        iVar3 = strncmp((char *)_Str1,param_1,~uVar4 - 1);
      }
      else {
        do {
          bVar1 = *pbVar2;
          bVar7 = bVar1 < *pbVar6;
          if (bVar1 != *pbVar6) {
LAB_004f6021:
            iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
            goto LAB_004f603f;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar2[1];
          bVar7 = bVar1 < pbVar6[1];
          if (bVar1 != pbVar6[1]) goto LAB_004f6021;
          pbVar2 = pbVar2 + 2;
          pbVar6 = pbVar6 + 2;
        } while (bVar1 != 0);
        iVar3 = 0;
      }
LAB_004f603f:
      if (iVar3 == 0) {
        return iVar5;
      }
      iVar5 = iVar5 + 1;
      _Str1 = _Str1 + 0x90;
    } while (iVar5 < DAT_00940c28);
  }
  return -1;
}




/* from: gs:entity.cpp
   addr: 004F6070 */

entENTITY * __fastcall entFindNext(entENTITY *param_1)

{
  msgADDR *this;
  ulong uVar1;
  
  if (param_1 == (entENTITY *)0x0) {
    this = msgSYSTEM::GetFirstAddr(&msgSystem);
  }
  else {
    this = msgADDR::GetNext((msgADDR *)param_1);
  }
  while ((this != (msgADDR *)0x0 && (uVar1 = msgADDR::GetSign(this), uVar1 != 0x454e5424))) {
    this = msgADDR::GetNext(this);
  }
  return (entENTITY *)this;
}




/* from: gs:entity.cpp
   addr: 004F60B0 */

void __fastcall _entAnimSetSeqName(animTPL *param_1,int param_2,char *param_3)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar2 = strstr(param_3,s__SEQ_);
  pcVar2 = pcVar2 + 5;
  pcVar3 = (char *)(*(int *)(param_1 + 0x90) + param_2 * 0x88);
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    *pcVar3 = cVar1;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  return;
}




/* from: gs:entity.cpp
   addr: 004F60F0 */

void __fastcall _entAnimSetSeqGroupName(animTPL *param_1,int param_2,char *param_3)

{
  char cVar1;
  animSYSTEM_GROUP *this;
  char *pcVar2;
  ulong uVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  char *pcVar11;
  
  pcVar2 = strstr(param_3,s__SEQ_);
  this = *(animSYSTEM_GROUP **)(param_1 + 0xa4);
  if ((this == (animSYSTEM_GROUP *)0x0) || (param_2 < 1)) {
    pcVar2 = pcVar2 + 5;
    pcVar8 = (char *)(*(int *)(param_1 + 0x90) + param_2 * 0x88);
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      *pcVar8 = cVar1;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
  }
  else {
    iVar10 = 0;
    uVar3 = animSYSTEM_GROUP::GetNGroup(this);
    if (0 < (int)uVar3) {
      iVar9 = param_2 * 0x88;
      do {
        pcVar4 = (char *)(*(int *)(param_1 + 0x90) + iVar9);
        pcVar8 = pcVar2 + 5;
        do {
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
          *pcVar4 = cVar1;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        pcVar4 = animSYSTEM_GROUP::GetGroupSuffix(this,iVar10);
        uVar5 = 0xffffffff;
        pcVar8 = (char *)(*(int *)(param_1 + 0x90) + iVar9);
        iVar9 = iVar9 + 0x88;
        do {
          pcVar11 = pcVar4;
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          pcVar11 = pcVar4 + 1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar11;
        } while (cVar1 != '\0');
        uVar5 = ~uVar5;
        iVar6 = -1;
        do {
          pcVar4 = pcVar8;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pcVar4 = pcVar8 + 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar4;
        } while (cVar1 != '\0');
        pcVar8 = pcVar11 + -uVar5;
        pcVar4 = pcVar4 + -1;
        for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pcVar4 = *(undefined4 *)pcVar8;
          pcVar8 = pcVar8 + 4;
          pcVar4 = pcVar4 + 4;
        }
        iVar10 = iVar10 + 1;
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pcVar4 = *pcVar8;
          pcVar8 = pcVar8 + 1;
          pcVar4 = pcVar4 + 1;
        }
        uVar3 = animSYSTEM_GROUP::GetNGroup(this);
        if ((int)uVar3 <= iVar10) {
          return;
        }
      } while( true );
    }
  }
  return;
}




/* from: gs:entity.cpp
   addr: 004F61F0 */

void __fastcall entAnimAssignTplSeq(animTPL *param_1,animSEQ *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_EBX;
  animSEQ *paVar4;
  undefined4 *puVar5;
  int *local_8;
  int local_4;
  
  local_4 = param_3;
  iVar2 = *(int *)(param_1 + 0x8c);
  piVar1 = (int *)operator_new(iVar2 * 0x24 + 4);
  if (piVar1 == (int *)0x0) {
    local_8 = (int *)0x0;
  }
  else {
    local_8 = piVar1 + 1;
    *piVar1 = iVar2;
    _vector_constructor_iterator_(local_8,0x24,iVar2,abvBVOL::abvBVOL);
  }
  if (0 < param_3) {
    param_3 = 0;
    do {
      iVar2 = animTPL::FindSeqName(param_1,(char *)param_2);
      if (iVar2 == -1) {
        apMsg(s_Cannot_find_anim_sequence__s_for,param_2,param_1 + 4);
      }
      else {
        paVar4 = param_2;
        puVar5 = (undefined4 *)(*(int *)(param_1 + 0x90) + iVar2 * 0x88);
        for (iVar3 = 0x22; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar5 = *(undefined4 *)paVar4;
          paVar4 = paVar4 + 4;
          puVar5 = puVar5 + 1;
        }
        abvBVOL::operator=((abvBVOL *)(local_8 + iVar2 * 9),
                           (abvBVOL *)(*(int *)(param_1 + 0xb8) + param_3));
      }
      param_2 = param_2 + 0x88;
      param_3 = param_3 + 0x24;
      local_4 = local_4 + -1;
    } while (local_4 != 0);
  }
  if (*(undefined4 **)(param_1 + 0xb8) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0xb8))(3);
    *(undefined4 *)(param_1 + 0xb8) = unaff_EBX;
    return;
  }
  *(int **)(param_1 + 0xb8) = local_8;
  return;
}




/* from: gs:entity.cpp
   addr: 004F6300 */

int __thiscall entCDT_REFINE_INCL::IsInclInst(entCDT_REFINE_INCL *this,animINST *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x13c);
  if (iVar1 == 0) {
    return iVar1;
  }
  iVar1 = apSTATE::IsState((apSTATE *)(this + 0xc),*(int *)(iVar1 + 0xb8));
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = cdtREFINE::IsInclInst((cdtREFINE *)this,param_1);
  return iVar1;
}




/* from: gs:entity.cpp
   addr: 004F6350 */

int __thiscall entCDT_REFINE_EXCL::IsInclInst(entCDT_REFINE_EXCL *this,animINST *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x13c);
  if (iVar1 == 0) {
    return iVar1;
  }
  iVar1 = apSTATE::IsState((apSTATE *)(this + 0xc),*(int *)(iVar1 + 0xb8));
  if (iVar1 != 0) {
    return 0;
  }
  iVar1 = cdtREFINE::IsInclInst((cdtREFINE *)this,param_1);
  return iVar1;
}

