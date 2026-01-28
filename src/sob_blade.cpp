
/* from: sob_blade.cpp
   addr: 0047C090 */

int __fastcall wrsobInit(void)

{
  int iVar1;
  gsMP_CLIENT *this;
  
  iVar1 = entRegisterClass(s_sob_blade,0x2444594e,0x28,wrsobBLADE::Create,(char *)0x0,1);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = wrsobInitNiche();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = wrsobInitKatapult();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = wrsobInitTree();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = gsMP_CLIENT::Init(this);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = wrsobInitTradingAltar();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = wrsobInitGeyser();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = wrsobInitSpikes();
  return (uint)(iVar1 != 0);
}




/* from: sob_blade.cpp
   addr: 0047C100 */

void __fastcall wrsobTerm(void)

{
  m3dTerm2DMatr();
  m3dTerm2DMatr();
  wrsobTermNiche();
  m3dTerm2DMatr();
  wrsobTermNiche();
  m3dTerm2DMatr();
  m3dTerm2DMatr();
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* from: sob_blade.cpp
   addr: 0047C130 */

int __thiscall
wrsobBLADE::ProcessMsg(wrsobBLADE *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  float *pfVar1;
  char cVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  objOBJ *poVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  float *pfVar10;
  char *pcVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  undefined8 extraout_MM1;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  animINST **ppaVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar22 [16];
  int local_f0 [20];
  char local_a0 [64];
  msgDATA local_60;
  undefined1 local_5f;
  undefined2 local_5e;
  undefined4 local_5c;
  undefined4 local_58;
  dmgGENERAL local_54 [4];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_44;
  float local_40;
  undefined4 local_3c;
  float *local_38;
  int local_34;
  undefined8 local_30;
  float local_28;
  undefined4 local_24;
  float local_20;
  undefined4 local_1c;
  float local_18 [3];
  int local_c;
  int local_8;
  
  dmgGENERAL::dmgGENERAL(local_54);
  if (param_1 < 0x3f9) {
    if (param_1 == 0x3f8) {
      iVar8 = apNAME::IsName((apNAME *)((int)param_2 + 8),s_TOGGLE);
      if (iVar8 != 0) {
        uVar9 = *(uint *)(this + 0x177);
        if ((uVar9 & 4) == 0) {
          uVar9 = uVar9 | 2;
        }
        else {
          uVar9 = uVar9 & 0xfffffffb;
        }
        *(uint *)(this + 0x177) = uVar9;
        if ((((byte)this[0x88] & 4) != 0) && (*(int *)(this + 0x8c) != -1)) {
          local_58 = *(undefined4 *)(this + 0x177);
          local_60 = (msgDATA)0x0;
          local_5f = 0x40;
          local_5c = 0;
          local_5e = 0xc;
          entIACTIVE_OBJ::SendMP_Server_2_ClientAll((entIACTIVE_OBJ *)this,&local_60,0x20000);
          return 0;
        }
      }
    }
    else {
      if (param_1 == 1) {
        iVar8 = animINST::GetStr(*(animINST **)(this + 0xbc),s_SOB_BLADE,s_trackObj,local_a0,0x40);
        if (iVar8 != 0) {
          uVar9 = 0xffffffff;
          pcVar11 = local_a0;
          do {
            if (uVar9 == 0) break;
            uVar9 = uVar9 - 1;
            cVar2 = *pcVar11;
            pcVar11 = pcVar11 + 1;
          } while (cVar2 != '\0');
          poVar6 = objFindNameN(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),local_a0,~uVar9 - 1);
          *(objOBJ **)(this + 0x18b) = poVar6;
          if (poVar6 == (objOBJ *)0x0) {
            apLogErr(s_SOB_BLADE__Cannot_find_object__s,local_a0);
          }
          animINST::Validate(*(animINST **)(this + 0xbc),4);
          objOBJ::GetOrigin(*(objOBJ **)(this + 0x18b),(m3dV *)(this + 399));
        }
        animINST::GetFloat(*(animINST **)(this + 0xbc),s_SOB_BLADE,s_killRangeMin,
                           (float *)(this + 0x17f));
        animINST::GetFloat(*(animINST **)(this + 0xbc),s_SOB_BLADE,s_killRangeMax,
                           (float *)(this + 0x183));
        iVar8 = animINST::GetStr(*(animINST **)(this + 0xbc),s_SOB_BLADE,s_killArea,local_a0,0x40);
        if (iVar8 != 0) {
          uVar9 = 0xffffffff;
          pcVar11 = local_a0;
          do {
            if (uVar9 == 0) break;
            uVar9 = uVar9 - 1;
            cVar2 = *pcVar11;
            pcVar11 = pcVar11 + 1;
          } while (cVar2 != '\0');
          poVar6 = objFindNameN(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),local_a0,~uVar9 - 1);
          if (poVar6 == (objOBJ *)0x0) {
            apLogErr(s_SOB_BLADE__Cannot_find_object__s,local_a0);
          }
          else {
            puVar7 = (undefined4 *)operator_new(0x3c);
            if (puVar7 == (undefined4 *)0x0) {
              puVar7 = (undefined4 *)0x0;
            }
            else {
              puVar7[1] = 0;
              puVar7[2] = 0;
              puVar7[3] = 0;
              puVar7[5] = 1;
              puVar7[4] = &m3dBOX::_vftable_;
              puVar7[0xc] = 0;
              puVar7[0xd] = 0;
              puVar7[0xe] = 0;
              *puVar7 = &scnDOMAIN::_vftable_;
            }
            *(undefined4 **)(this + 0x187) = puVar7;
            if (puVar7 == (undefined4 *)0x0) {
              return 0;
            }
            puVar7[0xd] = poVar6;
            iVar8 = (**(code **)(**(int **)(this + 0x187) + 4))();
            if (iVar8 == 0) {
              return 0;
            }
            scnDOMAIN::CalcBBox(*(scnDOMAIN **)(this + 0x187));
          }
        }
        *(undefined4 *)(this + 0x17b) = 2;
        iVar8 = animINST::GetBool(*(animINST **)(this + 0xbc),s_SOB_BLADE,s_isForwAxisX,&local_8);
        if (((iVar8 == 0) || (local_8 == 0)) &&
           ((iVar8 = animINST::GetBool(*(animINST **)(this + 0xbc),s_SOB_BLADE,s_isUseAxisX,&local_8
                                      ), iVar8 == 0 || (local_8 == 0)))) {
          iVar8 = animINST::GetBool(*(animINST **)(this + 0xbc),s_SOB_BLADE,s_isForwAxisY,&local_8);
          if (((iVar8 != 0) && (local_8 != 0)) ||
             ((iVar8 = animINST::GetBool(*(animINST **)(this + 0xbc),s_SOB_BLADE,s_isUseAxisY,
                                         &local_8), iVar8 != 0 && (local_8 != 0)))) {
            *(undefined4 *)(this + 0x17b) = 1;
          }
        }
        else {
          *(undefined4 *)(this + 0x17b) = 0;
        }
        *(undefined4 *)(*(int *)(*(int *)(*(int *)(this + 0xbc) + 0x138) + 0x90) + 0x68) = 1;
        dynDYNAMIC::StartAnim((dynDYNAMIC *)this,0,0.0,1);
        gsMP_SERVER::DeclSyncable(gsSysServer,(entIACTIVE_OBJ *)this);
        return 0;
      }
      if (param_1 == 1000) {
        if (((byte)this[0x177] & 4) != 0) {
          animINST::ClearActionFrame(*(animINST **)(this + 0xbc));
          return 0;
        }
        animINST::AdvanceTime(*(animINST **)(this + 0xbc),gsElapsedTime,0,(float *)0x0);
        if (*(int *)(this + 0x18b) == 0) {
          if (((byte)(*(animINST **)(this + 0xbc))[0x28] & 1) != 0) {
            *(uint *)(this + 0x177) = *(uint *)(this + 0x177) | 1;
            *(uint *)(this + 0x84) = *(uint *)(this + 0x84) | 4;
          }
          if ((*(byte *)(*(int *)(this + 0xbc) + 0x28) & 2) != 0) {
            *(uint *)(this + 0x177) = *(uint *)(this + 0x177) & 0xfffffffe;
            *(uint *)(this + 0x84) = *(uint *)(this + 0x84) | 8;
          }
        }
        else {
          animINST::Validate(*(animINST **)(this + 0xbc),4);
          objOBJ::GetOrigin(*(objOBJ **)(this + 0x18b),(m3dV *)local_18);
          iVar8 = *(int *)(this + 0x17b);
          if (((local_18[iVar8] <= *(float *)(this + 0x17f) - _DAT_005d848c) ||
              (_DAT_005d848c + *(float *)(this + 0x183) <= local_18[iVar8])) ||
             (*(float *)(this + iVar8 * 4 + 399) < local_18[iVar8])) {
            if (((byte)this[0x177] & 1) != 0) {
              *(uint *)(this + 0x84) = *(uint *)(this + 0x84) | 8;
            }
            uVar9 = *(uint *)(this + 0x177) & 0xfffffffe;
          }
          else {
            if (((byte)this[0x177] & 1) == 0) {
              *(uint *)(this + 0x84) = *(uint *)(this + 0x84) | 4;
            }
            uVar9 = *(uint *)(this + 0x177) | 1;
          }
          *(uint *)(this + 0x177) = uVar9;
          *(float *)(this + 399) = local_18[0];
          *(float *)(this + 0x193) = local_18[1];
          *(float *)(this + 0x197) = local_18[2];
        }
        if (((*(uint *)(this + 0x177) & 2) != 0) &&
           ((*(byte *)(*(int *)(this + 0xbc) + 0x28) & 0x10) != 0)) {
          *(uint *)(this + 0x177) = *(uint *)(this + 0x177) & 0xfffffffd | 4;
        }
        if ((((*(uint *)(*(animINST **)(this + 0xbc) + 4) & 3) == 0) ||
            (*(int *)(gsSysMP + 0x28) != 1)) &&
           ((((byte)this[0x88] & 4) != 0 && (((byte)this[0x177] & 1) != 0)))) {
          animINST::GetPos(*(animINST **)(this + 0xbc),(m3dV *)&local_24);
          local_3c = local_1c;
          iVar8 = *(int *)(this + 0x187);
          local_44 = local_24;
          local_40 = local_20;
          local_50 = 4;
          local_4c = 0x461c4000;
          if (iVar8 == 0) {
            animINST::Validate(*(animINST **)(this + 0xbc),0x40);
            ppaVar19 = (animINST **)0x40c00000;
          }
          else {
            fVar20 = *(float *)(iVar8 + 0x18) - *(float *)(iVar8 + 0x24);
            fVar3 = *(float *)(iVar8 + 0x1c) - *(float *)(iVar8 + 0x28);
            fVar21 = *(float *)(iVar8 + 0x20) - *(float *)(iVar8 + 0x2c);
            fVar20 = fVar20 * fVar20 + fVar3 * fVar3 + fVar21 * fVar21;
            if (m3dSimdType == 0) {
              fVar20 = fVar20 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
              auVar22 = rsqrtss(ZEXT416((uint)fVar20),ZEXT416((uint)fVar20));
              fVar21 = auVar22._0_4_;
              ppaVar19 = (animINST **)
                         (`float___cdecl_m3dSqrt(float)'::__l2::half * fVar21 *
                          (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar20 * fVar21 * fVar21) *
                         fVar20);
            }
            else if (m3dSimdType == 1) {
              FastExitMediaState();
              uVar12 = (ulonglong)(uint)fVar20;
              uVar13 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar12);
              uVar14 = PackedFloatingMUL(uVar13,uVar13);
              uVar14 = PackedFloatingReciprocalSQRIter1(uVar14,uVar12);
              uVar13 = PackedFloatingReciprocalIter2(uVar14,uVar13);
              uVar13 = PackedFloatingMUL(uVar13,uVar12);
              ppaVar19 = (animINST **)uVar13;
              FastExitMediaState();
            }
            else {
              ppaVar19 = (animINST **)SQRT(fVar20);
            }
          }
          dmgCollectInst((m3dV *)&local_24,(float)local_f0,ppaVar19,&local_c,0x14);
          local_34 = 0;
          if (0 < local_c) {
            do {
              iVar8 = local_34;
              animINST::GetPos((animINST *)local_f0[local_34],(m3dV *)local_18);
              local_40 = local_18[1];
              if (*(int **)(this + 0x187) == (int *)0x0) {
                iVar4 = *(int *)(this + 0xbc);
                local_38 = (float *)(iVar4 + 0xa0);
                if (m3dSimdType == 0) {
                  if (((uint)local_38 & 0xf) == 0) {
                    fVar20 = local_18[0] * *local_38 + *(float *)(iVar4 + 0xd0) +
                             local_18[1] * *(float *)(iVar4 + 0xb0) +
                             local_18[2] * *(float *)(iVar4 + 0xc0);
                    fVar21 = local_18[0] * *(float *)(iVar4 + 0xa4) + *(float *)(iVar4 + 0xd4) +
                             local_18[1] * *(float *)(iVar4 + 0xb4) +
                             local_18[2] * *(float *)(iVar4 + 0xc4);
                    local_28 = local_18[0] * *(float *)(iVar4 + 0xa8) + *(float *)(iVar4 + 0xd8) +
                               local_18[1] * *(float *)(iVar4 + 0xb8) +
                               local_18[2] * *(float *)(iVar4 + 200);
                  }
                  else {
                    fVar20 = local_18[0] * (float)*(undefined8 *)local_38 +
                             local_18[1] * (float)*(undefined8 *)(iVar4 + 0xb0) +
                             local_18[2] * (float)*(undefined8 *)(iVar4 + 0xc0) +
                             (float)*(undefined8 *)(iVar4 + 0xd0);
                    fVar21 = local_18[0] * (float)((ulonglong)*(undefined8 *)local_38 >> 0x20) +
                             local_18[1] * (float)((ulonglong)*(undefined8 *)(iVar4 + 0xb0) >> 0x20)
                             + local_18[2] *
                               (float)((ulonglong)*(undefined8 *)(iVar4 + 0xc0) >> 0x20) +
                               (float)((ulonglong)*(undefined8 *)(iVar4 + 0xd0) >> 0x20);
                    local_28 = local_18[0] * (float)*(undefined8 *)(iVar4 + 0xa8) +
                               local_18[1] * (float)*(undefined8 *)(iVar4 + 0xb8) +
                               local_18[2] * (float)*(undefined8 *)(iVar4 + 200) +
                               (float)*(undefined8 *)(iVar4 + 0xd8);
                  }
                  local_30 = CONCAT44(fVar21,fVar20);
                }
                else if (m3dSimdType == 1) {
                  FastExitMediaState();
                  uVar13 = PackedFloatingMUL(CONCAT44(local_18[0],local_18[0]),
                                             *(undefined8 *)local_38);
                  uVar14 = PackedFloatingMUL(CONCAT44(local_18[1],local_18[1]),
                                             *(undefined8 *)(iVar4 + 0xb0));
                  uVar15 = PackedFloatingMUL(CONCAT44(local_18[2],local_18[2]),
                                             *(undefined8 *)(iVar4 + 0xc0));
                  uVar13 = PackedFloatingADD(uVar13,*(undefined8 *)(iVar4 + 0xd0));
                  uVar16 = PackedFloatingMUL(CONCAT44(local_18[0],local_18[0]),
                                             *(undefined8 *)(iVar4 + 0xa8));
                  uVar14 = PackedFloatingADD(uVar14,uVar15);
                  uVar17 = PackedFloatingMUL(CONCAT44(local_18[1],local_18[1]),
                                             *(undefined8 *)(iVar4 + 0xb8));
                  uVar18 = PackedFloatingMUL(CONCAT44(local_18[2],local_18[2]),
                                             *(undefined8 *)(iVar4 + 200));
                  uVar15 = PackedFloatingADD(uVar16,*(undefined8 *)(iVar4 + 0xd8));
                  local_30 = PackedFloatingADD(uVar13,uVar14);
                  uVar13 = PackedFloatingADD(uVar17,uVar18);
                  uVar13 = PackedFloatingADD(uVar15,uVar13);
                  local_28 = (float)uVar13;
                  FastExitMediaState();
                }
                else {
                  iVar4 = 0;
                  pfVar5 = (float *)&local_30;
                  do {
                    iVar8 = 0;
                    *pfVar5 = 0.0;
                    pfVar10 = (float *)(((int)local_38 - (int)&local_30) + (int)pfVar5);
                    do {
                      pfVar1 = local_18 + iVar8;
                      fVar20 = *pfVar10;
                      iVar8 = iVar8 + 1;
                      pfVar10 = pfVar10 + 4;
                      *pfVar5 = *pfVar1 * fVar20 + *pfVar5;
                    } while (iVar8 < 3);
                    iVar8 = iVar4 + iVar8 * 4;
                    iVar4 = iVar4 + 1;
                    *pfVar5 = local_38[iVar8] + *pfVar5;
                    pfVar5 = pfVar5 + 1;
                    iVar8 = local_34;
                  } while (iVar4 < 3);
                }
                if (ABS(*(float *)((int)&local_30 + *(int *)(this + 0x17b) * 4)) < ___real_3f800000)
                goto LAB_0047c48a;
              }
              else {
                iVar4 = (**(code **)(**(int **)(this + 0x187) + 0xc))(local_18);
                if (iVar4 != 0) {
LAB_0047c48a:
                  msgSYSTEM::SendMsg(&msgSystem,*(msgADDR **)(local_f0[iVar8] + 0x13c),0x4c5,
                                     local_54,(msgADDR *)this);
                }
              }
              local_34 = iVar8 + 1;
              if (local_c <= iVar8 + 1) {
                return 0;
              }
            } while( true );
          }
        }
      }
    }
  }
  else if (param_1 == 0x40c) {
    if (*(int *)((int)param_2 + 4) == -100) {
      iVar8 = *(int *)((int)param_2 + 8);
      *(undefined4 *)(this + 0x177) = *(undefined4 *)(iVar8 + 4);
      animINST::SetAnimSeq(*(animINST **)(this + 0xbc),*(int *)(iVar8 + 8),*(float *)(iVar8 + 0xc));
    }
    else if (*(int *)((int)param_2 + 4) == 0) {
      *(undefined4 *)(this + 0x177) = *(undefined4 *)((int)param_2 + 8);
      return 0;
    }
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sob_blade.cpp
   addr: 0047C9C0 */

void __thiscall wrsobBLADE::ProcessMP_GET_SYNC_DATA(wrsobBLADE *this,void *param_1)

{
  undefined *puVar1;
  
                    /* WARNING: Load size is inaccurate */
  puVar1 = *param_1;
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_0060eb58 & 1) == 0) {
      DAT_0060eb58 = DAT_0060eb58 | 1;
      DAT_0060eb5c = 0;
      DAT_0060eb5d = 0x40;
      DAT_0060eb60 = 0;
      DAT_0060eb64 = 0xffffffff;
      _DAT_0060eb5e = 0x10;
      atexit((_func_4879 *)&__E15);
    }
    puVar1 = &DAT_0060eb5c;
    *(undefined1 **)param_1 = &DAT_0060eb5c;
  }
  *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(this + 0x177);
  *(undefined4 *)(puVar1 + 8) = *(undefined4 *)(*(int *)(this + 0xbc) + 0xe0);
  *(undefined4 *)(puVar1 + 0xc) = *(undefined4 *)(*(int *)(this + 0xbc) + 0x24);
  rendDRIVER::ConfigureTransp((rendDRIVER *)this,(camCAMERA *)param_1);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sob_blade.cpp
   addr: 0047CA50 */

void __thiscall wrsobBLADE::ProcessMP_READ_SYNC_DATA(wrsobBLADE *this,gsMSG_MP_SAVELOAD *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  short local_20;
  undefined2 uStack_1e;
  undefined2 uStack_1c;
  undefined4 local_1a;
  undefined4 local_16;
  undefined4 local_10;
  undefined4 local_4;
  
  puVar3 = *(undefined **)param_1;
  local_20 = 0;
  uStack_1e = 0xffff;
  uStack_1c = 0xffff;
  local_1a = 0xffffffff;
  local_16 = 0xffffffff;
  if (puVar3 == (undefined *)0x0) {
    if ((DAT_0060eb58 & 1) == 0) {
      DAT_0060eb58 = DAT_0060eb58 | 1;
      DAT_0060eb60 = 0;
      DAT_0060eb64 = 0xffffffff;
      _DAT_0060eb5c = 0x104000;
      atexit((_func_4879 *)&__E15);
    }
    puVar3 = &DAT_0060eb5c;
    *(undefined **)param_1 = &DAT_0060eb5c;
    local_10 = 0x104000;
    DAT_0060eb60 = 0;
    _DAT_0060eb5c = 0x104000;
    DAT_0060eb64 = 0xffffffff;
    DAT_0060eb68 = local_4;
  }
  iVar1 = fioFILE::ReadChunk(*(fioFILE **)(param_1 + 4),(fioCHUNK *)&local_20);
  do {
    if ((iVar1 == 0) || (local_20 == 1)) {
      rendDRIVER::ConfigureTransp((rendDRIVER *)this,(camCAMERA *)param_1);
      return;
    }
    if (local_20 == 0xf0) {
      puVar2 = puVar3 + 4;
LAB_0047cb33:
      (**(code **)(**(int **)(param_1 + 4) + 0x14))(puVar2,4,4);
    }
    else {
      if (local_20 == 0xf1) {
        puVar2 = puVar3 + 8;
        goto LAB_0047cb33;
      }
      if (local_20 == 0xf2) {
        puVar2 = puVar3 + 0xc;
        goto LAB_0047cb33;
      }
    }
    iVar1 = fioFILE::ReadChunk(*(fioFILE **)(param_1 + 4),(fioCHUNK *)&local_20);
  } while( true );
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sob_blade.cpp
   addr: 0047CB90 */

entENTITY * __fastcall wrsobBLADE::Create(animINST *param_1)

{
  undefined4 uVar1;
  entENTITY *this;
  
  this = (entENTITY *)operator_new(0x19b);
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
    *(undefined4 *)(this + 0x177) = 0;
    *(undefined4 *)(this + 0x17f) = 0;
    *(undefined4 *)(this + 0x183) = 0;
    *(undefined4 *)(this + 0x187) = 0;
    *(undefined4 *)(this + 0x18b) = 0;
    *(undefined4 *)(this + 0x17b) = 2;
    *(undefined ***)this = &_vftable_;
    return this;
  }
  return (entENTITY *)0x0;
}




/* from: sob_blade.cpp
   addr: 0047CC40
   addr: 0047CC40 */

void * __thiscall wrsobBLADE::_vector_deleting_destructor_(wrsobBLADE *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  if (*(undefined4 **)(this + 0x187) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x187))(1);
  }
  gsDOMAIN_LIST::~gsDOMAIN_LIST((gsDOMAIN_LIST *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

