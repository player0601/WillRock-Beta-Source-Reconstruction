
/* from: gs_shared:ai_ctrl_die.cpp
   addr: 00530AB0 */

int __fastcall aiIsNPCDead(entENTITY *param_1,int *param_2)

{
  if ((param_1 != (entENTITY *)0x0) && (*(int *)(param_1 + 0x14) == 0x244e5043)) {
    if (param_2 != (int *)0x0) {
      *param_2 = *(uint *)(param_1 + 0x44f) & 0x40000;
    }
    return *(uint *)(param_1 + 1099) & 0x200000;
  }
  if (param_2 != (int *)0x0) {
    *param_2 = 0;
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:ai_ctrl_die.cpp
   addr: 00530AF0 */

int __thiscall aiNPC::ProcessCDT_FIREABLE(aiNPC *this,dmgDAMAGE *param_1)

{
  float fVar1;
  char *pcVar2;
  
  if (param_1 == (dmgDAMAGE *)0x0) {
    return 0;
  }
  if (((byte)this[0x88] & 4) == 0) {
    return 0;
  }
  fVar1 = ___real_3f800000;
  if (*(int *)(param_1 + 4) == 3) {
    fVar1 = ___real_3e99999a;
  }
  *(float *)(this + 0xcc) = *(float *)(this + 0xcc) - fVar1 * *(float *)(param_1 + 8);
  if ((*(uint *)(this + 1099) & 0x200000) == 0) {
    *(undefined4 *)(this + 0x17f) = 0x43340000;
    if ((*(uint *)(this + 1099) & 0x10000) != 0) {
      pcVar2 = *(char **)(*(int *)(this + 0xbc) + 0x1c);
      if (pcVar2 == (char *)0x0) {
        pcVar2 = s_;
      }
      pcVar2 = strstr(pcVar2,s_ai_mino);
      if (pcVar2 != (char *)0x0) {
        *(undefined4 *)(this + 0x30) = 0;
      }
      (**(code **)(*(int *)this + 0x16c))(1);
    }
    (**(code **)(*(int *)this + 300))(param_1);
    if (*(float *)(this + 0xcc) < ___real_00000000 != (*(float *)(this + 0xcc) == ___real_00000000))
    {
      (**(code **)(*(int *)this + 0x8c))(param_1);
      return 1;
    }
    (**(code **)(*(int *)this + 0x94))();
  }
  return 0;
}




/* from: gs_shared:ai_ctrl_die.cpp
   addr: 00530BE0 */

void __thiscall aiNPC::StartDeath(aiNPC *this,dmgDAMAGE *param_1)

{
  *(undefined4 *)(this + 0xcc) = 0;
  *(uint *)(this + 1099) = *(uint *)(this + 1099) | 0x200000;
  *(undefined4 *)(this + 0x493) = 0;
  if (((byte)this[0x88] & 4) != 0) {
    msgSYSTEM::SendAll(&msgSystem,0x4c8,(void *)0x0,(msgADDR *)this);
    if ((*(uint *)(this + 1099) & 0x100000) == 0) {
      *(uint *)(this + 0x84) = *(uint *)(this + 0x84) | 0x20;
    }
    (**(code **)(*(int *)this + 0x130))(param_1);
  }
  return;
}




/* from: gs_shared:ai_ctrl_die.cpp
   addr: 00530C50 */

void __thiscall aiNPC::UpdateDead(aiNPC *this)

{
  objOBJ *this_00;
  float fVar1;
  byte bVar2;
  uint local_4;
  
  *(uint *)(*(int *)(this + 0xbc) + 8) = *(uint *)(*(int *)(this + 0xbc) + 8) | 4;
  this_00 = *(objOBJ **)(*(int *)(this + 0xbc) + 0x10);
  if (this_00 != (objOBJ *)0x0) {
    bVar2 = ftol();
    local_4 = (uint)bVar2;
    objOBJ::SetConstColor(this_00,local_4 << 0x18,1,0);
    if (bVar2 < 0xf3) {
      *(uint *)(this + 1099) = *(uint *)(this + 1099) & 0xfeffffff;
    }
  }
  if ((((byte)this[0x88] & 4) != 0) &&
     (fVar1 = gsElapsedTime + *(float *)(this + 0x493), *(float *)(this + 0x493) = fVar1,
     *(float *)(this + 0x497) < fVar1)) {
    msgSYSTEM::PostMsg(&msgSystem,(msgADDR *)this,2,(msgADDR *)this);
  }
  return;
}




/* from: gs_shared:ai_ctrl_die.cpp
   addr: 00530DD0 */

void __thiscall
aiDMG_DISPATCHER_TO_SIBLING::Dispatch
          (aiDMG_DISPATCHER_TO_SIBLING *this,entENTITY *param_1,dmgDAMAGE *param_2,
          entENTITY *param_3)

{
  byte bVar1;
  byte *pbVar2;
  char *pcVar3;
  int iVar4;
  aiDMG_DISPATCHER_TO_SIBLING *paVar5;
  byte *pbVar7;
  bool bVar8;
  float fVar9;
  undefined3 uVar6;
  
  if ((*(int *)(param_1 + 0xbc) != 0) && (*(int *)(param_3 + 0xbc) != 0)) {
    pbVar2 = *(byte **)(*(int *)(param_3 + 0xbc) + 0x1c);
    pbVar7 = (byte *)s_;
    if (pbVar2 != (byte *)0x0) {
      pbVar7 = pbVar2;
    }
    pcVar3 = *(char **)(*(int *)(param_1 + 0xbc) + 0x1c);
    paVar5 = this;
    if ((byte *)pcVar3 == (byte *)0x0) {
      pcVar3 = s_;
    }
    do {
      bVar1 = *pcVar3;
      uVar6 = (undefined3)((uint)paVar5 >> 8);
      paVar5 = (aiDMG_DISPATCHER_TO_SIBLING *)CONCAT31(uVar6,bVar1);
      bVar8 = bVar1 < *pbVar7;
      if (bVar1 != *pbVar7) {
LAB_00530e34:
        iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
        goto LAB_00530e39;
      }
      if (bVar1 == 0) break;
      bVar1 = ((byte *)pcVar3)[1];
      paVar5 = (aiDMG_DISPATCHER_TO_SIBLING *)CONCAT31(uVar6,bVar1);
      bVar8 = bVar1 < pbVar7[1];
      if (bVar1 != pbVar7[1]) goto LAB_00530e34;
      pcVar3 = (char *)((byte *)pcVar3 + 2);
      pbVar7 = pbVar7 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_00530e39:
    if (iVar4 == 0) {
      fVar9 = *(float *)(this + 4);
      *(float *)(param_2 + 8) = fVar9;
      fVar9 = m3dRandRange((float)paVar5,fVar9);
      msgSYSTEM::PostTimeMsgData
                (&msgSystem,(msgADDR *)param_1,0x4c5,(msgDATA *)param_2,(msgADDR *)param_3,fVar9);
      return;
    }
  }
  dmgDISPATCHER::Dispatch((dmgDISPATCHER *)this,param_1,param_2,param_3);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:ai_ctrl_die.cpp
   addr: 00530E90 */

void __thiscall aiNPC::DieOfInactivity(aiNPC *this)

{
  uint uVar1;
  byte bVar2;
  
  if ((DAT_0095d844 & 1) == 0) {
    DAT_0095d844 = DAT_0095d844 | 1;
    DAT_0095d830 = 0;
    DAT_0095d831 = 0x40;
    _DAT_0095d834 = 4;
    _DAT_0095d832 = 0x10;
    atexit((_func_4879 *)&__E10);
  }
  uVar1 = *(uint *)(this + 1099);
  if ((uVar1 & 0x100000) != 0) {
    if (((uVar1 & 0x80000) != 0) && ((uVar1 & 0x10004) != 0)) {
      *(float *)(this + 0x447) = gsElapsedTime + *(float *)(this + 0x447);
    }
    if ((uVar1 & 0x10000000) != 0) {
      *(undefined4 *)(this + 0x447) = 0;
    }
    if ((aiAttackPlanner == (aiPLANNER *)0x0) || (*(int *)(aiAttackPlanner + 0x28) < 1)) {
      bVar2 = *(float *)(this + 0x447) < ___real_41a00000 |
              (byte)((ushort)((ushort)(NAN(*(float *)(this + 0x447)) || NAN(___real_41a00000)) << 10
                             ) >> 8);
    }
    else {
      bVar2 = *(float *)(this + 0x447) < ___real_41f00000 |
              (byte)((ushort)((ushort)(NAN(*(float *)(this + 0x447)) || NAN(___real_41f00000)) << 10
                             ) >> 8);
    }
    if ((POPCOUNT(bVar2) & 1U) == 0) {
      _DAT_0095d838 = 0x459c4000;
      msgSYSTEM::SendMsg(&msgSystem,(msgADDR *)this,0x4c5,&DAT_0095d830,(msgADDR *)0x0);
    }
  }
  return;
}

