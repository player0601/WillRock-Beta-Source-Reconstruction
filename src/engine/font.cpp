
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:font.cpp
   addr: 0057FA20 */

int __fastcall fntInit(void)

{
  fntManager = (fntMANAGER *)operator_new(0xc);
  if (fntManager != (fntMANAGER *)0x0) {
    *(undefined ***)fntManager = &fntMANAGER::_vftable_;
    *(undefined4 *)(fntManager + 4) = 0xbf800000;
    *(undefined4 *)(fntManager + 8) = 0xbf800000;
    DAT_0096438c = 0x3c9ba5e3;
    DAT_00964390 = 0x3c6d9168;
    DAT_00964394 = 0xbb83126f;
    DAT_00964398 = 0;
    DAT_0096439c = 0x3ced9168;
    DAT_009643a0 = 0x3ccccccd;
    DAT_009643a4 = 0xbc0b4396;
    DAT_009643a8 = 0;
    _DAT_009643ac = 0x3d23d70a;
    _DAT_009643b0 = 0x3d1374bc;
    _DAT_009643b4 = 0xbc449ba6;
    _DAT_009643b8 = 0;
    return 1;
  }
  fntManager = (fntMANAGER *)0x0;
  return 1;
}




/* from: engine:font.cpp
   addr: 0057FAE0 */

void __fastcall fntTerm(void)

{
  if (fntManager != (fntMANAGER *)0x0) {
    (*(code *)**(undefined4 **)fntManager)(1);
  }
  fntManager = (fntMANAGER *)0x0;
  return;
}




/* from: engine:font.cpp
   addr: 0057FB00
   addr: 0057FB00 */

void * __thiscall fntMANAGER::_vector_deleting_destructor_(fntMANAGER *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: engine:font.cpp
   addr: 0057FB20 */

void __thiscall fntMANAGER::SetScreenSize(fntMANAGER *this,float param_1,float param_2)

{
  *(float *)(this + 4) = param_1;
  *(float *)(this + 8) = param_2;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:font.cpp
   addr: 0057FB40 */

void __thiscall
fntFONT::Print(fntFONT *this,int param_1,float param_2,float param_3,ulong param_4,char *param_5,...
              )

{
  char cVar1;
  uint uVar2;
  float fVar3;
  int this_00;
  uint uVar4;
  float fVar5;
  fntFONT_PARAM *pfVar6;
  char **ppcVar7;
  int iVar8;
  char *in_stack_00000018;
  
  fVar5 = (float)param_4;
  this_00 = param_1;
  uVar2 = *(uint *)(*(int *)(vidDriver + 0x210) + 0x14);
  pfVar6 = (fntFONT_PARAM *)((int)param_2 * 0x10 + *(int *)param_1);
  param_2 = param_3;
  param_1 = param_4;
  vsprintf((char *)&apBuffer,in_stack_00000018,&stack0x0000001c);
  uVar4 = 0xffffffff;
  ppcVar7 = &apBuffer;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *(char *)ppcVar7;
    ppcVar7 = (char **)((int)ppcVar7 + 1);
  } while (cVar1 != '\0');
  param_4 = 0;
  if (0 < (int)(~uVar4 - 1)) {
    do {
      cVar1 = *(char *)((int)&apBuffer + param_4);
      if (cVar1 == '\n') {
        param_2 = param_3;
        fVar5 = *(float *)(pfVar6 + 0xc) + *(float *)pfVar6 + (float)param_1;
        param_1 = (int)fVar5;
      }
      else if (cVar1 == '\t') {
        iVar8 = 4;
        do {
          PrintChar((fntFONT *)this_00,pfVar6,param_2,fVar5,(ulong)param_5,' ');
          iVar8 = iVar8 + -1;
          param_2 = *(float *)(pfVar6 + 4) + *(float *)(pfVar6 + 8) + param_2;
        } while (iVar8 != 0);
      }
      else {
        PrintChar((fntFONT *)this_00,pfVar6,param_2,fVar5,(ulong)param_5,cVar1);
        fVar3 = *(float *)(pfVar6 + 8) + *(float *)(pfVar6 + 4);
        if (*(char *)((int)&apBuffer + param_4) == ' ') {
          fVar3 = fVar3 * ___real_3f19999a;
        }
        param_2 = fVar3 + param_2;
      }
      param_4 = param_4 + 1;
    } while ((int)param_4 < (int)(~uVar4 - 1));
  }
  vidDRIVER::ToggleModeParam(vidDriver,0x200,uVar2 & 0x200);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:font.cpp
   addr: 0057FC80 */

void __thiscall
fntFONT::GetStringExtents(fntFONT *this,int param_1,char *param_2,float *param_3,float *param_4)

{
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  float *pfVar6;
  int iVar7;
  char *pcVar8;
  float local_4;
  
  pfVar6 = (float *)(param_1 * 0x10 + *(int *)this);
  local_4 = *pfVar6;
  uVar5 = 0xffffffff;
  pcVar8 = param_2;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  param_1 = (int)___real_00000000;
  iVar7 = 0;
  fVar3 = ___real_00000000;
  if (0 < (int)(~uVar5 - 1)) {
    fVar2 = pfVar6[2] + pfVar6[1];
    do {
      if (param_2[iVar7] == '\n') {
        local_4 = fVar2;
        if ((float)param_1 < fVar3) {
          param_1 = (int)fVar3;
        }
      }
      else {
        fVar4 = fVar2;
        if (param_2[iVar7] == '\t') {
          fVar4 = fVar2 * ___real_40800000;
        }
        fVar3 = fVar4 + fVar3;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < (int)(~uVar5 - 1));
  }
  if (param_3 != (float *)0x0) {
    if (fVar3 <= (float)param_1) {
      fVar3 = (float)param_1;
    }
    *param_3 = fVar3;
    *param_3 = fVar3 - pfVar6[2];
  }
  if (param_4 != (float *)0x0) {
    *param_4 = local_4;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:font.cpp
   addr: 0057FD40 */

void __thiscall
fntFONT::PrintChar(fntFONT *this,fntFONT_PARAM *param_1,float param_2,float param_3,ulong param_4,
                  char param_5)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  float local_184;
  float local_180;
  float local_16c;
  float local_168;
  float local_154;
  float local_150;
  float local_13c;
  float local_138;
  float local_124;
  float local_120;
  float local_10c;
  float local_108;
  float local_f4;
  float local_f0;
  float local_dc;
  float local_d8;
  undefined4 local_c4 [2];
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_10;
  undefined4 local_c;
  ulong local_8;
  
  iVar2 = toupper((int)param_5);
  cVar1 = (char)iVar2;
  if (('\x1f' < cVar1) && (cVar1 < '_')) {
    local_c4[0] = *(undefined4 *)(this + 4);
    uVar3 = (int)cVar1 - 0x20;
    local_c = 0x80af;
    uVar4 = uVar3 & 0x80000007;
    local_10 = 1;
    local_bc = 0;
    local_b8 = 0;
    local_8 = param_4;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xfffffff8) + 1;
    }
    local_16c = (float)(int)uVar4 * ___real_3e000000;
    local_168 = (float)((int)(uVar3 + ((int)uVar3 >> 0x1f & 7U)) >> 3) * ___real_3e000000;
    local_138 = ___real_3e000000 + local_168;
    local_10c = local_16c + ___real_3e000000;
    local_184 = param_2 * *(float *)(fntManager + 4);
    local_180 = param_3 * *(float *)(fntManager + 8);
    local_150 = *(float *)(fntManager + 8) * *(float *)param_1 + local_180;
    local_124 = *(float *)(fntManager + 4) * *(float *)(param_1 + 4) + local_184;
    local_120 = *(float *)(fntManager + 8) * *(float *)param_1 + local_180;
    local_f4 = *(float *)(fntManager + 4) * *(float *)(param_1 + 4) + local_184;
    local_154 = local_184;
    local_13c = local_16c;
    local_108 = local_138;
    local_f0 = local_180;
    local_dc = local_10c;
    local_d8 = local_168;
    rendDRIVER::RenderPolyCompat
              (rendDrv,(camCAMERA *)0x0,4,(rendVERTEX *)&local_184,(rendCFG *)local_c4);
  }
  return;
}

