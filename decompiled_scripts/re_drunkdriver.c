void __EntryFunction__()
{
	iLocal_3 = 1;
	iLocal_4 = 134;
	iLocal_5 = 134;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 134;
	iLocal_10 = 1;
	iLocal_11 = 12;
	iLocal_12 = 12;
	fLocal_15 = 0.001f;
	iLocal_18 = -1;
	iLocal_19 = 3;
	sLocal_22 = "NULL";
	fLocal_23 = 0f;
	fLocal_27 = -0.0375f;
	fLocal_28 = 0.17f;
	fLocal_32 = 80f;
	fLocal_33 = 140f;
	fLocal_34 = 180f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_47 = -1f;
	uLocal_51 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	uLocal_52 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	Local_87 = { -1034.6f, 4918.6f, 205.9f };
	iLocal_124 = -1;
	StringCopy(&Local_137, "", 24);
	iLocal_165 = -1;
	Local_339 = { -1017.345f, -1354.196f, 4.4568f };
	Local_342 = { 2003.456f, 3071.102f, 46.0499f };
	Local_57 = { ScriptParam_0.f_1[0] };
	func_280();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		func_242();
	}
	if (func_200(Local_57, 27, iLocal_345, 0, 0))
	{
		func_197(-1);
	}
	else
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	iLocal_159 = MISC::GET_GAME_TIMER();
	while (true)
	{
		SYSTEM::WAIT(0);
		if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() || iLocal_62)
		{
			if (!func_196())
			{
				if (func_195())
				{
					func_242();
				}
			}
			RECORDING::_0x208784099002BC30("RE_DD", 0);
			switch (iLocal_53)
			{
				case 0:
					if (iLocal_56)
					{
						iLocal_172 = 1;
						iLocal_53 = 1;
					}
					else
					{
						if (func_183())
						{
							func_242();
						}
						if (!bLocal_60)
						{
							func_182();
						}
						if (bLocal_60)
						{
							func_181();
						}
					}
					break;
				
				case 1:
					func_174();
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						func_173();
						func_170();
						if (iLocal_54 == 1 && !ENTITY::DOES_ENTITY_EXIST(uLocal_91[1]))
						{
							func_76();
							if (func_74() || ENTITY::IS_ENTITY_DEAD(iLocal_94, 0))
							{
								if (ENTITY::DOES_ENTITY_EXIST(uLocal_91[0]))
								{
									if (!ENTITY::IS_ENTITY_DEAD(uLocal_91[0], 0))
									{
										if (PED::IS_PED_IN_GROUP(uLocal_91[0]))
										{
											PED::REMOVE_PED_FROM_GROUP(uLocal_91[0]);
										}
										TASK::CLEAR_PED_TASKS(uLocal_91[0]);
										TASK::TASK_SMART_FLEE_PED(uLocal_91[0], PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
										func_70(uLocal_91[0], 120000, 0);
										PED::SET_PED_KEEP_TASK(uLocal_91[0], 1);
										func_68();
										SYSTEM::WAIT(0);
										func_67(&uLocal_173, "REDR1AU", "REDR1_CRAZY", 4, 0, 0, 0);
									}
								}
								func_66();
							}
						}
						if (iLocal_54 == 2 || (iLocal_54 == 1 && ENTITY::DOES_ENTITY_EXIST(uLocal_91[1])))
						{
							func_76();
							if (iLocal_55 != 9)
							{
								if (func_74() || ENTITY::IS_ENTITY_DEAD(iLocal_94, 0))
								{
									if (ENTITY::DOES_ENTITY_EXIST(uLocal_91[0]))
									{
										if (!PED::IS_PED_INJURED(uLocal_91[0]))
										{
											if (PED::IS_PED_IN_GROUP(uLocal_91[0]))
											{
												PED::REMOVE_PED_FROM_GROUP(uLocal_91[0]);
											}
											TASK::CLEAR_PED_TASKS(uLocal_91[0]);
											TASK::TASK_SMART_FLEE_PED(uLocal_91[0], PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
											func_70(uLocal_91[0], 120000, 0);
											PED::SET_PED_KEEP_TASK(uLocal_91[0], 1);
										}
									}
									if (ENTITY::DOES_ENTITY_EXIST(uLocal_91[1]))
									{
										if (!PED::IS_PED_INJURED(uLocal_91[1]))
										{
											if (PED::IS_PED_IN_GROUP(uLocal_91[1]))
											{
												PED::REMOVE_PED_FROM_GROUP(uLocal_91[1]);
											}
											TASK::CLEAR_PED_TASKS(uLocal_91[1]);
											TASK::TASK_SMART_FLEE_PED(uLocal_91[1], PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
											func_70(uLocal_91[1], 120000, 0);
											PED::SET_PED_KEEP_TASK(uLocal_91[1], 1);
										}
									}
									if (iLocal_54 == 1)
									{
										func_68();
										SYSTEM::WAIT(0);
										func_67(&uLocal_173, "REDR1AU", "REDR1_CRAZY", 4, 0, 0, 0);
									}
									if (iLocal_54 == 2)
									{
										func_68();
										SYSTEM::WAIT(0);
										func_67(&uLocal_173, "REDR2AU", "REDR2_AT", 4, 0, 0, 0);
									}
									func_66();
								}
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(uLocal_91[0]))
						{
							if (!PED::IS_PED_INJURED(uLocal_91[0]))
							{
								PED::SET_PED_MAX_MOVE_BLEND_RATIO(uLocal_91[0], 1f);
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(uLocal_91[1]))
						{
							if (!PED::IS_PED_INJURED(uLocal_91[1]))
							{
								PED::SET_PED_MAX_MOVE_BLEND_RATIO(uLocal_91[1], 1f);
							}
						}
					}
					if ((func_65() && !func_64()) && iLocal_55 != 9)
					{
						if (!PED::IS_PED_INJURED(uLocal_91[0]))
						{
							if (ENTITY::IS_ENTITY_AT_COORD(uLocal_91[0], Local_87, 5f, 5f, 5f, 0, 1, 0))
							{
								if (iLocal_54 == 2)
								{
									if (!PED::IS_PED_INJURED(uLocal_91[1]))
									{
										if (!PED::IS_PED_IN_GROUP(uLocal_91[0]) && !PED::IS_PED_IN_GROUP(uLocal_91[1]))
										{
											PED::SET_PED_AS_GROUP_MEMBER(uLocal_91[0], func_63());
											PED::SET_PED_AS_GROUP_MEMBER(uLocal_91[1], func_63());
										}
									}
								}
								func_62(0);
								SYSTEM::WAIT(0);
								func_68();
								iLocal_55 = 9;
							}
						}
					}
					if (func_61())
					{
						if (ENTITY::DOES_ENTITY_EXIST(uLocal_91[0]))
						{
							PED::DELETE_PED(&(uLocal_91[0]));
						}
						if (ENTITY::DOES_ENTITY_EXIST(uLocal_91[1]))
						{
							PED::DELETE_PED(&(uLocal_91[1]));
						}
						func_36();
					}
					if ((func_35() || func_34()) || func_3())
					{
						func_66();
					}
					break;
			}
		}
		else
		{
			func_242();
		}
		func_1();
	}
}

void func_1()
{
	if (((iLocal_54 == 1 && iLocal_55 == 7) && iLocal_64 == 5) && iLocal_110)
	{
		iLocal_159 = MISC::GET_GAME_TIMER();
		if (func_2())
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
			{
				Local_160 = { ENTITY::GET_ENTITY_SPEED_VECTOR(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0) };
			}
		}
	}
}

int func_2()
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
		{
			if (iLocal_54 == 1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_91[0]))
				{
					if (!PED::IS_PED_INJURED(uLocal_91[0]))
					{
						if (PED::IS_PED_IN_VEHICLE(uLocal_91[0], PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
						{
							return 1;
						}
					}
				}
			}
			if (iLocal_54 == 2)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_91[0]) && ENTITY::DOES_ENTITY_EXIST(uLocal_91[1]))
				{
					if (!PED::IS_PED_INJURED(uLocal_91[0]) && !PED::IS_PED_INJURED(uLocal_91[1]))
					{
						if (PED::IS_PED_IN_VEHICLE(uLocal_91[0], PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0) && PED::IS_PED_IN_VEHICLE(uLocal_91[1], PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_3()
{
	if (iLocal_54 == 2)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_94, 0))
		{
			if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_94, 200f, 200f, 200f, 0, 1, 0))
			{
				return 1;
			}
			if (((!func_33("REDR2_DC") && !func_33("REDR2_AKA")) && !func_33("REDR2_OFFR")) && !func_33("REDR2_CULT"))
			{
				func_5(1);
			}
			if (((((((((((((((((!func_33("REDR2_DC") && !func_33("REDR2_AKA")) && !func_33("REDR2_AKB")) && !func_33("REDR2_TRY")) && !func_33("REDR2_JIC")) && !func_33("REDR2_CH")) && !func_33("REDR2_WH2")) && !func_33("REDR2_BCK")) && !func_33("REDR2_JIA")) && !func_33("REDR2_JIB")) && !func_33("REDR2_JIC")) && !func_33("REDR2_WHA")) && !func_33("REDR2_WHB")) && !func_33("REDR2_WHC")) && !func_33("REDR2_PSM")) && !func_33("REDR2_PSF")) && !func_33("REDR2_PST")) && !func_33("REDR2_TK"))
			{
				if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(iLocal_94) && ENTITY::GET_ENTITY_HEALTH(iLocal_94) < iLocal_80)
				{
					iLocal_80 = ENTITY::GET_ENTITY_HEALTH(iLocal_94);
					func_5(0);
					func_68();
					SYSTEM::WAIT(0);
					func_67(&uLocal_173, "REDR2AU", "REDR2_DC", 4, 0, 0, 0);
				}
			}
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_94, 0) || VEHICLE::IS_VEHICLE_STUCK_ON_ROOF(iLocal_94))
			{
				func_68();
				SYSTEM::WAIT(0);
				if (!func_4())
				{
					if (func_67(&uLocal_173, "REDR2AU", "REDR2_LC", 4, 0, 0, 0))
					{
						if (!PED::IS_PED_INJURED(uLocal_91[0]))
						{
							TASK::TASK_WANDER_STANDARD(uLocal_91[0], 1193033728, 0);
							PED::SET_PED_KEEP_TASK(uLocal_91[0], 1);
						}
						if (!PED::IS_PED_INJURED(uLocal_91[1]))
						{
							TASK::TASK_GO_TO_ENTITY(uLocal_91[1], uLocal_91[0], -1, 0f, 1f, 1073741824, 0);
							PED::SET_PED_KEEP_TASK(uLocal_91[1], 1);
						}
						return 1;
					}
				}
			}
			if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_94, 0, 2) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_94, PLAYER::PLAYER_PED_ID(), 0))
			{
				if (!PED::IS_PED_INJURED(uLocal_91[0]))
				{
					TASK::CLEAR_PED_TASKS(uLocal_91[0]);
					TASK::TASK_SMART_FLEE_PED(uLocal_91[0], PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
				}
				if (!PED::IS_PED_INJURED(uLocal_91[1]))
				{
					TASK::CLEAR_PED_TASKS(uLocal_91[1]);
					TASK::TASK_SMART_FLEE_PED(uLocal_91[1], PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
				}
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_4()
{
	if (Global_20805 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_5(bool bParam0)
{
	if (bParam0)
	{
		if (iLocal_136)
		{
			if (func_10(&uLocal_173, "REDR2AU", &cLocal_143, &Local_137, 8, 0, 0))
			{
				iLocal_136 = 0;
			}
		}
	}
	else if ((!iLocal_136 && AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()) && !func_33("REDR1_SWV"))
	{
		cLocal_143 = { func_9() };
		Local_137 = { func_8() };
		func_6();
		iLocal_136 = 1;
	}
}

void func_6()
{
	Global_19671 = 0;
	func_7();
}

void func_7()
{
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::RESTART_SCRIPTED_CONVERSATION();
		Global_21816 = 0;
		AUDIO::STOP_SCRIPTED_CONVERSATION(1);
		Global_20805 = 6;
		return;
	}
}

struct<6> func_8()
{
	StringCopy(&Var0, "NULL", 24);
	if (Global_20805 == 4)
	{
		iVar6 = AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
		iVar6 = (iVar6 + Global_21815);
		if (iVar6 > -1)
		{
			return Global_19673[iVar6];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

struct<6> func_9()
{
	StringCopy(&Var0, "NULL", 24);
	if (Global_20805 == 4)
	{
		return Global_20424;
	}
	return Var0;
}

bool func_10(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_32(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_20812 = 0;
	Global_20819 = 0;
	Global_20814 = 0;
	Global_21796 = 0;
	Global_21798 = 0;
	Global_21802 = 1;
	StringCopy(&Global_21809, sParam3, 24);
	Global_2621441 = 0;
	return func_11(sParam2, iParam4, 0);
}

int func_11(char* sParam0, int iParam1, bool bParam2)
{
	Global_20806 = 0;
	if (Global_20805 == 0 || Global_20807 == 2)
	{
		if (Global_20805 != 0)
		{
			if (iParam1 > Global_20807)
			{
				if (Global_20812 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(0);
					Global_19486.f_1 = 3;
					Global_20805 = 0;
					Global_20806 = 1;
					Global_20858 = 0;
					Global_20801 = 0;
					Global_20802 = 0;
					Global_20816 = 0;
					Global_20815 = 0;
					Global_19485 = 0;
				}
				else
				{
					func_31();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			return 0;
		}
		if (func_30(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_29();
		Global_20094 = { Global_20259 };
		Global_20811 = Global_20812;
		Global_20818 = Global_20819;
		Global_2621442 = Global_2621441;
		Global_20820 = { Global_20836 };
		Global_20813 = Global_20814;
		Global_21795 = Global_21796;
		Global_21803 = { Global_21809 };
		Global_21797 = Global_21798;
		Global_21799 = Global_21800;
		Global_21801 = Global_21802;
		Global_20424.f_370 = Global_21794;
		Global_20424.f_368 = Global_21792;
		Global_20424.f_369 = Global_21793;
		Global_20801 = Global_20802;
		if (Global_20811)
		{
			MISC::CLEAR_BIT(&Global_7356, 20);
			MISC::CLEAR_BIT(&Global_7357, 17);
			MISC::CLEAR_BIT(&Global_7358, 0);
			if (bParam2)
			{
				func_21();
				if (Global_8161[Global_19486][0].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_19486.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_19452 == 1)
			{
				return 0;
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (func_20())
				{
					return 0;
				}
				if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), -72657034))
				{
					return 0;
				}
				if (!Global_76622)
				{
					if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
					{
						return 0;
					}
					if (PED::IS_PED_PLANTING_BOMB(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0))
					{
						return 0;
					}
				}
			}
			if (func_19())
			{
				return 0;
			}
			else
			{
				switch (Global_19486.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (MISC::IS_BIT_SET(Global_7356, 9))
				{
					return 0;
				}
			}
			func_18();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_17();
		func_12();
		return 1;
	}
	if (Global_20805 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_20807 || iParam1 == Global_20807)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_31();
	}
	return 0;
}

void func_12()
{
	if (!func_13())
	{
		return;
	}
	if (Global_20811)
	{
		MemCopy(&(Global_1703108.f_1), {Global_20424}, 4);
		Global_1703108 = Global_6671;
		Global_1703108.f_6 = Global_20815;
	}
}

int func_13()
{
	if (!Global_262145.f_28086)
	{
		return 0;
	}
	if (!Global_76622)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_16())
	{
		return 0;
	}
	if (func_14(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(Global_1628237[PLAYER::PLAYER_ID()].f_1, 7))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	return 1;
}

bool func_14(int iParam0)
{
	return func_15(iParam0, 20);
}

bool func_15(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1628237[iParam0].f_11.f_4, iParam1);
}

int func_16()
{
	return -1;
}

void func_17()
{
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_19673[iVar0]), "", 24);
		iVar0++;
	}
	AUDIO::STOP_SCRIPTED_CONVERSATION(0);
	Global_20805 = 1;
}

void func_18()
{
	Global_20858 = Global_20857;
	Global_20852 = Global_20853;
	Global_20899 = { Global_20887 };
	Global_20905 = { Global_20893 };
	Global_20860 = Global_20859;
	Global_20929 = { Global_20911 };
	Global_20935 = { Global_20917 };
	Global_20941 = { Global_20923 };
	Global_20947 = { Global_20953 };
	Global_6671 = Global_6672;
	Global_6673 = Global_6674;
	Global_20816 = Global_20817;
	Global_20818 = Global_20819;
	Global_20820 = { Global_20836 };
	Global_20809 = Global_20810;
	Global_21821 = 0;
	Global_20854 = 0;
	Global_20855 = 0;
	MISC::CLEAR_BIT(&Global_7357, 16);
}

int func_19()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_20()
{
	if (Global_76622)
	{
		iVar0 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, 1);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if ((iVar1 == 100416529 || iVar1 == 205991906) || iVar1 == 856002082)
			{
				iVar0 = 1;
			}
		}
		if (CAM::IS_AIM_CAM_ACTIVE() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_21()
{
	if (func_28(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_111638.f_28045[0])
			{
				Global_19486 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_111638.f_28045[1])
			{
				Global_19486 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_111638.f_28045[2])
			{
				Global_19486 = 2;
			}
			else
			{
				Global_19486 = 0;
			}
		}
	}
	else
	{
		Global_19486 = func_22();
		if (Global_19486 == 145)
		{
			Global_19486 = 3;
		}
		if (Global_76622)
		{
			Global_19486 = 3;
		}
		if (Global_19486 > 3)
		{
			Global_19486 = 3;
		}
	}
}

int func_22()
{
	func_23();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_23()
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_26(Global_111638.f_2358.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_25(PLAYER::PLAYER_PED_ID());
			if (func_24(iVar0) && (!func_28(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_24(Global_111638.f_2358.f_539.f_4321))
				{
					Global_111638.f_2358.f_539.f_4322 = Global_111638.f_2358.f_539.f_4321;
				}
				Global_111638.f_2358.f_539.f_4323 = iVar0;
				Global_111638.f_2358.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_111638.f_2358.f_539.f_4321 != 145)
			{
				Global_111638.f_2358.f_539.f_4323 = Global_111638.f_2358.f_539.f_4321;
			}
			return;
		}
	}
	Global_111638.f_2358.f_539.f_4321 = 145;
}

bool func_24(int iParam0)
{
	return iParam0 < 3;
}

int func_25(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_26(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_26(int iParam0)
{
	if (func_24(iParam0))
	{
		return func_27(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_27(int iParam0)
{
	return Global_1798[iParam0];
}

bool func_28(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_29()
{
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_20094[iVar0] = 0;
		StringCopy(&(Global_20094[iVar0].f_1), "", 24);
		Global_20094[iVar0].f_7 = 0;
		Global_20094[iVar0].f_8 = 0;
		iVar0++;
	}
	Global_20094.f_161 = -99;
	Global_20094.f_162 = { 0f, 0f, 0f };
}

bool func_30(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1377170.f_203[iParam1];
			}
			break;
	}
	return MISC::IS_BIT_SET(Global_1377170.f_1048, iParam0);
}

void func_31()
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_21816 = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_19486.f_1 == 9) || Global_19485 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
		Global_20805 = 6;
		Global_19486.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(1);
		Global_20805 = 6;
		return;
	}
}

void func_32(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_20259 = { *uParam0 };
	Global_6672 = iParam1;
	StringCopy(&Global_20875, sParam2, 24);
	Global_21794 = iParam5;
	if (iParam3 == 0)
	{
		Global_21792 = 1;
		Global_21790 = 0;
	}
	else
	{
		Global_21792 = 0;
		Global_21790 = 1;
	}
	if (iParam4 == 0)
	{
		Global_21793 = 1;
		Global_21791 = 0;
	}
	else
	{
		Global_21793 = 0;
		Global_21791 = 1;
	}
}

int func_33(char* sParam0)
{
	if (func_4())
	{
		MemCopy(&uVar0, {func_9()}, 4);
		if (MISC::ARE_STRINGS_EQUAL(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_34()
{
	if (iLocal_54 == 1)
	{
		if (PED::IS_PED_INJURED(uLocal_91[0]))
		{
			return 1;
		}
	}
	if (iLocal_54 == 2)
	{
		if (PED::IS_PED_INJURED(uLocal_91[0]) && PED::IS_PED_INJURED(uLocal_91[1]))
		{
			return 1;
		}
	}
	return 0;
}

int func_35()
{
	if (iLocal_54 == 1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uLocal_91[0]))
		{
			return 1;
		}
	}
	if (iLocal_54 == 2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uLocal_91[0]) && !ENTITY::DOES_ENTITY_EXIST(uLocal_91[1]))
		{
			return 1;
		}
	}
	return 0;
}

void func_36()
{
	while (!func_60())
	{
		SYSTEM::WAIT(0);
	}
	func_40(27, iLocal_345);
	func_37();
	func_242();
}

void func_37()
{
	func_38();
}

int func_38()
{
	if (func_39(0))
	{
		return 0;
	}
	if (Global_98783.f_8)
	{
		if (Global_98783.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_98783.f_10 > 1)
	{
		return 0;
	}
	Global_98783.f_10++;
	return 1;
}

bool func_39(bool bParam0)
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-448212099) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_76870, 0);
}

void func_40(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_58();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_57(iParam0))
	{
		func_56(iParam0, iParam1);
		if (!func_55(51))
		{
			func_51("RE_REWARD", 1, 0, 4000, 10000, func_54(), 0, 138, 0);
			func_50(51);
		}
		if (func_49(iParam0))
		{
			Global_111638.f_24990.f_2 = 3;
		}
		if (func_48(iParam0, iParam1) != 322)
		{
			func_42(func_48(iParam0, iParam1), Local_44.x, Local_44.y);
		}
		Global_111626 = iParam1;
		if (Global_111624 == 0)
		{
			if (((Global_111627 == 1 || Global_111627 == 5) || Global_111627 == 11) || Global_111627 == 25)
			{
				func_41(2);
			}
			else if ((Global_111627 == 26 || Global_111627 == 8) || Global_111627 == 17)
			{
				func_41(7);
			}
			else
			{
				func_41(1);
			}
		}
	}
}

void func_41(int iParam0)
{
	Global_111624 = iParam0;
}

void func_42(int iParam0, var uParam1, var uParam2)
{
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_46((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_111638.f_10189[iParam0].f_5 == 1)
	{
		if (Global_111638.f_10189[iParam0].f_6 == 11 || Global_111638.f_10189[iParam0].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_111638.f_10189[iParam0].f_5 = 1;
		Global_111638.f_10189[iParam0].f_10 = uParam1;
		Global_111638.f_10189[iParam0].f_11 = uParam2;
		if (iParam0 == 287)
		{
			STATS::_UPDATE_STAT_INT(-2044299740, 50, 0);
		}
		if (iParam0 == 286)
		{
			STATS::_UPDATE_STAT_INT(86701099, 50, 0);
		}
		if (iParam0 == 299)
		{
			STATS::_UPDATE_STAT_INT(-375571184, 50, 0);
		}
	}
	if (bVar0)
	{
		func_43();
	}
}

void func_43()
{
	iVar0 = 0;
	Global_111374 = 0;
	Global_111375 = 0;
	Global_111376 = 0;
	Global_111377 = 0;
	Global_111378 = 0;
	Global_111379 = 0;
	Global_111380 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_111638.f_10189.f_3853;
	Global_111638.f_10189.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_111638.f_10189[iVar0].f_5 == 1)
		{
			switch (Global_111638.f_10189[iVar0].f_6)
			{
				case 1:
					Global_111374++;
					fVar1 = (fVar1 + Global_111638.f_10189[iVar0].f_4);
					break;
				
				case 3:
					Global_111375++;
					fVar2 = (fVar2 + Global_111638.f_10189[iVar0].f_4);
					break;
				
				case 5:
					Global_111376++;
					fVar3 = (fVar3 + Global_111638.f_10189[iVar0].f_4);
					break;
				
				case 7:
					Global_111377++;
					fVar4 = (fVar4 + Global_111638.f_10189[iVar0].f_4);
					break;
				
				case 9:
					Global_111378++;
					fVar5 = (fVar5 + (Global_111638.f_10189[iVar0].f_4 * 4f));
					break;
				
				case 11:
					Global_111379++;
					fVar6 = (fVar6 + Global_111638.f_10189[iVar0].f_4);
					break;
				
				case 13:
					Global_111380++;
					fVar7 = (fVar7 + Global_111638.f_10189[iVar0].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_111357 > 0)
	{
		if (Global_111374 == Global_111357)
		{
			fVar1 = 55f;
		}
	}
	if (Global_111358 > 0)
	{
		if (Global_111375 == Global_111358)
		{
			fVar2 = 10f;
		}
	}
	if (Global_111359 > 0)
	{
		if (Global_111376 == Global_111359)
		{
			fVar3 = 0f;
		}
	}
	if (Global_111360 > 0)
	{
		if (Global_111377 == Global_111360)
		{
			fVar4 = 10f;
		}
	}
	if (Global_111361 > 0)
	{
		if (((Global_111378 == Global_111361 || (Global_111361 * 10 / Global_111378) < 41) || Global_111378 > Global_111364) || Global_111378 == Global_111364)
		{
			if (!MISC::IS_BIT_SET(Global_111638.f_10189.f_3856, 14))
			{
				if (Global_111378 == Global_111361)
				{
					STATS::_UPDATE_STAT_INT(-2122623864, Global_111361, 0);
					MISC::SET_BIT(&(Global_111638.f_10189.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_111362 > 0)
	{
		if (Global_111379 == Global_111362)
		{
			fVar6 = 15f;
		}
	}
	if (Global_111363 > 0)
	{
		if (Global_111380 == Global_111363)
		{
			fVar7 = 5f;
		}
	}
	Global_111638.f_10189.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_111378 > Global_111364 || Global_111378 == Global_111364)
	{
		iVar9 = Global_111364;
	}
	else
	{
		iVar9 = Global_111378;
	}
	STATS::STAT_SET_INT(-1055525200, Global_111374, 1);
	STATS::STAT_SET_INT(-419750212, Global_111357, 1);
	STATS::STAT_SET_INT(1331385274, Global_111375, 1);
	STATS::STAT_SET_INT(542355616, Global_111358, 1);
	STATS::STAT_SET_INT(1561233577, Global_111376, 1);
	STATS::STAT_SET_INT(558499468, Global_111359, 1);
	STATS::STAT_SET_INT(-852659719, Global_111377, 1);
	STATS::STAT_SET_INT(-20401960, Global_111360, 1);
	STATS::STAT_SET_INT(-2122623864, iVar9, 1);
	STATS::STAT_SET_INT(-215705366, Global_111364, 1);
	STATS::STAT_SET_INT(-131898641, (Global_111380 + Global_111379), 1);
	STATS::STAT_SET_INT(-2086369560, (Global_111363 + Global_111362), 1);
	Global_111381 = (Global_111374 * 100 / Global_111357);
	Global_111383 = ((Global_111376 + Global_111375) * 100 / (Global_111359 + Global_111358));
	Global_111382 = ((Global_111377 + iVar9) * 100 / (Global_111360 + Global_111364));
	Global_111384 = ((Global_111379 + Global_111380) * 100 / (Global_111362 + Global_111363));
	STATS::STAT_SET_FLOAT(1215094015, Global_111638.f_10189.f_3853, 1);
	STATS::STAT_SET_INT(1813094653, Global_111381, 1);
	STATS::STAT_SET_INT(-1205712980, Global_111382, 1);
	STATS::STAT_SET_INT(480408826, Global_111383, 1);
	if (fVar8 > 0f && SYSTEM::FLOOR(fVar8) < SYSTEM::FLOOR(Global_111638.f_10189.f_3853))
	{
		func_45(13, SYSTEM::FLOOR(Global_111638.f_10189.f_3853));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_76622)
		{
			if (func_44() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_111372 = 0;
				}
				if (!Global_61512)
				{
					func_38();
				}
			}
		}
	}
}

int func_44()
{
	return Global_30768;
}

int func_45(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 78)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = PLAYER::_GET_ACHIEVEMENT_PROGRESS(iParam0);
	if (iParam1 > iVar0)
	{
		return PLAYER::_SET_ACHIEVEMENT_PROGRESS(iParam0, iParam1);
	}
	return 0;
}

int func_46(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -1)
	{
		iParam2 = func_47();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 0)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 192)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 513)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 705)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 3111)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 2919)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 4207)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 4335)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 6029)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 7385)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 7321)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar13 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 9361)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar14 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 15369)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar15 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 15562)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar16 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 15946)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar17 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 18098)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar17, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar18 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 22066)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar18, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar19 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 24962), 0, 1, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 24962)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar19, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar20 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 26810), 0, 1, iParam2, "_CASINOPSTAT_BOOL");
		iVar1 = ((iParam0 - 26810) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 26810)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar20, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar21 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 28098), 0, 1, iParam2, "_CASINOHSTPSTAT_BOOL");
		iVar1 = ((iParam0 - 28098) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 28098)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar21, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar22 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 28355), 0, 1, iParam2, "_HEIST3TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 28355) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 28355)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar22, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar23 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 30227), 0, 1, iParam2, "_SU20PSTAT_BOOL");
		iVar1 = ((iParam0 - 30227) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 30227)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar23, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar24 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 30355), 0, 1, iParam2, "_SU20TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 30355) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 30355)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar24, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_47()
{
	return Global_1312745;
}

int func_48(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 250;
			break;
		
		case 1:
			return 226;
			break;
		
		case 2:
			return 243;
			break;
		
		case 3:
			return 256;
			break;
		
		case 4:
			return 259;
			break;
		
		case 5:
			if (iParam1 == 1)
			{
				return 281;
			}
			if (iParam1 == 2)
			{
				return 282;
			}
			break;
		
		case 6:
			return 265;
			break;
		
		case 7:
			return 218;
			break;
		
		case 9:
			if (iParam1 == 1)
			{
				return 271;
			}
			if (iParam1 == 2)
			{
				return 272;
			}
			if (iParam1 == 3)
			{
				return 273;
			}
			if (iParam1 == 4)
			{
				return 274;
			}
			if (iParam1 == 5)
			{
				return 275;
			}
			if (iParam1 == 6)
			{
				return 276;
			}
			if (iParam1 == 7)
			{
				return 277;
			}
			if (iParam1 == 8)
			{
				return 278;
			}
			if (iParam1 == 9)
			{
				return 279;
			}
			if (iParam1 == 10)
			{
				return 280;
			}
			break;
		
		case 10:
			return 219;
			break;
		
		case 11:
			if (iParam1 == 1)
			{
				return 246;
			}
			if (iParam1 == 2)
			{
				return 247;
			}
			if (iParam1 == 3)
			{
				return 248;
			}
			if (iParam1 == 4)
			{
				return 249;
			}
			break;
		
		case 12:
			return 254;
			break;
		
		case 13:
			if (iParam1 == 1)
			{
				return 260;
			}
			if (iParam1 == 2)
			{
				return 261;
			}
			if (iParam1 == 3)
			{
				return 262;
			}
			if (iParam1 == 4)
			{
				return 264;
			}
			break;
		
		case 14:
			return 283;
			break;
		
		case 15:
			if (iParam1 == 1)
			{
				return 224;
			}
			if (iParam1 == 2)
			{
				return 225;
			}
			break;
		
		case 16:
			return 252;
			break;
		
		case 17:
			if (iParam1 == 1)
			{
				return 244;
			}
			if (iParam1 == 2)
			{
				return 245;
			}
			break;
		
		case 18:
			return 253;
			break;
		
		case 19:
			return 215;
			break;
		
		case 20:
			return 216;
			break;
		
		case 21:
			return 251;
			break;
		
		case 22:
			if (iParam1 == 1)
			{
				return 221;
			}
			if (iParam1 == 2)
			{
				return 222;
			}
			break;
		
		case 23:
			if (iParam1 == 1)
			{
				return 213;
			}
			if (iParam1 == 2)
			{
				return 214;
			}
			break;
		
		case 24:
			return 242;
			break;
		
		case 25:
			if (iParam1 == 1)
			{
				return 267;
			}
			if (iParam1 == 2)
			{
				return 268;
			}
			if (iParam1 == 3)
			{
				return 269;
			}
			break;
		
		case 8:
			return 255;
			break;
		
		case 26:
			if (iParam1 == 1)
			{
				return 227;
			}
			if (iParam1 == 2)
			{
				return 228;
			}
			break;
		
		case 27:
			if (iParam1 == 1)
			{
				return 257;
			}
			if (iParam1 == 2)
			{
				return 258;
			}
			break;
		
		case 28:
			return 217;
			break;
		
		case 29:
			if (iParam1 == 1)
			{
				return 229;
			}
			if (iParam1 == 2)
			{
				return 230;
			}
			if (iParam1 == 3)
			{
				return 231;
			}
			break;
		
		case 30:
			return 285;
			break;
		
		case 31:
			return 318;
			break;
		
		case 32:
			return 319;
			break;
		
		case 33:
			return 320;
			break;
	}
	return 322;
}

int func_49(int iParam0)
{
	switch (iParam0)
	{
		case 29:
		case 30:
		case 2:
		case 18:
			return 0;
			break;
	}
	return 1;
}

void func_50(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		MISC::SET_BIT(&(Global_111638.f_20405.f_150[iVar1]), iVar0);
	}
}

void func_51(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_52(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_52(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	if (MISC::ARE_STRINGS_EQUAL(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_111638.f_20405.f_145)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Global_111638.f_20405[iVar0]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_111638.f_20405.f_145 < 9)
	{
		StringCopy(&(Global_111638.f_20405[Global_111638.f_20405.f_145]), sParam0, 16);
		StringCopy(&(Global_111638.f_20405[Global_111638.f_20405.f_145].f_4), sParam1, 16);
		Global_111638.f_20405[Global_111638.f_20405.f_145].f_8 = (MISC::GET_GAME_TIMER() + iParam3);
		Global_111638.f_20405[Global_111638.f_20405.f_145].f_9 = iParam5;
		Global_111638.f_20405[Global_111638.f_20405.f_145].f_11 = iParam6;
		Global_111638.f_20405[Global_111638.f_20405.f_145].f_12 = uParam2;
		Global_111638.f_20405[Global_111638.f_20405.f_145].f_13 = iParam7;
		Global_111638.f_20405[Global_111638.f_20405.f_145].f_14 = iParam8;
		Global_111638.f_20405[Global_111638.f_20405.f_145].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_111638.f_20405[Global_111638.f_20405.f_145].f_10 = ((MISC::GET_GAME_TIMER() + iParam3) + iParam4);
		}
		else
		{
			Global_111638.f_20405[Global_111638.f_20405.f_145].f_10 = -1;
		}
		Global_111638.f_20405.f_145++;
		func_53();
	}
}

void func_53()
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_111638.f_20405.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_111638.f_20405.f_145)
	{
		if (MISC::IS_BIT_SET(Global_111638.f_20405[iVar0].f_11, 0))
		{
			if (Global_111638.f_20405[iVar0].f_12 > Global_111638.f_20405.f_146[0])
			{
				Global_111638.f_20405.f_146[0] = Global_111638.f_20405[iVar0].f_12;
			}
		}
		if (MISC::IS_BIT_SET(Global_111638.f_20405[iVar0].f_11, 1))
		{
			if (Global_111638.f_20405[iVar0].f_12 > Global_111638.f_20405.f_146[1])
			{
				Global_111638.f_20405.f_146[1] = Global_111638.f_20405[iVar0].f_12;
			}
		}
		if (MISC::IS_BIT_SET(Global_111638.f_20405[iVar0].f_11, 2))
		{
			if (Global_111638.f_20405[iVar0].f_12 > Global_111638.f_20405.f_146[2])
			{
				Global_111638.f_20405.f_146[2] = Global_111638.f_20405[iVar0].f_12;
			}
		}
		iVar0++;
	}
}

int func_54()
{
	func_23();
	switch (Global_111638.f_2358.f_539.f_4321)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 4;
			break;
	}
	return 0;
}

int func_55(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return MISC::IS_BIT_SET(Global_111638.f_20405.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_56(int iParam0, int iParam1)
{
	MISC::SET_BIT(&(Global_111638.f_24990.f_8[iParam0]), iParam1);
}

int func_57(int iParam0)
{
	iVar0 = 1;
	switch (iParam0)
	{
		case 1:
			iVar0 = 5;
			break;
		
		case 5:
			iVar0 = 2;
			break;
		
		case 9:
			iVar0 = 10;
			break;
		
		case 11:
			iVar0 = 4;
			break;
		
		case 13:
			iVar0 = 4;
			break;
		
		case 15:
			iVar0 = 2;
			break;
		
		case 17:
			iVar0 = 2;
			break;
		
		case 22:
			iVar0 = 2;
			break;
		
		case 23:
			iVar0 = 2;
			break;
		
		case 25:
			iVar0 = 3;
			break;
		
		case 26:
			iVar0 = 2;
			break;
		
		case 27:
			iVar0 = 2;
			break;
		
		case 29:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

int func_58()
{
	StringCopy(&Var0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	uVar16 = func_59(Var0);
	return uVar16;
}

int func_59(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (MISC::GET_HASH_KEY(&cParam0))
	{
		case -60745600:
			return 23;
			break;
		
		case 1149455824:
			return 0;
			break;
		
		case 1889800404:
			return 15;
			break;
		
		case 737712801:
			return 1;
			break;
		
		case 976199832:
			return 26;
			break;
		
		case 1531173018:
			return 29;
			break;
		
		case 1154171352:
			return 24;
			break;
		
		case -1325807529:
			return 2;
			break;
		
		case -2118978003:
			return 17;
			break;
		
		case -1363545320:
			return 11;
			break;
		
		case -129069433:
			return 16;
			break;
		
		case 1158398451:
			return 18;
			break;
		
		case -1669765523:
			return 12;
			break;
		
		case -1538568960:
			return 3;
			break;
		
		case -396020015:
			return 27;
			break;
		
		case 786118124:
			return 20;
			break;
		
		case -770891250:
			return 19;
			break;
		
		case 190582896:
			return 4;
			break;
		
		case -911763748:
			return 13;
			break;
		
		case -881321240:
			return 28;
			break;
		
		case 1337652317:
			return 7;
			break;
		
		case 1492712482:
			return 25;
			break;
		
		case -1612307213:
			return 10;
			break;
		
		case -201963189:
			return 22;
			break;
		
		case -1176354303:
			return 21;
			break;
		
		case 1735157309:
			return 9;
			break;
		
		case -1631807569:
			return 5;
			break;
		
		case 847041036:
			return 6;
			break;
		
		case -167923910:
			return 14;
			break;
		
		case 59976311:
			return 30;
			break;
		
		case 996703443:
			return 31;
			break;
		
		case -2088549946:
			return 32;
			break;
		
		case -1148693293:
			return 33;
			break;
	}
	return -1;
}

int func_60()
{
	return 1;
}

int func_61()
{
	if (Global_31006)
	{
		func_41(4);
		return 1;
	}
	return 0;
}

void func_62(int iParam0)
{
	Global_21816 = iParam0;
}

var func_63()
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

int func_64()
{
	if (Global_111638.f_24990.f_5 == 1000)
	{
		return 1;
	}
	return 0;
}

bool func_65()
{
	return Global_31005;
}

void func_66()
{
	func_242();
}

bool func_67(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_32(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_20812 = 0;
	Global_20814 = 0;
	Global_20819 = 0;
	Global_21796 = 0;
	Global_21798 = 0;
	Global_21802 = 0;
	Global_2621441 = 0;
	return func_11(sParam2, iParam3, 0);
}

void func_68()
{
	Global_19671 = 0;
	func_69();
}

void func_69()
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_21816 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
		Global_20805 = 6;
	}
}

int func_70(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = func_73(iParam0);
	if (!iVar0 == -1)
	{
		return 1;
	}
	iVar1 = func_72(iParam0);
	if (!iVar1 == -1)
	{
		return 1;
	}
	if (!bParam2)
	{
		if (iParam1 == 0 || iParam1 < 0)
		{
			return 0;
		}
	}
	iVar2 = func_71();
	if (iVar2 == -1)
	{
		return 0;
	}
	Global_42357[iVar2] = 0;
	Global_42357[iVar2].f_1 = iParam0;
	Global_42357[iVar2].f_2 = iParam1;
	Global_42357[iVar2].f_3 = iParam1;
	Global_42357[iVar2].f_4 = 0;
	if (iParam0 == PLAYER::PLAYER_PED_ID())
	{
		Global_42594 = 1;
	}
	Global_42355++;
	return 1;
}

int func_71()
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_42357[iVar0] == 13)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_72(int iParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_42357[iVar0].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_73(int iParam0)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_42383[iVar0].f_1)
		{
			return Global_42383[iVar0];
		}
		iVar0++;
	}
	return -1;
}

int func_74()
{
	VEHICLE::SET_DISABLE_RANDOM_TRAINS_THIS_FRAME(1);
	if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
	{
		return 1;
	}
	if ((MISC::IS_BULLET_IN_AREA(Local_152, 40f, 1) || MISC::IS_BULLET_IN_AREA(func_75(PLAYER::PLAYER_ID()), 10f, 0)) || MISC::IS_PROJECTILE_IN_AREA(Local_152 - Vector(40f, 40f, 40f), Local_152 + Vector(40f, 40f, 40f), 0))
	{
		return 1;
	}
	if (!PED::IS_PED_INJURED(uLocal_91[0]))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_91[0], PLAYER::PLAYER_PED_ID(), 1) || ENTITY::IS_ENTITY_IN_WATER(uLocal_91[0]))
		{
			return 1;
		}
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_91[0], PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1))
			{
				return 1;
			}
		}
		if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
		{
			if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), uLocal_91[0]) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), uLocal_91[0]))
			{
				if (PED::CAN_PED_SEE_HATED_PED(uLocal_91[0], PLAYER::PLAYER_PED_ID()))
				{
					return 1;
				}
			}
		}
	}
	else
	{
		return 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_91[1]))
	{
		if (!PED::IS_PED_INJURED(uLocal_91[1]))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_91[1], PLAYER::PLAYER_PED_ID(), 1))
			{
				return 1;
			}
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_91[1], PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1))
				{
					return 1;
				}
			}
			if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
			{
				if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), uLocal_91[1]) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), uLocal_91[1]))
				{
					if (PED::CAN_PED_SEE_HATED_PED(uLocal_91[1], PLAYER::PLAYER_PED_ID()))
					{
						return 1;
					}
				}
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_75(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), 0);
}

void func_76()
{
	switch (iLocal_55)
	{
		case 0:
			if (iLocal_54 == 1)
			{
				if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1017.461f, -1259.868f, 3.9183f, -1061.891f, -1424.029f, 24.4253f, 171.75f, 0, 1, 0) && CAM::IS_SPHERE_VISIBLE(Local_152, 1f)) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_152, 15f, 15f, 15f, 0, 1, 0))
				{
					if (HUD::DOES_BLIP_EXIST(uLocal_151))
					{
						HUD::REMOVE_BLIP(&uLocal_151);
					}
					if (!PED::IS_PED_INJURED(uLocal_91[0]))
					{
						if (!HUD::DOES_BLIP_EXIST(uLocal_155[0]))
						{
							uLocal_155[0] = func_169(uLocal_91[0], 0, 145);
							HUD::SHOW_HEIGHT_ON_BLIP(uLocal_155[0], 0);
						}
					}
					if (!func_196())
					{
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
						{
							iLocal_95 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
						}
						func_168(&uLocal_173, "REDR1AU", "REDR1_DCO", 4, 0, 0, 0, 0);
						func_159(1);
						func_158(1);
					}
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1011.144f, -1378.79f, 4.1997f, -1039.685f, -1337.61f, 9.7035f, 37.875f, 0, 1, 0))
					{
						if (!PED::IS_PED_INJURED(uLocal_91[0]) && !PED::IS_PED_INJURED(uLocal_91[1]))
						{
							func_157();
							TASK::TASK_PLAY_ANIM(uLocal_91[0], "random@drunk_driver_1", "drunk_argument_dd1", 2f, -2f, -1, 0, 0, 0, 0, 0);
							TASK::TASK_PLAY_ANIM(uLocal_91[1], "random@drunk_driver_1", "drunk_argument_dd2", 2f, -2f, -1, 0, 0, 0, 0, 0);
							iLocal_123 = (MISC::GET_GAME_TIMER() + 60000);
							if (HUD::DOES_BLIP_EXIST(uLocal_155[0]))
							{
								HUD::SHOW_HEIGHT_ON_BLIP(uLocal_155[0], 1);
							}
							iLocal_55 = 1;
						}
					}
				}
			}
			if (iLocal_54 == 2)
			{
				if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1820.238f, 3671.948f, 30.8437f, 1957.818f, 3751.887f, 55.4436f, 159.9375f, 0, 1, 0) && CAM::IS_SPHERE_VISIBLE(Local_152, 1f)) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_152, 15f, 15f, 15f, 0, 1, 0))
				{
					func_156();
					if (!func_196())
					{
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
						{
							iLocal_95 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
						}
						func_159(1);
						func_158(1);
					}
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1877.761f, 3727.7f, 31.882f, 1896.962f, 3693.83f, 34.9925f, 19.1875f, 0, 1, 0))
					{
						func_67(&uLocal_173, "REDR2AU", "REDR2_DCA", 4, 0, 0, 0);
						if (HUD::DOES_BLIP_EXIST(uLocal_155[0]))
						{
							HUD::SHOW_HEIGHT_ON_BLIP(uLocal_155[0], 1);
						}
						if (HUD::DOES_BLIP_EXIST(uLocal_155[1]))
						{
							HUD::SHOW_HEIGHT_ON_BLIP(uLocal_155[1], 1);
						}
						iLocal_123 = (MISC::GET_GAME_TIMER() + 120000);
						iLocal_55 = 3;
					}
				}
			}
			break;
		
		case 1:
			if (iLocal_123 < MISC::GET_GAME_TIMER())
			{
				if (!PED::IS_PED_INJURED(uLocal_91[0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_94, 0))
				{
					TASK::OPEN_SEQUENCE_TASK(&uLocal_99);
					TASK::TASK_LOOK_AT_ENTITY(0, uLocal_91[1], 7000, 2060, 4);
					TASK::TASK_PAUSE(0, 2500);
					TASK::TASK_ENTER_VEHICLE(0, iLocal_94, -1, -1, 1f, 1, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_99);
					TASK::TASK_PERFORM_SEQUENCE(uLocal_91[0], uLocal_99);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_99);
				}
				if (!PED::IS_PED_INJURED(uLocal_91[1]))
				{
					TASK::OPEN_SEQUENCE_TASK(&uLocal_99);
					TASK::TASK_LOOK_AT_ENTITY(0, uLocal_91[0], 7000, 2060, 4);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1052.215f, -1354.937f, 4.3754f, 1f, -1, 1f, 0, 1193033728);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1061.464f, -1384.922f, 4.2462f, 1f, -1, 1f, 1, 1193033728);
					TASK::TASK_WANDER_STANDARD(0, 1193033728, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_99);
					TASK::TASK_PERFORM_SEQUENCE(uLocal_91[1], uLocal_99);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_99);
				}
				SYSTEM::SETTIMERA(0);
				iLocal_55 = 3;
			}
			if (!PED::IS_PED_INJURED(uLocal_91[0]))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_91[0], 8f, 8f, 4f, 0, 1, 0))
				{
					if (PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), uLocal_91[0], 80f))
					{
						bLocal_121 = true;
						SYSTEM::SETTIMERA(0);
						iLocal_55 = 4;
					}
				}
				else if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_91[0], 30f, 30f, 30f, 0, 1, 0))
				{
					AUDIO::_0xB542DE8C3D1CB210(1);
				}
				else
				{
					AUDIO::_0xB542DE8C3D1CB210(0);
				}
			}
			break;
		
		case 3:
			if (iLocal_54 == 1)
			{
				if (!PED::IS_PED_INJURED(uLocal_91[0]))
				{
					if (!PED::IS_PED_INJURED(uLocal_91[1]))
					{
						if (func_67(&uLocal_173, "REDR1AU", "REDR1_DCL", 4, 0, 0, 0))
						{
							SYSTEM::SETTIMERA(0);
							iLocal_55 = 4;
						}
					}
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_91[0], 8f, 8f, 4f, 0, 1, 0))
					{
						if (PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), uLocal_91[0], 80f))
						{
							bLocal_121 = true;
							SYSTEM::SETTIMERA(0);
							iLocal_55 = 4;
						}
					}
				}
			}
			if (iLocal_54 == 2)
			{
				if (!PED::IS_PED_INJURED(uLocal_91[0]))
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_91[0], 30f, 30f, 30f, 0, 1, 0))
					{
						func_155();
						if (func_154())
						{
							func_62(0);
						}
					}
					else if (func_4())
					{
						func_62(1);
					}
				}
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_68, 15f, 15f, 15f, 0, 1, 0) && !PED::IS_PED_TRYING_TO_ENTER_A_LOCKED_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					if (!PED::IS_PED_INJURED(uLocal_91[0]))
					{
						if (PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), uLocal_91[0], 80f))
						{
							if (PED::CAN_PED_SEE_HATED_PED(uLocal_91[0], PLAYER::PLAYER_PED_ID()))
							{
								if (!PED::IS_PED_INJURED(uLocal_91[0]))
								{
									TASK::OPEN_SEQUENCE_TASK(&uLocal_99);
									TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2060, 4);
									TASK::TASK_PLAY_ANIM(0, "random@drunk_driver_2", "exit_1", 8f, -8f, -1, 0, 0, 0, 0, 0);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
									TASK::CLOSE_SEQUENCE_TASK(uLocal_99);
									TASK::TASK_PERFORM_SEQUENCE(uLocal_91[0], uLocal_99);
									TASK::CLEAR_SEQUENCE_TASK(&uLocal_99);
								}
								if (!PED::IS_PED_INJURED(uLocal_91[1]))
								{
									TASK::TASK_LOOK_AT_ENTITY(uLocal_91[1], PLAYER::PLAYER_PED_ID(), -1, 2060, 4);
								}
								SYSTEM::SETTIMERA(0);
								iLocal_55 = 4;
							}
						}
					}
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1889.121f, 3715.057f, 31.844f, 1895.608f, 3703.586f, 34.8272f, 12.4375f, 0, 1, 0))
				{
					if (!PED::IS_PED_INJURED(uLocal_91[0]))
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_99);
						TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2060, 4);
						TASK::TASK_PLAY_ANIM(0, "random@drunk_driver_2", "exit_1", 8f, -8f, -1, 0, 0, 0, 0, 0);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_99);
						TASK::TASK_PERFORM_SEQUENCE(uLocal_91[0], uLocal_99);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_99);
						if (!PED::IS_PED_INJURED(uLocal_91[1]))
						{
							TASK::TASK_LOOK_AT_ENTITY(uLocal_91[1], PLAYER::PLAYER_PED_ID(), -1, 2060, 4);
						}
						SYSTEM::SETTIMERA(0);
						iLocal_55 = 4;
					}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_94, 0))
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_94, 1.5f, 1.5f, 5f, 0, 1, 0) && PED::IS_PED_TRYING_TO_ENTER_A_LOCKED_VEHICLE(PLAYER::PLAYER_PED_ID()))
					{
						if (func_154())
						{
							func_62(0);
						}
						func_68();
						SYSTEM::WAIT(0);
						if (func_67(&uLocal_173, "REDR2AU", "REDR2_TRY", 4, 0, 0, 0))
						{
							iLocal_170 = 2;
							iLocal_63 = 0;
							while (iLocal_63 <= 1)
							{
								if (HUD::DOES_BLIP_EXIST(uLocal_155[iLocal_63]))
								{
									HUD::REMOVE_BLIP(&(uLocal_155[iLocal_63]));
								}
								iLocal_63++;
							}
							if (!HUD::DOES_BLIP_EXIST(uLocal_158))
							{
								uLocal_158 = func_152(iLocal_94, 0, 0);
							}
							if (!PED::IS_PED_INJURED(uLocal_91[0]))
							{
								TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_91[0]);
							}
							iLocal_55 = 4;
						}
					}
				}
				if (iLocal_123 < MISC::GET_GAME_TIMER())
				{
					if (func_154())
					{
						func_62(0);
					}
					if (func_67(&uLocal_173, "REDR2AU", "REDR2_DRV", 4, 0, 0, 0))
					{
						if ((!PED::IS_PED_INJURED(uLocal_91[0]) && !PED::IS_PED_INJURED(uLocal_91[1])) && ENTITY::DOES_ENTITY_EXIST(iLocal_94))
						{
							TASK::OPEN_SEQUENCE_TASK(&uLocal_99);
							TASK::TASK_LOOK_AT_ENTITY(0, uLocal_91[1], -1, 2060, 4);
							TASK::TASK_ENTER_VEHICLE(0, iLocal_94, -1, -1, 1f, 1, 0);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_99);
							TASK::TASK_PERFORM_SEQUENCE(uLocal_91[0], uLocal_99);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_99);
							TASK::OPEN_SEQUENCE_TASK(&uLocal_99);
							TASK::TASK_LOOK_AT_ENTITY(0, uLocal_91[0], -1, 2060, 4);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, uLocal_91[0], 0);
							TASK::TASK_ENTER_VEHICLE(0, iLocal_94, -1, 0, 1f, 1, 0);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_99);
							TASK::TASK_PERFORM_SEQUENCE(uLocal_91[1], uLocal_99);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_99);
							iLocal_63 = 0;
							while (iLocal_63 <= 1)
							{
								if (HUD::DOES_BLIP_EXIST(uLocal_155[iLocal_63]))
								{
									HUD::REMOVE_BLIP(&(uLocal_155[iLocal_63]));
								}
								iLocal_63++;
							}
							iLocal_55 = 2;
						}
					}
				}
			}
			break;
		
		case 4:
			if (iLocal_54 == 1)
			{
				switch (iLocal_170)
				{
					case 0:
						if (!PED::IS_PED_INJURED(uLocal_91[0]) && !PED::IS_PED_INJURED(uLocal_91[1]))
						{
							if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_91[0], 8f, 8f, 4f, 0, 1, 0) || bLocal_121)
							{
								AUDIO::_0xB542DE8C3D1CB210(0);
								TASK::TASK_LOOK_AT_ENTITY(uLocal_91[0], PLAYER::PLAYER_PED_ID(), -1, 2060, 4);
								TASK::TASK_LOOK_AT_ENTITY(uLocal_91[1], PLAYER::PLAYER_PED_ID(), -1, 2060, 4);
								TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_91[0], -1, 2060, 4);
								if ((MISC::GET_GAME_TIMER() + 50000) > iLocal_123 || PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID()))
								{
									func_6();
									if (bLocal_121)
									{
										if (!func_4())
										{
											if (func_22() == 0)
											{
												if (func_67(&uLocal_173, "REDR1AU", "REDR1_HYM", 4, 0, 0, 0))
												{
													SYSTEM::SETTIMERA(0);
													iLocal_170++;
												}
											}
											else if (func_22() == 1)
											{
												if (func_67(&uLocal_173, "REDR1AU", "REDR1_HYF", 4, 0, 0, 0))
												{
													SYSTEM::SETTIMERA(0);
													iLocal_170++;
												}
											}
											else if (func_22() == 2)
											{
												if (func_67(&uLocal_173, "REDR1AU", "REDR1_HYT", 4, 0, 0, 0))
												{
													SYSTEM::SETTIMERA(0);
													iLocal_170++;
												}
											}
										}
									}
									else
									{
										iLocal_170++;
									}
								}
							}
						}
						break;
					
					case 1:
						if (!func_4())
						{
							if (func_151())
							{
								if (!PED::IS_PED_INJURED(uLocal_91[0]))
								{
									TASK::OPEN_SEQUENCE_TASK(&uLocal_99);
									TASK::TASK_PLAY_ANIM(0, "random@drunk_driver_1", "drunk_breakout_dd1", 2f, -2f, -1, 0, 0, 0, 0, 0);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
									TASK::CLOSE_SEQUENCE_TASK(uLocal_99);
									TASK::TASK_PERFORM_SEQUENCE(uLocal_91[0], uLocal_99);
									TASK::CLEAR_SEQUENCE_TASK(&uLocal_99);
									if (!PED::IS_PED_INJURED(uLocal_91[1]))
									{
										TASK::OPEN_SEQUENCE_TASK(&uLocal_99);
										TASK::TASK_PLAY_ANIM(0, "random@drunk_driver_1", "drunk_breakout_dd2", 2f, -2f, -1, 0, 0, 0, 0, 0);
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, uLocal_91[0], 0);
										TASK::TASK_PAUSE(0, 3000);
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1052.215f, -1354.937f, 4.3754f, 1f, -1, 1f, 0, 1193033728);
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1061.464f, -1384.922f, 4.2462f, 1f, -1, 1f, 1, 1193033728);
										TASK::TASK_WANDER_STANDARD(0, 1193033728, 0);
										TASK::CLOSE_SEQUENCE_TASK(uLocal_99);
										TASK::TASK_PERFORM_SEQUENCE(uLocal_91[1], uLocal_99);
										TASK::CLEAR_SEQUENCE_TASK(&uLocal_99);
									}
									func_150();
								}
							}
							else
							{
								if (!PED::IS_PED_INJURED(uLocal_91[0]))
								{
									if (PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), uLocal_91[0], 80f))
									{
										TASK::TASK_LOOK_AT_ENTITY(uLocal_91[0], PLAYER::PLAYER_PED_ID(), 10000, 2060, 4);
										TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_91[0], 10000, 2060, 4);
										func_6();
										SYSTEM::WAIT(0);
										iLocal_170++;
									}
									else
									{
										func_149(uLocal_91[0], &(uLocal_65[0]));
									}
								}
								if (!func_4())
								{
									iLocal_170++;
								}
							}
						}
						break;
					
					case 2:
						if (func_151())
						{
							iLocal_170 = 6;
						}
						else
						{
							iLocal_170++;
						}
						break;
					
					case 3:
						if (!iLocal_104)
						{
							if (SYSTEM::TIMERA() > 1500)
							{
								if (!PED::IS_PED_INJURED(uLocal_91[0]))
								{
									TASK::OPEN_SEQUENCE_TASK(&uLocal_99);
									TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 10000, 2060, 4);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
									TASK::TASK_PAUSE(0, 500);
									TASK::CLOSE_SEQUENCE_TASK(uLocal_99);
									TASK::TASK_PERFORM_SEQUENCE(uLocal_91[0], uLocal_99);
									TASK::CLEAR_SEQUENCE_TASK(&uLocal_99);
									SYSTEM::SETTIMERA(0);
									iLocal_104 = 1;
								}
							}
						}
						func_149(uLocal_91[0], &(uLocal_65[0]));
						if (!func_4())
						{
							if (func_67(&uLocal_173, "REDR1AU", "REDR1_LFT", 4, 0, 0, 0))
							{
								iLocal_170++;
							}
						}
						break;
					
					case 4:
						if (!func_151())
						{
							if (!func_4())
							{
								if (func_67(&uLocal_173, "REDR1AU", "REDR1_PLS", 4, 0, 0, 0))
								{
									TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
									if (HUD::DOES_BLIP_EXIST(uLocal_155[0]))
									{
										HUD::REMOVE_BLIP(&(uLocal_155[0]));
									}
									if (HUD::DOES_BLIP_EXIST(uLocal_155[1]))
									{
										HUD::REMOVE_BLIP(&(uLocal_155[1]));
									}
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_94, 0))
									{
										VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_94, 1);
										if (!PED::IS_PED_INJURED(uLocal_91[0]))
										{
											TASK::TASK_ENTER_VEHICLE(uLocal_91[0], iLocal_94, -1, 0, 1f, 1, 0);
										}
									}
									iLocal_170++;
								}
							}
						}
						else
						{
							if (HUD::DOES_BLIP_EXIST(uLocal_155[0]))
							{
								HUD::REMOVE_BLIP(&(uLocal_155[0]));
							}
							if (HUD::DOES_BLIP_EXIST(uLocal_155[1]))
							{
								HUD::REMOVE_BLIP(&(uLocal_155[1]));
							}
							iLocal_170++;
						}
						break;
					
					case 5:
						if (func_151())
						{
							if (!PED::IS_PED_INJURED(uLocal_91[0]))
							{
								if (!PED::IS_PED_IN_GROUP(uLocal_91[0]))
								{
									TASK::CLEAR_PED_TASKS(uLocal_91[0]);
									PED::SET_PED_AS_GROUP_MEMBER(uLocal_91[0], func_63());
									PED::SET_PED_NEVER_LEAVES_GROUP(uLocal_91[0], 1);
									PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(uLocal_91[0], 0);
								}
								PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, uLocal_100, 1862763509);
								func_148();
							}
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
							{
								if (PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0) != iLocal_94)
								{
									if (!func_4())
									{
										if (func_22() == 0)
										{
											if (func_67(&uLocal_173, "REDR1AU", "REDR1_TKM", 4, 0, 0, 0))
											{
												iLocal_55 = 7;
											}
										}
										else if (func_22() == 1)
										{
											if (func_67(&uLocal_173, "REDR1AU", "REDR1_TKF", 4, 0, 0, 0))
											{
												iLocal_55 = 7;
											}
										}
										else if (func_22() == 2)
										{
											if (func_67(&uLocal_173, "REDR1AU", "REDR1_TKT", 4, 0, 0, 0))
											{
												iLocal_55 = 7;
											}
										}
									}
								}
								else
								{
									iLocal_55 = 7;
								}
							}
						}
						break;
					
					case 6:
						func_149(uLocal_91[0], &(uLocal_65[0]));
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
						{
							if (func_151())
							{
								if (!func_4())
								{
									if (func_67(&uLocal_173, "REDR1AU", "REDR1_AKB", 4, 0, 0, 0))
									{
										iLocal_170 = 10;
									}
								}
							}
							else
							{
								iLocal_170 = 4;
							}
						}
						else
						{
							iLocal_170 = 4;
						}
						break;
					
					case 7:
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
						{
							if (func_151())
							{
								if (!func_4())
								{
									if (func_22() == 0)
									{
										if (func_67(&uLocal_173, "REDR1AU", "REDR1_JIA", 4, 0, 0, 0))
										{
											SYSTEM::SETTIMERA(0);
											iLocal_170 = 10;
										}
									}
									else if (func_22() == 1)
									{
										if (func_67(&uLocal_173, "REDR1AU", "REDR1_JIB", 4, 0, 0, 0))
										{
											SYSTEM::SETTIMERA(0);
											iLocal_170 = 10;
										}
									}
									else if (func_22() == 2)
									{
										if (func_67(&uLocal_173, "REDR1AU", "REDR1_JIC", 4, 0, 0, 0))
										{
											SYSTEM::SETTIMERA(0);
											iLocal_170 = 10;
										}
									}
								}
							}
							else
							{
								iLocal_170 = 4;
							}
						}
						else
						{
							iLocal_170 = 4;
						}
						break;
					
					case 10:
						if (func_151())
						{
							if (!PED::IS_PED_INJURED(uLocal_91[0]))
							{
								if (!PED::IS_PED_IN_GROUP(uLocal_91[0]))
								{
									TASK::CLEAR_PED_TASKS(uLocal_91[0]);
									PED::SET_PED_AS_GROUP_MEMBER(uLocal_91[0], func_63());
									PED::SET_PED_NEVER_LEAVES_GROUP(uLocal_91[0], 1);
									PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(uLocal_91[0], 0);
								}
								PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, uLocal_100, 1862763509);
								func_148();
							}
							iLocal_170++;
						}
						else
						{
							iLocal_170 = 4;
						}
						break;
					
					case 11:
						iLocal_55 = 7;
						break;
					}
			}
			if (iLocal_54 == 2)
			{
				switch (iLocal_170)
				{
					case 0:
						if (!PED::IS_PED_INJURED(uLocal_91[0]) && !PED::IS_PED_INJURED(uLocal_91[1]))
						{
							if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_91[0], 10f, 10f, 10f, 0, 1, 0))
							{
								if (PED::IS_PED_FACING_PED(uLocal_91[0], PLAYER::PLAYER_PED_ID(), 50f))
								{
									TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_91[0], -1, 2060, 4);
									TASK::TASK_LOOK_AT_ENTITY(uLocal_91[0], PLAYER::PLAYER_PED_ID(), -1, 2060, 4);
									TASK::TASK_LOOK_AT_ENTITY(uLocal_91[1], PLAYER::PLAYER_PED_ID(), -1, 2060, 4);
									if (func_154())
									{
										func_62(0);
									}
									func_6();
									SYSTEM::WAIT(0);
									if (func_67(&uLocal_173, "REDR2AU", "REDR2_AKA", 4, 0, 0, 0))
									{
										iLocal_170++;
									}
								}
								else
								{
									func_149(uLocal_91[0], &(uLocal_65[0]));
								}
							}
						}
						break;
					
					case 1:
						if (!PED::IS_PED_INJURED(uLocal_91[0]))
						{
							TASK::OPEN_SEQUENCE_TASK(&uLocal_99);
							TASK::TASK_PAUSE(0, 500);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_99);
							TASK::TASK_PERFORM_SEQUENCE(uLocal_91[0], uLocal_99);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_99);
							SYSTEM::SETTIMERA(0);
							iLocal_170++;
						}
						break;
					
					case 2:
						func_149(uLocal_91[0], &(uLocal_65[0]));
						if (!PED::IS_PED_TRYING_TO_ENTER_A_LOCKED_VEHICLE(PLAYER::PLAYER_PED_ID()))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_94, 0))
							{
								VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_94, 1);
							}
						}
						if (SYSTEM::TIMERA() > 8000)
						{
							if (HUD::DOES_BLIP_EXIST(uLocal_155[0]))
							{
								HUD::REMOVE_BLIP(&(uLocal_155[0]));
							}
							if (HUD::DOES_BLIP_EXIST(uLocal_155[1]))
							{
								HUD::REMOVE_BLIP(&(uLocal_155[1]));
							}
							if (!HUD::DOES_BLIP_EXIST(uLocal_158))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_94, 0))
								{
									uLocal_158 = func_152(iLocal_94, 0, 0);
									VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_94, 1);
								}
							}
						}
						if (!func_4())
						{
							if (!PED::IS_PED_INJURED(uLocal_91[0]))
							{
								if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_91[0], 20f, 20f, 20f, 0, 1, 0) && SYSTEM::TIMERA() > 9500)
								{
									iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
									if (iVar0 < 60)
									{
										if (func_67(&uLocal_173, "REDR2AU", "REDR2_PLS", 4, 0, 0, 0))
										{
											SYSTEM::SETTIMERA(0);
										}
									}
									else if (func_67(&uLocal_173, "REDR2AU", "REDR2_CAR", 4, 0, 0, 0))
									{
										SYSTEM::SETTIMERA(0);
									}
								}
							}
						}
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_94, 0))
						{
							if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_94, 1))
							{
								iLocal_55 = 7;
							}
						}
						break;
					}
			}
			if (iLocal_54 == 1)
			{
				if (!PED::IS_PED_INJURED(uLocal_91[0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_94, 0))
				{
					if (SYSTEM::TIMERA() > 50000 || VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_94, -1, 0) == uLocal_91[0])
					{
						if (func_67(&uLocal_173, "REDR1AU", "REDR1_FU", 4, 0, 0, 0))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_94, 0) && !VEHICLE::IS_VEHICLE_STUCK_ON_ROOF(iLocal_94))
							{
								if (!PED::IS_PED_INJURED(uLocal_91[0]))
								{
									if (VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_94, -1, 0) && PED::IS_PED_IN_VEHICLE(uLocal_91[0], iLocal_94, 0))
									{
										TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(uLocal_91[0], iLocal_94, 0);
										iLocal_55 = 2;
									}
									else if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_94, -1, 0) == uLocal_91[0])
									{
										iLocal_55 = 2;
									}
									else if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_94, -1, 0) == PLAYER::PLAYER_PED_ID())
									{
										iLocal_55 = 7;
									}
									else
									{
										func_70(uLocal_91[0], 120000, 0);
										TASK::TASK_WANDER_STANDARD(uLocal_91[0], 1193033728, 0);
										PED::SET_PED_KEEP_TASK(uLocal_91[0], 1);
										SYSTEM::WAIT(0);
										func_66();
									}
								}
							}
							else if (!PED::IS_PED_INJURED(uLocal_91[0]))
							{
								func_70(uLocal_91[0], 120000, 0);
								TASK::TASK_WANDER_STANDARD(uLocal_91[0], 1193033728, 0);
								PED::SET_PED_KEEP_TASK(uLocal_91[0], 1);
								SYSTEM::WAIT(0);
								func_66();
							}
						}
					}
				}
			}
			if (iLocal_54 == 2)
			{
				if (SYSTEM::TIMERA() > 60000)
				{
					if (func_67(&uLocal_173, "REDR2AU", "REDR2_FU", 4, 0, 0, 0))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_94, 0))
						{
							if (VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_94, -1, 0))
							{
								if (!PED::IS_PED_INJURED(uLocal_91[0]))
								{
									TASK::OPEN_SEQUENCE_TASK(&uLocal_99);
									TASK::TASK_CLEAR_LOOK_AT(0);
									TASK::TASK_ENTER_VEHICLE(0, iLocal_94, -1, -1, 1f, 1, 0);
									TASK::CLOSE_SEQUENCE_TASK(uLocal_99);
									TASK::TASK_PERFORM_SEQUENCE(uLocal_91[0], uLocal_99);
									TASK::CLEAR_SEQUENCE_TASK(&uLocal_99);
								}
							}
							if (!PED::IS_PED_INJURED(uLocal_91[1]))
							{
								TASK::OPEN_SEQUENCE_TASK(&uLocal_99);
								TASK::TASK_CLEAR_LOOK_AT(0);
								TASK::TASK_ENTER_VEHICLE(0, iLocal_94, -1, 0, 1f, 1, 0);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_99);
								TASK::TASK_PERFORM_SEQUENCE(uLocal_91[1], uLocal_99);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_99);
							}
							iLocal_55 = 2;
						}
					}
				}
			}
			break;
		
		case 2:
			if (iLocal_54 == 1)
			{
				if (!PED::IS_PED_INJURED(uLocal_91[0]))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_94, 0))
					{
						if (PED::IS_PED_IN_VEHICLE(uLocal_91[0], iLocal_94, 0))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_91[0], 355471868) != 1 && TASK::GET_SCRIPT_TASK_STATUS(uLocal_91[0], 355471868) != 0)
							{
								VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_94, 5f);
								VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(iLocal_94, 1);
								TASK::OPEN_SEQUENCE_TASK(&uLocal_99);
								TASK::TASK_VEHICLE_MISSION_COORS_TARGET(0, iLocal_94, -1016.152f, -1352.855f, 4.4854f, 4, 50f, 262144, -1f, 100f, 1);
								TASK::TASK_VEHICLE_MISSION_COORS_TARGET(0, iLocal_94, -1005.757f, -1353.806f, 4.4756f, 4, 50f, 262144, -1f, 100f, 1);
								TASK::TASK_VEHICLE_MISSION_COORS_TARGET(0, iLocal_94, -989.2302f, -1354.278f, -7.3581f, 4, 50f, 262144, -1f, 100f, 1);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_99);
								TASK::TASK_PERFORM_SEQUENCE(uLocal_91[0], uLocal_99);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_99);
								PED::SET_PED_KEEP_TASK(uLocal_91[0], 1);
								func_66();
							}
						}
					}
				}
			}
			if (iLocal_54 == 2)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_94, 0))
				{
					if (!PED::IS_PED_INJURED(uLocal_91[0]) && !PED::IS_PED_INJURED(uLocal_91[1]))
					{
						if (PED::IS_PED_SITTING_IN_VEHICLE(uLocal_91[0], iLocal_94) && PED::IS_PED_SITTING_IN_VEHICLE(uLocal_91[1], iLocal_94))
						{
							VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(iLocal_94, 1);
							TASK::CLEAR_PED_TASKS(uLocal_91[1]);
							TASK::TASK_STAND_STILL(uLocal_91[1], -1);
							PED::SET_PED_KEEP_TASK(uLocal_91[1], 1);
							iLocal_55 = 5;
						}
						if (!iLocal_101)
						{
							if (PED::IS_PED_SITTING_IN_VEHICLE(uLocal_91[0], iLocal_94) && !PED::IS_PED_SITTING_IN_VEHICLE(uLocal_91[1], iLocal_94))
							{
								TASK::CLEAR_PED_TASKS(uLocal_91[0]);
								TASK::TASK_STAND_STILL(uLocal_91[0], -1);
							}
							if (!PED::IS_PED_SITTING_IN_VEHICLE(uLocal_91[0], iLocal_94) && PED::IS_PED_SITTING_IN_VEHICLE(uLocal_91[1], iLocal_94))
							{
								TASK::CLEAR_PED_TASKS(uLocal_91[1]);
								TASK::TASK_STAND_STILL(uLocal_91[1], -1);
							}
							iLocal_101 = 1;
						}
					}
				}
			}
			break;
		
		case 5:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_94, 0))
			{
				if (!PED::IS_PED_INJURED(uLocal_91[0]))
				{
					TASK::CLEAR_PED_TASKS(uLocal_91[0]);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_99);
					TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_94, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_94, 0f, 2f, 0f), 10f, 0, iLocal_98, 262144, 5f, -1f);
					TASK::TASK_VEHICLE_TEMP_ACTION(0, iLocal_94, 24, 500);
					TASK::TASK_VEHICLE_TEMP_ACTION(0, iLocal_94, 9, 1500);
					TASK::TASK_VEHICLE_TEMP_ACTION(0, iLocal_94, 24, 500);
					TASK::TASK_VEHICLE_TEMP_ACTION(0, iLocal_94, 11, 1500);
					TASK::TASK_VEHICLE_MISSION_COORS_TARGET(0, iLocal_94, 2185.817f, 3915.471f, 27.9257f, 4, 30f, 262144, 0f, 0f, 1);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_99);
					TASK::TASK_PERFORM_SEQUENCE(uLocal_91[0], uLocal_99);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_99);
					PED::SET_PED_KEEP_TASK(uLocal_91[0], 1);
				}
			}
			iLocal_55 = 6;
			break;
		
		case 6:
			if (!PED::IS_PED_INJURED(uLocal_91[0]))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_91[0], 242628503) == 1)
				{
					if (TASK::GET_SEQUENCE_PROGRESS(uLocal_91[0]) == 5)
					{
						func_66();
					}
				}
			}
			break;
		
		case 7:
			if (iLocal_54 == 1)
			{
				if (!PED::IS_PED_INJURED(uLocal_91[1]))
				{
					if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_91[1], 50f, 50f, 50f, 0, 1, 0))
					{
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_91[1]));
					}
				}
				switch (iLocal_64)
				{
					case 0:
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
						{
							if (!HUD::DOES_BLIP_EXIST(uLocal_155[0]))
							{
								uLocal_155[0] = func_169(uLocal_91[0], 0, 145);
							}
							iLocal_64++;
							SYSTEM::SETTIMERA(0);
						}
						break;
					
					case 1:
						if (SYSTEM::TIMERA() > 1000)
						{
							if (!PED::IS_PED_INJURED(uLocal_91[0]))
							{
								if (func_151())
								{
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), 0))
									{
										fLocal_164 = func_147(PLAYER::PLAYER_PED_ID(), uLocal_91[0], 1);
										iLocal_64++;
									}
								}
								else if (!iLocal_119)
								{
									if (func_67(&uLocal_173, "REDR1AU", "REDR1_LFC", 4, 0, 0, 0))
									{
										iLocal_119 = 1;
									}
								}
							}
						}
						break;
					
					case 2:
						func_146();
						if (!PED::IS_PED_INJURED(uLocal_91[0]))
						{
							if (func_151())
							{
								if (!iLocal_118)
								{
									if (func_147(PLAYER::PLAYER_PED_ID(), uLocal_91[0], 1) > (fLocal_164 + 5f))
									{
										if (func_67(&uLocal_173, "REDR1AU", "REDR1_LEA", 4, 0, 0, 0))
										{
											iLocal_118 = 1;
										}
									}
								}
							}
							else if (!iLocal_119)
							{
								if (func_67(&uLocal_173, "REDR1AU", "REDR1_LFC", 4, 0, 0, 0))
								{
									iLocal_119 = 1;
								}
							}
						}
						if (func_2())
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_94, 0))
							{
								VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_94, 1);
							}
							if (HUD::DOES_BLIP_EXIST(uLocal_155[0]))
							{
								HUD::REMOVE_BLIP(&(uLocal_155[0]));
							}
							if (func_22() == 2 && !func_64())
							{
								if (!HUD::DOES_BLIP_EXIST(uLocal_103))
								{
									uLocal_103 = func_144(Local_87, 0);
									HUD::SET_BLIP_SPRITE(uLocal_103, 269);
									func_142();
								}
							}
							iLocal_62 = 1;
							iLocal_64++;
						}
						if (!PED::IS_PED_INJURED(uLocal_91[0]))
						{
							if (func_147(PLAYER::PLAYER_PED_ID(), uLocal_91[0], 1) > 50f)
							{
								func_66();
							}
						}
						break;
					
					case 3:
						if (!func_4())
						{
							SYSTEM::WAIT(1500);
							TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
							if (func_22() == 0)
							{
								if (func_67(&uLocal_173, "REDR1AU", "REDR1_WHA", 4, 0, 0, 0))
								{
									iLocal_64++;
								}
							}
							else if (func_22() == 1)
							{
								if (func_67(&uLocal_173, "REDR1AU", "REDR1_WHB", 4, 0, 0, 0))
								{
									iLocal_64++;
								}
							}
							else if (func_22() == 2)
							{
								if (func_67(&uLocal_173, "REDR1AU", "REDR1_WHC", 4, 0, 0, 0))
								{
									iLocal_64++;
								}
							}
						}
						break;
					
					case 4:
						if (!func_4())
						{
							if (func_67(&uLocal_173, "REDR1AU", "REDR1_WH2", 4, 0, 0, 0))
							{
								iLocal_171 = MISC::GET_GAME_TIMER();
								iLocal_64++;
							}
						}
						break;
					
					case 5:
						func_141();
						func_140();
						func_146();
						if (!iLocal_110)
						{
							if ((MISC::GET_GAME_TIMER() - iLocal_171) > 7000)
							{
								if (!func_4())
								{
									if (func_67(&uLocal_173, "REDR1AU", "REDR1_ILL", 4, 0, 0, 0))
									{
										iLocal_171 = MISC::GET_GAME_TIMER();
										iLocal_110 = 1;
									}
								}
							}
						}
						else if (func_2())
						{
							if (iLocal_109 && !bLocal_108)
							{
								func_139();
							}
							else
							{
								func_136();
								func_135();
								CAM::SET_CINEMATIC_BUTTON_ACTIVE(1);
							}
						}
						if (func_134(Local_81))
						{
							func_5(0);
							func_68();
							SYSTEM::WAIT(0);
							func_67(&uLocal_173, "REDR1AU", "REDR1_OFFR", 4, 0, 0, 0);
						}
						if (func_133())
						{
							func_5(0);
							func_68();
							SYSTEM::WAIT(0);
							func_67(&uLocal_173, "REDR1AU", "REDR1_CULT", 4, 0, 0, 0);
						}
						if (!PED::IS_PED_INJURED(uLocal_91[0]))
						{
							if (ENTITY::IS_ENTITY_AT_COORD(uLocal_91[0], Local_81, Global_22, 1, 1, 0))
							{
								if (HUD::DOES_BLIP_EXIST(uLocal_102))
								{
									HUD::REMOVE_BLIP(&uLocal_102);
								}
								if (HUD::DOES_BLIP_EXIST(uLocal_103))
								{
									HUD::REMOVE_BLIP(&uLocal_103);
								}
								iLocal_55 = 8;
							}
						}
						break;
					}
			}
			if (iLocal_54 == 2)
			{
				switch (iLocal_64)
				{
					case 0:
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_94, 0))
						{
							if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_94, 1))
							{
								if (!HUD::DOES_BLIP_EXIST(uLocal_155[0]))
								{
									uLocal_155[0] = func_169(uLocal_91[0], 0, 145);
								}
								if (!HUD::DOES_BLIP_EXIST(uLocal_155[1]))
								{
									uLocal_155[1] = func_169(uLocal_91[1], 0, 145);
								}
								if (!func_4())
								{
									SYSTEM::SETTIMERA(0);
									if (func_22() == 0)
									{
										if (func_67(&uLocal_173, "REDR2AU", "REDR2_JIA", 4, 0, 0, 0))
										{
											iLocal_64++;
										}
									}
									else if (func_22() == 1)
									{
										if (func_67(&uLocal_173, "REDR2AU", "REDR2_JIB", 4, 0, 0, 0))
										{
											iLocal_64++;
										}
									}
									else if (func_22() == 2)
									{
										if (func_67(&uLocal_173, "REDR2AU", "REDR2_JIC", 4, 0, 0, 0))
										{
											iLocal_64++;
										}
									}
								}
							}
						}
						break;
					
					case 1:
						if (!PED::IS_PED_INJURED(uLocal_91[0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_94, 0))
						{
							TASK::TASK_CLEAR_LOOK_AT(uLocal_91[0]);
							TASK::TASK_ENTER_VEHICLE(uLocal_91[0], iLocal_94, 30000, 2, 2f, 1, 0);
						}
						SYSTEM::SETTIMERA(0);
						iLocal_64++;
						break;
					
					case 2:
						if (!PED::IS_PED_INJURED(uLocal_91[1]) && !ENTITY::IS_ENTITY_DEAD(iLocal_94, 0))
						{
							TASK::OPEN_SEQUENCE_TASK(&uLocal_99);
							TASK::TASK_CLEAR_LOOK_AT(0);
							TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(0, iLocal_94, 1.5f, -3f, 0f, 1f, 4000, 1036831949, 1);
							TASK::TASK_ENTER_VEHICLE(0, iLocal_94, 30000, 1, 2f, 1, 0);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_99);
							TASK::TASK_PERFORM_SEQUENCE(uLocal_91[1], uLocal_99);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_99);
						}
						SYSTEM::SETTIMERA(0);
						iLocal_64++;
						break;
					
					case 3:
						func_141();
						func_140();
						if (!iLocal_117)
						{
							if (!func_4())
							{
								if (func_67(&uLocal_173, "REDR2AU", "REDR2_BCK", 4, 0, 0, 0))
								{
									iLocal_117 = 1;
								}
							}
						}
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
							{
								if (!ENTITY::IS_ENTITY_DEAD(uLocal_91[0], 0) && !ENTITY::IS_ENTITY_DEAD(uLocal_91[1], 0))
								{
									if (PED::IS_PED_IN_VEHICLE(uLocal_91[0], PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0) && PED::IS_PED_IN_VEHICLE(uLocal_91[1], PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
									{
										PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, uLocal_100, 1862763509);
										func_148();
										iLocal_63 = 0;
										while (iLocal_63 <= (iLocal_90 - 1))
										{
											if (HUD::DOES_BLIP_EXIST(uLocal_155[iLocal_63]))
											{
												HUD::REMOVE_BLIP(&(uLocal_155[iLocal_63]));
											}
											iLocal_63++;
										}
										if (HUD::DOES_BLIP_EXIST(uLocal_158))
										{
											HUD::REMOVE_BLIP(&uLocal_158);
										}
										if (func_22() == 2 && !func_64())
										{
											if (!HUD::DOES_BLIP_EXIST(uLocal_103))
											{
												uLocal_103 = func_144(Local_87, 0);
												HUD::SET_BLIP_SPRITE(uLocal_103, 269);
												func_142();
											}
										}
										if (func_22() == 0)
										{
											if (func_67(&uLocal_173, "REDR2AU", "REDR2_WHA", 4, 0, 0, 0))
											{
												SYSTEM::SETTIMERA(0);
												iLocal_64++;
											}
										}
										else if (func_22() == 1)
										{
											if (func_67(&uLocal_173, "REDR2AU", "REDR2_WHB", 4, 0, 0, 0))
											{
												SYSTEM::SETTIMERA(0);
												iLocal_64++;
											}
										}
										else if (func_22() == 2)
										{
											if (func_67(&uLocal_173, "REDR2AU", "REDR2_WHC", 4, 0, 0, 0))
											{
												SYSTEM::SETTIMERA(0);
												iLocal_64++;
											}
										}
									}
								}
							}
						}
						break;
					
					case 4:
						func_141();
						func_140();
						if (!func_4())
						{
							if (func_67(&uLocal_173, "REDR2AU", "REDR2_WH2", 4, 0, 0, 0))
							{
								iLocal_62 = 1;
								TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
								iLocal_171 = MISC::GET_GAME_TIMER();
								iLocal_64++;
							}
						}
						break;
					
					case 5:
						func_141();
						if (iLocal_346 == 0 || iLocal_346 == 9)
						{
							func_140();
						}
						if ((MISC::GET_GAME_TIMER() - iLocal_171) > 9000)
						{
							func_127();
						}
						if (iLocal_346 == 9 && ((MISC::GET_GAME_TIMER() - iLocal_347) > 6000 && (MISC::GET_GAME_TIMER() - iLocal_347) < 6500))
						{
							func_67(&uLocal_173, "REDR2AU", "REDR2_CHAT", 4, 0, 0, 0);
						}
						if (func_134(Local_81))
						{
							func_5(0);
							func_68();
							SYSTEM::WAIT(0);
							func_67(&uLocal_173, "REDR2AU", "REDR2_OFFR", 4, 0, 0, 0);
						}
						if (func_133())
						{
							func_5(0);
							func_68();
							SYSTEM::WAIT(0);
							func_67(&uLocal_173, "REDR2AU", "REDR2_CULT", 4, 0, 0, 0);
						}
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_94, 0))
						{
							if ((!PED::IS_PED_INJURED(uLocal_91[0]) && !PED::IS_PED_INJURED(uLocal_91[1])) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_94, 0))
							{
								if (ENTITY::IS_ENTITY_AT_COORD(uLocal_91[0], Local_81, Global_22, 1, 1, 0) && ENTITY::IS_ENTITY_AT_COORD(uLocal_91[1], Local_81, Global_22, 0, 1, 0))
								{
									iLocal_64++;
								}
							}
						}
						break;
					
					case 6:
						if (HUD::DOES_BLIP_EXIST(uLocal_102))
						{
							HUD::REMOVE_BLIP(&uLocal_102);
						}
						if (HUD::DOES_BLIP_EXIST(uLocal_103))
						{
							HUD::REMOVE_BLIP(&uLocal_103);
						}
						iLocal_55 = 8;
						break;
					}
			}
			break;
		
		case 8:
			iLocal_63 = 0;
			while (iLocal_63 <= (iLocal_90 - 1))
			{
				if (!PED::IS_PED_INJURED(uLocal_91[iLocal_63]))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_91[iLocal_63], 0);
				}
				iLocal_63++;
			}
			if (iLocal_54 == 1)
			{
				if (func_126(1, 0, 1) && iLocal_124 == -1)
				{
					func_6();
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						VEHICLE::BRING_VEHICLE_TO_HALT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), (10.5f - 5f), 2, 0);
					}
					if (func_2())
					{
						if (PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0) == iLocal_94)
						{
							iLocal_124 = 0;
						}
						else
						{
							iLocal_124 = 1;
						}
					}
					else
					{
						iLocal_124 = 2;
					}
				}
				if (iLocal_124 == 0)
				{
					func_125();
				}
				if (iLocal_124 == 1)
				{
					func_124();
				}
				if (iLocal_124 == 2)
				{
					func_123();
				}
				if (bLocal_130)
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
					func_36();
				}
			}
			if (iLocal_54 == 2)
			{
				if (func_126(1, 0, 1) && iLocal_124 == -1)
				{
					func_68();
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						VEHICLE::BRING_VEHICLE_TO_HALT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), (10.5f - 4f), 2, 0);
						STREAMING::NEW_LOAD_SCENE_START_SPHERE(1143.587f, 2672.224f, 37.1142f, 70f, 2);
						STREAMING::NEW_LOAD_SCENE_START_SPHERE(930.2788f, 2856.145f, 59.2884f, 70f, 2);
					}
					func_115(1, 1, 1, 0, 0, 0);
					while (func_4())
					{
						SYSTEM::WAIT(0);
					}
					if (func_2())
					{
						if (PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0) == iLocal_94)
						{
							iLocal_124 = 0;
						}
					}
				}
				if (iLocal_124 == 0)
				{
					func_112();
				}
				else if (iLocal_124 == 1)
				{
					func_111();
				}
				else if (iLocal_124 == 2)
				{
					func_77();
				}
				if (bLocal_130)
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
					func_36();
				}
			}
			break;
		
		case 9:
			break;
	}
}

void func_77()
{
	switch (iLocal_126)
	{
		case 0:
			if (!PED::IS_PED_INJURED(uLocal_91[0]))
			{
				PED::REMOVE_PED_FROM_GROUP(uLocal_91[0]);
				TASK::TASK_LOOK_AT_ENTITY(uLocal_91[0], PLAYER::PLAYER_PED_ID(), 10000, 2060, 4);
				TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_91[0], 10000, 2060, 4);
			}
			if (!PED::IS_PED_INJURED(uLocal_91[1]))
			{
				PED::REMOVE_PED_FROM_GROUP(uLocal_91[0]);
				TASK::TASK_LOOK_AT_ENTITY(uLocal_91[1], PLAYER::PLAYER_PED_ID(), 10000, 2060, 4);
			}
			func_67(&uLocal_173, "REDR2AU", "REDR2_TK", 4, 0, 0, 0);
			iLocal_126++;
			break;
		
		case 1:
			iLocal_126++;
			break;
		
		case 2:
			if (iLocal_125 < MISC::GET_GAME_TIMER())
			{
				if (!PED::IS_PED_INJURED(uLocal_91[0]))
				{
					TASK::TASK_GO_STRAIGHT_TO_COORD(uLocal_91[0], Local_84, 1f, -1, 1193033728, 1056964608);
					iLocal_125 = MISC::GET_GAME_TIMER() + 500;
					iLocal_126++;
				}
			}
			break;
		
		case 3:
			if (iLocal_125 < MISC::GET_GAME_TIMER())
			{
				if (!PED::IS_PED_INJURED(uLocal_91[1]))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uLocal_91[1], Local_84, 1f, -1, 0.25f, 0, 1193033728);
					iLocal_126++;
				}
			}
			break;
		
		case 4:
			if (iLocal_125 < MISC::GET_GAME_TIMER())
			{
				iLocal_126++;
			}
			break;
		
		case 5:
			func_78(func_22(), 1, 80, 0, 1);
			bLocal_130 = true;
			break;
	}
}

void func_78(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (func_110(iParam0) == 3)
	{
		return;
	}
	if (func_110(iParam0) == 4)
	{
		return;
	}
	func_79(func_110(iParam0), 1, iParam1, iParam2, 0);
	if (bParam3)
	{
		iVar0 = 0;
		if (bParam4)
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = 1762386298;
					break;
				
				case 1:
					iVar1 = -544246134;
					break;
				
				case 2:
					iVar1 = -1147816992;
					break;
				
				default:
					return;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = 138536943;
					break;
				
				case 1:
					iVar1 = 691239862;
					break;
				
				case 2:
					iVar1 = -1133981805;
					break;
				
				default:
					return;
				}
		}
		STATS::STAT_GET_INT(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		STATS::STAT_SET_INT(iVar1, iVar0, 1);
	}
}

int func_79(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	func_109();
	if (iParam3 < 1)
	{
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_108(99, 1);
					func_107(-656546900, iParam3);
					break;
				
				case 1:
					func_107(-2098183071, iParam3);
					break;
				
				case 2:
					func_107(1578119842, iParam3);
					break;
			}
			func_93(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_88(5))
					{
						fVar0 = 0.9f;
						iVar1 = 5;
					}
					break;
				
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_107(-1190521599, iParam3);
							break;
						
						case 1:
							func_107(490143716, iParam3);
							break;
						
						case 2:
							func_107(121069433, iParam3);
							break;
					}
					if (func_88(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_107(219506691, iParam3);
							break;
						
						case 1:
							func_107(1871505786, iParam3);
							break;
						
						case 2:
							func_107(-2024399847, iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_107(27639974, iParam3);
							break;
						
						case 1:
							func_107(422258364, iParam3);
							break;
						
						case 2:
							func_107(316202960, iParam3);
							break;
					}
					break;
				
				case 99:
				case 100:
				case 101:
				case 102:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
				case 113:
					switch (iParam0)
					{
						case 0:
							func_107(1806738963, iParam3);
							break;
						
						case 1:
							func_107(1576781520, iParam3);
							break;
						
						case 2:
							func_107(671882196, iParam3);
							break;
					}
					break;
				
				default:
					switch (SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME())
					{
						case -123529621:
							switch (iParam0)
							{
								case 0:
									func_107(408653638, iParam3);
									break;
								
								case 1:
									func_107(-424799277, iParam3);
									break;
								
								case 2:
									func_107(-558138038, iParam3);
									break;
							}
							break;
						
						case -1215733929:
							switch (iParam0)
							{
								case 0:
									func_107(2038531975, iParam3);
									break;
								
								case 1:
									func_107(-572903575, iParam3);
									break;
								
								case 2:
									func_107(-953947924, iParam3);
									break;
							}
							if (func_88(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case 468388854:
							switch (iParam0)
							{
								case 0:
									func_107(-445823242, iParam3);
									break;
								
								case 1:
									func_107(-1386757215, iParam3);
									break;
								
								case 2:
									func_107(-727828275, iParam3);
									break;
							}
							break;
						
						case 499562112:
							switch (iParam0)
							{
								case 0:
									func_107(-1744069936, iParam3);
									break;
								
								case 1:
									func_107(799609312, iParam3);
									break;
								
								case 2:
									func_107(181688102, iParam3);
									break;
							}
							func_87(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_108(95, iParam3);
					break;
				
				case 1:
					func_108(97, iParam3);
					break;
				
				case 2:
					func_108(96, iParam3);
					break;
			}
			func_108(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_82(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_82(iVar1);
	}
	iVar5 = (Global_58686[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_58686[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_58686[iVar2] = 2147483647;
				}
				else
				{
					Global_58686[iVar2] = (Global_58686[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_107(-330339780, iParam3);
					break;
				
				case 1:
					func_107(1697564429, iParam3);
					break;
				
				case 2:
					func_107(1674823841, iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_58686[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_58686[iVar2];
			Global_58686[iVar2] = (Global_58686[iVar2] - iParam3);
			if (bParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (iVar4 > 20)
		{
		}
	}
	else
	{
		Global_111638.f_20559.f_233[iVar2].f_2[Global_111638.f_20559.f_233[iVar2].f_1] = iParam1;
		Global_111638.f_20559.f_233[iVar2].f_2[Global_111638.f_20559.f_233[iVar2].f_1].f_1 = iParam2;
		Global_111638.f_20559.f_233[iVar2].f_2[Global_111638.f_20559.f_233[iVar2].f_1].f_2 = iParam3;
		Global_111638.f_20559.f_233[iVar2]++;
		Global_111638.f_20559.f_233[iVar2].f_1++;
		if (Global_111638.f_20559.f_233[iVar2].f_1 > 10)
		{
			Global_111638.f_20559.f_233[iVar2].f_1 = 0;
		}
	}
	func_81(iParam0);
	if (Global_41431 == 15)
	{
		func_80(0);
	}
	return 1;
}

void func_80(bool bParam0)
{
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_111638.f_20559.f_233[iVar0].f_2[iVar1].f_3 = Global_111638.f_20559.f_233[iVar0].f_2[iVar1];
			Global_111638.f_20559.f_233[iVar0].f_2[iVar1].f_4 = Global_111638.f_20559.f_233[iVar0].f_2[iVar1].f_1;
			Global_111638.f_20559.f_233[iVar0].f_2[iVar1].f_5 = Global_111638.f_20559.f_233[iVar0].f_2[iVar1].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_58694[iVar0][0] = Global_111638.f_20559[iVar0];
		Global_58694.f_31[iVar0][0] = Global_111638.f_20559.f_11[iVar0];
		Global_58694.f_62[iVar0][0] = Global_111638.f_20559.f_22[iVar0];
		Global_58694.f_93[iVar0][0] = Global_111638.f_20559.f_33[iVar0];
		Global_58694.f_124[iVar0][0] = Global_111638.f_20559.f_44[iVar0];
		Global_58694.f_155[iVar0][0] = Global_111638.f_20559.f_55[iVar0];
		Global_58694.f_186[iVar0][0] = Global_111638.f_20559.f_66[iVar0];
		Global_58694.f_217[iVar0][0] = Global_111638.f_20559.f_77[iVar0];
		Global_58694.f_248[iVar0][0] = Global_111638.f_20559.f_88[iVar0];
		if (!bParam0)
		{
			Global_58694[iVar0][1] = Global_111638.f_20559[iVar0];
			Global_58694.f_31[iVar0][1] = Global_111638.f_20559.f_11[iVar0];
			Global_58694.f_62[iVar0][1] = Global_111638.f_20559.f_22[iVar0];
			Global_58694.f_93[iVar0][1] = Global_111638.f_20559.f_33[iVar0];
			Global_58694.f_124[iVar0][1] = Global_111638.f_20559.f_44[iVar0];
			Global_58694.f_155[iVar0][1] = Global_111638.f_20559.f_55[iVar0];
			Global_58694.f_186[iVar0][1] = Global_111638.f_20559.f_66[iVar0];
			Global_58694.f_217[iVar0][1] = Global_111638.f_20559.f_77[iVar0];
			Global_58694.f_248[iVar0][1] = Global_111638.f_20559.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_81(int iParam0)
{
	iVar0 = Global_58686[iParam0];
	switch (iParam0)
	{
		case 0:
			STATS::STAT_SET_INT(52740893, iVar0, 1);
			break;
		
		case 1:
			STATS::STAT_SET_INT(1153264002, iVar0, 1);
			break;
		
		case 2:
			STATS::STAT_SET_INT(-1921710979, iVar0, 1);
			break;
	}
}

void func_82(int iParam0)
{
	if (iParam0 == 8)
	{
		func_46(129, 0, -1, 1);
		return;
	}
	if (iParam0 == 9)
	{
		func_46(135, 0, -1, 1);
		return;
	}
	if (iParam0 == 10)
	{
		func_46(136, 0, -1, 1);
		return;
	}
	if (iParam0 == 11)
	{
		func_46(137, 0, -1, 1);
		return;
	}
	if (iParam0 == 12)
	{
		func_85(8269, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 13)
	{
		func_85(8270, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 14)
	{
		func_85(8271, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 15)
	{
		func_85(8272, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 16)
	{
		func_85(8273, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 17)
	{
		func_85(8274, 0, -1, 1, 0);
		return;
	}
	bVar0 = false;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (MISC::IS_BIT_SET(Global_111638.f_20559.f_471, iParam0))
		{
			bVar0 = true;
			MISC::CLEAR_BIT(&(Global_111638.f_20559.f_471), iParam0);
		}
	}
	else if (MISC::IS_BIT_SET(Global_111638.f_20559.f_471, iParam0) || MISC::IS_BIT_SET(Global_2097152[func_84()].f_6174.f_10, iParam0))
	{
		bVar0 = true;
		MISC::CLEAR_BIT(&(Global_111638.f_20559.f_471), iParam0);
		MISC::CLEAR_BIT(&(Global_2097152[func_84()].f_6174.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("COUP_RED");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_83(iParam0));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_83(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COUP_HAIRC";
		
		case 1:
			return "COUP_TATTOO";
		
		case 2:
			return "COUP_WARSTOCK";
		
		case 3:
			return "COUP_MOSPORT";
		
		case 4:
			return "COUP_ELITAS";
		
		case 5:
			return "COUP_MEDSPENS";
		
		case 6:
			return "COUP_SPRUNK";
		
		case 7:
			return "COUP_RESPRAY";
		
		case 8:
			return "COUP_XMAS2017";
		
		case 9:
			return "COUP_CAR_XMAS2018";
		
		case 10:
			return "COUP_HELI_XMAS2018";
		
		case 11:
			return "COUP_CAR2_XMAS2018";
		
		case 12:
			return "COUP_CAS_ELITAS";
		
		case 13:
			return "COUP_CAS_DOCKTEASE";
		
		case 14:
			return "COUP_CAS_MOSPORT";
		
		case 15:
			return "COUP_CAS_SSASA";
		
		case 16:
			return "COUP_CAS_WARSTOCK";
		
		case 17:
			return "COUP_CAS_PANDM";
		
		default:
	}
	return "";
}

int func_84()
{
	iVar0 = 0;
	return iVar0;
}

void func_85(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0][func_86(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_86(var uParam0)
{
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_47();
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

void func_87(int iParam0)
{
	func_108(93, iParam0);
	func_108(29, iParam0);
	func_108(30, iParam0);
}

bool func_88(int iParam0)
{
	if (iParam0 == 8)
	{
		return func_90(129, -1, -1);
	}
	if (iParam0 == 9)
	{
		return func_90(135, -1, -1);
	}
	if (iParam0 == 10)
	{
		return func_90(136, -1, -1);
	}
	if (iParam0 == 11)
	{
		return func_90(137, -1, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar1 = func_89(8269, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar3 = func_89(8270, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar5 = func_89(8271, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar7 = func_89(8272, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar9 = func_89(8273, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar11 = func_89(8274, -1, 0);
		if (iVar11 == 0 || iVar10 >= iVar11)
		{
			return 0;
		}
		return 1;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return MISC::IS_BIT_SET(Global_111638.f_20559.f_471, iParam0);
	}
	return MISC::IS_BIT_SET(Global_2097152[func_84()].f_6174.f_10, iParam0);
}

int func_89(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2548434[iParam0][func_86(iParam1)];
		if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_90(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_47();
	}
	iVar1 = func_92(iParam0, iParam1);
	uVar2 = func_91(iParam0);
	if (0 != iVar1)
	{
		iVar0 = STATS::STAT_GET_BOOL_MASKED(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_91(int iParam0)
{
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 18098)) * 64);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = ((iParam0 - 22066) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 22066)) * 64);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = ((iParam0 - 24962) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 24962)) * 64);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = ((iParam0 - 26810) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 26810)) * 64);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = ((iParam0 - 28098) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 28098)) * 64);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = ((iParam0 - 28355) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 28355)) * 64);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar0 = ((iParam0 - 30227) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 30227)) * 64);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar0 = ((iParam0 - 30355) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 30355)) * 64);
	}
	return iVar0;
}

int func_92(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_47();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 18098), 0, 1, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 22066), 0, 1, iParam1, "_BUSINESSBATPSTAT_BOOL");
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 24962), 0, 1, iParam1, "_ARENAWARSPSTAT_BOOL");
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 26810), 0, 1, iParam1, "_CASINOPSTAT_BOOL");
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 28098), 0, 1, iParam1, "_CASINOHSTPSTAT_BOOL");
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 28355), 0, 1, iParam1, "_HEIST3TATTOOSTAT_BOOL");
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 30227), 0, 1, iParam1, "_SU20PSTAT_BOOL");
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 30355), 0, 1, iParam1, "_SU20TATTOOSTAT_BOOL");
	}
	return iVar0;
}

int func_93(bool bParam0)
{
	iVar1 = 0;
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(27))
	{
		return 0;
	}
	if (STATS::STAT_GET_INT(-656546900, &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (STATS::STAT_GET_INT(-2098183071, &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (STATS::STAT_GET_INT(1578119842, &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	STATS::STAT_GET_INT(-422142831, &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		STATS::STAT_SET_INT(-422142831, iVar1, 1);
		func_45(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_94(27, 1);
	return 1;
}

int func_94(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_95(iParam0, iParam1);
}

int func_95(int iParam0, int iParam1)
{
	if (func_28(14) && !func_106(iParam0))
	{
		return 0;
	}
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_31017 != 0 && !Global_76622)
	{
		return 0;
	}
	if (func_105(&Global_4270065))
	{
		if (func_103(&Global_4270065, iParam0))
		{
			return 0;
		}
		if (func_96(&Global_4270065, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!PLAYER::GIVE_ACHIEVEMENT_TO_PLAYER(iParam0))
		{
			return 0;
		}
		if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_96(var uParam0, int iParam1)
{
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_28(14) && !func_106(iParam1))
	{
		return 0;
	}
	if (func_103(uParam0, iParam1))
	{
		return 0;
	}
	if (func_102(uParam0) < 0f)
	{
		func_101(uParam0, 0);
	}
	func_99(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_97(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_97(var uParam0, int iParam1)
{
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_28(14) && !func_106(iParam1))
	{
		return 0;
	}
	if (func_103(uParam0, iParam1))
	{
		return 0;
	}
	if (func_102(uParam0) < 0f)
	{
		func_101(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_98(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_98(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_99(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_100(uParam0, iVar0);
		iVar0++;
	}
	func_101(uParam0, (Global_4270064 - 0.5f));
}

void func_100(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_101(var uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		uParam0->f_80 = 0f;
	}
	else
	{
		uParam0->f_80 = fParam1;
	}
}

float func_102(var uParam0)
{
	return uParam0->f_80;
}

bool func_103(var uParam0, int iParam1)
{
	return func_104(uParam0, iParam1) != -1;
}

int func_104(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_105(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_106(int iParam0)
{
	switch (iParam0)
	{
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
		
		default:
	}
	return 0;
}

void func_107(int iParam0, int iParam1)
{
	STATS::STAT_GET_INT(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	STATS::STAT_SET_INT(iParam0, iVar0, 1);
}

void func_108(int iParam0, int iParam1)
{
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_57254[iParam0].f_2)
	{
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (Global_57254[iParam0])
	{
		STATS::STAT_GET_INT(Global_57254[iParam0].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		STATS::STAT_SET_INT(Global_57254[iParam0].f_1, iVar0, 1);
	}
}

void func_109()
{
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		STATS::STAT_GET_INT(52740893, &iVar0, -1);
		if (!Global_58686[0] == iVar0)
		{
			Global_58686[0] = iVar0;
		}
		STATS::STAT_GET_INT(1153264002, &iVar0, -1);
		if (!Global_58686[1] == iVar0)
		{
			Global_58686[1] = iVar0;
		}
		STATS::STAT_GET_INT(-1921710979, &iVar0, -1);
		if (!Global_58686[2] == iVar0)
		{
			Global_58686[2] = iVar0;
		}
	}
}

int func_110(int iParam0)
{
	return Global_1798[iParam0].f_17;
}

void func_111()
{
	switch (iLocal_126)
	{
		case 0:
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
			{
				if (VEHICLE::IS_VEHICLE_STOPPED(iVar0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
					{
						if (!PED::IS_PED_INJURED(uLocal_91[0]))
						{
							TASK::CLEAR_PED_TASKS(uLocal_91[0]);
							PED::REMOVE_PED_FROM_GROUP(uLocal_91[0]);
						}
						if (!PED::IS_PED_INJURED(uLocal_91[1]))
						{
							TASK::CLEAR_PED_TASKS(uLocal_91[1]);
							PED::REMOVE_PED_FROM_GROUP(uLocal_91[1]);
						}
					}
					func_67(&uLocal_173, "REDR2AU", "REDR2_TK", 4, 0, 0, 0);
					iLocal_126++;
				}
			}
			break;
		
		case 1:
			iLocal_126++;
			break;
		
		case 2:
			if (!PED::IS_PED_INJURED(uLocal_91[1]))
			{
				TASK::OPEN_SEQUENCE_TASK(&uLocal_99);
				TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_84, 1f, -1, 0.25f, 0, 1193033728);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_99);
				TASK::TASK_PERFORM_SEQUENCE(uLocal_91[1], uLocal_99);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_99);
				iLocal_125 = MISC::GET_GAME_TIMER() + 1500;
				iLocal_126++;
			}
			break;
		
		case 3:
			if (iLocal_125 < MISC::GET_GAME_TIMER())
			{
				if (!PED::IS_PED_INJURED(uLocal_91[0]))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uLocal_91[0], Local_84, 1f, -1, 0.25f, 0, 1193033728);
					iLocal_126++;
				}
			}
			break;
		
		case 4:
			if (func_22() == 2)
			{
				if (func_67(&uLocal_173, "REDR2AU", "REDR2_TKT", 4, 0, 0, 0))
				{
					iLocal_125 = MISC::GET_GAME_TIMER() + 1000;
					iLocal_126 = 7;
				}
			}
			else if (func_22() == 1)
			{
				if (func_67(&uLocal_173, "REDR2AU", "REDR2_TKF", 4, 0, 0, 0))
				{
					iLocal_125 = MISC::GET_GAME_TIMER() + 1500;
					iLocal_126 = 7;
				}
			}
			else if (func_22() == 0)
			{
				if (func_67(&uLocal_173, "REDR2AU", "REDR2_TKM", 4, 0, 0, 0))
				{
					iLocal_125 = MISC::GET_GAME_TIMER() + 750;
					iLocal_126 = 7;
				}
			}
			break;
		
		case 5:
			iLocal_126++;
			break;
		
		case 6:
			if (!PED::IS_PED_INJURED(uLocal_91[0]))
			{
				if (func_22() == 2)
				{
					if (func_67(&uLocal_173, "REDR2AU", "REDR2_NOT", 4, 0, 0, 0))
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uLocal_91[0], Local_84, 1f, -1, 0.25f, 0, 1193033728);
						iLocal_125 = MISC::GET_GAME_TIMER() + 3500;
						iLocal_126++;
					}
				}
				if (func_22() == 1 || func_22() == 0)
				{
					if (func_67(&uLocal_173, "REDR2AU", "REDR2_MIS", 4, 0, 0, 0))
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uLocal_91[0], Local_84, 1f, -1, 0.25f, 0, 1193033728);
						iLocal_125 = MISC::GET_GAME_TIMER() + 3500;
						iLocal_126++;
					}
				}
			}
			break;
		
		case 7:
			if (!func_4())
			{
				iLocal_126++;
			}
			break;
		
		case 8:
			func_78(func_22(), 1, 80, 0, 1);
			bLocal_130 = true;
			break;
	}
}

void func_112()
{
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	switch (iLocal_126)
	{
		case 0:
			HUD::DISPLAY_HUD(0);
			HUD::DISPLAY_RADAR(0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_94, 0))
			{
				if (VEHICLE::IS_VEHICLE_STOPPED(iLocal_94))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_94, 0))
					{
						if (!PED::IS_PED_INJURED(uLocal_91[0]))
						{
							TASK::CLEAR_PED_TASKS(uLocal_91[0]);
							PED::REMOVE_PED_FROM_GROUP(uLocal_91[0]);
							TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_91[0], 4000, 2060, 4);
						}
						if (!PED::IS_PED_INJURED(uLocal_91[1]))
						{
							TASK::CLEAR_PED_TASKS(uLocal_91[1]);
							PED::REMOVE_PED_FROM_GROUP(uLocal_91[1]);
						}
					}
					StringCopy(&cLocal_143, "", 24);
					func_68();
					SYSTEM::WAIT(0);
					func_67(&uLocal_173, "REDR2AU", "REDR2_TK", 4, 0, 0, 0);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
					iLocal_126++;
				}
			}
			break;
		
		case 1:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_94, 0))
			{
				uLocal_128 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 1121.335f, 2643.908f, 37.862f, 1.5062f, 0f, 20.274f, 33.0256f, 0, 2);
				uLocal_129 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 1121.302f, 2643.998f, 37.8919f, 1.5062f, 0f, 18.7019f, 33.0256f, 0, 2);
				CAM::SHAKE_CAM(uLocal_128, "HAND_SHAKE", 0.3f);
				CAM::SHAKE_CAM(uLocal_129, "HAND_SHAKE", 0.3f);
				CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_129, uLocal_128, 2500, 0, 0);
				CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
				MISC::CLEAR_AREA(Local_81, 8f, 1, 0, 0, 0);
				ENTITY::SET_ENTITY_COORDS(iLocal_94, 1120.551f, 2647.307f, 36.9963f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(iLocal_94, 179.7675f);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_94, 1084227584);
				iLocal_125 = MISC::GET_GAME_TIMER() + 2500;
				iLocal_126++;
			}
			break;
		
		case 2:
			if (iLocal_125 - 500) < MISC::GET_GAME_TIMER()
			{
				if (!PED::IS_PED_INJURED(uLocal_91[1]))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(uLocal_91[1], 0))
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_99);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_84, 1f, -1, 0.25f, 0, 1193033728);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_99);
						TASK::TASK_PERFORM_SEQUENCE(uLocal_91[1], uLocal_99);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_99);
						PED::SET_PED_KEEP_TASK(uLocal_91[1], 1);
					}
				}
			}
			if (iLocal_125 - 1000) < MISC::GET_GAME_TIMER()
			{
				if (!PED::IS_PED_INJURED(uLocal_91[0]))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(uLocal_91[0], 0))
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_99);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_84 - Vector(0f, 0f, 1f), 1f, -1, 0.25f, 0, 1193033728);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_99);
						TASK::TASK_PERFORM_SEQUENCE(uLocal_91[0], uLocal_99);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_99);
						PED::SET_PED_KEEP_TASK(uLocal_91[0], 1);
					}
				}
			}
			if (iLocal_125 < MISC::GET_GAME_TIMER())
			{
				CAM::SET_CAM_PARAMS(uLocal_128, 1105.849f, 2664.653f, 38.047f, 3.6983f, 0.0242f, -140.4768f, 41.7126f, 0, 1, 1, 2);
				CAM::SET_CAM_PARAMS(uLocal_129, 1106f, 2664.469f, 38.0625f, 3.6984f, 0.0242f, -140.4769f, 41.7126f, 0, 1, 1, 2);
				CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_129, uLocal_128, 5000, 0, 0);
				STREAMING::NEW_LOAD_SCENE_STOP();
				iLocal_125 = MISC::GET_GAME_TIMER() + 6000;
				iLocal_126++;
			}
			break;
		
		case 3:
			if (iLocal_125 < MISC::GET_GAME_TIMER())
			{
				CAM::SET_CAM_PARAMS(uLocal_128, 1122.37f, 2646.108f, 38.3339f, -5.6746f, -0.1271f, 33.7683f, 50f, 0, 1, 1, 2);
				CAM::SET_CAM_PARAMS(uLocal_129, 1122.338f, 2646.157f, 38.3281f, -5.6746f, -0.1271f, 33.7683f, 50f, 0, 1, 1, 2);
				CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_129, uLocal_128, 1500, 1, 1);
				if (!PED::IS_PED_INJURED(uLocal_91[0]) && !PED::IS_PED_INJURED(uLocal_91[1]))
				{
					ENTITY::SET_ENTITY_COORDS(uLocal_91[0], 1141.156f, 2643.205f, 37.1487f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(uLocal_91[0], 262.7369f);
					ENTITY::SET_ENTITY_COORDS(uLocal_91[1], 1140.152f, 2644.149f, 37.1487f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(uLocal_91[1], 262.1522f);
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
				}
				if (func_22() == 2)
				{
					if (func_67(&uLocal_173, "REDR2AU", "REDR2_TKT", 4, 0, 0, 0))
					{
					}
				}
				else if (func_22() == 1)
				{
					if (func_67(&uLocal_173, "REDR2AU", "REDR2_TKF", 4, 0, 0, 0))
					{
					}
				}
				else if (func_22() == 0)
				{
					if (func_67(&uLocal_173, "REDR2AU", "REDR2_TKM", 4, 0, 0, 0))
					{
					}
				}
				iLocal_125 = MISC::GET_GAME_TIMER() + 1700;
				iLocal_126++;
			}
			break;
		
		case 4:
			if (iLocal_125 < MISC::GET_GAME_TIMER())
			{
				iLocal_126++;
			}
			break;
		
		case 5:
			iLocal_126 = 7;
			break;
		
		case 6:
			if (!func_4())
			{
				if (func_22() == 2)
				{
					if (func_67(&uLocal_173, "REDR2AU", "REDR2_NOT", 4, 0, 0, 0))
					{
						iLocal_125 = MISC::GET_GAME_TIMER() + 5500;
						iLocal_126++;
					}
				}
				if (func_22() == 1 || func_22() == 0)
				{
					if (func_67(&uLocal_173, "REDR2AU", "REDR2_MIS", 4, 0, 0, 0))
					{
						iLocal_125 = MISC::GET_GAME_TIMER() + 5500;
						iLocal_126++;
					}
				}
			}
			break;
		
		case 7:
			STREAMING::NEW_LOAD_SCENE_STOP();
			WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), 0);
			func_115(0, 1, 1, 0, 0, 0);
			PED::DELETE_PED(&(uLocal_91[0]));
			PED::DELETE_PED(&(uLocal_91[1]));
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_94, 0))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_94, 7);
			}
			if (iLocal_131)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_94, 0))
				{
					PED::_0x2208438012482A1A(PLAYER::PLAYER_PED_ID(), 0, 0);
					VEHICLE::SET_VEHICLE_DOORS_SHUT(iLocal_94, 1);
					CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
				}
			}
			else
			{
				CAM::_RENDER_FIRST_PERSON_CAM(0, 0, 3, 0);
			}
			CAM::SET_CAM_ACTIVE(uLocal_128, 0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-7f, 1065353216);
			HUD::DISPLAY_HUD(1);
			HUD::DISPLAY_RADAR(1);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
			func_78(func_22(), 1, 40, 0, 1);
			bLocal_130 = true;
	}
	if (iLocal_126 != 0)
	{
		if (func_113(1000))
		{
			func_68();
			iLocal_131 = 1;
			iLocal_126 = 7;
		}
	}
}

int func_113(int iParam0)
{
	if (CAM::IS_SCREEN_FADED_IN())
	{
		if ((MISC::GET_GAME_TIMER() - Global_28) > iParam0)
		{
			Global_27 = MISC::GET_GAME_TIMER();
		}
		Global_28 = MISC::GET_GAME_TIMER();
		if ((MISC::GET_GAME_TIMER() - Global_27) > iParam0)
		{
			if (func_114())
			{
				Global_27 = MISC::GET_GAME_TIMER();
				return 1;
			}
		}
	}
	return 0;
}

int func_114()
{
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(0, 18) || PAD::IS_CONTROL_JUST_PRESSED(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_115(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 1);
		func_122(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
		if (Global_19486.f_1 > 3)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(0);
			}
			if (!func_19())
			{
				Global_19486.f_1 = 3;
			}
			Global_20805 = 5;
		}
		func_121(1, iParam3, iParam2, 0);
		Global_61518 = 1;
		Global_73828 = 1;
		Global_76620 = 1;
	}
	else
	{
		func_122(0);
		HUD::THEFEED_RESUME();
		Global_61518 = 0;
		if (bParam1)
		{
			GRAPHICS::_0x03FC694AE06C5A20();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
		func_121(0, iParam3, iParam2, 0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_119(PLAYER::PLAYER_ID())) && !func_117(PLAYER::PLAYER_ID(), 0)) && !func_116()) && !bParam4) && !bParam5)
			{
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
			}
		}
		else if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_119(PLAYER::PLAYER_ID())) && !bParam4) && !bParam5)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
		}
		Global_76620 = 0;
	}
}

bool func_116()
{
	return MISC::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_39.f_18, 14);
}

bool func_117(int iParam0, int iParam1)
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_118(-1, 0) == 8;
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

int func_118(int iParam0, bool bParam1)
{
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_47();
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

int func_119(int iParam0)
{
	if (func_117(iParam0, 0))
	{
		return 1;
	}
	if (func_120())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (MISC::IS_BIT_SET(Global_2425662[iParam0].f_195, 2))
	{
		return 1;
	}
	return 0;
}

bool func_120()
{
	return MISC::IS_BIT_SET(Global_2359302, 3);
}

int func_121(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = 0;
	if (MISC::IS_PC_VERSION())
	{
		if (CUTSCENE::_0xA0FE76168A189DDB() != iParam0 && uParam2)
		{
			CUTSCENE::_0x20746F7B1032A3C7(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_122(int iParam0)
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_7356, 13);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_7356, 13);
	}
}

void func_123()
{
	switch (iLocal_126)
	{
		case 0:
			if (!func_4())
			{
				if (!PED::IS_PED_INJURED(uLocal_91[0]))
				{
					PED::REMOVE_PED_FROM_GROUP(uLocal_91[0]);
					TASK::TASK_LOOK_AT_ENTITY(uLocal_91[0], PLAYER::PLAYER_PED_ID(), 10000, 2060, 4);
					TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_91[0], 10000, 2060, 4);
				}
				if (bLocal_108)
				{
					func_67(&uLocal_173, "REDR1AU", "REDR1_TK", 4, 0, 0, 0);
				}
				else
				{
					func_67(&uLocal_173, "REDR1AU", "REDR1_TK1", 4, 0, 0, 0);
				}
				iLocal_126++;
			}
			break;
		
		case 1:
			iLocal_125 = MISC::GET_GAME_TIMER() + 3000;
			iLocal_126++;
			break;
		
		case 2:
			if (func_22() == 0)
			{
				if (func_67(&uLocal_173, "REDR1AU", "REDR1_GBM", 4, 0, 0, 0))
				{
					iLocal_126++;
				}
			}
			else if (func_22() == 1)
			{
				if (func_67(&uLocal_173, "REDR1AU", "REDR1_GBF", 4, 0, 0, 0))
				{
					iLocal_126++;
				}
			}
			else if (func_22() == 2)
			{
				if (func_67(&uLocal_173, "REDR1AU", "REDR1_GBT", 4, 0, 0, 0))
				{
					iLocal_126++;
				}
			}
			break;
		
		case 3:
			if (!PED::IS_PED_INJURED(uLocal_91[0]))
			{
				TASK::OPEN_SEQUENCE_TASK(&uLocal_99);
				TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 1800);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_84, 1f, -1, 0.25f, 0, 1193033728);
				TASK::TASK_PLAY_ANIM(0, "random@drunk_driver_1", "drunk_fall_over", 2f, -2f, -1, 2359304, 0, 0, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_99);
				TASK::TASK_PERFORM_SEQUENCE(uLocal_91[0], uLocal_99);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_99);
				PED::SET_PED_KEEP_TASK(uLocal_91[0], 1);
				iLocal_125 = MISC::GET_GAME_TIMER() + 2000;
				iLocal_126++;
			}
			break;
		
		case 4:
			if (iLocal_125 < MISC::GET_GAME_TIMER())
			{
				iLocal_126++;
			}
			break;
		
		case 5:
			func_78(func_22(), 1, 80, 0, 1);
			bLocal_130 = true;
			break;
	}
}

void func_124()
{
	switch (iLocal_126)
	{
		case 0:
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
			{
				if (VEHICLE::IS_VEHICLE_STOPPED(iVar0) && !func_4())
				{
					if (!PED::IS_PED_INJURED(uLocal_91[0]))
					{
						TASK::CLEAR_PED_TASKS(uLocal_91[0]);
						PED::REMOVE_PED_FROM_GROUP(uLocal_91[0]);
						TASK::TASK_LOOK_AT_ENTITY(uLocal_91[0], PLAYER::PLAYER_PED_ID(), 10000, 2060, 4);
						TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_91[0], 10000, 2060, 4);
					}
					if (bLocal_108)
					{
						func_67(&uLocal_173, "REDR1AU", "REDR1_TK", 4, 0, 0, 0);
					}
					else
					{
						func_67(&uLocal_173, "REDR1AU", "REDR1_TK1", 4, 0, 0, 0);
					}
					iLocal_126++;
				}
			}
			break;
		
		case 1:
			iLocal_126++;
			break;
		
		case 2:
			iLocal_126++;
			break;
		
		case 3:
			if (!PED::IS_PED_INJURED(uLocal_91[0]))
			{
				TASK::OPEN_SEQUENCE_TASK(&uLocal_99);
				TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 4194304);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 1800);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_84, 1f, -1, 0.25f, 0, 1193033728);
				TASK::TASK_PLAY_ANIM(0, "random@drunk_driver_1", "drunk_fall_over", 2f, -2f, -1, 2359304, 0, 0, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_99);
				TASK::TASK_PERFORM_SEQUENCE(uLocal_91[0], uLocal_99);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_99);
				PED::SET_PED_KEEP_TASK(uLocal_91[0], 1);
			}
			func_70(uLocal_91[0], 120000, 0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
			iLocal_125 = MISC::GET_GAME_TIMER() + 3000;
			iLocal_126++;
			break;
		
		case 4:
			iLocal_125 = MISC::GET_GAME_TIMER() + 3000;
			if (func_22() == 0)
			{
				if (func_67(&uLocal_173, "REDR1AU", "REDR1_GBM", 4, 0, 0, 0))
				{
					iLocal_126++;
				}
			}
			else if (func_22() == 1)
			{
				if (func_67(&uLocal_173, "REDR1AU", "REDR1_GBF", 4, 0, 0, 0))
				{
					iLocal_126++;
				}
			}
			else if (func_22() == 2)
			{
				if (func_67(&uLocal_173, "REDR1AU", "REDR1_GBT", 4, 0, 0, 0))
				{
					iLocal_126++;
				}
			}
			break;
		
		case 5:
			if (iLocal_125 < MISC::GET_GAME_TIMER())
			{
				iLocal_126++;
			}
			break;
		
		case 6:
			func_78(func_22(), 1, 80, 0, 1);
			bLocal_130 = true;
			break;
	}
}

void func_125()
{
	switch (iLocal_126)
	{
		case 0:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_94, 0))
			{
				if (VEHICLE::IS_VEHICLE_STOPPED(iLocal_94) && !func_4())
				{
					if (!PED::IS_PED_INJURED(uLocal_91[0]))
					{
						TASK::CLEAR_PED_TASKS(uLocal_91[0]);
						PED::REMOVE_PED_FROM_GROUP(uLocal_91[0]);
						TASK::TASK_LOOK_AT_ENTITY(uLocal_91[0], PLAYER::PLAYER_PED_ID(), 10000, 2060, 4);
						TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_91[0], 10000, 2060, 4);
					}
					if (bLocal_108)
					{
						func_67(&uLocal_173, "REDR1AU", "REDR1_TK", 4, 0, 0, 0);
					}
					else
					{
						func_67(&uLocal_173, "REDR1AU", "REDR1_TK1", 4, 0, 0, 0);
					}
					iLocal_126++;
				}
			}
			break;
		
		case 1:
			iLocal_126++;
			break;
		
		case 2:
			if (!PED::IS_PED_INJURED(uLocal_91[0]))
			{
				TASK::OPEN_SEQUENCE_TASK(&uLocal_99);
				TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 4194304);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 1800);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_84, 1f, -1, 0.25f, 0, 1193033728);
				TASK::TASK_PLAY_ANIM(0, "random@drunk_driver_1", "drunk_fall_over", 2f, -2f, -1, 2359304, 0, 0, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_99);
				TASK::TASK_PERFORM_SEQUENCE(uLocal_91[0], uLocal_99);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_99);
				PED::SET_PED_KEEP_TASK(uLocal_91[0], 1);
				func_70(uLocal_91[0], 120000, 0);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
				iLocal_125 = MISC::GET_GAME_TIMER() + 3000;
				iLocal_126++;
			}
			break;
		
		case 3:
			iLocal_125 = MISC::GET_GAME_TIMER() + 3000;
			if (func_22() == 0)
			{
				if (func_67(&uLocal_173, "REDR1AU", "REDR1_GBM", 4, 0, 0, 0))
				{
					iLocal_126++;
				}
			}
			else if (func_22() == 1)
			{
				if (func_67(&uLocal_173, "REDR1AU", "REDR1_GBF", 4, 0, 0, 0))
				{
					iLocal_126++;
				}
			}
			else if (func_22() == 2)
			{
				if (func_67(&uLocal_173, "REDR1AU", "REDR1_GBT", 4, 0, 0, 0))
				{
					iLocal_126++;
				}
			}
			break;
		
		case 4:
			if (iLocal_125 < MISC::GET_GAME_TIMER())
			{
				iLocal_126++;
			}
			break;
		
		case 5:
			iLocal_126++;
			break;
		
		case 6:
			iLocal_126++;
			break;
		
		case 7:
			func_78(func_22(), 1, 80, 0, 1);
			bLocal_130 = true;
			break;
	}
}

int func_126(bool bParam0, bool bParam1, bool bParam2)
{
	if (MISC::IS_MINIGAME_IN_PROGRESS())
	{
		return 0;
	}
	if (bParam0)
	{
		if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			return 0;
		}
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		if (bParam0)
		{
			if (ENTITY::IS_ENTITY_DEAD(iVar0, 0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
			{
				if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, 0) != PLAYER::PLAYER_PED_ID())
				{
					return 0;
				}
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
		{
			if (ENTITY::GET_ENTITY_UPRIGHT_VALUE(iVar0) < 0.95f || ENTITY::GET_ENTITY_UPRIGHT_VALUE(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!PLAYER::CAN_PLAYER_START_MISSION(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

void func_127()
{
	if ((ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "random@drunk_driver_2", "driver_enter_m", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "random@drunk_driver_2", "driver_idle_m", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "random@drunk_driver_2", "driver_exit_m", 3))
	{
		iVar0 = 0;
		iVar1 = CAM::_0x19CAFA3C87F7C2FF();
		if (iVar1 != 0)
		{
			iVar2 = CAM::_0xEE778F8C7E1142E2(iVar1);
			if (iVar2 == 4)
			{
				iVar0 = 1;
			}
		}
		if ((((((((func_132(64) || PAD::IS_CONTROL_PRESSED(0, 86)) || PAD::IS_CONTROL_PRESSED(0, 71)) || PAD::IS_CONTROL_PRESSED(0, 72)) || PAD::IS_CONTROL_PRESSED(0, 76)) || PAD::IS_CONTROL_PRESSED(0, 73)) || PAD::IS_CONTROL_PRESSED(0, 68)) || PAD::IS_CONTROL_PRESSED(0, 75)) || iVar0)
		{
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		}
	}
	switch (iLocal_346)
	{
		case 0:
			if (func_131())
			{
				TASK::TASK_LOOK_AT_ENTITY(uLocal_91[0], uLocal_91[1], -1, 2060, 4);
				TASK::TASK_LOOK_AT_ENTITY(uLocal_91[1], uLocal_91[0], -1, 2060, 4);
				if (func_67(&uLocal_173, "REDR2AU", "REDR2_HC", 4, 0, 0, 0))
				{
					TASK::OPEN_SEQUENCE_TASK(&uLocal_99);
					TASK::TASK_PLAY_ANIM(0, "random@drunk_driver_2", "cardrunkflirt_intro_m", 2f, -2f, -1, 0, 0, 0, 0, 0);
					TASK::TASK_PLAY_ANIM(0, "random@drunk_driver_2", "cardrunkflirt_loop_m", 2f, -2f, -1, 1, 0, 0, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_99);
					TASK::TASK_PERFORM_SEQUENCE(uLocal_91[0], uLocal_99);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_99);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_99);
					TASK::TASK_PLAY_ANIM(0, "random@drunk_driver_2", "cardrunkflirt_intro_f", 2f, -2f, -1, 0, 0, 0, 0, 0);
					TASK::TASK_PLAY_ANIM(0, "random@drunk_driver_2", "cardrunkflirt_loop_f", 2f, -2f, -1, 1, 0, 0, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_99);
					TASK::TASK_PERFORM_SEQUENCE(uLocal_91[1], uLocal_99);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_99);
					iLocal_347 = MISC::GET_GAME_TIMER();
					iLocal_346++;
				}
			}
			break;
		
		case 1:
			if (!func_4())
			{
				iLocal_347 = MISC::GET_GAME_TIMER();
				iLocal_346++;
			}
			break;
		
		case 2:
			if (func_131())
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_347) > 5000)
				{
					if (func_67(&uLocal_173, "REDR2AU", "REDR2_CH", 4, 0, 0, 0))
					{
						iLocal_347 = MISC::GET_GAME_TIMER();
						iLocal_346++;
					}
				}
			}
			break;
		
		case 3:
			if ((MISC::GET_GAME_TIMER() - iLocal_347) > 15000)
			{
				if (func_131())
				{
					TASK::TASK_PLAY_ANIM(uLocal_91[0], "random@drunk_driver_2", "cardrunksex_intro_m", 2f, -2f, -1, 0, 0, 0, 0, 0);
					TASK::TASK_PLAY_ANIM(uLocal_91[1], "random@drunk_driver_2", "cardrunksex_intro_f", 2f, -2f, -1, 0, 0, 0, 0, 0);
					iLocal_346++;
				}
			}
			break;
		
		case 4:
			if (func_131())
			{
				func_129();
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_91[0], "random@drunk_driver_2", "cardrunksex_intro_m", 3))
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uLocal_91[0], "random@drunk_driver_2", "cardrunksex_intro_m") > 0.9f)
					{
						TASK::TASK_PLAY_ANIM(uLocal_91[0], "random@drunk_driver_2", "cardrunksex_loop_m", 2f, -2f, -1, 1, 0, 0, 0, 0);
						TASK::TASK_PLAY_ANIM(uLocal_91[1], "random@drunk_driver_2", "cardrunksex_loop_f", 2f, -2f, -1, 1, 0, 0, 0, 0);
						iLocal_347 = MISC::GET_GAME_TIMER();
						iLocal_346++;
					}
				}
			}
			else if (!PED::IS_PED_INJURED(uLocal_91[0]) && !PED::IS_PED_INJURED(uLocal_91[1]))
			{
				TASK::CLEAR_PED_TASKS(uLocal_91[0]);
				TASK::CLEAR_PED_TASKS(uLocal_91[1]);
				iLocal_346 = 3;
			}
			break;
		
		case 5:
			if (func_131())
			{
				func_129();
				func_128();
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(uLocal_91[1], 0), 0))
				{
					if ((MISC::GET_GAME_TIMER() - iLocal_347) > 15000)
					{
						bVar3 = false;
						iVar4 = CAM::_0x19CAFA3C87F7C2FF();
						if (iVar4 != 0)
						{
							iVar5 = CAM::_0xEE778F8C7E1142E2(iVar4);
							if (iVar5 == 4)
							{
								bVar3 = true;
							}
						}
						if (!bVar3)
						{
							TASK::OPEN_SEQUENCE_TASK(&uLocal_99);
							TASK::TASK_PLAY_ANIM(0, "random@drunk_driver_2", "driver_enter_m", 2f, -2f, -1, 0, 0, 0, 0, 0);
							TASK::TASK_PLAY_ANIM(0, "random@drunk_driver_2", "driver_idle_m", 2f, -2f, -1, 1, 0, 0, 0, 0);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_99);
							TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), uLocal_99);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_99);
						}
						if (func_22() == 0)
						{
							if (func_67(&uLocal_173, "REDR2AU", "REDR2_PSM", 4, 0, 0, 0))
							{
								iLocal_347 = MISC::GET_GAME_TIMER();
								iLocal_346++;
							}
						}
						else if (func_22() == 1)
						{
							if (func_67(&uLocal_173, "REDR2AU", "REDR2_PSF", 4, 0, 0, 0))
							{
								iLocal_347 = MISC::GET_GAME_TIMER();
								iLocal_346++;
							}
						}
						else if (func_22() == 2)
						{
							if (func_67(&uLocal_173, "REDR2AU", "REDR2_PST", 4, 0, 0, 0))
							{
								iLocal_347 = MISC::GET_GAME_TIMER() + 14000;
								iLocal_346++;
							}
						}
					}
				}
			}
			break;
		
		case 6:
			func_129();
			func_128();
			if ((MISC::GET_GAME_TIMER() - iLocal_347) > 5000 && func_131())
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(uLocal_91[1], 0), 0))
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_91[0], "random@drunk_driver_2", "cardrunksex_loop_m", 3))
					{
						if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uLocal_91[0], "random@drunk_driver_2", "cardrunksex_loop_m") > 0.9f)
						{
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "random@drunk_driver_2", "driver_idle_m", 3))
							{
								TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "random@drunk_driver_2", "driver_exit_m", 2f, -2f, -1, 0, 0, 0, 0, 0);
							}
							TASK::TASK_PLAY_ANIM(uLocal_91[0], "random@drunk_driver_2", "cardrunksex_outro_m", 2f, -2f, -1, 0, 0, 0, 0, 0);
							TASK::TASK_PLAY_ANIM(uLocal_91[1], "random@drunk_driver_2", "cardrunksex_outro_f", 2f, -2f, -1, 0, 0, 0, 0, 0);
							iLocal_346++;
						}
					}
				}
			}
			break;
		
		case 7:
			func_129();
			if (func_131())
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_91[0], "random@drunk_driver_2", "cardrunksex_outro_m", 3))
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uLocal_91[0], "random@drunk_driver_2", "cardrunksex_outro_m") < 0.25f && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uLocal_91[0], "random@drunk_driver_2", "cardrunksex_outro_m") > 0.2f)
					{
						ENTITY::APPLY_FORCE_TO_ENTITY(PED::GET_VEHICLE_PED_IS_IN(uLocal_91[0], 0), 0, 0f, 0f, 20f, -0.4f, 0f, 0f, 0, 1, 1, 1, 0, 1);
						iLocal_347 = MISC::GET_GAME_TIMER();
						iLocal_346++;
					}
				}
			}
			break;
		
		case 8:
			func_129();
			if (func_131())
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(uLocal_91[1], 0), 0))
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_91[0], "random@drunk_driver_2", "cardrunksex_outro_m", 3))
					{
						if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uLocal_91[0], "random@drunk_driver_2", "cardrunksex_outro_m") < 0.525f)
						{
							TASK::TASK_PLAY_ANIM(uLocal_91[0], "random@drunk_driver_2", "cardrunksex_loop_m", 2f, -2f, -1, 1, 0, 0, 0, 0);
							TASK::TASK_PLAY_ANIM(uLocal_91[1], "random@drunk_driver_2", "cardrunksex_loop_f", 2f, -2f, -1, 1, 0, 0, 0, 0);
							iLocal_346 = 6;
						}
					}
				}
			}
			if ((MISC::GET_GAME_TIMER() - iLocal_347) > 10000)
			{
				if (!PED::IS_PED_INJURED(uLocal_91[0]) && !PED::IS_PED_INJURED(uLocal_91[1]))
				{
					TASK::CLEAR_PED_TASKS(uLocal_91[0]);
					TASK::CLEAR_PED_TASKS(uLocal_91[1]);
					iLocal_347 = MISC::GET_GAME_TIMER();
					iLocal_346++;
				}
			}
			break;
	}
}

void func_128()
{
	if (!PED::IS_PED_INJURED(uLocal_91[1]))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(uLocal_91[0], 0), 0))
		{
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_91[1], "random@drunk_driver_2", "cardrunksex_loop_f", 3))
			{
				if ((((ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uLocal_91[1], "random@drunk_driver_2", "cardrunksex_loop_f") < 0.15f && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uLocal_91[1], "random@drunk_driver_2", "cardrunksex_loop_f") > 0.1f) || (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uLocal_91[1], "random@drunk_driver_2", "cardrunksex_loop_f") < 0.35f && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uLocal_91[1], "random@drunk_driver_2", "cardrunksex_loop_f") > 0.3f)) || (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uLocal_91[1], "random@drunk_driver_2", "cardrunksex_loop_f") < 0.65f && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uLocal_91[1], "random@drunk_driver_2", "cardrunksex_loop_f") > 0.6f)) || (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uLocal_91[1], "random@drunk_driver_2", "cardrunksex_loop_f") < 0.9f && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uLocal_91[1], "random@drunk_driver_2", "cardrunksex_loop_f") > 0.85f))
				{
					ENTITY::APPLY_FORCE_TO_ENTITY(PED::GET_VEHICLE_PED_IS_IN(uLocal_91[0], 0), 0, 0f, 0f, 15f, -0.4f, 0f, 0f, 0, 1, 1, 1, 0, 1);
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "SUSPENSION_SCRIPT_FORCE", PED::GET_VEHICLE_PED_IS_IN(uLocal_91[0], 0), 0, 0, 0);
				}
			}
		}
	}
}

void func_129()
{
	RECORDING::_STOP_RECORDING_THIS_FRAME();
	func_130();
}

void func_130()
{
	Global_22211.f_134 = 1;
}

int func_131()
{
	if (!PED::IS_PED_INJURED(uLocal_91[1]))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(uLocal_91[1], 0))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(uLocal_91[1], 0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
			{
				if (!PED::IS_PED_INJURED(uLocal_91[0]))
				{
					if (PED::IS_PED_IN_VEHICLE(uLocal_91[0], iVar0, 0))
					{
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 2, 0) == uLocal_91[0] && VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 1, 0) == uLocal_91[1])
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_132(int iParam0)
{
	iVar0 = (PAD::GET_CONTROL_VALUE(2, 195) - 128);
	iVar1 = (PAD::GET_CONTROL_VALUE(2, 196) - 128);
	if (((iVar0 < iParam0 && iVar0 > -iParam0) && iVar1 < iParam0) && iVar1 > -iParam0)
	{
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_133()
{
	if (func_22() == 2)
	{
		if (func_65())
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(-1014.154f, 4881.411f, 245.0001f, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 0), 1) < 400f)
			{
				if (!Global_31010)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("AC_EN_ROUTE_CULT");
					Global_31010 = 1;
					if (!Global_31009)
					{
						Global_31009 = 1;
						return 1;
					}
				}
			}
			else if (Global_31010)
			{
				AUDIO::TRIGGER_MUSIC_EVENT("AC_LEFT_AREA");
				Global_31010 = 0;
			}
		}
	}
	return 0;
}

int func_134(struct<3> Param0)
{
	if (func_22() == 2)
	{
		if (func_65() && !Global_31008)
		{
			if (fLocal_47 == -1f)
			{
				fLocal_47 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Param0);
			}
			if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Param0) > (fLocal_47 + 200f) || MISC::GET_DISTANCE_BETWEEN_COORDS(-1014.154f, 4881.411f, 245.0001f, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 0), 1) < 400f)
			{
				Global_31008 = 1;
				return 1;
			}
		}
	}
	return 0;
}

void func_135()
{
	if (!bLocal_108)
	{
		if ((((((((!func_33("REDR1_SWV") && !func_33("REDR1_COM")) && !func_33("REDR1_BANT1")) && !func_33("REDR1_SIK")) && !func_33("REDR2_DC")) && !func_33("REDR1_OFFR")) && !func_33("REDR2_OFFR")) && !func_33("REDR1_CULT")) && !func_33("REDR2_CULT"))
		{
			func_5(1);
		}
		if ((iLocal_110 && !iLocal_134) && (MISC::GET_GAME_TIMER() - iLocal_171) > 9000)
		{
			if (!func_4())
			{
				if (func_67(&uLocal_173, "REDR1AU", "REDR1_BANT1", 4, 0, 0, 0))
				{
					iLocal_134 = 1;
				}
			}
		}
	}
	if (iLocal_134 && !iLocal_135)
	{
		if (!func_4())
		{
			if (func_22() == 0)
			{
				func_67(&uLocal_173, "REDR1AU", "REDR1_RESPM", 4, 0, 0, 0);
			}
			else if (func_22() == 1)
			{
				func_67(&uLocal_173, "REDR1AU", "REDR1_RESPF", 4, 0, 0, 0);
			}
			else if (func_22() == 2)
			{
				func_67(&uLocal_173, "REDR1AU", "REDR1_RESPT", 4, 0, 0, 0);
			}
			iLocal_149 = MISC::GET_GAME_TIMER() + 6000;
			iLocal_135 = 1;
		}
	}
	if (!bLocal_108)
	{
		if ((iLocal_134 && !iLocal_133) && iLocal_149 < MISC::GET_GAME_TIMER())
		{
			if (!func_4())
			{
				if (func_67(&uLocal_173, "REDR1AU", "REDR1_COM", 4, 0, 0, 0))
				{
					iLocal_135 = 0;
					iLocal_133 = 1;
				}
			}
		}
	}
	else if ((bLocal_108 && !iLocal_132) && iLocal_149 < MISC::GET_GAME_TIMER())
	{
		if (!func_4())
		{
			if (func_67(&uLocal_173, "REDR1AU", "REDR1_BANT2", 4, 0, 0, 0))
			{
				iLocal_135 = 0;
				iLocal_132 = 1;
			}
		}
	}
}

void func_136()
{
	if (func_2() && iLocal_111 < 2)
	{
		if ((PLAYER::GET_TIME_SINCE_PLAYER_HIT_VEHICLE(PLAYER::PLAYER_ID()) > 0 && PLAYER::GET_TIME_SINCE_PLAYER_HIT_VEHICLE(PLAYER::PLAYER_ID()) < 100) || ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
		{
			if (!func_33("REDR1_SWV"))
			{
				func_5(0);
				func_68();
				SYSTEM::WAIT(0);
				func_67(&uLocal_173, "REDR1AU", "REDR1_SWV", 4, 0, 0, 0);
				iLocal_163 += 6;
			}
		}
		func_137(Local_160, (MISC::GET_GAME_TIMER() - iLocal_159));
	}
	if (iLocal_163 > 17)
	{
		iLocal_109 = 1;
	}
}

void func_137(struct<3> Param0, int iParam3)
{
	if (func_2())
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
		{
			Var0 = { ENTITY::GET_ENTITY_SPEED_VECTOR(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0) };
		}
	}
	Var3 = { Var0 - Param0 };
	Var3 = { func_138(Var3, iParam3) };
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
		{
			if (!VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)) && !func_33("REDR1_SWV"))
			{
				if (iLocal_165 == -1)
				{
					iLocal_165 = MISC::GET_GAME_TIMER() + 400;
				}
				else if (iLocal_165 < MISC::GET_GAME_TIMER())
				{
					iLocal_163 += 3;
					func_5(0);
					func_68();
					SYSTEM::WAIT(0);
					func_67(&uLocal_173, "REDR1AU", "REDR1_SWV", 4, 0, 0, 0);
				}
			}
			else
			{
				iLocal_165 = -1;
			}
		}
	}
	if (Var3.y > 0.025f)
	{
		iLocal_163++;
		if (!func_33("REDR1_SWV") && iLocal_111 < 4)
		{
			func_5(0);
			func_68();
			SYSTEM::WAIT(0);
			func_67(&uLocal_173, "REDR1AU", "REDR1_SWV", 4, 0, 0, 0);
		}
	}
	if (Var3.y < -0.025f)
	{
		iLocal_163++;
		if (!func_33("REDR1_SWV") && iLocal_111 < 4)
		{
			func_5(0);
			func_68();
			SYSTEM::WAIT(0);
			func_67(&uLocal_173, "REDR1AU", "REDR1_SWV", 4, 0, 0, 0);
		}
	}
	if (Var3.x > 0.025f)
	{
		iLocal_163++;
		if (!func_33("REDR1_SWV") && iLocal_111 < 4)
		{
			func_5(0);
			func_68();
			SYSTEM::WAIT(0);
			func_67(&uLocal_173, "REDR1AU", "REDR1_SWV", 4, 0, 0, 0);
		}
	}
	if (Var3.x < -0.025f)
	{
		iLocal_163++;
		if (!func_33("REDR1_SWV") && iLocal_111 < 4)
		{
			func_5(0);
			func_68();
			SYSTEM::WAIT(0);
			func_67(&uLocal_173, "REDR1AU", "REDR1_SWV", 4, 0, 0, 0);
		}
	}
}

Vector3 func_138(struct<3> Param0, int iParam3)
{
	Var0.x = (Param0.x / IntToFloat(iParam3));
	Var0.y = (Param0.y / IntToFloat(iParam3));
	Var0.z = (Param0.z / IntToFloat(iParam3));
	return Var0;
}

void func_139()
{
	if (!PED::IS_PED_INJURED(uLocal_91[0]))
	{
		switch (iLocal_111)
		{
			case 0:
				if (func_67(&uLocal_173, "REDR1AU", "REDR1_SIK", 4, 0, 0, 0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
					{
						VEHICLE::REMOVE_VEHICLE_WINDOW(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 1);
					}
					SYSTEM::SETTIMERB(0);
					iLocal_111++;
				}
				break;
			
			case 1:
				if (SYSTEM::TIMERB() > 3000 || !func_4())
				{
					if (!PED::IS_PED_INJURED(uLocal_91[0]))
					{
						TASK::CLEAR_PED_TASKS(uLocal_91[0]);
						TASK::TASK_PLAY_ANIM(uLocal_91[0], "random@drunk_driver_1", sLocal_114, 8f, -8f, -1, 0, 0, 0, 0, 0);
						iLocal_111++;
					}
				}
				break;
			
			case 2:
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_91[0], "random@drunk_driver_1", sLocal_114, 3))
				{
					fVar0 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uLocal_91[0], "random@drunk_driver_1", sLocal_114);
					if (fVar0 > 0.243f && fVar0 < 0.28f)
					{
						if (!iLocal_105)
						{
							GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE("scr_puke_in_car", uLocal_91[0], 0f, 0f, 0f, 0f, 0f, 0f, 31086, 1065353216, 0, 0, 0);
							iLocal_105 = 1;
						}
					}
					else if (fVar0 > 0.295f && fVar0 < 0.37f)
					{
						if (!iLocal_106)
						{
							GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE("scr_puke_in_car", uLocal_91[0], 0f, 0f, 0f, 0f, 0f, 0f, 31086, 1065353216, 0, 0, 0);
							iLocal_106 = 1;
							if (func_22() == 0)
							{
								func_67(&uLocal_173, "REDR1AU", "REDR1_SIKM", 4, 0, 0, 0);
							}
							else if (func_22() == 1)
							{
								func_67(&uLocal_173, "REDR1AU", "REDR1_SIKF", 4, 0, 0, 0);
							}
							else if (func_22() == 2)
							{
								func_67(&uLocal_173, "REDR1AU", "REDR1_SIKT", 4, 0, 0, 0);
							}
						}
					}
					else if (fVar0 > 0.49f && fVar0 < 0.55f)
					{
						if (!iLocal_107)
						{
							GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE("scr_puke_in_car", uLocal_91[0], 0f, 0f, 0f, 0f, 0f, 0f, 31086, 1065353216, 0, 0, 0);
							iLocal_107 = 1;
						}
					}
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uLocal_91[0], "random@drunk_driver_1", sLocal_114) > 0.8f)
					{
						iLocal_111++;
					}
				}
				break;
			
			case 3:
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_91[0], "random@drunk_driver_1", sLocal_114, 3))
				{
				}
				if (func_67(&uLocal_173, "REDR1AU", "REDR1_APO", 4, 0, 0, 0))
				{
					TASK::TASK_PLAY_ANIM(uLocal_91[0], "random@drunk_driver_1", sLocal_113, 2f, -4f, -1, 1, 0, 0, 0, 0);
					iLocal_105 = 0;
					iLocal_111++;
				}
				break;
			
			case 4:
				AUDIO::STOP_SOUND(uLocal_112);
				bLocal_108 = true;
				break;
			}
	}
}

void func_140()
{
	if (PED::IS_PED_STOPPED(PLAYER::PLAYER_PED_ID()))
	{
		if (!iLocal_168)
		{
			iLocal_166 = MISC::GET_GAME_TIMER();
			iLocal_168 = 1;
		}
		else
		{
			iLocal_167 = MISC::GET_GAME_TIMER();
		}
	}
	else
	{
		iLocal_167 = 0;
		iLocal_168 = 0;
		iLocal_169 = 0;
	}
	if ((iLocal_167 - iLocal_166) > 50000 && !iLocal_169)
	{
		if (iLocal_54 == 1)
		{
			func_68();
			SYSTEM::WAIT(0);
			func_67(&uLocal_173, "REDR1AU", "REDR1_WLK", 4, 0, 0, 0);
		}
		iLocal_169 = 1;
	}
	if ((iLocal_167 - iLocal_166) > 60000 && iLocal_169)
	{
		if (iLocal_54 == 2)
		{
			func_68();
			SYSTEM::WAIT(0);
			func_67(&uLocal_173, "REDR2AU", "REDR2_FU", 4, 0, 0, 0);
		}
		if (!PED::IS_PED_INJURED(uLocal_91[0]) && !PED::IS_PED_INJURED(uLocal_91[1]))
		{
			TASK::TASK_WANDER_STANDARD(uLocal_91[0], 1193033728, 0);
			func_70(uLocal_91[0], 120000, 0);
			PED::SET_PED_KEEP_TASK(uLocal_91[0], 1);
			if (PED::IS_PED_IN_GROUP(uLocal_91[0]))
			{
				PED::REMOVE_PED_FROM_GROUP(uLocal_91[0]);
			}
			TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(uLocal_91[1], uLocal_91[0], 0f, 1f, 0f, 1f, -1, 1036831949, 1);
			func_70(uLocal_91[1], 120000, 0);
			PED::SET_PED_KEEP_TASK(uLocal_91[1], 1);
			if (PED::IS_PED_IN_GROUP(uLocal_91[1]))
			{
				PED::REMOVE_PED_FROM_GROUP(uLocal_91[1]);
			}
		}
		func_66();
	}
}

void func_141()
{
	if (iLocal_54 == 1)
	{
		if (!PED::IS_PED_INJURED(uLocal_91[0]))
		{
			if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_91[0], 150f, 150f, 150f, 0, 1, 0))
			{
				func_66();
			}
			if (func_151() || PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
			{
				if (!PED::IS_PED_IN_GROUP(uLocal_91[0]))
				{
					PED::SET_PED_AS_GROUP_MEMBER(uLocal_91[0], func_63());
					PED::SET_PED_NEVER_LEAVES_GROUP(uLocal_91[0], 1);
					PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(uLocal_91[0], 0);
				}
			}
			else if (PED::IS_PED_IN_GROUP(uLocal_91[0]))
			{
				PED::REMOVE_PED_FROM_GROUP(uLocal_91[0]);
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (PED::IS_PED_IN_VEHICLE(uLocal_91[0], PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
				{
					if ((!ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_91[0], "random@drunk_driver_1", sLocal_113, 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_91[0], "random@drunk_driver_1", sLocal_114, 3)) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(uLocal_91[0]))
					{
						TASK::TASK_PLAY_ANIM(uLocal_91[0], "random@drunk_driver_1", sLocal_113, 2f, -4f, -1, 1, 0, 0, 0, 0);
					}
					if (func_154())
					{
						func_62(0);
						iLocal_120 = 0;
					}
				}
				else if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_91[0], "random@drunk_driver_1", sLocal_113, 3))
				{
					TASK::STOP_ANIM_PLAYBACK(uLocal_91[0], 0, 0);
				}
			}
			else
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(uLocal_91[0], 0))
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_91[0], "random@drunk_driver_1", sLocal_113, 3))
					{
						TASK::STOP_ANIM_PLAYBACK(uLocal_91[0], 0, 0);
					}
				}
				if (func_4() && !iLocal_120)
				{
					func_62(1);
					iLocal_120 = 1;
				}
			}
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_91[0], 8f, 8f, 8f, 0, 1, 0) || PED::IS_PED_IN_ANY_TAXI(PLAYER::PLAYER_PED_ID()))
			{
				if (HUD::DOES_BLIP_EXIST(uLocal_155[0]))
				{
					HUD::REMOVE_BLIP(&(uLocal_155[0]));
				}
				if (!HUD::DOES_BLIP_EXIST(uLocal_102))
				{
					uLocal_102 = func_144(Local_81, 1);
				}
			}
			else
			{
				if (!HUD::DOES_BLIP_EXIST(uLocal_155[0]))
				{
					uLocal_155[0] = func_169(uLocal_91[0], 0, 145);
				}
				if (HUD::DOES_BLIP_EXIST(uLocal_102))
				{
					HUD::REMOVE_BLIP(&uLocal_102);
				}
			}
		}
	}
	if (iLocal_54 == 2)
	{
		if ((!ENTITY::IS_ENTITY_DEAD(iLocal_94, 0) && !PED::IS_PED_INJURED(uLocal_91[0])) && !PED::IS_PED_INJURED(uLocal_91[1]))
		{
			if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_91[0], 150f, 150f, 150f, 0, 1, 0) || !ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_91[1], 150f, 150f, 150f, 0, 1, 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_91[0]))
				{
					if (!PED::IS_PED_INJURED(uLocal_91[0]))
					{
						if (PED::IS_PED_IN_GROUP(uLocal_91[0]))
						{
							PED::REMOVE_PED_FROM_GROUP(uLocal_91[0]);
						}
						TASK::CLEAR_PED_TASKS(uLocal_91[0]);
						TASK::TASK_SMART_FLEE_PED(uLocal_91[0], PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
						func_70(uLocal_91[0], 120000, 0);
						PED::SET_PED_KEEP_TASK(uLocal_91[0], 1);
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_91[1]))
				{
					if (!PED::IS_PED_INJURED(uLocal_91[1]))
					{
						if (PED::IS_PED_IN_GROUP(uLocal_91[1]))
						{
							PED::REMOVE_PED_FROM_GROUP(uLocal_91[1]);
						}
						TASK::CLEAR_PED_TASKS(uLocal_91[1]);
						TASK::TASK_SMART_FLEE_PED(uLocal_91[1], PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
						func_70(uLocal_91[1], 120000, 0);
						PED::SET_PED_KEEP_TASK(uLocal_91[1], 1);
					}
				}
				func_66();
			}
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_94, 0))
			{
				if (PED::IS_PED_IN_VEHICLE(uLocal_91[0], iLocal_94, 0) && PED::IS_PED_IN_VEHICLE(uLocal_91[1], iLocal_94, 0))
				{
					if (func_154())
					{
						func_62(0);
						iLocal_120 = 0;
					}
					if (!HUD::DOES_BLIP_EXIST(uLocal_102))
					{
						uLocal_102 = func_144(Local_81, 1);
					}
				}
				if (HUD::DOES_BLIP_EXIST(uLocal_158))
				{
					HUD::REMOVE_BLIP(&uLocal_158);
				}
			}
			else
			{
				if ((func_4() && !iLocal_120) && iLocal_64 > 3)
				{
					func_62(1);
					iLocal_120 = 1;
				}
				if (!HUD::DOES_BLIP_EXIST(uLocal_158))
				{
					uLocal_158 = func_152(iLocal_94, 0, 0);
				}
				if (HUD::DOES_BLIP_EXIST(uLocal_102))
				{
					HUD::REMOVE_BLIP(&uLocal_102);
				}
			}
		}
	}
}

void func_142()
{
	if (func_22() == 2)
	{
		if (!Global_31007)
		{
			func_143("CULT_BLIP_HELP", -1);
			Global_31007 = 1;
		}
	}
}

void func_143(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

var func_144(struct<3> Param0, int iParam3)
{
	uVar0 = HUD::ADD_BLIP_FOR_COORD(Param0);
	HUD::SET_BLIP_SCALE(uVar0, func_145(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	HUD::SET_BLIP_ROUTE(uVar0, iParam3);
	return uVar0;
}

float func_145(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_146()
{
	if (!PED::IS_PED_INJURED(uLocal_91[0]))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
		{
			if (!func_151())
			{
				if (PED::IS_PED_IN_GROUP(uLocal_91[0]))
				{
					PED::REMOVE_PED_FROM_GROUP(uLocal_91[0]);
				}
				if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_91[0], 1227113341) != 1 && TASK::GET_SCRIPT_TASK_STATUS(uLocal_91[0], 1227113341) != 0)
				{
					TASK::TASK_GO_TO_ENTITY(uLocal_91[0], PLAYER::PLAYER_PED_ID(), -1, 6f, 1073741824, 1073741824, 0);
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(uLocal_91[0], 0))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(uLocal_91[0], 0, 0);
				}
				if (!iLocal_122)
				{
					if (!func_4())
					{
						func_67(&uLocal_173, "REHH1AU", "REDR1_NO", 4, 0, 0, 0);
						iLocal_122 = 1;
					}
				}
			}
			else
			{
				iLocal_122 = 0;
				if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_91[0], 1227113341) == 1 && TASK::GET_SCRIPT_TASK_STATUS(uLocal_91[0], 1227113341) == 0)
				{
					TASK::CLEAR_PED_TASKS(uLocal_91[0]);
				}
			}
		}
		else if (!PED::IS_PED_IN_GROUP(uLocal_91[0]))
		{
			PED::SET_PED_AS_GROUP_MEMBER(uLocal_91[0], func_63());
			PED::SET_PED_NEVER_LEAVES_GROUP(uLocal_91[0], 1);
			PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(uLocal_91[0], 0);
		}
	}
}

float func_147(int iParam0, int iParam1, int iParam2)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 0) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam1, 0))
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(iParam1, 1) };
	}
	else
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(iParam1, 0) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var3, iParam2);
}

void func_148()
{
	if (!func_64())
	{
		if (func_22() == 2)
		{
			Global_31005 = 1;
		}
	}
}

void func_149(int iParam0, var uParam1)
{
	switch (*uParam1)
	{
		case 0:
			if (!PED::IS_PED_INJURED(iParam0))
			{
				TASK::OPEN_SEQUENCE_TASK(&uLocal_99);
				TASK::TASK_CLEAR_LOOK_AT(0);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2060, 4);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_99);
				TASK::TASK_PERFORM_SEQUENCE(iParam0, uLocal_99);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_99);
				*uParam1++;
			}
			break;
		
		case 1:
			if (!PED::IS_PED_INJURED(iParam0))
			{
				if (PED::IS_PED_FACING_PED(iParam0, PLAYER::PLAYER_PED_ID(), 45f))
				{
					*uParam1++;
				}
			}
			break;
		
		case 2:
			if (!PED::IS_PED_INJURED(iParam0))
			{
				if (!PED::IS_PED_FACING_PED(iParam0, PLAYER::PLAYER_PED_ID(), 45f))
				{
					*uParam1 = 0;
				}
			}
			break;
	}
}

void func_150()
{
	if (func_22() == 0)
	{
		if (func_67(&uLocal_173, "REDR1AU", "REDR1_OFFA", 4, 0, 0, 0))
		{
			SYSTEM::SETTIMERA(0);
			iLocal_170++;
		}
	}
	else if (func_22() == 1)
	{
		if (func_67(&uLocal_173, "REDR1AU", "REDR1_OFFB", 4, 0, 0, 0))
		{
			SYSTEM::SETTIMERA(0);
			iLocal_170++;
		}
	}
	else if (func_22() == 2)
	{
		if (func_67(&uLocal_173, "REDR1AU", "REDR1_OFFC", 4, 0, 0, 0))
		{
			SYSTEM::SETTIMERA(0);
			iLocal_170++;
		}
	}
}

int func_151()
{
	if (iLocal_54 == 1)
	{
		iVar0 = 1;
	}
	if (iLocal_54 == 2)
	{
		iVar0 = 2;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
		{
			if ((((((!PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_TRAIN(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), 782665360))
			{
				if (VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)) >= iVar0)
				{
					return 1;
				}
			}
		}
	}
	else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()), 0))
		{
			if (((((!VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()))) && !VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())))) && !VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())))) && !VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())))) && !VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())))) && ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())) != 782665360)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_152(int iParam0, bool bParam1, bool bParam2)
{
	return func_153(iParam0, !bParam1, bParam2);
}

int func_153(int iParam0, bool bParam1, bool bParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	uVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(uVar0, func_145(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
		if (!bParam2)
		{
			HUD::SET_BLIP_AS_FRIENDLY(uVar0, bParam1);
		}
		else
		{
			HUD::SET_BLIP_COLOUR(uVar0, 2);
		}
	}
	else if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		HUD::SET_BLIP_SCALE(uVar0, func_145(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(uVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(uVar0, func_145(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return uVar0;
}

int func_154()
{
	if (Global_21816 == 1)
	{
		return 1;
	}
	return 0;
}

void func_155()
{
	if (!PED::IS_PED_INJURED(uLocal_91[0]))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_91[0], 30f, 30f, 30f, 0, 1, 0))
		{
			if (!iLocal_115)
			{
				if (func_67(&uLocal_173, "REDR2AU", "REDR2_DCB", 4, 0, 0, 0))
				{
					iLocal_115 = 1;
				}
			}
			if (!iLocal_116)
			{
				if (func_67(&uLocal_173, "REDR2AU", "REDR2_DCC", 4, 0, 0, 0))
				{
					iLocal_116 = 1;
				}
			}
		}
	}
}

void func_156()
{
	if (HUD::DOES_BLIP_EXIST(uLocal_151))
	{
		HUD::REMOVE_BLIP(&uLocal_151);
	}
	iLocal_63 = 0;
	while (iLocal_63 <= (iLocal_90 - 1))
	{
		if (!HUD::DOES_BLIP_EXIST(uLocal_155[iLocal_63]))
		{
			uLocal_155[iLocal_63] = func_169(uLocal_91[iLocal_63], 0, 145);
			HUD::SHOW_HEIGHT_ON_BLIP(uLocal_155[iLocal_63], 0);
		}
		iLocal_63++;
	}
}

void func_157()
{
	AUDIO::START_PRELOADED_CONVERSATION();
	Global_21797 = 0;
}

void func_158(bool bParam0)
{
	if (bParam0)
	{
		StringCopy(&Global_110694, SCRIPT::GET_THIS_SCRIPT_NAME(), 24);
		Global_110688 = 1;
	}
	else
	{
		StringCopy(&Global_110694, "NULL", 24);
		Global_110688 = 0;
	}
}

int func_159(int iParam0)
{
	if (func_162())
	{
		Global_111628 = 1;
		Global_111625 = MISC::GET_GAME_TIMER();
		if (func_49(Global_111627))
		{
			func_160(0);
		}
		HUD::SET_MISSION_NAME(1, "RE_TITLE");
		if (iParam0 && func_49(Global_111627))
		{
			HUD::FLASH_MINIMAP_DISPLAY();
		}
		return 1;
	}
	return 0;
}

void func_160(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_111638.f_24990.f_2 < 3)
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_143(func_161(iParam0), -1);
					Global_111638.f_24990.f_2++;
					MISC::SET_BIT(&Global_111634, 0);
				}
			}
			break;
		
		case 1:
			if (!MISC::IS_BIT_SET(Global_111634, 1))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_143(func_161(iParam0), -1);
					Global_111638.f_24990.f_3++;
					MISC::SET_BIT(&Global_111634, 1);
				}
			}
			break;
		
		case 2:
			if (!MISC::IS_BIT_SET(Global_111634, 2))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_143(func_161(iParam0), -1);
					Global_111638.f_24990.f_4++;
					MISC::SET_BIT(&Global_111634, 2);
				}
			}
			break;
	}
}

char* func_161(int iParam0)
{
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "AM_H_REFS";
			break;
		
		case 1:
			sVar0 = "RE_FLASHBLIP";
			break;
		
		case 2:
			sVar0 = "RE_HANDOVER";
			break;
	}
	return sVar0;
}

int func_162()
{
	switch (func_163(&Global_30827, 0, 5, 0, SCRIPT::GET_ID_OF_THIS_THREAD()))
	{
		case 1:
			return 1;
			break;
		
		case 0:
			return 1;
			break;
	}
	return 0;
}

int func_163(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_96222.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_167(0))
		{
			return 0;
		}
		Global_41395++;
		*uParam0 = Global_41395;
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), 0);
		Global_22211.f_5 = 0;
		if (iParam2 != 5)
		{
			PLAYER::FORCE_CLEANUP(8);
		}
		Global_41431 = iParam2;
		Global_41393 = *uParam0;
		Global_41394 = iParam4;
		Global_41392 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_41392 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_41392)
			{
				if (Global_41398[iVar0] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_41393 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_165(iParam2))
		{
			return 0;
		}
		if (Global_41392 == 8)
		{
			return 0;
		}
		Global_41395++;
		*uParam0 = Global_41395;
		Global_41398[Global_41392] = Global_41395;
		Global_41398[Global_41392].f_1 = iParam1;
		Global_41398[Global_41392].f_2 = iParam2;
		Global_41398[Global_41392].f_3 = 0;
		Global_41392++;
		if (iParam4 != 0)
		{
			func_164(uParam0, iParam4);
		}
	}
	return 2;
}

void func_164(var uParam0, int iParam1)
{
	if (Global_41392 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_41392)
	{
		if (Global_41398[iVar0] == *uParam0)
		{
			Global_41398[iVar0].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_165(int iParam0)
{
	return func_166(iParam0, Global_41431);
}

int func_166(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

int func_167(int iParam0)
{
	if (Global_41431 == 15)
	{
		return 0;
	}
	if (func_165(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_168(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	func_32(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_20812 = 0;
	Global_20814 = 0;
	Global_20819 = 0;
	Global_21796 = 0;
	Global_21798 = 1;
	Global_21802 = 0;
	Global_21800 = iParam7;
	Global_2621441 = 0;
	return func_11(sParam2, iParam3, 0);
}

var func_169(int iParam0, bool bParam1, int iParam2)
{
	uVar0 = func_153(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && HUD::DOES_BLIP_EXIST(uVar0)) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_1798[iParam2].f_3)))
	{
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uVar0, &(Global_1798[iParam2].f_3));
	}
	return uVar0;
}

void func_170()
{
	if (func_172())
	{
		sLocal_113 = "drunk_idle_van";
		sLocal_114 = "vomit_van";
	}
	else if (func_171())
	{
		sLocal_113 = "drunk_idle_low";
		sLocal_114 = "vomit_low";
	}
	else
	{
		sLocal_113 = "drunk_idle";
		sLocal_114 = "vomit_outside";
	}
}

int func_171()
{
	if (PED::IS_PED_IN_ANY_VEHICLE(uLocal_91[0], 0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(uLocal_91[0], 0), 0))
		{
			iVar0 = VEHICLE::GET_VEHICLE_LAYOUT_HASH(PED::GET_VEHICLE_PED_IS_IN(uLocal_91[0], 0));
			if ((((((((((iVar0 == -2066252141 || iVar0 == 925191417) || iVar0 == -782720499) || iVar0 == 1105669833) || iVar0 == 542797648) || iVar0 == 68566729) || iVar0 == -1887744178) || iVar0 == -1150063973) || iVar0 == 1630950849) || iVar0 == -463340997) || iVar0 == 2033852426)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_172()
{
	if (PED::IS_PED_IN_ANY_VEHICLE(uLocal_91[0], 0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(uLocal_91[0], 0), 0))
		{
			iVar0 = VEHICLE::GET_VEHICLE_LAYOUT_HASH(PED::GET_VEHICLE_PED_IS_IN(uLocal_91[0], 0));
			if (((((((((((iVar0 == -1965057835 || iVar0 == 919485892) || iVar0 == -1838563680) || iVar0 == 1768419516) || iVar0 == 1576485197) || iVar0 == 929009548) || iVar0 == -497732145) || iVar0 == -1659990386) || iVar0 == 434478421) || iVar0 == 1816176348) || iVar0 == 1710903184) || iVar0 == 1663892749)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_173()
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID());
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
		{
			iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0, 0);
			if (!PED::IS_PED_INJURED(iVar1))
			{
				if (iVar1 != PLAYER::PLAYER_PED_ID())
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
					{
						if (!PED::IS_PED_HEADTRACKING_ENTITY(iVar1, PLAYER::PLAYER_PED_ID()))
						{
							TASK::TASK_LOOK_AT_ENTITY(iVar1, PLAYER::PLAYER_PED_ID(), 2000, 2048, 2);
						}
					}
				}
			}
		}
	}
}

void func_174()
{
	if (!iLocal_61)
	{
		func_176(39, 1);
		func_176(40, 1);
		func_176(41, 1);
		func_176(42, 1);
		func_176(43, 1);
		func_176(44, 1);
		MISC::CLEAR_AREA(Local_68, 8f, 1, 0, 0, 0);
		PED::ADD_SCENARIO_BLOCKING_AREA(Local_68 - Vector(8f, 8f, 8f), Local_68 + Vector(8f, 8f, 8f), 0, 1, 1, 1);
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_76 - Vector(10f, 15f, 15f), Local_76 + Vector(10f, 15f, 15f), 0, 1);
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_81 - Vector(10f, 15f, 15f), Local_81 + Vector(10f, 15f, 15f), 0, 1);
		MISC::SET_BIT(&uLocal_150, 5);
		if (func_22() == 0)
		{
			func_175(&uLocal_173, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
		}
		else if (func_22() == 1)
		{
			func_175(&uLocal_173, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
		}
		else if (func_22() == 2)
		{
			func_175(&uLocal_173, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
		}
		PED::ADD_RELATIONSHIP_GROUP("rghDrunkPeds", &uLocal_100);
		iLocal_94 = VEHICLE::CREATE_VEHICLE(iLocal_98, Local_76, fLocal_79, 1, 1, 0);
		VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(iLocal_94);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_94, 1084227584);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_98, 1);
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_94, 3);
		VEHICLE::SET_VEHICLE_DISABLE_TOWING(iLocal_94, 1);
		iLocal_80 = ENTITY::GET_ENTITY_HEALTH(iLocal_94);
		uLocal_91[0] = PED::CREATE_PED(26, iLocal_96, Local_68, fLocal_71, 1, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_91[0], 1);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_91[0], uLocal_100);
		PED::SET_PED_CONFIG_FLAG(uLocal_91[0], 185, 1);
		PED::SET_PED_FLEE_ATTRIBUTES(uLocal_91[0], 65536, 1);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_96);
		AUDIO::STOP_PED_SPEAKING(uLocal_91[0], 1);
		uLocal_91[1] = PED::CREATE_PED(26, iLocal_97, Local_72, fLocal_75, 1, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_91[1], 1);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_91[1], uLocal_100);
		PED::SET_PED_CONFIG_FLAG(uLocal_91[1], 185, 1);
		PED::SET_PED_FLEE_ATTRIBUTES(uLocal_91[1], 65536, 1);
		AUDIO::STOP_PED_SPEAKING(uLocal_91[1], 1);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, uLocal_100, 1862763509);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_97);
		if (iLocal_54 == 1)
		{
			TASK::TASK_PLAY_ANIM(uLocal_91[0], "random@drunk_driver_1", "drunk_driver_stand_loop_dd1", 8f, -2f, -1, 1, 0, 0, 0, 0);
			TASK::TASK_PLAY_ANIM(uLocal_91[1], "random@drunk_driver_1", "drunk_driver_stand_loop_dd2", 8f, -2f, -1, 1, 0, 0, 0, 0);
			PED::SET_PED_MOVEMENT_CLIPSET(uLocal_91[0], "MOVE_M@DRUNK@VERYDRUNK", 1048576000);
			PED::SET_PED_MOVEMENT_CLIPSET(uLocal_91[1], "MOVE_M@DRUNK@MODERATEDRUNK", 1048576000);
			PED::SET_PED_COMPONENT_VARIATION(uLocal_91[0], 0, 1, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(uLocal_91[0], 3, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uLocal_91[0], 4, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uLocal_91[1], 0, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uLocal_91[1], 3, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uLocal_91[1], 4, 0, 1, 0);
			VEHICLE::REMOVE_VEHICLE_WINDOW(iLocal_94, 1);
			PED::SET_PED_CONFIG_FLAG(uLocal_91[0], 206, 1);
			PED::SET_PED_CONFIG_FLAG(uLocal_91[0], 299, 1);
			PED::SET_PED_CAN_BE_TARGETTED(uLocal_91[0], 0);
			AUDIO::SET_AMBIENT_VOICE_NAME(uLocal_91[0], "REDR1Drunk1_AI_Drunk");
			AUDIO::SET_AMBIENT_VOICE_NAME(uLocal_91[1], "A_M_Y_VINEWOOD_01_BLACK_MINI_01");
			func_175(&uLocal_173, 3, uLocal_91[0], "REDR1Drunk1", 0, 1);
			func_175(&uLocal_173, 4, uLocal_91[1], "REDR1Drunk2", 0, 1);
		}
		if (iLocal_54 == 2)
		{
			PED::ADD_SCENARIO_BLOCKING_AREA(Local_81 - Vector(10f, 50f, 30f), Local_81 + Vector(10f, 50f, 30f), 0, 1, 1, 1);
			VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_94, 1);
			PED::SET_PED_COMPONENT_VARIATION(uLocal_91[1], 0, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uLocal_91[1], 2, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(uLocal_91[1], 3, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uLocal_91[1], 4, 1, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(uLocal_91[1], 8, 0, 0, 0);
			PED::SET_PED_CONFIG_FLAG(uLocal_91[0], 134, 1);
			PED::SET_PED_CONFIG_FLAG(uLocal_91[1], 134, 1);
			PED::SET_PED_CONFIG_FLAG(uLocal_91[0], 26, 1);
			PED::SET_PED_CONFIG_FLAG(uLocal_91[1], 26, 1);
			PED::SET_PED_CONFIG_FLAG(uLocal_91[0], 206, 1);
			PED::SET_PED_CONFIG_FLAG(uLocal_91[1], 206, 1);
			PED::SET_PED_CAN_BE_TARGETTED(uLocal_91[0], 0);
			PED::SET_PED_CAN_BE_TARGETTED(uLocal_91[1], 0);
			TASK::TASK_START_SCENARIO_IN_PLACE(uLocal_91[0], "WORLD_HUMAN_BUM_STANDING", 0, 0);
			TASK::TASK_LOOK_AT_ENTITY(uLocal_91[0], uLocal_91[1], -1, 2060, 4);
			TASK::TASK_START_SCENARIO_IN_PLACE(uLocal_91[1], "WORLD_HUMAN_BUM_STANDING", 0, 0);
			PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(uLocal_91[1], 0);
			TASK::TASK_LOOK_AT_ENTITY(uLocal_91[1], uLocal_91[0], -1, 2060, 4);
			PED::SET_PED_MOVEMENT_CLIPSET(uLocal_91[0], "MOVE_M@DRUNK@MODERATEDRUNK_HEAD_UP", 1048576000);
			PED::SET_PED_MOVEMENT_CLIPSET(uLocal_91[1], "MOVE_M@DRUNK@SLIGHTLYDRUNK", 1048576000);
			AUDIO::SET_AMBIENT_VOICE_NAME(uLocal_91[0], "A_M_Y_BeachVesp_01_White_Mini_01");
			AUDIO::SET_AMBIENT_VOICE_NAME(uLocal_91[1], "A_F_Y_EastSA_03_Latino_FULL_01");
			func_175(&uLocal_173, 3, uLocal_91[0], "REDR2DrunkM", 0, 1);
			func_175(&uLocal_173, 4, uLocal_91[1], "REDR2DrunkF", 0, 1);
		}
		iLocal_61 = 1;
	}
}

void func_175(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if (uParam0[iParam1]->f_7 == 1)
	{
	}
	(*uParam0)[iParam1] = iParam2;
	StringCopy(&(uParam0[iParam1]->f_1), sParam3, 24);
	uParam0[iParam1]->f_7 = 1;
	uParam0[iParam1]->f_8 = iParam4;
	uParam0[iParam1]->f_9 = iParam5;
	if (!Global_76622)
	{
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if (uParam0[iParam1]->f_8 == 0)
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, 0);
			}
			else
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, 1);
			}
		}
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if (uParam0[iParam1]->f_9 == 0)
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, 0);
			}
			else
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, 1);
			}
		}
	}
}

void func_176(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_180(iParam0, 2, 1))
		{
			func_179(iParam0, 2, 1);
		}
	}
	else if (func_180(iParam0, 2, 1))
	{
		func_177(iParam0, 2, 1);
	}
}

void func_177(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		MISC::CLEAR_BIT(&(Global_98796.f_1357[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_44() == 0)
		{
			uVar0 = func_89(func_178(iParam0), -1, 0);
			MISC::CLEAR_BIT(&uVar0, iParam1);
			func_85(func_178(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_111638.f_668[iParam0]), iParam1);
	}
}

int func_178(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 827;
			break;
		
		case 1:
			return 828;
			break;
		
		case 2:
			return 829;
			break;
		
		case 3:
			return 830;
			break;
		
		case 4:
			return 831;
			break;
		
		case 5:
			return 832;
			break;
		
		case 6:
			return 833;
			break;
		
		case 7:
			return 834;
			break;
		
		case 8:
			return 835;
			break;
		
		case 9:
			return 836;
			break;
		
		case 10:
			return 837;
			break;
		
		case 11:
			return 838;
			break;
		
		case 12:
			return 839;
			break;
		
		case 13:
			return 840;
			break;
		
		case 14:
			return 841;
			break;
		
		case 15:
			return 843;
			break;
		
		case 16:
			return 844;
			break;
		
		case 17:
			return 845;
			break;
		
		case 18:
			return 846;
			break;
		
		case 19:
			return 847;
			break;
		
		case 20:
			return 848;
			break;
		
		case 21:
			return 849;
			break;
		
		case 22:
			return 850;
			break;
		
		case 23:
			return 851;
			break;
		
		case 24:
			return 852;
			break;
		
		case 25:
			return 853;
			break;
		
		case 26:
			return 854;
			break;
		
		case 27:
			return 855;
			break;
		
		case 28:
			return 856;
			break;
		
		case 29:
			return 857;
			break;
		
		case 30:
			return 858;
			break;
		
		case 31:
			return 859;
			break;
		
		case 32:
			return 860;
			break;
		
		case 33:
			return 861;
			break;
		
		case 34:
			return 862;
			break;
		
		case 35:
			return 863;
			break;
		
		case 36:
			return 864;
			break;
		
		case 37:
			return 865;
			break;
		
		case 38:
			return 866;
			break;
		
		case 39:
			return 867;
			break;
		
		case 40:
			return 871;
			break;
		
		case 41:
			return 872;
			break;
		
		case 42:
			return 873;
			break;
		
		case 43:
			return 874;
			break;
		
		case 44:
			return 9977;
			break;
		
		case 45:
			return 3808;
			break;
		
		case 46:
			return 5383;
			break;
		
		case 47:
			return 6155;
			break;
		
		case 48:
			return 7232;
			break;
		
		case 49:
			return 7878;
			break;
		
		case 52:
			return 8912;
			break;
		
		case 50:
			return 8265;
			break;
		
		case 51:
			return 8267;
			break;
		
		default:
			break;
	}
	return 11511;
}

void func_179(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_98796.f_1357[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_44() == 0)
		{
			uVar0 = func_89(func_178(iParam0), -1, 0);
			MISC::SET_BIT(&uVar0, iParam1);
			func_85(func_178(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		MISC::SET_BIT(&(Global_111638.f_668[iParam0]), iParam1);
	}
}

int func_180(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return MISC::IS_BIT_SET(Global_98796.f_1357[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_44() == 0)
		{
			return MISC::IS_BIT_SET(func_89(func_178(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return MISC::IS_BIT_SET(Global_111638.f_668[iParam0], iParam1);
	}
	return 0;
}

void func_181()
{
	STREAMING::REQUEST_MODEL(iLocal_96);
	STREAMING::REQUEST_MODEL(iLocal_98);
	STREAMING::REQUEST_MODEL(iLocal_97);
	if (iLocal_54 == 1)
	{
		STREAMING::REQUEST_PTFX_ASSET();
		STREAMING::REQUEST_ANIM_DICT("random@drunk_driver_1");
		STREAMING::REQUEST_ANIM_SET("MOVE_M@DRUNK@VERYDRUNK");
		AUDIO::REQUEST_SCRIPT_AUDIO_BANK("Taxi_Vomit", 0, -1);
	}
	else if (iLocal_54 == 2)
	{
		STREAMING::REQUEST_ANIM_DICT("random@drunk_driver_2");
		STREAMING::REQUEST_ANIM_DICT("MOVE_M@DRUNK@SLIGHTLYDRUNK");
		STREAMING::REQUEST_ANIM_DICT("MOVE_M@DRUNK@MODERATEDRUNK_HEAD_UP");
	}
	STREAMING::REQUEST_ANIM_SET("MOVE_M@DRUNK@MODERATEDRUNK");
	if (((STREAMING::HAS_MODEL_LOADED(iLocal_96) && STREAMING::HAS_MODEL_LOADED(iLocal_98)) && STREAMING::HAS_ANIM_SET_LOADED("MOVE_M@DRUNK@MODERATEDRUNK")) && STREAMING::HAS_MODEL_LOADED(iLocal_97))
	{
		if (iLocal_54 == 1)
		{
			if (((STREAMING::HAS_PTFX_ASSET_LOADED() && STREAMING::HAS_ANIM_DICT_LOADED("random@drunk_driver_1")) && STREAMING::HAS_ANIM_SET_LOADED("MOVE_M@DRUNK@VERYDRUNK")) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("CONSTRUCTION_ACCIDENT_1", 0, -1))
			{
				iLocal_56 = 1;
			}
		}
		else if (iLocal_54 == 2)
		{
			if ((STREAMING::HAS_ANIM_DICT_LOADED("random@drunk_driver_2") && STREAMING::HAS_ANIM_DICT_LOADED("MOVE_M@DRUNK@SLIGHTLYDRUNK")) && STREAMING::HAS_ANIM_DICT_LOADED("MOVE_M@DRUNK@MODERATEDRUNK_HEAD_UP"))
			{
				iLocal_56 = 1;
			}
		}
	}
	else
	{
		STREAMING::REQUEST_MODEL(iLocal_96);
		STREAMING::REQUEST_MODEL(iLocal_98);
		STREAMING::REQUEST_MODEL(iLocal_97);
		if (iLocal_54 == 1)
		{
			STREAMING::REQUEST_PTFX_ASSET();
			STREAMING::REQUEST_ANIM_DICT("random@drunk_driver_1");
			STREAMING::REQUEST_ANIM_SET("MOVE_M@DRUNK@VERYDRUNK");
			AUDIO::REQUEST_SCRIPT_AUDIO_BANK("Taxi_Vomit", 0, -1);
		}
		else if (iLocal_54 == 2)
		{
			STREAMING::REQUEST_ANIM_DICT("random@drunk_driver_2");
			STREAMING::REQUEST_ANIM_DICT("MOVE_M@DRUNK@SLIGHTLYDRUNK");
			STREAMING::REQUEST_ANIM_DICT("MOVE_M@DRUNK@MODERATEDRUNK_HEAD_UP");
		}
		STREAMING::REQUEST_ANIM_SET("MOVE_M@DRUNK@MODERATEDRUNK");
	}
}

void func_182()
{
	if (iLocal_54 == 1)
	{
		Local_152 = { -1018.238f, -1350.101f, 4.475f };
		iLocal_90 = 2;
		iLocal_96 = 2114544056;
		iLocal_97 = -900269486;
		Local_68 = { -1016.762f, -1356.459f, 4.5531f };
		fLocal_71 = 247.8087f;
		Local_72 = { -1015.572f, -1357.081f, 4.552f };
		fLocal_75 = 66.3861f;
		Local_76 = { -1027.762f, -1341.644f, 4.4614f };
		fLocal_79 = 76.9418f;
		iLocal_98 = 142944341;
		Local_81 = { 160.8892f, -111.4167f, 61.2999f };
		Local_84 = { 159.2191f, -117.0664f, 61.2999f };
		bLocal_60 = true;
	}
	if (iLocal_54 == 2)
	{
		Local_152 = { 1893.856f, 3714.346f, 31.7771f };
		iLocal_90 = 2;
		iLocal_96 = -1736970383;
		iLocal_97 = -1514497514;
		Local_68 = { 1893.856f, 3714.346f, 31.7771f };
		fLocal_71 = 252.0142f;
		Local_72 = { 1894.763f, 3714.16f, 31.7605f };
		fLocal_75 = 86.1102f;
		Local_76 = { 1888.256f, 3717.189f, 31.8394f };
		fLocal_79 = 299.4672f;
		iLocal_98 = -685276541;
		Local_81 = { 1120.551f, 2647.307f, 36.9963f };
		Local_84 = { 1121.866f, 2641.707f, 37.1487f };
		bLocal_60 = true;
	}
}

int func_183()
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_44) < (75f * 75f))
		{
			return 1;
		}
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_194())
		{
			return 0;
		}
	}
	if (func_190())
	{
		return 1;
	}
	if (func_184(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_184(float fParam0, bool bParam1)
{
	iVar33 = -1;
	fVar34 = fParam0;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (func_24(func_22()))
		{
			iVar36 = func_54();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (MISC::IS_BIT_SET(Global_111638.f_18569[iVar32], 2) && !MISC::IS_BIT_SET(Global_111638.f_18569[iVar32], 3))
				{
					func_185(iVar32, &Var0);
					fVar35 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Var0.f_6, 1);
					if (fVar35 < fVar34)
					{
						bVar38 = true;
						if (bParam1)
						{
							if (iVar36 != Var0.f_26)
							{
								bVar38 = false;
							}
						}
						if (bVar38)
						{
							iVar33 = iVar32;
							fVar34 = fVar35;
						}
					}
				}
				iVar37++;
			}
		}
	}
	return iVar33;
}

void func_185(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_186(uParam1, "Abigail1", func_188(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_187(iParam0), 1, 0);
			break;
		
		case 1:
			func_186(uParam1, "Abigail2", func_188(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_187(iParam0), 1, 0);
			break;
		
		case 2:
			func_186(uParam1, "Barry1", func_188(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_187(iParam0), 1, 0);
			break;
		
		case 3:
			func_186(uParam1, "Barry2", func_188(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_187(iParam0), 1, 1);
			break;
		
		case 4:
			func_186(uParam1, "Barry3", func_188(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 5:
			func_186(uParam1, "Barry3A", func_188(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 6:
			func_186(uParam1, "Barry3C", func_188(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 7:
			func_186(uParam1, "Barry4", func_188(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_187(iParam0), 0, 0);
			break;
		
		case 8:
			func_186(uParam1, "Dreyfuss1", func_188(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 9:
			func_186(uParam1, "Epsilon1", func_188(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 10:
			func_186(uParam1, "Epsilon2", func_188(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_187(iParam0), 1, 0);
			break;
		
		case 11:
			func_186(uParam1, "Epsilon3", func_188(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 12:
			func_186(uParam1, "Epsilon4", func_188(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 13:
			func_186(uParam1, "Epsilon5", func_188(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_187(iParam0), 1, 0);
			break;
		
		case 14:
			func_186(uParam1, "Epsilon6", func_188(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 15:
			func_186(uParam1, "Epsilon7", func_188(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 16:
			func_186(uParam1, "Epsilon8", func_188(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_187(iParam0), 1, 0);
			break;
		
		case 17:
			func_186(uParam1, "Extreme1", func_188(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 18:
			func_186(uParam1, "Extreme2", func_188(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 19:
			func_186(uParam1, "Extreme3", func_188(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 20:
			func_186(uParam1, "Extreme4", func_188(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 21:
			func_186(uParam1, "Fanatic1", func_188(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_187(iParam0), 1, 0);
			break;
		
		case 22:
			func_186(uParam1, "Fanatic2", func_188(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_187(iParam0), 1, 0);
			break;
		
		case 23:
			func_186(uParam1, "Fanatic3", func_188(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_187(iParam0), 0, 1);
			break;
		
		case 24:
			func_186(uParam1, "Hao1", func_188(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_187(iParam0), 0, 1);
			break;
		
		case 25:
			func_186(uParam1, "Hunting1", func_188(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 26:
			func_186(uParam1, "Hunting2", func_188(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 27:
			func_186(uParam1, "Josh1", func_188(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_187(iParam0), 1, 0);
			break;
		
		case 28:
			func_186(uParam1, "Josh2", func_188(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_187(iParam0), 1, 1);
			break;
		
		case 29:
			func_186(uParam1, "Josh3", func_188(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_187(iParam0), 1, 1);
			break;
		
		case 30:
			func_186(uParam1, "Josh4", func_188(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_187(iParam0), 1, 0);
			break;
		
		case 31:
			func_186(uParam1, "Maude1", func_188(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 32:
			func_186(uParam1, "Minute1", func_188(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 33:
			func_186(uParam1, "Minute2", func_188(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 34:
			func_186(uParam1, "Minute3", func_188(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 35:
			func_186(uParam1, "MrsPhilips1", func_188(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 36:
			func_186(uParam1, "MrsPhilips2", func_188(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 37:
			func_186(uParam1, "Nigel1", func_188(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_187(iParam0), 1, 0);
			break;
		
		case 38:
			func_186(uParam1, "Nigel1A", func_188(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_187(iParam0), 1, 1);
			break;
		
		case 39:
			func_186(uParam1, "Nigel1B", func_188(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_187(iParam0), 1, 1);
			break;
		
		case 40:
			func_186(uParam1, "Nigel1C", func_188(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_187(iParam0), 1, 1);
			break;
		
		case 41:
			func_186(uParam1, "Nigel1D", func_188(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_187(iParam0), 1, 1);
			break;
		
		case 42:
			func_186(uParam1, "Nigel2", func_188(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_187(iParam0), 1, 1);
			break;
		
		case 43:
			func_186(uParam1, "Nigel3", func_188(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_187(iParam0), 1, 1);
			break;
		
		case 44:
			func_186(uParam1, "Omega1", func_188(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 45:
			func_186(uParam1, "Omega2", func_188(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 46:
			func_186(uParam1, "Paparazzo1", func_188(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 47:
			func_186(uParam1, "Paparazzo2", func_188(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 48:
			func_186(uParam1, "Paparazzo3", func_188(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 49:
			func_186(uParam1, "Paparazzo3A", func_188(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 50:
			func_186(uParam1, "Paparazzo3B", func_188(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 51:
			func_186(uParam1, "Paparazzo4", func_188(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 52:
			func_186(uParam1, "Rampage1", func_188(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 54:
			func_186(uParam1, "Rampage3", func_188(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_187(iParam0), 1, 0);
			break;
		
		case 55:
			func_186(uParam1, "Rampage4", func_188(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_187(iParam0), 1, 0);
			break;
		
		case 56:
			func_186(uParam1, "Rampage5", func_188(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 53:
			func_186(uParam1, "Rampage2", func_188(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_187(iParam0), 1, 0);
			break;
		
		case 57:
			func_186(uParam1, "TheLastOne", func_188(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 58:
			func_186(uParam1, "Tonya1", func_188(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 59:
			func_186(uParam1, "Tonya2", func_188(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 60:
			func_186(uParam1, "Tonya3", func_188(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 61:
			func_186(uParam1, "Tonya4", func_188(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 62:
			func_186(uParam1, "Tonya5", func_188(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_186(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
{
	uParam0->f_4 = iParam5;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam4;
	uParam0->f_5 = iParam6;
	uParam0->f_6 = { Param7 };
	uParam0->f_9 = iParam10;
	StringCopy(&(uParam0->f_10), sParam11, 16);
	uParam0->f_14 = iParam12;
	uParam0->f_15 = iParam13;
	StringCopy(&(uParam0->f_16), sParam14, 24);
	uParam0->f_22 = iParam15;
	uParam0->f_23 = iParam16;
	uParam0->f_24 = iParam17;
	uParam0->f_25 = iParam18;
	uParam0->f_26 = iParam19;
	uParam0->f_27 = iParam20;
	uParam0->f_28 = iParam21;
	uParam0->f_29 = uParam22;
	uParam0->f_30 = iParam23;
	uParam0->f_31 = iParam24;
}

int func_187(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 1;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 1;
			break;
		
		case 6:
			return 1;
			break;
		
		case 7:
			return 0;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 0;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 0;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 0;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 1;
			break;
		
		case 23:
			return 1;
			break;
		
		case 24:
			return 1;
			break;
		
		case 25:
			return 1;
			break;
		
		case 26:
			return 1;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 1;
			break;
		
		case 30:
			return 1;
			break;
		
		case 31:
			return 0;
			break;
		
		case 32:
			return 1;
			break;
		
		case 33:
			return 1;
			break;
		
		case 34:
			return 1;
			break;
		
		case 35:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 37:
			return 0;
			break;
		
		case 38:
			return 1;
			break;
		
		case 39:
			return 1;
			break;
		
		case 40:
			return 1;
			break;
		
		case 41:
			return 1;
			break;
		
		case 42:
			return 1;
			break;
		
		case 43:
			return 1;
			break;
		
		case 44:
			return 0;
			break;
		
		case 45:
			return 0;
			break;
		
		case 46:
			return 1;
			break;
		
		case 47:
			return 1;
			break;
		
		case 48:
			return 0;
			break;
		
		case 49:
			return 1;
			break;
		
		case 50:
			return 1;
			break;
		
		case 51:
			return 1;
			break;
		
		case 52:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 1;
			break;
		
		case 53:
			return 1;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 1;
			break;
		
		case 59:
			return 1;
			break;
		
		case 60:
			return 1;
			break;
		
		case 61:
			return 1;
			break;
		
		case 62:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

struct<2> func_188(int iParam0)
{
	StringCopy(&Var0, "", 8);
	cVar2 = { func_189(iParam0) };
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_189(int iParam0)
{
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

int func_190()
{
	if (func_193() && !func_194())
	{
		return 1;
	}
	if (func_192() && func_191())
	{
		return 1;
	}
	return 0;
}

bool func_191()
{
	return Global_111356 > 0;
}

int func_192()
{
	if (Global_95666 != -1)
	{
		return 1;
	}
	return 0;
}

int func_193()
{
	if (Global_95666 != -1)
	{
		return MISC::IS_BIT_SET(Global_89532[Global_95666].f_15, 20);
	}
	return 0;
}

int func_194()
{
	if (MISC::IS_PC_VERSION())
	{
		if (MISC::_0xD10282B6E3751BA0() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_195()
{
	if (!func_165(5))
	{
		return 1;
	}
	if (func_190())
	{
		return 1;
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_194())
		{
			return 0;
		}
	}
	if (func_184(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_196()
{
	if ((Global_111627 == func_58() && MISC::GET_RANDOM_EVENT_FLAG()) && Global_111628)
	{
		return 1;
	}
	return 0;
}

void func_197(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_58();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_199(iParam0);
	MISC::_0x65D2EBB47E1CEC21(0);
	MISC::SET_RANDOM_EVENT_FLAG(1);
	Global_111624 = 0;
	func_198();
}

void func_198()
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)), 1);
		}
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, 0);
	}
}

void func_199(int iParam0)
{
	Global_111627 = iParam0;
}

int func_200(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	if (!Global_150217)
	{
		return 0;
	}
	if (iParam3 == -1)
	{
		iParam3 = func_58();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_241())
		{
			return 0;
		}
	}
	Local_44 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_194())
			{
				return 0;
			}
		}
		if (!Global_111638.f_9080)
		{
			return 0;
		}
		if (func_39(0))
		{
			return 0;
		}
		if (func_190())
		{
			return 0;
		}
		if (func_240())
		{
			return 0;
		}
		if (Global_111627 != -1)
		{
			return 0;
		}
		if (func_24(func_22()))
		{
			if (func_184(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !bParam6)
		{
			if ((Var1.z - Local_44.z) > 50f)
			{
				return 0;
			}
		}
		if (!func_239(iParam3))
		{
			return 0;
		}
		if (func_24(func_22()))
		{
			if (func_238(func_22()) == 4 || func_238(func_22()) == 5)
			{
				return 0;
			}
		}
		if (func_24(func_22()))
		{
			if (!func_237(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!func_236(Global_111638.f_24990.f_43[iParam3]))
		{
			return 0;
		}
		if ((MISC::GET_GAME_TIMER() - Global_111629) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (func_235())
		{
			return 0;
		}
		if (MISC::GET_MISSION_FLAG())
		{
			return 0;
		}
		if (MISC::GET_RANDOM_EVENT_FLAG())
		{
			return 0;
		}
		if (!func_226(4))
		{
			return 0;
		}
		if (!func_165(5))
		{
			return 0;
		}
		if (func_225(iParam3, iParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_3 && iParam3 != 10)
		{
			return 0;
		}
		if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())))
		{
			if ((INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(377.153f, -717.567f, 10.0536f) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(320.9934f, 265.2515f, 82.1221f)) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_225(0, 0))
		{
			return 0;
		}
		if (Global_30914)
		{
			return 0;
		}
		if (func_239(30) && !func_225(30, 0))
		{
			if (iParam3 != 30)
			{
				if (SYSTEM::VDIST2(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_24(func_22()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				Var5 = { Global_111638.f_2358.f_539.f_2300[iVar4] };
				iVar8 = Global_111638.f_2358.f_539.f_2296[iVar4];
				if (func_224(iVar8))
				{
					if (func_202(iVar4))
					{
						if (!func_201(Var5, 0f, 0f, 0f, 0))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Var5) < (210f * 210f))
							{
								if (func_22() != iVar4)
								{
									return 0;
								}
							}
						}
					}
				}
				iVar4++;
			}
		}
	}
	return 1;
}

bool func_201(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.x == Param3.x && Param0.y == Param3.y);
	}
	return ((Param0.x == Param3.x && Param0.y == Param3.y) && Param0.z == Param3.z);
}

bool func_202(int iParam0)
{
	iVar0 = Global_111638.f_2358.f_539.f_2296[iParam0];
	return func_203(iVar0);
}

int func_203(int iParam0)
{
	return func_204(iParam0, 1);
}

int func_204(int iParam0, int iParam1)
{
	if (!func_224(iParam0))
	{
		return 0;
	}
	func_205(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_205(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_206(func_217(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_206(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	if (func_216(iParam0, iParam1))
	{
		iVar0 = func_215(iParam1);
		iVar1 = func_213(iParam0);
		iVar2 = (func_213(iParam0) - func_213(iParam1));
		iVar3 = (func_215(iParam0) - func_215(iParam1));
		iVar4 = (func_212(iParam0) - func_212(iParam1));
		iVar5 = (func_211(iParam0) - func_211(iParam1));
		iVar6 = (func_210(iParam0) - func_210(iParam1));
		iVar7 = (func_209(iParam0) - func_209(iParam1));
	}
	else
	{
		iVar0 = func_215(iParam0);
		iVar1 = func_213(iParam1);
		iVar2 = (func_213(iParam1) - func_213(iParam0));
		iVar3 = (func_215(iParam1) - func_215(iParam0));
		iVar4 = (func_212(iParam1) - func_212(iParam0));
		iVar5 = (func_211(iParam1) - func_211(iParam0));
		iVar6 = (func_210(iParam1) - func_210(iParam0));
		iVar7 = (func_209(iParam1) - func_209(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_208(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_207(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

float func_207(float fParam0, float fParam1, float fParam2)
{
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(SYSTEM::ROUND(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

int func_208(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

int func_209(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_210(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_211(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_212(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_213(int iParam0)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_214(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 2011;
}

int func_214(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_215(int iParam0)
{
	return iParam0 & 15;
}

int func_216(int iParam0, int iParam1)
{
	if (!func_224(iParam1) || !func_224(iParam0))
	{
		return 1;
	}
	iVar0 = func_213(iParam0);
	iVar1 = func_213(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_215(iParam0);
	iVar1 = func_215(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_212(iParam0);
	iVar1 = func_212(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_211(iParam0);
	iVar1 = func_211(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_210(iParam0);
	iVar1 = func_210(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_209(iParam0);
	iVar1 = func_209(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_217()
{
	func_223(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_222(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_221(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_220(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_219(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_218(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_218(var uParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_219(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_220(var uParam0, int iParam1)
{
	iVar0 = func_215(*uParam0);
	iVar1 = func_213(*uParam0);
	if (iParam1 < 1 || iParam1 > func_208(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_221(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_222(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_223(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_224(int iParam0)
{
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_209(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_210(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_211(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_213(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_215(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_212(iParam0);
	if (iVar5 < 1 || iVar5 > func_208(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_225(int iParam0, int iParam1)
{
	if (MISC::IS_BIT_SET(Global_111638.f_24990.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_226(int iParam0)
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = func_22();
				if (!func_24(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_234()) || Global_110685) || Global_30770) || func_233()) || func_30(8, -1)) || func_232()) || func_231()) || func_230()) || func_229()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1) || func_234()) || Global_30770) || func_233()) || func_30(8, -1)) || func_230()) || func_232()) || func_231()) || func_229()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_234()) || Global_110685) || Global_30770) || func_233()) || func_30(8, -1)) || func_230()) || func_232()) || func_231()) || func_229()) || Global_111638.f_7683.f_919[iVar0] == 5) || Global_41978 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_234()) || Global_110685) || Global_30770) || func_233()) || func_30(8, -1)) || func_232()) || func_231()) || func_229()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_234() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || func_30(8, -1)) || func_229()) || func_228()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_30(8, -1) || func_232()) || func_231()) || func_228()) || func_227())
						{
							return 0;
						}
						if ((STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() != 3) && STREAMING::GET_PLAYER_SWITCH_STATE() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
						{
							if ((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_234()) || Global_30770) || func_233()) || func_30(8, -1)) || func_231()) || func_230()) || func_229()) || Global_111638.f_7683.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || func_234()) || func_231()) || Global_110685) || Global_30770) || func_233()) || Global_42596) || func_30(8, -1)) || func_230()) || func_228()) || func_229()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_234()) || Global_110685) || Global_30770) || func_233()) || func_30(8, -1)) || func_230()) || func_228()) || func_232()) || func_231()) || func_229())
						{
							return 0;
						}
						break;
				}
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
	else
	{
		return 0;
	}
	return 1;
}

var func_227()
{
	return Global_98783.f_1;
}

int func_228()
{
	if (Global_95666 != -1)
	{
		return MISC::IS_BIT_SET(Global_89532[Global_95666].f_15, 13);
	}
	return 0;
}

int func_229()
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-1424752554) > 0)
	{
		return 1;
	}
	return 0;
}

int func_230()
{
	if (Global_76882)
	{
		return 1;
	}
	else if (Global_61506 && !Global_61512)
	{
		return 1;
	}
	return 0;
}

bool func_231()
{
	return Global_98796.f_346 > 0;
}

bool func_232()
{
	return Global_98796.f_345 > 0;
}

var func_233()
{
	return Global_1312877;
}

int func_234()
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_96222.f_44 == 1;
	}
	return 0;
}

int func_235()
{
	func_21();
	if (Global_8161[Global_19486][0].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_236(int iParam0)
{
	return func_216(func_217(), iParam0);
}

int func_237(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	iVar1 = func_22();
	if (iParam2 != 145 && ((iParam2 == 0 || iParam2 == 1) || iParam2 == 2))
	{
		iVar1 = iParam2;
	}
	switch (iParam0)
	{
		case 18:
			if (iVar1 == 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 19:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 20:
			if (iVar1 != 1)
			{
				iVar0 = 1;
			}
			break;
		
		case 28:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 13:
			if (iVar1 == 0)
			{
				if (iParam1 == 2)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = 1;
				}
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 22:
			if (iParam1 == 2 || iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 30:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

int func_238(int iParam0)
{
	if (!func_24(iParam0))
	{
		return 7;
	}
	return Global_111638.f_7683.f_919[iParam0];
}

bool func_239(int iParam0)
{
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_241())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		bVar1 = MISC::IS_BIT_SET(Global_111638.f_24990, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = MISC::IS_BIT_SET(Global_111638.f_24990.f_1, iVar0);
	}
	return bVar1;
}

int func_240()
{
	if (Global_30918)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
			{
				if (!PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0, 0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_241()
{
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
		{
			if (NETWORK::_NETWORK_GET_ROS_PRIVILEGE_24())
			{
				STATS::STAT_GET_INT(1571103992, &uVar0, -1);
				MISC::SET_BIT(&uVar0, 2);
				MISC::SET_BIT(&uVar0, 4);
				MISC::SET_BIT(&uVar0, 6);
				MISC::SET_BIT(&Global_25, 2);
				MISC::SET_BIT(&Global_25, 4);
				MISC::SET_BIT(&Global_25, 6);
				STATS::STAT_SET_INT(1571103992, uVar0, 1);
				if (MISC::ARE_PROFILE_SETTINGS_VALID())
				{
					iVar0 = MISC::GET_PROFILE_SETTING(866);
					MISC::SET_BIT(&iVar0, 0);
					STATS::_SET_HAS_CONTENT_UNLOCKS_FLAGS(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_150472 == 2)
	{
		return 1;
	}
	else if (Global_150472 == 3)
	{
		return 0;
	}
	if (MISC::ARE_PROFILE_SETTINGS_VALID())
	{
		if (MISC::IS_BIT_SET(MISC::GET_PROFILE_SETTING(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_242()
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		if ((ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "random@drunk_driver_2", "driver_enter_m", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "random@drunk_driver_2", "driver_idle_m", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "random@drunk_driver_2", "driver_exit_m", 3))
		{
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		}
	}
	if (iLocal_172)
	{
		func_279(0);
		if (Global_31009)
		{
			AUDIO::TRIGGER_MUSIC_EVENT("AC_STOP");
		}
		func_278();
		func_6();
		AUDIO::_0xB542DE8C3D1CB210(0);
		PED::REMOVE_SCENARIO_BLOCKING_AREAS();
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_76 - Vector(10f, 15f, 15f), Local_76 + Vector(10f, 15f, 15f), 1, 1);
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_81 - Vector(10f, 15f, 15f), Local_81 + Vector(10f, 15f, 15f), 1, 1);
		func_158(0);
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1, 0);
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_95, 0))
		{
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_95, 0) && func_147(PLAYER::PLAYER_PED_ID(), iLocal_95, 1) > 50f)
			{
				func_254(iLocal_95, 0, 145);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_91[0]))
		{
			if (!PED::IS_PED_INJURED(uLocal_91[0]))
			{
				PED::SET_PED_CONFIG_FLAG(uLocal_91[0], 317, 1);
				if (!PED::IS_PED_IN_ANY_VEHICLE(uLocal_91[0], 0))
				{
					PED::RESET_PED_LAST_VEHICLE(uLocal_91[0]);
				}
				if (PED::IS_PED_IN_GROUP(uLocal_91[0]))
				{
					PED::REMOVE_PED_FROM_GROUP(uLocal_91[0]);
				}
			}
		}
		iLocal_63 = 0;
		while (iLocal_63 <= (iLocal_90 - 1))
		{
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_91[iLocal_63]))
			{
				if (!PED::IS_PED_INJURED(uLocal_91[iLocal_63]))
				{
					PED::SET_PED_CONFIG_FLAG(uLocal_91[iLocal_63], 317, 1);
					if (!PED::IS_PED_IN_ANY_VEHICLE(uLocal_91[iLocal_63], 0))
					{
						PED::RESET_PED_LAST_VEHICLE(uLocal_91[iLocal_63]);
					}
					PED::SET_PED_CAN_BE_TARGETTED(uLocal_91[iLocal_63], 1);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, uLocal_100, 1862763509);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_91[iLocal_63], 0);
				}
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_91[iLocal_63]));
			}
			iLocal_63++;
		}
		iLocal_63 = 0;
		while (iLocal_63 <= (iLocal_90 - 1))
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_155[iLocal_63]))
			{
				HUD::REMOVE_BLIP(&(uLocal_155[iLocal_63]));
			}
			iLocal_63++;
		}
		if (iLocal_54 == 1)
		{
			PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(42.7808f, -1324.405f, -10f, 98.245f, -1277.174f, 10f, 1);
		}
		if (CAM::DOES_CAM_EXIST(uLocal_127))
		{
			if (CAM::IS_CAM_ACTIVE(uLocal_127))
			{
				CAM::SET_CAM_ACTIVE(uLocal_127, 0);
			}
		}
	}
	func_243(-1);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_243(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_58();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_196())
	{
		func_247(iParam0);
		HUD::SET_MISSION_NAME(0, 0);
		Global_111629 = MISC::GET_GAME_TIMER();
		func_246(30000);
		StringCopy(&cVar0, func_245(Global_111627, 1), 64);
		if (func_57(Global_111627) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_111626, 64);
		}
		STATS::PLAYSTATS_RANDOM_MISSION_DONE(&cVar0, Global_111624, (MISC::GET_GAME_TIMER() - Global_111625), 0);
	}
	else if (MISC::IS_BIT_SET(Global_111634, 0) && Global_111638.f_24990.f_2 < 3)
	{
		MISC::CLEAR_BIT(&Global_111634, 0);
	}
	func_244(&Global_30827);
	Global_111628 = 0;
	func_199(-1);
}

void func_244(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_41393)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_41392 = 0;
	Global_41394 = 0;
	Global_41431 = 15;
	Global_61509 = 0;
	Global_61510 = 0;
}

char* func_245(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return "RE_ACCIDENT";
			break;
		
		case 1:
			return "RE_ATMROBBERY";
			break;
		
		case 2:
			return "RE_BUSTOUR";
			break;
		
		case 3:
			return "RE_DOMESTIC";
			break;
		
		case 4:
			return "RE_GETAWAYDRIVER";
			break;
		
		case 5:
			return "RE_SHOPROBBERY";
			break;
		
		case 6:
			return "RE_SNATCHED";
			break;
		
		case 7:
			return "RE_LURED";
			break;
		
		case 8:
			return "RE_BIKETHIEFSTAMP";
			break;
		
		case 9:
			return "RE_SECURITYVAN";
			break;
		
		case 10:
			return "RE_PAPARAZZI";
			break;
		
		case 11:
			return "RE_CHASETHIEVES";
			break;
		
		case 12:
			return "RE_DEALGONEWRONG";
			break;
		
		case 13:
			return "RE_HITCHLIFT";
			break;
		
		case 14:
			return "RE_STAG";
			break;
		
		case 15:
			return "RE_ARREST";
			break;
		
		case 16:
			return "RE_CRASHRESCUE";
			break;
		
		case 17:
			return "RE_CARTHEFT";
			break;
		
		case 18:
			return "RE_CULTSHOOTOUT";
			break;
		
		case 19:
			return "RE_GANGFIGHT";
			break;
		
		case 20:
			return "RE_GANGINTIMIDATION";
			break;
		
		case 21:
			return "RE_PRISONVANBREAK";
			break;
		
		case 22:
			return "RE_PRISONERLIFT";
			break;
		
		case 23:
			return "RE_ABANDONEDCAR";
			break;
		
		case 24:
			return "RE_BURIAL";
			break;
		
		case 25:
			return "RE_MUGGING";
			break;
		
		case 26:
			return "RE_BIKETHIEF";
			break;
		
		case 27:
			return "RE_DRUNKDRIVER";
			break;
		
		case 28:
			return "RE_HOMELANDSECURITY";
			break;
		
		case 29:
			return "RE_BORDERPATROL";
			break;
		
		case 30:
			return "RE_SIMEONYETARIAN";
			break;
		
		case 31:
			return "RE_DUEL";
			break;
		
		case 32:
			return "RE_SEAPLANE";
			break;
		
		case 33:
			return "RE_MONKEYPHOTO";
			break;
		
		case -1:
			return "RE_NONE";
			break;
	}
	if (!bParam1)
	{
	}
	return "UNKNOWN";
}

void func_246(int iParam0)
{
	Global_41982 = (MISC::GET_GAME_TIMER() + iParam0);
}

void func_247(int iParam0)
{
	func_248(iParam0, 0, func_253(iParam0));
}

void func_248(int iParam0, int iParam1, int iParam2)
{
	uVar0 = func_217();
	func_251(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_250(iParam0, &uVar0);
	Var1 = { func_249(&uVar0) };
}

struct<16> func_249(var uParam0)
{
	StringCopy(&Var0, "", 64);
	iVar16 = func_211(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_210(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_209(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_212(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_215(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_213(*uParam0), 64);
	return Var0;
}

void func_250(int iParam0, var uParam1)
{
	Global_111638.f_24990.f_43[iParam0] = *uParam1;
}

void func_251(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	iVar0 = func_213(*uParam0);
	iVar1 = func_215(*uParam0);
	iVar2 = func_212(*uParam0);
	iVar3 = func_211(*uParam0);
	iVar4 = func_210(*uParam0);
	iVar5 = func_209(*uParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_208(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_208(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_252(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_252(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_223(uParam0, iParam1);
	func_222(uParam0, iParam2);
	func_221(uParam0, iParam3);
	func_219(uParam0, iParam5);
	func_220(uParam0, iParam4);
	func_218(uParam0, iParam6);
}

int func_253(int iParam0)
{
	switch (iParam0)
	{
		case 23:
			iVar0 = 30;
			break;
		
		case 0:
			iVar0 = 30;
			break;
		
		case 15:
			iVar0 = 30;
			break;
		
		case 1:
			iVar0 = 200;
			break;
		
		case 26:
			iVar0 = 30;
			break;
		
		case 8:
			iVar0 = 30;
			break;
		
		case 29:
			iVar0 = 30;
			break;
		
		case 24:
			iVar0 = 30;
			break;
		
		case 2:
			iVar0 = 0;
			break;
		
		case 17:
			iVar0 = 30;
			break;
		
		case 11:
			iVar0 = 30;
			break;
		
		case 16:
			iVar0 = 30;
			break;
		
		case 18:
			iVar0 = 30;
			break;
		
		case 12:
			iVar0 = 120;
			break;
		
		case 3:
			iVar0 = 60;
			break;
		
		case 27:
			iVar0 = 60;
			break;
		
		case 19:
			iVar0 = 30;
			break;
		
		case 20:
			iVar0 = 30;
			break;
		
		case 4:
			iVar0 = 60;
			break;
		
		case 28:
			iVar0 = 30;
			break;
		
		case 13:
			iVar0 = 35;
			break;
		
		case 7:
			iVar0 = 30;
			break;
		
		case 25:
			iVar0 = 40;
			break;
		
		case 10:
			iVar0 = 30;
			break;
		
		case 22:
			iVar0 = 30;
			break;
		
		case 21:
			iVar0 = 30;
			break;
		
		case 5:
			iVar0 = 30;
			break;
		
		case 30:
			iVar0 = 60;
			break;
		
		case 9:
			iVar0 = 60;
			break;
		
		case 6:
			iVar0 = 40;
			break;
		
		case 14:
			iVar0 = 40;
			break;
	}
	return iVar0;
}

int func_254(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 == 0)
	{
		uVar1 = ENTITY::GET_ENTITY_SCRIPT(iParam0, &uVar0);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uVar1))
		{
			if (MISC::GET_HASH_KEY(uVar1) == MISC::GET_HASH_KEY("vehicle_gen_controller"))
			{
				return 0;
			}
		}
	}
	func_255(iParam0, iParam2);
	return 1;
}

void func_255(int iParam0, int iParam1)
{
	if (!func_261(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, 0);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar0 = VEHICLE::GET_LAST_PED_IN_VEHICLE_SEAT(iParam0, -1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_INJURED(iVar0))
		{
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == 225514697)
			{
				iParam1 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(iVar0) == -1692214353)
			{
				iParam1 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(iVar0) == -1686040670)
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_111638.f_2358.f_539.f_4321;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_111638.f_32744.f_5038[iVar1][iVar2].f_66)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_111638.f_32744.f_5038[iVar1][iVar2].f_1)))
				{
					if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_111638.f_32744.f_5038[iVar1][iVar2].f_1)))
					{
						Global_111638.f_32744.f_5038[iVar1][iVar2].f_66 = 0;
						Global_111638.f_32744.f_5592[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_111638.f_32744.f_5600[iVar1].f_66)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_111638.f_32744.f_5600[iVar1].f_1)))
			{
				if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_111638.f_32744.f_5600[iVar1].f_1)))
				{
					Global_111638.f_32744.f_5600[iVar1].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_111638.f_32744.f_5590 = iParam1;
	Global_76346 = iParam0;
	Global_111638.f_32744.f_5588 = 1;
	func_256(iParam0, &(Global_111638.f_32744.f_5510));
}

void func_256(int iParam0, var uParam1)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		func_260(uParam1);
		uParam1->f_66 = ENTITY::GET_ENTITY_MODEL(iParam0);
		StringCopy(&(uParam1->f_1), VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), 16);
		*uParam1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iParam0);
		VEHICLE::GET_VEHICLE_COLOURS(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		VEHICLE::GET_VEHICLE_EXTRA_COLOURS(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = VEHICLE::GET_VEHICLE_WINDOW_TINT(iParam0);
		uParam1->f_67 = VEHICLE::GET_VEHICLE_LIVERY(iParam0);
		uParam1->f_69 = VEHICLE::GET_VEHICLE_WHEEL_TYPE(iParam0);
		uParam1->f_70 = VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(iParam0);
		VEHICLE::GET_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		VEHICLE::_GET_VEHICLE_NEON_LIGHTS_COLOUR(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 2))
		{
			MISC::SET_BIT(&(uParam1->f_77), 28);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 3))
		{
			MISC::SET_BIT(&(uParam1->f_77), 29);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 30);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 1))
		{
			MISC::SET_BIT(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && !func_259(uParam1->f_66))
		{
			uParam1->f_65 = 0;
		}
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, 0))
		{
			uParam1->f_68 = VEHICLE::GET_CONVERTIBLE_ROOF_STATE(iParam0);
		}
		if (VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_66))
		{
			if (VEHICLE::IS_PLANE_LANDING_GEAR_INTACT(iParam0))
			{
				switch (VEHICLE::GET_LANDING_GEAR_STATE(iParam0))
				{
					case 3:
					case 0:
						MISC::CLEAR_BIT(&(uParam1->f_77), 23);
						MISC::SET_BIT(&(uParam1->f_77), 22);
						break;
					
					case 4:
					case 1:
						MISC::CLEAR_BIT(&(uParam1->f_77), 23);
						MISC::CLEAR_BIT(&(uParam1->f_77), 22);
						break;
					
					case 5:
						MISC::SET_BIT(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), 23);
			}
		}
		if (!VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 9);
		}
		if (VEHICLE::IS_VEHICLE_STOLEN(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 10);
		}
		if (VEHICLE::GET_IS_VEHICLE_PRIMARY_COLOUR_CUSTOM(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 13);
			VEHICLE::GET_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (VEHICLE::GET_IS_VEHICLE_SECONDARY_COLOUR_CUSTOM(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 12);
		}
		func_258(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0 + 1))
			{
				MISC::SET_BIT(&(uParam1->f_77), func_257(iVar0 + 1));
			}
			iVar0++;
		}
		if (GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(iParam0, 0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 11);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_77), 11);
		}
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "IgnoredByQuickSave") && DECORATOR::DECOR_GET_BOOL(iParam0, "IgnoredByQuickSave"))
		{
			MISC::SET_BIT(&(uParam1->f_77), 27);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_77), 27);
		}
	}
}

int func_257(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

int func_258(int iParam0, var uParam1, var uParam2)
{
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0))
	{
		return 0;
	}
	if (VEHICLE::GET_NUM_MOD_KITS(*iParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			(*uParam1)[iVar0] = 0;
			if (VEHICLE::IS_TOGGLE_MOD_ON(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else if (iVar1 == 22)
		{
			if (VEHICLE::IS_TOGGLE_MOD_ON(*iParam0, iVar1))
			{
				switch (VEHICLE::_GET_VEHICLE_XENON_LIGHTS_COLOR(*iParam0))
				{
					case 255:
						(*uParam1)[iVar0] = 1;
						break;
					
					case 0:
						(*uParam1)[iVar0] = 2;
						break;
					
					case 1:
						(*uParam1)[iVar0] = 3;
						break;
					
					case 2:
						(*uParam1)[iVar0] = 4;
						break;
					
					case 3:
						(*uParam1)[iVar0] = 5;
						break;
					
					case 4:
						(*uParam1)[iVar0] = 6;
						break;
					
					case 5:
						(*uParam1)[iVar0] = 7;
						break;
					
					case 6:
						(*uParam1)[iVar0] = 8;
						break;
					
					case 7:
						(*uParam1)[iVar0] = 9;
						break;
					
					case 8:
						(*uParam1)[iVar0] = 10;
						break;
					
					case 9:
						(*uParam1)[iVar0] = 11;
						break;
					
					case 10:
						(*uParam1)[iVar0] = 12;
						break;
					
					case 11:
						(*uParam1)[iVar0] = 13;
						break;
					
					case 12:
						(*uParam1)[iVar0] = 14;
						break;
					
					case 13:
						(*uParam1)[iVar0] = 15;
						break;
				}
			}
			else
			{
				(*uParam1)[iVar0] = 0;
			}
		}
		else
		{
			(*uParam1)[iVar0] = VEHICLE::GET_VEHICLE_MOD(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

int func_259(int iParam0)
{
	switch (iParam0)
	{
		case -1775728740:
		case -998177792:
			return 1;
		
		default:
	}
	return 0;
}

void func_260(var uParam0)
{
	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_59[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
}

int func_261(int iParam0)
{
	if ((((((((((!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)) || func_276(iParam0, 0, 0)) || func_276(iParam0, 1, 0)) || func_276(iParam0, 2, 0)) || func_275(iParam0) != 145) || func_274(iParam0)) || func_273(iParam0)) || func_272(iParam0)) || func_271(iParam0)) || !func_262(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		if (func_273(iParam0))
		{
		}
		if (func_273(iParam0))
		{
		}
		if (func_276(iParam0, 0, 0))
		{
		}
		if (func_276(iParam0, 1, 0))
		{
		}
		if (func_276(iParam0, 2, 0))
		{
		}
		if (func_275(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_262(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_263(iParam0, 0))
	{
		return 0;
	}
	if (((VEHICLE::IS_THIS_MODEL_A_BOAT(iParam0) || VEHICLE::IS_THIS_MODEL_A_PLANE(iParam0)) || VEHICLE::IS_THIS_MODEL_A_HELI(iParam0)) || VEHICLE::IS_THIS_MODEL_A_TRAIN(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case -713569950:
		case -1961627517:
		case -823509173:
		case -1207431159:
		case 782665360:
		case -1476447243:
		case 1074326203:
		case 1353720154:
		case -845979911:
		case -1323100960:
		case -442313018:
		case 1283517198:
		case -2072933068:
		case -1098802077:
		case 1941029835:
		case 1938952078:
		case -2007026063:
		case 1917016601:
		case 2053223216:
		case 524108981:
		case 850991848:
		case 1518533038:
		case -2140210194:
		case -2137348917:
		case 2112052861:
		case -2076478498:
		case 1886712733:
		case 444583674:
		case 48339065:
		case -1006919392:
		case -2130482718:
		case -784816453:
		case 475220373:
		case -1705304628:
		case -1700801569:
		case -947761570:
		case 1876516712:
		case 1951180813:
		case -1987130134:
		case -233098306:
		case 121658888:
		case -120287622:
		case 904750859:
		case -1050465301:
		case 2046537925:
		case -1627000575:
		case 1912215274:
		case -1973172295:
		case -34623805:
		case -1536924937:
		case -1779120616:
		case 456714581:
		case -956048545:
		case 771711535:
		case -1066334226:
		case -845961253:
			return 0;
			break;
	}
	return 1;
}

int func_263(int iParam0, bool bParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!STREAMING::IS_MODEL_A_VEHICLE(iParam0))
	{
		return 0;
	}
	if (((((iParam0 == -915704871 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) || (iParam0 == 237764926 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || (iParam0 == 349315417 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || iParam0 == -613725916) || (iParam0 == -401643538 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()))
	{
		if (!func_241())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < FILES::GET_NUM_DLC_VEHICLES())
		{
			if (FILES::GET_DLC_VEHICLE_DATA(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (FILES::IS_CONTENT_ITEM_LOCKED(Var1))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == -150975354)
	{
		if ((((!func_270() && !func_269()) && !func_268()) && !func_267()) && !func_241())
		{
			return 0;
		}
	}
	if ((iParam0 == 37348240 || iParam0 == 11251904) || iParam0 == 544021352)
	{
		if ((MISC::IS_DURANGO_VERSION() || MISC::IS_PC_VERSION()) || MISC::IS_ORBIS_VERSION())
		{
		}
		else if (!func_268())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_266(iParam0))
		{
			return 0;
		}
	}
	if (!func_264(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_264(int iParam0)
{
	if (!func_265())
	{
		return 1;
	}
	NETSHOPPING::_NET_GAMESERVER_GET_TRANSACTION_MANAGER_DATA(&iVar0, &uVar1);
	if (iVar0 == 4)
	{
		return 1;
	}
	switch (iParam0)
	{
		case -827162039:
			StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
			break;
		
		case 989294410:
			StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
		
		case 941494461:
			StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
			break;
		
		case -1649536104:
			StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
		
		case 1180875963:
			StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
		
		case 682434785:
			StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
		
		case -1912017790:
			StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
		
		case -1590337689:
			StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
			break;
		
		default:
			return 1;
			break;
	}
	if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_265()
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::_NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

int func_266(int iParam0)
{
	if (Global_2513258)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (iParam0 == -602287871)
	{
		if ((!Global_262145.f_6599 && !Global_262145.f_12922) && iVar1 < Global_262145.f_12923)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == -2039755226)
	{
		if (!Global_262145.f_14222 && iVar1 < Global_262145.f_14234)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 16646064 || iParam0 == -899509638)
	{
		if (!Global_262145.f_14218 && iVar1 < Global_262145.f_14230)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 223258115)
	{
		if (!Global_262145.f_14219 && iVar1 < Global_262145.f_14231)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1797613329)
	{
		if (!Global_262145.f_14220 && iVar1 < Global_262145.f_14232)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1126264336)
	{
		if (!Global_262145.f_14221 && iVar1 < Global_262145.f_14233)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1119641113)
	{
		if (!Global_262145.f_14223 && iVar1 < Global_262145.f_14235)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 2123327359)
	{
		if (!Global_262145.f_14224 && iVar1 < Global_262145.f_14227)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1757836725)
	{
		if (!Global_262145.f_14225 && iVar1 < Global_262145.f_14228)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1829802492)
	{
		if (!Global_262145.f_14226 && iVar1 < Global_262145.f_14229)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 86520421)
	{
		if (!Global_262145.f_16853 && iVar1 < Global_262145.f_16818)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1549126457)
	{
		if (!Global_262145.f_16848 && iVar1 < Global_262145.f_16813)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 390201602)
	{
		if (!Global_262145.f_16852 && iVar1 < Global_262145.f_16817)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 683047626)
	{
		if (!Global_262145.f_16851 && iVar1 < Global_262145.f_16816)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1232836011)
	{
		if (!Global_262145.f_16845 && iVar1 < Global_262145.f_16810)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -777172681)
	{
		if (!Global_262145.f_16846 && iVar1 < Global_262145.f_16811)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 101905590)
	{
		if (!Global_262145.f_16849 && iVar1 < Global_262145.f_16814)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -663299102)
	{
		if (!Global_262145.f_16850 && iVar1 < Global_262145.f_16815)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1887331236)
	{
		if (!Global_262145.f_16847 && iVar1 < Global_262145.f_16812)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 741090084)
	{
		if (!Global_262145.f_16855 && iVar1 < Global_262145.f_16820)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2103821244)
	{
		if (!Global_262145.f_16856 && iVar1 < Global_262145.f_16821)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1071380347)
	{
		if (!Global_262145.f_16844 && iVar1 < Global_262145.f_16809)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2067820283)
	{
		if (!Global_262145.f_16843 && iVar1 < Global_262145.f_16808)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 819197656)
	{
		if (!Global_262145.f_16842 && iVar1 < Global_262145.f_16807)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 482197771)
	{
		if (!Global_262145.f_16854 && iVar1 < Global_262145.f_16819)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -401643538)
	{
		if (!Global_262145.f_16857 && iVar1 < Global_262145.f_16822)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 349315417)
	{
		if (!Global_262145.f_16858 && iVar1 < Global_262145.f_16823)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -915704871)
	{
		if (!Global_262145.f_16859 && iVar1 < Global_262145.f_16824)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 237764926)
	{
		if (!Global_262145.f_16860 && iVar1 < Global_262145.f_16825)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 822018448)
	{
		if (!Global_262145.f_17007 && iVar1 < Global_262145.f_17029)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1606187161)
	{
		if (!Global_262145.f_17008 && iVar1 < Global_262145.f_17030)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1009268949)
	{
		if (!Global_262145.f_17009 && iVar1 < Global_262145.f_17031)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2035069708)
	{
		if (!Global_262145.f_17010 && iVar1 < Global_262145.f_17032)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2115793025)
	{
		if (!Global_262145.f_17011 && iVar1 < Global_262145.f_17033)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -570033273)
	{
		if (!Global_262145.f_17012 && iVar1 < Global_262145.f_17034)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -255678177)
	{
		if (!Global_262145.f_17014 && iVar1 < Global_262145.f_17035)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -609625092)
	{
		if (!Global_262145.f_17015 && iVar1 < Global_262145.f_17036)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -405626514)
	{
		if (!Global_262145.f_17016 && iVar1 < Global_262145.f_17037)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 6774487)
	{
		if (!Global_262145.f_17017 && iVar1 < Global_262145.f_17038)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -674927303)
	{
		if (!Global_262145.f_17018 && iVar1 < Global_262145.f_17039)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1404136503)
	{
		if (!Global_262145.f_17019 && iVar1 < Global_262145.f_17040)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -440768424)
	{
		if (!Global_262145.f_17020 && iVar1 < Global_262145.f_17041)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1558399629)
	{
		if (!Global_262145.f_17026 && iVar1 < Global_262145.f_17048)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1026149675)
	{
		if (!Global_262145.f_17023 && iVar1 < Global_262145.f_17044)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -618617997)
	{
		if (!Global_262145.f_17024 && iVar1 < Global_262145.f_17045)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1289178744)
	{
		if (!Global_262145.f_17025 && iVar1 < Global_262145.f_17046)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1842748181)
	{
		if (!Global_262145.f_17013 && iVar1 < Global_262145.f_17047)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2140431165)
	{
		if (!Global_262145.f_17027 && iVar1 < Global_262145.f_17049)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1491277511)
	{
		if (!Global_262145.f_17021 && iVar1 < Global_262145.f_17042)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1523428744)
	{
		if (!Global_262145.f_17022 && iVar1 < Global_262145.f_17043)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1873600305)
	{
		if (!Global_262145.f_17028 && iVar1 < Global_262145.f_17050)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 989294410)
	{
		if (!Global_262145.f_18659 && iVar1 < Global_262145.f_18756)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 941494461)
	{
		if (!Global_262145.f_18660 && iVar1 < Global_262145.f_18757)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -827162039)
	{
		if (!Global_262145.f_18661 && iVar1 < Global_262145.f_18758)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -312295511)
	{
		if (!Global_262145.f_18662 && iVar1 < Global_262145.f_18759)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1649536104)
	{
		if (!Global_262145.f_18663 && iVar1 < Global_262145.f_18760)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1180875963)
	{
		if (!Global_262145.f_18664 && iVar1 < Global_262145.f_18761)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 682434785)
	{
		if (!Global_262145.f_18665 && iVar1 < Global_262145.f_18762)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1912017790)
	{
		if (!Global_262145.f_18666 && iVar1 < Global_262145.f_18763)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1590337689)
	{
		if (!Global_262145.f_18667 && iVar1 < Global_262145.f_18764)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1045541610)
	{
		if (!Global_262145.f_18668 && iVar1 < Global_262145.f_18765)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2022483795)
	{
		if (!Global_262145.f_18669 && iVar1 < Global_262145.f_18766)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -239841468)
	{
		if (!Global_262145.f_18670 && iVar1 < Global_262145.f_18767)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1790834270)
	{
		if (!Global_262145.f_18671 && iVar1 < Global_262145.f_18768)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 196747873)
	{
		if (!Global_262145.f_18672 && iVar1 < Global_262145.f_18769)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -566387422)
	{
		if (!Global_262145.f_18673 && iVar1 < Global_262145.f_18770)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 627535535)
	{
		if (!Global_262145.f_18674 && iVar1 < Global_262145.f_18771)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -757735410)
	{
		if (!Global_262145.f_18675 && iVar1 < Global_262145.f_18772)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2048333973)
	{
		if (!Global_262145.f_18676 && iVar1 < Global_262145.f_18773)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -482719877)
	{
		if (!Global_262145.f_18677 && iVar1 < Global_262145.f_18774)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1034187331)
	{
		if (!Global_262145.f_18678 && iVar1 < Global_262145.f_18775)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1093792632)
	{
		if (!Global_262145.f_18679 && iVar1 < Global_262145.f_18776)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1758137366)
	{
		if (!Global_262145.f_18680 && iVar1 < Global_262145.f_18777)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1886268224)
	{
		if (!Global_262145.f_18681 && iVar1 < Global_262145.f_18778)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1074745671)
	{
		if (!Global_262145.f_18682 && iVar1 < Global_262145.f_18779)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 272929391)
	{
		if (!Global_262145.f_18683 && iVar1 < Global_262145.f_18780)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1234311532)
	{
		if (!Global_262145.f_19740 && iVar1 < Global_262145.f_19736)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1405937764)
	{
		if (!Global_262145.f_19741 && iVar1 < Global_262145.f_19737)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 719660200)
	{
		if (!Global_262145.f_19742 && iVar1 < Global_262145.f_19738)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -982130927)
	{
		if (!Global_262145.f_19743 && iVar1 < Global_262145.f_19739)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 917809321)
	{
		if (!Global_262145.f_20619 && iVar1 < Global_262145.f_20627)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 223240013)
	{
		if (!Global_262145.f_20620 && iVar1 < Global_262145.f_20628)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1504306544)
	{
		if (!Global_262145.f_20621 && iVar1 < Global_262145.f_20629)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1939284556)
	{
		if (!Global_262145.f_20622 && iVar1 < Global_262145.f_20630)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 159274291)
	{
		if (!Global_262145.f_20623 && iVar1 < Global_262145.f_20631)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 433954513)
	{
		if (!Global_262145.f_20624 && iVar1 < Global_262145.f_20632)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == -1763555241)
	{
		if (!Global_262145.f_21396 && iVar1 < Global_262145.f_21416)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -749299473)
	{
		if (!Global_262145.f_21408 && iVar1 < Global_262145.f_21428)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -975345305)
	{
		if (!Global_262145.f_21399 && iVar1 < Global_262145.f_21419)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1700874274)
	{
		if (!Global_262145.f_21409 && iVar1 < Global_262145.f_21429)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -392675425)
	{
		if (!Global_262145.f_21397 && iVar1 < Global_262145.f_21417)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1043222410)
	{
		if (!Global_262145.f_21413 && iVar1 < Global_262145.f_21433)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1386191424)
	{
		if (!Global_262145.f_21411 && iVar1 < Global_262145.f_21431)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1565978651)
	{
		if (!Global_262145.f_21412 && iVar1 < Global_262145.f_21432)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1036591958)
	{
		if (!Global_262145.f_21407 && iVar1 < Global_262145.f_21427)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -32878452)
	{
		if (!Global_262145.f_21414 && iVar1 < Global_262145.f_21434)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -42959138)
	{
		if (!Global_262145.f_21410 && iVar1 < Global_262145.f_21430)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1984275979)
	{
		if (!Global_262145.f_21406 && iVar1 < Global_262145.f_21426)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1007528109)
	{
		if (!Global_262145.f_21398 && iVar1 < Global_262145.f_21418)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1523619738)
	{
		if (!Global_262145.f_21400 && iVar1 < Global_262145.f_21420)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1392481335)
	{
		if (!Global_262145.f_21401 && iVar1 < Global_262145.f_21421)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -998177792)
	{
		if (!Global_262145.f_21402 && iVar1 < Global_262145.f_21422)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1242608589)
	{
		if (!Global_262145.f_21403 && iVar1 < Global_262145.f_21423)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1841130506)
	{
		if (!Global_262145.f_21404 && iVar1 < Global_262145.f_21424)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2049897956)
	{
		if (!Global_262145.f_21405 && iVar1 < Global_262145.f_21425)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1483171323)
	{
		if (!Global_262145.f_22357 && iVar1 < Global_262145.f_22385)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 886810209)
	{
		if (!Global_262145.f_22358 && iVar1 < Global_262145.f_22386)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1693015116)
	{
		if (!Global_262145.f_22359 && iVar1 < Global_262145.f_22387)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -692292317)
	{
		if (!Global_262145.f_22360 && iVar1 < Global_262145.f_22388)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1435527158)
	{
		if (!Global_262145.f_22361 && iVar1 < Global_262145.f_22389)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1181327175)
	{
		if (!Global_262145.f_22362 && iVar1 < Global_262145.f_22390)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1489874736)
	{
		if (!Global_262145.f_22363 && iVar1 < Global_262145.f_22391)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -212993243)
	{
		if (!Global_262145.f_22364 && iVar1 < Global_262145.f_22392)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 447548909)
	{
		if (!Global_262145.f_22365 && iVar1 < Global_262145.f_22393)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1561920505)
	{
		if (!Global_262145.f_22366 && iVar1 < Global_262145.f_22394)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1848994066)
	{
		if (!Global_262145.f_22367 && iVar1 < Global_262145.f_22395)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1741861769)
	{
		if (!Global_262145.f_22368 && iVar1 < Global_262145.f_22396)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1104234922)
	{
		if (!Global_262145.f_22369 && iVar1 < Global_262145.f_22397)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1871995513)
	{
		if (!Global_262145.f_22370 && iVar1 < Global_262145.f_22398)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1352136073)
	{
		if (!Global_262145.f_22371 && iVar1 < Global_262145.f_22399)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -313185164)
	{
		if (!Global_262145.f_22372 && iVar1 < Global_262145.f_22400)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2079788230)
	{
		if (!Global_262145.f_22373 && iVar1 < Global_262145.f_22401)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 600450546)
	{
		if (!Global_262145.f_22374 && iVar1 < Global_262145.f_22402)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -410205223)
	{
		if (!Global_262145.f_22375 && iVar1 < Global_262145.f_22403)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 867799010)
	{
		if (!Global_262145.f_22376 && iVar1 < Global_262145.f_22404)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1529242755)
	{
		if (!Global_262145.f_22377 && iVar1 < Global_262145.f_22405)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 903794909)
	{
		if (!Global_262145.f_22378 && iVar1 < Global_262145.f_22406)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1532697517)
	{
		if (!Global_262145.f_22379 && iVar1 < Global_262145.f_22407)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 15219735)
	{
		if (!Global_262145.f_22380 && iVar1 < Global_262145.f_22408)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 661493923)
	{
		if (!Global_262145.f_22381 && iVar1 < Global_262145.f_22409)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 838982985)
	{
		if (!Global_262145.f_22382 && iVar1 < Global_262145.f_22410)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -391595372)
	{
		if (!Global_262145.f_22383 && iVar1 < Global_262145.f_22411)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -121446169)
	{
		if (!Global_262145.f_22384 && iVar1 < Global_262145.f_22412)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1909189272)
	{
		if (!Global_262145.f_23573 && iVar1 < Global_262145.f_23589)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1617472902)
	{
		if (!Global_262145.f_23574 && iVar1 < Global_262145.f_23590)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1267543371)
	{
		if (!Global_262145.f_23578 && iVar1 < Global_262145.f_23594)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 931280609)
	{
		if (!Global_262145.f_23581 && iVar1 < Global_262145.f_23597)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1046206681)
	{
		if (!Global_262145.f_23586 && iVar1 < Global_262145.f_23602)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1259134696)
	{
		if (!Global_262145.f_23580 && iVar1 < Global_262145.f_23596)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1115909093)
	{
		if (!Global_262145.f_23572 && iVar1 < Global_262145.f_23588)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1031562256)
	{
		if (!Global_262145.f_23579 && iVar1 < Global_262145.f_23595)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -376434238)
	{
		if (!Global_262145.f_23585 && iVar1 < Global_262145.f_23601)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -986944621)
	{
		if (!Global_262145.f_23584 && iVar1 < Global_262145.f_23600)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1134706562)
	{
		if (!Global_262145.f_23575 && iVar1 < Global_262145.f_23591)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2120700196)
	{
		if (!Global_262145.f_23577 && iVar1 < Global_262145.f_23593)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -214906006)
	{
		if (!Global_262145.f_23587 && iVar1 < Global_262145.f_23603)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -988501280)
	{
		if (!Global_262145.f_23583 && iVar1 < Global_262145.f_23599)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1254014755)
	{
		if (!Global_262145.f_23576 && iVar1 < Global_262145.f_23592)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -726768679)
	{
		if (!Global_262145.f_23582 && iVar1 < Global_262145.f_23598)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == -1988428699)
	{
		if (!Global_262145.f_23663 && iVar1 < Global_262145.f_23650)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 345756458)
	{
		if (!Global_262145.f_23664 && iVar1 < Global_262145.f_23651)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1945374990)
	{
		if (!Global_262145.f_23669 && iVar1 < Global_262145.f_23656)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1653666139)
	{
		if (!Global_262145.f_23668 && iVar1 < Global_262145.f_23655)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 500482303)
	{
		if (!Global_262145.f_23666 && iVar1 < Global_262145.f_23653)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2044532910)
	{
		if (!Global_262145.f_23672 && iVar1 < Global_262145.f_23659)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -638562243)
	{
		if (!Global_262145.f_23674 && iVar1 < Global_262145.f_23661)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1692272545)
	{
		if (!Global_262145.f_23675 && iVar1 < Global_262145.f_23662)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2069146067)
	{
		if (!Global_262145.f_23673 && iVar1 < Global_262145.f_23660)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -420911112)
	{
		if (!Global_262145.f_23665 && iVar1 < Global_262145.f_23652)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 321186144)
	{
		if (!Global_262145.f_23667 && iVar1 < Global_262145.f_23654)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -54332285)
	{
		if (!Global_262145.f_23671 && iVar1 < Global_262145.f_23658)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -307958377)
	{
		if (!Global_262145.f_23670 && iVar1 < Global_262145.f_23657)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1721676810)
	{
	}
	else if (iParam0 == -801550069)
	{
	}
	else if (iParam0 == 679453769)
	{
	}
	else if (iParam0 == 1909700336)
	{
	}
	else if (iParam0 == 2139203625)
	{
	}
	else if (iParam0 == -1890996696)
	{
	}
	else if (iParam0 == 2038858402)
	{
	}
	else if (iParam0 == -1146969353)
	{
	}
	else if (iParam0 == 1542143200)
	{
	}
	else if (iParam0 == -579747861)
	{
	}
	else if (iParam0 == 444994115)
	{
	}
	else if (iParam0 == 1637620610)
	{
	}
	else if (iParam0 == -755532233)
	{
	}
	else if (iParam0 == 540101442)
	{
	}
	else if (iParam0 == -1106120762)
	{
	}
	else if (iParam0 == -1478704292)
	{
	}
	else if (iParam0 == -2096690334)
	{
	}
	else if (iParam0 == 1591739866)
	{
		if (!Global_262145.f_25978 && iVar1 < Global_262145.f_25980)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1168952148)
	{
		if (!Global_262145.f_24991 && iVar1 < Global_262145.f_24984)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1566607184)
	{
		if (!Global_262145.f_24992 && iVar1 < Global_262145.f_24985)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -331467772)
	{
		if (!Global_262145.f_24993 && iVar1 < Global_262145.f_24986)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1279262537)
	{
		if (!Global_262145.f_24994 && iVar1 < Global_262145.f_24987)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -49115651)
	{
		if (!Global_262145.f_25979 && iVar1 < Global_262145.f_25981)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1456744817)
	{
		if (!Global_262145.f_24995 && iVar1 < Global_262145.f_24988)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -507495760)
	{
		if (!Global_262145.f_24996 && iVar1 < Global_262145.f_24989)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -286046740)
	{
		if (!Global_262145.f_24997 && iVar1 < Global_262145.f_24990)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1044193113)
	{
		if (!Global_262145.f_25002 && iVar1 < Global_262145.f_25023)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 686471183)
	{
		if (!Global_262145.f_25003 && iVar1 < Global_262145.f_25024)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -941272559)
	{
		if (!Global_262145.f_25004 && iVar1 < Global_262145.f_25025)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1829436850)
	{
		if (!Global_262145.f_25005 && iVar1 < Global_262145.f_25026)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -682108547)
	{
		if (!Global_262145.f_25006 && iVar1 < Global_262145.f_25027)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 722226637)
	{
		if (!Global_262145.f_25007 && iVar1 < Global_262145.f_25028)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1854776567)
	{
		if (!Global_262145.f_25008 && iVar1 < Global_262145.f_25029)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1862507111)
	{
		if (!Global_262145.f_25009 && iVar1 < Global_262145.f_25030)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -882629065)
	{
		if (!Global_262145.f_25010 && iVar1 < Global_262145.f_25031)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -362150785)
	{
		if (!Global_262145.f_25011 && iVar1 < Global_262145.f_25032)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 310284501)
	{
		if (!Global_262145.f_25012 && iVar1 < Global_262145.f_25033)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 916547552)
	{
		if (!Global_262145.f_25013 && iVar1 < Global_262145.f_25034)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1804415708)
	{
		if (!Global_262145.f_25014 && iVar1 < Global_262145.f_25035)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1934384720)
	{
		if (!Global_262145.f_25015 && iVar1 < Global_262145.f_25036)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1349095620)
	{
		if (!Global_262145.f_25016 && iVar1 < Global_262145.f_25037)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -208911803)
	{
		if (!Global_262145.f_25017 && iVar1 < Global_262145.f_25038)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -324618589)
	{
		if (!Global_262145.f_25018 && iVar1 < Global_262145.f_25039)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -664141241)
	{
		if (!Global_262145.f_25019 && iVar1 < Global_262145.f_25040)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1323778901)
	{
		if (!Global_262145.f_25020 && iVar1 < Global_262145.f_25041)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1620126302)
	{
		if (!Global_262145.f_25021 && iVar1 < Global_262145.f_25042)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -447711397)
	{
		if (!Global_262145.f_25022 && iVar1 < Global_262145.f_25043)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1118611807)
	{
		if (!Global_262145.f_27821 && iVar1 < Global_262145.f_27842)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 409049982)
	{
		if (!Global_262145.f_27822 && iVar1 < Global_262145.f_27843)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1756021720)
	{
		if (!Global_262145.f_27823 && iVar1 < Global_262145.f_27844)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2031587082)
	{
		if (!Global_262145.f_27824 && iVar1 < Global_262145.f_27845)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1693751655)
	{
		if (!Global_262145.f_27825 && iVar1 < Global_262145.f_27846)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 987469656)
	{
		if (!Global_262145.f_27826 && iVar1 < Global_262145.f_27847)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 872704284)
	{
		if (!Global_262145.f_27827 && iVar1 < Global_262145.f_27848)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 408825843)
	{
		if (!Global_262145.f_27828 && iVar1 < Global_262145.f_27849)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 740289177)
	{
		if (!Global_262145.f_27829 && iVar1 < Global_262145.f_27850)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -834353991)
	{
		if (!Global_262145.f_27830 && iVar1 < Global_262145.f_27851)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 301304410)
	{
		if (!Global_262145.f_27831 && iVar1 < Global_262145.f_27852)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 960812448)
	{
		if (!Global_262145.f_27832 && iVar1 < Global_262145.f_27853)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1284356689)
	{
		if (!Global_262145.f_27833 && iVar1 < Global_262145.f_27854)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 394110044)
	{
		if (!Global_262145.f_27834 && iVar1 < Global_262145.f_27855)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1938952078)
	{
		if (!Global_262145.f_27835 && iVar1 < Global_262145.f_27856)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -907477130)
	{
		if (!Global_262145.f_27836 && iVar1 < Global_262145.f_27857)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1987130134)
	{
		if (!Global_262145.f_27837 && iVar1 < Global_262145.f_27858)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1747439474)
	{
		if (!Global_262145.f_27838 && iVar1 < Global_262145.f_27859)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1254331310)
	{
		if (!Global_262145.f_27839 && iVar1 < Global_262145.f_27860)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 469291905)
	{
		if (!Global_262145.f_27840 && iVar1 < Global_262145.f_27861)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -48031959)
	{
		if (!Global_262145.f_27841 && iVar1 < Global_262145.f_27862)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 340154634)
	{
		if ((!Global_262145.f_27864 && iVar1 < Global_262145.f_27865) && !Global_262145.f_27819)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1960756985)
	{
		if ((!Global_262145.f_27867 && iVar1 < Global_262145.f_27868) && !Global_262145.f_27820)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1132721664)
	{
		if (!Global_262145.f_27872 && iVar1 < Global_262145.f_27875)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 83136452)
	{
		if (!Global_262145.f_27873 && iVar1 < Global_262145.f_27876)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1456336509)
	{
		if (!Global_262145.f_27874 && iVar1 < Global_262145.f_27877)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2122646867)
	{
		if (!Global_262145.f_28874 && iVar1 < Global_262145.f_28539)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2098954619)
	{
		if (!Global_262145.f_28525 && iVar1 < Global_262145.f_28546)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2134119907)
	{
		if (!Global_262145.f_28526 && iVar1 < Global_262145.f_28532)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 67753863)
	{
		if (!Global_262145.f_28872 && iVar1 < Global_262145.f_28540)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1107404867)
	{
		if (!Global_262145.f_28873 && iVar1 < Global_262145.f_28541)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -913589546)
	{
		if (!Global_262145.f_28519 && iVar1 < Global_262145.f_28538)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -631322662)
	{
		if (!Global_262145.f_28520 && iVar1 < Global_262145.f_28547)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -838099166)
	{
		if (!Global_262145.f_28521 && iVar1 < Global_262145.f_28537)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1810806490)
	{
		if (!Global_262145.f_28522 && iVar1 < Global_262145.f_28535)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1358197432)
	{
		if (!Global_262145.f_28868 && iVar1 < Global_262145.f_28542)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1492612435)
	{
		if (!Global_262145.f_28869 && iVar1 < Global_262145.f_28543)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1181339704)
	{
		if (!Global_262145.f_28870 && iVar1 < Global_262145.f_28544)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1728685474)
	{
		if (!Global_262145.f_28871 && iVar1 < Global_262145.f_28545)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1717532765)
	{
		if (!Global_262145.f_28523 && iVar1 < Global_262145.f_28534)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1802742206)
	{
		if (!Global_262145.f_28524 && iVar1 < Global_262145.f_28536)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_267()
{
	return 0;
}

int func_268()
{
	return 1;
}

int func_269()
{
	return 1;
}

int func_270()
{
	if (DLC::IS_DLC_PRESENT(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_271(int iParam0)
{
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	uVar1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0);
	if (iVar0 == -810318068 && MISC::ARE_STRINGS_EQUAL(uVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_263(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_272(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_96105[iVar0]))
		{
			if (Global_96105[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_273(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_96075[iVar0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_96075[iVar0], 0))
			{
				if (Global_96075[iVar0] == iParam0 && ENTITY::GET_ENTITY_MODEL(Global_96075[iVar0]) == ENTITY::GET_ENTITY_MODEL(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_274(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_75441.f_484[24]))
	{
		if (iParam0 == Global_75441.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_75441.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_75441.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_275(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 145;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_96075[iVar0]))
		{
			if (Global_96075[iVar0] == iParam0)
			{
				return Global_96085[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_276(int iParam0, int iParam1, bool bParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_277(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || MISC::IS_BIT_SET(Global_111638.f_7224[iVar9], 0))
		{
			if (VEHICLE::IS_VEHICLE_IN_GARAGE_AREA(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_277(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

void func_278()
{
	Global_31005 = 0;
	Global_31006 = 0;
	Global_31008 = 0;
	Global_31009 = 0;
	Global_31010 = 0;
}

void func_279(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < 53)
	{
		func_176(iVar0, bParam0);
		iVar0++;
	}
}

Vector3 func_280()
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_339, 1);
		iLocal_338 = 1;
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_342, 1) < fVar0)
		{
			fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_342, 1);
			iLocal_338 = 2;
		}
		if (iLocal_338 == 1)
		{
			iLocal_345 = 1;
			iLocal_54 = 1;
			return Local_339;
		}
		if (iLocal_338 == 2)
		{
			iLocal_345 = 2;
			iLocal_54 = 2;
			return Local_342;
		}
	}
	return 0f, 0f, 0f;
}

