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
	sLocal_18 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	if (func_73())
	{
		while (!func_59())
		{
			func_11(&uLocal_83);
			SYSTEM::WAIT(0);
		}
	}
	func_1();
}

void func_1()
{
	func_3(&uLocal_83);
	func_2();
}

void func_2()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_3(var uParam0)
{
	func_9(&(uParam0->f_57.f_5));
	func_4(uParam0, 1);
}

void func_4(var uParam0, bool bParam1)
{
	if (func_5(uParam0))
	{
		UI::CLEAR_HELP(1);
	}
	if (bParam1)
	{
		func_9(&(uParam0->f_57.f_5));
	}
}

bool func_5(var uParam0)
{
	func_7(uParam0, uParam0->f_57.f_2, &sVar0);
	func_7(uParam0, uParam0->f_57.f_2, &sVar4);
	return (func_6(&sVar0) || func_6(&sVar4));
}

var func_6(char* sParam0)
{
	UI::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return UI::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_7(var uParam0, int iParam1, char* sParam2)
{
	if (func_8(&(uParam0->f_57), 7))
	{
		Stack.Push(uParam0[iParam1]);
		Stack.Push(iParam1);
		Stack.Push(sParam2);
		Call_Loc(uParam0->f_57.f_14);
	}
	else
	{
		StringCopy(sParam2, "MPJAC_EXIT", 16);
	}
}

bool func_8(var uParam0, int iParam1)
{
	return GAMEPLAY::IS_BIT_SET(*uParam0, iParam1);
}

void func_9(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = func_10(*uParam0);
	if (iVar0 == -1)
	{
		*uParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_42151[iVar0])
		{
			Global_42151[iVar0].f_7 = 1;
			*uParam0 = -1;
			return;
		}
	}
	*uParam0 = -1;
}

int func_10(int iParam0)
{
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_42151[iVar0].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_11(var uParam0)
{
	func_56(uParam0);
	func_54(uParam0);
	Var20.f_1.f_6 = 1061158912;
	Var20 = { *uParam0[uParam0->f_57.f_2] };
	switch (uParam0->f_57.f_4)
	{
		case 0:
			func_53(&(uParam0->f_57), 11);
			func_52(uParam0, 1);
			break;
		
		case 1:
			if (func_51(uParam0))
			{
				uParam0->f_57.f_6 = GAMEPLAY::GET_GAME_TIMER();
				func_52(uParam0, 2);
			}
			break;
		
		case 2:
			if (func_50(PLAYER::PLAYER_PED_ID(), uParam0[uParam0->f_57.f_2]))
			{
				if ((func_49(uParam0) || func_47(uParam0)) || !func_46(uParam0))
				{
					func_4(uParam0, 1);
					func_52(uParam0, 1);
				}
				else if (uParam0->f_57.f_5 == -1)
				{
					if ((GAMEPLAY::GET_GAME_TIMER() - uParam0->f_57.f_6) > 150)
					{
						func_45(&(uParam0->f_57.f_5), 4, "MPJAC_SIT", 0, 0, 0, 0);
					}
				}
				else if (CONTROLS::IS_CONTROL_JUST_PRESSED(0, 51))
				{
					func_9(&(uParam0->f_57.f_5));
					func_42(uParam0);
					func_52(uParam0, 3);
				}
			}
			else
			{
				func_4(uParam0, 1);
				func_52(uParam0, 1);
			}
			break;
		
		case 3:
			func_41(uParam0, &sVar0);
			STREAMING::REQUEST_ANIM_DICT(&sVar0);
			if (STREAMING::HAS_ANIM_DICT_LOADED(&sVar0))
			{
				func_52(uParam0, 4);
			}
			break;
		
		case 4:
			func_41(uParam0, &sVar0);
			func_40(uParam0, &sVar16);
			if (Var20 != 3)
			{
				Var34 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(&sVar0, &sVar16, func_39(uParam0), func_38(uParam0), 0, 2) };
				Var37 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(&sVar0, &sVar16, func_39(uParam0), func_38(uParam0), 0, 2) };
				uVar40 = Var37.z;
				AI::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), Var34, 1f, 500, uVar40, 0.15f);
			}
			func_52(uParam0, 5);
			break;
		
		case 5:
			func_26(uParam0);
			func_41(uParam0, &sVar0);
			func_40(uParam0, &sVar16);
			if (Var20 == 3)
			{
				iVar41 = AI::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 1920390111);
			}
			else
			{
				iVar41 = AI::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 2106541073);
			}
			if (iVar41 != 1 && iVar41 != 0)
			{
				uParam0->f_57.f_1 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_39(uParam0), func_38(uParam0), 2, 1, 0, 1065353216, 0, 1065353216);
				NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_57.f_1, &sVar0, &sVar16, 2f, -1000f, 13, 16, 1.5f, 0);
				NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam0->f_57.f_1);
				uParam0->f_57.f_8.f_4 = GAMEPLAY::GET_GAME_TIMER();
				func_25(&(uParam0->f_57), 8);
				func_52(uParam0, 6);
			}
			break;
		
		case 6:
			if (func_8(&(uParam0->f_57), 10))
			{
				func_53(&(uParam0->f_57), 10);
				func_24(uParam0);
			}
			func_26(uParam0);
			func_18(uParam0);
			uVar42 = NETWORK::_NETWORK_UNLINK_NETWORKED_SYNCHRONISED_SCENE(uParam0->f_57.f_1);
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uVar42))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uVar42) >= 1f)
				{
					func_12(uParam0, 0);
					func_41(uParam0, &sVar0);
					func_40(uParam0, &sVar16);
					uParam0->f_57.f_1 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_39(uParam0), func_38(uParam0), 2, 1, 0, 1065353216, 0, 1065353216);
					NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_57.f_1, &sVar0, &sVar16, 4f, -1.5f, 13, 16, 1000f, 0);
					NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam0->f_57.f_1);
					func_25(&(uParam0->f_57), 8);
					func_25(&(uParam0->f_57), 11);
				}
				else
				{
					func_53(&(uParam0->f_57), 8);
				}
			}
			else if (!func_8(&(uParam0->f_57), 8))
			{
				func_52(uParam0, 8);
			}
			break;
		
		case 7:
			NETWORK::NETWORK_STOP_SYNCHRONISED_SCENE(uParam0->f_57.f_1);
			func_52(uParam0, 8);
			break;
		
		case 8:
			uVar43 = NETWORK::_NETWORK_UNLINK_NETWORKED_SYNCHRONISED_SCENE(uParam0->f_57.f_1);
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uVar43))
			{
				if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(uVar43) >= 1f || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), 364629851)) || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), 2116425869))
				{
					NETWORK::NETWORK_STOP_SYNCHRONISED_SCENE(uParam0->f_57.f_1);
					func_4(uParam0, 1);
					func_52(uParam0, 0);
				}
			}
			else
			{
				func_4(uParam0, 1);
				func_52(uParam0, 0);
			}
			break;
	}
}

void func_12(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		iVar1 = func_13(uParam0);
		if (iVar1 != uParam0->f_57.f_8.f_1)
		{
			if (iVar1 == 0)
			{
				iVar0 = (11 + uParam0->f_57.f_8.f_1);
			}
			else
			{
				iVar0 = (6 + iVar1);
			}
		}
		else
		{
			iVar0 = uParam0->f_57.f_8.f_2;
		}
		iVar1 = uParam0->f_57.f_8.f_1;
	}
	else if (uParam0->f_57.f_8.f_2 == 5)
	{
		iVar1 = uParam0->f_57.f_8.f_1;
		iVar2 = 3;
		iVar0 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, iVar2);
		if (iVar0 == uParam0->f_57.f_8.f_3)
		{
			iVar0 = (iVar0 + 1 % iVar2);
		}
	}
	else
	{
		if (uParam0->f_57.f_8.f_2 > 6)
		{
			iVar1 = func_13(uParam0);
			uParam0->f_57.f_8.f_4 = GAMEPLAY::GET_GAME_TIMER();
		}
		else
		{
			iVar1 = uParam0->f_57.f_8.f_1;
		}
		if ((GAMEPLAY::GET_GAME_TIMER() - uParam0->f_57.f_8.f_4) >= 90000)
		{
			iVar1 = func_13(uParam0);
			if (iVar1 != uParam0->f_57.f_8.f_1)
			{
				if (iVar1 == 0)
				{
					iVar0 = (11 + uParam0->f_57.f_8.f_1);
				}
				else
				{
					iVar0 = (6 + iVar1);
				}
			}
			iVar1 = uParam0->f_57.f_8.f_1;
		}
		else
		{
			iVar0 = 5;
		}
	}
	uParam0->f_57.f_8.f_3 = uParam0->f_57.f_8.f_2;
	uParam0->f_57.f_8.f_2 = iVar0;
	uParam0->f_57.f_8.f_1 = iVar1;
}

int func_13(var uParam0)
{
	if (uParam0->f_57.f_8 == 2)
	{
		return uParam0->f_57.f_8.f_1;
	}
	return (uParam0->f_57.f_8.f_1 + 1 % func_14(uParam0->f_57.f_8));
}

int func_14(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		
		case 1:
			return func_15(func_16(), 4, 5);
		
		case 2:
			return 5;
		
		default:
	}
	return 0;
}

int func_15(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

bool func_16()
{
	return func_17(PLAYER::PLAYER_ID());
}

int func_17(int iParam0)
{
	if (ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(iParam0)) == -1667301416)
	{
		return 1;
	}
	return 0;
}

void func_18(var uParam0)
{
	if (uParam0->f_57.f_4 == 6)
	{
		Var0 = { CONTROLS::GET_CONTROL_NORMAL(0, 218), CONTROLS::GET_CONTROL_NORMAL(0, 219), 0f };
		fVar3 = SYSTEM::VMAG(Var0);
		if ((uParam0->f_57.f_4 == 6 && !ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), -1322051853)) && !func_8(&(uParam0->f_57), 12))
		{
			if (fVar3 >= 0.35f)
			{
				func_23(uParam0);
			}
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), -1322051853))
		{
			func_4(uParam0, 1);
		}
		else if (func_22(uParam0))
		{
			func_4(uParam0, 1);
		}
		else
		{
			CONTROLS::_DISABLE_INPUT_GROUP(2);
			CONTROLS::DISABLE_CONTROL_ACTION(0, 24, 1);
			CONTROLS::DISABLE_CONTROL_ACTION(0, 257, 1);
			CONTROLS::DISABLE_CONTROL_ACTION(0, 142, 1);
			CONTROLS::DISABLE_CONTROL_ACTION(0, 141, 1);
			CONTROLS::DISABLE_CONTROL_ACTION(0, 140, 1);
			CONTROLS::DISABLE_CONTROL_ACTION(0, 263, 1);
			CONTROLS::DISABLE_CONTROL_ACTION(0, 264, 1);
			CONTROLS::DISABLE_CONTROL_ACTION(0, 143, 1);
			CONTROLS::DISABLE_CONTROL_ACTION(2, 200, 1);
			if (((((!UI::IS_PAUSE_MENU_ACTIVE() && !func_8(&(uParam0->f_57), 0)) && !func_8(&(uParam0->f_57), 4)) && !func_21()) && !func_19(1)) && uParam0->f_57.f_8.f_2 != 3)
			{
				if (uParam0->f_57.f_5 == -1)
				{
					func_45(&(uParam0->f_57.f_5), 4, "MPJAC_EXIT", 0, 0, 0, 0);
				}
				if (uParam0->f_57.f_4 == 6)
				{
					if (CONTROLS::IS_CONTROL_JUST_PRESSED(0, 51))
					{
						func_24(uParam0);
					}
				}
			}
		}
	}
	func_53(&(uParam0->f_57), 9);
}

int func_19(bool bParam0)
{
	if (CONTROLS::_0xFC859E2374407556())
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (func_20(PLAYER::PLAYER_PED_ID()))
			{
				if (CONTROLS::IS_CONTROL_PRESSED(0, 25) || CONTROLS::IS_CONTROL_PRESSED(0, 68))
				{
					return 0;
				}
			}
		}
	}
	if (Global_22211.f_130)
	{
		return 0;
	}
	if (CONTROLS::IS_CONTROL_PRESSED(0, 19) || (!bParam0 && CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, 19)))
	{
		return 1;
	}
	if (GAMEPLAY::IS_PC_VERSION())
	{
		if (((CONTROLS::IS_CONTROL_PRESSED(0, 166) || CONTROLS::IS_CONTROL_PRESSED(0, 167)) || CONTROLS::IS_CONTROL_PRESSED(0, 168)) || CONTROLS::IS_CONTROL_PRESSED(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, 166) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, 167)) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, 168)) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_20(var uParam0)
{
	if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
	{
		if (!PED::IS_PED_INJURED(uParam0))
		{
			WEAPON::GET_CURRENT_PED_WEAPON(uParam0, &iVar0, 1);
			if (((iVar0 == 100416529 || iVar0 == 205991906) || iVar0 == -952879014) || iVar0 == 177293209)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_21()
{
	if (Global_2439138.f_1156.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

bool func_22(var uParam0)
{
	return func_8(&(uParam0->f_57), 9);
}

void func_23(var uParam0)
{
	if (((func_13(uParam0) != uParam0->f_57.f_8.f_1 && uParam0->f_57.f_8.f_2 < 6) && uParam0->f_57.f_8.f_2 != 3) && uParam0->f_57.f_8.f_2 != 4)
	{
		func_12(uParam0, 1);
		func_41(uParam0, &sVar0);
		func_40(uParam0, &sVar16);
		uParam0->f_57.f_1 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_39(uParam0), func_38(uParam0), 2, 1, 0, 1065353216, 0, 1065353216);
		NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_57.f_1, &sVar0, &sVar16, 4f, -1.5f, 13, 16, 1000f, 0);
		NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam0->f_57.f_1);
		func_25(&(uParam0->f_57), 8);
		PED::_0x2208438012482A1A(PLAYER::PLAYER_PED_ID(), 0, 0);
	}
}

void func_24(var uParam0)
{
	uParam0->f_57.f_1 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_39(uParam0), func_38(uParam0), 2, 1, 0, 1065353216, 0, 1065353216);
	func_41(uParam0, &sVar0);
	NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_57.f_1, &sVar0, "exit", 4f, -4f, 13, 16, 1000f, 0);
	NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam0->f_57.f_1);
	func_9(&(uParam0->f_57.f_5));
	func_52(uParam0, 8);
}

void func_25(var uParam0, int iParam1)
{
	GAMEPLAY::SET_BIT(uParam0, iParam1);
}

void func_26(var uParam0)
{
	switch (uParam0->f_57.f_4)
	{
		case 4:
		case 8:
			func_31(1);
		
		case 6:
			CAM::_0xF4F2C0D4EE209E20();
			UI::_SHOW_WEAPON_WHEEL(0);
			UI::DISPLAY_AMMO_THIS_FRAME(0);
			UI::HIDE_HUD_COMPONENT_THIS_FRAME(19);
			UI::HIDE_HUD_COMPONENT_THIS_FRAME(2);
			UI::_0x0AFC4AF510774B47();
			func_30();
			if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, 1) && iVar0 != -1569615261)
			{
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), -1569615261, 1);
			}
			CONTROLS::DISABLE_CONTROL_ACTION(0, 37, 1);
			func_28(1);
			func_27();
			break;
	}
}

void func_27()
{
	Global_22211.f_6 = 1;
}

void func_28(bool bParam0)
{
	if (bParam0)
	{
		if (func_29())
		{
			Global_2450632.f_37 = 1;
		}
	}
	else
	{
		Global_2450632.f_37 = 0;
	}
}

bool func_29()
{
	return GAMEPLAY::IS_BIT_SET(Global_2450632.f_2, 11);
}

void func_30()
{
	GAMEPLAY::SET_BIT(&Global_7357, 4);
}

void func_31(int iParam0)
{
	if (func_37())
	{
		return;
	}
	if (!Global_19486.f_1 == 1)
	{
		if (func_36(0))
		{
			func_32(iParam0);
		}
		GAMEPLAY::SET_BIT(&Global_7357, 2);
	}
}

void func_32(int iParam0)
{
	if (func_37())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_35())
		{
			func_34(1, 1);
		}
		else
		{
			func_34(0, 0);
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
	if (!func_33())
	{
		Global_19486.f_1 = 3;
	}
}

int func_33()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_34(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_36(0))
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

bool func_35()
{
	return GAMEPLAY::IS_BIT_SET(Global_1687687, 5);
}

int func_36(int iParam0)
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

bool func_37()
{
	return GAMEPLAY::IS_BIT_SET(Global_1687687, 19);
}

Vector3 func_38(var uParam0)
{
	Var0 = { uParam0[uParam0->f_57.f_2]->f_8.f_3 };
	if (func_16() && uParam0->f_57.f_8 == 0)
	{
		Var0.z = (Var0.z - 4f);
	}
	return Var0;
}

Vector3 func_39(var uParam0)
{
	return uParam0[uParam0->f_57.f_2]->f_8;
}

void func_40(var uParam0, char* sParam1)
{
	switch (uParam0->f_57.f_8.f_2)
	{
		case 0:
			StringCopy(sParam1, "IDLE_A", 16);
			break;
		
		case 1:
			StringCopy(sParam1, "IDLE_B", 16);
			break;
		
		case 2:
			StringCopy(sParam1, "IDLE_C", 16);
			break;
		
		case 3:
			StringCopy(sParam1, "ENTER", 16);
			break;
		
		case 5:
			StringCopy(sParam1, "BASE", 16);
			break;
		
		case 4:
			StringCopy(sParam1, "EXIT", 16);
			break;
		
		case 7:
			StringCopy(sParam1, "A_TO_B", 16);
			break;
		
		case 8:
			StringCopy(sParam1, "B_TO_C", 16);
			break;
		
		case 9:
			StringCopy(sParam1, "C_TO_D", 16);
			break;
		
		case 10:
			StringCopy(sParam1, "D_TO_E", 16);
			break;
		
		case 12:
			StringCopy(sParam1, "B_TO_E", 16);
			break;
		
		case 13:
			StringCopy(sParam1, "C_TO_A", 16);
			break;
		
		case 14:
			StringCopy(sParam1, "D_TO_A", 16);
			break;
		
		case 15:
			StringCopy(sParam1, "E_TO_A", 16);
			break;
		
		default:
			StringCopy(sParam1, "invalid_clip", 16);
	}
}

void func_41(var uParam0, char* sParam1)
{
	switch (uParam0->f_57.f_8)
	{
		case 0:
			StringCopy(sParam1, "ANIM@AMB@CLUBHOUSE@SEATING", 64);
			break;
		
		case 1:
			StringCopy(sParam1, "ANIM@AMB@OFFICE@SEATING", 64);
			break;
		
		case 2:
			StringCopy(sParam1, "ANIM@AMB@FACILITY@BRIEFING_ROOM@SEATING", 64);
			break;
	}
	if (func_16())
	{
		StringConCat(sParam1, "@FEMALE", 64);
	}
	else
	{
		StringConCat(sParam1, "@MALE", 64);
	}
	switch (uParam0->f_57.f_8)
	{
		case 1:
		case 0:
			switch (uParam0->f_57.f_8.f_1)
			{
				case 0:
					StringConCat(sParam1, "@VAR_A@BASE@", 64);
					break;
				
				case 1:
					StringConCat(sParam1, "@VAR_B@BASE@", 64);
					break;
				
				case 2:
					StringConCat(sParam1, "@VAR_C@BASE@", 64);
					break;
				
				case 3:
					StringConCat(sParam1, "@VAR_D@BASE@", 64);
					break;
				
				case 4:
					StringConCat(sParam1, "@VAR_E@BASE@", 64);
					break;
			}
			break;
		
		case 2:
			switch (uParam0->f_57.f_8.f_1)
			{
				case 0:
					StringConCat(sParam1, "@VAR_A@", 64);
					break;
				
				case 1:
					StringConCat(sParam1, "@VAR_B@", 64);
					break;
				
				case 2:
					StringConCat(sParam1, "@VAR_C@", 64);
					break;
				
				case 3:
					StringConCat(sParam1, "@VAR_D@", 64);
					break;
				
				case 4:
					StringConCat(sParam1, "@VAR_E@", 64);
					break;
			}
			break;
	}
}

void func_42(var uParam0)
{
	uParam0->f_57.f_8 = func_44((*uParam0)[uParam0->f_57.f_2]);
	uParam0->f_57.f_8.f_1 = func_43(uParam0);
	uParam0->f_57.f_8.f_2 = 3;
	uParam0->f_57.f_8.f_3 = 3;
}

int func_43(var uParam0)
{
	switch (uParam0->f_57.f_8)
	{
		case 2:
			iVar0 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 4);
			if (iVar0 >= 1)
			{
				iVar0++;
			}
			break;
		
		default:
			iVar0 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, func_14(uParam0->f_57.f_8));
	}
	return iVar0;
}

int func_44(int iParam0)
{
	if (iParam0 >= 11)
	{
		return 0;
	}
	else if (iParam0 >= 9)
	{
		return 0;
	}
	else if (iParam0 >= 7)
	{
		return 0;
	}
	else if (iParam0 >= 4)
	{
		return 0;
	}
	else if (iParam0 > 1)
	{
		return 2;
	}
	return 0;
}

void func_45(var uParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(1974937116) < 1)
	{
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!*uParam0 == -1)
		{
			func_9(uParam0);
		}
		return;
	}
	if (!*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_42151[iVar0])
		{
			Global_42151[iVar0] = 1;
			Global_42151[iVar0].f_1 = Global_42352;
			Global_42352++;
			Global_42151[iVar0].f_4 = 0;
			Global_42151[iVar0].f_29 = 0;
			Global_42151[iVar0].f_5 = 0;
			Global_42151[iVar0].f_2 = iParam1;
			StringCopy(&(Global_42151[iVar0].f_8), sParam2, 16);
			Global_42151[iVar0].f_6 = iParam3;
			Global_42151[iVar0].f_31 = SCRIPT::GET_ID_OF_THIS_THREAD();
			Global_42151[iVar0].f_7 = 0;
			Global_42151[iVar0].f_3 = iParam5;
			if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam4))
			{
				Global_42151[iVar0].f_12 = 1;
				StringCopy(&(Global_42151[iVar0].f_13), sParam4, 64);
				Global_42151[iVar0].f_30 = iParam6;
			}
			else
			{
				Global_42151[iVar0].f_12 = 0;
				Global_42151[iVar0].f_30 = 0;
			}
			*uParam0 = Global_42151[iVar0].f_1;
			return;
		}
		iVar0++;
	}
}

bool func_46(var uParam0)
{
	Stack.Push(!func_8(&(uParam0->f_57), 5));
	Stack.Push(uParam0[uParam0->f_57.f_2]);
	Stack.Push(uParam0->f_57.f_2);
	Call_Loc(uParam0->f_57.f_13);
	return (StackVal || StackVal);
}

int func_47(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			if ((iVar1 != PLAYER::PLAYER_ID() && func_48(iVar1, 1, 1)) && func_50(PLAYER::GET_PLAYER_PED(iVar1), uParam0[uParam0->f_57.f_2]))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_48(int iParam0, bool bParam1, bool bParam2)
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

bool func_49(var uParam0)
{
	return uParam0->f_57 & 31 > 0;
}

bool func_50(var uParam0, var uParam1)
{
	return ENTITY::IS_ENTITY_IN_ANGLED_AREA(uParam0, uParam1->f_1, uParam1->f_1.f_3, uParam1->f_1.f_6, 0, 1, 0);
}

int func_51(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (func_50(PLAYER::PLAYER_PED_ID(), uParam0[uParam0->f_57.f_2]))
		{
			return 1;
		}
		else
		{
			uParam0->f_57.f_2 = (uParam0->f_57.f_2 + 1 % 4);
		}
		iVar0++;
	}
	return 0;
}

void func_52(var uParam0, int iParam1)
{
	uParam0->f_57.f_4 = iParam1;
}

void func_53(var uParam0, int iParam1)
{
	GAMEPLAY::CLEAR_BIT(uParam0, iParam1);
}

void func_54(var uParam0)
{
	if (uParam0->f_57.f_4 == 6)
	{
	}
	else if (uParam0->f_57.f_4 > 4)
	{
		CAM::_0x2AED6301F67007D5(PLAYER::PLAYER_PED_ID());
		PED::SET_PED_CAPSULE(PLAYER::PLAYER_PED_ID(), func_55(uParam0));
		uParam0->f_57.f_7 = GAMEPLAY::GET_FRAME_COUNT();
	}
	else if (uParam0->f_57.f_4 > 1)
	{
		PED::SET_PED_CAPSULE(PLAYER::PLAYER_PED_ID(), func_55(uParam0));
		uParam0->f_57.f_7 = GAMEPLAY::GET_FRAME_COUNT();
	}
	else if ((GAMEPLAY::GET_FRAME_COUNT() - uParam0->f_57.f_7) < 5)
	{
		PED::SET_PED_CAPSULE(PLAYER::PLAYER_PED_ID(), func_55(uParam0));
	}
}

float func_55(var uParam0)
{
	switch ((*uParam0)[uParam0->f_57.f_2])
	{
		case 12:
		case 10:
		case 6:
			return 0.24f;
		
		case 2:
			return 0.16f;
		
		case 3:
			return 0.18f;
		
		default:
	}
	return 0.13f;
}

void func_56(var uParam0)
{
	func_57(&(uParam0->f_57), 4, func_58());
	func_57(&(uParam0->f_57), 1, ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0));
	func_57(&(uParam0->f_57), 3, PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1));
	func_57(&(uParam0->f_57), 0, func_36(0));
	func_57(&(uParam0->f_57), 2, AI::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID()));
}

void func_57(var uParam0, int iParam1, bool bParam2)
{
	uVar0 = iParam1;
	if (bParam2)
	{
		GAMEPLAY::SET_BIT(uParam0, uVar0);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(uParam0, iVar0);
	}
}

bool func_58()
{
	return Global_73825;
}

int func_59()
{
	if (!func_72(PLAYER::PLAYER_PED_ID()))
	{
		return 1;
	}
	if (func_61())
	{
		return 1;
	}
	if (Global_1590380 == func_60())
	{
		return 1;
	}
	return 0;
}

int func_60()
{
	return -1;
}

int func_61()
{
	func_69(&uVar0);
	if (Global_1312854 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_68())
	{
		return 1;
	}
	if (Global_2462922)
	{
		return 1;
	}
	if (func_67())
	{
		return 1;
	}
	if (func_66(159))
	{
		if (!func_65())
		{
			return 1;
		}
	}
	if (func_66(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_62() != 0)
	{
		if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(func_62()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_62()
{
	switch (func_64())
	{
		case 0:
			return func_63();
			break;
		
		case 2:
			return -47565502;
			break;
	}
	return 0;
}

int func_63()
{
	switch (Global_2463024)
	{
		case 0:
			return -931834499;
		
		default:
	}
	return -931834499;
}

int func_64()
{
	return Global_30768;
}

bool func_65()
{
	return Global_2450632.f_598;
}

int func_66(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_67()
{
	return Global_2460680;
}

bool func_68()
{
	return Global_2450632.f_593;
}

void func_69(var uParam0)
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
					func_70(iVar0);
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

void func_70(int iParam0)
{
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		if (func_48(Var0.y, 1, 1))
		{
			uVar3 = PLAYER::GET_PLAYER_PED(Var0.y);
			if (ENTITY::DOES_ENTITY_EXIST(uVar3))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(uVar3, 0))
				{
					uVar4 = PED::GET_VEHICLE_PED_IS_IN(uVar3, 0);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(uVar4, Var0.z) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_71(uVar4, &bVar5))
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

int func_71(var uParam0, var uParam1)
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

bool func_72(var uParam0)
{
	return ENTITY::IS_ENTITY_IN_ANGLED_AREA(uParam0, 355.6093f, 4832.486f, -59.99951f, 338.4763f, 4841.36f, -56.99947f, 15f, 0, 1, 0);
}

int func_73()
{
	if (Global_1590380 != func_60())
	{
		if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE("base_corridor_seats", Global_1590380, 1, 0))
		{
			return 0;
		}
		NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, 0, Global_1590380);
		func_83(0, -1, 0);
		GAMEPLAY::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
		func_74();
		return 1;
	}
	return 0;
}

void func_74()
{
	iVar0[0] = 0;
	iVar0[1] = 1;
	func_75(5, &uLocal_83, &iVar0);
	iVar0[0] = 2;
	iVar0[1] = 3;
	func_75(6, &uLocal_83, &iVar0);
}

void func_75(int iParam0, var uParam1, int iParam2)
{
	func_82(iParam0, &Var0, &fVar3);
	iVar4 = 0;
	while (iVar4 < 2)
	{
		(*uParam1)[(*iParam2)[iVar4]] = 2;
		uParam1[(*iParam2)[iVar4]]->f_8 = { func_78(func_79(iVar4), fVar3) + Var0 };
		uParam1[(*iParam2)[iVar4]]->f_8.f_3 = { 0f, 0f, (fVar3 + 174f) };
		uParam1[(*iParam2)[iVar4]]->f_1 = { func_78(func_77(iVar4), fVar3) + Var0 };
		uParam1[(*iParam2)[iVar4]]->f_1.f_3 = { func_78(func_76(iVar4), fVar3) + Var0 };
		uParam1[(*iParam2)[iVar4]]->f_1.f_6 = 1.42f;
		iVar4++;
	}
}

Vector3 func_76(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return (-1.42f / 2f), ((0.87f / 2f) - 1.74f), 2f;
		
		case 1:
			return (1.42f / 2f), ((0.87f / 2f) - 1.74f), 2f;
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_77(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return (-1.42f / 2f), (0.87f / 2f), 0f;
		
		case 1:
			return (1.42f / 2f), (0.87f / 2f), 0f;
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_78(struct<3> Param0, float fParam3)
{
	fVar3 = SYSTEM::SIN(fParam3);
	fVar4 = SYSTEM::COS(fParam3);
	Var0.x = ((Param0.x * fVar4) - (Param0.y * fVar3));
	Var0.y = ((Param0.x * fVar3) + (Param0.y * fVar4));
	Var0.z = Param0.z;
	return Var0;
}

Vector3 func_79(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Vector(-59.42f, 4832.75f, 391.558f) - func_80();
		
		case 1:
			return Vector(-59.42f, 4832.75f, 392.858f) - func_80();
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_80()
{
	return func_81() + Vector(0f, -8.946f, 47.215f);
}

Vector3 func_81()
{
	return 345.0041f, 4842.001f, -59.9997f;
}

void func_82(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 116.985f, -16.656f, 5f };
			*uParam2 = 81f;
			break;
		
		case 1:
			*uParam1 = { 148.822f, -8.126f, 5f };
			*uParam2 = -51f;
			break;
		
		case 2:
			*uParam1 = { 41.997f, -8.832f, 0f };
			*uParam2 = -2.5f;
			break;
		
		case 3:
			*uParam1 = { 47.215f, -8.946f, 0f };
			*uParam2 = 0f;
			break;
		
		case 4:
			*uParam1 = { 68.813f, -8.955f, 0f };
			*uParam2 = 0f;
			break;
		
		case 5:
			*uParam1 = { 0.521f, 3.241f, 0f };
			*uParam2 = -27f;
			break;
		
		case 6:
			*uParam1 = { 11.391f, -4.387f, 0f };
			*uParam2 = -105f;
			break;
		
		case 7:
			*uParam1 = { 18.427f, 6.559f, -3.588f };
			*uParam2 = (-19f - 180f);
			break;
		
		case 8:
			*uParam1 = { 24.092f, 4.763f, -3.588f };
			*uParam2 = (-16f - 180f);
			break;
		
		case 9:
			*uParam1 = { 17.343f, 3.485f, -3.588f };
			*uParam2 = -19f;
			break;
		
		case 10:
			*uParam1 = { 23.17f, 1.637f, -3.588f };
			*uParam2 = -16f;
			break;
		
		default:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	}
	*uParam1 = { *uParam1 + func_81() };
}

int func_83(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_2();
			}
			else
			{
				return 0;
			}
		}
		if (!func_84())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_2();
					}
					else
					{
						return 0;
					}
				}
				if (func_68())
				{
					if (!bParam2)
					{
						func_2();
					}
					else
					{
						return 0;
					}
				}
				if (func_66(157))
				{
					if (!bParam2)
					{
						func_2();
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
					func_2();
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
				func_2();
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
			func_2();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_84()
{
	return Global_1312854;
}

