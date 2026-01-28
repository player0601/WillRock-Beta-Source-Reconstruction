
/* from: wr_input.cpp
   addr: 00499CC0 */

int __thiscall wrINP_CTX_GAME::Init(wrINP_CTX_GAME *this)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = gsiCONTEXT::Init((gsiCONTEXT *)this);
  if (iVar2 == 0) {
    return 0;
  }
  *(uint *)(*(int *)(this + 4) + (0xc - *(int *)(this + 8)) * 0x9c) =
       *(uint *)(*(int *)(this + 4) + (0xc - *(int *)(this + 8)) * 0x9c) | 0x40;
  *(uint *)(*(int *)(this + 4) + (0x25 - *(int *)(this + 8)) * 0x9c) =
       *(uint *)(*(int *)(this + 4) + (0x25 - *(int *)(this + 8)) * 0x9c) | 0x40;
  *(uint *)(*(int *)(this + 4) + (5 - *(int *)(this + 8)) * 0x9c) =
       *(uint *)(*(int *)(this + 4) + (5 - *(int *)(this + 8)) * 0x9c) | 0x40;
  *(uint *)(*(int *)(this + 4) + (6 - *(int *)(this + 8)) * 0x9c) =
       *(uint *)(*(int *)(this + 4) + (6 - *(int *)(this + 8)) * 0x9c) | 0x40;
  *(uint *)(*(int *)(this + 4) + (3 - *(int *)(this + 8)) * 0x9c) =
       *(uint *)(*(int *)(this + 4) + (3 - *(int *)(this + 8)) * 0x9c) | 0x40;
  *(uint *)(*(int *)(this + 4) + (4 - *(int *)(this + 8)) * 0x9c) =
       *(uint *)(*(int *)(this + 4) + (4 - *(int *)(this + 8)) * 0x9c) | 0x40;
  *(uint *)(*(int *)(this + 4) + (0xb - *(int *)(this + 8)) * 0x9c) =
       *(uint *)(*(int *)(this + 4) + (0xb - *(int *)(this + 8)) * 0x9c) | 0x40;
  *(uint *)(*(int *)(this + 4) + (7 - *(int *)(this + 8)) * 0x9c) =
       *(uint *)(*(int *)(this + 4) + (7 - *(int *)(this + 8)) * 0x9c) | 0x40;
  *(uint *)(*(int *)(this + 4) + (8 - *(int *)(this + 8)) * 0x9c) =
       *(uint *)(*(int *)(this + 4) + (8 - *(int *)(this + 8)) * 0x9c) | 0x40;
  *(uint *)(*(int *)(this + 4) + (0x2c - *(int *)(this + 8)) * 0x9c) =
       *(uint *)(*(int *)(this + 4) + (0x2c - *(int *)(this + 8)) * 0x9c) | 0x40;
  *(uint *)(*(int *)(this + 4) + (0x2d - *(int *)(this + 8)) * 0x9c) =
       *(uint *)(*(int *)(this + 4) + (0x2d - *(int *)(this + 8)) * 0x9c) | 0x40;
  *(uint *)(*(int *)(this + 4) + (0x2e - *(int *)(this + 8)) * 0x9c) =
       *(uint *)(*(int *)(this + 4) + (0x2e - *(int *)(this + 8)) * 0x9c) | 0x40;
  *(uint *)(*(int *)(this + 4) + (0x2f - *(int *)(this + 8)) * 0x9c) =
       *(uint *)(*(int *)(this + 4) + (0x2f - *(int *)(this + 8)) * 0x9c) | 0x40;
  *(uint *)(*(int *)(this + 4) + (0x30 - *(int *)(this + 8)) * 0x9c) =
       *(uint *)(*(int *)(this + 4) + (0x30 - *(int *)(this + 8)) * 0x9c) | 0x40;
  puVar1 = (uint *)(*(int *)(this + 4) + (0x31 - *(int *)(this + 8)) * 0x9c);
  *puVar1 = *puVar1 | 0x40;
  *(uint *)(*(int *)(this + 4) + (0x32 - *(int *)(this + 8)) * 0x9c) =
       *(uint *)(*(int *)(this + 4) + (0x32 - *(int *)(this + 8)) * 0x9c) | 0x40;
  *(uint *)(*(int *)(this + 4) + (0x33 - *(int *)(this + 8)) * 0x9c) =
       *(uint *)(*(int *)(this + 4) + (0x33 - *(int *)(this + 8)) * 0x9c) | 0x40;
  *(uint *)(*(int *)(this + 4) + (0x34 - *(int *)(this + 8)) * 0x9c) =
       *(uint *)(*(int *)(this + 4) + (0x34 - *(int *)(this + 8)) * 0x9c) | 0x40;
  return 1;
}




/* from: wr_input.cpp
   addr: 00499F20 */

void __thiscall wrINP_CTX_GAME::GetCmdName(wrINP_CTX_GAME *this,int param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  
  switch(param_1) {
  case 1:
    pcVar2 = s_MOVE_FORWARD;
    do {
      cVar1 = *pcVar2;
      (param_2 + -0x5f4b58)[(int)pcVar2] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 2:
    pcVar2 = s_MOVE_BACKWARD;
    do {
      cVar1 = *pcVar2;
      (param_2 + -0x5f4b48)[(int)pcVar2] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 3:
    pcVar2 = &s_LOOK_UP;
    do {
      cVar1 = *pcVar2;
      (param_2 + -0x5f4b40)[(int)pcVar2] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 4:
    pcVar2 = s_LOOK_DOWN;
    do {
      cVar1 = *pcVar2;
      (param_2 + -0x5f4b34)[(int)pcVar2] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 5:
    pcVar2 = s_ROTATE_LEFT;
    do {
      cVar1 = *pcVar2;
      (param_2 + -0x5f4b28)[(int)pcVar2] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 6:
    pcVar2 = s_ROTATE_RIGHT;
    do {
      cVar1 = *pcVar2;
      (param_2 + -0x5f4b18)[(int)pcVar2] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 7:
    pcVar2 = s_MOVE_UP;
    do {
      cVar1 = *pcVar2;
      (param_2 + -0x5f326c)[(int)pcVar2] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 8:
    pcVar2 = s_MOVE_DOWN;
    do {
      cVar1 = *pcVar2;
      (param_2 + -0x5f3260)[(int)pcVar2] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 9:
    pcVar2 = s_MOVE_LEFT;
    do {
      cVar1 = *pcVar2;
      (param_2 + -0x5f4b0c)[(int)pcVar2] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 10:
    pcVar2 = s_MOVE_RIGHT;
    do {
      cVar1 = *pcVar2;
      (param_2 + -0x5f4b00)[(int)pcVar2] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0xb:
    pcVar2 = s_LOOK_CENTER;
    do {
      cVar1 = *pcVar2;
      (param_2 + -0x5f4af4)[(int)pcVar2] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0xc:
    pcVar2 = s_SWITCH_MODE;
    do {
      cVar1 = *pcVar2;
      (param_2 + -0x5f3284)[(int)pcVar2] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0xd:
    pcVar2 = s_ACCEL;
    do {
      cVar1 = *pcVar2;
      (param_2 + -0x5f4aec)[(int)pcVar2] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0xe:
    pcVar2 = &s_JUMP;
    do {
      cVar1 = *pcVar2;
      (param_2 + -0x5f4ae4)[(int)pcVar2] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0xf:
    pcVar2 = s_CROUCH;
    do {
      cVar1 = *pcVar2;
      (param_2 + -0x5f4adc)[(int)pcVar2] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x10:
    pcVar2 = &s_USE;
    do {
      cVar1 = *pcVar2;
      (param_2 + -0x5f4ad8)[(int)pcVar2] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x11:
    pcVar2 = &s_UI;
    do {
      cVar1 = *pcVar2;
      (param_2 + -0x5f2f7c)[(int)pcVar2] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x12:
    pcVar2 = &s_ZOOM;
    do {
      cVar1 = *pcVar2;
      (param_2 + -0x5f4ad0)[(int)pcVar2] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x13:
    pcVar2 = &s_WPN_1;
    do {
      cVar1 = *pcVar2;
      (param_2 + -0x5f4ac8)[(int)pcVar2] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x14:
    pcVar2 = &s_WPN_2;
    do {
      cVar1 = *pcVar2;
      (param_2 + -0x5f4ac0)[(int)pcVar2] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x15:
    pcVar2 = &s_WPN_3;
    do {
      cVar1 = *pcVar2;
      (param_2 + -0x5f4ab8)[(int)pcVar2] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x16:
    pcVar2 = &s_WPN_4;
    do {
      cVar1 = *pcVar2;
      (param_2 + -0x5f4ab0)[(int)pcVar2] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x17:
    pcVar2 = &s_WPN_5;
    do {
      cVar1 = *pcVar2;
      (param_2 + -0x5f4aa8)[(int)pcVar2] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x18:
    pcVar2 = &s_WPN_6;
    do {
      cVar1 = *pcVar2;
      (param_2 + -0x5f4aa0)[(int)pcVar2] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x19:
    pcVar2 = &s_WPN_7;
    do {
      cVar1 = *pcVar2;
      (param_2 + -0x5f4a98)[(int)pcVar2] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x1a:
    pcVar2 = &s_WPN_8;
    do {
      cVar1 = *pcVar2;
      (param_2 + -0x5f4a90)[(int)pcVar2] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x1b:
    pcVar2 = &s_WPN_9;
    do {
      cVar1 = *pcVar2;
      (param_2 + -0x5f4a88)[(int)pcVar2] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x1c:
    pcVar2 = &s_WPN_10;
    do {
      cVar1 = *pcVar2;
      pcVar2[(int)(param_2 + -0x5f4a80)] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x1d:
    pcVar2 = &s_WPN_11;
    do {
      cVar1 = *pcVar2;
      pcVar2[(int)(param_2 + -0x5f4a78)] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x1e:
    pcVar2 = s_WPN_NEXT;
    do {
      cVar1 = *pcVar2;
      pcVar2[(int)(param_2 + -0x5f4a6c)] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x1f:
    pcVar2 = s_WPN_PREV;
    do {
      cVar1 = *pcVar2;
      pcVar2[(int)(param_2 + -0x5f4a60)] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x20:
    pcVar2 = s_ACTIVATE_QUAD_DAMAGE;
    do {
      cVar1 = *pcVar2;
      pcVar2[(int)(param_2 + -0x5f4a48)] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x21:
    pcVar2 = s_ACTIVATE_UNHOLY_ARMOR;
    do {
      cVar1 = *pcVar2;
      pcVar2[(int)(param_2 + -0x5f4a30)] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x22:
    pcVar2 = s_ACTIVATE_SLOW_MOTION;
    do {
      cVar1 = *pcVar2;
      pcVar2[(int)(param_2 + -0x5f4a18)] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x23:
    pcVar2 = s_FORCE_RECHARGE;
    do {
      cVar1 = *pcVar2;
      pcVar2[(int)(param_2 + -0x5f4a08)] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x24:
    pcVar2 = s_SHOOT;
    do {
      cVar1 = *pcVar2;
      pcVar2[(int)(param_2 + -0x5f4a00)] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x25:
    pcVar2 = s_STOP_CINEMATIC;
    do {
      cVar1 = *pcVar2;
      pcVar2[(int)(param_2 + -0x5f49a8)] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x26:
    pcVar2 = s_PAUSE;
    do {
      cVar1 = *pcVar2;
      pcVar2[(int)(param_2 + -0x5f49a0)] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x27:
    pcVar2 = s_SHOWFRAGS;
    do {
      cVar1 = *pcVar2;
      (param_2 + -0x5f4994)[(int)pcVar2] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x28:
    pcVar2 = s_QUICKSAVE;
    do {
      cVar1 = *pcVar2;
      (param_2 + -0x5f4988)[(int)pcVar2] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x29:
    pcVar2 = s_QUICKLOAD;
    do {
      cVar1 = *pcVar2;
      (param_2 + -0x5f497c)[(int)pcVar2] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x2a:
    pcVar2 = s_TOGGLE_TEAM;
    do {
      cVar1 = *pcVar2;
      (param_2 + -0x5f4970)[(int)pcVar2] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x2b:
    pcVar2 = s_SCREENSHOT;
    do {
      cVar1 = *pcVar2;
      (param_2 + -0x5f4964)[(int)pcVar2] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    break;
  case 0x2c:
    pcVar2 = &s_DBG_1;
    do {
      cVar1 = *pcVar2;
      pcVar2[(int)(param_2 + -0x5f49f8)] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x2d:
    pcVar2 = &s_DBG_2;
    do {
      cVar1 = *pcVar2;
      pcVar2[(int)(param_2 + -0x5f49f0)] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x2e:
    pcVar2 = &s_DBG_3;
    do {
      cVar1 = *pcVar2;
      pcVar2[(int)(param_2 + -0x5f49e8)] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x2f:
    pcVar2 = &s_DBG_4;
    do {
      cVar1 = *pcVar2;
      pcVar2[(int)(param_2 + -0x5f49e0)] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x30:
    pcVar2 = &s_DBG_5;
    do {
      cVar1 = *pcVar2;
      pcVar2[(int)(param_2 + -0x5f49d8)] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x31:
    pcVar2 = &s_DBG_6;
    do {
      cVar1 = *pcVar2;
      pcVar2[(int)(param_2 + -0x5f49d0)] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x32:
    pcVar2 = &s_DBG_7;
    do {
      cVar1 = *pcVar2;
      pcVar2[(int)(param_2 + -0x5f49c8)] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x33:
    pcVar2 = &s_DBG_8;
    do {
      cVar1 = *pcVar2;
      pcVar2[(int)(param_2 + -0x5f49c0)] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  case 0x34:
    pcVar2 = &s_DBG_9;
    do {
      cVar1 = *pcVar2;
      pcVar2[(int)(param_2 + -0x5f49b8)] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return;
  }
  return;
}




/* from: wr_input.cpp
   addr: 0049A500 */

void __thiscall wrINP_CTX_UI::GetCmdName(wrINP_CTX_UI *this,int param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = &_cmdInfo + (param_1 - *(int *)(this + 8)) * 0x84;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    *param_2 = cVar1;
    param_2 = param_2 + 1;
  } while (cVar1 != '\0');
  return;
}




/* from: wr_input.cpp
   addr: 0049A530 */

int __thiscall wrINP_CTX_UI::LoadLayout(wrINP_CTX_UI *this)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  iVar1 = *(int *)(this + 8);
  if (iVar1 < *(int *)(this + 0xc)) {
    piVar2 = &DAT_005f4710;
    do {
      iVar3 = 0;
      if (0 < *piVar2) {
        piVar4 = piVar2 + 1;
        do {
          gsiCOMMAND::SetKSeq((gsiCOMMAND *)
                              (*(int *)(this + 4) + (iVar1 - *(int *)(this + 8)) * 0x9c),iVar3,
                              *piVar4,piVar4 + 1);
          iVar3 = iVar3 + 1;
          piVar4 = piVar4 + 4;
        } while (iVar3 < *piVar2);
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 0x21;
    } while (iVar1 < *(int *)(this + 0xc));
  }
  return 1;
}




/* from: wr_input.cpp
   addr: 0049A5C0 */

void __thiscall wrINP_SYSTEM::AddCtxes(wrINP_SYSTEM *this)

{
  int iVar1;
  gsiCONTEXT *pgVar2;
  
  gsINP_SYSTEM::AddCtxes((gsINP_SYSTEM *)this);
  iVar1 = gsINP_SYSTEM::FindFreeCtxIdx((gsINP_SYSTEM *)this);
  pgVar2 = (gsiCONTEXT *)operator_new(0x10);
  if (pgVar2 == (gsiCONTEXT *)0x0) {
    pgVar2 = (gsiCONTEXT *)0x0;
  }
  else {
    gsiCONTEXT::gsiCONTEXT(pgVar2,1,0x35);
    *(undefined ***)pgVar2 = &wrINP_CTX_GAME::_vftable_;
  }
  *(gsiCONTEXT **)(this + iVar1 * 4 + 0x44) = pgVar2;
  iVar1 = gsINP_SYSTEM::FindFreeCtxIdx((gsINP_SYSTEM *)this);
  pgVar2 = (gsiCONTEXT *)operator_new(0x10);
  if (pgVar2 == (gsiCONTEXT *)0x0) {
    pgVar2 = (gsiCONTEXT *)0x0;
  }
  else {
    gsiCONTEXT::gsiCONTEXT(pgVar2,1,0x35);
    *(undefined ***)pgVar2 = &wrINP_CTX_GAME_DEFAULTS::_vftable_;
  }
  *(gsiCONTEXT **)(this + iVar1 * 4 + 0x44) = pgVar2;
  iVar1 = gsINP_SYSTEM::FindFreeCtxIdx((gsINP_SYSTEM *)this);
  pgVar2 = (gsiCONTEXT *)operator_new(0x10);
  if (pgVar2 != (gsiCONTEXT *)0x0) {
    gsiCONTEXT::gsiCONTEXT(pgVar2,0x35,0x3a);
    *(undefined ***)pgVar2 = &wrINP_CTX_UI::_vftable_;
    *(gsiCONTEXT **)(this + iVar1 * 4 + 0x44) = pgVar2;
    return;
  }
  *(undefined4 *)(this + iVar1 * 4 + 0x44) = 0;
  return;
}




/* from: wr_input.cpp
   addr: 0049A670 */

void __thiscall wrINP_SYSTEM::SetDefCtx(wrINP_SYSTEM *this)

{
  gsiCONTEXT *pgVar1;
  
  pgVar1 = (gsiCONTEXT *)(**(code **)(*(int *)this + 0x1c))(s_GAME);
  gsINP_SYSTEM::SetCurCtx((gsINP_SYSTEM *)this,pgVar1);
  return;
}




/* from: wr_input.cpp
   addr: 0049A710
   addr: 0049A710
   addr: 0049A710
   addr: 0049A710
   addr: 0049A710
   addr: 0049A710
   addr: 0049A710
   addr: 0049A710
   addr: 0049A710
   addr: 0049A710 */

void * __thiscall
wrINP_CTX_GAME_DEFAULTS::_vector_deleting_destructor_(wrINP_CTX_GAME_DEFAULTS *this,uint param_1)

{
  *(undefined ***)this = &gsiCONTEXT::_vftable_;
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

