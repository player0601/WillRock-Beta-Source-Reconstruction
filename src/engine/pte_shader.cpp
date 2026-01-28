
/* from: engine:pte_shader.cpp
   addr: 004C93B0 */

int __fastcall pteInit(void)

{
  pteMANAGER *ppVar1;
  cdtOFL *this;
  int iVar2;
  
  ppVar1 = (pteMANAGER *)operator_new(0x17958);
  if (ppVar1 == (pteMANAGER *)0x0) {
    ppVar1 = (pteMANAGER *)0x0;
  }
  else {
    *(undefined4 *)(ppVar1 + 0x17938) = 0;
    *(undefined ***)ppVar1 = &pteMANAGER::_vftable_;
    *(undefined4 *)(ppVar1 + 0x17944) = 0;
    *(undefined4 *)(ppVar1 + 0x17948) = 0;
    *(undefined4 *)(ppVar1 + 0x1794c) = 0;
    *(undefined4 *)(ppVar1 + 0x17950) = 0;
    *(undefined4 *)(ppVar1 + 0x1f44) = 0;
    *(undefined4 *)(ppVar1 + 0x1f48) = 0;
    *(undefined4 *)(ppVar1 + 0x17954) = 0;
    *(undefined4 *)(ppVar1 + 0x1793c) = 0;
    *(undefined4 *)(ppVar1 + 0x17940) = 0;
  }
  pteManager = ppVar1;
  this = (cdtOFL *)operator_new(0x20);
  if (this == (cdtOFL *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = cdtOFL::cdtOFL(this,500,3000);
  }
  *(int *)(ppVar1 + 0x1794c) = iVar2;
  if (iVar2 != 0) {
    *(undefined4 *)(ppVar1 + 0x17944) = 1;
    return 1;
  }
  return 0;
}




/* from: engine:pte_shader.cpp
   addr: 004C9460 */

void __fastcall pteTerm(void)

{
  cdtOFL *this;
  pteMANAGER *ppVar1;
  
  ppVar1 = pteManager;
  this = *(cdtOFL **)(pteManager + 0x1794c);
  if (this != (cdtOFL *)0x0) {
    cdtOFL::~cdtOFL(this);
    operator_delete(this);
  }
  *(undefined4 *)(ppVar1 + 0x17944) = 0;
  if (pteManager != (pteMANAGER *)0x0) {
    (*(code *)**(undefined4 **)pteManager)(1);
  }
  return;
}




/* from: engine:pte_shader.cpp
   addr: 004C94A0
   addr: 004C94A0 */

void * __thiscall pteMANAGER::_vector_deleting_destructor_(pteMANAGER *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: engine:pte_shader.cpp
   addr: 004C94C0 */

int __thiscall
pteMANAGER::RegisterClass
          (pteMANAGER *this,char *param_1,int param_2,
          _func_pteSHADER_ptr_animINST_ptr_objOBJ_ptr *param_3)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  bool bVar7;
  
  iVar6 = 0;
  if (0 < DAT_00930bfc) {
    pbVar3 = &DAT_00930c08;
    pbVar5 = (byte *)param_1;
    pbVar4 = pbVar3;
LAB_004c94db:
    do {
      bVar1 = *pbVar3;
      bVar7 = bVar1 < *pbVar5;
      if (bVar1 == *pbVar5) {
        if (bVar1 != 0) {
          bVar1 = pbVar3[1];
          bVar7 = bVar1 < pbVar5[1];
          if (bVar1 != pbVar5[1]) goto LAB_004c94ff;
          pbVar3 = pbVar3 + 2;
          pbVar5 = pbVar5 + 2;
          if (bVar1 != 0) goto LAB_004c94db;
        }
        iVar2 = 0;
      }
      else {
LAB_004c94ff:
        iVar2 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      }
      if (iVar2 == 0) {
        if (-1 < iVar6) {
          return 1;
        }
        break;
      }
      iVar6 = iVar6 + 1;
      pbVar3 = pbVar4 + 0x48;
      pbVar5 = (byte *)param_1;
      pbVar4 = pbVar3;
    } while (iVar6 < DAT_00930bfc);
  }
  apNAME::SetName((apNAME *)(&DAT_00930c08 + DAT_00930bfc * 0x48),param_1);
  (&DAT_00930c48)[DAT_00930bfc * 0x12] = param_2;
  (&DAT_00930c4c)[DAT_00930bfc * 0x12] = param_3;
  DAT_00930bfc = DAT_00930bfc + 1;
  return 1;
}




/* from: engine:pte_shader.cpp
   addr: 004C9560 */

pteSHADER * __thiscall
pteMANAGER::CreateShader
          (pteMANAGER *this,psSHEET *param_1,int param_2,animINST *param_3,objOBJ *param_4)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  pteSHADER *ppVar6;
  char *pcVar7;
  byte *pbVar8;
  byte *pbVar9;
  bool bVar10;
  byte local_60 [32];
  char local_40 [64];
  
  if (param_1 == (psSHEET *)0x0) {
    return (pteSHADER *)0x0;
  }
  if (param_2 == 0) {
    do {
      cVar1 = s_PTE_SHADER[param_2];
      local_40[param_2] = cVar1;
      param_2 = param_2 + 1;
    } while (cVar1 != '\0');
  }
  else {
    sprintf(local_40,s_PTE_SHADER_d,param_2);
  }
  iVar3 = psSHEET::GetStr(param_1,local_40,s_type,(char *)local_60,0x20);
  if (iVar3 == 0) {
    return (pteSHADER *)0x0;
  }
  iVar3 = 0;
  if (DAT_00930bfc < 1) {
    return (pteSHADER *)0x0;
  }
  pbVar8 = &DAT_00930c08;
  do {
    pbVar9 = local_60;
    pbVar4 = pbVar8;
    do {
      bVar2 = *pbVar4;
      bVar10 = bVar2 < *pbVar9;
      if (bVar2 != *pbVar9) {
LAB_004c9608:
        iVar5 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
        goto LAB_004c960d;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar4[1];
      bVar10 = bVar2 < pbVar9[1];
      if (bVar2 != pbVar9[1]) goto LAB_004c9608;
      pbVar4 = pbVar4 + 2;
      pbVar9 = pbVar9 + 2;
    } while (bVar2 != 0);
    iVar5 = 0;
LAB_004c960d:
    if (iVar5 == 0) {
      if (iVar3 < 0) {
        return (pteSHADER *)0x0;
      }
      ppVar6 = (pteSHADER *)(*(code *)(&DAT_00930c4c)[iVar3 * 0x12])();
      if (ppVar6 == (pteSHADER *)0x0) {
        return (pteSHADER *)0x0;
      }
      *(undefined4 *)(ppVar6 + 8) = (&DAT_00930c48)[iVar3 * 0x12];
      pcVar7 = local_40;
      do {
        cVar1 = *pcVar7;
        pcVar7[(int)(ppVar6 + (0x1c - (int)local_40))] = cVar1;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      *(psSHEET **)(ppVar6 + 0x18) = param_1;
      return ppVar6;
    }
    iVar3 = iVar3 + 1;
    pbVar8 = pbVar8 + 0x48;
    if (DAT_00930bfc <= iVar3) {
      return (pteSHADER *)0x0;
    }
  } while( true );
}




/* from: engine:pte_shader.cpp
   addr: 004C9690 */

void __thiscall pteMANAGER::CreateShader(pteMANAGER *this,animINST *param_1)

{
  pteSHADER *ppVar1;
  int iVar2;
  
  if (param_1 != (animINST *)0x0) {
    iVar2 = 0;
    do {
      ppVar1 = CreateShader(this,*(psSHEET **)(param_1 + 0x134),iVar2,param_1,(objOBJ *)0x0);
      if (ppVar1 != (pteSHADER *)0x0) {
        *(uint *)(ppVar1 + 4) = *(uint *)(ppVar1 + 4) | 4;
        *(animINST **)(ppVar1 + 0x60) = param_1;
        if (*(int *)(pteManager + 0x17948) != 0) {
          (**(code **)(*(int *)ppVar1 + 0x50))(*(undefined4 *)(pteManager + 0x1793c));
        }
        (**(code **)(*(int *)ppVar1 + 0x2c))();
        (**(code **)(*(int *)ppVar1 + 4))(1);
        *(uint *)(ppVar1 + 4) = *(uint *)(ppVar1 + 4) | 2;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x10);
  }
  return;
}




/* from: engine:pte_shader.cpp
   addr: 004C9710 */

void __thiscall pteMANAGER::CreateShader(pteMANAGER *this,objOBJ *param_1)

{
  pteSHADER *ppVar1;
  int iVar2;
  
  if (param_1 != (objOBJ *)0x0) {
    iVar2 = 0;
    do {
      ppVar1 = CreateShader(this,*(psSHEET **)(param_1 + 0xf0),iVar2,(animINST *)0x0,param_1);
      if (ppVar1 != (pteSHADER *)0x0) {
        *(uint *)(ppVar1 + 4) = *(uint *)(ppVar1 + 4) | 8;
        *(objOBJ **)(ppVar1 + 100) = param_1;
        if (*(int *)(pteManager + 0x17948) != 0) {
          (**(code **)(*(int *)ppVar1 + 0x50))(*(undefined4 *)(pteManager + 0x1793c));
        }
        (**(code **)(*(int *)ppVar1 + 0x2c))();
        (**(code **)(*(int *)ppVar1 + 4))(1);
        *(uint *)(ppVar1 + 4) = *(uint *)(ppVar1 + 4) | 2;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x10);
  }
  return;
}




/* from: engine:pte_shader.cpp
   addr: 004C9790 */

int __thiscall pteMANAGER::InitLevel(pteMANAGER *this,scnSCENE *param_1)

{
  int iVar1;
  pteMANAGER *ppVar2;
  int iVar3;
  
  if (*(int *)(this + 0x17944) == 0) {
    return 0;
  }
  iVar3 = 0;
  if (0 < *(int *)(this + 0x1f44)) {
    ppVar2 = this + 4;
    do {
      iVar1 = (**(code **)(**(int **)ppVar2 + 0x50))(param_1);
      if (iVar1 == 0) {
        return 0;
      }
      iVar3 = iVar3 + 1;
      ppVar2 = ppVar2 + 4;
    } while (iVar3 < *(int *)(this + 0x1f44));
  }
  *(scnSCENE **)(this + 0x1793c) = param_1;
  *(undefined4 *)(this + 0x17948) = 1;
  return 1;
}




/* from: engine:pte_shader.cpp
   addr: 004C97F0 */

void __thiscall pteMANAGER::TermLevel(pteMANAGER *this)

{
  undefined4 *puVar1;
  int iVar2;
  pteMANAGER *ppVar3;
  
  if (*(int *)(this + 0x17944) != 0) {
    if ((*(int *)(this + 0x17948) != 0) && (iVar2 = 0, 0 < *(int *)(this + 0x1f44))) {
      ppVar3 = this + 4;
      do {
        (**(code **)(**(int **)ppVar3 + 0x54))();
        puVar1 = *(undefined4 **)ppVar3;
        if (((*(byte *)(puVar1 + 1) & 0xc) == 0) && (puVar1 != (undefined4 *)0x0)) {
          (**(code **)*puVar1)(1);
        }
        iVar2 = iVar2 + 1;
        ppVar3 = ppVar3 + 4;
      } while (iVar2 < *(int *)(this + 0x1f44));
    }
    *(undefined4 *)(this + 0x17948) = 0;
    *(undefined4 *)(this + 0x1793c) = 0;
  }
  return;
}




/* from: engine:pte_shader.cpp
   addr: 004C9860 */

void __thiscall pteMANAGER::DeleteInstNotify(pteMANAGER *this,animINST *param_1)

{
  int iVar1;
  pteMANAGER *ppVar2;
  int iVar3;
  
  if ((param_1 != (animINST *)0x0) && (iVar3 = 0, 0 < *(int *)(this + 0x1f44))) {
    ppVar2 = this + 4;
    do {
      iVar1 = (**(code **)(**(int **)ppVar2 + 0x58))(param_1);
      if (iVar1 != 0) {
        if (*(undefined4 **)ppVar2 != (undefined4 *)0x0) {
          (**(code **)**(undefined4 **)ppVar2)(1);
        }
        iVar3 = iVar3 + -1;
        ppVar2 = ppVar2 + -4;
      }
      iVar3 = iVar3 + 1;
      ppVar2 = ppVar2 + 4;
    } while (iVar3 < *(int *)(this + 0x1f44));
  }
  return;
}




/* from: engine:pte_shader.cpp
   addr: 004C98B0 */

void __thiscall pteMANAGER::DeleteObjNotify(pteMANAGER *this,objOBJ *param_1)

{
  int iVar1;
  pteMANAGER *ppVar2;
  int iVar3;
  
  if ((param_1 != (objOBJ *)0x0) && (iVar3 = 0, 0 < *(int *)(this + 0x1f44))) {
    ppVar2 = this + 4;
    do {
      iVar1 = (**(code **)(**(int **)ppVar2 + 0x5c))(param_1);
      if (iVar1 != 0) {
        if (*(undefined4 **)ppVar2 != (undefined4 *)0x0) {
          (**(code **)**(undefined4 **)ppVar2)(1);
        }
        iVar3 = iVar3 + -1;
        ppVar2 = ppVar2 + -4;
      }
      iVar3 = iVar3 + 1;
      ppVar2 = ppVar2 + 4;
    } while (iVar3 < *(int *)(this + 0x1f44));
  }
  return;
}




/* from: engine:pte_shader.cpp
   addr: 004C9920 */

pteSHADER * __thiscall pteMANAGER::FindNextShader(pteMANAGER *this,pteSHADER *param_1)

{
  if (param_1 != (pteSHADER *)0x0) {
    param_1 = (pteSHADER *)(*(int *)(param_1 + 0x80) + 1);
  }
  if ((int)param_1 < *(int *)(this + 0x1f44)) {
    return *(pteSHADER **)(this + (int)param_1 * 4 + 4);
  }
  return (pteSHADER *)0x0;
}




/* from: engine:pte_shader.cpp
   addr: 004C9950 */

void __thiscall pteMANAGER::RemoveShader(pteMANAGER *this,pteSHADER *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  pteMANAGER *ppVar4;
  pteMANAGER *ppVar5;
  
  if ((*(uint *)(param_1 + 4) & 0x100) == 0) {
    iVar3 = *(int *)(this + 0x1f44);
    iVar1 = 0;
    if (0 < iVar3) {
      ppVar4 = this + 4;
      do {
        if (*(pteSHADER **)ppVar4 == param_1) break;
        iVar1 = iVar1 + 1;
        ppVar4 = ppVar4 + 4;
      } while (iVar1 < iVar3);
    }
    if (iVar1 != iVar3) {
      if (iVar1 < iVar3 + -1) {
        ppVar4 = this + iVar1 * 4 + 8;
        ppVar5 = this + iVar1 * 4 + 4;
        for (uVar2 = (iVar3 - iVar1) * 4 - 4U >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
          *(undefined4 *)ppVar5 = *(undefined4 *)ppVar4;
          ppVar4 = ppVar4 + 4;
          ppVar5 = ppVar5 + 4;
        }
        for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
          *ppVar5 = *ppVar4;
          ppVar4 = ppVar4 + 1;
          ppVar5 = ppVar5 + 1;
        }
      }
      iVar3 = *(int *)(this + 0x1f44);
      iVar1 = 0;
      *(int *)(this + 0x1f44) = iVar3 + -1;
      if (0 < iVar3 + -1) {
        ppVar4 = this + 4;
        do {
          iVar3 = *(int *)ppVar4;
          ppVar4 = ppVar4 + 4;
          *(int *)(iVar3 + 0x80) = iVar1;
          iVar1 = iVar1 + 1;
        } while (iVar1 < *(int *)(this + 0x1f44));
      }
    }
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:pte_shader.cpp
   addr: 004C99E0 */

void __thiscall pteMANAGER::UpdateAllShaders(pteMANAGER *this,float param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  pteMANAGER *ppVar4;
  pteMANAGER *ppVar5;
  pteMANAGER *ppVar6;
  pteMANAGER *ppVar7;
  
  iVar3 = 0;
  if (0 < *(int *)(this + 0x1f44)) {
    ppVar6 = this + 8;
    ppVar4 = this + 4;
    do {
      (**(code **)(**(int **)ppVar4 + 0x48))(param_1);
      iVar2 = *(int *)ppVar4;
      if (((*(float *)(iVar2 + 0x5c) < ___real_00000000 !=
            (*(float *)(iVar2 + 0x5c) == ___real_00000000)) && (*(char *)(iVar2 + 4) < '\0')) ||
         (((*(uint *)(iVar2 + 4) & 1) == 0 && ((*(uint *)(iVar2 + 4) & 0x40) != 0)))) {
        *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) | 0x100;
        if (*(undefined4 **)ppVar4 != (undefined4 *)0x0) {
          (**(code **)**(undefined4 **)ppVar4)(1);
        }
        if (iVar3 < *(int *)(this + 0x1f44) + -1) {
          ppVar5 = ppVar6;
          ppVar7 = ppVar4;
          for (uVar1 = (*(int *)(this + 0x1f44) - iVar3) * 4 - 4U >> 2; uVar1 != 0;
              uVar1 = uVar1 - 1) {
            *(int *)ppVar7 = *(int *)ppVar5;
            ppVar5 = ppVar5 + 4;
            ppVar7 = ppVar7 + 4;
          }
          for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
            *ppVar7 = *ppVar5;
            ppVar5 = ppVar5 + 1;
            ppVar7 = ppVar7 + 1;
          }
        }
        iVar3 = iVar3 + -1;
        ppVar6 = ppVar6 + -4;
        ppVar4 = ppVar4 + -4;
        *(int *)(this + 0x1f44) = *(int *)(this + 0x1f44) + -1;
      }
      iVar3 = iVar3 + 1;
      ppVar6 = ppVar6 + 4;
      ppVar4 = ppVar4 + 4;
    } while (iVar3 < *(int *)(this + 0x1f44));
  }
  return;
}




/* from: engine:pte_shader.cpp
   addr: 004C9AC0 */

void __thiscall pteMANAGER::ActivateAllShaders(pteMANAGER *this,camCAMERA *param_1)

{
  int *piVar1;
  int iVar2;
  pteMANAGER *ppVar3;
  int iVar4;
  pteMANAGER *_Base;
  pteMANAGER *local_4;
  
  iVar4 = 0;
  *(undefined4 *)(this + 0x1f48) = 0;
  local_4 = this;
  iVar2 = _apCfgReadBool((void **)&DAT_00930bf0,s_Video,s_VIDEO_UseShaders,(int *)&local_4);
  if ((iVar2 == 0) || (local_4 != (pteMANAGER *)0x0)) {
    _Base = this + 4;
    qsort(_Base,*(size_t *)(this + 0x1f44),4,_pteSortFunc);
    iVar2 = 0;
    ppVar3 = _Base;
    if (0 < *(int *)(this + 0x1f44)) {
      do {
        *(int *)(*(int *)ppVar3 + 0x80) = iVar2;
        iVar2 = iVar2 + 1;
        ppVar3 = ppVar3 + 4;
      } while (iVar2 < *(int *)(this + 0x1f44));
    }
    if (0 < *(int *)(this + 0x1f44)) {
      do {
        piVar1 = *(int **)_Base;
        if (((*(byte *)(piVar1 + 1) & 1) != 0) &&
           (iVar2 = (**(code **)(*piVar1 + 0x44))(param_1), iVar2 != 0)) {
          piVar1[4] = *(int *)(pteManager + 0x1f48);
          *(int **)(pteManager + 0x1f48) = piVar1;
        }
        iVar4 = iVar4 + 1;
        _Base = _Base + 4;
      } while (iVar4 < *(int *)(this + 0x1f44));
    }
  }
  return;
}




/* from: engine:pte_shader.cpp
   addr: 004C9BA0 */

void __thiscall pteMANAGER::PrepareFrame(pteMANAGER *this,scnSCENE *param_1,camCAMERA *param_2)

{
  int *piVar1;
  
  if ((*(int *)(this + 0x17948) != 0) && (piVar1 = *(int **)(this + 0x1f48), piVar1 != (int *)0x0))
  {
    *(camCAMERA **)(this + 0x17940) = param_2;
    *(undefined4 *)(this + 0x3e8c) = 0;
    *(undefined4 *)(this + 0x17710) = 0;
    do {
      (**(code **)(*piVar1 + 0x4c))(param_1,param_2);
      piVar1 = (int *)piVar1[4];
    } while (piVar1 != (int *)0x0);
  }
  return;
}




/* from: engine:pte_shader.cpp
   addr: 004C9BF0 */

void __thiscall pteSHADER::pteSHADER(pteSHADER *this)

{
  pteSHADER pVar1;
  int iVar2;
  pteMANAGER *ppVar3;
  undefined4 uVar4;
  pteMANAGER *ppVar5;
  char *pcVar6;
  int iVar7;
  
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x7c) = 0;
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 8) = 100;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x6c) = 0x437f0000;
  *(undefined4 *)(this + 0x70) = 0x437f0000;
  *(undefined4 *)(this + 0x74) = 0x437f0000;
  *(undefined4 *)(this + 0x78) = 0x437f0000;
  uVar4 = DAT_008b6a88;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0xc) = uVar4;
  *(undefined4 *)(this + 0x80) = 0xffffffff;
  faceUID = 0;
  *(undefined4 *)(this + 0x84) = 0xbf800000;
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 100) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x88) = 0;
  *(undefined4 *)(this + 0x5c) = 0xbf800000;
  *(undefined4 *)(this + 0x7c) = 0;
  ppVar5 = pteManager;
  iVar2 = *(int *)(pteManager + 0x1f44);
  if (iVar2 < 2000) {
    iVar7 = 0;
    ppVar3 = pteManager;
    if (0 < iVar2) {
      do {
        if (*(pteSHADER **)(ppVar3 + 4) == this) goto LAB_004c9cb8;
        iVar7 = iVar7 + 1;
        ppVar3 = ppVar3 + 4;
      } while (iVar7 < iVar2);
    }
    *(pteSHADER **)(pteManager + iVar2 * 4 + 4) = this;
    *(undefined4 *)(this + 0x80) = *(undefined4 *)(ppVar5 + 0x1f44);
    *(int *)(ppVar5 + 0x1f44) = *(int *)(ppVar5 + 0x1f44) + 1;
    *(uint *)(this + 4) = *(uint *)(this + 4) & 0xfffffffd;
  }
LAB_004c9cb8:
  pcVar6 = s_PTE_SHADER;
  do {
    pVar1 = (pteSHADER)*pcVar6;
    (this + -0x5f6498)[(int)pcVar6] = pVar1;
    pcVar6 = (char *)((pteSHADER *)pcVar6 + 1);
  } while (pVar1 != (pteSHADER)0x0);
  return;
}




/* from: engine:pte_shader.cpp
   addr: 004C9CD0
   addr: 004C9CD0 */

void * __thiscall pteSHADER::_scalar_deleting_destructor_(pteSHADER *this,uint param_1)

{
  pteSDR_STATIC_DATA *this_00;
  
  *(undefined ***)this = &_vftable_;
  pteMANAGER::RemoveShader(pteManager,this);
  this_00 = *(pteSDR_STATIC_DATA **)(this + 0x88);
  if (this_00 != (pteSDR_STATIC_DATA *)0x0) {
    pteSDR_STATIC_DATA::~pteSDR_STATIC_DATA(this_00);
    operator_delete(this_00);
  }
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: engine:pte_shader.cpp
   addr: 004C9D20 */

void __thiscall pteSHADER::~pteSHADER(pteSHADER *this)

{
  pteSDR_STATIC_DATA *this_00;
  
  *(undefined ***)this = &_vftable_;
  pteMANAGER::RemoveShader(pteManager,this);
  this_00 = *(pteSDR_STATIC_DATA **)(this + 0x88);
  if (this_00 != (pteSDR_STATIC_DATA *)0x0) {
    pteSDR_STATIC_DATA::~pteSDR_STATIC_DATA(this_00);
    operator_delete(this_00);
  }
  return;
}




/* from: engine:pte_shader.cpp
   addr: 004C9D60 */

void __thiscall pteSHADER::Init(pteSHADER *this)

{
  int iVar1;
  txmTEXTURE *ptVar2;
  char local_40 [64];
  
  if (*(psSHEET **)(this + 0x18) != (psSHEET *)0x0) {
    psSHEET::GetColor(*(psSHEET **)(this + 0x18),(char *)(this + 0x1c),s_color,
                      (m3dCOLOR *)(this + 0x6c));
  }
  if (*(psSHEET **)(this + 0x18) != (psSHEET *)0x0) {
    psSHEET::GetFloat(*(psSHEET **)(this + 0x18),(char *)(this + 0x1c),s_distOff,
                      (float *)(this + 0x84));
  }
  if (*(psSHEET **)(this + 0x18) != (psSHEET *)0x0) {
    iVar1 = psSHEET::GetStr(*(psSHEET **)(this + 0x18),(char *)(this + 0x1c),s_tex,local_40,0x40);
    if (iVar1 != 0) {
      ptVar2 = txmMANAGER::Add(txmManager,local_40,0x40000,1);
      *(txmTEXTURE **)(this + 0x68) = ptVar2;
    }
  }
  return;
}




/* from: engine:pte_shader.cpp
   addr: 004C9DE0 */

int __thiscall pteSHADER::ReadStr(pteSHADER *this,char *param_1,char *param_2,int param_3)

{
  int iVar1;
  
  if (*(psSHEET **)(this + 0x18) != (psSHEET *)0x0) {
    iVar1 = psSHEET::GetStr(*(psSHEET **)(this + 0x18),(char *)(this + 0x1c),param_1,param_2,param_3
                           );
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}




/* from: engine:pte_shader.cpp
   addr: 004C9E20 */

int __thiscall pteSHADER::ReadFloat(pteSHADER *this,char *param_1,float *param_2)

{
  int iVar1;
  
  if (*(psSHEET **)(this + 0x18) != (psSHEET *)0x0) {
    iVar1 = psSHEET::GetFloat(*(psSHEET **)(this + 0x18),(char *)(this + 0x1c),param_1,param_2);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}




/* from: engine:pte_shader.cpp
   addr: 004C9E50 */

int __thiscall pteSHADER::ReadBool(pteSHADER *this,char *param_1,int *param_2)

{
  int iVar1;
  
  if (*(psSHEET **)(this + 0x18) != (psSHEET *)0x0) {
    iVar1 = psSHEET::GetBool(*(psSHEET **)(this + 0x18),(char *)(this + 0x1c),param_1,param_2);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}




/* from: engine:pte_shader.cpp
   addr: 004C9E80 */

int __thiscall pteSHADER::ReadColor(pteSHADER *this,char *param_1,m3dCOLOR *param_2)

{
  int iVar1;
  
  if (*(psSHEET **)(this + 0x18) != (psSHEET *)0x0) {
    iVar1 = psSHEET::GetColor(*(psSHEET **)(this + 0x18),(char *)(this + 0x1c),param_1,param_2);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}




/* from: engine:pte_shader.cpp
   addr: 004C9EB0 */

int __thiscall pteSHADER::Register(pteSHADER *this)

{
  if (*(int *)(pteManager + 0x17948) != 0) {
    (**(code **)(*(int *)this + 0x50))(*(undefined4 *)(pteManager + 0x1793c));
  }
  (**(code **)(*(int *)this + 0x2c))();
  (**(code **)(*(int *)this + 4))(1);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 2;
  return 1;
}




/* from: engine:pte_shader.cpp
   addr: 004C9EF0 */

void __thiscall pteSHADER::Enable(pteSHADER *this,int param_1)

{
  if (param_1 != 0) {
    *(uint *)(this + 4) = *(uint *)(this + 4) | 1;
    return;
  }
  *(uint *)(this + 4) = *(uint *)(this + 4) & 0xfffffffe;
  return;
}




/* from: engine:pte_shader.cpp
   addr: 004C9F10 */

void __thiscall pteSHADER::SetSheet(pteSHADER *this,psSHEET *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  
  *(psSHEET **)(this + 0x18) = param_1;
  if (param_2 != (char *)0x0) {
    iVar2 = 0x1c - (int)param_2;
    do {
      cVar1 = *param_2;
      param_2[(int)(this + iVar2)] = cVar1;
      param_2 = param_2 + 1;
    } while (cVar1 != '\0');
  }
  return;
}




/* from: engine:pte_shader.cpp
   addr: 004C9F40 */

void __thiscall pteSHADER::SetInstCreate(pteSHADER *this,animINST *param_1)

{
  *(animINST **)(this + 0x60) = param_1;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  return;
}




/* from: engine:pte_shader.cpp
   addr: 004C9F60 */

void __thiscall pteSHADER::SetObjCreate(pteSHADER *this,objOBJ *param_1)

{
  *(objOBJ **)(this + 100) = param_1;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 8;
  return;
}




/* from: engine:pte_shader.cpp
   addr: 004C9F80 */

int __thiscall pteSHADER::DeleteInstNotify(pteSHADER *this,animINST *param_1)

{
  if (*(animINST **)(this + 0x60) == param_1) {
    if (((byte)this[4] & 4) != 0) {
      return 1;
    }
    *(undefined4 *)(this + 0x60) = 0;
  }
  return 0;
}




/* from: engine:pte_shader.cpp
   addr: 004C9FB0 */

int __thiscall pteSHADER::DeleteObjNotify(pteSHADER *this,objOBJ *param_1)

{
  if (*(objOBJ **)(this + 100) == param_1) {
    if (((byte)this[4] & 8) != 0) {
      return 1;
    }
    *(undefined4 *)(this + 100) = 0;
  }
  return 0;
}




/* from: engine:pte_shader.cpp
   addr: 004C9FE0 */

char * __thiscall pteSHADER::GetName(pteSHADER *this)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  
  if (*(int *)(this + 100) == 0) {
    iVar1 = *(int *)(this + 0x68);
    if (*(int *)(this + 0x60) == 0) {
      pcVar2 = (char *)(iVar1 + 8);
      if (iVar1 == 0) {
        pcVar2 = s_texture_undefined;
      }
      pcVar3 = s_object_undefined;
    }
    else {
      if (iVar1 == 0) {
        pcVar2 = s_texture_undefined;
      }
      else {
        pcVar2 = (char *)(iVar1 + 8);
      }
      pcVar3 = *(char **)(*(int *)(this + 0x60) + 0x18);
      if (pcVar3 == (char *)0x0) {
        pcVar3 = s_;
      }
    }
  }
  else {
    pcVar2 = (char *)(*(int *)(this + 0x68) + 8);
    if (*(int *)(this + 0x68) == 0) {
      pcVar2 = s_texture_undefined;
    }
    pcVar3 = *(char **)(*(int *)(this + 100) + 0x18);
  }
  sprintf((char *)&apBuffer,s__s___s,pcVar3,pcVar2);
  return (char *)&apBuffer;
}




/* from: engine:pte_shader.cpp
   addr: 004CA050 */

void __thiscall pteSHADER::MarkFaceFirstShaded(pteSHADER *this)

{
  faceUID = *(uint *)(pteManager + 0x17954);
  return;
}




/* from: engine:pte_shader.cpp
   addr: 004CA070 */

int __thiscall pteMANAGER::IsShadeInst(pteMANAGER *this,animINST *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(this + 0x1f48);
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    iVar2 = (**(code **)(*piVar1 + 0x34))(param_1);
    if (iVar2 != 0) break;
    piVar1 = (int *)piVar1[4];
  }
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:pte_shader.cpp
   addr: 004CA0B0 */

void __thiscall pteMANAGER::PrepareObj(pteMANAGER *this,objOBJ *param_1)

{
  pteMANAGER *ppVar1;
  int *piVar2;
  objOBJ *this_00;
  int iVar3;
  ulonglong uVar4;
  undefined8 extraout_MM1;
  undefined8 extraout_MM1_00;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 auStack_1c [4];
  float local_18;
  float fStack_14;
  float fStack_10;
  float local_c;
  float fStack_8;
  float fStack_4;
  
  this_00 = param_1;
  if ((((*(int *)(this + 0x17948) != 0) && (*(int *)(this + 0x1793c) != 0)) &&
      (*(int *)(this + 0x17940) != 0)) && (*(int *)(this + 0x1f48) != 0)) {
    if ((*(int *)(param_1 + 0xbc) != 0) &&
       (iVar3 = *(int *)(*(int *)(param_1 + 0xbc) + 0x124), -1 < iVar3)) {
      *(short *)(param_1 + 0xec) = (short)iVar3;
      *(uint *)param_1 = *(uint *)param_1 | 2;
      return;
    }
    iVar3 = *(int *)(this + 0x3e8c);
    if (iVar3 < 1000) {
      *(uint *)param_1 = *(uint *)param_1 & 0xffffffbf;
      camCAMERA::GetOrigin(*(camCAMERA **)(this + 0x17940),(m3dV *)&local_c);
      ppVar1 = this + iVar3 * 8 + 0x1f50;
      *(int *)ppVar1 = 0;
      *(undefined4 *)(this + iVar3 * 8 + 0x1f4c) = *(undefined4 *)(this + 0x17710);
      for (piVar2 = *(int **)(this + 0x1f48); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[4]) {
        if ((pteSDR_STATIC_DATA *)piVar2[0x22] == (pteSDR_STATIC_DATA *)0x0) {
LAB_004ca191:
          iVar3 = (**(code **)(*piVar2 + 0x30))(this_00);
          if (iVar3 != 0) {
LAB_004ca1a1:
            if (___real_00000000 < (float)piVar2[0x21]) {
              if (*(int *)(this_00 + 0xbc) == 0) {
                (**(code **)(*(int *)(this_00 + 0xc0) + 0x24))(&local_18);
                uVar5 = extraout_MM1_00;
              }
              else {
                objOBJ::GetOrigin(this_00,(m3dV *)&local_18);
                uVar5 = extraout_MM1;
              }
              fVar7 = (local_c - local_18) * (local_c - local_18) +
                      (fStack_8 - fStack_14) * (fStack_8 - fStack_14) +
                      (fStack_4 - fStack_10) * (fStack_4 - fStack_10);
              if (m3dSimdType == 0) {
                fVar7 = fVar7 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
                auVar9 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
                fVar8 = auVar9._0_4_;
                param_1 = (objOBJ *)
                          (`float___cdecl_m3dSqrt(float)'::__l2::half * fVar8 *
                           (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar7 * fVar8 * fVar8) *
                          fVar7);
              }
              else if (m3dSimdType == 1) {
                FastExitMediaState();
                uVar4 = (ulonglong)(uint)fVar7;
                uVar5 = PackedFloatingReciprocalSQRAprox(uVar5,uVar4);
                uVar6 = PackedFloatingMUL(uVar5,uVar5);
                uVar6 = PackedFloatingReciprocalSQRIter1(uVar6,uVar4);
                uVar5 = PackedFloatingReciprocalIter2(uVar6,uVar5);
                uVar5 = PackedFloatingMUL(uVar5,uVar4);
                param_1 = (objOBJ *)uVar5;
                FastExitMediaState();
              }
              else {
                param_1 = (objOBJ *)SQRT(fVar7);
              }
              if ((float)piVar2[0x21] < (float)param_1) goto LAB_004ca2fa;
            }
            if (19999 < *(int *)(this + 0x17710)) break;
            *(int *)(this + *(int *)(this + 0x17710) * 4 + 0x3e90) = piVar2[0x20];
            *(int *)(this + 0x17710) = *(int *)(this + 0x17710) + 1;
            *(int *)ppVar1 = *(int *)ppVar1 + 1;
            iVar3 = (**(code **)(*piVar2 + 0x20))(0,auStack_1c);
            if (iVar3 != 0) {
              *(uint *)this_00 = *(uint *)this_00 | 0x40;
            }
          }
        }
        else {
          iVar3 = pteSDR_STATIC_DATA::GetObjShadeCode((pteSDR_STATIC_DATA *)piVar2[0x22],this_00);
          if (iVar3 != -1) {
            if (iVar3 < 0) goto LAB_004ca191;
            goto LAB_004ca1a1;
          }
        }
LAB_004ca2fa:
      }
      if (*(int *)ppVar1 != 0) {
        *(uint *)this_00 = *(uint *)this_00 | 2;
        *(undefined2 *)(this_00 + 0xec) = *(undefined2 *)(this + 0x3e8c);
        *(int *)(this + 0x3e8c) = *(int *)(this + 0x3e8c) + 1;
        return;
      }
      *(uint *)this_00 = *(uint *)this_00 & 0xfffffffd;
    }
  }
  return;
}




/* from: engine:pte_shader.cpp
   addr: 004CA350 */

int __thiscall pteMANAGER::GetNShader(pteMANAGER *this,objOBJ *param_1)

{
  return *(int *)(this + *(short *)(param_1 + 0xec) * 8 + 0x1f50);
}




/* from: engine:pte_shader.cpp
   addr: 004CA370 */

pteSHADER * __thiscall pteMANAGER::GetShader(pteMANAGER *this,objOBJ *param_1,int param_2)

{
  return *(pteSHADER **)
          (this + *(int *)(this + (*(int *)(this + *(short *)(param_1 + 0xec) * 8 + 0x1f4c) +
                                  param_2) * 4 + 0x3e90) * 4 + 4);
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:pte_shader.cpp
   addr: 004CA3A0 */

int __thiscall
pteMANAGER::FindShaderAround(pteMANAGER *this,int param_1,int *param_2,m3dV *param_3,float param_4)

{
  m3dV *pmVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 extraout_MM1;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  float local_c;
  float fStack_8;
  float fStack_4;
  
  pmVar1 = param_3;
  if (___real_00000000 <= param_4) {
    piVar3 = (int *)0x0;
    while( true ) {
      if (piVar3 != (int *)0x0) {
        piVar3 = (int *)(piVar3[0x20] + 1);
      }
      if ((*(int *)(this + 0x1f44) <= (int)piVar3) ||
         (piVar3 = *(int **)(this + (int)piVar3 * 4 + 4), piVar3 == (int *)0x0)) break;
      iVar4 = 0;
      if (0 < param_1) {
        do {
          if (((piVar3[5] == param_2[iVar4]) && ((*(byte *)(piVar3 + 1) & 1) != 0)) &&
             (iVar2 = (**(code **)(*piVar3 + 0x18))(&local_c), iVar2 != 0)) {
            fVar8 = (*(float *)pmVar1 - local_c) * (*(float *)pmVar1 - local_c) +
                    (*(float *)(pmVar1 + 4) - fStack_8) * (*(float *)(pmVar1 + 4) - fStack_8) +
                    (*(float *)(pmVar1 + 8) - fStack_4) * (*(float *)(pmVar1 + 8) - fStack_4);
            if (m3dSimdType == 0) {
              fVar8 = fVar8 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
              auVar10 = rsqrtss(ZEXT416((uint)fVar8),ZEXT416((uint)fVar8));
              fVar9 = auVar10._0_4_;
              param_3 = (m3dV *)(`float___cdecl_m3dSqrt(float)'::__l2::half * fVar9 *
                                 (`float___cdecl_m3dSqrt(float)'::__l2::three -
                                 fVar8 * fVar9 * fVar9) * fVar8);
            }
            else if (m3dSimdType == 1) {
              FastExitMediaState();
              uVar5 = (ulonglong)(uint)fVar8;
              uVar6 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar5);
              uVar7 = PackedFloatingMUL(uVar6,uVar6);
              uVar7 = PackedFloatingReciprocalSQRIter1(uVar7,uVar5);
              uVar6 = PackedFloatingReciprocalIter2(uVar7,uVar6);
              uVar6 = PackedFloatingMUL(uVar6,uVar5);
              param_3 = (m3dV *)uVar6;
              FastExitMediaState();
            }
            else {
              param_3 = (m3dV *)SQRT(fVar8);
            }
            if ((float)param_3 < param_4) {
              return 1;
            }
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < param_1);
      }
    }
  }
  return 0;
}




/* from: engine:pte_shader.cpp
   addr: 004CA520 */

int __thiscall
pteMANAGER::ShadeFaceWCS
          (pteMANAGER *this,objOBJ *param_1,int param_2,int param_3,ptePOLY_DATA *param_4)

{
  objOBJ *poVar1;
  objOBJ *poVar2;
  undefined4 *puVar3;
  float fVar4;
  float fVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  pteMANAGER *ppVar10;
  int iVar11;
  objOBJ *poVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined4 local_150 [62];
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  int *local_18;
  pteMANAGER *local_14;
  pteMANAGER *local_10;
  pteMANAGER *local_c;
  objOBJ *local_8;
  
  piVar6 = *(int **)(this + *(int *)(this + (*(int *)(this + *(short *)(param_1 + 0xec) * 8 + 0x1f4c
                                                     ) + param_3) * 4 + 0x3e90) * 4 + 4);
  local_18 = piVar6;
  local_c = this;
  if ((pteSDR_STATIC_DATA *)piVar6[0x22] != (pteSDR_STATIC_DATA *)0x0) {
    iVar9 = pteSDR_STATIC_DATA::GetObjShadeCode((pteSDR_STATIC_DATA *)piVar6[0x22],param_1);
    if (-1 < iVar9) {
      iVar9 = pteSDR_STATIC_DATA::IsShadedFace
                        ((pteSDR_STATIC_DATA *)piVar6[0x22],iVar9,param_2,(pteSDR_INFO *)0x0,param_4
                        );
      if (iVar9 == 0) {
        return 0;
      }
      *(int *)(param_4 + 100) = param_2;
      *(int *)(param_4 + 0x68) = piVar6[0x20];
      return 1;
    }
    if (iVar9 == -1) {
      return 0;
    }
  }
  piVar6 = local_18;
  iVar9 = *(int *)(this + 0x17954);
  *(int *)(this + 0x17954) = iVar9 + 1;
  if (iVar9 + 1 == 0) {
    *(undefined4 *)(this + 0x17954) = 1;
  }
  *(undefined4 *)(this + 0x1771c) = 3;
  iVar9 = 0;
  local_54 = 0x3f800000;
  local_150[0] = 0;
  local_58 = 0;
  local_38 = 0;
  local_34 = 0;
  local_50 = 0;
  local_30 = 0x3f800000;
  if (((byte)*param_1 & 1) == 0) {
    poVar1 = param_1 + 0x3c;
    local_10 = this + 0x17720;
    local_c = (pteMANAGER *)0x0;
    do {
      piVar7 = *(int **)(param_1 + 0x28);
      local_14 = local_10;
      poVar2 = (objOBJ *)
               (piVar7[0x10] +
               (uint)*(ushort *)
                      ((uint)*(byte *)(piVar7 + 1) * param_2 + 2 + (int)local_c * 2 + *piVar7) * 0xc
               );
      local_8 = poVar2;
      if (m3dSimdType == 0) {
        if (((uint)poVar1 & 0xf) == 0) {
          fVar23 = *(float *)poVar2;
          fVar4 = *(float *)(poVar2 + 4);
          fVar5 = *(float *)(poVar2 + 8);
          fVar21 = fVar23 * *(float *)poVar1 + *(float *)(param_1 + 0x6c) +
                   fVar4 * *(float *)(param_1 + 0x4c) + fVar5 * *(float *)(param_1 + 0x5c);
          fVar22 = fVar23 * *(float *)(param_1 + 0x40) + *(float *)(param_1 + 0x70) +
                   fVar4 * *(float *)(param_1 + 0x50) + fVar5 * *(float *)(param_1 + 0x60);
          fVar23 = fVar23 * *(float *)(param_1 + 0x44) + *(float *)(param_1 + 0x74) +
                   fVar4 * *(float *)(param_1 + 0x54) + fVar5 * *(float *)(param_1 + 100);
        }
        else {
          fVar23 = *(float *)poVar2;
          fVar4 = *(float *)(poVar2 + 4);
          fVar5 = *(float *)(poVar2 + 8);
          fVar21 = fVar23 * (float)*(undefined8 *)poVar1 +
                   fVar4 * (float)*(undefined8 *)(param_1 + 0x4c) +
                   fVar5 * (float)*(undefined8 *)(param_1 + 0x5c) +
                   (float)*(undefined8 *)(param_1 + 0x6c);
          fVar22 = fVar23 * (float)((ulonglong)*(undefined8 *)poVar1 >> 0x20) +
                   fVar4 * (float)((ulonglong)*(undefined8 *)(param_1 + 0x4c) >> 0x20) +
                   fVar5 * (float)((ulonglong)*(undefined8 *)(param_1 + 0x5c) >> 0x20) +
                   (float)((ulonglong)*(undefined8 *)(param_1 + 0x6c) >> 0x20);
          fVar23 = fVar23 * (float)*(undefined8 *)(param_1 + 0x44) +
                   fVar4 * (float)*(undefined8 *)(param_1 + 0x54) +
                   fVar5 * (float)*(undefined8 *)(param_1 + 100) +
                   (float)*(undefined8 *)(param_1 + 0x74);
        }
        *(ulonglong *)local_10 = CONCAT44(fVar22,fVar21);
        *(float *)(local_10 + 8) = fVar23;
      }
      else if (m3dSimdType == 1) {
        FastExitMediaState();
        uVar13 = (undefined4)*(undefined8 *)poVar2;
        uVar16 = CONCAT44(uVar13,uVar13);
        uVar13 = (undefined4)((ulonglong)*(undefined8 *)poVar2 >> 0x20);
        uVar19 = CONCAT44(uVar13,uVar13);
        uVar20 = CONCAT44(*(float *)(poVar2 + 8),*(float *)(poVar2 + 8));
        uVar14 = PackedFloatingMUL(uVar16,*(undefined8 *)poVar1);
        uVar15 = PackedFloatingMUL(uVar19,*(undefined8 *)(param_1 + 0x4c));
        uVar17 = PackedFloatingMUL(uVar20,*(undefined8 *)(param_1 + 0x5c));
        uVar14 = PackedFloatingADD(uVar14,*(undefined8 *)(param_1 + 0x6c));
        uVar18 = PackedFloatingMUL(uVar16,*(undefined8 *)(param_1 + 0x44));
        uVar16 = PackedFloatingADD(uVar15,uVar17);
        uVar15 = PackedFloatingMUL(uVar19,*(undefined8 *)(param_1 + 0x54));
        uVar20 = PackedFloatingMUL(uVar20,*(undefined8 *)(param_1 + 100));
        uVar19 = PackedFloatingADD(uVar18,*(undefined8 *)(param_1 + 0x74));
        uVar16 = PackedFloatingADD(uVar14,uVar16);
        uVar14 = PackedFloatingADD(uVar15,uVar20);
        *(undefined8 *)local_10 = uVar16;
        uVar16 = PackedFloatingADD(uVar19,uVar14);
        *(float *)(local_10 + 8) = (float)uVar16;
        FastExitMediaState();
      }
      else {
        iVar9 = 0;
        local_8 = poVar1 + -(int)local_10;
        ppVar10 = local_10;
        do {
          iVar11 = 0;
          *(float *)ppVar10 = 0.0;
          poVar12 = local_8 + (int)ppVar10;
          do {
            iVar8 = iVar11 * 4;
            fVar23 = *(float *)poVar12;
            iVar11 = iVar11 + 1;
            poVar12 = poVar12 + 0x10;
            *(float *)ppVar10 = *(float *)(poVar2 + iVar8) * fVar23 + *(float *)ppVar10;
          } while (iVar11 < 3);
          iVar11 = iVar9 + iVar11 * 4;
          iVar9 = iVar9 + 1;
          *(float *)ppVar10 = *(float *)(poVar1 + iVar11 * 4) + *(float *)ppVar10;
          ppVar10 = ppVar10 + 4;
        } while (iVar9 < 3);
      }
      local_c = local_c + 1;
      local_10 = local_10 + 0xc;
    } while ((int)local_c < *(int *)(this + 0x1771c));
  }
  else {
    ppVar10 = this + 0x17720;
    do {
      piVar7 = *(int **)(param_1 + 0x28);
      iVar11 = iVar9 * 2;
      iVar9 = iVar9 + 1;
      puVar3 = (undefined4 *)
               (piVar7[0x10] +
               (uint)*(ushort *)((uint)*(byte *)(piVar7 + 1) * param_2 + 2 + iVar11 + *piVar7) * 0xc
               );
      *(undefined4 *)ppVar10 = *puVar3;
      *(undefined4 *)(ppVar10 + 4) = puVar3[1];
      *(undefined4 *)(ppVar10 + 8) = puVar3[2];
      this = local_c;
      ppVar10 = ppVar10 + 0xc;
    } while (iVar9 < *(int *)(local_c + 0x1771c));
  }
  *(undefined4 **)(this + 0x17718) = local_150;
  *(undefined4 *)(this + 0x17938) = 0;
  if ((*(byte *)(local_18 + 1) & 0x20) == 0) {
    *(undefined4 *)(this + 0x17934) = 0;
  }
  else {
    *(undefined4 *)(this + 0x17934) = 1;
  }
  *(undefined4 *)(this + 0x17930) = 1;
  *(undefined4 *)param_4 = 0x3f800000;
  iVar9 = (**(code **)(*local_18 + 0x3c))(param_1,param_2,this + 0x17718,param_4);
  if (iVar9 == 0) {
    return 0;
  }
  *(int *)(param_4 + 100) = param_2;
  *(int *)(param_4 + 0x68) = piVar6[0x20];
  return 1;
}




/* from: engine:pte_shader.cpp
   addr: 004CA890 */

int __thiscall
pteMANAGER::ShadeVert
          (pteMANAGER *this,objOBJ *param_1,int param_2,int param_3,pteVERT_DATA *param_4)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)(this + *(int *)(this + (*(int *)(this + *(short *)(param_1 + 0xec)
                                                                          * 8 + 0x1f4c) + param_3) *
                                                         4 + 0x3e90) * 4 + 4) + 0x40))
                    (param_1,param_2,param_4);
  if (iVar1 != 0) {
    *param_4 = (pteVERT_DATA)((byte)*param_4 | 1);
  }
  return 1;
}




/* from: engine:pte_shader.cpp
   addr: 004CA8E0 */

void __thiscall pteMANAGER::StartShadeObj(pteMANAGER *this,pteSHADER *param_1,objOBJ *param_2)

{
  int iVar1;
  
  if (*(animINST **)(param_2 + 0xbc) != (animINST *)0x0) {
    animINST::Validate(*(animINST **)(param_2 + 0xbc),0x200);
  }
  iVar1 = (**(code **)(*(int *)param_1 + 0x38))(param_2);
  if (iVar1 != 0) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x20;
  }
  return;
}




/* from: engine:pte_shader.cpp
   addr: 004CA930 */

void __thiscall pteSDR_INFO::ValidateNormalSmooth(pteSDR_INFO *this,objOBJ *param_1,int param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  int *piVar16;
  int iVar17;
  int iVar18;
  objOBJ *poVar19;
  int iVar20;
  pteSDR_INFO *ppVar21;
  uint uVar22;
  int iVar23;
  
  poVar19 = param_1;
  if (((byte)this[0x220] & 1) == 0) {
    piVar16 = *(int **)(param_1 + 0x28);
    iVar17 = piVar16[0x12];
    iVar20 = (uint)*(byte *)(piVar16 + 1) * param_2 + *piVar16;
    fVar2 = *(float *)(iVar17 + (uint)*(ushort *)(iVar20 + 4) * 0xc);
    fVar3 = *(float *)(iVar17 + (uint)*(ushort *)(iVar20 + 2) * 0xc);
    iVar23 = iVar17 + (uint)*(ushort *)(iVar20 + 4) * 0xc;
    pfVar1 = (float *)(iVar17 + (uint)*(ushort *)(iVar20 + 2) * 0xc);
    fVar4 = *(float *)(iVar23 + 4);
    fVar5 = pfVar1[1];
    fVar6 = *(float *)(iVar23 + 8);
    fVar7 = pfVar1[2];
    fVar8 = *(float *)(iVar17 + (uint)*(ushort *)(iVar20 + 6) * 0xc);
    fVar9 = *pfVar1;
    iVar17 = iVar17 + (uint)*(ushort *)(iVar20 + 6) * 0xc;
    fVar10 = *(float *)(iVar17 + 4);
    fVar11 = pfVar1[1];
    fVar12 = *(float *)(iVar17 + 8);
    fVar13 = pfVar1[2];
    if (0 < *(int *)(this + 4)) {
      iVar23 = 0xf8;
      ppVar21 = this + 0x100;
      param_1 = (objOBJ *)(iVar20 + 2);
      param_2 = *(int *)(this + 4);
      do {
        piVar16 = *(int **)this;
        if (*piVar16 == 0) {
          pfVar1 = (float *)(*(int *)(*(int *)(poVar19 + 0x28) + 0x48) +
                            (uint)*(ushort *)param_1 * 0xc);
          *(float *)(ppVar21 + -8) = *pfVar1;
          *(float *)(ppVar21 + -4) = pfVar1[1];
          *(float *)ppVar21 = pfVar1[2];
        }
        else {
          fVar14 = *(float *)(iVar23 + 0x20 + (int)piVar16);
          fVar15 = *(float *)(iVar23 + (int)piVar16);
          *(float *)(ppVar21 + -8) = fVar15 * (fVar2 - fVar3) + fVar14 * (fVar8 - fVar9);
          *(float *)(ppVar21 + -4) = (fVar10 - fVar11) * fVar14 + (fVar4 - fVar5) * fVar15;
          *(float *)ppVar21 = (fVar12 - fVar13) * fVar14 + (fVar6 - fVar7) * fVar15;
          uVar22 = (uint)*(ushort *)(iVar20 + 2);
          iVar18 = *(int *)(*(int *)(poVar19 + 0x28) + 0x48);
          iVar17 = iVar18 + uVar22 * 0xc;
          *(float *)(ppVar21 + -8) = *(float *)(ppVar21 + -8) + *(float *)(iVar18 + uVar22 * 0xc);
          *(float *)(ppVar21 + -4) = *(float *)(iVar17 + 4) + *(float *)(ppVar21 + -4);
          *(float *)ppVar21 = *(float *)(iVar17 + 8) + *(float *)ppVar21;
        }
        iVar23 = iVar23 + 4;
        param_1 = param_1 + 2;
        ppVar21 = ppVar21 + 0xc;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
    }
    *(uint *)(this + 0x220) = *(uint *)(this + 0x220) | 1;
  }
  return;
}




/* from: engine:pte_shader.cpp
   addr: 004CAAC0 */

void __thiscall pteSDR_INFO::ValidateReflectPoint(pteSDR_INFO *this,objOBJ *param_1,int param_2)

{
  int iVar1;
  pteSDR_INFO *ppVar2;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  if (((byte)this[0x220] & 4) == 0) {
    iVar1 = *(int *)(this + 4);
    camCAMERA::GetOrigin(*(camCAMERA **)(pteManager + 0x17940),(m3dV *)&local_c);
    ValidateNormalSmooth(this,param_1,param_2);
    if (0 < iVar1) {
      ppVar2 = this + 0x10;
      do {
        local_18 = *(float *)(ppVar2 + -8) - local_c;
        local_14 = *(float *)(ppVar2 + -4) - local_8;
        local_10 = *(float *)ppVar2 - local_4;
        m3dNormalize((m3dV *)&local_18);
        m3dReflectVector((m3dV *)(ppVar2 + 0xe8),(m3dV *)&local_18,(m3dV *)(ppVar2 + 0x1a8));
        ppVar2 = ppVar2 + 0xc;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    *(uint *)(this + 0x220) = *(uint *)(this + 0x220) | 4;
  }
  return;
}




/* from: engine:pte_shader.cpp
   addr: 004CAB70 */

int __cdecl _pteSortFunc(void *param_1,void *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
                    /* WARNING: Load size is inaccurate */
  iVar1 = *param_1;
                    /* WARNING: Load size is inaccurate */
  iVar2 = *param_2;
  iVar3 = *(int *)(iVar2 + 8) - *(int *)(iVar1 + 8);
  if ((iVar3 == 0) && (iVar3 = *(int *)(iVar2 + 0xc) - *(int *)(iVar1 + 0xc), iVar3 == 0)) {
    iVar3 = (iVar2 - iVar1) / 0x8c;
  }
  return iVar3;
}

