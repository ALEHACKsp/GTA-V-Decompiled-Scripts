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
	fLocal_47 = ((0.05f + 0.275f) - 0.01f);
	StringCopy(&Local_74, "CELL_206", 16);
	StringCopy(&Local_78, "CELL_214", 16);
	StringCopy(&Local_82, "CELL_243", 16);
	StringCopy(&Local_86, "CELL_244", 16);
	StringCopy(&Local_90, "CELL_265", 16);
	StringCopy(&Local_94, "CELL_300", 16);
	GAMEPLAY::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	func_97(&uLocal_101);
	iLocal_98 = 0;
	func_95();
	func_94(Global_19467, "SET_THEME", SYSTEM::TO_FLOAT(5), -1082130432, -1082130432, -1082130432, -1082130432);
	func_84(0);
	while (true)
	{
		SYSTEM::WAIT(0);
		func_83();
		func_82();
		if (!Global_19486.f_1 == 9 && Global_19486.f_1 > 3)
		{
			switch (iLocal_73)
			{
				case 0:
					func_47();
					break;
				
				case 1:
					func_31();
					break;
				
				case 3:
					func_5();
					break;
				
				case 2:
					func_4();
					break;
				
				default:
					break;
			}
			if (Global_19486.f_1 != 8)
			{
				if (func_3())
				{
					func_2();
				}
			}
		}
		if (func_1())
		{
			func_2();
		}
	}
}

int func_1()
{
	if (((Global_19486.f_1 == 1 || Global_19486.f_1 == 3) || Global_19486.f_1 == 0) || Global_19430 == 1)
	{
		Global_19473 = 1;
		return 1;
	}
	return 0;
}

void func_2()
{
	Global_1626881.f_6 = 0;
	SCRIPT::TERMINATE_THIS_THREAD();
}

int func_3()
{
	if (Global_7962 == 1 || Global_19486.f_1 < 7)
	{
		Global_19473 = 1;
		return 1;
	}
	return 0;
}

void func_4()
{
}

void func_5()
{
	Global_1626881.f_6 = 1;
	if (iLocal_100)
	{
		if (CONTROLS::IS_CONTROL_JUST_RELEASED(2, Global_19455))
		{
			iLocal_100 = 0;
		}
		return;
	}
	if (CONTROLS::IS_CONTROL_JUST_RELEASED(2, 201))
	{
		iLocal_73 = 1;
		iVar0 = func_29(iLocal_98, 0);
		func_6(iVar0);
		return;
	}
	if (CONTROLS::IS_CONTROL_JUST_RELEASED(2, 202))
	{
		iLocal_73 = 1;
		return;
	}
	UI::_SET_WARNING_MESSAGE_2("HUD_INPUT23", "BA_APP_PASS_W", 36, 0, 0, -1, 0, 0, 1, 0);
}

void func_6(int iParam0)
{
	iVar0 = Global_1626881.f_7[iParam0].f_2;
	if (Global_1626881.f_7[iParam0].f_1 == 1 && iLocal_99 == iVar0)
	{
		func_26(iVar0, Global_1626881.f_7[iParam0].f_6);
		func_13(iParam0);
	}
	Global_1626881.f_6 = 0;
	func_7(0);
}

void func_7(int iParam0)
{
	if (func_12())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_11())
		{
			func_9(1, 1);
		}
		else
		{
			func_9(0, 0);
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
	if (!func_8())
	{
		Global_19486.f_1 = 3;
	}
}

int func_8()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_9(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_10(0))
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

int func_10(int iParam0)
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

bool func_11()
{
	return GAMEPLAY::IS_BIT_SET(Global_1687687, 5);
}

bool func_12()
{
	return GAMEPLAY::IS_BIT_SET(Global_1687687, 19);
}

void func_13(int iParam0)
{
	if (iParam0 != -1)
	{
		if (Global_1626881.f_7[iParam0].f_1 == 1)
		{
			if (GAMEPLAY::IS_BIT_SET(Global_1626881.f_7[iParam0].f_5, 0))
			{
				func_25();
				if (Global_1626881.f_7[iParam0].f_7 == 0)
				{
					func_25();
				}
				else
				{
					Global_1626881.f_4 = (Global_1626881.f_4 - 1);
					if (Global_1626881.f_4 < 0)
					{
						Global_1626881.f_4 = 0;
					}
					func_18();
				}
			}
			GAMEPLAY::CLEAR_BIT(&(Global_1628237[PLAYER::PLAYER_ID()].f_11.f_22), Global_1626881.f_7[iParam0].f_2);
			UI::_REMOVE_NOTIFICATION(Global_1626881.f_7[iParam0].f_4);
			func_17();
			func_15(0);
		}
		iVar0 = iParam0;
		while (iVar0 <= 8)
		{
			Global_1626881.f_7[iVar0] = { Global_1626881.f_7[iVar0 + 1] };
			iVar0++;
		}
		Global_1626881.f_7[9].f_1 = 0;
		Global_1626881.f_7[9].f_2 = func_14();
	}
}

int func_14()
{
	return -1;
}

void func_15(int iParam0)
{
	if (!func_16(iParam0))
	{
		GAMEPLAY::SET_BIT(&(Global_1626881.f_3), iParam0);
	}
}

bool func_16(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1626881.f_3, iParam0);
}

void func_17()
{
	Global_1626881 = (Global_1626881 - 1);
}

void func_18()
{
	Global_21868 = (Global_21868 - 1);
	if (Global_21868 < 0)
	{
		func_24("[MMM][NewJobInv][JobList] Calling Reset_New_Invites_Indicator from Decrement_New_Invites_Indicator");
	}
	func_19();
}

void func_19()
{
	if (!Global_19665)
	{
		if (Global_19486.f_1 == 6)
		{
			func_94(Global_19467, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_20(1);
			func_94(Global_19467, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19466), -1082130432, -1082130432, -1082130432);
		}
	}
}

void func_20(int iParam0)
{
	Global_21873 = 0;
	Global_7961 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_7925[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_23(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_7363[iVar1].f_11)
				{
					if (iVar0 == Global_7363[iVar1].f_4)
					{
						if (Global_7925[iVar0] == 0)
						{
							Global_7889[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (GAMEPLAY::IS_BIT_SET(Global_7357, 3))
								{
									iVar2 = 42;
									Global_19668 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_19668 = 0;
								}
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_19467, "SET_DATA_SLOT");
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(1);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar0);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(Global_7363[iVar1].f_10);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
								func_22(&(Global_7363[iVar1]));
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar2);
								GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
							}
							if (Global_2460675)
							{
								if (iVar1 == 14)
								{
									func_21(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1].f_10), SYSTEM::TO_FLOAT(Global_21868), -1f, &(Global_7363[iVar1]), 0, 0, 0, 0);
								}
							}
							Global_7925[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_7363[iVar1].f_11)
				{
					if (iVar0 == Global_7363[iVar1].f_4)
					{
						if (Global_7925[iVar0] == 0)
						{
							Global_7889[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_111638.f_14136[iVar3].f_24 != 0)
									{
										if (Global_111638.f_14136[iVar3].f_28 == 0)
										{
											if (Global_111638.f_14136[iVar3].f_99[Global_19486] == 1)
											{
												Global_21873++;
											}
										}
									}
									iVar3++;
								}
								func_21(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1].f_10), SYSTEM::TO_FLOAT(Global_21873), -1f, &(Global_7363[iVar1]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_76622)
								{
									iVar4 = 0;
									iVar4 = Global_4268499;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4268500[iVar5].f_24 != 0)
										{
											if (Global_4268500[iVar5].f_28 == 0)
											{
												if (Global_4268500[iVar5].f_99[Global_19486] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_21(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1].f_10), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_7363[iVar1]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_19486)
									{
										case 0:
											iVar6 = Global_42607;
											break;
										
										case 1:
											iVar6 = Global_42608;
											break;
										
										case 2:
											iVar6 = Global_42609;
											break;
										
										default:
											break;
									}
									func_21(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1].f_10), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_7363[iVar1]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_21(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1].f_10), SYSTEM::TO_FLOAT(Global_21868), -1f, &(Global_7363[iVar1]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_19467, "SET_DATA_SLOT");
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(1);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar0);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(Global_7363[iVar1].f_10);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
								func_22(&(Global_7363[iVar1]));
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(Global_7362);
								GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
							}
							else if (iVar1 == 2)
							{
								if (GAMEPLAY::IS_BIT_SET(Global_7357, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_19467, "SET_DATA_SLOT");
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(1);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar0);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(Global_7363[iVar1].f_10);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
								func_22(&(Global_7363[iVar1]));
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar7);
								GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
							}
							else if (iVar1 == 3)
							{
								if (GAMEPLAY::IS_BIT_SET(Global_7357, 3))
								{
									iVar8 = 42;
									Global_19668 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_19668 = 0;
								}
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_19467, "SET_DATA_SLOT");
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(1);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar0);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(Global_7363[iVar1].f_10);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
								func_22(&(Global_7363[iVar1]));
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar8);
								GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
							}
							else if (iVar1 == 8)
							{
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_19467, "SET_DATA_SLOT");
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(1);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar0);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(Global_7363[iVar1].f_10);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
								func_22(&(Global_7363[iVar1]));
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(42);
								GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
							}
							else if ((iVar1 == 23 && GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_7363[iVar1]), "CELL_BENWEB")) && GAMEPLAY::IS_BIT_SET(Global_7357, 6))
							{
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_19467, "SET_DATA_SLOT");
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(1);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar0);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(Global_7363[iVar1].f_10);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
								func_22(&(Global_7363[iVar1]));
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(42);
								GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
							}
							else if (Global_7363[iVar1].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1626881.f_1;
								func_21(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1].f_10), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_7363[iVar1]), 0, 0, 0, 0);
							}
							else
							{
								func_21(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1].f_10), SYSTEM::TO_FLOAT(0), -1f, &(Global_7363[iVar1]), 0, 0, 0, 0);
							}
							Global_7925[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_21(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uParam0, sParam1);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(SYSTEM::ROUND(fParam6));
	}
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam7))
	{
		func_22(sParam7);
	}
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		func_22(sParam8);
	}
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam9))
	{
		func_22(sParam9);
	}
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam10))
	{
		func_22(sParam10);
	}
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam11))
	{
		func_22(sParam11);
	}
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
}

void func_22(char* sParam0)
{
	GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM(sParam0);
	GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
}

bool func_23(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_24(char* sParam0)
{
	if (Global_21868 != 0)
	{
		if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam0))
		{
		}
		Global_21868 = 0;
	}
}

void func_25()
{
	Global_1626881.f_1 = (Global_1626881.f_1 - 1);
	if (Global_1626881.f_1 < 0)
	{
		Global_1626881.f_1 = 0;
	}
}

void func_26(int iParam0, var uParam1)
{
	if (Global_1628237[PLAYER::PLAYER_ID()].f_11.f_26 == func_14())
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			Global_1628237[PLAYER::PLAYER_ID()].f_11.f_26 = iParam0;
			Global_2537071.f_5124.f_221 = uParam1;
			func_27(func_28(iParam0));
		}
	}
}

void func_27(int iParam0)
{
	Var0 = -1185346884;
	Var0.f_1 = PLAYER::PLAYER_ID();
	if (!iParam0 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 2, iParam0);
	}
}

int func_28(int iParam0)
{
	if (iParam0 != -1)
	{
		GAMEPLAY::SET_BIT(&uVar0, iParam0);
	}
	return uVar0;
}

int func_29(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < func_30())
	{
		if (Global_1626881.f_7[iVar0].f_7 == iParam1)
		{
			iParam0 = (iParam0 - 1);
			if (iParam0 < 0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_30()
{
	return Global_1626881;
}

void func_31()
{
	iVar0 = func_29(iLocal_98, 0);
	if (iLocal_98 == -1)
	{
		func_84(1);
		return;
	}
	iVar1 = Global_1626881.f_7[iVar0].f_2;
	if (!func_46(iVar1, 0, 1) || iLocal_99 != iVar1)
	{
		func_84(1);
		return;
	}
	func_41(&uLocal_101);
	if (func_39(&uLocal_101))
	{
		func_84(1);
		return;
	}
	if (func_38(&uLocal_101))
	{
		func_13(iVar0);
		func_84(1);
		return;
	}
	if (func_34(&uLocal_101))
	{
		if (func_33())
		{
			iLocal_100 = 1;
			iLocal_73 = 3;
		}
		else if (Global_1626881.f_7[iVar0] == 0)
		{
			func_6(iVar0);
		}
		else if (Global_1626881.f_7[iVar0] == 1)
		{
			func_32(iVar0);
		}
		else
		{
			func_7(0);
		}
	}
}

void func_32(int iParam0)
{
	GAMEPLAY::SET_BIT(&Global_1573902, 15);
	func_13(iParam0);
	Global_1626881.f_6 = 0;
	func_7(0);
}

bool func_33()
{
	return Global_1312418;
}

int func_34(var uParam0)
{
	if (!GAMEPLAY::IS_BIT_SET(*uParam0, 0))
	{
		return 0;
	}
	if (Global_19464)
	{
		return 0;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return 0;
	}
	if (!CONTROLS::IS_CONTROL_JUST_PRESSED(2, Global_19455))
	{
		return 0;
	}
	func_35();
	Global_19464 = 1;
	return 1;
}

void func_35()
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Accept", &Global_19475, 1);
		func_36();
	}
}

void func_36()
{
	if (func_37())
	{
		MOBILE::_MOVE_FINGER(5);
	}
}

int func_37()
{
	if (Global_76622)
	{
		return 0;
	}
	iVar2 = 0;
	uVar0 = CAM::_0x19CAFA3C87F7C2FF();
	iVar1 = CAM::_0xEE778F8C7E1142E2(uVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_4270043 || iVar2)
	{
		return 1;
	}
	return 1;
}

int func_38(var uParam0)
{
	if (!GAMEPLAY::IS_BIT_SET(*uParam0, 1))
	{
		return 0;
	}
	if (Global_19464)
	{
		return 0;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return 0;
	}
	if (!CONTROLS::IS_CONTROL_JUST_PRESSED(2, Global_19458))
	{
		return 0;
	}
	func_35();
	Global_19464 = 1;
	return 1;
}

int func_39(var uParam0)
{
	if (!GAMEPLAY::IS_BIT_SET(*uParam0, 2))
	{
		return 0;
	}
	if (Global_19464)
	{
		return 0;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return 0;
	}
	if (!CONTROLS::IS_CONTROL_JUST_PRESSED(2, Global_19456))
	{
		return 0;
	}
	func_40();
	Global_19464 = 1;
	return 1;
}

void func_40()
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Back", &Global_19475, 1);
	}
}

void func_41(var uParam0)
{
	if (GAMEPLAY::GET_GAME_TIMER() < uParam0->f_1)
	{
		return;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return;
	}
	if (CONTROLS::IS_CONTROL_JUST_PRESSED(2, Global_19462) || CONTROLS::IS_CONTROL_JUST_PRESSED(2, 181))
	{
		func_44();
		uParam0->f_1 = GAMEPLAY::GET_GAME_TIMER() + 50;
	}
	if (CONTROLS::IS_CONTROL_JUST_PRESSED(2, Global_19463) || CONTROLS::IS_CONTROL_JUST_PRESSED(2, 180))
	{
		func_42();
		uParam0->f_1 = GAMEPLAY::GET_GAME_TIMER() + 50;
	}
}

void func_42()
{
	func_94(Global_19467, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(3), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_19475, 1);
	func_43();
}

void func_43()
{
	if (func_37())
	{
		if (Global_19669 == 0)
		{
			MOBILE::_MOVE_FINGER(2);
		}
		else
		{
			MOBILE::_MOVE_FINGER(1);
		}
	}
}

void func_44()
{
	func_94(Global_19467, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(1), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_19475, 1);
	func_45();
}

void func_45()
{
	if (func_37())
	{
		if (Global_19669 == 0)
		{
			MOBILE::_MOVE_FINGER(1);
		}
		else
		{
			MOBILE::_MOVE_FINGER(2);
		}
	}
}

int func_46(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(uParam0))
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

void func_47()
{
	if (func_30() > 1)
	{
		func_41(&uLocal_101);
	}
	if (func_34(&uLocal_101))
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_19467, "GET_CURRENT_SELECTION");
		uVar0 = GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION();
		while (!GRAPHICS::_0x768FF8961BA904D6(uVar0))
		{
			SYSTEM::WAIT(0);
		}
		iLocal_98 = GRAPHICS::_0x2DE7EFA66B906036(uVar0);
		iVar1 = func_29(iLocal_98, 0);
		switch (Global_1626881.f_7[iVar1].f_1)
		{
			case 0:
				return;
			
			case 1:
				func_49();
				break;
			
			default:
				return;
		}
		Global_19486.f_1 = 8;
		return;
	}
	if (func_38(&uLocal_101))
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_19467, "GET_CURRENT_SELECTION");
		uVar2 = GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION();
		while (!GRAPHICS::_0x768FF8961BA904D6(uVar2))
		{
			SYSTEM::WAIT(0);
		}
		iLocal_98 = GRAPHICS::_0x2DE7EFA66B906036(uVar2);
		iVar3 = func_29(iLocal_98, 0);
		switch (Global_1626881.f_7[iVar3].f_1)
		{
			case 0:
				return;
			
			case 1:
				func_13(iVar3);
				func_84(0);
				return;
			
			default:
		}
		return;
		return;
	}
	if (func_16(0))
	{
		func_48(0);
		func_84(0);
	}
}

void func_48(int iParam0)
{
	if (func_16(iParam0))
	{
		GAMEPLAY::CLEAR_BIT(&(Global_1626881.f_3), iParam0);
	}
}

void func_49()
{
	if (Global_19486.f_1 != 8)
	{
		Global_19486.f_1 = 8;
	}
	func_94(Global_19467, "SET_DATA_SLOT_EMPTY", SYSTEM::TO_FLOAT(26), -1082130432, -1082130432, -1082130432, -1082130432);
	bVar0 = false;
	iVar3 = func_29(iLocal_98, 0);
	iLocal_99 = Global_1626881.f_7[iVar3].f_2;
	iVar4 = Global_1626881.f_7[iVar3].f_2;
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_19467, "SET_DATA_SLOT");
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(26);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
	if (func_46(iVar4, 0, 1))
	{
		Var5 = { func_81(iVar4) };
		GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("STRING");
		UI::_SET_NOTIFACTION_COLOR_NEXT(func_75(iVar4));
		UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Var5);
		GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
		bVar0 = true;
	}
	else
	{
		func_22("");
	}
	if (Global_1626881.f_7[iVar3] == 0)
	{
		if (Global_262145.f_14960)
		{
			bVar25 = func_74(iVar4);
			iVar26 = 0;
			while (iVar26 < 3)
			{
				if (iVar27 < 3)
				{
					if (Global_1628237[iVar4].f_11.f_11[iVar26] != func_14())
					{
						if (func_46(Global_1628237[iVar4].f_11.f_11[iVar26], 0, 1))
						{
							uVar21[iVar27] = Global_1628237[iVar4].f_11.f_11[iVar26];
							iVar27++;
						}
					}
				}
				iVar26++;
			}
			if (iVar27 == 0)
			{
				if (bVar25)
				{
					func_22("BA_APP_BODYCTA");
				}
				else
				{
					func_22("BA_APP_BODY_TA");
				}
			}
			else
			{
				StringCopy(&cVar28, "BA_APP_BODY_T4", 16);
				if (bVar25)
				{
					StringCopy(&cVar28, "BA_APP_BODYCT4", 16);
				}
				if (iVar27 == 2)
				{
					if (bVar25)
					{
						StringCopy(&cVar28, "BA_APP_BODYCT5", 16);
					}
					else
					{
						StringCopy(&cVar28, "BA_APP_BODY_T5", 16);
					}
				}
				else if (iVar27 > 2)
				{
					if (bVar25)
					{
						StringCopy(&cVar28, "BA_APP_BODYCT6", 16);
					}
					else
					{
						StringCopy(&cVar28, "BA_APP_BODY_T6", 16);
					}
				}
				GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM(&cVar28);
				iVar26 = 0;
				while (iVar26 < iVar27)
				{
					Var32 = { func_81(uVar21[iVar26]) };
					UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Var32);
					iVar26++;
				}
				GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
			}
		}
		else
		{
			if (Global_1626881.f_88[iVar3].f_1)
			{
				if (Global_1626881.f_88[iVar3].f_2)
				{
					StringCopy(&cVar48, "BA_APP_BODY_T9", 16);
				}
				else
				{
					StringCopy(&cVar48, "BA_APP_BODY_T8", 16);
				}
			}
			else if (Global_1626881.f_88[iVar3].f_2)
			{
				StringCopy(&cVar48, "BA_APP_BODY_T7", 16);
			}
			else
			{
				StringCopy(&cVar48, "BA_APP_BODY_T10", 16);
			}
			GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM(&cVar48);
			UI::ADD_TEXT_COMPONENT_INTEGER(Global_1626881.f_88[iVar3]);
			UI::ADD_TEXT_COMPONENT_INTEGER(func_73(iVar4));
			UI::ADD_TEXT_COMPONENT_INTEGER(Global_1626881.f_88[iVar3].f_3);
			UI::ADD_TEXT_COMPONENT_INTEGER(Global_1626881.f_88[iVar3].f_4);
			GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
		}
	}
	else if (Global_1626881.f_7[iVar3] == 1)
	{
		GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("BA_APP_BODY_DM2");
		UI::_SET_NOTIFACTION_COLOR_NEXT(func_75(Global_1626881.f_7[iVar3].f_2));
		UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_61(Global_1626881.f_7[iVar3].f_2));
		GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
	}
	if (bVar0)
	{
		iVar2 = func_55(Global_1626881.f_7[iVar3].f_2);
		if (iVar2 == 0)
		{
			bVar0 = false;
		}
		else
		{
			sVar1 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar2);
		}
	}
	if (bVar0)
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_STRING(sVar1);
	}
	else
	{
		func_22(&Local_94);
	}
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
	func_94(Global_19467, "DISPLAY_VIEW", SYSTEM::TO_FLOAT(26), -1082130432, -1082130432, -1082130432, -1082130432);
	func_53(&Local_90);
	func_50(13, &Local_82, 12, &Local_86, 4, &Local_74, &uLocal_101);
	iLocal_73 = 1;
}

void func_50(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, char* sParam5, var uParam6)
{
	func_51(2, iParam0, sParam1, 0, uParam6, -1);
	func_51(1, iParam2, sParam3, 1, uParam6, 17);
	func_51(3, iParam4, sParam5, 2, uParam6, -1);
}

void func_51(int iParam0, int iParam1, char* sParam2, int iParam3, var uParam4, int iParam5)
{
	if (iParam1 == 1)
	{
		func_21(Global_19467, "SET_SOFT_KEYS", SYSTEM::TO_FLOAT(iParam0), 0f, SYSTEM::TO_FLOAT(iParam1), -1f, -1f, 0, 0, 0, 0, 0);
		GAMEPLAY::CLEAR_BIT(uParam4, iParam3);
		func_52(iParam5, 0);
		return;
	}
	if (Global_19474)
	{
		func_21(Global_19467, "SET_SOFT_KEYS", SYSTEM::TO_FLOAT(iParam0), 1f, SYSTEM::TO_FLOAT(iParam1), -1f, -1f, sParam2, 0, 0, 0, 0);
		GAMEPLAY::SET_BIT(uParam4, iParam3);
		func_52(iParam5, 1);
		return;
	}
	func_21(Global_19467, "SET_SOFT_KEYS", SYSTEM::TO_FLOAT(iParam0), 1f, SYSTEM::TO_FLOAT(iParam1), -1f, -1f, 0, 0, 0, 0, 0);
	GAMEPLAY::SET_BIT(uParam4, iParam3);
	func_52(iParam5, 1);
}

void func_52(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		GAMEPLAY::SET_BIT(&Global_7356, iParam0);
		return;
	}
	GAMEPLAY::CLEAR_BIT(&Global_7356, iParam0);
}

void func_53(char* sParam0)
{
	func_54(Global_19467, "SET_HEADER", sParam0, 0, 0, 0, 0);
}

void func_54(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uParam0, sParam1);
	func_22(sParam2);
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		func_22(sParam3);
	}
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam4))
	{
		func_22(sParam4);
	}
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam5))
	{
		func_22(sParam5);
	}
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam6))
	{
		func_22(sParam6);
	}
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
}

int func_55(int iParam0)
{
	iVar0 = func_58(iParam0);
	if (iVar0 == -1)
	{
		func_56(iParam0, 1);
		return 0;
	}
	Global_1389078[iVar0].f_4 = 1;
	return Global_1389078[iVar0].f_2;
}

void func_56(int iParam0, bool bParam1)
{
	if (!func_46(iParam0, 0, 1))
	{
		return;
	}
	if (func_58(iParam0) != -1)
	{
		return;
	}
	if (Global_1389241)
	{
		if (iParam0 == Global_1389241.f_1)
		{
			return;
		}
	}
	if (func_57(iParam0))
	{
		return;
	}
	if (Global_1389279 >= 32)
	{
		return;
	}
	Global_1389246[Global_1389279] = iParam0;
	Global_1389279++;
	if (bParam1)
	{
	}
}

int func_57(int iParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1389279)
	{
		if (Global_1389246[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_58(int iParam0)
{
	if (!func_46(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1389239 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1389239)
	{
		if (Global_1389078[iVar0].f_1 == iParam0)
		{
			if (PED::IS_PEDHEADSHOT_VALID(Global_1389078[iVar0].f_2) && PED::IS_PEDHEADSHOT_READY(Global_1389078[iVar0].f_2))
			{
				return iVar0;
			}
			func_59(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_59(int iParam0)
{
	if (iParam0 >= Global_1389239)
	{
		return;
	}
	if (PED::IS_PEDHEADSHOT_VALID(Global_1389078[iParam0].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1389078[iParam0].f_2 != 0)
		{
			StringCopy(&cVar16, PED::GET_PEDHEADSHOT_TXD_STRING(Global_1389078[iParam0].f_2), 64);
			UI::_0x317EBA71D7543F52(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		PED::UNREGISTER_PEDHEADSHOT(Global_1389078[iParam0].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1389239)
	{
		Global_1389078[iVar32] = { Global_1389078[iVar33] };
		iVar32++;
		iVar33++;
	}
	func_60(&(Global_1389078[iVar32]));
	Global_1389239 = (Global_1389239 - 1);
}

void func_60(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_14();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uParam0->f_3 = NETWORK::GET_NETWORK_TIME();
	}
}

char* func_61(int iParam0)
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		uVar0 = func_72(&(Global_1628237[iParam0].f_11.f_104));
		return uVar0;
	}
	if (Global_1628237[iParam0].f_11.f_120 != Global_1628237[PLAYER::PLAYER_ID()].f_11.f_120)
	{
		uVar0 = func_67(iParam0, 0);
		return uVar0;
	}
	if (((func_66(iParam0, 28) || func_66(PLAYER::PLAYER_ID(), 28)) || func_65(iParam0)) && !func_63(iParam0))
	{
		return func_67(iParam0, 0);
	}
	iVar1 = func_62(iParam0);
	if (iVar1 != func_14())
	{
		if (iVar1 != PLAYER::PLAYER_ID())
		{
			if (!GAMEPLAY::IS_DURANGO_VERSION() && !NETWORK::_0x595F028698072DD9(0, -1, 1))
			{
				return func_67(iVar1, 0);
			}
		}
	}
	if (iVar1 != func_14())
	{
		uVar0 = func_72(&(Global_1628237[iVar1].f_11.f_104));
		if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(uVar0))
		{
			return func_67(iVar1, 0);
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

int func_62(int iParam0)
{
	if (iParam0 != func_14())
	{
		return Global_1628237[iParam0].f_11;
	}
	return func_14();
}

int func_63(int iParam0)
{
	Var0 = { func_64(iParam0) };
	if (GAMEPLAY::IS_DURANGO_VERSION())
	{
		if (NETWORK::_0x72D918C99BCACC54(0))
		{
			if (NETWORK::_0xB57A49545BA53CE7(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

struct<13> func_64(int iParam0)
{
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

int func_65(int iParam0)
{
	if (iParam0 != func_14())
	{
		Var0 = { func_64(iParam0) };
		if (GAMEPLAY::IS_ORBIS_VERSION() || GAMEPLAY::IS_PC_VERSION())
		{
			if (NETWORK::_0x72D918C99BCACC54(0))
			{
				return 0;
			}
		}
		else if (GAMEPLAY::IS_DURANGO_VERSION())
		{
			if (NETWORK::_0x72D918C99BCACC54(0))
			{
				if (NETWORK::_0xB57A49545BA53CE7(&Var0))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

bool func_66(int iParam0, int iParam1)
{
	return GAMEPLAY::IS_BIT_SET(Global_1628237[iParam0].f_11.f_4, iParam1);
}

var func_67(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_69(iParam0, 1))
		{
			return func_68();
		}
	}
	return UI::_GET_LABEL_TEXT("GB_REST_ACC");
}

var func_68()
{
	return UI::_GET_LABEL_TEXT("GB_REST_ACCM");
}

bool func_69(int iParam0, bool bParam1)
{
	return func_70(iParam0, bParam1, 1);
}

int func_70(int iParam0, bool bParam1, int iParam2)
{
	if (iParam0 == func_14())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_71(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1628237[iParam0].f_11;
	if (iVar0 != func_14() && Global_1628237[iVar0].f_11.f_450 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_71(int iParam0, int iParam1)
{
	if (iParam0 != func_14())
	{
		if (Global_1628237[iParam0].f_11 != func_14())
		{
			if (Global_1628237[iParam0].f_11 == iParam0 && Global_1628237[iParam0].f_11.f_450 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

var func_72(var uParam0)
{
	return uParam0;
}

int func_73(int iParam0)
{
	if (func_62(iParam0) == func_14())
	{
		return 0;
	}
	return Global_1628237[iParam0].f_11.f_19;
}

bool func_74(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_26, 26);
}

int func_75(int iParam0)
{
	iVar0 = func_78(iParam0);
	if (iVar0 != -1)
	{
		return func_76(iVar0);
	}
	return 1;
}

int func_76(int iParam0)
{
	if (iParam0 > -1)
	{
		iVar0 = func_77(iParam0);
		switch (iVar0)
		{
			case 0:
				return 192;
			
			case 1:
				return 193;
			
			case 2:
				return 194;
			
			case 3:
				return 195;
			
			case 4:
				return 196;
			
			case 5:
				return 197;
			
			case 6:
				return 198;
			
			case 7:
				return 199;
			
			case 8:
				return 200;
			
			case 9:
				return 201;
			
			case 10:
				return 202;
			
			case 11:
				return 203;
			
			case 12:
				return 204;
			
			case 13:
				return 205;
			
			case 14:
				return 206;
			}
		
		default:
	}
	return 1;
}

var func_77(int iParam0)
{
	return Global_2417897.f_818.f_44[iParam0].f_1;
}

int func_78(int iParam0)
{
	if (!iParam0 == func_14())
	{
		if (func_79(iParam0, 1))
		{
			return Global_2417897.f_818.f_11[func_62(iParam0)];
		}
	}
	return -1;
}

bool func_79(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_80(iParam0))
		{
			return 0;
		}
	}
	return Global_1628237[iParam0].f_11 != func_14();
}

int func_80(int iParam0)
{
	if (iParam0 != func_14())
	{
		if (Global_1628237[iParam0].f_11 != func_14())
		{
			return Global_1628237[iParam0].f_11 == iParam0;
		}
	}
	return 0;
}

struct<16> func_81(var uParam0)
{
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, PLAYER::GET_PLAYER_NAME(uParam0), 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

void func_82()
{
	if (Global_1626881.f_6)
	{
		if (iLocal_73 != 3)
		{
			if (!UI::IS_WARNING_MESSAGE_ACTIVE())
			{
				Global_1626881.f_6 = 0;
			}
		}
	}
}

void func_83()
{
	CONTROLS::SET_INPUT_EXCLUSIVE(0, 176);
	CONTROLS::SET_INPUT_EXCLUSIVE(0, 177);
}

void func_84(bool bParam0)
{
	iLocal_99 = func_14();
	if (!Global_19486.f_1 == 7)
	{
		Global_19486.f_1 = 7;
	}
	iVar0 = 0;
	if (bParam0)
	{
		iVar0 = iLocal_98;
	}
	if (iVar0 >= Global_1387710)
	{
		iVar0 = 0;
	}
	if (Global_21865)
	{
		func_49();
		Global_21865 = 0;
		return;
	}
	iVar1 = func_30();
	iVar1 = (iVar1 - func_93());
	if ((func_79(PLAYER::PLAYER_ID(), 0) && !func_92(1)) && iVar1 <= 0)
	{
		func_90();
		return;
	}
	func_85();
	func_94(Global_19467, "DISPLAY_VIEW", SYSTEM::TO_FLOAT(25), SYSTEM::TO_FLOAT(iVar0), -1082130432, -1082130432, -1082130432);
	func_53("CELL_BOSSAGE");
	bVar2 = false;
	if (iVar1 > 0)
	{
		bVar2 = true;
	}
	if (bVar2)
	{
		func_50(13, &Local_78, 12, &Local_86, 4, &Local_74, &uLocal_101);
	}
	else
	{
		func_50(1, "", 1, "", 4, &Local_74, &uLocal_101);
	}
	iLocal_73 = 0;
}

void func_85()
{
	func_94(Global_19467, "SET_DATA_SLOT_EMPTY", SYSTEM::TO_FLOAT(25), -1082130432, -1082130432, -1082130432, -1082130432);
	iVar0 = 0;
	while (iVar0 < func_30())
	{
		if (Global_1626881.f_7[iVar0].f_1 == 1 && Global_1626881.f_7[iVar0].f_7 == 0)
		{
			switch (Global_1626881.f_7[iVar0])
			{
				case 0:
					if (func_89(iVar0, iVar1))
					{
						iVar1++;
					}
					break;
				
				case 1:
					if (func_87(iVar0, iVar1))
					{
						iVar1++;
					}
					break;
				}
		}
		iVar0++;
	}
	if (iVar1 > 0)
	{
		return;
	}
	func_86();
}

void func_86()
{
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_19467, "SET_DATA_SLOT");
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(25);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
	if (func_80(PLAYER::PLAYER_ID()))
	{
		func_22("BA_APP_NONEB");
	}
	else
	{
		func_22("BA_APP_NONE");
	}
	func_22("");
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(-1);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(1);
	bVar0 = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(bVar0);
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
}

int func_87(int iParam0, int iParam1)
{
	if (Global_1626881.f_7[iParam0].f_2 == func_14() || !func_46(Global_1626881.f_7[iParam0].f_2, 0, 1))
	{
		return 0;
	}
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_19467, "SET_DATA_SLOT");
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(25);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam1);
	Var0 = { func_81(Global_1626881.f_7[iParam0].f_2) };
	func_88(&Var0);
	GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("BA_APP_BODY_DM1");
	GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(-1);
	iVar16 = 1;
	iVar17 = func_78(Global_1626881.f_7[iParam0].f_2);
	if (iVar17 != -1)
	{
		iVar16 = func_76(iVar17);
	}
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar16);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(true);
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
	return 1;
}

void func_88(var uParam0)
{
	GRAPHICS::_0xE83A3E3557A56640(uParam0);
}

int func_89(int iParam0, int iParam1)
{
	if (Global_1626881.f_7[iParam0].f_2 == func_14() || !func_46(Global_1626881.f_7[iParam0].f_2, 0, 1))
	{
		return 0;
	}
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_19467, "SET_DATA_SLOT");
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(25);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam1);
	Var0 = { func_81(Global_1626881.f_7[iParam0].f_2) };
	func_88(&Var0);
	bVar16 = func_74(Global_1626881.f_7[iParam0].f_2);
	iVar17 = func_73(Global_1626881.f_7[iParam0].f_2);
	if (iVar17 == 0)
	{
		if (bVar16)
		{
			func_22("BA_APP_BODYCT");
		}
		else
		{
			func_22("BA_APP_BODY_T");
		}
	}
	else if (iVar17 == 1)
	{
		if (bVar16)
		{
			GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("BA_APP_BODYCT3");
		}
		else
		{
			GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("BA_APP_BODY_T3");
		}
		UI::ADD_TEXT_COMPONENT_INTEGER(iVar17);
		GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
	}
	else
	{
		if (bVar16)
		{
			GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("BA_APP_BODYCT2");
		}
		else
		{
			GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("BA_APP_BODY_T2");
		}
		UI::ADD_TEXT_COMPONENT_INTEGER(iVar17);
		GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
	}
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(-1);
	iVar18 = 1;
	iVar19 = func_78(Global_1626881.f_7[iParam0].f_2);
	if (iVar19 != -1)
	{
		iVar18 = func_76(iVar19);
	}
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar18);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(true);
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
	return 1;
}

void func_90()
{
	func_94(Global_19467, "SET_DATA_SLOT_EMPTY", SYSTEM::TO_FLOAT(26), -1082130432, -1082130432, -1082130432, -1082130432);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_19467, "SET_DATA_SLOT");
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(26);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
	GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("STRING");
	UI::_SET_NOTIFACTION_COLOR_NEXT(func_75(PLAYER::PLAYER_ID()));
	UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_91());
	GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
	func_22("BA_APP_NONEG");
	func_22("CELL_AGBOSSPIC");
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
	func_94(Global_19467, "DISPLAY_VIEW", SYSTEM::TO_FLOAT(26), -1082130432, -1082130432, -1082130432, -1082130432);
	func_53("CELL_BOSSAGE");
	func_50(1, "", 1, "", 4, &Local_74, &uLocal_101);
	iLocal_73 = 2;
}

char* func_91()
{
	iVar0 = func_62(PLAYER::PLAYER_ID());
	if (iVar0 != func_14())
	{
		if (iVar0 != PLAYER::PLAYER_ID())
		{
			if (((func_66(iVar0, 28) || func_66(PLAYER::PLAYER_ID(), 28)) || func_65(iVar0)) && !func_63(iVar0))
			{
				return func_67(iVar0, 0);
			}
			if (!GAMEPLAY::IS_DURANGO_VERSION() && !NETWORK::_0x595F028698072DD9(0, -1, 1))
			{
				return func_67(iVar0, 0);
			}
		}
		uVar1 = func_72(&(Global_1628237[iVar0].f_11.f_104));
		if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(uVar1))
		{
			return func_67(iVar0, 0);
		}
		else
		{
			return sVar1;
		}
	}
	return "";
}

bool func_92(bool bParam0)
{
	return func_69(PLAYER::PLAYER_ID(), bParam0);
}

int func_93()
{
	iVar0 = 0;
	while (iVar0 < func_30())
	{
		if (Global_1626881.f_7[iVar0].f_7 == 1)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_94(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uParam0, sParam1);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(SYSTEM::ROUND(fParam6));
	}
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
}

void func_95()
{
	Global_1626881.f_1 = 0;
	func_96();
}

void func_96()
{
	Global_1626881.f_5 = 0;
}

void func_97(var uParam0)
{
	*uParam0 = 0;
}

