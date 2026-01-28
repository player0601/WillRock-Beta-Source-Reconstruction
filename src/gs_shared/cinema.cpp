
/* from: gs_shared:cinema.cpp
   addr: 005414F0 */

int __fastcall cinInit(void)

{
  int iVar1;
  cinSYSTEM *this;
  
  iVar1 = entRegisterClass(s_cinema,0x43494e45,0x4f,cinDATA_ENTITY::Create,(char *)0x0,1);
  if (iVar1 == 0) {
    return 0;
  }
  this = (cinSYSTEM *)operator_new(0xcdc);
  if (this == (cinSYSTEM *)0x0) {
    gsSysCinema = (cinSYSTEM *)0x0;
  }
  else {
    gsSysCinema = (cinSYSTEM *)cinSYSTEM::cinSYSTEM(this);
  }
  msgSYSTEM::InsertAddr(&msgSystem,(msgADDR *)gsSysCinema,0,0);
  return 1;
}




/* from: gs_shared:cinema.cpp
   addr: 00541550 */

void __fastcall cinTerm(void)

{
  msgSYSTEM::DestroyAddr(&msgSystem,(msgADDR *)gsSysCinema);
  gsSysCinema = (cinSYSTEM *)0x0;
  return;
}




/* from: gs_shared:cinema.cpp
   addr: 00541570 */

int __thiscall
cinDATA_ENTITY::ProcessMsg
          (cinDATA_ENTITY *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  if (param_1 == 1) {
    animINST::GetInt(*(animINST **)(this + 0xbc),s_CINEMA,s_nmbLocks,(int *)(this + 0x30));
    *(uint *)(*(int *)(this + 0xbc) + 4) = *(uint *)(*(int *)(this + 0xbc) + 4) | 0x1000;
  }
  return 0;
}




/* from: gs_shared:cinema.cpp
   addr: 005415B0 */

cinSYSTEM * __thiscall cinSYSTEM::cinSYSTEM(cinSYSTEM *this)

{
  cinSYSTEM *pcVar1;
  int iVar2;
  int iVar3;
  cinSYSTEM *pcVar4;
  
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0x4d414452;
  *(undefined4 *)(this + 0x14) = 0x43494e45;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0x50;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined ***)this = &msgADDR::_vftable_;
  *(undefined4 *)(this + 0x80) = 0;
  *(undefined4 *)(this + 0x90) = 0;
  pcVar1 = this + 0x98;
  iVar2 = 0x14;
  do {
    *(undefined4 *)pcVar1 = 0;
    *(undefined4 *)(pcVar1 + 4) = 0;
    *(undefined4 *)(pcVar1 + 8) = 0;
    *(undefined4 *)(pcVar1 + 0xc) = 0xffffffff;
    *(undefined4 *)(pcVar1 + 0x10) = 0;
    *(undefined4 *)(pcVar1 + 0x14) = 0;
    pcVar1 = pcVar1 + 0x18;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  iVar2 = 0x32;
  pcVar1 = this + 0x27c;
  do {
    *(undefined4 *)pcVar1 = 0xbf800000;
    *(undefined4 *)(pcVar1 + 0x2c) = 0;
    *(undefined4 *)(pcVar1 + 0x30) = 0;
    pcVar4 = pcVar1 + 0x34;
    iVar2 = iVar2 + -1;
    for (iVar3 = 10; pcVar1 = pcVar1 + 4, iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined4 *)pcVar1 = 0;
    }
    pcVar1 = pcVar4;
  } while (iVar2 != 0);
  *(undefined4 *)(this + 0xca4) = 0xbf800000;
  *(undefined4 *)(this + 0xcd0) = 0;
  *(undefined4 *)(this + 0xcd4) = 0;
  pcVar1 = this + 0xca8;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pcVar1 = 0;
    pcVar1 = pcVar1 + 4;
  }
  *(undefined ***)this = &_vftable_;
  pcVar1 = this + 0x30;
  for (iVar2 = 0x14; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pcVar1 = 0;
    pcVar1 = pcVar1 + 4;
  }
  *(undefined4 *)(this + 0x2c) = 0;
  ResetData(this);
  *(uint *)(this + 0xc) = *(uint *)(this + 0xc) | 2;
  *(undefined4 *)(this + 0x28) = 0;
  return this;
}




/* from: gs_shared:cinema.cpp
   addr: 00541690
   addr: 00541690 */

void * __thiscall cinSYSTEM::_scalar_deleting_destructor_(cinSYSTEM *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  msgADDR::~msgADDR((msgADDR *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: gs_shared:cinema.cpp
   addr: 005416C0 */

int __thiscall
cinSYSTEM::ProcessMsg(cinSYSTEM *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  cinSYSTEM *pcVar1;
  int iVar2;
  
  if (param_1 < 0x3e9) {
    if (param_1 == 1000) {
      (**(code **)(*(int *)this + 0x14))();
      return 0;
    }
    if (param_1 == 2) {
      return 1;
    }
    if (param_1 == 3) {
      iVar2 = 0;
      if (0 < *(int *)(this + 0x2c)) {
        pcVar1 = this + 0x30;
        do {
          if (*(void **)pcVar1 == param_2) {
            *(int *)pcVar1 = 0;
          }
          iVar2 = iVar2 + 1;
          pcVar1 = pcVar1 + 4;
        } while (iVar2 < *(int *)(this + 0x2c));
      }
      pcVar1 = this + 0x98;
      iVar2 = 0x14;
      do {
        if ((*(int *)pcVar1 != 0) && (*(void **)(*(int *)pcVar1 + 0x13c) == param_2)) {
          cinACTOR::Term((cinACTOR *)pcVar1);
        }
        pcVar1 = (cinSYSTEM *)((cinACTOR *)pcVar1 + 0x18);
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      return 0;
    }
  }
  else if (param_1 == 0x3f4) {
    (**(code **)(*(int *)this + 0x10))();
  }
  else if (param_1 == 0x3f5) {
    iVar2 = 0;
    if (0 < *(int *)(this + 0x2c)) {
      pcVar1 = this + 0x30;
      do {
        *(undefined4 *)pcVar1 = 0;
        iVar2 = iVar2 + 1;
        pcVar1 = pcVar1 + 4;
      } while (iVar2 < *(int *)(this + 0x2c));
    }
    *(undefined4 *)(this + 0x2c) = 0;
    ResetData(this);
    return 0;
  }
  return 0;
}




/* from: gs_shared:cinema.cpp
   addr: 00541790 */

int __thiscall cinSYSTEM::ProcessINIT_LEVEL(cinSYSTEM *this)

{
  int iVar1;
  entENTITY *peVar2;
  
  if ((*(int *)(gsScenePtr + 0x84) != 0) && (*(int *)(gsSysMP + 0x28) == 1)) {
    for (peVar2 = entFindNext((entENTITY *)0x0); peVar2 != (entENTITY *)0x0;
        peVar2 = entFindNext(peVar2)) {
      if (((*(int *)(peVar2 + 0x14) == 0x43494e45) && (iVar1 = *(int *)(peVar2 + 0xbc), iVar1 != 0))
         && ((*(int *)(iVar1 + 0x134) != 0 || (*(int *)(*(int *)(iVar1 + 0x138) + 0xc4) != 0)))) {
        *(entENTITY **)(this + *(int *)(this + 0x2c) * 4 + 0x30) = peVar2;
        *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
      }
    }
  }
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:cinema.cpp
   addr: 00541810 */

void __thiscall cinSYSTEM::ProcessFRAME(cinSYSTEM *this)

{
  float fVar1;
  cinDATA_ENTITY *pcVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  cinSYSTEM *pcVar6;
  cinSYSTEM *pcStack_c;
  undefined1 auStack_8 [4];
  uint uStack_4;
  
  if ((*(uint *)(this + 0x80) & 4) == 0) {
    if (*(int *)(gsSysInput + 0x40) == *(int *)(this + 0x28)) {
      (**(code **)(*(int *)gsSysInput + 0x20))();
      return;
    }
  }
  else {
    if ((*(uint *)(this + 0x80) & 1) == 0) {
      iVar5 = 0;
      if (0 < *(int *)(this + 0x2c)) {
        pcVar6 = this + 0x30;
        do {
          pcVar2 = *(cinDATA_ENTITY **)pcVar6;
          if ((pcVar2 != (cinDATA_ENTITY *)0x0) && (*(int *)(pcVar2 + 0x30) < 1)) {
            CreateData(this,pcVar2);
            *(undefined4 *)(*(int *)pcVar6 + 0x30) = 1;
            *(uint *)(this + 0x80) = *(uint *)(this + 0x80) | 1;
            gsAppState = gsAppState | 0x200;
            *(undefined4 *)(this + 0xcd8) = 0;
            animINST::SetAnimSeq(*(animINST **)(this + 0x84),0,0.0);
            gsMsgChangeMode(4);
            msgSYSTEM::SendAll(&msgSystem,0x4cc,(void *)0x0,(msgADDR *)0x0);
          }
          iVar5 = iVar5 + 1;
          pcVar6 = pcVar6 + 4;
        } while (iVar5 < *(int *)(this + 0x2c));
      }
      if (((byte)this[0x80] & 1) == 0) {
        if (*(int *)(gsSysInput + 0x40) != *(int *)(this + 0x28)) {
          return;
        }
        (**(code **)(*(int *)gsSysInput + 0x20))();
        return;
      }
    }
    if (*(int *)(this + 0x28) == 0) {
      uVar4 = (**(code **)(*(int *)gsSysInput + 0x1c))(s_CIN);
      *(undefined4 *)(this + 0x28) = uVar4;
    }
    if (*(gsiCONTEXT **)(gsSysInput + 0x40) != *(gsiCONTEXT **)(this + 0x28)) {
      gsINP_SYSTEM::SetCurCtx(gsSysInput,*(gsiCONTEXT **)(this + 0x28));
    }
    iVar5 = *(int *)(gsSysInput + 0x40);
    if (((((*(int *)(iVar5 + 8) < 1) && (0 < *(int *)(iVar5 + 0xc))) && (*(int *)(iVar5 + 8) < 1))
        && ((0 < *(int *)(iVar5 + 0xc) &&
            (uStack_4 = *(uint *)(*(int *)(iVar5 + 4) + *(int *)(iVar5 + 8) * -0x9c) & 1,
            uStack_4 != 0)))) &&
       ((iVar5 = gsINP_SYSTEM::IsToggled(gsSysInput,0), iVar5 != 0 &&
        (___real_3f000000 < *(float *)(*(animINST **)(this + 0x84) + 0x24))))) {
      animINST::SetAnimSeq
                (*(animINST **)(this + 0x84),0,
                 *(float *)(*(int *)(this + 0x8c) + 0x50) * ___real_3a83126f);
    }
    iVar5 = animINST::AdvanceTime(*(animINST **)(this + 0x84),gsElapsedTime,1,(float *)0x0);
    if (iVar5 != 0) {
      *(uint *)(this + 0x80) = *(uint *)(this + 0x80) | 2;
    }
    iVar5 = *(int *)(this + 0xcd8);
    if (((*(int *)(this + iVar5 * 0x34 + 0x2ac) == 0) ||
        (fVar1 = *(float *)(*(int *)(this + 0x84) + 0xe4),
        *(float *)(this + iVar5 * 0x34 + 0x27c) < fVar1 ==
        (*(float *)(this + iVar5 * 0x34 + 0x27c) == fVar1))) ||
       (*(float *)(this + iVar5 * 0x34 + 0x27c) + ___real_3f800000 <=
        *(float *)(*(int *)(this + 0x84) + 0xe4))) {
      fVar1 = *(float *)(*(int *)(this + 0x84) + 0xe4);
    }
    else {
      fVar1 = *(float *)(this + iVar5 * 0x34 + 0x27c);
    }
    camCAMERA::Animate(*(camCAMERA **)(gsScenePtr + 0x84),fVar1,gsCameraPtr);
    iVar5 = *(int *)(this + 0xcd8);
    if ((iVar5 < *(int *)(this + 0x278)) &&
       (pcVar6 = this + iVar5 * 0x34 + 0x27c,
       *(float *)(this + iVar5 * 0x34 + 0x27c) < *(float *)(*(int *)(this + 0x84) + 0xe4))) {
      uStack_4 = 0;
      pcStack_c = pcVar6;
      if (0 < *(int *)(pcVar6 + 0x2c)) {
        do {
          pcStack_c = pcStack_c + 4;
          iVar5 = **(int **)pcStack_c;
          uVar4 = ftol();
          (**(code **)(iVar5 + 4))(uVar4);
          uStack_4 = uStack_4 + 1;
        } while ((int)uStack_4 < *(int *)(pcVar6 + 0x2c));
      }
      *(int *)(this + 0xcd8) = *(int *)(this + 0xcd8) + 1;
    }
    pcVar6 = this + 0x98;
    iVar5 = 0x14;
    do {
      if (*(int *)pcVar6 != 0) {
        cinACTOR::UpdateFrame((cinACTOR *)pcVar6);
      }
      pcVar6 = (cinSYSTEM *)((cinACTOR *)pcVar6 + 0x18);
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    (**(code **)(**(int **)(this + 0x90) + 0x10))
              (*(undefined4 *)(*(int *)(this + 0x84) + 0xe4),auStack_8,0);
    iVar5 = ftol();
    gsRENDER_SYSTEM::SetColorFullScr(gsSysRender,iVar5 << 0x18);
    if (((byte)this[0x80] & 2) != 0) {
      iVar5 = 0;
      if (0 < *(int *)(this + 0xcd0)) {
        pcVar6 = this + 0xca8;
        do {
          iVar3 = **(int **)pcVar6;
          uVar4 = ftol();
          (**(code **)(iVar3 + 4))(uVar4);
          iVar5 = iVar5 + 1;
          pcVar6 = pcVar6 + 4;
        } while (iVar5 < *(int *)(this + 0xcd0));
      }
      iVar5 = 0;
      *(uint *)(this + 0x80) = *(uint *)(this + 0x80) & 0xfffffffe;
      gsAppState = gsAppState & 0xfffffdff;
      if (0 < *(int *)(this + 0x94)) {
        pcVar6 = this + 0x98;
        do {
          cinACTOR::Term((cinACTOR *)pcVar6);
          iVar5 = iVar5 + 1;
          pcVar6 = (cinSYSTEM *)((cinACTOR *)pcVar6 + 0x18);
        } while (iVar5 < *(int *)(this + 0x94));
      }
      camCAMERA::SetAngleHor(gsCameraPtr,75.0);
      gsSND_SYSTEM::ReleaseMusic(gsSysSound);
      msgSYSTEM::SendAll(&msgSystem,0x4cd,(void *)0x0,(msgADDR *)0x0);
      gsMsgChangeMode(5);
      ResetData(this);
    }
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:cinema.cpp
   addr: 00541C20 */

void __thiscall cinSYSTEM::CreateData(cinSYSTEM *this,cinDATA_ENTITY *param_1)

{
  float fVar1;
  int iVar2;
  psSECT *ppVar3;
  char *pcVar4;
  m3dSPL *this_00;
  int iVar5;
  int iVar6;
  int iVar7;
  char local_40 [64];
  
  iVar2 = *(int *)(param_1 + 0xbc);
  *(int *)(this + 0x84) = iVar2;
  if ((iVar2 != 0) &&
     (iVar2 = *(int *)(*(int *)(iVar2 + 0x138) + 0x90), *(int *)(this + 0x8c) = iVar2, iVar2 != 0))
  {
    iVar2 = *(int *)(*(int *)(this + 0x84) + 0x134);
    if (iVar2 == 0) {
      *(undefined4 *)(this + 0x88) = *(undefined4 *)(*(int *)(*(int *)(this + 0x84) + 0x138) + 0xc4)
      ;
    }
    else {
      *(int *)(this + 0x88) = iVar2;
    }
    if (*(int *)(this + 0x88) != 0) {
      *(undefined4 *)(this + 0x278) = 0;
      param_1 = (cinDATA_ENTITY *)ftol();
      iVar2 = ftol();
      if ((int)param_1 < iVar2) {
        do {
          sprintf(local_40,s_FRAME__d,param_1);
          ppVar3 = psSHEET::FindSect(*(psSHEET **)(this + 0x88),local_40);
          if (ppVar3 != (psSECT *)0x0) {
            iVar2 = *(int *)(this + 0x278);
            *(int *)(this + 0x278) = iVar2 + 1;
            cinFRAME::Init((cinFRAME *)(this + iVar2 * 0x34 + 0x27c),(float)(int)param_1,
                           *(psSHEET **)(this + 0x88),local_40);
          }
          param_1 = param_1 + 1;
          iVar2 = ftol();
        } while ((int)param_1 < iVar2);
      }
      if (*(int *)(this + 0x278) == 0) {
        pcVar4 = *(char **)(*(int *)(this + 0x84) + 0x18);
        if (pcVar4 == (char *)0x0) {
          pcVar4 = s_;
        }
        apLogErr(s_No_script_frames_found_in_cinema,pcVar4);
      }
      sprintf(local_40,s_FRAME_LAST);
      ppVar3 = psSHEET::FindSect(*(psSHEET **)(this + 0x88),local_40);
      if (ppVar3 != (psSECT *)0x0) {
        cinFRAME::Init((cinFRAME *)(this + 0xca4),(float)(int)param_1,*(psSHEET **)(this + 0x88),
                       local_40);
      }
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
      }
      *(m3dSPL **)(this + 0x90) = this_00;
      if (this_00 != (m3dSPL *)0x0) {
        iVar2 = ftol();
        iVar2 = m3dSPL::AllocKpList(this_00,iVar2);
        if (iVar2 != 0) {
          iVar2 = *(int *)(this + 0x8c);
          iVar5 = 0;
          fVar1 = ___real_00000000;
          if (___real_00000000 <
              (*(float *)(iVar2 + 0x44) - *(float *)(iVar2 + 0x40)) + ___real_3f800000) {
            do {
              iVar6 = *(int *)(this + 0x90);
              iVar7 = *(int *)(iVar6 + 0x10);
              if (iVar5 < *(int *)(iVar6 + 0x10)) {
                iVar7 = iVar5;
              }
              *(float *)(*(int *)(iVar6 + 0x18) * iVar7 + *(int *)(iVar6 + 0x24)) =
                   fVar1 + *(float *)(iVar2 + 0x40);
              iVar2 = *(int *)(this + 0x90);
              iVar6 = *(int *)(iVar2 + 0x10);
              if (iVar5 < *(int *)(iVar2 + 0x10)) {
                iVar6 = iVar5;
              }
              iVar5 = iVar5 + 1;
              *(undefined4 *)(*(int *)(iVar2 + 0x18) * iVar6 + 4 + *(int *)(iVar2 + 0x24)) =
                   0x3f800000;
              iVar2 = *(int *)(this + 0x8c);
              fVar1 = (float)iVar5;
            } while ((float)iVar5 <
                     (*(float *)(iVar2 + 0x44) - *(float *)(iVar2 + 0x40)) + ___real_3f800000);
          }
        }
      }
    }
  }
  return;
}




/* from: gs_shared:cinema.cpp
   addr: 00541ED0 */

void __thiscall cinSYSTEM::ResetData(cinSYSTEM *this)

{
  int iVar1;
  cinSYSTEM *pcVar2;
  cinSYSTEM *pcVar3;
  int local_4;
  
  iVar1 = 0x14;
  pcVar2 = this + 0x98;
  *(uint *)(this + 0x80) = *(uint *)(this + 0x80) & 0xfffffffc;
  *(undefined4 *)(this + 0x84) = 0;
  *(undefined4 *)(this + 0x88) = 0;
  do {
    cinACTOR::Term((cinACTOR *)pcVar2);
    pcVar2 = (cinSYSTEM *)((cinACTOR *)pcVar2 + 0x18);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  *(undefined4 *)(this + 0x94) = 0;
  pcVar2 = this + 0x27c;
  local_4 = 0x32;
  do {
    *(undefined4 *)pcVar2 = 0xbf800000;
    *(undefined4 *)(pcVar2 + 0x30) = 0;
    iVar1 = 10;
    pcVar3 = pcVar2;
    do {
      pcVar3 = pcVar3 + 4;
      operator_delete(*(void **)pcVar3);
      *(undefined4 *)pcVar3 = 0;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    *(undefined4 *)(pcVar2 + 0x2c) = 0;
    pcVar2 = pcVar2 + 0x34;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  pcVar2 = this + 0xca8;
  *(undefined4 *)(this + 0x278) = 0;
  *(undefined4 *)(this + 0xca4) = 0xbf800000;
  *(undefined4 *)(this + 0xcd4) = 0;
  iVar1 = 10;
  do {
    operator_delete(*(void **)pcVar2);
    *(undefined4 *)pcVar2 = 0;
    pcVar2 = pcVar2 + 4;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  *(undefined4 *)(this + 0xcd0) = 0;
  *(undefined4 *)(this + 0xcd8) = 0xffffffff;
  if (*(int **)(this + 0x90) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x90) + 4))(1);
  }
  *(undefined4 *)(this + 0x90) = 0;
  return;
}




/* from: gs_shared:cinema.cpp
   addr: 00541FD0 */

cinACTOR * __thiscall cinSYSTEM::FindActor(cinSYSTEM *this,char *param_1)

{
  cinACTOR *pcVar1;
  byte bVar2;
  char *pcVar3;
  int iVar4;
  animINST *paVar5;
  cinSYSTEM *pcVar6;
  cinSYSTEM *pcVar7;
  byte *pbVar8;
  int iVar9;
  char *pcVar10;
  bool bVar11;
  
  pcVar6 = this + 0x98;
  iVar9 = 0;
  pcVar7 = pcVar6;
  do {
    if (*(int *)pcVar7 != 0) {
      pcVar3 = *(char **)(*(int *)pcVar7 + 0x18);
      pbVar8 = (byte *)param_1;
      if ((byte *)pcVar3 == (byte *)0x0) {
        pcVar3 = s_;
      }
      do {
        bVar2 = *pcVar3;
        bVar11 = bVar2 < *pbVar8;
        if (bVar2 != *pbVar8) {
LAB_0054201e:
          iVar4 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
          goto LAB_00542023;
        }
        if (bVar2 == 0) break;
        bVar2 = ((byte *)pcVar3)[1];
        bVar11 = bVar2 < pbVar8[1];
        if (bVar2 != pbVar8[1]) goto LAB_0054201e;
        pcVar3 = (char *)((byte *)pcVar3 + 2);
        pbVar8 = pbVar8 + 2;
      } while (bVar2 != 0);
      iVar4 = 0;
LAB_00542023:
      if (iVar4 == 0) {
        return (cinACTOR *)(this + iVar9 * 0x18 + 0x98);
      }
    }
    iVar9 = iVar9 + 1;
    pcVar7 = pcVar7 + 0x18;
  } while (iVar9 < 0x14);
  iVar9 = 0;
  while (*(int *)pcVar6 != 0) {
    iVar9 = iVar9 + 1;
    pcVar6 = pcVar6 + 0x18;
    if (0x13 < iVar9) {
      return (cinACTOR *)0x0;
    }
  }
  pcVar1 = (cinACTOR *)(this + iVar9 * 0x18 + 0x98);
  paVar5 = scnSCENE::FindInstName(gsScenePtr,param_1);
  *(animINST **)pcVar1 = paVar5;
  if (paVar5 == (animINST *)0x0) {
    return (cinACTOR *)0x0;
  }
  *(uint *)(*(int *)(paVar5 + 0x13c) + 0xb4) = *(uint *)(*(int *)(paVar5 + 0x13c) + 0xb4) | 0x10;
  pcVar3 = *(char **)(*(int *)pcVar1 + 0x18);
  if (pcVar3 == (char *)0x0) {
    pcVar3 = s_;
  }
  bVar11 = true;
  iVar9 = 10;
  pcVar10 = s_player_3d;
  do {
    if (iVar9 == 0) break;
    iVar9 = iVar9 + -1;
    bVar11 = *pcVar3 == *pcVar10;
    pcVar3 = pcVar3 + 1;
    pcVar10 = pcVar10 + 1;
  } while (bVar11);
  if (!bVar11) {
    msgSYSTEM::SendMsg(&msgSystem,*(msgADDR **)(*(int *)pcVar1 + 0x13c),0x4ca,(void *)0x0,
                       (msgADDR *)0x0);
    return pcVar1;
  }
  msgSYSTEM::SendMsg(&msgSystem,(msgADDR *)plgsPlayer,0x4ca,(void *)0x0,(msgADDR *)0x0);
  return pcVar1;
}




/* from: gs_shared:cinema.cpp
   addr: 00542110 */

int __thiscall cinACTOR::Animate(cinACTOR *this,char *param_1)

{
  char cVar1;
  animSEQ *this_00;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  bool bVar5;
  float fVar6;
  
  iVar3 = -1;
  pcVar2 = param_1;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  if (iVar3 == -2) {
    if (0 < *(int *)(*(int *)(*(int *)this + 0x138) + 0x8c)) {
      *(undefined4 *)(this + 0xc) = 0;
    }
  }
  else {
    iVar3 = animTPL::FindSeqName(*(animTPL **)(*(int *)this + 0x138),param_1);
    *(int *)(this + 0xc) = iVar3;
    if (iVar3 < 0) {
      apMsg(s_Cinematic__wrong_animSeqName__s,param_1);
      return 0;
    }
  }
  if (*(int *)(*(int *)(*(int *)this + 0x138) + 0xa4) == 0) {
    *(undefined4 *)(this + 0x10) = 1;
    this_00 = *(animSEQ **)(*(int *)(*(int *)(gsSysCinema + 0x84) + 0x138) + 0x90);
    fVar6 = animSEQ::FrameToTime(this_00,*(float *)(this_00 + 0x40));
    animINST::SetAnimSeq(*(animINST **)this,*(int *)(this + 0xc),fVar6);
    return 1;
  }
  pcVar2 = *(char **)(*(int *)this + 0x18);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = s_;
  }
  iVar3 = 10;
  bVar5 = true;
  pcVar4 = s_player_3d;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    bVar5 = *pcVar2 == *pcVar4;
    pcVar2 = pcVar2 + 1;
    pcVar4 = pcVar4 + 1;
  } while (bVar5);
  if (bVar5) {
    *(int *)(this + 0xc) = *(int *)(this + 0xc) + -1;
  }
  *(undefined4 *)(this + 0x10) = 0;
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:cinema.cpp
   addr: 00542200 */

int __thiscall cinACTOR::PlaySound(cinACTOR *this,char *param_1,gsSOUND_DESCR *param_2)

{
  char cVar1;
  undefined4 uVar2;
  sncCHANNEL *this_00;
  char *pcVar3;
  int iVar4;
  objOBJ *poVar5;
  
  if (*(int *)(this + 0x14) == 0) {
    this_00 = (sncCHANNEL *)operator_new(0xbc);
    if (this_00 == (sncCHANNEL *)0x0) {
      this_00 = (sncCHANNEL *)0x0;
    }
    else {
      sncCHANNEL::sncCHANNEL(this_00);
      *(undefined4 *)(this_00 + 0x74) = _m3dVZero;
      *(undefined4 *)(this_00 + 0x78) = DAT_00963740;
      uVar2 = DAT_00963744;
      *(undefined4 *)(this_00 + 0x80) = 0;
      *(undefined ***)this_00 = &sncCHANNEL_3D::_vftable_;
      *(undefined4 *)(this_00 + 0x7c) = uVar2;
      *(undefined4 *)(this_00 + 0x84) = 0;
      *(undefined4 *)(this_00 + 0x88) = 0;
      *(undefined4 *)(this_00 + 0x8c) = 0x43b40000;
      *(undefined4 *)(this_00 + 0x90) = 0x43b40000;
      *(undefined4 *)(this_00 + 0x94) = 0;
      *(undefined4 *)(this_00 + 0x98) = _m3dVZero;
      *(undefined4 *)(this_00 + 0x9c) = DAT_00963740;
      *(undefined4 *)(this_00 + 0xa0) = DAT_00963744;
      *(undefined4 *)(this_00 + 0xa4) = _m3dVZero;
      *(undefined4 *)(this_00 + 0xa8) = DAT_00963740;
      *(undefined4 *)(this_00 + 0xac) = DAT_00963744;
      *(undefined4 *)(this_00 + 0xb0) = _m3dVUnitZ;
      *(undefined4 *)(this_00 + 0xb4) = DAT_005f99a0;
      uVar2 = DAT_005f99a4;
      *(undefined ***)this_00 = &sncCHANNEL_SPH::_vftable_;
      *(undefined4 *)(this_00 + 0xb8) = uVar2;
    }
    *(sncCHANNEL **)(this + 0x14) = this_00;
    if (this_00 == (sncCHANNEL *)0x0) {
      return 0;
    }
    iVar4 = -1;
    poVar5 = (objOBJ *)0x0;
    pcVar3 = param_1;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    if ((iVar4 != -2) &&
       (poVar5 = objFindName(*(objOBJ **)(*(int *)this + 0x10),param_1), poVar5 == (objOBJ *)0x0)) {
      pcVar3 = *(char **)(*(int *)this + 0x18);
      if (pcVar3 == (char *)0x0) {
        pcVar3 = s_;
      }
      apMsg(s_Cinematic__cannot_find_sound_Obj,pcVar3,param_1);
    }
    gsSND_SYSTEM::AddChannel
              (gsSysSound,*(sncCHANNEL **)(this + 0x14),*(entIACTIVE_OBJ **)(*(int *)this + 0x13c),
               poVar5);
  }
  (**(code **)(**(int **)(this + 0x14) + 4))(param_2,0);
  return 1;
}




/* from: gs_shared:cinema.cpp
   addr: 00542370 */

void __thiscall cinACTOR::Term(cinACTOR *this)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  bool bVar4;
  msgADDR *pmVar5;
  
  if (*(int *)this != 0) {
    iVar2 = *(int *)(*(int *)this + 0x13c);
    *(uint *)(iVar2 + 0xb4) = *(uint *)(iVar2 + 0xb4) & 0xffffffef;
    if (*(objOBJ **)(*(int *)this + 0x10) != (objOBJ *)0x0) {
      objOBJ::SetStateProcNo
                (*(objOBJ **)(*(int *)this + 0x10),0x10,(_func_int_objOBJ_ptr_void_ptr *)0x0);
    }
    pcVar1 = *(char **)(*(int *)this + 0x18);
    if (pcVar1 == (char *)0x0) {
      pcVar1 = s_;
    }
    iVar2 = 10;
    bVar4 = true;
    pcVar3 = s_player_3d;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar4 = *pcVar1 == *pcVar3;
      pcVar1 = pcVar1 + 1;
      pcVar3 = pcVar3 + 1;
    } while (bVar4);
    pmVar5 = (msgADDR *)plgsPlayer;
    if (!bVar4) {
      pmVar5 = *(msgADDR **)(*(int *)this + 0x13c);
    }
    msgSYSTEM::SendMsg(&msgSystem,pmVar5,0x4cb,(void *)0x0,(msgADDR *)0x0);
  }
  if (*(sncCHANNEL **)(this + 0x14) != (sncCHANNEL *)0x0) {
    gsSND_SYSTEM::DelChannel(gsSysSound,*(sncCHANNEL **)(this + 0x14));
    if (*(undefined4 **)(this + 0x14) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(this + 0x14))(1);
    }
    *(undefined4 *)(this + 0x14) = 0;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0xc) = 0xffffffff;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:cinema.cpp
   addr: 00542420 */

void __thiscall cinACTOR::UpdateFrame(cinACTOR *this)

{
  objOBJ *this_00;
  animINST *this_01;
  int iVar1;
  undefined4 *puVar2;
  m3dMATR *pmVar3;
  float local_58;
  float local_54;
  float local_50;
  m3dV local_4c [12];
  m3dMATR local_40 [64];
  
  if (*(animINST **)(this + 4) != (animINST *)0x0) {
    animINST::Validate(*(animINST **)(this + 4),4);
    pmVar3 = local_40;
    iVar1 = 0x10;
    if (*(int *)(this + 8) == 0) {
      puVar2 = (undefined4 *)(*(int *)(this + 4) + 0x60);
    }
    else {
      puVar2 = (undefined4 *)(*(int *)(this + 8) + 0x3c);
    }
    for (; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined4 *)pmVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      pmVar3 = pmVar3 + 4;
    }
    m3dMATR::GetScale(local_40,&local_50,&local_54,&local_58);
    m3dMATR::Scale(local_40,___real_3f800000 / local_50,___real_3f800000 / local_54,
                   ___real_3f800000 / local_58,1);
    m3dMATR::GetOrigin(local_40,local_4c);
    animINST::Transform(*(animINST **)this,local_40,0);
    this_00 = *(objOBJ **)(*(int *)this + 0x10);
    if (this_00 != (objOBJ *)0x0) {
      if ((*(int *)(this + 8) == 0) || ((*(byte *)(*(int *)(this + 8) + 8) & 0x3f) == 0)) {
        objOBJ::SetStateProcNo(this_00,0x10,(_func_int_objOBJ_ptr_void_ptr *)0x0);
      }
      else {
        objOBJ::SetStateProcYes(this_00,0x10,(_func_int_objOBJ_ptr_void_ptr *)0x0);
      }
    }
  }
  if (*(int *)(this + 0xc) != -1) {
    if (((byte)gsSysCinema[0x80] & 2) == 0) {
      *(uint *)(*(int *)this + 4) = *(uint *)(*(int *)this + 4) & 0xfffffffd;
      if (*(int *)(this + 0x10) == 0) {
        animSYSTEM_INST::AdvanceAnimation
                  (*(animSYSTEM_INST **)(*(animINST **)this + 0xe8),*(animINST **)this,
                   *(int *)(this + 0xc),gsElapsedTime);
        return;
      }
      animINST::AdvanceTime(*(animINST **)this,gsElapsedTime,1,(float *)0x0);
      return;
    }
    if (*(int *)(this + 0x10) != 0) {
      this_01 = *(animINST **)this;
      animINST::SetAnimSeq
                (this_01,*(int *)(this + 0xc),
                 *(float *)(*(int *)(*(int *)(this_01 + 0x138) + 0x90) + 0x50 +
                           *(int *)(this_01 + 0xe0) * 0x88) * ___real_3a83126f);
    }
  }
  return;
}




/* from: gs_shared:cinema.cpp
   addr: 005425A0 */

int __thiscall cinFRAME::Init(cinFRAME *this,float param_1,psSHEET *param_2,char *param_3)

{
  int iVar1;
  psVAR *ppVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  cinFRAME *pcVar6;
  char local_40 [64];
  
  *(float *)this = param_1;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  pcVar6 = this + 4;
  for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined4 *)pcVar6 = 0;
    pcVar6 = pcVar6 + 4;
  }
  iVar5 = 0;
  while( true ) {
    iVar1 = *(int *)(this + 0x2c);
    sprintf(local_40,s_create_);
    if (0 < iVar5) {
      sprintf(local_40,s_create__d_,iVar5);
    }
    ppVar2 = psSHEET::FindVarStr(param_2,param_3,local_40);
    if (ppVar2 != (psVAR *)0x0) {
      puVar3 = (undefined4 *)operator_new(0xc4);
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        *(undefined1 *)(puVar3 + 1) = 0;
        *(undefined1 *)(puVar3 + 0x11) = 0;
        *(undefined1 *)(puVar3 + 0x21) = 0;
        *puVar3 = &cinACN_CREATE_ENT::_vftable_;
      }
      *(undefined4 **)(this + *(int *)(this + 0x2c) * 4 + 4) = puVar3;
      iVar4 = (**(code **)**(undefined4 **)(this + *(int *)(this + 0x2c) * 4 + 4))
                        (param_2,param_3,local_40);
      if (iVar4 != 0) {
        *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
      }
    }
    sprintf(local_40,s_destroy_);
    if (0 < iVar5) {
      sprintf(local_40,s_destroy__d_,iVar5);
    }
    ppVar2 = psSHEET::FindVarStr(param_2,param_3,local_40);
    if (ppVar2 != (psVAR *)0x0) {
      puVar3 = (undefined4 *)operator_new(0x44);
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        *(undefined1 *)(puVar3 + 1) = 0;
        *puVar3 = &cinACN_DESTROY_ENT::_vftable_;
      }
      *(undefined4 **)(this + *(int *)(this + 0x2c) * 4 + 4) = puVar3;
      iVar4 = (**(code **)**(undefined4 **)(this + *(int *)(this + 0x2c) * 4 + 4))
                        (param_2,param_3,local_40);
      if (iVar4 != 0) {
        *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
      }
    }
    sprintf(local_40,s_animate_);
    if (0 < iVar5) {
      sprintf(local_40,s_animate__d_,iVar5);
    }
    ppVar2 = psSHEET::FindVarStr(param_2,param_3,local_40);
    if (ppVar2 != (psVAR *)0x0) {
      puVar3 = (undefined4 *)operator_new(0x84);
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        *(undefined1 *)(puVar3 + 1) = 0;
        *(undefined1 *)(puVar3 + 0x11) = 0;
        *puVar3 = &cinACN_ANIMATE::_vftable_;
      }
      *(undefined4 **)(this + *(int *)(this + 0x2c) * 4 + 4) = puVar3;
      iVar4 = (**(code **)**(undefined4 **)(this + *(int *)(this + 0x2c) * 4 + 4))
                        (param_2,param_3,local_40);
      if (iVar4 != 0) {
        *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
      }
    }
    sprintf(local_40,s_command_);
    if (0 < iVar5) {
      sprintf(local_40,s_command__d_,iVar5);
    }
    ppVar2 = psSHEET::FindVarStr(param_2,param_3,local_40);
    if (ppVar2 != (psVAR *)0x0) {
      puVar3 = (undefined4 *)operator_new(0xc0);
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        *puVar3 = &cinACTION::_vftable_;
        entIACTION::entIACTION((entIACTION *)(puVar3 + 1));
        *puVar3 = &cinACN_COMMAND::_vftable_;
      }
      *(undefined4 **)(this + *(int *)(this + 0x2c) * 4 + 4) = puVar3;
      iVar4 = (**(code **)**(undefined4 **)(this + *(int *)(this + 0x2c) * 4 + 4))
                        (param_2,param_3,local_40);
      if (iVar4 != 0) {
        *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
      }
    }
    sprintf(local_40,s_constraint_);
    if (0 < iVar5) {
      sprintf(local_40,s_constraint__d_,iVar5);
    }
    ppVar2 = psSHEET::FindVarStr(param_2,param_3,local_40);
    if (ppVar2 != (psVAR *)0x0) {
      puVar3 = (undefined4 *)operator_new(0xc4);
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        *(undefined1 *)(puVar3 + 1) = 0;
        *(undefined1 *)(puVar3 + 0x11) = 0;
        *(undefined1 *)(puVar3 + 0x21) = 0;
        *puVar3 = &cinACN_CONTRAINT::_vftable_;
      }
      *(undefined4 **)(this + *(int *)(this + 0x2c) * 4 + 4) = puVar3;
      iVar4 = (**(code **)**(undefined4 **)(this + *(int *)(this + 0x2c) * 4 + 4))
                        (param_2,param_3,local_40);
      if (iVar4 != 0) {
        *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
      }
    }
    sprintf(local_40,s_sound_);
    if (0 < iVar5) {
      sprintf(local_40,s_sound__d_,iVar5);
    }
    ppVar2 = psSHEET::FindVarStr(param_2,param_3,local_40);
    if (ppVar2 != (psVAR *)0x0) {
      puVar3 = (undefined4 *)operator_new(0x138);
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        *puVar3 = &cinACTION::_vftable_;
        sncSOUND_DESCR::sncSOUND_DESCR((sncSOUND_DESCR *)(puVar3 + 1));
        puVar3[0x19] = 0;
        puVar3[0x1a] = 0;
        *(undefined1 *)(puVar3 + 0x1b) = 0;
        puVar3[0x2b] = 0xffffffff;
        puVar3[0x2c] = 0;
        puVar3[0x2d] = 0xffffffff;
        *(undefined ***)(puVar3 + 1) = &gsSOUND_DESCR::_vftable_;
        *(undefined1 *)(puVar3 + 0x2e) = 0;
        *(undefined1 *)(puVar3 + 0x3e) = 0;
        *puVar3 = &cinACN_SOUND::_vftable_;
      }
      *(undefined4 **)(this + *(int *)(this + 0x2c) * 4 + 4) = puVar3;
      iVar4 = (**(code **)**(undefined4 **)(this + *(int *)(this + 0x2c) * 4 + 4))
                        (param_2,param_3,local_40);
      if (iVar4 != 0) {
        *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
      }
    }
    sprintf(local_40,s_music_);
    if (0 < iVar5) {
      sprintf(local_40,s_music__d_,iVar5);
    }
    ppVar2 = psSHEET::FindVarStr(param_2,param_3,local_40);
    if (ppVar2 != (psVAR *)0x0) {
      puVar3 = (undefined4 *)operator_new(0x44);
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        *(undefined1 *)(puVar3 + 1) = 0;
        *puVar3 = &cinACN_MUSIC::_vftable_;
      }
      *(undefined4 **)(this + *(int *)(this + 0x2c) * 4 + 4) = puVar3;
      iVar4 = (**(code **)**(undefined4 **)(this + *(int *)(this + 0x2c) * 4 + 4))
                        (param_2,param_3,local_40);
      if (iVar4 != 0) {
        *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
      }
    }
    sprintf(local_40,s_camera_cut_);
    if (0 < iVar5) {
      sprintf(local_40,s_camera_cut__d_,iVar5);
    }
    ppVar2 = psSHEET::FindVarStr(param_2,param_3,local_40);
    if (ppVar2 != (psVAR *)0x0) {
      puVar3 = (undefined4 *)operator_new(4);
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        *puVar3 = &cinACN_CAMERA_CUT::_vftable_;
      }
      *(undefined4 **)(this + *(int *)(this + 0x2c) * 4 + 4) = puVar3;
      iVar4 = (**(code **)**(undefined4 **)(this + *(int *)(this + 0x2c) * 4 + 4))
                        (param_2,param_3,local_40);
      if (iVar4 != 0) {
        *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
      }
      *(undefined4 *)(this + 0x30) = 1;
    }
    sprintf(local_40,s_fade_);
    if (0 < iVar5) {
      sprintf(local_40,s_fade__d_,iVar5);
    }
    ppVar2 = psSHEET::FindVarStr(param_2,param_3,local_40);
    if (ppVar2 != (psVAR *)0x0) {
      puVar3 = (undefined4 *)operator_new(0xc);
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        puVar3[1] = 0;
        puVar3[2] = 0;
        *puVar3 = &cinACN_FADE::_vftable_;
      }
      *(undefined4 **)(this + *(int *)(this + 0x2c) * 4 + 4) = puVar3;
      iVar4 = (**(code **)**(undefined4 **)(this + *(int *)(this + 0x2c) * 4 + 4))
                        (param_2,param_3,local_40);
      if (iVar4 != 0) {
        *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
      }
    }
    if (*(int *)(this + 0x2c) == iVar1) break;
    iVar5 = iVar5 + 1;
  }
  return 1;
}




/* from: gs_shared:cinema.cpp
   addr: 00542AB0 */

int __thiscall
cinACN_CREATE_ENT::Init(cinACN_CREATE_ENT *this,psSHEET *param_1,char *param_2,char *param_3)

{
  int iVar1;
  char local_40 [64];
  
  sprintf(local_40,s__sActor,param_3);
  iVar1 = psSHEET::GetStr(param_1,param_2,local_40,(char *)(this + 4),0x1000);
  if (iVar1 != 0) {
    sprintf(local_40,s__sClassName,param_3);
    iVar1 = psSHEET::GetStr(param_1,param_2,local_40,(char *)(this + 0x44),0x1000);
    if (iVar1 != 0) {
      sprintf(local_40,s__sTplName,param_3);
      iVar1 = psSHEET::GetStr(param_1,param_2,local_40,(char *)(this + 0x84),0x1000);
      if (iVar1 != 0) {
        return 1;
      }
    }
  }
  apMsg(s_Cinematic__section__s__cannot_re,param_2,local_40);
  return 0;
}




/* from: gs_shared:cinema.cpp
   addr: 00542B90 */

void __thiscall cinACN_CREATE_ENT::UpdateFrame(cinACN_CREATE_ENT *this,int param_1)

{
  cinACN_CREATE_ENT cVar1;
  int iVar2;
  cinACN_CREATE_ENT *pcVar3;
  animCREATE_DATA local_98 [82];
  cinACN_CREATE_ENT local_46 [70];
  
  animCREATE_DATA::animCREATE_DATA(local_98);
  pcVar3 = this + 4;
  iVar2 = -(int)pcVar3;
  do {
    cVar1 = *pcVar3;
    pcVar3[(int)(local_46 + iVar2)] = cVar1;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != (cinACN_CREATE_ENT)0x0);
  entCreate(gsScenePtr,(char *)(this + 0x44),(char *)(this + 0x84),local_98,(void *)0x0,0);
  return;
}




/* from: gs_shared:cinema.cpp
   addr: 00542BE0 */

int __thiscall
cinACN_DESTROY_ENT::Init(cinACN_DESTROY_ENT *this,psSHEET *param_1,char *param_2,char *param_3)

{
  int iVar1;
  char local_40 [64];
  
  sprintf(local_40,s__sActor,param_3);
  iVar1 = psSHEET::GetStr(param_1,param_2,local_40,(char *)(this + 4),0x1000);
  if (iVar1 == 0) {
    apMsg(s_Cinematic__section__s__cannot_re,param_2,local_40);
    return 0;
  }
  return 1;
}




/* from: gs_shared:cinema.cpp
   addr: 00542C50 */

void __thiscall cinACN_DESTROY_ENT::UpdateFrame(cinACN_DESTROY_ENT *this,int param_1)

{
  animINST *paVar1;
  
  paVar1 = scnSCENE::FindInstName(gsScenePtr,(char *)(this + 4));
  if ((paVar1 != (animINST *)0x0) && (*(msgADDR **)(paVar1 + 0x13c) != (msgADDR *)0x0)) {
    msgSYSTEM::PostMsg(&msgSystem,*(msgADDR **)(paVar1 + 0x13c),2,(msgADDR *)gsSysCinema);
  }
  return;
}




/* from: gs_shared:cinema.cpp
   addr: 00542C90 */

int __thiscall
cinACN_ANIMATE::Init(cinACN_ANIMATE *this,psSHEET *param_1,char *param_2,char *param_3)

{
  int iVar1;
  char local_40 [64];
  
  sprintf(local_40,s__sActor,param_3);
  iVar1 = psSHEET::GetStr(param_1,param_2,local_40,(char *)(this + 4),0x1000);
  if (iVar1 == 0) {
    apMsg(s_Cinematic__section__s__cannot_re,param_2,local_40);
    return 0;
  }
  apNAME::SetName((apNAME *)(this + 0x44),s_);
  sprintf(local_40,s__sSeqName,param_3);
  psSHEET::GetStr(param_1,param_2,local_40,(char *)(this + 0x44),0x1000);
  return 1;
}




/* from: gs_shared:cinema.cpp
   addr: 00542D40 */

void __thiscall cinACN_ANIMATE::UpdateFrame(cinACN_ANIMATE *this,int param_1)

{
  cinACTOR *this_00;
  
  this_00 = cinSYSTEM::FindActor(gsSysCinema,(char *)(this + 4));
  if (this_00 != (cinACTOR *)0x0) {
    cinACTOR::Animate(this_00,(char *)(this + 0x44));
  }
  return;
}




/* from: gs_shared:cinema.cpp
   addr: 00542D70 */

int __thiscall
cinACN_CONTRAINT::Init(cinACN_CONTRAINT *this,psSHEET *param_1,char *param_2,char *param_3)

{
  int iVar1;
  char local_40 [64];
  
  sprintf(local_40,s__sActor,param_3);
  iVar1 = psSHEET::GetStr(param_1,param_2,local_40,(char *)(this + 4),0x1000);
  if (iVar1 != 0) {
    sprintf(local_40,s__sActorTo,param_3);
    iVar1 = psSHEET::GetStr(param_1,param_2,local_40,(char *)(this + 0x44),0x1000);
    if (iVar1 != 0) {
      apNAME::SetName((apNAME *)(this + 0x84),s_);
      sprintf(local_40,s__sObjTo,param_3);
      psSHEET::GetStr(param_1,param_2,local_40,(char *)(this + 0x84),0x1000);
      return 1;
    }
  }
  apMsg(s_Cinematic__section__s__cannot_re,param_2,local_40);
  return 0;
}




/* from: gs_shared:cinema.cpp
   addr: 00542E50 */

void __thiscall cinACN_CONTRAINT::UpdateFrame(cinACN_CONTRAINT *this,int param_1)

{
  cinACN_CONTRAINT *pcVar1;
  cinACN_CONTRAINT *pcVar2;
  cinACN_CONTRAINT cVar3;
  cinACTOR *pcVar4;
  animINST *paVar5;
  objOBJ *poVar6;
  int iVar7;
  cinACN_CONTRAINT *pcVar8;
  
  pcVar4 = cinSYSTEM::FindActor(gsSysCinema,(char *)(this + 4));
  if (pcVar4 != (cinACTOR *)0x0) {
    pcVar1 = this + 0x44;
    pcVar2 = this + 0x84;
    paVar5 = scnSCENE::FindInstName(gsScenePtr,(char *)pcVar1);
    *(animINST **)(pcVar4 + 4) = paVar5;
    if (paVar5 == (animINST *)0x0) {
      apMsg(s_Cinematic__cannot_find_constrain,pcVar1);
      return;
    }
    iVar7 = -1;
    pcVar8 = pcVar2;
    do {
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      cVar3 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar3 != (cinACN_CONTRAINT)0x0);
    if (iVar7 != -2) {
      poVar6 = objFindName(*(objOBJ **)(paVar5 + 0x10),(char *)pcVar2);
      *(objOBJ **)(pcVar4 + 8) = poVar6;
      if (poVar6 == (objOBJ *)0x0) {
        apMsg(s_Cinematic__cannot_find_constrain,pcVar1,pcVar2);
      }
    }
  }
  return;
}




/* from: gs_shared:cinema.cpp
   addr: 00542EE0 */

int __thiscall
cinACN_COMMAND::Init(cinACN_COMMAND *this,psSHEET *param_1,char *param_2,char *param_3)

{
  int iVar1;
  
  iVar1 = entIACTIVE_OBJ::ParseIActionData
                    (param_1,param_2,param_3,(entIACTION_DATA *)(this + 4),s_cinematic_command);
  return iVar1;
}




/* from: gs_shared:cinema.cpp
   addr: 00542F10 */

int __thiscall cinACN_FADE::Init(cinACN_FADE *this,psSHEET *param_1,char *param_2,char *param_3)

{
  int iVar1;
  char local_40 [64];
  
  sprintf(local_40,s__sFrameLen,param_3);
  iVar1 = psSHEET::GetInt(param_1,param_2,local_40,(int *)(this + 4));
  if (iVar1 != 0) {
    sprintf(local_40,s__sIsOut,param_3);
    iVar1 = psSHEET::GetBool(param_1,param_2,local_40,(int *)(this + 8));
    if (iVar1 != 0) {
      return 1;
    }
  }
  apMsg(s_Cinematic__section__s__cannot_re,param_2,local_40);
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:cinema.cpp
   addr: 00542FB0 */

void __thiscall cinACN_FADE::UpdateFrame(cinACN_FADE *this,int param_1)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  cinSYSTEM *pcVar8;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  pcVar8 = gsSysCinema;
  fVar3 = (float)param_1;
  iVar2 = *(int *)(gsSysCinema + 0x8c);
  fVar1 = *(float *)(iVar2 + 0x40);
  iVar6 = ftol();
  fVar5 = (float)iVar6;
  if (fVar5 < (*(float *)(iVar2 + 0x44) - *(float *)(iVar2 + 0x40)) + ___real_3f800000) {
    do {
      if (*(int *)(this + 4) == 0) {
        iVar2 = *(int *)(pcVar8 + 0x90);
        iVar7 = *(int *)(iVar2 + 0x10);
        if (*(int *)(this + 8) == 0) {
          if (iVar6 < iVar7) {
            iVar7 = iVar6;
          }
          *(undefined4 *)(*(int *)(iVar2 + 0x24) + 4 + *(int *)(iVar2 + 0x18) * iVar7) = 0;
        }
        else {
          if (iVar6 < iVar7) {
            iVar7 = iVar6;
          }
          *(undefined4 *)(*(int *)(iVar2 + 0x24) + 4 + *(int *)(iVar2 + 0x18) * iVar7) = 0x3f800000;
        }
      }
      else {
        fVar5 = fVar5 - (fVar3 - fVar1);
        fVar4 = (float)*(int *)(this + 4);
        param_1 = (int)fVar4;
        if (*(int *)(this + 8) == 0) {
          local_2c = 0.0;
          local_20 = 0.0;
          local_1c = 1.0;
          if (fVar4 < ___real_00000000) {
            param_1 = 0;
            local_1c = 0.0;
            local_20 = 1.0;
            local_2c = fVar4;
          }
          fVar4 = local_1c;
          if ((local_2c <= fVar5) && (fVar4 = local_20, fVar5 <= (float)param_1)) {
            local_4 = (float)param_1;
            local_8 = local_20;
            local_24 = local_1c;
            if ((float)param_1 < local_2c) {
              local_4 = local_2c;
              local_8 = local_1c;
              local_2c = (float)param_1;
              local_24 = local_20;
            }
            fVar5 = (fVar5 - local_2c) * (local_8 - local_24);
            local_c = local_4;
            goto LAB_005431f9;
          }
        }
        else {
          local_30 = 0.0;
          local_28 = 1.0;
          local_24 = 0.0;
          if (fVar4 < ___real_00000000) {
            param_1 = 0;
            local_24 = 1.0;
            local_28 = 0.0;
            local_30 = fVar4;
          }
          fVar4 = local_24;
          if ((local_30 <= fVar5) && (fVar4 = local_28, fVar5 <= (float)param_1)) {
            local_c = (float)param_1;
            local_10 = local_28;
            local_2c = local_30;
            if ((float)param_1 < local_30) {
              local_c = local_30;
              local_10 = local_24;
              local_24 = local_28;
              local_2c = (float)param_1;
            }
            fVar5 = (fVar5 - local_2c) * (local_10 - local_24);
LAB_005431f9:
            fVar4 = fVar5 / (local_c - local_2c) + local_24;
          }
        }
        iVar2 = *(int *)(pcVar8 + 0x90);
        iVar7 = *(int *)(iVar2 + 0x10);
        if (iVar6 < *(int *)(iVar2 + 0x10)) {
          iVar7 = iVar6;
        }
        *(float *)(*(int *)(iVar2 + 0x24) + 4 + *(int *)(iVar2 + 0x18) * iVar7) = fVar4;
      }
      iVar6 = iVar6 + 1;
      fVar5 = (float)iVar6;
      pcVar8 = gsSysCinema;
    } while (fVar5 < (*(float *)(*(int *)(gsSysCinema + 0x8c) + 0x44) -
                     *(float *)(*(int *)(gsSysCinema + 0x8c) + 0x40)) + ___real_3f800000);
  }
  return;
}




/* from: gs_shared:cinema.cpp
   addr: 00543260 */

int __thiscall cinACN_SOUND::Init(cinACN_SOUND *this,psSHEET *param_1,char *param_2,char *param_3)

{
  char local_40 [64];
  
  sprintf(local_40,s__sActor,param_3);
  psSHEET::GetStr(param_1,param_2,local_40,(char *)(this + 0xb8),0x40);
  sprintf(local_40,s__sObj,param_3);
  psSHEET::GetStr(param_1,param_2,local_40,(char *)(this + 0xf8),0x40);
  *(uint *)(this + 0x60) = *(uint *)(this + 0x60) | 6;
  (*(code *)**(undefined4 **)(this + 4))(param_1,param_2,param_3);
  return 1;
}




/* from: gs_shared:cinema.cpp
   addr: 005432F0 */

void __thiscall cinACN_SOUND::UpdateFrame(cinACN_SOUND *this,int param_1)

{
  cinACTOR *this_00;
  m3dV local_c [12];
  
  this_00 = cinSYSTEM::FindActor(gsSysCinema,(char *)(this + 0xb8));
  if (this_00 == (cinACTOR *)0x0) {
    camCAMERA::GetOrigin(gsCameraPtr,local_c);
    gsSND_SYSTEM::Play(gsSysSound,(sncSOUND_DESCR_3D *)(this + 4),local_c);
    return;
  }
  cinACTOR::PlaySound(this_00,(char *)(this + 0xf8),(gsSOUND_DESCR *)(this + 4));
  return;
}




/* from: gs_shared:cinema.cpp
   addr: 00543350 */

int __thiscall cinACN_MUSIC::Init(cinACN_MUSIC *this,psSHEET *param_1,char *param_2,char *param_3)

{
  int iVar1;
  char local_40 [64];
  
  sprintf(local_40,s__sName,param_3);
  iVar1 = psSHEET::GetStr(param_1,param_2,local_40,(char *)(this + 4),0x40);
  if (iVar1 == 0) {
    apMsg(s_Cinematic__section__s__cannot_re,param_2,local_40);
    return 0;
  }
  return 1;
}




/* from: gs_shared:cinema.cpp
   addr: 005433C0 */

entENTITY * __fastcall cinDATA_ENTITY::Create(animINST *param_1)

{
  entENTITY *this;
  
  this = (entENTITY *)operator_new(0x14f);
  if (this != (entENTITY *)0x0) {
    entENTITY::entENTITY(this);
    *(undefined ***)this = &_vftable_;
    return this;
  }
  return (entENTITY *)0x0;
}

