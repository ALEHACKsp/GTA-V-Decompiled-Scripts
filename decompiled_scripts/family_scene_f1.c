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
	iLocal_53 = 1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(66))
	{
		func_54();
	}
	SYSTEM::WAIT(0);
	func_53(ScriptParam_0);
	func_51();
	while (iLocal_53)
	{
		SYSTEM::WAIT(0);
		iLocal_53 = 0;
		if (func_45(1, Local_82, 1.5f))
		{
			func_36(&uLocal_113, &uLocal_114, &uLocal_117, &uLocal_118, Local_82, "v_franklinshouse");
			if (func_35(126))
			{
				func_1(2, &uLocal_48, Local_82, 30f, 22.5f, 7.5f, &uLocal_66);
			}
			iLocal_53 = 1;
		}
	}
	func_54();
}

int func_1(int iParam0, var uParam1, struct<3> Param2, struct<3> Param5, var uParam8)
{
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (Global_93768 != -1)
	{
		return 0;
	}
	if (func_33(iParam0, func_34()))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = func_32(iVar0);
		if (!func_31(iVar1))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_96222[iVar0]))
			{
				if (func_33(iParam0, func_30(iVar1)))
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	iVar3 = 145;
	iVar2 = 0;
	while (iVar2 < 3)
	{
		if (func_33(iParam0, func_30(iVar2)))
		{
			iVar3 = iVar2;
		}
		iVar2++;
	}
	if (!func_29(iVar3))
	{
		return 0;
	}
	if (!func_28(iVar3))
	{
		return 0;
	}
	switch (iVar3)
	{
		case 0:
			if (Global_4270062)
			{
				return 0;
			}
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		default:
			return 0;
			break;
	}
	if (!func_16(iVar3, func_22()))
	{
		return 0;
	}
	switch (iVar3)
	{
		case 0:
			iVar4 = 0;
			break;
		
		case 1:
			iVar4 = 1;
			break;
		
		case 2:
			iVar4 = 2;
			break;
		
		default:
			return 0;
			break;
	}
	if (func_15(iVar3, iVar4) == 1)
	{
		return 0;
	}
	if (func_14(Param5, 0f, 0f, 0f, 0))
	{
		Param5 = { 50f, 50f, 50f };
	}
	Var5 = { Param2 - Param5 };
	Var8 = { Param2 + Param5 };
	func_13(Var5, Var8);
	func_12(Var5, Var8, &(uParam1->f_1));
	func_10(iParam0, uParam8);
	func_9(Var5, Var8);
	func_8(Var5, Var8, &(uParam1->f_4));
	if (Global_93767 != 8)
	{
		if (Global_93768 == -1)
		{
			iVar11 = -1;
			if (func_33(iParam0, func_34()))
			{
			}
			iVar12 = 5000;
			if (func_7())
			{
				switch (iVar3)
				{
					case 0:
						iVar11 = -181320640;
						break;
					
					case 1:
						iVar11 = 1418815087;
						break;
					
					case 2:
						iVar11 = 2087297077;
						break;
					
					default:
						return 0;
						break;
				}
				iVar13 = -1;
				switch (Global_93767)
				{
					case 0:
						iVar14 = 11;
						iVar13 = 3;
						break;
					
					case 1:
						iVar14 = 12;
						iVar13 = 3;
						break;
					
					case 4:
						iVar14 = 13;
						iVar12 = 10000;
						iVar13 = 3;
						break;
					
					case 6:
						iVar14 = 14;
						iVar12 = 10000;
						iVar13 = 3;
						break;
					
					case 7:
						iVar14 = 15;
						iVar12 = 10000;
						iVar13 = 3;
						break;
					
					case 2:
						iVar14 = 16;
						iVar13 = 3;
						break;
					
					case 3:
						iVar14 = 17;
						iVar13 = 3;
						break;
					
					case 5:
						iVar14 = 18;
						iVar13 = 3;
						break;
					
					default:
						return 0;
						break;
				}
				if ((iVar14 == 14 || iVar14 == 15) && !iVar11 == -181320640)
				{
					iVar14 = 13;
				}
				iVar16 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, iVar13);
				switch (iVar16)
				{
					case 0:
						iVar15 = 19;
						break;
					
					case 1:
						iVar15 = 20;
						break;
					
					case 2:
						iVar15 = 21;
						break;
					
					case 3:
						iVar15 = 22;
						break;
					
					case 4:
						iVar15 = 23;
						break;
					
					default:
						return 0;
						break;
				}
				if (func_6(iVar11, iVar14, iVar15, 6, func_34(), iVar3, iVar12, 10000, -1, 0, -1, 0, 1))
				{
					Global_93768 = GAMEPLAY::GET_GAME_TIMER();
					return 1;
				}
			}
			else
			{
				switch (Global_93767)
				{
					case 0:
						switch (iVar3)
						{
							case 0:
								iVar11 = 2038672434;
								break;
							
							case 1:
								iVar11 = 975196153;
								break;
							
							case 2:
								iVar11 = 1127548000;
								break;
							
							default:
								return 0;
								break;
						}
						break;
					
					case 4:
						switch (iVar3)
						{
							case 0:
								iVar11 = 1666308520;
								break;
							
							case 1:
								iVar11 = -710274964;
								break;
							
							case 2:
								iVar11 = -1291788156;
								break;
							
							default:
								return 0;
								break;
						}
						iVar12 = 10000;
						break;
					
					case 6:
						switch (iVar3)
						{
							case 1:
								iVar11 = 1289879258;
								break;
							
							default:
								return 0;
								break;
						}
						break;
					
					case 3:
						switch (iVar3)
						{
							case 0:
								iVar11 = 1894462438;
								break;
							
							case 1:
								iVar11 = 1621076324;
								break;
							
							case 2:
								iVar11 = 1993031175;
								break;
							
							default:
								return 0;
								break;
						}
						break;
					
					case 1:
					case 2:
					case 5:
					case 7:
						return 0;
						break;
					
					default:
						return 0;
						break;
				}
				if (func_2(iVar11, 6, func_34(), iVar3, iVar3, iVar12, 10000, -1, -1, 0, -1, 0))
				{
					Global_93768 = GAMEPLAY::GET_GAME_TIMER();
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_2(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	if (func_5(0))
	{
		return 0;
	}
	if (iParam5 < 0)
	{
		return 0;
	}
	if (iParam6 < 0)
	{
		return 0;
	}
	if (iParam8 == 76)
	{
		return 0;
	}
	if (iParam9 == 235)
	{
		return 0;
	}
	if (iParam3 < 3)
	{
		if (GAMEPLAY::IS_BIT_SET(iParam2, iParam3))
		{
			return 0;
		}
	}
	if (iParam4 < 3)
	{
		if (iParam4 != iParam3)
		{
			return 0;
		}
	}
	if (iParam2 < 1 || iParam2 > 7)
	{
		return 0;
	}
	if (Global_111638.f_7683.f_136 < 9)
	{
		Var0 = iParam0;
		if (Global_111638.f_7683.f_911 == Var0)
		{
			Global_111638.f_7683.f_911 = -1;
		}
		Var0.f_3 = func_4(iParam1);
		Var0.f_1 = iParam11;
		Var0.f_2 = iParam2;
		Var0.f_4 = (GAMEPLAY::GET_GAME_TIMER() + iParam5);
		Var0.f_5 = iParam6;
		Var0.f_6 = iParam3;
		Var0.f_14 = iParam4;
		Var0.f_10 = iParam7;
		Var0.f_11 = -1;
		Var0.f_7 = iParam8;
		Var0.f_8 = iParam9;
		Var0.f_9 = iParam10;
		GAMEPLAY::CLEAR_BIT(&(Var0.f_1), 1);
		GAMEPLAY::CLEAR_BIT(&(Var0.f_1), 0);
		if (iParam7 != -1)
		{
			GAMEPLAY::SET_BIT(&(Var0.f_1), 11);
		}
		else if (iParam1 == 0)
		{
			GAMEPLAY::SET_BIT(&(Var0.f_1), 10);
		}
		Global_111638.f_7683[Global_111638.f_7683.f_136] = { Var0 };
		Global_111638.f_7683.f_136++;
		iVar15 = 0;
		while (iVar15 < 3)
		{
			if (GAMEPLAY::IS_BIT_SET(iParam2, iVar15))
			{
				func_3(iVar15);
			}
			iVar15++;
		}
		return 1;
	}
	return 0;
}

void func_3(int iParam0)
{
	iVar1 = 0;
	if (!func_29(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_111638.f_7683.f_136)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_111638.f_7683[iVar0].f_2, iParam0))
		{
			if (Global_111638.f_7683[iVar0].f_3 > iVar1)
			{
				iVar1 = Global_111638.f_7683[iVar0].f_3;
			}
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < Global_111638.f_7683.f_764)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_111638.f_7683.f_651[iVar2].f_2, iParam0))
		{
			if (Global_111638.f_7683.f_651[iVar2].f_3 == 5)
			{
				iVar1 = 5;
			}
		}
		iVar2++;
	}
	Global_111638.f_7683.f_919[iParam0] = iVar1;
}

int func_4(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 4:
			return 5;
			break;
		
		case 7:
			return 4;
			break;
		
		case 2:
			return 3;
			break;
		
		case 1:
			return 2;
			break;
		
		case 3:
			return 1;
			break;
		
		case 5:
		case 6:
			return 0;
			break;
	}
	return 7;
}

bool func_5(bool bParam0)
{
	if (!bParam0 && SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-448212099) > 0)
	{
		return 1;
	}
	return GAMEPLAY::IS_BIT_SET(Global_76870, 0);
}

int func_6(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)
{
	if (func_5(0))
	{
		return 0;
	}
	if (iParam6 < 0)
	{
		return 0;
	}
	if (iParam7 < 0)
	{
		return 0;
	}
	if (iParam8 == 76)
	{
		return 0;
	}
	if (iParam9 == 235)
	{
		return 0;
	}
	if (iParam5 < 3)
	{
		if (GAMEPLAY::IS_BIT_SET(iParam4, iParam5))
		{
			return 0;
		}
	}
	if (iParam4 < 1 || iParam4 > 7)
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 83 || iParam2 == 83)
	{
		return 0;
	}
	if (Global_111638.f_7683.f_764 < 8)
	{
		Var0 = iParam0;
		Var0.f_3 = func_4(iParam3);
		Var0.f_4 = (GAMEPLAY::GET_GAME_TIMER() + iParam6);
		Var0.f_5 = iParam7;
		Var0.f_1 = iParam11;
		Var0.f_2 = iParam4;
		Var0.f_6 = iParam5;
		Var0.f_7 = iParam8;
		Var0.f_8 = iParam9;
		Var0.f_9 = iParam10;
		Var0.f_10 = iParam1;
		Var0.f_11 = iParam2;
		Var0.f_13 = iParam12;
		GAMEPLAY::CLEAR_BIT(&(Var0.f_1), 0);
		Global_111638.f_7683.f_651[Global_111638.f_7683.f_764] = { Var0 };
		Global_111638.f_7683.f_764++;
		func_3(0);
		func_3(1);
		func_3(2);
		return 1;
	}
	return 0;
}

int func_7()
{
	if (GAMEPLAY::IS_BIT_SET(GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_8(struct<3> Param0, struct<3> Param3, var uParam6)
{
	if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
	{
		if (GAMEPLAY::HAS_BULLET_IMPACTED_IN_BOX(Param0, Param3, 1, 1))
		{
			*uParam6++;
			if (*uParam6 > 6)
			{
				Global_93767 = 3;
			}
		}
		else if ((FIRE::IS_EXPLOSION_IN_AREA(0, Param0, Param3) || FIRE::IS_EXPLOSION_IN_AREA(2, Param0, Param3)) || GAMEPLAY::IS_PROJECTILE_TYPE_IN_AREA(Param0, Param3, -1568386805, 1))
		{
			Global_93767 = 5;
		}
	}
}

void func_9(struct<3> Param0, struct<3> Param3)
{
	if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, 1))
	{
		if (iVar0 == 615608432 || iVar0 == 883325847)
		{
			if (FIRE::IS_EXPLOSION_IN_AREA(3, Param0, Param3))
			{
				Global_93767 = 2;
			}
		}
	}
}

void func_10(var uParam0, var uParam1)
{
	if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		iVar1 = func_11(iVar0);
		if (iVar1 == 145)
		{
		}
		else if (iVar1 == func_22())
		{
		}
		else if (!func_33(uParam0, func_30(iVar1)))
		{
		}
		else if (ENTITY::GET_ENTITY_MODEL(iVar0) == -2140431165)
		{
			Global_93767 = 6;
		}
		else
		{
			Global_93767 = 4;
		}
		if (Global_93767 != 4)
		{
			iVar2 = 0;
			while (iVar2 < *uParam1)
			{
				if (iVar0 == (*uParam1)[iVar2])
				{
					iVar3 = ENTITY::GET_ENTITY_MODEL(iVar0);
					if (iVar3 == -1177863319)
					{
						Global_93767 = 7;
					}
					if (iVar3 == 873639469)
					{
						Global_93767 = 6;
					}
				}
				iVar2++;
			}
		}
	}
}

int func_11(int iParam0)
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

void func_12(struct<3> Param0, struct<3> Param3, var uParam6)
{
	if ((PED::IS_PED_DUCKING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0)) || PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::IS_ENTITY_IN_AREA(PLAYER::PLAYER_PED_ID(), Param0, Param3, 0, 1, 0))
		{
			if (*uParam6 < 0)
			{
				*uParam6 = GAMEPLAY::GET_GAME_TIMER();
			}
			else if (GAMEPLAY::GET_GAME_TIMER() > *uParam6 + 10000)
			{
				Global_93767 = 1;
			}
		}
		else
		{
			*uParam6 = -1;
		}
	}
	else
	{
		*uParam6 = -1;
	}
}

void func_13(struct<3> Param0, struct<3> Param3)
{
	if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, 1))
	{
		if (iVar0 == -1312131151)
		{
			if (GAMEPLAY::IS_PROJECTILE_TYPE_IN_AREA(Param0, Param3, iVar0, 1))
			{
				Global_93767 = 0;
			}
		}
	}
}

bool func_14(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.x == Param3.x && Param0.y == Param3.y);
	}
	return ((Param0.x == Param3.x && Param0.y == Param3.y) && Param0.z == Param3.z);
}

int func_15(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1798[iParam0].f_12[iParam1];
}

int func_16(int iParam0, int iParam1)
{
	iVar0 = func_21();
	if ((iParam0 >= iVar0 || iParam1 >= iVar0) || iParam0 == iParam1)
	{
		return 0;
	}
	iVar1 = func_19(iParam0);
	iVar2 = func_19(iParam1);
	if (iVar1 != 7 && iVar2 != 7)
	{
		iVar3 = func_18(iVar1, iVar2);
		if (iVar3 != 10)
		{
			if (func_17(iVar3) != -1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_17(int iParam0)
{
	if (iParam0 < 9)
	{
		return Global_94600[iParam0];
	}
	return -1;
}

int func_18(int iParam0, int iParam1)
{
	if ((iParam0 != 0 && iParam0 != 1) && iParam0 != 2)
	{
		if ((iParam1 == 0 || iParam1 == 1) || iParam1 == 2)
		{
			iVar0 = iParam1;
			iParam1 = iParam0;
			iParam0 = iVar0;
		}
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 0;
					break;
				
				case 2:
					return 2;
					break;
				
				case 3:
					return 10;
					break;
				
				case 4:
					return 5;
					break;
				
				case 5:
					return 8;
					break;
				
				default:
					return 10;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 10;
					break;
				
				case 2:
					return 1;
					break;
				
				case 3:
					return 3;
					break;
				
				case 4:
					return 6;
					break;
				
				case 5:
					return 10;
					break;
				
				default:
					return 10;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 2;
					break;
				
				case 1:
					return 1;
					break;
				
				case 2:
					return 10;
					break;
				
				case 3:
					return 4;
					break;
				
				case 4:
					return 7;
					break;
				
				case 5:
					return 10;
					break;
				
				default:
					return 10;
					break;
			}
			break;
	}
	return 10;
}

int func_19(int iParam0)
{
	if (iParam0 == 145)
	{
		return 7;
	}
	if (iParam0 < func_21())
	{
		return func_20(iParam0);
	}
	if (iParam0 == 144)
	{
		return 7;
	}
	if (iParam0 == func_21())
	{
		return 6;
	}
	if (iParam0 == 168)
	{
		return 6;
	}
	return 6;
}

var func_20(int iParam0)
{
	return Global_1798[iParam0].f_11;
}

int func_21()
{
	if (Global_30768 == 0 || Global_30768 == 2)
	{
		return 167;
	}
	return 161;
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
			if (func_29(iVar0) && (!func_24(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_29(Global_111638.f_2358.f_539.f_4321))
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
	return Global_41431 == iParam0;
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
	if (func_29(iParam0))
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

int func_28(int iParam0)
{
	if (func_29(iParam0))
	{
		if ((Global_111638.f_9080 || Global_3) || func_5(0))
		{
			return Global_111638.f_2358.f_539.f_2348[iParam0];
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

bool func_29(int iParam0)
{
	return iParam0 < 3;
}

int func_30(int iParam0)
{
	switch (iParam0)
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

bool func_31(int iParam0)
{
	func_23();
	return iParam0 == Global_111638.f_2358.f_539.f_4321;
}

int func_32(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	else if (iParam0 == 2)
	{
		return 2;
	}
	else if (iParam0 == 1)
	{
		return 1;
	}
	return 145;
}

bool func_33(var uParam0, var uParam1)
{
	return (uParam0 && uParam1) != 0;
}

int func_34()
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

int func_35(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_111638.f_9080.f_99.f_58[iParam0];
}

void func_36(var uParam0, var uParam1, var uParam2, var uParam3, struct<3> Param4, char* sParam7)
{
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	if (!*uParam0)
	{
		if (!func_44(uParam1))
		{
			*uParam0 = 1;
		}
		else if (func_41(uParam1, 1f))
		{
			*uParam0 = 1;
		}
	}
	else if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		*uParam2 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
		if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam7))
		{
			if (!INTERIOR::IS_VALID_INTERIOR(*uParam3))
			{
				*uParam3 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Param4, sParam7);
			}
		}
		func_38(uParam1);
		*uParam0 = 0;
	}
	if (INTERIOR::IS_VALID_INTERIOR(*uParam2) && INTERIOR::IS_INTERIOR_READY(*uParam2))
	{
		if (*uParam2 == *uParam3)
		{
			if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				return;
			}
			CONTROLS::DISABLE_CONTROL_ACTION(0, 47, 1);
			CONTROLS::DISABLE_CONTROL_ACTION(0, 38, 1);
			CONTROLS::DISABLE_CONTROL_ACTION(0, 22, 1);
			CONTROLS::DISABLE_CONTROL_ACTION(0, 46, 1);
			CONTROLS::DISABLE_CONTROL_ACTION(0, 25, 1);
			CONTROLS::DISABLE_CONTROL_ACTION(0, 140, 1);
			CONTROLS::DISABLE_CONTROL_ACTION(0, 141, 1);
			CONTROLS::DISABLE_CONTROL_ACTION(0, 142, 1);
			CONTROLS::DISABLE_CONTROL_ACTION(0, 143, 1);
			CONTROLS::DISABLE_CONTROL_ACTION(0, 142, 1);
			if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4)
			{
				CONTROLS::DISABLE_CONTROL_ACTION(0, 21, 1);
			}
			CONTROLS::DISABLE_CONTROL_ACTION(0, 69, 1);
			CONTROLS::DISABLE_CONTROL_ACTION(0, 70, 1);
			CONTROLS::DISABLE_CONTROL_ACTION(0, 68, 1);
			CONTROLS::DISABLE_CONTROL_ACTION(0, 92, 1);
			CONTROLS::DISABLE_CONTROL_ACTION(0, 99, 1);
			CONTROLS::DISABLE_CONTROL_ACTION(0, 115, 1);
			CONTROLS::DISABLE_CONTROL_ACTION(0, 37, 1);
			CONTROLS::DISABLE_CONTROL_ACTION(0, 99, 1);
			CONTROLS::DISABLE_CONTROL_ACTION(0, 100, 1);
			if (CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, 37))
			{
				if (!Global_111638.f_18509.f_17)
				{
					func_37("FAM_WEAPDIS", -1);
					Global_111638.f_18509.f_17 = 1;
				}
				*uParam2 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
				if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam7))
				{
					if (!INTERIOR::IS_VALID_INTERIOR(*uParam3))
					{
						*uParam3 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Param4, sParam7);
					}
				}
				func_38(uParam1);
				*uParam0 = 0;
			}
			if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, 1))
			{
				if (iVar0 != -1569615261 && iVar0 != 966099553)
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), -1569615261, 1);
				}
			}
			if (WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0))
			{
				if (iVar0 != -1569615261 && iVar0 != 966099553)
				{
					WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(PLAYER::PLAYER_PED_ID(), -1569615261);
				}
			}
		}
		else if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam7))
		{
			Var1 = { INTERIOR::GET_OFFSET_FROM_INTERIOR_IN_WORLD_COORDS(*uParam2, 0f, 0f, 0f) };
			if (SYSTEM::VDIST2(Param4, Var1) < (5f * 5f))
			{
				if (!INTERIOR::IS_VALID_INTERIOR(*uParam3))
				{
					*uParam3 = *uParam2;
				}
			}
		}
	}
}

void func_37(char* sParam0, int iParam1)
{
	UI::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	UI::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

void func_38(var uParam0)
{
	func_39(uParam0, 0f);
}

void func_39(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_40(GAMEPLAY::IS_BIT_SET(*uParam0, 4)) - fParam1);
	GAMEPLAY::SET_BIT(uParam0, 1);
	GAMEPLAY::CLEAR_BIT(uParam0, 2);
	uParam0->f_2 = 0f;
}

float func_40(bool bParam0)
{
	if (bParam0)
	{
		fVar0 = SYSTEM::TO_FLOAT(GAMEPLAY::GET_GAME_TIMER());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uVar2 = NETWORK::GET_NETWORK_TIME();
		fVar3 = SYSTEM::TO_FLOAT(uVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (SYSTEM::TO_FLOAT(GAMEPLAY::GET_GAME_TIMER()) / 1000f);
}

int func_41(var uParam0, float fParam1)
{
	if (func_44(uParam0))
	{
		if (func_42(uParam0) > fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float func_42(var uParam0)
{
	if (func_44(uParam0))
	{
		if (func_43(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_40(GAMEPLAY::IS_BIT_SET(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

bool func_43(var uParam0)
{
	return GAMEPLAY::IS_BIT_SET(*uParam0, 2);
}

bool func_44(var uParam0)
{
	return GAMEPLAY::IS_BIT_SET(*uParam0, 1);
}

int func_45(int iParam0, struct<3> Param1, float fParam4)
{
	if (!func_46(iParam0))
	{
		return 0;
	}
	if (GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Param1, 1) >= (100f * fParam4))
	{
		return 0;
	}
	if (Global_98794)
	{
		return 0;
	}
	return 1;
}

int func_46(int iParam0)
{
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (((func_48(0) || func_48(3)) || func_48(2)) || func_48(14))
	{
		if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			if (STREAMING::GET_PLAYER_SWITCH_TYPE() != 3)
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (func_47())
	{
		if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			if (STREAMING::GET_PLAYER_SWITCH_TYPE() != 3)
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (GAMEPLAY::GET_MISSION_FLAG())
	{
		return 0;
	}
	if (GAMEPLAY::GET_RANDOM_EVENT_FLAG() && Global_111628)
	{
		return 0;
	}
	if (!func_31(iParam0))
	{
	}
	if (!GAMEPLAY::IS_BIT_SET(Global_111638.f_9080.f_2[27], 1))
	{
		return 0;
	}
	return 1;
}

int func_47()
{
	if (Global_95666 != -1)
	{
		return 1;
	}
	return 0;
}

int func_48(int iParam0)
{
	if (Global_41431 == 15)
	{
		return 0;
	}
	if (func_49(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_49(int iParam0)
{
	return func_50(iParam0, Global_41431);
}

int func_50(int iParam0, int iParam1)
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

void func_51()
{
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iLocal_119[iVar0] = 0;
		iVar0++;
	}
	func_52(&uLocal_124, 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
}

void func_52(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_53(struct<4> Param0)
{
	Local_82 = { Param0 };
	uLocal_85 = Param0.f_3;
}

void func_54()
{
	func_60(&uLocal_289, &uLocal_66, &uLocal_54, &uLocal_68, &uLocal_70, &uLocal_56, &uLocal_58, &uLocal_92, &uLocal_94, &uLocal_96);
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = func_59(iVar0);
		if (iVar1 < 15)
		{
			if (Global_93750[iVar1] != 141)
			{
				func_58(iVar1);
				Global_93750[iVar1] = 141;
			}
			func_55(iVar1);
		}
		iVar0++;
	}
	GAMEPLAY::SET_GAME_PAUSED(0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_55(int iParam0)
{
	iVar0 = 0;
	iVar1 = func_57(iParam0, &iVar0);
	if (iVar1 != 145)
	{
		if (func_29(iVar1))
		{
			iVar0 = func_26(iVar1);
		}
		else
		{
			iVar0 = func_56(iVar1);
		}
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
}

int func_56(int iParam0)
{
	if (!func_29(iParam0))
	{
		return func_27(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_57(int iParam0, int iParam1)
{
	*iParam1 = 0;
	switch (iParam0)
	{
		case 0:
			return 14;
			break;
		
		case 1:
			return 15;
			break;
		
		case 2:
			return 17;
			break;
		
		case 5:
			return 44;
			break;
		
		case 6:
			return 19;
			break;
		
		case 7:
			return 37;
			break;
		
		case 10:
			return 20;
			break;
		
		case 8:
			return 0;
			break;
		
		case 9:
			return 2;
			break;
		
		case 11:
			return 40;
			break;
		
		case 12:
			*iParam1 = -527186490;
			return 145;
			break;
		
		case 13:
			return 32;
			break;
		
		case 14:
			return 24;
			break;
		
		case 3:
			*iParam1 = -527186490;
			return 145;
			break;
		
		case 4:
			*iParam1 = 1240094341;
			return 145;
			break;
		
		case 15:
			return func_21();
			break;
	}
	return 145;
}

void func_58(int iParam0)
{
	switch (Global_93750[iParam0])
	{
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
			break;
		
		default:
			Global_111638.f_18509[iParam0] = Global_93750[iParam0];
			break;
	}
}

int func_59(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 16;
			break;
		
		case 1:
			return 15;
			break;
	}
	return 16;
}

void func_60(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING((*uParam0)[iVar0]))
		{
			PED::DETACH_SYNCHRONIZED_SCENE((*uParam0)[iVar0]);
		}
		(*uParam0)[iVar0] = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_86((*uParam1)[iVar0], "familyVeh", iVar0))
		{
			VEHICLE::DELETE_VEHICLE(uParam1[iVar0]);
		}
		if (ENTITY::DOES_ENTITY_EXIST((*uParam1)[iVar0]) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT((*uParam1)[iVar0], 1))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(uParam1[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		if (func_85(4, (*uParam2)[iVar0]))
		{
			func_84(4, (*uParam2)[iVar0], 0);
		}
		if (*uParam2)[iVar0] != PLAYER::PLAYER_PED_ID()
		{
			if (func_86((*uParam2)[iVar0], "familyPed", iVar0))
			{
				PED::DELETE_PED(uParam2[iVar0]);
			}
			func_83(uParam2[iVar0]);
		}
		if (ENTITY::DOES_ENTITY_EXIST((*uParam3)[iVar0]))
		{
			if (ENTITY::IS_ENTITY_ATTACHED((*uParam3)[iVar0]))
			{
				ENTITY::DETACH_ENTITY((*uParam3)[iVar0], 1, 1);
			}
		}
		if (func_86((*uParam3)[iVar0], "familyProp", iVar0))
		{
			OBJECT::DELETE_OBJECT(uParam3[iVar0]);
		}
		if (ENTITY::DOES_ENTITY_EXIST((*uParam3)[iVar0]) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT((*uParam3)[iVar0], 1))
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(uParam3[iVar0]);
		}
		if (func_86((*uParam5)[iVar0], "familyExtraPed", iVar0))
		{
			PED::DELETE_PED(uParam5[iVar0]);
		}
		if (ENTITY::DOES_ENTITY_EXIST((*uParam5)[iVar0]) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT((*uParam5)[iVar0], 1))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(uParam5[iVar0]);
		}
		if ((*uParam4)[iVar0] != 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED((*uParam4)[iVar0]);
		}
		if ((*uParam6)[iVar0] != 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED((*uParam6)[iVar0]);
		}
		func_82(uParam7[iVar0], uParam8[iVar0], uParam9[iVar0]);
		iVar0++;
	}
	iVar17 = 0;
	while (iVar17 < 139)
	{
		StringCopy(&Var1, "", 64);
		if (func_81(iVar17, &Var1))
		{
			STREAMING::REMOVE_ANIM_DICT(&Var1);
		}
		iVar17++;
	}
	func_78();
	func_74();
	func_61(-181320640);
	func_61(1418815087);
	func_61(2087297077);
	func_61(313472619);
	func_61(2038672434);
	func_61(1666308520);
	func_61(1894462438);
	func_61(1728635625);
	func_61(975196153);
	func_61(-710274964);
	func_61(1289879258);
	func_61(1621076324);
	func_61(1005256598);
	func_61(1127548000);
	func_61(-1291788156);
	func_61(1993031175);
	Global_93767 = 8;
	Global_93768 = -1;
}

int func_61(int iParam0)
{
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < Global_111638.f_7683.f_136)
	{
		if (Global_111638.f_7683[iVar0] == iParam0)
		{
			if (Global_41978 != iVar0)
			{
				func_73(iVar0);
				func_65(iParam0);
				iVar1 = 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_111638.f_7683.f_198)
	{
		if (Global_111638.f_7683.f_137[iVar0] == iParam0)
		{
			func_65(iParam0);
			iVar1 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_111638.f_7683.f_650)
	{
		if (Global_111638.f_7683.f_199[iVar0] == iParam0)
		{
			func_64(iParam0);
			iVar1 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_111638.f_7683.f_764)
	{
		if (Global_111638.f_7683.f_651[iVar0] == iParam0)
		{
			func_63(iVar0);
			iVar1 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_111638.f_7683.f_866)
	{
		if (Global_111638.f_7683.f_765[iVar0] == iParam0)
		{
			func_62(iVar0);
			iVar1 = 1;
		}
		iVar0++;
	}
	return iVar1;
}

void func_62(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= Global_111638.f_7683.f_866)
	{
		return;
	}
	if (Global_111638.f_7683.f_866 > 1)
	{
		iVar0 = iParam0;
		while (iVar0 <= (Global_111638.f_7683.f_866 - 2))
		{
			Global_111638.f_7683.f_765[iVar0] = { Global_111638.f_7683.f_765[iVar0 + 1] };
			iVar0++;
		}
	}
	if (Global_111638.f_7683.f_866 > 0)
	{
		Global_111638.f_7683.f_765[(Global_111638.f_7683.f_866 - 1)] = { Var1 };
		Global_111638.f_7683.f_866 = (Global_111638.f_7683.f_866 - 1);
	}
}

void func_63(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= Global_111638.f_7683.f_764)
	{
		return;
	}
	if (Global_111638.f_7683.f_764 > 1)
	{
		iVar0 = iParam0;
		while (iVar0 <= (Global_111638.f_7683.f_764 - 2))
		{
			Global_111638.f_7683.f_651[iVar0] = { Global_111638.f_7683.f_651[iVar0 + 1] };
			iVar0++;
		}
	}
	if (Global_111638.f_7683.f_764 > 0)
	{
		Global_111638.f_7683.f_651[(Global_111638.f_7683.f_764 - 1)] = { Var1 };
		Global_111638.f_7683.f_764 = (Global_111638.f_7683.f_764 - 1);
	}
	func_3(0);
	func_3(1);
	func_3(2);
}

void func_64(int iParam0)
{
	iVar15 = 0;
	while (iVar15 < Global_111638.f_7683.f_650)
	{
		if (Global_111638.f_7683.f_199[iVar15] == iParam0)
		{
			iVar16 = iVar15;
			while (iVar16 <= (Global_111638.f_7683.f_650 - 2))
			{
				Global_111638.f_7683.f_199[iVar16] = { Global_111638.f_7683.f_199[iVar16 + 1] };
				iVar16++;
			}
			Global_111638.f_7683.f_199[(Global_111638.f_7683.f_650 - 1)] = { Var0 };
			Global_111638.f_7683.f_650 = (Global_111638.f_7683.f_650 - 1);
			return;
		}
		iVar15++;
	}
}

void func_65(int iParam0)
{
	iVar15 = 0;
	while (iVar15 < Global_111638.f_7683.f_198)
	{
		if (Global_111638.f_7683.f_137[iVar15] == iParam0)
		{
			func_66(Global_111638.f_7683.f_137[iVar15].f_6);
			iVar16 = iVar15;
			while (iVar16 <= (Global_111638.f_7683.f_198 - 2))
			{
				Global_111638.f_7683.f_137[iVar16] = { Global_111638.f_7683.f_137[iVar16 + 1] };
				iVar16++;
			}
			Global_111638.f_7683.f_137[(Global_111638.f_7683.f_198 - 1)] = { Var0 };
			Global_111638.f_7683.f_198 = (Global_111638.f_7683.f_198 - 1);
			return;
		}
		iVar15++;
	}
}

int func_66(int iParam0)
{
	if (Global_117[iParam0].f_8 != 150)
	{
		if (func_72(iParam0, Global_19486) == 1)
		{
			func_71(iParam0, Global_19486, 0);
			if (func_70(iParam0, Global_19486) == 0)
			{
				iVar0 = Global_19486;
				func_67(iParam0, iVar0);
			}
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

void func_67(int iParam0, int iParam1)
{
	if (Global_117[iParam0].f_8 != 150)
	{
		if (iParam1 > 3)
		{
		}
		else
		{
			iVar0 = iParam1;
			func_69(iParam0, iVar0, 0);
			func_68(iParam0, iVar0, 0);
		}
	}
}

void func_68(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1798[iParam0].f_24[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_111638.f_28045[iParam0].f_24[iParam1] = iParam2;
	}
}

void func_69(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1798[iParam0].f_12[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_111638.f_28045[iParam0].f_12[iParam1] = iParam2;
	}
}

int func_70(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1798[iParam0].f_24[iParam1];
}

void func_71(int iParam0, int iParam1, int iParam2)
{
	Global_1798[iParam0].f_19[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_111638.f_28045[iParam0].f_19[iParam1] = iParam2;
	}
}

int func_72(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1798[iParam0].f_19[iParam1];
}

void func_73(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= Global_111638.f_7683.f_136)
	{
		return;
	}
	uVar1 = Global_111638.f_7683[iParam0].f_2;
	if (Global_111638.f_7683.f_136 > 1)
	{
		iVar0 = iParam0;
		while (iVar0 <= (Global_111638.f_7683.f_136 - 2))
		{
			Global_111638.f_7683[iVar0] = { Global_111638.f_7683[iVar0 + 1] };
			iVar0++;
		}
	}
	if (Global_111638.f_7683.f_136 > 0)
	{
		Global_111638.f_7683[(Global_111638.f_7683.f_136 - 1)] = { Var2 };
		Global_111638.f_7683.f_136 = (Global_111638.f_7683.f_136 - 1);
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (GAMEPLAY::IS_BIT_SET(uVar1, iVar0))
		{
			func_3(iVar0);
		}
		iVar0++;
	}
}

void func_74()
{
	if (func_77(4))
	{
		func_76(4, 0);
		func_75(4);
	}
	if (func_77(5))
	{
		func_76(5, 0);
		func_75(5);
	}
	if (func_77(0))
	{
		func_76(0, 0);
		func_75(0);
	}
}

void func_75(int iParam0)
{
	if (iParam0 != -1)
	{
		Global_30828[iParam0].f_4 = 1;
	}
}

void func_76(int iParam0, int iParam1)
{
	Global_30828[iParam0].f_10 = iParam1;
}

int func_77(int iParam0)
{
	if (iParam0 != -1)
	{
		if (Global_30828[iParam0].f_5)
		{
			return 1;
		}
	}
	return 0;
}

int func_78()
{
	iVar0 = 0;
	Var1 = { 0f, 0f, 0f };
	iVar4 = 226;
	iVar5 = 825812850;
	iVar22 = 0;
	iVar23 = 0;
	while (iVar23 < 11)
	{
		func_80(iVar23, &iVar0, &Var1, &iVar4, &iVar5, &cVar6, &iVar22);
		if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(Var1, 10f, iVar0, 0))
		{
			uVar24 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(Var1, 10f, iVar0, 0, 0, 1);
			if (ENTITY::DOES_ENTITY_EXIST(uVar24))
			{
				if (iVar5 == 825812850)
				{
					ENTITY::SET_ENTITY_ROTATION(iVar24, 0f, 0f, 21f, 2, 1);
				}
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iVar24);
			}
		}
		if (iVar4 != 226)
		{
		}
		else if (!OBJECT::_DOES_DOOR_EXIST(iVar5))
		{
		}
		else
		{
			OBJECT::_SET_DOOR_ACCELERATION_LIMIT(iVar5, 3, 1, 1);
			OBJECT::_SET_DOOR_AJAR_ANGLE(iVar5, 0f, 1, 1);
			if (((iVar23 != 6 && iVar23 != 7) && iVar23 != 8) && iVar23 != 9)
			{
				OBJECT::REMOVE_DOOR_FROM_SYSTEM(iVar5);
			}
		}
		iVar23++;
	}
	func_79(4, 0);
	return 0;
}

void func_79(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		GAMEPLAY::SET_BIT(&(Global_40554[iParam0].f_1), 6);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&(Global_40554[iParam0].f_1), 6);
	}
}

void func_80(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, char* sParam5, int iParam6)
{
	switch (iParam0)
	{
		case 0:
			*iParam1 = -794543736;
			*uParam2 = { -806.8f, 174f, 76.9f };
			StringCopy(sParam5, "V_Michael_1_Son", 64);
			*iParam3 = 226;
			*iParam4 = 1850241841;
			*iParam6 = 0;
			break;
		
		case 1:
			*iParam1 = 1204471037;
			*uParam2 = { -802.7f, 176.2f, 76.9f };
			StringCopy(sParam5, "V_Michael_1_Daught", 64);
			*iParam3 = 226;
			*iParam4 = -378388578;
			*iParam6 = 0;
			break;
		
		case 2:
			*iParam1 = -384976104;
			*uParam2 = { -805f, 171.9f, 76.9f };
			StringCopy(sParam5, "V_Michael_1_WC", 64);
			*iParam3 = 226;
			*iParam4 = -1223666875;
			*iParam6 = 0;
			break;
		
		case 3:
			*iParam1 = -384976104;
			*uParam2 = { -809.281f, 177.855f, 76.89f };
			StringCopy(sParam5, "V_Michael_1_WC", 64);
			*iParam3 = 226;
			*iParam4 = 1893421006;
			*iParam6 = 0;
			break;
		
		case 4:
			*iParam1 = -1444496707;
			*uParam2 = { -804.1f, 185.8f, 72.7f };
			StringCopy(sParam5, "V_Michael_G_Kitche", 64);
			*iParam3 = 226;
			*iParam4 = 825812850;
			*iParam6 = 1;
			break;
		
		case 5:
			*iParam1 = -659810237;
			*uParam2 = { -802.8f, 186.3f, 72.7f };
			StringCopy(sParam5, "V_Michael_G_Kitche", 64);
			*iParam3 = 226;
			*iParam4 = 825812850;
			*iParam6 = 1;
			break;
		
		case 6:
			*iParam1 = -1454760130;
			*uParam2 = { -796.5657f, 177.2214f, 73.0405f };
			StringCopy(sParam5, "V_Michael_G_Kitche", 64);
			*iParam3 = 41;
			*iParam4 = 776026812;
			*iParam6 = 1;
			break;
		
		case 7:
			*iParam1 = 1245831483;
			*uParam2 = { -794.5051f, 178.0124f, 73.0405f };
			StringCopy(sParam5, "V_Michael_G_Kitche", 64);
			*iParam3 = 42;
			*iParam4 = 698422331;
			*iParam6 = 1;
			break;
		
		case 8:
			*iParam1 = 159994461;
			*uParam2 = { -817f, 179f, 73f };
			StringCopy(sParam5, "V_Michael_G_Front", 64);
			*iParam3 = 38;
			*iParam4 = -2097039789;
			*iParam6 = 1;
			break;
		
		case 9:
			*iParam1 = -1686014385;
			*uParam2 = { -816f, 178f, 73f };
			StringCopy(sParam5, "V_Michael_G_Front", 64);
			*iParam3 = 39;
			*iParam4 = -2127416656;
			*iParam6 = 1;
			break;
		
		case 10:
			*iParam1 = 1575804630;
			*uParam2 = { -1150.158f, -1518.768f, 10.781f };
			StringCopy(sParam5, "rm_bathroom", 64);
			*iParam3 = 226;
			*iParam4 = 2007032394;
			*iParam6 = 0;
			break;
		
		default:
			*iParam1 = 0;
			*uParam2 = { 0f, 0f, 0f };
			StringCopy(sParam5, "NULL", 64);
			*iParam3 = 226;
			*iParam4 = 825812850;
			*iParam6 = 0;
			break;
	}
}

int func_81(int iParam0, char* sParam1)
{
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "TIMETABLE@AMANDA@IG_12", 64);
			return 1;
			break;
		
		case 2:
			StringCopy(sParam1, "TIMETABLE@REUNITED@IG_9", 64);
			return 1;
			break;
		
		case 3:
			StringCopy(sParam1, "TIMETABLE@REUNITED@IG_9", 64);
			return 1;
			break;
		
		case 4:
			StringCopy(sParam1, "TIMETABLE@REUNITED@IG_10", 64);
			return 1;
			break;
		
		case 18:
			StringCopy(sParam1, "TIMETABLE@JIMMY@IG_3@BASE", 64);
			return 1;
			break;
		
		case 5:
			StringCopy(sParam1, "TIMETABLE@JIMMY@IG_2@IG_2_P2", 64);
			return 1;
			break;
		
		case 21:
			StringCopy(sParam1, "TIMETABLE@JIMMY@IG_2@IG_2_P2", 64);
			return 1;
			break;
		
		case 9:
			StringCopy(sParam1, "TIMETABLE@JIMMY@IG_3@SLEEPING", 64);
			return 1;
			break;
		
		case 11:
			StringCopy(sParam1, "TIMETABLE@JIMMY@IG_5@BASE", 64);
			return 1;
			break;
		
		case 12:
			StringCopy(sParam1, "TIMETABLE@TRACY@IG_9_2@", 64);
			return 1;
			break;
		
		case 13:
			StringCopy(sParam1, "TIMETABLE@TRACY@IG_9_7@", 64);
			return 1;
			break;
		
		case 14:
			StringCopy(sParam1, "TIMETABLE@TRACY@IG_9_8@", 64);
			return 1;
			break;
		
		case 15:
			StringCopy(sParam1, "TIMETABLE@TRACY@IG_9_11@", 64);
			return 1;
			break;
		
		case 16:
			StringCopy(sParam1, "TIMETABLE@JIMMY@IG_1@BASE", 64);
			return 1;
			break;
		
		case 17:
			StringCopy(sParam1, "TIMETABLE@JIMMY@IG_4@BASE", 64);
			return 1;
			break;
		
		case 20:
			StringCopy(sParam1, "TIMETABLE@REUNITED@IG_2", 64);
			return 1;
			break;
		
		case 24:
			StringCopy(sParam1, "SWITCH@MICHAEL@AROUND_THE_TABLE_SELFISH", 64);
			return 1;
			break;
		
		case 19:
			StringCopy(sParam1, "SWITCH@MICHAEL@ON_SOFA", 64);
			return 1;
			break;
		
		case 25:
			StringCopy(sParam1, "TIMETABLE@JIMMY@MICS3_IG_15@", 64);
			return 1;
			break;
		
		case 26:
			StringCopy(sParam1, "TIMETABLE@TRACY@IG_3@BASE", 64);
			return 1;
			break;
		
		case 32:
			StringCopy(sParam1, "TIMETABLE@TRACY@IG_5@BASE", 64);
			return 1;
			break;
		
		case 33:
			StringCopy(sParam1, "TIMETABLE@TRACY@IG_8@BASE", 64);
			return 1;
			break;
		
		case 38:
			StringCopy(sParam1, "TIMETABLE@TRACY@IG_7@BASE", 64);
			return 1;
			break;
		
		case 34:
			StringCopy(sParam1, "TIMETABLE@TRACY@IG_2@IDLE_A", 64);
			return 1;
			break;
		
		case 35:
			StringCopy(sParam1, "TIMETABLE@TRACY@IG_15@BASE", 64);
			return 1;
			break;
		
		case 37:
			StringCopy(sParam1, "TIMETABLE@TRACY@IG_4@", 64);
			return 1;
			break;
		
		case 36:
			StringCopy(sParam1, "TIMETABLE@TRACY@IG_1@BASE", 64);
			return 1;
			break;
		
		case 28:
			StringCopy(sParam1, "TIMETABLE@TRACY@IG_14@", 64);
			return 1;
			break;
		
		case 43:
			StringCopy(sParam1, "TIMETABLE@TRACY@SLEEP@", 64);
			return 1;
			break;
		
		case 44:
			StringCopy(sParam1, "TIMETABLE@TRACY@FAMR_IG_4", 64);
			return 1;
			break;
		
		case 29:
			StringCopy(sParam1, "TIMETABLE@TRACY@FAMR_IG_4", 64);
			return 1;
			break;
		
		case 30:
			StringCopy(sParam1, "TIMETABLE@TRACY@FAMR_IG_4", 64);
			return 1;
			break;
		
		case 45:
			StringCopy(sParam1, "TIMETABLE@TRACY@FAMR_IG_5", 64);
			return 1;
			break;
		
		case 47:
			StringCopy(sParam1, "TIMETABLE@AMANDA@IG_9", 64);
			return 1;
			break;
		
		case 48:
			StringCopy(sParam1, "TIMETABLE@AMANDA@FACEMASK@BASE", 64);
			return 1;
			break;
		
		case 68:
			StringCopy(sParam1, "TIMETABLE@AMANDA@FACEMASK@BASE", 64);
			return 1;
			break;
		
		case 50:
			StringCopy(sParam1, "TIMETABLE@AMANDA@IG_4", 64);
			return 1;
			break;
		
		case 69:
			StringCopy(sParam1, "TIMETABLE@AMANDA@IG_4", 64);
			return 1;
			break;
		
		case 51:
			StringCopy(sParam1, "TIMETABLE@AMANDA@MAGDEMO_IG_2_SYNCED", 64);
			return 1;
			break;
		
		case 52:
			StringCopy(sParam1, "TIMETABLE@AMANDA@IG_7", 64);
			return 1;
			break;
		
		case 67:
			StringCopy(sParam1, "TIMETABLE@AMANDA@IG_7", 64);
			return 1;
			break;
		
		case 53:
			StringCopy(sParam1, "TIMETABLE@AMANDA@DRUNK_IN_KITCHEN@", 64);
			return 1;
			break;
		
		case 54:
			StringCopy(sParam1, "TIMETABLE@AMANDA@IG_5", 64);
			return 1;
			break;
		
		case 70:
			StringCopy(sParam1, "TIMETABLE@AMANDA@IG_5", 64);
			return 1;
			break;
		
		case 64:
			StringCopy(sParam1, "TIMETABLE@AMANDA@DRUNK@BASE", 64);
			return 1;
			break;
		
		case 55:
			StringCopy(sParam1, "TIMETABLE@AMANDA@DRUNK@BASE", 64);
			return 1;
			break;
		
		case 71:
			StringCopy(sParam1, "TIMETABLE@AMANDA@DRUNK@BASE", 64);
			return 1;
			break;
		
		case 56:
			StringCopy(sParam1, "TIMETABLE@AMANDA@IG_2_P2", 64);
			return 1;
			break;
		
		case 57:
			StringCopy(sParam1, "TIMETABLE@AMANDA@DRUNK@BASE", 64);
			return 1;
			break;
		
		case 58:
			StringCopy(sParam1, "TIMETABLE@AMANDA@IG_3", 64);
			return 1;
			break;
		
		case 59:
			StringCopy(sParam1, "TIMETABLE@AMANDA@IG_11", 64);
			return 1;
			break;
		
		case 72:
			StringCopy(sParam1, "TIMETABLE@AMANDA@IG_11", 64);
			return 1;
			break;
		
		case 60:
			StringCopy(sParam1, "TIMETABLE@AMANDA@IG_11", 64);
			return 1;
			break;
		
		case 61:
			StringCopy(sParam1, "TIMETABLE@AMANDA@IG_6", 64);
			return 1;
			break;
		
		case 63:
			StringCopy(sParam1, "TIMETABLE@AMANDA@IG_6", 64);
			return 1;
			break;
		
		case 62:
			StringCopy(sParam1, "TIMETABLE@AMANDA@IG_6", 64);
			return 1;
			break;
		
		case 65:
			StringCopy(sParam1, "SWITCH@MICHAEL@BEDROOM", 64);
			return 1;
			break;
		
		case 66:
			StringCopy(sParam1, "SWITCH@MICHAEL@GETS_READY", 64);
			return 1;
			break;
		
		case 73:
			StringCopy(sParam1, "TIMETABLE@REUNITED@IG_6", 64);
			return 1;
			break;
		
		case 74:
			StringCopy(sParam1, "TIMETABLE@REUNITED@IG_7", 64);
			return 1;
			break;
		
		case 76:
			StringCopy(sParam1, "TIMETABLE@MAID@CLEANING_SURFACE@BASE", 64);
			return 1;
		
		case 78:
			StringCopy(sParam1, "TIMETABLE@MAID@CLEANING_SURFACE@BASE", 64);
			return 1;
		
		case 85:
			StringCopy(sParam1, "TIMETABLE@MAID@CLEANING_SURFACE@BASE", 64);
			return 1;
		
		case 77:
			StringCopy(sParam1, "TIMETABLE@MAID@CLEANING_SURFACE_1@", 64);
			return 1;
		
		case 79:
			StringCopy(sParam1, "TIMETABLE@MAID@CLEANING_WINDOW@BASE", 64);
			return 1;
			break;
		
		case 86:
			StringCopy(sParam1, "TIMETABLE@MAID@CLEANING_WINDOW@BASE", 64);
			return 1;
			break;
		
		case 80:
			StringCopy(sParam1, "TIMETABLE@MAID@CLEANING_WINDOW@BASE", 64);
			return 1;
			break;
		
		case 81:
			StringCopy(sParam1, "TIMETABLE@MAID@IG_2@", 64);
			return 1;
			break;
		
		case 82:
			StringCopy(sParam1, "TIMETABLE@MAID@IG_8@", 64);
			return 1;
			break;
		
		case 83:
			StringCopy(sParam1, "TIMETABLE@MAID@IG_8@", 64);
			return 1;
			break;
		
		case 89:
			StringCopy(sParam1, "TIMETABLE@GARDENER@CLEAN_POOL@", 64);
			return 1;
			break;
		
		case 90:
			StringCopy(sParam1, "TIMETABLE@GARDENER@LAWNMOW@", 64);
			return 1;
			break;
		
		case 91:
			StringCopy(sParam1, "TIMETABLE@GARDENER@FILLING_CAN", 64);
			return 1;
			break;
		
		case 94:
			StringCopy(sParam1, "TIMETABLE@DENICE@IG_1", 64);
			return 1;
			break;
		
		case 95:
			StringCopy(sParam1, "TIMETABLE@DENICE@IG_2", 64);
			return 1;
			break;
		
		case 96:
			StringCopy(sParam1, "TIMETABLE@DENICE@IG_3", 64);
			return 1;
			break;
		
		case 98:
			StringCopy(sParam1, "TIMETABLE@DENICE@IG_3", 64);
			return 1;
			break;
		
		case 97:
			StringCopy(sParam1, "TIMETABLE@DENICE@IG_4", 64);
			break;
		
		case 100:
			StringCopy(sParam1, "TIMETABLE@RON@HAND_RADIO_IG_1", 64);
			return 1;
			break;
		
		case 101:
			StringCopy(sParam1, "TIMETABLE@RON@IG_2", 64);
			return 1;
			break;
		
		case 119:
			StringCopy(sParam1, "TIMETABLE@RON@IG_2", 64);
			return 1;
			break;
		
		case 102:
			StringCopy(sParam1, "TIMETABLE@RON@IG_3_COUCH", 64);
			return 1;
			break;
		
		case 103:
			StringCopy(sParam1, "TIMETABLE@RON@IG_3_COUCH", 64);
			return 1;
			break;
		
		case 104:
			StringCopy(sParam1, "TIMETABLE@RON@IG_4_SMOKING_METH", 64);
			return 1;
			break;
		
		case 105:
			StringCopy(sParam1, "TIMETABLE@RON@MOONSHINE_IG_5", 64);
			return 1;
			break;
		
		case 106:
			StringCopy(sParam1, "TIMETABLE@RON@IG_6", 64);
			return 1;
			break;
		
		case 107:
			StringCopy(sParam1, "TIMETABLE@MICHAEL@ON_CHAIRIDLE_A", 64);
			return 1;
			break;
		
		case 108:
			StringCopy(sParam1, "TIMETABLE@MICHAEL@ON_CLUBCHAIRBASE", 64);
			return 1;
			break;
		
		case 109:
			StringCopy(sParam1, "TIMETABLE@MICHAEL@ON_SOFABASE", 64);
			return 1;
			break;
		
		case 110:
			StringCopy(sParam1, "TIMETABLE@MICHAEL@TALK_PHONEbase", 64);
			return 1;
			break;
		
		case 111:
			StringCopy(sParam1, "TIMETABLE@MICHAEL@TALK_PHONEEXIT_A", 64);
			return 1;
			break;
		
		case 116:
			StringCopy(sParam1, "TIMETABLE@TREVOR@IG_1", 64);
			return 1;
			break;
		
		case 117:
			StringCopy(sParam1, "TIMETABLE@TREVOR@TRV_IG_2", 64);
			return 1;
			break;
		
		case 112:
			StringCopy(sParam1, "TIMETABLE@TREVOR@SMOKING_METH@BASE", 64);
			return 1;
			break;
		
		case 113:
			StringCopy(sParam1, "TIMETABLE@TREVOR@ON_THE_TOILET", 64);
			return 1;
			break;
		
		case 114:
			StringCopy(sParam1, "TIMETABLE@TREVOR@GRENADE_THROWING", 64);
			return 1;
			break;
		
		case 115:
			StringCopy(sParam1, "SWITCH@TREVOR@BED", 64);
			return 1;
			break;
		
		case 118:
			StringCopy(sParam1, "TIMETABLE@RON@IG_1", 64);
			return 1;
			break;
		
		case 120:
			StringCopy(sParam1, "TIMETABLE@RON@IG_3", 64);
			return 1;
			break;
		
		case 121:
			StringCopy(sParam1, "TIMETABLE@RON@IG_4", 64);
			return 1;
			break;
		
		case 122:
			StringCopy(sParam1, "TIMETABLE@PATRICIA@PAT_IG_1", 64);
			return 1;
			break;
		
		case 123:
			StringCopy(sParam1, "TIMETABLE@PATRICIA@PAT_IG_2@BASE", 64);
			return 1;
			break;
		
		case 124:
			StringCopy(sParam1, "TIMETABLE@PATRICIA@PAT_IG_3@", 64);
			return 1;
			break;
		
		case 126:
			StringCopy(sParam1, "TIMETABLE@FLOYD@CLEAN_KITCHEN@BASE", 64);
			return 1;
			break;
		
		case 127:
			StringCopy(sParam1, "TIMETABLE@FLOYD@CRYINGONBED@BASE", 64);
			return 1;
			break;
		
		case 130:
			StringCopy(sParam1, "TIMETABLE@FLOYD@CALLING", 64);
			return 1;
			break;
		
		case 131:
			StringCopy(sParam1, "TIMETABLE@FLOYD@ENDING_CALL", 64);
			return 1;
			break;
		
		case 132:
			StringCopy(sParam1, "TIMETABLE@FLOYD@HIDING_BEHIND_COUCH", 64);
			return 1;
			break;
		
		case 133:
			StringCopy(sParam1, "TIMETABLE@FLOYD@HIDING_BEHIND_COUCH", 64);
			return 1;
			break;
		
		case 134:
			StringCopy(sParam1, "TIMETABLE@FLOYD@HIDING_BEHIND_COUCH", 64);
			return 1;
			break;
		
		case 135:
			StringCopy(sParam1, "TIMETABLE@FLOYD@CRYINGONBED_IG_5@", 64);
			return 1;
			break;
	}
	StringCopy(sParam1, "", 64);
	return 0;
}

int func_82(var uParam0, var uParam1, char* sParam2)
{
	AUDIO::STOP_STREAM();
	if ((*uParam0 == 0 && *uParam1 == -1) && GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return 0;
	}
	if (*uParam0 != 0)
	{
		AUDIO::STOP_STREAM();
		*uParam0 = 0;
	}
	if (*uParam1 != -1)
	{
		AUDIO::STOP_SOUND(*uParam1);
		*uParam1 = -1;
	}
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK(sParam2);
		if (GAMEPLAY::ARE_STRINGS_EQUAL(sParam2, "AFT_SON_PORN"))
		{
			AUDIO::SET_AUDIO_FLAG("DisableReplayScriptStreamRecording", 0);
		}
	}
	StringCopy(sParam2, "", 64);
	return 1;
}

void func_83(var uParam0)
{
	if (!PED::IS_PED_INJURED(*uParam0))
	{
		if (AI::GET_SCRIPT_TASK_STATUS(*uParam0, -2017877118) != 0)
		{
			PED::SET_PED_KEEP_TASK(*uParam0, 1);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*uParam0, 1))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(uParam0);
		}
	}
	else
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(uParam0);
	}
}

void func_84(int iParam0, int iParam1, bool bParam2)
{
	if (!bParam2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			return;
		}
	}
	if (Global_40554[iParam0].f_24 == 0)
	{
		return;
	}
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < Global_40554[iParam0].f_24)
	{
		if (bVar1)
		{
			Global_40554[iParam0].f_25[(iVar0 - 1)] = Global_40554[iParam0].f_25[iVar0];
			Global_40554[iParam0].f_25[iVar0] = 0;
		}
		else if (iParam1 == Global_40554[iParam0].f_25[iVar0])
		{
			Global_40554[iParam0].f_25[iVar0] = 0;
			bVar1 = true;
		}
		iVar0++;
	}
	if (bVar1)
	{
		Global_40554[iParam0].f_24 = (Global_40554[iParam0].f_24 - 1);
	}
}

int func_85(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < Global_40554[iParam0].f_24)
	{
		if (iParam1 == Global_40554[iParam0].f_25[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_86(int iParam0, char* sParam1, int iParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		return 0;
	}
	if (PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP() == 64 && ENTITY::GET_ENTITY_MODEL(iParam0) != -257549932)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0) && !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iParam0, 1))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, 1, 0);
		}
		return 1;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0) && PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0), 0))
			{
				return 0;
			}
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iParam0, 1))
		{
			return 0;
		}
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == -257549932)
		{
			return 0;
		}
	}
	if (Global_98794)
	{
		return 1;
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return 1;
	}
	if (func_87() || GAMEPLAY::GET_MISSION_FLAG())
	{
		if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
		{
			return 0;
		}
		return 1;
	}
	sParam1 = sParam1;
	iParam2 = iParam2;
	return 0;
}

int func_87()
{
	if (Global_41431 == 15)
	{
		return 0;
	}
	return 1;
}

