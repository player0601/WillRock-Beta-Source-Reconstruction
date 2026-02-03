# gs/gs_shared function usage in root src/*.cpp

This report lists functions **defined in** `src/gs` or `src/gs_shared` that are **referenced in** root `src/*.cpp` files (no subdirectories).
Include suggestions are inferred from the defining `.cpp` filename (e.g., `damage.cpp` -> `#include "damage.h"`).

## src/gs/dynamic.cpp
- Suggested include: `#include "dynamic.h"`

- `dynDYNAMIC::ProcessFRAME`
  - referenced in `src/plw_bul_wpn.cpp`
  - referenced in `src/plw_svl.cpp`
  - referenced in `src/sfx_bridge.cpp`
  - referenced in `src/sfx_medusa.cpp`
  - referenced in `src/sfx_trading_altar.cpp`
  - referenced in `src/sfx_zeus.cpp`
- `dynDYNAMIC::ProcessINIT`
  - referenced in `src/bird_egg.cpp`
  - referenced in `src/plw_bul_wpn.cpp`
  - referenced in `src/plw_svl.cpp`
  - referenced in `src/sfx_altar.cpp`
  - referenced in `src/sfx_medusa.cpp`
  - referenced in `src/sfx_trading_altar.cpp`
  - referenced in `src/sfx_zeus.cpp`
  - referenced in `src/sob_trading_altar.cpp`
- `dynDYNAMIC::ProcessMP_GET_SYNC_DATA`
  - referenced in `src/sfx_altar.cpp`
- `dynDYNAMIC::ProcessMP_READ_SYNC_DATA`
  - referenced in `src/sfx_altar.cpp`
- `dynDYNAMIC::ProcessMsg`
  - referenced in `src/sfx_altar.cpp`
  - referenced in `src/sfx_item.cpp`
  - referenced in `src/sfx_treasure.cpp`
  - referenced in `src/sob_katapult.cpp`
  - referenced in `src/sob_spikes.cpp`
- `dynDYNAMIC::StartAnim`
  - referenced in `src/mino_ax.cpp`
  - referenced in `src/player.cpp`
  - referenced in `src/plw_acd.cpp`
  - referenced in `src/plw_bsk.cpp`
  - referenced in `src/plw_bul_wpn.cpp`
  - referenced in `src/plw_mng.cpp`
  - referenced in `src/plw_svl.cpp`
  - referenced in `src/sfx_altar.cpp`
  - referenced in `src/sfx_bridge.cpp`
  - referenced in `src/sob_blade.cpp`
- `dynDYNAMIC::StopAnim`
  - referenced in `src/sfx_altar.cpp`

## src/gs/ent_interact.cpp
- Suggested include: `#include "ent_interact.h"`

- `entIACTIVE_OBJ::SendMP_Server_2_ClientAll`
  - referenced in `src/sob_blade.cpp`
- `entIACTIVE_OBJ::TermIActive`
  - referenced in `src/wr_main.cpp`
- `entIACTIVE_OBJ::entIACTIVE_OBJ`
  - referenced in `src/wr_game_opt.cpp`
  - referenced in `src/wr_main.cpp`

## src/gs/entity.cpp
- Suggested include: `#include "entity.h"`

- `entCDT_REFINE_EXCL::IsInclInst`
  - referenced in `src/player.cpp`
- `entENTITY::ApplyColor`
  - referenced in `src/ais_atlas.cpp`
  - referenced in `src/ais_diskobolus.cpp`
  - referenced in `src/ais_statue.cpp`
  - referenced in `src/player.cpp`
  - referenced in `src/sfx_altar.cpp`
- `entENTITY::GetColor`
  - referenced in `src/plr_anim.cpp`
- `entENTITY::SetFollow`
  - referenced in `src/ai_cent.cpp`
  - referenced in `src/ai_rat.cpp`
- `entENTITY::entENTITY`
  - referenced in `src/ais_statue_sfx.cpp`
  - referenced in `src/atlas_ball.cpp`
  - referenced in `src/bird_egg.cpp`
  - referenced in `src/plw_acd.cpp`
  - referenced in `src/plw_amg.cpp`
  - referenced in `src/plw_bmb.cpp`
  - referenced in `src/plw_bul_wpn.cpp`
  - referenced in `src/plw_crb.cpp`
  - referenced in `src/plw_svl.cpp`
  - referenced in `src/pwp_opp_sfx.cpp`
  - referenced in `src/pwp_water_sfx.cpp`
  - referenced in `src/sfx_altar.cpp`
  - referenced in `src/sfx_appear.cpp`
  - referenced in `src/sfx_atlas.cpp`
  - referenced in `src/sfx_barrel.cpp`
  - referenced in `src/sfx_bird.cpp`
  - referenced in `src/sfx_bridge.cpp`
  - referenced in `src/sfx_cerber.cpp`
  - referenced in `src/sfx_cyclop.cpp`
  - referenced in `src/sfx_destroy.cpp`
  - referenced in `src/sfx_discus.cpp`
  - referenced in `src/sfx_dust.cpp`
  - referenced in `src/sfx_flame.cpp`
  - referenced in `src/sfx_fountain.cpp`
  - referenced in `src/sfx_gefest.cpp`
  - referenced in `src/sfx_glad.cpp`
  - referenced in `src/sfx_item.cpp`
  - referenced in `src/sfx_lava.cpp`
  - referenced in `src/sfx_medusa.cpp`
  - referenced in `src/sfx_mirrors.cpp`
  - referenced in `src/sfx_niche.cpp`
  - referenced in `src/sfx_opp_appear.cpp`
  - referenced in `src/sfx_perseus.cpp`
  - referenced in `src/sfx_portal.cpp`
  - referenced in `src/sfx_rat.cpp`
  - referenced in `src/sfx_satir.cpp`
  - referenced in `src/sfx_skeleton.cpp`
  - referenced in `src/sfx_sphinx.cpp`
  - referenced in `src/sfx_trading_altar.cpp`
  - referenced in `src/sfx_treasure.cpp`
  - referenced in `src/sfx_water.cpp`
  - referenced in `src/sfx_wfall.cpp`
  - referenced in `src/sfx_zeus.cpp`
  - referenced in `src/sob_blade.cpp`
  - referenced in `src/sob_geyser.cpp`
  - referenced in `src/sob_katapult.cpp`
  - referenced in `src/sob_niche.cpp`
  - referenced in `src/sob_spikes.cpp`
  - referenced in `src/sob_trading_altar.cpp`
  - referenced in `src/sob_tree.cpp`
  - referenced in `src/wr_item.cpp`
  - referenced in `src/wr_ui.cpp`

## src/gs/gs_cfg.cpp
- Suggested include: `#include "gs_cfg.h"`

- `gsCFG_SYSTEM::gsCFG_SYSTEM`
  - referenced in `src/wr_main.cpp`

## src/gs/gs_curs.cpp
- Suggested include: `#include "gs_curs.h"`

- `gscCURSOR::Lock`
  - referenced in `src/wr_curs.cpp`

## src/gs/gs_domain.cpp
- Suggested include: `#include "gs_domain.h"`

- `gsDOMAIN::Init`
  - referenced in `src/wr_msgs.cpp`
- `gsDOMAIN::ProcessMsg`
  - referenced in `src/wr_msgs.cpp`
- `gsDOMAIN::gsDOMAIN`
  - referenced in `src/wr_main.cpp`
  - referenced in `src/wr_msgs.cpp`
- `gsDOMAIN_LIST::FindDomNmb`
  - referenced in `src/sfx_blood.cpp`
- `gsDOMAIN_LIST::ProcessMsg`
  - referenced in `src/wr_msgs.cpp`
- `gsDOMAIN_LIST::gsDOMAIN_LIST`
  - referenced in `src/wr_main.cpp`
  - referenced in `src/wr_msgs.cpp`

## src/gs/gs_input.cpp
- Suggested include: `#include "gs_input.h"`

- `gsINP_SYSTEM::AddCtxes`
  - referenced in `src/wr_input.cpp`
- `gsINP_SYSTEM::ApplySettings`
  - referenced in `src/wr_ui_ctrl.cpp`
- `gsINP_SYSTEM::FindFreeCtxIdx`
  - referenced in `src/wr_input.cpp`
- `gsINP_SYSTEM::SetCurCtx`
  - referenced in `src/wr_input.cpp`
  - referenced in `src/wr_ui.cpp`
- `gsINP_SYSTEM::gsINP_SYSTEM`
  - referenced in `src/wr_main.cpp`
- `gsiCOMMAND::GetKSeq`
  - referenced in `src/wr_ui_ctrl.cpp`
- `gsiCOMMAND::SetKSeq`
  - referenced in `src/wr_input.cpp`
  - referenced in `src/wr_ui_ctrl.cpp`
- `gsiCONTEXT::Init`
  - referenced in `src/wr_input.cpp`
- `gsiCONTEXT::gsiCONTEXT`
  - referenced in `src/wr_input.cpp`

## src/gs/gs_level.cpp
- Suggested include: `#include "gs_level.h"`

- `gsLVL_SYSTEM::Init`
  - referenced in `src/wr_main.cpp`
- `gsLVL_SYSTEM::LoadLevel`
  - referenced in `src/wr_main.cpp`
- `gsLVL_SYSTEM::ProcessMsg`
  - referenced in `src/wr_main.cpp`
- `gsLVL_SYSTEM::gsLVL_SYSTEM`
  - referenced in `src/wr_main.cpp`

## src/gs/gs_level_init.cpp
- Suggested include: `#include "gs_level_init.h"`

- `gsLVL_SYSTEM::InitBumpMtl`
  - referenced in `src/wr_main.cpp`
- `gsLVL_SYSTEM::InstDestroyNotify`
  - referenced in `src/wr_main.cpp`
- `gsLVL_SYSTEM::InstLoadNotify`
  - referenced in `src/wr_main.cpp`

## src/gs/gs_mp_client.cpp
- Suggested include: `#include "gs_mp_client.h"`

- `gsMP_CLIENT::gsMP_CLIENT`
  - referenced in `src/wr_main.cpp`

## src/gs/gs_mp_misc.cpp
- Suggested include: `#include "gs_mp_misc.h"`

- `gsMP_SYSTEM::FindEnt`
  - referenced in `src/ai_amur_arrow_pjl.cpp`
  - referenced in `src/ai_cerber.cpp`
  - referenced in `src/ai_cerber_pjl.cpp`
  - referenced in `src/ai_cyc_stone_pjl.cpp`
  - referenced in `src/ai_gefest.cpp`
  - referenced in `src/ai_gefest_pjl.cpp`
  - referenced in `src/ai_glad_knife.cpp`
  - referenced in `src/ai_glad_mace.cpp`
  - referenced in `src/ai_medusa_pjl.cpp`
  - referenced in `src/ai_satyr_arrow_pjl.cpp`
  - referenced in `src/ai_skel_spear_pjl.cpp`
  - referenced in `src/ai_zevs_pjl.cpp`
  - referenced in `src/ais_sphinx.cpp`
  - referenced in `src/bird_egg.cpp`
  - referenced in `src/diskbl_disk.cpp`
  - referenced in `src/mino_ax.cpp`
  - referenced in `src/player_comm.cpp`
  - referenced in `src/plw_acd.cpp`
  - referenced in `src/plw_amg.cpp`
  - referenced in `src/plw_bmb.cpp`
  - referenced in `src/plw_bsk.cpp`
  - referenced in `src/plw_bul_wpn.cpp`
  - referenced in `src/plw_crb.cpp`
  - referenced in `src/plw_mdg.cpp`
  - referenced in `src/plw_svl.cpp`
  - referenced in `src/pwp_opp_sfx.cpp`
  - referenced in `src/sfx_altar.cpp`
  - referenced in `src/sfx_lava.cpp`
  - referenced in `src/sfx_perseus.cpp`
  - referenced in `src/wr_msgs.cpp`
  - referenced in `src/wr_stats.cpp`
- `gsMP_SYSTEM::GetNextPlayer`
  - referenced in `src/wr_game_opt.cpp`
  - referenced in `src/wr_ui_hud.cpp`
- `gsMP_SYSTEM::GetStartPosDir`
  - referenced in `src/wr_game_opt.cpp`
- `gsMP_SYSTEM::SelectStartPosDir`
  - referenced in `src/player.cpp`
  - referenced in `src/wr_main.cpp`
- `gsMSG_MP_PTR::gsMSG_MP_PTR`
  - referenced in `src/plw_acd.cpp`

## src/gs/gs_mp_network.cpp
- Suggested include: `#include "gs_mp_network.h"`

- `gsMP_NETWORK::Browser_GetServerInfo`
  - referenced in `src/wr_ui_join.cpp`
- `gsMP_NETWORK::Browser_GetServerMainData`
  - referenced in `src/wr_ui_join.cpp`
- `gsMP_NETWORK::Browser_GetStatus`
  - referenced in `src/wr_ui_join.cpp`
- `gsMP_NETWORK::Browser_IsError`
  - referenced in `src/wr_ui_join.cpp`
- `gsMP_NETWORK::Browser_IsServerIdValid`
  - referenced in `src/wr_ui_join.cpp`
- `gsMP_NETWORK::Browser_IsServerListUpdated`
  - referenced in `src/wr_ui_join.cpp`
- `gsMP_NETWORK::Browser_IsStarted`
  - referenced in `src/wr_ui_join.cpp`
- `gsMP_NETWORK::Browser_RefreshServers`
  - referenced in `src/wr_ui_join.cpp`
- `gsMP_NETWORK::Browser_Start`
  - referenced in `src/wr_ui_mult.cpp`
- `gsMP_NETWORK::Browser_Stop`
  - referenced in `src/wr_ui_join.cpp`
- `gsMP_NETWORK::Client_DisconnectFromGame`
  - referenced in `src/wr_ui_join.cpp`
- `gsMP_NETWORK::Client_GetStatus`
  - referenced in `src/wr_ui_join.cpp`
- `gsMP_NETWORK::Client_IsError`
  - referenced in `src/wr_ui_join.cpp`
- `gsMP_NETWORK::Client_IsJoined`
  - referenced in `src/wr_ui_join.cpp`
- `gsMP_NETWORK::Client_JoinAddress`
  - referenced in `src/wr_ui_mult.cpp`
- `gsMP_NETWORK::Client_JoinBrowsedGame`
  - referenced in `src/wr_ui_join.cpp`
- `gsMP_NETWORK::Drv_Create`
  - referenced in `src/wr_ui_mult.cpp`
- `gsMP_NETWORK::Drv_GetIdString`
  - referenced in `src/wr_ui_mult.cpp`
- `gsMP_NETWORK::Drv_GetRefreshInterval`
  - referenced in `src/wr_ui_join.cpp`
- `gsMP_NETWORK::Drv_GetStatus`
  - referenced in `src/wr_ui_mult.cpp`
- `gsMP_NETWORK::Drv_IsCreated`
  - referenced in `src/wr_ui_mult.cpp`
- `gsMP_NETWORK::Drv_IsError`
  - referenced in `src/wr_ui_mult.cpp`
- `gsMP_NETWORK::Drv_IsPasswordRequired`
  - referenced in `src/wr_ui_mult.cpp`
- `gsMP_NETWORK::Drv_SetUserNameAndPassword`
  - referenced in `src/wr_ui_mult.cpp`
- `gsMP_NETWORK::Drv_Stop`
  - referenced in `src/wr_main.cpp`
  - referenced in `src/wr_ui_mult.cpp`
- `gsMP_NETWORK::Server_GetLadderStatus`
  - referenced in `src/wr_game_opt.cpp`
- `gsMP_NETWORK::Server_GetStatus`
  - referenced in `src/wr_ui_server.cpp`
- `gsMP_NETWORK::Server_IsError`
  - referenced in `src/wr_ui_server.cpp`
- `gsMP_NETWORK::Server_IsStarted`
  - referenced in `src/wr_ui_server.cpp`
- `gsMP_NETWORK::Server_ResetLadder`
  - referenced in `src/wr_game_opt.cpp`
- `gsMP_NETWORK::Server_Start`
  - referenced in `src/wr_game_opt.cpp`
  - referenced in `src/wr_ui_server.cpp`
- `gsMP_NETWORK::Server_StartLadderSending`
  - referenced in `src/wr_game_opt.cpp`
- `gsMP_NETWORK::Server_Stop`
  - referenced in `src/wr_game_opt.cpp`
- `gsMP_NETWORK::Server_StopLadder`
  - referenced in `src/wr_game_opt.cpp`

## src/gs/gs_mp_server.cpp
- Suggested include: `#include "gs_mp_server.h"`

- `gsMP_SERVER::DeclSyncable`
  - referenced in `src/atlas_ball.cpp`
  - referenced in `src/pwp_opp_sfx.cpp`
  - referenced in `src/sfx_altar.cpp`
  - referenced in `src/sfx_perseus.cpp`
  - referenced in `src/sfx_trading_altar.cpp`
  - referenced in `src/sob_blade.cpp`
  - referenced in `src/sob_niche.cpp`
  - referenced in `src/wr_game_opt.cpp`
  - referenced in `src/wr_msgs.cpp`
  - referenced in `src/wr_stats.cpp`
- `gsMP_SERVER::GetNextPlayer`
  - referenced in `src/wr_game_opt.cpp`
- `gsMP_SERVER::GetPlayer`
  - referenced in `src/wr_msgs.cpp`
- `gsMP_SERVER::SendMsgClient`
  - referenced in `src/ai_cerber_pjl.cpp`
  - referenced in `src/ai_cyc_stone_pjl.cpp`
  - referenced in `src/ai_gefest_pjl.cpp`
  - referenced in `src/ai_glad_knife.cpp`
  - referenced in `src/ai_glad_mace.cpp`
  - referenced in `src/ai_medusa_pjl.cpp`
  - referenced in `src/ai_npc_wr.cpp`
  - referenced in `src/ai_satyr_arrow_pjl.cpp`
  - referenced in `src/ai_skel_spear_pjl.cpp`
  - referenced in `src/ai_zevs_pjl.cpp`
  - referenced in `src/ais_sphinx.cpp`
  - referenced in `src/atlas_ball.cpp`
  - referenced in `src/bird_egg.cpp`
  - referenced in `src/diskbl_disk.cpp`
  - referenced in `src/mino_ax.cpp`
  - referenced in `src/player.cpp`
  - referenced in `src/player_comm.cpp`
  - referenced in `src/plw_acd.cpp`
  - referenced in `src/plw_bmb.cpp`
  - referenced in `src/plw_bsk.cpp`
  - referenced in `src/plw_bul_wpn.cpp`
  - referenced in `src/plw_crb.cpp`
  - referenced in `src/plw_mdg.cpp`
  - referenced in `src/plw_svl.cpp`
  - referenced in `src/pwp_opp_sfx.cpp`
  - referenced in `src/sfx_altar.cpp`
  - referenced in `src/sfx_blood.cpp`
  - referenced in `src/sfx_lava.cpp`
  - referenced in `src/sfx_perseus.cpp`
  - referenced in `src/sob_niche.cpp`
  - referenced in `src/wr_game_opt.cpp`
  - referenced in `src/wr_item.cpp`
  - referenced in `src/wr_main.cpp`
  - referenced in `src/wr_msgs.cpp`
- `gsMP_SERVER::SendMsgClientAll`
  - referenced in `src/ai_cerber_pjl.cpp`
  - referenced in `src/ai_cyc_stone_pjl.cpp`
  - referenced in `src/ai_gefest_pjl.cpp`
  - referenced in `src/ai_glad_knife.cpp`
  - referenced in `src/ai_glad_mace.cpp`
  - referenced in `src/ai_medusa_pjl.cpp`
  - referenced in `src/ai_npc_wr.cpp`
  - referenced in `src/ai_satyr_arrow_pjl.cpp`
  - referenced in `src/ai_skel_spear_pjl.cpp`
  - referenced in `src/ai_zevs_pjl.cpp`
  - referenced in `src/ais_sphinx.cpp`
  - referenced in `src/atlas_ball.cpp`
  - referenced in `src/bird_egg.cpp`
  - referenced in `src/diskbl_disk.cpp`
  - referenced in `src/mino_ax.cpp`
  - referenced in `src/player.cpp`
  - referenced in `src/player_comm.cpp`
  - referenced in `src/plw_acd.cpp`
  - referenced in `src/plw_bmb.cpp`
  - referenced in `src/plw_bsk.cpp`
  - referenced in `src/plw_bul_wpn.cpp`
  - referenced in `src/plw_crb.cpp`
  - referenced in `src/plw_mdg.cpp`
  - referenced in `src/plw_svl.cpp`
  - referenced in `src/pwp_opp_sfx.cpp`
  - referenced in `src/sfx_altar.cpp`
  - referenced in `src/sfx_blood.cpp`
  - referenced in `src/sfx_lava.cpp`
  - referenced in `src/sfx_perseus.cpp`
  - referenced in `src/sob_niche.cpp`
  - referenced in `src/wr_game_opt.cpp`
  - referenced in `src/wr_item.cpp`
  - referenced in `src/wr_main.cpp`
  - referenced in `src/wr_msgs.cpp`
- `gsMP_SERVER::gsMP_SERVER`
  - referenced in `src/wr_main.cpp`

## src/gs/gs_play.cpp
- Suggested include: `#include "gs_play.h"`

- `gspEVENT::GetString`
  - referenced in `src/wr_main.cpp`
- `gspPLAY_SYSTEM::GetEvent`
  - referenced in `src/wr_main.cpp`
- `gspPLAY_SYSTEM::LoadGame`
  - referenced in `src/wr_ui_wnd.cpp`
- `gspPLAY_SYSTEM::NotifyEvent`
  - referenced in `src/wr_game_opt.cpp`
  - referenced in `src/wr_main.cpp`
- `gspPLAY_SYSTEM::StartFirst`
  - referenced in `src/wr_main.cpp`
- `gspPLAY_SYSTEM::StartGame`
  - referenced in `src/wr_ui_wnd.cpp`
- `gspPLAY_SYSTEM::StopGame`
  - referenced in `src/wr_game_opt.cpp`
  - referenced in `src/wr_ui_wnd.cpp`

## src/gs/gs_rend.cpp
- Suggested include: `#include "gs_rend.h"`

- `gsRENDER_SYSTEM::Init`
  - referenced in `src/wr_main.cpp`
- `gsRENDER_SYSTEM::SetColorFullScr`
  - referenced in `src/player.cpp`
- `gsRENDER_SYSTEM::gsRENDER_SYSTEM`
  - referenced in `src/wr_main.cpp`

## src/gs/gs_scr2d.cpp
- Suggested include: `#include "gs_scr2d.h"`

- `gssAREA::gssAREA`
  - referenced in `src/wr_main.cpp`
- `gssWND::Register`
  - referenced in `src/wr_main.cpp`
- `gssWND::Show`
  - referenced in `src/wr_main.cpp`
- `gssWND::Unregister`
  - referenced in `src/wr_main.cpp`
- `gssWND::gssWND`
  - referenced in `src/wr_main.cpp`

## src/gs/gs_sound.cpp
- Suggested include: `#include "gs_sound.h"`

- `gsSND_SYSTEM::AddChannel`
  - referenced in `src/ai_amur.cpp`
  - referenced in `src/ai_bird.cpp`
  - referenced in `src/ai_cent.cpp`
  - referenced in `src/ai_cerber.cpp`
  - referenced in `src/ai_cerber_pjl.cpp`
  - referenced in `src/ai_croc.cpp`
  - referenced in `src/ai_cyc_stone_pjl.cpp`
  - referenced in `src/ai_cyclop.cpp`
  - referenced in `src/ai_gefest.cpp`
  - referenced in `src/ai_gefest_pjl.cpp`
  - referenced in `src/ai_glad_generic.cpp`
  - referenced in `src/ai_glad_knife.cpp`
  - referenced in `src/ai_glad_mace.cpp`
  - referenced in `src/ai_medusa.cpp`
  - referenced in `src/ai_medusa_pjl.cpp`
  - referenced in `src/ai_mino.cpp`
  - referenced in `src/ai_rat.cpp`
  - referenced in `src/ai_satyr.cpp`
  - referenced in `src/ai_satyr_arrow_pjl.cpp`
  - referenced in `src/ai_skel_generic.cpp`
  - referenced in `src/ai_skel_spear_pjl.cpp`
  - referenced in `src/ai_tiger.cpp`
  - referenced in `src/ai_zevs.cpp`
  - referenced in `src/ais_atlas.cpp`
  - referenced in `src/ais_diskobolus.cpp`
  - referenced in `src/ais_sphinx.cpp`
  - referenced in `src/bird_egg.cpp`
  - referenced in `src/diskbl_disk.cpp`
  - referenced in `src/mino_ax.cpp`
  - referenced in `src/player_comm.cpp`
  - referenced in `src/plw_amg.cpp`
  - referenced in `src/plw_bmb.cpp`
  - referenced in `src/plw_bsk.cpp`
  - referenced in `src/plw_bul_wpn.cpp`
  - referenced in `src/plw_mdg.cpp`
  - referenced in `src/plw_mng.cpp`
  - referenced in `src/pwp_comm.cpp`
  - referenced in `src/sfx_altar.cpp`
  - referenced in `src/sfx_portal.cpp`
  - referenced in `src/sfx_water.cpp`
  - referenced in `src/wr_msgs.cpp`
  - referenced in `src/wr_ui.cpp`
- `gsSND_SYSTEM::ApplySettings`
  - referenced in `src/wr_ui_audio.cpp`
- `gsSND_SYSTEM::DelChannel`
  - referenced in `src/wr_msgs.cpp`
- `gsSND_SYSTEM::Mute`
  - referenced in `src/gs_windows.cpp`
  - referenced in `src/wr_main.cpp`
- `gsSND_SYSTEM::Play`
  - referenced in `src/ai_amur.cpp`
  - referenced in `src/ai_bird.cpp`
  - referenced in `src/ai_cent.cpp`
  - referenced in `src/ai_cerber_pjl.cpp`
  - referenced in `src/ai_croc.cpp`
  - referenced in `src/ai_gefest_pjl.cpp`
  - referenced in `src/ai_glad_knife.cpp`
  - referenced in `src/ai_glad_mace.cpp`
  - referenced in `src/ai_medusa.cpp`
  - referenced in `src/ai_medusa_pjl.cpp`
  - referenced in `src/ai_rat.cpp`
  - referenced in `src/ai_satyr.cpp`
  - referenced in `src/ais_perseus.cpp`
  - referenced in `src/ais_sphinx.cpp`
  - referenced in `src/ais_statue.cpp`
  - referenced in `src/atlas_ball.cpp`
  - referenced in `src/bird_egg.cpp`
  - referenced in `src/diskbl_disk.cpp`
  - referenced in `src/mino_ax.cpp`
  - referenced in `src/plw_acd.cpp`
  - referenced in `src/plw_amg.cpp`
  - referenced in `src/plw_bmb.cpp`
  - referenced in `src/plw_bsk.cpp`
  - referenced in `src/plw_bul_wpn.cpp`
  - referenced in `src/plw_crb.cpp`
  - referenced in `src/pwp_opp_sfx.cpp`
  - referenced in `src/sfx_altar.cpp`
  - referenced in `src/sfx_appear.cpp`
  - referenced in `src/sfx_blood.cpp`
  - referenced in `src/sfx_opp_appear.cpp`
  - referenced in `src/sfx_perseus.cpp`
  - referenced in `src/sob_niche.cpp`
- `gsSND_SYSTEM::gsSND_SYSTEM`
  - referenced in `src/wr_main.cpp`

## src/gs/gs_strings.cpp
- Suggested include: `#include "gs_strings.h"`

- `gsSTRINGS::AsciiToUnicode`
  - referenced in `src/wr_ui_hud.cpp`
  - referenced in `src/wr_ui_join.cpp`
  - referenced in `src/wr_ui_mult.cpp`
  - referenced in `src/wr_ui_server.cpp`
  - referenced in `src/wr_ui_sinfo.cpp`
  - referenced in `src/wr_ui_txtscrl.cpp`
  - referenced in `src/wr_ui_video.cpp`
- `gsSTRINGS::GetStringById`
  - referenced in `src/player.cpp`
  - referenced in `src/player_comm.cpp`
  - referenced in `src/wr_game_opt.cpp`
  - referenced in `src/wr_main.cpp`
  - referenced in `src/wr_msgs.cpp`
  - referenced in `src/wr_ui.cpp`
  - referenced in `src/wr_ui_comics.cpp`
  - referenced in `src/wr_ui_credits.cpp`
  - referenced in `src/wr_ui_ctrl.cpp`
  - referenced in `src/wr_ui_gameopt.cpp`
  - referenced in `src/wr_ui_hud.cpp`
  - referenced in `src/wr_ui_join.cpp`
  - referenced in `src/wr_ui_load.cpp`
  - referenced in `src/wr_ui_mult.cpp`
  - referenced in `src/wr_ui_server.cpp`
  - referenced in `src/wr_ui_txtscrl.cpp`
  - referenced in `src/wr_ui_wnd.cpp`
- `gsSTRINGS::GetStringId`
  - referenced in `src/player.cpp`
  - referenced in `src/player_comm.cpp`
  - referenced in `src/wr_game_opt.cpp`
  - referenced in `src/wr_main.cpp`
  - referenced in `src/wr_msgs.cpp`
  - referenced in `src/wr_ui.cpp`
  - referenced in `src/wr_ui_comics.cpp`
  - referenced in `src/wr_ui_credits.cpp`
  - referenced in `src/wr_ui_ctrl.cpp`
  - referenced in `src/wr_ui_gameopt.cpp`
  - referenced in `src/wr_ui_hud.cpp`
  - referenced in `src/wr_ui_join.cpp`
  - referenced in `src/wr_ui_load.cpp`
  - referenced in `src/wr_ui_mult.cpp`
  - referenced in `src/wr_ui_server.cpp`
  - referenced in `src/wr_ui_txtscrl.cpp`
  - referenced in `src/wr_ui_video.cpp`
  - referenced in `src/wr_ui_wnd.cpp`
- `gsSTRINGS::GetStringIdFmt`
  - referenced in `src/player_comm.cpp`
  - referenced in `src/wr_ui.cpp`
  - referenced in `src/wr_ui_credits.cpp`
  - referenced in `src/wr_ui_ctrl.cpp`
  - referenced in `src/wr_ui_gameopt.cpp`
  - referenced in `src/wr_ui_hud.cpp`
  - referenced in `src/wr_ui_join.cpp`
  - referenced in `src/wr_ui_mult.cpp`
  - referenced in `src/wr_ui_server.cpp`
  - referenced in `src/wr_ui_video.cpp`
- `gsSTRINGS::LoadStringsTable`
  - referenced in `src/wr_strings.cpp`
- `gsSTRINGS::Printf`
  - referenced in `src/player.cpp`
  - referenced in `src/wr_game_opt.cpp`
  - referenced in `src/wr_ui.cpp`
  - referenced in `src/wr_ui_hud.cpp`
  - referenced in `src/wr_ui_load.cpp`
  - referenced in `src/wr_ui_wnd.cpp`
- `gsSTRINGS::UnicodeToAscii`
  - referenced in `src/wr_ui_mult.cpp`
  - referenced in `src/wr_ui_server.cpp`
- `gsSTRINGS::gsSTRINGS`
  - referenced in `src/wr_main.cpp`

## src/gs/mirror.cpp
- Suggested include: `#include "mirror.h"`

- `mrrMIRROR_SYSTEM::GetNActive`
  - referenced in `src/player_mp.cpp`
- `mrrMIRROR_SYSTEM::mrrMIRROR_SYSTEM`
  - referenced in `src/wr_main.cpp`

## src/gs/phys_rigid.cpp
- Suggested include: `#include "phys_rigid.h"`

- `rgdRIGID::ProcessFRAME`
  - referenced in `src/atlas_ball.cpp`
  - referenced in `src/sob_niche.cpp`
- `rgdRIGID::ProcessINIT`
  - referenced in `src/atlas_ball.cpp`
- `rgdRIGID::ProcessMsg`
  - referenced in `src/atlas_ball.cpp`

## src/gs/phys_rigid_cdt.cpp
- Suggested include: `#include "phys_rigid_cdt.h"`

- `rgdPLANE_SET::AddPlane`
  - referenced in `src/sob_niche.cpp`

## src/gs/phys_rigid_explos.cpp
- Suggested include: `#include "phys_rigid_explos.h"`

- `rgdRIGID_START::CreatePiece`
  - referenced in `src/ai_skel_generic.cpp`
  - referenced in `src/ais_statue.cpp`
- `rgdRIGID_START::IsInclObj`
  - referenced in `src/ai_skel_generic.cpp`
- `rgdRIGID_START::StartExplos`
  - referenced in `src/ai_skel_generic.cpp`
- `rgdSHATTER_RIGID_START::StartExplos`
  - referenced in `src/pwp_opp_sfx.cpp`

## src/gs/physics.cpp
- Suggested include: `#include "physics.h"`

- `physMATH::AddEntCDTExclude`
  - referenced in `src/ai_medusa.cpp`
  - referenced in `src/ai_mino_atrium.cpp`
  - referenced in `src/ai_npc_wr.cpp`
  - referenced in `src/ai_npc_wr_fly.cpp`
- `physPHYS::AddEntCDTExclude`
  - referenced in `src/ai_amur_arrow_pjl.cpp`
  - referenced in `src/ai_cerber.cpp`
  - referenced in `src/ai_cyc_stone_pjl.cpp`
  - referenced in `src/ai_gefest.cpp`
  - referenced in `src/ai_glad_knife.cpp`
  - referenced in `src/ai_glad_mace.cpp`
  - referenced in `src/ai_medusa_pjl.cpp`
  - referenced in `src/ai_mino.cpp`
  - referenced in `src/ai_satyr_arrow_pjl.cpp`
  - referenced in `src/ai_skel_spear_pjl.cpp`
  - referenced in `src/ai_zevs_pjl.cpp`
  - referenced in `src/ais_sphinx.cpp`
  - referenced in `src/bird_egg.cpp`
  - referenced in `src/diskbl_disk.cpp`
  - referenced in `src/mino_ax.cpp`
  - referenced in `src/plw_acd.cpp`
  - referenced in `src/plw_amg.cpp`
  - referenced in `src/plw_bmb.cpp`
  - referenced in `src/plw_bsk.cpp`
  - referenced in `src/plw_crb.cpp`
  - referenced in `src/plw_mdg.cpp`
  - referenced in `src/sfx_blood.cpp`
  - referenced in `src/sfx_lava.cpp`
- `physPHYS::ProcessCDT`
  - referenced in `src/plw_bmb.cpp`
  - referenced in `src/sfx_altar.cpp`
- `physPHYS::ProcessDESTROY_ENT`
  - referenced in `src/sfx_altar.cpp`
- `physPHYS::ProcessFRAME`
  - referenced in `src/ai_amur_arrow_pjl.cpp`
  - referenced in `src/ai_cerber.cpp`
  - referenced in `src/ai_cerber_pjl.cpp`
  - referenced in `src/ai_cyc_stone_pjl.cpp`
  - referenced in `src/ai_gefest.cpp`
  - referenced in `src/ai_gefest_pjl.cpp`
  - referenced in `src/ai_glad_knife.cpp`
  - referenced in `src/ai_glad_mace.cpp`
  - referenced in `src/ai_medusa_pjl.cpp`
  - referenced in `src/ai_satyr_arrow_pjl.cpp`
  - referenced in `src/ai_skel_spear_pjl.cpp`
  - referenced in `src/ai_zevs_pjl.cpp`
  - referenced in `src/ais_sphinx.cpp`
  - referenced in `src/bird_egg.cpp`
  - referenced in `src/diskbl_disk.cpp`
  - referenced in `src/mino_ax.cpp`
  - referenced in `src/plw_acd.cpp`
  - referenced in `src/plw_amg.cpp`
  - referenced in `src/plw_bmb.cpp`
  - referenced in `src/plw_bsk.cpp`
  - referenced in `src/plw_crb.cpp`
  - referenced in `src/plw_mdg.cpp`
  - referenced in `src/sfx_altar.cpp`
  - referenced in `src/sfx_blood.cpp`
  - referenced in `src/sfx_lava.cpp`
- `physPHYS::ProcessINIT`
  - referenced in `src/ai_amur_arrow_pjl.cpp`
  - referenced in `src/ai_cerber.cpp`
  - referenced in `src/ai_cyc_stone_pjl.cpp`
  - referenced in `src/ai_gefest.cpp`
  - referenced in `src/ai_glad_knife.cpp`
  - referenced in `src/ai_glad_mace.cpp`
  - referenced in `src/ai_medusa_pjl.cpp`
  - referenced in `src/ai_satyr_arrow_pjl.cpp`
  - referenced in `src/ai_skel_spear_pjl.cpp`
  - referenced in `src/ai_zevs_pjl.cpp`
  - referenced in `src/ais_sphinx.cpp`
  - referenced in `src/bird_egg.cpp`
  - referenced in `src/diskbl_disk.cpp`
  - referenced in `src/mino_ax.cpp`
  - referenced in `src/plw_acd.cpp`
  - referenced in `src/plw_amg.cpp`
  - referenced in `src/plw_bmb.cpp`
  - referenced in `src/plw_bsk.cpp`
  - referenced in `src/plw_crb.cpp`
  - referenced in `src/plw_mdg.cpp`
  - referenced in `src/sfx_altar.cpp`
  - referenced in `src/sfx_blood.cpp`
  - referenced in `src/sfx_lava.cpp`
- `physPHYS::ProcessMP_NOTIFY`
  - referenced in `src/ai_medusa_pjl.cpp`
  - referenced in `src/ai_zevs_pjl.cpp`
  - referenced in `src/sfx_altar.cpp`
  - referenced in `src/sfx_blood.cpp`
- `physPHYS::ProcessMsg`
  - referenced in `src/ai_glad_knife.cpp`
  - referenced in `src/plw_bmb.cpp`
- `physPHYS::ProcessTERM`
  - referenced in `src/ai_cerber.cpp`
  - referenced in `src/ai_glad_knife.cpp`
  - referenced in `src/ai_medusa_pjl.cpp`
  - referenced in `src/ai_zevs_pjl.cpp`
  - referenced in `src/bird_egg.cpp`
  - referenced in `src/diskbl_disk.cpp`
  - referenced in `src/mino_ax.cpp`
  - referenced in `src/plw_acd.cpp`
  - referenced in `src/plw_bmb.cpp`
  - referenced in `src/plw_bsk.cpp`
  - referenced in `src/plw_crb.cpp`
  - referenced in `src/plw_mdg.cpp`
  - referenced in `src/sfx_altar.cpp`
  - referenced in `src/sfx_lava.cpp`
- `physPHYS::physPHYS`
  - referenced in `src/ai_amur_arrow_pjl.cpp`
  - referenced in `src/ai_cerber.cpp`
  - referenced in `src/ai_cyc_stone_pjl.cpp`
  - referenced in `src/ai_gefest.cpp`
  - referenced in `src/ai_glad_knife.cpp`
  - referenced in `src/ai_glad_mace.cpp`
  - referenced in `src/ai_medusa_pjl.cpp`
  - referenced in `src/ai_satyr_arrow_pjl.cpp`
  - referenced in `src/ai_skel_spear_pjl.cpp`
  - referenced in `src/ai_sketavr.cpp`
  - referenced in `src/ai_zevs_pjl.cpp`
  - referenced in `src/ais_sphinx.cpp`
  - referenced in `src/bird_egg.cpp`
  - referenced in `src/diskbl_disk.cpp`
  - referenced in `src/mino_ax.cpp`
  - referenced in `src/plw_acd.cpp`
  - referenced in `src/plw_amg.cpp`
  - referenced in `src/plw_bmb.cpp`
  - referenced in `src/plw_bsk.cpp`
  - referenced in `src/plw_crb.cpp`
  - referenced in `src/plw_mdg.cpp`
  - referenced in `src/sfx_altar.cpp`
  - referenced in `src/sfx_blood.cpp`
  - referenced in `src/sfx_lava.cpp`

## src/gs/proj_shd.cpp
- Suggested include: `#include "proj_shd.h"`

- `pshSHADOW_SYSTEM::AddExcludeList`
  - referenced in `src/player.cpp`
  - referenced in `src/player_mp.cpp`
- `pshSHADOW_SYSTEM::MergeShadowSources`
  - referenced in `src/player_mp.cpp`
- `pshSHADOW_SYSTEM::pshSHADOW_SYSTEM`
  - referenced in `src/wr_main.cpp`

## src/gs/shatter.cpp
- Suggested include: `#include "shatter.h"`

- `shtSHATTER::SelectPlane`
  - referenced in `src/sob_niche.cpp`
- `shtSHATTER::Start`
  - referenced in `src/sob_niche.cpp`

## src/gs/ui_area.cpp
- Suggested include: `#include "ui_area.h"`

- `uiAREA::AppendTextW`
  - referenced in `src/wr_ui_hud.cpp`
- `uiAREA::Init`
  - referenced in `src/wr_ui.cpp`
  - referenced in `src/wr_ui_hud.cpp`
  - referenced in `src/wr_ui_join.cpp`
  - referenced in `src/wr_ui_load.cpp`
  - referenced in `src/wr_ui_sinfo.cpp`
- `uiAREA::SetFont`
  - referenced in `src/wr_ui_hud.cpp`
- `uiAREA::SetTextId`
  - referenced in `src/wr_ui_credits.cpp`
  - referenced in `src/wr_ui_wnd.cpp`
- `uiAREA::SetTextW`
  - referenced in `src/wr_ui_credits.cpp`
  - referenced in `src/wr_ui_hud.cpp`
  - referenced in `src/wr_ui_join.cpp`
  - referenced in `src/wr_ui_load.cpp`
  - referenced in `src/wr_ui_mult.cpp`
  - referenced in `src/wr_ui_sinfo.cpp`
  - referenced in `src/wr_ui_txtscrl.cpp`
  - referenced in `src/wr_ui_wnd.cpp`
- `uiAREA::StartAppearing`
  - referenced in `src/wr_ui_comics.cpp`
  - referenced in `src/wr_ui_hud.cpp`
  - referenced in `src/wr_ui_txtscrl.cpp`

## src/gs/ui_btn.cpp
- Suggested include: `#include "ui_btn.h"`

- `uiBUTTON::Init`
  - referenced in `src/wr_ui.cpp`
- `uiBUTTON::OnMouseFocus`
  - referenced in `src/wr_ui.cpp`
- `uiBUTTON::ProcessCommand`
  - referenced in `src/wr_ui.cpp`
  - referenced in `src/wr_ui_ig.cpp`

## src/gs/ui_font.cpp
- Suggested include: `#include "ui_font.h"`

- `uiFONT::GetStringSizeW`
  - referenced in `src/wr_ui_join.cpp`
  - referenced in `src/wr_ui_load.cpp`

## src/gs/ui_main.cpp
- Suggested include: `#include "ui_main.h"`

- `uiBOX::AddVertex`
  - referenced in `src/wr_ui_txtscrl.cpp`
- `uiBOX::IsBelongBox`
  - referenced in `src/wr_ui_txtscrl.cpp`
- `uiCURSOR::MoveTo`
  - referenced in `src/wr_ui.cpp`
- `uiCURSOR::Show`
  - referenced in `src/wr_ui_comics.cpp`
  - referenced in `src/wr_ui_ctrl.cpp`
  - referenced in `src/wr_ui_wnd.cpp`
- `uiELEMENT::FindChildElement`
  - referenced in `src/wr_ui.cpp`
  - referenced in `src/wr_ui_audio.cpp`
  - referenced in `src/wr_ui_comics.cpp`
  - referenced in `src/wr_ui_credits.cpp`
  - referenced in `src/wr_ui_ctrl.cpp`
  - referenced in `src/wr_ui_frm.cpp`
  - referenced in `src/wr_ui_gameopt.cpp`
  - referenced in `src/wr_ui_hud.cpp`
  - referenced in `src/wr_ui_ig.cpp`
  - referenced in `src/wr_ui_join.cpp`
  - referenced in `src/wr_ui_load.cpp`
  - referenced in `src/wr_ui_mult.cpp`
  - referenced in `src/wr_ui_server.cpp`
  - referenced in `src/wr_ui_sinfo.cpp`
  - referenced in `src/wr_ui_wnd.cpp`
- `uiELEMENT::FindTabstop`
  - referenced in `src/wr_ui_load.cpp`
- `uiELEMENT::GetPathToChild`
  - referenced in `src/wr_ui_frm.cpp`
- `uiELEMENT::Init`
  - referenced in `src/wr_ui_frm.cpp`
  - referenced in `src/wr_ui_wnd.cpp`
- `uiELEMENT::OnMouseMove`
  - referenced in `src/wr_ui_txtscrl.cpp`
  - referenced in `src/wr_ui_wnd.cpp`
- `uiELEMENT::ProcessAction`
  - referenced in `src/wr_ui_credits.cpp`
- `uiELEMENT::StartAppearing`
  - referenced in `src/wr_ui_audio.cpp`
  - referenced in `src/wr_ui_comics.cpp`
  - referenced in `src/wr_ui_credits.cpp`
  - referenced in `src/wr_ui_ctrl.cpp`
  - referenced in `src/wr_ui_frm.cpp`
  - referenced in `src/wr_ui_gameopt.cpp`
  - referenced in `src/wr_ui_join.cpp`
  - referenced in `src/wr_ui_load.cpp`
  - referenced in `src/wr_ui_mult.cpp`
  - referenced in `src/wr_ui_server.cpp`
  - referenced in `src/wr_ui_sinfo.cpp`
  - referenced in `src/wr_ui_video.cpp`
  - referenced in `src/wr_ui_wnd.cpp`
- `uiELEMENT::uiELEMENT`
  - referenced in `src/wr_ui.cpp`
  - referenced in `src/wr_ui_comics.cpp`
  - referenced in `src/wr_ui_credits.cpp`
  - referenced in `src/wr_ui_hud.cpp`
  - referenced in `src/wr_ui_mult.cpp`
  - referenced in `src/wr_ui_wnd.cpp`
- `uiFRAME::OnAppeared`
  - referenced in `src/wr_ui_frm.cpp`
- `uiFRAME_GROUP::ShowFrame`
  - referenced in `src/wr_ui.cpp`
- `uiUI_SYSTEM::Activate`
  - referenced in `src/wr_ui.cpp`
- `uiUI_SYSTEM::Deactivate`
  - referenced in `src/wr_ui.cpp`
- `uiUI_SYSTEM::GetCursorBBox`
  - referenced in `src/wr_ui_txtscrl.cpp`
- `uiUI_SYSTEM::GetCursorPos`
  - referenced in `src/wr_ui.cpp`
  - referenced in `src/wr_ui_frm.cpp`
- `uiUI_SYSTEM::Init`
  - referenced in `src/wr_ui.cpp`
- `uiUI_SYSTEM::ProcessMouseMove`
  - referenced in `src/wr_ui_frm.cpp`
- `uiUI_SYSTEM::RegisterDefaultElements`
  - referenced in `src/wr_ui.cpp`
- `uiUI_SYSTEM::SetKbdFocus`
  - referenced in `src/wr_ui.cpp`
  - referenced in `src/wr_ui_frm.cpp`
  - referenced in `src/wr_ui_join.cpp`
  - referenced in `src/wr_ui_load.cpp`
  - referenced in `src/wr_ui_textinp.cpp`
  - referenced in `src/wr_ui_txtscrl.cpp`
- `uiUI_SYSTEM::SetMouseFocus`
  - referenced in `src/wr_ui_txtscrl.cpp`
- `uiUI_SYSTEM::Term`
  - referenced in `src/wr_ui.cpp`
- `uiUI_SYSTEM::Update`
  - referenced in `src/wr_ui.cpp`
- `uiUI_SYSTEM::uiUI_SYSTEM`
  - referenced in `src/wr_ui.cpp`

## src/gs/ui_rnd.cpp
- Suggested include: `#include "ui_rnd.h"`

- `uiRENDER_ELEM::CalcBBox`
  - referenced in `src/wr_ui_txtscrl.cpp`
  - referenced in `src/wr_ui_wnd.cpp`
- `uiRENDER_ELEM::MoveTo`
  - referenced in `src/wr_ui_txtscrl.cpp`
  - referenced in `src/wr_ui_wnd.cpp`
- `uiRENDER_ELEM::SetAlpha`
  - referenced in `src/wr_ui_comics.cpp`
  - referenced in `src/wr_ui_hud.cpp`
- `uiRENDER_ELEM::SetAlphaText`
  - referenced in `src/wr_ui_comics.cpp`
  - referenced in `src/wr_ui_hud.cpp`
- `uiRENDER_ELEM::SetTextId`
  - referenced in `src/wr_ui_ctrl.cpp`
  - referenced in `src/wr_ui_hud.cpp`
  - referenced in `src/wr_ui_join.cpp`
  - referenced in `src/wr_ui_server.cpp`
  - referenced in `src/wr_ui_video.cpp`
- `uiRENDER_ELEM::SetTextW`
  - referenced in `src/wr_ui_comics.cpp`
  - referenced in `src/wr_ui_hud.cpp`
  - referenced in `src/wr_ui_join.cpp`
  - referenced in `src/wr_ui_sinfo.cpp`
- `uiRENDER_ELEM::uiRENDER_ELEM`
  - referenced in `src/wr_ui.cpp`
  - referenced in `src/wr_ui_comics.cpp`
  - referenced in `src/wr_ui_hud.cpp`
  - referenced in `src/wr_ui_wnd.cpp`
- `uiRENDER_ELEM_TEXT::GetString`
  - referenced in `src/wr_ui_credits.cpp`
  - referenced in `src/wr_ui_hud.cpp`
- `uiRENDER_INFO::CalcBBox`
  - referenced in `src/wr_ui_join.cpp`
- `uiRENDER_INFO::FindElement`
  - referenced in `src/wr_ui_comics.cpp`
  - referenced in `src/wr_ui_ctrl.cpp`
  - referenced in `src/wr_ui_server.cpp`
  - referenced in `src/wr_ui_sinfo.cpp`
  - referenced in `src/wr_ui_txtscrl.cpp`
  - referenced in `src/wr_ui_wnd.cpp`
- `uiRENDER_INFO::SetAlpha`
  - referenced in `src/wr_ui.cpp`
  - referenced in `src/wr_ui_hud.cpp`
  - referenced in `src/wr_ui_join.cpp`
  - referenced in `src/wr_ui_mult.cpp`
  - referenced in `src/wr_ui_wnd.cpp`
- `uiRENDER_INFO::SetAlphaText`
  - referenced in `src/wr_ui.cpp`
  - referenced in `src/wr_ui_join.cpp`
  - referenced in `src/wr_ui_mult.cpp`
- `uiRENDER_INFO::SetColor`
  - referenced in `src/wr_ui_hud.cpp`
  - referenced in `src/wr_ui_join.cpp`
  - referenced in `src/wr_ui_load.cpp`
  - referenced in `src/wr_ui_textinp.cpp`
  - referenced in `src/wr_ui_txtscrl.cpp`
  - referenced in `src/wr_ui_wnd.cpp`
- `uiRENDER_INFO::SetColorText`
  - referenced in `src/wr_ui_hud.cpp`
  - referenced in `src/wr_ui_join.cpp`
  - referenced in `src/wr_ui_load.cpp`
  - referenced in `src/wr_ui_textinp.cpp`
  - referenced in `src/wr_ui_txtscrl.cpp`
  - referenced in `src/wr_ui_wnd.cpp`
- `uiRENDER_INFO::SetElementIdx`
  - referenced in `src/wr_ui_hud.cpp`
- `uiRENDER_INFO::SetTex`
  - referenced in `src/wr_ui_gameopt.cpp`
  - referenced in `src/wr_ui_load.cpp`
  - referenced in `src/wr_ui_mult.cpp`

## src/gs/ui_scroll.cpp
- Suggested include: `#include "ui_scroll.h"`

- `uiSCROLL::Init`
  - referenced in `src/wr_ui_txtscrl.cpp`
  - referenced in `src/wr_ui_wnd.cpp`

## src/gs/ui_textinp.cpp
- Suggested include: `#include "ui_textinp.h"`

- `uiTEXT_INPUT::GetEditText`
  - referenced in `src/wr_ui_load.cpp`
  - referenced in `src/wr_ui_mult.cpp`
  - referenced in `src/wr_ui_server.cpp`
- `uiTEXT_INPUT::Init`
  - referenced in `src/wr_ui_textinp.cpp`
- `uiTEXT_INPUT::OnKeyboard`
  - referenced in `src/wr_ui_ctrl.cpp`
- `uiTEXT_INPUT::ProcessUpdate`
  - referenced in `src/wr_ui_ctrl.cpp`
- `uiTEXT_INPUT::SetEditText`
  - referenced in `src/wr_ui_ctrl.cpp`
  - referenced in `src/wr_ui_load.cpp`
  - referenced in `src/wr_ui_mult.cpp`
  - referenced in `src/wr_ui_server.cpp`
- `uiTEXT_INPUT::uiTEXT_INPUT`
  - referenced in `src/wr_ui.cpp`

## src/gs_shared/ai_area.cpp
- Suggested include: `#include "ai_area.h"`

- `aiAREA::GetRandomPos`
  - referenced in `src/ai_bird.cpp`
  - referenced in `src/ai_satyr.cpp`

## src/gs_shared/ai_att_planner.cpp
- Suggested include: `#include "ai_att_planner.h"`

- `aiPLANNER::GetBanCrossDomain`
  - referenced in `src/ai_npc_wr.cpp`
- `aiPLANNER::GetBossHealth`
  - referenced in `src/wr_ui_hud.cpp`
- `aiPLANNER::GetEnemyMeetPoint`
  - referenced in `src/ai_amur_arrow_pjl.cpp`
  - referenced in `src/ai_cent.cpp`
  - referenced in `src/ai_cerber_pjl.cpp`
  - referenced in `src/ai_cyc_stone_pjl.cpp`
  - referenced in `src/ai_gefest_pjl.cpp`
  - referenced in `src/ai_glad_knife.cpp`
  - referenced in `src/ai_glad_mace.cpp`
  - referenced in `src/ai_medusa.cpp`
  - referenced in `src/ai_mino.cpp`
  - referenced in `src/ai_satyr_arrow_pjl.cpp`
  - referenced in `src/ai_skel_spear.cpp`
  - referenced in `src/ai_skel_spear_pjl.cpp`
  - referenced in `src/ai_skel_sword.cpp`
  - referenced in `src/ai_tiger.cpp`
  - referenced in `src/ais_sphinx.cpp`
- `aiPLANNER::GetFleeGoalPoint`
  - referenced in `src/ai_cent.cpp`
  - referenced in `src/ai_npc_wr.cpp`
- `aiPLANNER::GetNavAreaCenter`
  - referenced in `src/ai_cyclop.cpp`
- `aiPLANNER::UsePredictiveAiming`
  - referenced in `src/wr_game_opt.cpp`

## src/gs_shared/ai_ctrl.cpp
- Suggested include: `#include "ai_ctrl.h"`

- `aiINIT_DATA::aiINIT_DATA`
  - referenced in `src/ai_mino.cpp`
- `aiNPC::GetNOpp`
  - referenced in `src/ai_mino.cpp`
  - referenced in `src/sfx_blood.cpp`
  - referenced in `src/wr_ui_hud.cpp`
- `aiNPC::GetNext`
  - referenced in `src/ai_medusa.cpp`
- `aiNPC::ProcessDESTROY_ENT`
  - referenced in `src/ai_mino.cpp`
  - referenced in `src/ais_perseus.cpp`
- `aiNPC::ProcessFRAME`
  - referenced in `src/ai_npc_wr.cpp`
- `aiNPC::ProcessINIT`
  - referenced in `src/ai_npc_wr.cpp`
- `aiNPC::ProcessINIT_LEVEL`
  - referenced in `src/ai_npc_wr.cpp`
- `aiNPC::ProcessMsg`
  - referenced in `src/ai_npc_wr.cpp`
- `aiNPC::ProcessTERM`
  - referenced in `src/ai_npc_wr.cpp`
- `aiNPC::UpdateTimers`
  - referenced in `src/ai_npc_wr.cpp`
- `aiNPC::aiNPC`
  - referenced in `src/ai_amur.cpp`
  - referenced in `src/ai_bird.cpp`
  - referenced in `src/ai_cent.cpp`
  - referenced in `src/ai_cerber.cpp`
  - referenced in `src/ai_croc.cpp`
  - referenced in `src/ai_cyclop.cpp`
  - referenced in `src/ai_gefest.cpp`
  - referenced in `src/ai_glad_knife.cpp`
  - referenced in `src/ai_glad_mace.cpp`
  - referenced in `src/ai_medusa.cpp`
  - referenced in `src/ai_mino.cpp`
  - referenced in `src/ai_rat.cpp`
  - referenced in `src/ai_satyr.cpp`
  - referenced in `src/ai_skel_spear.cpp`
  - referenced in `src/ai_skel_sword.cpp`
  - referenced in `src/ai_sketavr.cpp`
  - referenced in `src/ai_tiger.cpp`
  - referenced in `src/ai_zevs.cpp`
  - referenced in `src/ais_statue.cpp`
- `animINST::Scale`
  - referenced in `src/ai_cyclop.cpp`
  - referenced in `src/ai_gefest.cpp`
  - referenced in `src/ai_gefest_pjl.cpp`
  - referenced in `src/ai_medusa_pjl.cpp`
  - referenced in `src/ai_zevs_pjl.cpp`
  - referenced in `src/ais_sphinx.cpp`
  - referenced in `src/mino_sfx.cpp`
  - referenced in `src/player.cpp`
  - referenced in `src/player_mp.cpp`
  - referenced in `src/plw_acd.cpp`
  - referenced in `src/plw_amg.cpp`
  - referenced in `src/plw_bmb.cpp`
  - referenced in `src/plw_bul_wpn.cpp`
  - referenced in `src/plw_crb.cpp`
  - referenced in `src/plw_mng.cpp`
  - referenced in `src/pwp_water_sfx.cpp`
  - referenced in `src/sfx_altar.cpp`
  - referenced in `src/sfx_atlas.cpp`
  - referenced in `src/sfx_barrel.cpp`
  - referenced in `src/sfx_bird.cpp`
  - referenced in `src/sfx_cerber.cpp`
  - referenced in `src/sfx_cyclop.cpp`
  - referenced in `src/sfx_discus.cpp`
  - referenced in `src/sfx_flame.cpp`
  - referenced in `src/sfx_gefest.cpp`
  - referenced in `src/sfx_glad.cpp`
  - referenced in `src/sfx_item.cpp`
  - referenced in `src/sfx_lava.cpp`
  - referenced in `src/sfx_medusa.cpp`
  - referenced in `src/sfx_niche.cpp`
  - referenced in `src/sfx_rat.cpp`
  - referenced in `src/sfx_satir.cpp`
  - referenced in `src/sfx_skeleton.cpp`
  - referenced in `src/sfx_sphinx.cpp`
  - referenced in `src/sfx_trading_altar.cpp`
  - referenced in `src/sfx_treasure.cpp`
  - referenced in `src/sfx_zeus.cpp`

## src/gs_shared/ai_ctrl_LOD.cpp
- Suggested include: `#include "ai_ctrl_LOD.h"`

- `aiNPC::Activate`
  - referenced in `src/ai_cyclop.cpp`
  - referenced in `src/ai_gefest.cpp`
  - referenced in `src/ai_medusa.cpp`
  - referenced in `src/ai_mino.cpp`
  - referenced in `src/ai_skel_generic.cpp`
  - referenced in `src/ai_zevs.cpp`
  - referenced in `src/ais_statue.cpp`
- `aiNPC::Deactivate`
  - referenced in `src/ai_rat.cpp`
- `aiNPC::IsReadyActivate`
  - referenced in `src/ai_npc_wr.cpp`
- `aiNPC::PostThink`
  - referenced in `src/ai_npc_wr.cpp`
- `aiNPC::Think`
  - referenced in `src/ai_npc_wr.cpp`
- `aiNPC::UpdateOnServerAndClient`
  - referenced in `src/ais_statue.cpp`
- `aiNPC::UpdateOnServerOnly`
  - referenced in `src/ais_statue.cpp`

## src/gs_shared/ai_ctrl_MP.cpp
- Suggested include: `#include "ai_ctrl_MP.h"`

- `aiNPC::ProcessMP_GET_SYNC_DATA`
  - referenced in `src/ai_zevs.cpp`
- `aiNPC::ProcessMP_NOTIFY`
  - referenced in `src/ai_npc_wr.cpp`
- `aiNPC::ProcessMP_READ_SYNC_DATA`
  - referenced in `src/ai_zevs.cpp`
- `aiNPC::ProcessMP_WRITE_SYNC_DATA`
  - referenced in `src/ai_zevs.cpp`

## src/gs_shared/ai_ctrl_anim.cpp
- Suggested include: `#include "ai_ctrl_anim.h"`

- `aiNPC::GetPosRooted`
  - referenced in `src/ai_cyclop.cpp`
  - referenced in `src/ai_mino.cpp`
  - referenced in `src/ai_npc_wr.cpp`
  - referenced in `src/ai_rat.cpp`
  - referenced in `src/ai_satyr.cpp`
  - referenced in `src/ai_skel_generic.cpp`
  - referenced in `src/ai_skel_spear.cpp`
  - referenced in `src/ai_skel_sword.cpp`
  - referenced in `src/ai_sketavr.cpp`
  - referenced in `src/ai_tiger.cpp`
  - referenced in `src/ais_sphinx.cpp`

## src/gs_shared/ai_ctrl_die.cpp
- Suggested include: `#include "ai_ctrl_die.h"`

- `aiNPC::ProcessCDT_FIREABLE`
  - referenced in `src/ai_npc_wr.cpp`
- `aiNPC::StartDeath`
  - referenced in `src/ai_npc_wr.cpp`
- `aiNPC::UpdateDead`
  - referenced in `src/ai_bird.cpp`

## src/gs_shared/ai_ctrl_geo.cpp
- Suggested include: `#include "ai_ctrl_geo.h"`

- `aiCDT_REFINE::Init`
  - referenced in `src/ai_cyclop.cpp`
- `aiCDT_REFINE::IsInclObj`
  - referenced in `src/ai_cyclop.cpp`
- `aiNPC::IsPivotUsable`
  - referenced in `src/ai_cyclop.cpp`
  - referenced in `src/ai_gefest.cpp`
- `aiNPC::SettleSurface`
  - referenced in `src/ai_mino.cpp`

## src/gs_shared/ai_ctrl_nav_phys.cpp
- Suggested include: `#include "ai_ctrl_nav_phys.h"`

- `aiNPC::ApplySpeed`
  - referenced in `src/ai_cent.cpp`
- `aiNPC::ClampGoalFrame`
  - referenced in `src/ai_medusa.cpp`
- `aiNPC::GetClampingSpeeds`
  - referenced in `src/ai_bird.cpp`
  - referenced in `src/ai_cyclop.cpp`
- `aiNPC::GetFloorPlaceRefiner`
  - referenced in `src/ai_cyclop.cpp`
- `aiNPC::MoveToGoal`
  - referenced in `src/ai_npc_wr.cpp`

## src/gs_shared/ai_ctrl_nav_plan.cpp
- Suggested include: `#include "ai_ctrl_nav_plan.h"`

- `aiNPC::SelectGoal`
  - referenced in `src/ai_amur.cpp`
  - referenced in `src/ai_cent.cpp`
  - referenced in `src/ai_cerber.cpp`
  - referenced in `src/ai_croc.cpp`
  - referenced in `src/ai_cyclop.cpp`
  - referenced in `src/ai_gefest.cpp`
  - referenced in `src/ai_medusa.cpp`
  - referenced in `src/ai_mino.cpp`
  - referenced in `src/ai_satyr.cpp`
  - referenced in `src/ai_skel_generic.cpp`
  - referenced in `src/ai_tiger.cpp`
  - referenced in `src/ais_statue.cpp`

## src/gs_shared/ai_ctrl_script.cpp
- Suggested include: `#include "ai_ctrl_script.h"`

- `aiNPC::GetBool`
  - referenced in `src/ai_mino.cpp`
  - referenced in `src/ai_npc_wr.cpp`
  - referenced in `src/ai_tiger.cpp`
- `aiNPC::GetInt`
  - referenced in `src/ai_croc.cpp`
  - referenced in `src/ai_medusa.cpp`
  - referenced in `src/ai_mino.cpp`
  - referenced in `src/ai_satyr.cpp`
- `aiNPC::GetStr`
  - referenced in `src/ai_medusa.cpp`
  - referenced in `src/ai_npc_wr.cpp`

## src/gs_shared/ai_enemy.cpp
- Suggested include: `#include "ai_enemy.h"`

- `aiENEMY::ApplySpeed`
  - referenced in `src/ai_cent.cpp`
  - referenced in `src/ai_skel_sword.cpp`
  - referenced in `src/ai_tiger.cpp`
- `aiENEMY::GetDir`
  - referenced in `src/ai_bird.cpp`
  - referenced in `src/ai_zevs.cpp`
  - referenced in `src/sfx_perseus.cpp`
- `aiENEMY::GetPos`
  - referenced in `src/ai_amur.cpp`
  - referenced in `src/ai_amur_arrow_pjl.cpp`
  - referenced in `src/ai_bird.cpp`
  - referenced in `src/ai_cent.cpp`
  - referenced in `src/ai_cerber_pjl.cpp`
  - referenced in `src/ai_croc.cpp`
  - referenced in `src/ai_cyc_stone_pjl.cpp`
  - referenced in `src/ai_gefest_pjl.cpp`
  - referenced in `src/ai_glad_knife.cpp`
  - referenced in `src/ai_glad_mace.cpp`
  - referenced in `src/ai_medusa.cpp`
  - referenced in `src/ai_mino.cpp`
  - referenced in `src/ai_npc_wr.cpp`
  - referenced in `src/ai_satyr.cpp`
  - referenced in `src/ai_satyr_arrow_pjl.cpp`
  - referenced in `src/ai_skel_generic.cpp`
  - referenced in `src/ai_skel_spear.cpp`
  - referenced in `src/ai_skel_spear_pjl.cpp`
  - referenced in `src/ai_skel_sword.cpp`
  - referenced in `src/ai_tiger.cpp`
  - referenced in `src/ai_zevs.cpp`
  - referenced in `src/ais_atlas.cpp`
  - referenced in `src/ais_diskobolus.cpp`
  - referenced in `src/ais_sphinx.cpp`
  - referenced in `src/ais_statue.cpp`
  - referenced in `src/sfx_perseus.cpp`
- `aiENEMY::GetSpeed`
  - referenced in `src/ai_cerber.cpp`
  - referenced in `src/ai_tiger.cpp`
- `aiENEMY::GetSpeedScalar`
  - referenced in `src/ai_cerber.cpp`
  - referenced in `src/ai_tiger.cpp`
- `aiENEMY::IsActive`
  - referenced in `src/ai_bird.cpp`
- `aiENEMY::IsDead`
  - referenced in `src/ai_amur.cpp`
  - referenced in `src/ai_bird.cpp`
  - referenced in `src/ai_cent.cpp`
  - referenced in `src/ai_cerber.cpp`
  - referenced in `src/ai_croc.cpp`
  - referenced in `src/ai_cyclop.cpp`
  - referenced in `src/ai_gefest.cpp`
  - referenced in `src/ai_glad_knife.cpp`
  - referenced in `src/ai_glad_mace.cpp`
  - referenced in `src/ai_medusa.cpp`
  - referenced in `src/ai_mino.cpp`
  - referenced in `src/ai_rat.cpp`
  - referenced in `src/ai_satyr.cpp`
  - referenced in `src/ai_skel_spear.cpp`
  - referenced in `src/ai_skel_sword.cpp`
  - referenced in `src/ai_tiger.cpp`
  - referenced in `src/ais_atlas.cpp`
  - referenced in `src/ais_diskobolus.cpp`
  - referenced in `src/ais_statue.cpp`
  - referenced in `src/sfx_perseus.cpp`
- `aiENEMY::ProcessCDT_FIREABLE`
  - referenced in `src/ai_cent.cpp`
- `aiNPC::DecideEnemy`
  - referenced in `src/sfx_perseus.cpp`

## src/gs_shared/ai_spawn.cpp
- Suggested include: `#include "ai_spawn.h"`

- `dynDYNAMIC::ProcessMP_WRITE_SYNC_DATA`
  - referenced in `src/sfx_altar.cpp`

## src/gs_shared/aia_arena.cpp
- Suggested include: `#include "aia_arena.h"`

- `aiaDOMAIN_LIST_ARENA::GetNPCStageNmb`
  - referenced in `src/ai_mino_atrium.cpp`
- `aiaDOMAIN_LIST_ARENA::GetPlrStageNmb`
  - referenced in `src/ai_mino_atrium.cpp`

## src/gs_shared/button.cpp
- Suggested include: `#include "button.h"`

- `bttnBUTTON::ProcessMsg`
  - referenced in `src/sob_trading_altar.cpp`
- `bttnBUTTON::Toggle`
  - referenced in `src/sob_trading_altar.cpp`

## src/gs_shared/damage.cpp
- Suggested include: `#include "damage.h"`

- `dmgDISPATCHER::Dispatch`
  - referenced in `src/sfx_destroy.cpp`
- `dmgGENERAL::dmgGENERAL`
  - referenced in `src/ai_cent.cpp`
  - referenced in `src/ai_cerber.cpp`
  - referenced in `src/ai_croc.cpp`
  - referenced in `src/ai_cyclop.cpp`
  - referenced in `src/ai_glad_knife.cpp`
  - referenced in `src/ai_glad_mace.cpp`
  - referenced in `src/ai_mino.cpp`
  - referenced in `src/ai_skel_spear.cpp`
  - referenced in `src/ai_skel_sword.cpp`
  - referenced in `src/ai_tiger.cpp`
  - referenced in `src/sob_blade.cpp`
  - referenced in `src/sob_spikes.cpp`
- `dmgWEAPON::dmgWEAPON`
  - referenced in `src/plw_bul_wpn.cpp`
  - referenced in `src/plw_svl.cpp`
  - referenced in `src/pwp_opp_sfx.cpp`

## src/gs_shared/dyn_destroy.cpp
- Suggested include: `#include "dyn_destroy.h"`

- `dstrDESTROY::ProcessCDT_FIREABLE`
  - referenced in `src/sfx_destroy.cpp`
- `dstrDESTROY::ProcessINIT`
  - referenced in `src/sfx_destroy.cpp`
- `dstrDESTROY::ProcessINIT_LEVEL`
  - referenced in `src/sfx_destroy.cpp`
- `dstrDESTROY::ProcessMsg`
  - referenced in `src/sfx_destroy.cpp`
- `dstrDESTROY::StartExplos`
  - referenced in `src/sfx_destroy.cpp`

## src/gs_shared/flare.cpp
- Suggested include: `#include "flare.h"`

- `flrFLARE::ConfigureFlare`
  - referenced in `src/sfx_flare.cpp`
- `flrFLARE::EnableAnim`
  - referenced in `src/sfx_flare.cpp`
- `flrFLARE::EnableFlare`
  - referenced in `src/sfx_flare.cpp`
- `flrFLARE::EnableShine`
  - referenced in `src/sfx_flare.cpp`
- `flrFLARE::SetPos`
  - referenced in `src/day_night.cpp`
- `flrFLARE::flrFLARE`
  - referenced in `src/sfx_flare.cpp`

## src/gs_shared/item.cpp
- Suggested include: `#include "item.h"`

- `itemITEM::Create`
  - referenced in `src/wr_item.cpp`
- `itemITEM::CreateSfx`
  - referenced in `src/wr_item.cpp`
- `itemITEM::DestroySfx`
  - referenced in `src/wr_item.cpp`
- `itemITEM::IsCanPick`
  - referenced in `src/wr_item.cpp`
- `itemITEM::Pick`
  - referenced in `src/wr_item.cpp`
- `itemITEM::ProcessFRAME`
  - referenced in `src/wr_item.cpp`
- `itemITEM::ProcessINIT`
  - referenced in `src/wr_item.cpp`
- `itemITEM::ProcessINIT_LEVEL`
  - referenced in `src/wr_item.cpp`
- `itemITEM::ProcessMP_NOTIFY`
  - referenced in `src/wr_item.cpp`
- `itemITEM::ProcessMsg`
  - referenced in `src/wr_item.cpp`
- `itemITEM::ShowSfx`
  - referenced in `src/wr_item.cpp`
- `itemITEM::ShowUnhideSfx`
  - referenced in `src/wr_item.cpp`

## src/gs_shared/plgs_action.cpp
- Suggested include: `#include "plgs_action.h"`

- `entENTITY::GetDistToClosestPlayer`
  - referenced in `src/ai_cyc_stone_pjl.cpp`
  - referenced in `src/ai_gefest_pjl.cpp`
  - referenced in `src/ai_glad_knife.cpp`
  - referenced in `src/ai_glad_mace.cpp`
  - referenced in `src/ai_medusa_pjl.cpp`
  - referenced in `src/ai_satyr_arrow_pjl.cpp`
  - referenced in `src/ai_skel_spear_pjl.cpp`
  - referenced in `src/ai_zevs_pjl.cpp`
  - referenced in `src/atlas_ball.cpp`
  - referenced in `src/diskbl_disk.cpp`
  - referenced in `src/mino_ax.cpp`
- `plgsACTION::ProcessFRAME`
  - referenced in `src/player_comm.cpp`
- `plgsACTION::ProcessINIT_LEVEL`
  - referenced in `src/player_comm.cpp`
- `plgsACTION::ProcessMP_GET_SYNC_DATA`
  - referenced in `src/player_comm.cpp`
- `plgsACTION::ProcessMP_NOTIFY`
  - referenced in `src/player_comm.cpp`
- `plgsACTION::ProcessMP_READ_SYNC_DATA`
  - referenced in `src/player_comm.cpp`
- `plgsACTION::ProcessMP_WRITE_SYNC_DATA`
  - referenced in `src/player_comm.cpp`
- `plgsACTION::plgsACTION`
  - referenced in `src/player.cpp`
  - referenced in `src/player_mp.cpp`

## src/gs_shared/water.cpp
- Suggested include: `#include "water.h"`

- `waterLAVA::ProcessMsg`
  - referenced in `src/sfx_lava.cpp`

## src/gs_shared/weapon.cpp
- Suggested include: `#include "weapon.h"`

- `wpnWEAPON::AddAmmo`
  - referenced in `src/player_comm.cpp`
- `wpnWEAPON::GetOrgDirTip`
  - referenced in `src/plw_acd.cpp`
  - referenced in `src/plw_bmb.cpp`
  - referenced in `src/plw_bsk.cpp`
  - referenced in `src/plw_bul_wpn.cpp`
  - referenced in `src/plw_mdg.cpp`
  - referenced in `src/plw_mng.cpp`
- `wpnWEAPON::ProcessFRAME`
  - referenced in `src/plw_bsk.cpp`
  - referenced in `src/plw_svl.cpp`
  - referenced in `src/pwp_comm.cpp`
- `wpnWEAPON::ProcessINIT`
  - referenced in `src/pwp_comm.cpp`
- `wpnWEAPON::Shoot`
  - referenced in `src/plw_acd.cpp`
  - referenced in `src/plw_amg.cpp`
  - referenced in `src/plw_bmb.cpp`
  - referenced in `src/plw_bsk.cpp`
  - referenced in `src/plw_bul_wpn.cpp`
  - referenced in `src/plw_crb.cpp`
  - referenced in `src/plw_mdg.cpp`
  - referenced in `src/plw_svl.cpp`
- `wpnWEAPON::SubtractAmmo`
  - referenced in `src/pwp_comm.cpp`
- `wpnWEAPON::wpnWEAPON`
  - referenced in `src/plw_acd.cpp`
  - referenced in `src/plw_amg.cpp`
  - referenced in `src/plw_bmb.cpp`
  - referenced in `src/plw_bsk.cpp`
  - referenced in `src/plw_bul_wpn.cpp`
  - referenced in `src/plw_crb.cpp`
  - referenced in `src/plw_mdg.cpp`
  - referenced in `src/plw_svl.cpp`

