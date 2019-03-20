class cfgpatches
{
	class jsrs_soundmod_spr_weapons
	{
		units[]={};
		weapons[]={};
		requiredaddons[]=
		{
			"jsrs_soundmod_framework",
			"jsrs_soundmod_weapons",
			"a3_air_f","a3_air_f_beta","a3_air_f_beta_heli_attack_01","a3_air_f_beta_heli_attack_02","a3_air_f_beta_heli_transport_01","a3_air_f_beta_heli_transport_02","a3_air_f_beta_parachute_01","a3_air_f_beta_parachute_02","a3_air_f_epb","a3_air_f_epb_heli_light_03","a3_air_f_epc","a3_air_f_epc_plane_cas_01","a3_air_f_epc_plane_cas_02","a3_air_f_epc_plane_fighter_03","a3_air_f_gamma","a3_air_f_gamma_plane_fighter_03","a3_air_f_heli_light_01","a3_air_f_heli_light_02","a3_animals_f","a3_animals_f_animconfig","a3_animals_f_beta","a3_animals_f_beta_chicken","a3_animals_f_beta_dog","a3_animals_f_beta_goat","a3_animals_f_beta_sheep","a3_animals_f_fishes","a3_animals_f_kestrel","a3_animals_f_rabbit","a3_animals_f_seagull","a3_animals_f_snakes","a3_animals_f_turtle","a3_anims_f","a3_anims_f_config_sdr","a3_anims_f_config_sdr_weaponswitching","a3_anims_f_data","a3_anims_f_epa","a3_anims_f_epc","a3_armor_f","a3_armor_f_beta","a3_armor_f_beta_apc_tracked_01","a3_armor_f_beta_apc_tracked_02","a3_armor_f_beta_apc_wheeled_01","a3_armor_f_beta_apc_wheeled_02","a3_armor_f_epb","a3_armor_f_epb_apc_tracked_03","a3_armor_f_epb_mbt_03","a3_armor_f_epc","a3_armor_f_epc_mbt_01","a3_armor_f_gamma","a3_armor_f_gamma_apc_wheeled_03","a3_armor_f_gamma_mbt_01","a3_armor_f_gamma_mbt_02","a3_boat_f","a3_boat_f_beta","a3_boat_f_beta_boat_armed_01","a3_boat_f_beta_boat_transport_01","a3_boat_f_beta_sdv_01","a3_boat_f_boat_armed_01","a3_boat_f_boat_transport_01","a3_boat_f_epc","a3_boat_f_epc_submarine_01","a3_boat_f_gamma","a3_boat_f_gamma_boat_civil_01","a3_boat_f_gamma_boat_civil_04","a3_boat_f_gamma_boat_transport_01","a3_cargoposes_f","a3_characters_f","a3_characters_f_beta","a3_characters_f_beta_indep","a3_characters_f_blufor","a3_characters_f_civil","a3_characters_f_common","a3_characters_f_epa","a3_characters_f_epb","a3_characters_f_epb_heads","a3_characters_f_epc","a3_characters_f_gamma","a3_characters_f_heads","a3_characters_f_opfor","a3_characters_f_proxies","a3_data_f","a3_data_f_hook","a3_data_f_loadorder","a3_data_f_particleeffects","a3_drones_f","a3_drones_f_air_f_gamma_uav_01","a3_drones_f_air_f_gamma_uav_02","a3_drones_f_characters_f_gamma","a3_drones_f_soft_f_gamma_ugv_01","a3_drones_f_weapons_f_gamma_ammoboxes","a3_drones_f_weapons_f_gamma_items","a3_dubbing_f","a3_dubbing_f_beta","a3_dubbing_f_epa","a3_dubbing_f_epb","a3_dubbing_f_epc","a3_dubbing_f_gamma","a3_dubbing_radio_f","a3_dubbing_radio_f_data_eng","a3_dubbing_radio_f_data_engb","a3_dubbing_radio_f_data_gre","a3_dubbing_radio_f_data_per","a3_dubbing_radio_f_data_vr","a3_editorpreviews_f","a3_editor_f","a3_functions_f","a3_functions_f_epa","a3_functions_f_epc","a3_languagemissions_f","a3_languagemissions_f_beta","a3_languagemissions_f_epa","a3_languagemissions_f_epb","a3_languagemissions_f_epc","a3_languagemissions_f_gamma","a3_language_f","a3_language_f_beta","a3_language_f_epa","a3_language_f_epb","a3_language_f_epc","a3_language_f_gamma","a3_map_altis","a3_map_altis_data","a3_map_altis_data_layers","a3_map_altis_scenes_f","a3_map_data","a3_map_stratis","a3_map_stratis_data","a3_map_stratis_data_layers","a3_map_stratis_scenes_f","a3_misc_f","a3_misc_f_helpers","a3_missions_f","a3_missions_f_beta","a3_missions_f_beta_data","a3_missions_f_beta_video","a3_missions_f_data","a3_missions_f_epa","a3_missions_f_epa_data","a3_missions_f_epa_video","a3_missions_f_epb","a3_missions_f_epc","a3_missions_f_gamma","a3_missions_f_gamma_data","a3_missions_f_gamma_video","a3_missions_f_video","a3_modules_f","a3_modules_f_beta","a3_modules_f_beta_data","a3_modules_f_beta_firingdrills","a3_modules_f_data","a3_modules_f_dyno","a3_modules_f_effects","a3_modules_f_epb","a3_modules_f_epb_misc","a3_modules_f_events","a3_modules_f_groupmodifiers","a3_modules_f_hc","a3_modules_f_intel","a3_modules_f_livefeed","a3_modules_f_marta","a3_modules_f_misc","a3_modules_f_multiplayer","a3_modules_f_objectmodifiers","a3_modules_f_sites","a3_modules_f_skirmish","a3_modules_f_strategicmap","a3_modules_f_supports","a3_modules_f_uav","a3_music_f","a3_music_f_epa","a3_music_f_epa_music","a3_music_f_epb","a3_music_f_epb_music","a3_music_f_epc","a3_music_f_epc_music","a3_music_f_music","a3_plants_f","a3_plants_f_bush","a3_roads_f","a3_rocks_f","a3_rocks_f_blunt","a3_rocks_f_sharp","a3_rocks_f_water","a3_signs_f","a3_signs_f_signs_ad","a3_soft_f","a3_soft_f_beta","a3_soft_f_beta_mrap_03","a3_soft_f_beta_quadbike_01","a3_soft_f_beta_truck_01","a3_soft_f_beta_truck_02","a3_soft_f_epc","a3_soft_f_epc_truck_03","a3_soft_f_gamma","a3_soft_f_gamma_hatchback_01","a3_soft_f_gamma_offroad_01","a3_soft_f_gamma_quadbike_01","a3_soft_f_gamma_suv_01","a3_soft_f_gamma_truck_01","a3_soft_f_gamma_truck_02","a3_soft_f_gamma_van_01","a3_soft_f_mrap_01","a3_soft_f_mrap_02","a3_soft_f_offroad_01","a3_soft_f_quadbike_01","a3_sounds_f","a3_sounds_f_arsenal","a3_sounds_f_characters","a3_sounds_f_environment","a3_sounds_f_epb","a3_sounds_f_epc","a3_sounds_f_sfx","a3_sounds_f_vehicles","a3_static_f","a3_static_f_aa_01","a3_static_f_at_01","a3_static_f_beta","a3_static_f_beta_mortar_01","a3_static_f_gamma","a3_static_f_gamma_mortar_01","a3_static_f_mortar_01","a3_structures_f","a3_structures_f_bridges","a3_structures_f_civ","a3_structures_f_civ_accessories","a3_structures_f_civ_ancient","a3_structures_f_civ_belltowers","a3_structures_f_civ_calvaries","a3_structures_f_civ_camping","a3_structures_f_civ_chapels","a3_structures_f_civ_constructions","a3_structures_f_civ_dead","a3_structures_f_civ_garbage","a3_structures_f_civ_graffiti","a3_structures_f_civ_infoboards","a3_structures_f_civ_kiosks","a3_structures_f_civ_lamps","a3_structures_f_civ_market","a3_structures_f_civ_offices","a3_structures_f_civ_pavements","a3_structures_f_civ_playground","a3_structures_f_civ_sportsgrounds","a3_structures_f_civ_statues","a3_structures_f_civ_tourism","a3_structures_f_data","a3_structures_f_dominants","a3_structures_f_dominants_amphitheater","a3_structures_f_dominants_castle","a3_structures_f_dominants_church","a3_structures_f_dominants_hospital","a3_structures_f_dominants_lighthouse","a3_structures_f_dominants_wip","a3_structures_f_epa","a3_structures_f_epa_civ_camping","a3_structures_f_epa_civ_constructions","a3_structures_f_epa_items_electronics","a3_structures_f_epa_items_food","a3_structures_f_epa_items_medical","a3_structures_f_epa_items_tools","a3_structures_f_epa_items_vessels","a3_structures_f_epa_mil_scrapyard","a3_structures_f_epa_walls","a3_structures_f_epb","a3_structures_f_epb_civ_accessories","a3_structures_f_epb_civ_camping","a3_structures_f_epb_civ_dead","a3_structures_f_epb_civ_garbage","a3_structures_f_epb_civ_graffiti","a3_structures_f_epb_civ_playground","a3_structures_f_epb_furniture","a3_structures_f_epb_items_documents","a3_structures_f_epb_items_luggage","a3_structures_f_epb_items_military","a3_structures_f_epb_items_vessels","a3_structures_f_epb_naval_fishing","a3_structures_f_epc","a3_structures_f_epc_civ_accessories","a3_structures_f_epc_civ_camping","a3_structures_f_epc_civ_garbage","a3_structures_f_epc_civ_infoboards","a3_structures_f_epc_civ_kiosks","a3_structures_f_epc_civ_playground","a3_structures_f_epc_civ_tourism","a3_structures_f_epc_dominants_ghosthotel","a3_structures_f_epc_dominants_stadium","a3_structures_f_epc_furniture","a3_structures_f_epc_items_documents","a3_structures_f_epc_items_electronics","a3_structures_f_epc_walls","a3_structures_f_furniture","a3_structures_f_households","a3_structures_f_households_addons","a3_structures_f_households_house_big01","a3_structures_f_households_house_big02","a3_structures_f_households_house_shop01","a3_structures_f_households_house_shop02","a3_structures_f_households_house_small01","a3_structures_f_households_house_small02","a3_structures_f_households_house_small03","a3_structures_f_households_slum","a3_structures_f_households_stone_big","a3_structures_f_households_stone_shed","a3_structures_f_households_stone_small","a3_structures_f_households_wip","a3_structures_f_ind","a3_structures_f_ind_airport","a3_structures_f_ind_cargo","a3_structures_f_ind_carservice","a3_structures_f_ind_concretemixingplant","a3_structures_f_ind_crane","a3_structures_f_ind_dieselpowerplant","a3_structures_f_ind_factory","a3_structures_f_ind_fuelstation","a3_structures_f_ind_fuelstation_small","a3_structures_f_ind_pipes","a3_structures_f_ind_powerlines","a3_structures_f_ind_reservoirtank","a3_structures_f_ind_shed","a3_structures_f_ind_solarpowerplant","a3_structures_f_ind_tank","a3_structures_f_ind_transmitter_tower","a3_structures_f_ind_wavepowerplant","a3_structures_f_ind_windmill","a3_structures_f_ind_windpowerplant","a3_structures_f_items","a3_structures_f_items_documents","a3_structures_f_items_electronics","a3_structures_f_items_food","a3_structures_f_items_gadgets","a3_structures_f_items_luggage","a3_structures_f_items_medical","a3_structures_f_items_military","a3_structures_f_items_stationery","a3_structures_f_items_tools","a3_structures_f_items_valuables","a3_structures_f_items_vessels","a3_structures_f_mil","a3_structures_f_mil_bagbunker","a3_structures_f_mil_bagfence","a3_structures_f_mil_barracks","a3_structures_f_mil_bunker","a3_structures_f_mil_cargo","a3_structures_f_mil_flags","a3_structures_f_mil_fortification","a3_structures_f_mil_helipads","a3_structures_f_mil_offices","a3_structures_f_mil_radar","a3_structures_f_mil_scrapyard","a3_structures_f_mil_shelters","a3_structures_f_mil_tenthangar","a3_structures_f_naval","a3_structures_f_naval_buoys","a3_structures_f_naval_fishing","a3_structures_f_naval_piers","a3_structures_f_naval_rowboats","a3_structures_f_research","a3_structures_f_signs_companies","a3_structures_f_system","a3_structures_f_training","a3_structures_f_training_invisibletarget","a3_structures_f_walls","a3_structures_f_wrecks","a3_uifonts_f","a3_ui_f","a3_ui_f_data","a3_weapons_f","a3_weapons_f_acc","a3_weapons_f_ammoboxes","a3_weapons_f_beta","a3_weapons_f_beta_acc","a3_weapons_f_beta_ammoboxes","a3_weapons_f_beta_longrangerifles_ebr","a3_weapons_f_beta_longrangerifles_gm6","a3_weapons_f_beta_longrangerifles_m320","a3_weapons_f_beta_rifles_khaybar","a3_weapons_f_beta_rifles_mx","a3_weapons_f_beta_rifles_trg20","a3_weapons_f_dummyweapons","a3_weapons_f_epa","a3_weapons_f_epa_acc","a3_weapons_f_epa_ammoboxes","a3_weapons_f_epb","a3_weapons_f_epb_acc","a3_weapons_f_epb_ammoboxes","a3_weapons_f_epb_longrangerifles_gm6","a3_weapons_f_epc","a3_weapons_f_explosives","a3_weapons_f_gamma","a3_weapons_f_gamma_acc","a3_weapons_f_gamma_ammoboxes","a3_weapons_f_gamma_longrangerifles_ebr","a3_weapons_f_gamma_rifles_mx","a3_weapons_f_items","a3_weapons_f_launchers_nlaw","a3_weapons_f_launchers_rpg32","a3_weapons_f_launchers_titan","a3_weapons_f_longrangerifles_dmr_01","a3_weapons_f_longrangerifles_ebr","a3_weapons_f_longrangerifles_gm6","a3_weapons_f_longrangerifles_m320","a3_weapons_f_machineguns_m200","a3_weapons_f_machineguns_zafir","a3_weapons_f_pistols_acpc2","a3_weapons_f_pistols_p07","a3_weapons_f_pistols_pistol_heavy_01","a3_weapons_f_pistols_pistol_heavy_02","a3_weapons_f_pistols_rook40","a3_weapons_f_rifles_khaybar","a3_weapons_f_rifles_mk20","a3_weapons_f_rifles_mx","a3_weapons_f_rifles_mx_black","a3_weapons_f_rifles_sdar","a3_weapons_f_rifles_trg20","a3_weapons_f_smgs_pdw2000","a3_weapons_f_smgs_smg_01","a3_weapons_f_smgs_smg_02","a3_air_f_gamma_uav_01","a3_air_f_gamma_uav_02","a3_animals_f_chicken","a3_animals_f_dog","a3_animals_f_goat","a3_animals_f_sheep","a3_armor_f_amv","a3_armor_f_apc_wheeled_03","a3_armor_f_marid","a3_armor_f_panther","a3_armor_f_slammer","a3_armor_f_t100k","a3_baseconfig_f","a3_boat_f_civilian_boat","a3_boat_f_epc_submarine_01_f","a3_boat_f_sdv_01","a3_boat_f_trawler","a3_characters_f_indep","a3_map_altis_scenes","a3_map_stratis_scenes","a3_signs_f_ad","a3_soft_f_beta_quadbike","a3_soft_f_car","a3_soft_f_crusher_ugv","a3_soft_f_gamma_hemtt","a3_soft_f_gamma_offroad","a3_soft_f_gamma_quadbike","a3_soft_f_gamma_truckheavy","a3_soft_f_hemtt","a3_soft_f_mrap_03","a3_soft_f_quadbike","a3_soft_f_suv","a3_soft_f_truck","a3_soft_f_truckheavy","a3_static_f_gamma_aa","a3_static_f_gamma_at","a3_structures_f_items_cans","a3_uav_f_characters_f_gamma","a3_uav_f_weapons_f_gamma_ammoboxes","a3_weapons_f_aaf","a3_weapons_f_beta_ebr","a3_weapons_f_csat","a3_weapons_f_ebr","a3_weapons_f_epa_ebr","a3_weapons_f_epa_longrangerifles_dmr_01","a3_weapons_f_epa_longrangerifles_gm6","a3_weapons_f_epa_rifles_mx","a3_weapons_f_epb_longrangerifles_gm3","a3_weapons_f_epb_longrangerifles_m320","a3_weapons_f_epb_rifles_mx_black","a3_weapons_f_fia","a3_weapons_f_gamma_items","a3_weapons_f_headgear","a3_weapons_f_itemholders","a3_weapons_f_launchers_law","a3_weapons_f_nato","a3_weapons_f_pistols_pdw2000","a3_weapons_f_rifles_smg_02","a3_weapons_f_rifles_vector","a3_weapons_f_uniforms","a3_weapons_f_vests","a3_data_f_curator","a3_data_f_curator_characters","a3_data_f_curator_eagle","a3_data_f_curator_intel","a3_data_f_curator_loadorder","a3_data_f_curator_misc","a3_data_f_curator_music","a3_data_f_curator_respawn","a3_data_f_curator_virtual","a3_functions_f_curator","a3_language_f_curator","a3_missions_f_curator","a3_modules_f_curator","a3_modules_f_curator_animals","a3_modules_f_curator_cas","a3_modules_f_curator_chemlights","a3_modules_f_curator_curator","a3_modules_f_curator_effects","a3_modules_f_curator_environment","a3_modules_f_curator_flares","a3_modules_f_curator_intel","a3_modules_f_curator_lightning","a3_modules_f_curator_mines","a3_modules_f_curator_misc","a3_modules_f_curator_multiplayer","a3_modules_f_curator_objectives","a3_modules_f_curator_ordnance","a3_modules_f_curator_respawn","a3_modules_f_curator_smokeshells","a3_ui_f_curator","curatoronly_air_f_beta_heli_attack_01","curatoronly_air_f_beta_heli_attack_02","curatoronly_air_f_gamma_uav_01","curatoronly_armor_f_amv","curatoronly_armor_f_beta_apc_tracked_02","curatoronly_armor_f_marid","curatoronly_armor_f_panther","curatoronly_armor_f_slammer","curatoronly_armor_f_t100k","curatoronly_boat_f_boat_armed_01","curatoronly_characters_f_blufor","curatoronly_characters_f_common","curatoronly_characters_f_opfor","curatoronly_modules_f_curator_animals","curatoronly_modules_f_curator_chemlights","curatoronly_modules_f_curator_effects","curatoronly_modules_f_curator_environment","curatoronly_modules_f_curator_flares","curatoronly_modules_f_curator_lightning","curatoronly_modules_f_curator_mines","curatoronly_modules_f_curator_objectives","curatoronly_modules_f_curator_ordnance","curatoronly_modules_f_curator_smokeshells","curatoronly_signs_f","curatoronly_soft_f_crusher_ugv","curatoronly_soft_f_mrap_01","curatoronly_soft_f_mrap_02","curatoronly_soft_f_quadbike","curatoronly_static_f_gamma","curatoronly_static_f_mortar_01","curatoronly_structures_f_civ_ancient","curatoronly_structures_f_civ_camping","curatoronly_structures_f_civ_garbage","curatoronly_structures_f_epa_civ_constructions","curatoronly_structures_f_epb_civ_dead","curatoronly_structures_f_ind_cargo","curatoronly_structures_f_ind_crane","curatoronly_structures_f_ind_reservoirtank","curatoronly_structures_f_ind_transmitter_tower","curatoronly_structures_f_items_vessels","curatoronly_structures_f_mil_bagbunker","curatoronly_structures_f_mil_bagfence","curatoronly_structures_f_mil_cargo","curatoronly_structures_f_mil_fortification","curatoronly_structures_f_mil_radar","curatoronly_structures_f_mil_shelters","curatoronly_structures_f_research","curatoronly_structures_f_walls","curatoronly_structures_f_wrecks","a3_anims_f_kart","a3_characters_f_kart","a3_data_f_kart","a3_data_f_kart_loadorder","a3_data_f_kart_particleeffects","a3_languagemissions_f_kart","a3_language_f_kart","a3_missions_f_kart","a3_missions_f_kart_data","a3_modules_f_kart","a3_modules_f_kart_data","a3_modules_f_kart_timetrials","a3_soft_f_kart","a3_soft_f_kart_kart_01","a3_sounds_f_kart","a3_structures_f_kart","a3_structures_f_kart_civ_sportsgrounds","a3_structures_f_kart_mil_flags","a3_structures_f_kart_signs_companies","a3_ui_f_kart","a3_weapons_f_kart","a3_weapons_f_kart_pistols_pistol_signal_f","a3_anims_f_bootcamp","a3_characters_f_bootcamp","a3_characters_f_bootcamp_common","a3_data_f_bootcamp","a3_data_f_bootcamp_loadorder","a3_dubbing_f_bootcamp","a3_functions_f_bootcamp","a3_languagemissions_f_bootcamp","a3_language_f_bootcamp","a3_map_vr","a3_map_vr_scenes_f","a3_missions_f_bootcamp","a3_missions_f_bootcamp_data","a3_missions_f_bootcamp_video","a3_modules_f_bootcamp","a3_modules_f_bootcamp_misc","a3_music_f_bootcamp","a3_music_f_bootcamp_music","a3_soft_f_bootcamp","a3_soft_f_bootcamp_offroad_01","a3_soft_f_bootcamp_quadbike_01","a3_soft_f_bootcamp_van_01","a3_sounds_f_bootcamp","a3_structures_f_bootcamp","a3_structures_f_bootcamp_civ_camping","a3_structures_f_bootcamp_civ_sportsgrounds","a3_structures_f_bootcamp_ind_cargo","a3_structures_f_bootcamp_items_electronics","a3_structures_f_bootcamp_items_food","a3_structures_f_bootcamp_items_sport","a3_structures_f_bootcamp_system","a3_structures_f_bootcamp_training","a3_structures_f_bootcamp_vr_blocks","a3_structures_f_bootcamp_vr_coverobjects","a3_structures_f_bootcamp_vr_helpers","a3_ui_f_bootcamp","a3_weapons_f_bootcamp","a3_weapons_f_bootcamp_ammoboxes","a3_weapons_f_bootcamp_longrangerifles_gm6_camo","a3_weapons_f_bootcamp_longrangerifles_m320_camo","a3_map_vr_scenes","a3_soft_f_bootcamp_quadbike","a3_soft_f_bootcamp_truck","a3_weapons_f_bootcamp_longrangerifles_gm6","a3_weapons_f_bootcamp_longrangerifles_m320","map_vr","a3_air_f_heli","a3_air_f_heli_heli_attack_01","a3_air_f_heli_heli_attack_02","a3_air_f_heli_heli_light_01","a3_air_f_heli_heli_light_02","a3_air_f_heli_heli_light_03","a3_air_f_heli_heli_transport_01","a3_air_f_heli_heli_transport_02","a3_air_f_heli_heli_transport_03","a3_air_f_heli_heli_transport_04","a3_anims_f_heli","a3_boat_f_heli","a3_boat_f_heli_boat_armed_01","a3_boat_f_heli_sdv_01","a3_cargoposes_f_heli","a3_data_f_heli","a3_data_f_heli_loadorder","a3_dubbing_f_heli","a3_functions_f_heli","a3_languagemissions_f_heli","a3_language_f_heli","a3_missions_f_heli","a3_missions_f_heli_data","a3_missions_f_heli_video","a3_modules_f_heli","a3_modules_f_heli_misc","a3_music_f_heli","a3_music_f_heli_music","a3_soft_f_heli","a3_soft_f_heli_hatchback_01","a3_soft_f_heli_mrap_01","a3_soft_f_heli_mrap_02","a3_soft_f_heli_mrap_03","a3_soft_f_heli_quadbike_01","a3_soft_f_heli_suv_01","a3_soft_f_heli_ugv_01","a3_soft_f_heli_van_01","a3_sounds_f_heli","a3_structures_f_heli","a3_structures_f_heli_civ_accessories","a3_structures_f_heli_civ_constructions","a3_structures_f_heli_civ_garbage","a3_structures_f_heli_civ_market","a3_structures_f_heli_furniture","a3_structures_f_heli_ind_airport","a3_structures_f_heli_ind_cargo","a3_structures_f_heli_ind_machines","a3_structures_f_heli_items_airport","a3_structures_f_heli_items_electronics","a3_structures_f_heli_items_food","a3_structures_f_heli_items_luggage","a3_structures_f_heli_items_sport","a3_structures_f_heli_items_tools","a3_structures_f_heli_vr_helpers","a3_supplies_f_heli","a3_supplies_f_heli_bladders","a3_supplies_f_heli_cargonets","a3_supplies_f_heli_fuel","a3_supplies_f_heli_slingload","a3_ui_f_heli","a3_modules_f_heli_spawnai","a3_soft_f_heli_car","a3_soft_f_heli_crusher_ugv","a3_soft_f_heli_quadbike","a3_soft_f_heli_suv","a3_soft_f_heli_truck","a3_anims_f_mark","a3_anims_f_mark_deployment","a3_characters_f_mark","a3_data_f_mark","a3_data_f_mark_loadorder","a3_dubbing_f_mark","a3_functions_f_mark","a3_languagemissions_f_mark","a3_language_f_mark","a3_missions_f_mark","a3_missions_f_mark_data","a3_missions_f_mark_video","a3_modules_f_mark","a3_modules_f_mark_firingdrills","a3_music_f_mark","a3_music_f_mark_music","a3_sounds_f_mark","a3_static_f_mark","a3_static_f_mark_designator_01","a3_static_f_mark_designator_02","a3_structures_f_mark","a3_structures_f_mark_items_military","a3_structures_f_mark_items_sport","a3_structures_f_mark_mil_flags","a3_structures_f_mark_training","a3_structures_f_mark_vr_helpers","a3_structures_f_mark_vr_shapes","a3_structures_f_mark_vr_targets","a3_supplies_f_mark","a3_ui_f_mark","a3_weapons_f_mark","a3_weapons_f_mark_acc","a3_weapons_f_mark_longrangerifles_dmr_01","a3_weapons_f_mark_longrangerifles_dmr_02","a3_weapons_f_mark_longrangerifles_dmr_03","a3_weapons_f_mark_longrangerifles_dmr_04","a3_weapons_f_mark_longrangerifles_dmr_05","a3_weapons_f_mark_longrangerifles_dmr_06","a3_weapons_f_mark_longrangerifles_ebr","a3_weapons_f_mark_longrangerifles_gm6","a3_weapons_f_mark_longrangerifles_gm6_camo","a3_weapons_f_mark_longrangerifles_m320","a3_weapons_f_mark_longrangerifles_m320_camo","a3_weapons_f_mark_machineguns_m200","a3_weapons_f_mark_machineguns_mmg_01","a3_weapons_f_mark_machineguns_mmg_02","a3_weapons_f_mark_machineguns_zafir","a3_weapons_f_mark_rifles_khaybar","a3_weapons_f_mark_rifles_mk20","a3_weapons_f_mark_rifles_mx","a3_weapons_f_mark_rifles_sdar","a3_weapons_f_mark_rifles_trg20","a3_modules_f_mark_objectives","a3_weapons_f_mark_ebr","a3_dubbing_f_mp_mark","a3_functions_f_mp_mark","a3_languagemissions_f_mp_mark","a3_language_f_mp_mark","a3_missions_f_mp_mark","a3_missions_f_mp_mark_data","a3_modules_f_mp_mark","a3_modules_f_mp_mark_objectives","a3_ui_f_mp_mark","a3_anims_f_exp_a","a3_data_f_exp_a","a3_data_f_exp_a_loadorder","a3_data_f_exp_a_virtual","a3_functions_f_exp_a","a3_languagemissions_f_exp_a","a3_language_f_exp_a","a3_missions_f_exp_a","a3_missions_f_exp_a_data","a3_modules_f_exp_a","a3_props_f_exp_a","a3_props_f_exp_a_military","a3_props_f_exp_a_military_equipment","a3_sounds_f_exp_a","a3_structures_f_exp_a","a3_structures_f_exp_a_vr_blocks","a3_structures_f_exp_a_vr_helpers","a3_ui_f_exp_a","a3_data_f_exp_b","a3_data_f_exp_b_loadorder","a3_language_f_exp_b","a3_3den","a3_3den_language","3den","a3_air_f_exp","a3_air_f_exp_heli_light_01","a3_air_f_exp_heli_transport_01","a3_air_f_exp_plane_civil_01","a3_air_f_exp_uav_03","a3_air_f_exp_uav_04","a3_air_f_exp_vtol_01","a3_air_f_exp_vtol_02","a3_anims_f_exp","a3_anims_f_exp_revive","a3_armor_f_exp","a3_armor_f_exp_apc_tracked_01","a3_armor_f_exp_apc_tracked_02","a3_armor_f_exp_apc_wheeled_01","a3_armor_f_exp_apc_wheeled_02","a3_armor_f_exp_mbt_01","a3_armor_f_exp_mbt_02","a3_boat_f_exp","a3_boat_f_exp_boat_armed_01","a3_boat_f_exp_boat_transport_01","a3_boat_f_exp_boat_transport_02","a3_boat_f_exp_scooter_transport_01","a3_cargoposes_f_exp","a3_characters_f_exp","a3_characters_f_exp_civil","a3_characters_f_exp_headgear","a3_characters_f_exp_vests","a3_data_f_exp","a3_data_f_exp_loadorder","a3_data_f_exp_particleeffects","a3_dubbing_f_exp","a3_dubbing_radio_f_exp","a3_dubbing_radio_f_exp_data_chi","a3_dubbing_radio_f_exp_data_engfre","a3_dubbing_radio_f_exp_data_fre","a3_editorpreviews_f_exp","a3_functions_f_exp","a3_languagemissions_f_exp","a3_language_f_exp","a3_map_data_exp","a3_missions_f_exp","a3_missions_f_exp_data","a3_missions_f_exp_video","a3_modules_f_exp","a3_music_f_exp","a3_music_f_exp_music","a3_props_f_exp","a3_props_f_exp_civilian","a3_props_f_exp_civilian_garbage","a3_props_f_exp_commercial","a3_props_f_exp_commercial_market","a3_props_f_exp_industrial","a3_props_f_exp_industrial_heavyequipment","a3_props_f_exp_infrastructure","a3_props_f_exp_infrastructure_railways","a3_props_f_exp_infrastructure_traffic","a3_props_f_exp_military","a3_props_f_exp_military_camps","a3_props_f_exp_military_oldplanewrecks","a3_props_f_exp_naval","a3_props_f_exp_naval_boats","a3_rocks_f_exp","a3_rocks_f_exp_cliff","a3_rocks_f_exp_lavastones","a3_soft_f_exp","a3_soft_f_exp_lsv_01","a3_soft_f_exp_lsv_02","a3_soft_f_exp_mrap_01","a3_soft_f_exp_mrap_02","a3_soft_f_exp_offroad_01","a3_soft_f_exp_offroad_02","a3_soft_f_exp_quadbike_01","a3_soft_f_exp_truck_01","a3_soft_f_exp_truck_03","a3_soft_f_exp_ugv_01","a3_soft_f_exp_van_01","a3_sounds_f_exp","a3_static_f_exp","a3_static_f_exp_aa_01","a3_static_f_exp_at_01","a3_static_f_exp_gmg_01","a3_static_f_exp_hmg_01","a3_static_f_exp_mortar_01","a3_structures_f_exp","a3_structures_f_exp_civilian","a3_structures_f_exp_civilian_accessories","a3_structures_f_exp_civilian_garages","a3_structures_f_exp_civilian_house_big_01","a3_structures_f_exp_civilian_house_big_02","a3_structures_f_exp_civilian_house_big_03","a3_structures_f_exp_civilian_house_big_04","a3_structures_f_exp_civilian_house_big_05","a3_structures_f_exp_civilian_house_native_01","a3_structures_f_exp_civilian_house_native_02","a3_structures_f_exp_civilian_house_small_01","a3_structures_f_exp_civilian_house_small_02","a3_structures_f_exp_civilian_house_small_03","a3_structures_f_exp_civilian_house_small_04","a3_structures_f_exp_civilian_house_small_05","a3_structures_f_exp_civilian_house_small_06","a3_structures_f_exp_civilian_school_01","a3_structures_f_exp_civilian_sheds","a3_structures_f_exp_civilian_slum_01","a3_structures_f_exp_civilian_slum_02","a3_structures_f_exp_civilian_slum_03","a3_structures_f_exp_civilian_slum_04","a3_structures_f_exp_civilian_slum_05","a3_structures_f_exp_civilian_sportsgrounds","a3_structures_f_exp_commercial","a3_structures_f_exp_commercial_addons","a3_structures_f_exp_commercial_advertisements","a3_structures_f_exp_commercial_fuelstation_01","a3_structures_f_exp_commercial_fuelstation_02","a3_structures_f_exp_commercial_hotel_01","a3_structures_f_exp_commercial_hotel_02","a3_structures_f_exp_commercial_market","a3_structures_f_exp_commercial_multistorybuilding_01","a3_structures_f_exp_commercial_multistorybuilding_03","a3_structures_f_exp_commercial_multistorybuilding_04","a3_structures_f_exp_commercial_shop_city_01","a3_structures_f_exp_commercial_shop_city_02","a3_structures_f_exp_commercial_shop_city_03","a3_structures_f_exp_commercial_shop_city_04","a3_structures_f_exp_commercial_shop_city_05","a3_structures_f_exp_commercial_shop_city_06","a3_structures_f_exp_commercial_shop_city_07","a3_structures_f_exp_commercial_shop_town_01","a3_structures_f_exp_commercial_shop_town_02","a3_structures_f_exp_commercial_shop_town_03","a3_structures_f_exp_commercial_shop_town_04","a3_structures_f_exp_commercial_shop_town_05","a3_structures_f_exp_commercial_supermarket_01","a3_structures_f_exp_commercial_warehouses","a3_structures_f_exp_cultural","a3_structures_f_exp_cultural_ancientrelics","a3_structures_f_exp_cultural_basaltruins","a3_structures_f_exp_cultural_cathedral_01","a3_structures_f_exp_cultural_cemeteries","a3_structures_f_exp_cultural_church_01","a3_structures_f_exp_cultural_church_02","a3_structures_f_exp_cultural_church_03","a3_structures_f_exp_cultural_fortress_01","a3_structures_f_exp_cultural_temple_native_01","a3_structures_f_exp_cultural_totems","a3_structures_f_exp_data","a3_structures_f_exp_industrial","a3_structures_f_exp_industrial_dieselpowerplant_01","a3_structures_f_exp_industrial_fields","a3_structures_f_exp_industrial_materials","a3_structures_f_exp_industrial_port","a3_structures_f_exp_industrial_stockyard_01","a3_structures_f_exp_industrial_sugarcanefactory_01","a3_structures_f_exp_industrial_surfacemine_01","a3_structures_f_exp_infrastructure","a3_structures_f_exp_infrastructure_airports","a3_structures_f_exp_infrastructure_bridges","a3_structures_f_exp_infrastructure_pavements","a3_structures_f_exp_infrastructure_powerlines","a3_structures_f_exp_infrastructure_railways","a3_structures_f_exp_infrastructure_roads","a3_structures_f_exp_infrastructure_runways","a3_structures_f_exp_infrastructure_watersupply","a3_structures_f_exp_military","a3_structures_f_exp_military_barracks_01","a3_structures_f_exp_military_camonets","a3_structures_f_exp_military_containerbases","a3_structures_f_exp_military_emplacements","a3_structures_f_exp_military_flags","a3_structures_f_exp_military_fortifications","a3_structures_f_exp_military_pillboxes","a3_structures_f_exp_military_trenches","a3_structures_f_exp_naval","a3_structures_f_exp_naval_canals","a3_structures_f_exp_naval_piers","a3_structures_f_exp_signs","a3_structures_f_exp_signs_companies","a3_structures_f_exp_signs_traffic","a3_structures_f_exp_walls","a3_structures_f_exp_walls_backalleys","a3_structures_f_exp_walls_bamboo","a3_structures_f_exp_walls_concrete","a3_structures_f_exp_walls_crashbarriers","a3_structures_f_exp_walls_hedges","a3_structures_f_exp_walls_net","a3_structures_f_exp_walls_pipe","a3_structures_f_exp_walls_polewalls","a3_structures_f_exp_walls_railings","a3_structures_f_exp_walls_slum","a3_structures_f_exp_walls_stone","a3_structures_f_exp_walls_tin","a3_structures_f_exp_walls_wired","a3_structures_f_exp_walls_wooden","a3_supplies_f_exp","a3_supplies_f_exp_ammoboxes","a3_ui_f_exp","a3_vegetation_f_exp","a3_weapons_f_exp","a3_weapons_f_exp_launchers_rpg32","a3_weapons_f_exp_launchers_rpg7","a3_weapons_f_exp_launchers_titan","a3_weapons_f_exp_longrangerifles_dmr_07","a3_weapons_f_exp_machineguns_lmg_03","a3_weapons_f_exp_pistols_pistol_01","a3_weapons_f_exp_rifles_ak12","a3_weapons_f_exp_rifles_akm","a3_weapons_f_exp_rifles_aks","a3_weapons_f_exp_rifles_arx","a3_weapons_f_exp_rifles_ctar","a3_weapons_f_exp_rifles_ctars","a3_weapons_f_exp_rifles_spar_01","a3_weapons_f_exp_rifles_spar_02","a3_weapons_f_exp_rifles_spar_03","a3_weapons_f_exp_smgs_smg_05","a3_air_f_jets_plane_fighter_01","a3_air_f_jets_plane_fighter_02","a3_air_f_jets_plane_fighter_04","a3_air_f_jets_uav_05","a3_air_f_jets","a3_anims_f_jets","a3_boat_f_jets","a3_boat_f_jets_carrier_01","a3_cargoposes_f_jets","a3_characters_f_jets","a3_data_f_jets","a3_data_f_jets_loadorder","a3_dubbing_f_jets","a3_editorpreviews_f_jets","a3_functions_f_jets","a3_languagemissions_f_jets","a3_language_f_jets","a3_missions_f_jets","a3_modules_f_jets","a3_music_f_jets","a3_props_f_jets","a3_props_f_jets_military_tractor","a3_props_f_jets_military_trolley","a3_sounds_f_jets","a3_static_f_jets","a3_static_f_jets_aaa_system_01","a3_static_f_jets_sam_system_01","a3_static_f_jets_sam_system_02","a3_ui_f_jets","a3_weapons_f_jets","a3_armor_f_argo","a3_armor_f_argo_apc_tracked_01","a3_armor_f_argo_apc_wheeled_02","a3_data_f_argo","a3_data_f_argo_loadorder","a3_editorpreviews_f_argo","a3_language_f_argo","a3_map_malden","a3_map_malden_data","a3_map_malden_data_layers","a3_map_malden_scenes_f","a3_props_f_argo","a3_props_f_argo_civilian","a3_props_f_argo_civilian_infoboards","a3_props_f_argo_items","a3_props_f_argo_items_documents","a3_props_f_argo_items_electronics","a3_rocks_f_argo","a3_rocks_f_argo_limestone","a3_structures_f_argo","a3_structures_f_argo_civilian","a3_structures_f_argo_civilian_accessories","a3_structures_f_argo_civilian_addons","a3_structures_f_argo_civilian_garbage","a3_structures_f_argo_civilian_house_big01","a3_structures_f_argo_civilian_house_big02","a3_structures_f_argo_civilian_house_small01","a3_structures_f_argo_civilian_house_small02","a3_structures_f_argo_civilian_stone_house_big_01","a3_structures_f_argo_civilian_stone_shed_01","a3_structures_f_argo_civilian_unfinished_building_01","a3_structures_f_argo_commercial","a3_structures_f_argo_commercial_accessories","a3_structures_f_argo_commercial_billboards","a3_structures_f_argo_commercial_fuelstation_01","a3_structures_f_argo_commercial_shop_02","a3_structures_f_argo_commercial_supermarket_01","a3_structures_f_argo_cultural","a3_structures_f_argo_cultural_church","a3_structures_f_argo_cultural_statues","a3_structures_f_argo_decals","a3_structures_f_argo_decals_horizontal","a3_structures_f_argo_industrial","a3_structures_f_argo_industrial_agriculture","a3_structures_f_argo_industrial_materials","a3_structures_f_argo_infrastructure","a3_structures_f_argo_infrastructure_runways","a3_structures_f_argo_infrastructure_seaports","a3_structures_f_argo_infrastructure_watersupply","a3_structures_f_argo_military","a3_structures_f_argo_military_bunkers","a3_structures_f_argo_military_containerbases","a3_structures_f_argo_military_domes","a3_structures_f_argo_military_fortifications","a3_structures_f_argo_military_turrets","a3_structures_f_argo_signs","a3_structures_f_argo_signs_city","a3_structures_f_argo_signs_directions","a3_structures_f_argo_signs_warnings","a3_structures_f_argo_walls","a3_structures_f_argo_walls_city","a3_structures_f_argo_walls_concrete","a3_structures_f_argo_walls_military","a3_structures_f_argo_walls_net","a3_structures_f_argo_walls_pipe","a3_structures_f_argo_walls_tin","a3_structures_f_argo_walls_wooden","a3_structures_f_argo_wrecks","a3_vegetation_f_argo","a3_characters_f_patrol","a3_data_f_patrol","a3_data_f_patrol_loadorder","a3_functions_f_patrol","a3_languagemissions_f_patrol","a3_language_f_patrol","a3_missions_f_patrol","a3_modules_f_patrol","a3_sounds_f_patrol","a3_ui_f_patrol","a3_weapons_f_patrol","a3_map_tanoabuka","a3_map_tanoabuka_data","a3_map_tanoabuka_data_layers","a3_map_tanoa_scenes_f","a3_air_f_orange_heli_transport_02","a3_air_f_orange_uav_01","a3_air_f_orange_uav_06","a3_air_f_orange","a3_cargoposes_f_orange","a3_characters_f_orange","a3_characters_f_orange_facewear","a3_characters_f_orange_headgear","a3_characters_f_orange_uniforms","a3_characters_f_orange_vests","a3_data_f_orange","a3_data_f_orange_loadorder","a3_dubbing_f_orange","a3_editorpreviews_f_orange","a3_functions_f_orange","a3_languagemissions_f_orange","a3_language_f_orange","a3_missions_f_orange","a3_modules_f_orange","a3_music_f_orange","a3_props_f_orange","a3_props_f_orange_humanitarian","a3_props_f_orange_humanitarian_camps","a3_props_f_orange_humanitarian_garbage","a3_props_f_orange_humanitarian_supplies","a3_props_f_orange_items","a3_props_f_orange_items_tools","a3_props_f_orange_items_decorative","a3_props_f_orange_items_documents","a3_props_f_orange_items_electronics","a3_props_f_orange_furniture","a3_props_f_orange_civilian_constructions","a3_props_f_orange_civilian_infoboards","a3_soft_f_orange","a3_soft_f_orange_offroad_01","a3_soft_f_orange_offroad_02","a3_soft_f_orange_truck_02","a3_soft_f_orange_ugv_01","a3_soft_f_orange_van_02","a3_sounds_f_orange","a3_structures_f_orange","a3_structures_f_orange_humanitarian","a3_structures_f_orange_humanitarian_camps","a3_structures_f_orange_humanitarian_flags","a3_structures_f_orange_industrial","a3_structures_f_orange_industrial_cargo","a3_structures_f_orange_signs","a3_structures_f_orange_signs_mines","a3_structures_f_orange_signs_special","a3_structures_f_orange_vr_helpers","a3_structures_f_orange_walls","a3_structures_f_orange_walls_plastic","a3_supplies_f_orange","a3_supplies_f_orange_ammoboxes","a3_supplies_f_orange_bags","a3_supplies_f_orange_cargonets","a3_ui_f_orange","a3_weapons_f_orange","a3_weapons_f_orange_explosives","a3_weapons_f_orange_items","a3_characters_f_tacops","a3_data_f_tacops_loadorder","a3_data_f_tacops","a3_dubbing_f_tacops","a3_functions_f_tacops","a3_languagemissions_f_tacops","a3_language_f_tacops","a3_missions_f_tacops","a3_modules_f_tacops","a3_music_f_tacops","a3_sounds_f_tacops","a3_ui_f_tacops","a3_armor_f_tank","a3_armor_f_tank_afv_wheeled_01","a3_armor_f_tank_lt_01","a3_armor_f_tank_mbt_04","a3_cargoposes_f_tank","a3_characters_f_tank","a3_characters_f_tank_headgear","a3_characters_f_tank_uniforms","a3_data_f_tank","a3_data_f_tank_loadorder","a3_dubbing_f_tank","a3_editorpreviews_f_tank","a3_functions_f_tank","a3_languagemissions_f_tank","a3_language_f_tank","a3_missions_f_tank","a3_modules_f_tank","a3_music_f_tank","a3_props_f_tank","a3_props_f_tank_military","a3_props_f_tank_military_tankacc","a3_sounds_f_tank","a3_structures_f_tank","a3_structures_f_tank_military","a3_structures_f_tank_military_fortifications","a3_structures_f_tank_military_repairdepot","a3_ui_f_tank","a3_weapons_f_tank","a3_weapons_f_tank_launchers_vorona","a3_weapons_f_tank_launchers_mraws","a3_boat_f_destroyer","a3_boat_f_destroyer_destroyer_01","a3_data_f_destroyer","a3_functions_f_destroyer","a3_language_f_destroyer","a3_props_f_destroyer","a3_props_f_destroyer_military_briefingroomdesk","a3_props_f_destroyer_military_briefingroomscreen","a3_static_f_destroyer","a3_static_f_destroyer_boat_rack_01","a3_static_f_destroyer_ship_gun_01","a3_static_f_destroyer_ship_mrls_01","a3_weapons_f_destroyer","a3_data_f_destroyer_loadorder","a3_data_f_sams","a3_data_f_sams_loadorder","a3_static_f_sams","a3_static_f_sams_radar_system_01","a3_static_f_sams_radar_system_02","a3_static_f_sams_sam_system_03","a3_static_f_sams_sam_system_04","a3_weapons_f_sams","a3_props_f_orange_civilian","a3_weapons_f_tank_bags"
		};
	};
};
class mode_semiauto;
class mode_burst;
class mode_fullauto;
class mode_burst2 : mode_burst
{
	burst = 2;
};
class basesoundmodetype;
class cfgweapons
{
	class Rifle_Base_F;
	class Pistol_Base_F;
	class GrenadeLauncher;
	class UGL_F: GrenadeLauncher {};
	class arifle_av_ak74m: Rifle_Base_F
	{
		class Single: mode_semiauto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_762mm_echo_soundset",
					"jsrs_7x62mm_reflector_3"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_silenced_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_7x62mm_sd_reflector_1"
				};
			};
		};
		class FullAuto: mode_fullauto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_762mm_echo_soundset",
					"jsrs_7x62mm_reflector_3"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_silenced_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_7x62mm_sd_reflector_1"
				};
			};
		};
	};
	class av_ak74m_dr: arifle_av_ak74m  //дробовик
	{
		class Single: mode_semiauto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_762mm_echo_soundset",
					"jsrs_7x62mm_reflector_3"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_silenced_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_7x62mm_sd_reflector_1"
				};
			};
		};
		class FullAuto: mode_fullauto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_762mm_echo_soundset",
					"jsrs_7x62mm_reflector_3"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_silenced_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_7x62mm_sd_reflector_1"
				};
			};
		};
	};
	class APS_uw_Base: Rifle_Base_F //Underwater
	{
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_pistol_shake_soundset",
					"jsrs_uwg_shot_soundset",
					"jsrs_uwg_shell_soundset",
					"jsrs_5x56mm_reflector_3",
					"jsrs_smg_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_pistol_shake_soundset",
					"jsrs_uwg_shot_silenced_soundset",
					"jsrs_uwg_shell_soundset",
					"jsrs_5x56mm_SD_reflector_3"
				};
			};
		};
		class burst: mode_burst2
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_pistol_shake_soundset",
					"jsrs_uwg_shot_soundset",
					"jsrs_uwg_shell_soundset",
					"jsrs_5x56mm_reflector_3",
					"jsrs_smg_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_pistol_shake_soundset",
					"jsrs_uwg_shot_silenced_soundset",
					"jsrs_uwg_shell_soundset",
					"jsrs_5x56mm_SD_reflector_3"
				};
			};
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_pistol_shake_soundset",
					"jsrs_uwg_shot_soundset",
					"jsrs_uwg_shell_soundset",
					"jsrs_5x56mm_reflector_3",
					"jsrs_smg_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_pistol_shake_soundset",
					"jsrs_uwg_shot_silenced_soundset",
					"jsrs_uwg_shell_soundset",
					"jsrs_5x56mm_SD_reflector_3"
				};
			};
		};
	};
	//class av_KORD_F: Rifle_Base_F {};
	class av_saiga_mk: Rifle_Base_F
	{
		class Single: mode_semiauto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak103_shot_soundset",
					"jsrs_ak103_shell_soundset",
					"jsrs_556mm_echo_soundset",
					"jsrs_5x56mm_reflector_4"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_silenced_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_7x62mm_sd_reflector_1"
				};
			};
		};
		class FullAuto: mode_fullauto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak103_shot_soundset",
					"jsrs_ak103_shell_soundset",
					"jsrs_556mm_echo_soundset",
					"jsrs_5x56mm_reflector_4"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_silenced_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_7x62mm_sd_reflector_1"
				};
			};
		};
	};
	class arifle_av_ak101: Rifle_Base_F 
	{
		class Single: mode_semiauto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_762mm_echo_soundset",
					"jsrs_7x62mm_reflector_3"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_silenced_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_7x62mm_sd_reflector_1"
				};
			};
		};
		class FullAuto: mode_fullauto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_762mm_echo_soundset",
					"jsrs_7x62mm_reflector_3"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_silenced_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_7x62mm_sd_reflector_1"
				};
			};
		};
	};
	class arifle_av_aks74n2: arifle_av_ak74m 
	{
		class Single: mode_semiauto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_762mm_echo_soundset",
					"jsrs_7x62mm_reflector_3"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_silenced_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_7x62mm_sd_reflector_1"
				};
			};
		};
		class FullAuto: mode_fullauto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_762mm_echo_soundset",
					"jsrs_7x62mm_reflector_3"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_silenced_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_7x62mm_sd_reflector_1"
				};
			};
		};
	};
	class arifle_av_aks74: arifle_av_ak74m 
	{
		class Single: mode_semiauto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_762mm_echo_soundset",
					"jsrs_7x62mm_reflector_3"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_silenced_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_7x62mm_sd_reflector_1"
				};
			};
		};
		class FullAuto: mode_fullauto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_762mm_echo_soundset",
					"jsrs_7x62mm_reflector_3"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_silenced_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_7x62mm_sd_reflector_1"
				};
			};
		};
	};
	class arifle_av_aksu: Rifle_Base_F 
	{
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_aks_shot_soundset",
					"jsrs_aks_shell_soundset",
					"jsrs_7x62mm_reflector_1",
					"jsrs_762mm_echo_soundset"
				};
			};
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_aks_shot_soundset",
					"jsrs_aks_shell_soundset",
					"jsrs_7x62mm_reflector_1",
					"jsrs_762mm_echo_soundset"
				};
			};
		};
	};
	class arifle_av_akmm: Rifle_Base_F 
	{
		class Single: mode_semiauto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak_m_shot_soundset",
					"jsrs_akm_shell_soundset",
					"jsrs_762mm_echo_soundset",
					"jsrs_7x62mm_reflector_2"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_silenced_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_7x62mm_sd_reflector_1"
				};
			};
		};
		class FullAuto: mode_fullauto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak_m_shot_soundset",
					"jsrs_ak_m_shell_soundset",
					"jsrs_762mm_echo_soundset",
					"jsrs_7x62mm_reflector_2"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_silenced_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_7x62mm_sd_reflector_1"
				};
			};
		};
	};
	class av_ak47: arifle_av_ak74m
	{
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak_m_shot_soundset",
					"jsrs_akm_shell_soundset",
					"jsrs_7x62mm_reflector_1",
					"jsrs_762mm_echo_soundset"
				};
			};
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak_m_shot_soundset",
					"jsrs_akm_shell_soundset",
					"jsrs_7x62mm_reflector_1",
					"jsrs_762mm_echo_soundset"
				};
			};
		};
	};
	class srifle_av_svd: Rifle_Base_F
	{
		class Single: mode_semiauto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_svd_shot_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_762mm_echo_soundset",
					"jsrs_12x7mm_reflector_3"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_svd_shot_silenced_soundset",
					"jsrs_svd_shell_soundset",
					"jsrs_7x62mm_sd_reflector_1"
				};
			};
		};
	};
	class mp135: Rifle_Base_F 
	{
		class Single: mode_semiauto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_m590_shot_soundset",
					"jsrs_m590_shell_soundset",
					"jsrs_12x7mm_reflector_2"
				};
			};
		};
	};
	class av_ak9: Rifle_Base_F 
	{
		class Single: mode_semiauto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				soundsetshot[]=
				{
					"jsrs_pistol_shake_soundset",
					"jsrs_pdw2000_shot_soundset",
					"jsrs_pdw2000_shell_soundset",
					"jsrs_small_echo_soundset",
					"jsrs_9mm_reflector_1"
				};
			};
		};
		class FullAuto: mode_fullauto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				soundsetshot[]=
				{
					"jsrs_pistol_shake_soundset",
					"jsrs_pdw2000_shot_soundset",
					"jsrs_pdw2000_shell_soundset",
					"jsrs_small_echo_soundset",
					"jsrs_9mm_reflector_1"
				};
			};
		};
	};
	class av_pb: Pistol_Base_F 
	{
		sounds[]=
		{
			"StandardSound",
			"SilencedSound"
		};
		class BaseSoundModeType
		{
			soundClosure[]={};
		};
		class standardsound: BaseSoundModeType
		{
			soundsetshot[]=
			{
				"jsrs_pistol_shake_soundset",
				"jsrs_pm9m_shot_soundset",
				"jsrs_pm9m_shell_soundset",
				"jsrs_9mm_reflector_2",
				"jsrs_small_echo_soundset"
			};
		};
		class silencedsound: BaseSoundModeType
		{
			soundsetshot[]=
			{
				"jsrs_pistol_shake_soundset",
				"jsrs_pm9m_shot_silenced_soundset",
				"jsrs_pm9m_shell_soundset",
				"jsrs_9mm_SD_reflector_2"
			};
		};
	};
	class av_kiparis: Rifle_Base_F
	{
		class Single: mode_semiauto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_pistol_shake_soundset",
					"jsrs_pp2000_shot_soundset",
					"jsrs_pp2000_shell_soundset",
					"jsrs_9mm_reflector_3"
				};
			};
		};
		class FullAuto: mode_fullauto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_pistol_shake_soundset",
					"jsrs_pp2000_shot_soundset",
					"jsrs_pp2000_shell_soundset",
					"jsrs_9mm_reflector_3"
				};
			};
		};
	};
	class arifle_av_ak12_Base: Rifle_Base_F
	{
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak12_shot_soundset",
					"jsrs_ak12_shell_soundset",
					"jsrs_7x62mm_reflector_2",
					"jsrs_762mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak12_shot_silenced_soundset",
					"jsrs_ak12_shell_soundset",
					"jsrs_7x62mm_SD_reflector_2"
				};
			};
		};
		class burst: mode_burst2
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak12_shot_soundset",
					"jsrs_ak12_shell_soundset",
					"jsrs_7x62mm_reflector_2",
					"jsrs_762mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak12_shot_silenced_soundset",
					"jsrs_ak12_shell_soundset",
					"jsrs_7x62mm_SD_reflector_2"
				};
			};
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak12_shot_soundset",
					"jsrs_ak12_shell_soundset",
					"jsrs_7x62mm_reflector_2",
					"jsrs_762mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak12_shot_silenced_soundset",
					"jsrs_ak12_shell_soundset",
					"jsrs_7x62mm_SD_reflector_2"
				};
			};
		};
	};
	class ak12_uw_g: Rifle_Base_F
	{
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak12_shot_soundset",
					"jsrs_ak12_shell_soundset",
					"jsrs_7x62mm_reflector_2",
					"jsrs_762mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak12_shot_silenced_soundset",
					"jsrs_ak12_shell_soundset",
					"jsrs_7x62mm_SD_reflector_2"
				};
			};
		};
		class burst: mode_burst2
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak12_shot_soundset",
					"jsrs_ak12_shell_soundset",
					"jsrs_7x62mm_reflector_2",
					"jsrs_762mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak12_shot_silenced_soundset",
					"jsrs_ak12_shell_soundset",
					"jsrs_7x62mm_SD_reflector_2"
				};
			};
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak12_shot_soundset",
					"jsrs_ak12_shell_soundset",
					"jsrs_7x62mm_reflector_2",
					"jsrs_762mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak12_shot_silenced_soundset",
					"jsrs_ak12_shell_soundset",
					"jsrs_7x62mm_SD_reflector_2"
				};
			};
		};
	};
	class av_mos: Rifle_Base_F 
	{
		class Single: mode_semiauto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class StandardSound
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_mosin_shot_soundset",
					"jsrs_9x3mm_reflector_3",
					"jsrs_762mm_echo_soundset"
				};
			};
			class SilencedSound
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_cmr76_shot_silenced_soundset",
					"jsrs_cmr76_shell_soundset",
					"jsrs_7x62mm_SD_reflector_3"
				};
			};
		};
	};
	class av_vepr12K: Rifle_Base_F 
	{
		class Single: mode_semiauto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_m590_shot_soundset",
					"jsrs_m590_shell_soundset",
					"jsrs_12x7mm_reflector_2"
				};
			};
		};
	};
	class av_toz122: Rifle_Base_F 
	{
		class Single: mode_semiauto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_trg21_shot_soundset",
					"jsrs_ak_m_shell_soundset",
					"jsrs_9x3mm_reflector_1"
				};
			};
		};
	};
	class av_toz34: av_vepr12K 
	{
		class Single: mode_semiauto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_m590_shot_soundset",
					"jsrs_m590_shell_soundset",
					"jsrs_12x7mm_reflector_2"
				};
			};
		};
	};
	class arifle_av_asval_Base: Rifle_Base_F
	{
		class Single: mode_semiauto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_asval_shot_soundset",
					"jsrs_asval_shell_soundset",
					"jsrs_9x3mm_sd_reflector_1"
				};
			};
			class Silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_asval_shot_soundset",
					"jsrs_asval_shell_soundset",
					"jsrs_9x3mm_sd_reflector_1"
				};
			};
		};
		class FullAuto: mode_fullauto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_asval_shot_soundset",
					"jsrs_asval_shell_soundset",
					"jsrs_9x3mm_sd_reflector_1"
				};
			};
			class Silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_asval_shot_soundset",
					"jsrs_asval_shell_soundset",
					"jsrs_9x3mm_sd_reflector_1"
				};
			};
		};
	};
	class av_ash_base: Rifle_Base_F
	{
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_cyrus_shot_soundset",
					"jsrs_cyrus_shell_soundset",
					"jsrs_9x3mm_reflector_2",
					"jsrs_dmr_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_cyrus_shot_silenced_soundset",
					"jsrs_cyrus_shell_soundset",
					"jsrs_9x3mm_SD_reflector_2"
				};
			};
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_cyrus_shot_soundset",
					"jsrs_cyrus_shell_soundset",
					"jsrs_9x3mm_reflector_2",
					"jsrs_dmr_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_cyrus_shot_silenced_soundset",
					"jsrs_cyrus_shell_soundset",
					"jsrs_9x3mm_SD_reflector_2"
				};
			};
		};
	};
	class av_aek919: Pistol_Base_F 
	{
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_pistol_shake_soundset",
					"jsrs_sting9_shot_soundset",
					"jsrs_sting9_shell_soundset",
					"jsrs_9mm_reflector_3",
					"jsrs_smg_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_pistol_shake_soundset",
					"jsrs_sting9_shot_silenced_soundset",
					"jsrs_sting9_shell_soundset",
					"jsrs_9mm_SD_reflector_3"
				};
			};
		};
		class burst: mode_burst2
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_pistol_shake_soundset",
					"jsrs_sting9_shot_soundset",
					"jsrs_sting9_shell_soundset",
					"jsrs_9mm_reflector_3",
					"jsrs_smg_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_pistol_shake_soundset",
					"jsrs_sting9_shot_silenced_soundset",
					"jsrs_sting9_shell_soundset",
					"jsrs_9mm_SD_reflector_3"
				};
			};
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_pistol_shake_soundset",
					"jsrs_sting9_shot_soundset",
					"jsrs_sting9_shell_soundset",
					"jsrs_9mm_reflector_3",
					"jsrs_smg_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_pistol_shake_soundset",
					"jsrs_sting9_shot_silenced_soundset",
					"jsrs_sting9_shell_soundset",
					"jsrs_9mm_SD_reflector_3"
				};
			};
		};
	};
	class av_aps: Pistol_Base_F
	{
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_pistol_shake_soundset",
					"jsrs_pdw2000_shot_soundset",
					"jsrs_pdw2000_shell_soundset",
					"jsrs_9mm_reflector_3",
					"jsrs_smg_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_pistol_shake_soundset",
					"jsrs_pdw2000_shot_silenced_soundset",
					"jsrs_pdw2000_shell_soundset",
					"jsrs_9mm_SD_reflector_3"
				};
			};
		};
		class burst: mode_burst2
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_pistol_shake_soundset",
					"jsrs_pdw2000_shot_soundset",
					"jsrs_pdw2000_shell_soundset",
					"jsrs_9mm_reflector_3",
					"jsrs_smg_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_pistol_shake_soundset",
					"jsrs_pdw2000_shot_silenced_soundset",
					"jsrs_pdw2000_shell_soundset",
					"jsrs_9mm_SD_reflector_3"
				};
			};
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_pistol_shake_soundset",
					"jsrs_pdw2000_shot_soundset",
					"jsrs_pdw2000_shell_soundset",
					"jsrs_9mm_reflector_3",
					"jsrs_smg_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_pistol_shake_soundset",
					"jsrs_pdw2000_shot_silenced_soundset",
					"jsrs_pdw2000_shell_soundset",
					"jsrs_9mm_SD_reflector_3"
				};
			};
		};
	};
	class arifle_av_bizon: Rifle_Base_F
	{
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_mk20_shot_soundset",
					"jsrs_mk20_shell_soundset",
					"jsrs_5x56mm_reflector_4",
					"jsrs_556mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_mk20_shot_silenced_soundset",
					"jsrs_mk20_shell_soundset",
					"jsrs_5x56mm_SD_reflector_4"
				};
			};
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_mk20_shot_soundset",
					"jsrs_mk20_shell_soundset",
					"jsrs_5x56mm_reflector_4",
					"jsrs_556mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_mk20_shot_silenced_soundset",
					"jsrs_mk20_shell_soundset",
					"jsrs_5x56mm_SD_reflector_4"
				};
			};
		};
	};
	class av_smg2_base_F: Rifle_Base_F//HK SMG-2
	{
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_pistol_shake_soundset",
					"jsrs_protc_shot_soundset",
					"jsrs_protc_shell_soundset",
					"jsrs_9mm_reflector_3",
					"jsrs_smg_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_pistol_shake_soundset",
					"jsrs_protc_shot_silenced_soundset",
					"jsrs_protc_shell_soundset",
					"jsrs_9mm_SD_reflector_3"
				};
			};
		};
		class burst: mode_burst2
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_pistol_shake_soundset",
					"jsrs_protc_shot_soundset",
					"jsrs_protc_shell_soundset",
					"jsrs_9mm_reflector_3",
					"jsrs_smg_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_pistol_shake_soundset",
					"jsrs_protc_shot_silenced_soundset",
					"jsrs_protc_shell_soundset",
					"jsrs_9mm_SD_reflector_3"
				};
			};
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_pistol_shake_soundset",
					"jsrs_protc_shot_soundset",
					"jsrs_protc_shell_soundset",
					"jsrs_9mm_reflector_3",
					"jsrs_smg_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_pistol_shake_soundset",
					"jsrs_protc_shot_silenced_soundset",
					"jsrs_protc_shell_soundset",
					"jsrs_9mm_SD_reflector_3"
				};
			};
		};
	};
	class av_glaunch_Base: Rifle_Base_F
	{
		class Single: mode_semiauto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				soundClosure[]={};
				begin1[]=
				{
					"JSRS_Soundmod_Snd_Weapons\Sounds\Shot\UGL\Close_1.ogg",
					1.8,
					1,
					800
				};
				begin2[]=
				{
					"JSRS_Soundmod_Snd_Weapons\Sounds\Shot\UGL\Close_2.ogg",
					1.8,
					1,
					800
				};
				begin3[]=
				{
					"JSRS_Soundmod_Snd_Weapons\Sounds\Shot\UGL\Close_3.ogg",
					1.8,
					1,
					800
				};
				begin4[]=
				{
					"JSRS_Soundmod_Snd_Weapons\Sounds\Shot\UGL\Close_4.ogg",
					1.8,
					1,
					800
				};
				soundBegin[]=
				{
					"begin1",
					0.25,
					"begin2",
					0.25,
					"begin3",
					0.25,
					"begin4",
					0.25
				};
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_m32_shot_soundset",
					"jsrs_12x7mm_reflector_1"
				};
			};
		};
	};
	class av_cz527_base: Rifle_Base_F 
	{
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_mar10_shot_soundset",
					"jsrs_mar10_shell_soundset",
					"jsrs_9x3mm_reflector_2",
					"jsrs_dmr_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_mar10_shot_silenced_soundset",
					"jsrs_mar10_shell_soundset",
					"jsrs_9x3mm_SD_reflector_2"
				};
			};
		};
	};
	class av_pkp_base: Rifle_Base_F
	{
		class Single: mode_semiauto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_pkm_shot_soundset",
					"jsrs_pkm_shell_soundset",
					"jsrs_762mm_echo_soundset",
					"jsrs_7x62mm_reflector_3"
				};
			};
			class silencedsound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_pkm_shot_silenced_soundset",
					"jsrs_pkm_shell_soundset",
					"jsrs_7x62mm_sd_reflector_1"
				};
			};
		};
		class FullAuto: mode_fullauto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_pkm_shot_soundset",
					"jsrs_pkm_shell_soundset",
					"jsrs_762mm_echo_soundset",
					"jsrs_7x62mm_reflector_3"
				};
			};
			class silencedsound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_pkm_shot_silenced_soundset",
					"jsrs_pkm_shell_soundset",
					"jsrs_7x62mm_sd_reflector_1"
				};
			};
		};
	};
	class av_pp2000: Pistol_Base_F
	{
		class Single: mode_semiauto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_pistol_shake_soundset",
					"jsrs_pp2000_shot_soundset",
					"jsrs_pp2000_shell_soundset",
					"jsrs_9mm_reflector_3"
				};
			};
		};
		class FullAuto: mode_fullauto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_pistol_shake_soundset",
					"jsrs_pp2000_shot_soundset",
					"jsrs_pp2000_shell_soundset",
					"jsrs_9mm_reflector_3"
				};
			};
		};
	};
	class arifle_av_sr3: Rifle_Base_F
	{
		class Single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_trg21_shot_soundset",
					"jsrs_trg20_shell_soundset",
					"jsrs_5x56mm_reflector_2",
					"jsrs_556mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_trg20_shot_silenced_soundset",
					"jsrs_trg20_shell_soundset",
					"jsrs_5x56mm_SD_reflector_2"
				};
			};
		};
		class FullAuto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_trg21_shot_soundset",
					"jsrs_trg20_shell_soundset",
					"jsrs_5x56mm_reflector_2",
					"jsrs_556mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_trg20_shot_silenced_soundset",
					"jsrs_trg20_shell_soundset",
					"jsrs_5x56mm_SD_reflector_2"
				};
			};
		};
	};
	class srifle_av_SVT_base: Rifle_Base_F
	{
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_rahim_shot_soundset",
					"jsrs_rahim_shell_soundset",
					"jsrs_7x62mm_reflector_4",
					"jsrs_762mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_rahim_shot_silenced_soundset",
					"jsrs_rahim_shell_soundset",
					"jsrs_7x62mm_SD_reflector_4"
				};
			};
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_rahim_shot_soundset",
					"jsrs_rahim_shell_soundset",
					"jsrs_7x62mm_reflector_4",
					"jsrs_762mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_rahim_shot_silenced_soundset",
					"jsrs_rahim_shell_soundset",
					"jsrs_7x62mm_SD_reflector_4"
				};
			};
		};
	};
	class av_tt: Pistol_Base_F
	{
		class Single: mode_semiauto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"rhsusf\addons\rhsusf_sounds\m1911A1\m1911A1_1",
					2,
					1,
					1400
				};
				begin2[]=
				{
					"rhsusf\addons\rhsusf_sounds\m1911A1\m1911A1_2",
					2,
					1,
					1400
				};
				soundBegin[]=
				{
					"begin1",
					0.5,
					"begin2",
					0.5
				};
				soundsetshot[]=
				{
					"jsrs_pistol_shake_soundset",
					"jsrs_acpc_shot_soundset",
					"jsrs_m1911a1_shell_soundset",
					"jsrs_small_echo_soundset",
					"jsrs_cal45_reflector_1"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
			};
		};
	};
	class arifle_sa_vssk_base: Rifle_Base_F 
	{
		class single: mode_semiauto
		{
			sounds[]=
			{
				"standardsound"
			};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_asp1_shot_soundset",
					"jsrs_asp1_shell_soundset",
					"jsrs_9x3mm_SD_reflector_4"
				};
			};
		};
	};
	class arifle_av_asval: arifle_av_asval_Base 
	{
		class Single: mode_semiauto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_asval_shot_soundset",
					"jsrs_asval_shell_soundset",
					"jsrs_9x3mm_sd_reflector_1"
				};
			};
			class Silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_asval_shot_soundset",
					"jsrs_asval_shell_soundset",
					"jsrs_9x3mm_sd_reflector_1"
				};
			};
		};
		class FullAuto: mode_fullauto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_asval_shot_soundset",
					"jsrs_asval_shell_soundset",
					"jsrs_9x3mm_sd_reflector_1"
				};
			};
			class Silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_asval_shot_soundset",
					"jsrs_asval_shell_soundset",
					"jsrs_9x3mm_sd_reflector_1"
				};
			};
		};
	};
	class av_asval_pl: arifle_av_asval_Base
	{
		class Single: mode_semiauto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_asval_shot_soundset",
					"jsrs_asval_shell_soundset",
					"jsrs_9x3mm_sd_reflector_1"
				};
			};
			class Silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_asval_shot_soundset",
					"jsrs_asval_shell_soundset",
					"jsrs_9x3mm_sd_reflector_1"
				};
			};
		};
		class FullAuto: mode_fullauto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_asval_shot_soundset",
					"jsrs_asval_shell_soundset",
					"jsrs_9x3mm_sd_reflector_1"
				};
			};
			class Silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_asval_shot_soundset",
					"jsrs_asval_shell_soundset",
					"jsrs_9x3mm_sd_reflector_1"
				};
			};
		};
	};
	class arifle_av_vss: arifle_av_asval_Base
	{
		class Single: mode_semiauto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_asval_shot_soundset",
					"jsrs_asval_shell_soundset",
					"jsrs_9x3mm_sd_reflector_1"
				};
			};
			class Silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_asval_shot_soundset",
					"jsrs_asval_shell_soundset",
					"jsrs_9x3mm_sd_reflector_1"
				};
			};
		};
		class FullAuto: mode_fullauto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_asval_shot_soundset",
					"jsrs_asval_shell_soundset",
					"jsrs_9x3mm_sd_reflector_1"
				};
			};
			class Silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_asval_shot_soundset",
					"jsrs_asval_shell_soundset",
					"jsrs_9x3mm_sd_reflector_1"
				};
			};
		};
	};
	class arifle_av_vsk: Rifle_Base_F
	{
		class Single: mode_semiauto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_pistol_shake_soundset",
					"jsrs_pp2000_shot_soundset",
					"jsrs_pp2000_shell_soundset",
					"jsrs_9mm_reflector_3"
				};
			};
		};
		class FullAuto: mode_fullauto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_pistol_shake_soundset",
					"jsrs_pp2000_shot_soundset",
					"jsrs_pp2000_shell_soundset",
					"jsrs_9mm_reflector_3"
				};
			};
		};
	};
	class av_9A91: av_kiparis
	{
		class Single: mode_semiauto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_pistol_shake_soundset",
					"jsrs_pp2000_shot_soundset",
					"jsrs_pp2000_shell_soundset",
					"jsrs_9mm_reflector_3"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_pistol_shake_soundset",
					"jsrs_protc_shot_silenced_soundset",
					"jsrs_protc_shell_soundset",
					"jsrs_9mm_SD_reflector_3"
				};
			};
		};
		class FullAuto: mode_fullauto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_pistol_shake_soundset",
					"jsrs_pp2000_shot_soundset",
					"jsrs_pp2000_shell_soundset",
					"jsrs_9mm_reflector_3"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_pistol_shake_soundset",
					"jsrs_protc_shot_silenced_soundset",
					"jsrs_protc_shell_soundset",
					"jsrs_9mm_SD_reflector_3"
				};
			};
		};
	};
	class av_kedr: Rifle_Base_F
	{
		class Single: mode_semiauto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_pistol_shake_soundset",
					"jsrs_pp2000_shot_soundset",
					"jsrs_pp2000_shell_soundset",
					"jsrs_9mm_reflector_3"
				};
			};
		};
		class FullAuto: mode_fullauto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_pistol_shake_soundset",
					"jsrs_pp2000_shot_soundset",
					"jsrs_pp2000_shell_soundset",
					"jsrs_9mm_reflector_3"
				};
			};
		};
	};
	class arifle_av_sr2m: arifle_av_sr3
	{
		class Single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_trg21_shot_soundset",
					"jsrs_trg20_shell_soundset",
					"jsrs_5x56mm_reflector_2",
					"jsrs_556mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_trg20_shot_silenced_soundset",
					"jsrs_trg20_shell_soundset",
					"jsrs_5x56mm_SD_reflector_2"
				};
			};
		};
		class FullAuto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_trg21_shot_soundset",
					"jsrs_trg20_shell_soundset",
					"jsrs_5x56mm_reflector_2",
					"jsrs_556mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_trg20_shot_silenced_soundset",
					"jsrs_trg20_shell_soundset",
					"jsrs_5x56mm_SD_reflector_2"
				};
			};
		};
	};
	class arifle_av_sr22m: Pistol_Base_F 
	{
		class Single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_trg21_shot_soundset",
					"jsrs_trg20_shell_soundset",
					"jsrs_5x56mm_reflector_2",
					"jsrs_556mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_trg20_shot_silenced_soundset",
					"jsrs_trg20_shell_soundset",
					"jsrs_5x56mm_SD_reflector_2"
				};
			};
		};
		class FullAuto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_trg21_shot_soundset",
					"jsrs_trg20_shell_soundset",
					"jsrs_5x56mm_reflector_2",
					"jsrs_556mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_trg20_shot_silenced_soundset",
					"jsrs_trg20_shell_soundset",
					"jsrs_5x56mm_SD_reflector_2"
				};
			};
		};
	};
	class arifle_av_vityaz: arifle_av_sr3 
	{
		class Single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_trg21_shot_soundset",
					"jsrs_trg20_shell_soundset",
					"jsrs_5x56mm_reflector_2",
					"jsrs_556mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_trg20_shot_silenced_soundset",
					"jsrs_trg20_shell_soundset",
					"jsrs_5x56mm_SD_reflector_2"
				};
			};
		};
		class FullAuto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_trg21_shot_soundset",
					"jsrs_trg20_shell_soundset",
					"jsrs_5x56mm_reflector_2",
					"jsrs_556mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_trg20_shot_silenced_soundset",
					"jsrs_trg20_shell_soundset",
					"jsrs_5x56mm_SD_reflector_2"
				};
			};
		};
	};
	class av_vityaz_pist: arifle_av_vityaz 
	{
		class Single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_trg21_shot_soundset",
					"jsrs_trg20_shell_soundset",
					"jsrs_5x56mm_reflector_2",
					"jsrs_556mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_trg20_shot_silenced_soundset",
					"jsrs_trg20_shell_soundset",
					"jsrs_5x56mm_SD_reflector_2"
				};
			};
		};
		class FullAuto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_trg21_shot_soundset",
					"jsrs_trg20_shell_soundset",
					"jsrs_5x56mm_reflector_2",
					"jsrs_556mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_trg20_shot_silenced_soundset",
					"jsrs_trg20_shell_soundset",
					"jsrs_5x56mm_SD_reflector_2"
				};
			};
		};
	};
	class av_glaunchM79_Base: av_glaunch_Base
	{
		class Single: mode_semiauto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				soundClosure[]={};
				begin1[]=
				{
					"JSRS_Soundmod_Snd_Weapons\Sounds\Shot\UGL\Close_1.ogg",
					1.8,
					1,
					800
				};
				begin2[]=
				{
					"JSRS_Soundmod_Snd_Weapons\Sounds\Shot\UGL\Close_2.ogg",
					1.8,
					1,
					800
				};
				begin3[]=
				{
					"JSRS_Soundmod_Snd_Weapons\Sounds\Shot\UGL\Close_3.ogg",
					1.8,
					1,
					800
				};
				begin4[]=
				{
					"JSRS_Soundmod_Snd_Weapons\Sounds\Shot\UGL\Close_4.ogg",
					1.8,
					1,
					800
				};
				soundBegin[]=
				{
					"begin1",
					0.25,
					"begin2",
					0.25,
					"begin3",
					0.25,
					"begin4",
					0.25
				};
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_m32_shot_soundset",
					"jsrs_12x7mm_reflector_1"
				};
			};
		};
	};
	class av_launch6_Base: av_glaunch_Base
	{
		class Single: mode_semiauto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				soundClosure[]={};
				begin1[]=
				{
					"JSRS_Soundmod_Snd_Weapons\Sounds\Shot\UGL\Close_1.ogg",
					1.8,
					1,
					800
				};
				begin2[]=
				{
					"JSRS_Soundmod_Snd_Weapons\Sounds\Shot\UGL\Close_2.ogg",
					1.8,
					1,
					800
				};
				begin3[]=
				{
					"JSRS_Soundmod_Snd_Weapons\Sounds\Shot\UGL\Close_3.ogg",
					1.8,
					1,
					800
				};
				begin4[]=
				{
					"JSRS_Soundmod_Snd_Weapons\Sounds\Shot\UGL\Close_4.ogg",
					1.8,
					1,
					800
				};
				soundBegin[]=
				{
					"begin1",
					0.25,
					"begin2",
					0.25,
					"begin3",
					0.25,
					"begin4",
					0.25
				};
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_m32_shot_soundset",
					"jsrs_12x7mm_reflector_1"
				};
			};
		};
	};
	class av_RG6: av_glaunch_Base
	{
		class Single: mode_semiauto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				soundClosure[]={};
				begin1[]=
				{
					"JSRS_Soundmod_Snd_Weapons\Sounds\Shot\UGL\Close_1.ogg",
					1.8,
					1,
					800
				};
				begin2[]=
				{
					"JSRS_Soundmod_Snd_Weapons\Sounds\Shot\UGL\Close_2.ogg",
					1.8,
					1,
					800
				};
				begin3[]=
				{
					"JSRS_Soundmod_Snd_Weapons\Sounds\Shot\UGL\Close_3.ogg",
					1.8,
					1,
					800
				};
				begin4[]=
				{
					"JSRS_Soundmod_Snd_Weapons\Sounds\Shot\UGL\Close_4.ogg",
					1.8,
					1,
					800
				};
				soundBegin[]=
				{
					"begin1",
					0.25,
					"begin2",
					0.25,
					"begin3",
					0.25,
					"begin4",
					0.25
				};
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_m32_shot_soundset",
					"jsrs_12x7mm_reflector_1"
				};
			};
		};
	};
	class av_LeeEn: av_cz527_base 
	{
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_mar10_shot_soundset",
					"jsrs_mar10_shell_soundset",
					"jsrs_9x3mm_reflector_2",
					"jsrs_dmr_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_mar10_shot_silenced_soundset",
					"jsrs_mar10_shell_soundset",
					"jsrs_9x3mm_SD_reflector_2"
				};
			};
		};
	};
	class av_soc_vepr: av_saiga_mk 
	{
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_rahim_shot_soundset",
					"jsrs_rahim_shell_soundset",
					"jsrs_7x62mm_reflector_1",
					"jsrs_762mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_rahim_shot_silenced_soundset",
					"jsrs_rahim_shell_soundset",
					"jsrs_7x62mm_SD_reflector_1"
				};
			};
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_rahim_shot_soundset",
					"jsrs_rahim_shell_soundset",
					"jsrs_7x62mm_reflector_1",
					"jsrs_762mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_rahim_shot_silenced_soundset",
					"jsrs_rahim_shell_soundset",
					"jsrs_7x62mm_SD_reflector_1"
				};
			};
		};
	};
	class av_Saiga12K: av_vepr12K
	{
		class Single: mode_semiauto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_m590_shot_soundset",
					"jsrs_m590_shell_soundset",
					"jsrs_12x7mm_reflector_2"
				};
			};
		};
	};
	class av_rem870: Rifle_Base_F
	{
		class Single: mode_semiauto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_m590_shot_soundset",
					"jsrs_m590_shell_soundset",
					"jsrs_12x7mm_reflector_2"
				};
			};
		};
		rhs_boltActionSound[]=
		{
			"JSRS_Soundmod_Snd_Weapons\Sounds\Reload\RHS_M590_Pump.ogg",
			2,
			1,
			35
		};
	};
	class AV_spas12: Rifle_Base_F
	{
		class Single: mode_semiauto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_m590_shot_soundset",
					"jsrs_m590_shell_soundset",
					"jsrs_12x7mm_reflector_2"
				};
			};
		};
		rhs_boltActionSound[]=
		{
			"JSRS_Soundmod_Snd_Weapons\Sounds\Reload\RHS_M590_Pump.ogg",
			2,
			1,
			35
		};
	};
	class av_obrez: Rifle_Base_F
	{
		class Single: mode_semiauto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_m590_shot_soundset",
					"jsrs_m590_shell_soundset",
					"jsrs_12x7mm_reflector_2"
				};
			};
		};
		rhs_boltActionSound[]=
		{
			"JSRS_Soundmod_Snd_Weapons\Sounds\Reload\RHS_M590_Pump.ogg",
			2,
			1,
			35
		};
	};
	class av_obr_1: Rifle_Base_F
	{
		class Single: mode_semiauto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_m590_shot_soundset",
					"jsrs_m590_shell_soundset",
					"jsrs_12x7mm_reflector_2"
				};
			};
		};
		rhs_boltActionSound[]=
		{
			"JSRS_Soundmod_Snd_Weapons\Sounds\Reload\RHS_M590_Pump.ogg",
			2,
			1,
			35
		};
	};
	class AV_ks23: Rifle_Base_F
	{
		class Single: mode_semiauto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_m590_shot_soundset",
					"jsrs_m590_shell_soundset",
					"jsrs_12x7mm_reflector_2"
				};
			};
		};
		rhs_boltActionSound[]=
		{
			"JSRS_Soundmod_Snd_Weapons\Sounds\Reload\RHS_M590_Pump.ogg",
			2,
			1,
			35
		};
	};
	class AV_M1014: Rifle_Base_F
	{
		class Single: mode_semiauto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_m590_shot_soundset",
					"jsrs_m590_shell_soundset",
					"jsrs_12x7mm_reflector_2"
				};
			};
		};
		rhs_boltActionSound[]=
		{
			"JSRS_Soundmod_Snd_Weapons\Sounds\Reload\RHS_M590_Pump.ogg",
			2,
			1,
			35
		};
	};
	class AV_fort500: Rifle_Base_F
	{
		class Single: mode_semiauto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_m590_shot_soundset",
					"jsrs_m590_shell_soundset",
					"jsrs_12x7mm_reflector_2"
				};
			};
		};
		rhs_boltActionSound[]=
		{
			"JSRS_Soundmod_Snd_Weapons\Sounds\Reload\RHS_M590_Pump.ogg",
			2,
			1,
			35
		};
	};
	class m712: Rifle_Base_F 
	{
		class Single: mode_semiauto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_m590_shot_soundset",
					"jsrs_m590_shell_soundset",
					"jsrs_12x7mm_reflector_2"
				};
			};
		};
		rhs_boltActionSound[]=
		{
			"JSRS_Soundmod_Snd_Weapons\Sounds\Reload\RHS_M590_Pump.ogg",
			2,
			1,
			35
		};
	};
	class av_ots: Pistol_Base_F
	{
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_pistol_shake_soundset",
					"jsrs_pdw2000_shot_soundset",
					"jsrs_pdw2000_shell_soundset",
					"jsrs_9mm_reflector_3",
					"jsrs_smg_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_pistol_shake_soundset",
					"jsrs_pdw2000_shot_silenced_soundset",
					"jsrs_pdw2000_shell_soundset",
					"jsrs_9mm_SD_reflector_3"
				};
			};
		};
		class burst: mode_burst2
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_pistol_shake_soundset",
					"jsrs_pdw2000_shot_soundset",
					"jsrs_pdw2000_shell_soundset",
					"jsrs_9mm_reflector_3",
					"jsrs_smg_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_pistol_shake_soundset",
					"jsrs_pdw2000_shot_silenced_soundset",
					"jsrs_pdw2000_shell_soundset",
					"jsrs_9mm_SD_reflector_3"
				};
			};
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_pistol_shake_soundset",
					"jsrs_pdw2000_shot_soundset",
					"jsrs_pdw2000_shell_soundset",
					"jsrs_9mm_reflector_3",
					"jsrs_smg_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_pistol_shake_soundset",
					"jsrs_pdw2000_shot_silenced_soundset",
					"jsrs_pdw2000_shell_soundset",
					"jsrs_9mm_SD_reflector_3"
				};
			};
		};
	};
	class av_kedrpp: Pistol_Base_F
	{
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_pistol_shake_soundset",
					"jsrs_pdw2000_shot_soundset",
					"jsrs_pdw2000_shell_soundset",
					"jsrs_9mm_reflector_3",
					"jsrs_smg_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_pistol_shake_soundset",
					"jsrs_pdw2000_shot_silenced_soundset",
					"jsrs_pdw2000_shell_soundset",
					"jsrs_9mm_SD_reflector_3"
				};
			};
		};
		class burst: mode_burst2
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_pistol_shake_soundset",
					"jsrs_pdw2000_shot_soundset",
					"jsrs_pdw2000_shell_soundset",
					"jsrs_9mm_reflector_3",
					"jsrs_smg_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_pistol_shake_soundset",
					"jsrs_pdw2000_shot_silenced_soundset",
					"jsrs_pdw2000_shell_soundset",
					"jsrs_9mm_SD_reflector_3"
				};
			};
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_pistol_shake_soundset",
					"jsrs_pdw2000_shot_soundset",
					"jsrs_pdw2000_shell_soundset",
					"jsrs_9mm_reflector_3",
					"jsrs_smg_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_pistol_shake_soundset",
					"jsrs_pdw2000_shot_silenced_soundset",
					"jsrs_pdw2000_shell_soundset",
					"jsrs_9mm_SD_reflector_3"
				};
			};
		};
	};
	class av_uzi: Pistol_Base_F 
	{
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_pistol_shake_soundset",
					"jsrs_pdw2000_shot_soundset",
					"jsrs_pdw2000_shell_soundset",
					"jsrs_9mm_reflector_3",
					"jsrs_smg_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_pistol_shake_soundset",
					"jsrs_pdw2000_shot_silenced_soundset",
					"jsrs_pdw2000_shell_soundset",
					"jsrs_9mm_SD_reflector_3"
				};
			};
		};
		class burst: mode_burst2
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_pistol_shake_soundset",
					"jsrs_pdw2000_shot_soundset",
					"jsrs_pdw2000_shell_soundset",
					"jsrs_9mm_reflector_3",
					"jsrs_smg_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_pistol_shake_soundset",
					"jsrs_pdw2000_shot_silenced_soundset",
					"jsrs_pdw2000_shell_soundset",
					"jsrs_9mm_SD_reflector_3"
				};
			};
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_pistol_shake_soundset",
					"jsrs_pdw2000_shot_soundset",
					"jsrs_pdw2000_shell_soundset",
					"jsrs_9mm_reflector_3",
					"jsrs_smg_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_pistol_shake_soundset",
					"jsrs_pdw2000_shot_silenced_soundset",
					"jsrs_pdw2000_shell_soundset",
					"jsrs_9mm_SD_reflector_3"
				};
			};
		};
	};
	class av_makarov: av_pb
	{
		sounds[]=
		{
			"StandardSound",
			"SilencedSound"
		};
		class BaseSoundModeType
		{
			soundClosure[]={};
		};
		class standardsound: BaseSoundModeType
		{
			soundsetshot[]=
			{
				"jsrs_pistol_shake_soundset",
				"jsrs_pm9m_shot_soundset",
				"jsrs_pm9m_shell_soundset",
				"jsrs_9mm_reflector_2",
				"jsrs_small_echo_soundset"
			};
		};
		class silencedsound: BaseSoundModeType
		{
			soundsetshot[]=
			{
				"jsrs_pistol_shake_soundset",
				"jsrs_pm9m_shot_silenced_soundset",
				"jsrs_pm9m_shell_soundset",
				"jsrs_9mm_SD_reflector_2"
			};
		};
	};
	class av_sr1m: Pistol_Base_F 
	{
		sounds[]=
		{
			"StandardSound",
			"SilencedSound"
		};
		class BaseSoundModeType
		{
			soundClosure[]={};
		};
		class standardsound: BaseSoundModeType
		{
			soundsetshot[]=
			{
				"jsrs_pistol_shake_soundset",
				"jsrs_pm9m_shot_soundset",
				"jsrs_pm9m_shell_soundset",
				"jsrs_9mm_reflector_2",
				"jsrs_small_echo_soundset"
			};
		};
		class silencedsound: BaseSoundModeType
		{
			soundsetshot[]=
			{
				"jsrs_pistol_shake_soundset",
				"jsrs_pm9m_shot_silenced_soundset",
				"jsrs_pm9m_shell_soundset",
				"jsrs_9mm_SD_reflector_2"
			};
		};
	};
	class arifle_av_akms_Base: arifle_av_akmm
	{
		class Single: mode_semiauto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak_m_shot_soundset",
					"jsrs_ak_m_shell_soundset",
					"jsrs_762mm_echo_soundset",
					"jsrs_7x62mm_reflector_2"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_silenced_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_7x62mm_sd_reflector_1"
				};
			};
		};
		class FullAuto: mode_fullauto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak_m_shot_soundset",
					"jsrs_ak_m_shell_soundset",
					"jsrs_762mm_echo_soundset",
					"jsrs_7x62mm_reflector_2"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_silenced_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_7x62mm_sd_reflector_1"
				};
			};
		};
	};
	class arifle_av_akms: arifle_av_akms_Base
	{
		class Single: mode_semiauto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak_m_shot_soundset",
					"jsrs_ak_m_shell_soundset",
					"jsrs_762mm_echo_soundset",
					"jsrs_7x62mm_reflector_2"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_silenced_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_7x62mm_sd_reflector_1"
				};
			};
		};
		class FullAuto: mode_fullauto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak_m_shot_soundset",
					"jsrs_ak_m_shell_soundset",
					"jsrs_762mm_echo_soundset",
					"jsrs_7x62mm_reflector_2"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_silenced_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_7x62mm_sd_reflector_1"
				};
			};
		};
	};
	class arifle_av_akm: arifle_av_akms_Base
	{
		class Single: mode_semiauto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak_m_shot_soundset",
					"jsrs_ak_m_shell_soundset",
					"jsrs_762mm_echo_soundset",
					"jsrs_7x62mm_reflector_2"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_silenced_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_7x62mm_sd_reflector_1"
				};
			};
		};
		class FullAuto: mode_fullauto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak_m_shot_soundset",
					"jsrs_ak_m_shell_soundset",
					"jsrs_762mm_echo_soundset",
					"jsrs_7x62mm_reflector_2"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_silenced_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_7x62mm_sd_reflector_1"
				};
			};
		};
	};
	class arifle_av_akms_f: arifle_av_akms_Base
	{
		class Single: mode_semiauto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak_m_shot_soundset",
					"jsrs_ak_m_shell_soundset",
					"jsrs_762mm_echo_soundset",
					"jsrs_7x62mm_reflector_2"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_silenced_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_7x62mm_sd_reflector_1"
				};
			};
		};
		class FullAuto: mode_fullauto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak_m_shot_soundset",
					"jsrs_ak_m_shell_soundset",
					"jsrs_762mm_echo_soundset",
					"jsrs_7x62mm_reflector_2"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_silenced_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_7x62mm_sd_reflector_1"
				};
			};
		};
	};
	class arifle_av_104: arifle_av_akms_Base
	{
		class Single: mode_semiauto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak103_shot_soundset",
					"jsrs_ak103_shell_soundset",
					"jsrs_556mm_echo_soundset",
					"jsrs_5x56mm_reflector_4"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_silenced_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_7x62mm_sd_reflector_1"
				};
			};
		};
		class FullAuto: mode_fullauto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak103_shot_soundset",
					"jsrs_ak103_shell_soundset",
					"jsrs_556mm_echo_soundset",
					"jsrs_5x56mm_reflector_4"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_silenced_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_7x62mm_sd_reflector_1"
				};
			};
		};
	};
	class arifle_av_103: arifle_av_akms_Base
	{
		class Single: mode_semiauto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak103_shot_soundset",
					"jsrs_ak103_shell_soundset",
					"jsrs_556mm_echo_soundset",
					"jsrs_5x56mm_reflector_4"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_silenced_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_7x62mm_sd_reflector_1"
				};
			};
		};
		class FullAuto: mode_fullauto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak103_shot_soundset",
					"jsrs_ak103_shell_soundset",
					"jsrs_556mm_echo_soundset",
					"jsrs_5x56mm_reflector_4"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_silenced_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_7x62mm_sd_reflector_1"
				};
			};
		};
	};
	class arifle_av_ak103s_gl_Base: arifle_av_akms_Base
	{
		class Single: mode_semiauto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak103_shot_soundset",
					"jsrs_ak103_shell_soundset",
					"jsrs_556mm_echo_soundset",
					"jsrs_5x56mm_reflector_4"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_silenced_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_7x62mm_sd_reflector_1"
				};
			};
		};
		class burst: mode_burst2
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak103_shot_soundset",
					"jsrs_ak103_shell_soundset",
					"jsrs_556mm_echo_soundset",
					"jsrs_5x56mm_reflector_4"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_silenced_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_7x62mm_sd_reflector_1"
				};
			};
		};
		class FullAuto: mode_fullauto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak103_shot_soundset",
					"jsrs_ak103_shell_soundset",
					"jsrs_556mm_echo_soundset",
					"jsrs_5x56mm_reflector_4"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_silenced_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_7x62mm_sd_reflector_1"
				};
			};
		};
	};
	class arifle_av_103_gp: arifle_av_ak103s_gl_Base
	{
		class Single: mode_semiauto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak103_shot_soundset",
					"jsrs_ak103_shell_soundset",
					"jsrs_556mm_echo_soundset",
					"jsrs_5x56mm_reflector_4"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_silenced_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_7x62mm_sd_reflector_1"
				};
			};
		};
		class FullAuto: mode_fullauto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak103_shot_soundset",
					"jsrs_ak103_shell_soundset",
					"jsrs_556mm_echo_soundset",
					"jsrs_5x56mm_reflector_4"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_silenced_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_7x62mm_sd_reflector_1"
				};
			};
		};
	};
	class arifle_akm_gp: arifle_av_103_gp
	{
		class Single: mode_semiauto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak_m_shot_soundset",
					"jsrs_ak_m_shell_soundset",
					"jsrs_762mm_echo_soundset",
					"jsrs_7x62mm_reflector_2"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_silenced_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_7x62mm_sd_reflector_1"
				};
			};
		};
		class FullAuto: mode_fullauto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak_m_shot_soundset",
					"jsrs_ak_m_shell_soundset",
					"jsrs_762mm_echo_soundset",
					"jsrs_7x62mm_reflector_2"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_silenced_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_7x62mm_sd_reflector_1"
				};
			};
		};
	};
	class arifle_akms_gp: arifle_akm_gp
	{
		class Single: mode_semiauto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak_m_shot_soundset",
					"jsrs_ak_m_shell_soundset",
					"jsrs_762mm_echo_soundset",
					"jsrs_7x62mm_reflector_2"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_silenced_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_7x62mm_sd_reflector_1"
				};
			};
		};
		class FullAuto: mode_fullauto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak_m_shot_soundset",
					"jsrs_ak_m_shell_soundset",
					"jsrs_762mm_echo_soundset",
					"jsrs_7x62mm_reflector_2"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_silenced_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_7x62mm_sd_reflector_1"
				};
			};
		};
	};
	class arifle_akmsb_gp: arifle_akms_gp
	{
		class Single: mode_semiauto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak_m_shot_soundset",
					"jsrs_ak_m_shell_soundset",
					"jsrs_762mm_echo_soundset",
					"jsrs_7x62mm_reflector_2"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_silenced_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_7x62mm_sd_reflector_1"
				};
			};
		};
		class FullAuto: mode_fullauto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak_m_shot_soundset",
					"jsrs_ak_m_shell_soundset",
					"jsrs_762mm_echo_soundset",
					"jsrs_7x62mm_reflector_2"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_silenced_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_7x62mm_sd_reflector_1"
				};
			};
		};
	};
	class arifle_akmm_gp: arifle_av_akmm
	{
		class Single: mode_semiauto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak_m_shot_soundset",
					"jsrs_ak_m_shell_soundset",
					"jsrs_762mm_echo_soundset",
					"jsrs_7x62mm_reflector_2"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_silenced_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_7x62mm_sd_reflector_1"
				};
			};
		};
		class FullAuto: mode_fullauto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak_m_shot_soundset",
					"jsrs_ak_m_shell_soundset",
					"jsrs_762mm_echo_soundset",
					"jsrs_7x62mm_reflector_2"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_silenced_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_7x62mm_sd_reflector_1"
				};
			};
		};
	};
	class arifle_ak_sf_Base: arifle_av_akmm
	{
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak12_shot_soundset",
					"jsrs_ak12_shell_soundset",
					"jsrs_7x62mm_reflector_2",
					"jsrs_762mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak12_shot_silenced_soundset",
					"jsrs_ak12_shell_soundset",
					"jsrs_7x62mm_SD_reflector_2"
				};
			};
		};
		class burst: mode_burst2
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak12_shot_soundset",
					"jsrs_ak12_shell_soundset",
					"jsrs_7x62mm_reflector_2",
					"jsrs_762mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak12_shot_silenced_soundset",
					"jsrs_ak12_shell_soundset",
					"jsrs_7x62mm_SD_reflector_2"
				};
			};
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak12_shot_soundset",
					"jsrs_ak12_shell_soundset",
					"jsrs_7x62mm_reflector_2",
					"jsrs_762mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak12_shot_silenced_soundset",
					"jsrs_ak12_shell_soundset",
					"jsrs_7x62mm_SD_reflector_2"
				};
			};
		};
	};
	class arifle_ak_sf: arifle_ak_sf_Base
	{
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak12_shot_soundset",
					"jsrs_ak12_shell_soundset",
					"jsrs_7x62mm_reflector_2",
					"jsrs_762mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak12_shot_silenced_soundset",
					"jsrs_ak12_shell_soundset",
					"jsrs_7x62mm_SD_reflector_2"
				};
			};
		};
		class burst: mode_burst2
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak12_shot_soundset",
					"jsrs_ak12_shell_soundset",
					"jsrs_7x62mm_reflector_2",
					"jsrs_762mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak12_shot_silenced_soundset",
					"jsrs_ak12_shell_soundset",
					"jsrs_7x62mm_SD_reflector_2"
				};
			};
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak12_shot_soundset",
					"jsrs_ak12_shell_soundset",
					"jsrs_7x62mm_reflector_2",
					"jsrs_762mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak12_shot_silenced_soundset",
					"jsrs_ak12_shell_soundset",
					"jsrs_7x62mm_SD_reflector_2"
				};
			};
		};
	};
	class arifle_av_ak12: arifle_av_ak12_Base
	{
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak12_shot_soundset",
					"jsrs_ak12_shell_soundset",
					"jsrs_7x62mm_reflector_2",
					"jsrs_762mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak12_shot_silenced_soundset",
					"jsrs_ak12_shell_soundset",
					"jsrs_7x62mm_SD_reflector_2"
				};
			};
		};
		class burst: mode_burst2
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak12_shot_soundset",
					"jsrs_ak12_shell_soundset",
					"jsrs_7x62mm_reflector_2",
					"jsrs_762mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak12_shot_silenced_soundset",
					"jsrs_ak12_shell_soundset",
					"jsrs_7x62mm_SD_reflector_2"
				};
			};
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak12_shot_soundset",
					"jsrs_ak12_shell_soundset",
					"jsrs_7x62mm_reflector_2",
					"jsrs_762mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak12_shot_silenced_soundset",
					"jsrs_ak12_shell_soundset",
					"jsrs_7x62mm_SD_reflector_2"
				};
			};
		};
	};
	class arifle_av_ak12_gl_Base: arifle_av_ak12_Base
	{
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak12_shot_soundset",
					"jsrs_ak12_shell_soundset",
					"jsrs_7x62mm_reflector_2",
					"jsrs_762mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak12_shot_silenced_soundset",
					"jsrs_ak12_shell_soundset",
					"jsrs_7x62mm_SD_reflector_2"
				};
			};
		};
		class burst: mode_burst2
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak12_shot_soundset",
					"jsrs_ak12_shell_soundset",
					"jsrs_7x62mm_reflector_2",
					"jsrs_762mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak12_shot_silenced_soundset",
					"jsrs_ak12_shell_soundset",
					"jsrs_7x62mm_SD_reflector_2"
				};
			};
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak12_shot_soundset",
					"jsrs_ak12_shell_soundset",
					"jsrs_7x62mm_reflector_2",
					"jsrs_762mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak12_shot_silenced_soundset",
					"jsrs_ak12_shell_soundset",
					"jsrs_7x62mm_SD_reflector_2"
				};
			};
		};
	};
	class arifle_av_ak12_gl: arifle_av_ak12_gl_Base
	{
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak12_shot_soundset",
					"jsrs_ak12_shell_soundset",
					"jsrs_7x62mm_reflector_2",
					"jsrs_762mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak12_shot_silenced_soundset",
					"jsrs_ak12_shell_soundset",
					"jsrs_7x62mm_SD_reflector_2"
				};
			};
		};
		class burst: mode_burst2
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak12_shot_soundset",
					"jsrs_ak12_shell_soundset",
					"jsrs_7x62mm_reflector_2",
					"jsrs_762mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak12_shot_silenced_soundset",
					"jsrs_ak12_shell_soundset",
					"jsrs_7x62mm_SD_reflector_2"
				};
			};
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak12_shot_soundset",
					"jsrs_ak12_shell_soundset",
					"jsrs_7x62mm_reflector_2",
					"jsrs_762mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak12_shot_silenced_soundset",
					"jsrs_ak12_shell_soundset",
					"jsrs_7x62mm_SD_reflector_2"
				};
			};
		};
	};
	class srifle_av_sv12_base: arifle_av_ak12_Base
	{
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak12_shot_soundset",
					"jsrs_ak12_shell_soundset",
					"jsrs_7x62mm_reflector_2",
					"jsrs_762mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak12_shot_silenced_soundset",
					"jsrs_ak12_shell_soundset",
					"jsrs_7x62mm_SD_reflector_2"
				};
			};
		};
		class burst: mode_burst2
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak12_shot_soundset",
					"jsrs_ak12_shell_soundset",
					"jsrs_7x62mm_reflector_2",
					"jsrs_762mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak12_shot_silenced_soundset",
					"jsrs_ak12_shell_soundset",
					"jsrs_7x62mm_SD_reflector_2"
				};
			};
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak12_shot_soundset",
					"jsrs_ak12_shell_soundset",
					"jsrs_7x62mm_reflector_2",
					"jsrs_762mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak12_shot_silenced_soundset",
					"jsrs_ak12_shell_soundset",
					"jsrs_7x62mm_SD_reflector_2"
				};
			};
		};
	};
	class srifle_av_sv12: arifle_av_ak12_Base
	{
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak12_shot_soundset",
					"jsrs_ak12_shell_soundset",
					"jsrs_7x62mm_reflector_2",
					"jsrs_762mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak12_shot_silenced_soundset",
					"jsrs_ak12_shell_soundset",
					"jsrs_7x62mm_SD_reflector_2"
				};
			};
		};
		class burst: mode_burst2
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak12_shot_soundset",
					"jsrs_ak12_shell_soundset",
					"jsrs_7x62mm_reflector_2",
					"jsrs_762mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak12_shot_silenced_soundset",
					"jsrs_ak12_shell_soundset",
					"jsrs_7x62mm_SD_reflector_2"
				};
			};
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak12_shot_soundset",
					"jsrs_ak12_shell_soundset",
					"jsrs_7x62mm_reflector_2",
					"jsrs_762mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak12_shot_silenced_soundset",
					"jsrs_ak12_shell_soundset",
					"jsrs_7x62mm_SD_reflector_2"
				};
			};
		};
	};
	class ak12_uw: arifle_av_ak12_Base
	{
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak12_shot_soundset",
					"jsrs_ak12_shell_soundset",
					"jsrs_7x62mm_reflector_2",
					"jsrs_762mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak12_shot_silenced_soundset",
					"jsrs_ak12_shell_soundset",
					"jsrs_7x62mm_SD_reflector_2"
				};
			};
		};
		class burst: mode_burst2
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak12_shot_soundset",
					"jsrs_ak12_shell_soundset",
					"jsrs_7x62mm_reflector_2",
					"jsrs_762mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak12_shot_silenced_soundset",
					"jsrs_ak12_shell_soundset",
					"jsrs_7x62mm_SD_reflector_2"
				};
			};
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak12_shot_soundset",
					"jsrs_ak12_shell_soundset",
					"jsrs_7x62mm_reflector_2",
					"jsrs_762mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak12_shot_silenced_soundset",
					"jsrs_ak12_shell_soundset",
					"jsrs_7x62mm_SD_reflector_2"
				};
			};
		};
	};
	class arifle_av_bul: arifle_av_ak12_Base
	{
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak12_shot_soundset",
					"jsrs_ak12_shell_soundset",
					"jsrs_7x62mm_reflector_2",
					"jsrs_762mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak12_shot_silenced_soundset",
					"jsrs_ak12_shell_soundset",
					"jsrs_7x62mm_SD_reflector_2"
				};
			};
		};
		class burst: mode_burst2
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak12_shot_soundset",
					"jsrs_ak12_shell_soundset",
					"jsrs_7x62mm_reflector_2",
					"jsrs_762mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak12_shot_silenced_soundset",
					"jsrs_ak12_shell_soundset",
					"jsrs_7x62mm_SD_reflector_2"
				};
			};
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak12_shot_soundset",
					"jsrs_ak12_shell_soundset",
					"jsrs_7x62mm_reflector_2",
					"jsrs_762mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak12_shot_silenced_soundset",
					"jsrs_ak12_shell_soundset",
					"jsrs_7x62mm_SD_reflector_2"
				};
			};
		};
	};
	class arifle_ak742_gl: arifle_av_ak74m
	{
		class Single: mode_semiauto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_762mm_echo_soundset",
					"jsrs_7x62mm_reflector_3"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_silenced_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_7x62mm_sd_reflector_1"
				};
			};
		};
		class burst: mode_burst2
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_762mm_echo_soundset",
					"jsrs_7x62mm_reflector_3"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_silenced_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_7x62mm_sd_reflector_1"
				};
			};
		};
		class FullAuto: mode_fullauto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_762mm_echo_soundset",
					"jsrs_7x62mm_reflector_3"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_silenced_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_7x62mm_sd_reflector_1"
				};
			};
		};
	};
	class av_aks74m_camo: arifle_av_ak74m
	{
		class Single: mode_semiauto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_762mm_echo_soundset",
					"jsrs_7x62mm_reflector_3"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_silenced_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_7x62mm_sd_reflector_1"
				};
			};
		};
		class FullAuto: mode_fullauto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_762mm_echo_soundset",
					"jsrs_7x62mm_reflector_3"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_silenced_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_7x62mm_sd_reflector_1"
				};
			};
		};
	};
	class av_an94: Rifle_Base_F
	{
		class Single: mode_semiauto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_762mm_echo_soundset",
					"jsrs_7x62mm_reflector_3"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_silenced_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_7x62mm_sd_reflector_1"
				};
			};
		};
		class burst: mode_burst2
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_762mm_echo_soundset",
					"jsrs_7x62mm_reflector_3"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_silenced_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_7x62mm_sd_reflector_1"
				};
			};
		};
		class FullAuto: mode_fullauto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_an94_shot_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_762mm_echo_soundset",
					"jsrs_7x62mm_reflector_3"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_silenced_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_7x62mm_sd_reflector_1"
				};
			};
		};
	};
	class av_an94_gp: Rifle_Base_F
	{
		class Single: mode_semiauto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_762mm_echo_soundset",
					"jsrs_7x62mm_reflector_3"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_silenced_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_7x62mm_sd_reflector_1"
				};
			};
		};
		class burst: mode_burst2
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_762mm_echo_soundset",
					"jsrs_7x62mm_reflector_3"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_silenced_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_7x62mm_sd_reflector_1"
				};
			};
		};
		class FullAuto: mode_fullauto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_762mm_echo_soundset",
					"jsrs_7x62mm_reflector_3"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_silenced_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_7x62mm_sd_reflector_1"
				};
			};
		};
	};
	class arifle_av_aek: Rifle_Base_F
	{
		class Single: mode_semiauto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_762mm_echo_soundset",
					"jsrs_7x62mm_reflector_3"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_silenced_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_7x62mm_sd_reflector_1"
				};
			};
		};
		class FullAuto: mode_fullauto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_762mm_echo_soundset",
					"jsrs_7x62mm_reflector_3"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_silenced_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_7x62mm_sd_reflector_1"
				};
			};
		};
	};
	class arifle_av_aekg: arifle_akm_gp
	{
		class Single: mode_semiauto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_762mm_echo_soundset",
					"jsrs_7x62mm_reflector_3"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_silenced_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_7x62mm_sd_reflector_1"
				};
			};
		};
		class FullAuto: mode_fullauto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_762mm_echo_soundset",
					"jsrs_7x62mm_reflector_3"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_silenced_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_7x62mm_sd_reflector_1"
				};
			};
		};
	};
	class arifle_a545: arifle_av_aek
	{
		class Single: mode_semiauto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_762mm_echo_soundset",
					"jsrs_7x62mm_reflector_3"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_silenced_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_7x62mm_sd_reflector_1"
				};
			};
		};
		class FullAuto: mode_fullauto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_762mm_echo_soundset",
					"jsrs_7x62mm_reflector_3"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_silenced_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_7x62mm_sd_reflector_1"
				};
			};
		};
	};
	class arifle_av_ak74mm: arifle_av_ak74m
	{
		class Single: mode_semiauto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_762mm_echo_soundset",
					"jsrs_7x62mm_reflector_3"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_silenced_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_7x62mm_sd_reflector_1"
				};
			};
		};
		class FullAuto: mode_fullauto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_762mm_echo_soundset",
					"jsrs_7x62mm_reflector_3"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_silenced_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_7x62mm_sd_reflector_1"
				};
			};
		};
	};
	class av_ak74_2mm: arifle_av_ak74m
	{
		class Single: mode_semiauto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_762mm_echo_soundset",
					"jsrs_7x62mm_reflector_3"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_silenced_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_7x62mm_sd_reflector_1"
				};
			};
		};
		class FullAuto: mode_fullauto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_762mm_echo_soundset",
					"jsrs_7x62mm_reflector_3"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_silenced_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_7x62mm_sd_reflector_1"
				};
			};
		};
	};
	class av_ak74_3mm: arifle_av_ak74m
	{
		class Single: mode_semiauto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_762mm_echo_soundset",
					"jsrs_7x62mm_reflector_3"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_silenced_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_7x62mm_sd_reflector_1"
				};
			};
		};
		class FullAuto: mode_fullauto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_762mm_echo_soundset",
					"jsrs_7x62mm_reflector_3"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_silenced_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_7x62mm_sd_reflector_1"
				};
			};
		};
	};
	class av_aks74_3mm: arifle_av_ak74m
	{
		class Single: mode_semiauto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_762mm_echo_soundset",
					"jsrs_7x62mm_reflector_3"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_silenced_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_7x62mm_sd_reflector_1"
				};
			};
		};
		class FullAuto: mode_fullauto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_762mm_echo_soundset",
					"jsrs_7x62mm_reflector_3"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_silenced_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_7x62mm_sd_reflector_1"
				};
			};
		};
	};
	class arifle_av_ak74mm2: arifle_av_ak74m
	{
		class Single: mode_semiauto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_762mm_echo_soundset",
					"jsrs_7x62mm_reflector_3"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_silenced_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_7x62mm_sd_reflector_1"
				};
			};
		};
		class FullAuto: mode_fullauto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_762mm_echo_soundset",
					"jsrs_7x62mm_reflector_3"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_silenced_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_7x62mm_sd_reflector_1"
				};
			};
		};
	};
	class arifle_av_ak74m2_gp: arifle_av_ak74m
	{
		class Single: mode_semiauto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_762mm_echo_soundset",
					"jsrs_7x62mm_reflector_3"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_silenced_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_7x62mm_sd_reflector_1"
				};
			};
		};
		class FullAuto: mode_fullauto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_762mm_echo_soundset",
					"jsrs_7x62mm_reflector_3"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_silenced_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_7x62mm_sd_reflector_1"
				};
			};
		};
	};
	class arifle_av_ak74m_gp: arifle_av_ak74m
	{
		class Single: mode_semiauto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_762mm_echo_soundset",
					"jsrs_7x62mm_reflector_3"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_silenced_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_7x62mm_sd_reflector_1"
				};
			};
		};
		class FullAuto: mode_fullauto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_762mm_echo_soundset",
					"jsrs_7x62mm_reflector_3"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_silenced_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_7x62mm_sd_reflector_1"
				};
			};
		};
	};
	class arifle_av_ak74g: arifle_av_ak74m_gp
	{
		class Single: mode_semiauto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_762mm_echo_soundset",
					"jsrs_7x62mm_reflector_3"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_silenced_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_7x62mm_sd_reflector_1"
				};
			};
		};
		class FullAuto: mode_fullauto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_762mm_echo_soundset",
					"jsrs_7x62mm_reflector_3"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_silenced_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_7x62mm_sd_reflector_1"
				};
			};
		};
	};
	class arifle_av_aks174m_gp: arifle_av_ak74m_gp
	{
		class Single: mode_semiauto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_762mm_echo_soundset",
					"jsrs_7x62mm_reflector_3"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_silenced_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_7x62mm_sd_reflector_1"
				};
			};
		};
		class FullAuto: mode_fullauto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_762mm_echo_soundset",
					"jsrs_7x62mm_reflector_3"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_silenced_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_7x62mm_sd_reflector_1"
				};
			};
		};
	};
	class arifle_av_aksu_ma: arifle_av_aksu
	{
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_aks_shot_soundset",
					"jsrs_aks_shell_soundset",
					"jsrs_7x62mm_reflector_1",
					"jsrs_762mm_echo_soundset"
				};
			};
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_aks_shot_soundset",
					"jsrs_aks_shell_soundset",
					"jsrs_7x62mm_reflector_1",
					"jsrs_762mm_echo_soundset"
				};
			};
		};
	};
	class arifle_av_kan_gp: arifle_av_aksu
	{
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_silenced_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_7x62mm_sd_reflector_1"
				};
			};
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_silenced_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_7x62mm_sd_reflector_1"
				};
			};
		};
	};
	class av_aksu_camo: arifle_av_aksu
	{
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_aks_shot_soundset",
					"jsrs_aks_shell_soundset",
					"jsrs_7x62mm_reflector_1",
					"jsrs_762mm_echo_soundset"
				};
			};
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_aks_shot_soundset",
					"jsrs_aks_shell_soundset",
					"jsrs_7x62mm_reflector_1",
					"jsrs_762mm_echo_soundset"
				};
			};
		};
	};
	class av_aksu_h_camo: arifle_av_aksu
	{
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_aks_shot_soundset",
					"jsrs_aks_shell_soundset",
					"jsrs_7x62mm_reflector_1",
					"jsrs_762mm_echo_soundset"
				};
			};
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_aks_shot_soundset",
					"jsrs_aks_shell_soundset",
					"jsrs_7x62mm_reflector_1",
					"jsrs_762mm_echo_soundset"
				};
			};
		};
	};
	class arifle_av_aksu_2: arifle_av_aksu
	{
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_aks_shot_soundset",
					"jsrs_aks_shell_soundset",
					"jsrs_7x62mm_reflector_1",
					"jsrs_762mm_echo_soundset"
				};
			};
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_aks_shot_soundset",
					"jsrs_aks_shell_soundset",
					"jsrs_7x62mm_reflector_1",
					"jsrs_762mm_echo_soundset"
				};
			};
		};
	};
	class arifle_av_rpk74: arifle_av_ak74m
	{
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_soundset",
					"jsrs_aks_shell_soundset",
					"jsrs_7x62mm_reflector_1",
					"jsrs_762mm_echo_soundset"
				};
			};
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_soundset",
					"jsrs_aks_shell_soundset",
					"jsrs_7x62mm_reflector_1",
					"jsrs_762mm_echo_soundset"
				};
			};
		};
	};
	class arifle_av_groza: Rifle_Base_F
	{
		class Single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_katibac_shot_soundset",
					"jsrs_6x5mm_reflector_1",
					"jsrs_556mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_katibac_shot_silenced_soundset",
					"jsrs_6x5mm_SD_reflector_1"
				};
			};
		};
		class FullAuto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_katibac_shot_soundset",
					"jsrs_6x5mm_reflector_1",
					"jsrs_556mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_katibac_shot_silenced_soundset",
					"jsrs_6x5mm_SD_reflector_1"
				};
			};
		};
	};
	class arifle_av_groza_gp: arifle_av_groza
	{
		class Single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_katibac_shot_soundset",
					"jsrs_6x5mm_reflector_1",
					"jsrs_556mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_katibac_shot_silenced_soundset",
					"jsrs_6x5mm_SD_reflector_1"
				};
			};
		};
		class FullAuto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_katibac_shot_soundset",
					"jsrs_6x5mm_reflector_1",
					"jsrs_556mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_katibac_shot_silenced_soundset",
					"jsrs_6x5mm_SD_reflector_1"
				};
			};
		};
	};
	class av_ak15: arifle_av_ak74m
	{
		class Single: mode_semiauto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_762mm_echo_soundset",
					"jsrs_7x62mm_reflector_3"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_silenced_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_7x62mm_sd_reflector_1"
				};
			};
		};
		class burst: mode_burst2
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_762mm_echo_soundset",
					"jsrs_7x62mm_reflector_3"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_silenced_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_7x62mm_sd_reflector_1"
				};
			};
		};
		class FullAuto: mode_fullauto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_762mm_echo_soundset",
					"jsrs_7x62mm_reflector_3"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_silenced_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_7x62mm_sd_reflector_1"
				};
			};
		};
	};
	class av_ak15_pk: arifle_av_ak74m
	{
		class Single: mode_semiauto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_762mm_echo_soundset",
					"jsrs_7x62mm_reflector_3"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_silenced_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_7x62mm_sd_reflector_1"
				};
			};
		};
		class burst: mode_burst2
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_762mm_echo_soundset",
					"jsrs_7x62mm_reflector_3"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_silenced_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_7x62mm_sd_reflector_1"
				};
			};
		};
		class FullAuto: mode_fullauto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_762mm_echo_soundset",
					"jsrs_7x62mm_reflector_3"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_silenced_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_7x62mm_sd_reflector_1"
				};
			};
		};
	};
	class av_ak15_gl_Base: arifle_av_ak74m
	{
		class Single: mode_semiauto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_762mm_echo_soundset",
					"jsrs_7x62mm_reflector_3"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_silenced_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_7x62mm_sd_reflector_1"
				};
			};
		};
		class burst: mode_burst2
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_762mm_echo_soundset",
					"jsrs_7x62mm_reflector_3"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_silenced_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_7x62mm_sd_reflector_1"
				};
			};
		};
		class FullAuto: mode_fullauto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_762mm_echo_soundset",
					"jsrs_7x62mm_reflector_3"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_silenced_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_7x62mm_sd_reflector_1"
				};
			};
		};
	};
	class av_ak15_gl_gl: av_ak15_gl_Base
	{
		class Single: mode_semiauto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_762mm_echo_soundset",
					"jsrs_7x62mm_reflector_3"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_silenced_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_7x62mm_sd_reflector_1"
				};
			};
		};
		class burst: mode_burst2
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_762mm_echo_soundset",
					"jsrs_7x62mm_reflector_3"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_silenced_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_7x62mm_sd_reflector_1"
				};
			};
		};
		class FullAuto: mode_fullauto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_762mm_echo_soundset",
					"jsrs_7x62mm_reflector_3"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_silenced_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_7x62mm_sd_reflector_1"
				};
			};
		};
	};
	class av_ak155: arifle_av_ak74m
	{
		class Single: mode_semiauto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_762mm_echo_soundset",
					"jsrs_7x62mm_reflector_3"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_silenced_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_7x62mm_sd_reflector_1"
				};
			};
		};
		class FullAuto: mode_fullauto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_762mm_echo_soundset",
					"jsrs_7x62mm_reflector_3"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ak74_shot_silenced_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_7x62mm_sd_reflector_1"
				};
			};
		};
	};
	class av_ash_gp: av_ash_base
	{
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_cyrus_shot_soundset",
					"jsrs_cyrus_shell_soundset",
					"jsrs_9x3mm_reflector_2",
					"jsrs_dmr_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_cyrus_shot_silenced_soundset",
					"jsrs_cyrus_shell_soundset",
					"jsrs_9x3mm_SD_reflector_2"
				};
			};
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_cyrus_shot_soundset",
					"jsrs_cyrus_shell_soundset",
					"jsrs_9x3mm_reflector_2",
					"jsrs_dmr_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_cyrus_shot_silenced_soundset",
					"jsrs_cyrus_shell_soundset",
					"jsrs_9x3mm_SD_reflector_2"
				};
			};
		};
	};
	class srifle_av_svdk: srifle_av_svd
	{
		class Single: mode_semiauto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_svd_shot_soundset",
					"jsrs_ak74_shell_soundset",
					"jsrs_762mm_echo_soundset",
					"jsrs_12x7mm_reflector_3"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_svd_shot_silenced_soundset",
					"jsrs_svd_shell_soundset",
					"jsrs_7x62mm_sd_reflector_1"
				};
			};
		};
	};
	class srifle_av_dxl_base: Rifle_Base_F
	{
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_mk18_shot_soundset",
					"jsrs_mk18_shell_soundset",
					"jsrs_7x62mm_reflector_4",
					"jsrs_762mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_mk18_shot_silenced_soundset",
					"jsrs_mk18_shell_soundset",
					"jsrs_7x62mm_SD_reflector_4"
				};
			};
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_mk18_shot_soundset",
					"jsrs_mk18_shell_soundset",
					"jsrs_7x62mm_reflector_4",
					"jsrs_762mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_mk18_shot_silenced_soundset",
					"jsrs_mk18_shell_soundset",
					"jsrs_7x62mm_SD_reflector_4"
				};
			};
		};
	};
	class av_ksvk_base: srifle_av_dxl_base
	{
		class single: mode_semiauto
		{
			sounds[]=
			{
				"standardsound",
				"silencedsound"
			};
			class basesoundmodetype;
			class silencedsound: basesoundmodetype
			{
				closure1[]=
				{
					"a3\sounds_f\arsenal\weapons\longrangerifles\m320\m320_closure_01",
					1.77828,
					1,
					10
				};
				closure2[]=
				{
					"a3\sounds_f\arsenal\weapons\longrangerifles\m320\m320_closure_01",
					1.77828,
					1,
					10
				};
				soundclosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_sniper_shake_soundset",
					"jsrs_gm6_shot_soundset",
					"jsrs_gm6_shell_soundset",
					"jsrs_12x7mm_reflector_4",
					"jsrs_dmr_echo_soundset"
				};
			};
		};
	};
	class dak_mak_want: Rifle_Base_F
	{
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_pistol_shake_soundset",
					"jsrs_pdw2000_shot_soundset",
					"jsrs_pdw2000_shell_soundset",
					"jsrs_9mm_reflector_3",
					"jsrs_smg_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_pistol_shake_soundset",
					"jsrs_pdw2000_shot_silenced_soundset",
					"jsrs_pdw2000_shell_soundset",
					"jsrs_9mm_SD_reflector_3"
				};
			};
		};
		class burst: mode_burst2
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_pistol_shake_soundset",
					"jsrs_pdw2000_shot_soundset",
					"jsrs_pdw2000_shell_soundset",
					"jsrs_9mm_reflector_3",
					"jsrs_smg_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_pistol_shake_soundset",
					"jsrs_pdw2000_shot_silenced_soundset",
					"jsrs_pdw2000_shell_soundset",
					"jsrs_9mm_SD_reflector_3"
				};
			};
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_pistol_shake_soundset",
					"jsrs_pdw2000_shot_soundset",
					"jsrs_pdw2000_shell_soundset",
					"jsrs_9mm_reflector_3",
					"jsrs_smg_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_pistol_shake_soundset",
					"jsrs_pdw2000_shot_silenced_soundset",
					"jsrs_pdw2000_shell_soundset",
					"jsrs_9mm_SD_reflector_3"
				};
			};
		};
	};
	class av_Vant2: Rifle_Base_F
	{
		class Single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_trg21_shot_soundset",
					"jsrs_trg20_shell_soundset",
					"jsrs_5x56mm_reflector_2",
					"jsrs_556mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_trg20_shot_silenced_soundset",
					"jsrs_trg20_shell_soundset",
					"jsrs_5x56mm_SD_reflector_2"
				};
			};
		};
		class FullAuto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_trg21_shot_soundset",
					"jsrs_trg20_shell_soundset",
					"jsrs_5x56mm_reflector_2",
					"jsrs_556mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_trg20_shot_silenced_soundset",
					"jsrs_trg20_shell_soundset",
					"jsrs_5x56mm_SD_reflector_2"
				};
			};
		};
	};
	class AKS_74U_BZT75C: Rifle_Base_F
	{
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_aks_shot_soundset",
					"jsrs_aks_shell_soundset",
					"jsrs_7x62mm_reflector_1",
					"jsrs_762mm_echo_soundset"
				};
			};
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_aks_shot_soundset",
					"jsrs_aks_shell_soundset",
					"jsrs_7x62mm_reflector_1",
					"jsrs_762mm_echo_soundset"
				};
			};
		};
	};
	class av_want4: Rifle_Base_F
	{
		sounds[]=
		{
			"StandardSound",
			"SilencedSound"
		};
		class BaseSoundModeType
		{
			soundClosure[]={};
		};
		class standardsound: BaseSoundModeType
		{
			soundsetshot[]=
			{
				"jsrs_pistol_shake_soundset",
				"jsrs_pm9m_shot_soundset",
				"jsrs_pm9m_shell_soundset",
				"jsrs_9mm_reflector_2",
				"jsrs_small_echo_soundset"
			};
		};
		class silencedsound: BaseSoundModeType
		{
			soundsetshot[]=
			{
				"jsrs_pistol_shake_soundset",
				"jsrs_pm9m_shot_silenced_soundset",
				"jsrs_pm9m_shell_soundset",
				"jsrs_9mm_SD_reflector_2"
			};
		};
	};
	class av_want_aps: Rifle_Base_F
	{
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_pistol_shake_soundset",
					"jsrs_pdw2000_shot_soundset",
					"jsrs_pdw2000_shell_soundset",
					"jsrs_9mm_reflector_3",
					"jsrs_smg_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_pistol_shake_soundset",
					"jsrs_pdw2000_shot_silenced_soundset",
					"jsrs_pdw2000_shell_soundset",
					"jsrs_9mm_SD_reflector_3"
				};
			};
		};
		class burst: mode_burst2
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_pistol_shake_soundset",
					"jsrs_pdw2000_shot_soundset",
					"jsrs_pdw2000_shell_soundset",
					"jsrs_9mm_reflector_3",
					"jsrs_smg_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_pistol_shake_soundset",
					"jsrs_pdw2000_shot_silenced_soundset",
					"jsrs_pdw2000_shell_soundset",
					"jsrs_9mm_SD_reflector_3"
				};
			};
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_pistol_shake_soundset",
					"jsrs_pdw2000_shot_soundset",
					"jsrs_pdw2000_shell_soundset",
					"jsrs_9mm_reflector_3",
					"jsrs_smg_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_pistol_shake_soundset",
					"jsrs_pdw2000_shot_silenced_soundset",
					"jsrs_pdw2000_shell_soundset",
					"jsrs_9mm_SD_reflector_3"
				};
			};
		};
	};
	class av_zbt_pm: Rifle_Base_F
	{
		sounds[]=
		{
			"StandardSound",
			"SilencedSound"
		};
		class BaseSoundModeType
		{
			soundClosure[]={};
		};
		class standardsound: BaseSoundModeType
		{
			soundsetshot[]=
			{
				"jsrs_pistol_shake_soundset",
				"jsrs_pm9m_shot_soundset",
				"jsrs_pm9m_shell_soundset",
				"jsrs_9mm_reflector_2",
				"jsrs_small_echo_soundset"
			};
		};
		class silencedsound: BaseSoundModeType
		{
			soundsetshot[]=
			{
				"jsrs_pistol_shake_soundset",
				"jsrs_pm9m_shot_silenced_soundset",
				"jsrs_pm9m_shell_soundset",
				"jsrs_9mm_SD_reflector_2"
			};
		};
	};
	class arifle_av_dvl_base: Rifle_Base_F
	{
		class single: mode_semiauto
		{
			sounds[]=
			{
				"standardsound"
			};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_spar_shot_silenced_soundset",
					"jsrs_asp1_shell_soundset",
					"jsrs_9x3mm_SD_reflector_4"
				};
			};
		};
	};
	class arifle_av_dvl_camo: arifle_av_dvl_base
	{
		class single: mode_semiauto
		{
			sounds[]=
			{
				"standardsound"
			};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_spar_shot_silenced_soundset",
					"jsrs_asp1_shell_soundset",
					"jsrs_9x3mm_SD_reflector_4"
				};
			};
		};
	};
	class srifle_av_dxl1_base: Rifle_Base_F
	{
		class single: mode_semiauto
		{
			sounds[]=
			{
				"standardsound",
				"silencedsound"
			};
			class basesoundmodetype
			{
				soundclosure[]={};
			};
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_mk14_shot_soundset",
					"jsrs_mk14_shell_soundset",
					"jsrs_9x3mm_reflector_1",
					"jsrs_762mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_mk14_shot_silenced_soundset",
					"jsrs_mk14_shell_soundset",
					"jsrs_7x62mm_SD_reflector_1"
				};
			};
		};
	};
	class srifle_av_s98: srifle_av_dxl1_base
	{
		class Single: mode_semiauto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class StandardSound
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_m76_shot_soundset",
					"jsrs_m70_shell_soundset",
					"jsrs_762mm_echo_soundset",
					"jsrs_9x3mm_reflector_3"
				};
			};
			class SilencedSound
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_m70_shot_silenced_soundset",
					"jsrs_m70_shell_soundset",
					"jsrs_7x62mm_sd_reflector_1"
				};
			};
		};
	};
	class av_m712: Pistol_Base_F
	{
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_katiba_shot_soundset",
					"jsrs_6x5mm_reflector_4",
					"jsrs_556mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_katiba_shot_silenced_soundset",
					"jsrs_6x5mm_SD_reflector_4"
				};
			};
		};
	};
};
