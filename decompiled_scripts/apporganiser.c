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
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_14();
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	func_8();
	while (true)
	{
		SYSTEM::WAIT(0);
		if (Global_19486.f_1 != 9)
		{
			if (!iLocal_18)
			{
				iLocal_18 = 1;
			}
			else if (Global_19468)
			{
				if (!iLocal_19)
				{
					iLocal_19 = 1;
					func_7(Global_19467, "SET_DATA_SLOT_EMPTY", 5f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_4(Global_19467, 1);
					func_7(Global_19467, "DISPLAY_VIEW", 5f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
				else
				{
					func_3();
				}
			}
			if (func_2())
			{
				func_14();
			}
		}
		if (func_1())
		{
			func_14();
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

int func_2()
{
	if (Global_7962 == 1 || Global_19486.f_1 < 7)
	{
		Global_19473 = 1;
		return 1;
	}
	return 0;
}

void func_3()
{
	if (!iLocal_20)
	{
		if (CONTROLS::IS_CONTROL_PRESSED(2, 172))
		{
			iLocal_20 = 1;
			func_7(Global_19467, "SET_INPUT_EVENT", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
	else if (!CONTROLS::IS_CONTROL_PRESSED(2, 172))
	{
		iLocal_20 = 0;
	}
	if (!iLocal_21)
	{
		if (CONTROLS::IS_CONTROL_PRESSED(2, 173))
		{
			iLocal_21 = 1;
			func_7(Global_19467, "SET_INPUT_EVENT", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
	else if (!CONTROLS::IS_CONTROL_PRESSED(2, 173))
	{
		iLocal_21 = 0;
	}
	if (!iLocal_22)
	{
		if (CONTROLS::IS_CONTROL_PRESSED(2, 174))
		{
			iLocal_22 = 1;
			func_7(Global_19467, "SET_INPUT_EVENT", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
	else if (!CONTROLS::IS_CONTROL_PRESSED(2, 174))
	{
		iLocal_22 = 0;
	}
	if (!iLocal_23)
	{
		if (CONTROLS::IS_CONTROL_PRESSED(2, 175))
		{
			iLocal_23 = 1;
			func_7(Global_19467, "SET_INPUT_EVENT", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
	else if (!CONTROLS::IS_CONTROL_PRESSED(2, 175))
	{
		iLocal_23 = 0;
	}
}

void func_4(int iParam0, bool bParam1)
{
	if (Global_95831 == Global_95832)
	{
		if (!bParam1)
		{
			return;
		}
	}
	if (iParam0 == 0)
	{
		return;
	}
	if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iParam0))
	{
		return;
	}
	func_8();
	iVar0 = Global_95835;
	iVar1 = Global_95834;
	bVar2 = true;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = 0;
	while (bVar2)
	{
		iVar4 = iVar3;
		iVar3 = Global_95836[iVar0][iVar1];
		if (!iVar3 == iVar4)
		{
			if (!iVar3 == 0)
			{
				switch (iVar0)
				{
					case 0:
						sVar6 = "fSu";
						break;
					
					case 1:
						sVar6 = "fMo";
						break;
					
					case 2:
						sVar6 = "fTu";
						break;
					
					case 3:
						sVar6 = "fWe";
						break;
					
					case 4:
						sVar6 = "fTh";
						break;
					
					case 5:
						sVar6 = "fFr";
						break;
					
					case 6:
						sVar6 = "fSa";
						break;
				}
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(iParam0, "SET_DATA_SLOT_EMPTY");
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar5);
				GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(iParam0, "SET_DATA_SLOT");
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(5);
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar5);
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar1);
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(0f);
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(-1f);
				func_6(sVar6);
				func_6(func_5(iVar3));
				GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
				iVar5++;
			}
		}
		iVar1++;
		if (iVar1 > 23)
		{
			iVar1 = 0;
			iVar0++;
		}
		if (iVar0 > 6)
		{
			iVar0 = 0;
		}
		if (iVar0 == Global_95835 && iVar1 == Global_95834)
		{
			bVar2 = false;
		}
	}
	Global_95832 = Global_95831;
}

char* func_5(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "ORG_EV_0";
			break;
		
		case 1:
			return "ORG_EV_1";
			break;
	}
	return "ORG_EV_0";
}

void func_6(char* sParam0)
{
	GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM(sParam0);
	GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
}

void func_7(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

void func_8()
{
	if (!Global_95830)
	{
		Global_96014 = TIME::GET_CLOCK_MONTH();
		Global_96013 = TIME::GET_CLOCK_DAY_OF_MONTH();
		Global_96012 = TIME::GET_CLOCK_HOURS();
		Global_95830 = 1;
		Global_95835 = TIME::GET_CLOCK_DAY_OF_WEEK();
		Global_95834 = TIME::GET_CLOCK_HOURS();
		func_12();
		return;
	}
	iVar0 = TIME::GET_CLOCK_MONTH();
	iVar1 = TIME::GET_CLOCK_DAY_OF_MONTH();
	iVar2 = TIME::GET_CLOCK_HOURS();
	iVar3 = Global_96014;
	iVar4 = Global_96013;
	iVar5 = Global_96012;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 0;
	iVar11 = func_9(iVar4, iVar3, iVar1, iVar0);
	if (iVar11 > 0)
	{
		iVar10 = 0;
		if (iVar11 > 7)
		{
			iVar8 = 0;
			iVar9 = 0;
			iVar8 = 0;
			while (iVar8 < 7)
			{
				iVar9 = 0;
				while (iVar9 < 24)
				{
					if (!Global_95836[iVar6][iVar7] == 0)
					{
						Global_95831++;
						Global_95833 = (Global_95833 - 1);
					}
					Global_95836[iVar6][iVar7] = 0;
					iVar9++;
				}
				iVar8++;
			}
		}
		else if (iVar11 > 1)
		{
			iVar10 = (iVar10 + (iVar11 - 1) * 24);
		}
		iVar10 = (iVar10 + (24 - iVar5));
		iVar10 = (iVar10 + (24 - (24 - iVar2)));
		iVar8 = 0;
		iVar7 = Global_95834;
		iVar6 = Global_95835;
		iVar8 = 0;
		while (iVar8 < iVar10)
		{
			if (iVar7 > 23)
			{
				iVar7 = 0;
				iVar6++;
			}
			if (iVar6 > 6)
			{
				iVar6 = 0;
			}
			if (!Global_95836[iVar6][iVar7] == 0)
			{
				Global_95831++;
				Global_95833 = (Global_95833 - 1);
			}
			Global_95836[iVar6][iVar7] = 0;
			iVar7++;
			iVar8++;
		}
		Global_95834 = (iVar7 - 1);
		Global_95835 = iVar6;
	}
	else
	{
		if (iVar5 > iVar2)
		{
			Global_96014 = iVar0;
			Global_96013 = iVar1;
			Global_96012 = iVar2;
			Global_95835 = TIME::GET_CLOCK_DAY_OF_WEEK();
			Global_95834 = TIME::GET_CLOCK_HOURS();
			return;
		}
		if (iVar5 == iVar2)
		{
			return;
		}
		else
		{
			iVar10 = (iVar2 - iVar5);
			iVar8 = 0;
			iVar7 = Global_95834;
			iVar6 = Global_95835;
			iVar8 = 0;
			while (iVar8 < iVar10)
			{
				if (!Global_95836[iVar6][iVar7] == 0)
				{
					Global_95831++;
					Global_95833 = (Global_95833 - 1);
				}
				Global_95836[iVar6][iVar7] = 0;
				iVar7++;
				if (iVar7 > 23)
				{
					iVar7 = 0;
					iVar6++;
				}
				if (iVar6 > 6)
				{
					iVar6 = 0;
				}
				iVar8++;
			}
			Global_95834 = iVar7;
			Global_95835 = iVar6;
		}
	}
	if (Global_95831 > Global_95832)
	{
	}
	if ((iVar3 == iVar0 && iVar5 == iVar2) && iVar4 == iVar1)
	{
	}
	else
	{
		Global_96014 = iVar0;
		Global_96013 = iVar1;
		Global_96012 = iVar2;
	}
}

int func_9(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = 0;
	if (!iParam1 == iParam3)
	{
		if (iParam1 < iParam3)
		{
			iVar1 = (func_10(iParam1) - (func_10(iParam1) - iParam0));
			iVar2 = 0;
			if (iParam3 > iParam1 + 1)
			{
				iVar3 = (iParam3 - iParam1);
				iVar4 = iParam1 + 1;
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 < iVar3)
				{
					if (iVar4 > 11)
					{
						iVar4 = 0;
					}
					iVar2 = (iVar2 + func_10(iVar4));
					iVar4++;
					iVar0++;
				}
			}
			iVar5 = (func_10(iParam3) - iParam2);
			iVar6 = ((iVar1 + iVar2) + iVar5);
			return iVar6;
		}
	}
	else
	{
		if (iParam2 < iParam0)
		{
			return 0;
		}
		if (iParam2 == iParam0)
		{
			return 0;
		}
		return (iParam2 - iParam0);
	}
	return 0;
}

int func_10(int iParam0)
{
	return func_11(iParam0);
}

int func_11(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return 30;
		
		case 3:
			return 30;
		
		case 5:
			return 30;
		
		case 10:
			return 30;
		
		case 1:
			return 28;
		
		default:
	}
	return 31;
	return 0;
}

void func_12()
{
	Global_95834 = 0;
	Global_95835 = 0;
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		iVar1 = 0;
		while (iVar1 < 24)
		{
			Global_95836[iVar0][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	func_13();
}

void func_13()
{
	Global_95834 = 0;
	Global_95835 = 0;
	Global_96012 = TIME::GET_CLOCK_HOURS();
	Global_96013 = TIME::GET_CLOCK_DAY_OF_MONTH();
	Global_96014 = TIME::GET_CLOCK_MONTH();
}

void func_14()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

