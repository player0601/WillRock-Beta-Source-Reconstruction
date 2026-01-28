
/* from: plw_acd.cpp
   addr: 00401180 */

int __fastcall pwpACDInit(void)

{
  int iVar1;
  
  iVar1 = entRegisterClass(s_pwp_acd,0x50414344,0x50,pwpACIDGUN::Create,(char *)0x0,1);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = entRegisterClass(s_pwp_acd_pjl,0x50414344,0x2d,pwpACD_PJL::Create,(char *)0x0,1);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = entRegisterClass(s_pwp_acd_pjl_expl,0x50414344,0x2d,pwpACD_EXPLOSION::Create,(char *)0x0,1
                          );
  if (iVar1 == 0) {
    return 0;
  }
  pwpACIDGUN::pTexSmoke = txmMANAGER::Add(txmManager,s_sfx_acd_smoke,0x40003,1);
  if (pwpACIDGUN::pTexSmoke == (txmTEXTURE *)0x0) {
    return 0;
  }
  pwpACIDGUN::pTexDrops = txmMANAGER::Add(txmManager,s_sfx_acd_drops,0x40003,1);
  if (pwpACIDGUN::pTexDrops == (txmTEXTURE *)0x0) {
    return 0;
  }
  pwpACIDGUN::pTexScorchMark = txmMANAGER::Add(txmManager,s_sfx_bsk_scorch_mark,0x40003,1);
  if (pwpACIDGUN::pTexScorchMark == (txmTEXTURE *)0x0) {
    return 0;
  }
  iVar1 = sncLinkSndListData(5,(sncSOUND_DESCR_3D *)&DAT_006019f8);
  return (uint)(iVar1 != 0);
}




/* from: plw_acd.cpp
   addr: 00401260 */

entENTITY * __fastcall pwpACD_PJL::Create(animINST *param_1)

{
  physPHYS *this;
  
  this = (physPHYS *)operator_new(0x178);
  if (this != (physPHYS *)0x0) {
    physPHYS::physPHYS(this);
    *(undefined4 *)(this + 0x153) = 0;
    *(undefined4 *)(this + 0x157) = 0;
    *(undefined4 *)(this + 0x15f) = 0;
    *(undefined4 *)(this + 0x163) = 0xffffffff;
    *(undefined4 *)(this + 0x167) = 0xffffffff;
    *(undefined4 *)(this + 0x16b) = 0xffffffff;
    *(undefined4 *)(this + 0x174) = 0;
    *(undefined4 *)(this + 0x15b) = 0xbf800000;
    *(undefined4 *)(this + 0x16f) = 0xbf800000;
    *(undefined ***)this = &_vftable_;
    return (entENTITY *)this;
  }
  return (entENTITY *)0x0;
}




/* from: plw_acd.cpp
   addr: 004012D0 */

entENTITY * __fastcall pwpACD_EXPLOSION::Create(animINST *param_1)

{
  entENTITY *this;
  
  this = (entENTITY *)operator_new(0x15b);
  if (this != (entENTITY *)0x0) {
    entENTITY::entENTITY(this);
    *(undefined4 *)(this + 0x14f) = 0;
    *(undefined4 *)(this + 0x153) = 0;
    *(undefined4 *)(this + 0x157) = 0;
    *(undefined ***)this = &_vftable_;
    return this;
  }
  return (entENTITY *)0x0;
}




/* from: plw_acd.cpp
   addr: 00401320
   addr: 00401320 */

void * __thiscall
pwpACD_EXPLOSION::_scalar_deleting_destructor_(pwpACD_EXPLOSION *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  gsDOMAIN_LIST::~gsDOMAIN_LIST((gsDOMAIN_LIST *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: plw_acd.cpp
   addr: 00401350 */

void __thiscall pwpACIDGUN::Anim2Sound(pwpACIDGUN *this)

{
  int iVar1;
  
  iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),7,*(int *)(this + 0x19b));
  if (iVar1 != 0) {
    *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 1;
    return;
  }
  iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),9,0);
  if (iVar1 != 0) {
    *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 2;
  }
  return;
}




/* from: plw_acd.cpp
   addr: 004013A0 */

void __thiscall pwpACIDGUN::UpdateSound(pwpACIDGUN *this)

{
  if ((*(uint *)(this + 0xf8) & 1) == 0) {
    if ((*(uint *)(this + 0xf8) & 2) != 0) {
      (**(code **)(**(int **)(this + 0x183) + 4))(&DAT_00601ac8,0);
    }
    pwpWEAPON::UpdateSound((pwpWEAPON *)this);
    return;
  }
  if (*(int *)(this + 399) == 1) {
    (**(code **)(**(int **)(this + 0x183) + 4))(&DAT_00601a60);
    pwpWEAPON::UpdateSound((pwpWEAPON *)this);
    return;
  }
  (**(code **)(**(int **)(this + 0x183) + 4))(&DAT_006019f8,0);
  pwpWEAPON::UpdateSound((pwpWEAPON *)this);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: plw_acd.cpp
   addr: 00401410 */

int __thiscall pwpACIDGUN::ProcessINIT(pwpACIDGUN *this)

{
  char cVar1;
  int iVar2;
  entENTITY *peVar3;
  pwpACD_SMOKE *this_00;
  pwpACD_DROPS *this_01;
  objOBJ *poVar4;
  uint uVar5;
  char *pcVar6;
  char local_20 [32];
  
  iVar2 = pwpWEAPON::ProcessINIT((pwpWEAPON *)this);
  if (iVar2 == 0) {
    return 0;
  }
  objOBJ::AllocVertNormalList(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10));
  peVar3 = entCreate(gsScenePtr,s_dynamic,s_sfx_acd_flare,(animCREATE_DATA *)0x0,(void *)0x0,0);
  *(entENTITY **)(this + 0x1bb) = peVar3;
  if (peVar3 == (entENTITY *)0x0) {
    return 0;
  }
  objOBJ::SetStateRendYes(*(objOBJ **)(*(int *)(peVar3 + 0xbc) + 0x10),0x1000000);
  objOBJ::SetStateYes(*(objOBJ **)(*(int *)(*(int *)(this + 0x1bb) + 0xbc) + 0x10),0x10);
  *(uint *)(*(int *)(*(int *)(this + 0x1bb) + 0xbc) + 4) =
       *(uint *)(*(int *)(*(int *)(this + 0x1bb) + 0xbc) + 4) | 0x10;
  dynDYNAMIC::StartAnim
            (*(dynDYNAMIC **)(this + 0x1bb),0,
             *(float *)(*(int *)(*(int *)(*(int *)(*(dynDYNAMIC **)(this + 0x1bb) + 0xbc) + 0x138) +
                                0x90) + 0x50) * ___real_3a83126f,0);
  *(uint *)(*(int *)(this + 0x1bb) + 0xb4) = *(uint *)(*(int *)(this + 0x1bb) + 0xb4) | 4;
  this_00 = (pwpACD_SMOKE *)operator_new(0x2c0);
  if (this_00 == (pwpACD_SMOKE *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = pwpACD_SMOKE::pwpACD_SMOKE(this_00,0.2);
  }
  *(int *)(this + 0x1af) = iVar2;
  if (iVar2 == 0) {
    return 0;
  }
  this_01 = (pwpACD_DROPS *)operator_new(0x2c0);
  if (this_01 == (pwpACD_DROPS *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = pwpACD_DROPS::pwpACD_DROPS(this_01,0.015);
  }
  *(int *)(this + 0x1b3) = iVar2;
  if (iVar2 == 0) {
    return 0;
  }
  poVar4 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_drops_source);
  *(objOBJ **)(this + 0x1b7) = poVar4;
  if (poVar4 == (objOBJ *)0x0) {
    return 0;
  }
  objOBJ::SetStateProcYes(poVar4,0x1008,(_func_int_objOBJ_ptr_void_ptr *)0x0);
  iVar2 = 0;
  do {
    iVar2 = iVar2 + 1;
    sprintf(local_20,s_bubbles_plane_d,iVar2);
    uVar5 = 0xffffffff;
    pcVar6 = local_20;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    poVar4 = objFindNameN(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),local_20,~uVar5 - 1);
    if (poVar4 == (objOBJ *)0x0) break;
    objOBJ::SetStateRendYes(poVar4,0x68);
  } while (iVar2 < 2);
  *(uint *)(this + 0x193) = *(uint *)(this + 0x193) | 2;
  *(undefined4 *)(this + 0x19b) = 0;
  *(undefined4 *)(this + 0x197) = 1;
  *(undefined4 *)(this + 0x18b) = 5;
  *(undefined4 *)(this + 399) = 5;
  (**(code **)(*(int *)this + 0xa0))(0x41c80000);
  *(undefined4 *)(this + 0x15b) = 0x42700000;
  *(undefined4 *)(this + 0x157) = 0x42c80000;
  wpnWEAPON::SetAmmo((wpnWEAPON *)this,0.0);
  return 1;
}




/* from: plw_acd.cpp
   addr: 00401630 */

void __thiscall pwpACIDGUN::ProcessTERM(pwpACIDGUN *this)

{
  int iVar1;
  
  if (*(undefined4 **)(this + 0x1b3) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x1b3))(1);
    *(undefined4 *)(this + 0x1b3) = 0;
  }
  if (*(undefined4 **)(this + 0x1af) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x1af))(1);
    *(undefined4 *)(this + 0x1af) = 0;
  }
  iVar1 = *(int *)(this + 0x1bb);
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 0xb4) = *(uint *)(iVar1 + 0xb4) & 0xfffffffb;
    msgSYSTEM::PostMsg(&msgSystem,*(msgADDR **)(this + 0x1bb),2,(msgADDR *)0x0);
  }
  m3dTerm2DMatr();
  return;
}




/* from: plw_acd.cpp
   addr: 004016A0 */

int __thiscall pwpACIDGUN::Shoot(pwpACIDGUN *this,entENTITY *param_1,m3dV *param_2)

{
  int iVar1;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined2 local_2a;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_2c = 0;
  local_2b = 0x40;
  local_28 = 5;
  local_2a = 0x2c;
  iVar1 = wpnWEAPON::Shoot((wpnWEAPON *)this,*(entENTITY **)(this + 0x187),param_2);
  if (iVar1 == 0) {
    return 0;
  }
  objOBJ::GetOrigin(*(objOBJ **)(this + 0x17b),(m3dV *)&local_44);
  local_38 = *(float *)param_2 - local_44;
  local_34 = *(float *)(param_2 + 4) - local_40;
  local_30 = *(float *)(param_2 + 8) - local_3c;
  m3dNormalize((m3dV *)&local_38);
  local_1c = *(undefined4 *)(param_2 + 8);
  local_20 = *(undefined4 *)(param_2 + 4);
  local_24 = *(undefined4 *)param_2;
  local_10 = local_3c;
  local_14 = local_40;
  local_4 = local_30;
  local_18 = local_44;
  local_8 = local_34;
  local_c = local_38;
  (**(code **)(*(int *)gsSysClient + 0x2c))(plrPlayer,0x4c6,&local_2c,0x20000);
  return 1;
}




/* from: plw_acd.cpp
   addr: 004017B0 */

void __thiscall pwpACIDGUN::ProcessFRAME(pwpACIDGUN *this)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  float extraout_EDX;
  int iVar4;
  m3dV local_30 [12];
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  pwpWEAPON::ProcessFRAME((pwpWEAPON *)this);
  if ((*(byte *)(*(int *)(this + 0xbc) + 4) & 1) == 0) {
    iVar4 = 0;
    wpnWEAPON::GetOrgDirTip((wpnWEAPON *)this,local_30,(m3dV *)0x0);
    animINST::SetPos(*(animINST **)(*(int *)(this + 0x1bb) + 0xbc),local_30);
    if (*(int *)(this + 0x1c3) != 0) {
      iVar3 = m3dUpdateTimeField((float *)(this + 0x1bf),extraout_EDX);
      if (iVar3 == 0) {
        partEMITTER_PHYS::SetCS
                  (*(partEMITTER_PHYS **)(this + 0x1af),(m3dMATR *)(*(int *)(this + 0x17b) + 0x3c));
        iVar3 = *(int *)(this + 0x1b7);
        if (0 < *(int *)(iVar3 + 0x10)) {
          do {
            piVar2 = *(int **)(iVar3 + 0x28);
            puVar1 = (undefined4 *)
                     (piVar2[0x10] +
                     (uint)*(ushort *)((uint)*(byte *)(piVar2 + 1) * iVar4 + 2 + *piVar2) * 0xc);
            uStack_24 = *puVar1;
            uStack_20 = puVar1[1];
            uStack_1c = puVar1[2];
            piVar2 = *(int **)(iVar3 + 0x28);
            puVar1 = (undefined4 *)
                     (piVar2[0x10] +
                     (uint)*(ushort *)((uint)*(byte *)(piVar2 + 1) * iVar4 + 4 + *piVar2) * 0xc);
            uStack_18 = *puVar1;
            uStack_14 = puVar1[1];
            uStack_10 = puVar1[2];
            piVar2 = *(int **)(iVar3 + 0x28);
            puVar1 = (undefined4 *)
                     (piVar2[0x10] +
                     (uint)*(ushort *)((uint)*(byte *)(piVar2 + 1) * iVar4 + 6 + *piVar2) * 0xc);
            uStack_c = *puVar1;
            uStack_8 = puVar1[1];
            uStack_4 = puVar1[2];
            partEMITTER_PHYS::SetAreaEmission
                      (*(partEMITTER_PHYS **)(this + 0x1b3),*(int *)(iVar3 + 0x10),iVar4,
                       (m3dTRI *)&uStack_24,0);
            iVar3 = *(int *)(this + 0x1b7);
            iVar4 = iVar4 + 1;
          } while (iVar4 < *(int *)(iVar3 + 0x10));
        }
        partEMITTER_PHYS::SetCS
                  (*(partEMITTER_PHYS **)(this + 0x1b3),(m3dMATR *)(*(int *)(this + 0x1b7) + 0x3c));
      }
      else {
        *(undefined4 *)(this + 0x1c3) = 0;
      }
    }
    iVar4 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),8,1);
    if ((iVar4 != 0) ||
       (iVar4 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),9,1), iVar4 != 0)) {
      ThrowClip(this);
    }
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: plw_acd.cpp
   addr: 00401950 */

void __thiscall pwpACIDGUN::ProcessSHOOT(pwpACIDGUN *this,void *param_1)

{
  partEMITTER_PHYS *ppVar1;
  float10 fVar2;
  undefined4 local_26c;
  float fStack_268;
  float fStack_264;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  float local_234;
  undefined4 local_230;
  undefined4 local_22c;
  undefined4 local_228;
  undefined4 local_224;
  undefined4 local_220;
  undefined1 local_21c;
  undefined4 uStack_21b;
  undefined4 uStack_217;
  undefined4 uStack_213;
  undefined4 uStack_20f;
  undefined4 uStack_20b;
  undefined4 uStack_207;
  undefined4 local_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  m3dMATR amStack_1ee [134];
  gsMSG_MP_PTR local_168 [2];
  undefined2 local_166;
  undefined4 local_160;
  undefined1 local_11c;
  undefined1 local_dc;
  undefined4 local_9c;
  animCREATE_DATA local_98 [152];
  
  physINIT::physINIT((physINIT *)&local_26c);
  local_234 = -1.0;
  local_230 = 0;
  local_22c = 0xffffffff;
  local_228 = 0xffffffff;
  local_224 = 0xffffffff;
  local_220 = 0xbf800000;
  local_21c = 1;
  local_26c = (float)CONCAT22(0x69,(undefined2)local_26c);
  animCREATE_DATA::animCREATE_DATA((animCREATE_DATA *)&local_200);
  gsMSG_MP_PTR::gsMSG_MP_PTR(local_168);
  local_160 = 0xffffffff;
  local_9c = 0xffffffff;
  animCREATE_DATA::animCREATE_DATA(local_98);
  local_11c = 0;
  local_dc = 0;
  local_166 = 0x166;
  if (((byte)this[0x88] & 4) != 0) {
    (**(code **)(*(int *)this + 0x68))(0x3f800000);
    gsMP_SERVER::SendMsgClientAll
              (gsSysServer,*(entIACTIVE_OBJ **)(this + 0x187),0x4c6,(msgDATA *)param_1,0xa0000,
               0xffffffff,0xfffffffd);
    local_26c = *(float *)((int)param_1 + 0x20) * ___real_43000000;
    uStack_250 = 0x3f800000;
    uStack_244 = 0;
    uStack_248 = 0;
    fStack_268 = *(float *)((int)param_1 + 0x24) * ___real_43000000;
    uStack_24c = 1000;
    uStack_254 = 0x3e99999a;
    fStack_264 = *(float *)((int)param_1 + 0x28) * ___real_43000000;
    fVar2 = (float10)(**(code **)(*(int *)this + 0xa4))();
    local_234 = (float)fVar2;
    local_224 = *(undefined4 *)(*(int *)(this + 0x187) + 0x8c);
    uStack_21b = *(undefined4 *)((int)param_1 + 0x14);
    uStack_217 = *(undefined4 *)((int)param_1 + 0x18);
    uStack_213 = *(undefined4 *)((int)param_1 + 0x1c);
    uStack_20f = *(undefined4 *)((int)param_1 + 0x20);
    uStack_20b = *(undefined4 *)((int)param_1 + 0x24);
    uStack_207 = *(undefined4 *)((int)param_1 + 0x28);
    m3dMATR::MakeLCS2WCS_VZ(amStack_1ee,(m3dV *)((int)param_1 + 0x14),(m3dV *)((int)param_1 + 0x20))
    ;
    local_200 = 0x3e99999a;
    uStack_1fc = 0x3e99999a;
    uStack_1f8 = 0x3e99999a;
    entCreate(gsScenePtr,s_pwp_acd_pjl,s_pwp_acd_pjl,(animCREATE_DATA *)&local_200,&local_26c,0);
  }
  if (*(int *)(gsSysMP + 0x28) != 4) {
    animINST::SetPos(*(animINST **)(*(int *)(this + 0x1bb) + 0xbc),(m3dV *)((int)param_1 + 0x14));
    dynDYNAMIC::StartAnim(*(dynDYNAMIC **)(this + 0x1bb),0,0.0,0);
    ppVar1 = *(partEMITTER_PHYS **)(this + 0x1af);
    partEMITTER_PHYS::StopEmission(ppVar1);
    partEMITTER_PHYS::StartEmission(ppVar1);
    ppVar1 = *(partEMITTER_PHYS **)(this + 0x1b3);
    partEMITTER_PHYS::StopEmission(ppVar1);
    partEMITTER_PHYS::StartEmission(ppVar1);
    *(undefined4 *)(this + 0x1bf) = 0x3f555555;
    *(undefined4 *)(this + 0x1c3) = 1;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: plw_acd.cpp
   addr: 00401B90 */

void __thiscall pwpACIDGUN::ThrowClip(pwpACIDGUN *this)

{
  objOBJ *poVar1;
  entENTITY *peVar2;
  undefined1 local_150;
  undefined1 local_14f;
  undefined2 local_14e;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  animCREATE_DATA local_98 [18];
  m3dMATR local_86 [134];
  
  local_144 = DAT_00963740;
  local_138 = DAT_00963740;
  local_150 = 0;
  local_14f = 0x40;
  local_14c = 8;
  local_148 = _m3dVZero;
  local_140 = DAT_00963744;
  local_13c = _m3dVZero;
  local_134 = DAT_00963744;
  local_b8 = 0;
  local_b4 = 0x3f19999a;
  local_b0 = 0x3f4ccccd;
  local_ac = 0x41200000;
  local_a8 = 0x3e99999a;
  local_a4 = 0xbf800000;
  local_a0 = 0xbf800000;
  local_9c = 0xbf800000;
  local_14e = 0xb8;
  animCREATE_DATA::animCREATE_DATA(local_98);
  poVar1 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_clip);
  if (poVar1 != (objOBJ *)0x0) {
    animINST::GetMatrL2W(*(animINST **)(*(int *)(this + 0x187) + 0xbc),local_86);
    m3dMATR::Translate(local_86,-0.5,1.3,0.1,1);
    m3dMATR::GetAxisZ(local_86,(m3dV *)&local_148);
    local_144 = 0xbe99999a;
    local_b0 = 0x3f000000;
    local_b4 = 0x3ecccccd;
    peVar2 = entCreate(gsScenePtr,s_rigid,s_pwp_acd_ammo,local_98,&local_150,0);
    if (peVar2 != (entENTITY *)0x0) {
      objOBJ::SetConstColor
                (*(objOBJ **)(*(int *)(peVar2 + 0xbc) + 0x10),*(ulong *)(this + 0x9c),2,8);
      *(uint *)(*(int *)(peVar2 + 0xbc) + 4) = *(uint *)(*(int *)(peVar2 + 0xbc) + 4) | 0x10;
      msgSYSTEM::PostTimeMsg(&msgSystem,(msgADDR *)peVar2,2,(msgADDR *)0x0,5.0);
    }
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: plw_acd.cpp
   addr: 00401D30 */

pwpACD_SMOKE * __thiscall pwpACD_SMOKE::pwpACD_SMOKE(pwpACD_SMOKE *this,float param_1)

{
  uint uVar1;
  m3dSPL *pmVar2;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,0x3d,300.0,0.6);
  *(undefined ***)this = &_vftable_;
  pmVar2 = (m3dSPL *)operator_new(0x34);
  if (pmVar2 == (m3dSPL *)0x0) {
    pmVar2 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar2,0,8,1);
    *(undefined ***)pmVar2 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar2,4);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,0,0.033333335,0.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,0.06666667,300.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,2,0.13333334,300.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,3,0.16666667,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,0.0,(m3dSPL_LINEAR1D *)pmVar2);
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,0.45,0.15);
  partEMITTER_PHYS::SetSize
            ((partEMITTER_PHYS *)this,param_1 * ___real_3e999999,param_1 * ___real_3dcccccd,
             (m3dSPL_LINEAR1D *)0x0,1.0);
  pmVar2 = (m3dSPL *)operator_new(0x34);
  if (pmVar2 == (m3dSPL *)0x0) {
    pmVar2 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar2,0,8,1);
    *(undefined ***)pmVar2 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar2,2);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,0,0.0,69.615);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar2);
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,pwpACIDGUN::pTexSmoke);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,180.5,179.5,0.0,210.0);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  *(undefined4 *)(this + 0xf8) = 0x43340000;
  *(undefined4 *)(this + 0xfc) = 0;
  *(undefined4 *)(this + 0xe8) = 0x3f199999;
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0xec) = 0;
  *(undefined4 *)(this + 0xb4) = 0x40000000;
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 0x400;
  *(uint *)(this + 4) = uVar1 | 0x800400;
  *(uint *)(this + 4) = uVar1 | 0x10800400;
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: plw_acd.cpp
   addr: 00401EF0 */

pwpACD_DROPS * __thiscall pwpACD_DROPS::pwpACD_DROPS(pwpACD_DROPS *this,float param_1)

{
  uint uVar1;
  m3dSPL *pmVar2;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,100,800.0,0.4);
  *(undefined ***)this = &_vftable_;
  pmVar2 = (m3dSPL *)operator_new(0x34);
  if (pmVar2 == (m3dSPL *)0x0) {
    pmVar2 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar2,0,8,1);
    *(undefined ***)pmVar2 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar2,3);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,0,0.0,0.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,0.033333335,800.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,2,0.23333333,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,0.0,(m3dSPL_LINEAR1D *)pmVar2);
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,0.3,0.1);
  partEMITTER_PHYS::SetSize
            ((partEMITTER_PHYS *)this,param_1 * ___real_3e866666,param_1 * ___real_3e59999a,
             (m3dSPL_LINEAR1D *)0x0,1.0);
  pmVar2 = (m3dSPL *)operator_new(0x34);
  if (pmVar2 == (m3dSPL *)0x0) {
    pmVar2 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar2,0,8,1);
    *(undefined ***)pmVar2 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar2,2);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,0,0.5,255.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar2);
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,pwpACIDGUN::pTexDrops);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,0.0,20.0,0.0,0.0);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  *(undefined4 *)(this + 0xb4) = 0x43200000;
  *(undefined4 *)(this + 0xb8) = 0x42a00000;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0xc0) = 0x42200000;
  *(undefined4 *)(this + 0xc4) = 0x41a00000;
  *(undefined4 *)(this + 200) = 0;
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0xe0) = 0;
  *(undefined1 **)(this + 0xe4) = &DAT_42480000;
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 0xa000;
  *(uint *)(this + 4) = uVar1 | 0xa401;
  *(uint *)(this + 4) = uVar1 | 0x400a401;
  *(uint *)(this + 4) = uVar1 | 0x480a401;
  *(uint *)(this + 4) = uVar1 | 0x1480a401;
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: plw_acd.cpp
   addr: 004020C0 */

pwpACD_PJL_DROPS * __thiscall
pwpACD_PJL_DROPS::pwpACD_PJL_DROPS(pwpACD_PJL_DROPS *this,float param_1)

{
  uint uVar1;
  float fVar2;
  m3dSPL *pmVar3;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,650.0,1.0);
  *(undefined ***)this = &_vftable_;
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
    m3dSPL::AllocKpList(pmVar3,4);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,0.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,0.033333335,1200.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,2,0.5,1200.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,3,0.53333336,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,0.0,(m3dSPL_LINEAR1D *)pmVar3);
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,0.75,0.25);
  pmVar3 = (m3dSPL *)operator_new(0x34);
  if (pmVar3 == (m3dSPL *)0x0) {
    pmVar3 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar3,0,8,1);
    *(undefined ***)pmVar3 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar3,2);
  }
  fVar2 = param_1 * ___real_3d4ccccd;
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,fVar2);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,1.0,0.0);
  partEMITTER_PHYS::SetSize
            ((partEMITTER_PHYS *)this,fVar2,param_1 * ___real_3c888889,(m3dSPL_LINEAR1D *)pmVar3,1.0
            );
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)0x0);
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,pwpACIDGUN::pTexDrops);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,180.5,179.5,0.0,0.0);
  fVar2 = param_1 * ___real_3f000000;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  *(undefined4 *)(this + 0xf8) = 0x43340000;
  *(undefined4 *)(this + 0xfc) = 0;
  *(undefined4 *)(this + 0xb8) = 0;
  *(float *)(this + 0xb4) = fVar2;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0xcc) = 0x3e19999a;
  *(undefined4 *)(this + 0xd0) = 0;
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 0x11;
  *(uint *)(this + 4) = uVar1 | 0x419;
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: plw_acd.cpp
   addr: 00402290 */

int __thiscall pwpACD_PJL_SFX::StartSFX(pwpACD_PJL_SFX *this,physPHYS *param_1,pjlPJL_INIT *param_2)

{
  physMATH *this_00;
  undefined4 uVar1;
  undefined4 uVar2;
  pteSPOT *this_01;
  m3dCTRL_TIME *this_02;
  pwpACD_PJL_DROPS *this_03;
  int iVar3;
  m3dCOLOR amStack_54 [16];
  undefined4 local_44;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_4;
  
  this_00 = *(physMATH **)(param_1 + 0x14f);
  this_01 = (pteSPOT *)operator_new(0x108);
  if (this_01 == (pteSPOT *)0x0) {
    this_01 = (pteSPOT *)0x0;
  }
  else {
    pteSPOT::pteSPOT(this_01,1);
    *(undefined4 *)(this_01 + 0xf8) = 0;
    *(undefined4 *)(this_01 + 0xfc) = 0;
    *(undefined4 *)(this_01 + 0x100) = 0;
    *(undefined4 *)(this_01 + 0x104) = 0;
    *(undefined ***)this_01 = &pteSPOT_ANIM::_vftable_;
  }
  *(pteSPOT **)this = this_01;
  if (this_01 == (pteSPOT *)0x0) {
    return 0;
  }
  this_02 = (m3dCTRL_TIME *)operator_new(0x2c);
  if (this_02 == (m3dCTRL_TIME *)0x0) {
    this_02 = (m3dCTRL_TIME *)0x0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0xbc);
    m3dCTRL_TIME::m3dCTRL_TIME(this_02);
    *(undefined4 *)(this_02 + 0x18) = _m3dVZero;
    *(undefined4 *)(this_02 + 0x1c) = DAT_00963740;
    uVar2 = DAT_00963744;
    *(undefined4 *)(this_02 + 0x24) = uVar1;
    *(undefined4 *)(this_02 + 0x28) = 0;
    *(undefined4 *)(this_02 + 0x20) = uVar2;
    *(undefined ***)this_02 = &animCTRL_3D_FOLLOW::_vftable_;
    *(undefined4 *)(this_02 + 0x14) = 2;
  }
  pteSPOT_ANIM::SetCtrlPos(*(pteSPOT_ANIM **)this,(m3dCTRL_3D *)this_02);
  pteSPOT::SetRadius(*(pteSPOT **)this,2.0);
  local_44 = 0;
  m3dCOLOR::m3dCOLOR(amStack_54,0xff00d847);
  pteSPOT::SetColor(*(pteSPOT **)this);
  pteSHADER::Register(*(pteSHADER **)this);
  this_03 = (pwpACD_PJL_DROPS *)operator_new(0x2c0);
  if (this_03 == (pwpACD_PJL_DROPS *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = pwpACD_PJL_DROPS::pwpACD_PJL_DROPS(this_03,0.1);
  }
  *(int *)(this + 4) = iVar3;
  if (iVar3 == 0) {
    return 0;
  }
  physMATH::GetPos(this_00,(m3dV *)&local_18);
  local_24 = *(float *)(this_00 + 0x48);
  local_20 = *(float *)(this_00 + 0x4c);
  local_1c = *(float *)(this_00 + 0x50);
  m3dNormalize((m3dV *)&local_24);
  local_4 = local_1c * ___real_40a00000;
  local_18 = local_24 * ___real_40a00000 + local_18;
  local_14 = local_14 + local_20 * ___real_40a00000;
  local_10 = local_10 + local_4;
  local_44 = 0x402456;
  partEMITTER_PHYS::SetPosDirSpeed
            (*(partEMITTER_PHYS **)(this + 4),(m3dV *)&local_18,(m3dV *)0x0,(m3dV *)&local_24);
  partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)(this + 4));
  return 1;
}




/* from: plw_acd.cpp
   addr: 00402470 */

int __thiscall pwpACD_PJL::ProcessINIT(pwpACD_PJL *this,physINIT *param_1)

{
  int iVar1;
  entIACTIVE_OBJ *peVar2;
  
  iVar1 = physPHYS::ProcessINIT((physPHYS *)this,param_1);
  if (iVar1 != 0) {
    *(undefined4 *)(this + 0x15b) = *(undefined4 *)(param_1 + 0x38);
    *(undefined4 *)(this + 0x15f) = *(undefined4 *)(param_1 + 0x3c);
    *(undefined4 *)(this + 0x167) = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(this + 0x163) = *(undefined4 *)(param_1 + 0x40);
    *(undefined4 *)(this + 0x16f) = *(undefined4 *)(param_1 + 0x4c);
    this[0x173] = *(pwpACD_PJL *)(param_1 + 0x50);
    if (((byte)this[0x88] & 4) != 0) {
      if (*(int *)(param_1 + 0x48) != -1) {
        peVar2 = gsMP_SYSTEM::FindEnt(gsSysMP,*(int *)(param_1 + 0x48),4);
        if (peVar2 != (entIACTIVE_OBJ *)0x0) {
          physPHYS::AddEntCDTExclude((physPHYS *)this,(entENTITY *)peVar2);
        }
      }
      *(undefined4 *)(this + 0x16b) = *(undefined4 *)(param_1 + 0x48);
    }
    if (*(int *)(gsSysMP + 0x28) != 4) {
      pwpACD_PJL_SFX::StartSFX
                ((pwpACD_PJL_SFX *)(this + 0x153),(physPHYS *)this,(pjlPJL_INIT *)param_1);
    }
    *(uint *)(*(int *)(this + 0xbc) + 4) = *(uint *)(*(int *)(this + 0xbc) + 4) | 0x10;
    *(uint *)(*(int *)(this + 0x14f) + 4) = *(uint *)(*(int *)(this + 0x14f) + 4) | 2;
    return 1;
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: plw_acd.cpp
   addr: 00402540 */

void __thiscall pwpACD_PJL::ShowCollisSFX(pwpACD_PJL *this,pjlEV_CDT *param_1)

{
  m3dSPL *this_00;
  m3dCTRL_TIME *this_01;
  undefined4 local_a8;
  undefined4 local_a4;
  float local_a0;
  undefined4 local_9c;
  animCREATE_DATA local_98 [18];
  m3dMATR local_86 [134];
  
  animCREATE_DATA::animCREATE_DATA(local_98);
  if (*(int *)(param_1 + 8) == 0) {
    m3dMATR::MakeLCS2WCS_VY(local_86,(m3dV *)(param_1 + 0xc),&m3dVUnitY);
    local_a8 = 0x3e800000;
    entCreate(gsScenePtr,s_sfx_water_expl,s_sfx_water_expl,local_98,&local_a8,0);
    if (*(undefined4 **)(this + 0x153) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(this + 0x153))(1);
    }
    *(undefined4 *)(this + 0x153) = 0;
    gsSND_SYSTEM::Play(gsSysSound,(sncSOUND_DESCR_3D *)&DAT_00601b30,(m3dV *)(param_1 + 0xc));
    return;
  }
  wrsfxSCORCHMARK::Add
            ((float)pwpACIDGUN::pTexScorchMark,(float)(param_1 + 0xc),(txmTEXTURE *)0x3f000000,
             (m3dV *)0x41200000,*(ulong *)(param_1 + 0x24),0x5343524d,0.0,0.0);
  this_00 = (m3dSPL *)operator_new(0x34);
  if (this_00 == (m3dSPL *)0x0) {
    this_00 = (m3dSPL *)0x0;
  }
  else {
    *(undefined4 *)(this_00 + 4) = 0;
    *(undefined4 *)(this_00 + 8) = 0;
    *(undefined4 *)(this_00 + 0xc) = 0;
    *(undefined4 *)(this_00 + 0x14) = 8;
    *(undefined4 *)(this_00 + 0x18) = 8;
    *(undefined4 *)(this_00 + 0x1c) = 1;
    *(undefined4 *)(this_00 + 0x20) = 0;
    *(undefined4 *)(this_00 + 0x24) = 0;
    *(undefined4 *)(this_00 + 0x28) = 0;
    *(undefined4 *)(this_00 + 0x2c) = 0;
    *(undefined4 *)(this_00 + 0x30) = 0;
    *(undefined ***)this_00 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(this_00,4);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)this_00,0,0.0,2.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)this_00,1,0.1,3.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)this_00,2,0.2,3.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)this_00,3,0.7,0.0);
  this_01 = (m3dCTRL_TIME *)operator_new(0x20);
  if (this_01 == (m3dCTRL_TIME *)0x0) {
    this_01 = (m3dCTRL_TIME *)0x0;
  }
  else {
    *(undefined4 *)(this_01 + 4) = 0;
    *(undefined4 *)(this_01 + 8) = 0;
    *(undefined4 *)(this_01 + 0xc) = 0x3fc00000;
    *(undefined4 *)(this_01 + 0x10) = 0x3f800000;
    *(undefined4 *)(this_01 + 0x14) = 0;
    *(undefined ***)this_01 = &m3dCTRL_TIME::_vftable_;
    m3dCTRL_TIME::Enable(this_01,1);
    *(undefined4 *)(this_01 + 0x18) = 0;
    *(m3dSPL **)(this_01 + 0x1c) = this_00;
    *(undefined ***)this_01 = &m3dCTRL_1D_SPL::_vftable_;
  }
  *(uint *)((m3dCTRL_1D *)this_01 + 4) = *(uint *)((m3dCTRL_1D *)this_01 + 4) | 6;
  pteSPOT_ANIM::SetCtrlRad(*(pteSPOT_ANIM **)(this + 0x153),(m3dCTRL_1D *)this_01);
  pteSPOT_ANIM::SetCurTime(*(pteSPOT_ANIM **)(this + 0x153),0.0);
  *(uint *)(*(int *)(this + 0x153) + 0xf4) = *(uint *)(*(int *)(this + 0x153) + 0xf4) | 4;
  *(uint *)(*(int *)(this + 0x153) + 4) = *(uint *)(*(int *)(this + 0x153) + 4) | 0x40;
  local_a4 = *(undefined4 *)(param_1 + 0xc);
  local_a0 = *(float *)(param_1 + 0x10) + ___real_3dcccccd;
  local_9c = *(undefined4 *)(param_1 + 0x14);
  m3dMATR::MakeLCS2WCS_VY(local_86,(m3dV *)&local_a4,(m3dV *)(param_1 + 0x18));
  local_a8 = 0x3f19999a;
  entCreate(gsScenePtr,s_pwp_acd_pjl_expl,s_pwp_acd_pjl_expl,local_98,&local_a8,0);
  gsSND_SYSTEM::Play(gsSysSound,(sncSOUND_DESCR_3D *)&DAT_00601b98,(m3dV *)(param_1 + 0xc));
  return;
}




/* from: plw_acd.cpp
   addr: 004027A0 */

void __thiscall pwpACD_PJL::DispatchDamage(pwpACD_PJL *this,cdtINFO *param_1)

{
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = 2;
  local_18 = 5;
  local_10 = 0x40400000;
  local_24 = *(undefined4 *)(param_1 + 0x10);
  local_20 = *(undefined4 *)(param_1 + 0x14);
  local_1c = *(undefined4 *)(param_1 + 0x18);
  local_14 = *(undefined4 *)(this + 0x15b);
  local_c = *(undefined4 *)(this + 0x16b);
  local_8 = *(undefined4 *)(param_1 + 4);
  pwpOPP_SFX::Start((pwpOPP_SFX_START *)&local_24);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: plw_acd.cpp
   addr: 00402810 */

pwpACD_EXPL_SMOKE * __thiscall
pwpACD_EXPL_SMOKE::pwpACD_EXPL_SMOKE(pwpACD_EXPL_SMOKE *this,float param_1)

{
  float fVar1;
  m3dSPL *pmVar2;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,0x2d,300.0,0.6);
  *(undefined ***)this = &_vftable_;
  pmVar2 = (m3dSPL *)operator_new(0x34);
  if (pmVar2 == (m3dSPL *)0x0) {
    pmVar2 = (m3dSPL *)0x0;
  }
  else {
    *(undefined4 *)(pmVar2 + 4) = 0;
    *(undefined4 *)(pmVar2 + 8) = 0;
    *(undefined4 *)(pmVar2 + 0xc) = 0;
    *(undefined4 *)(pmVar2 + 0x14) = 8;
    *(undefined4 *)(pmVar2 + 0x18) = 8;
    *(undefined4 *)(pmVar2 + 0x1c) = 1;
    *(undefined4 *)(pmVar2 + 0x20) = 0;
    *(undefined4 *)(pmVar2 + 0x24) = 0;
    *(undefined4 *)(pmVar2 + 0x28) = 0;
    *(undefined4 *)(pmVar2 + 0x2c) = 0;
    *(undefined4 *)(pmVar2 + 0x30) = 0;
    *(undefined ***)pmVar2 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar2,4);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,0,0.0,0.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,0.033333335,300.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,2,0.1,300.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,3,0.13333334,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,0.0,(m3dSPL_LINEAR1D *)pmVar2);
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,0.45,0.15);
  partEMITTER_PHYS::SetSize
            ((partEMITTER_PHYS *)this,param_1 + param_1,param_1,(m3dSPL_LINEAR1D *)0x0,1.0);
  pmVar2 = (m3dSPL *)operator_new(0x34);
  if (pmVar2 == (m3dSPL *)0x0) {
    pmVar2 = (m3dSPL *)0x0;
  }
  else {
    *(undefined4 *)(pmVar2 + 4) = 0;
    *(undefined4 *)(pmVar2 + 8) = 0;
    *(undefined4 *)(pmVar2 + 0xc) = 0;
    *(undefined4 *)(pmVar2 + 0x14) = 8;
    *(undefined4 *)(pmVar2 + 0x18) = 8;
    *(undefined4 *)(pmVar2 + 0x1c) = 1;
    *(undefined4 *)(pmVar2 + 0x20) = 0;
    *(undefined4 *)(pmVar2 + 0x24) = 0;
    *(undefined4 *)(pmVar2 + 0x28) = 0;
    *(undefined4 *)(pmVar2 + 0x2c) = 0;
    *(undefined4 *)(pmVar2 + 0x30) = 0;
    *(undefined ***)pmVar2 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar2,2);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,0,0.0,61.199997);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar2);
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,pwpACIDGUN::pTexSmoke);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,180.5,179.5,0.0,150.0);
  fVar1 = param_1 * ___real_40400000;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  *(undefined4 *)(this + 0xf8) = 0x43340000;
  *(undefined4 *)(this + 0xfc) = 0;
  *(undefined4 *)(this + 0xf0) = 0;
  *(float *)(this + 0xe8) = fVar1;
  fVar1 = param_1 * ___real_40c00000;
  *(undefined4 *)(this + 0xec) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(float *)(this + 0xb4) = fVar1;
  *(float *)(this + 0xb8) = param_1 * ___real_3fc00000;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x408;
  partEMITTER_PHYS::SetDegNearParams((partEMITTER_PHYS *)this,3.0,0.1);
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: plw_acd.cpp
   addr: 00402A10 */

pwpACD_EXPL_DROPS * __thiscall
pwpACD_EXPL_DROPS::pwpACD_EXPL_DROPS(pwpACD_EXPL_DROPS *this,float param_1)

{
  uint uVar1;
  float fVar2;
  m3dSPL *pmVar3;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,100,800.0,0.4);
  *(undefined ***)this = &_vftable_;
  pmVar3 = (m3dSPL *)operator_new(0x34);
  if (pmVar3 == (m3dSPL *)0x0) {
    pmVar3 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar3,0,8,1);
    *(undefined ***)pmVar3 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar3,3);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,0.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,0.033333335,800.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,2,0.23333333,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,0.0,(m3dSPL_LINEAR1D *)pmVar3);
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,0.3,0.1);
  partEMITTER_PHYS::SetSize
            ((partEMITTER_PHYS *)this,param_1 * ___real_3db33333,param_1 * ___real_3d911111,
             (m3dSPL_LINEAR1D *)0x0,1.0);
  pmVar3 = (m3dSPL *)operator_new(0x34);
  if (pmVar3 == (m3dSPL *)0x0) {
    pmVar3 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar3,0,8,1);
    *(undefined ***)pmVar3 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar3,2);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.5,255.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar3);
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,pwpACIDGUN::pTexDrops);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,0.0,20.0,0.0,0.0);
  fVar2 = param_1 * ___real_41a00000;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 200) = 0;
  *(undefined4 *)(this + 0xdc) = 0;
  *(float *)(this + 0xb4) = fVar2;
  fVar2 = param_1 * ___real_41200000;
  *(undefined4 *)(this + 0xe4) = 0;
  *(float *)(this + 0xb8) = fVar2;
  *(float *)(this + 0xc0) = param_1 * ___real_41900000;
  *(float *)(this + 0xc4) = param_1 * ___real_41100000;
  *(float *)(this + 0xe0) = param_1 * ___real_c2a00000;
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 0xa000;
  *(uint *)(this + 4) = uVar1 | 0xa401;
  *(uint *)(this + 4) = uVar1 | 0x80a401;
  partEMITTER_PHYS::SetDegNearParams((partEMITTER_PHYS *)this,3.0,0.1);
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: plw_acd.cpp
   addr: 00402BF0 */

int __cdecl m3dNormalize(m3dV *param_1)

{
  float fVar1;
  float fVar2;
  ulonglong uVar3;
  float10 fVar4;
  undefined8 in_MM1;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  float local_1c;
  
  if (m3dSimdType == 0) {
    fVar11 = *(float *)param_1;
    fVar1 = *(float *)(param_1 + 4);
    fVar2 = *(float *)(param_1 + 8);
    fVar9 = fVar11 * fVar11 + fVar1 * fVar1 + fVar2 * fVar2;
    if (DAT_006019f0 <= fVar9) {
      auVar12 = rsqrtss(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9));
      fVar10 = auVar12._0_4_;
      fVar9 = `int___cdecl_m3dNormalize(struct_m3dV*)'::__l2::half * fVar10 *
              (`int___cdecl_m3dNormalize(struct_m3dV*)'::__l2::three - fVar9 * fVar10 * fVar10);
      *(float *)param_1 = fVar9 * fVar11;
      *(float *)(param_1 + 4) = fVar9 * fVar1;
      *(float *)(param_1 + 8) = fVar9 * fVar2;
      return 1;
    }
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar7 = *(undefined8 *)param_1;
    uVar3 = (ulonglong)*(uint *)(param_1 + 8);
    uVar8 = PackedFloatingMUL(uVar7,uVar7);
    uVar5 = PackedFloatingMUL(uVar3,uVar3);
    uVar8 = PackedFloatingAccumulate(uVar8,uVar8);
    uVar8 = PackedFloatingADD(uVar8,uVar5);
    uVar5 = PackedFloatingReciprocalSQRAprox(uVar5,uVar8);
    if ((int)DAT_005ce360 <= (int)uVar8) {
      uVar6 = PackedFloatingMUL(uVar5,uVar5);
      uVar8 = PackedFloatingReciprocalSQRIter1(uVar6,uVar8);
      uVar8 = PackedFloatingReciprocalIter2(uVar8,uVar5);
      uVar8 = CONCAT44((int)uVar8,(int)uVar8);
      uVar5 = PackedFloatingMUL(uVar3,uVar8);
      uVar7 = PackedFloatingMUL(uVar7,uVar8);
      *(int *)(param_1 + 8) = (int)uVar5;
      *(undefined8 *)param_1 = uVar7;
      FastExitMediaState();
      return 1;
    }
    FastExitMediaState();
  }
  else {
    local_1c = *(float *)(param_1 + 8) * *(float *)(param_1 + 8) +
               *(float *)(param_1 + 4) * *(float *)(param_1 + 4) +
               *(float *)param_1 * *(float *)param_1;
    if (m3dSimdType == 0) {
      local_1c = local_1c + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
      auVar12 = rsqrtss(ZEXT416((uint)local_1c),ZEXT416((uint)local_1c));
      fVar11 = auVar12._0_4_;
      local_1c = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar11 *
                 (`float___cdecl_m3dSqrt(float)'::__l2::three - local_1c * fVar11 * fVar11) *
                 local_1c;
    }
    else if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar3 = (ulonglong)(uint)local_1c;
      uVar7 = PackedFloatingReciprocalSQRAprox(in_MM1,uVar3);
      uVar8 = PackedFloatingMUL(uVar7,uVar7);
      uVar8 = PackedFloatingReciprocalSQRIter1(uVar8,uVar3);
      uVar7 = PackedFloatingReciprocalIter2(uVar8,uVar7);
      uVar7 = PackedFloatingMUL(uVar7,uVar3);
      local_1c = (float)uVar7;
      FastExitMediaState();
    }
    else {
      fVar4 = (float10)sqrtf(local_1c,local_1c,local_1c);
      local_1c = (float)fVar4;
    }
    if (DAT_005ce360 <= local_1c) {
      local_1c = ___real_3f800000 / local_1c;
      *(float *)param_1 = local_1c * *(float *)param_1;
      *(float *)(param_1 + 4) = local_1c * *(float *)(param_1 + 4);
      *(float *)(param_1 + 8) = local_1c * *(float *)(param_1 + 8);
      return 1;
    }
  }
  *(undefined4 *)param_1 = _m3dVUnitY;
  *(undefined4 *)(param_1 + 4) = DAT_005f9994;
  *(undefined4 *)(param_1 + 8) = DAT_005f9998;
  return 0;
}




/* from: plw_acd.cpp
   addr: 00402E70 */

int __thiscall
pwpACD_EXPLOSION::ProcessMsg
          (pwpACD_EXPLOSION *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  float fVar1;
  int iVar2;
  pwpACD_EXPL_SMOKE *this_00;
  pwpACD_EXPL_DROPS *this_01;
  objOBJ *this_02;
  float in_EDX;
  m3dV local_c [12];
  
  if (param_1 == 1) {
                    /* WARNING: Load size is inaccurate */
    fVar1 = *param_2;
    animINST::Scale(*(animINST **)(this + 0xbc),fVar1,fVar1,fVar1,1);
    animINST::RotateX(*(animINST **)(this + 0xbc),-90.0,1);
    *(uint *)(*(int *)(this + 0xbc) + 4) = *(uint *)(*(int *)(this + 0xbc) + 4) | 0x10;
    objOBJ::SetStateYes(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),0x10);
    animINST::SetAnimSeq(*(animINST **)(this + 0xbc),0,0.0);
    this_00 = (pwpACD_EXPL_SMOKE *)operator_new(0x2c0);
    if (this_00 == (pwpACD_EXPL_SMOKE *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = pwpACD_EXPL_SMOKE::pwpACD_EXPL_SMOKE(this_00,fVar1);
    }
    *(int *)(this + 0x14f) = iVar2;
    if (iVar2 != 0) {
      animINST::GetPos(*(animINST **)(this + 0xbc),local_c);
      partEMITTER_PHYS::SetPosDirSpeed
                (*(partEMITTER_PHYS **)(this + 0x14f),local_c,(m3dV *)0x0,(m3dV *)0x0);
      this_01 = (pwpACD_EXPL_DROPS *)operator_new(0x2c0);
      if (this_01 == (pwpACD_EXPL_DROPS *)0x0) {
        iVar2 = 0;
      }
      else {
        iVar2 = pwpACD_EXPL_DROPS::pwpACD_EXPL_DROPS(this_01,fVar1);
      }
      *(int *)(this + 0x153) = iVar2;
      if (iVar2 != 0) {
        this_02 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_drops_emitter);
        if (this_02 != (objOBJ *)0x0) {
          objOBJ::SetStateProcYes(this_02,0x1008,(_func_int_objOBJ_ptr_void_ptr *)0x0);
          iVar2 = partSetAreaEmissionObj
                            (*(partEMITTER_PHYS **)(this + 0x153),this_02,-1,(m3dV *)0x0);
          if (iVar2 != 0) {
            partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)(this + 0x14f));
            partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)(this + 0x153));
            *(undefined4 *)(this + 0x157) = 0x3f800000;
          }
        }
      }
    }
  }
  else if (param_1 == 2) {
    if (*(undefined4 **)(this + 0x153) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(this + 0x153))(1);
      *(undefined4 *)(this + 0x153) = 0;
    }
    if (*(undefined4 **)(this + 0x14f) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(this + 0x14f))(1);
      *(undefined4 *)(this + 0x14f) = 0;
      return 0;
    }
  }
  else if (param_1 == 1000) {
    iVar2 = m3dUpdateTimeField((float *)(this + 0x157),in_EDX);
    if (iVar2 != 0) {
      msgSYSTEM::PostMsg(&msgSystem,(msgADDR *)this,2,(msgADDR *)this);
    }
    animINST::AdvanceTime(*(animINST **)(this + 0xbc),gsElapsedTime,1,(float *)0x0);
    return 0;
  }
  return 0;
}




/* from: plw_acd.cpp
   addr: 00403050
   addr: 00403050
   addr: 00403050
   addr: 00403050 */

void * __thiscall pwpACD_PJL::_vector_deleting_destructor_(pwpACD_PJL *this,uint param_1)

{
  *(undefined ***)this = &pjlPJL<struct_pwpACD_PJL_SFX>::_vftable_;
  physPHYS::~physPHYS((physPHYS *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: plw_acd.cpp
   addr: 00403080 */

int __thiscall
pjlPJL<struct_pwpACD_PJL_SFX>::ProcessINIT(pjlPJL<struct_pwpACD_PJL_SFX> *this,physINIT *param_1)

{
  int iVar1;
  entIACTIVE_OBJ *peVar2;
  
  iVar1 = physPHYS::ProcessINIT((physPHYS *)this,param_1);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(this + 0x15b) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(this + 0x15f) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x167) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(this + 0x163) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(this + 0x16f) = *(undefined4 *)(param_1 + 0x4c);
  this[0x173] = *(pjlPJL<struct_pwpACD_PJL_SFX> *)(param_1 + 0x50);
  if (((byte)this[0x88] & 4) != 0) {
    if (*(int *)(param_1 + 0x48) != -1) {
      peVar2 = gsMP_SYSTEM::FindEnt(gsSysMP,*(int *)(param_1 + 0x48),4);
      if (peVar2 != (entIACTIVE_OBJ *)0x0) {
        physPHYS::AddEntCDTExclude((physPHYS *)this,(entENTITY *)peVar2);
      }
    }
    *(undefined4 *)(this + 0x16b) = *(undefined4 *)(param_1 + 0x48);
  }
  if (*(int *)(gsSysMP + 0x28) != 4) {
    pwpACD_PJL_SFX::StartSFX
              ((pwpACD_PJL_SFX *)(this + 0x153),(physPHYS *)this,(pjlPJL_INIT *)param_1);
  }
  return 1;
}




/* from: plw_acd.cpp
   addr: 00403130 */

void __thiscall pjlPJL<struct_pwpACD_PJL_SFX>::ProcessTERM(pjlPJL<struct_pwpACD_PJL_SFX> *this)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)(this + 0x14f);
  if (*(undefined4 **)(this + 0x157) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x157))(1);
    *(undefined4 *)(this + 0x157) = 0;
  }
  puVar2 = *(undefined4 **)(this + 0x153);
  if ((puVar2 != (undefined4 *)0x0) && (*(int *)(iVar1 + 0xb0) == 0)) {
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(1);
    }
    *(undefined4 *)(this + 0x153) = 0;
  }
  physPHYS::ProcessTERM((physPHYS *)this);
  return;
}




/* from: plw_acd.cpp
   addr: 00403190 */

void __thiscall pjlPJL<struct_pwpACD_PJL_SFX>::ProcessFRAME(pjlPJL<struct_pwpACD_PJL_SFX> *this)

{
  physMATH *this_00;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  m3dV local_c [12];
  
  if (((byte)gsSysCinema[0x80] & 1) == 0) {
    physPHYS::ProcessFRAME((physPHYS *)this);
    if (*(int *)(this + 0x157) != 0) {
      this_00 = *(physMATH **)(this + 0x14f);
      local_18 = *(undefined4 *)(this_00 + 0x48);
      local_14 = *(undefined4 *)(this_00 + 0x4c);
      local_10 = *(undefined4 *)(this_00 + 0x50);
      physMATH::GetPos(this_00,local_c);
      partEMITTER_PHYS::SetPosDirSpeed
                (*(partEMITTER_PHYS **)(this + 0x157),local_c,(m3dV *)0x0,(m3dV *)&local_18);
    }
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: plw_acd.cpp
   addr: 00403200 */

void __thiscall
pjlPJL<struct_pwpACD_PJL_SFX>::ProcessEV_CDT(pjlPJL<struct_pwpACD_PJL_SFX> *this,pjlEV_CDT *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)(this + 0x14f);
  *(uint *)(this + 0x174) = *(uint *)(this + 0x174) | 1;
  if (*(undefined4 **)(this + 0x157) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x157))(1);
    *(undefined4 *)(this + 0x157) = 0;
  }
  puVar2 = *(undefined4 **)(this + 0x153);
  if ((puVar2 != (undefined4 *)0x0) && (*(int *)(iVar1 + 0xb0) == 0)) {
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(1);
    }
    *(undefined4 *)(this + 0x153) = 0;
  }
  if (*(int *)(gsSysMP + 0x28) != 4) {
    (**(code **)(*(int *)this + 0x84))(param_1);
  }
  iVar1 = *(int *)(this + 0x14f);
  *(undefined4 *)(iVar1 + 0x48) = _m3dVZero;
  *(undefined4 *)(iVar1 + 0x4c) = DAT_00963740;
  *(undefined4 *)(iVar1 + 0x50) = DAT_00963744;
  *(uint *)(*(int *)(this + 0x14f) + 4) = *(uint *)(*(int *)(this + 0x14f) + 4) | 0x10;
  (**(code **)(*(int *)this + 0x88))();
  return;
}




/* from: plw_acd.cpp
   addr: 004032C0 */

void __thiscall m3dCOLOR::m3dCOLOR(m3dCOLOR *this,ulong param_1)

{
  *(float *)this = (float)(param_1 >> 0x10 & 0xff);
  *(float *)(this + 4) = (float)(param_1 >> 8 & 0xff);
  *(float *)(this + 8) = (float)(param_1 & 0xff);
  *(float *)(this + 0xc) = (float)(param_1 >> 0x18);
  return;
}




/* from: plw_acd.cpp
   addr: 00403330 */

void __thiscall m3dSPL::m3dSPL(m3dSPL *this,int param_1,int param_2,int param_3)

{
  *(undefined4 *)(this + 4) = 0;
  *(int *)(this + 8) = param_1;
  *(undefined4 *)(this + 0xc) = 0;
  *(int *)(this + 0x14) = param_2;
  *(int *)(this + 0x18) = param_2;
  *(undefined4 *)(this + 0x20) = 0;
  *(int *)(this + 0x1c) = param_3;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined ***)this = &_vftable_;
  return;
}




/* from: plw_acd.cpp
   addr: 004033A0
   addr: 004033A0
   addr: 004033A0 */

void __thiscall m3dSPL_LINEAR1D::GetKpValue(m3dSPL_LINEAR1D *this,int param_1,void *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x10);
  if (param_1 < *(int *)(this + 0x10)) {
    iVar1 = param_1;
  }
  *(undefined4 *)param_2 =
       *(undefined4 *)(*(int *)(this + 0x18) * iVar1 + 4 + *(int *)(this + 0x24));
  return;
}




/* from: plw_acd.cpp
   addr: 004033D0
   addr: 004033D0 */

void __thiscall m3dSPL_LINEAR1D::SetKpValue(m3dSPL_LINEAR1D *this,int param_1,void *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x10);
  if (param_1 < *(int *)(this + 0x10)) {
    iVar1 = param_1;
  }
                    /* WARNING: Load size is inaccurate */
  *(undefined4 *)(*(int *)(this + 0x18) * iVar1 + 4 + *(int *)(this + 0x24)) = *param_2;
  return;
}




/* from: plw_acd.cpp
   addr: 00403400
   addr: 00403400
   addr: 00403400
   addr: 00403400
   addr: 00403400
   addr: 00403400
   addr: 00403400
   addr: 00403400
   addr: 00403400
   addr: 00403400
   addr: 00403400
   addr: 00403400
   addr: 00403400
   addr: 00403400
   addr: 00403400
   addr: 00403400
   addr: 00403400
   addr: 00403400
   addr: 00403400
   addr: 00403400 */

void * __thiscall m3dSPL::_scalar_deleting_destructor_(m3dSPL *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  apFree(*(void **)(this + 0x24));
  apFree(*(void **)(this + 0x28));
  apFree(*(void **)(this + 0x2c));
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: plw_acd.cpp
   addr: 00403440 */

void __thiscall m3dCTRL_TIME::m3dCTRL_TIME(m3dCTRL_TIME *this)

{
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0x3f800000;
  *(undefined4 *)(this + 0x10) = 0x3f800000;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined ***)this = &_vftable_;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 1;
  return;
}




/* from: plw_acd.cpp
   addr: 00403470 */

void __thiscall m3dCTRL_TIME::Enable(m3dCTRL_TIME *this,int param_1)

{
  if (param_1 != 0) {
    *(uint *)(this + 4) = *(uint *)(this + 4) | 1;
    return;
  }
  *(uint *)(this + 4) = *(uint *)(this + 4) & 0xfffffffe;
  return;
}




/* from: plw_acd.cpp
   addr: 004034A0 */

void __thiscall m3dCTRL_3D::SetValue(m3dCTRL_3D *this,m3dV *param_1)

{
  *(undefined4 *)(this + 0x18) = *(undefined4 *)param_1;
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 8);
  return;
}




/* from: plw_acd.cpp
   addr: 004034C0
   addr: 004034C0 */

void * __thiscall m3dCTRL_1D_SPL::_scalar_deleting_destructor_(m3dCTRL_1D_SPL *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  if (*(int **)(this + 0x1c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x1c) + 4))(1);
  }
  *(undefined ***)this = &m3dCTRL_TIME::_vftable_;
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: plw_acd.cpp
   addr: 00403500 */

void * __thiscall abvBVOL::_vector_deleting_destructor_(abvBVOL *this,uint param_1)

{
  abvBVOL *this_00;
  int iVar1;
  
  if ((param_1 & 2) == 0) {
    ~abvBVOL(this);
    if ((param_1 & 1) != 0) {
      operator_delete(this);
    }
    return this;
  }
  iVar1 = *(int *)(this + -4);
  this_00 = this + iVar1 * 0x24;
  if (-1 < iVar1 + -1) {
    do {
      this_00 = this_00 + -0x24;
      ~abvBVOL(this_00);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  if ((param_1 & 1) != 0) {
    operator_delete(this + -4);
  }
  return this + -4;
}




/* from: plw_acd.cpp
   addr: 00403570 */

void _vector_constructor_iterator_
               (void *param_1,uint param_2,int param_3,_func_void_void_ptr *param_4)

{
  void *unaff_EDI;
  
  if (-1 < param_3 + -1) {
    do {
      (*param_4)(unaff_EDI);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}




/* from: plw_acd.cpp
   addr: 004035A0 */

void _vector_destructor_iterator_
               (void *param_1,uint param_2,int param_3,_func_void_void_ptr *param_4)

{
  void *unaff_EDI;
  
  if (-1 < param_3 + -1) {
    do {
      (*param_4)(unaff_EDI);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}




/* from: plw_acd.cpp
   addr: 004035F0 */

sncSOUND_DESCR * __thiscall
sncSOUND_DESCR::sncSOUND_DESCR
          (sncSOUND_DESCR *this,char *param_1,int param_2,int param_3,float param_4,ulong param_5)

{
  apNAME::SetName((apNAME *)(this + 4),param_1);
  *(int *)(this + 0x44) = param_3;
  *(ulong *)(this + 0x4c) = param_5;
  *(float *)(this + 0x48) = param_4;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  *(int *)(this + 0x5c) = param_2;
  *(undefined ***)this = &_vftable_;
  return this;
}




/* from: plw_acd.cpp
   addr: 00403650 */

int __thiscall pteSPOT::GetOrg(pteSPOT *this,m3dV *param_1)

{
  *(undefined4 *)param_1 = *(undefined4 *)(this + 0x90);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(this + 0x94);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(this + 0x98);
  return 1;
}




/* from: plw_acd.cpp
   addr: 004036C0 */

void __thiscall entENTITY::GetAccel(entENTITY *this,m3dV *param_1)

{
  *(undefined4 *)param_1 = *(undefined4 *)(this + 0xec);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(this + 0xf0);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(this + 0xf4);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: plw_acd.cpp
   addr: 004036E0 */

void __thiscall physINIT::physINIT(physINIT *this)

{
  undefined4 uVar1;
  
  *this = (physINIT)0x0;
  this[1] = (physINIT)0x40;
  *(undefined2 *)(this + 2) = 0xffff;
  *(undefined4 *)(this + 4) = _m3dVZero;
  *(undefined4 *)(this + 8) = DAT_00963740;
  *(undefined4 *)(this + 0xc) = DAT_00963744;
  *(undefined4 *)(this + 0x10) = _m3dVZero;
  *(undefined4 *)(this + 0x14) = DAT_00963740;
  uVar1 = DAT_00963744;
  *(undefined4 *)(this + 0x1c) = 0x3dcccccd;
  *(undefined4 *)(this + 0x18) = uVar1;
  *(undefined4 *)(this + 0x20) = DAT_005ce364;
  *(undefined4 *)(this + 0x24) = 1;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined2 *)(this + 2) = 0x38;
  return;
}




/* from: plw_acd.cpp
   addr: 00403760 */

entENTITY * __fastcall pwpACIDGUN::Create(animINST *param_1)

{
  wpnWEAPON *this;
  
  this = (wpnWEAPON *)operator_new(0x1c7);
  if (this != (wpnWEAPON *)0x0) {
    wpnWEAPON::wpnWEAPON(this);
    *(undefined4 *)(this + 0x183) = 0;
    *(undefined4 *)(this + 0x187) = 0;
    *(undefined4 *)(this + 0x1af) = 0;
    *(undefined4 *)(this + 0x1b3) = 0;
    *(undefined4 *)(this + 0x1b7) = 0;
    *(undefined4 *)(this + 0x1bb) = 0;
    *(undefined4 *)(this + 0x1bf) = 0;
    *(undefined4 *)(this + 0x1c3) = 0;
    *(undefined4 *)(this + 0x1a7) = 0x3f800000;
    *(undefined ***)this = &_vftable_;
    *(undefined4 *)(this + 0x94) = 5;
    return (entENTITY *)this;
  }
  return (entENTITY *)0x0;
}




/* from: plw_acd.cpp
   addr: 004037F0 */

void __thiscall wpnWEAPON::Enable(wpnWEAPON *this,int param_1)

{
  if (param_1 != 0) {
    *(uint *)(this + 0x14f) = *(uint *)(this + 0x14f) | 1;
    return;
  }
  *(uint *)(this + 0x14f) = *(uint *)(this + 0x14f) & 0xfffffffe;
  return;
}




/* from: plw_acd.cpp
   addr: 00403820 */

void __thiscall pwpWEAPON::AdvanceAnimation(pwpWEAPON *this,int param_1,float param_2)

{
  animSYSTEM_INST::AdvanceAnimation
            (*(animSYSTEM_INST **)(*(animINST **)(this + 0xbc) + 0xe8),*(animINST **)(this + 0xbc),
             param_1,param_2 * *(float *)(this + 0x1a7));
  return;
}

