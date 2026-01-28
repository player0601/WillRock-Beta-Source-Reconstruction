
/* from: wr_item.cpp
   addr: 0049A7A0 */

int __fastcall wrItemInit(void)

{
  int iVar1;
  
  iVar1 = entRegisterClass(s_item,0x2449544d,0x28,wrITEM::Create,s_item,0);
  if (iVar1 == 0) {
    return 0;
  }
  wrITEM::pTexSparks = txmMANAGER::Add(txmManager,s_sfx_item_spark,0x40003,1);
  return (uint)(wrITEM::pTexSparks != (txmTEXTURE *)0x0);
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: wr_item.cpp
   addr: 0049A7F0 */

int __thiscall wrITEM::ProcessINIT(wrITEM *this)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  bool bVar7;
  
  iVar4 = *(int *)(this + 0xbc);
  pcVar2 = *(char **)(iVar4 + 0x20);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = s_;
  }
  iVar5 = 0xd;
  bVar7 = true;
  pcVar6 = s_pwp_bsk_item;
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    bVar7 = *pcVar2 == *pcVar6;
    pcVar2 = pcVar2 + 1;
    pcVar6 = pcVar6 + 1;
  } while (bVar7);
  if (bVar7) {
    *(undefined4 *)(this + 0x94) = 6;
    *(undefined4 *)(this + 0x153) = 0x41000000;
    goto LAB_0049afc3;
  }
  pcVar2 = *(char **)(iVar4 + 0x20);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = s_;
  }
  iVar5 = 0xd;
  bVar7 = true;
  pcVar6 = s_pwp_stg_item;
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    bVar7 = *pcVar2 == *pcVar6;
    pcVar2 = pcVar2 + 1;
    pcVar6 = pcVar6 + 1;
  } while (bVar7);
  if (bVar7) {
    *(undefined4 *)(this + 0x94) = 2;
    *(undefined4 *)(this + 0x153) = 0x41200000;
    goto LAB_0049afc3;
  }
  pcVar2 = *(char **)(iVar4 + 0x20);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = s_;
  }
  iVar5 = 0xd;
  bVar7 = true;
  pcVar6 = s_pwp_mcg_item;
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    bVar7 = *pcVar2 == *pcVar6;
    pcVar2 = pcVar2 + 1;
    pcVar6 = pcVar6 + 1;
  } while (bVar7);
  if (bVar7) {
    *(undefined4 *)(this + 0x94) = 3;
    *(undefined4 *)(this + 0x153) = 0x42c80000;
    goto LAB_0049afc3;
  }
  pcVar2 = *(char **)(iVar4 + 0x20);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = s_;
  }
  iVar5 = 0xd;
  bVar7 = true;
  pcVar6 = &s_pwp_mdg_item;
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    bVar7 = *pcVar2 == *pcVar6;
    pcVar2 = pcVar2 + 1;
    pcVar6 = pcVar6 + 1;
  } while (bVar7);
  if (bVar7) {
    *(undefined4 *)(this + 0x94) = 7;
    *(undefined4 *)(this + 0x153) = 0x41200000;
    goto LAB_0049afc3;
  }
  pcVar2 = *(char **)(iVar4 + 0x20);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = s_;
  }
  iVar5 = 0xd;
  bVar7 = true;
  pcVar6 = s_pwp_mng_item;
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    bVar7 = *pcVar2 == *pcVar6;
    pcVar2 = pcVar2 + 1;
    pcVar6 = pcVar6 + 1;
  } while (bVar7);
  if (bVar7) {
    *(undefined4 *)(this + 0x94) = 8;
    *(undefined4 *)(this + 0x153) = 0x43480000;
    goto LAB_0049afc3;
  }
  pcVar2 = *(char **)(iVar4 + 0x20);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = s_;
  }
  iVar5 = 0xd;
  bVar7 = true;
  pcVar6 = s_pwp_crb_item;
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    bVar7 = *pcVar2 == *pcVar6;
    pcVar2 = pcVar2 + 1;
    pcVar6 = pcVar6 + 1;
  } while (bVar7);
  if (bVar7) {
    *(undefined4 *)(this + 0x94) = 4;
    *(undefined4 *)(this + 0x153) = 0x41400000;
    goto LAB_0049afc3;
  }
  pcVar2 = *(char **)(iVar4 + 0x20);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = s_;
  }
  iVar5 = 0xd;
  bVar7 = true;
  pcVar6 = s_pwp_acd_item;
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    bVar7 = *pcVar2 == *pcVar6;
    pcVar2 = pcVar2 + 1;
    pcVar6 = pcVar6 + 1;
  } while (bVar7);
  if (bVar7) {
    *(undefined4 *)(this + 0x94) = 5;
    *(undefined4 *)(this + 0x153) = 0x41200000;
    goto LAB_0049afc3;
  }
  pcVar2 = *(char **)(iVar4 + 0x20);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = s_;
  }
  iVar5 = 0xd;
  bVar7 = true;
  pcVar6 = s_pwp_bmb_item;
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    bVar7 = *pcVar2 == *pcVar6;
    pcVar2 = pcVar2 + 1;
    pcVar6 = pcVar6 + 1;
  } while (bVar7);
  if (bVar7) {
    *(undefined4 *)(this + 0x94) = 9;
    *(undefined4 *)(this + 0x153) = 0x3f800000;
    goto LAB_0049afc3;
  }
  pcVar2 = *(char **)(iVar4 + 0x20);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = s_;
  }
  iVar5 = 0xd;
  bVar7 = true;
  pcVar6 = s_pwp_amg_item;
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    bVar7 = *pcVar2 == *pcVar6;
    pcVar2 = pcVar2 + 1;
    pcVar6 = pcVar6 + 1;
  } while (bVar7);
  if (bVar7) {
    *(undefined4 *)(this + 0x94) = 10;
    *(undefined4 *)(this + 0x153) = 0x41000000;
    goto LAB_0049afc3;
  }
  pcVar2 = *(char **)(iVar4 + 0x20);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = s_;
  }
  iVar5 = 0xd;
  bVar7 = true;
  pcVar6 = s_pwp_stg_ammo;
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    bVar7 = *pcVar2 == *pcVar6;
    pcVar2 = pcVar2 + 1;
    pcVar6 = pcVar6 + 1;
  } while (bVar7);
  if (bVar7) {
    *(undefined4 *)(this + 0x94) = 0x14;
    *(undefined4 *)(this + 0x153) = 0x41200000;
    goto LAB_0049afc3;
  }
  pcVar2 = *(char **)(iVar4 + 0x20);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = s_;
  }
  iVar5 = 0xd;
  bVar7 = true;
  pcVar6 = &s_pwp_bsk_ammo;
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    bVar7 = *pcVar2 == *pcVar6;
    pcVar2 = pcVar2 + 1;
    pcVar6 = pcVar6 + 1;
  } while (bVar7);
  if (bVar7) {
    *(undefined4 *)(this + 0x94) = 0x18;
    *(undefined4 *)(this + 0x153) = 0x40800000;
    goto LAB_0049afc3;
  }
  pcVar2 = *(char **)(iVar4 + 0x20);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = s_;
  }
  iVar5 = 0xd;
  bVar7 = true;
  pcVar6 = &s_pwp_mdg_ammo;
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    bVar7 = *pcVar2 == *pcVar6;
    pcVar2 = pcVar2 + 1;
    pcVar6 = pcVar6 + 1;
  } while (bVar7);
  if (bVar7) {
    *(undefined4 *)(this + 0x94) = 0x19;
    *(undefined4 *)(this + 0x153) = 0x40a00000;
    goto LAB_0049afc3;
  }
  pcVar2 = *(char **)(iVar4 + 0x20);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = s_;
  }
  iVar5 = 0xd;
  bVar7 = true;
  pcVar6 = &s_pwp_mcg_ammo;
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    bVar7 = *pcVar2 == *pcVar6;
    pcVar2 = pcVar2 + 1;
    pcVar6 = pcVar6 + 1;
  } while (bVar7);
  if (bVar7) {
    *(undefined4 *)(this + 0x94) = 0x15;
    *(undefined1 **)(this + 0x153) = &DAT_42480000;
    goto LAB_0049afc3;
  }
  pcVar2 = *(char **)(iVar4 + 0x20);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = s_;
  }
  iVar5 = 0xd;
  bVar7 = true;
  pcVar6 = &s_pwp_mng_ammo;
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    bVar7 = *pcVar2 == *pcVar6;
    pcVar2 = pcVar2 + 1;
    pcVar6 = pcVar6 + 1;
  } while (bVar7);
  if (bVar7) {
    *(undefined4 *)(this + 0x94) = 0x1a;
    *(undefined4 *)(this + 0x153) = 0x42c80000;
    goto LAB_0049afc3;
  }
  pcVar2 = *(char **)(iVar4 + 0x20);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = s_;
  }
  iVar5 = 0xd;
  bVar7 = true;
  pcVar6 = s_pwp_crb_ammo;
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    bVar7 = *pcVar2 == *pcVar6;
    pcVar2 = pcVar2 + 1;
    pcVar6 = pcVar6 + 1;
  } while (bVar7);
  if (bVar7) {
    *(undefined4 *)(this + 0x94) = 0x16;
    *(undefined4 *)(this + 0x153) = 0x40c00000;
    goto LAB_0049afc3;
  }
  pcVar2 = *(char **)(iVar4 + 0x20);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = s_;
  }
  iVar5 = 0xd;
  bVar7 = true;
  pcVar6 = s_pwp_acd_ammo;
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    bVar7 = *pcVar2 == *pcVar6;
    pcVar2 = pcVar2 + 1;
    pcVar6 = pcVar6 + 1;
  } while (bVar7);
  if (bVar7) {
    *(undefined4 *)(this + 0x94) = 0x17;
    *(undefined4 *)(this + 0x153) = 0x40a00000;
    goto LAB_0049afc3;
  }
  pcVar2 = *(char **)(iVar4 + 0x20);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = s_;
  }
  iVar5 = 0xd;
  bVar7 = true;
  pcVar6 = &s_pwp_bmb_ammo;
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    bVar7 = *pcVar2 == *pcVar6;
    pcVar2 = pcVar2 + 1;
    pcVar6 = pcVar6 + 1;
  } while (bVar7);
  if (bVar7) {
    *(undefined4 *)(this + 0x94) = 0x1b;
    *(undefined4 *)(this + 0x153) = 0x40a00000;
    goto LAB_0049afc3;
  }
  pcVar2 = *(char **)(iVar4 + 0x20);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = s_;
  }
  iVar5 = 0xd;
  bVar7 = true;
  pcVar6 = &s_pwp_amg_ammo;
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    bVar7 = *pcVar2 == *pcVar6;
    pcVar2 = pcVar2 + 1;
    pcVar6 = pcVar6 + 1;
  } while (bVar7);
  if (bVar7) {
    *(undefined4 *)(this + 0x94) = 0x1c;
    *(undefined4 *)(this + 0x153) = 0x40800000;
    goto LAB_0049afc3;
  }
  pcVar2 = *(char **)(iVar4 + 0x20);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = s_;
  }
  iVar5 = 0xd;
  bVar7 = true;
  pcVar6 = s_item_medkit1;
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    bVar7 = *pcVar2 == *pcVar6;
    pcVar2 = pcVar2 + 1;
    pcVar6 = pcVar6 + 1;
  } while (bVar7);
  if (bVar7) {
    *(undefined4 *)(this + 0x94) = 0x28;
    *(undefined4 *)(this + 0x153) = 0x41200000;
    goto LAB_0049afc3;
  }
  pcVar2 = *(char **)(iVar4 + 0x20);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = s_;
  }
  iVar5 = 0xd;
  bVar7 = true;
  pcVar6 = s_item_medkit2;
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    bVar7 = *pcVar2 == *pcVar6;
    pcVar2 = pcVar2 + 1;
    pcVar6 = pcVar6 + 1;
  } while (bVar7);
  if (bVar7) {
LAB_0049afaf:
    *(undefined4 *)(this + 0x94) = 0x29;
  }
  else {
    pcVar2 = *(char **)(iVar4 + 0x20);
    if (pcVar2 == (char *)0x0) {
      pcVar2 = s_;
    }
    iVar5 = 0xc;
    bVar7 = true;
    pcVar6 = s_item_medkit;
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      bVar7 = *pcVar2 == *pcVar6;
      pcVar2 = pcVar2 + 1;
      pcVar6 = pcVar6 + 1;
    } while (bVar7);
    if (bVar7) goto LAB_0049afaf;
    pcVar2 = *(char **)(iVar4 + 0x20);
    if (pcVar2 == (char *)0x0) {
      pcVar2 = s_;
    }
    iVar5 = 0xd;
    bVar7 = true;
    pcVar6 = s_item_medkit3;
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      bVar7 = *pcVar2 == *pcVar6;
      pcVar2 = pcVar2 + 1;
      pcVar6 = pcVar6 + 1;
    } while (bVar7);
    if (bVar7) {
      *(undefined4 *)(this + 0x94) = 0x2a;
      *(undefined4 *)(this + 0x153) = 0x42c80000;
      goto LAB_0049afc3;
    }
    pcVar2 = *(char **)(iVar4 + 0x20);
    if (pcVar2 == (char *)0x0) {
      pcVar2 = s_;
    }
    iVar5 = 0xd;
    bVar7 = true;
    pcVar6 = s_item_medkit4;
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      bVar7 = *pcVar2 == *pcVar6;
      pcVar2 = pcVar2 + 1;
      pcVar6 = pcVar6 + 1;
    } while (bVar7);
    if (bVar7) {
      *(undefined4 *)(this + 0x94) = 0x2b;
      *(undefined4 *)(this + 0x153) = 0x43480000;
      goto LAB_0049afc3;
    }
    pcVar2 = *(char **)(iVar4 + 0x20);
    if (pcVar2 == (char *)0x0) {
      pcVar2 = s_;
    }
    iVar5 = 0xc;
    bVar7 = true;
    pcVar6 = s_item_armor1;
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      bVar7 = *pcVar2 == *pcVar6;
      pcVar2 = pcVar2 + 1;
      pcVar6 = pcVar6 + 1;
    } while (bVar7);
    if (bVar7) {
      *(undefined4 *)(this + 0x94) = 0x2c;
      *(undefined4 *)(this + 0x153) = 0x41200000;
      goto LAB_0049afc3;
    }
    pcVar2 = *(char **)(iVar4 + 0x20);
    if (pcVar2 == (char *)0x0) {
      pcVar2 = s_;
    }
    iVar5 = 0xc;
    bVar7 = true;
    pcVar6 = s_item_armor2;
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      bVar7 = *pcVar2 == *pcVar6;
      pcVar2 = pcVar2 + 1;
      pcVar6 = pcVar6 + 1;
    } while (bVar7);
    if (!bVar7) {
      pcVar2 = *(char **)(iVar4 + 0x20);
      if (pcVar2 == (char *)0x0) {
        pcVar2 = s_;
      }
      iVar5 = 0xc;
      bVar7 = true;
      pcVar6 = s_item_armor3;
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        bVar7 = *pcVar2 == *pcVar6;
        pcVar2 = pcVar2 + 1;
        pcVar6 = pcVar6 + 1;
      } while (bVar7);
      if (bVar7) {
        *(undefined4 *)(this + 0x94) = 0x2d;
        *(undefined4 *)(this + 0x153) = 0x42c80000;
      }
      else {
        pcVar2 = *(char **)(iVar4 + 0x20);
        if (pcVar2 == (char *)0x0) {
          pcVar2 = s_;
        }
        iVar5 = 0xc;
        bVar7 = true;
        pcVar6 = s_item_armor4;
        do {
          if (iVar5 == 0) break;
          iVar5 = iVar5 + -1;
          bVar7 = *pcVar2 == *pcVar6;
          pcVar2 = pcVar2 + 1;
          pcVar6 = pcVar6 + 1;
        } while (bVar7);
        if (bVar7) {
          *(undefined4 *)(this + 0x94) = 0x2f;
          *(undefined4 *)(this + 0x153) = 0x43480000;
        }
        else {
          pcVar2 = *(char **)(iVar4 + 0x20);
          if (pcVar2 == (char *)0x0) {
            pcVar2 = s_;
          }
          iVar5 = 9;
          bVar7 = true;
          pcVar6 = s_item_key;
          do {
            if (iVar5 == 0) break;
            iVar5 = iVar5 + -1;
            bVar7 = *pcVar2 == *pcVar6;
            pcVar2 = pcVar2 + 1;
            pcVar6 = pcVar6 + 1;
          } while (bVar7);
          if (bVar7) {
            *(undefined4 *)(this + 0x94) = 0x31;
          }
          else {
            pcVar2 = *(char **)(iVar4 + 0x20);
            if (pcVar2 == (char *)0x0) {
              pcVar2 = s_;
            }
            iVar5 = 0xb;
            bVar7 = true;
            pcVar6 = s_item_money;
            do {
              if (iVar5 == 0) break;
              iVar5 = iVar5 + -1;
              bVar7 = *pcVar2 == *pcVar6;
              pcVar2 = pcVar2 + 1;
              pcVar6 = pcVar6 + 1;
            } while (bVar7);
            if (bVar7) {
              *(undefined4 *)(this + 0x94) = 0x30;
              *(undefined4 *)(this + 0x153) = 0x41200000;
            }
            else {
              pcVar2 = *(char **)(iVar4 + 0x20);
              if (pcVar2 == (char *)0x0) {
                pcVar2 = s_;
              }
              iVar5 = 0x14;
              bVar7 = true;
              pcVar6 = s_item_treasure_small;
              do {
                if (iVar5 == 0) break;
                iVar5 = iVar5 + -1;
                bVar7 = *pcVar2 == *pcVar6;
                pcVar2 = pcVar2 + 1;
                pcVar6 = pcVar6 + 1;
              } while (bVar7);
              if (!bVar7) {
                pcVar2 = *(char **)(iVar4 + 0x20);
                if (pcVar2 == (char *)0x0) {
                  pcVar2 = s_;
                }
                iVar5 = 0x16;
                bVar7 = true;
                pcVar6 = s_item_treasure_helmet1;
                do {
                  if (iVar5 == 0) break;
                  iVar5 = iVar5 + -1;
                  bVar7 = *pcVar2 == *pcVar6;
                  pcVar2 = pcVar2 + 1;
                  pcVar6 = pcVar6 + 1;
                } while (bVar7);
                if (!bVar7) {
                  pcVar2 = *(char **)(iVar4 + 0x20);
                  if (pcVar2 == (char *)0x0) {
                    pcVar2 = s_;
                  }
                  iVar5 = 0x15;
                  bVar7 = true;
                  pcVar6 = s_item_treasure_helmet;
                  do {
                    if (iVar5 == 0) break;
                    iVar5 = iVar5 + -1;
                    bVar7 = *pcVar2 == *pcVar6;
                    pcVar2 = pcVar2 + 1;
                    pcVar6 = pcVar6 + 1;
                  } while (bVar7);
                  if (bVar7) {
                    *(undefined4 *)(this + 0x94) = 0x35;
                    *(undefined4 *)(this + 0x153) = 0x41a00000;
                  }
                  else {
                    pcVar2 = *(char **)(iVar4 + 0x20);
                    if (pcVar2 == (char *)0x0) {
                      pcVar2 = s_;
                    }
                    iVar5 = 0x14;
                    bVar7 = true;
                    pcVar6 = s_item_treasure_sword;
                    do {
                      if (iVar5 == 0) break;
                      iVar5 = iVar5 + -1;
                      bVar7 = *pcVar2 == *pcVar6;
                      pcVar2 = pcVar2 + 1;
                      pcVar6 = pcVar6 + 1;
                    } while (bVar7);
                    if (bVar7) {
                      *(undefined4 *)(this + 0x94) = 0x36;
                      *(undefined4 *)(this + 0x153) = 0x41f00000;
                    }
                    else {
                      pcVar2 = *(char **)(iVar4 + 0x20);
                      if (pcVar2 == (char *)0x0) {
                        pcVar2 = s_;
                      }
                      iVar5 = 0x15;
                      bVar7 = true;
                      pcVar6 = s_item_treasure_shield;
                      do {
                        if (iVar5 == 0) break;
                        iVar5 = iVar5 + -1;
                        bVar7 = *pcVar2 == *pcVar6;
                        pcVar2 = pcVar2 + 1;
                        pcVar6 = pcVar6 + 1;
                      } while (bVar7);
                      if (bVar7) {
                        *(undefined4 *)(this + 0x94) = 0x37;
                        *(undefined4 *)(this + 0x153) = 0x42200000;
                      }
                      else {
                        pcVar2 = *(char **)(iVar4 + 0x20);
                        if (pcVar2 == (char *)0x0) {
                          pcVar2 = s_;
                        }
                        iVar5 = 0x14;
                        bVar7 = true;
                        pcVar6 = s_item_treasure_armor;
                        do {
                          if (iVar5 == 0) break;
                          iVar5 = iVar5 + -1;
                          bVar7 = *pcVar2 == *pcVar6;
                          pcVar2 = pcVar2 + 1;
                          pcVar6 = pcVar6 + 1;
                        } while (bVar7);
                        if (bVar7) {
                          *(undefined4 *)(this + 0x94) = 0x38;
                          *(undefined1 **)(this + 0x153) = &DAT_42480000;
                        }
                        else {
                          pcVar2 = *(char **)(iVar4 + 0x20);
                          if (pcVar2 == (char *)0x0) {
                            pcVar2 = s_;
                          }
                          iVar5 = 0x11;
                          bVar7 = true;
                          pcVar6 = s_item_quad_damage;
                          do {
                            if (iVar5 == 0) break;
                            iVar5 = iVar5 + -1;
                            bVar7 = *pcVar2 == *pcVar6;
                            pcVar2 = pcVar2 + 1;
                            pcVar6 = pcVar6 + 1;
                          } while (bVar7);
                          if (bVar7) {
                            *(undefined4 *)(this + 0x94) = 0x32;
                          }
                          else {
                            pcVar2 = *(char **)(iVar4 + 0x20);
                            if (pcVar2 == (char *)0x0) {
                              pcVar2 = s_;
                            }
                            iVar5 = 0x12;
                            bVar7 = true;
                            pcVar6 = s_item_unholy_armor;
                            do {
                              if (iVar5 == 0) break;
                              iVar5 = iVar5 + -1;
                              bVar7 = *pcVar2 == *pcVar6;
                              pcVar2 = pcVar2 + 1;
                              pcVar6 = pcVar6 + 1;
                            } while (bVar7);
                            if (bVar7) {
                              *(undefined4 *)(this + 0x94) = 0x33;
                            }
                            else {
                              pcVar2 = *(char **)(iVar4 + 0x20);
                              if (pcVar2 == (char *)0x0) {
                                pcVar2 = s_;
                              }
                              pcVar2 = strstr(pcVar2,s_item_mpth);
                              if (pcVar2 != (char *)0x0) {
                                *(undefined4 *)(this + 0x94) = 0x3c;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  goto LAB_0049afc3;
                }
              }
              *(undefined4 *)(this + 0x94) = 0x34;
              *(undefined4 *)(this + 0x153) = 0x41200000;
            }
          }
        }
      }
      goto LAB_0049afc3;
    }
    *(undefined4 *)(this + 0x94) = 0x2d;
  }
  *(undefined4 *)(this + 0x153) = 0x41c80000;
LAB_0049afc3:
  *(uint *)(this + 0xc) = *(uint *)(this + 0xc) | 2;
  *(undefined4 *)(this + 0x1df) = 0xbf800000;
  if ((*(int *)(wrSysGO + 0x94) == 3) && (*(int *)(this + 0x94) == 0x3c)) {
    puVar3 = (undefined4 *)operator_new(0xb4);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3[1] = 0;
      *(undefined1 *)(puVar3 + 0x17) = 0;
      *(undefined1 *)((int)puVar3 + 0x5d) = 0x40;
      *(undefined2 *)((int)puVar3 + 0x5e) = 0xffff;
      puVar3[0x18] = _m3dVZero;
      puVar3[0x19] = DAT_00963740;
      puVar3[0x1a] = DAT_00963744;
      puVar3[0x1b] = _m3dVZero;
      puVar3[0x1c] = DAT_00963740;
      uVar1 = DAT_00963744;
      puVar3[0x1e] = 0x3dcccccd;
      puVar3[0x1d] = uVar1;
      puVar3[0x1f] = DAT_005da97c;
      puVar3[0x20] = 1;
      puVar3[0x21] = 0;
      puVar3[0x22] = 0;
      puVar3[0x23] = 0;
      puVar3[0x24] = 0;
      *(undefined2 *)((int)puVar3 + 0x5e) = 0x38;
      puVar3[0x2a] = 0;
      puVar3[0x2b] = 0;
      *puVar3 = &physMATH::_vftable_;
      m3dMATR::Identity((m3dMATR *)(puVar3 + 2));
      puVar3[0x2b] = this;
    }
    *(undefined4 **)(this + 0x1d7) = puVar3;
    this[0xfc] = (wrITEM)0x9;
    *(uint *)(this + 0xb4) = *(uint *)(this + 0xb4) | 0x100;
  }
  if (wrSysStat != (wrSTAT_SYSTEM *)0x0) {
    wrSTAT_SYSTEM::Notify_CreateItem(wrSysStat,*(int *)(this + 0x94),*(float *)(this + 0x153));
  }
  iVar4 = itemITEM::ProcessINIT((itemITEM *)this);
  return iVar4;
}




/* from: wr_item.cpp
   addr: 0049B120 */

void __thiscall wrITEM::ProcessINIT_LEVEL(wrITEM *this)

{
  m3dV local_c [12];
  
  itemITEM::ProcessINIT_LEVEL((itemITEM *)this);
  if (*(int *)(this + 0x1e3) != 0) {
    animINST::GetPos(*(animINST **)(this + 0xbc),local_c);
    partEMITTER_PHYS::SetPosDirSpeed
              (*(partEMITTER_PHYS **)(this + 0x1e3),local_c,(m3dV *)0x0,(m3dV *)0x0);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: wr_item.cpp
   addr: 0049B160 */

int __thiscall wrITEM::IsCanPick(wrITEM *this,plgsACTION *param_1)

{
  int iVar1;
  wrITEM *pwVar2;
  
  if (___real_00000000 < *(float *)(this + 0x1df)) {
    return 0;
  }
  iVar1 = 0;
  if (0 < *(int *)(this + 0x1d3)) {
    pwVar2 = this + 0x193;
    do {
      if (*(int *)pwVar2 == *(int *)(param_1 + 0x8c)) {
        return 0;
      }
      iVar1 = iVar1 + 1;
      pwVar2 = pwVar2 + 4;
    } while (iVar1 < *(int *)(this + 0x1d3));
  }
  if ((*(uint *)(param_1 + 0x29b) & 0x40000000) != 0) {
    return 0;
  }
  iVar1 = itemITEM::IsCanPick((itemITEM *)this,param_1);
  return iVar1;
}




/* from: wr_item.cpp
   addr: 0049B1D0 */

void __thiscall wrITEM::Pick(wrITEM *this,plgsACTION *param_1)

{
  int iVar1;
  int iVar2;
  msgDATA local_14 [2];
  undefined2 local_12;
  undefined4 local_10;
  msgDATA local_c [2];
  undefined2 local_a;
  undefined4 local_8;
  undefined4 local_4;
  
  msgDATA::msgDATA(local_c);
  local_4 = 0;
  local_8 = 0;
  local_a = 0xc;
  msgDATA::msgDATA(local_14);
  local_10 = 5;
  local_12 = 8;
  itemITEM::Pick((itemITEM *)this,param_1);
  if ((*(int *)(gsSysMP + 0x28) != 1) && ((gsAppState & 0x400U) == 0)) {
    iVar2 = *(int *)(wrSysGO + 0xa4);
    if (*(int *)(wrSysGO + 0x94) == 2) {
      iVar1 = *(int *)(this + 0x94);
      if (((((iVar1 == 2) || (iVar1 == 3)) || (iVar1 == 6)) || ((iVar1 == 7 || (iVar1 == 4)))) ||
         ((iVar1 == 10 || ((iVar1 == 1 || (iVar1 == 8)))))) {
        iVar2 = 2;
      }
      else if (iVar1 == 0x31) {
        iVar2 = 0;
      }
    }
    if ((*(int *)(wrSysGO + 0x94) == 3) && (*(int *)(this + 0x94) == 0x3c)) {
      iVar2 = 0;
    }
    if (iVar2 != 0) {
      if (iVar2 == 1) {
        local_4 = 0;
        gsMP_SERVER::SendMsgClientAll
                  (gsSysServer,(entIACTIVE_OBJ *)this,0x40c,local_c,0x20000,0xfffffffd,0xfffffffd);
        if ((*(int *)(this + 0x94) == 0x32) || (*(int *)(this + 0x94) == 0x33)) {
          *(undefined4 *)(this + 399) = 0x42960000;
        }
        else {
          *(undefined4 *)(this + 399) = 0x41a00000;
        }
      }
      else if (iVar2 == 2) {
        (**(code **)(*(int *)gsSysServer + 0x2c))
                  (*(undefined4 *)(param_1 + 0x90),this,0x40c,local_14,0x20000);
        if (*(uint *)(this + 0x1d3) < 0x10) {
          *(undefined4 *)(this + *(uint *)(this + 0x1d3) * 4 + 0x193) =
               *(undefined4 *)(param_1 + 0x8c);
          *(int *)(this + 0x1d3) = *(int *)(this + 0x1d3) + 1;
        }
      }
      goto LAB_0049b355;
    }
  }
  msgSYSTEM::PostMsg(&msgSystem,(msgADDR *)this,2,(msgADDR *)0x0);
LAB_0049b355:
  *(uint *)(this + 0x14f) = *(uint *)(this + 0x14f) & 0xfffcffff;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: wr_item.cpp
   addr: 0049B370 */

void __thiscall wrITEM::ShowUnhideSfx(wrITEM *this)

{
  wrsfxFLAME_SPARKS *this_00;
  partEMITTER_PHYS *this_01;
  ulonglong uVar1;
  undefined8 extraout_MM1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  undefined1 auVar5 [16];
  float local_30;
  m3dV local_2c [12];
  undefined **local_20;
  undefined4 local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_1c = 1;
  local_20 = &m3dBOX::_vftable_;
  itemITEM::ShowUnhideSfx((itemITEM *)this);
  animINST::GetPos(*(animINST **)(this + 0xbc),local_2c);
  animINST::GetBBox(*(animINST **)(this + 0xbc),(m3dBOX *)&local_20);
  this_00 = (wrsfxFLAME_SPARKS *)operator_new(0x2c0);
  if (this_00 != (wrsfxFLAME_SPARKS *)0x0) {
    local_30 = (local_18 - local_c) * (local_18 - local_c) +
               (local_14 - local_8) * (local_14 - local_8) +
               (local_10 - local_4) * (local_10 - local_4);
    if (m3dSimdType == 0) {
      local_30 = local_30 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
      auVar5 = rsqrtss(ZEXT416((uint)local_30),ZEXT416((uint)local_30));
      fVar4 = auVar5._0_4_;
      local_30 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar4 *
                 (`float___cdecl_m3dSqrt(float)'::__l2::three - local_30 * fVar4 * fVar4) * local_30
      ;
    }
    else if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar1 = (ulonglong)(uint)local_30;
      uVar2 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar1);
      uVar3 = PackedFloatingMUL(uVar2,uVar2);
      uVar3 = PackedFloatingReciprocalSQRIter1(uVar3,uVar1);
      uVar2 = PackedFloatingReciprocalIter2(uVar3,uVar2);
      uVar2 = PackedFloatingMUL(uVar2,uVar1);
      local_30 = (float)uVar2;
      FastExitMediaState();
    }
    else {
      local_30 = SQRT(local_30);
    }
    this_01 = (partEMITTER_PHYS *)
              wrsfxFLAME_SPARKS::wrsfxFLAME_SPARKS(this_00,local_30 * ___real_3eaaaaab);
    if (this_01 != (partEMITTER_PHYS *)0x0) {
      partEMITTER_PHYS::SetPosDirSpeed(this_01,local_2c,&m3dVUnitY,(m3dV *)0x0);
      partEMITTER_PHYS::StartEmission(this_01);
      *(uint *)(this_01 + 4) = *(uint *)(this_01 + 4) | 0x200;
    }
  }
  if (*(partEMITTER_PHYS **)(this + 0x1e3) != (partEMITTER_PHYS *)0x0) {
    partEMITTER_PHYS::SetPosDirSpeed
              (*(partEMITTER_PHYS **)(this + 0x1e3),local_2c,(m3dV *)0x0,(m3dV *)0x0);
  }
  return;
}




/* from: wr_item.cpp
   addr: 0049B4E0 */

int __thiscall
wrITEM::ProcessMsg(wrITEM *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  int iVar1;
  
  if (param_1 == 3) {
    (**(code **)(*(int *)this + 0x9c))(param_2);
  }
  iVar1 = itemITEM::ProcessMsg((itemITEM *)this,param_1,param_2,param_3,param_4);
  return iVar1;
}




/* from: wr_item.cpp
   addr: 0049B520 */

void __thiscall wrITEM::ProcessMP_NOTIFY(wrITEM *this,gsEVENT *param_1)

{
  itemITEM::ProcessMP_NOTIFY((itemITEM *)this,param_1);
  if (*(int *)(param_1 + 4) == 5) {
    *(uint *)(this + 0x14f) = *(uint *)(this + 0x14f) | 0x20;
  }
  return;
}




/* from: wr_item.cpp
   addr: 0049B550 */

void __thiscall wrITEM::ProcessDESTROY_ENT(wrITEM *this,entENTITY *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  wrITEM *pwVar4;
  wrITEM *pwVar5;
  
  if ((*(int *)(param_1 + 0x14) == 0x504c5952) && (((byte)this[0x88] & 4) != 0)) {
    iVar3 = *(int *)(this + 0x1d3);
    iVar1 = 0;
    if (0 < iVar3) {
      pwVar4 = this + 0x193;
      while (*(int *)pwVar4 != *(int *)(param_1 + 0x8c)) {
        iVar1 = iVar1 + 1;
        pwVar4 = pwVar4 + 4;
        if (iVar3 <= iVar1) {
          return;
        }
      }
      if (iVar1 < iVar3 + -1) {
        pwVar4 = this + iVar1 * 0x40 + 0x1d3;
        pwVar5 = this + iVar1 * 0x40 + 0x193;
        for (uVar2 = (uint)(((iVar3 - iVar1) + -1) * 0x40) >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
          *(undefined4 *)pwVar5 = *(undefined4 *)pwVar4;
          pwVar4 = pwVar4 + 4;
          pwVar5 = pwVar5 + 4;
        }
        for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
          *pwVar5 = *pwVar4;
          pwVar4 = pwVar4 + 1;
          pwVar5 = pwVar5 + 1;
        }
      }
      *(int *)(this + 0x1d3) = *(int *)(this + 0x1d3) + -1;
    }
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: wr_item.cpp
   addr: 0049B5D0 */

void __thiscall wrITEM::ProcessFRAME(wrITEM *this)

{
  float fVar1;
  int iVar2;
  float in_EDX;
  undefined4 *puVar3;
  m3dMATR *pmVar4;
  undefined8 uVar5;
  undefined **ppuStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  m3dV amStack_4c [12];
  m3dMATR amStack_40 [64];
  
  if (*(int *)(gsSysMP + 0x28) == 2) {
    if ((*(uint *)(this + 0x14f) & 0x10000) != 0) {
      (**(code **)(**(int **)(this + 0x1d7) + 8))();
      puVar3 = (undefined4 *)(*(int *)(this + 0x1d7) + 8);
      pmVar4 = amStack_40;
      for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(undefined4 *)pmVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        pmVar4 = pmVar4 + 4;
      }
      animINST::Transform(*(animINST **)(this + 0xbc),amStack_40,0);
      uVar5 = (**(code **)(**(int **)(this + 0x1d7) + 0x14))();
      in_EDX = (float)((ulonglong)uVar5 >> 0x20);
      if ((int)uVar5 != 0) {
        uStack_50 = *(undefined4 *)(this + 0xbc);
        ppuStack_58 = &cdtREFINE::_vftable_;
        uStack_54 = 2;
        scnSCENE::FloorPlace
                  (gsScenePtr,amStack_4c,50.0,amStack_4c,1.0,0.0,0,(cdtREFINE *)&ppuStack_58,
                   (cdtINFO *)(this + 0x16f));
        *(undefined4 *)(this + 0x1db) = 0x41200000;
        in_EDX = (float)(*(uint *)(this + 0x14f) & 0xfffeffff | 0x20000);
        *(float *)(this + 0x14f) = in_EDX;
      }
    }
    m3dUpdateTimeField((float *)(this + 0x1df),in_EDX);
    if (((*(uint *)(this + 0x14f) & 0x20000) != 0) &&
       (fVar1 = *(float *)(this + 0x1db) - gsElapsedTime, *(float *)(this + 0x1db) = fVar1,
       fVar1 < ___real_00000000)) {
      wrGO_SYSTEM::SelectMP_TreasureDefaultPos(wrSysGO,amStack_4c);
      animINST::SetPos(*(animINST **)(this + 0xbc),amStack_4c);
      *(uint *)(this + 0x14f) = *(uint *)(this + 0x14f) & 0xfffdffff;
      *(uint *)(this + 0x88) = *(uint *)(this + 0x88) | 0x10;
      ppuStack_58 = (undefined **)0x84000;
      uStack_54 = 3;
      msgSYSTEM::PostTimeMsgData
                (&msgSystem,(msgADDR *)this,0x40c,(msgDATA *)&ppuStack_58,(msgADDR *)0x0,0.2);
      (**(code **)(*(int *)this + 0x44))(*(undefined4 *)(this + 0x157),1,this + 0x16f);
    }
  }
  itemITEM::ProcessFRAME((itemITEM *)this);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: wr_item.cpp
   addr: 0049B790 */

void __thiscall wrITEM::StartSpray(wrITEM *this)

{
  int iVar1;
  m3dMATR *pmVar2;
  undefined4 *puVar3;
  undefined1 local_90;
  undefined1 local_8f;
  undefined2 local_8e;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  float local_58;
  float local_54;
  float local_50;
  m3dV local_4c [8];
  m3dMATR amStack_44 [68];
  
  local_8c = (float)_m3dVZero;
  local_88 = (float)DAT_00963740;
  local_80 = (float)_m3dVZero;
  local_7c = (float)DAT_00963740;
  local_8f = 0x40;
  local_90 = 0;
  local_84 = (float)DAT_00963744;
  local_78 = (float)DAT_00963744;
  local_74 = 0x3dcccccd;
  local_70 = DAT_005da97c;
  local_6c = 1;
  local_68 = 0;
  local_64 = 0;
  local_60 = 0;
  local_5c = 0;
  local_8e = 0x38;
  if ((*(int *)(wrSysGO + 0x94) == 3) && (*(int *)(this + 0x94) == 0x3c)) {
    animINST::GetPos(*(animINST **)(this + 0xbc),local_4c);
    m3dMakeVUnitConusRandom(&m3dVUnitY,(float)&local_58,(m3dV *)0x42200000);
    local_80 = _m3dVUnitY * ___real_c1900000;
    local_74 = 0x3f666666;
    local_6c = 0xffffffff;
    local_64 = 0x3f4ccccd;
    local_68 = 0;
    local_60 = 2;
    local_7c = DAT_005f9994 * ___real_c1900000;
    local_70 = 0xbf800000;
    local_78 = DAT_005f9998 * ___real_c1900000;
    local_8c = local_58 * ___real_41600000;
    local_88 = local_54 * ___real_41600000;
    local_84 = local_50 * ___real_41600000;
    (**(code **)**(undefined4 **)(this + 0x1d7))(&local_90);
    *(uint *)(this + 0x14f) = *(uint *)(this + 0x14f) | 0x10000;
    m3dMATR::MakeLCS2WCS_VZ(amStack_44,(m3dV *)&local_50,&m3dVUnitZ);
    pmVar2 = amStack_44;
    puVar3 = (undefined4 *)(*(int *)(this + 0x1d7) + 8);
    for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *(undefined4 *)pmVar2;
      pmVar2 = pmVar2 + 4;
      puVar3 = puVar3 + 1;
    }
    *(uint *)(*(int *)(this + 0x1d7) + 4) = *(uint *)(*(int *)(this + 0x1d7) + 4) | 4;
    *(undefined4 *)(this + 0x1df) = 0x40400000;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: wr_item.cpp
   addr: 0049B940 */

wrITEM_SPARKS * __thiscall wrITEM_SPARKS::wrITEM_SPARKS(wrITEM_SPARKS *this,float param_1)

{
  float fVar1;
  m3dSPL *this_00;
  float local_8;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,50.0,0.5);
  *(undefined ***)this = &_vftable_;
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,0.4,0.1);
  if (___real_3f000000 <= param_1) {
    local_8 = param_1;
  }
  else {
    local_8 = 0.5;
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
    m3dSPL::AllocKpList(this_00,3);
  }
  fVar1 = local_8 * ___real_00000000;
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)this_00,0,0.0,fVar1);
  local_8 = local_8 * ___real_3ecccccd;
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)this_00,1,0.5,local_8);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)this_00,2,1.0,fVar1);
  partEMITTER_PHYS::SetSize((partEMITTER_PHYS *)this,local_8,0.0,(m3dSPL_LINEAR1D *)this_00,1.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)0x0);
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,wrITEM::pTexSparks);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,180.5,179.5,0.0,90.0);
  fVar1 = param_1 * ___real_3fc00000;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  *(undefined4 *)(this + 0xf8) = 0x43340000;
  *(undefined4 *)(this + 0xfc) = 0;
  *(undefined4 *)(this + 0xf0) = 0;
  *(float *)(this + 0xe8) = fVar1;
  fVar1 = param_1 * ___real_3e4ccccd;
  *(float *)(this + 0xec) = param_1;
  *(undefined4 *)(this + 0xbc) = 0;
  *(float *)(this + 0xb4) = fVar1;
  *(float *)(this + 0xb8) = param_1 * ___real_3dcccccd;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 1;
  partEMITTER_PHYS::SetDegFarParams((partEMITTER_PHYS *)this,10.0,25.0,3.5,0.1);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x8000000;
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: wr_item.cpp
   addr: 0049BB10 */

int __thiscall wrITEM::CreateSfx(wrITEM *this,char *param_1)

{
  wrITEM_SPARKS *this_00;
  partEMITTER_PHYS *this_01;
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;
  m3dV local_2c [4];
  float local_28;
  undefined **local_20;
  undefined4 local_1c;
  float local_14;
  float local_8;
  
  iVar1 = 9;
  bVar4 = true;
  local_1c = 1;
  pcVar2 = param_1;
  pcVar3 = s_sfx_item;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *pcVar2 == *pcVar3;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  } while (bVar4);
  local_20 = &m3dBOX::_vftable_;
  if (!bVar4) {
    iVar1 = itemITEM::CreateSfx((itemITEM *)this,param_1);
    return iVar1;
  }
  *(undefined4 *)(this + 0x15f) = 0;
  animINST::GetPos(*(animINST **)(this + 0xbc),local_2c);
  animINST::GetBBox(*(animINST **)(this + 0xbc),(m3dBOX *)&local_20);
  local_28 = local_28 + *(float *)(this + 0x157);
  iVar1 = *(int *)(this + 0x94);
  param_1 = (char *)((local_8 - local_14) * ___real_3f555555);
  if ((iVar1 == 0x2f) || (iVar1 == 0x2d)) {
    param_1 = (char *)((float)param_1 * ___real_3f2aaaab);
  }
  else if (iVar1 == 0x28) {
    param_1 = (char *)((float)param_1 * ___real_40400000);
  }
  else if (iVar1 == 0x2c) {
    param_1 = (char *)((float)param_1 * ___real_3fc00000);
  }
  else if (iVar1 == 0x17) {
    param_1 = (char *)((float)param_1 + (float)param_1);
  }
  this_00 = (wrITEM_SPARKS *)operator_new(0x2c0);
  if (this_00 == (wrITEM_SPARKS *)0x0) {
    this_01 = (partEMITTER_PHYS *)0x0;
  }
  else {
    this_01 = (partEMITTER_PHYS *)wrITEM_SPARKS::wrITEM_SPARKS(this_00,(float)param_1);
  }
  *(partEMITTER_PHYS **)(this + 0x1e3) = this_01;
  if (this_01 != (partEMITTER_PHYS *)0x0) {
    partEMITTER_PHYS::SetPosDirSpeed(this_01,local_2c,(m3dV *)0x0,(m3dV *)0x0);
    partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)(this + 0x1e3));
    partAttachInst(*(partEMITTER_PHYS **)(this + 0x1e3),*(animINST **)(this + 0xbc));
    return 1;
  }
  return 0;
}




/* from: wr_item.cpp
   addr: 0049BC60 */

void __thiscall wrITEM::DestroySfx(wrITEM *this)

{
  if (*(undefined4 **)(this + 0x1e3) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x1e3))(1);
    *(undefined4 *)(this + 0x1e3) = 0;
    return;
  }
  itemITEM::DestroySfx((itemITEM *)this);
  return;
}




/* from: wr_item.cpp
   addr: 0049BC90 */

void __thiscall wrITEM::ShowSfx(wrITEM *this,int param_1)

{
  partEMITTER_PHYS *this_00;
  
  this_00 = *(partEMITTER_PHYS **)(this + 0x1e3);
  if (this_00 == (partEMITTER_PHYS *)0x0) {
    itemITEM::ShowSfx((itemITEM *)this,param_1);
    return;
  }
  if (param_1 != 0) {
    partEMITTER_PHYS::StartEmission(this_00);
    return;
  }
  partEMITTER_PHYS::StopEmission(this_00);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: wr_item.cpp
   addr: 0049BCC0 */

entENTITY * __fastcall wrITEM::Create(animINST *param_1)

{
  undefined4 uVar1;
  entENTITY *this;
  
  this = (entENTITY *)operator_new(0x1e7);
  if (this != (entENTITY *)0x0) {
    entENTITY::entENTITY(this);
    *(undefined4 *)(this + 0x14f) = 0;
    *(undefined4 *)(this + 0x153) = 0;
    *(undefined4 *)(this + 0x157) = 0;
    *(undefined4 *)(this + 0x15b) = 0;
    *(undefined4 *)(this + 0x15f) = 0;
    *(undefined4 *)(this + 0x16f) = 0;
    *(undefined4 *)(this + 0x173) = 0;
    *(undefined4 *)(this + 0x177) = 0;
    *(undefined4 *)(this + 0x17b) = 0;
    *(undefined4 *)(this + 0x17f) = _m3dVZero;
    *(undefined4 *)(this + 0x183) = DAT_00963740;
    uVar1 = DAT_00963744;
    *(undefined4 *)(this + 0x18b) = 0;
    *(undefined4 *)(this + 0x187) = uVar1;
    *(undefined4 *)(this + 0x1d3) = 0;
    *(undefined4 *)(this + 0x1e3) = 0;
    *(undefined ***)this = &_vftable_;
    return this;
  }
  return (entENTITY *)0x0;
}




/* from: wr_item.cpp
   addr: 0049BD60 */

int __thiscall itemITEM::GetFloorInfo(itemITEM *this,cdtINFO *param_1)

{
  int iVar1;
  itemITEM *piVar2;
  
  piVar2 = this + 0x16f;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)param_1 = *(undefined4 *)piVar2;
    piVar2 = piVar2 + 4;
    param_1 = param_1 + 4;
  }
  return 1;
}




/* from: wr_item.cpp
   addr: 0049BD80
   addr: 0049BD80
   addr: 0049BD80
   addr: 0049BD80 */

void * __thiscall itemITEM::_scalar_deleting_destructor_(itemITEM *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  gsDOMAIN_LIST::~gsDOMAIN_LIST((gsDOMAIN_LIST *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

