void __EntryFunction__()
{
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	sLocal_20 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	fLocal_76 = 3f;
	fLocal_77 = 0f;
	fLocal_78 = 2f;
	fLocal_79 = 100f;
	iLocal_94 = -1;
	fLocal_96 = 0.5f;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_396(ScriptParam_0);
	}
	while (true)
	{
		func_395();
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_48();
		}
		else
		{
			func_13();
		}
		if (func_1())
		{
			func_13();
		}
	}
}

int func_1()
{
	func_9(&uVar0);
	if (Global_1312854 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_8())
	{
		return 1;
	}
	if (Global_2462922)
	{
		return 1;
	}
	if (func_7())
	{
		return 1;
	}
	if (func_6(159))
	{
		if (!func_5())
		{
			return 1;
		}
	}
	if (func_6(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_2() != 0)
	{
		if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(func_2()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_2()
{
	switch (func_4())
	{
		case 0:
			return func_3();
			break;
		
		case 2:
			return -47565502;
			break;
	}
	return 0;
}

int func_3()
{
	switch (Global_2463024)
	{
		case 0:
			return -931834499;
		
		default:
	}
	return -931834499;
}

int func_4()
{
	return Global_30768;
}

bool func_5()
{
	return Global_2450632.f_598;
}

int func_6(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_7()
{
	return Global_2460680;
}

bool func_8()
{
	return Global_2450632.f_593;
}

void func_9(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
		if (iVar1 == 174)
		{
			SCRIPT::GET_EVENT_DATA(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case -1853120870:
					func_10(iVar0);
					break;
				
				case 589125870:
					SCRIPT::GET_EVENT_DATA(1, iVar0, &Var4, 4);
					if (Var4.z == 653923311)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_10(int iParam0)
{
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		if (func_12(Var0.y, 1, 1))
		{
			uVar3 = PLAYER::GET_PLAYER_PED(Var0.y);
			if (ENTITY::DOES_ENTITY_EXIST(uVar3))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(uVar3, 0))
				{
					uVar4 = PED::GET_VEHICLE_PED_IS_IN(uVar3, 0);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(uVar4, Var0.z) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_11(uVar4, &bVar5))
						{
							VEHICLE::REMOVE_VEHICLE_WINDOW(uVar4, Var0.z);
						}
						if (bVar5)
						{
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_11(var uParam0, var uParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(uParam0))
		{
			if (NETWORK::NETWORK_GET_ENTITY_IS_LOCAL(uParam0))
			{
				if (!VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(uParam0)))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(uParam0, 0))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_12(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			if (bParam1)
			{
				if (!PLAYER::IS_PLAYER_PLAYING(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2439138.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_13()
{
	func_15();
	func_14();
}

void func_14()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_15()
{
	if (func_47())
	{
		Local_139.f_16 = 1;
	}
	func_46();
	func_24();
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPArcadeCabinetGrid");
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPArcadeCabinetGridTiles");
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPArcadeCabinetGridPlayerBlue");
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPArcadeCabinetGridPlayerGreen");
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPArcadeCabinetGridPlayerPurple");
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPArcadeCabinetGridPlayerYellow");
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPArcadeCabinetGridHUD");
	UI::CLEAR_ADDITIONAL_TEXT(3, 1);
	if (Local_160.f_427 != 0)
	{
		unk_0x04D950EEFA4EED8C(Local_160.f_427);
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_vw_am_tw_in_menus_scene"))
	{
		AUDIO::STOP_AUDIO_SCENE("dlc_vw_am_tw_in_menus_scene");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_vw_am_tw_in_gameplay_scene"))
	{
		AUDIO::STOP_AUDIO_SCENE("dlc_vw_am_tw_in_gameplay_scene");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_vw_am_tw_vehicle_drivethrough_scene"))
	{
		AUDIO::STOP_AUDIO_SCENE("dlc_vw_am_tw_vehicle_drivethrough_scene");
	}
	func_22(func_23(4));
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (Local_160.f_281[iVar0].f_5 >= 0)
		{
			AUDIO::STOP_SOUND(Local_160.f_281[iVar0].f_5);
			AUDIO::RELEASE_SOUND_ID(Local_160.f_281[iVar0].f_5);
		}
		if (Local_160.f_281[iVar0].f_6 >= 0)
		{
			AUDIO::STOP_SOUND(Local_160.f_281[iVar0].f_6);
			AUDIO::RELEASE_SOUND_ID(Local_160.f_281[iVar0].f_6);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Local_160.f_204[iVar0].f_7 >= 0)
		{
			AUDIO::STOP_SOUND(Local_160.f_204[iVar0].f_7);
			AUDIO::RELEASE_SOUND_ID(Local_160.f_204[iVar0].f_7);
		}
		if (Local_160.f_204[iVar0].f_6 >= 0)
		{
			AUDIO::STOP_SOUND(Local_160.f_204[iVar0].f_6);
			AUDIO::RELEASE_SOUND_ID(Local_160.f_204[iVar0].f_6);
		}
		if (Local_160.f_204[iVar0].f_8 >= 0)
		{
			AUDIO::STOP_SOUND(Local_160.f_204[iVar0].f_8);
			AUDIO::RELEASE_SOUND_ID(Local_160.f_204[iVar0].f_8);
		}
		iVar0++;
	}
	if (Local_160.f_178.f_4 >= 0)
	{
		AUDIO::STOP_SOUND(Local_160.f_178.f_4);
		AUDIO::RELEASE_SOUND_ID(Local_160.f_178.f_4);
	}
	if (Local_160.f_428 >= 0)
	{
		AUDIO::STOP_SOUND(Local_160.f_428);
		AUDIO::RELEASE_SOUND_ID(Local_160.f_428);
	}
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("DLC_VINEWOOD/DLC_VW_AM_TW");
	func_20();
	func_19(12);
	Global_1661996 = 0;
	Global_1661996.f_1 = 0;
	func_16(0);
	func_14();
}

void func_16(bool bParam0)
{
	if (bParam0)
	{
		if (!func_17(PLAYER::PLAYER_ID()))
		{
			GAMEPLAY::SET_BIT(&(Global_2425662[PLAYER::PLAYER_ID()].f_416), 4);
		}
	}
	else if (func_17(PLAYER::PLAYER_ID()))
	{
		GAMEPLAY::CLEAR_BIT(&(Global_2425662[PLAYER::PLAYER_ID()].f_416), 4);
	}
}

int func_17(int iParam0)
{
	if (iParam0 != func_18())
	{
		return GAMEPLAY::IS_BIT_SET(Global_2425662[iParam0].f_416, 4);
	}
	return 0;
}

int func_18()
{
	return -1;
}

void func_19(int iParam0)
{
	Local_160.f_140 = iParam0;
}

void func_20()
{
	Local_160.f_442 = -1;
	Local_160.f_421 = 0;
	if (Local_160.f_418 != -2147483647)
	{
		Local_160.f_418 = -2147483647;
	}
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(Local_160.f_419))
	{
		Local_160.f_419 = func_21();
	}
	if (UI::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		UI::CLEAR_HELP(1);
	}
}

var func_21()
{
	return uVar0;
}

void func_22(var uParam0)
{
	AUDIO::TRIGGER_MUSIC_EVENT(uParam0);
}

char* func_23(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "CASINO_TW_TITLE_START";
		
		case 1:
			return "CASINO_TW_GAMEPLAY";
		
		case 2:
			return "CASINO_TW_MID_ROUND";
		
		case 3:
			return "CASINO_TW_SUDDEN_DEATH";
		
		case 4:
			return "CASINO_TW_STOP_MUSIC";
		
		default:
	}
	return "INVALID MUSIC EVENT";
}

void func_24()
{
	Global_1370267 = 0;
	func_44();
	Global_4456448.f_227352 = 0;
	func_43();
	Global_1590535[PLAYER::PLAYER_ID()].f_750 = 0;
	func_42(0, 1, 1, 0);
	func_41();
	if (func_39() && !STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_26(PLAYER::PLAYER_ID(), 1, 0, 0);
		}
		else
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		}
	}
	func_25(0, 0, -1);
	func_25(1, 0, -1);
	func_25(2, 0, -1);
	func_25(3, 0, -1);
	func_25(4, 0, -1);
	func_25(6, 0, -1);
	func_25(7, 0, -1);
	func_25(8, 0, -1);
	func_25(9, 0, -1);
	func_25(10, 0, -1);
	func_25(11, 0, -1);
	func_25(12, 0, -1);
	func_25(13, 0, -1);
	func_25(14, 0, -1);
	func_25(15, 0, -1);
	func_25(16, 0, -1);
}

void func_25(int iParam0, bool bParam1, int iParam2)
{
	switch (iParam0)
	{
		case 5:
			if (iParam2 > -1)
			{
				Global_1377170.f_137[iParam2] = bParam1;
			}
			break;
		
		default:
			if (bParam1)
			{
				GAMEPLAY::SET_BIT(&(Global_1377170.f_1046), iParam0);
			}
			else
			{
				GAMEPLAY::CLEAR_BIT(&(Global_1377170.f_1046), iParam0);
			}
			break;
	}
}

void func_26(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam1)
	{
		if (SCRIPT::_GET_NO_LOADING_SCREEN())
		{
			SCRIPT::SET_NO_LOADING_SCREEN(0);
		}
	}
	if (func_38())
	{
		if (bParam1)
		{
			return;
		}
		else
		{
			iParam3 = 1;
		}
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uVar0 = iParam2;
		PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, uVar0);
	}
	else
	{
		bVar1 = true;
		bVar2 = iParam2 & 2 != false;
		bVar3 = iParam2 & 4 != false;
		bVar4 = iParam2 & 8 != false;
		bVar5 = iParam2 & 16 != false;
		bVar6 = iParam2 & 32 != false;
		bVar7 = iParam2 & 64 != false;
		bVar8 = iParam2 & 128 != false;
		bVar9 = iParam2 & 256 != false;
		bVar10 = iParam2 & 512 != false;
		bVar11 = iParam2 & 1024 != false;
		bVar12 = iParam2 & 2048 != false;
		bVar13 = iParam2 & 4096 != false;
		bVar14 = iParam2 & 8192 != false;
		bVar15 = iParam2 & 16384 != false;
		bVar16 = iParam2 & 32768 != false;
		bVar17 = iParam2 & 65536 != false;
		bVar18 = iParam2 & 131072 != false;
		bVar19 = iParam2 & 262144 != false;
		bVar20 = iParam2 & 524288 != false;
		bVar21 = iParam2 & 1048576 != false;
		bVar22 = iParam2 & 2097152 != false;
		bVar23 = iParam2 & 4194304 != false;
		bVar24 = iParam2 & 8388608 != false;
		bVar25 = iParam2 & 16777216 != false;
		if (iParam2 & 33554432 != 0 || NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			bVar1 = false;
		}
		if (!func_39())
		{
			bVar26 = false;
			if (bParam1 == 1)
			{
				bVar26 = true;
			}
			if (bVar16 == 0 && !bVar21)
			{
				bVar26 = true;
			}
			if (bVar10 == 1)
			{
				bVar26 = true;
			}
			if (bVar26)
			{
				return;
			}
		}
		if (bVar18)
		{
		}
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0) && (PLAYER::IS_PLAYER_PLAYING(iParam0) || iParam3 == 1))
		{
			if (iParam3 && ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(iParam0), 0))
			{
				return;
			}
			uVar27 = PLAYER::GET_PLAYER_PED(iParam0);
			if (!bVar20)
			{
				if ((bVar19 && bParam1 == 0) && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					NETWORK::FADE_OUT_LOCAL_PLAYER(1);
				}
				else if (bVar14 || (!func_35(PLAYER::PLAYER_ID(), 0) && !func_34()))
				{
					ENTITY::SET_ENTITY_VISIBLE(uVar27, !bVar14, 0);
				}
				if (!bVar14)
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bVar19)
					{
						NETWORK::FADE_OUT_LOCAL_PLAYER(0);
					}
					Global_2425662[iParam0].f_244 = 0;
				}
			}
			if (bParam1)
			{
				if (bVar1)
				{
					func_31(0, 0, 0);
					if (bVar25)
					{
						STREAMING::CLEAR_FOCUS();
					}
				}
				if (!func_30(uVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(uVar27))
				{
					if (!bVar22)
					{
						ENTITY::SET_ENTITY_COLLISION(uVar27, true, 0);
					}
				}
				if (!ENTITY::IS_ENTITY_ATTACHED(uVar27))
				{
					if (!bVar21)
					{
						ENTITY::FREEZE_ENTITY_POSITION(uVar27, false);
					}
					ENTITY::_SET_ENTITY_REGISTER(uVar27, 1);
				}
				else if (!bVar21)
				{
					ENTITY::FREEZE_ENTITY_POSITION(uVar27, false);
				}
				PED::SET_PED_CAN_BE_TARGETTED(uVar27, true);
				PLAYER::SET_PLAYER_INVINCIBLE(iParam0, 0);
				unk_0x6BC97F4F4BB3C04B(iParam0, 0);
				if (PED::HAS_PED_HEAD_BLEND_FINISHED(uVar27) && PED::_0x7350823473013C02(uVar27))
				{
					PED::_0x4668D80430D6C299(uVar27);
				}
				PED::SET_PED_CAN_RAGDOLL(uVar27, 1);
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) == 0)
				{
					func_29();
					func_28();
				}
				if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
				{
					if (!bVar23)
					{
					}
				}
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
				}
				Global_2425662[iParam0].f_245 = 0;
				if (!bVar24)
				{
					bVar3 = true;
				}
				if (Global_2405072.f_2672)
				{
					Global_2405072.f_2672 = 0;
				}
			}
			else
			{
				if (!func_30(uVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(uVar27))
				{
					if (!bVar22)
					{
						ENTITY::SET_ENTITY_COLLISION(uVar27, !bVar15, 0);
					}
					if (!ENTITY::IS_ENTITY_ATTACHED(uVar27))
					{
						if (!bVar21)
						{
							ENTITY::FREEZE_ENTITY_POSITION(uVar27, bVar16);
						}
						if (!bVar16)
						{
							ENTITY::_SET_ENTITY_REGISTER(uVar27, 1);
						}
					}
					if (func_27(Global_4456448.f_232883))
					{
						ENTITY::FREEZE_ENTITY_POSITION(uVar27, true);
					}
				}
				if (Global_1312854)
				{
					bVar10 = false;
				}
				if (bVar10)
				{
					PLAYER::SET_PLAYER_INVINCIBLE(iParam0, 0);
				}
				else
				{
					PLAYER::SET_PLAYER_INVINCIBLE(iParam0, 1);
				}
				PED::SET_PED_CAN_BE_TARGETTED(uVar27, bVar17);
				if (bVar3)
				{
					if (!PED::IS_PED_FATALLY_INJURED(uVar27) && !PED::IS_PED_IN_ANY_VEHICLE(uVar27, 0))
					{
						AI::CLEAR_PED_TASKS_IMMEDIATELY(uVar27);
					}
				}
			}
			iVar28 = 0;
			if (bVar2)
			{
				iVar28 |= 2;
			}
			if (bVar3)
			{
				iVar28 |= 4;
			}
			if (bVar4)
			{
				iVar28 |= 8;
			}
			if (bVar5)
			{
				iVar28 |= 16;
			}
			if (bVar6)
			{
				iVar28 |= 32;
			}
			if (bVar7)
			{
				iVar28 |= 64;
			}
			if (bVar8)
			{
				iVar28 |= 128;
			}
			if (bVar9)
			{
				iVar28 |= 256;
			}
			if (bVar10)
			{
				iVar28 |= 512;
			}
			if (bVar11)
			{
				iVar28 |= 1024;
			}
			if (bVar12)
			{
				iVar28 |= 2048;
			}
			if (bVar13)
			{
				iVar28 |= 4096;
			}
			PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, iVar28);
		}
	}
}

bool func_27(int iParam0)
{
	return iParam0 == 17;
}

void func_28()
{
	Global_2439138.f_1233 = 0;
	Global_2439138.f_1234 = 0;
	Global_2439138.f_1235 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2439138.f_1240 = -1;
	Global_2439138.f_1241 = 0;
	Global_2405072.f_2683 = { Var0 };
}

void func_29()
{
	Global_2405072.f_694 = 0;
	Global_2405072.f_2726 = 0;
	Global_2405072.f_512 = 0;
	Global_2405072.f_600 = 0;
	Global_2425662[PLAYER::PLAYER_ID()].f_207 = 0;
	Global_2405072.f_2681 = 0;
}

int func_30(var uParam0)
{
	if (PED::IS_PED_IN_ANY_VEHICLE(uParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = AI::GET_SCRIPT_TASK_STATUS(uParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_31(int iParam0, int iParam1, int iParam2)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam1, 0))
	{
	}
	if (iParam0 == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (PED::IS_PED_A_PLAYER(iParam1))
			{
				if (!NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), NETWORK::_NETWORK_GET_PED_PLAYER(iParam1)))
				{
					iVar0 = 1;
				}
			}
		}
	}
	if (iVar0 == 0)
	{
		if (iParam2 == 1)
		{
			if (iParam0 == 1)
			{
				func_33();
			}
			else if (!GAMEPLAY::IS_BIT_SET(Global_2359302.f_67, 1))
			{
				if (GAMEPLAY::IS_BIT_SET(Global_2359302.f_67, 2))
				{
					iVar1 = 0;
					while (iVar1 < 8)
					{
						CAM::_0x2A2173E46DAECD12(iVar1, Global_2359302.f_58[iVar1]);
						iVar1++;
					}
				}
				GAMEPLAY::SET_BIT(&(Global_2359302.f_67), 1);
			}
		}
		if (func_35(PLAYER::PLAYER_ID(), 0))
		{
			NETWORK::_0x419594E137637120(iParam0, iParam1, 1);
		}
		else
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE(iParam0, iParam1);
		}
		UI::KEY_HUD_COLOUR(iParam0, iParam1);
		func_32(-2008016205, iParam0);
	}
}

void func_32(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_BOOL(iVar0, iParam1, 1);
	}
}

void func_33()
{
	if (!NETWORK::NETWORK_IS_IN_SPECTATOR_MODE())
	{
		if (!GAMEPLAY::IS_BIT_SET(Global_2359302.f_67, 2))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				Global_2359302.f_58[iVar0] = CAM::_0xEE778F8C7E1142E2(iVar0);
				iVar0++;
			}
			GAMEPLAY::SET_BIT(&(Global_2359302.f_67), 2);
			GAMEPLAY::SET_BIT(&(Global_2359302.f_67), 0);
		}
	}
}

bool func_34()
{
	return GAMEPLAY::IS_BIT_SET(Global_2359302, 3);
}

bool func_35(int iParam0, int iParam1)
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_36(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1590535[iParam0].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			bVar0 = PLAYER::GET_PLAYER_TEAM(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_36(int iParam0, bool bParam1)
{
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_37();
	}
	if (Global_1312857[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312739[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_37()
{
	return Global_1312745;
}

int func_38()
{
	if (Global_1590535[PLAYER::PLAYER_ID()].f_35 && !Global_2451426.f_2846.f_215 == -1)
	{
		return 1;
	}
	return 0;
}

int func_39()
{
	if (func_40() == 0)
	{
		return 1;
	}
	return 0;
}

int func_40()
{
	return Global_1312467.f_18;
}

void func_41()
{
	Global_2439138.f_1156.f_10 = 0;
}

int func_42(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = 0;
	if (GAMEPLAY::IS_PC_VERSION())
	{
		if (CUTSCENE::_0xA0FE76168A189DDB() != iParam0 && iParam2)
		{
			CUTSCENE::_0x20746F7B1032A3C7(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_43()
{
	if (Global_1662476)
	{
	}
	Global_1662476 = 0;
}

void func_44()
{
	if (!Global_1312575)
	{
		return;
	}
	func_45();
}

void func_45()
{
	Global_1312575 = 0;
	StringCopy(&(Global_1312575.f_1), "", 32);
	Global_1312575.f_9 = 0;
}

void func_46()
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&Local_139))
	{
		return;
	}
	if (Local_139.f_19 == 0)
	{
		return;
	}
	Local_139.f_19 = (NETWORK::_0x89023FBBF9200E9F() - Local_139.f_19);
	unk_0x533A7D1EA58DF958(GAMEPLAY::GET_HASH_KEY(&Local_139), Local_139.f_16, Local_139.f_17, Local_139.f_18, Local_139.f_19, Local_139.f_20);
}

int func_47()
{
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Local_921[iVar0].f_25)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_48()
{
	func_355();
	func_101();
	func_52();
	func_49();
}

void func_49()
{
	func_51();
	if (!func_50())
	{
		UI::HIDE_HELP_TEXT_THIS_FRAME();
	}
}

bool func_50()
{
	return GAMEPLAY::IS_BIT_SET(Local_160.f_417, 0);
}

void func_51()
{
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Local_921[iVar0].f_25)
		{
			Local_819[iVar0] = { Local_921[iVar0] };
			Local_856[iVar0] = { Local_921[iVar0].f_9 };
		}
		iVar0++;
	}
}

void func_52()
{
	if (!Local_160.f_178.f_1)
	{
		return;
	}
	switch (Local_613.f_145)
	{
		case 0:
			func_99();
			break;
		
		case 1:
			func_93();
			break;
		
		case 2:
			func_87();
			break;
		
		case 3:
			func_86();
			break;
		
		case 4:
			func_66();
			break;
		
		case 5:
			func_53();
			break;
		
		case 6:
			break;
		
		case 7:
			break;
	}
}

void func_53()
{
	if (NETWORK::GET_NETWORK_TIME() < Local_613.f_147 + 5000)
	{
		return;
	}
	if (func_65())
	{
		func_64(2);
		return;
	}
	func_54();
	func_64(6);
}

void func_54()
{
	Var0 = 14;
	Var0.f_1.f_1 = -1;
	Var0.f_1.f_2 = -1;
	Var0.f_1.f_3.f_1 = -1;
	Var0.f_1.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	iVar43 = 0;
	while (iVar43 <= 3)
	{
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar43)) && !Local_921[iVar43].f_25)
		{
		}
		else if (Local_819[iVar43].f_6 == -1)
		{
		}
		else
		{
			Var0[iVar43] = Local_819[iVar43].f_7;
			Var0[iVar43].f_1 = Local_819[iVar43].f_8;
			Var0[iVar43].f_2 = iVar43;
		}
		iVar43++;
	}
	iVar43 = 0;
	while (iVar43 <= 9)
	{
		Var0[iVar43 + 4] = Local_613.f_165[iVar43];
		Var0[iVar43 + 4].f_2 = Local_613.f_165[iVar43].f_2;
		Var0[iVar43 + 4].f_1 = Local_613.f_165[iVar43].f_1;
		iVar43++;
	}
	func_63(&Var0, 0, 13);
	iVar43 = 0;
	while (iVar43 <= 9)
	{
		Local_613.f_165[iVar43] = Var0[iVar43];
		Local_613.f_165[iVar43].f_2 = Var0[iVar43].f_2;
		Local_613.f_165[iVar43].f_1 = Var0[iVar43].f_1;
		func_55(func_57(PLAYER::PLAYER_ID()), 0, iVar43, Local_613.f_165[iVar43], Local_613.f_165[iVar43].f_1, 0);
		iVar43++;
	}
}

void func_55(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, int iParam5)
{
	Var0 = -824668791;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam2;
	Var0.f_4 = uParam3;
	Var0.f_5 = uParam4;
	Var0.f_6 = iParam5;
	iVar7 = func_56(iParam0);
	if (!iVar7 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 7, iVar7);
	}
}

var func_56(int iParam0)
{
	if (iParam0 != -1)
	{
		GAMEPLAY::SET_BIT(&uVar0, iParam0);
	}
	return uVar0;
}

int func_57(int iParam0)
{
	if (iParam0 == func_18())
	{
		return iParam0;
	}
	if (func_62(iParam0) != -1)
	{
		iVar0 = func_61(func_62(iParam0));
		if ((iVar0 == 2 || iVar0 == 1) || iVar0 == 0)
		{
			if (func_59(iParam0, 0))
			{
				return func_58(iParam0);
			}
			return iParam0;
		}
		else if (iVar0 == 3)
		{
			return func_18();
		}
		return Global_2425662[iParam0].f_310.f_8;
	}
	return func_18();
}

int func_58(int iParam0)
{
	if (iParam0 != func_18())
	{
		return Global_1628237[iParam0].f_11;
	}
	return func_18();
}

bool func_59(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_60(iParam0))
		{
			return 0;
		}
	}
	return Global_1628237[iParam0].f_11 != func_18();
}

int func_60(int iParam0)
{
	if (iParam0 != func_18())
	{
		if (Global_1628237[iParam0].f_11 != func_18())
		{
			return Global_1628237[iParam0].f_11 == iParam0;
		}
	}
	return 0;
}

int func_61(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
		
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
		case 126:
		case 127:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
			return 3;
			break;
		
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
		
		case 88:
			return 8;
			break;
		
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
			break;
		
		case 101:
			return 10;
			break;
		
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
			break;
		
		case 117:
			return 12;
			break;
		
		case 122:
			return 13;
			break;
		
		case 123:
			return 14;
			break;
		
		case 124:
			return 15;
			break;
		
		case 125:
			return 16;
			break;
		
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
			break;
		
		case 145:
			return 18;
			break;
	}
	return -1;
}

int func_62(int iParam0)
{
	if (iParam0 != func_18())
	{
		if (func_12(iParam0, 1, 1))
		{
			return Global_2425662[iParam0].f_310.f_5;
		}
		else if (((Global_1312877 || Global_2405072.f_2671) && iParam0 == PLAYER::PLAYER_ID()) && func_12(iParam0, 1, 0))
		{
			return Global_2425662[iParam0].f_310.f_5;
		}
	}
	return -1;
}

void func_63(var uParam0, int iParam1, int iParam2)
{
	iVar2 = (uParam0[((iParam1 + iParam2) / 2)])->f_1;
	Var3.f_1 = -1;
	Var3.f_2 = -1;
	iVar0 = iParam1;
	iVar1 = iParam2;
	while (iVar0 <= iVar1)
	{
		while (uParam0[iVar0]->f_1 > iVar2 && iVar0 < iParam2)
		{
			iVar0++;
		}
		while (iVar2 > uParam0[iVar1]->f_1 && iVar1 > iParam1)
		{
			iVar1 = (iVar1 - 1);
		}
		if (iVar0 <= iVar1)
		{
			Var3.x = (*uParam0)[iVar0];
			Var3.z = uParam0[iVar0]->f_2;
			Var3.y = uParam0[iVar0]->f_1;
			(*uParam0)[iVar0] = (*uParam0)[iVar1];
			uParam0[iVar0]->f_2 = uParam0[iVar1]->f_2;
			uParam0[iVar0]->f_1 = uParam0[iVar1]->f_1;
			(*uParam0)[iVar1] = Var3.x;
			uParam0[iVar1]->f_2 = Var3.z;
			uParam0[iVar1]->f_1 = Var3.y;
			iVar0++;
			iVar1 = (iVar1 - 1);
		}
	}
	if (iVar0 < iParam2)
	{
		func_63(uParam0, iVar0, iParam2);
	}
	if (iParam1 < iVar1)
	{
		func_63(uParam0, iParam1, iVar1);
	}
}

void func_64(int iParam0)
{
	if (!Local_160.f_178.f_1)
	{
		return;
	}
	Local_613.f_145 = iParam0;
}

int func_65()
{
	if (Local_160.f_148 <= 1)
	{
		return 0;
	}
	if (Local_613.f_137 >= Local_613.f_138)
	{
		return 0;
	}
	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Local_613.f_138) / 2f));
	if (Local_613.f_137 > iVar0)
	{
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)) && !Local_921[iVar1].f_25)
			{
			}
			else if (Local_819[iVar1].f_6 == -1)
			{
			}
			else if (Local_613.f_139[Local_819[iVar1].f_6] > iVar0)
			{
				return 0;
			}
			iVar1++;
		}
	}
	return 1;
}

void func_66()
{
	func_80();
	func_75(0, 0);
	func_71();
	if (!func_70())
	{
		return;
	}
	iVar0 = func_68();
	if (iVar0 == -1)
	{
		func_75(1, 1);
		Local_613.f_162 = 1;
		return;
	}
	Local_613.f_139[Local_819[iVar0].f_6]++;
	Local_613.f_131[Local_613.f_137] = iVar0;
	Local_613.f_137++;
	Local_613.f_147 = NETWORK::GET_NETWORK_TIME();
	if (!func_65())
	{
		Local_613.f_130 = func_67();
	}
	func_64(5);
}

int func_67()
{
	iVar0 = -1;
	iVar1 = -1;
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 <= 3)
	{
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar2)) && !Local_921[iVar2].f_25)
		{
		}
		else if (Local_819[iVar2].f_6 == -1)
		{
		}
		else if (Local_613.f_139[Local_819[iVar2].f_6] > iVar1)
		{
			iVar0 = iVar2;
			iVar1 = Local_613.f_139[Local_819[iVar2].f_6];
		}
		else if (iVar0 > -1 && Local_613.f_139[Local_819[iVar2].f_6] == iVar1)
		{
			if (Local_819[iVar2].f_8 + iLocal_814[Local_819[iVar2].f_6]) > (Local_819[iVar0].f_8 + iLocal_814[Local_819[iVar0].f_6])
			{
				iVar0 = iVar2;
			}
		}
		iVar2++;
	}
	return iVar0;
}

int func_68()
{
	iVar0 = -1;
	iVar1 = -1;
	iVar2 = 0;
	iVar3 = 0;
	iVar4 = 1;
	iVar2 = 0;
	while (iVar2 <= 3)
	{
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar2)) && !Local_921[iVar2].f_25)
		{
		}
		else if (Local_819[iVar2].f_6 == -1)
		{
		}
		else
		{
			if (!Local_613.f_163)
			{
				if (Local_613.f_162 && func_69(iVar2))
				{
				}
				else
				{
					if (Local_613.f_162)
					{
						iVar4 = 0;
					}
					if (iLocal_814[Local_819[iVar2].f_6] > iVar1)
					{
						iVar0 = iVar2;
						iVar1 = iLocal_814[Local_819[iVar2].f_6];
						iVar3 = 0;
					}
					else if (iLocal_814[Local_819[iVar2].f_6] == iVar1)
					{
						iVar3 = 1;
					}
				}
				iVar2++;
				if (iVar3 && !Local_613.f_163)
				{
					iVar0 = -1;
				}
				if (iVar4 && Local_613.f_162)
				{
					Local_613.f_163 = 1;
				}
				return iVar0;
			}

int func_69(int iParam0)
{
	if (Local_819[iParam0] == 3)
	{
		return 1;
	}
	if (Local_819[iParam0] == 4)
	{
		return 1;
	}
	return 0;
}

int func_70()
{
	if (!Local_613.f_162 && NETWORK::GET_NETWORK_TIME() > (Local_613.f_146 + 120000))
	{
		return 1;
	}
	if (Local_160.f_147 <= 1)
	{
		return 1;
	}
	return 0;
}

void func_71()
{
	if (!Local_160.f_178.f_1)
	{
		return;
	}
	if (NETWORK::GET_NETWORK_TIME() < Local_613.f_161 + 15000)
	{
		return;
	}
	Local_613.f_161 = NETWORK::GET_NETWORK_TIME();
	if (func_74())
	{
		bVar3 = func_74();
		iVar0 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 13);
		if ((iVar0 % 2) != 0)
		{
			iVar0++;
			if (iVar0 >= 13)
			{
				iVar0 = 0;
			}
		}
		iVar1 = func_73(bVar3, 8, 0);
		iVar2 = func_73(bVar3, 0, 1);
	}
	else
	{
		bVar4 = func_74();
		iVar0 = func_73(bVar4, 12, 0);
		iVar1 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 9);
		if ((iVar1 % 2) != 0)
		{
			iVar1++;
			if (iVar1 >= 9)
			{
				iVar1 = 0;
			}
		}
		iVar2 = func_73(bVar4, 2, 3);
	}
	Local_613.f_148[0] = NETWORK::GET_NETWORK_TIME() + 1000;
	Local_613.f_148[0].f_1 = func_72(iVar0, iVar1);
	Local_613.f_148[0].f_2 = iVar2;
	Local_613.f_148[0].f_3 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 5);
}

int func_72(int iParam0, int iParam1)
{
	return (iParam0 + iParam1 * 13);
}

int func_73(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_74()
{
	if (GAMEPLAY::IS_BIT_SET(GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_75(bool bParam0, bool bParam1)
{
	if (!Local_160.f_178.f_1)
	{
		return;
	}
	if (Local_613.f_162 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (Local_613.f_62[iVar0].f_2 == -2147483647)
		{
		}
		else if (NETWORK::GET_NETWORK_TIME() < Local_613.f_62[iVar0].f_2 + 17500)
		{
		}
		else
		{
			Local_613.f_62[iVar0] = -1;
			Local_613.f_62[iVar0].f_1 = -1;
			Local_613.f_62[iVar0].f_2 = -2147483647;
		}
		iVar0++;
	}
	if (NETWORK::GET_NETWORK_TIME() < Local_613.f_84 + 20000 && !bParam0)
	{
		return;
	}
	Local_613.f_84 = NETWORK::GET_NETWORK_TIME();
	if (bParam1)
	{
		func_79();
	}
	else if ((NETWORK::GET_NETWORK_TIME() - Local_613.f_146) < 20000)
	{
		func_78();
	}
	else if ((NETWORK::GET_NETWORK_TIME() - Local_613.f_146) >= 20000 && (NETWORK::GET_NETWORK_TIME() - Local_613.f_146) < 60000)
	{
		func_77();
	}
	else if ((NETWORK::GET_NETWORK_TIME() - Local_613.f_146) < 102500)
	{
		func_76();
	}
}

void func_76()
{
	iVar0 = NETWORK::GET_NETWORK_TIME();
	iVar1 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 5);
	switch (iVar1)
	{
		case 0:
			Local_613.f_62[0].f_1 = 6;
			Local_613.f_62[0] = 32;
			Local_613.f_62[0].f_2 = iVar0;
			Local_613.f_62[1].f_1 = 4;
			Local_613.f_62[1] = 56;
			Local_613.f_62[1].f_2 = iVar0;
			Local_613.f_62[2].f_1 = 4;
			Local_613.f_62[2] = 60;
			Local_613.f_62[2].f_2 = iVar0;
			Local_613.f_62[3].f_1 = 6;
			Local_613.f_62[3] = 84;
			Local_613.f_62[3].f_2 = iVar0;
			Local_613.f_62[4].f_1 = 0;
			Local_613.f_62[4] = 58;
			Local_613.f_62[4].f_2 = iVar0;
			Local_613.f_62[5].f_1 = 1;
			Local_613.f_62[5] = 54;
			Local_613.f_62[5].f_2 = iVar0;
			Local_613.f_62[6].f_1 = 1;
			Local_613.f_62[6] = 62;
			Local_613.f_62[6].f_2 = iVar0;
			break;
		
		case 1:
			Local_613.f_62[0].f_1 = 5;
			Local_613.f_62[0] = 32;
			Local_613.f_62[0].f_2 = iVar0;
			Local_613.f_62[1].f_1 = 1;
			Local_613.f_62[1] = 56;
			Local_613.f_62[1].f_2 = iVar0;
			Local_613.f_62[2].f_1 = 1;
			Local_613.f_62[2] = 60;
			Local_613.f_62[2].f_2 = iVar0;
			Local_613.f_62[3].f_1 = 5;
			Local_613.f_62[3] = 84;
			Local_613.f_62[3].f_2 = iVar0;
			Local_613.f_62[4].f_1 = 5;
			Local_613.f_62[4] = 58;
			Local_613.f_62[4].f_2 = iVar0;
			Local_613.f_62[5].f_1 = 0;
			Local_613.f_62[5] = 54;
			Local_613.f_62[5].f_2 = iVar0;
			Local_613.f_62[6].f_1 = 0;
			Local_613.f_62[6] = 62;
			Local_613.f_62[6].f_2 = iVar0;
			break;
		
		case 2:
			Local_613.f_62[0].f_1 = 3;
			Local_613.f_62[0] = 34;
			Local_613.f_62[0].f_2 = iVar0;
			Local_613.f_62[1].f_1 = 6;
			Local_613.f_62[1] = 30;
			Local_613.f_62[1].f_2 = iVar0;
			Local_613.f_62[2].f_1 = 6;
			Local_613.f_62[2] = 86;
			Local_613.f_62[2].f_2 = iVar0;
			Local_613.f_62[3].f_1 = 3;
			Local_613.f_62[3] = 82;
			Local_613.f_62[3].f_2 = iVar0;
			Local_613.f_62[4].f_1 = 2;
			Local_613.f_62[4] = 58;
			Local_613.f_62[4].f_2 = iVar0;
			Local_613.f_62[5].f_1 = 0;
			Local_613.f_62[5] = 54;
			Local_613.f_62[5].f_2 = iVar0;
			Local_613.f_62[6].f_1 = 0;
			Local_613.f_62[6] = 62;
			Local_613.f_62[6].f_2 = iVar0;
			break;
		
		case 3:
			Local_613.f_62[0].f_1 = 0;
			Local_613.f_62[0] = 30;
			Local_613.f_62[0].f_2 = iVar0;
			Local_613.f_62[1].f_1 = 0;
			Local_613.f_62[1] = 34;
			Local_613.f_62[1].f_2 = iVar0;
			Local_613.f_62[2].f_1 = 0;
			Local_613.f_62[2] = 86;
			Local_613.f_62[2].f_2 = iVar0;
			Local_613.f_62[3].f_1 = 0;
			Local_613.f_62[3] = 82;
			Local_613.f_62[3].f_2 = iVar0;
			Local_613.f_62[4].f_1 = 2;
			Local_613.f_62[4] = 58;
			Local_613.f_62[4].f_2 = iVar0;
			Local_613.f_62[5].f_1 = 7;
			Local_613.f_62[5] = 54;
			Local_613.f_62[5].f_2 = iVar0;
			Local_613.f_62[6].f_1 = 7;
			Local_613.f_62[6] = 62;
			Local_613.f_62[6].f_2 = iVar0;
			break;
		
		case 4:
			Local_613.f_62[0].f_1 = 6;
			Local_613.f_62[0] = 30;
			Local_613.f_62[0].f_2 = iVar0;
			Local_613.f_62[1].f_1 = 6;
			Local_613.f_62[1] = 34;
			Local_613.f_62[1].f_2 = iVar0;
			Local_613.f_62[2].f_1 = 6;
			Local_613.f_62[2] = 86;
			Local_613.f_62[2].f_2 = iVar0;
			Local_613.f_62[3].f_1 = 6;
			Local_613.f_62[3] = 82;
			Local_613.f_62[3].f_2 = iVar0;
			Local_613.f_62[4].f_1 = 0;
			Local_613.f_62[4] = 58;
			Local_613.f_62[4].f_2 = iVar0;
			Local_613.f_62[5].f_1 = 0;
			Local_613.f_62[5] = 54;
			Local_613.f_62[5].f_2 = iVar0;
			Local_613.f_62[6].f_1 = 0;
			Local_613.f_62[6] = 62;
			Local_613.f_62[6].f_2 = iVar0;
			break;
	}
}

void func_77()
{
	iVar0 = NETWORK::GET_NETWORK_TIME();
	iVar1 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 5);
	switch (iVar1)
	{
		case 0:
			Local_613.f_62[0].f_1 = 3;
			Local_613.f_62[0] = 32;
			Local_613.f_62[0].f_2 = iVar0;
			Local_613.f_62[1].f_1 = 4;
			Local_613.f_62[1] = 56;
			Local_613.f_62[1].f_2 = iVar0;
			Local_613.f_62[2].f_1 = 4;
			Local_613.f_62[2] = 60;
			Local_613.f_62[2].f_2 = iVar0;
			Local_613.f_62[3].f_1 = 3;
			Local_613.f_62[3] = 84;
			Local_613.f_62[3].f_2 = iVar0;
			Local_613.f_62[4].f_1 = 2;
			Local_613.f_62[4] = 58;
			Local_613.f_62[4].f_2 = iVar0;
			Local_613.f_62[5].f_1 = 1;
			Local_613.f_62[5] = 54;
			Local_613.f_62[5].f_2 = iVar0;
			Local_613.f_62[6].f_1 = 1;
			Local_613.f_62[6] = 62;
			Local_613.f_62[6].f_2 = iVar0;
			break;
		
		case 1:
			Local_613.f_62[0].f_1 = 5;
			Local_613.f_62[0] = 32;
			Local_613.f_62[0].f_2 = iVar0;
			Local_613.f_62[1].f_1 = 7;
			Local_613.f_62[1] = 56;
			Local_613.f_62[1].f_2 = iVar0;
			Local_613.f_62[2].f_1 = 7;
			Local_613.f_62[2] = 60;
			Local_613.f_62[2].f_2 = iVar0;
			Local_613.f_62[3].f_1 = 5;
			Local_613.f_62[3] = 84;
			Local_613.f_62[3].f_2 = iVar0;
			Local_613.f_62[4].f_1 = 2;
			Local_613.f_62[4] = 58;
			Local_613.f_62[4].f_2 = iVar0;
			Local_613.f_62[5].f_1 = 0;
			Local_613.f_62[5] = 54;
			Local_613.f_62[5].f_2 = iVar0;
			Local_613.f_62[6].f_1 = 0;
			Local_613.f_62[6] = 62;
			Local_613.f_62[6].f_2 = iVar0;
			break;
		
		case 2:
			Local_613.f_62[0].f_1 = 3;
			Local_613.f_62[0] = 30;
			Local_613.f_62[0].f_2 = iVar0;
			Local_613.f_62[1].f_1 = 3;
			Local_613.f_62[1] = 34;
			Local_613.f_62[1].f_2 = iVar0;
			Local_613.f_62[2].f_1 = 3;
			Local_613.f_62[2] = 86;
			Local_613.f_62[2].f_2 = iVar0;
			Local_613.f_62[3].f_1 = 3;
			Local_613.f_62[3] = 82;
			Local_613.f_62[3].f_2 = iVar0;
			Local_613.f_62[4].f_1 = 6;
			Local_613.f_62[4] = 58;
			Local_613.f_62[4].f_2 = iVar0;
			Local_613.f_62[5].f_1 = 0;
			Local_613.f_62[5] = 54;
			Local_613.f_62[5].f_2 = iVar0;
			Local_613.f_62[6].f_1 = 0;
			Local_613.f_62[6] = 62;
			Local_613.f_62[6].f_2 = iVar0;
			break;
		
		case 3:
			Local_613.f_62[0].f_1 = 1;
			Local_613.f_62[0] = 30;
			Local_613.f_62[0].f_2 = iVar0;
			Local_613.f_62[1].f_1 = 1;
			Local_613.f_62[1] = 34;
			Local_613.f_62[1].f_2 = iVar0;
			Local_613.f_62[2].f_1 = 1;
			Local_613.f_62[2] = 86;
			Local_613.f_62[2].f_2 = iVar0;
			Local_613.f_62[3].f_1 = 1;
			Local_613.f_62[3] = 82;
			Local_613.f_62[3].f_2 = iVar0;
			Local_613.f_62[4].f_1 = 2;
			Local_613.f_62[4] = 58;
			Local_613.f_62[4].f_2 = iVar0;
			Local_613.f_62[5].f_1 = 0;
			Local_613.f_62[5] = 54;
			Local_613.f_62[5].f_2 = iVar0;
			Local_613.f_62[6].f_1 = 0;
			Local_613.f_62[6] = 62;
			Local_613.f_62[6].f_2 = iVar0;
			break;
		
		case 4:
			Local_613.f_62[0].f_1 = 0;
			Local_613.f_62[0] = 30;
			Local_613.f_62[0].f_2 = iVar0;
			Local_613.f_62[1].f_1 = 0;
			Local_613.f_62[1] = 34;
			Local_613.f_62[1].f_2 = iVar0;
			Local_613.f_62[2].f_1 = 0;
			Local_613.f_62[2] = 86;
			Local_613.f_62[2].f_2 = iVar0;
			Local_613.f_62[3].f_1 = 0;
			Local_613.f_62[3] = 82;
			Local_613.f_62[3].f_2 = iVar0;
			Local_613.f_62[4].f_1 = 6;
			Local_613.f_62[4] = 58;
			Local_613.f_62[4].f_2 = iVar0;
			Local_613.f_62[5].f_1 = 6;
			Local_613.f_62[5] = 54;
			Local_613.f_62[5].f_2 = iVar0;
			Local_613.f_62[6].f_1 = 6;
			Local_613.f_62[6] = 62;
			Local_613.f_62[6].f_2 = iVar0;
			break;
	}
}

void func_78()
{
	iVar0 = NETWORK::GET_NETWORK_TIME();
	Local_613.f_62[0].f_1 = 3;
	Local_613.f_62[0] = 32;
	Local_613.f_62[0].f_2 = iVar0;
	Local_613.f_62[1].f_1 = 3;
	Local_613.f_62[1] = 56;
	Local_613.f_62[1].f_2 = iVar0;
	Local_613.f_62[2].f_1 = 3;
	Local_613.f_62[2] = 60;
	Local_613.f_62[2].f_2 = iVar0;
	Local_613.f_62[3].f_1 = 3;
	Local_613.f_62[3] = 84;
	Local_613.f_62[3].f_2 = iVar0;
	iVar1 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 3);
	switch (iVar1)
	{
		case 0:
			Local_613.f_62[4].f_1 = 2;
			Local_613.f_62[4] = 58;
			Local_613.f_62[4].f_2 = iVar0;
			break;
		
		case 1:
			Local_613.f_62[4].f_1 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(4, 6);
			Local_613.f_62[4] = 58;
			Local_613.f_62[4].f_2 = iVar0;
			break;
		
		case 2:
			Local_613.f_62[4].f_1 = 1;
			Local_613.f_62[4] = 54;
			Local_613.f_62[4].f_2 = iVar0;
			Local_613.f_62[5].f_1 = 1;
			Local_613.f_62[5] = 58;
			Local_613.f_62[5].f_2 = iVar0;
			Local_613.f_62[6].f_1 = 1;
			Local_613.f_62[6] = 62;
			Local_613.f_62[6].f_2 = iVar0;
			break;
		
		case 3:
			break;
	}
}

void func_79()
{
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		Local_613.f_62[iVar0] = -1;
		Local_613.f_62[iVar0].f_1 = -1;
		Local_613.f_62[iVar0].f_2 = -2147483647;
		iVar0++;
	}
	iVar1 = NETWORK::GET_NETWORK_TIME();
	Local_613.f_62[0] = 54;
	Local_613.f_62[0].f_2 = iVar1;
	Local_613.f_62[1] = 56;
	Local_613.f_62[1].f_2 = iVar1;
	Local_613.f_62[2] = 58;
	Local_613.f_62[2].f_2 = iVar1;
	Local_613.f_62[3] = 60;
	Local_613.f_62[3].f_2 = iVar1;
	Local_613.f_62[4] = 62;
	Local_613.f_62[4].f_2 = iVar1;
	iVar2 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 5);
	switch (iVar2)
	{
		case 0:
			Local_613.f_62[0].f_1 = 3;
			Local_613.f_62[1].f_1 = 3;
			Local_613.f_62[3].f_1 = 3;
			Local_613.f_62[4].f_1 = 3;
			break;
		
		case 1:
			Local_613.f_62[0].f_1 = 4;
			Local_613.f_62[1].f_1 = 4;
			Local_613.f_62[3].f_1 = 4;
			Local_613.f_62[4].f_1 = 4;
			break;
		
		case 2:
			Local_613.f_62[0].f_1 = 5;
			Local_613.f_62[1].f_1 = 5;
			Local_613.f_62[3].f_1 = 5;
			Local_613.f_62[4].f_1 = 5;
			break;
		
		case 3:
			Local_613.f_62[0].f_1 = 7;
			Local_613.f_62[1].f_1 = 7;
			Local_613.f_62[3].f_1 = 7;
			Local_613.f_62[4].f_1 = 7;
			break;
		
		case 4:
			Local_613.f_62[0].f_1 = 6;
			Local_613.f_62[1].f_1 = 6;
			Local_613.f_62[3].f_1 = 6;
			Local_613.f_62[4].f_1 = 6;
			break;
	}
	iVar2 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 4);
	switch (iVar2)
	{
		case 0:
			Local_613.f_62[2].f_1 = -1;
			Local_613.f_62[2] = -1;
			Local_613.f_62[2].f_2 = -2147483647;
			break;
		
		case 1:
			Local_613.f_62[2].f_1 = 2;
			break;
		
		case 2:
			Local_613.f_62[2].f_1 = 0;
			break;
		
		case 3:
			Local_613.f_62[2].f_1 = 1;
			break;
	}
}

void func_80()
{
	if (!Local_160.f_178.f_1)
	{
		return;
	}
	iVar5 = 0;
	while (iVar5 <= 5)
	{
		iVar6 = 0;
		while (iVar6 <= 3)
		{
			iVar7 = func_81(iVar5, iVar6);
			if (Local_613[iVar5][iVar6] != iVar7)
			{
				Local_613[iVar5][iVar6] = iVar7;
			}
			if (iVar7 != -1)
			{
				uVar0[iVar7]++;
			}
			iVar6++;
		}
		iVar5++;
	}
	iVar5 = 0;
	while (iVar5 <= 3)
	{
		if (iLocal_814[iVar5] != uVar0[iVar5])
		{
			iLocal_814[iVar5] = uVar0[iVar5];
		}
		iVar5++;
	}
}

int func_81(int iParam0, int iParam1)
{
	iVar0 = func_85(iParam0, iParam1);
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)) && !Local_921[iVar1].f_25)
		{
		}
		else if (Local_819[iVar1].f_6 == -1)
		{
		}
		else if (!func_82(&(Local_613.f_85[Local_819[iVar1].f_6][1]), ((iVar0 - 13) - 1)))
		{
		}
		else if (!func_82(&(Local_613.f_85[Local_819[iVar1].f_6][1]), (iVar0 - 13)))
		{
		}
		else if (!func_82(&(Local_613.f_85[Local_819[iVar1].f_6][0]), ((iVar0 - 13) - 1)))
		{
		}
		else if (!func_82(&(Local_613.f_85[Local_819[iVar1].f_6][0]), (iVar0 - 13) + 1))
		{
		}
		else if (!func_82(&(Local_613.f_85[Local_819[iVar1].f_6][0]), (iVar0 - 1)))
		{
		}
		else if (!func_82(&(Local_613.f_85[Local_819[iVar1].f_6][0]), iVar0 + 1))
		{
		}
		else if (!func_82(&(Local_613.f_85[Local_819[iVar1].f_6][1]), (iVar0 + 13 - 1)))
		{
		}
		else if (!func_82(&(Local_613.f_85[Local_819[iVar1].f_6][1]), iVar0 + 13))
		{
		}
		else
		{
			return Local_819[iVar1].f_6;
		}
		iVar1++;
	}
	return -1;
}

bool func_82(var uParam0, int iParam1)
{
	return GAMEPLAY::IS_BIT_SET((*uParam0)[func_84(iParam1)], func_83(iParam1));
}

int func_83(int iParam0)
{
	if (iParam0 < 31)
	{
		return iParam0;
	}
	else if (iParam0 < 62)
	{
		return (iParam0 - 31);
	}
	return (iParam0 - func_84(iParam0) * 31);
}

int func_84(int iParam0)
{
	if (iParam0 < 31)
	{
		return 0;
	}
	else if (iParam0 < 62)
	{
		return 1;
	}
	return (iParam0 / 31);
}

int func_85(int iParam0, int iParam1)
{
	return func_72((1 + iParam0 * 2), (1 + iParam1 * 2));
}

void func_86()
{
	if (NETWORK::GET_NETWORK_TIME() < Local_613.f_146)
	{
		return;
	}
	Local_613.f_84 = Local_613.f_146;
	Local_613.f_161 = Local_613.f_146;
	func_75(1, 0);
	func_64(4);
}

void func_87()
{
	func_88();
	func_64(3);
}

void func_88()
{
	if (!Local_160.f_178.f_1)
	{
		return;
	}
	Local_613.f_162 = 0;
	Local_613.f_163 = 0;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Local_613[iVar0][iVar1] = -1;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		iLocal_814[iVar0] = 0;
		iVar1 = 0;
		while (iVar1 <= 1)
		{
			iVar2 = 0;
			while (iVar2 <= 3)
			{
				Local_613.f_85[iVar0][iVar1][iVar2] = 0;
				iVar2++;
			}
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Local_160.f_149[iVar0] == -1)
		{
		}
		else
		{
			func_89(iVar0, func_92(iVar0), func_91(iVar0), 1);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		Local_613.f_62[iVar0] = -1;
		Local_613.f_62[iVar0].f_1 = -1;
		Local_613.f_62[iVar0].f_2 = -2147483647;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		Local_613.f_148[iVar0] = -2147483647;
		Local_613.f_148[iVar0].f_1 = -1;
		Local_613.f_148[iVar0].f_2 = -1;
		Local_613.f_148[iVar0].f_3 = -1;
		iVar0++;
	}
	Local_613.f_146 = SYSTEM::CEIL((SYSTEM::TO_FLOAT(NETWORK::GET_NETWORK_TIME() + 5000) / 1000f)) * 1000;
	func_80();
}

void func_89(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = func_85(iParam1, iParam2);
	if (!(iParam3 && iParam0 == 3))
	{
		func_90(&(Local_613.f_85[iParam0][1]), ((iVar0 - 13) - 1));
	}
	if (!(iParam3 && iParam0 == 2))
	{
		func_90(&(Local_613.f_85[iParam0][1]), (iVar0 - 13));
	}
	func_90(&(Local_613.f_85[iParam0][0]), ((iVar0 - 13) - 1));
	func_90(&(Local_613.f_85[iParam0][0]), (iVar0 - 13) + 1);
	func_90(&(Local_613.f_85[iParam0][0]), (iVar0 - 1));
	func_90(&(Local_613.f_85[iParam0][0]), iVar0 + 1);
	if (!(iParam3 && iParam0 == 1))
	{
		func_90(&(Local_613.f_85[iParam0][1]), (iVar0 + 13 - 1));
	}
	if (!(iParam3 && iParam0 == 0))
	{
		func_90(&(Local_613.f_85[iParam0][1]), iVar0 + 13);
	}
	Local_613[iParam1][iParam2] = iParam0;
}

void func_90(var uParam0, int iParam1)
{
	GAMEPLAY::SET_BIT(uParam0[func_84(iParam1)], func_83(iParam1));
}

int func_91(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 0;
		
		case 2:
			return 3;
		
		case 3:
			return 3;
		
		default:
	}
	return -1;
}

int func_92(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 5;
		
		case 2:
			return 0;
		
		case 3:
			return 5;
		
		default:
	}
	return -1;
}

void func_93()
{
	bVar2 = true;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)) && !Local_921[iVar0].f_25)
		{
		}
		else
		{
			if (Local_819[iVar0].f_6 == -1)
			{
				bVar2 = false;
			}
			else if (Local_819[iVar0] == 0)
			{
				bVar2 = false;
			}
			else
			{
				iVar1++;
				iVar0++;
			}
			if (!bVar2)
			{
				if (func_98(&(Local_160.f_314)))
				{
					func_97(&(Local_160.f_314));
				}
				return;
			}
			if (iVar1 <= 1)
			{
				if (func_98(&(Local_160.f_314)))
				{
					func_97(&(Local_160.f_314));
				}
				return;
			}
			if (!func_98(&(Local_160.f_314)))
			{
				func_96(&(Local_160.f_314), 0, 0);
				return;
			}
			else if (!func_94(&(Local_160.f_314), 1500, 0))
			{
				return;
			}
			Local_613.f_138 = iVar1 + 1;
			func_64(2);
		}

int func_94(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_95(uParam0, bParam2, 0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
	{
		if (GAMEPLAY::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (GAMEPLAY::ABSI(NETWORK::GET_TIME_DIFFERENCE(GAMEPLAY::GET_GAME_TIMER(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_95(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				*uParam0 = NETWORK::_0x89023FBBF9200E9F();
			}
		}
		else
		{
			*uParam0 = GAMEPLAY::GET_GAME_TIMER();
		}
		uParam0->f_1 = 1;
	}
}

void func_96(var uParam0, bool bParam1, bool bParam2)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = NETWORK::GET_NETWORK_TIME();
		}
		else
		{
			*uParam0 = NETWORK::_0x89023FBBF9200E9F();
		}
	}
	else
	{
		*uParam0 = GAMEPLAY::GET_GAME_TIMER();
	}
	uParam0->f_1 = 1;
}

void func_97(var uParam0)
{
	uParam0->f_1 = 0;
}

bool func_98(var uParam0)
{
	return uParam0->f_1;
}

void func_99()
{
	func_100();
	func_64(1);
}

void func_100()
{
	if (!Local_160.f_178.f_1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 23)
	{
		iVar2[iVar0] = iVar0;
		iVar0++;
	}
	GAMEPLAY::SET_RANDOM_SEED(NETWORK::GET_NETWORK_TIME());
	iVar0 = 0;
	while (iVar0 <= 23)
	{
		iVar1 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 24);
		iVar27 = iVar2[iVar0];
		iVar2[iVar0] = iVar2[iVar1];
		iVar2[iVar1] = iVar27;
		iVar0++;
	}
	iVar28 = 0;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Local_613.f_31[iVar0][iVar1] = iVar2[iVar28];
			iVar28++;
			iVar1++;
		}
		iVar0++;
	}
}

void func_101()
{
	switch (Local_160.f_140)
	{
		case 0:
			func_336();
			break;
		
		case 1:
			func_333();
			break;
		
		case 2:
			func_332();
			break;
		
		case 3:
			func_327();
			break;
		
		case 4:
			func_326();
			break;
		
		case 5:
			func_320();
			break;
		
		case 6:
			func_318();
			break;
		
		case 7:
			func_193();
			break;
		
		case 8:
			func_149();
			break;
		
		case 9:
			func_130();
			break;
		
		case 10:
			func_102();
			break;
		
		case 11:
			func_15();
			break;
		
		case 12:
			break;
	}
}

void func_102()
{
	func_126();
	func_103();
}

void func_103()
{
	func_125();
	func_124("MPArcadeCabinetGridHUD", "lbd", 0.5f, 0.5f, 0.6604167f, 0.9481481f, 0f, Local_160.f_107.f_17);
	UI::SET_TEXT_SCALE(1f, 1f);
	UI::SET_TEXT_COLOUR(0, 0, 0, 255);
	UI::SET_TEXT_CENTRE(1);
	UI::SET_TEXT_FONT(7);
	UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("SCGW_LBD_T");
	UI::END_TEXT_COMMAND_DISPLAY_TEXT(func_123((0.5f + 0.001041667f)), (0.15f + 0.003703704f), 0);
	UI::SET_TEXT_SCALE(1f, 1f);
	UI::SET_TEXT_COLOUR(255, 255, 255, 255);
	UI::SET_TEXT_CENTRE(1);
	UI::SET_TEXT_FONT(7);
	UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("SCGW_LBD_T");
	UI::END_TEXT_COMMAND_DISPLAY_TEXT(func_123(0.5f), 0.15f, 0);
	fVar5 = 0.22f;
	iVar6 = 0;
	iVar6 = 0;
	while (iVar6 <= 9)
	{
		func_120(Local_613.f_165[iVar6], &uVar0);
		iVar7 = 255;
		if (Local_613.f_165[iVar6].f_2 == Local_160.f_178)
		{
			iVar7 = SYSTEM::ROUND(GAMEPLAY::ABSF((SYSTEM::SIN((SYSTEM::TO_FLOAT(NETWORK::GET_NETWORK_TIME()) * 0.5f)) * 80f))) + 175;
		}
		UI::SET_TEXT_SCALE(1f, 1f);
		UI::SET_TEXT_COLOUR(0, 0, 0, iVar7);
		UI::SET_TEXT_RIGHT_JUSTIFY(1);
		UI::SET_TEXT_WRAP(func_123(0f), func_123((0.37f + 0.001041667f)));
		UI::SET_TEXT_FONT(7);
		UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(func_119(iVar6));
		UI::END_TEXT_COMMAND_DISPLAY_TEXT(func_123(0.5f), (fVar5 + 0.003703704f), 0);
		UI::SET_TEXT_SCALE(1f, 1f);
		UI::SET_TEXT_COLOUR(Local_160.f_107[uVar0[3]], Local_160.f_107[uVar0[3]].f_1, Local_160.f_107[uVar0[3]].f_2, iVar7);
		UI::SET_TEXT_RIGHT_JUSTIFY(1);
		UI::SET_TEXT_WRAP(func_123(0f), func_123(0.37f));
		UI::SET_TEXT_FONT(7);
		UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(func_119(iVar6));
		UI::END_TEXT_COMMAND_DISPLAY_TEXT(func_123(0.5f), fVar5, 0);
		UI::SET_TEXT_SCALE(1f, 1f);
		UI::SET_TEXT_COLOUR(0, 0, 0, iVar7);
		UI::SET_TEXT_RIGHT_JUSTIFY(1);
		UI::SET_TEXT_WRAP(func_123(0f), func_123((0.4135417f + 0.001041667f)));
		UI::SET_TEXT_FONT(7);
		UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
		UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_118(uVar0[0]));
		UI::END_TEXT_COMMAND_DISPLAY_TEXT(func_123(0.5f), (fVar5 + 0.003703704f), 0);
		UI::SET_TEXT_SCALE(1f, 1f);
		UI::SET_TEXT_COLOUR(Local_160.f_107[uVar0[3]], Local_160.f_107[uVar0[3]].f_1, Local_160.f_107[uVar0[3]].f_2, iVar7);
		UI::SET_TEXT_RIGHT_JUSTIFY(1);
		UI::SET_TEXT_WRAP(func_123(0f), func_123(0.4135417f));
		UI::SET_TEXT_FONT(7);
		UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
		UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_118(uVar0[0]));
		UI::END_TEXT_COMMAND_DISPLAY_TEXT(func_123(0.5f), fVar5, 0);
		UI::SET_TEXT_SCALE(1f, 1f);
		UI::SET_TEXT_COLOUR(0, 0, 0, iVar7);
		UI::SET_TEXT_RIGHT_JUSTIFY(1);
		UI::SET_TEXT_WRAP(func_123(0f), func_123((0.4411458f + 0.001041667f)));
		UI::SET_TEXT_FONT(7);
		UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
		UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_118(uVar0[1]));
		UI::END_TEXT_COMMAND_DISPLAY_TEXT(func_123(0.5f), (fVar5 + 0.003703704f), 0);
		UI::SET_TEXT_SCALE(1f, 1f);
		UI::SET_TEXT_COLOUR(Local_160.f_107[uVar0[3]], Local_160.f_107[uVar0[3]].f_1, Local_160.f_107[uVar0[3]].f_2, iVar7);
		UI::SET_TEXT_RIGHT_JUSTIFY(1);
		UI::SET_TEXT_WRAP(func_123(0f), func_123(0.4411458f));
		UI::SET_TEXT_FONT(7);
		UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
		UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_118(uVar0[1]));
		UI::END_TEXT_COMMAND_DISPLAY_TEXT(func_123(0.5f), fVar5, 0);
		UI::SET_TEXT_SCALE(1f, 1f);
		UI::SET_TEXT_COLOUR(0, 0, 0, iVar7);
		UI::SET_TEXT_RIGHT_JUSTIFY(1);
		UI::SET_TEXT_WRAP(func_123(0f), func_123((0.46875f + 0.001041667f)));
		UI::SET_TEXT_FONT(7);
		UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
		UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_118(uVar0[2]));
		UI::END_TEXT_COMMAND_DISPLAY_TEXT(func_123(0.5f), (fVar5 + 0.003703704f), 0);
		UI::SET_TEXT_SCALE(1f, 1f);
		UI::SET_TEXT_COLOUR(Local_160.f_107[uVar0[3]], Local_160.f_107[uVar0[3]].f_1, Local_160.f_107[uVar0[3]].f_2, iVar7);
		UI::SET_TEXT_RIGHT_JUSTIFY(1);
		UI::SET_TEXT_WRAP(func_123(0f), func_123(0.46875f));
		UI::SET_TEXT_FONT(7);
		UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
		UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_118(uVar0[2]));
		UI::END_TEXT_COMMAND_DISPLAY_TEXT(func_123(0.5f), fVar5, 0);
		UI::SET_TEXT_SCALE(1f, 1f);
		UI::SET_TEXT_COLOUR(0, 0, 0, iVar7);
		UI::SET_TEXT_RIGHT_JUSTIFY(1);
		UI::SET_TEXT_WRAP(func_123(0f), func_123((0.695f + 0.001041667f)));
		UI::SET_TEXT_FONT(7);
		UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("SCGW_PTS");
		UI::ADD_TEXT_COMPONENT_INTEGER(Local_613.f_165[iVar6].f_1);
		UI::END_TEXT_COMMAND_DISPLAY_TEXT(func_123(0.5f), (fVar5 + 0.003703704f), 0);
		UI::SET_TEXT_SCALE(1f, 1f);
		UI::SET_TEXT_COLOUR(Local_160.f_107[uVar0[3]], Local_160.f_107[uVar0[3]].f_1, Local_160.f_107[uVar0[3]].f_2, iVar7);
		UI::SET_TEXT_RIGHT_JUSTIFY(1);
		UI::SET_TEXT_WRAP(func_123(0f), func_123(0.695f));
		UI::SET_TEXT_FONT(7);
		UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("SCGW_PTS");
		UI::ADD_TEXT_COMPONENT_INTEGER(Local_613.f_165[iVar6].f_1);
		UI::END_TEXT_COMMAND_DISPLAY_TEXT(func_123(0.5f), fVar5, 0);
		fVar5 = (fVar5 + 0.06f);
		iVar6++;
	}
	func_105();
	func_104();
}

void func_104()
{
	func_124("MPArcadeCabinetGridTiles", "facade", 0.5f, 0.5f, 1f, 1f, 0f, Local_160.f_107.f_17);
}

void func_105()
{
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_106(iVar0);
		iVar0++;
	}
}

void func_106(int iParam0)
{
	if (!Local_1070[iParam0])
	{
		return;
	}
	Var0 = { func_117() };
	Var6.f_3 = 255;
	if (Local_1070[iParam0].f_3)
	{
		Var0 = -Var0;
	}
	Var2 = { func_116() };
	if (!Local_1070[iParam0].f_2)
	{
		if (Local_1070[iParam0].f_4 > 0)
		{
			Var2.f_1 = (Var2.f_1 - ((Var0.f_1 * (IntToFloat(Local_1070[iParam0].f_4) % (IntToFloat(Local_1070[iParam0].f_6) * 1f))) / (IntToFloat(Local_1070[iParam0].f_6) * 1f)));
			Var4 = { Var2 };
			Var4.f_1 = (Var4.f_1 + Var0.f_1);
		}
		else if (Local_1070[iParam0].f_7 > 0)
		{
			Local_1070[iParam0].f_4 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, Local_1070[iParam0].f_7);
			Local_1070[iParam0].f_2 = 1;
		}
	}
	else if (Local_1070[iParam0].f_4 > 0)
	{
	}
	else
	{
		Local_1070[iParam0].f_4 = Local_1070[iParam0].f_6;
		Local_1070[iParam0].f_2 = 0;
	}
	if (Local_1070[iParam0].f_1)
	{
		fVar10 = (SYSTEM::TO_FLOAT(Local_1070[iParam0].f_5) / SYSTEM::TO_FLOAT(Local_1070[iParam0].f_8));
		Var6 = func_115(Local_1070[iParam0].f_9, Local_1070[iParam0].f_13, fVar10);
		Var6.f_1 = func_115(Local_1070[iParam0].f_9.f_1, Local_1070[iParam0].f_13.f_1, fVar10);
		Var6.f_2 = func_115(Local_1070[iParam0].f_9.f_2, Local_1070[iParam0].f_13.f_2, fVar10);
		Var6.f_3 = func_115(Local_1070[iParam0].f_9.f_3, Local_1070[iParam0].f_13.f_3, fVar10);
	}
	else
	{
		Var6 = { Local_1070[iParam0].f_9 };
	}
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(func_114(iParam0)))
	{
		func_111(Var2, Var0, Var6);
	}
	else
	{
		func_107(func_110(iParam0), func_114(iParam0), Var2, Var0, 0f, Var6);
	}
	if (!Local_1070[iParam0].f_2 && Local_1070[iParam0].f_4 > 0)
	{
		if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(func_114(0)))
		{
			func_111(Var4, Var0, Var6);
		}
		else
		{
			func_107(func_110(iParam0), func_114(iParam0), Var4, Var0, 0f, Var6);
		}
	}
	Local_1070[iParam0].f_5 = (Local_1070[iParam0].f_5 - SYSTEM::ROUND((GAMEPLAY::GET_FRAME_TIME() * 1000f)));
	if (Local_1070[iParam0].f_5 < 0)
	{
		Local_1070[iParam0].f_5 = (Local_1070[iParam0].f_5 + Local_1070[iParam0].f_8);
	}
	Local_1070[iParam0].f_4 = (Local_1070[iParam0].f_4 - SYSTEM::ROUND((GAMEPLAY::GET_FRAME_TIME() * 1000f)));
	if (Local_1070[iParam0].f_4 < 0)
	{
		Local_1070[iParam0].f_4 = 0;
	}
}

void func_107(var uParam0, var uParam1, struct<2> Param2, struct<2> Param4, float fParam6, struct<4> Param7)
{
	Param2 = { func_108(Param2) };
	Param4 = { func_108(Param4) };
	func_124(uParam0, uParam1, Param2, Param2.f_1, Param4, Param4.f_1, fParam6, Param7);
}

struct<2> func_108(struct<2> Param0)
{
	return func_109((Param0 * (1f / 1920f)), (Param0.f_1 * (1f / 1080f)));
}

struct<2> func_109(float fParam0, float fParam1)
{
	Var0 = fParam0;
	Var0.f_1 = fParam1;
	return Var0;
}

char* func_110(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "MPArcadeGamesFX05";
			break;
		
		case 1:
			return "MPArcadeGamesFX05";
			break;
		
		case 2:
			return "";
			break;
		
		case 3:
			return "MPArcadeGamesFX03";
			break;
		
		case 4:
			return "MPArcadeGamesFX04";
			break;
		
		case 5:
			return "MPArcadeGamesFX00";
			break;
		
		case 6:
			return "MPArcadeGamesFX02";
			break;
		
		case 7:
			return "MPArcadeGamesFX01";
			break;
	}
	return "";
}

void func_111(struct<2> Param0, struct<2> Param2, struct<4> Param4)
{
	Param0 = { func_108(Param0) };
	Param2 = { func_108(Param2) };
	func_112(Param0, Param2, Param4);
}

void func_112(struct<2> Param0, struct<2> Param2, struct<4> Param4)
{
	Param0 = { func_113(Param0) };
	Param2 = (Param2 * fLocal_136);
	GRAPHICS::DRAW_RECT(Param0, Param0.f_1, Param2, Param2.f_1, Param4, Param4.f_1, Param4.f_2, Param4.f_3, 0);
}

struct<2> func_113(struct<2> Param0)
{
	Param0 = func_123(Param0);
	return Param0;
}

char* func_114(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "TV_LINE_OVERLAY_DEGENATRON";
			break;
		
		case 1:
			return "SCREEN_GRAD_100_50";
			break;
		
		case 2:
			return "";
			break;
		
		case 3:
			return "Screen_Overlay_2";
			break;
		
		case 4:
			return "Screen_Overlay_4";
			break;
		
		case 5:
			return "Screen_Overlay_8";
			break;
		
		case 6:
			return "Grid_1";
			break;
		
		case 7:
			return "FlatScreen1";
			break;
	}
	return "";
}

int func_115(int iParam0, int iParam1, float fParam2)
{
	return SYSTEM::ROUND((((1f - fParam2) * IntToFloat(iParam0)) + (fParam2 * IntToFloat(iParam1))));
}

struct<2> func_116()
{
	return func_109((1920f / 2f), (1080f / 2f));
}

struct<2> func_117()
{
	return func_109(1920f, 1080f);
}

char* func_118(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "A";
		
		case 1:
			return "B";
		
		case 2:
			return "C";
		
		case 3:
			return "D";
		
		case 4:
			return "E";
		
		case 5:
			return "F";
		
		case 6:
			return "G";
		
		case 7:
			return "H";
		
		case 8:
			return "I";
		
		case 9:
			return "J";
		
		case 10:
			return "K";
		
		case 11:
			return "L";
		
		case 12:
			return "M";
		
		case 13:
			return "N";
		
		case 14:
			return "O";
		
		case 15:
			return "P";
		
		case 16:
			return "Q";
		
		case 17:
			return "R";
		
		case 18:
			return "S";
		
		case 19:
			return "T";
		
		case 20:
			return "U";
		
		case 21:
			return "V";
		
		case 22:
			return "W";
		
		case 23:
			return "X";
		
		case 24:
			return "Y";
		
		case 25:
			return "Z";
		
		case 26:
			return "0";
		
		case 27:
			return "1";
		
		case 28:
			return "2";
		
		case 29:
			return "3";
		
		case 30:
			return "4";
		
		case 31:
			return "5";
		
		case 32:
			return "6";
		
		case 33:
			return "7";
		
		case 34:
			return "8";
		
		case 35:
			return "9";
		
		default:
	}
	return "";
}

char* func_119(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "SCGW_1ST";
		
		case 1:
			return "SCGW_2ND";
		
		case 2:
			return "SCGW_3RD";
		
		case 3:
			return "SCGW_4TH";
		
		case 4:
			return "SCGW_5TH";
		
		case 5:
			return "SCGW_6TH";
		
		case 6:
			return "SCGW_7TH";
		
		case 7:
			return "SCGW_8TH";
		
		case 8:
			return "SCGW_9TH";
		
		case 9:
			return "SCGW_10TH";
		
		default:
	}
	return "SCGW_URD";
}

void func_120(int iParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		(*uParam1)[iVar0] = func_121(iParam0, iVar0, 6);
		iVar0++;
	}
}

var func_121(var uParam0, int iParam1, int iParam2)
{
	uVar0 = func_122(iParam2, 0);
	return (SYSTEM::SHIFT_RIGHT(uParam0, (iParam1 * iParam2)) && uVar0);
}

var func_122(int iParam0, int iParam1)
{
	iVar1 = 0;
	while (iVar1 <= (iParam0 - 1))
	{
		GAMEPLAY::SET_BIT(&uVar0, (iParam1 + iVar1));
		iVar1++;
	}
	return uVar0;
}

float func_123(float fParam0)
{
	fParam0 = (((fParam0 * 1920f) - ((1920f - 1080f) / 2f)) / 1080f);
	fParam0 = (0.5f - ((0.5f - fParam0) / fLocal_135));
	return fParam0;
}

void func_124(char* sParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, struct<4> Param7)
{
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	iVar0 = SYSTEM::ROUND((fParam3 * IntToFloat(iLocal_138)));
	fParam3 = (SYSTEM::TO_FLOAT(iVar0) * (1f / IntToFloat(iLocal_138)));
	iVar0 = SYSTEM::ROUND(((fParam5 * IntToFloat(iLocal_138)) / 4f)) * 4;
	fParam5 = (SYSTEM::TO_FLOAT(iVar0) * (1f / IntToFloat(iLocal_138)));
	unk_0x2D3B147AFAD49DE0(sParam0, sParam1, func_123(fParam2), fParam3, (fParam4 * fLocal_136), fParam5, fParam6, Param7, Param7.f_1, Param7.f_2, Param7.f_3, 0);
}

void func_125()
{
	func_112(func_109(0.5f, 0.5f), func_109(1f, 1f), Local_160.f_107.f_25);
}

void func_126()
{
	GAMEPLAY::SET_BIT(&(Local_160.f_417), 0);
	StringCopy(&cVar0, "SC_H_LBD_3", 16);
	if (CONTROLS::_IS_INPUT_DISABLED(2))
	{
		StringConCat(&cVar0, "PC", 16);
	}
	if (func_129(&cVar0))
	{
		return;
	}
	func_20();
	func_127(&cVar0);
}

void func_127(char[4] cParam0)
{
	Local_160.f_442 = GAMEPLAY::GET_HASH_KEY(cParam0);
	func_128(cParam0);
}

void func_128(var uParam0)
{
	UI::BEGIN_TEXT_COMMAND_DISPLAY_HELP(uParam0);
	UI::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, 1, -1);
}

int func_129(char[4] cParam0)
{
	if (Local_160.f_442 == GAMEPLAY::GET_HASH_KEY(cParam0))
	{
		return 1;
	}
	return 0;
}

void func_130()
{
	if (!func_148())
	{
		func_15();
	}
	func_138();
	func_137();
	if (SOCIALCLUB::_SC_HAS_CHECK_STRING_TASK_COMPLETED(Local_160.f_436))
	{
		if (SOCIALCLUB::_SC_GET_CHECK_STRING_STATUS(Local_160.f_436))
		{
			return;
		}
		if (SOCIALCLUB::_0x85535ACF97FC0969(Local_160.f_436))
		{
			func_135();
			func_19(10);
			func_134("Frontend_Change_Screen");
			Local_160.f_436 = 0;
		}
		else
		{
			func_134("Frontend_Change_Letter");
			Local_160.f_432 = 0;
			func_120(0, &iVar0);
			iVar0[3] = Local_819[Local_160.f_178].f_6;
			Local_819[Local_160.f_178].f_7 = func_132(&iVar0);
			Local_160.f_436 = 0;
		}
		return;
	}
	iVar5 = 227;
	iVar6 = 226;
	iVar7 = 191;
	iVar8 = 194;
	if (CONTROLS::_IS_INPUT_DISABLED(2))
	{
		iVar7 = 237;
		iVar8 = 238;
		iVar5 = 188;
		iVar6 = 187;
	}
	if (CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(2, iVar7))
	{
		Local_160.f_432++;
		if (Local_160.f_432 == 3)
		{
			func_120(Local_819[Local_160.f_178].f_7, &iVar0);
			StringCopy(&cVar9, func_118(iVar0[0]), 4);
			StringConCat(&cVar9, func_118(iVar0[1]), 4);
			StringConCat(&cVar9, func_118(iVar0[2]), 4);
			if (SOCIALCLUB::_SC_START_CHECK_STRING_TASK(&cVar9, &(Local_160.f_436)))
			{
				func_134("Frontend_Entered_Score");
			}
		}
		else if (func_131(Local_160.f_178) == 99)
		{
			func_134("Frontend_Change_Screen");
			func_19(10);
		}
		return;
	}
	if (func_131(Local_160.f_178) == 99)
	{
		return;
	}
	if (CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(2, iVar8))
	{
		if (Local_160.f_432 > 0)
		{
			Local_160.f_432 = (Local_160.f_432 - 1);
		}
		return;
	}
	iVar10 = 0;
	if (CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(2, iVar5))
	{
		iVar10 = 1;
	}
	else if (CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(2, iVar6))
	{
		iVar10 = -1;
	}
	if (iVar10 == 0)
	{
		return;
	}
	func_134("Frontend_Change_Letter");
	func_120(Local_819[Local_160.f_178].f_7, &iVar0);
	iVar0[Local_160.f_432] = (iVar0[Local_160.f_432] + iVar10);
	if (iVar0[Local_160.f_432] >= 36)
	{
		iVar0[Local_160.f_432] = 0;
	}
	else if (iVar0[Local_160.f_432] < 0)
	{
		iVar0[Local_160.f_432] = 35;
	}
	Local_819[Local_160.f_178].f_7 = func_132(&iVar0);
}

int func_131(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (Local_613.f_165[iVar0].f_2 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 99;
}

var func_132(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		func_133(&uVar1, iVar0, 6, (*iParam0)[iVar0]);
		iVar0++;
	}
	return uVar1;
}

void func_133(var uParam0, int iParam1, int iParam2, var uParam3)
{
	uVar0 = func_122(iParam2, (iParam1 * iParam2));
	*uParam0 = (*uParam0 - (*uParam0 && uVar0));
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(uParam3, (iParam1 * iParam2)));
}

void func_134(char* sParam0)
{
	AUDIO::PLAY_SOUND_FRONTEND(-1, sParam0, "dlc_vw_am_tw_frontend_sounds", 0);
}

void func_135()
{
	Var0 = 750620373;
	Var0.f_1 = PLAYER::PLAYER_ID();
	iVar2 = func_136(1);
	if (!iVar2 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 2, iVar2);
	}
}

var func_136(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
			iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
			if (func_12(iVar2, 0, 0))
			{
				if (iVar2 != PLAYER::PLAYER_ID() || iParam0)
				{
					GAMEPLAY::SET_BIT(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

void func_137()
{
	GAMEPLAY::SET_BIT(&(Local_160.f_417), 0);
	if (func_131(Local_160.f_178) == 99)
	{
		StringCopy(&cVar0, "SC_H_LBD_2", 16);
	}
	else if (Local_160.f_432 == 2)
	{
		StringCopy(&cVar0, "SC_H_LBD_1", 16);
	}
	else
	{
		StringCopy(&cVar0, "SC_H_LBD_0", 16);
	}
	if (CONTROLS::_IS_INPUT_DISABLED(2))
	{
		StringConCat(&cVar0, "PC", 16);
	}
	if (func_129(&cVar0))
	{
		return;
	}
	func_20();
	func_127(&cVar0);
}

void func_138()
{
	func_125();
	iVar5 = 0;
	while (iVar5 <= 3)
	{
		func_140(iVar5, 1);
		if (Local_160.f_149[iVar5] == -1)
		{
		}
		else
		{
			Var6 = { func_139(iVar5) };
			iVar8 = func_131(Local_160.f_149[iVar5]);
			UI::SET_TEXT_SCALE(1.1f, 1.1f);
			UI::SET_TEXT_COLOUR(0, 0, 0, 255);
			UI::SET_TEXT_CENTRE(1);
			UI::SET_TEXT_FONT(7);
			UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(func_119(iVar8));
			UI::END_TEXT_COMMAND_DISPLAY_TEXT(func_123((Var6 + 0.001041667f)), (0.205f + 0.003703704f), 0);
			UI::SET_TEXT_SCALE(1.1f, 1.1f);
			UI::SET_TEXT_COLOUR(Local_160.f_107[iVar5], Local_160.f_107[iVar5].f_1, Local_160.f_107[iVar5].f_2, 255);
			UI::SET_TEXT_CENTRE(1);
			UI::SET_TEXT_FONT(7);
			UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(func_119(iVar8));
			UI::END_TEXT_COMMAND_DISPLAY_TEXT(func_123(Var6), 0.205f, 0);
			iVar9 = Local_819[Local_160.f_149[iVar5]].f_8;
			UI::SET_TEXT_SCALE(0.75f, 0.75f);
			UI::SET_TEXT_COLOUR(0, 0, 0, 255);
			UI::SET_TEXT_CENTRE(1);
			UI::SET_TEXT_FONT(7);
			UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("SCGW_PTS");
			UI::ADD_TEXT_COMPONENT_INTEGER(iVar9);
			UI::END_TEXT_COMMAND_DISPLAY_TEXT(func_123((Var6 + 0.001041667f)), (0.26f + 0.003703704f), 0);
			UI::SET_TEXT_SCALE(0.75f, 0.75f);
			UI::SET_TEXT_COLOUR(Local_160.f_107[iVar5], Local_160.f_107[iVar5].f_1, Local_160.f_107[iVar5].f_2, 255);
			UI::SET_TEXT_CENTRE(1);
			UI::SET_TEXT_FONT(7);
			UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("SCGW_PTS");
			UI::ADD_TEXT_COMPONENT_INTEGER(iVar9);
			UI::END_TEXT_COMMAND_DISPLAY_TEXT(func_123(Var6), 0.26f, 0);
			if (Local_160.f_149[iVar5] != Local_160.f_178)
			{
			}
			else if (iVar8 >= 10)
			{
			}
			else
			{
				func_120(Local_819[Local_160.f_149[iVar5]].f_7, &uVar0);
				UI::SET_TEXT_SCALE(0.95f, 0.95f);
				UI::SET_TEXT_COLOUR(0, 0, 0, 255);
				UI::SET_TEXT_CENTRE(1);
				UI::SET_TEXT_FONT(7);
				UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
				UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_118(uVar0[0]));
				UI::END_TEXT_COMMAND_DISPLAY_TEXT(func_123(((Var6 - 0.025f) + 0.001041667f)), (0.875f + 0.003703704f), 0);
				UI::SET_TEXT_SCALE(0.95f, 0.95f);
				if (Local_160.f_432 == 0)
				{
					UI::SET_TEXT_COLOUR(Local_160.f_107[iVar5], Local_160.f_107[iVar5].f_1, Local_160.f_107[iVar5].f_2, 255);
				}
				else
				{
					UI::SET_TEXT_COLOUR(255, 255, 255, 255);
				}
				UI::SET_TEXT_CENTRE(1);
				UI::SET_TEXT_FONT(7);
				UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
				UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_118(uVar0[0]));
				UI::END_TEXT_COMMAND_DISPLAY_TEXT(func_123((Var6 - 0.025f)), 0.875f, 0);
				func_120(Local_819[Local_160.f_149[iVar5]].f_7, &uVar0);
				UI::SET_TEXT_SCALE(0.95f, 0.95f);
				UI::SET_TEXT_COLOUR(0, 0, 0, 255);
				UI::SET_TEXT_CENTRE(1);
				UI::SET_TEXT_FONT(7);
				UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
				UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_118(uVar0[1]));
				UI::END_TEXT_COMMAND_DISPLAY_TEXT(func_123((Var6 + 0.001041667f)), (0.875f + 0.003703704f), 0);
				UI::SET_TEXT_SCALE(0.95f, 0.95f);
				if (Local_160.f_432 == 1)
				{
					UI::SET_TEXT_COLOUR(Local_160.f_107[iVar5], Local_160.f_107[iVar5].f_1, Local_160.f_107[iVar5].f_2, 255);
				}
				else
				{
					UI::SET_TEXT_COLOUR(255, 255, 255, 255);
				}
				UI::SET_TEXT_CENTRE(1);
				UI::SET_TEXT_FONT(7);
				UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
				UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_118(uVar0[1]));
				UI::END_TEXT_COMMAND_DISPLAY_TEXT(func_123(Var6), 0.875f, 0);
				func_120(Local_819[Local_160.f_149[iVar5]].f_7, &uVar0);
				UI::SET_TEXT_SCALE(0.95f, 0.95f);
				UI::SET_TEXT_COLOUR(0, 0, 0, 255);
				UI::SET_TEXT_CENTRE(1);
				UI::SET_TEXT_FONT(7);
				UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
				UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_118(uVar0[2]));
				UI::END_TEXT_COMMAND_DISPLAY_TEXT(func_123(((Var6 + 0.025f) + 0.001041667f)), (0.875f + 0.003703704f), 0);
				UI::SET_TEXT_SCALE(0.95f, 0.95f);
				if (Local_160.f_432 == 2)
				{
					UI::SET_TEXT_COLOUR(Local_160.f_107[iVar5], Local_160.f_107[iVar5].f_1, Local_160.f_107[iVar5].f_2, 255);
				}
				else
				{
					UI::SET_TEXT_COLOUR(255, 255, 255, 255);
				}
				UI::SET_TEXT_CENTRE(1);
				UI::SET_TEXT_FONT(7);
				UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
				UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_118(uVar0[2]));
				UI::END_TEXT_COMMAND_DISPLAY_TEXT(func_123((Var6 + 0.025f)), 0.875f, 0);
			}
		}
		iVar5++;
	}
	func_105();
	func_104();
}

struct<2> func_139(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_109(0.2552083f, 0.4564815f);
		
		case 1:
			return func_109(0.4182292f, 0.4564815f);
		
		case 2:
			return func_109(0.5817708f, 0.4564815f);
		
		case 3:
			return func_109(0.7447917f, 0.4564815f);
		
		default:
	}
	return func_109(0.5f, 0.5f);
}

void func_140(int iParam0, bool bParam1)
{
	Var0 = { func_139(iParam0) };
	Var2 = { func_147() };
	func_124(func_146(iParam0), func_145(iParam0), Var0, Var0.f_1, Var2, Var2.f_1, 0f, Local_160.f_107.f_17);
	if (Local_160.f_149[iParam0] == Local_160.f_178)
	{
		Var4 = { Local_160.f_107[iParam0] };
		if (Local_819[Local_160.f_178] != 1)
		{
			Var4.f_3 = SYSTEM::ROUND(GAMEPLAY::TAN((SYSTEM::TO_FLOAT(GAMEPLAY::GET_GAME_TIMER()) * 0.25f))) * 255;
		}
		Var8 = { func_144(iParam0) };
		func_124("MPArcadeCabinetGridHUD", "gang_lobby_player_highlight", Var8, Var8.f_1, 0.1625f, 0.05185185f, 0f, Var4);
	}
	if (Local_160.f_149[iParam0] != -1)
	{
		UI::SET_TEXT_SCALE(0.5f, 0.5f);
		UI::SET_TEXT_COLOUR(Local_160.f_107[iParam0], Local_160.f_107[iParam0].f_1, Local_160.f_107[iParam0].f_2, 255);
		UI::SET_TEXT_CENTRE(1);
		UI::SET_TEXT_FONT(4);
		UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
		if (!func_143(iParam0))
		{
			UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(PLAYER::GET_PLAYER_NAME(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Local_160.f_149[iParam0]))));
		}
		else
		{
			StringCopy(&cVar10, "Bot ", 16);
			switch (iParam0)
			{
				case 0:
					StringConCat(&cVar10, "Green", 16);
					break;
				
				case 1:
					StringConCat(&cVar10, "Purple", 16);
					break;
				
				case 2:
					StringConCat(&cVar10, "Yellow", 16);
					break;
				
				case 3:
					StringConCat(&cVar10, "Blue", 16);
					break;
			}
			UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&cVar10);
		}
		UI::END_TEXT_COMMAND_DISPLAY_TEXT(func_123(Var0), 0.845f, 0);
	}
	if (bParam1)
	{
		return;
	}
	if (Local_160.f_149[iParam0] != -1 && Local_819[Local_160.f_149[iParam0]] == 1)
	{
		UI::SET_TEXT_SCALE(0.95f, 0.95f);
		UI::SET_TEXT_COLOUR(0, 0, 0, 255);
		UI::SET_TEXT_CENTRE(1);
		UI::SET_TEXT_FONT(7);
		UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("SCGW_R");
		UI::END_TEXT_COMMAND_DISPLAY_TEXT(func_123((Var0 + 0.001041667f)), (0.23f + 0.003703704f), 0);
		UI::SET_TEXT_SCALE(0.95f, 0.95f);
		UI::SET_TEXT_COLOUR(Local_160.f_107[iParam0], Local_160.f_107[iParam0].f_1, Local_160.f_107[iParam0].f_2, 255);
		UI::SET_TEXT_CENTRE(1);
		UI::SET_TEXT_FONT(7);
		UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("SCGW_R");
		UI::END_TEXT_COMMAND_DISPLAY_TEXT(func_123(Var0), 0.23f, 0);
	}
	if (Local_160.f_154[iParam0] != -2147483647 && (NETWORK::GET_NETWORK_TIME() - Local_160.f_154[iParam0]) <= 1000)
	{
		fVar14 = (SYSTEM::TO_FLOAT((NETWORK::GET_NETWORK_TIME() - Local_160.f_154[iParam0])) / 1000f);
		Var15 = { Local_160.f_107[iParam0] };
		Var15.f_3 = SYSTEM::ROUND(func_141(125f, 0f, fVar14, 1));
		Var2.f_1 = (Var2.f_1 - 0.05f);
		Var0.f_1 = (Var0.f_1 + (0.05f / 2f));
		func_112(Var0, Var2, Var15);
	}
}

float func_141(float fParam0, float fParam1, float fParam2, int iParam3)
{
	switch (iParam3)
	{
		case 1:
		case 6:
			fParam2 = SYSTEM::POW(fParam2, 2f);
			break;
		
		case 2:
		case 7:
			fParam2 = (1f - SYSTEM::POW((1f - fParam2), 2f));
			break;
		
		case 3:
		case 8:
			fParam2 = ((-SYSTEM::COS(func_142((3.141593f * fParam2))) / 2f) + 0.5f);
			break;
		
		case 4:
		case 9:
			fParam2 = (SYSTEM::POW(fParam2, 2f) * (3f - (2f * fParam2)));
			break;
	}
	switch (iParam3)
	{
		case 0:
			fVar0 = (fParam0 + (fParam2 * (fParam1 - fParam0)));
			break;
		
		case 1:
		case 2:
		case 3:
		case 4:
			fVar0 = func_141(fParam0, fParam1, fParam2, 0);
			break;
		
		case 5:
			fVar0 = (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
			break;
		
		case 6:
		case 7:
		case 8:
		case 9:
			fVar0 = func_141(fParam0, fParam1, fParam2, 5);
			break;
	}
	return fVar0;
}

float func_142(float fParam0)
{
	return (fParam0 * 57.29578f);
}

int func_143(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Local_921[iVar0].f_25)
		{
			if (Local_921[iVar0].f_6 == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

struct<2> func_144(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_109(0.2552083f, 0.1435185f);
		
		case 1:
			return func_109(0.4182292f, 0.1435185f);
		
		case 2:
			return func_109(0.5817708f, 0.1435185f);
		
		case 3:
			return func_109(0.7447917f, 0.1435185f);
		
		default:
	}
	return func_109(0.5f, 0.5f);
}

char* func_145(int iParam0)
{
	if (Local_160.f_149[iParam0] == -1)
	{
		switch (iParam0)
		{
			case 0:
				return "Gang_Lobby_Green_Off";
			
			case 1:
				return "Gang_Lobby_Purple_Off";
			
			case 2:
				return "Gang_Lobby_Yellow_Off";
			
			case 3:
				return "Gang_Lobby_Blue_Off";
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return "Gang_Lobby_Green_On";
			
			case 1:
				return "Gang_Lobby_Purple_On";
			
			case 2:
				return "Gang_Lobby_Yellow_On";
			
			case 3:
				return "Gang_Lobby_Blue_On";
			}
		
		default:
	}
	return "INVALID GANG";
}

char* func_146(int iParam0)
{
	if (Local_160.f_149[iParam0] != -1)
	{
		switch (iParam0)
		{
			case 0:
				return "MPArcadeCabinetGridPlayerGreen";
			
			case 1:
				return "MPArcadeCabinetGridPlayerPurple";
			
			case 2:
				return "MPArcadeCabinetGridPlayerYellow";
			
			case 3:
				return "MPArcadeCabinetGridPlayerBlue";
			}
		
		default:
	}
	return "MPArcadeCabinetGridHUD";
}

struct<2> func_147()
{
	return func_109(0.1625f, 0.7777778f);
}

int func_148()
{
	if (NETWORK::_0x66B59CFFD78467AF() == 0)
	{
		return 0;
	}
	if (GAMEPLAY::IS_PS3_VERSION())
	{
		if (NETWORK::_0xAEEF48CDF5B6CE7C(1, -1))
		{
			if (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
			{
				return 1;
			}
		}
	}
	if (GAMEPLAY::IS_ORBIS_VERSION())
	{
		if (NETWORK::_0x72D918C99BCACC54(1))
		{
			if (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
			{
				return 1;
			}
		}
	}
	if (GAMEPLAY::IS_XBOX360_VERSION() || GAMEPLAY::IS_DURANGO_VERSION())
	{
		if (NETWORK::_0x595F028698072DD9(0, -3, 1))
		{
			return 1;
		}
	}
	if (GAMEPLAY::IS_PC_VERSION())
	{
		if (NETWORK::_0xAEEF48CDF5B6CE7C(0, -1))
		{
			if (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_149()
{
	bVar0 = func_65();
	if (bVar0)
	{
		func_191();
	}
	else
	{
		func_173();
	}
	func_170();
	if (Local_613.f_145 >= 6)
	{
		func_169(&(Local_160.f_428));
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_vw_am_tw_in_menus_scene"))
		{
			AUDIO::START_AUDIO_SCENE("dlc_vw_am_tw_in_menus_scene");
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_vw_am_tw_in_gameplay_scene"))
		{
			AUDIO::STOP_AUDIO_SCENE("dlc_vw_am_tw_in_gameplay_scene");
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_vw_am_tw_vehicle_drivethrough_scene"))
		{
			AUDIO::STOP_AUDIO_SCENE("dlc_vw_am_tw_vehicle_drivethrough_scene");
		}
		func_22(func_23(0));
		func_19(9);
		return;
	}
	if (Local_613.f_145 == 2 || Local_613.f_145 == 3)
	{
		func_169(&(Local_160.f_428));
		func_19(5);
		return;
	}
	func_168("Ambience", &(Local_160.f_428), func_109(-1f, -1f), 0);
	if (Global_1661996 != 4)
	{
		return;
	}
	if (bVar0)
	{
		if (Local_613.f_131[(Local_613.f_137 - 1)] != -1)
		{
			if (Local_613.f_131[(Local_613.f_137 - 1)] == Local_160.f_178)
			{
				func_167(7);
				func_163("Win", Local_160.f_178, &(Local_160.f_204[Local_160.f_178].f_6));
			}
			else
			{
				func_167(8);
				func_163("Lose_Game", Local_160.f_178, &(Local_160.f_204[Local_160.f_178].f_6));
			}
			func_162((16 + Local_819[Local_613.f_131[(Local_613.f_137 - 1)]].f_6));
		}
	}
	else if (Local_613.f_130 != -1)
	{
		if (Local_613.f_130 == Local_160.f_178)
		{
			func_158();
			func_167(9);
			func_163("Win", Local_160.f_178, &(Local_160.f_204[Local_160.f_178].f_6));
		}
		else
		{
			func_167(10);
			func_163("Lose_Game", Local_160.f_178, &(Local_160.f_204[Local_160.f_178].f_6));
		}
		func_162((16 + Local_819[Local_613.f_130].f_6));
	}
	if ((!GAMEPLAY::IS_BIT_SET(Local_160.f_141, 2) && Local_613.f_131[(Local_613.f_137 - 1)] != -1) && Local_613.f_131[(Local_613.f_137 - 1)] == Local_160.f_178)
	{
		if (!func_157(247, -1))
		{
			func_154(247, 1, -1, 1);
			func_152(12, "CLO_VWM_D_1_1", "UNLOCK_NAME_SHIRT3", "FeedhitTshirt04", "MPTshirtAwards3", -1, 0, 0, 0, -1, 1);
			func_151(27193, 1, -1, 1);
			func_150("SCGW_CH_4", 7500, 1);
		}
	}
}

void func_150(char* sParam0, int iParam1, int iParam2)
{
	if (UI::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		func_20();
	}
	Local_160.f_418 = (NETWORK::GET_NETWORK_TIME() + iParam1);
	Local_160.f_419 = sParam0;
	Local_160.f_420 = -1;
	Local_160.f_421 = iParam2;
}

int func_151(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -1)
	{
		iParam2 = func_37();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 0)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 192)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 513)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 705)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = STATS::_GET_TUPSTAT_BOOL_HASH((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 3111)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = STATS::_GET_TUPSTAT_BOOL_HASH((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 2919)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 4207)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 4335)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 6029)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		uVar11 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 7385)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 7321)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		uVar13 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 9361)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		uVar14 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15369)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		uVar15 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15562)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		uVar16 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15946)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		uVar17 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 18098)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar17, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		uVar18 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 22066)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar18, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		uVar19 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 24962), 0, 1, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 24962)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar19, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		uVar20 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 26810), 0, 1, iParam2, "_CASINOPSTAT_BOOL");
		iVar1 = ((iParam0 - 26810) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 26810)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar20, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		uVar21 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 28098), 0, 1, iParam2, "_CASINOHSTPSTAT_BOOL");
		iVar1 = ((iParam0 - 28098) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 28098)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar21, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		uVar22 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 28355), 0, 1, iParam2, "_HEIST3TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 28355) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 28355)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar22, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		uVar23 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 30227), 0, 1, iParam2, "_SU20PSTAT_BOOL");
		iVar1 = ((iParam0 - 30227) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 30227)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar23, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		uVar24 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 30355), 0, 1, iParam2, "_SU20TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 30355) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 30355)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar24, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

void func_152(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10)
{
	iVar0 = func_153(&Global_1385029);
	Global_1385029[iVar0] = iParam0;
	StringCopy(&(Global_1385029[iVar0].f_17), sParam3, 64);
	StringCopy(&(Global_1385029[iVar0].f_1), sParam4, 64);
	StringCopy(&(Global_1385029[iVar0].f_33), sParam1, 64);
	StringCopy(&(Global_1385029[iVar0].f_49), sParam2, 64);
	Global_1385029[iVar0].f_97 = iParam5;
	Global_1385029[iVar0].f_104 = iParam9;
	Global_1385029[iVar0].f_105 = iParam10;
	if (iParam6 != 0)
	{
	}
	if (iParam7 != 0)
	{
	}
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		StringCopy(&(Global_1385029[iVar0].f_98), sParam8, 24);
	}
}

int func_153(var uParam0)
{
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if ((*uParam0)[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

void func_154(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_156())
	{
		iVar0 = Global_2583656[iParam0][func_155(iParam2)];
		if (iVar0 != 0)
		{
			STATS::STAT_SET_BOOL(iVar0, iParam1, iParam3);
		}
	}
}

int func_155(var uParam0)
{
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_37();
		if (iVar1 > -1)
		{
			Global_2548146 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2548146 = 1;
		}
	}
	return iVar0;
}

int func_156()
{
	return 1;
	return 0;
}

int func_157(int iParam0, int iParam1)
{
	uVar0 = Global_2583656[iParam0][func_155(iParam1)];
	if (STATS::STAT_GET_BOOL(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_158()
{
	switch (Local_819[Local_160.f_178].f_6)
	{
		case 0:
			iVar0 = func_161(8352, -1, 0) + 1;
			func_160(8352, iVar0, -1, 1, 0);
			if (iVar0 == Global_262145.f_26467)
			{
				func_151(27189, 1, -1, 1);
				func_152(12, "CLO_VWM_D_1_3", "UNLOCK_NAME_SHIRT3", "FeedhitTshirt04", "MPTshirtAwards3", -1, 0, 0, 0, -1, 1);
				func_159("SCGW_CH_0", Global_262145.f_26467, 7500, 1);
			}
			break;
		
		case 1:
			iVar0 = func_161(8353, -1, 0) + 1;
			func_160(8353, iVar0, -1, 1, 0);
			if (iVar0 == Global_262145.f_26467)
			{
				func_151(27190, 1, -1, 1);
				func_152(12, "CLO_VWM_D_1_4", "UNLOCK_NAME_SHIRT3", "FeedhitTshirt04", "MPTshirtAwards3", -1, 0, 0, 0, -1, 1);
				func_159("SCGW_CH_1", Global_262145.f_26467, 7500, 1);
			}
			break;
		
		case 2:
			iVar0 = func_161(8354, -1, 0) + 1;
			func_160(8354, iVar0, -1, 1, 0);
			if (iVar0 == Global_262145.f_26467)
			{
				func_151(27191, 1, -1, 1);
				func_152(12, "CLO_VWM_D_1_5", "UNLOCK_NAME_SHIRT3", "FeedhitTshirt04", "MPTshirtAwards3", -1, 0, 0, 0, -1, 1);
				func_159("SCGW_CH_2", Global_262145.f_26467, 7500, 1);
			}
			break;
		
		case 3:
			iVar0 = func_161(8355, -1, 0) + 1;
			func_160(8355, iVar0, -1, 1, 0);
			if (iVar0 == Global_262145.f_26467)
			{
				func_151(27192, 1, -1, 1);
				func_152(12, "CLO_VWM_D_1_2", "UNLOCK_NAME_SHIRT3", "FeedhitTshirt04", "MPTshirtAwards3", -1, 0, 0, 0, -1, 1);
				func_159("SCGW_CH_3", Global_262145.f_26467, 7500, 1);
			}
			break;
	}
}

void func_159(char* sParam0, var uParam1, int iParam2, int iParam3)
{
	if (UI::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		func_20();
	}
	Local_160.f_418 = (NETWORK::GET_NETWORK_TIME() + iParam2);
	Local_160.f_420 = uParam1;
	Local_160.f_419 = sParam0;
	Local_160.f_421 = iParam3;
}

void func_160(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0][func_155(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_161(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2548434[iParam0][func_155(iParam1)];
		if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

void func_162(int iParam0)
{
	Global_1661996.f_1 = iParam0;
}

void func_163(char* sParam0, int iParam1, var uParam2)
{
	uVar0 = func_165(Local_160.f_204[iParam1]);
	if (*uParam2 == -1)
	{
		*uParam2 = AUDIO::GET_SOUND_ID();
	}
	AUDIO::PLAY_SOUND_FRONTEND(*uParam2, sParam0, func_164(Local_819[iParam1].f_6), 0);
	AUDIO::SET_VARIABLE_ON_SOUND(*uParam2, "Screen_Position", uVar0);
}

char* func_164(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "dlc_vw_am_tw_gang_Hoods_sounds";
		
		case 1:
			return "dlc_vw_am_tw_gang_Punks_sounds";
		
		case 2:
			return "dlc_vw_am_tw_gang_Yokels_sounds";
		
		case 3:
			return "dlc_vw_am_tw_gang_Bikers_sounds";
		
		default:
	}
	return "INVALID GANG";
}

float func_165(float fParam0, var uParam1)
{
	return func_166(((fParam0 - 0.15625f) / 0.658333f), 0f, 1f);
}

float func_166(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_167(int iParam0)
{
	Global_1661996 = iParam0;
}

void func_168(char* sParam0, var uParam1, struct<2> Param2, bool bParam4)
{
	uVar0 = func_165(Param2);
	if (bParam4)
	{
	}
	if (*uParam1 == -1)
	{
		*uParam1 = AUDIO::GET_SOUND_ID();
	}
	if (AUDIO::HAS_SOUND_FINISHED(*uParam1))
	{
		AUDIO::PLAY_SOUND_FRONTEND(*uParam1, sParam0, "dlc_vw_am_tw_global_sounds", 0);
	}
	if (bParam4)
	{
		AUDIO::SET_VARIABLE_ON_SOUND(*uParam1, "Screen_Position", uVar0);
	}
}

void func_169(var uParam0)
{
	if (!AUDIO::HAS_SOUND_FINISHED(*uParam0))
	{
		AUDIO::STOP_SOUND(*uParam0);
	}
	AUDIO::RELEASE_SOUND_ID(*uParam0);
	*uParam0 = -1;
}

void func_170()
{
	if (Local_160.f_418 == -2147483647)
	{
		return;
	}
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(Local_160.f_419))
	{
		return;
	}
	if (NETWORK::GET_NETWORK_TIME() > Local_160.f_418)
	{
		func_20();
		return;
	}
	GAMEPLAY::SET_BIT(&(Local_160.f_417), 0);
	StringCopy(&cVar0, Local_160.f_419, 16);
	if (Local_160.f_420 == -1)
	{
		if (CONTROLS::_IS_INPUT_DISABLED(2) && !Local_160.f_421)
		{
			StringConCat(&cVar0, "_PC", 16);
		}
	}
	else
	{
		if (func_129(&cVar0))
		{
			return;
		}
		func_171(&cVar0, Local_160.f_420);
		return;
	}
	if (func_129(&cVar0))
	{
		return;
	}
	func_127(&cVar0);
}

void func_171(char[4] cParam0, int iParam1)
{
	Local_160.f_442 = GAMEPLAY::GET_HASH_KEY(cParam0);
	func_172(cParam0, iParam1, -1);
}

void func_172(var uParam0, int iParam1, int iParam2)
{
	UI::BEGIN_TEXT_COMMAND_DISPLAY_HELP(uParam0);
	UI::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	UI::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam2);
}

void func_173()
{
	func_125();
	func_187();
	func_181();
	func_179();
	func_174();
	func_105();
	func_104();
}

void func_174()
{
	func_112(func_109(0.5f, (0.069444f + 0.0356482f)), func_109(0.658333f, 0.071296f), Local_160.f_107.f_21);
	func_112(func_109(0.5f, (0.069444f + 0.072685f)), func_109(0.658333f, 0.002778f), Local_160.f_107.f_25);
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		func_176(iVar0, Local_160.f_149[iVar0]);
		iVar0++;
	}
	fVar1 = ((SYSTEM::TO_FLOAT((Local_613.f_138 - 1)) / 2f) * -0.01354133f);
	iVar0 = 0;
	while (iVar0 <= (Local_613.f_138 - 1))
	{
		func_124("MPArcadeCabinetGridHUD", "hud_rounds", ((fVar1 + 0.5f) + (0.01354133f * IntToFloat(iVar0))), (((0.069444f + -0.00162963f) + (0.02407426f / 2f)) + 0.00462963f), 0.01354133f, 0.02407426f, 0f, func_175(iVar0));
		iVar0++;
	}
	iVar2 = 0;
	iVar3 = 0;
	iVar4 = 0;
	if (Local_613.f_145 == 4 && !Local_613.f_162)
	{
		iVar2 = ((Local_613.f_146 + 120000) - NETWORK::GET_NETWORK_TIME());
	}
	iVar3 = (iVar2 / 60000);
	iVar4 = ((iVar2 / 1000) % 60);
	UI::SET_TEXT_SCALE(1f, 1f);
	if (iVar2 < 10000 && Local_613.f_145 == 4)
	{
		if (!GAMEPLAY::IS_BIT_SET(Local_160.f_429, 5))
		{
			func_134("Frontend_Countdown_10s");
			GAMEPLAY::SET_BIT(&(Local_160.f_429), 5);
		}
		iVar5 = SYSTEM::ROUND((SYSTEM::SIN((SYSTEM::TO_FLOAT(NETWORK::GET_NETWORK_TIME()) * (0.5058f / 2f))) * 255f));
		if (iVar5 > 51)
		{
			iVar5 = 255;
		}
		else
		{
			iVar5 = 0;
		}
		UI::SET_TEXT_COLOUR(255, 0, 0, iVar5);
	}
	else if (iVar2 < 30000 && Local_613.f_145 == 4)
	{
		UI::SET_TEXT_COLOUR(255, 0, 0, 255);
	}
	else
	{
		UI::SET_TEXT_COLOUR(255, 255, 255, 255);
	}
	UI::SET_TEXT_DROP_SHADOW();
	UI::SET_TEXT_CENTRE(1);
	UI::SET_TEXT_FONT(7);
	StringCopy(&cVar6, "SCGW_ROUND_T", 16);
	if (iVar4 < 10)
	{
		StringConCat(&cVar6, "_S", 16);
	}
	UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&cVar6);
	UI::ADD_TEXT_COMPONENT_INTEGER(iVar3);
	UI::ADD_TEXT_COMPONENT_INTEGER(iVar4);
	UI::END_TEXT_COMMAND_DISPLAY_TEXT(0.5f, (0.083f + 0.00462963f), 0);
}

struct<4> func_175(int iParam0)
{
	if (Local_613.f_131[iParam0] == -1)
	{
		return Local_160.f_107.f_17;
	}
	return Local_160.f_107[Local_819[Local_613.f_131[iParam0]].f_6];
}

void func_176(int iParam0, int iParam1)
{
	fVar1 = func_178(iParam0);
	if (iParam1 == -1)
	{
		func_124("MPArcadeCabinetGridHUD", "hud_insert_coin", (fVar1 + (0.127083f / 2f)), (0.069444f + 0.04166683f), 0.127083f, 0.059259f, 0f, Local_160.f_107[iParam0]);
	}
	else if (func_69(iParam1))
	{
		func_124("MPArcadeCabinetGridHUD", "hud_wasted", (fVar1 + (0.127083f / 2f)), (0.069444f + 0.04166683f), 0.127083f, 0.059259f, 0f, Local_160.f_107.f_29);
	}
	else
	{
		func_124("MPArcadeCabinetGridHUD", "hud_frame", (fVar1 + (0.127083f / 2f)), (0.069444f + 0.04166683f), 0.127083f, 0.059259f, 0f, Local_160.f_107[iParam0]);
	}
	StringCopy(&Var2, "hud_head_", 64);
	StringConCat(&Var2, Local_160.f_422[iParam0], 64);
	func_124("MPArcadeCabinetGridHUD", &Var2, (fVar1 + (0.033333f / 2f)), (0.069444f + 0.04166683f), 0.033333f, 0.059259f, 0f, Local_160.f_107.f_17);
	if (iParam1 == -1)
	{
		return;
	}
	if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iParam1)))
	{
		uVar18 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iParam1));
		if (NETWORK::NETWORK_IS_PLAYER_TALKING(uVar18))
		{
			func_124("MPArcadeCabinetGridHUD", "hud_mic", ((fVar1 + 0.026563f) + (0.008333f / 2f)), ((0.069444f + 0.04722233f) + (0.014815f / 2f)), 0.008333f, 0.014815f, 0f, Local_160.f_107[iParam0]);
		}
	}
	else if (Local_921[iParam1].f_25)
	{
	}
	if (Local_819[iParam1] == 2)
	{
		iVar19 = (Local_160.f_204[iParam1].f_9 - 1);
		iVar0 = 0;
		while (iVar0 <= iVar19)
		{
			if (iVar0 >= Local_819[iParam1].f_2 && Local_160.f_140 == 7)
			{
				func_124("MPArcadeCabinetGridHUD", "hud_health", (((fVar1 + 0.035417f) + (0.00625f * IntToFloat(iVar0))) + (0.00625f / 2f)), ((0.069444f + 0.01203733f) + (0.059259f / 2f)), 0.00625f, 0.059259f, 0f, Local_160.f_107.f_29);
			}
			else
			{
				func_124("MPArcadeCabinetGridHUD", "hud_health", (((fVar1 + 0.035417f) + (0.00625f * IntToFloat(iVar0))) + (0.00625f / 2f)), ((0.069444f + 0.01203733f) + (0.059259f / 2f)), 0.00625f, 0.059259f, 0f, func_177(Local_160.f_107[iParam0], (SYSTEM::TO_FLOAT(iVar0) / 7f)));
			}
			iVar0++;
		}
		UI::SET_TEXT_SCALE(1f, 1f);
		if (((iLocal_814[iParam0] == 0 && Local_613.f_145 == 4) && iParam0 == Local_819[Local_160.f_178].f_6) && SYSTEM::SIN((SYSTEM::TO_FLOAT(GAMEPLAY::GET_GAME_TIMER()) * 0.5058f)) > 0.5f)
		{
			UI::SET_TEXT_COLOUR(Local_160.f_107.f_29, Local_160.f_107.f_29.f_1, Local_160.f_107.f_29.f_2, Local_160.f_107.f_29.f_3);
		}
		else
		{
			UI::SET_TEXT_COLOUR(Local_160.f_107[iParam0], Local_160.f_107[iParam0].f_1, Local_160.f_107[iParam0].f_2, Local_160.f_107[iParam0].f_3);
		}
		UI::SET_TEXT_DROP_SHADOW();
		UI::SET_TEXT_CENTRE(1);
		UI::SET_TEXT_FONT(7);
		UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("SCGW_SCORE");
		UI::ADD_TEXT_COMPONENT_INTEGER(iLocal_814[iParam0]);
		UI::END_TEXT_COMMAND_DISPLAY_TEXT(func_123((fVar1 + 0.105f)), 0.083f, 0);
	}
}

struct<4> func_177(struct<4> Param0, float fParam4)
{
	Param0 = SYSTEM::ROUND(((IntToFloat((255 - Param0)) * fParam4) + IntToFloat(Param0)));
	Param0.f_1 = SYSTEM::ROUND(((IntToFloat((255 - Param0.f_1)) * fParam4) + IntToFloat(Param0.f_1)));
	Param0.f_2 = SYSTEM::ROUND(((IntToFloat((255 - Param0.f_2)) * fParam4) + IntToFloat(Param0.f_2)));
	return Param0;
}

float func_178(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0.195313f;
		
		case 1:
			return 0.325521f;
		
		case 2:
			return 0.547396f;
		
		case 3:
			return 0.677604f;
		
		default:
	}
	return 0f;
}

void func_179()
{
	if (Local_613.f_130 == -1)
	{
		return;
	}
	func_180(Local_160.f_107[Local_819[Local_613.f_130].f_6], 102);
	bVar0 = false;
	bVar1 = true;
	Var2 = { func_109(0.5f, (0.5f + -0.005f)) };
	iVar4 = 255;
	StringCopy(&cVar5, "text_gang_", 64);
	StringConCat(&cVar5, Local_160.f_422[Local_819[Local_613.f_130].f_6], 64);
	StringConCat(&cVar5, "_", 64);
	if (Local_160.f_415 < 4)
	{
		Var2.f_1 = (Var2.f_1 + (-0.05f / IntToFloat(Local_160.f_415 + 1)));
		bVar1 = false;
		Local_160.f_415 = (Local_160.f_415 + Local_160.f_412);
	}
	else if (Local_160.f_415 < 12)
	{
		iVar4 = SYSTEM::FLOOR(((255f / 8f) * IntToFloat((8 - (Local_160.f_415 - 4)))));
		bVar0 = true;
		bVar1 = false;
		Local_160.f_415 = (Local_160.f_415 + Local_160.f_412);
	}
	else if (Local_160.f_415 < 22)
	{
		if (((Local_160.f_415 + 1 - 4) - 8) < 10)
		{
			StringConCat(&cVar5, "0", 64);
		}
		StringIntConCat(&cVar5, ((Local_160.f_415 + 1 - 4) - 8), 64);
		Local_160.f_415 = (Local_160.f_415 + Local_160.f_414);
	}
	else
	{
		StringIntConCat(&cVar5, 10, 64);
	}
	if (bVar0)
	{
		Var21 = { Local_160.f_107.f_17 };
		Var21.f_3 = iVar4;
		func_124("MPArcadeCabinetGridHUD", "text_bkgd_blur", Var2, Var2.f_1, 0.3125f, 0.1481481f, 0f, Var21);
	}
	func_124("MPArcadeCabinetGridHUD", "text_winner", Var2, Var2.f_1, 0.3125f, 0.1481481f, 0f, Local_160.f_107.f_17);
	if (bVar1)
	{
		StringCopy(&Var25, "MPArcadeCabinetGridPlayer", 64);
		StringConCat(&Var25, Local_160.f_422[Local_819[Local_613.f_130].f_6], 64);
		func_124(&Var25, &cVar5, Var2, (Var2.f_1 + 0.07407407f), 0.3125f, 0.1481481f, 0f, Local_160.f_107[Local_819[Local_613.f_130].f_6]);
	}
}

void func_180(struct<4> Param0, int iParam4)
{
	Param0.f_3 = iParam4;
	func_112(func_109(0.5f, 0.5f), func_109(1f, 1f), Param0);
}

void func_181()
{
	iVar0 = 0;
	while (iVar0 <= 12)
	{
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			iVar3 = func_72(iVar0, iVar1);
			if (iVar0 + 1 < 13)
			{
				iVar4 = func_72(iVar0 + 1, iVar1);
				iVar2 = 0;
				while (iVar2 <= 3)
				{
					if (func_82(&(Local_613.f_85[iVar2][1]), iVar3))
					{
						Var5 = { func_184(func_185(func_186(iVar3), func_186(iVar4)), 2f) };
						func_124("MPArcadeCabinetGrid", "player_trail", Var5, Var5.f_1, 0.05208333f, 0.02962963f, 0f, Local_160.f_107[iVar2]);
					}
					else
					{
						iVar2++;
					}
				}
			}
			if (iVar1 + 1 < 9)
			{
				iVar7 = func_72(iVar0, iVar1 + 1);
				iVar2 = 0;
				while (iVar2 <= 3)
				{
					if (func_82(&(Local_613.f_85[iVar2][0]), iVar3))
					{
						Var8 = { func_184(func_185(func_186(iVar3), func_186(iVar7)), 2f) };
						func_124("MPArcadeCabinetGrid", "player_trail", Var8, Var8.f_1, 0.05208333f, 0.02962963f, 90f, Local_160.f_107[iVar2]);
					}
					else
					{
						iVar2++;
					}
				}
			}
			iVar1++;
		}
		iVar0++;
	}
	Var14.f_3 = 255;
	iVar18 = 0;
	iVar18 = 0;
	while (iVar18 <= 3)
	{
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar18)) && !Local_921[iVar18].f_25)
		{
		}
		else if (Local_819[iVar18].f_6 == -1)
		{
		}
		else if (Local_856[iVar18] == Local_856[iVar18].f_1)
		{
		}
		else
		{
			func_183(Local_856[iVar18], &iVar10, &iVar11);
			func_183(Local_856[iVar18].f_1, &iVar12, &iVar13);
			iVar19 = -1;
			Var14 = { Local_160.f_107[Local_819[iVar18].f_6] };
			fVar20 = (SYSTEM::TO_FLOAT((NETWORK::GET_NETWORK_TIME() - Local_856[iVar18].f_2)) / SYSTEM::TO_FLOAT(func_182(iVar18)));
			if (fVar20 > 1.2f)
			{
			}
			else
			{
				Var14.f_3 = SYSTEM::ROUND((255f * func_141(0f, 1f, fVar20, 6)));
				if (iVar12 != iVar10)
				{
					if (iVar12 > iVar10)
					{
						iVar19 = Local_856[iVar18];
					}
					else
					{
						iVar19 = func_72((iVar10 - 1), iVar11);
					}
					if (func_82(&(Local_613.f_85[Local_819[iVar18].f_6][1]), iVar19))
					{
					}
					else
					{
						Var21 = { func_184(func_185(func_186(Local_856[iVar18].f_1), func_186(Local_856[iVar18])), 2f) };
						func_124("MPArcadeCabinetGrid", "player_trail", Var21, Var21.f_1, 0.05208333f, 0.02962963f, 0f, Var14);
						Jump @804; //curOff = 660
						if (iVar13 != iVar11)
						{
							if (iVar13 > iVar11)
							{
								iVar19 = Local_856[iVar18];
							}
							else
							{
								iVar19 = func_72(iVar10, (iVar11 - 1));
							}
							if (func_82(&(Local_613.f_85[Local_819[iVar18].f_6][0]), iVar19))
							{
							}
							else
							{
								Var23 = { func_184(func_185(func_186(Local_856[iVar18].f_1), func_186(Local_856[iVar18])), 2f) };
								func_124("MPArcadeCabinetGrid", "player_trail", Var23, Var23.f_1, 0.05208333f, 0.02962963f, 90f, Var14);
							}
						}
					}
					iVar18++;
				}

int func_182(int iParam0)
{
	return SYSTEM::ROUND((700f * Local_819[iParam0].f_1));
}

void func_183(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam0) / 13f));
	*iParam1 = (iParam0 - *iParam2 * 13);
}

struct<2> func_184(struct<2> Param0, float fParam2)
{
	Var0 = (Param0 / fParam2);
	Var0.f_1 = (Param0.f_1 / fParam2);
	return Var0;
}

struct<2> func_185(struct<2> Param0, struct<2> Param2)
{
	Var0 = (Param0 + Param2);
	Var0.f_1 = (Param0.f_1 + Param2.f_1);
	return Var0;
}

struct<2> func_186(int iParam0)
{
	func_183(iParam0, &iVar0, &iVar1);
	Var2 = (0.1380207f + (0.0520835f * IntToFloat(iVar0 + 1)));
	Var2.f_1 = (0.06851837f + (0.0925925f * IntToFloat(iVar1 + 1)));
	return Var2;
}

void func_187()
{
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			StringCopy(&Var2, "top_down_tile_", 64);
			iVar18 = Local_613.f_31[iVar0][iVar1] + 1;
			StringIntConCat(&Var2, iVar18, 64);
			Var19 = { func_190(iVar0, iVar1) };
			func_124("MPArcadeCabinetGridTiles", &Var2, Var19, Var19.f_1, 0.104167f, 0.185185f, 0f, Local_160.f_107.f_17);
			func_188(iVar0, iVar1);
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = -1;
	while (iVar0 <= 6)
	{
		Var21 = { func_190(iVar0, -1) };
		func_124("MPArcadeCabinetGridTiles", "top_down_tile_1", Var21, Var21.f_1, 0.104167f, 0.185185f, 0f, Local_160.f_107.f_17);
		Var23 = { func_190(iVar0, 4) };
		func_124("MPArcadeCabinetGridTiles", "top_down_tile_1", Var23, Var23.f_1, 0.104167f, 0.185185f, 0f, Local_160.f_107.f_17);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Var25 = { func_190(-1, iVar0) };
		func_124("MPArcadeCabinetGridTiles", "top_down_tile_1", Var25, Var25.f_1, 0.104167f, 0.185185f, 0f, Local_160.f_107.f_17);
		Var27 = { func_190(6, iVar0) };
		func_124("MPArcadeCabinetGridTiles", "top_down_tile_1", Var27, Var27.f_1, 0.104167f, 0.185185f, 0f, Local_160.f_107.f_17);
		iVar0++;
	}
}

void func_188(int iParam0, int iParam1)
{
	if (Local_160.f_318[iParam0][iParam1] != Local_613[iParam0][iParam1])
	{
		Local_160.f_349[iParam0][iParam1] = Local_160.f_318[iParam0][iParam1];
		Local_160.f_380[iParam0][iParam1] = NETWORK::GET_NETWORK_TIME();
		if (Local_160.f_140 == 7)
		{
			func_189("Steal_Area", func_190(iParam0, iParam1), Local_613[iParam0][iParam1]);
		}
	}
	if (Local_160.f_349[iParam0][iParam1] == -1)
	{
		iVar16 = Local_613[iParam0][iParam1];
		if ((NETWORK::GET_NETWORK_TIME() - Local_160.f_380[iParam0][iParam1]) < 600)
		{
			fVar19 = (SYSTEM::TO_FLOAT((NETWORK::GET_NETWORK_TIME() - Local_160.f_380[iParam0][iParam1])) / 600f);
			if (fVar19 > 1f)
			{
				fVar19 = 1f;
			}
			Var17 = func_141(0f, 0.070833f, fVar19, 2);
			Var17.f_1 = func_141(0f, 0.125926f, fVar19, 2);
		}
		else
		{
			Var17 = { func_109(0.070833f, 0.125926f) };
		}
	}
	else if ((NETWORK::GET_NETWORK_TIME() - Local_160.f_380[iParam0][iParam1]) < 300)
	{
		iVar16 = Local_160.f_349[iParam0][iParam1];
		fVar19 = (SYSTEM::TO_FLOAT((NETWORK::GET_NETWORK_TIME() - Local_160.f_380[iParam0][iParam1])) / 300f);
		if (fVar19 > 1f)
		{
			fVar19 = 1f;
		}
		Var17 = func_141(0.070833f, 0f, fVar19, 1);
		Var17.f_1 = func_141(0.125926f, 0f, fVar19, 1);
	}
	else
	{
		iVar16 = Local_613[iParam0][iParam1];
		Var17 = { func_109(0.070833f, 0.125926f) };
	}
	if (iVar16 > -1)
	{
		StringCopy(&Var0, "gang_logo_", 64);
		StringConCat(&Var0, Local_160.f_422[iVar16], 64);
		Var20 = { func_190(iParam0, iParam1) };
		func_124("MPArcadeCabinetGrid", &Var0, Var20, Var20.f_1, Var17, Var17.f_1, 0f, Local_160.f_107[iVar16]);
	}
	Local_160.f_318[iParam0][iParam1] = Local_613[iParam0][iParam1];
}

void func_189(char* sParam0, struct<2> Param1, int iParam3)
{
	uVar0 = func_165(Param1);
	iVar1 = AUDIO::GET_SOUND_ID();
	AUDIO::PLAY_SOUND_FRONTEND(iVar1, sParam0, func_164(iParam3), 0);
	AUDIO::SET_VARIABLE_ON_SOUND(iVar1, "Screen_Position", uVar0);
	AUDIO::RELEASE_SOUND_ID(iVar1);
}

struct<2> func_190(int iParam0, int iParam1)
{
	Var0 = (0.1380207f + (0.1041665f * IntToFloat(iParam0 + 1)));
	Var0.f_1 = (0.06851837f + (0.1851855f * IntToFloat(iParam1 + 1)));
	return Var0;
}

void func_191()
{
	func_125();
	func_187();
	func_181();
	func_192();
	func_174();
	func_105();
	func_104();
}

void func_192()
{
	if (Local_613.f_137 == 0)
	{
		return;
	}
	if (Local_613.f_131[(Local_613.f_137 - 1)] == -1)
	{
		return;
	}
	func_180(Local_160.f_107[Local_819[Local_613.f_131[(Local_613.f_137 - 1)]].f_6], 102);
	Var0 = { func_109(0.5f, (0.5f + -0.016f)) };
	func_124("MPArcadeCabinetGridHUD", "text_round_winner", 0.5f, (0.5f + -0.016f), 0.3125f, 0.2407407f, 0f, Local_160.f_107.f_17);
	StringCopy(&cVar2, "text_gang_", 64);
	StringConCat(&cVar2, Local_160.f_422[Local_819[Local_613.f_131[(Local_613.f_137 - 1)]].f_6], 64);
	StringConCat(&cVar2, "_", 64);
	if (Local_160.f_415 < 10)
	{
		if (Local_160.f_415 + 1 < 10)
		{
			StringConCat(&cVar2, "0", 64);
		}
		StringIntConCat(&cVar2, Local_160.f_415 + 1, 64);
		Local_160.f_415 = (Local_160.f_415 + Local_160.f_414);
	}
	else
	{
		StringIntConCat(&cVar2, 10, 64);
	}
	StringCopy(&Var18, "MPArcadeCabinetGridPlayer", 64);
	StringConCat(&Var18, Local_160.f_422[Local_819[Local_613.f_131[(Local_613.f_137 - 1)]].f_6], 64);
	func_124(&Var18, &cVar2, Var0, ((Var0.f_1 + 0.07407407f) + ((0.2407407f - 0.1481481f) / 2f)), 0.3125f, 0.1481481f, 0f, Local_160.f_107[Local_819[Local_613.f_131[(Local_613.f_137 - 1)]].f_6]);
}

void func_193()
{
	func_168("Ambience", &(Local_160.f_428), func_109(-1f, -1f), 0);
	func_308();
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (iVar0 != Local_160.f_178 && Local_921[iVar0].f_25)
		{
			func_284(iVar0);
		}
		iVar0++;
	}
	func_280();
	func_272();
	func_265();
	func_260();
	func_240();
	func_236();
	func_230();
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (iVar0 != Local_160.f_178 && Local_921[iVar0].f_25)
		{
			func_223(iVar0);
		}
		iVar0++;
	}
	func_195();
	func_170();
	func_194();
	if (Local_160.f_434 != Local_160.f_433)
	{
		if (Local_160.f_434 == Local_160.f_178)
		{
			func_134("Frontend_Player_Loses_Lead");
		}
		else if (Local_160.f_433 == Local_160.f_178)
		{
			func_134("Frontend_Player_Takes_Lead");
		}
	}
	if (Local_613.f_162 && !func_98(&(Local_160.f_316)))
	{
		func_22(func_23(3));
		func_96(&(Local_160.f_316), 0, 0);
	}
	if (Local_613.f_145 <= 4)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 <= 2)
	{
		if (Local_160.f_281[iVar1].f_5 != -1)
		{
			func_169(&(Local_160.f_281[iVar1].f_5));
		}
		iVar1++;
	}
	func_20();
	Local_139.f_20 = (Local_139.f_20 + iLocal_814[Local_819[Local_160.f_178].f_6]);
	Local_160.f_415 = 0;
	Local_819[Local_160.f_178].f_8 = (Local_819[Local_160.f_178].f_8 + iLocal_814[Local_819[Local_160.f_178].f_6]);
	func_19(8);
	func_22(func_23(2));
}

void func_194()
{
	bVar0 = true;
	if (Local_613.f_145 != 4)
	{
		bVar0 = false;
	}
	if (func_69(Local_160.f_178))
	{
		bVar0 = false;
	}
	if (iLocal_814[Local_819[Local_160.f_178].f_6] > 0)
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		if (Local_160.f_430 == -1)
		{
			Local_160.f_430 = AUDIO::GET_SOUND_ID();
		}
		if (AUDIO::HAS_SOUND_FINISHED(Local_160.f_430))
		{
			AUDIO::PLAY_SOUND_FRONTEND(Local_160.f_430, "Frontend_Player_No_Territory_Loop", "dlc_vw_am_tw_frontend_sounds", 0);
		}
	}
	else if (Local_160.f_430 != -1 && !AUDIO::HAS_SOUND_FINISHED(Local_160.f_430))
	{
		AUDIO::STOP_SOUND(Local_160.f_430);
		AUDIO::RELEASE_SOUND_ID(Local_160.f_430);
		Local_160.f_430 = -1;
	}
}

void func_195()
{
	func_125();
	func_187();
	func_181();
	func_221();
	func_219();
	func_213();
	func_206();
	func_205();
	func_201();
	func_199();
	func_198();
	func_197();
	func_196();
	func_174();
	func_105();
	func_104();
}

void func_196()
{
	if (!Local_613.f_162)
	{
		return;
	}
	if (!func_98(&(Local_160.f_316)))
	{
		return;
	}
	if (func_94(&(Local_160.f_316), 2250, 0))
	{
		return;
	}
	Var0 = { func_109(0.5f, (0.5f + -0.005f)) };
	func_124("MPArcadeCabinetGridHUD", "TEXT_SUDDEN", Var0, Var0.f_1, 0.2666667f, 0.1481481f, 0f, Local_160.f_107.f_17);
	func_124("MPArcadeCabinetGridHUD", "TEXT_DEATH", Var0, (Var0.f_1 + 0.07407407f), 0.2666667f, 0.1148148f, 0f, Local_160.f_107.f_17);
}

void func_197()
{
	if (Local_613.f_146 == -2147483647)
	{
		return;
	}
	iVar0 = (Local_613.f_146 - NETWORK::GET_NETWORK_TIME());
	if (iVar0 < -1500)
	{
		return;
	}
	if (iVar0 <= 0)
	{
		if (!GAMEPLAY::IS_BIT_SET(Local_160.f_429, 4))
		{
			func_134("Frontend_GO");
			GAMEPLAY::SET_BIT(&(Local_160.f_429), 4);
		}
		fVar1 = (SYSTEM::TO_FLOAT(iVar0) / (SYSTEM::TO_FLOAT(-1500) / 3.5f));
		func_180(Local_160.f_107.f_25, SYSTEM::ROUND(func_141(153f, 0f, fVar1, 1)));
		func_124("MPArcadeCabinetGridHUD", "text_fight", 0.5f, (0.5f + -0.005f), 0.2666667f, 0.1481481f, 0f, Local_160.f_107.f_17);
		return;
	}
	func_180(Local_160.f_107.f_25, 153);
	if (iVar0 <= 1000)
	{
		if (!GAMEPLAY::IS_BIT_SET(Local_160.f_429, 3))
		{
			func_134("Frontend_3_2_1");
			GAMEPLAY::SET_BIT(&(Local_160.f_429), 3);
		}
		func_124("MPArcadeCabinetGridHUD", "text_1", 0.5f, (0.5f + -0.005f), 0.06666667f, 0.1481481f, 0f, Local_160.f_107.f_17);
		return;
	}
	if (iVar0 <= 2000)
	{
		if (!GAMEPLAY::IS_BIT_SET(Local_160.f_429, 2))
		{
			func_134("Frontend_3_2_1");
			GAMEPLAY::SET_BIT(&(Local_160.f_429), 2);
		}
		func_124("MPArcadeCabinetGridHUD", "text_2", 0.5f, (0.5f + -0.005f), 0.06666667f, 0.1481481f, 0f, Local_160.f_107.f_17);
		return;
	}
	if (iVar0 <= 3000)
	{
		if (!GAMEPLAY::IS_BIT_SET(Local_160.f_429, 1))
		{
			func_134("Frontend_3_2_1");
			GAMEPLAY::SET_BIT(&(Local_160.f_429), 1);
		}
		func_124("MPArcadeCabinetGridHUD", "text_3", 0.5f, (0.5f + -0.005f), 0.06666667f, 0.1481481f, 0f, Local_160.f_107.f_17);
		return;
	}
	if (iVar0 <= 4500)
	{
		if (!GAMEPLAY::IS_BIT_SET(Local_160.f_429, 0))
		{
			func_134("Frontend_3_2_1");
			GAMEPLAY::SET_BIT(&(Local_160.f_429), 0);
		}
		StringCopy(&Var2, "text_round_", 64);
		StringIntConCat(&Var2, Local_613.f_137 + 1, 64);
		func_124("MPArcadeCabinetGridHUD", &Var2, 0.5f, (0.5f + -0.005f), 0.3125f, 0.1481481f, 0f, Local_160.f_107.f_17);
		return;
	}
}

void func_198()
{
	bVar0 = false;
	if (Local_819[Local_160.f_178].f_3 + 1000 > NETWORK::GET_NETWORK_TIME())
	{
		bVar0 = true;
	}
	if (func_69(Local_160.f_178))
	{
		iVar1 = (NETWORK::GET_NETWORK_TIME() - Local_819[Local_160.f_178].f_3);
		if (iVar1 < 2500 || Local_819[Local_160.f_178] == 4)
		{
			bVar0 = true;
		}
	}
	if (!bVar0)
	{
		return;
	}
	fVar3 = (0.237037f / 2f);
	iVar2 = 0;
	while (iVar2 <= 3)
	{
		func_124("MPArcadeCabinetGrid", "damage_v", 0.176f, fVar3, 0.03333333f, 0.237037f, 180f, Local_160.f_107.f_29);
		func_124("MPArcadeCabinetGrid", "damage_v", (1f - 0.173f), fVar3, 0.03333333f, 0.237037f, 0f, Local_160.f_107.f_29);
		fVar3 = (fVar3 + 0.237037f);
		iVar2++;
	}
	fVar4 = (0.1333333f / 2f);
	iVar2 = 0;
	while (iVar2 <= 6)
	{
		func_124("MPArcadeCabinetGrid", "damage_h", fVar4, 0.154f, 0.1333333f, 0.05925926f, 0f, Local_160.f_107.f_29);
		func_124("MPArcadeCabinetGrid", "damage_h", fVar4, (1f - 0.09f), 0.1333333f, 0.05925926f, 180f, Local_160.f_107.f_29);
		fVar4 = (fVar4 + 0.1333333f);
		iVar2++;
	}
}

void func_199()
{
	if (func_69(Local_160.f_178))
	{
		if (GAMEPLAY::IS_BIT_SET(Local_160.f_429, 8))
		{
			GAMEPLAY::CLEAR_BIT(&(Local_160.f_429), 8);
		}
		iVar0 = (NETWORK::GET_NETWORK_TIME() - Local_819[Local_160.f_178].f_3);
		if (iVar0 < 2500 || Local_819[Local_160.f_178] == 4)
		{
			func_200();
			if (!GAMEPLAY::IS_BIT_SET(Local_160.f_429, 7))
			{
				GAMEPLAY::SET_BIT(&(Local_160.f_429), 7);
				func_134("Frontend_Wasted");
			}
			return;
		}
		if (iVar0 < 3500)
		{
			if (!GAMEPLAY::IS_BIT_SET(Local_160.f_429, 6))
			{
				GAMEPLAY::SET_BIT(&(Local_160.f_429), 6);
				func_134("Frontend_Text_Appear_Generic");
			}
			func_180(Local_160.f_107.f_25, 153);
			func_124("MPArcadeCabinetGridHUD", "text_ready", 0.5f, (0.5f + -0.005f), 0.3125f, 0.1481481f, 0f, Local_160.f_107.f_17);
		}
	}
	else
	{
		if (GAMEPLAY::IS_BIT_SET(Local_160.f_429, 7))
		{
			GAMEPLAY::CLEAR_BIT(&(Local_160.f_429), 7);
		}
		if (GAMEPLAY::IS_BIT_SET(Local_160.f_429, 6))
		{
			GAMEPLAY::CLEAR_BIT(&(Local_160.f_429), 6);
		}
	}
	if (Local_819[Local_160.f_178].f_4 == -2147483647)
	{
		return;
	}
	iVar1 = (NETWORK::GET_NETWORK_TIME() - Local_819[Local_160.f_178].f_4);
	if (iVar1 < 1000)
	{
		if (!GAMEPLAY::IS_BIT_SET(Local_160.f_429, 8))
		{
			GAMEPLAY::SET_BIT(&(Local_160.f_429), 8);
			func_134("Frontend_GO");
		}
		func_124("MPArcadeCabinetGridHUD", "text_fight", 0.5f, (0.5f + -0.005f), 0.2666667f, 0.1481481f, 0f, Local_160.f_107.f_17);
	}
}

void func_200()
{
	func_180(Local_160.f_107.f_29, 102);
	func_124("MPArcadeCabinetGridHUD", "text_wasted", 0.5f, (0.5f + -0.005f), 0.3125f, 0.1481481f, 0f, Local_160.f_107.f_29);
}

void func_201()
{
	Var0 = { func_204(Local_160.f_438) };
	if (func_203(Local_160.f_439, Var0))
	{
		return;
	}
	func_124("MPArcadeCabinetGrid", func_202(Local_160.f_438), Local_160.f_439, Local_160.f_439.f_1, Var0, Var0.f_1, 0f, Local_160.f_107.f_17);
}

char* func_202(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "BIRDS";
		
		case 1:
			return "AIRPLANE";
		
		case 2:
			return "HELICOPTER";
		
		default:
	}
	return "";
}

int func_203(struct<2> Param0, struct<2> Param2)
{
	fVar0 = (Param0 - (Param2 / 2f));
	if (fVar0 > (1f - 0.15625f))
	{
		return 1;
	}
	fVar1 = (Param0 + (Param2 / 2f));
	if (fVar1 < 0.15625f)
	{
		return 1;
	}
	fVar2 = (Param0.f_1 - (Param2.f_1 / 2f));
	if (fVar2 > (1f - 0.06944444f))
	{
		return 1;
	}
	fVar3 = (Param0.f_1 + (Param2.f_1 / 2f));
	if (fVar3 < (0f + 0.06944444f))
	{
		return 1;
	}
	return 0;
}

struct<2> func_204(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_109(0.03333333f, 0.05925926f);
		
		case 1:
			return func_109(0.1145833f, 0.2037037f);
		
		case 2:
			return func_109(0.1145833f, 0.2037037f);
		
		default:
	}
	return func_109(0f, 0f);
}

void func_205()
{
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (Local_160.f_159[iVar0] <= -1)
		{
		}
		else
		{
			StringCopy(&Var1, "fire_ball", 64);
			StringIntConCat(&Var1, Local_160.f_159[iVar0] + 1, 64);
			Var17 = { func_109((0.066667f / 2f), (0.118519f / 2f)) };
			func_124("MPArcadeCabinetGrid", &Var1, Local_160.f_159[iVar0].f_1, Local_160.f_159[iVar0].f_1.f_1, Var17, Var17.f_1, 0f, Local_160.f_107.f_17);
			Local_160.f_159[iVar0] = (Local_160.f_159[iVar0] + Local_160.f_412);
			if (Local_160.f_159[iVar0] >= 9)
			{
				Local_160.f_159[iVar0] = -1;
			}
		}
		iVar0++;
	}
}

void func_206()
{
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (Local_613.f_148[iVar0].f_3 == -1)
		{
		}
		else if (NETWORK::GET_NETWORK_TIME() < Local_613.f_148[iVar0])
		{
			func_209(iVar0);
		}
		else
		{
			iVar1 = func_208(Local_613.f_148[iVar0].f_2);
			if (NETWORK::GET_NETWORK_TIME() > (Local_613.f_148[iVar0] + iVar1))
			{
			}
			else
			{
				if (NETWORK::GET_NETWORK_TIME() < (Local_613.f_148[iVar0] + (iVar1 / 2)) && func_203(func_109(Local_160.f_281[iVar0], Local_160.f_281[iVar0].f_1), func_109(Local_160.f_22[Local_613.f_148[iVar0].f_3].f_2, Local_160.f_22[Local_613.f_148[iVar0].f_3].f_2.f_1)))
				{
					func_209(iVar0);
				}
				fVar2 = func_207(Local_613.f_148[iVar0].f_2);
				Local_160.f_281[iVar0].f_4 = (Local_160.f_281[iVar0].f_4 + Local_160.f_414);
				if (Local_160.f_281[iVar0].f_4 >= Local_160.f_22[Local_613.f_148[iVar0].f_3].f_1)
				{
					Local_160.f_281[iVar0].f_4 = 0;
				}
				StringCopy(&Var3, "", 64);
				StringConCat(&Var3, Local_160.f_22[Local_613.f_148[iVar0].f_3], 64);
				if (Local_613.f_148[iVar0].f_3 < 5)
				{
					StringIntConCat(&Var3, Local_160.f_281[iVar0].f_4 + 1, 64);
				}
				func_124("MPArcadeCabinetGrid", &Var3, Local_160.f_281[iVar0], Local_160.f_281[iVar0].f_1, Local_160.f_22[Local_613.f_148[iVar0].f_3].f_2, Local_160.f_22[Local_613.f_148[iVar0].f_3].f_2.f_1, fVar2, Local_160.f_107.f_17);
			}
		}
		iVar0++;
	}
}

float func_207(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 90f;
		
		case 1:
			return 270f;
		
		case 2:
			return 0f;
		
		case 3:
			return 180f;
		
		default:
	}
	return 0f;
}

var func_208(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
			iVar0 = 11;
			break;
		
		case 2:
		case 3:
			iVar0 = 15;
			break;
	}
	return iVar0 * 650;
}

void func_209(int iParam0)
{
	func_183(Local_613.f_148[iParam0].f_1, &iVar0, &iVar1);
	if (Local_613.f_148[iParam0].f_2 == 1)
	{
		Var2 = { func_186(func_72(iVar0, 0)) };
		func_124("MPArcadeCabinetGridHUD", "vehicle_alert", Var2, (Var2.f_1 + -0.011f), 0.02083333f, 0.01851852f, 180f, func_211(Local_613.f_148[iParam0].f_3));
	}
	else if (Local_613.f_148[iParam0].f_2 == 0)
	{
		Var2 = { func_186(func_72(iVar0, 8)) };
		func_124("MPArcadeCabinetGridHUD", "vehicle_alert", Var2, (Var2.f_1 + 0.023f), 0.02083333f, 0.01851852f, 0f, func_211(Local_613.f_148[iParam0].f_3));
	}
	else if (Local_613.f_148[iParam0].f_2 == 3)
	{
		Var2 = { func_186(func_72(0, iVar1)) };
		func_124("MPArcadeCabinetGridHUD", "vehicle_alert", (Var2 + func_210(iVar1, 1)), Var2.f_1, 0.02083333f, 0.01851852f, 90f, func_211(Local_613.f_148[iParam0].f_3));
	}
	else if (Local_613.f_148[iParam0].f_2 == 2)
	{
		Var2 = { func_186(func_72(12, iVar1)) };
		func_124("MPArcadeCabinetGridHUD", "vehicle_alert", (Var2 + func_210(iVar1, 0)), Var2.f_1, 0.02083333f, 0.01851852f, -90f, func_211(Local_613.f_148[iParam0].f_3));
	}
}

float func_210(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				return -0.011f;
			}
			return 0.00975f;
		
		case 2:
			if (bParam1)
			{
				return -0.02275f;
			}
			return 0.02275f;
		
		case 4:
			if (bParam1)
			{
				return -0.02375f;
			}
			return 0.02275f;
		
		case 6:
			if (bParam1)
			{
				return -0.01975f;
			}
			return 0.018f;
		
		case 8:
			if (bParam1)
			{
				return -0.006f;
			}
			return 0.004f;
		
		default:
	}
	return 0f;
}

struct<4> func_211(int iParam0)
{
	fVar0 = SYSTEM::SIN((IntToFloat(GAMEPLAY::GET_GAME_TIMER()) * 0.5f));
	Var1 = { Local_160.f_107.f_17 };
	switch (iParam0)
	{
		case 0:
		case 4:
			break;
		
		case 1:
		case 2:
		case 3:
			if (fVar0 > 0f)
			{
				func_212(&Var1, 255, 0, 0, 255);
			}
			else
			{
				func_212(&Var1, 0, 0, 255, 255);
			}
			break;
		
		case 5:
			Var1 = { Local_160.f_107[0] };
			break;
		
		case 6:
			Var1 = { Local_160.f_107[1] };
			break;
		
		case 7:
			Var1 = { Local_160.f_107[2] };
			break;
		
		case 8:
			Var1 = { Local_160.f_107[3] };
			break;
	}
	Var1.f_3 = (55 + SYSTEM::ROUND((GAMEPLAY::ABSF(fVar0) * 200f)));
	return Var1;
}

void func_212(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	*uParam0 = iParam1;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = iParam3;
	uParam0->f_3 = iParam4;
}

void func_213()
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (iVar0 == Local_160.f_178)
		{
		}
		else if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)) && !Local_921[iVar0].f_25)
		{
		}
		else if (Local_819[iVar0].f_6 == -1)
		{
		}
		else
		{
			func_214(iVar0);
		}
		iVar0++;
	}
	func_214(Local_160.f_178);
}

void func_214(int iParam0)
{
	StringCopy(&Var0, "MPArcadeCabinetGridPlayer", 64);
	StringConCat(&Var0, Local_160.f_422[Local_819[iParam0].f_6], 64);
	if (func_69(iParam0))
	{
		StringCopy(&cVar16, "dead_", 64);
		StringConCat(&cVar16, Local_160.f_422[Local_819[iParam0].f_6], 64);
		func_124(&Var0, &cVar16, Local_160.f_204[iParam0], Local_160.f_204[iParam0].f_1, 0.033333f, 0.059259f, 0f, Local_160.f_107.f_17);
		return;
	}
	Var32 = { Local_160.f_107.f_17 };
	if (Local_856[iParam0].f_2 + func_182(iParam0)) > NETWORK::GET_NETWORK_TIME()
	{
		if (Local_160.f_204[iParam0].f_4 == 0)
		{
			func_163("Footsteps", iParam0, &(Local_160.f_204[iParam0].f_7));
		}
		Local_160.f_204[iParam0].f_4 = (Local_160.f_204[iParam0].f_4 + Local_160.f_412);
		if (Local_160.f_204[iParam0].f_4 >= 12)
		{
			Local_160.f_204[iParam0].f_4 = 0;
		}
	}
	if (Local_819[iParam0].f_3 + 1000 > NETWORK::GET_NETWORK_TIME())
	{
		fVar36 = GAMEPLAY::ABSF(SYSTEM::SIN((SYSTEM::TO_FLOAT((Local_819[iParam0].f_3 + 1000 - NETWORK::GET_NETWORK_TIME())) * 0.35f)));
		Var32.f_3 = (255 - SYSTEM::ROUND(fVar36) * 150);
	}
	fVar37 = func_218(Local_856[iParam0].f_4);
	StringCopy(&cVar38, "walk_", 64);
	StringConCat(&cVar38, Local_160.f_422[Local_819[iParam0].f_6], 64);
	StringConCat(&cVar38, "_", 64);
	StringConCat(&cVar38, Local_160.f_59[Local_819[iParam0].f_5], 64);
	StringIntConCat(&cVar38, Local_160.f_204[iParam0].f_4 + 1, 64);
	if (Local_819[iParam0].f_1 < 1f && Local_160.f_204[iParam0].f_4 > 0)
	{
		iVar54 = Var32.f_3;
		Var32.f_3 = (iVar54 / 2);
		Var55 = { Local_160.f_204[iParam0] };
		if (func_74())
		{
			Var55 = { func_185(Var55, func_109((0.002604167f * SYSTEM::SIN(SYSTEM::TO_FLOAT(GAMEPLAY::GET_GAME_TIMER()))), (0.00462963f * SYSTEM::COS(SYSTEM::TO_FLOAT(GAMEPLAY::GET_GAME_TIMER()))))) };
		}
		else
		{
			Var55 = { func_185(Var55, func_109((0.002604167f * SYSTEM::COS(SYSTEM::TO_FLOAT(GAMEPLAY::GET_GAME_TIMER()))), (0.00462963f * SYSTEM::SIN(SYSTEM::TO_FLOAT(GAMEPLAY::GET_GAME_TIMER()))))) };
		}
		func_124(&Var0, &cVar38, Var55, Var55.f_1, 0.033333f, 0.059259f, fVar37, Var32);
		Var32.f_3 = iVar54;
	}
	func_124(&Var0, &cVar38, Local_160.f_204[iParam0], Local_160.f_204[iParam0].f_1, 0.033333f, 0.059259f, fVar37, Var32);
	if (Local_160.f_204[iParam0].f_5 > -1)
	{
		StringCopy(&Var57, "muzzle_flare_", 64);
		StringIntConCat(&Var57, Local_160.f_204[iParam0].f_5 + 1, 64);
		Var73 = { func_215(iParam0, fVar37) };
		func_124("MPArcadeCabinetGrid", &Var57, Var73, Var73.f_1, 0.01666667f, 0.02962963f, fVar37, Var32);
		Local_160.f_204[iParam0].f_5 = (Local_160.f_204[iParam0].f_5 + Local_160.f_412);
		if (Local_160.f_204[iParam0].f_5 >= 3)
		{
			Local_160.f_204[iParam0].f_5 = -1;
		}
	}
}

struct<2> func_215(int iParam0, float fParam1)
{
	Var0 = { func_217(Local_160.f_204[iParam0]) };
	switch (Local_819[iParam0].f_5)
	{
		case 1:
		case 2:
			Var0 = { func_185(Var0, func_109(7f, -36f)) };
			break;
		
		case 3:
		case 4:
		case 5:
			Var0 = { func_185(Var0, func_109(5f, -40f)) };
			break;
	}
	Var0 = { func_216(func_217(Local_160.f_204[iParam0]), Var0, fParam1) };
	Var0 = { func_108(Var0) };
	return Var0;
}

struct<2> func_216(struct<2> Param0, struct<2> Param2, float fParam4)
{
	fVar2 = SYSTEM::SIN(fParam4);
	fVar3 = SYSTEM::COS(fParam4);
	Var0 = (Param2 - Param0);
	Var0.f_1 = (Param2.f_1 - Param0.f_1);
	fVar4 = ((Var0 * fVar3) - (Var0.f_1 * fVar2));
	fVar5 = ((Var0 * fVar2) + (Var0.f_1 * fVar3));
	Var0 = (fVar4 + Param0);
	Var0.f_1 = (fVar5 + Param0.f_1);
	return Var0;
}

struct<2> func_217(struct<2> Param0)
{
	return func_109((Param0 * 1920f), (Param0.f_1 * 1080f));
}

float func_218(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0f;
		
		case 1:
			return 180f;
		
		case 2:
			return 270f;
		
		case 3:
			return 90f;
		
		default:
	}
	return 0f;
}

void func_219()
{
	fVar0 = GAMEPLAY::ABSF(SYSTEM::SIN((SYSTEM::TO_FLOAT(NETWORK::GET_NETWORK_TIME()) * 0.2f)));
	bVar5 = false;
	iVar3 = 0;
	while (iVar3 <= 6)
	{
		if (Local_613.f_62[iVar3].f_1 == -1)
		{
		}
		else if (GAMEPLAY::IS_BIT_SET(Local_160.f_309, iVar3))
		{
		}
		else
		{
			Var6 = { func_186(Local_613.f_62[iVar3]) };
			GAMEPLAY::SET_BIT(&uVar4, iVar3);
			if (!GAMEPLAY::IS_BIT_SET(Local_160.f_310, iVar3) && !bVar5)
			{
				func_220("Pickup_Spawn", Var6, 1);
				bVar5 = true;
			}
			StringCopy(&Var8, Local_160.f_90[Local_613.f_62[iVar3].f_1], 64);
			if (Local_160.f_90[Local_613.f_62[iVar3].f_1].f_1 > 0)
			{
				StringIntConCat(&Var8, (Local_160.f_311 % Local_160.f_90[Local_613.f_62[iVar3].f_1].f_1) + 1, 64);
			}
			Var1 = { func_109(0.033333f, 0.059259f) };
			if (!((Local_613.f_62[iVar3].f_1 == 0 || Local_613.f_62[iVar3].f_1 == 2) || Local_613.f_62[iVar3].f_1 == 1))
			{
				Var1 = (Var1 - ((Var1 * 0.15f) * fVar0));
				Var1.f_1 = (Var1.f_1 - ((Var1.f_1 * 0.15f) * fVar0));
			}
			Var24 = { Local_160.f_107.f_17 };
			if ((NETWORK::GET_NETWORK_TIME() - Local_613.f_62[iVar3].f_2) < 1250)
			{
				Var24.f_3 = SYSTEM::ROUND((fVar0 * 255f));
			}
			else if ((NETWORK::GET_NETWORK_TIME() - Local_613.f_62[iVar3].f_2) > 16500)
			{
				Var24.f_3 = SYSTEM::ROUND((func_141(1f, 0.1f, (SYSTEM::TO_FLOAT(((NETWORK::GET_NETWORK_TIME() - Local_613.f_62[iVar3].f_2) - 16500)) / 1000f), 4) * 255f));
			}
			func_124("MPArcadeCabinetGrid", &Var8, Var6, Var6.f_1, Var1, Var1.f_1, 0f, Var24);
		}
		iVar3++;
	}
	Local_160.f_310 = uVar4;
}

void func_220(char* sParam0, struct<2> Param1, bool bParam3)
{
	uVar0 = func_165(Param1);
	if (bParam3)
	{
	}
	iVar1 = AUDIO::GET_SOUND_ID();
	AUDIO::PLAY_SOUND_FRONTEND(iVar1, sParam0, "dlc_vw_am_tw_global_sounds", 0);
	if (bParam3)
	{
		AUDIO::SET_VARIABLE_ON_SOUND(iVar1, "Screen_Position", uVar0);
	}
	AUDIO::RELEASE_SOUND_ID(iVar1);
}

void func_221()
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)) && !Local_921[iVar0].f_25)
		{
		}
		else if (Local_819[iVar0].f_6 == -1)
		{
		}
		else
		{
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 <= 1)
			{
				if (Local_856[iVar0].f_5[iVar1] == -2147483647)
				{
				}
				else if (GAMEPLAY::IS_BIT_SET(Local_160.f_303, func_222(iVar0, iVar1)))
				{
				}
				else
				{
					fVar2 = func_218(Local_856[iVar0].f_5[iVar1].f_3);
					if (Local_856[iVar0].f_5[iVar1].f_4 == 4)
					{
						StringCopy(&Var3, "rocket_trail_", 64);
						StringIntConCat(&Var3, Local_160.f_416 + 1, 64);
						func_124("MPArcadeCabinetGrid", &Var3, Local_160.f_204[iVar0].f_10[iVar1], Local_160.f_204[iVar0].f_10[iVar1].f_1, 0.004166667f, 0.03333333f, fVar2, Local_160.f_107.f_17);
					}
					else
					{
						func_124("MPArcadeCabinetGrid", "bullet", Local_160.f_204[iVar0].f_10[iVar1], Local_160.f_204[iVar0].f_10[iVar1].f_1, 0.004166667f, 0.01111111f, fVar2, Local_160.f_107.f_17);
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

int func_222(int iParam0, int iParam1)
{
	return (iParam1 + (2 * iParam0));
}

void func_223(int iParam0)
{
	if (iLocal_814[Local_921[iParam0].f_6] == 0 && (NETWORK::GET_NETWORK_TIME() - Local_613.f_146) > 3000)
	{
		if ((GAMEPLAY::IS_BIT_SET(Local_160.f_417, 1) && !UI::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !GAMEPLAY::IS_BIT_SET(Local_160.f_417, 3))
		{
		}
	}
	if (Local_921[iParam0] != 3)
	{
		return;
	}
	if (Local_613.f_162)
	{
		func_229(iParam0, 4);
	}
	if (func_228(iParam0))
	{
		if (NETWORK::GET_NETWORK_TIME() >= Local_921[iParam0].f_3 + 2500 && !GAMEPLAY::IS_BIT_SET(Local_160.f_142[iParam0], 6))
		{
			GAMEPLAY::SET_BIT(&(Local_160.f_142[iParam0]), 6);
		}
		if (NETWORK::GET_NETWORK_TIME() >= Local_921[iParam0].f_3 + 3500)
		{
			func_225(iParam0);
		}
	}
	else if (NETWORK::GET_NETWORK_TIME() > Local_921[iParam0].f_3 + 1000 && !GAMEPLAY::IS_BIT_SET(Local_160.f_142[iParam0], 6))
	{
		func_229(iParam0, 4);
		func_224("Death_Dead");
	}
}

void func_224(char* sParam0)
{
	if (Local_160.f_178.f_4 == -1)
	{
		Local_160.f_178.f_4 = AUDIO::GET_SOUND_ID();
	}
	AUDIO::PLAY_SOUND_FRONTEND(Local_160.f_178.f_4, sParam0, "dlc_vw_am_tw_global_sounds", 0);
}

void func_225(int iParam0)
{
	func_226(iParam0);
	func_229(iParam0, 2);
	func_224("Death_Resurrect");
	Local_921[iParam0].f_4 = NETWORK::GET_NETWORK_TIME();
	Local_921[iParam0].f_2 = 8;
	Local_921[iParam0].f_5 = 0;
	Local_921[iParam0].f_1 = 1f;
	Local_160.f_178.f_2 = 0;
	if (GAMEPLAY::IS_BIT_SET(Local_160.f_142[iParam0], 6))
	{
		GAMEPLAY::CLEAR_BIT(&(Local_160.f_142[iParam0]), 6);
	}
}

void func_226(int iParam0)
{
	Local_921[iParam0].f_9 = func_227(iParam0);
	Local_921[iParam0].f_9.f_1 = Local_921[iParam0].f_9;
}

int func_227(int iParam0)
{
	iVar0 = -1;
	iVar1 = -1;
	iVar2 = 0;
	while (iVar2 <= 3)
	{
		if (iVar2 == iParam0)
		{
		}
		else if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar2)) && !Local_921[iVar2].f_25)
		{
		}
		else if (Local_819[iVar2].f_6 == -1)
		{
		}
		else if (func_69(iVar2))
		{
		}
		else
		{
			func_183(Local_856[iVar2], &iVar8, &iVar9);
			GAMEPLAY::SET_BIT(&uVar4, iVar8);
			GAMEPLAY::SET_BIT(&uVar5, iVar9);
		}
		iVar2++;
	}
	iVar2 = 0;
	while (iVar2 <= 2)
	{
		if (Local_613.f_148[iVar2].f_3 == -1)
		{
		}
		else
		{
			func_183(Local_613.f_148[iVar2].f_1, &iVar8, &iVar9);
			if (Local_613.f_148[iVar2].f_2 == 0 || Local_613.f_148[iVar2].f_2 == 1)
			{
				GAMEPLAY::SET_BIT(&uVar6, iVar8);
			}
			else if (Local_613.f_148[iVar2].f_2 == 2 || Local_613.f_148[iVar2].f_2 == 3)
			{
				GAMEPLAY::SET_BIT(&uVar7, iVar9);
			}
		}
		iVar2++;
	}
	iVar10 = -1;
	iVar11 = 0;
	iVar2 = 0;
	while (iVar2 <= 12)
	{
		iVar3 = 0;
		while (iVar3 <= 8)
		{
			iVar11 = 100;
			iVar10 = func_72(iVar2, iVar3);
			if (!(func_82(&(Local_613.f_85[Local_921[iParam0].f_6][0]), iVar10) || func_82(&(Local_613.f_85[Local_921[iParam0].f_6][1]), iVar10)))
			{
			}
			else
			{
				if (GAMEPLAY::IS_BIT_SET(uVar6, iVar2))
				{
					iVar11 = (iVar11 - 25);
				}
				if (GAMEPLAY::IS_BIT_SET(uVar7, iVar3))
				{
					iVar11 = (iVar11 - 25);
				}
				if (GAMEPLAY::IS_BIT_SET(uVar4, iVar2))
				{
					iVar11 = (iVar11 - 25);
				}
				if (GAMEPLAY::IS_BIT_SET(uVar5, iVar3))
				{
					iVar11 = (iVar11 - 25);
				}
				if (iVar11 == 100)
				{
					return iVar10;
				}
				if (iVar11 > iVar1)
				{
					iVar1 = iVar11;
					iVar0 = iVar10;
				}
			}
			iVar3++;
		}
		iVar2++;
	}
	return iVar0;
}

int func_228(int iParam0)
{
	if (GAMEPLAY::IS_BIT_SET(Local_160.f_142[iParam0], 6))
	{
		return 1;
	}
	if (Local_921[iParam0].f_6 == -1)
	{
		return 0;
	}
	if (iLocal_814[Local_921[iParam0].f_6] == 0)
	{
		return 0;
	}
	return 1;
}

void func_229(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	Local_921[iParam0] = iParam1;
}

void func_230()
{
	if (iLocal_814[Local_819[Local_160.f_178].f_6] == 0 && (NETWORK::GET_NETWORK_TIME() - Local_613.f_146) > 3000)
	{
		if ((GAMEPLAY::IS_BIT_SET(Local_160.f_417, 1) && !UI::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !GAMEPLAY::IS_BIT_SET(Local_160.f_417, 3))
		{
			func_150("SCGW_H_RSPWN", 7500, 0);
			GAMEPLAY::SET_BIT(&(Local_160.f_417), 3);
		}
	}
	if (Local_819[Local_160.f_178] != 3)
	{
		return;
	}
	func_20();
	if (Local_613.f_162)
	{
		func_235(4);
		func_167(6);
	}
	if (func_234(Local_160.f_178))
	{
		if (NETWORK::GET_NETWORK_TIME() >= Local_819[Local_160.f_178].f_3 + 2500 && !GAMEPLAY::IS_BIT_SET(Local_160.f_141, 6))
		{
			GAMEPLAY::SET_BIT(&(Local_160.f_141), 6);
		}
		if (NETWORK::GET_NETWORK_TIME() >= Local_819[Local_160.f_178].f_3 + 3500)
		{
			func_231();
		}
	}
	else if (NETWORK::GET_NETWORK_TIME() > Local_819[Local_160.f_178].f_3 + 1000 && !GAMEPLAY::IS_BIT_SET(Local_160.f_141, 6))
	{
		func_235(4);
		func_224("Death_Dead");
		func_167(6);
	}
}

void func_231()
{
	func_232();
	func_235(2);
	func_224("Death_Resurrect");
	Local_819[Local_160.f_178].f_4 = NETWORK::GET_NETWORK_TIME();
	Local_819[Local_160.f_178].f_2 = 8;
	Local_819[Local_160.f_178].f_5 = 0;
	Local_819[Local_160.f_178].f_1 = 1f;
	Local_160.f_178.f_2 = 0;
	func_167(4);
	if (GAMEPLAY::IS_BIT_SET(Local_160.f_141, 6))
	{
		GAMEPLAY::CLEAR_BIT(&(Local_160.f_141), 6);
	}
}

void func_232()
{
	Local_856[Local_160.f_178] = func_233();
	Local_856[Local_160.f_178].f_1 = Local_856[Local_160.f_178];
}

int func_233()
{
	iVar0 = -1;
	iVar1 = -1;
	iVar2 = 0;
	while (iVar2 <= 3)
	{
		if (iVar2 == Local_160.f_178)
		{
		}
		else if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar2)) && !Local_921[iVar2].f_25)
		{
		}
		else if (Local_819[iVar2].f_6 == -1)
		{
		}
		else if (func_69(iVar2))
		{
		}
		else
		{
			func_183(Local_856[iVar2], &iVar8, &iVar9);
			GAMEPLAY::SET_BIT(&uVar4, iVar8);
			GAMEPLAY::SET_BIT(&uVar5, iVar9);
		}
		iVar2++;
	}
	iVar2 = 0;
	while (iVar2 <= 2)
	{
		if (Local_613.f_148[iVar2].f_3 == -1)
		{
		}
		else
		{
			func_183(Local_613.f_148[iVar2].f_1, &iVar8, &iVar9);
			if (Local_613.f_148[iVar2].f_2 == 0 || Local_613.f_148[iVar2].f_2 == 1)
			{
				GAMEPLAY::SET_BIT(&uVar6, iVar8);
			}
			else if (Local_613.f_148[iVar2].f_2 == 2 || Local_613.f_148[iVar2].f_2 == 3)
			{
				GAMEPLAY::SET_BIT(&uVar7, iVar9);
			}
		}
		iVar2++;
	}
	iVar10 = -1;
	iVar11 = 0;
	iVar2 = 0;
	while (iVar2 <= 12)
	{
		iVar3 = 0;
		while (iVar3 <= 8)
		{
			iVar11 = 100;
			iVar10 = func_72(iVar2, iVar3);
			if (!(func_82(&(Local_613.f_85[Local_819[Local_160.f_178].f_6][0]), iVar10) || func_82(&(Local_613.f_85[Local_819[Local_160.f_178].f_6][1]), iVar10)))
			{
			}
			else
			{
				if (GAMEPLAY::IS_BIT_SET(uVar6, iVar2))
				{
					iVar11 = (iVar11 - 25);
				}
				if (GAMEPLAY::IS_BIT_SET(uVar7, iVar3))
				{
					iVar11 = (iVar11 - 25);
				}
				if (GAMEPLAY::IS_BIT_SET(uVar4, iVar2))
				{
					iVar11 = (iVar11 - 25);
				}
				if (GAMEPLAY::IS_BIT_SET(uVar5, iVar3))
				{
					iVar11 = (iVar11 - 25);
				}
				if (iVar11 == 100)
				{
					return iVar10;
				}
				if (iVar11 > iVar1)
				{
					iVar1 = iVar11;
					iVar0 = iVar10;
				}
			}
			iVar3++;
		}
		iVar2++;
	}
	return iVar0;
}

int func_234(int iParam0)
{
	if (GAMEPLAY::IS_BIT_SET(Local_160.f_141, 6))
	{
		return 1;
	}
	if (Local_819[iParam0].f_6 == -1)
	{
		return 0;
	}
	if (iLocal_814[Local_819[iParam0].f_6] == 0)
	{
		return 0;
	}
	return 1;
}

void func_235(int iParam0)
{
	if (Local_160.f_178 == -1)
	{
		return;
	}
	Local_819[Local_160.f_178] = iParam0;
}

void func_236()
{
	if (Local_160.f_437 == -2147483647)
	{
		Local_160.f_437 = NETWORK::GET_NETWORK_TIME();
	}
	if ((NETWORK::GET_NETWORK_TIME() - Local_160.f_437) > 22500)
	{
		Local_160.f_437 = NETWORK::GET_NETWORK_TIME();
		iVar0 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 3);
		if (iVar0 == Local_160.f_438)
		{
			iVar0 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 3);
		}
		Local_160.f_438 = iVar0;
		func_239();
	}
	Local_160.f_439 = (Local_160.f_439 + (func_238() * SYSTEM::TIMESTEP()));
	Local_160.f_439.f_1 = (Local_160.f_439.f_1 + (func_237() * SYSTEM::TIMESTEP()));
}

float func_237()
{
	switch (Local_160.f_438)
	{
		case 0:
			return -0.1111111f;
		
		case 1:
			return -0.1111111f;
		
		case 2:
			return -0.1388889f;
		
		default:
	}
	return 0f;
}

float func_238()
{
	switch (Local_160.f_438)
	{
		case 0:
			return -0.0625f;
		
		case 1:
			return -0.0625f;
		
		case 2:
			return 0.078125f;
		
		default:
	}
	return 0f;
}

void func_239()
{
	switch (Local_160.f_438)
	{
		case 0:
		case 1:
			Local_160.f_439 = { func_109((1f + GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(-0.5f, 0f)), (1f + GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(0f, 0.5f))) };
			break;
		
		case 2:
			Local_160.f_439 = { func_109((0f + GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(0f, 0.5f)), (1f + GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(0f, 0.5f))) };
			break;
	}
}

void func_240()
{
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		if (!Local_921[iVar1].f_25)
		{
		}
		else if (Local_921[iVar1].f_6 == -1)
		{
		}
		else
		{
			func_241(iVar1, &iVar0);
		}
		iVar1++;
	}
	Local_160.f_306 = iVar0;
}

void func_241(int iParam0, int iParam1)
{
	iVar10 = 0;
	iVar10 = 0;
	while (iVar10 <= 1)
	{
		iVar11 = func_222(iParam0, iVar10);
		if (Local_921[iParam0].f_9.f_5[iVar10] == -2147483647)
		{
			if (GAMEPLAY::IS_BIT_SET(Local_160.f_304, iVar11))
			{
				GAMEPLAY::CLEAR_BIT(&(Local_160.f_304), iVar11);
			}
		}
		else
		{
			GAMEPLAY::SET_BIT(iParam1, iVar11);
			if (!GAMEPLAY::IS_BIT_SET(Local_160.f_306, iVar11))
			{
				Local_160.f_204[iParam0].f_5 = 0;
				func_258(iParam0, iVar10);
			}
			fVar12 = 0f;
			Var13 = { Local_921[iParam0].f_9.f_5[iVar10].f_1 };
			switch (Local_921[iParam0].f_9.f_5[iVar10].f_3)
			{
				case 0:
					fVar12 = -(IntToFloat(Local_160.f_59[Local_921[iParam0].f_9.f_5[iVar10].f_4].f_2) * 0.185185f);
					Var13.f_1 = (Var13.f_1 + fVar12);
					Var8 = { func_109(0f, 0.01481481f) };
					break;
				
				case 1:
					fVar12 = (IntToFloat(Local_160.f_59[Local_921[iParam0].f_9.f_5[iVar10].f_4].f_2) * 0.185185f);
					Var13.f_1 = (Var13.f_1 + fVar12);
					Var8 = { func_109(0f, -0.01481481f) };
					break;
				
				case 2:
					fVar12 = -(IntToFloat(Local_160.f_59[Local_921[iParam0].f_9.f_5[iVar10].f_4].f_2) * 0.104167f);
					Var13 = (Var13 + fVar12);
					Var8 = { func_109(0.008333333f, 0f) };
					break;
				
				case 3:
					fVar12 = (IntToFloat(Local_160.f_59[Local_921[iParam0].f_9.f_5[iVar10].f_4].f_2) * 0.104167f);
					Var13 = (Var13 + fVar12);
					Var8 = { func_109(-0.008333333f, 0f) };
					break;
			}
			fVar15 = (SYSTEM::TO_FLOAT((NETWORK::GET_NETWORK_TIME() - Local_921[iParam0].f_9.f_5[iVar10])) / SYSTEM::TO_FLOAT((Local_160.f_59[Local_921[iParam0].f_9.f_5[iVar10].f_4].f_2 * Local_160.f_59[Local_921[iParam0].f_9.f_5[iVar10].f_4].f_1)));
			if (GAMEPLAY::IS_BIT_SET(Local_160.f_304, iVar11))
			{
				if (fVar15 > 1f)
				{
					Local_160.f_204[iParam0].f_10[iVar10].f_2 = { func_109(-1f, -1f) };
					Local_921[iParam0].f_9.f_5[iVar10] = -2147483647;
					Local_921[iParam0].f_9.f_5[iVar10].f_1 = -1f;
					Local_921[iParam0].f_9.f_5[iVar10].f_1.f_1 = -1f;
					Local_921[iParam0].f_9.f_5[iVar10].f_3 = -1;
					Local_921[iParam0].f_9.f_5[iVar10].f_4 = -1;
				}
			}
			else
			{
				Var16 = { Local_921[iParam0].f_9.f_5[iVar10].f_1 };
				Var18 = { Var13 };
				if (func_257(Local_160.f_204[iParam0].f_10[iVar10].f_2, (-1f - 0.0001f), (-1f + 0.0001f)) && func_257(Local_160.f_204[iParam0].f_10[iVar10].f_2.f_1, (-1f - 0.0001f), (-1f + 0.0001f)))
				{
					Local_160.f_204[iParam0].f_10[iVar10].f_2 = { Var16 };
				}
				else
				{
					Local_160.f_204[iParam0].f_10[iVar10].f_2 = { Local_160.f_204[iParam0].f_10[iVar10] };
				}
				Local_160.f_204[iParam0].f_10[iVar10] = { func_255(Var16, Var18, fVar15) };
				iVar20 = 0;
				iVar21 = 0;
				Var4 = { Local_160.f_204[iParam0].f_10[iVar10] };
				Var6 = { func_185(Local_160.f_204[iParam0].f_10[iVar10].f_2, Var8) };
				iVar20 = 0;
				while (iVar20 <= 3)
				{
					if (iVar20 == iParam0)
					{
					}
					else if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar20)))
					{
					}
					else if (Local_819[iVar20].f_6 == -1)
					{
					}
					else if (func_69(iVar20))
					{
					}
					else
					{
						Var0 = { Local_160.f_204[iVar20] };
						Var2 = { Local_160.f_204[iVar20].f_2 };
						if (GAMEPLAY::ABSF((Var0 - Var4)) > 0.104167f || GAMEPLAY::ABSF((Var0.f_1 - Var4.f_1)) > 0.185185f)
						{
						}
						else if (func_250(Var4, Var6, Var0, Var2))
						{
							func_248(iVar10, iVar20, iParam0);
							iVar21 = 1;
						}
					}
					iVar20++;
				}
				iVar22 = 0;
				iVar22 = 0;
				while (iVar22 <= 3)
				{
					if (iVar22 == iParam0)
					{
					}
					else if (!Local_921[iVar22].f_25)
					{
					}
					else if (Local_921[iVar22].f_6 == -1)
					{
					}
					else if (func_247(iVar22))
					{
					}
					else
					{
						Var0 = { Local_160.f_204[iVar22] };
						Var2 = { Local_160.f_204[iVar22].f_2 };
						if (GAMEPLAY::ABSF((Var0 - Var4)) > 0.104167f || GAMEPLAY::ABSF((Var0.f_1 - Var4.f_1)) > 0.185185f)
						{
						}
						else if (func_250(Var4, Var6, Var0, Var2))
						{
							func_244(iVar10, iVar22, iParam0);
							iVar21 = 1;
						}
					}
					iVar22++;
				}
				if (fVar15 >= 1f || iVar21)
				{
					if (!GAMEPLAY::IS_BIT_SET(Local_160.f_304, iVar11))
					{
						if (Local_921[iParam0].f_9.f_5[iVar10].f_4 == 4)
						{
							func_242(Local_160.f_204[iParam0].f_10[iVar10]);
						}
						GAMEPLAY::SET_BIT(&(Local_160.f_304), iVar11);
					}
				}
			}
		}
		iVar10++;
	}
}

void func_242(struct<2> Param0)
{
	Local_160.f_159[Local_160.f_308] = 0;
	Local_160.f_159[Local_160.f_308].f_1 = { Param0 };
	if (func_243(Param0, Local_160.f_204[Local_160.f_178]) < SYSTEM::POW((0.185185f * 2f), 2f))
	{
		CONTROLS::SET_PAD_SHAKE(0, 1000, 100);
	}
	func_220("Rocket_Explode", Param0, 1);
	Local_160.f_308++;
	if (Local_160.f_308 >= 6)
	{
		Local_160.f_308 = 0;
	}
}

float func_243(struct<2> Param0, struct<2> Param2)
{
	return (SYSTEM::POW((Param2 - Param0), 2f) + SYSTEM::POW((Param2.f_1 - Param0.f_1), 2f));
}

void func_244(int iParam0, int iParam1, int iParam2)
{
	Local_160.f_204[iParam2].f_10[iParam0] = { Local_160.f_204[iParam1] };
	func_245(iParam1, -Local_160.f_59[Local_921[iParam2].f_9.f_5[iParam0].f_4].f_4, 0);
	CONTROLS::SET_PAD_SHAKE(0, 250, 200);
	Local_921[iParam1].f_3 = NETWORK::GET_NETWORK_TIME();
	if (Local_921[iParam1] != 2)
	{
		func_162((6 + Local_921[iParam2].f_6));
	}
	if (Local_921[iParam1].f_2 <= 0)
	{
		func_162((2 + Local_921[iParam1].f_6));
		Local_139.f_18++;
	}
}

void func_245(int iParam0, int iParam1, int iParam2)
{
	iVar0 = (Local_921[iParam0].f_2 + iParam1);
	if (iVar0 > 8)
	{
		iVar0 = 8;
	}
	else if (iVar0 <= 0)
	{
		iVar0 = 0;
		if (Local_921[iParam0] == 2)
		{
			func_229(iParam0, 3);
			func_224("Death_Bleeps");
		}
	}
	if (iVar0 != Local_921[iParam0].f_2)
	{
		Local_921[iParam0].f_2 = iVar0;
	}
	if (iParam1 < 0)
	{
		func_246(iParam0, Local_921[iParam0] != 2, iParam2);
	}
}

void func_246(int iParam0, bool bParam1, var uParam2)
{
	Var0 = -971390740;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam0;
	Var0.f_3 = bParam1;
	Var0.f_4 = uParam2;
	iVar5 = func_136(1);
	if (!iVar5 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 5, iVar5);
	}
}

int func_247(int iParam0)
{
	if (Local_921[iParam0] == 3)
	{
		return 1;
	}
	if (Local_921[iParam0] == 4)
	{
		return 1;
	}
	return 0;
}

void func_248(int iParam0, int iParam1, int iParam2)
{
	Local_160.f_204[iParam2].f_10[iParam0] = { Local_160.f_204[iParam1] };
	if (iParam1 == Local_160.f_178)
	{
		func_249(-Local_160.f_59[Local_921[iParam2].f_9.f_5[iParam0].f_4].f_4, 0);
		CONTROLS::SET_PAD_SHAKE(0, 250, 200);
		Local_819[Local_160.f_178].f_3 = NETWORK::GET_NETWORK_TIME();
		if (Local_819[Local_160.f_178] != 2)
		{
			func_162((6 + Local_921[iParam2].f_6));
		}
	}
	else if (iParam2 == Local_160.f_178 && (Local_819[iParam1].f_2 - Local_160.f_59[Local_921[iParam2].f_9.f_5[iParam0].f_4].f_4) <= 0)
	{
		func_162((2 + Local_819[iParam1].f_6));
		Local_139.f_18++;
	}
}

void func_249(int iParam0, int iParam1)
{
	iVar0 = (Local_819[Local_160.f_178].f_2 + iParam0);
	if (iVar0 > 8)
	{
		iVar0 = 8;
	}
	else if (iVar0 <= 0)
	{
		iVar0 = 0;
		if (Local_819[Local_160.f_178] == 2)
		{
			func_235(3);
			GAMEPLAY::SET_BIT(&(Local_160.f_141), 2);
			func_224("Death_Bleeps");
			Global_1661996 = 5;
		}
	}
	if (iVar0 != Local_819[Local_160.f_178].f_2)
	{
		Local_819[Local_160.f_178].f_2 = iVar0;
	}
	if (iParam0 < 0)
	{
		func_246(Local_160.f_178, Local_819[Local_160.f_178] != 2, iParam1);
	}
}

int func_250(struct<2> Param0, struct<2> Param2, struct<2> Param4, struct<2> Param6)
{
	Var0 = { Param0 };
	Var2 = { Param2 };
	Var4 = { Param4 };
	Var6 = { Param6 };
	func_254(&Param0, &Param2);
	func_254(&Param4, &Param6);
	func_254(&Var2, &Var0);
	func_254(&Var6, &Var4);
	if (((func_251(Param0, Param2, Var4, Var6, &uVar8) || func_251(Param0, Param2, Param4, Param6, &uVar8)) || func_251(Var0, Var2, Param4, Param6, &uVar8)) || func_251(Var0, Var2, Var4, Var6, &uVar8))
	{
		return 1;
	}
	return 0;
}

int func_251(struct<2> Param0, struct<2> Param2, struct<2> Param4, struct<2> Param6, var uParam8)
{
	fVar0 = (Param2.f_1 - Param0.f_1);
	fVar1 = (Param0 - Param2);
	fVar2 = ((fVar0 * Param0) + (fVar1 * Param0.f_1));
	fVar3 = (Param6.f_1 - Param4.f_1);
	fVar4 = (Param4 - Param6);
	fVar5 = ((fVar3 * Param4) + (fVar4 * Param4.f_1));
	fVar6 = ((fVar0 * fVar4) - (fVar3 * fVar1));
	if (!func_257(fVar6, (0f - 0.0001f), (0f + 0.0001f)))
	{
		fVar7 = (((fVar4 * fVar2) - (fVar1 * fVar5)) / fVar6);
		fVar8 = (((fVar0 * fVar5) - (fVar3 * fVar2)) / fVar6);
		Var9 = { func_109(fVar7, fVar8) };
		if (((((((func_253((Param0 - 0.001f), (Param2 - 0.001f)) <= Var9 && Var9 <= func_252((Param0 + 0.001f), (Param2 + 0.001f))) && func_253((Param0.f_1 - 0.001f), (Param2.f_1 - 0.001f)) <= Var9.f_1) && Var9.f_1 <= func_252((Param0.f_1 + 0.001f), (Param2.f_1 + 0.001f))) && func_253((Param4 - 0.001f), (Param6 - 0.001f)) <= Var9) && Var9 <= func_252((Param4 + 0.001f), (Param6 + 0.001f))) && func_253((Param4.f_1 - 0.001f), (Param6.f_1 - 0.001f)) <= Var9.f_1) && Var9.f_1 <= func_252((Param4.f_1 + 0.001f), (Param6.f_1 + 0.001f)))
		{
			*uParam8 = { Var9 };
			return 1;
		}
	}
	*uParam8 = { func_109(3.402823E+38f, 3.402823E+38f) };
	return 0;
}

float func_252(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

float func_253(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_254(var uParam0, var uParam1)
{
	if (func_257(*uParam0, (*uParam1 - 0.0001f), (*uParam1 + 0.0001f)))
	{
		*uParam0 = (*uParam0 + 0.008333333f);
		*uParam1 = (*uParam1 - 0.008333333f);
	}
	if (func_257(uParam0->f_1, (uParam1->f_1 - 0.0001f), (uParam1->f_1 + 0.0001f)))
	{
		uParam0->f_1 = (uParam0->f_1 + 0.01481481f);
		uParam1->f_1 = (uParam1->f_1 - 0.01481481f);
	}
}

struct<2> func_255(struct<2> Param0, struct<2> Param2, float fParam4)
{
	return func_185(func_256(Param0, (1f - fParam4)), func_256(Param2, fParam4));
}

struct<2> func_256(struct<2> Param0, float fParam2)
{
	Var0 = (Param0 * fParam2);
	Var0.f_1 = (Param0.f_1 * fParam2);
	return Var0;
}

bool func_257(float fParam0, float fParam1, float fParam2)
{
	return (fParam0 >= fParam1 && fParam0 < fParam2);
}

void func_258(int iParam0, int iParam1)
{
	sVar0 = "";
	switch (Local_921[iParam0].f_9.f_5[iParam1].f_4)
	{
		case 1:
			sVar0 = "Pistol_Fire";
			break;
		
		case 3:
			sVar0 = "Assault_Rifle_Fire";
			break;
		
		case 2:
			sVar0 = "Machine_Pistol_Fire";
			break;
		
		case 5:
			sVar0 = "Shotgun_Fire";
			break;
		
		case 4:
			sVar0 = "Rocket_Fire";
			break;
	}
	if (Local_921[iParam0].f_9.f_5[iParam1].f_4 == 1)
	{
		func_163(sVar0, iParam0, &(Local_160.f_204[iParam0].f_8));
	}
	else
	{
		func_259(sVar0, iParam0, &(Local_160.f_204[iParam0].f_8));
	}
}

void func_259(char* sParam0, int iParam1, var uParam2)
{
	uVar0 = func_165(Local_160.f_204[iParam1]);
	if (*uParam2 == -1)
	{
		*uParam2 = AUDIO::GET_SOUND_ID();
	}
	AUDIO::PLAY_SOUND_FRONTEND(*uParam2, sParam0, "dlc_vw_am_tw_global_sounds", 0);
	AUDIO::SET_VARIABLE_ON_SOUND(*uParam2, "Screen_Position", uVar0);
}

void func_260()
{
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
		}
		else if (Local_819[iVar1].f_6 == -1)
		{
		}
		else
		{
			func_261(iVar1, &iVar0);
		}
		iVar1++;
	}
	Local_160.f_305 = iVar0;
}

void func_261(int iParam0, int iParam1)
{
	iVar10 = 0;
	iVar10 = 0;
	while (iVar10 <= 1)
	{
		iVar11 = func_222(iParam0, iVar10);
		if (Local_856[iParam0].f_5[iVar10] == -2147483647)
		{
			if (GAMEPLAY::IS_BIT_SET(Local_160.f_303, iVar11))
			{
				GAMEPLAY::CLEAR_BIT(&(Local_160.f_303), iVar11);
			}
		}
		else
		{
			GAMEPLAY::SET_BIT(iParam1, iVar11);
			if (!GAMEPLAY::IS_BIT_SET(Local_160.f_305, iVar11))
			{
				Local_160.f_204[iParam0].f_5 = 0;
				func_264(iParam0, iVar10);
			}
			fVar12 = 0f;
			Var13 = { Local_856[iParam0].f_5[iVar10].f_1 };
			switch (Local_856[iParam0].f_5[iVar10].f_3)
			{
				case 0:
					fVar12 = -(IntToFloat(Local_160.f_59[Local_856[iParam0].f_5[iVar10].f_4].f_2) * 0.185185f);
					Var13.f_1 = (Var13.f_1 + fVar12);
					Var8 = { func_109(0f, 0.01481481f) };
					break;
				
				case 1:
					fVar12 = (IntToFloat(Local_160.f_59[Local_856[iParam0].f_5[iVar10].f_4].f_2) * 0.185185f);
					Var13.f_1 = (Var13.f_1 + fVar12);
					Var8 = { func_109(0f, -0.01481481f) };
					break;
				
				case 2:
					fVar12 = -(IntToFloat(Local_160.f_59[Local_856[iParam0].f_5[iVar10].f_4].f_2) * 0.104167f);
					Var13 = (Var13 + fVar12);
					Var8 = { func_109(0.008333333f, 0f) };
					break;
				
				case 3:
					fVar12 = (IntToFloat(Local_160.f_59[Local_856[iParam0].f_5[iVar10].f_4].f_2) * 0.104167f);
					Var13 = (Var13 + fVar12);
					Var8 = { func_109(-0.008333333f, 0f) };
					break;
			}
			fVar15 = (SYSTEM::TO_FLOAT((NETWORK::GET_NETWORK_TIME() - Local_856[iParam0].f_5[iVar10])) / SYSTEM::TO_FLOAT((Local_160.f_59[Local_856[iParam0].f_5[iVar10].f_4].f_2 * Local_160.f_59[Local_856[iParam0].f_5[iVar10].f_4].f_1)));
			if (GAMEPLAY::IS_BIT_SET(Local_160.f_303, iVar11))
			{
				if (fVar15 > 1f)
				{
					Local_160.f_204[iParam0].f_10[iVar10].f_2 = { func_109(-1f, -1f) };
					if (iParam0 == Local_160.f_178)
					{
						Local_856[Local_160.f_178].f_5[iVar10] = -2147483647;
						Local_856[Local_160.f_178].f_5[iVar10].f_1 = -1f;
						Local_856[Local_160.f_178].f_5[iVar10].f_1.f_1 = -1f;
						Local_856[Local_160.f_178].f_5[iVar10].f_3 = -1;
						Local_856[Local_160.f_178].f_5[iVar10].f_4 = -1;
					}
				}
			}
			else
			{
				Var16 = { Local_856[iParam0].f_5[iVar10].f_1 };
				Var18 = { Var13 };
				if (func_257(Local_160.f_204[iParam0].f_10[iVar10].f_2, (-1f - 0.0001f), (-1f + 0.0001f)) && func_257(Local_160.f_204[iParam0].f_10[iVar10].f_2.f_1, (-1f - 0.0001f), (-1f + 0.0001f)))
				{
					Local_160.f_204[iParam0].f_10[iVar10].f_2 = { Var16 };
				}
				else
				{
					Local_160.f_204[iParam0].f_10[iVar10].f_2 = { Local_160.f_204[iParam0].f_10[iVar10] };
				}
				Local_160.f_204[iParam0].f_10[iVar10] = { func_255(Var16, Var18, fVar15) };
				iVar20 = 0;
				iVar21 = 0;
				Var4 = { Local_160.f_204[iParam0].f_10[iVar10] };
				Var6 = { func_185(Local_160.f_204[iParam0].f_10[iVar10].f_2, Var8) };
				iVar20 = 0;
				while (iVar20 <= 3)
				{
					if (iVar20 == iParam0)
					{
					}
					else if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar20)))
					{
					}
					else if (Local_819[iVar20].f_6 == -1)
					{
					}
					else if (func_69(iVar20))
					{
					}
					else
					{
						Var0 = { Local_160.f_204[iVar20] };
						Var2 = { Local_160.f_204[iVar20].f_2 };
						if (GAMEPLAY::ABSF((Var0 - Var4)) > 0.104167f || GAMEPLAY::ABSF((Var0.f_1 - Var4.f_1)) > 0.185185f)
						{
						}
						else if (func_250(Var4, Var6, Var0, Var2))
						{
							func_263(iVar10, iVar20, iParam0);
							iVar21 = 1;
						}
					}
					iVar20++;
				}
				iVar22 = 0;
				iVar22 = 0;
				while (iVar22 <= 3)
				{
					if (iVar22 == iParam0)
					{
					}
					else if (!Local_921[iVar22].f_25)
					{
					}
					else if (Local_921[iVar22].f_6 == -1)
					{
					}
					else if (func_247(iVar22))
					{
					}
					else
					{
						Var0 = { Local_160.f_204[iVar22] };
						Var2 = { Local_160.f_204[iVar22].f_2 };
						if (GAMEPLAY::ABSF((Var0 - Var4)) > 0.104167f || GAMEPLAY::ABSF((Var0.f_1 - Var4.f_1)) > 0.185185f)
						{
						}
						else if (func_250(Var4, Var6, Var0, Var2))
						{
							func_262(iVar10, iVar22, iParam0);
							iVar21 = 1;
						}
					}
					iVar22++;
				}
				if (fVar15 >= 1f || iVar21)
				{
					if (!GAMEPLAY::IS_BIT_SET(Local_160.f_303, iVar11))
					{
						if (Local_856[iParam0].f_5[iVar10].f_4 == 4)
						{
							func_242(Local_160.f_204[iParam0].f_10[iVar10]);
						}
						GAMEPLAY::SET_BIT(&(Local_160.f_303), iVar11);
					}
				}
			}
		}
		iVar10++;
	}
}

void func_262(int iParam0, int iParam1, int iParam2)
{
	Local_160.f_204[iParam2].f_10[iParam0] = { Local_160.f_204[iParam1] };
	func_245(iParam1, -Local_160.f_59[Local_856[iParam2].f_5[iParam0].f_4].f_4, 0);
	CONTROLS::SET_PAD_SHAKE(0, 250, 200);
	Local_921[iParam1].f_3 = NETWORK::GET_NETWORK_TIME();
	if (Local_921[iParam1] != 2)
	{
		func_162((6 + Local_819[iParam2].f_6));
	}
	if (Local_921[iParam1].f_2 <= 0)
	{
		func_162((2 + Local_921[iParam1].f_6));
		Local_139.f_18++;
	}
}

void func_263(int iParam0, int iParam1, int iParam2)
{
	Local_160.f_204[iParam2].f_10[iParam0] = { Local_160.f_204[iParam1] };
	if (iParam1 == Local_160.f_178)
	{
		func_249(-Local_160.f_59[Local_856[iParam2].f_5[iParam0].f_4].f_4, 0);
		CONTROLS::SET_PAD_SHAKE(0, 250, 200);
		Local_819[Local_160.f_178].f_3 = NETWORK::GET_NETWORK_TIME();
		if (Local_819[Local_160.f_178] != 2)
		{
			func_162((6 + Local_819[iParam2].f_6));
		}
	}
	else if (iParam2 == Local_160.f_178 && (Local_819[iParam1].f_2 - Local_160.f_59[Local_856[iParam2].f_5[iParam0].f_4].f_4) <= 0)
	{
		func_162((2 + Local_819[iParam1].f_6));
		Local_139.f_18++;
	}
}

void func_264(int iParam0, int iParam1)
{
	sVar0 = "";
	switch (Local_856[iParam0].f_5[iParam1].f_4)
	{
		case 1:
			sVar0 = "Pistol_Fire";
			break;
		
		case 3:
			sVar0 = "Assault_Rifle_Fire";
			break;
		
		case 2:
			sVar0 = "Machine_Pistol_Fire";
			break;
		
		case 5:
			sVar0 = "Shotgun_Fire";
			break;
		
		case 4:
			sVar0 = "Rocket_Fire";
			break;
	}
	if (Local_856[iParam0].f_5[iParam1].f_4 == 1)
	{
		func_163(sVar0, iParam0, &(Local_160.f_204[iParam0].f_8));
	}
	else
	{
		func_259(sVar0, iParam0, &(Local_160.f_204[iParam0].f_8));
	}
}

void func_265()
{
	bVar10 = false;
	iVar11 = 0;
	while (iVar11 <= 2)
	{
		iVar16 = NETWORK::GET_NETWORK_TIME();
		if (Local_613.f_148[iVar11].f_3 != -1 && iVar16 > Local_613.f_148[iVar11])
		{
			iVar17 = func_73((Local_613.f_148[iVar11].f_2 == 1 || Local_613.f_148[iVar11].f_2 == 0), 11, 15) * 650;
			if (iVar16 > (Local_613.f_148[iVar11] + iVar17))
			{
			}
			else
			{
				bVar10 = true;
				fVar18 = (SYSTEM::TO_FLOAT((iVar16 - Local_613.f_148[iVar11])) / SYSTEM::TO_FLOAT(iVar17));
				func_183(Local_613.f_148[iVar11].f_1, &iVar12, &iVar13);
				switch (Local_613.f_148[iVar11].f_2)
				{
					case 0:
						iVar14 = iVar12;
						iVar15 = 0;
						Var8 = { func_109(0f, -(Local_160.f_22[Local_613.f_148[iVar11].f_3].f_2.f_1 / 2f)) };
						break;
					
					case 1:
						iVar14 = iVar12;
						iVar15 = 8;
						Var8 = { func_109(0f, (Local_160.f_22[Local_613.f_148[iVar11].f_3].f_2.f_1 / 2f)) };
						break;
					
					case 2:
						iVar14 = 0;
						iVar15 = iVar13;
						Var8 = { func_109(-(Local_160.f_22[Local_613.f_148[iVar11].f_3].f_2 / 2f), 0f) };
						break;
					
					case 3:
						iVar14 = 12;
						iVar15 = iVar13;
						Var8 = { func_109((Local_160.f_22[Local_613.f_148[iVar11].f_3].f_2 / 2f), 0f) };
						break;
				}
				Var19 = { func_186(Local_613.f_148[iVar11].f_1) };
				Var21 = { func_186(func_72(iVar14, iVar15)) };
				switch (Local_613.f_148[iVar11].f_2)
				{
					case 0:
						Var19.f_1 = (Var19.f_1 + 0.1851855f);
						Var21.f_1 = (Var21.f_1 + -0.1851855f);
						break;
					
					case 1:
						Var19.f_1 = (Var19.f_1 + -0.1851855f);
						Var21.f_1 = (Var21.f_1 + 0.1851855f);
						break;
					
					case 2:
						Var19 = (Var19 + 0.1041665f);
						Var21 = (Var21 + -0.1041665f);
						break;
					
					case 3:
						Var19 = (Var19 + -0.1041665f);
						Var21 = (Var21 + 0.1041665f);
						break;
				}
				Local_160.f_281[iVar11].f_2 = { Local_160.f_281[iVar11] };
				Local_160.f_281[iVar11] = { func_255(Var19, Var21, fVar18) };
				if (!func_203(Local_160.f_281[iVar11], Local_160.f_22[Local_613.f_148[iVar11].f_3].f_2))
				{
					if (func_203(Local_160.f_281[iVar11].f_2, Local_160.f_22[Local_613.f_148[iVar11].f_3].f_2))
					{
						if (Local_613.f_148[iVar11].f_3 != 0)
						{
							func_220(func_271(Local_613.f_148[iVar11].f_3), Local_160.f_281[iVar11], 1);
						}
					}
					else
					{
						if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_vw_am_tw_vehicle_drivethrough_scene"))
						{
							AUDIO::START_AUDIO_SCENE("dlc_vw_am_tw_vehicle_drivethrough_scene");
						}
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_vw_am_tw_in_gameplay_scene"))
						{
							AUDIO::STOP_AUDIO_SCENE("dlc_vw_am_tw_in_gameplay_scene");
						}
						if (iVar11 != 2)
						{
							Var23 = { Local_160.f_281[iVar11] };
							if (iVar11 == 1 && Local_613.f_148[iVar11].f_2 != Local_613.f_148[2].f_2)
							{
								Var23 = { func_109(0.5f, 0.5f) };
							}
							if (Local_613.f_148[iVar11].f_3 >= 5)
							{
								iVar25 = (Local_613.f_148[iVar11].f_3 - 5);
								func_269(func_270(Local_613.f_148[iVar11].f_3), &(Local_160.f_281[iVar11].f_5), Var23, iVar25);
							}
							else
							{
								func_168(func_270(Local_613.f_148[iVar11].f_3), &(Local_160.f_281[iVar11].f_5), Var23, 1);
							}
						}
					}
				}
				else if (Local_160.f_281[iVar11].f_5 != -1)
				{
					func_169(&(Local_160.f_281[iVar11].f_5));
				}
				Var4 = { func_185(Local_160.f_281[iVar11], Var8) };
				Var6 = { func_268(Local_160.f_281[iVar11].f_2, Var8) };
				iVar26 = 0;
				iVar26 = 0;
				while (iVar26 <= 3)
				{
					if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar26)))
					{
					}
					else if (Local_819[iVar26].f_6 == -1)
					{
					}
					else if (func_69(iVar26))
					{
					}
					else
					{
						Var0 = { Local_160.f_204[iVar26] };
						Var2 = { Local_160.f_204[iVar26].f_2 };
						if (GAMEPLAY::ABSF((Var0 - Var4)) > 0.104167f || GAMEPLAY::ABSF((Var0.f_1 - Var4.f_1)) > 0.185185f)
						{
						}
						else if (func_250(Var4, Var6, Var0, Var2))
						{
							func_267(iVar26);
						}
					}
					iVar26++;
				}
				iVar27 = 0;
				iVar27 = 0;
				while (iVar27 <= 3)
				{
					if (!Local_921[iVar27].f_25)
					{
					}
					else if (Local_921[iVar27].f_6 == -1)
					{
					}
					else if (func_247(iVar27))
					{
					}
					else
					{
						Var0 = { Local_160.f_204[iVar27] };
						Var2 = { Local_160.f_204[iVar27].f_2 };
						if (GAMEPLAY::ABSF((Var0 - Var4)) > 0.104167f || GAMEPLAY::ABSF((Var0.f_1 - Var4.f_1)) > 0.185185f)
						{
						}
						else if (func_250(Var4, Var6, Var0, Var2))
						{
							func_266(iVar27);
						}
					}
					iVar27++;
				}
				Jump @1613; //curOff = 1374
				if (Local_160.f_281[iVar11].f_5 != -1)
				{
					func_169(&(Local_160.f_281[iVar11].f_5));
				}
				Local_160.f_281[iVar11] = { func_186(Local_613.f_148[iVar11].f_1) };
				switch (Local_613.f_148[iVar11].f_2)
				{
					case 0:
						Local_160.f_281[iVar11].f_1 = (Local_160.f_281[iVar11].f_1 + 0.1851855f);
						break;
					
					case 1:
						Local_160.f_281[iVar11].f_1 = (Local_160.f_281[iVar11].f_1 + -0.1851855f);
						break;
					
					case 2:
						Local_160.f_281[iVar11] = (Local_160.f_281[iVar11] + 0.1041665f);
						break;
					
					case 3:
						Local_160.f_281[iVar11] = (Local_160.f_281[iVar11] + -0.1041665f);
						break;
				}
				Local_160.f_281[iVar11].f_2 = { Local_160.f_281[iVar11] };
			}
			iVar11++;
			if (!bVar10)
			{
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_vw_am_tw_in_gameplay_scene"))
				{
					AUDIO::START_AUDIO_SCENE("dlc_vw_am_tw_in_gameplay_scene");
				}
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_vw_am_tw_vehicle_drivethrough_scene"))
				{
					AUDIO::STOP_AUDIO_SCENE("dlc_vw_am_tw_vehicle_drivethrough_scene");
				}
			}
		}

void func_266(int iParam0)
{
	func_245(iParam0, -8, 1);
	Local_921[iParam0].f_3 = NETWORK::GET_NETWORK_TIME();
	func_162(10);
}

void func_267(int iParam0)
{
	if (iParam0 == Local_160.f_178)
	{
		func_249(-8, 1);
		CONTROLS::SET_PAD_SHAKE(0, 1000, 200);
		Local_819[Local_160.f_178].f_3 = NETWORK::GET_NETWORK_TIME();
		func_162(10);
	}
}

struct<2> func_268(struct<2> Param0, struct<2> Param2)
{
	Var0 = (Param0 - Param2);
	Var0.f_1 = (Param0.f_1 - Param2.f_1);
	return Var0;
}

void func_269(char* sParam0, var uParam1, struct<2> Param2, int iParam4)
{
	uVar0 = func_165(Param2);
	if (*uParam1 == -1)
	{
		*uParam1 = AUDIO::GET_SOUND_ID();
	}
	if (AUDIO::HAS_SOUND_FINISHED(*uParam1))
	{
		AUDIO::PLAY_SOUND_FRONTEND(*uParam1, uParam0, func_164(iParam4), 0);
	}
	AUDIO::SET_VARIABLE_ON_SOUND(*uParam1, "Screen_Position", uVar0);
}

char* func_270(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "Ice_Cream_Van_Loop";
		
		case 1:
		case 2:
		case 3:
			return "Emergency_Siren_Loop";
		
		case 4:
			return "Tank_Loop";
		
		case 5:
		case 6:
		case 7:
		case 8:
			return "Gang_Van_Loop";
		
		default:
	}
	return "INVALID VEHICLE";
}

char* func_271(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "Ambulance_Warning";
		
		case 2:
			return "Police_Car_Warning";
		
		case 3:
			return "Fire_Truck_Warning";
		
		case 4:
			return "Tank_Warning";
		
		case 5:
		case 6:
		case 7:
		case 8:
			return "Gang_Van_Warning";
		
		default:
	}
	return "INVALID VEHICLE";
}

void func_272()
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (!Local_921[iVar0].f_25)
		{
		}
		else if (Local_921[iVar0].f_6 == -1)
		{
		}
		else if (func_69(iVar0))
		{
			Local_160.f_204[iVar0].f_2 = { func_109(-1f, -1f) };
		}
		else
		{
			func_273(iVar0);
		}
		iVar0++;
	}
}

void func_273(int iParam0)
{
	func_183(Local_921[iParam0].f_9, &iVar0, &iVar1);
	func_183(Local_921[iParam0].f_9.f_1, &iVar2, &iVar3);
	Var4 = { func_186(Local_921[iParam0].f_9) };
	Var6 = { func_186(Local_921[iParam0].f_9.f_1) };
	fVar8 = (SYSTEM::TO_FLOAT((NETWORK::GET_NETWORK_TIME() - Local_921[iParam0].f_9.f_2)) / SYSTEM::TO_FLOAT(func_279(iParam0)));
	if (fVar8 < 0f)
	{
		fVar8 = 0f;
	}
	if ((fVar8 >= 0.65f && !GAMEPLAY::IS_BIT_SET(Local_160.f_142[iParam0], 0)) || (fVar8 >= 0.8f && !GAMEPLAY::IS_BIT_SET(Local_160.f_142[iParam0], 1)))
	{
		if (iVar2 != iVar0)
		{
			if (iVar2 > iVar0)
			{
				func_278(Local_921[iParam0].f_9, 1, Local_921[iParam0].f_6);
			}
			else
			{
				uVar9 = func_72((iVar0 - 1), iVar1);
				func_278(uVar9, 1, Local_921[iParam0].f_6);
			}
		}
		else if (iVar3 != iVar1)
		{
			if (iVar3 > iVar1)
			{
				func_278(Local_921[iParam0].f_9, 0, Local_921[iParam0].f_6);
			}
			else
			{
				uVar10 = func_72(iVar0, (iVar1 - 1));
				func_278(uVar10, 0, Local_921[iParam0].f_6);
			}
		}
		if (!GAMEPLAY::IS_BIT_SET(Local_160.f_142[iParam0], 0))
		{
			GAMEPLAY::SET_BIT(&(Local_160.f_142[iParam0]), 0);
		}
		else
		{
			GAMEPLAY::CLEAR_BIT(&(Local_160.f_142[iParam0]), 4);
			GAMEPLAY::SET_BIT(&(Local_160.f_142[iParam0]), 1);
		}
	}
	if (fVar8 > 0.85f || fVar8 < 0.15f)
	{
		if (fVar8 > 0.85f)
		{
			iVar11 = Local_921[iParam0].f_9;
		}
		else
		{
			iVar11 = Local_921[iParam0].f_9.f_1;
		}
		iVar12 = 0;
		while (iVar12 <= 6)
		{
			if (Local_613.f_62[iVar12].f_1 == -1)
			{
				if (GAMEPLAY::IS_BIT_SET(Local_160.f_309, iVar12))
				{
					GAMEPLAY::CLEAR_BIT(&(Local_160.f_309), iVar12);
				}
			}
			else if (!func_277(iVar12, iParam0))
			{
			}
			else if ((NETWORK::GET_NETWORK_TIME() - Local_613.f_62[iVar12].f_2) < 1250)
			{
			}
			else if (GAMEPLAY::IS_BIT_SET(Local_160.f_309, iVar12))
			{
			}
			else if (iVar11 == Local_613.f_62[iVar12])
			{
				GAMEPLAY::SET_BIT(&(Local_160.f_309), iVar12);
				func_275(iVar12, iParam0);
				func_274(iVar12);
				func_162(11);
			}
			iVar12++;
		}
	}
	if (fVar8 < 1f)
	{
		if (Local_160.f_204[iParam0].f_2 < 0f && Local_160.f_204[iParam0].f_2.f_1 < 0f)
		{
			Local_160.f_204[iParam0].f_2 = { func_255(Var6, Var4, fVar8) };
		}
		else
		{
			Local_160.f_204[iParam0].f_2 = { Local_160.f_204[iParam0] };
		}
		Local_160.f_204[iParam0] = { func_255(Var6, Var4, fVar8) };
		return;
	}
	if (Local_160.f_204[iParam0].f_2 < 0f && Local_160.f_204[iParam0].f_2.f_1 < 0f)
	{
		Local_160.f_204[iParam0].f_2 = { Var4 };
	}
	else
	{
		Local_160.f_204[iParam0].f_2 = { Local_160.f_204[iParam0] };
	}
	Local_160.f_204[iParam0] = { Var4 };
	Local_160.f_204[iParam0].f_4 = 0;
}

void func_274(int iParam0)
{
	Var0.x = 245344479;
	Var0.y = PLAYER::PLAYER_ID();
	Var0.z = iParam0;
	iVar3 = func_136(1);
	if (!iVar3 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 3, iVar3);
	}
}

void func_275(int iParam0, int iParam1)
{
	Local_139.f_17++;
	switch (Local_613.f_62[iParam0].f_1)
	{
		case 0:
			func_245(iParam1, 4, 0);
			break;
		
		case 1:
			Local_160.f_178.f_2 += 10;
			break;
		
		case 2:
			func_276(Local_921[iParam1].f_9, Local_921[iParam1].f_6);
			break;
		
		case 3:
			Local_921[iParam1].f_5 = 1;
			break;
		
		case 4:
			Local_921[iParam1].f_5 = 2;
			break;
		
		case 5:
			Local_921[iParam1].f_5 = 3;
			break;
		
		case 6:
			Local_921[iParam1].f_5 = 4;
			break;
		
		case 7:
			Local_921[iParam1].f_5 = 5;
			break;
	}
	if (!GAMEPLAY::IS_BIT_SET(Local_160.f_417, 2) && Local_921[iParam1].f_5 != 0)
	{
	}
}

void func_276(var uParam0, var uParam1)
{
	Var0 = 1731475734;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = uParam0;
	Var0.f_3 = uParam1;
	iVar4 = func_136(1);
	if (!iVar4 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 4, iVar4);
	}
}

int func_277(int iParam0, int iParam1)
{
	switch (Local_613.f_62[iParam0].f_1)
	{
		case 0:
			if (Local_921[iParam1].f_2 == 8)
			{
				return 0;
			}
			break;
		
		case 1:
		case 2:
			return 1;
		
		case 3:
			if (Local_921[iParam1].f_5 == 1)
			{
				return 0;
			}
			break;
		
		case 4:
			if (Local_921[iParam1].f_5 == 2)
			{
				return 0;
			}
			break;
		
		case 5:
			if (Local_921[iParam1].f_5 == 3)
			{
				return 0;
			}
			break;
		
		case 6:
			if (Local_921[iParam1].f_5 == 4)
			{
				return 0;
			}
			break;
		
		case 7:
			if (Local_921[iParam1].f_5 == 5)
			{
				return 0;
			}
			break;
	}
	return 1;
}

void func_278(var uParam0, int iParam1, var uParam2)
{
	Var0 = 243134040;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = uParam0;
	Var0.f_3 = iParam1;
	Var0.f_4 = uParam2;
	iVar5 = func_136(1);
	if (!iVar5 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 5, iVar5);
	}
}

int func_279(int iParam0)
{
	return SYSTEM::ROUND((700f * Local_921[iParam0].f_1));
}

void func_280()
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
		}
		else if (Local_819[iVar0].f_6 == -1)
		{
		}
		else if (func_69(iVar0))
		{
			Local_160.f_204[iVar0].f_2 = { func_109(-1f, -1f) };
		}
		else
		{
			func_281(iVar0);
		}
		iVar0++;
	}
}

void func_281(int iParam0)
{
	func_183(Local_856[iParam0], &iVar0, &iVar1);
	func_183(Local_856[iParam0].f_1, &iVar2, &iVar3);
	Var4 = { func_186(Local_856[iParam0]) };
	Var6 = { func_186(Local_856[iParam0].f_1) };
	fVar8 = (SYSTEM::TO_FLOAT((NETWORK::GET_NETWORK_TIME() - Local_856[iParam0].f_2)) / SYSTEM::TO_FLOAT(func_182(iParam0)));
	if (fVar8 < 0f)
	{
		fVar8 = 0f;
	}
	if (iParam0 == Local_160.f_178 && ((fVar8 >= 0.65f && !GAMEPLAY::IS_BIT_SET(Local_160.f_141, 0)) || (fVar8 >= 0.8f && !GAMEPLAY::IS_BIT_SET(Local_160.f_141, 1))))
	{
		if (iVar2 != iVar0)
		{
			if (iVar2 > iVar0)
			{
				func_278(Local_856[iParam0], 1, Local_819[iParam0].f_6);
			}
			else
			{
				uVar9 = func_72((iVar0 - 1), iVar1);
				func_278(uVar9, 1, Local_819[iParam0].f_6);
			}
		}
		else if (iVar3 != iVar1)
		{
			if (iVar3 > iVar1)
			{
				func_278(Local_856[iParam0], 0, Local_819[iParam0].f_6);
			}
			else
			{
				uVar10 = func_72(iVar0, (iVar1 - 1));
				func_278(uVar10, 0, Local_819[iParam0].f_6);
			}
		}
		if (!GAMEPLAY::IS_BIT_SET(Local_160.f_141, 0))
		{
			GAMEPLAY::SET_BIT(&(Local_160.f_141), 0);
		}
		else
		{
			GAMEPLAY::CLEAR_BIT(&(Local_160.f_141), 4);
			GAMEPLAY::SET_BIT(&(Local_160.f_141), 1);
		}
	}
	if (fVar8 > 0.85f || fVar8 < 0.15f)
	{
		if (fVar8 > 0.85f)
		{
			iVar11 = Local_856[iParam0];
		}
		else
		{
			iVar11 = Local_856[iParam0].f_1;
		}
		iVar12 = 0;
		while (iVar12 <= 6)
		{
			if (Local_613.f_62[iVar12].f_1 == -1)
			{
				if (GAMEPLAY::IS_BIT_SET(Local_160.f_309, iVar12))
				{
					GAMEPLAY::CLEAR_BIT(&(Local_160.f_309), iVar12);
				}
			}
			else if (!func_283(iVar12))
			{
			}
			else if ((NETWORK::GET_NETWORK_TIME() - Local_613.f_62[iVar12].f_2) < 1250)
			{
			}
			else if (GAMEPLAY::IS_BIT_SET(Local_160.f_309, iVar12))
			{
			}
			else if (iVar11 == Local_613.f_62[iVar12])
			{
				if (iParam0 == Local_160.f_178)
				{
					GAMEPLAY::SET_BIT(&(Local_160.f_309), iVar12);
					func_282(iVar12);
					CONTROLS::SET_PAD_SHAKE(0, 100, 50);
					func_274(iVar12);
					func_162(11);
				}
			}
			iVar12++;
		}
	}
	if (fVar8 < 1f)
	{
		if (Local_160.f_204[iParam0].f_2 < 0f && Local_160.f_204[iParam0].f_2.f_1 < 0f)
		{
			Local_160.f_204[iParam0].f_2 = { func_255(Var6, Var4, fVar8) };
		}
		else
		{
			Local_160.f_204[iParam0].f_2 = { Local_160.f_204[iParam0] };
		}
		Local_160.f_204[iParam0] = { func_255(Var6, Var4, fVar8) };
		return;
	}
	if (Local_160.f_204[iParam0].f_2 < 0f && Local_160.f_204[iParam0].f_2.f_1 < 0f)
	{
		Local_160.f_204[iParam0].f_2 = { Var4 };
	}
	else
	{
		Local_160.f_204[iParam0].f_2 = { Local_160.f_204[iParam0] };
	}
	Local_160.f_204[iParam0] = { Var4 };
	Local_160.f_204[iParam0].f_4 = 0;
}

void func_282(int iParam0)
{
	Var0 = { func_186(Local_613.f_62[iParam0]) };
	Local_139.f_17++;
	switch (Local_613.f_62[iParam0].f_1)
	{
		case 0:
			func_220("Pickup_Health", Var0, 1);
			func_249(4, 0);
			break;
		
		case 1:
			func_220("Pickup_Speed", Var0, 1);
			Local_160.f_178.f_2 += 10;
			break;
		
		case 2:
			func_220("Pickup_Collect_Transport", Var0, 1);
			func_276(Local_856[Local_160.f_178], Local_819[Local_160.f_178].f_6);
			break;
		
		case 3:
			func_220("Pickup_Collect_Weapon", Var0, 1);
			Local_819[Local_160.f_178].f_5 = 1;
			break;
		
		case 4:
			func_220("Pickup_Collect_Weapon", Var0, 1);
			Local_819[Local_160.f_178].f_5 = 2;
			break;
		
		case 5:
			func_220("Pickup_Collect_Weapon", Var0, 1);
			Local_819[Local_160.f_178].f_5 = 3;
			break;
		
		case 6:
			func_220("Pickup_Collect_Weapon", Var0, 1);
			Local_819[Local_160.f_178].f_5 = 4;
			break;
		
		case 7:
			func_220("Pickup_Collect_Weapon", Var0, 1);
			Local_819[Local_160.f_178].f_5 = 5;
			break;
	}
	if (!GAMEPLAY::IS_BIT_SET(Local_160.f_417, 2) && Local_819[Local_160.f_178].f_5 != 0)
	{
		GAMEPLAY::SET_BIT(&(Local_160.f_417), 2);
		func_150("SCGW_H_SHOOT", 7500, 0);
	}
}

int func_283(int iParam0)
{
	switch (Local_613.f_62[iParam0].f_1)
	{
		case 0:
			if (Local_819[Local_160.f_178].f_2 == 8)
			{
				return 0;
			}
			break;
		
		case 1:
		case 2:
			return 1;
		
		case 3:
			if (Local_819[Local_160.f_178].f_5 == 1)
			{
				return 0;
			}
			break;
		
		case 4:
			if (Local_819[Local_160.f_178].f_5 == 2)
			{
				return 0;
			}
			break;
		
		case 5:
			if (Local_819[Local_160.f_178].f_5 == 3)
			{
				return 0;
			}
			break;
		
		case 6:
			if (Local_819[Local_160.f_178].f_5 == 4)
			{
				return 0;
			}
			break;
		
		case 7:
			if (Local_819[Local_160.f_178].f_5 == 5)
			{
				return 0;
			}
			break;
	}
	return 1;
}

void func_284(int iParam0)
{
	func_296(iParam0);
	func_292(iParam0);
	func_289(iParam0);
	func_285(iParam0);
}

void func_285(int iParam0)
{
	if (Local_921[iParam0].f_5 == 0)
	{
		return;
	}
	iVar0 = func_287(iParam0);
	bVar2 = false;
	if (iVar0 != -1)
	{
		bVar2 = func_286(iParam0, Local_921[iParam0].f_9.f_4);
	}
	if (bVar2)
	{
		if (NETWORK::GET_NETWORK_TIME() < (Local_160.f_183[iParam0].f_3 + Local_160.f_59[Local_921[iParam0].f_5].f_3))
		{
			return;
		}
		uVar1 = Local_921[iParam0].f_9.f_4;
		Local_921[iParam0].f_9.f_5[Local_160.f_307] = NETWORK::GET_NETWORK_TIME();
		Local_921[iParam0].f_9.f_5[Local_160.f_307].f_3 = uVar1;
		Local_921[iParam0].f_9.f_5[Local_160.f_307].f_4 = Local_921[iParam0].f_5;
		Local_921[iParam0].f_9.f_5[Local_160.f_307].f_1 = { Local_160.f_204[iParam0] };
		Local_921[iParam0].f_9.f_4 = uVar1;
		Local_160.f_183[iParam0].f_3 = NETWORK::GET_NETWORK_TIME();
		Local_160.f_307++;
		if (Local_160.f_307 >= 2)
		{
			Local_160.f_307 = 0;
		}
		CONTROLS::SET_PAD_SHAKE(0, 50, 100);
	}
}

int func_286(int iParam0, int iParam1)
{
	Var0 = { func_186(func_72(12, 8)) };
	Var2 = { func_186(func_72(0, 0)) };
	switch (iParam1)
	{
		case 0:
			if (func_257(Local_160.f_204[iParam0].f_1, (Var2.f_1 - 0.0001f), (Var2.f_1 + 0.0001f)))
			{
				return 0;
			}
			break;
		
		case 1:
			if (func_257(Local_160.f_204[iParam0].f_1, (Var0.f_1 - 0.0001f), (Var0.f_1 + 0.0001f)))
			{
				return 0;
			}
			break;
		
		case 2:
			if (func_257(Local_160.f_204[iParam0], (Var2 - 0.0001f), (Var2 + 0.0001f)))
			{
				return 0;
			}
			break;
		
		case 3:
			if (func_257(Local_160.f_204[iParam0], (Var0 - 0.0001f), (Var0 + 0.0001f)))
			{
				return 0;
			}
			break;
	}
	func_183(Local_921[iParam0].f_9, &iVar4, &iVar5);
	func_183(Local_921[iParam0].f_9.f_1, &iVar6, &iVar7);
	if (Local_921[iParam0].f_9.f_2 + func_182(iParam0)) > NETWORK::GET_NETWORK_TIME()
	{
		if (iVar5 != iVar7)
		{
			if (iParam1 == 2 || iParam1 == 3)
			{
				return 0;
			}
		}
		else if (iVar4 != iVar6)
		{
			if (iParam1 == 0 || iParam1 == 1)
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_287(int iParam0)
{
	if (func_288(iParam0))
	{
		return -1;
	}
	if (Local_921[iParam0].f_26)
	{
		return 8;
	}
	return -1;
}

int func_288(int iParam0)
{
	if (UI::IS_PAUSE_MENU_ACTIVE())
	{
		return 1;
	}
	if (Local_921[iParam0] != 2)
	{
		return 1;
	}
	return 0;
}

void func_289(int iParam0)
{
	iVar0 = func_291(iParam0);
	bVar1 = func_290(iParam0, iVar0);
	if (bVar1)
	{
		switch (iVar0)
		{
			case 4:
				Local_921[iParam0].f_9.f_4 = 0;
				break;
			
			case 5:
				Local_921[iParam0].f_9.f_4 = 1;
				break;
			
			case 6:
				Local_921[iParam0].f_9.f_4 = 2;
				break;
			
			case 7:
				Local_921[iParam0].f_9.f_4 = 3;
				break;
			}
	}
}

int func_290(int iParam0, int iParam1)
{
	func_183(Local_921[iParam0].f_9, &iVar0, &iVar1);
	func_183(Local_921[iParam0].f_9.f_1, &iVar2, &iVar3);
	switch (iParam1)
	{
		case 4:
		case 5:
			if ((iVar0 % 2) != 0)
			{
				return 0;
			}
			break;
		
		case 6:
		case 7:
			if ((iVar1 % 2) != 0)
			{
				return 0;
			}
			break;
	}
	if (Local_921[iParam0].f_9.f_2 + func_182(Local_160.f_178)) > NETWORK::GET_NETWORK_TIME()
	{
		if (iVar1 != iVar3)
		{
			if (iParam1 == 6 || iParam1 == 7)
			{
				return 0;
			}
		}
		else if (iVar0 != iVar2)
		{
			if (iParam1 == 4 || iParam1 == 5)
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_291(int iParam0)
{
	if (func_288(iParam0))
	{
		return -1;
	}
	return Local_921[iParam0].f_28;
}

void func_292(int iParam0)
{
	iVar0 = func_293(iParam0);
	bVar1 = false;
	if (((!((Local_921[iParam0].f_9.f_2 + func_182(Local_160.f_178)) < NETWORK::GET_NETWORK_TIME() && GAMEPLAY::IS_BIT_SET(Local_160.f_142[iParam0], 1)) && NETWORK::GET_NETWORK_TIME() < Local_921[iParam0].f_9.f_2 + 100) && Local_921[iParam0].f_9.f_3 != iVar0) && !GAMEPLAY::IS_BIT_SET(Local_160.f_142[iParam0], 4))
	{
		bVar1 = true;
	}
	if (bVar1)
	{
		func_183(Local_921[iParam0].f_9.f_1, &iVar2, &iVar3);
		func_183(Local_921[iParam0].f_9.f_1, &iVar4, &iVar5);
	}
	else
	{
		func_183(Local_921[iParam0].f_9, &iVar2, &iVar3);
		func_183(Local_921[iParam0].f_9.f_1, &iVar4, &iVar5);
	}
	bVar6 = false;
	iVar7 = 0;
	iVar8 = 0;
	switch (iVar0)
	{
		case 0:
			bVar6 = (iVar3 > 0 && (iVar2 % 2) == 0);
			iVar7 = -1;
			break;
		
		case 1:
			bVar6 = (iVar3 < 8 && (iVar2 % 2) == 0);
			iVar7 = 1;
			break;
		
		case 2:
			bVar6 = (iVar2 > 0 && (iVar3 % 2) == 0);
			iVar8 = -1;
			break;
		
		case 3:
			bVar6 = (iVar2 < 12 && (iVar3 % 2) == 0);
			iVar8 = 1;
			break;
	}
	if (bVar6)
	{
		if (((Local_921[iParam0].f_9.f_2 + func_182(iParam0)) < NETWORK::GET_NETWORK_TIME() && GAMEPLAY::IS_BIT_SET(Local_160.f_142[iParam0], 1)) || bVar1)
		{
			if (bVar1 || !GAMEPLAY::IS_BIT_SET(Local_160.f_142[iParam0], 5))
			{
				GAMEPLAY::SET_BIT(&(Local_160.f_142[iParam0]), 4);
			}
			if (iVar4 != iVar2)
			{
				iVar4 = iVar2;
			}
			if (iVar5 != iVar3)
			{
				iVar5 = iVar3;
			}
			if (iVar8 != 0)
			{
				iVar2 = (iVar2 + iVar8);
			}
			if (iVar7 != 0)
			{
				iVar3 = (iVar3 + iVar7);
			}
			Local_921[iParam0].f_9 = func_72(iVar2, iVar3);
			Local_921[iParam0].f_9.f_1 = func_72(iVar4, iVar5);
			if (Local_160.f_178.f_2 > 0)
			{
				Local_921[iParam0].f_1 = 0.75f;
				Local_160.f_178.f_2 = (Local_160.f_178.f_2 - 1);
			}
			else if (!func_257(Local_921[iParam0].f_1, (1f - 0.0001f), (1f + 0.0001f)))
			{
				Local_921[iParam0].f_1 = 1f;
			}
			Local_921[iParam0].f_9.f_2 = NETWORK::GET_NETWORK_TIME();
			if (iVar8 > 0)
			{
				Local_921[iParam0].f_9.f_4 = 3;
			}
			else if (iVar8 < 0)
			{
				Local_921[iParam0].f_9.f_4 = 2;
			}
			else if (iVar7 < 0)
			{
				Local_921[iParam0].f_9.f_4 = 0;
			}
			else if (iVar7 > 0)
			{
				Local_921[iParam0].f_9.f_4 = 1;
			}
			GAMEPLAY::CLEAR_BIT(&(Local_160.f_142[iParam0]), 1);
			GAMEPLAY::CLEAR_BIT(&(Local_160.f_142[iParam0]), 0);
			Local_921[iParam0].f_9.f_3 = iVar0;
			if (!GAMEPLAY::IS_BIT_SET(Local_160.f_142[iParam0], 5))
			{
				GAMEPLAY::SET_BIT(&(Local_160.f_142[iParam0]), 5);
			}
		}
	}
}

int func_293(int iParam0)
{
	if (func_288(iParam0))
	{
		return -1;
	}
	if (!GAMEPLAY::IS_BIT_SET(Local_160.f_142[iParam0], 5))
	{
		return func_295(Local_921[iParam0].f_6);
	}
	iVar0 = Local_921[iParam0].f_33;
	iVar1 = Local_921[iParam0].f_34;
	func_183(Local_921[iParam0].f_9, &iVar2, &iVar3);
	uVar4 = func_294(iVar2, iVar3, iVar0, iVar1);
	return uVar4;
	return -1;
}

int func_294(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = (iParam2 - iParam0);
	iVar1 = (iParam3 - iParam1);
	if ((((iParam2 < 0 || iParam2 > 13) || iParam3 < 0) || iParam3 > 9) || (iVar0 == 0 && iVar1 == 0))
	{
		return -1;
	}
	if (iVar1 < 0)
	{
		iVar3 = 0;
	}
	else
	{
		iVar3 = 1;
	}
	if (iVar0 < 0)
	{
		iVar2 = 2;
	}
	else
	{
		iVar2 = 3;
	}
	if (GAMEPLAY::ABSI(iVar0) < GAMEPLAY::ABSI(iVar1))
	{
		if ((iParam0 % 2) == 0)
		{
			return iVar3;
		}
		else
		{
			return iVar2;
		}
	}
	else if ((iParam1 % 2) == 0)
	{
		return iVar2;
	}
	else
	{
		return iVar3;
	}
	return -1;
}

int func_295(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		
		case 1:
			return 2;
		
		case 2:
			return 3;
		
		case 3:
			return 2;
		
		default:
	}
	return -1;
}

void func_296(int iParam0)
{
	Local_921[iParam0].f_26 = func_307(iParam0);
	Local_921[iParam0].f_28 = func_306(iParam0);
	if (Local_921[iParam0].f_27)
	{
		if (Local_921[iParam0].f_36 != 3 && func_305(iParam0))
		{
			Local_921[iParam0].f_36 = 3;
		}
		else if (Local_921[iParam0].f_36 != 1 && func_304(iParam0))
		{
			Local_921[iParam0].f_36 = 1;
		}
		else if (Local_921[iParam0].f_36 != 2 && func_303(iParam0))
		{
			Local_921[iParam0].f_36 = 2;
		}
		else if (Local_921[iParam0].f_36 != 0 && Local_921[iParam0].f_27)
		{
			Local_921[iParam0].f_36 = 0;
		}
		switch (Local_921[iParam0].f_36)
		{
			case 0:
				func_300(iParam0);
				break;
			
			case 1:
				func_299(iParam0);
				break;
			
			case 2:
				func_298(iParam0);
				break;
			
			case 3:
				func_297(iParam0);
				break;
		}
		if (Local_921[iParam0].f_33 == -1)
		{
			Local_921[iParam0].f_33 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 6) * 2;
		}
		if (Local_921[iParam0].f_34 == -1)
		{
			Local_921[iParam0].f_34 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 4) * 2;
		}
		Local_921[iParam0].f_27 = 0;
	}
	else if ((Local_921[iParam0].f_9.f_2 + func_182(iParam0)) < NETWORK::GET_NETWORK_TIME() && GAMEPLAY::IS_BIT_SET(Local_160.f_142[iParam0], 1))
	{
		if (Local_921[iParam0].f_9 == func_72(Local_921[iParam0].f_33, Local_921[iParam0].f_34) || (Local_921[iParam0].f_33 == -1 && Local_921[iParam0].f_34 == -1))
		{
			Local_921[iParam0].f_27 = 1;
		}
	}
}

void func_297(int iParam0)
{
	if (Local_921[iParam0].f_35 == -1)
	{
		Local_921[iParam0].f_35 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 4);
	}
	if (Local_921[iParam0].f_35 == iParam0)
	{
		Local_921[iParam0].f_35 = -1;
		return;
	}
	if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(Local_921[iParam0].f_35)) && !Local_921[Local_921[iParam0].f_35].f_25)
	{
		Local_921[iParam0].f_35 = -1;
		return;
	}
	if (Local_819[Local_921[iParam0].f_35].f_2 == 0)
	{
		Local_921[iParam0].f_35 = -1;
		return;
	}
	func_183(Local_856[Local_921[iParam0].f_35], &(Local_921[iParam0].f_33), &(Local_921[iParam0].f_34));
}

void func_298(int iParam0)
{
	func_183(Local_921[iParam0].f_9, &iVar0, &iVar1);
	iVar2 = -1;
	iVar3 = -1;
	iVar4 = -1;
	iVar5 = -1;
	iVar6 = 0;
	iVar6 = 0;
	while (iVar6 <= 6)
	{
		if ((Local_613.f_62[iVar6].f_1 != -1 && Local_613.f_62[iVar6] != -1) && Local_613.f_62[iVar6].f_2 != -2147483647)
		{
			if (Local_613.f_62[iVar6].f_1 == 0)
			{
				func_183(Local_613.f_62[iVar6], &iVar2, &iVar3);
				if ((iVar4 == -1 && iVar5 == -1) || (GAMEPLAY::ABSI((iVar2 - iVar0)) + GAMEPLAY::ABSI((iVar3 - iVar1))) < (GAMEPLAY::ABSI((iVar4 - iVar0)) + GAMEPLAY::ABSI((iVar5 - iVar1))))
				{
					iVar4 = iVar2;
					iVar5 = iVar3;
				}
			}
		}
		iVar6++;
	}
	if (iVar4 == -1)
	{
		Local_921[iParam0].f_33 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 6) * 2;
	}
	if (iVar5 == -1)
	{
		Local_921[iParam0].f_34 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 4) * 2;
	}
}

void func_299(int iParam0)
{
	iVar2 = NETWORK::GET_NETWORK_TIME();
	func_183(Local_921[iParam0].f_9, &iVar0, &iVar1);
	iVar9 = 0;
	while (iVar9 <= 2)
	{
		iVar10 = func_73((Local_613.f_148[iVar9].f_2 == 1 || Local_613.f_148[iVar9].f_2 == 0), 11, 15) * 650;
		if (Local_613.f_148[iVar9].f_3 == -1 || (iVar2 < Local_613.f_148[iVar9] && iVar2 > (Local_613.f_148[iVar9] + iVar10)))
		{
		}
		else
		{
			func_183(Local_613.f_148[iVar9].f_1, &iVar7, &iVar8);
			bVar3 = (bVar3 || iVar7 == iVar0);
			bVar4 = (bVar4 || iVar8 == iVar1);
			bVar5 = (bVar5 || (Local_613.f_148[iVar9].f_2 == 1 && iVar8 == iVar1));
			bVar6 = (bVar6 || (Local_613.f_148[iVar9].f_2 == 2 && iVar7 == iVar0));
		}
		iVar9++;
	}
	if (bVar3)
	{
		if (bVar5)
		{
			if (iVar1 + 2 > 8)
			{
				Local_921[iParam0].f_34 = (iVar1 - 2);
			}
			else
			{
				Local_921[iParam0].f_34 = iVar1 + 2;
			}
		}
		else if ((iVar1 - 2) < 0)
		{
			Local_921[iParam0].f_34 = iVar1 + 2;
		}
		else
		{
			Local_921[iParam0].f_34 = (iVar1 - 2);
		}
	}
	if (bVar4)
	{
		if (bVar6)
		{
			if (iVar0 + 2 > 12)
			{
				Local_921[iParam0].f_33 = (iVar0 - 2);
			}
			else
			{
				Local_921[iParam0].f_33 = iVar0 + 2;
			}
		}
		else if ((iVar0 - 2) < 0)
		{
			Local_921[iParam0].f_33 = iVar0 + 2;
		}
		else
		{
			Local_921[iParam0].f_33 = (iVar0 - 2);
		}
	}
	if (!bVar3 && !bVar4)
	{
		Local_921[iParam0].f_33 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 6) * 2;
		Local_921[iParam0].f_34 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 4) * 2;
	}
}

void func_300(int iParam0)
{
	if (Local_921[iParam0].f_29 == -1 && Local_921[iParam0].f_30 == -1)
	{
		func_302(iParam0);
	}
	StringCopy(&cVar2, "", 64);
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		StringCopy(&cVar2, "", 64);
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			StringIntConCat(&cVar2, Local_613[iVar0][iVar1], 64);
			StringConCat(&cVar2, " ", 64);
			iVar0++;
		}
		iVar1++;
	}
	if ((Local_921[iParam0].f_29 != -1 && Local_921[iParam0].f_30 != -1) && Local_613[(Local_921[iParam0].f_29 % 6)][(Local_921[iParam0].f_30 % 4)] == Local_921[iParam0].f_6)
	{
		Local_921[iParam0].f_31 = 4;
	}
	if (Local_921[iParam0].f_29 != -1 && Local_921[iParam0].f_30 != -1)
	{
		func_301(iParam0);
	}
}

void func_301(int iParam0)
{
	Local_921[iParam0].f_31++;
	Local_921[iParam0].f_31 = (Local_921[iParam0].f_31 % 6);
	if (Local_921[iParam0].f_31 == 0)
	{
		Local_921[iParam0].f_32 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 4);
	}
	else if (Local_921[iParam0].f_31 == 5)
	{
		Local_921[iParam0].f_29 = -1;
		Local_921[iParam0].f_30 = -1;
		Local_921[iParam0].f_33 = Local_921[iParam0].f_29;
		Local_921[iParam0].f_34 = Local_921[iParam0].f_30;
		return;
	}
	switch (((Local_921[iParam0].f_31 + Local_921[iParam0].f_32) % 6))
	{
		case 0:
		case 4:
			Local_921[iParam0].f_33 = (Local_921[iParam0].f_29 * 2 + 1 - 1);
			Local_921[iParam0].f_34 = (Local_921[iParam0].f_30 * 2 + 1 - 1);
			break;
		
		case 1:
			Local_921[iParam0].f_33 = Local_921[iParam0].f_29 * 2 + 1 + 1;
			Local_921[iParam0].f_34 = (Local_921[iParam0].f_30 * 2 + 1 - 1);
			break;
		
		case 2:
			Local_921[iParam0].f_33 = Local_921[iParam0].f_29 * 2 + 1 + 1;
			Local_921[iParam0].f_34 = Local_921[iParam0].f_30 * 2 + 1 + 1;
			break;
		
		case 3:
			Local_921[iParam0].f_33 = (Local_921[iParam0].f_29 * 2 + 1 - 1);
			Local_921[iParam0].f_34 = Local_921[iParam0].f_30 * 2 + 1 + 1;
			break;
		
		case 5:
			break;
	}
}

void func_302(int iParam0)
{
	func_183(Local_921[iParam0].f_9, &iVar0, &iVar1);
	switch (GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 6))
	{
		case 5:
			iVar2 = -1;
			iVar3 = -1;
			iVar4 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 4);
			iVar5 = 0;
			while (iVar5 <= 3)
			{
				if ((iVar0 % 2) == 1 && (iVar1 % 2) == 0)
				{
					iVar2 = iVar0;
					if (((iVar5 + iVar4) % 2) == 0)
					{
						iVar3 = (iVar1 - 1);
					}
					else
					{
						iVar3 = iVar1 + 1;
					}
				}
				else if ((iVar1 % 2) == 1 && (iVar0 % 2) == 0)
				{
					iVar3 = iVar1;
					if (((iVar5 + iVar4) % 2) == 0)
					{
						iVar2 = (iVar0 - 1);
					}
					else
					{
						iVar2 = iVar0 + 1;
					}
				}
				else if (((iVar5 + iVar4) % 4) == 0)
				{
					iVar2 = (iVar0 - 1);
					iVar3 = (iVar1 - 1);
				}
				else if (((iVar5 + iVar4) % 4) == 1)
				{
					iVar2 = iVar0 + 1;
					iVar3 = (iVar1 - 1);
				}
				else if (((iVar5 + iVar4) % 4) == 2)
				{
					iVar2 = (iVar0 - 1);
					iVar3 = iVar1 + 1;
				}
				else
				{
					iVar2 = iVar0 + 1;
					iVar3 = iVar1 + 1;
				}
				if (iVar2 != -1 && iVar3 != -1)
				{
					if (Local_613[((iVar2 / 2) % 6)][((iVar3 / 2) % 4)] != Local_921[iParam0].f_6)
					{
						Local_921[iParam0].f_29 = ((iVar2 / 2) % 6);
						Local_921[iParam0].f_30 = ((iVar3 / 2) % 4);
						return;
					}
				}
				iVar5++;
			}
			break;
		
		case 0:
			iVar7 = 0;
			while (iVar7 <= 3)
			{
				iVar6 = 0;
				while (iVar6 <= 5)
				{
					if (Local_613[((iVar6 + (iVar0 / 2)) % 6)][((iVar7 + (iVar1 / 2)) % 4)] != Local_921[iParam0].f_6)
					{
						Local_921[iParam0].f_29 = ((iVar6 + (iVar0 / 2)) % 6);
						Local_921[iParam0].f_30 = ((iVar7 + (iVar1 / 2)) % 4);
						return;
					}
					iVar6++;
				}
				iVar7++;
			}
			break;
		
		case 1:
			iVar6 = 0;
			while (iVar6 <= 5)
			{
				iVar7 = 0;
				while (iVar7 <= 3)
				{
					if (Local_613[((iVar6 + (iVar0 / 2)) % 6)][((iVar7 + (iVar1 / 2)) % 4)] != Local_921[iParam0].f_6)
					{
						Local_921[iParam0].f_29 = ((iVar6 + (iVar0 / 2)) % 6);
						Local_921[iParam0].f_30 = ((iVar7 + (iVar1 / 2)) % 4);
						return;
					}
					iVar7++;
				}
				iVar6++;
			}
			break;
		
		case 2:
			iVar6 = 5;
			while (iVar6 <= 0)
			{
				iVar7 = 3;
				while (iVar7 <= 0)
				{
					if (Local_613[((iVar6 + (iVar0 / 2)) % 6)][((iVar7 + (iVar1 / 2)) % 4)] != Local_921[iParam0].f_6)
					{
						Local_921[iParam0].f_29 = ((iVar6 + (iVar0 / 2)) % 6);
						Local_921[iParam0].f_30 = ((iVar7 + (iVar1 / 2)) % 4);
						return;
					}
					iVar7++;
				}
				iVar6++;
			}
			break;
		
		case 3:
			iVar7 = 3;
			while (iVar7 <= 0)
			{
				iVar6 = 5;
				while (iVar6 <= 0)
				{
					if (Local_613[((iVar6 + (iVar0 / 2)) % 6)][((iVar7 + (iVar1 / 2)) % 4)] != Local_921[iParam0].f_6)
					{
						Local_921[iParam0].f_29 = ((iVar6 + (iVar0 / 2)) % 6);
						Local_921[iParam0].f_30 = ((iVar7 + (iVar1 / 2)) % 4);
						return;
					}
					iVar6++;
				}
				iVar7++;
			}
			break;
		
		case 4:
			Local_921[iParam0].f_29 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 6);
			Local_921[iParam0].f_30 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 4);
			break;
	}
}

bool func_303(int iParam0)
{
	return Local_921[iParam0].f_2 <= 4;
}

int func_304(int iParam0)
{
	func_183(Local_921[iParam0].f_9, &iVar0, &iVar1);
	iVar4 = 0;
	while (iVar4 <= 2)
	{
		if (Local_613.f_148[iVar4].f_3 == -1)
		{
		}
		else
		{
			func_183(Local_613.f_148[iVar4].f_1, &iVar2, &iVar3);
			if (iVar2 == iVar0 || iVar3 == iVar1)
			{
				return 1;
			}
		}
		iVar4++;
	}
	return 0;
}

var func_305(int iParam0)
{
	return Local_613.f_162;
}

int func_306(int iParam0)
{
	func_183(Local_921[iParam0].f_9, &iVar0, &iVar1);
	iVar4 = 0;
	while (iVar4 <= 3)
	{
		if (iVar4 != iParam0 && (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar4)) || Local_921[iVar4].f_25))
		{
			func_183(Local_856[iVar4], &iVar2, &iVar3);
			if (iVar2 == iVar0)
			{
				if (iVar3 <= iVar1)
				{
					return 4;
				}
				else if (iVar3 >= iVar1)
				{
					return 5;
				}
			}
			else if (iVar3 == iVar1)
			{
				if (iVar2 <= iVar0)
				{
					return 6;
				}
				else if (iVar2 >= iVar0)
				{
					return 7;
				}
			}
		}
		iVar4++;
	}
	return -1;
}

int func_307(int iParam0)
{
	func_183(Local_921[iParam0].f_9, &iVar0, &iVar1);
	iVar4 = 0;
	while (iVar4 <= 3)
	{
		if ((iVar4 != iParam0 && (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar4)) || Local_921[iVar4].f_25)) && (Local_819[iVar4].f_2 > 0 || Local_921[iVar4].f_2 > 0))
		{
			func_183(Local_856[iVar4], &iVar2, &iVar3);
			if (iVar2 == iVar0)
			{
				return ((iVar3 <= iVar1 && Local_921[iParam0].f_9.f_4 == 0) || (iVar3 >= iVar1 && Local_921[iParam0].f_9.f_4 == 1));
			}
			else if (iVar3 == iVar1)
			{
				return ((iVar2 <= iVar0 && Local_921[iParam0].f_9.f_4 == 2) || (iVar2 >= iVar0 && Local_921[iParam0].f_9.f_4 == 3));
			}
		}
		iVar4++;
	}
	return 0;
}

void func_308()
{
	func_316();
	func_313();
	func_309();
}

void func_309()
{
	if (Local_819[Local_160.f_178].f_5 == 0)
	{
		return;
	}
	iVar0 = func_311();
	bVar2 = false;
	if (iVar0 != -1)
	{
		bVar2 = func_310(Local_856[Local_160.f_178].f_4);
	}
	if (bVar2)
	{
		if (NETWORK::GET_NETWORK_TIME() < (Local_160.f_178.f_3 + Local_160.f_59[Local_819[Local_160.f_178].f_5].f_3))
		{
			return;
		}
		uVar1 = Local_856[Local_160.f_178].f_4;
		Local_856[Local_160.f_178].f_5[Local_160.f_307] = NETWORK::GET_NETWORK_TIME();
		Local_856[Local_160.f_178].f_5[Local_160.f_307].f_3 = uVar1;
		Local_856[Local_160.f_178].f_5[Local_160.f_307].f_4 = Local_819[Local_160.f_178].f_5;
		Local_856[Local_160.f_178].f_5[Local_160.f_307].f_1 = { Local_160.f_204[Local_160.f_178] };
		Local_856[Local_160.f_178].f_4 = uVar1;
		Local_160.f_178.f_3 = NETWORK::GET_NETWORK_TIME();
		Local_160.f_307++;
		if (Local_160.f_307 >= 2)
		{
			Local_160.f_307 = 0;
		}
		CONTROLS::SET_PAD_SHAKE(0, 50, 100);
	}
}

int func_310(int iParam0)
{
	Var0 = { func_186(func_72(12, 8)) };
	Var2 = { func_186(func_72(0, 0)) };
	switch (iParam0)
	{
		case 0:
			if (func_257(Local_160.f_204[Local_160.f_178].f_1, (Var2.f_1 - 0.0001f), (Var2.f_1 + 0.0001f)))
			{
				return 0;
			}
			break;
		
		case 1:
			if (func_257(Local_160.f_204[Local_160.f_178].f_1, (Var0.f_1 - 0.0001f), (Var0.f_1 + 0.0001f)))
			{
				return 0;
			}
			break;
		
		case 2:
			if (func_257(Local_160.f_204[Local_160.f_178], (Var2 - 0.0001f), (Var2 + 0.0001f)))
			{
				return 0;
			}
			break;
		
		case 3:
			if (func_257(Local_160.f_204[Local_160.f_178], (Var0 - 0.0001f), (Var0 + 0.0001f)))
			{
				return 0;
			}
			break;
	}
	func_183(Local_856[Local_160.f_178], &iVar4, &iVar5);
	func_183(Local_856[Local_160.f_178].f_1, &iVar6, &iVar7);
	if (Local_856[Local_160.f_178].f_2 + func_182(Local_160.f_178)) > NETWORK::GET_NETWORK_TIME()
	{
		if (iVar5 != iVar7)
		{
			if (iParam0 == 2 || iParam0 == 3)
			{
				return 0;
			}
		}
		else if (iVar4 != iVar6)
		{
			if (iParam0 == 0 || iParam0 == 1)
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_311()
{
	if (func_312())
	{
		return -1;
	}
	iVar0 = 229;
	if (CONTROLS::_IS_INPUT_DISABLED(2))
	{
		iVar0 = 203;
	}
	if (CONTROLS::IS_DISABLED_CONTROL_PRESSED(2, iVar0))
	{
		return 8;
	}
	return -1;
}

int func_312()
{
	if (UI::IS_PAUSE_MENU_ACTIVE())
	{
		return 1;
	}
	if (Local_819[Local_160.f_178] != 2)
	{
		return 1;
	}
	return 0;
}

void func_313()
{
	iVar0 = func_315();
	bVar1 = func_314(Local_160.f_178, iVar0);
	if (bVar1)
	{
		switch (iVar0)
		{
			case 4:
				Local_856[Local_160.f_178].f_4 = 0;
				break;
			
			case 5:
				Local_856[Local_160.f_178].f_4 = 1;
				break;
			
			case 6:
				Local_856[Local_160.f_178].f_4 = 2;
				break;
			
			case 7:
				Local_856[Local_160.f_178].f_4 = 3;
				break;
			}
	}
}

int func_314(int iParam0, int iParam1)
{
	func_183(Local_856[Local_160.f_178], &iVar0, &iVar1);
	func_183(Local_856[Local_160.f_178].f_1, &iVar2, &iVar3);
	switch (iParam1)
	{
		case 4:
		case 5:
			if ((iVar0 % 2) != 0)
			{
				return 0;
			}
			break;
		
		case 6:
		case 7:
			if ((iVar1 % 2) != 0)
			{
				return 0;
			}
			break;
	}
	if (Local_856[Local_160.f_178].f_2 + func_182(iParam0)) > NETWORK::GET_NETWORK_TIME()
	{
		if (iVar1 != iVar3)
		{
			if (iParam1 == 6 || iParam1 == 7)
			{
				return 0;
			}
		}
		else if (iVar0 != iVar2)
		{
			if (iParam1 == 4 || iParam1 == 5)
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_315()
{
	if (func_312())
	{
		return -1;
	}
	iVar0 = 361;
	iVar1 = 361;
	iVar2 = 361;
	iVar3 = 361;
	if (CONTROLS::_IS_INPUT_DISABLED(2))
	{
		iVar0 = 188;
		iVar1 = 187;
		iVar2 = 189;
		iVar3 = 190;
	}
	fVar4 = 0f;
	if (!CONTROLS::_IS_INPUT_DISABLED(2))
	{
		fVar4 = CONTROLS::GET_DISABLED_CONTROL_NORMAL(2, 221);
	}
	if (fVar4 < -0.65f || (iVar0 != 361 && CONTROLS::IS_DISABLED_CONTROL_PRESSED(2, iVar0)))
	{
		return 4;
	}
	if (fVar4 > 0.65f || (iVar1 != 361 && CONTROLS::IS_DISABLED_CONTROL_PRESSED(2, iVar1)))
	{
		return 5;
	}
	fVar5 = CONTROLS::GET_DISABLED_CONTROL_NORMAL(2, 220);
	if (fVar5 < -0.65f || (iVar2 != 361 && CONTROLS::IS_DISABLED_CONTROL_PRESSED(2, iVar2)))
	{
		return 6;
	}
	if (fVar5 > 0.65f || (iVar3 != 361 && CONTROLS::IS_DISABLED_CONTROL_PRESSED(2, iVar3)))
	{
		return 7;
	}
	return -1;
}

void func_316()
{
	iVar0 = func_317();
	bVar1 = false;
	if (((!((Local_856[Local_160.f_178].f_2 + func_182(Local_160.f_178)) < NETWORK::GET_NETWORK_TIME() && GAMEPLAY::IS_BIT_SET(Local_160.f_141, 1)) && NETWORK::GET_NETWORK_TIME() < Local_856[Local_160.f_178].f_2 + 100) && Local_856[Local_160.f_178].f_3 != iVar0) && !GAMEPLAY::IS_BIT_SET(Local_160.f_141, 4))
	{
		bVar1 = true;
	}
	if (bVar1)
	{
		func_183(Local_856[Local_160.f_178].f_1, &iVar2, &iVar3);
		func_183(Local_856[Local_160.f_178].f_1, &iVar4, &iVar5);
	}
	else
	{
		func_183(Local_856[Local_160.f_178], &iVar2, &iVar3);
		func_183(Local_856[Local_160.f_178].f_1, &iVar4, &iVar5);
	}
	bVar6 = false;
	iVar7 = 0;
	iVar8 = 0;
	switch (iVar0)
	{
		case 0:
			bVar6 = (iVar3 > 0 && (iVar2 % 2) == 0);
			iVar7 = -1;
			break;
		
		case 1:
			bVar6 = (iVar3 < 8 && (iVar2 % 2) == 0);
			iVar7 = 1;
			break;
		
		case 2:
			bVar6 = (iVar2 > 0 && (iVar3 % 2) == 0);
			iVar8 = -1;
			break;
		
		case 3:
			bVar6 = (iVar2 < 12 && (iVar3 % 2) == 0);
			iVar8 = 1;
			break;
	}
	if (bVar6)
	{
		if (((Local_856[Local_160.f_178].f_2 + func_182(Local_160.f_178)) < NETWORK::GET_NETWORK_TIME() && GAMEPLAY::IS_BIT_SET(Local_160.f_141, 1)) || bVar1)
		{
			if (bVar1 || !GAMEPLAY::IS_BIT_SET(Local_160.f_141, 5))
			{
				GAMEPLAY::SET_BIT(&(Local_160.f_141), 4);
			}
			if (iVar4 != iVar2)
			{
				iVar4 = iVar2;
			}
			if (iVar5 != iVar3)
			{
				iVar5 = iVar3;
			}
			if (iVar8 != 0)
			{
				iVar2 = (iVar2 + iVar8);
			}
			if (iVar7 != 0)
			{
				iVar3 = (iVar3 + iVar7);
			}
			Local_856[Local_160.f_178] = func_72(iVar2, iVar3);
			Local_856[Local_160.f_178].f_1 = func_72(iVar4, iVar5);
			if (Local_160.f_178.f_2 > 0)
			{
				Local_819[Local_160.f_178].f_1 = 0.75f;
				Local_160.f_178.f_2 = (Local_160.f_178.f_2 - 1);
			}
			else if (!func_257(Local_819[Local_160.f_178].f_1, (1f - 0.0001f), (1f + 0.0001f)))
			{
				Local_819[Local_160.f_178].f_1 = 1f;
			}
			Local_856[Local_160.f_178].f_2 = NETWORK::GET_NETWORK_TIME();
			if (iVar8 > 0)
			{
				Local_856[Local_160.f_178].f_4 = 3;
			}
			else if (iVar8 < 0)
			{
				Local_856[Local_160.f_178].f_4 = 2;
			}
			else if (iVar7 < 0)
			{
				Local_856[Local_160.f_178].f_4 = 0;
			}
			else if (iVar7 > 0)
			{
				Local_856[Local_160.f_178].f_4 = 1;
			}
			GAMEPLAY::CLEAR_BIT(&(Local_160.f_141), 1);
			GAMEPLAY::CLEAR_BIT(&(Local_160.f_141), 0);
			Local_856[Local_160.f_178].f_3 = iVar0;
			if (!GAMEPLAY::IS_BIT_SET(Local_160.f_141, 5))
			{
				GAMEPLAY::SET_BIT(&(Local_160.f_141), 5);
			}
		}
	}
}

int func_317()
{
	if (func_312())
	{
		return -1;
	}
	if (!GAMEPLAY::IS_BIT_SET(Local_160.f_141, 5))
	{
		return func_295(Local_819[Local_160.f_178].f_6);
	}
	iVar0 = 361;
	iVar1 = 361;
	iVar2 = 361;
	iVar3 = 361;
	if (CONTROLS::_IS_INPUT_DISABLED(2))
	{
		iVar0 = 361;
		iVar1 = 361;
		iVar2 = 361;
		iVar3 = 361;
	}
	fVar4 = CONTROLS::GET_DISABLED_CONTROL_NORMAL(2, 219);
	if (fVar4 < -0.65f || (iVar0 != 361 && CONTROLS::IS_DISABLED_CONTROL_PRESSED(2, iVar0)))
	{
		return 0;
	}
	if (fVar4 > 0.65f || (iVar1 != 361 && CONTROLS::IS_DISABLED_CONTROL_PRESSED(2, iVar1)))
	{
		return 1;
	}
	fVar5 = CONTROLS::GET_DISABLED_CONTROL_NORMAL(2, 218);
	if (fVar5 < -0.65f || (iVar2 != 361 && CONTROLS::IS_DISABLED_CONTROL_PRESSED(2, iVar2)))
	{
		return 2;
	}
	if (fVar5 > 0.65f || (iVar3 != 361 && CONTROLS::IS_DISABLED_CONTROL_PRESSED(2, iVar3)))
	{
		return 3;
	}
	return -1;
}

void func_318()
{
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_vw_am_tw_in_menus_scene"))
	{
		AUDIO::STOP_AUDIO_SCENE("dlc_vw_am_tw_in_menus_scene");
	}
	if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_vw_am_tw_in_gameplay_scene"))
	{
		AUDIO::START_AUDIO_SCENE("dlc_vw_am_tw_in_gameplay_scene");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_vw_am_tw_vehicle_drivethrough_scene"))
	{
		AUDIO::STOP_AUDIO_SCENE("dlc_vw_am_tw_vehicle_drivethrough_scene");
	}
	func_168("Ambience", &(Local_160.f_428), func_109(-1f, -1f), 0);
	func_280();
	func_272();
	func_170();
	func_319();
	if (NETWORK::GET_NETWORK_TIME() < Local_613.f_146)
	{
		return;
	}
	if (!GAMEPLAY::IS_BIT_SET(Local_160.f_417, 1))
	{
		GAMEPLAY::SET_BIT(&(Local_160.f_417), 1);
		func_150("SCGW_H_MOVE", 7500, 0);
	}
	func_167(4);
	func_22(func_23(1));
	func_19(7);
}

void func_319()
{
	func_125();
	func_187();
	func_181();
	if ((Local_613.f_146 - NETWORK::GET_NETWORK_TIME()) <= 4500)
	{
		func_213();
	}
	func_197();
	func_174();
	func_105();
	func_104();
}

void func_320()
{
	func_325();
	func_170();
	if (Local_613.f_145 <= 2)
	{
		return;
	}
	func_323();
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (iVar0 != Local_160.f_178 && Local_921[iVar0].f_25)
		{
			func_321(iVar0);
		}
		iVar0++;
	}
	func_167(3);
	func_19(6);
}

void func_321(int iParam0)
{
	func_322(iParam0);
	Local_921[iParam0].f_2 = 8;
	func_229(iParam0, 2);
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		Local_921[iParam0].f_9.f_5[iVar0] = -2147483647;
		Local_921[iParam0].f_9.f_5[iVar0].f_1 = -1f;
		Local_921[iParam0].f_9.f_5[iVar0].f_1.f_1 = -1f;
		Local_921[iParam0].f_9.f_5[iVar0].f_3 = -1;
		Local_921[iParam0].f_9.f_5[iVar0].f_4 = -1;
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Local_160.f_204[iVar1].f_10[iVar0].f_2 = { func_109(-1f, -1f) };
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Local_160.f_380[iVar0][iVar1] = -2147483647;
			Local_160.f_349[iVar0][iVar1] = -1;
			Local_160.f_318[iVar0][iVar1] = -1;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Local_160.f_204[iVar0].f_9 = 8;
		iVar0++;
	}
	Local_160.f_437 = -2147483647;
	Local_160.f_439 = { func_109(0f, 0f) };
	GAMEPLAY::SET_BIT(&(Local_160.f_142[iParam0]), 1);
	GAMEPLAY::SET_BIT(&(Local_160.f_142[iParam0]), 0);
	GAMEPLAY::CLEAR_BIT(&(Local_160.f_142[iParam0]), 2);
	GAMEPLAY::CLEAR_BIT(&(Local_160.f_142[iParam0]), 5);
	func_97(&(Local_160.f_316));
	Local_921[iParam0].f_4 = -2147483647;
	Local_921[iParam0].f_1 = 1f;
	Local_160.f_178.f_2 = 0;
	Local_160.f_308 = 0;
	Local_160.f_307 = 0;
	Local_160.f_429 = 0;
	Local_921[iParam0].f_5 = 0;
}

void func_322(int iParam0)
{
	Local_921[iParam0].f_9 = func_72(Local_160.f_9[Local_921[iParam0].f_6][0], Local_160.f_9[Local_921[iParam0].f_6][1]);
	Local_921[iParam0].f_9.f_1 = Local_921[iParam0].f_9;
	if (Local_160.f_9[Local_921[iParam0].f_6][1] == 0)
	{
		Local_921[iParam0].f_9.f_4 = 1;
	}
	else
	{
		Local_921[iParam0].f_9.f_4 = 0;
	}
}

void func_323()
{
	func_324();
	Local_819[Local_160.f_178].f_2 = 8;
	func_235(2);
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		Local_856[Local_160.f_178].f_5[iVar0] = -2147483647;
		Local_856[Local_160.f_178].f_5[iVar0].f_1 = -1f;
		Local_856[Local_160.f_178].f_5[iVar0].f_1.f_1 = -1f;
		Local_856[Local_160.f_178].f_5[iVar0].f_3 = -1;
		Local_856[Local_160.f_178].f_5[iVar0].f_4 = -1;
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Local_160.f_204[iVar1].f_10[iVar0].f_2 = { func_109(-1f, -1f) };
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Local_160.f_380[iVar0][iVar1] = -2147483647;
			Local_160.f_349[iVar0][iVar1] = -1;
			Local_160.f_318[iVar0][iVar1] = -1;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Local_160.f_204[iVar0].f_9 = 8;
		iVar0++;
	}
	Local_160.f_437 = -2147483647;
	Local_160.f_439 = { func_109(0f, 0f) };
	GAMEPLAY::SET_BIT(&(Local_160.f_141), 1);
	GAMEPLAY::SET_BIT(&(Local_160.f_141), 0);
	GAMEPLAY::CLEAR_BIT(&(Local_160.f_141), 2);
	GAMEPLAY::CLEAR_BIT(&(Local_160.f_141), 5);
	func_97(&(Local_160.f_316));
	Local_819[Local_160.f_178].f_4 = -2147483647;
	Local_819[Local_160.f_178].f_1 = 1f;
	func_120(Local_819[Local_160.f_178].f_7, &uVar2);
	uVar2[3] = Local_819[Local_160.f_178].f_6;
	Local_819[Local_160.f_178].f_7 = func_132(&uVar2);
	Local_160.f_178.f_2 = 0;
	Local_160.f_308 = 0;
	Local_160.f_307 = 0;
	Local_160.f_429 = 0;
	Local_819[Local_160.f_178].f_5 = 0;
}

void func_324()
{
	Local_856[Local_160.f_178] = func_72(Local_160.f_9[Local_819[Local_160.f_178].f_6][0], Local_160.f_9[Local_819[Local_160.f_178].f_6][1]);
	Local_856[Local_160.f_178].f_1 = Local_856[Local_160.f_178];
	if (Local_160.f_9[Local_819[Local_160.f_178].f_6][1] == 0)
	{
		Local_856[Local_160.f_178].f_4 = 1;
	}
	else
	{
		Local_856[Local_160.f_178].f_4 = 0;
	}
}

void func_325()
{
	func_125();
	func_187();
	func_180(Local_160.f_107.f_25, 153);
	func_174();
	func_105();
	func_104();
}

void func_326()
{
	func_325();
	func_170();
	if (Local_613.f_145 <= 1)
	{
		return;
	}
	Local_139.f_16 = Local_160.f_148;
	func_19(5);
}

void func_327()
{
	func_331();
	iVar0 = 199;
	iVar1 = 225;
	iVar2 = 193;
	if (CONTROLS::_IS_INPUT_DISABLED(2))
	{
		iVar0 = 201;
		iVar1 = 214;
	}
	if (NETWORK::GET_NETWORK_TIME() > Local_160.f_441 + 500)
	{
		if (Local_819[Local_160.f_178] != 1)
		{
			if (CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(2, iVar0))
			{
				func_20();
				func_162(1);
				func_235(1);
				func_134("Frontend_Ready");
				Local_160.f_441 = NETWORK::GET_NETWORK_TIME();
			}
			if (Local_160.f_452)
			{
				if (CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(2, iVar2))
				{
					iVar3 = 0;
					while (iVar3 <= 3)
					{
						if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar3)) && !Local_921[iVar3].f_25)
						{
							Local_921[iVar3].f_6 = func_330();
							Local_921[iVar3].f_25 = 1;
							Local_921[iVar3] = 1;
						}
						else
						{
							iVar3++;
						}
					}
				}
			}
		}
		if (Local_819[Local_160.f_178] == 1)
		{
			if (CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(2, iVar1))
			{
				func_20();
				func_235(0);
				func_134("Frontend_Unready");
				Local_160.f_441 = NETWORK::GET_NETWORK_TIME();
			}
		}
	}
	func_329();
	if (Local_613.f_145 >= 2)
	{
		func_19(4);
		func_134("Frontend_Start_Game");
		func_328(1);
	}
}

void func_328(bool bParam0)
{
	if (bParam0)
	{
		StringCopy(&Local_139, "Street Crime: Gang Wars Edition.", 64);
	}
	else
	{
		StringCopy(&Local_139, "Invade and Persuade II.", 64);
	}
	Local_139.f_16 = 0;
	Local_139.f_17 = 0;
	Local_139.f_18 = 0;
	Local_139.f_19 = NETWORK::_0x89023FBBF9200E9F();
	Local_139.f_20 = 0;
}

void func_329()
{
	GAMEPLAY::SET_BIT(&(Local_160.f_417), 0);
	if (Local_819[Local_160.f_178] == 1)
	{
		StringCopy(&cVar0, "SCGW_H_RDY1", 24);
	}
	else
	{
		StringCopy(&cVar0, "SCGW_H_RDY0", 24);
		if (Local_160.f_178.f_1 && Local_160.f_452)
		{
			StringConCat(&cVar0, "_H", 24);
		}
		if (GAMEPLAY::IS_ORBIS_VERSION())
		{
			StringConCat(&cVar0, "_PS4", 24);
		}
	}
	if (CONTROLS::_IS_INPUT_DISABLED(2))
	{
		StringConCat(&cVar0, "_PC", 24);
	}
	if (func_129(&cVar0))
	{
		return;
	}
	func_20();
	func_127(&cVar0);
}

int func_330()
{
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		bVar2 = true;
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			if (Local_819[iVar0].f_6 == iVar1 && NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
			{
				bVar2 = false;
			}
			if (Local_921[iVar0].f_6 == iVar1)
			{
				bVar2 = false;
			}
			iVar0++;
		}
		if (bVar2)
		{
			return iVar1;
		}
		iVar1++;
	}
	return -1;
}

void func_331()
{
	func_125();
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		func_140(iVar0, 0);
		if (Local_160.f_149[iVar0] != -1 && Local_819[Local_160.f_149[iVar0]] == 1)
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 != Local_160.f_148)
	{
		if (Local_819[Local_160.f_178] == 1)
		{
			StringCopy(&cVar2, "SCGW_WFP", 16);
		}
		else
		{
			StringCopy(&cVar2, "SCGW_PS", 16);
		}
		iVar6 = SYSTEM::ROUND((SYSTEM::SIN((SYSTEM::TO_FLOAT(GAMEPLAY::GET_GAME_TIMER()) * 0.5058f)) * 255f));
		if (iVar6 > 51)
		{
			iVar6 = 255;
		}
		else
		{
			iVar6 = 0;
		}
		UI::SET_TEXT_SCALE(0.65f, 0.65f);
		UI::SET_TEXT_COLOUR(255, 255, 255, iVar6);
		UI::SET_TEXT_DROP_SHADOW();
		UI::SET_TEXT_CENTRE(1);
		UI::SET_TEXT_FONT(7);
		UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&cVar2);
		UI::END_TEXT_COMMAND_DISPLAY_TEXT(func_123(0.5f), 0.885f, 0);
	}
	func_105();
	func_104();
}

void func_332()
{
	if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_vw_am_tw_in_menus_scene"))
	{
		AUDIO::START_AUDIO_SCENE("dlc_vw_am_tw_in_menus_scene");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_vw_am_tw_in_gameplay_scene"))
	{
		AUDIO::STOP_AUDIO_SCENE("dlc_vw_am_tw_in_gameplay_scene");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_vw_am_tw_vehicle_drivethrough_scene"))
	{
		AUDIO::STOP_AUDIO_SCENE("dlc_vw_am_tw_vehicle_drivethrough_scene");
	}
	func_125();
	unk_0x7118E83EEB9F7238(Local_160.f_427, 0.5f, 0.5f, (1f * fLocal_136), 1f, 0f, 255, 255, 255, 255);
	if (unk_0x8E17DDD6B9D5BF29(Local_160.f_427) >= 30f && !GAMEPLAY::IS_BIT_SET(Local_160.f_141, 3))
	{
		GAMEPLAY::SET_BIT(&(Local_160.f_141), 3);
		func_22(func_23(0));
	}
	if (unk_0x8E17DDD6B9D5BF29(Local_160.f_427) >= 99f)
	{
		unk_0x63606A61DE68898A(Local_160.f_427);
		unk_0x04D950EEFA4EED8C(Local_160.f_427);
		func_19(3);
		Local_160.f_154[Local_819[Local_160.f_178].f_6] = NETWORK::GET_NETWORK_TIME();
		func_167(2);
	}
	func_105();
	func_104();
}

void func_333()
{
	if (!func_334())
	{
		return;
	}
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPArcadeCabinetGrid", 0);
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPArcadeCabinetGrid"))
	{
		return;
	}
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPArcadeCabinetGridPlayerYellow", 0);
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPArcadeCabinetGridPlayerYellow"))
	{
		return;
	}
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPArcadeCabinetGridPlayerPurple", 0);
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPArcadeCabinetGridPlayerPurple"))
	{
		return;
	}
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPArcadeCabinetGridPlayerGreen", 0);
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPArcadeCabinetGridPlayerGreen"))
	{
		return;
	}
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPArcadeCabinetGridPlayerBlue", 0);
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPArcadeCabinetGridPlayerBlue"))
	{
		return;
	}
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPArcadeCabinetGridTiles", 0);
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPArcadeCabinetGridTiles"))
	{
		return;
	}
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPArcadeCabinetGridHUD", 0);
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPArcadeCabinetGridHUD"))
	{
		return;
	}
	UI::REQUEST_ADDITIONAL_TEXT("SCGW", 3);
	if (!UI::HAS_THIS_ADDITIONAL_TEXT_LOADED("SCGW", 3))
	{
		return;
	}
	if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_VINEWOOD/DLC_VW_AM_TW", 0, -1))
	{
		return;
	}
	func_19(2);
	unk_0x70D2CC8A542A973C(Local_160.f_427);
	unk_0x6805D58CAA427B72(Local_160.f_427, 1);
	func_134("Frontend_Degenatron_Screen");
}

bool func_334()
{
	return ((((((func_335(0) && func_335(6)) && func_335(1)) && func_335(3)) && func_335(4)) && func_335(5)) && func_335(7));
}

int func_335(int iParam0)
{
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(func_110(iParam0), 0);
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(func_110(iParam0)))
	{
		return 0;
	}
	return 1;
}

void func_336()
{
	if (Local_613.f_145 > 1)
	{
		if (func_354(PLAYER::PLAYER_ID()))
		{
			Local_160.f_443.f_4 = 0;
			Local_160.f_443.f_3 = 0;
			func_353(&(Local_160.f_443), 11);
		}
		func_19(11);
		return;
	}
	func_344();
	func_343(0);
	func_342();
	func_341();
	func_340();
	func_339();
	func_338();
	func_337();
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Local_160.f_380[iVar0][iVar1] = -2147483647;
			Local_160.f_349[iVar0][iVar1] = -1;
			Local_160.f_318[iVar0][iVar1] = -1;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Local_160.f_154[iVar0] = -2147483647;
		iVar0++;
	}
	Local_160.f_427 = unk_0x338D9F609FD632DB("DegenSting_StreetCrime_1920x1080_auto");
	func_19(1);
}

void func_337()
{
	Local_160.f_59[0] = "";
	Local_160.f_59[0].f_2 = 0;
	Local_160.f_59[0].f_4 = 0;
	Local_160.f_59[0].f_3 = 0;
	Local_160.f_59[0].f_1 = 0;
	Local_160.f_59[1] = "gun_";
	Local_160.f_59[1].f_2 = 2;
	Local_160.f_59[1].f_4 = 2;
	Local_160.f_59[1].f_3 = 700;
	Local_160.f_59[1].f_1 = 300;
	Local_160.f_59[2] = "uzi_";
	Local_160.f_59[2].f_2 = 1;
	Local_160.f_59[2].f_4 = 1;
	Local_160.f_59[2].f_3 = 325;
	Local_160.f_59[2].f_1 = 300;
	Local_160.f_59[3] = "rifle_";
	Local_160.f_59[3].f_2 = 3;
	Local_160.f_59[3].f_4 = 2;
	Local_160.f_59[3].f_3 = 650;
	Local_160.f_59[3].f_1 = 200;
	Local_160.f_59[4] = "rocket_";
	Local_160.f_59[4].f_2 = 5;
	Local_160.f_59[4].f_4 = 8;
	Local_160.f_59[4].f_3 = 2000;
	Local_160.f_59[4].f_1 = 525;
	Local_160.f_59[5] = "shotgun_";
	Local_160.f_59[5].f_2 = 2;
	Local_160.f_59[5].f_4 = 4;
	Local_160.f_59[5].f_3 = 1000;
	Local_160.f_59[5].f_1 = 300;
}

void func_338()
{
	Local_160.f_90[0] = "heart_anim_";
	Local_160.f_90[0].f_1 = 10;
	Local_160.f_90[1] = "speed_anim_";
	Local_160.f_90[1].f_1 = 10;
	Local_160.f_90[2] = "phone_anim_";
	Local_160.f_90[2].f_1 = 10;
	Local_160.f_90[3] = "icon_pistol";
	Local_160.f_90[3].f_1 = 0;
	Local_160.f_90[4] = "icon_uzi";
	Local_160.f_90[4].f_1 = 0;
	Local_160.f_90[5] = "icon_rifle";
	Local_160.f_90[5].f_1 = 0;
	Local_160.f_90[6] = "icon_rocket_launcher";
	Local_160.f_90[6].f_1 = 0;
	Local_160.f_90[7] = "icon_shotgun";
	Local_160.f_90[7].f_1 = 0;
}

void func_339()
{
	Local_160.f_22[0] = "ice_cream_van_";
	Local_160.f_22[0].f_1 = 1;
	Local_160.f_22[0].f_2 = 0.033333f;
	Local_160.f_22[0].f_2.f_1 = 0.02963f;
	Local_160.f_22[1] = "ambulance_";
	Local_160.f_22[1].f_1 = 2;
	Local_160.f_22[1].f_2 = 0.035417f;
	Local_160.f_22[1].f_2.f_1 = 0.02963f;
	Local_160.f_22[2] = "police_";
	Local_160.f_22[2].f_1 = 2;
	Local_160.f_22[2].f_2 = 0.033333f;
	Local_160.f_22[2].f_2.f_1 = 0.025926f;
	Local_160.f_22[3] = "fire_truck_";
	Local_160.f_22[3].f_1 = 2;
	Local_160.f_22[3].f_2 = 0.045833f;
	Local_160.f_22[3].f_2.f_1 = 0.02963f;
	Local_160.f_22[4] = "tank_";
	Local_160.f_22[4].f_1 = 1;
	Local_160.f_22[4].f_2 = 0.041667f;
	Local_160.f_22[4].f_2.f_1 = 0.025926f;
	Local_160.f_22[5] = "gang_car_green";
	Local_160.f_22[5].f_1 = 1;
	Local_160.f_22[5].f_2 = 0.033333f;
	Local_160.f_22[5].f_2.f_1 = 0.059259f;
	Local_160.f_22[6] = "gang_car_purple";
	Local_160.f_22[6].f_1 = 1;
	Local_160.f_22[6].f_2 = 0.033333f;
	Local_160.f_22[6].f_2.f_1 = 0.059259f;
	Local_160.f_22[7] = "gang_car_yellow";
	Local_160.f_22[7].f_1 = 1;
	Local_160.f_22[7].f_2 = 0.033333f;
	Local_160.f_22[7].f_2.f_1 = 0.059259f;
	Local_160.f_22[8] = "gang_car_blue";
	Local_160.f_22[8].f_1 = 1;
	Local_160.f_22[8].f_2 = 0.033333f;
	Local_160.f_22[8].f_2.f_1 = 0.059259f;
}

void func_340()
{
	Local_160.f_422[0] = "green";
	Local_160.f_422[1] = "purple";
	Local_160.f_422[2] = "yellow";
	Local_160.f_422[3] = "blue";
}

void func_341()
{
	func_212(&(Local_160.f_107[0]), 78, 187, 30, 255);
	func_212(&(Local_160.f_107[1]), 171, 0, 255, 255);
	func_212(&(Local_160.f_107[2]), 255, 228, 0, 255);
	func_212(&(Local_160.f_107[3]), 35, 92, 255, 255);
	func_212(&(Local_160.f_107.f_29), 221, 21, 10, 255);
	func_212(&(Local_160.f_107.f_17), 255, 255, 255, 255);
	func_212(&(Local_160.f_107.f_21), 55, 55, 55, 255);
	func_212(&(Local_160.f_107.f_25), 0, 0, 0, 255);
}

void func_342()
{
	Local_160[0] = { func_109(0.170833f, (0.909259f - 0.019444f)) };
	Local_160[1] = { func_109(0.170833f, (0.109259f + 0.019444f)) };
	Local_160[2] = { func_109(0.829167f, (0.109259f + 0.019444f)) };
	Local_160[3] = { func_109(0.829167f, (0.909259f - 0.019444f)) };
	Local_160.f_9[0][0] = 1;
	Local_160.f_9[0][1] = 2;
	Local_160.f_9[1][0] = 11;
	Local_160.f_9[1][1] = 2;
	Local_160.f_9[2][0] = 1;
	Local_160.f_9[2][1] = 6;
	Local_160.f_9[3][0] = 11;
	Local_160.f_9[3][1] = 6;
}

void func_343(int iParam0)
{
	Local_1070.f_137 = iParam0;
	func_212(&(Local_1070[0].f_9), 255, 255, 255, 255);
	Local_1070[1].f_6 = 1000;
	Local_1070[1].f_7 = 10000;
	Local_1070[2].f_1 = 1;
	Local_1070[2].f_8 = 40;
	func_212(&(Local_1070[2].f_9), 0, 0, 0, 0);
	func_212(&(Local_1070[3].f_9), 255, 255, 255, 127);
	func_212(&(Local_1070[4].f_9), 255, 255, 255, 127);
	func_212(&(Local_1070[5].f_9), 255, 255, 255, 127);
	func_212(&(Local_1070[7].f_9), 255, 255, 255, 255);
	switch (Local_1070.f_137)
	{
		case 2:
			func_212(&(Local_1070[6].f_9), 255, 255, 255, 30);
			func_212(&(Local_1070[1].f_9), 255, 255, 255, 20);
			func_212(&(Local_1070[2].f_13), 0, 0, 0, 30);
			func_212(&(Local_1070[4].f_9), 255, 255, 255, 127);
			Local_1070[0] = 1;
			Local_1070[6] = 1;
			Local_1070[1] = 1;
			Local_1070[2] = 1;
			Local_1070[3] = 1;
			break;
		
		case 3:
			func_212(&(Local_1070[6].f_9), 255, 255, 255, 30);
			func_212(&(Local_1070[1].f_9), 255, 255, 255, 20);
			func_212(&(Local_1070[2].f_13), 0, 0, 0, 30);
			func_212(&(Local_1070[4].f_9), 255, 255, 255, 255);
			Local_1070[0] = 1;
			Local_1070[6] = 1;
			Local_1070[1] = 1;
			Local_1070[2] = 1;
			Local_1070[4] = 1;
			break;
		
		case 4:
			func_212(&(Local_1070[6].f_9), 255, 255, 255, 30);
			func_212(&(Local_1070[1].f_9), 255, 255, 255, 20);
			func_212(&(Local_1070[2].f_13), 0, 0, 0, 30);
			func_212(&(Local_1070[5].f_9), 255, 255, 255, 184);
			Local_1070[0] = 1;
			Local_1070[6] = 1;
			Local_1070[1] = 1;
			Local_1070[2] = 1;
			Local_1070[5] = 1;
			break;
		
		case 1:
			func_212(&(Local_1070[6].f_9), 255, 255, 255, 30);
			func_212(&(Local_1070[1].f_9), 255, 255, 255, 20);
			func_212(&(Local_1070[2].f_13), 0, 0, 0, 10);
			Local_1070[0] = 1;
			Local_1070[6] = 1;
			Local_1070[1] = 1;
			Local_1070[2] = 1;
			Local_1070[3] = 1;
			break;
		
		case 0:
			func_212(&(Local_1070[6].f_9), 255, 255, 255, 30);
			func_212(&(Local_1070[1].f_9), 255, 255, 255, 20);
			func_212(&(Local_1070[2].f_13), 0, 0, 0, 10);
			func_212(&(Local_1070[5].f_9), 255, 255, 255, 255);
			Local_1070[0] = 1;
			Local_1070[6] = 1;
			Local_1070[1] = 1;
			Local_1070[2] = 1;
			Local_1070[5] = 1;
			break;
		
		case 6:
			func_212(&(Local_1070[1].f_9), 255, 255, 255, 10);
			func_212(&(Local_1070[2].f_13), 0, 0, 0, 8);
			func_212(&(Local_1070[7].f_9), 255, 255, 255, 100);
			Local_1070[0] = 1;
			Local_1070[1] = 1;
			Local_1070[2] = 1;
			Local_1070[7] = 1;
			break;
		
		case 7:
			func_212(&(Local_1070[2].f_13), 0, 0, 0, 8);
			Local_1070[2] = 1;
			Local_1070[0] = 1;
			func_212(&(Local_1070[3].f_9), 255, 255, 255, 180);
			Local_1070[3] = 1;
			func_212(&(Local_1070[6].f_9), 255, 255, 255, 30);
			Local_1070[6] = 1;
			break;
		
		case 5:
			func_212(&(Local_1070[6].f_9), 255, 255, 255, 30);
			func_212(&(Local_1070[1].f_9), 255, 255, 255, 20);
			func_212(&(Local_1070[2].f_13), 0, 0, 0, 10);
			Local_1070[0] = 1;
			Local_1070[6] = 1;
			Local_1070[1] = 1;
			Local_1070[2] = 1;
			Local_1070[3] = 1;
			break;
		
		case 8:
			Local_1070[1] = 0;
			Local_1070[2] = 0;
			Local_1070[0] = 1;
			func_212(&(Local_1070[0].f_9), 0, 0, 255, 90);
			Local_1070[6] = 1;
			func_212(&(Local_1070[6].f_9), 255, 0, 0, 15);
			Local_1070[7] = 1;
			func_212(&(Local_1070[7].f_9), 255, 255, 255, 115);
			break;
		
		case 9:
			Local_1070[1] = 0;
			Local_1070[2] = 0;
			Local_1070[0] = 1;
			func_212(&(Local_1070[0].f_9), 0, 0, 255, 90);
			Local_1070[6] = 1;
			func_212(&(Local_1070[6].f_9), 255, 0, 0, 15);
			Local_1070[7] = 1;
			func_212(&(Local_1070[7].f_9), 255, 255, 255, 115);
			break;
		
		case 10:
			Local_1070[1] = 0;
			Local_1070[2] = 0;
			Local_1070[0] = 1;
			func_212(&(Local_1070[0].f_9), 0, 0, 255, 90);
			Local_1070[6] = 1;
			func_212(&(Local_1070[6].f_9), 255, 0, 0, 15);
			Local_1070[7] = 1;
			func_212(&(Local_1070[7].f_9), 255, 255, 255, 115);
			break;
		
		case 11:
			func_212(&(Local_1070[6].f_9), 255, 255, 255, 15);
			func_212(&(Local_1070[1].f_9), 255, 255, 255, 10);
			func_212(&(Local_1070[2].f_13), 0, 0, 0, 5);
			Local_1070[0] = 1;
			Local_1070[6] = 1;
			Local_1070[1] = 1;
			Local_1070[3] = 1;
			break;
	}
}

void func_344()
{
	Global_1590535[PLAYER::PLAYER_ID()].f_750 = 1;
	Global_4456448.f_227352 = 1;
	Global_1370267 = 1;
	func_346();
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_26(PLAYER::PLAYER_ID(), 0, 0, 0);
		func_345();
	}
	else
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
	}
	func_42(1, 0, 1, 0);
	func_25(0, 1, -1);
	func_25(1, 1, -1);
	func_25(2, 1, -1);
	func_25(3, 1, -1);
	func_25(4, 1, -1);
	func_25(6, 1, -1);
	func_25(7, 1, -1);
	func_25(8, 1, -1);
	func_25(9, 1, -1);
	func_25(10, 1, -1);
	func_25(11, 1, -1);
	func_25(12, 1, -1);
	func_25(13, 1, -1);
	func_25(14, 1, -1);
	func_25(15, 1, -1);
	func_25(16, 1, -1);
}

void func_345()
{
	Global_2439138.f_1156.f_10 = 1;
}

void func_346()
{
	if (func_352() || func_351())
	{
		func_350();
		func_347();
	}
}

void func_347()
{
	if ((!func_349() && !func_348()) && Global_2451425)
	{
		Global_4456448.f_194990 = 0;
	}
}

bool func_348()
{
	return Global_2450632.f_591;
}

bool func_349()
{
	return Global_1590535[PLAYER::PLAYER_ID()].f_196 != 0;
}

void func_350()
{
	Global_2450632.f_656 = 1;
}

var func_351()
{
	return Global_2450632.f_635;
}

bool func_352()
{
	return GAMEPLAY::IS_BIT_SET(Global_2450632.f_2, 11);
}

void func_353(var uParam0, int iParam1)
{
	Var0.f_5 = 1073741824;
	Var0.f_6 = -1073741824;
	Var0 = -734905987;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam1;
	Var0.f_3 = uParam0->f_3;
	Var0.f_4 = uParam0->f_4;
	Var0.f_5 = uParam0->f_6;
	Var0.f_6 = uParam0->f_7;
	Var0.f_7 = uParam0->f_8;
	bVar8 = false;
	if (iParam1 == 11)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_2425662[PLAYER::PLAYER_ID()].f_416, 1))
		{
			GAMEPLAY::CLEAR_BIT(&(Global_2425662[PLAYER::PLAYER_ID()].f_416), 1);
			bVar8 = true;
		}
	}
	uParam0->f_5 = 0;
	if (!func_98(&(uParam0->f_1)))
	{
		func_95(&(uParam0->f_1), 0, 0);
	}
	bVar9 = true;
	if (*uParam0 == iParam1 && !bVar8)
	{
		if (func_98(&(uParam0->f_1)) && !func_94(&(uParam0->f_1), 1000, 0))
		{
			bVar9 = false;
		}
		else
		{
			func_97(&(uParam0->f_1));
		}
	}
	else
	{
		*uParam0 = iParam1;
		func_97(&(uParam0->f_1));
	}
	if (bVar9)
	{
		iVar10 = func_56(PLAYER::PLAYER_ID());
		if (iVar10 != -1)
		{
			SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 8, iVar10);
			uParam0->f_5 = 1;
		}
	}
}

int func_354(int iParam0)
{
	if (iParam0 != func_18())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_61(Global_2425662[iParam0].f_310.f_5) == 17;
			}
		}
	}
	return 0;
}

void func_355()
{
	if (Global_1661996.f_1 != 0)
	{
		func_162(0);
	}
	Local_160.f_411 = (Local_160.f_411 + SYSTEM::ROUND((GAMEPLAY::GET_FRAME_TIME() * 1000f)));
	Local_160.f_412 = SYSTEM::FLOOR((IntToFloat(Local_160.f_411) / 66f));
	Local_160.f_411 = (Local_160.f_411 - SYSTEM::ROUND((66f * IntToFloat(Local_160.f_412))));
	Local_160.f_413 = (Local_160.f_413 + SYSTEM::ROUND((GAMEPLAY::GET_FRAME_TIME() * 1000f)));
	Local_160.f_414 = SYSTEM::FLOOR((IntToFloat(Local_160.f_413) / (66f * 3f)));
	Local_160.f_413 = (Local_160.f_413 - SYSTEM::ROUND(((66f * 3f) * IntToFloat(Local_160.f_414))));
	Local_160.f_311 = (Local_160.f_311 + Local_160.f_412);
	Local_160.f_416 = (Local_160.f_416 + Local_160.f_414);
	if (Local_160.f_416 >= 3)
	{
		Local_160.f_416 = 0;
	}
	func_394();
	func_393();
	func_392();
	if (Local_160.f_140 >= 11)
	{
		return;
	}
	if (!func_39())
	{
		func_19(11);
		return;
	}
	if (func_382())
	{
		if (func_354(PLAYER::PLAYER_ID()))
		{
			Local_160.f_443.f_4 = 0;
			Local_160.f_443.f_3 = 0;
			func_353(&(Local_160.f_443), 11);
		}
		func_19(11);
		return;
	}
	if ((Local_160.f_178.f_1 && !Local_613.f_164) && (Local_160.f_435 == -2147483647 || (NETWORK::GET_NETWORK_TIME() - Local_160.f_435) > 5000))
	{
		func_381(func_57(PLAYER::PLAYER_ID()), 0);
		Local_160.f_435 = NETWORK::GET_NETWORK_TIME();
	}
	func_372();
	GAMEPLAY::CLEAR_BIT(&(Local_160.f_417), 0);
	bVar0 = Local_160.f_140 >= 2;
	func_356(bVar0);
	Local_160.f_452 = 1;
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		if (Local_160.f_178 != iVar1 && NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
			Local_160.f_452 = 0;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		if (!Local_160.f_452)
		{
			Local_921[iVar1].f_25 = 0;
			func_16(0);
		}
		if (Local_921[iVar1].f_25)
		{
			func_16(1);
		}
		iVar1++;
	}
}

void func_356(bool bParam0)
{
	func_369();
	CONTROLS::_DISABLE_INPUT_GROUP(0);
	CONTROLS::_DISABLE_INPUT_GROUP(2);
	if (GAMEPLAY::IS_PC_VERSION())
	{
		CONTROLS::DISABLE_CONTROL_ACTION(2, 200, 1);
	}
	CONTROLS::DISABLE_CONTROL_ACTION(2, 199, 1);
	GRAPHICS::_0xC6372ECD45D73BCD(0);
	func_368(1);
	func_367(4, -1);
	UI::HIDE_SCRIPTED_HUD_COMPONENT_THIS_FRAME(19);
	func_366();
	func_365();
	UI::_0x25F87B30C382FCA7();
	if (bParam0)
	{
		func_358(0);
		if (!UI::IS_PAUSE_MENU_ACTIVE())
		{
			UI::HIDE_HUD_AND_RADAR_THIS_FRAME();
			GRAPHICS::_SET_2D_LAYER(1);
		}
	}
	func_357();
	UNK1::_0xEB2D525B57F42B40();
}

void func_357()
{
	Global_22211.f_134 = 1;
}

void func_358(int iParam0)
{
	if (func_364())
	{
		return;
	}
	if (!Global_19486.f_1 == 1)
	{
		if (func_363(0))
		{
			func_359(iParam0);
		}
		GAMEPLAY::SET_BIT(&Global_7357, 2);
	}
}

void func_359(int iParam0)
{
	if (func_364())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_362())
		{
			func_361(1, 1);
		}
		else
		{
			func_361(0, 0);
		}
	}
	if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
	{
		GAMEPLAY::SET_BIT(&Global_7357, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
	}
	Global_20805 = 5;
	if (iParam0 == 1)
	{
		GAMEPLAY::SET_BIT(&Global_7356, 30);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&Global_7356, 30);
	}
	if (!func_360())
	{
		Global_19486.f_1 = 3;
	}
}

int func_360()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_361(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_363(0))
		{
			Global_19664 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_19423);
			}
			Global_19414 = { Global_19432[Global_19431] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_19414);
		}
	}
	else if (Global_19664 == 1)
	{
		Global_19664 = 0;
		Global_19414 = { Global_19439[Global_19431] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_19423);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_19414);
		}
	}
}

bool func_362()
{
	return GAMEPLAY::IS_BIT_SET(Global_1687687, 5);
}

int func_363(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_19486.f_1 > 3)
		{
			if (GAMEPLAY::IS_BIT_SET(Global_7356, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-754107665) > 0)
	{
		return 1;
	}
	if (Global_19486.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_364()
{
	return GAMEPLAY::IS_BIT_SET(Global_1687687, 19);
}

void func_365()
{
	Global_22211.f_6 = 1;
}

void func_366()
{
	Global_1312575 = 1;
	StringCopy(&(Global_1312575.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1312575.f_9 = GAMEPLAY::GET_HASH_KEY(&(Global_1312575.f_1));
}

void func_367(int iParam0, int iParam1)
{
	GAMEPLAY::SET_BIT(&(Global_1377170.f_1047), iParam0);
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				Global_1377170.f_170[iParam1] = 1;
			}
			break;
	}
}

void func_368(int iParam0)
{
	Global_1378678.f_1121 = iParam0;
}

void func_369()
{
	fLocal_135 = func_371();
	fLocal_136 = func_370();
}

float func_370()
{
	return (1.778f / fLocal_135);
}

float func_371()
{
	GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&uLocal_137, &iLocal_138);
	fLocal_135 = GRAPHICS::_GET_ASPECT_RATIO(0);
	if (GAMEPLAY::IS_PC_VERSION())
	{
		if (fLocal_135 >= 4f)
		{
			fLocal_135 = (fLocal_135 / 3f);
		}
	}
	return fLocal_135;
}

void func_372()
{
	Var18.f_3 = 10;
	Var18.f_14 = 10;
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		if (SCRIPT::GET_EVENT_AT_INDEX(1, iVar0) != 174)
		{
		}
		else if (SCRIPT::GET_EVENT_DATA(1, iVar0, &Var1, 3))
		{
			if (Var1.x == 245344479)
			{
				func_380(Var1.z);
			}
			else if (SCRIPT::GET_EVENT_DATA(1, iVar0, &Var4, 5))
			{
				if (Var4 == 243134040)
				{
					func_378(Var4.f_2, Var4.f_3, Var4.f_4);
				}
				else if (SCRIPT::GET_EVENT_DATA(1, iVar0, &Var9, 4))
				{
					if (Var9 == 1731475734)
					{
						func_377(Var9.f_3, Var9.f_2);
					}
					else if (SCRIPT::GET_EVENT_DATA(1, iVar0, &Var13, 5))
					{
						if (Var9 == -971390740)
						{
							func_376(Var13.f_2, Var13.f_3, Var13.f_4);
						}
						else if (SCRIPT::GET_EVENT_DATA(1, iVar0, &Var18, 25))
						{
							if (Var18 == 1452778049)
							{
								if (Local_613.f_164)
								{
								}
								else if (Var18.f_2 != 0)
								{
								}
								else
								{
									func_374(&(Var18.f_3), &(Var18.f_14));
									Jump @301; //curOff = 264
									if (SCRIPT::GET_EVENT_DATA(1, iVar0, &Var43, 2))
									{
										if (Var43 == 750620373)
										{
											func_373(Var43.f_1);
										}
									}
								}
								iVar0++;
							}

void func_373(var uParam0)
{
	iVar0 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(uParam0);
	iVar1 = func_131(iVar0);
	if (iVar1 < 0 || iVar1 >= 10)
	{
		return;
	}
	Local_613.f_165[iVar1] = Local_819[iVar0].f_7;
	func_55(func_57(PLAYER::PLAYER_ID()), 0, iVar1, Local_613.f_165[iVar1], Local_613.f_165[iVar1].f_1, 0);
}

void func_374(var uParam0, var uParam1)
{
	if (!Local_160.f_178.f_1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if ((*uParam1)[iVar0] <= 0)
		{
			Local_613.f_165[iVar0].f_1 = (50 - iVar0 * 2);
			Local_613.f_165[iVar0] = func_375(iVar0);
			func_55(func_57(PLAYER::PLAYER_ID()), 0, iVar0, Local_613.f_165[iVar0], Local_613.f_165[iVar0].f_1, 0);
		}
		else
		{
			Local_613.f_165[iVar0].f_1 = (*uParam1)[iVar0];
			Local_613.f_165[iVar0] = (*uParam0)[iVar0];
		}
		iVar0++;
	}
	Local_613.f_164 = 1;
}

int func_375(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 69644;
		
		case 1:
			return 356361;
		
		case 2:
			return 533761;
		
		case 3:
			return 861443;
		
		case 4:
			return 21638;
		
		case 5:
			return 336649;
		
		case 6:
			return 586639;
		
		case 7:
			return 795403;
		
		case 8:
			return 38023;
		
		case 9:
			return 341123;
		
		default:
	}
	return 0;
}

void func_376(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (bParam2)
		{
			func_163("Hit_By_Car", iParam0, &(Local_160.f_204[iParam0].f_6));
		}
		else
		{
			func_163("Death", iParam0, &(Local_160.f_204[iParam0].f_6));
		}
	}
	else
	{
		func_163("Pain", iParam0, &(Local_160.f_204[iParam0].f_6));
	}
}

void func_377(int iParam0, int iParam1)
{
	if (!Local_160.f_178.f_1)
	{
		return;
	}
	iVar9 = 1;
	func_183(iParam1, &iVar1, &iVar2);
	if (func_74())
	{
		if ((iVar1 % 2) == 0)
		{
			iVar9 = 2;
		}
		iVar0 = 0;
		while (iVar0 <= 1)
		{
			bVar10 = func_74();
			iVar3[iVar0] = func_73(bVar10, 0, 1);
			uVar6[iVar0] = func_72((iVar1 + iVar9), func_73(bVar10, 8, 0));
			iVar9 = (iVar9 * -1);
			iVar0++;
		}
	}
	else
	{
		if ((iVar2 % 2) == 0)
		{
			iVar9 = 2;
		}
		iVar0 = 0;
		while (iVar0 <= 1)
		{
			bVar11 = func_74();
			iVar3[iVar0] = func_73(bVar11, 2, 3);
			uVar6[iVar0] = func_72(func_73(bVar11, 12, 0), (iVar2 + iVar9));
			iVar9 = (iVar9 * -1);
			iVar0++;
		}
	}
	iVar12 = 1;
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		Local_613.f_148[(iVar0 + iVar12)].f_1 = uVar6[iVar0];
		Local_613.f_148[(iVar0 + iVar12)] = NETWORK::GET_NETWORK_TIME() + 1000;
		Local_613.f_148[(iVar0 + iVar12)].f_2 = iVar3[iVar0];
		Local_613.f_148[(iVar0 + iVar12)].f_3 = (5 + iParam0);
		iVar0++;
	}
	Local_613.f_161 = NETWORK::GET_NETWORK_TIME();
}

void func_378(int iParam0, int iParam1, int iParam2)
{
	if (!Local_160.f_178.f_1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (iVar0 == iParam2)
		{
			if (!func_82(&(Local_613.f_85[iVar0][iParam1]), iParam0))
			{
				func_90(&(Local_613.f_85[iVar0][iParam1]), iParam0);
			}
		}
		else if (func_82(&(Local_613.f_85[iVar0][iParam1]), iParam0))
		{
			func_379(&(Local_613.f_85[iVar0][iParam1]), iParam0);
		}
		iVar0++;
	}
}

void func_379(var uParam0, int iParam1)
{
	GAMEPLAY::CLEAR_BIT(uParam0[func_84(iParam1)], func_83(iParam1));
}

void func_380(int iParam0)
{
	if (!Local_160.f_178.f_1)
	{
		return;
	}
	Local_613.f_62[iParam0].f_1 = -1;
	Local_613.f_62[iParam0] = -1;
	Local_613.f_62[iParam0].f_2 = -2147483647;
}

void func_381(int iParam0, int iParam1)
{
	Var0.x = -2012069109;
	Var0.y = PLAYER::PLAYER_ID();
	Var0.z = iParam1;
	iVar3 = func_56(iParam0);
	if (!iVar3 == 0 && func_12(iParam0, 0, 1))
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 3, iVar3);
	}
}

int func_382()
{
	if (Global_1661998)
	{
		return 1;
	}
	if (func_391())
	{
		return 1;
	}
	if (func_390(PLAYER::GET_PLAYER_INDEX()))
	{
		return 1;
	}
	if (!func_388())
	{
		return 1;
	}
	if (func_383())
	{
		return 1;
	}
	if (Local_613.f_145 == 4 && Local_819[Local_160.f_178] != 4)
	{
		return 0;
	}
	if (Local_160.f_140 < 2)
	{
		return 0;
	}
	iVar0 = 225;
	if (CONTROLS::_IS_INPUT_DISABLED(2))
	{
		iVar0 = 214;
	}
	if (CONTROLS::IS_DISABLED_CONTROL_PRESSED(2, iVar0))
	{
		if (Local_160.f_431 == -2147483647)
		{
			Local_160.f_431 = NETWORK::GET_NETWORK_TIME() + 1000;
		}
		if (NETWORK::GET_NETWORK_TIME() > Local_160.f_431)
		{
			return 1;
		}
	}
	else if (Local_160.f_431 != -2147483647)
	{
		Local_160.f_431 = -2147483647;
	}
	if (func_354(PLAYER::PLAYER_ID()))
	{
		if (func_383())
		{
			return 1;
		}
	}
	return 0;
}

int func_383()
{
	if (func_354(PLAYER::PLAYER_ID()))
	{
		if (func_387(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
		if (func_386(PLAYER::PLAYER_ID(), 0) && func_384(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
	}
	return 0;
}

bool func_384(int iParam0)
{
	return func_385(iParam0, 20);
}

bool func_385(int iParam0, int iParam1)
{
	return GAMEPLAY::IS_BIT_SET(Global_1628237[iParam0].f_11.f_4, iParam1);
}

int func_386(int iParam0, int iParam1)
{
	if (Global_1628237[iParam0].f_11.f_33 != -1 || (iParam1 && Global_1628237[iParam0].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_387(int iParam0)
{
	if (func_35(iParam0, 0))
	{
		return 1;
	}
	if (func_34())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (GAMEPLAY::IS_BIT_SET(Global_2425662[iParam0].f_195, 2))
	{
		return 1;
	}
	return 0;
}

int func_388()
{
	if (func_389(PLAYER::GET_PLAYER_INDEX()))
	{
		return 1;
	}
	if (func_354(PLAYER::GET_PLAYER_INDEX()))
	{
		return 1;
	}
	return 0;
}

int func_389(int iParam0)
{
	if (iParam0 != func_18())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_61(Global_2425662[iParam0].f_310.f_5) == 15;
			}
		}
	}
	return 0;
}

int func_390(int iParam0)
{
	if (iParam0 != func_18())
	{
		return GAMEPLAY::IS_BIT_SET(Global_1628237[iParam0].f_536, 3);
	}
	return 0;
}

bool func_391()
{
	return Global_1676377.f_4418.f_1 != -1;
}

void func_392()
{
	Local_160.f_147 = 0;
	Local_160.f_148 = 0;
	Local_160.f_434 = Local_160.f_433;
	iVar0 = -1;
	iVar1 = -1;
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 <= 3)
	{
		Local_160.f_149[iVar2] = -1;
		if (iLocal_814[iVar2] > iVar0)
		{
			iVar0 = iLocal_814[iVar2];
			iVar1 = iVar2;
		}
		else if (iLocal_814[iVar2] == iVar0)
		{
			iVar1 = -1;
		}
		iVar2++;
	}
	iVar2 = 0;
	while (iVar2 <= 3)
	{
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar2)) && !Local_921[iVar2].f_25)
		{
		}
		else if (Local_819[iVar2].f_6 == -1)
		{
		}
		else
		{
			Local_160.f_149[Local_819[iVar2].f_6] = iVar2;
			if (Local_819[iVar2].f_6 == iVar1)
			{
				iVar1 = iVar2;
			}
			if (Local_160.f_154[Local_819[iVar2].f_6] == -2147483647 && Global_1661996.f_1 == 0)
			{
				func_162((12 + Local_819[iVar2].f_6));
				Local_160.f_154[Local_819[iVar2].f_6] = NETWORK::GET_NETWORK_TIME();
			}
			Local_160.f_148++;
			if (Local_160.f_204[iVar2].f_9 != Local_819[iVar2].f_2)
			{
				iVar3 = (Local_819[iVar2].f_2 - Local_160.f_204[iVar2].f_9);
				if (iVar3 > 0)
				{
					Local_160.f_204[iVar2].f_9 = (Local_160.f_204[iVar2].f_9 + Local_160.f_412);
					if (Local_160.f_204[iVar2].f_9 > Local_819[iVar2].f_2)
					{
						Local_160.f_204[iVar2].f_9 = Local_819[iVar2].f_2;
					}
				}
				else
				{
					Local_160.f_204[iVar2].f_9 = (Local_160.f_204[iVar2].f_9 - Local_160.f_414);
					if (Local_160.f_204[iVar2].f_9 < Local_819[iVar2].f_2)
					{
						Local_160.f_204[iVar2].f_9 = Local_819[iVar2].f_2;
					}
				}
			}
			if (Local_819[iVar2] == 4)
			{
			}
			else
			{
				Local_160.f_147++;
			}
		}
		iVar2++;
	}
	Local_160.f_433 = iVar1;
	iVar2 = 0;
	while (iVar2 <= 3)
	{
		if (Local_160.f_149[iVar2] == -1 && Local_160.f_154[iVar2] != -2147483647)
		{
			Local_160.f_154[iVar2] = -2147483647;
		}
		iVar2++;
	}
}

void func_393()
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		Local_160.f_178 = NETWORK::PARTICIPANT_ID_TO_INT();
		uVar0 = NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT();
		Local_160.f_178.f_1 = uVar0;
	}
}

void func_394()
{
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Local_921[iVar0].f_25)
		{
			Local_819[iVar0] = { Local_921[iVar0] };
		}
		iVar0++;
	}
}

void func_395()
{
	SYSTEM::WAIT(0);
}

void func_396(struct<21> Param0)
{
	func_402(4, Param0);
	func_400(0, -1, 0);
	func_399();
	func_398();
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_613, 201);
	unk_0x60EAE6065B65E911(&iLocal_814, 5);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_819, 37);
	unk_0x728A7F9D621E8D84(&Local_856, 65);
	if (!func_397())
	{
		func_13();
	}
	Local_819[NETWORK::PARTICIPANT_ID_TO_INT()].f_6 = Param0.f_19;
}

int func_397()
{
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 0;
		}
		if (NETWORK::_0x5D10B3795F3FC886())
		{
			return 1;
		}
		if (func_8())
		{
			return 0;
		}
		if (func_6(157))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		SYSTEM::WAIT(0);
	}
	return 0;
}

void func_398()
{
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Local_613[iVar0][iVar1] = -1;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		Local_613.f_62[iVar0] = -1;
		Local_613.f_62[iVar0].f_1 = -1;
		Local_613.f_62[iVar0].f_2 = -2147483647;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		Local_613.f_148[iVar0] = -2147483647;
		Local_613.f_148[iVar0].f_1 = -1;
		Local_613.f_148[iVar0].f_2 = -1;
		Local_613.f_148[iVar0].f_3 = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		Local_613.f_131[iVar0] = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Local_613.f_196[iVar0] = 99;
		iVar0++;
	}
}

void func_399()
{
}

int func_400(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_14();
			}
			else
			{
				return 0;
			}
		}
		if (!func_401())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_14();
					}
					else
					{
						return 0;
					}
				}
				if (func_8())
				{
					if (!bParam2)
					{
						func_14();
					}
					else
					{
						return 0;
					}
				}
				if (func_6(157))
				{
					if (!bParam2)
					{
						func_14();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!NETWORK::NETWORK_IS_IN_SESSION())
			{
				if (!bParam2)
				{
					func_14();
				}
				else
				{
					return 0;
				}
			}
		}
		SYSTEM::WAIT(0);
		iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}
	if (iParam1 > -1)
	{
		Global_1312501 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (!bParam2)
			{
				func_14();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		if (!bParam2)
		{
			func_14();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_401()
{
	return Global_1312854;
}

void func_402(int iParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_14();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, 0, Param1.f_16);
}

