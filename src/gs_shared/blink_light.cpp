
/* from: gs_shared:blink_light.cpp
   addr: 0053F250
   addr: 0053F250 */

void * __thiscall blkLIGTH::_scalar_deleting_destructor_(blkLIGTH *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  gsDOMAIN_LIST::~gsDOMAIN_LIST((gsDOMAIN_LIST *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:blink_light.cpp
   addr: 0053F280 */

int __thiscall
blkLIGTH::ProcessMsg(blkLIGTH *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float10 fVar5;
  double dVar6;
  float local_4;
  
  if (param_1 == 2) {
    if (*(msgADDR **)(this + 0x15b) != (msgADDR *)0x0) {
      msgSYSTEM::PostMsg(&msgSystem,*(msgADDR **)(this + 0x15b),2,(msgADDR *)0x0);
    }
    txmLAYER::SetWeight((txmLAYER *)
                        (*(int *)(this + 0x157) + 0x7c +
                        *(int *)(*(int *)(this + 0x153) + 0xa8) * 0x4c),0.0);
  }
  else if (param_1 == 3) {
    if (*(void **)(this + 0x15b) == param_2) {
      *(undefined4 *)(this + 0x15b) = 0;
      return 0;
    }
  }
  else if ((param_1 == 1000) && (iVar1 = *(int *)(this + 0x157), iVar1 != 0)) {
    fVar3 = gsElapsedTime + *(float *)(this + 0x167);
    *(float *)(this + 0x167) = fVar3;
    if (*(int *)(this + 0x14f) == 1) {
      iVar1 = *(int *)(this + 0x163);
      iVar4 = *(int *)(iVar1 + 0x10);
      if (4 < iVar4) {
        iVar4 = 4;
      }
      param_2 = (void *)(_DAT_005dda1c * ___real_42c80000 +
                        *(float *)(*(int *)(iVar1 + 0x18) * iVar4 + *(int *)(iVar1 + 0x24)));
      param_1 = (int)(ABS((float)param_2) < _DAT_005dda1c);
      fVar2 = fVar3;
      if ((float)param_1 == ___real_00000000) {
        dVar6 = floor((double)(fVar3 / (float)param_2));
        fVar2 = (float)dVar6 * (float)param_2;
      }
      (**(code **)(**(int **)(this + 0x163) + 0x10))(fVar3 - fVar2,&param_1);
      txmLAYER::SetWeight((txmLAYER *)
                          (*(int *)(this + 0x157) + 0x7c +
                          *(int *)(*(int *)(this + 0x153) + 0xa8) * 0x4c),(float)param_1);
    }
    else if (*(int *)(this + 0x14f) == 2) {
      iVar4 = *(int *)(*(int *)(this + 0x153) + 0xa8);
      fVar5 = (float10)(**(code **)(*(int *)m3dNoise + 8))();
      txmLAYER::SetWeight((txmLAYER *)(iVar1 + 0x7c + iVar4 * 0x4c),
                          (float)((fVar5 + (float10)___real_3f800000) * (float10)___real_3f000000));
    }
    iVar1 = *(int *)(this + 0x15b);
    if (iVar1 != 0) {
      local_4 = *(float *)(*(int *)(this + 0x157) + 0xc4 +
                          *(int *)(*(int *)(this + 0x153) + 0xa8) * 0x4c) * ___real_437f0000 +
                ___real_428c0000;
      if (___real_437f0000 < local_4) {
        local_4 = 255.0;
      }
      *(undefined4 *)(iVar1 + 0x163) = *(undefined4 *)(iVar1 + 0x163);
      *(undefined4 *)(iVar1 + 0x167) = *(undefined4 *)(iVar1 + 0x167);
      *(undefined4 *)(iVar1 + 0x16b) = *(undefined4 *)(iVar1 + 0x16b);
      *(float *)(iVar1 + 0x16f) = local_4;
      return 0;
    }
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:blink_light.cpp
   addr: 0053F510 */

entENTITY * __fastcall blklCreate(lgtLIGHT *param_1,txmTEXTURE_LAY *param_2)

{
  int iVar1;
  entENTITY *this;
  float fVar2;
  m3dSPL *this_00;
  entENTITY *peVar3;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  undefined4 local_f4;
  float local_f0;
  float local_ec;
  int local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  char local_d8 [64];
  animCREATE_DATA local_98 [18];
  m3dMATR local_86 [64];
  char local_46 [70];
  
  animCREATE_DATA::animCREATE_DATA(local_98);
  if (*(psSHEET **)(param_1 + 0xf8) != (psSHEET *)0x0) {
    iVar1 = psSHEET::GetStr(*(psSHEET **)(param_1 + 0xf8),s_BLINK_LIGHT,s_type,local_d8,0x40);
    if (iVar1 != 0) {
      this = (entENTITY *)operator_new(0x16b);
      if (this == (entENTITY *)0x0) {
        this = (entENTITY *)0x0;
      }
      else {
        entENTITY::entENTITY(this);
        *(undefined ***)this = &blkLIGTH::_vftable_;
        *(undefined4 *)(this + 0x14f) = 0;
        *(undefined4 *)(this + 0x153) = 0;
        *(undefined4 *)(this + 0x157) = 0;
        *(undefined4 *)(this + 0x15b) = 0;
        *(undefined4 *)(this + 0x167) = 0;
        *(undefined4 *)(this + 0x15f) = 0;
      }
      *(txmTEXTURE_LAY **)((msgADDR *)this + 0x157) = param_2;
      *(undefined4 *)((msgADDR *)this + 0x14) = 0x24424c4c;
      *(undefined4 *)((msgADDR *)this + 0x1c) = 0x46;
      *(undefined4 *)((msgADDR *)this + 0x14f) = 0;
      *(lgtLIGHT **)((msgADDR *)this + 0x153) = param_1;
      *(float *)((msgADDR *)this + 0x15f) = 0.0;
      msgSYSTEM::InsertAddr(&msgSystem,(msgADDR *)this,0x24424c4c,0);
      fVar2 = (float)stricmp(local_d8,s_anim);
      if (fVar2 == 0.0) {
        *(undefined4 *)((msgADDR *)this + 0x14f) = 1;
        local_108 = 1.0;
        local_104 = fVar2;
        local_f0 = fVar2;
        local_ec = fVar2;
        psSHEET::GetFloat(*(psSHEET **)(param_1 + 0xf8),s_BLINK_LIGHT,s_period,&local_108);
        psSHEET::GetFloat(*(psSHEET **)(param_1 + 0xf8),s_BLINK_LIGHT,s_stayOn,&local_104);
        psSHEET::GetFloat(*(psSHEET **)(param_1 + 0xf8),s_BLINK_LIGHT,s_stayOff,&local_f0);
        psSHEET::GetFloat(*(psSHEET **)(param_1 + 0xf8),s_BLINK_LIGHT,s_offset,&local_ec);
        this_00 = m3dSPL::Make(0,5);
        *(m3dSPL **)((msgADDR *)this + 0x163) = this_00;
        m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)this_00,0,0.0,0.0);
        m3dSPL_LINEAR1D::SetKp
                  (*(m3dSPL_LINEAR1D **)((msgADDR *)this + 0x163),1,
                   (local_108 - local_104) * ___real_3f000000,1.0);
        m3dSPL_LINEAR1D::SetKp
                  (*(m3dSPL_LINEAR1D **)((msgADDR *)this + 0x163),2,
                   local_108 - (local_108 - local_104) * ___real_3f000000,1.0);
        m3dSPL_LINEAR1D::SetKp(*(m3dSPL_LINEAR1D **)((msgADDR *)this + 0x163),3,local_108,0.0);
        m3dSPL_LINEAR1D::SetKp
                  (*(m3dSPL_LINEAR1D **)((msgADDR *)this + 0x163),4,local_f0 + local_108,0.0);
        *(float *)((msgADDR *)this + 0x167) = local_ec;
      }
      else {
        iVar1 = stricmp(local_d8,s_noise);
        if (iVar1 == 0) {
          *(undefined4 *)((msgADDR *)this + 0x14f) = 2;
          psSHEET::GetFloat(*(psSHEET **)(param_1 + 0xf8),s_BLINK_LIGHT,s_noiseFreq,
                            (float *)((msgADDR *)this + 0x15f));
        }
        else {
          apMsg(s_Undefinite_light_effect__light__,param_1);
        }
      }
      iVar1 = psSHEET::GetInt(*(psSHEET **)(param_1 + 0xf8),s_BLINK_LIGHT,s_isAddShine,&local_e8);
      if ((iVar1 != 0) && (local_e8 != 0)) {
        m3dMATR::Identity(local_86);
        m3dMATR::GetOrigin((m3dMATR *)(param_1 + 0x48),(m3dV *)&local_e4);
        m3dMATR::Translate(local_86,local_e4,local_e0,local_dc,0);
        sprintf(local_46,s_blk_shine);
        peVar3 = entCreate(gsScenePtr,s_flare,s_,local_98,(void *)0x0,0);
        *(entENTITY **)((msgADDR *)this + 0x15b) = peVar3;
        if (peVar3 == (entENTITY *)0x0) {
          apMsg(s_Cannot_create_shine_effect);
        }
        iVar1 = *(int *)((msgADDR *)this + 0x15b);
        if (iVar1 != 0) {
          local_100 = *(float *)(param_1 + 0x88) * ___real_437f0000;
          local_f8 = *(float *)(param_1 + 0x90);
          local_fc = *(float *)(param_1 + 0x8c) * ___real_437f0000;
          *(float *)(iVar1 + 0x163) = local_100;
          local_f4 = 0x437f0000;
          local_f8 = local_f8 * ___real_437f0000;
          *(float *)(iVar1 + 0x167) = local_fc;
          *(float *)(iVar1 + 0x16b) = local_f8;
          *(undefined4 *)(iVar1 + 0x16f) = 0x437f0000;
          flrFLARE::SetPos(*(flrFLARE **)((msgADDR *)this + 0x15b),(m3dV *)&local_e4);
          *(undefined4 *)(*(int *)((msgADDR *)this + 0x15b) + 0x15f) = 0x3e4ccccd;
          flrFLARE::EnableShine(*(flrFLARE **)((msgADDR *)this + 0x15b),1);
          flrFLARE::EnableAnim(*(flrFLARE **)((msgADDR *)this + 0x15b),4,0);
        }
        *(uint *)((msgADDR *)this + 0xc) = *(uint *)((msgADDR *)this + 0xc) | 2;
      }
      return this;
    }
  }
  return (entENTITY *)0x0;
}




/* from: gs_shared:blink_light.cpp
   addr: 0053F8F0 */

void __fastcall blklCreateLMLightSources(void)

{
  int iVar1;
  int iVar2;
  int local_c;
  lgtLIGHT_GROUP *local_8;
  txmTEXTURE_LAY **local_4;
  
  iVar1 = scnSCENE::GetAnimLights(gsScenePtr,&local_c,&local_8,&local_4);
  if (iVar1 != 0) {
    iVar1 = 0;
    if (0 < local_c) {
      iVar2 = 0;
      do {
        if (local_4[iVar1] != (txmTEXTURE_LAY *)0x0) {
          blklCreate(*(lgtLIGHT **)(local_8 + iVar2 + 0x44),local_4[iVar1]);
        }
        iVar1 = iVar1 + 1;
        iVar2 = iVar2 + 0x1d4;
      } while (iVar1 < local_c);
    }
    operator_delete(local_8);
    operator_delete(local_4);
  }
  return;
}

