
/* from: sob_spikes.cpp
   addr: 0047EE40 */

int __fastcall wrsobInitSpikes(void)

{
  int iVar1;
  
  iVar1 = entRegisterClass(s_sob_spike,0x2444594e,0x28,wrsobSPIKE::Create,(char *)0x0,1);
  return (uint)(iVar1 != 0);
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sob_spikes.cpp
   addr: 0047EE70 */

int __thiscall
wrsobSPIKE::ProcessMsg(wrsobSPIKE *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  uint uVar1;
  objOBJ *poVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 extraout_MM1;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  undefined1 auVar8 [16];
  float local_dc;
  int local_d8;
  int local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  dmgGENERAL local_ac [4];
  undefined4 local_a8;
  undefined4 local_a4;
  float local_9c;
  float local_98;
  float local_94;
  int local_90 [20];
  undefined1 local_40 [64];
  
  dmgGENERAL::dmgGENERAL(local_ac);
  dynDYNAMIC::ProcessMsg((dynDYNAMIC *)this,param_1,param_2,param_3,param_4);
  if (param_1 == 1) {
    poVar2 = objFindNameN(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s__spike,6);
    *(objOBJ **)(this + 0x17f) = poVar2;
    if (poVar2 == (objOBJ *)0x0) {
      apLogErr(s_SOB_BLADE__Cannot_find_object__s,local_40);
    }
    *(undefined4 *)(this + 0x177) = 2;
    iVar3 = animINST::GetBool(*(animINST **)(this + 0xbc),s_SOB_SPIKE,s_isForwAxisX,&local_d8);
    if ((iVar3 == 0) || (local_d8 == 0)) {
      iVar3 = animINST::GetBool(*(animINST **)(this + 0xbc),s_SOB_SPIKE,s_isForwAxisY,&local_d8);
      if ((iVar3 != 0) && (local_d8 != 0)) {
        *(undefined4 *)(this + 0x177) = 1;
      }
    }
    else {
      *(undefined4 *)(this + 0x177) = 0;
    }
    animINST::GetFloat(*(animINST **)(this + 0xbc),s_SOB_SPIKE,s_killRange,(float *)(this + 0x17b));
  }
  else if (param_1 == 1000) {
    uVar1 = *(uint *)(*(animINST **)(this + 0xbc) + 4);
    if (((((uVar1 & 0x2000) != 0) && (((byte)this[0x88] & 4) != 0)) &&
        (((uVar1 & 3) == 0 || (*(int *)(gsSysMP + 0x28) != 1)))) && (*(int *)(this + 0x17f) != 0)) {
      animINST::Validate(*(animINST **)(this + 0xbc),4);
      objOBJ::GetOrigin(*(objOBJ **)(this + 0x17f),(m3dV *)&local_d0);
      objOBJ::GetAxisZ(*(objOBJ **)(this + 0x17f),(m3dV *)&local_b8);
      m3dNormalize((m3dV *)&local_b8);
      dmgCollectInst((m3dV *)&local_d0,(float)local_90,*(animINST ***)(this + 0x17b),&local_d4,0x14)
      ;
      iVar3 = 0;
      if (0 < local_d4) {
        do {
          animINST::GetPos((animINST *)local_90[iVar3],(m3dV *)&local_c4);
          local_dc = (local_d0 - local_c4) * (local_d0 - local_c4) +
                     (local_cc - local_c0) * (local_cc - local_c0) +
                     (local_c8 - local_bc) * (local_c8 - local_bc);
          if (m3dSimdType == 0) {
            local_dc = local_dc + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
            auVar8 = rsqrtss(ZEXT416((uint)local_dc),ZEXT416((uint)local_dc));
            fVar7 = auVar8._0_4_;
            local_dc = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar7 *
                       (`float___cdecl_m3dSqrt(float)'::__l2::three - local_dc * fVar7 * fVar7) *
                       local_dc;
          }
          else if (m3dSimdType == 1) {
            FastExitMediaState();
            uVar4 = (ulonglong)(uint)local_dc;
            uVar5 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar4);
            uVar6 = PackedFloatingMUL(uVar5,uVar5);
            uVar6 = PackedFloatingReciprocalSQRIter1(uVar6,uVar4);
            uVar5 = PackedFloatingReciprocalIter2(uVar6,uVar5);
            uVar5 = PackedFloatingMUL(uVar5,uVar4);
            local_dc = (float)uVar5;
            FastExitMediaState();
          }
          else {
            local_dc = SQRT(local_dc);
          }
          if (local_dc <= *(float *)(this + 0x17b)) {
            if (ABS((local_c4 - local_d0) * local_b8 +
                    local_b4 * (local_c0 - local_cc) + local_b0 * (local_bc - local_c8)) <=
                ___real_3f800000) {
              local_98 = local_cc;
              local_9c = local_d0;
              local_94 = local_c8;
              local_a8 = 4;
              local_a4 = 0x461c4000;
              msgSYSTEM::SendMsg(&msgSystem,*(msgADDR **)(local_90[iVar3] + 0x13c),0x4c5,local_ac,
                                 (msgADDR *)this);
            }
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < local_d4);
        return 0;
      }
    }
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sob_spikes.cpp
   addr: 0047F1E0 */

entENTITY * __fastcall wrsobSPIKE::Create(animINST *param_1)

{
  undefined4 uVar1;
  entENTITY *this;
  
  this = (entENTITY *)operator_new(0x183);
  if (this != (entENTITY *)0x0) {
    entENTITY::entENTITY(this);
    *(undefined4 *)(this + 0x14f) = 0;
    *(undefined4 *)(this + 0x153) = 0;
    *(undefined4 *)(this + 0x157) = 0;
    *(undefined4 *)(this + 0x15b) = 0;
    *(undefined4 *)(this + 0x15f) = 0;
    *(undefined4 *)(this + 0x163) = _m3dVZero;
    *(undefined4 *)(this + 0x167) = DAT_00963740;
    uVar1 = DAT_00963744;
    *(undefined4 *)(this + 0x16f) = 0;
    *(undefined4 *)(this + 0x16b) = uVar1;
    *(undefined4 *)(this + 0x17b) = 0;
    *(undefined4 *)(this + 0x17f) = 0;
    *(undefined4 *)(this + 0x177) = 2;
    *(undefined ***)this = &_vftable_;
    return this;
  }
  return (entENTITY *)0x0;
}

